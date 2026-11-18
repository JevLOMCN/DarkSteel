// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 198

// FPCGDataCollection @ 149737600

FPCGDataCollection * __thiscall
FPCGDataCollection::FPCGDataCollection(FPCGDataCollection *this,FPCGDataCollection *param_1)

{
  int *piVar1;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FPCGTaggedData *pFVar4;
  FScriptContainerElement *_Src;
  
  piVar1 = &(this->TaggedData).ArrayMax;
  (this->TaggedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->TaggedData).ArrayNum;
  pFVar4 = (FPCGTaggedData *)(param_1->TaggedData).AllocatorInstance.Data;
  (this->TaggedData).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
              ((this->TaggedData).AllocatorInstance.Data,pFVar4,iVar3);
  }
  pTVar2 = &this->DataCrcs;
  this->bCancelExecutionOnEmpty = param_1->bCancelExecutionOnEmpty;
  this->bCancelExecution = param_1->bCancelExecution;
  piVar1 = &(this->DataCrcs).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->DataCrcs).ArrayNum;
  _Src = (param_1->DataCrcs).AllocatorInstance.Data;
  (this->DataCrcs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->InactiveOutputPinBitmask = param_1->InactiveOutputPinBitmask;
  return this;
}

// operator= @ 14973f320

FPCGDataCollection * __thiscall
FPCGDataCollection::operator=(FPCGDataCollection *this,FPCGDataCollection *param_1)

{
  int *piVar1;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FPCGTaggedData *pFVar4;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data,
               (this->TaggedData).ArrayNum);
    iVar3 = (param_1->TaggedData).ArrayNum;
    piVar1 = &(this->TaggedData).ArrayMax;
    pFVar4 = (FPCGTaggedData *)(param_1->TaggedData).AllocatorInstance.Data;
    (this->TaggedData).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,iVar3,*piVar1,(ForAnyElementType *)this,iVar3,piVar1);
      ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
                ((this->TaggedData).AllocatorInstance.Data,pFVar4,iVar3);
    }
  }
  this->bCancelExecutionOnEmpty = param_1->bCancelExecutionOnEmpty;
  pTVar2 = &this->DataCrcs;
  this->bCancelExecution = param_1->bCancelExecution;
  if (pTVar2 != &param_1->DataCrcs) {
    iVar3 = (param_1->DataCrcs).ArrayNum;
    piVar1 = &(this->DataCrcs).ArrayMax;
    _Src = (param_1->DataCrcs).AllocatorInstance.Data;
    (this->DataCrcs).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,*piVar1,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  this->InactiveOutputPinBitmask = param_1->InactiveOutputPinBitmask;
  return this;
}

// GetSettings<UPCGAttributeCastSettings> @ 1499a9700

UPCGAttributeCastSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttributeCastSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeCastSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttributeCastSettings *)local_res8[0].Handle == (UPCGAttributeCastSettings *)0x0) {
        return (UPCGAttributeCastSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttributeCastSettings *)local_res8[0].Handle != (UPCGAttributeCastSettings *)0x0) {
      pUVar3 = UPCGAttributeCastSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttributeCastSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttributeCastSettings *)0x0;
}

// GetSettings<UPCGBlueprintSettings> @ 1499a9770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGBlueprintSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGBlueprintSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBlueprintSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGBlueprintSettings *)local_res8[0].Handle == (UPCGBlueprintSettings *)0x0) {
        return (UPCGBlueprintSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGBlueprintSettings *)local_res8[0].Handle != (UPCGBlueprintSettings *)0x0) {
      pUVar3 = Z_Construct_UClass_UPCGBlueprintSettings_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGBlueprintSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGBlueprintSettings *)0x0;
}

// GetSettings<UPCGBooleanSelectSettings> @ 1499a97e0

UPCGBooleanSelectSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGBooleanSelectSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBooleanSelectSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGBooleanSelectSettings *)local_res8[0].Handle == (UPCGBooleanSelectSettings *)0x0) {
        return (UPCGBooleanSelectSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGBooleanSelectSettings *)local_res8[0].Handle != (UPCGBooleanSelectSettings *)0x0) {
      pUVar3 = UPCGBooleanSelectSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGBooleanSelectSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGBooleanSelectSettings *)0x0;
}

// GetSettings<UPCGBranchSettings> @ 1499a9850

UPCGBranchSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGBranchSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBranchSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGBranchSettings *)local_res8[0].Handle == (UPCGBranchSettings *)0x0) {
        return (UPCGBranchSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGBranchSettings *)local_res8[0].Handle != (UPCGBranchSettings *)0x0) {
      pUVar3 = UPCGBranchSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGBranchSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGBranchSettings *)0x0;
}

// GetSettings<UPCGDataAttributesToTagsSettings> @ 1499a98c0

UPCGDataAttributesToTagsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDataAttributesToTagsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataAttributesToTagsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDataAttributesToTagsSettings *)local_res8[0].Handle ==
          (UPCGDataAttributesToTagsSettings *)0x0) {
        return (UPCGDataAttributesToTagsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDataAttributesToTagsSettings *)local_res8[0].Handle !=
        (UPCGDataAttributesToTagsSettings *)0x0) {
      pUVar3 = UPCGDataAttributesToTagsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDataAttributesToTagsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDataAttributesToTagsSettings *)0x0;
}

// GetSettings<UPCGDuplicateCrossSectionsSettings> @ 1499a9930

UPCGDuplicateCrossSectionsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDuplicateCrossSectionsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDuplicateCrossSectionsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDuplicateCrossSectionsSettings *)local_res8[0].Handle ==
          (UPCGDuplicateCrossSectionsSettings *)0x0) {
        return (UPCGDuplicateCrossSectionsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDuplicateCrossSectionsSettings *)local_res8[0].Handle !=
        (UPCGDuplicateCrossSectionsSettings *)0x0) {
      pUVar3 = UPCGDuplicateCrossSectionsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDuplicateCrossSectionsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDuplicateCrossSectionsSettings *)0x0;
}

// GetSettings<UPCGExportSelectedAttributesSettings> @ 1499a99a0

UPCGExportSelectedAttributesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGExportSelectedAttributesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGExportSelectedAttributesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGExportSelectedAttributesSettings *)local_res8[0].Handle ==
          (UPCGExportSelectedAttributesSettings *)0x0) {
        return (UPCGExportSelectedAttributesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGExportSelectedAttributesSettings *)local_res8[0].Handle !=
        (UPCGExportSelectedAttributesSettings *)0x0) {
      pUVar3 = UPCGExportSelectedAttributesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGExportSelectedAttributesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGExportSelectedAttributesSettings *)0x0;
}

// GetSettings<UPCGExtractAttributeSettings> @ 1499a9a10

UPCGExtractAttributeSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGExtractAttributeSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGExtractAttributeSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGExtractAttributeSettings *)local_res8[0].Handle ==
          (UPCGExtractAttributeSettings *)0x0) {
        return (UPCGExtractAttributeSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGExtractAttributeSettings *)local_res8[0].Handle != (UPCGExtractAttributeSettings *)0x0)
    {
      pUVar3 = UPCGExtractAttributeSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGExtractAttributeSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGExtractAttributeSettings *)0x0;
}

// GetSettings<UPCGGetAssetListSettings> @ 1499a9a80

UPCGGetAssetListSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetAssetListSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetAssetListSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetAssetListSettings *)local_res8[0].Handle == (UPCGGetAssetListSettings *)0x0) {
        return (UPCGGetAssetListSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetAssetListSettings *)local_res8[0].Handle != (UPCGGetAssetListSettings *)0x0) {
      pUVar3 = Z_Construct_UClass_UPCGGetAssetListSettings_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetAssetListSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetAssetListSettings *)0x0;
}

// GetSettings<UPCGLoadDataAssetSettings> @ 1499a9af0

UPCGLoadDataAssetSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGLoadDataAssetSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGLoadDataAssetSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGLoadDataAssetSettings *)local_res8[0].Handle == (UPCGLoadDataAssetSettings *)0x0) {
        return (UPCGLoadDataAssetSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGLoadDataAssetSettings *)local_res8[0].Handle != (UPCGLoadDataAssetSettings *)0x0) {
      pUVar3 = UPCGLoadDataAssetSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGLoadDataAssetSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGLoadDataAssetSettings *)0x0;
}

// GetSettings<UPCGLoadDataTableSettings> @ 1499a9b60

UPCGLoadDataTableSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGLoadDataTableSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGLoadDataTableSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGLoadDataTableSettings *)local_res8[0].Handle == (UPCGLoadDataTableSettings *)0x0) {
        return (UPCGLoadDataTableSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGLoadDataTableSettings *)local_res8[0].Handle != (UPCGLoadDataTableSettings *)0x0) {
      pUVar3 = UPCGLoadDataTableSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGLoadDataTableSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGLoadDataTableSettings *)0x0;
}

// GetSettings<UPCGMetadataSettingsBase> @ 1499a9bd0

UPCGMetadataSettingsBase * __thiscall
FPCGDataCollection::GetSettings<UPCGMetadataSettingsBase>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMetadataSettingsBase>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGMetadataSettingsBase *)local_res8[0].Handle == (UPCGMetadataSettingsBase *)0x0) {
        return (UPCGMetadataSettingsBase *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGMetadataSettingsBase *)local_res8[0].Handle != (UPCGMetadataSettingsBase *)0x0) {
      pUVar3 = UPCGMetadataSettingsBase::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGMetadataSettingsBase *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGMetadataSettingsBase *)0x0;
}

// GetSettings<UPCGMultiSelectSettings> @ 1499a9c40

UPCGMultiSelectSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGMultiSelectSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMultiSelectSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGMultiSelectSettings *)local_res8[0].Handle == (UPCGMultiSelectSettings *)0x0) {
        return (UPCGMultiSelectSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGMultiSelectSettings *)local_res8[0].Handle != (UPCGMultiSelectSettings *)0x0) {
      pUVar3 = UPCGMultiSelectSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGMultiSelectSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGMultiSelectSettings *)0x0;
}

// GetSettings<UPCGPrintGrammarSettings> @ 1499a9cb0

UPCGPrintGrammarSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPrintGrammarSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPrintGrammarSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPrintGrammarSettings *)local_res8[0].Handle == (UPCGPrintGrammarSettings *)0x0) {
        return (UPCGPrintGrammarSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPrintGrammarSettings *)local_res8[0].Handle != (UPCGPrintGrammarSettings *)0x0) {
      pUVar3 = UPCGPrintGrammarSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPrintGrammarSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPrintGrammarSettings *)0x0;
}

// GetSettings<UPCGQualityBranchSettings> @ 1499a9d20

UPCGQualityBranchSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGQualityBranchSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGQualityBranchSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGQualityBranchSettings *)local_res8[0].Handle == (UPCGQualityBranchSettings *)0x0) {
        return (UPCGQualityBranchSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGQualityBranchSettings *)local_res8[0].Handle != (UPCGQualityBranchSettings *)0x0) {
      pUVar3 = UPCGQualityBranchSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGQualityBranchSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGQualityBranchSettings *)0x0;
}

// GetSettings<UPCGQualitySelectSettings> @ 1499a9d90

UPCGQualitySelectSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGQualitySelectSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGQualitySelectSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGQualitySelectSettings *)local_res8[0].Handle == (UPCGQualitySelectSettings *)0x0) {
        return (UPCGQualitySelectSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGQualitySelectSettings *)local_res8[0].Handle != (UPCGQualitySelectSettings *)0x0) {
      pUVar3 = UPCGQualitySelectSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGQualitySelectSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGQualitySelectSettings *)0x0;
}

// GetSettings<UPCGSaveDataAssetSettings> @ 1499a9e00

UPCGSaveDataAssetSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSaveDataAssetSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSaveDataAssetSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSaveDataAssetSettings *)local_res8[0].Handle == (UPCGSaveDataAssetSettings *)0x0) {
        return (UPCGSaveDataAssetSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSaveDataAssetSettings *)local_res8[0].Handle != (UPCGSaveDataAssetSettings *)0x0) {
      pUVar3 = UPCGSaveDataAssetSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSaveDataAssetSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSaveDataAssetSettings *)0x0;
}

// GetSettings<UPCGSelectGrammarSettings> @ 1499a9e70

UPCGSelectGrammarSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSelectGrammarSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSelectGrammarSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSelectGrammarSettings *)local_res8[0].Handle == (UPCGSelectGrammarSettings *)0x0) {
        return (UPCGSelectGrammarSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSelectGrammarSettings *)local_res8[0].Handle != (UPCGSelectGrammarSettings *)0x0) {
      pUVar3 = UPCGSelectGrammarSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSelectGrammarSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSelectGrammarSettings *)0x0;
}

// GetSettings<UPCGSplineToSegmentSettings> @ 1499a9ee0

UPCGSplineToSegmentSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSplineToSegmentSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineToSegmentSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSplineToSegmentSettings *)local_res8[0].Handle == (UPCGSplineToSegmentSettings *)0x0)
      {
        return (UPCGSplineToSegmentSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSplineToSegmentSettings *)local_res8[0].Handle != (UPCGSplineToSegmentSettings *)0x0) {
      pUVar3 = UPCGSplineToSegmentSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSplineToSegmentSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSplineToSegmentSettings *)0x0;
}

// GetSettings<UPCGSubdivideSegmentSettings> @ 1499a9f50

UPCGSubdivideSegmentSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSubdivideSegmentSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSubdivideSegmentSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSubdivideSegmentSettings *)local_res8[0].Handle ==
          (UPCGSubdivideSegmentSettings *)0x0) {
        return (UPCGSubdivideSegmentSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSubdivideSegmentSettings *)local_res8[0].Handle != (UPCGSubdivideSegmentSettings *)0x0)
    {
      pUVar3 = UPCGSubdivideSegmentSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSubdivideSegmentSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSubdivideSegmentSettings *)0x0;
}

// GetSettings<UPCGSubdivideSplineSettings> @ 1499a9fc0

UPCGSubdivideSplineSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSubdivideSplineSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSubdivideSplineSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSubdivideSplineSettings *)local_res8[0].Handle == (UPCGSubdivideSplineSettings *)0x0)
      {
        return (UPCGSubdivideSplineSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSubdivideSplineSettings *)local_res8[0].Handle != (UPCGSubdivideSplineSettings *)0x0) {
      pUVar3 = UPCGSubdivideSplineSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSubdivideSplineSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSubdivideSplineSettings *)0x0;
}

// GetSettings<UPCGSwitchSettings> @ 1499aa030

UPCGSwitchSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSwitchSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSwitchSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSwitchSettings *)local_res8[0].Handle == (UPCGSwitchSettings *)0x0) {
        return (UPCGSwitchSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSwitchSettings *)local_res8[0].Handle != (UPCGSwitchSettings *)0x0) {
      pUVar3 = UPCGSwitchSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSwitchSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSwitchSettings *)0x0;
}

// GetSettings<UPCGTagsToDataAttributesSettings> @ 1499aa0a0

UPCGTagsToDataAttributesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGTagsToDataAttributesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTagsToDataAttributesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGTagsToDataAttributesSettings *)local_res8[0].Handle ==
          (UPCGTagsToDataAttributesSettings *)0x0) {
        return (UPCGTagsToDataAttributesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGTagsToDataAttributesSettings *)local_res8[0].Handle !=
        (UPCGTagsToDataAttributesSettings *)0x0) {
      pUVar3 = UPCGTagsToDataAttributesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGTagsToDataAttributesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGTagsToDataAttributesSettings *)0x0;
}

// GetSettings<UPCGWaitLandscapeReadySettings> @ 1499aa110

UPCGWaitLandscapeReadySettings * __thiscall
FPCGDataCollection::GetSettings<UPCGWaitLandscapeReadySettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWaitLandscapeReadySettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGWaitLandscapeReadySettings *)local_res8[0].Handle ==
          (UPCGWaitLandscapeReadySettings *)0x0) {
        return (UPCGWaitLandscapeReadySettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGWaitLandscapeReadySettings *)local_res8[0].Handle !=
        (UPCGWaitLandscapeReadySettings *)0x0) {
      pUVar3 = UPCGWaitLandscapeReadySettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGWaitLandscapeReadySettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGWaitLandscapeReadySettings *)0x0;
}

// GetSettings<UPCGWaitSettings> @ 1499aa180

UPCGWaitSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGWaitSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWaitSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGWaitSettings *)local_res8[0].Handle == (UPCGWaitSettings *)0x0) {
        return (UPCGWaitSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGWaitSettings *)local_res8[0].Handle != (UPCGWaitSettings *)0x0) {
      pUVar3 = UPCGWaitSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGWaitSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGWaitSettings *)0x0;
}

// operator= @ 1499c74f0

FPCGDataCollection * __thiscall
FPCGDataCollection::operator=(FPCGDataCollection *this,FPCGDataCollection *param_1)

{
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  
  if (this != param_1) {
    DestructItems<FPCGTaggedData,int>
              ((FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data,
               (this->TaggedData).ArrayNum);
    pFVar3 = (this->TaggedData).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (this->TaggedData).AllocatorInstance.Data = (param_1->TaggedData).AllocatorInstance.Data;
    (param_1->TaggedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->TaggedData).ArrayNum = (param_1->TaggedData).ArrayNum;
    (this->TaggedData).ArrayMax = (param_1->TaggedData).ArrayMax;
    (param_1->TaggedData).ArrayNum = 0;
    (param_1->TaggedData).ArrayMax = 0;
  }
  pTVar1 = &param_1->DataCrcs;
  this->bCancelExecutionOnEmpty = param_1->bCancelExecutionOnEmpty;
  pTVar2 = &this->DataCrcs;
  this->bCancelExecution = param_1->bCancelExecution;
  if (pTVar2 != pTVar1) {
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->DataCrcs).ArrayNum = (param_1->DataCrcs).ArrayNum;
    (this->DataCrcs).ArrayMax = (param_1->DataCrcs).ArrayMax;
    (param_1->DataCrcs).ArrayNum = 0;
    (param_1->DataCrcs).ArrayMax = 0;
  }
  this->InactiveOutputPinBitmask = param_1->InactiveOutputPinBitmask;
  return this;
}

// GetSettings<UPCGAddComponentSettings> @ 149a9ef00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGAddComponentSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAddComponentSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAddComponentSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAddComponentSettings *)local_res8[0].Handle == (UPCGAddComponentSettings *)0x0) {
        return (UPCGAddComponentSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAddComponentSettings *)local_res8[0].Handle != (UPCGAddComponentSettings *)0x0) {
      pUVar3 = UPCGAddComponentSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAddComponentSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAddComponentSettings *)0x0;
}

// GetSettings<UPCGAddTagSettings> @ 149a9ef70

UPCGAddTagSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAddTagSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAddTagSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAddTagSettings *)local_res8[0].Handle == (UPCGAddTagSettings *)0x0) {
        return (UPCGAddTagSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAddTagSettings *)local_res8[0].Handle != (UPCGAddTagSettings *)0x0) {
      pUVar3 = UPCGAddTagSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAddTagSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAddTagSettings *)0x0;
}

// GetSettings<UPCGApplyHierarchySettings> @ 149a9efe0

UPCGApplyHierarchySettings * __thiscall
FPCGDataCollection::GetSettings<UPCGApplyHierarchySettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGApplyHierarchySettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGApplyHierarchySettings *)local_res8[0].Handle == (UPCGApplyHierarchySettings *)0x0) {
        return (UPCGApplyHierarchySettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGApplyHierarchySettings *)local_res8[0].Handle != (UPCGApplyHierarchySettings *)0x0) {
      pUVar3 = UPCGApplyHierarchySettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGApplyHierarchySettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGApplyHierarchySettings *)0x0;
}

// GetSettings<UPCGApplyOnActorSettings> @ 149a9f050

UPCGApplyOnActorSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGApplyOnActorSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGApplyOnActorSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGApplyOnActorSettings *)local_res8[0].Handle == (UPCGApplyOnActorSettings *)0x0) {
        return (UPCGApplyOnActorSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGApplyOnActorSettings *)local_res8[0].Handle != (UPCGApplyOnActorSettings *)0x0) {
      pUVar3 = UPCGApplyOnActorSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGApplyOnActorSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGApplyOnActorSettings *)0x0;
}

// GetSettings<UPCGAttractSettings> @ 149a9f0c0

UPCGAttractSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttractSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttractSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttractSettings *)local_res8[0].Handle == (UPCGAttractSettings *)0x0) {
        return (UPCGAttractSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttractSettings *)local_res8[0].Handle != (UPCGAttractSettings *)0x0) {
      pUVar3 = UPCGAttractSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttractSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttractSettings *)0x0;
}

// GetSettings<UPCGAttributeFilteringRangeSettings> @ 149a9f130

UPCGAttributeFilteringRangeSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttributeFilteringRangeSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeFilteringRangeSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttributeFilteringRangeSettings *)local_res8[0].Handle ==
          (UPCGAttributeFilteringRangeSettings *)0x0) {
        return (UPCGAttributeFilteringRangeSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttributeFilteringRangeSettings *)local_res8[0].Handle !=
        (UPCGAttributeFilteringRangeSettings *)0x0) {
      pUVar3 = UPCGAttributeFilteringRangeSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttributeFilteringRangeSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttributeFilteringRangeSettings *)0x0;
}

// GetSettings<UPCGAttributeFilteringSettings> @ 149a9f1a0

UPCGAttributeFilteringSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttributeFilteringSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeFilteringSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttributeFilteringSettings *)local_res8[0].Handle ==
          (UPCGAttributeFilteringSettings *)0x0) {
        return (UPCGAttributeFilteringSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttributeFilteringSettings *)local_res8[0].Handle !=
        (UPCGAttributeFilteringSettings *)0x0) {
      pUVar3 = UPCGAttributeFilteringSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttributeFilteringSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttributeFilteringSettings *)0x0;
}

// GetSettings<UPCGAttributeGetFromIndexSettings> @ 149a9f210

UPCGAttributeGetFromIndexSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttributeGetFromIndexSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeGetFromIndexSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttributeGetFromIndexSettings *)local_res8[0].Handle ==
          (UPCGAttributeGetFromIndexSettings *)0x0) {
        return (UPCGAttributeGetFromIndexSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttributeGetFromIndexSettings *)local_res8[0].Handle !=
        (UPCGAttributeGetFromIndexSettings *)0x0) {
      pUVar3 = UPCGAttributeGetFromIndexSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttributeGetFromIndexSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttributeGetFromIndexSettings *)0x0;
}

// GetSettings<UPCGAttributeGetFromPointIndexSettings> @ 149a9f280

UPCGAttributeGetFromPointIndexSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttributeGetFromPointIndexSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeGetFromPointIndexSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttributeGetFromPointIndexSettings *)local_res8[0].Handle ==
          (UPCGAttributeGetFromPointIndexSettings *)0x0) {
        return (UPCGAttributeGetFromPointIndexSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttributeGetFromPointIndexSettings *)local_res8[0].Handle !=
        (UPCGAttributeGetFromPointIndexSettings *)0x0) {
      pUVar3 = UPCGAttributeGetFromPointIndexSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttributeGetFromPointIndexSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttributeGetFromPointIndexSettings *)0x0;
}

// GetSettings<UPCGAttributeNoiseSettings> @ 149a9f2f0

UPCGAttributeNoiseSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttributeNoiseSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeNoiseSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttributeNoiseSettings *)local_res8[0].Handle == (UPCGAttributeNoiseSettings *)0x0) {
        return (UPCGAttributeNoiseSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttributeNoiseSettings *)local_res8[0].Handle != (UPCGAttributeNoiseSettings *)0x0) {
      pUVar3 = UPCGAttributeNoiseSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttributeNoiseSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttributeNoiseSettings *)0x0;
}

// GetSettings<UPCGAttributeReduceSettings> @ 149a9f360

UPCGAttributeReduceSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttributeReduceSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeReduceSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttributeReduceSettings *)local_res8[0].Handle == (UPCGAttributeReduceSettings *)0x0)
      {
        return (UPCGAttributeReduceSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttributeReduceSettings *)local_res8[0].Handle != (UPCGAttributeReduceSettings *)0x0) {
      pUVar3 = UPCGAttributeReduceSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttributeReduceSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttributeReduceSettings *)0x0;
}

// GetSettings<UPCGAttributeRemoveDuplicatesSettings> @ 149a9f3d0

UPCGAttributeRemoveDuplicatesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttributeRemoveDuplicatesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeRemoveDuplicatesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttributeRemoveDuplicatesSettings *)local_res8[0].Handle ==
          (UPCGAttributeRemoveDuplicatesSettings *)0x0) {
        return (UPCGAttributeRemoveDuplicatesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttributeRemoveDuplicatesSettings *)local_res8[0].Handle !=
        (UPCGAttributeRemoveDuplicatesSettings *)0x0) {
      pUVar3 = UPCGAttributeRemoveDuplicatesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttributeRemoveDuplicatesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttributeRemoveDuplicatesSettings *)0x0;
}

// GetSettings<UPCGAttributeSelectSettings> @ 149a9f440

UPCGAttributeSelectSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAttributeSelectSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAttributeSelectSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAttributeSelectSettings *)local_res8[0].Handle == (UPCGAttributeSelectSettings *)0x0)
      {
        return (UPCGAttributeSelectSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAttributeSelectSettings *)local_res8[0].Handle != (UPCGAttributeSelectSettings *)0x0) {
      pUVar3 = UPCGAttributeSelectSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAttributeSelectSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAttributeSelectSettings *)0x0;
}

// GetSettings<UPCGBlurSettings> @ 149a9f4b0

UPCGBlurSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGBlurSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBlurSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGBlurSettings *)local_res8[0].Handle == (UPCGBlurSettings *)0x0) {
        return (UPCGBlurSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGBlurSettings *)local_res8[0].Handle != (UPCGBlurSettings *)0x0) {
      pUVar3 = UPCGBlurSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGBlurSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGBlurSettings *)0x0;
}

// GetSettings<UPCGBoundsFromMeshSettings> @ 149a9f520

UPCGBoundsFromMeshSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGBoundsFromMeshSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBoundsFromMeshSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGBoundsFromMeshSettings *)local_res8[0].Handle == (UPCGBoundsFromMeshSettings *)0x0) {
        return (UPCGBoundsFromMeshSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGBoundsFromMeshSettings *)local_res8[0].Handle != (UPCGBoundsFromMeshSettings *)0x0) {
      pUVar3 = UPCGBoundsFromMeshSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGBoundsFromMeshSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGBoundsFromMeshSettings *)0x0;
}

// GetSettings<UPCGBoundsModifierSettings> @ 149a9f590

UPCGBoundsModifierSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGBoundsModifierSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBoundsModifierSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGBoundsModifierSettings *)local_res8[0].Handle == (UPCGBoundsModifierSettings *)0x0) {
        return (UPCGBoundsModifierSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGBoundsModifierSettings *)local_res8[0].Handle != (UPCGBoundsModifierSettings *)0x0) {
      pUVar3 = UPCGBoundsModifierSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGBoundsModifierSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGBoundsModifierSettings *)0x0;
}

// GetSettings<UPCGCleanSplineSettings> @ 149a9f600

UPCGCleanSplineSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCleanSplineSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCleanSplineSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCleanSplineSettings *)local_res8[0].Handle == (UPCGCleanSplineSettings *)0x0) {
        return (UPCGCleanSplineSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCleanSplineSettings *)local_res8[0].Handle != (UPCGCleanSplineSettings *)0x0) {
      pUVar3 = UPCGCleanSplineSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCleanSplineSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCleanSplineSettings *)0x0;
}

// GetSettings<UPCGClusterSettings> @ 149a9f670

UPCGClusterSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGClusterSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGClusterSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGClusterSettings *)local_res8[0].Handle == (UPCGClusterSettings *)0x0) {
        return (UPCGClusterSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGClusterSettings *)local_res8[0].Handle != (UPCGClusterSettings *)0x0) {
      pUVar3 = UPCGClusterSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGClusterSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGClusterSettings *)0x0;
}

// GetSettings<UPCGCollapsePointsSettings> @ 149a9f6e0

UPCGCollapsePointsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCollapsePointsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCollapsePointsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCollapsePointsSettings *)local_res8[0].Handle == (UPCGCollapsePointsSettings *)0x0) {
        return (UPCGCollapsePointsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCollapsePointsSettings *)local_res8[0].Handle != (UPCGCollapsePointsSettings *)0x0) {
      pUVar3 = UPCGCollapsePointsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCollapsePointsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCollapsePointsSettings *)0x0;
}

// GetSettings<UPCGCollapseSettings> @ 149a9f750

UPCGCollapseSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCollapseSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCollapseSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCollapseSettings *)local_res8[0].Handle == (UPCGCollapseSettings *)0x0) {
        return (UPCGCollapseSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCollapseSettings *)local_res8[0].Handle != (UPCGCollapseSettings *)0x0) {
      pUVar3 = UPCGCollapseSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCollapseSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCollapseSettings *)0x0;
}

// GetSettings<UPCGCombinePointsSettings> @ 149a9f7c0

UPCGCombinePointsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCombinePointsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCombinePointsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCombinePointsSettings *)local_res8[0].Handle == (UPCGCombinePointsSettings *)0x0) {
        return (UPCGCombinePointsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCombinePointsSettings *)local_res8[0].Handle != (UPCGCombinePointsSettings *)0x0) {
      pUVar3 = UPCGCombinePointsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCombinePointsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCombinePointsSettings *)0x0;
}

// GetSettings<UPCGConvertToAttributeSetSettings> @ 149a9f830

UPCGConvertToAttributeSetSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGConvertToAttributeSetSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGConvertToAttributeSetSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGConvertToAttributeSetSettings *)local_res8[0].Handle ==
          (UPCGConvertToAttributeSetSettings *)0x0) {
        return (UPCGConvertToAttributeSetSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGConvertToAttributeSetSettings *)local_res8[0].Handle !=
        (UPCGConvertToAttributeSetSettings *)0x0) {
      pUVar3 = UPCGConvertToAttributeSetSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGConvertToAttributeSetSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGConvertToAttributeSetSettings *)0x0;
}

// GetSettings<UPCGConvertToPointDataSettings> @ 149a9f8a0

UPCGConvertToPointDataSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGConvertToPointDataSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGConvertToPointDataSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGConvertToPointDataSettings *)local_res8[0].Handle ==
          (UPCGConvertToPointDataSettings *)0x0) {
        return (UPCGConvertToPointDataSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGConvertToPointDataSettings *)local_res8[0].Handle !=
        (UPCGConvertToPointDataSettings *)0x0) {
      pUVar3 = UPCGConvertToPointDataSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGConvertToPointDataSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGConvertToPointDataSettings *)0x0;
}

// GetSettings<UPCGMetadataPartitionSettings> @ 149a9f910

UPCGMetadataPartitionSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGMetadataPartitionSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMetadataPartitionSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGMetadataPartitionSettings *)local_res8[0].Handle ==
          (UPCGMetadataPartitionSettings *)0x0) {
        return (UPCGMetadataPartitionSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGMetadataPartitionSettings *)local_res8[0].Handle !=
        (UPCGMetadataPartitionSettings *)0x0) {
      pUVar3 = UPCGMetadataPartitionSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGMetadataPartitionSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGMetadataPartitionSettings *)0x0;
}

// GetSettings<UPCGMetadataRenameSettings> @ 149a9f980

UPCGMetadataRenameSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGMetadataRenameSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMetadataRenameSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGMetadataRenameSettings *)local_res8[0].Handle == (UPCGMetadataRenameSettings *)0x0) {
        return (UPCGMetadataRenameSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGMetadataRenameSettings *)local_res8[0].Handle != (UPCGMetadataRenameSettings *)0x0) {
      pUVar3 = UPCGMetadataRenameSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGMetadataRenameSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGMetadataRenameSettings *)0x0;
}

// GetSettings<UPCGAddAttributeSettings> @ 149b4db40

UPCGAddAttributeSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAddAttributeSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAddAttributeSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAddAttributeSettings *)local_res8[0].Handle == (UPCGAddAttributeSettings *)0x0) {
        return (UPCGAddAttributeSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAddAttributeSettings *)local_res8[0].Handle != (UPCGAddAttributeSettings *)0x0) {
      pUVar3 = UPCGAddAttributeSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAddAttributeSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAddAttributeSettings *)0x0;
}

// GetSettings<UPCGConvexHull2DSettings> @ 149b4dbb0

UPCGConvexHull2DSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGConvexHull2DSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGConvexHull2DSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGConvexHull2DSettings *)local_res8[0].Handle == (UPCGConvexHull2DSettings *)0x0) {
        return (UPCGConvexHull2DSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGConvexHull2DSettings *)local_res8[0].Handle != (UPCGConvexHull2DSettings *)0x0) {
      pUVar3 = UPCGConvexHull2DSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGConvexHull2DSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGConvexHull2DSettings *)0x0;
}

// GetSettings<UPCGCopyAttributesSettings> @ 149b4dc20

UPCGCopyAttributesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCopyAttributesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCopyAttributesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCopyAttributesSettings *)local_res8[0].Handle == (UPCGCopyAttributesSettings *)0x0) {
        return (UPCGCopyAttributesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCopyAttributesSettings *)local_res8[0].Handle != (UPCGCopyAttributesSettings *)0x0) {
      pUVar3 = UPCGCopyAttributesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCopyAttributesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCopyAttributesSettings *)0x0;
}

// GetSettings<UPCGCopyPointsSettings> @ 149b4dc90

UPCGCopyPointsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCopyPointsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCopyPointsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCopyPointsSettings *)local_res8[0].Handle == (UPCGCopyPointsSettings *)0x0) {
        return (UPCGCopyPointsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCopyPointsSettings *)local_res8[0].Handle != (UPCGCopyPointsSettings *)0x0) {
      pUVar3 = UPCGCopyPointsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCopyPointsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCopyPointsSettings *)0x0;
}

// GetSettings<UPCGCreateAttributeSetSettings> @ 149b4dd00

UPCGCreateAttributeSetSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreateAttributeSetSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateAttributeSetSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreateAttributeSetSettings *)local_res8[0].Handle ==
          (UPCGCreateAttributeSetSettings *)0x0) {
        return (UPCGCreateAttributeSetSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreateAttributeSetSettings *)local_res8[0].Handle !=
        (UPCGCreateAttributeSetSettings *)0x0) {
      pUVar3 = UPCGCreateAttributeSetSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreateAttributeSetSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreateAttributeSetSettings *)0x0;
}

// GetSettings<UPCGCreateCollisionDataSettings> @ 149b4dd70

UPCGCreateCollisionDataSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreateCollisionDataSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateCollisionDataSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreateCollisionDataSettings *)local_res8[0].Handle ==
          (UPCGCreateCollisionDataSettings *)0x0) {
        return (UPCGCreateCollisionDataSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreateCollisionDataSettings *)local_res8[0].Handle !=
        (UPCGCreateCollisionDataSettings *)0x0) {
      pUVar3 = UPCGCreateCollisionDataSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreateCollisionDataSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreateCollisionDataSettings *)0x0;
}

// GetSettings<UPCGCreatePointsGridSettings> @ 149b4dde0

UPCGCreatePointsGridSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreatePointsGridSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePointsGridSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreatePointsGridSettings *)local_res8[0].Handle ==
          (UPCGCreatePointsGridSettings *)0x0) {
        return (UPCGCreatePointsGridSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreatePointsGridSettings *)local_res8[0].Handle != (UPCGCreatePointsGridSettings *)0x0)
    {
      pUVar3 = UPCGCreatePointsGridSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreatePointsGridSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreatePointsGridSettings *)0x0;
}

// GetSettings<UPCGCreatePointsSettings> @ 149b4de50

UPCGCreatePointsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreatePointsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePointsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreatePointsSettings *)local_res8[0].Handle == (UPCGCreatePointsSettings *)0x0) {
        return (UPCGCreatePointsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreatePointsSettings *)local_res8[0].Handle != (UPCGCreatePointsSettings *)0x0) {
      pUVar3 = UPCGCreatePointsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreatePointsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreatePointsSettings *)0x0;
}

// GetSettings<UPCGCreatePointsSphereSettings> @ 149b4dec0

UPCGCreatePointsSphereSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreatePointsSphereSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePointsSphereSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreatePointsSphereSettings *)local_res8[0].Handle ==
          (UPCGCreatePointsSphereSettings *)0x0) {
        return (UPCGCreatePointsSphereSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreatePointsSphereSettings *)local_res8[0].Handle !=
        (UPCGCreatePointsSphereSettings *)0x0) {
      pUVar3 = UPCGCreatePointsSphereSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreatePointsSphereSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreatePointsSphereSettings *)0x0;
}

// GetSettings<UPCGCreateSplineSettings> @ 149b4df30

UPCGCreateSplineSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreateSplineSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateSplineSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreateSplineSettings *)local_res8[0].Handle == (UPCGCreateSplineSettings *)0x0) {
        return (UPCGCreateSplineSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreateSplineSettings *)local_res8[0].Handle != (UPCGCreateSplineSettings *)0x0) {
      pUVar3 = UPCGCreateSplineSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreateSplineSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreateSplineSettings *)0x0;
}

// GetSettings<UPCGCreateSurfaceFromSplineSettings> @ 149b4dfa0

UPCGCreateSurfaceFromSplineSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreateSurfaceFromSplineSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateSurfaceFromSplineSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreateSurfaceFromSplineSettings *)local_res8[0].Handle ==
          (UPCGCreateSurfaceFromSplineSettings *)0x0) {
        return (UPCGCreateSurfaceFromSplineSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreateSurfaceFromSplineSettings *)local_res8[0].Handle !=
        (UPCGCreateSurfaceFromSplineSettings *)0x0) {
      pUVar3 = UPCGCreateSurfaceFromSplineSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreateSurfaceFromSplineSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreateSurfaceFromSplineSettings *)0x0;
}

// GetSettings<UPCGCreateTargetActor> @ 149b4e010

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGCreateTargetActor * __thiscall
FPCGDataCollection::GetSettings<UPCGCreateTargetActor>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateTargetActor>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreateTargetActor *)local_res8[0].Handle == (UPCGCreateTargetActor *)0x0) {
        return (UPCGCreateTargetActor *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreateTargetActor *)local_res8[0].Handle != (UPCGCreateTargetActor *)0x0) {
      pUVar3 = UPCGCreateTargetActor::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreateTargetActor *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreateTargetActor *)0x0;
}

// GetSettings<UPCGCullPointsOutsideActorBoundsSettings> @ 149b4e080

UPCGCullPointsOutsideActorBoundsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCullPointsOutsideActorBoundsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCullPointsOutsideActorBoundsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCullPointsOutsideActorBoundsSettings *)local_res8[0].Handle ==
          (UPCGCullPointsOutsideActorBoundsSettings *)0x0) {
        return (UPCGCullPointsOutsideActorBoundsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCullPointsOutsideActorBoundsSettings *)local_res8[0].Handle !=
        (UPCGCullPointsOutsideActorBoundsSettings *)0x0) {
      pUVar3 = UPCGCullPointsOutsideActorBoundsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCullPointsOutsideActorBoundsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCullPointsOutsideActorBoundsSettings *)0x0;
}

// GetSettings<UPCGDataFromActorSettings> @ 149b4e0f0

UPCGDataFromActorSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDataFromActorSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataFromActorSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDataFromActorSettings *)local_res8[0].Handle == (UPCGDataFromActorSettings *)0x0) {
        return (UPCGDataFromActorSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDataFromActorSettings *)local_res8[0].Handle != (UPCGDataFromActorSettings *)0x0) {
      pUVar3 = UPCGDataFromActorSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDataFromActorSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDataFromActorSettings *)0x0;
}

// GetSettings<UPCGDataFromTool> @ 149b4e160

UPCGDataFromTool * __thiscall
FPCGDataCollection::GetSettings<UPCGDataFromTool>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataFromTool>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDataFromTool *)local_res8[0].Handle == (UPCGDataFromTool *)0x0) {
        return (UPCGDataFromTool *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDataFromTool *)local_res8[0].Handle != (UPCGDataFromTool *)0x0) {
      pUVar3 = UPCGDataFromTool::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDataFromTool *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDataFromTool *)0x0;
}

// GetSettings<UPCGDataNumSettings> @ 149b4e1d0

UPCGDataNumSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDataNumSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataNumSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDataNumSettings *)local_res8[0].Handle == (UPCGDataNumSettings *)0x0) {
        return (UPCGDataNumSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDataNumSettings *)local_res8[0].Handle != (UPCGDataNumSettings *)0x0) {
      pUVar3 = UPCGDataNumSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDataNumSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDataNumSettings *)0x0;
}

// GetSettings<UPCGDataTableRowToParamDataSettings> @ 149b4e240

UPCGDataTableRowToParamDataSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDataTableRowToParamDataSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDataTableRowToParamDataSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDataTableRowToParamDataSettings *)local_res8[0].Handle ==
          (UPCGDataTableRowToParamDataSettings *)0x0) {
        return (UPCGDataTableRowToParamDataSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDataTableRowToParamDataSettings *)local_res8[0].Handle !=
        (UPCGDataTableRowToParamDataSettings *)0x0) {
      pUVar3 = UPCGDataTableRowToParamDataSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDataTableRowToParamDataSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDataTableRowToParamDataSettings *)0x0;
}

// GetSettings<UPCGDeleteAttributesSettings> @ 149b4e2b0

UPCGDeleteAttributesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDeleteAttributesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDeleteAttributesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDeleteAttributesSettings *)local_res8[0].Handle ==
          (UPCGDeleteAttributesSettings *)0x0) {
        return (UPCGDeleteAttributesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDeleteAttributesSettings *)local_res8[0].Handle != (UPCGDeleteAttributesSettings *)0x0)
    {
      pUVar3 = UPCGDeleteAttributesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDeleteAttributesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDeleteAttributesSettings *)0x0;
}

// GetSettings<UPCGDeleteTagsSettings> @ 149b4e320

UPCGDeleteTagsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDeleteTagsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDeleteTagsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDeleteTagsSettings *)local_res8[0].Handle == (UPCGDeleteTagsSettings *)0x0) {
        return (UPCGDeleteTagsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDeleteTagsSettings *)local_res8[0].Handle != (UPCGDeleteTagsSettings *)0x0) {
      pUVar3 = UPCGDeleteTagsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDeleteTagsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDeleteTagsSettings *)0x0;
}

// GetSettings<UPCGDensityFilterSettings> @ 149b4e390

UPCGDensityFilterSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDensityFilterSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDensityFilterSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDensityFilterSettings *)local_res8[0].Handle == (UPCGDensityFilterSettings *)0x0) {
        return (UPCGDensityFilterSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDensityFilterSettings *)local_res8[0].Handle != (UPCGDensityFilterSettings *)0x0) {
      pUVar3 = UPCGDensityFilterSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDensityFilterSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDensityFilterSettings *)0x0;
}

// GetSettings<UPCGDensityRemapSettings> @ 149b4e400

UPCGDensityRemapSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDensityRemapSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDensityRemapSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDensityRemapSettings *)local_res8[0].Handle == (UPCGDensityRemapSettings *)0x0) {
        return (UPCGDensityRemapSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDensityRemapSettings *)local_res8[0].Handle != (UPCGDensityRemapSettings *)0x0) {
      pUVar3 = UPCGDensityRemapSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDensityRemapSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDensityRemapSettings *)0x0;
}

// GetSettings<UPCGDifferenceSettings> @ 149b4e470

UPCGDifferenceSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDifferenceSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDifferenceSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDifferenceSettings *)local_res8[0].Handle == (UPCGDifferenceSettings *)0x0) {
        return (UPCGDifferenceSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDifferenceSettings *)local_res8[0].Handle != (UPCGDifferenceSettings *)0x0) {
      pUVar3 = UPCGDifferenceSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDifferenceSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDifferenceSettings *)0x0;
}

// GetSettings<UPCGDistanceSettings> @ 149b4e4e0

UPCGDistanceSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDistanceSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDistanceSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDistanceSettings *)local_res8[0].Handle == (UPCGDistanceSettings *)0x0) {
        return (UPCGDistanceSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDistanceSettings *)local_res8[0].Handle != (UPCGDistanceSettings *)0x0) {
      pUVar3 = UPCGDistanceSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDistanceSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDistanceSettings *)0x0;
}

// GetSettings<UPCGDuplicatePointSettings> @ 149b4e550

UPCGDuplicatePointSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDuplicatePointSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDuplicatePointSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDuplicatePointSettings *)local_res8[0].Handle == (UPCGDuplicatePointSettings *)0x0) {
        return (UPCGDuplicatePointSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDuplicatePointSettings *)local_res8[0].Handle != (UPCGDuplicatePointSettings *)0x0) {
      pUVar3 = UPCGDuplicatePointSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDuplicatePointSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDuplicatePointSettings *)0x0;
}

// GetSettings<UPCGElevationIsolinesSettings> @ 149b4e5c0

UPCGElevationIsolinesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGElevationIsolinesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGElevationIsolinesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGElevationIsolinesSettings *)local_res8[0].Handle ==
          (UPCGElevationIsolinesSettings *)0x0) {
        return (UPCGElevationIsolinesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGElevationIsolinesSettings *)local_res8[0].Handle !=
        (UPCGElevationIsolinesSettings *)0x0) {
      pUVar3 = UPCGElevationIsolinesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGElevationIsolinesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGElevationIsolinesSettings *)0x0;
}

// GetSettings<UPCGFilterByAttributeSettings> @ 149b4e630

UPCGFilterByAttributeSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGFilterByAttributeSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterByAttributeSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGFilterByAttributeSettings *)local_res8[0].Handle ==
          (UPCGFilterByAttributeSettings *)0x0) {
        return (UPCGFilterByAttributeSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGFilterByAttributeSettings *)local_res8[0].Handle !=
        (UPCGFilterByAttributeSettings *)0x0) {
      pUVar3 = UPCGFilterByAttributeSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGFilterByAttributeSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGFilterByAttributeSettings *)0x0;
}

// GetSettings<UPCGFilterByIndexSettings> @ 149b4e6a0

UPCGFilterByIndexSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGFilterByIndexSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterByIndexSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGFilterByIndexSettings *)local_res8[0].Handle == (UPCGFilterByIndexSettings *)0x0) {
        return (UPCGFilterByIndexSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGFilterByIndexSettings *)local_res8[0].Handle != (UPCGFilterByIndexSettings *)0x0) {
      pUVar3 = UPCGFilterByIndexSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGFilterByIndexSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGFilterByIndexSettings *)0x0;
}

// GetSettings<UPCGFilterByTagSettings> @ 149b4e710

UPCGFilterByTagSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGFilterByTagSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterByTagSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGFilterByTagSettings *)local_res8[0].Handle == (UPCGFilterByTagSettings *)0x0) {
        return (UPCGFilterByTagSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGFilterByTagSettings *)local_res8[0].Handle != (UPCGFilterByTagSettings *)0x0) {
      pUVar3 = UPCGFilterByTagSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGFilterByTagSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGFilterByTagSettings *)0x0;
}

// GetSettings<UPCGFilterByTypeSettings> @ 149b4e780

UPCGFilterByTypeSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGFilterByTypeSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterByTypeSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGFilterByTypeSettings *)local_res8[0].Handle == (UPCGFilterByTypeSettings *)0x0) {
        return (UPCGFilterByTypeSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGFilterByTypeSettings *)local_res8[0].Handle != (UPCGFilterByTypeSettings *)0x0) {
      pUVar3 = UPCGFilterByTypeSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGFilterByTypeSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGFilterByTypeSettings *)0x0;
}

// GetSettings<UPCGFilterElementsByIndexSettings> @ 149b4e7f0

UPCGFilterElementsByIndexSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGFilterElementsByIndexSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGFilterElementsByIndexSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGFilterElementsByIndexSettings *)local_res8[0].Handle ==
          (UPCGFilterElementsByIndexSettings *)0x0) {
        return (UPCGFilterElementsByIndexSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGFilterElementsByIndexSettings *)local_res8[0].Handle !=
        (UPCGFilterElementsByIndexSettings *)0x0) {
      pUVar3 = UPCGFilterElementsByIndexSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGFilterElementsByIndexSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGFilterElementsByIndexSettings *)0x0;
}

// GetSettings<UPCGGatherSettings> @ 149b4e860

UPCGGatherSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGatherSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGatherSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGatherSettings *)local_res8[0].Handle == (UPCGGatherSettings *)0x0) {
        return (UPCGGatherSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGatherSettings *)local_res8[0].Handle != (UPCGGatherSettings *)0x0) {
      pUVar3 = UPCGGatherSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGatherSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGatherSettings *)0x0;
}

// GetSettings<UPCGGenerateLandscapeTexturesSettings> @ 149b4e8d0

UPCGGenerateLandscapeTexturesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGenerateLandscapeTexturesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGenerateLandscapeTexturesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGenerateLandscapeTexturesSettings *)local_res8[0].Handle ==
          (UPCGGenerateLandscapeTexturesSettings *)0x0) {
        return (UPCGGenerateLandscapeTexturesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGenerateLandscapeTexturesSettings *)local_res8[0].Handle !=
        (UPCGGenerateLandscapeTexturesSettings *)0x0) {
      pUVar3 = UPCGGenerateLandscapeTexturesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGenerateLandscapeTexturesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGenerateLandscapeTexturesSettings *)0x0;
}

// GetSettings<UPCGGenerateSeedSettings> @ 149b4e940

UPCGGenerateSeedSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGenerateSeedSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGenerateSeedSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGenerateSeedSettings *)local_res8[0].Handle == (UPCGGenerateSeedSettings *)0x0) {
        return (UPCGGenerateSeedSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGenerateSeedSettings *)local_res8[0].Handle != (UPCGGenerateSeedSettings *)0x0) {
      pUVar3 = UPCGGenerateSeedSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGenerateSeedSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGenerateSeedSettings *)0x0;
}

// GetSettings<UPCGGetActorDataLayersSettings> @ 149b4e9b0

UPCGGetActorDataLayersSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetActorDataLayersSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetActorDataLayersSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetActorDataLayersSettings *)local_res8[0].Handle ==
          (UPCGGetActorDataLayersSettings *)0x0) {
        return (UPCGGetActorDataLayersSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetActorDataLayersSettings *)local_res8[0].Handle !=
        (UPCGGetActorDataLayersSettings *)0x0) {
      pUVar3 = UPCGGetActorDataLayersSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetActorDataLayersSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetActorDataLayersSettings *)0x0;
}

// GetSettings<UPCGGetActorPropertySettings> @ 149b4ea20

UPCGGetActorPropertySettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetActorPropertySettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetActorPropertySettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetActorPropertySettings *)local_res8[0].Handle ==
          (UPCGGetActorPropertySettings *)0x0) {
        return (UPCGGetActorPropertySettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetActorPropertySettings *)local_res8[0].Handle != (UPCGGetActorPropertySettings *)0x0)
    {
      pUVar3 = UPCGGetActorPropertySettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetActorPropertySettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetActorPropertySettings *)0x0;
}

// GetSettings<UPCGGetAttributesSettings> @ 149bc53b0

UPCGGetAttributesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetAttributesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetAttributesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetAttributesSettings *)local_res8[0].Handle == (UPCGGetAttributesSettings *)0x0) {
        return (UPCGGetAttributesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetAttributesSettings *)local_res8[0].Handle != (UPCGGetAttributesSettings *)0x0) {
      pUVar3 = UPCGGetAttributesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetAttributesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetAttributesSettings *)0x0;
}

// GetSettings<UPCGGetConsoleVariableSettings> @ 149bc5420

UPCGGetConsoleVariableSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetConsoleVariableSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetConsoleVariableSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetConsoleVariableSettings *)local_res8[0].Handle ==
          (UPCGGetConsoleVariableSettings *)0x0) {
        return (UPCGGetConsoleVariableSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetConsoleVariableSettings *)local_res8[0].Handle !=
        (UPCGGetConsoleVariableSettings *)0x0) {
      pUVar3 = UPCGGetConsoleVariableSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetConsoleVariableSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetConsoleVariableSettings *)0x0;
}

// GetSettings<UPCGGetExecutionContextSettings> @ 149bc5490

UPCGGetExecutionContextSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetExecutionContextSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetExecutionContextSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetExecutionContextSettings *)local_res8[0].Handle ==
          (UPCGGetExecutionContextSettings *)0x0) {
        return (UPCGGetExecutionContextSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetExecutionContextSettings *)local_res8[0].Handle !=
        (UPCGGetExecutionContextSettings *)0x0) {
      pUVar3 = UPCGGetExecutionContextSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetExecutionContextSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetExecutionContextSettings *)0x0;
}

// GetSettings<UPCGGetLoopIndexSettings> @ 149bc5500

UPCGGetLoopIndexSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetLoopIndexSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetLoopIndexSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetLoopIndexSettings *)local_res8[0].Handle == (UPCGGetLoopIndexSettings *)0x0) {
        return (UPCGGetLoopIndexSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetLoopIndexSettings *)local_res8[0].Handle != (UPCGGetLoopIndexSettings *)0x0) {
      pUVar3 = UPCGGetLoopIndexSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetLoopIndexSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetLoopIndexSettings *)0x0;
}

// GetSettings<UPCGGetPropertyFromObjectPathSettings> @ 149bc5570

UPCGGetPropertyFromObjectPathSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetPropertyFromObjectPathSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetPropertyFromObjectPathSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetPropertyFromObjectPathSettings *)local_res8[0].Handle ==
          (UPCGGetPropertyFromObjectPathSettings *)0x0) {
        return (UPCGGetPropertyFromObjectPathSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetPropertyFromObjectPathSettings *)local_res8[0].Handle !=
        (UPCGGetPropertyFromObjectPathSettings *)0x0) {
      pUVar3 = UPCGGetPropertyFromObjectPathSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetPropertyFromObjectPathSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetPropertyFromObjectPathSettings *)0x0;
}

// GetSettings<UPCGGetSplineControlPointsSettings> @ 149bc55e0

UPCGGetSplineControlPointsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetSplineControlPointsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetSplineControlPointsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetSplineControlPointsSettings *)local_res8[0].Handle ==
          (UPCGGetSplineControlPointsSettings *)0x0) {
        return (UPCGGetSplineControlPointsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetSplineControlPointsSettings *)local_res8[0].Handle !=
        (UPCGGetSplineControlPointsSettings *)0x0) {
      pUVar3 = UPCGGetSplineControlPointsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetSplineControlPointsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetSplineControlPointsSettings *)0x0;
}

// GetSettings<UPCGGetStaticMeshResourceDataSettings> @ 149bc5650

UPCGGetStaticMeshResourceDataSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetStaticMeshResourceDataSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetStaticMeshResourceDataSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetStaticMeshResourceDataSettings *)local_res8[0].Handle ==
          (UPCGGetStaticMeshResourceDataSettings *)0x0) {
        return (UPCGGetStaticMeshResourceDataSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetStaticMeshResourceDataSettings *)local_res8[0].Handle !=
        (UPCGGetStaticMeshResourceDataSettings *)0x0) {
      pUVar3 = UPCGGetStaticMeshResourceDataSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetStaticMeshResourceDataSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetStaticMeshResourceDataSettings *)0x0;
}

// GetSettings<UPCGGetSubgraphDepthSettings> @ 149bc56c0

UPCGGetSubgraphDepthSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetSubgraphDepthSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetSubgraphDepthSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetSubgraphDepthSettings *)local_res8[0].Handle ==
          (UPCGGetSubgraphDepthSettings *)0x0) {
        return (UPCGGetSubgraphDepthSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetSubgraphDepthSettings *)local_res8[0].Handle != (UPCGGetSubgraphDepthSettings *)0x0)
    {
      pUVar3 = UPCGGetSubgraphDepthSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetSubgraphDepthSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetSubgraphDepthSettings *)0x0;
}

// GetSettings<UPCGGetTagsSettings> @ 149bc5730

UPCGGetTagsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetTagsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetTagsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetTagsSettings *)local_res8[0].Handle == (UPCGGetTagsSettings *)0x0) {
        return (UPCGGetTagsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetTagsSettings *)local_res8[0].Handle != (UPCGGetTagsSettings *)0x0) {
      pUVar3 = UPCGGetTagsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetTagsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetTagsSettings *)0x0;
}

// GetSettings<UPCGHiGenGridSizeSettings> @ 149bc57a0

/* WARNING: Enum "EPCGHiGenGrid": Some values do not have unique names */

UPCGHiGenGridSizeSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGHiGenGridSizeSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGHiGenGridSizeSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGHiGenGridSizeSettings *)local_res8[0].Handle == (UPCGHiGenGridSizeSettings *)0x0) {
        return (UPCGHiGenGridSizeSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGHiGenGridSizeSettings *)local_res8[0].Handle != (UPCGHiGenGridSizeSettings *)0x0) {
      pUVar3 = UPCGHiGenGridSizeSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGHiGenGridSizeSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGHiGenGridSizeSettings *)0x0;
}

// GetSettings<UPCGIndirectionSettings> @ 149bc5810

UPCGIndirectionSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGIndirectionSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGIndirectionSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGIndirectionSettings *)local_res8[0].Handle == (UPCGIndirectionSettings *)0x0) {
        return (UPCGIndirectionSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGIndirectionSettings *)local_res8[0].Handle != (UPCGIndirectionSettings *)0x0) {
      pUVar3 = UPCGIndirectionSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGIndirectionSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGIndirectionSettings *)0x0;
}

// GetSettings<UPCGInnerIntersectionSettings> @ 149bc5880

UPCGInnerIntersectionSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGInnerIntersectionSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGInnerIntersectionSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGInnerIntersectionSettings *)local_res8[0].Handle ==
          (UPCGInnerIntersectionSettings *)0x0) {
        return (UPCGInnerIntersectionSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGInnerIntersectionSettings *)local_res8[0].Handle !=
        (UPCGInnerIntersectionSettings *)0x0) {
      pUVar3 = UPCGInnerIntersectionSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGInnerIntersectionSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGInnerIntersectionSettings *)0x0;
}

// GetSettings<UPCGLoopSettings> @ 149bc58f0

UPCGLoopSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGLoopSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGLoopSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGLoopSettings *)local_res8[0].Handle == (UPCGLoopSettings *)0x0) {
        return (UPCGLoopSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGLoopSettings *)local_res8[0].Handle != (UPCGLoopSettings *)0x0) {
      pUVar3 = UPCGLoopSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGLoopSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGLoopSettings *)0x0;
}

// GetSettings<UPCGMatchAndSetAttributesSettings> @ 149bc5960

UPCGMatchAndSetAttributesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGMatchAndSetAttributesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMatchAndSetAttributesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGMatchAndSetAttributesSettings *)local_res8[0].Handle ==
          (UPCGMatchAndSetAttributesSettings *)0x0) {
        return (UPCGMatchAndSetAttributesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGMatchAndSetAttributesSettings *)local_res8[0].Handle !=
        (UPCGMatchAndSetAttributesSettings *)0x0) {
      pUVar3 = UPCGMatchAndSetAttributesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGMatchAndSetAttributesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGMatchAndSetAttributesSettings *)0x0;
}

// GetSettings<UPCGMergeAttributesSettings> @ 149bc59d0

UPCGMergeAttributesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGMergeAttributesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMergeAttributesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGMergeAttributesSettings *)local_res8[0].Handle == (UPCGMergeAttributesSettings *)0x0)
      {
        return (UPCGMergeAttributesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGMergeAttributesSettings *)local_res8[0].Handle != (UPCGMergeAttributesSettings *)0x0) {
      pUVar3 = UPCGMergeAttributesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGMergeAttributesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGMergeAttributesSettings *)0x0;
}

// GetSettings<UPCGMergeSettings> @ 149bc5a40

UPCGMergeSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGMergeSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMergeSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGMergeSettings *)local_res8[0].Handle == (UPCGMergeSettings *)0x0) {
        return (UPCGMergeSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGMergeSettings *)local_res8[0].Handle != (UPCGMergeSettings *)0x0) {
      pUVar3 = UPCGMergeSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGMergeSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGMergeSettings *)0x0;
}

// GetSettings<UPCGNormalToDensitySettings> @ 149bc5ab0

UPCGNormalToDensitySettings * __thiscall
FPCGDataCollection::GetSettings<UPCGNormalToDensitySettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGNormalToDensitySettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGNormalToDensitySettings *)local_res8[0].Handle == (UPCGNormalToDensitySettings *)0x0)
      {
        return (UPCGNormalToDensitySettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGNormalToDensitySettings *)local_res8[0].Handle != (UPCGNormalToDensitySettings *)0x0) {
      pUVar3 = UPCGNormalToDensitySettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGNormalToDensitySettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGNormalToDensitySettings *)0x0;
}

// GetSettings<UPCGNumberOfElementsSettings> @ 149bc5b20

UPCGNumberOfElementsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGNumberOfElementsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGNumberOfElementsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGNumberOfElementsSettings *)local_res8[0].Handle ==
          (UPCGNumberOfElementsSettings *)0x0) {
        return (UPCGNumberOfElementsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGNumberOfElementsSettings *)local_res8[0].Handle != (UPCGNumberOfElementsSettings *)0x0)
    {
      pUVar3 = UPCGNumberOfElementsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGNumberOfElementsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGNumberOfElementsSettings *)0x0;
}

// GetSettings<UPCGOuterIntersectionSettings> @ 149bc5b90

UPCGOuterIntersectionSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGOuterIntersectionSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGOuterIntersectionSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGOuterIntersectionSettings *)local_res8[0].Handle ==
          (UPCGOuterIntersectionSettings *)0x0) {
        return (UPCGOuterIntersectionSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGOuterIntersectionSettings *)local_res8[0].Handle !=
        (UPCGOuterIntersectionSettings *)0x0) {
      pUVar3 = UPCGOuterIntersectionSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGOuterIntersectionSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGOuterIntersectionSettings *)0x0;
}

// GetSettings<UPCGPartitionByActorDataLayersSettings> @ 149bc5c00

UPCGPartitionByActorDataLayersSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPartitionByActorDataLayersSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPartitionByActorDataLayersSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPartitionByActorDataLayersSettings *)local_res8[0].Handle ==
          (UPCGPartitionByActorDataLayersSettings *)0x0) {
        return (UPCGPartitionByActorDataLayersSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPartitionByActorDataLayersSettings *)local_res8[0].Handle !=
        (UPCGPartitionByActorDataLayersSettings *)0x0) {
      pUVar3 = UPCGPartitionByActorDataLayersSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPartitionByActorDataLayersSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPartitionByActorDataLayersSettings *)0x0;
}

// GetSettings<UPCGPathfindingSettings> @ 149bc5c70

UPCGPathfindingSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPathfindingSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPathfindingSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPathfindingSettings *)local_res8[0].Handle == (UPCGPathfindingSettings *)0x0) {
        return (UPCGPathfindingSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPathfindingSettings *)local_res8[0].Handle != (UPCGPathfindingSettings *)0x0) {
      pUVar3 = UPCGPathfindingSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPathfindingSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPathfindingSettings *)0x0;
}

// GetSettings<UPCGPointExtentsModifierSettings> @ 149bc5ce0

UPCGPointExtentsModifierSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPointExtentsModifierSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPointExtentsModifierSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPointExtentsModifierSettings *)local_res8[0].Handle ==
          (UPCGPointExtentsModifierSettings *)0x0) {
        return (UPCGPointExtentsModifierSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPointExtentsModifierSettings *)local_res8[0].Handle !=
        (UPCGPointExtentsModifierSettings *)0x0) {
      pUVar3 = UPCGPointExtentsModifierSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPointExtentsModifierSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPointExtentsModifierSettings *)0x0;
}

// GetSettings<UPCGPointFromMeshSettings> @ 149bc5d50

UPCGPointFromMeshSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPointFromMeshSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPointFromMeshSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPointFromMeshSettings *)local_res8[0].Handle == (UPCGPointFromMeshSettings *)0x0) {
        return (UPCGPointFromMeshSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPointFromMeshSettings *)local_res8[0].Handle != (UPCGPointFromMeshSettings *)0x0) {
      pUVar3 = UPCGPointFromMeshSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPointFromMeshSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPointFromMeshSettings *)0x0;
}

// GetSettings<UPCGPointMatchAndSetSettings> @ 149bc5dc0

UPCGPointMatchAndSetSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPointMatchAndSetSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPointMatchAndSetSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPointMatchAndSetSettings *)local_res8[0].Handle ==
          (UPCGPointMatchAndSetSettings *)0x0) {
        return (UPCGPointMatchAndSetSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPointMatchAndSetSettings *)local_res8[0].Handle != (UPCGPointMatchAndSetSettings *)0x0)
    {
      pUVar3 = UPCGPointMatchAndSetSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPointMatchAndSetSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPointMatchAndSetSettings *)0x0;
}

// GetSettings<UPCGPointNeighborhoodSettings> @ 149bc5e30

UPCGPointNeighborhoodSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPointNeighborhoodSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPointNeighborhoodSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPointNeighborhoodSettings *)local_res8[0].Handle ==
          (UPCGPointNeighborhoodSettings *)0x0) {
        return (UPCGPointNeighborhoodSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPointNeighborhoodSettings *)local_res8[0].Handle !=
        (UPCGPointNeighborhoodSettings *)0x0) {
      pUVar3 = UPCGPointNeighborhoodSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPointNeighborhoodSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPointNeighborhoodSettings *)0x0;
}

// GetSettings<UPCGPrintElementSettings> @ 149bc5ea0

UPCGPrintElementSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPrintElementSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPrintElementSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPrintElementSettings *)local_res8[0].Handle == (UPCGPrintElementSettings *)0x0) {
        return (UPCGPrintElementSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPrintElementSettings *)local_res8[0].Handle != (UPCGPrintElementSettings *)0x0) {
      pUVar3 = UPCGPrintElementSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPrintElementSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPrintElementSettings *)0x0;
}

// GetSettings<UPCGProjectionSettings> @ 149bc5f10

UPCGProjectionSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGProjectionSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGProjectionSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGProjectionSettings *)local_res8[0].Handle == (UPCGProjectionSettings *)0x0) {
        return (UPCGProjectionSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGProjectionSettings *)local_res8[0].Handle != (UPCGProjectionSettings *)0x0) {
      pUVar3 = UPCGProjectionSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGProjectionSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGProjectionSettings *)0x0;
}

// GetSettings<UPCGRandomChoiceSettings> @ 149bc5f80

UPCGRandomChoiceSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGRandomChoiceSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGRandomChoiceSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGRandomChoiceSettings *)local_res8[0].Handle == (UPCGRandomChoiceSettings *)0x0) {
        return (UPCGRandomChoiceSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGRandomChoiceSettings *)local_res8[0].Handle != (UPCGRandomChoiceSettings *)0x0) {
      pUVar3 = UPCGRandomChoiceSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGRandomChoiceSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGRandomChoiceSettings *)0x0;
}

// GetSettings<UPCGRemoveEmptyDataSettings> @ 149bc5ff0

UPCGRemoveEmptyDataSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGRemoveEmptyDataSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGRemoveEmptyDataSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGRemoveEmptyDataSettings *)local_res8[0].Handle == (UPCGRemoveEmptyDataSettings *)0x0)
      {
        return (UPCGRemoveEmptyDataSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGRemoveEmptyDataSettings *)local_res8[0].Handle != (UPCGRemoveEmptyDataSettings *)0x0) {
      pUVar3 = UPCGRemoveEmptyDataSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGRemoveEmptyDataSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGRemoveEmptyDataSettings *)0x0;
}

// GetSettings<UPCGReplaceTagsSettings> @ 149bc6060

UPCGReplaceTagsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGReplaceTagsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGReplaceTagsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGReplaceTagsSettings *)local_res8[0].Handle == (UPCGReplaceTagsSettings *)0x0) {
        return (UPCGReplaceTagsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGReplaceTagsSettings *)local_res8[0].Handle != (UPCGReplaceTagsSettings *)0x0) {
      pUVar3 = UPCGReplaceTagsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGReplaceTagsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGReplaceTagsSettings *)0x0;
}

// GetSettings<UPCGResetPointCenterSettings> @ 149bc60d0

UPCGResetPointCenterSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGResetPointCenterSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGResetPointCenterSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGResetPointCenterSettings *)local_res8[0].Handle ==
          (UPCGResetPointCenterSettings *)0x0) {
        return (UPCGResetPointCenterSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGResetPointCenterSettings *)local_res8[0].Handle != (UPCGResetPointCenterSettings *)0x0)
    {
      pUVar3 = UPCGResetPointCenterSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGResetPointCenterSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGResetPointCenterSettings *)0x0;
}

// GetSettings<UPCGSampleTextureSettings> @ 149bc6140

UPCGSampleTextureSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSampleTextureSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSampleTextureSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSampleTextureSettings *)local_res8[0].Handle == (UPCGSampleTextureSettings *)0x0) {
        return (UPCGSampleTextureSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSampleTextureSettings *)local_res8[0].Handle != (UPCGSampleTextureSettings *)0x0) {
      pUVar3 = UPCGSampleTextureSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSampleTextureSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSampleTextureSettings *)0x0;
}

// GetSettings<UPCGSanityCheckPointDataSettings> @ 149bc61b0

UPCGSanityCheckPointDataSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSanityCheckPointDataSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSanityCheckPointDataSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSanityCheckPointDataSettings *)local_res8[0].Handle ==
          (UPCGSanityCheckPointDataSettings *)0x0) {
        return (UPCGSanityCheckPointDataSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSanityCheckPointDataSettings *)local_res8[0].Handle !=
        (UPCGSanityCheckPointDataSettings *)0x0) {
      pUVar3 = UPCGSanityCheckPointDataSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSanityCheckPointDataSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSanityCheckPointDataSettings *)0x0;
}

// GetSettings<UPCGSceneCaptureSettings> @ 149bc6220

UPCGSceneCaptureSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSceneCaptureSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSceneCaptureSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSceneCaptureSettings *)local_res8[0].Handle == (UPCGSceneCaptureSettings *)0x0) {
        return (UPCGSceneCaptureSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSceneCaptureSettings *)local_res8[0].Handle != (UPCGSceneCaptureSettings *)0x0) {
      pUVar3 = UPCGSceneCaptureSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSceneCaptureSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSceneCaptureSettings *)0x0;
}

// GetSettings<UPCGSelectPointsSettings> @ 149bc6290

UPCGSelectPointsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSelectPointsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSelectPointsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSelectPointsSettings *)local_res8[0].Handle == (UPCGSelectPointsSettings *)0x0) {
        return (UPCGSelectPointsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSelectPointsSettings *)local_res8[0].Handle != (UPCGSelectPointsSettings *)0x0) {
      pUVar3 = UPCGSelectPointsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSelectPointsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSelectPointsSettings *)0x0;
}

// GetSettings<UPCGSelfPruningSettings> @ 149bc6300

UPCGSelfPruningSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSelfPruningSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSelfPruningSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSelfPruningSettings *)local_res8[0].Handle == (UPCGSelfPruningSettings *)0x0) {
        return (UPCGSelfPruningSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSelfPruningSettings *)local_res8[0].Handle != (UPCGSelfPruningSettings *)0x0) {
      pUVar3 = UPCGSelfPruningSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSelfPruningSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSelfPruningSettings *)0x0;
}

// GetSettings<UPCGSkinnedMeshSpawnerSettings> @ 149bc6370

UPCGSkinnedMeshSpawnerSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSkinnedMeshSpawnerSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSkinnedMeshSpawnerSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSkinnedMeshSpawnerSettings *)local_res8[0].Handle ==
          (UPCGSkinnedMeshSpawnerSettings *)0x0) {
        return (UPCGSkinnedMeshSpawnerSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSkinnedMeshSpawnerSettings *)local_res8[0].Handle !=
        (UPCGSkinnedMeshSpawnerSettings *)0x0) {
      pUVar3 = UPCGSkinnedMeshSpawnerSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSkinnedMeshSpawnerSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSkinnedMeshSpawnerSettings *)0x0;
}

// GetSettings<UPCGSortAttributesSettings> @ 149bc63e0

UPCGSortAttributesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSortAttributesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSortAttributesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSortAttributesSettings *)local_res8[0].Handle == (UPCGSortAttributesSettings *)0x0) {
        return (UPCGSortAttributesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSortAttributesSettings *)local_res8[0].Handle != (UPCGSortAttributesSettings *)0x0) {
      pUVar3 = UPCGSortAttributesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSortAttributesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSortAttributesSettings *)0x0;
}

// GetSettings<UPCGSortTagsSettings> @ 149bc6450

UPCGSortTagsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSortTagsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSortTagsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSortTagsSettings *)local_res8[0].Handle == (UPCGSortTagsSettings *)0x0) {
        return (UPCGSortTagsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSortTagsSettings *)local_res8[0].Handle != (UPCGSortTagsSettings *)0x0) {
      pUVar3 = UPCGSortTagsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSortTagsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSortTagsSettings *)0x0;
}

// GetSettings<UPCGSpatialNoiseSettings> @ 149bc64c0

UPCGSpatialNoiseSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSpatialNoiseSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpatialNoiseSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSpatialNoiseSettings *)local_res8[0].Handle == (UPCGSpatialNoiseSettings *)0x0) {
        return (UPCGSpatialNoiseSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSpatialNoiseSettings *)local_res8[0].Handle != (UPCGSpatialNoiseSettings *)0x0) {
      pUVar3 = UPCGSpatialNoiseSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSpatialNoiseSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSpatialNoiseSettings *)0x0;
}

// GetSettings<UPCGClipPathsSettings> @ 149c43480

UPCGClipPathsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGClipPathsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGClipPathsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGClipPathsSettings *)local_res8[0].Handle == (UPCGClipPathsSettings *)0x0) {
        return (UPCGClipPathsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGClipPathsSettings *)local_res8[0].Handle != (UPCGClipPathsSettings *)0x0) {
      pUVar3 = UPCGClipPathsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGClipPathsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGClipPathsSettings *)0x0;
}

// GetSettings<UPCGCreatePolygon2DSettings> @ 149c434f0

UPCGCreatePolygon2DSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreatePolygon2DSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreatePolygon2DSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreatePolygon2DSettings *)local_res8[0].Handle == (UPCGCreatePolygon2DSettings *)0x0)
      {
        return (UPCGCreatePolygon2DSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreatePolygon2DSettings *)local_res8[0].Handle != (UPCGCreatePolygon2DSettings *)0x0) {
      pUVar3 = UPCGCreatePolygon2DSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreatePolygon2DSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreatePolygon2DSettings *)0x0;
}

// GetSettings<UPCGGenericUserParameterGetSettings> @ 149c43560

UPCGGenericUserParameterGetSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGenericUserParameterGetSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGenericUserParameterGetSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGenericUserParameterGetSettings *)local_res8[0].Handle ==
          (UPCGGenericUserParameterGetSettings *)0x0) {
        return (UPCGGenericUserParameterGetSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGenericUserParameterGetSettings *)local_res8[0].Handle !=
        (UPCGGenericUserParameterGetSettings *)0x0) {
      pUVar3 = UPCGGenericUserParameterGetSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGenericUserParameterGetSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGenericUserParameterGetSettings *)0x0;
}

// GetSettings<UPCGGetSegmentSettings> @ 149c435d0

UPCGGetSegmentSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetSegmentSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetSegmentSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetSegmentSettings *)local_res8[0].Handle == (UPCGGetSegmentSettings *)0x0) {
        return (UPCGGetSegmentSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetSegmentSettings *)local_res8[0].Handle != (UPCGGetSegmentSettings *)0x0) {
      pUVar3 = UPCGGetSegmentSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetSegmentSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetSegmentSettings *)0x0;
}

// GetSettings<UPCGReverseSplineSettings> @ 149c43640

UPCGReverseSplineSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGReverseSplineSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGReverseSplineSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGReverseSplineSettings *)local_res8[0].Handle == (UPCGReverseSplineSettings *)0x0) {
        return (UPCGReverseSplineSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGReverseSplineSettings *)local_res8[0].Handle != (UPCGReverseSplineSettings *)0x0) {
      pUVar3 = UPCGReverseSplineSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGReverseSplineSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGReverseSplineSettings *)0x0;
}

// GetSettings<UPCGSpawnActorSettings> @ 149c436b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPCGSpawnActorSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSpawnActorSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnActorSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSpawnActorSettings *)local_res8[0].Handle == (UPCGSpawnActorSettings *)0x0) {
        return (UPCGSpawnActorSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSpawnActorSettings *)local_res8[0].Handle != (UPCGSpawnActorSettings *)0x0) {
      pUVar3 = UPCGSpawnActorSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSpawnActorSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSpawnActorSettings *)0x0;
}

// GetSettings<UPCGSpawnSplineMeshSettings> @ 149c43720

UPCGSpawnSplineMeshSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSpawnSplineMeshSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnSplineMeshSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSpawnSplineMeshSettings *)local_res8[0].Handle == (UPCGSpawnSplineMeshSettings *)0x0)
      {
        return (UPCGSpawnSplineMeshSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSpawnSplineMeshSettings *)local_res8[0].Handle != (UPCGSpawnSplineMeshSettings *)0x0) {
      pUVar3 = UPCGSpawnSplineMeshSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSpawnSplineMeshSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSpawnSplineMeshSettings *)0x0;
}

// GetSettings<UPCGSpawnSplineSettings> @ 149c43790

UPCGSpawnSplineSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSpawnSplineSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnSplineSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSpawnSplineSettings *)local_res8[0].Handle == (UPCGSpawnSplineSettings *)0x0) {
        return (UPCGSpawnSplineSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSpawnSplineSettings *)local_res8[0].Handle != (UPCGSpawnSplineSettings *)0x0) {
      pUVar3 = UPCGSpawnSplineSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSpawnSplineSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSpawnSplineSettings *)0x0;
}

// GetSettings<UPCGSplineIntersectionSettings> @ 149c43800

UPCGSplineIntersectionSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSplineIntersectionSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineIntersectionSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSplineIntersectionSettings *)local_res8[0].Handle ==
          (UPCGSplineIntersectionSettings *)0x0) {
        return (UPCGSplineIntersectionSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSplineIntersectionSettings *)local_res8[0].Handle !=
        (UPCGSplineIntersectionSettings *)0x0) {
      pUVar3 = UPCGSplineIntersectionSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSplineIntersectionSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSplineIntersectionSettings *)0x0;
}

// GetSettings<UPCGSplineSamplerSettings> @ 149c43870

UPCGSplineSamplerSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSplineSamplerSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineSamplerSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSplineSamplerSettings *)local_res8[0].Handle == (UPCGSplineSamplerSettings *)0x0) {
        return (UPCGSplineSamplerSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSplineSamplerSettings *)local_res8[0].Handle != (UPCGSplineSamplerSettings *)0x0) {
      pUVar3 = UPCGSplineSamplerSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSplineSamplerSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSplineSamplerSettings *)0x0;
}

// GetSettings<UPCGSplitPointsSettings> @ 149c438e0

UPCGSplitPointsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSplitPointsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplitPointsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSplitPointsSettings *)local_res8[0].Handle == (UPCGSplitPointsSettings *)0x0) {
        return (UPCGSplitPointsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSplitPointsSettings *)local_res8[0].Handle != (UPCGSplitPointsSettings *)0x0) {
      pUVar3 = UPCGSplitPointsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSplitPointsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSplitPointsSettings *)0x0;
}

// GetSettings<UPCGSplitSplinesSettings> @ 149c43950

UPCGSplitSplinesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSplitSplinesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplitSplinesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSplitSplinesSettings *)local_res8[0].Handle == (UPCGSplitSplinesSettings *)0x0) {
        return (UPCGSplitSplinesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSplitSplinesSettings *)local_res8[0].Handle != (UPCGSplitSplinesSettings *)0x0) {
      pUVar3 = UPCGSplitSplinesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSplitSplinesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSplitSplinesSettings *)0x0;
}

// GetSettings<UPCGStaticMeshSpawnerSettings> @ 149c439c0

UPCGStaticMeshSpawnerSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGStaticMeshSpawnerSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGStaticMeshSpawnerSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGStaticMeshSpawnerSettings *)local_res8[0].Handle ==
          (UPCGStaticMeshSpawnerSettings *)0x0) {
        return (UPCGStaticMeshSpawnerSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGStaticMeshSpawnerSettings *)local_res8[0].Handle !=
        (UPCGStaticMeshSpawnerSettings *)0x0) {
      pUVar3 = UPCGStaticMeshSpawnerSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGStaticMeshSpawnerSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGStaticMeshSpawnerSettings *)0x0;
}

// GetSettings<UPCGSurfaceSamplerSettings> @ 149c43a30

UPCGSurfaceSamplerSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSurfaceSamplerSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSurfaceSamplerSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSurfaceSamplerSettings *)local_res8[0].Handle == (UPCGSurfaceSamplerSettings *)0x0) {
        return (UPCGSurfaceSamplerSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSurfaceSamplerSettings *)local_res8[0].Handle != (UPCGSurfaceSamplerSettings *)0x0) {
      pUVar3 = UPCGSurfaceSamplerSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSurfaceSamplerSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSurfaceSamplerSettings *)0x0;
}

// GetSettings<UPCGTextureSamplerSettings> @ 149c43aa0

UPCGTextureSamplerSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGTextureSamplerSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTextureSamplerSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGTextureSamplerSettings *)local_res8[0].Handle == (UPCGTextureSamplerSettings *)0x0) {
        return (UPCGTextureSamplerSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGTextureSamplerSettings *)local_res8[0].Handle != (UPCGTextureSamplerSettings *)0x0) {
      pUVar3 = UPCGTextureSamplerSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGTextureSamplerSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGTextureSamplerSettings *)0x0;
}

// GetSettings<UPCGTransformPointsSettings> @ 149c43b10

UPCGTransformPointsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGTransformPointsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGTransformPointsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGTransformPointsSettings *)local_res8[0].Handle == (UPCGTransformPointsSettings *)0x0)
      {
        return (UPCGTransformPointsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGTransformPointsSettings *)local_res8[0].Handle != (UPCGTransformPointsSettings *)0x0) {
      pUVar3 = UPCGTransformPointsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGTransformPointsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGTransformPointsSettings *)0x0;
}

// GetSettings<UPCGUnionSettings> @ 149c43b80

UPCGUnionSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGUnionSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGUnionSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGUnionSettings *)local_res8[0].Handle == (UPCGUnionSettings *)0x0) {
        return (UPCGUnionSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGUnionSettings *)local_res8[0].Handle != (UPCGUnionSettings *)0x0) {
      pUVar3 = UPCGUnionSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGUnionSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGUnionSettings *)0x0;
}

// GetSettings<UPCGUserParameterGetSettings> @ 149c43bf0

UPCGUserParameterGetSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGUserParameterGetSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGUserParameterGetSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGUserParameterGetSettings *)local_res8[0].Handle ==
          (UPCGUserParameterGetSettings *)0x0) {
        return (UPCGUserParameterGetSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGUserParameterGetSettings *)local_res8[0].Handle != (UPCGUserParameterGetSettings *)0x0)
    {
      pUVar3 = UPCGUserParameterGetSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGUserParameterGetSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGUserParameterGetSettings *)0x0;
}

// GetSettings<UPCGVisualizeAttributeSettings> @ 149c43c60

UPCGVisualizeAttributeSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGVisualizeAttributeSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGVisualizeAttributeSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGVisualizeAttributeSettings *)local_res8[0].Handle ==
          (UPCGVisualizeAttributeSettings *)0x0) {
        return (UPCGVisualizeAttributeSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGVisualizeAttributeSettings *)local_res8[0].Handle !=
        (UPCGVisualizeAttributeSettings *)0x0) {
      pUVar3 = UPCGVisualizeAttributeSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGVisualizeAttributeSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGVisualizeAttributeSettings *)0x0;
}

// GetSettings<UPCGVolumeSamplerSettings> @ 149c43cd0

UPCGVolumeSamplerSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGVolumeSamplerSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGVolumeSamplerSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGVolumeSamplerSettings *)local_res8[0].Handle == (UPCGVolumeSamplerSettings *)0x0) {
        return (UPCGVolumeSamplerSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGVolumeSamplerSettings *)local_res8[0].Handle != (UPCGVolumeSamplerSettings *)0x0) {
      pUVar3 = UPCGVolumeSamplerSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGVolumeSamplerSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGVolumeSamplerSettings *)0x0;
}

// GetSettings<UPCGWorldQuerySettings> @ 149c43d40

UPCGWorldQuerySettings * __thiscall
FPCGDataCollection::GetSettings<UPCGWorldQuerySettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldQuerySettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGWorldQuerySettings *)local_res8[0].Handle == (UPCGWorldQuerySettings *)0x0) {
        return (UPCGWorldQuerySettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGWorldQuerySettings *)local_res8[0].Handle != (UPCGWorldQuerySettings *)0x0) {
      pUVar3 = UPCGWorldQuerySettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGWorldQuerySettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGWorldQuerySettings *)0x0;
}

// GetSettings<UPCGWorldRayHitSettings> @ 149c43db0

UPCGWorldRayHitSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGWorldRayHitSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldRayHitSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGWorldRayHitSettings *)local_res8[0].Handle == (UPCGWorldRayHitSettings *)0x0) {
        return (UPCGWorldRayHitSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGWorldRayHitSettings *)local_res8[0].Handle != (UPCGWorldRayHitSettings *)0x0) {
      pUVar3 = UPCGWorldRayHitSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGWorldRayHitSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGWorldRayHitSettings *)0x0;
}

// GetSettings<UPCGWorldRaycastElementSettings> @ 149c43e20

UPCGWorldRaycastElementSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGWorldRaycastElementSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGWorldRaycastElementSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGWorldRaycastElementSettings *)local_res8[0].Handle ==
          (UPCGWorldRaycastElementSettings *)0x0) {
        return (UPCGWorldRaycastElementSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGWorldRaycastElementSettings *)local_res8[0].Handle !=
        (UPCGWorldRaycastElementSettings *)0x0) {
      pUVar3 = UPCGWorldRaycastElementSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGWorldRaycastElementSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGWorldRaycastElementSettings *)0x0;
}

// GetTaggedTypedInputs<UPCGUserParametersData> @ 149c43e90

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetTaggedTypedInputs<UPCGUserParametersData>
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  FPCGTaggedData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGTaggedData *pFVar6;
  FPCGTaggedData *pFVar7;
  FString *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (this->TaggedData).ArrayNum;
  local_res8 = param_1;
  do {
    if (pFVar6 == pFVar7) {
      return __return_storage_ptr__;
    }
    bVar3 = `FPCGDataCollection::GetTaggedTypedInputs<UPCGUserParametersData>'::__l2::<lambda_1>::
            operator()(&local_res8,pFVar6);
    if (bVar3) {
      pFVar1 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),pFVar6)
      ;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// operator() @ 149c4f6c0

bool __thiscall
`FPCGDataCollection::GetTaggedTypedInputs<UPCGUserParametersData>'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  int iVar1;
  FString *pFVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  wchar_t *pwVar7;
  FObjectPtr_u_0 local_res8;
  
  pFVar2 = *(FString **)this;
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar5 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&param_1->Tags,uVar4,pFVar2);
  if (iVar5 != -1) {
    local_res8 = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGData *)local_res8.Handle == (UPCGData *)0x0) {
        return false;
      }
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    if ((UPCGData *)local_res8.Handle != (UPCGData *)0x0) {
      pUVar6 = Z_Construct_UClass_UPCGUserParametersData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
      if ((bVar3) && ((UPCGData *)local_res8.Handle != (UPCGData *)0x0)) {
        return true;
      }
    }
  }
  return false;
}

// GetInputsAndCrcsByPin<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 149c9e270

void __thiscall
FPCGDataCollection::
GetInputsAndCrcsByPin<TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (FPCGDataCollection *this,FName *param_1,
          TArray<FPCGTaggedData,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_2,
          TArray<FPCGCrc,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  ForElementType<FPCGCrc> FVar2;
  ForElementType<FPCGTaggedData> FVar3;
  ForElementType<FPCGCrc> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  ForElementType<FPCGTaggedData> FVar9;
  ForElementType<FPCGCrc> FVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ForElementType<FPCGTaggedData> FVar16;
  
  if ((this->TaggedData).ArrayNum != (this->DataCrcs).ArrayNum) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<583315451388363005>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGData.h"
                       ,0xfd,"TaggedData.Num() == DataCrcs.Num()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar11 = (this->TaggedData).ArrayNum;
    iVar8 = (this->DataCrcs).ArrayNum;
    if (iVar8 < (int)uVar11) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,uVar11 - iVar8,&(this->DataCrcs).AllocatorInstance,
                         &(this->DataCrcs).ArrayNum,&(this->DataCrcs).ArrayMax);
      memset((this->DataCrcs).AllocatorInstance.Data + (longlong)iVar7 * 8,0,
             (longlong)(int)(uVar11 - iVar8) << 3);
    }
    else {
      if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
      }
      if ((int)uVar11 < iVar8) {
        uVar15 = iVar8 - uVar11;
        if (((int)(uVar15 | uVar11) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar15 != 0) {
          _Dst = (this->DataCrcs).AllocatorInstance.Data + (longlong)(int)uVar11 * 8;
          iVar8 = ((this->DataCrcs).ArrayNum - uVar11) - uVar15;
          if (iVar8 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar15 * 8,(longlong)iVar8 << 3);
          }
          piVar1 = &(this->DataCrcs).ArrayNum;
          *piVar1 = *piVar1 - uVar15;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&(this->DataCrcs).AllocatorInstance,(this->DataCrcs).ArrayNum,
                     &(this->DataCrcs).ArrayMax);
        }
      }
    }
  }
  iVar8 = (this->TaggedData).ArrayNum;
  uVar11 = 0;
  if (0 < iVar8) {
    lVar14 = 0;
    lVar13 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar15 = 0;
      if ((int)uVar11 < iVar8) {
        uVar15 = uVar12;
      }
      if ((uVar15 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (*(longlong *)((this->TaggedData).AllocatorInstance.Data + lVar13) == 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<583315451388363013>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGData.h"
                           ,0x105,"TaggedData[I].Data");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        uVar15 = 0;
        if ((int)uVar11 < (this->TaggedData).ArrayNum) {
          uVar15 = uVar12;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(FName *)((this->TaggedData).AllocatorInstance.Data + lVar13 + 0x60) == *param_1) {
          uVar15 = 0;
          if ((int)uVar11 < (this->TaggedData).ArrayNum) {
            uVar15 = uVar12;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar3 = (param_2->AllocatorInstance).SecondaryData;
          FVar16 = (ForElementType<FPCGTaggedData>)
                   ((longlong)(this->TaggedData).AllocatorInstance.Data + lVar13);
          FVar9 = (ForElementType<FPCGTaggedData>)param_2;
          if (FVar3 != (ForElementType<FPCGTaggedData>)0x0) {
            FVar9 = FVar3;
          }
          if ((ulonglong)FVar9 <= (ulonglong)FVar16) {
            FVar9 = (ForElementType<FPCGTaggedData>)param_2;
            if (FVar3 != (ForElementType<FPCGTaggedData>)0x0) {
              FVar9 = FVar3;
            }
            if (((ulonglong)FVar16 <
                 (ulonglong)((longlong)param_2->ArrayMax * 0x78 + (longlong)FVar9)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar8 = param_2->ArrayNum;
          if (iVar8 == param_2->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGTaggedData>_>
                              (0x878,&param_2->AllocatorInstance,&param_2->ArrayMax);
          }
          param_2->ArrayNum = iVar8 + 1;
          FVar3 = (param_2->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<FPCGTaggedData>)param_2;
          if (FVar3 != (ForElementType<FPCGTaggedData>)0x0) {
            FVar9 = FVar3;
          }
          FPCGTaggedData::FPCGTaggedData
                    ((FPCGTaggedData *)((longlong)iVar8 * 0x78 + (longlong)FVar9),
                     (FPCGTaggedData *)FVar16);
          uVar15 = 0;
          if ((int)uVar11 < (this->DataCrcs).ArrayNum) {
            uVar15 = uVar12;
          }
          if ((uVar15 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar4 = (param_3->AllocatorInstance).SecondaryData;
          FVar2 = (ForElementType<FPCGCrc>)
                  ((longlong)(this->DataCrcs).AllocatorInstance.Data + lVar14 * 8);
          FVar10 = (ForElementType<FPCGCrc>)param_3;
          if (FVar4 != (ForElementType<FPCGCrc>)0x0) {
            FVar10 = FVar4;
          }
          if ((ulonglong)FVar10 <= (ulonglong)FVar2) {
            FVar10 = (ForElementType<FPCGCrc>)param_3;
            if (FVar4 != (ForElementType<FPCGCrc>)0x0) {
              FVar10 = FVar4;
            }
            if (((ulonglong)FVar2 < (ulonglong)((longlong)FVar10 + (longlong)param_3->ArrayMax * 8))
               && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          iVar8 = param_3->ArrayNum;
          if (iVar8 == param_3->ArrayMax) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<FPCGCrc>_>
                              (0x408,&param_3->AllocatorInstance,&param_3->ArrayMax);
          }
          param_3->ArrayNum = iVar8 + 1;
          FVar4 = (param_3->AllocatorInstance).SecondaryData;
          FVar10 = (ForElementType<FPCGCrc>)param_3;
          if (FVar4 != (ForElementType<FPCGCrc>)0x0) {
            FVar10 = FVar4;
          }
          *(undefined8 *)((longlong)FVar10 + (longlong)iVar8 * 8) = *(undefined8 *)FVar2;
        }
      }
      iVar8 = (this->TaggedData).ArrayNum;
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x78;
    } while ((int)uVar11 < iVar8);
  }
  return;
}

// GetSettings<UPCGCreateSurfaceFromPolygon2DSettings> @ 149c9eca0

UPCGCreateSurfaceFromPolygon2DSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreateSurfaceFromPolygon2DSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateSurfaceFromPolygon2DSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreateSurfaceFromPolygon2DSettings *)local_res8[0].Handle ==
          (UPCGCreateSurfaceFromPolygon2DSettings *)0x0) {
        return (UPCGCreateSurfaceFromPolygon2DSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreateSurfaceFromPolygon2DSettings *)local_res8[0].Handle !=
        (UPCGCreateSurfaceFromPolygon2DSettings *)0x0) {
      pUVar3 = UPCGCreateSurfaceFromPolygon2DSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreateSurfaceFromPolygon2DSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreateSurfaceFromPolygon2DSettings *)0x0;
}

// GetSettings<UPCGOffsetPolygon2DSettings> @ 149c9ed10

UPCGOffsetPolygon2DSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGOffsetPolygon2DSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGOffsetPolygon2DSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGOffsetPolygon2DSettings *)local_res8[0].Handle == (UPCGOffsetPolygon2DSettings *)0x0)
      {
        return (UPCGOffsetPolygon2DSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGOffsetPolygon2DSettings *)local_res8[0].Handle != (UPCGOffsetPolygon2DSettings *)0x0) {
      pUVar3 = UPCGOffsetPolygon2DSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGOffsetPolygon2DSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGOffsetPolygon2DSettings *)0x0;
}

// GetSettings<UPCGPolygon2DOperationSettings> @ 149c9ed80

UPCGPolygon2DOperationSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPolygon2DOperationSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPolygon2DOperationSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPolygon2DOperationSettings *)local_res8[0].Handle ==
          (UPCGPolygon2DOperationSettings *)0x0) {
        return (UPCGPolygon2DOperationSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPolygon2DOperationSettings *)local_res8[0].Handle !=
        (UPCGPolygon2DOperationSettings *)0x0) {
      pUVar3 = UPCGPolygon2DOperationSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPolygon2DOperationSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPolygon2DOperationSettings *)0x0;
}

// GetSettings<UPCGSettings> @ 149c9edf0

UPCGSettings * __thiscall FPCGDataCollection::GetSettings<UPCGSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSettings *)local_res8[0].Handle == (UPCGSettings *)0x0) {
        return (UPCGSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSettings *)local_res8[0].Handle != (UPCGSettings *)0x0) {
      pUVar3 = Z_Construct_UClass_UPCGSettings_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSettings *)0x0;
}

// StaticStruct @ 149edd490

UScriptStruct * __cdecl FPCGDataCollection::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGDataCollection.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGDataCollection.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGDataCollection,(UObject *)pUVar1,
                         L"PCGDataCollection");
  }
  return Z_Registration_Info_UScriptStruct_FPCGDataCollection.OuterSingleton;
}

// GetSettings<UPCGGraphInputOutputSettings> @ 149ee8c40

UPCGGraphInputOutputSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGraphInputOutputSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGraphInputOutputSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGraphInputOutputSettings *)local_res8[0].Handle ==
          (UPCGGraphInputOutputSettings *)0x0) {
        return (UPCGGraphInputOutputSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGraphInputOutputSettings *)local_res8[0].Handle != (UPCGGraphInputOutputSettings *)0x0)
    {
      pUVar3 = UPCGGraphInputOutputSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGraphInputOutputSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGraphInputOutputSettings *)0x0;
}

// GetSettings<UPCGSettingsInterface> @ 149ee8cb0

UPCGSettingsInterface * __thiscall
FPCGDataCollection::GetSettings<UPCGSettingsInterface>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSettingsInterface>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSettingsInterface *)local_res8[0].Handle == (UPCGSettingsInterface *)0x0) {
        return (UPCGSettingsInterface *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSettingsInterface *)local_res8[0].Handle != (UPCGSettingsInterface *)0x0) {
      pUVar3 = Z_Construct_UClass_UPCGSettingsInterface_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSettingsInterface *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSettingsInterface *)0x0;
}

// GetTaggedTypedInputs<UPCGSpatialData> @ 149ee8d20

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetTaggedTypedInputs<UPCGSpatialData>
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  FPCGTaggedData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGTaggedData *pFVar6;
  FPCGTaggedData *pFVar7;
  FString *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (this->TaggedData).ArrayNum;
  local_res8 = param_1;
  do {
    if (pFVar6 == pFVar7) {
      return __return_storage_ptr__;
    }
    bVar3 = `FPCGDataCollection::GetTaggedTypedInputs<UPCGSpatialData>'::__l2::<lambda_1>::
            operator()(&local_res8,pFVar6);
    if (bVar3) {
      pFVar1 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),pFVar6)
      ;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// operator== @ 149ef03d0

bool __thiscall FPCGDataCollection::operator==(FPCGDataCollection *this,FPCGDataCollection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  if ((this->bCancelExecution == param_1->bCancelExecution) &&
     (iVar10 = (this->TaggedData).ArrayNum, iVar10 == (param_1->TaggedData).ArrayNum)) {
    uVar8 = 0;
    if (0 < iVar10) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar8 < iVar10) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar1 = (this->TaggedData).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < (param_1->TaggedData).ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar2 = (param_1->TaggedData).AllocatorInstance.Data;
        if (*(longlong *)(pFVar1 + lVar9) != *(longlong *)(pFVar2 + lVar9)) goto LAB_149ef050b;
        this_00 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                  (pFVar1 + lVar9 + 0x10);
        pTVar7 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                 (pFVar2 + lVar9 + 0x10);
        if (*(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34 !=
            *(int *)&(pTVar7->Elements).field_0x8 - *(int *)&(pTVar7->Elements).field_0x34)
        goto LAB_149ef050b;
        bVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Includes
                          (this_00,pTVar7);
        if ((!bVar4) ||
           (*(longlong *)(pFVar1 + lVar9 + 0x60) != *(longlong *)(pFVar2 + lVar9 + 0x60)))
        goto LAB_149ef050b;
        iVar10 = (this->TaggedData).ArrayNum;
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 0x78;
      } while ((int)uVar8 < iVar10);
    }
    bVar4 = true;
  }
  else {
LAB_149ef050b:
    bVar4 = false;
  }
  return bVar4;
}

// operator!= @ 149ef0670

bool __thiscall FPCGDataCollection::operator!=(FPCGDataCollection *this,FPCGDataCollection *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *this_00;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *pTVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  if ((this->bCancelExecution != param_1->bCancelExecution) ||
     (iVar9 = (this->TaggedData).ArrayNum, iVar9 != (param_1->TaggedData).ArrayNum)) {
    return true;
  }
  uVar8 = 0;
  if (0 < iVar9) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar9) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar1 = (this->TaggedData).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (param_1->TaggedData).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      pFVar2 = (param_1->TaggedData).AllocatorInstance.Data;
      if (*(longlong *)(pFVar1 + lVar10) != *(longlong *)(pFVar2 + lVar10)) {
        return true;
      }
      this_00 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                (pFVar1 + lVar10 + 0x10);
      pTVar7 = (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               (pFVar2 + lVar10 + 0x10);
      if (*(int *)&(this_00->Elements).field_0x8 - *(int *)&(this_00->Elements).field_0x34 !=
          *(int *)&(pTVar7->Elements).field_0x8 - *(int *)&(pTVar7->Elements).field_0x34) {
        return true;
      }
      bVar4 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Includes
                        (this_00,pTVar7);
      if (!bVar4) {
        return true;
      }
      if (*(longlong *)(pFVar1 + lVar10 + 0x60) != *(longlong *)(pFVar2 + lVar10 + 0x60)) {
        return true;
      }
      iVar9 = (this->TaggedData).ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 0x78;
    } while ((int)uVar8 < iVar9);
  }
  return false;
}

// operator() @ 149ef08b0

bool __thiscall
`FPCGDataCollection::GetTaggedTypedInputs<UPCGSpatialData>'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  int iVar1;
  FString *pFVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UClass *pUVar6;
  wchar_t *pwVar7;
  FObjectPtr_u_0 local_res8;
  
  pFVar2 = *(FString **)this;
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar7 = L"";
    iVar5 = 0;
  }
  else {
    pwVar7 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar7);
  iVar5 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&param_1->Tags,uVar4,pFVar2);
  if (iVar5 != -1) {
    local_res8 = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGData *)local_res8.Handle == (UPCGData *)0x0) {
        return false;
      }
      UE::GC::MarkAsReachable(local_res8.Handle);
    }
    if ((UPCGData *)local_res8.Handle != (UPCGData *)0x0) {
      pUVar6 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
      if ((bVar3) && ((UPCGData *)local_res8.Handle != (UPCGData *)0x0)) {
        return true;
      }
    }
  }
  return false;
}

// operator() @ 149ef0f40

bool __thiscall
`FPCGDataCollection::GetTaggedParams'::__l2::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  int iVar1;
  FString *pFVar2;
  UPCGData *pUVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *pUVar7;
  wchar_t *pwVar8;
  FObjectPtr_u_0 local_res8;
  
  pFVar2 = *(FString **)this;
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    pwVar8 = L"";
    iVar6 = 0;
  }
  else {
    pwVar8 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar8);
  iVar6 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&param_1->Tags,uVar5,pFVar2);
  if (iVar6 == -1) {
    return false;
  }
  local_res8 = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if ((UPCGData *)local_res8.Handle == (UPCGData *)0x0) goto LAB_149ef0fcd;
    UE::GC::MarkAsReachable(local_res8.Handle);
  }
  if ((UPCGData *)local_res8.Handle != (UPCGData *)0x0) {
    pUVar7 = Z_Construct_UClass_UPCGParamData_NoRegister();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar7);
    if ((bVar4) && ((UPCGData *)local_res8.Handle != (UPCGData *)0x0)) {
      return true;
    }
  }
LAB_149ef0fcd:
  pUVar3 = (param_1->Data).Data.field0_0x0.DebugPtr;
  if ((pUVar3 != (UPCGData *)0x0) &&
     (iVar6 = (**(code **)(pUVar3->_padding_ + 0x2e8))(), iVar6 == 0x8000000)) {
    return true;
  }
  return false;
}

// operator() @ 149ef1340

bool __thiscall
`FPCGDataCollection::GetSettingsInterface'::__l7::<lambda_1>::operator()
          (void *this,FPCGTaggedData *param_1)

{
  FObjectPtr_u_0 FVar1;
  bool bVar2;
  UClass *pUVar3;
  longlong lVar4;
  longlong lVar5;
  FObjectPtr_u_0 local_res10;
  
  local_res10 = (FObjectPtr_u_0)(param_1->Data).Data.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     ((UPCGData *)local_res10.Handle != (UPCGData *)0x0)) {
    UE::GC::MarkAsReachable(local_res10.Handle);
  }
  if ((UPCGData *)local_res10.Handle != (UPCGData *)0x0) {
    pUVar3 = Z_Construct_UClass_UPCGSettingsInterface_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_res10,pUVar3);
    FVar1 = local_res10;
    if ((bVar2) && ((UPCGData *)local_res10.Handle != (UPCGData *)0x0)) {
      lVar4 = (**(code **)(*(longlong *)local_res10.Handle + 0x380))(local_res10.Handle);
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar5 = (**(code **)(**(longlong **)this + 0x380))();
      if (lVar4 == *(longlong *)(lVar5 + 0x10)) {
        return true;
      }
      lVar4 = (**(code **)(*(longlong *)FVar1.Handle + 0x380))(FVar1.Handle);
      lVar4 = *(longlong *)(lVar4 + 0x10);
      lVar5 = (**(code **)(**(longlong **)this + 0x380))();
      lVar5 = *(longlong *)(lVar5 + 0x10);
      if (lVar5 != 0) {
        if ((*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          return true;
        }
      }
      return false;
    }
  }
  return false;
}

// operator+= @ 149ef1e80

FPCGDataCollection * __thiscall
FPCGDataCollection::operator+=(FPCGDataCollection *this,FPCGDataCollection *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FPCGTaggedData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FPCGDataCollection *pFVar7;
  
  iVar1 = (param_1->DataCrcs).ArrayNum;
  _Src = (param_1->DataCrcs).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FPCGDataCollection *)(*pcVar3)();
    return pFVar7;
  }
  pFVar2 = (FPCGTaggedData *)(param_1->TaggedData).AllocatorInstance.Data;
  iVar6 = (param_1->TaggedData).ArrayNum;
  if (iVar6 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPCGDataCollection *)(*pcVar3)();
      return pFVar7;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPCGDataCollection *)(*pcVar3)();
      return pFVar7;
    }
  }
  else if (iVar6 == 0) goto LAB_149ef1f6e;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,iVar6,(ForAnyElementType *)this,&(this->TaggedData).ArrayNum,
                     &(this->TaggedData).ArrayMax);
  ConstructItems<FPCGTaggedData,FPCGTaggedData,int>
            ((this->TaggedData).AllocatorInstance.Data + (longlong)iVar5 * 0x78,pFVar2,iVar6);
LAB_149ef1f6e:
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FPCGDataCollection *)(*pcVar3)();
      return pFVar7;
    }
  }
  else if (iVar1 == 0) {
    return this;
  }
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar1,&(this->DataCrcs).AllocatorInstance,&(this->DataCrcs).ArrayNum,
                     &(this->DataCrcs).ArrayMax);
  memcpy((this->DataCrcs).AllocatorInstance.Data + (longlong)iVar6 * 8,_Src,(longlong)iVar1 << 3);
  return this;
}

// AddData @ 149ef3390

void __thiscall
FPCGDataCollection::AddData(FPCGDataCollection *this,FPCGTaggedData *param_1,FPCGCrc *param_2)

{
  int *piVar1;
  FPCGTaggedData *pFVar2;
  FPCGCrc *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  pFVar2 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->TaggedData).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->TaggedData).ArrayNum;
  piVar1 = &(this->TaggedData).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x878,(ForAnyElementType *)this,piVar1);
  }
  (this->TaggedData).ArrayNum = iVar6 + 1;
  FPCGTaggedData::FPCGTaggedData
            ((FPCGTaggedData *)((this->TaggedData).AllocatorInstance.Data + (longlong)iVar6 * 0x78),
             param_1);
  pFVar3 = (FPCGCrc *)(this->DataCrcs).AllocatorInstance.Data;
  if ((pFVar3 <= param_2) && (param_2 < pFVar3 + (this->DataCrcs).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->DataCrcs).ArrayNum;
  piVar1 = &(this->DataCrcs).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->DataCrcs).AllocatorInstance,piVar1);
  }
  (this->DataCrcs).ArrayNum = iVar6 + 1;
  *(FPCGCrc *)((this->DataCrcs).AllocatorInstance.Data + (longlong)iVar6 * 8) = *param_2;
  return;
}

// AddData @ 149ef34e0

void __thiscall
FPCGDataCollection::AddData
          (FPCGDataCollection *this,TArrayView<FPCGTaggedData_const_,int> *param_1,
          TArrayView<FPCGCrc_const_,int> *param_2)

{
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FPCGTaggedData_const_,int>_const_&>(&this->TaggedData,param_1);
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_>::Append<TArrayView<FPCGCrc_const_,int>_const_&>
            (&this->DataCrcs,param_2);
  return;
}

// AddDataForPin @ 149ef3520

void __thiscall
FPCGDataCollection::AddDataForPin
          (FPCGDataCollection *this,TArrayView<FPCGTaggedData_const_,int> *param_1,
          TArrayView<FPCGCrc_const_,int> *param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
  Append<TArrayView<FPCGTaggedData_const_,int>_const_&>(&this->TaggedData,param_1);
  TArray<FPCGCrc,TSizedDefaultAllocator<32>_>::Append<TArrayView<FPCGCrc_const_,int>_const_&>
            (&this->DataCrcs,param_2);
  uVar6 = (this->DataCrcs).ArrayNum - param_2->ArrayNum;
  if ((int)uVar6 < (this->DataCrcs).ArrayNum) {
    lVar5 = (longlong)(int)uVar6 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->DataCrcs).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar1 = (this->DataCrcs).AllocatorInstance.Data;
      uVar6 = uVar6 + 1;
      uVar4 = *(uint *)(pFVar1 + lVar5);
      *(uint *)(pFVar1 + lVar5) = (uVar4 >> 2) + uVar4 * 0x40 + -0x61c88647 + param_3 ^ uVar4;
      lVar5 = lVar5 + 8;
    } while ((int)uVar6 < (this->DataCrcs).ArrayNum);
  }
  return;
}

// AddReferences @ 149ef47c0

void __thiscall
FPCGDataCollection::AddReferences(FPCGDataCollection *this,FReferenceCollector *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->TaggedData).ArrayNum;
  pFVar2 = (this->TaggedData).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->TaggedData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(longlong *)pFVar2 != 0) {
      (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2,0,0);
    }
    pFVar2 = pFVar2 + 0x78;
  }
  return;
}

// ClearUsage @ 149ef87f0

void __thiscall FPCGDataCollection::ClearUsage(FPCGDataCollection *this,EPCGDataUsage param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  TConsoleVariableData<bool> *pTVar4;
  bool bVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  code *local_48;
  undefined1 *local_40;
  
  iVar2 = (this->TaggedData).ArrayNum;
  pFVar8 = (this->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x78;
  do {
    if ((this->TaggedData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar7) {
      return;
    }
    plVar3 = *(longlong **)pFVar8;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      pbVar1 = (byte *)((longlong)plVar3 + 0x41);
      *pbVar1 = *pbVar1 & ~param_1;
      pTVar4 = PCGSystemSwitches::CVarReleaseTransientResourcesEarly.Ref;
      UNLOCK();
      if (*pbVar1 == 0) {
        bVar5 = IsInParallelGameThread();
        if (bVar5) {
LAB_149ef8873:
          lVar6 = 0;
        }
        else {
          bVar5 = IsInGameThread();
          if (bVar5) goto LAB_149ef8873;
          lVar6 = 1;
        }
        if ((pTVar4->ShadowedValue[lVar6] == false) || (*(int *)((longlong)plVar3 + 0x44) == 0)) {
          local_40 = local_res18;
          local_48 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UPCGData::ClearUsage'::__l5::<lambda_1>,void,UPCGData_const_*>
                     ::Call;
          (**(code **)(*plVar3 + 0x2c0))(plVar3,&local_48);
        }
      }
    }
    pFVar8 = pFVar8 + 0x78;
  } while( true );
}

// ComputeCrcs @ 149ef8d10

void __thiscall FPCGDataCollection::ComputeCrcs(FPCGDataCollection *this,bool param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint local_res8 [2];
  char local_res10;
  uint local_res18;
  undefined4 uStackX_1c;
  undefined1 local_res20 [8];
  FArchiveCrc32 local_e8;
  
  iVar7 = (this->DataCrcs).ArrayNum;
  piVar1 = &(this->DataCrcs).ArrayNum;
  uVar10 = (this->TaggedData).ArrayNum;
  local_res10 = param_1;
  if (iVar7 < (int)uVar10) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar10 - iVar7,&(this->DataCrcs).AllocatorInstance,piVar1,
               &(this->DataCrcs).ArrayMax);
  }
  else {
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    if ((int)uVar10 < iVar7) {
      uVar11 = iVar7 - uVar10;
      if (((int)(uVar11 | uVar10) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      param_1 = (bool)local_res10;
      if (uVar11 != 0) {
        pFVar2 = (this->DataCrcs).AllocatorInstance.Data + (longlong)(int)uVar10 * 8;
        iVar7 = (*piVar1 - uVar10) - uVar11;
        if (iVar7 != 0) {
          memmove(pFVar2,pFVar2 + (longlong)(int)uVar11 * 8,(longlong)iVar7 << 3);
        }
        *piVar1 = *piVar1 - uVar11;
        param_1 = (bool)local_res10;
      }
    }
  }
  iVar7 = (this->TaggedData).ArrayNum;
  uVar10 = 0;
  if (0 < iVar7) {
    lVar13 = 0;
    lVar12 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar10 < iVar7) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->TaggedData).AllocatorInstance.Data;
      FArchiveCrc32::FArchiveCrc32(&local_e8,0,(UObject *)0x0);
      (**(code **)(local_e8._padding_ + 0x178))(&local_e8,pFVar2 + lVar12 + 0x60);
      plVar3 = *(longlong **)(pFVar2 + lVar12);
      if (plVar3 != (longlong *)0x0) {
        if ((param_1 == false) || (cVar6 = (**(code **)(*plVar3 + 0x378))(plVar3), cVar6 == '\0')) {
          cVar6 = '\0';
        }
        else {
          cVar6 = '\x01';
        }
        if ((*(char *)((longlong)plVar3 + 0x34) == '\0') ||
           (((char)plVar3[8] == '\0' && (cVar6 != '\0')))) {
          plVar8 = (longlong *)(**(code **)(*plVar3 + 0x368))(plVar3,local_res20);
          lVar9 = *plVar8;
          plVar3[6] = lVar9;
          *(char *)(plVar3 + 8) = cVar6;
        }
        else {
          lVar9 = plVar3[6];
        }
        local_res8[0] = (uint)lVar9;
        if (*(uint **)(local_e8._padding_ + 8) < *(uint **)local_e8._padding_ + 1) {
          if ((local_e8._padding_._2_1_ & 1) == 0) {
            (**(code **)(local_e8._padding_ + 0x188))();
          }
          else {
            FArchive::SerializeByteOrderSwapped((FArchive *)&local_e8,local_res8);
          }
        }
        else {
          local_res8[0] = **(uint **)local_e8._padding_;
          *(longlong *)local_e8._padding_ = *(longlong *)local_e8._padding_ + 4;
        }
      }
      TSetPrivateFriend::Serialize<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
                ((FArchive *)&local_e8,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
                 (pFVar2 + lVar12 + 0x10));
      local_res18 = local_e8.CRC;
      uStackX_1c = CONCAT31(uStackX_1c._1_3_,1);
      FArchive::~FArchive((FArchive *)&local_e8);
      uVar11 = 0;
      if ((int)uVar10 < (this->DataCrcs).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x78;
      *(ulonglong *)((this->DataCrcs).AllocatorInstance.Data + lVar13 * 8) =
           CONCAT44(uStackX_1c,local_res18);
      lVar13 = lVar13 + 1;
      iVar7 = (this->TaggedData).ArrayNum;
      param_1 = (bool)local_res10;
    } while ((int)uVar10 < iVar7);
  }
  return;
}

// GetAllParams @ 149efe8b0

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetAllParams
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UPCGData *pUVar1;
  FPCGTaggedData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar7;
  FPCGTaggedData *pFVar8;
  FPCGTaggedData *pFVar9;
  FObjectPtr_u_0 local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (this->TaggedData).ArrayNum;
  do {
    if (pFVar8 == pFVar9) {
      return __return_storage_ptr__;
    }
    local_res8.Handle = (UObject *)(pFVar8->Data).Data.field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149efe913:
      if ((UPCGData *)local_res8.Handle == (UPCGData *)0x0) goto LAB_149efe936;
      pUVar6 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
      if ((!bVar4) || ((UPCGData *)local_res8.Handle == (UPCGData *)0x0)) goto LAB_149efe936;
LAB_149efe956:
      pFVar2 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + __return_storage_ptr__->ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x78),pFVar8)
      ;
    }
    else {
      if ((UPCGData *)local_res8.Handle != (UPCGData *)0x0) {
        UE::GC::MarkAsReachable(local_res8.Handle);
        goto LAB_149efe913;
      }
LAB_149efe936:
      pUVar1 = (pFVar8->Data).Data.field0_0x0.DebugPtr;
      if ((pUVar1 != (UPCGData *)0x0) &&
         (iVar5 = (**(code **)(pUVar1->_padding_ + 0x2e8))(), iVar5 == 0x8000000))
      goto LAB_149efe956;
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// GetAllSettings @ 149efea10

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetAllSettings
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FObjectPtr_u_0 *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar6;
  FObjectPtr_u_0 *pFVar7;
  FObjectPtr_u_0 *pFVar8;
  FObjectPtr_u_0 local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = (FObjectPtr_u_0 *)(this->TaggedData).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)(this->TaggedData).ArrayNum * 0xf;
  do {
    if (pFVar7 == pFVar8) {
      return __return_storage_ptr__;
    }
    local_res8 = (FObjectPtr_u_0)pFVar7->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149efea77:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UPCGSettings_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if ((bVar3) && (local_res8.Handle != (UObject *)0x0)) {
          pFVar1 = (FObjectPtr_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar1 <= pFVar7) &&
             ((pFVar7 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0xf &&
              (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)))) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar6;
          }
          iVar4 = __return_storage_ptr__->ArrayNum;
          if (iVar4 == __return_storage_ptr__->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar4 + 1;
          FPCGTaggedData::FPCGTaggedData
                    ((FPCGTaggedData *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),
                     (FPCGTaggedData *)pFVar7);
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149efea77;
    }
    pFVar7 = pFVar7 + 0xf;
  } while( true );
}

// GetAllSpatialInputs @ 149efecb0

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetAllSpatialInputs
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FObjectPtr_u_0 *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar6;
  FObjectPtr_u_0 *pFVar7;
  FObjectPtr_u_0 *pFVar8;
  FObjectPtr_u_0 local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar7 = (FObjectPtr_u_0 *)(this->TaggedData).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)(this->TaggedData).ArrayNum * 0xf;
  do {
    if (pFVar7 == pFVar8) {
      return __return_storage_ptr__;
    }
    local_res8 = (FObjectPtr_u_0)pFVar7->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149efed17:
      if (local_res8.Handle != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar5);
        if ((bVar3) && (local_res8.Handle != (UObject *)0x0)) {
          pFVar1 = (FObjectPtr_u_0 *)(__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar1 <= pFVar7) &&
             ((pFVar7 < pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0xf &&
              (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar3)))) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar6;
          }
          iVar4 = __return_storage_ptr__->ArrayNum;
          if (iVar4 == __return_storage_ptr__->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x878,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar4 + 1;
          FPCGTaggedData::FPCGTaggedData
                    ((FPCGTaggedData *)
                     ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),
                     (FPCGTaggedData *)pFVar7);
        }
      }
    }
    else if (local_res8.Handle != (UObject *)0x0) {
      UE::GC::MarkAsReachable(local_res8.Handle);
      goto LAB_149efed17;
    }
    pFVar7 = pFVar7 + 0xf;
  } while( true );
}

// GetFirstParamsOnParamsPin @ 149effd90

UPCGParamData * __thiscall FPCGDataCollection::GetFirstParamsOnParamsPin(FPCGDataCollection *this)

{
  code *pcVar1;
  bool bVar2;
  UPCGParamData *pUVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 FVar5;
  FObjectPtr_u_0 local_res10 [3];
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_18;
  
  GetParamsByPin(this,&local_18,&PCGPinConstants::DefaultParamsLabel);
  FVar5.Handle = (UObject *)0x0;
  if (local_18.ArrayNum != 0) {
    if (local_18.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pUVar3 = (UPCGParamData *)(*pcVar1)();
        return pUVar3;
      }
    }
    local_res10[0] = *(FObjectPtr_u_0 *)local_18.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGParamData *)local_res10[0].Handle == (UPCGParamData *)0x0) goto LAB_149effe33;
      UE::GC::MarkAsReachable(local_res10[0].Handle);
    }
    if ((UPCGParamData *)local_res10[0].Handle != (UPCGParamData *)0x0) {
      pUVar4 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)local_res10,pUVar4);
      FVar5.Handle = (UObject *)0x0;
      if (bVar2) {
        FVar5 = local_res10[0];
      }
    }
  }
LAB_149effe33:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FPCGTaggedData *)local_18.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (UPCGParamData *)FVar5.Handle;
}

// GetInputCountByPin @ 149f01320

int __thiscall FPCGDataCollection::GetInputCountByPin(FPCGDataCollection *this,FName *param_1)

{
  FName *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  iVar2 = (this->TaggedData).ArrayNum;
  pFVar4 = (this->TaggedData).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar2 * 0x78;
  iVar3 = 0;
  while( true ) {
    iVar6 = iVar3;
    if ((this->TaggedData).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    pFVar1 = (FName *)(pFVar4 + 0x60);
    pFVar4 = pFVar4 + 0x78;
    iVar3 = iVar6 + 1;
    if (*pFVar1 != *param_1) {
      iVar3 = iVar6;
    }
  }
  return iVar6;
}

// GetInputs @ 149f01520

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetInputs
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  GetAllSpatialInputs(this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetInputsByPin @ 149f01570

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetInputsByPin
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FPCGTaggedData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGTaggedData *pFVar6;
  FPCGTaggedData *pFVar7;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (this->TaggedData).ArrayNum;
  do {
    if (pFVar6 == pFVar7) {
      return __return_storage_ptr__;
    }
    if ((pFVar6->Data).Data.field0_0x0.DebugPtr == (UPCGData *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3894552481450950358>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGData.cpp"
                         ,0x12a,"Data.Data");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    else if (pFVar6->Pin == *param_1) {
      pFVar1 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),pFVar6)
      ;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// GetParamsByPin @ 149f03560

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetParamsByPin
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  UPCGData *pUVar1;
  FPCGTaggedData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar7;
  FPCGTaggedData *pFVar8;
  FPCGTaggedData *pFVar9;
  FObjectPtr_u_0 local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar8 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (this->TaggedData).ArrayNum;
  do {
    if (pFVar8 == pFVar9) {
      return __return_storage_ptr__;
    }
    if (pFVar8->Pin == *param_1) {
      local_res8.Handle = (UObject *)(pFVar8->Data).Data.field0_0x0.DebugPtr;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f035d0:
        if ((UPCGData *)local_res8.Handle == (UPCGData *)0x0) goto LAB_149f035f3;
        pUVar6 = Z_Construct_UClass_UPCGParamData_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar6);
        if ((!bVar4) || ((UPCGData *)local_res8.Handle == (UPCGData *)0x0)) goto LAB_149f035f3;
      }
      else {
        if ((UPCGData *)local_res8.Handle != (UPCGData *)0x0) {
          UE::GC::MarkAsReachable(local_res8.Handle);
          goto LAB_149f035d0;
        }
LAB_149f035f3:
        pUVar1 = (pFVar8->Data).Data.field0_0x0.DebugPtr;
        if ((pUVar1 == (UPCGData *)0x0) ||
           (iVar5 = (**(code **)(pUVar1->_padding_ + 0x2e8))(), iVar5 != 0x8000000))
        goto LAB_149f036a2;
      }
      pFVar2 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar2 <= pFVar8) && (pFVar8 < pFVar2 + __return_storage_ptr__->ArrayMax)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
        return pTVar7;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x78),pFVar8)
      ;
    }
LAB_149f036a2:
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// GetParamsWithDeprecation @ 149f03810

/* WARNING: Enum "EPCGDataType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UPCGParamData * __thiscall
FPCGDataCollection::GetParamsWithDeprecation(FPCGDataCollection *this,UPCGNode *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  UPCGParamData *pUVar6;
  UClass *pUVar7;
  FPCGDataTypeIdentifier *pFVar8;
  FText *this_00;
  FObjectPtr_u_0 FVar9;
  FObjectPtr_u_0 *pFVar10;
  ForAnyElementType FVar11;
  UObject *pUVar12;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FObjectPtr_u_0 local_98;
  FObjectPtr_u_0 local_90;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_88;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> local_78;
  FText local_68;
  FPCGDataTypeIdentifier local_58;
  
  GetParamsByPin(this,&local_78,&PCGPinConstants::DefaultParamsLabel);
  FVar9.Handle = (UObject *)0x0;
  if (local_78.ArrayNum != 0) {
    if ((local_78.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      pUVar6 = (UPCGParamData *)(*pcVar3)();
      return pUVar6;
    }
    local_98 = *(FObjectPtr_u_0 *)local_78.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGParamData *)local_98.Handle == (UPCGParamData *)0x0) goto LAB_149f038bd;
      UE::GC::MarkAsReachable(local_98.Handle);
    }
    if ((UPCGParamData *)local_98.Handle != (UPCGParamData *)0x0) {
      pUVar7 = Z_Construct_UClass_UPCGParamData_NoRegister();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_98,pUVar7);
      FVar9.Handle = (UObject *)0x0;
      if (bVar5) {
        FVar9 = local_98;
      }
    }
  }
LAB_149f038bd:
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
  if ((FPCGTaggedData *)local_78.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  if ((UPCGParamData *)FVar9.Handle != (UPCGParamData *)0x0) {
    return (UPCGParamData *)FVar9.Handle;
  }
  if (param_1 != (UPCGNode *)0x0) {
    pUVar12 = (UObject *)(param_1->InputPins).AllocatorInstance.Data;
    iVar1 = (param_1->InputPins).ArrayNum;
    local_98.Handle = (UObject *)((longlong)&pUVar12->field_0x0 + (longlong)iVar1 * 8);
    while( true ) {
      FVar9 = local_98;
      if ((param_1->InputPins).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TObjectPtr<UPCGPin>_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pUVar12 == FVar9.Handle) break;
      lVar2 = *(longlong *)pUVar12;
      pFVar8 = FPCGDataTypeIdentifier::FPCGDataTypeIdentifier(&local_58,Param);
      bVar5 = FPCGDataTypeIdentifier::IsSameType((FPCGDataTypeIdentifier *)(lVar2 + 0x58),pFVar8);
      if (local_58.Ids.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Ids.AllocatorInstance.Data);
      }
      if (!bVar5) {
        GetParamsByPin(this,&local_88,(FName *)(lVar2 + 0x48));
        iVar4 = local_88.ArrayNum;
        pFVar10 = (FObjectPtr_u_0 *)
                  (local_88.AllocatorInstance.Data + (longlong)local_88.ArrayNum * 0x78);
        FVar11.Data = local_88.AllocatorInstance.Data;
        while( true ) {
          if (local_88.ArrayNum != iVar4) {
            `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_res20);
          }
          if ((FObjectPtr_u_0 *)FVar11.Data == pFVar10) break;
          local_90 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar11.Data;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_149f039c7:
            if ((UPCGParamData *)local_90.Handle != (UPCGParamData *)0x0) {
              pUVar7 = Z_Construct_UClass_UPCGParamData_NoRegister();
              bVar5 = FObjectPtr::IsA((FObjectPtr *)&local_90,pUVar7);
              FVar9 = local_90;
              if ((bVar5) && ((UPCGParamData *)local_90.Handle != (UPCGParamData *)0x0)) {
                if (2 < (byte)LogPCG._0_1_) {
                  this_00 = UPCGNode::GetNodeTitle(param_1,&local_68,ListView);
                  FText::ToString(this_00);
                  UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPCG);
                  if (local_68.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
                  }
                }
                DestructItems<FPCGTaggedData,int>
                          ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
                if ((FPCGTaggedData *)local_88.AllocatorInstance.Data == (FPCGTaggedData *)0x0) {
                  return (UPCGParamData *)FVar9.Handle;
                }
                FMemory::Free(local_88.AllocatorInstance.Data);
                return (UPCGParamData *)FVar9.Handle;
              }
            }
          }
          else if ((UPCGParamData *)local_90.Handle != (UPCGParamData *)0x0) {
            UE::GC::MarkAsReachable(local_90.Handle);
            goto LAB_149f039c7;
          }
          FVar11.Data = FVar11.Data + 0x78;
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
        if ((FPCGTaggedData *)local_88.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_88.AllocatorInstance.Data);
        }
      }
      pUVar12 = (UObject *)&pUVar12->field_0x8;
    }
  }
  return (UPCGParamData *)0x0;
}

// GetResourceSizeEx @ 149f049b0

void __thiscall
FPCGDataCollection::GetResourceSizeEx(FPCGDataCollection *this,FResourceSizeEx *param_1)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FResourceSizeEx *local_res18 [2];
  code *local_38;
  FResourceSizeEx **local_30;
  
  iVar1 = (this->TaggedData).ArrayNum;
  pFVar3 = (this->TaggedData).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->TaggedData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)pFVar3;
    if (plVar2 != (longlong *)0x0) {
      local_30 = local_res18;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPCGDataCollection::GetResourceSizeEx'::__l9::<lambda_1>,void,UPCGData_const_*>
                 ::Call;
      local_res18[0] = param_1;
      (**(code **)(*plVar2 + 0x2c0))(plVar2,&local_38);
    }
    pFVar3 = pFVar3 + 0x78;
  }
  return;
}

// GetSettings @ 149f04c40

UPCGSettings * __thiscall
FPCGDataCollection::GetSettings(FPCGDataCollection *this,UPCGSettings *param_1)

{
  UPCGData *pUVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  UPCGSettings *pUVar5;
  FPCGDataPtrWrapper *pFVar6;
  FPCGDataPtrWrapper *pFVar7;
  
  if (param_1 == (UPCGSettings *)0x0) {
    pUVar5 = GetSettings<UPCGSettings>(this);
    return pUVar5;
  }
  pFVar6 = (FPCGDataPtrWrapper *)(this->TaggedData).AllocatorInstance.Data;
  pFVar7 = (FPCGDataPtrWrapper *)((longlong)pFVar6 + (longlong)(this->TaggedData).ArrayNum * 0x78);
  if (pFVar6 == pFVar7) {
    return param_1;
  }
  do {
    pUVar1 = (pFVar6->Data).field0_0x0.DebugPtr;
    if (pUVar1 != (UPCGData *)0x0) {
      lVar2 = param_1->_padding_;
      lVar3 = pUVar1->_padding_;
      if (lVar3 == lVar2) {
LAB_149f04cbc:
        pUVar5 = Cast<UPCGSettings_const_>(pFVar6);
        return pUVar5;
      }
      if (lVar2 != 0) {
        if ((*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38)) ||
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) goto LAB_149f04cbc;
      }
    }
    pFVar6 = (FPCGDataPtrWrapper *)&pFVar6[7].WeakData;
    if (pFVar6 == pFVar7) {
      return param_1;
    }
  } while( true );
}

// GetSettingsInterface @ 149f04ce0

UPCGSettingsInterface * __thiscall
FPCGDataCollection::GetSettingsInterface(FPCGDataCollection *this,UPCGSettingsInterface *param_1)

{
  bool bVar1;
  longlong lVar2;
  UPCGSettingsInterface *pUVar3;
  FPCGTaggedData *pFVar4;
  FPCGTaggedData *pFVar5;
  UPCGSettingsInterface *local_res10;
  
  if (param_1 != (UPCGSettingsInterface *)0x0) {
    lVar2 = (**(code **)(param_1->_padding_ + 0x380))(param_1);
    if (lVar2 != 0) {
      pFVar4 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
      pFVar5 = pFVar4 + (this->TaggedData).ArrayNum;
      local_res10 = param_1;
      if (pFVar4 != pFVar5) {
        while( true ) {
          bVar1 = `FPCGDataCollection::GetSettingsInterface'::__l7::<lambda_1>::operator()
                            (&local_res10,pFVar4);
          if (bVar1) break;
          pFVar4 = pFVar4 + 1;
          if (pFVar4 == pFVar5) {
            return param_1;
          }
        }
        if (pFVar4 != (FPCGTaggedData *)0x0) {
          param_1 = Cast<UPCGSettingsInterface_const_>(&pFVar4->Data);
        }
      }
      return param_1;
    }
  }
  pUVar3 = GetSettingsInterface(this);
  return pUVar3;
}

// GetSettingsInterface @ 149f04d90

UPCGSettingsInterface * __thiscall
FPCGDataCollection::GetSettingsInterface(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSettingsInterface>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSettingsInterface *)local_res8[0].Handle == (UPCGSettingsInterface *)0x0) {
        return (UPCGSettingsInterface *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSettingsInterface *)local_res8[0].Handle != (UPCGSettingsInterface *)0x0) {
      pUVar3 = Z_Construct_UClass_UPCGSettingsInterface_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSettingsInterface *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSettingsInterface *)0x0;
}

// GetSpatialInputCountByPin @ 149f04e00

int __thiscall
FPCGDataCollection::GetSpatialInputCountByPin(FPCGDataCollection *this,FName *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FScriptContainerElement *this_00;
  FScriptContainerElement *pFVar4;
  int iVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->TaggedData).ArrayNum;
  iVar5 = 0;
  this_00 = (this->TaggedData).AllocatorInstance.Data;
  pFVar4 = this_00 + (longlong)iVar1 * 0x78;
  while( true ) {
    if ((this->TaggedData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FPCGTaggedData_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar4) break;
    if ((*(FName *)(this_00 + 0x60) == *param_1) && (*(longlong *)this_00 != 0)) {
      pUVar3 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar3);
      if (bVar2) {
        iVar5 = iVar5 + 1;
      }
    }
    this_00 = this_00 + 0x78;
  }
  return iVar5;
}

// GetSpatialInputsByPin @ 149f04ea0

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetSpatialInputsByPin
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,FName *param_1)

{
  FPCGTaggedData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  UClass *pUVar6;
  FPCGTaggedData *this_00;
  FPCGTaggedData *pFVar7;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  pFVar7 = this_00 + (this->TaggedData).ArrayNum;
  do {
    if (this_00 == pFVar7) {
      return __return_storage_ptr__;
    }
    if ((this_00->Data).Data.field0_0x0.DebugPtr == (UPCGData *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3894552481450950346>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGData.cpp"
                         ,0x136,"Data.Data");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    else if (this_00->Pin == *param_1) {
      pUVar6 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar6);
      if (bVar3) {
        pFVar1 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
        if (((pFVar1 <= this_00) && (this_00 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar5;
        }
        iVar4 = __return_storage_ptr__->ArrayNum;
        if (iVar4 == __return_storage_ptr__->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar4 + 1;
        FPCGTaggedData::FPCGTaggedData
                  ((FPCGTaggedData *)
                   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),
                   this_00);
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}

// GetSpatialUnionOfInputsByPin @ 149f05000

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
FPCGDataCollection::GetSpatialUnionOfInputsByPin
          (FPCGDataCollection *this,FName *param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  UPCGSpatialData *pUVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGData.cpp"
                       ,0x15b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UPCGSpatialData *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = GetSpatialUnionOfInputsByPin(this,(FPCGContext *)0x0,param_1,param_2);
  return pUVar3;
}

// GetSpatialUnionOfInputsByPin @ 149f05070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGSpatialData * __thiscall
FPCGDataCollection::GetSpatialUnionOfInputsByPin
          (FPCGDataCollection *this,FPCGContext *param_1,FName *param_2,bool *param_3)

{
  UPCGData *pUVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UClass *pUVar6;
  UPCGSpatialData *pUVar7;
  UObject *pUVar8;
  FObjectPtr_u_0 this_00;
  FPCGTaggedData *pFVar9;
  FPCGTaggedData *pFVar10;
  FObjectPtr_u_0 FVar11;
  FObjectPtr_u_0 *pFVar12;
  ForAnyElementType FVar13;
  FObjectPtr_u_0 FVar14;
  undefined1 local_res8 [8];
  FPCGContext *local_res10;
  FGCScopeGuard local_res18 [8];
  bool *local_res20;
  TObjectPtr<UObject> local_78;
  FObjectPtr_u_0 local_70;
  FObjectPtr_u_0 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  
  pFVar9 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  this_00.Handle = (UObject *)0x0;
  local_60.Data = (FScriptContainerElement *)0x0;
  pFVar10 = pFVar9 + (this->TaggedData).ArrayNum;
  local_58 = 0;
  local_res20 = param_3;
  FVar13.Data = local_60.Data;
  for (; local_res10 = param_1, local_60.Data = FVar13.Data, pFVar9 != pFVar10; pFVar9 = pFVar9 + 1)
  {
    if ((pFVar9->Pin == *param_2) &&
       (pUVar1 = (pFVar9->Data).Data.field0_0x0.DebugPtr, pUVar1 != (UPCGData *)0x0)) {
      pUVar6 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      lVar2 = pUVar1->_padding_;
      iVar5 = (int)pUVar6->_padding_;
      if ((iVar5 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar5 * 8) ==
          &pUVar6->_padding_)) {
        if (((local_60.Data <= pFVar9) &&
            (pFVar9 < (FPCGTaggedData *)(local_60.Data + (longlong)local_58._4_4_ * 0x78))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UPCGSpatialData *)(*pcVar3)();
          return pUVar7;
        }
        iVar5 = (int)local_58;
        if ((int)local_58 == local_58._4_4_) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x878,&local_60,(int *)((longlong)&local_58 + 4));
        }
        local_58 = CONCAT44(local_58._4_4_,iVar5 + 1);
        FPCGTaggedData::FPCGTaggedData
                  ((FPCGTaggedData *)(local_60.Data + (longlong)iVar5 * 0x78),pFVar9);
      }
    }
    param_1 = local_res10;
    FVar13.Data = local_60.Data;
  }
  iVar5 = (int)local_58;
  pFVar12 = (FObjectPtr_u_0 *)((longlong)FVar13.Data + (longlong)(int)local_58 * 0xf * 8);
  FVar14.Handle = this_00.Handle;
  do {
    while( true ) {
      if ((int)local_58 != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if ((FObjectPtr_u_0 *)FVar13.Data == pFVar12) {
        *local_res20 = (UPCGUnionData *)this_00.Handle != (UPCGUnionData *)0x0;
        DestructItems<FPCGTaggedData,int>((FPCGTaggedData *)local_60.Data,(int)local_58);
        if ((FPCGTaggedData *)local_60.Data != (FPCGTaggedData *)0x0) {
          FMemory::Free(local_60.Data);
        }
        return (UPCGSpatialData *)FVar14.Handle;
      }
      FVar11 = (FObjectPtr_u_0)*(FObjectPtr_u_0 *)FVar13.Data;
      if ((UPCGUnionData *)FVar11.Handle != (UPCGUnionData *)0x0) break;
LAB_149f0537f:
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3894552481450950294>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Private\\PCGData.cpp"
                         ,0x16a,"SpatialInput");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pUVar7 = (UPCGSpatialData *)(*pcVar3)();
        return pUVar7;
      }
      FVar13.Data = FVar13.Data + 0x78;
    }
    local_70 = FVar11;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(FVar11.Handle);
    }
    if ((UPCGUnionData *)local_70.Handle == (UPCGUnionData *)0x0) {
LAB_149f05224:
      FVar11.Handle = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UPCGSpatialData_NoRegister();
      bVar4 = FObjectPtr::IsA((FObjectPtr *)&local_70,pUVar6);
      FVar11 = local_70;
      if (!bVar4) goto LAB_149f05224;
    }
    if ((UPCGUnionData *)FVar11.Handle == (UPCGUnionData *)0x0) goto LAB_149f0537f;
    if ((UPCGUnionData *)FVar14.Handle == (UPCGUnionData *)0x0) {
      FVar13.Data = FVar13.Data + 0x78;
      FVar14 = FVar11;
    }
    else if ((UPCGUnionData *)this_00.Handle == (UPCGUnionData *)0x0) {
      bVar4 = IsInGameThread();
      if (param_1 == (FPCGContext *)0x0) {
        if ((!bVar4) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749225>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0xa9,"Context != nullptr || IsInGameThread()"), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UPCGSpatialData *)(*pcVar3)();
          return pUVar7;
        }
LAB_149f05281:
        pUVar8 = GetTransientPackageAsObject();
        this_00.Handle = (UObject *)NewObject<UPCGUnionData>(pUVar8);
      }
      else {
        if (bVar4) goto LAB_149f05281;
        if (((param_1->AsyncState).bIsRunningOnMainThread != false) &&
           (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<4331830188552749348>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x124,"!AsyncState.bIsRunningOnMainThread"), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UPCGSpatialData *)(*pcVar3)();
          return pUVar7;
        }
        FGCScopeGuard::FGCScopeGuard(local_res18);
        pUVar8 = GetTransientPackageAsObject();
        this_00.Handle = (UObject *)NewObject<UPCGUnionData>(pUVar8);
        FGCScopeGuard::~FGCScopeGuard(local_res18);
        if (((UPCGUnionData *)this_00.Handle == (UPCGUnionData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\PCGContext.h"
                               ,0x12a,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pUVar7 = (UPCGSpatialData *)(*pcVar3)();
          return pUVar7;
        }
        local_68.Handle = this_00.Handle;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UPCGUnionData *)this_00.Handle != (UPCGUnionData *)0x0)) {
          UE::GC::MarkAsReachable(this_00.Handle);
        }
        TSet<TObjectPtr<UObject>,DefaultKeyFuncs<TObjectPtr<UObject>,0>,FDefaultSetAllocator>::
        Emplace<TObjectPtr<UObject>_>(&param_1->AsyncObjects,&local_78,(bool *)&local_68);
        param_1 = local_res10;
      }
      UPCGUnionData::Initialize
                ((UPCGUnionData *)this_00.Handle,(UPCGSpatialData *)FVar14.Handle,
                 (UPCGSpatialData *)FVar11.Handle);
      FVar13.Data = FVar13.Data + 0x78;
      FVar14 = this_00;
    }
    else {
      UPCGUnionData::AddData((UPCGUnionData *)this_00.Handle,(UPCGSpatialData *)FVar11.Handle);
      FVar13.Data = FVar13.Data + 0x78;
    }
  } while( true );
}

// GetTaggedInputs @ 149f05780

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetTaggedInputs
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  FPCGTaggedData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGTaggedData *pFVar6;
  FPCGTaggedData *pFVar7;
  FString *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (this->TaggedData).ArrayNum;
  local_res8 = param_1;
  do {
    if (pFVar6 == pFVar7) {
      return __return_storage_ptr__;
    }
    bVar3 = `FPCGDataCollection::GetTaggedTypedInputs<UPCGSpatialData>'::__l2::<lambda_1>::
            operator()(&local_res8,pFVar6);
    if (bVar3) {
      pFVar1 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),pFVar6)
      ;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// GetTaggedParams @ 149f05890

TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> * __thiscall
FPCGDataCollection::GetTaggedParams
          (FPCGDataCollection *this,
          TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1)

{
  FPCGTaggedData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *pTVar5;
  FPCGTaggedData *pFVar6;
  FPCGTaggedData *pFVar7;
  FString *local_res8;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (this->TaggedData).ArrayNum;
  local_res8 = param_1;
  do {
    if (pFVar6 == pFVar7) {
      return __return_storage_ptr__;
    }
    bVar3 = `FPCGDataCollection::GetTaggedParams'::__l2::<lambda_1>::operator()(&local_res8,pFVar6);
    if (bVar3) {
      pFVar1 = (FPCGTaggedData *)(__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= pFVar6) && (pFVar6 < pFVar1 + __return_storage_ptr__->ArrayMax)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
      iVar4 = __return_storage_ptr__->ArrayNum;
      if (iVar4 == __return_storage_ptr__->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x878,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar4 + 1;
      FPCGTaggedData::FPCGTaggedData
                ((FPCGTaggedData *)
                 ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x78),pFVar6)
      ;
    }
    pFVar6 = pFVar6 + 1;
  } while( true );
}

// Reset @ 149f10ca0

void __thiscall FPCGDataCollection::Reset(FPCGDataCollection *this)

{
  int *piVar1;
  int iVar2;
  FPCGTaggedData *pFVar3;
  
  piVar1 = &(this->TaggedData).ArrayMax;
  pFVar3 = (FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data;
  iVar2 = (this->TaggedData).ArrayNum;
  if ((this->TaggedData).ArrayMax < 0) {
    DestructItems<FPCGTaggedData,int>(pFVar3,iVar2);
    (this->TaggedData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x78,8,0,(ForAnyElementType *)this,0,piVar1);
      this->bCancelExecution = false;
      return;
    }
  }
  else {
    DestructItems<FPCGTaggedData,int>(pFVar3,iVar2);
    (this->TaggedData).ArrayNum = 0;
  }
  this->bCancelExecution = false;
  return;
}

// StripEmptyPointData @ 149f14350

int __thiscall FPCGDataCollection::StripEmptyPointData(FPCGDataCollection *this)

{
  int iVar1;
  <lambda_1> local_res8 [32];
  
  iVar1 = TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
          RemoveAll<_FPCGDataCollection::StripEmptyPointData_::__l2::<lambda_1>_>
                    (&this->TaggedData,local_res8);
  return iVar1;
}

// GetSettings<UPCGBaseSubgraphSettings> @ 149f29660

UPCGBaseSubgraphSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGBaseSubgraphSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBaseSubgraphSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGBaseSubgraphSettings *)local_res8[0].Handle == (UPCGBaseSubgraphSettings *)0x0) {
        return (UPCGBaseSubgraphSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGBaseSubgraphSettings *)local_res8[0].Handle != (UPCGBaseSubgraphSettings *)0x0) {
      pUVar3 = UPCGBaseSubgraphSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGBaseSubgraphSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGBaseSubgraphSettings *)0x0;
}

// GetSettings<UPCGSubgraphSettings> @ 149f296d0

UPCGSubgraphSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSubgraphSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSubgraphSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSubgraphSettings *)local_res8[0].Handle == (UPCGSubgraphSettings *)0x0) {
        return (UPCGSubgraphSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSubgraphSettings *)local_res8[0].Handle != (UPCGSubgraphSettings *)0x0) {
      pUVar3 = UPCGSubgraphSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSubgraphSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSubgraphSettings *)0x0;
}

// ~FPCGDataCollection @ 14a019180

void __thiscall FPCGDataCollection::~FPCGDataCollection(FPCGDataCollection *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->DataCrcs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGTaggedData,int>
            ((FPCGTaggedData *)(this->TaggedData).AllocatorInstance.Data,(this->TaggedData).ArrayNum
            );
  pFVar1 = (this->TaggedData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

