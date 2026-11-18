// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProceduralVegetation
// Functions: 12

// GetSettings<UPVBoneReductionSettings> @ 14da5bb60

UPVBoneReductionSettings * __thiscall
FPCGDataCollection::GetSettings<UPVBoneReductionSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVBoneReductionSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVBoneReductionSettings *)local_res8[0].Handle == (UPVBoneReductionSettings *)0x0) {
        return (UPVBoneReductionSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVBoneReductionSettings *)local_res8[0].Handle != (UPVBoneReductionSettings *)0x0) {
      pUVar3 = UPVBoneReductionSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVBoneReductionSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVBoneReductionSettings *)0x0;
}

// GetSettings<UPVCarveSettings> @ 14da5bbd0

UPVCarveSettings * __thiscall
FPCGDataCollection::GetSettings<UPVCarveSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVCarveSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVCarveSettings *)local_res8[0].Handle == (UPVCarveSettings *)0x0) {
        return (UPVCarveSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVCarveSettings *)local_res8[0].Handle != (UPVCarveSettings *)0x0) {
      pUVar3 = UPVCarveSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVCarveSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVCarveSettings *)0x0;
}

// GetSettings<UPVFoliageDistributorSettings> @ 14da5bc40

UPVFoliageDistributorSettings * __thiscall
FPCGDataCollection::GetSettings<UPVFoliageDistributorSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVFoliageDistributorSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVFoliageDistributorSettings *)local_res8[0].Handle ==
          (UPVFoliageDistributorSettings *)0x0) {
        return (UPVFoliageDistributorSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVFoliageDistributorSettings *)local_res8[0].Handle !=
        (UPVFoliageDistributorSettings *)0x0) {
      pUVar3 = UPVFoliageDistributorSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVFoliageDistributorSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVFoliageDistributorSettings *)0x0;
}

// GetSettings<UPVFoliagePaletteSettings> @ 14da5bcb0

UPVFoliagePaletteSettings * __thiscall
FPCGDataCollection::GetSettings<UPVFoliagePaletteSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVFoliagePaletteSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVFoliagePaletteSettings *)local_res8[0].Handle == (UPVFoliagePaletteSettings *)0x0) {
        return (UPVFoliagePaletteSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVFoliagePaletteSettings *)local_res8[0].Handle != (UPVFoliagePaletteSettings *)0x0) {
      pUVar3 = UPVFoliagePaletteSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVFoliagePaletteSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVFoliagePaletteSettings *)0x0;
}

// GetSettings<UPVGravitySettings> @ 14da5bd20

UPVGravitySettings * __thiscall
FPCGDataCollection::GetSettings<UPVGravitySettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVGravitySettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVGravitySettings *)local_res8[0].Handle == (UPVGravitySettings *)0x0) {
        return (UPVGravitySettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVGravitySettings *)local_res8[0].Handle != (UPVGravitySettings *)0x0) {
      pUVar3 = UPVGravitySettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVGravitySettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVGravitySettings *)0x0;
}

// GetSettings<UPVImporterSettings> @ 14da5bd90

UPVImporterSettings * __thiscall
FPCGDataCollection::GetSettings<UPVImporterSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVImporterSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVImporterSettings *)local_res8[0].Handle == (UPVImporterSettings *)0x0) {
        return (UPVImporterSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVImporterSettings *)local_res8[0].Handle != (UPVImporterSettings *)0x0) {
      pUVar3 = UPVImporterSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVImporterSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVImporterSettings *)0x0;
}

// GetSettings<UPVMeshBuilderSettings> @ 14da5be00

UPVMeshBuilderSettings * __thiscall
FPCGDataCollection::GetSettings<UPVMeshBuilderSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVMeshBuilderSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVMeshBuilderSettings *)local_res8[0].Handle == (UPVMeshBuilderSettings *)0x0) {
        return (UPVMeshBuilderSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVMeshBuilderSettings *)local_res8[0].Handle != (UPVMeshBuilderSettings *)0x0) {
      pUVar3 = UPVMeshBuilderSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVMeshBuilderSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVMeshBuilderSettings *)0x0;
}

// GetSettings<UPVOutputSettings> @ 14da5be70

UPVOutputSettings * __thiscall
FPCGDataCollection::GetSettings<UPVOutputSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVOutputSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVOutputSettings *)local_res8[0].Handle == (UPVOutputSettings *)0x0) {
        return (UPVOutputSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVOutputSettings *)local_res8[0].Handle != (UPVOutputSettings *)0x0) {
      pUVar3 = UPVOutputSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVOutputSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVOutputSettings *)0x0;
}

// GetSettings<UPVPresetLoaderSettings> @ 14da5bee0

UPVPresetLoaderSettings * __thiscall
FPCGDataCollection::GetSettings<UPVPresetLoaderSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVPresetLoaderSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVPresetLoaderSettings *)local_res8[0].Handle == (UPVPresetLoaderSettings *)0x0) {
        return (UPVPresetLoaderSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVPresetLoaderSettings *)local_res8[0].Handle != (UPVPresetLoaderSettings *)0x0) {
      pUVar3 = UPVPresetLoaderSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVPresetLoaderSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVPresetLoaderSettings *)0x0;
}

// GetSettings<UPVRemoveBranchesSettings> @ 14da5bf50

UPVRemoveBranchesSettings * __thiscall
FPCGDataCollection::GetSettings<UPVRemoveBranchesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVRemoveBranchesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVRemoveBranchesSettings *)local_res8[0].Handle == (UPVRemoveBranchesSettings *)0x0) {
        return (UPVRemoveBranchesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVRemoveBranchesSettings *)local_res8[0].Handle != (UPVRemoveBranchesSettings *)0x0) {
      pUVar3 = UPVRemoveBranchesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVRemoveBranchesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVRemoveBranchesSettings *)0x0;
}

// GetSettings<UPVScaleSettings> @ 14da5bfc0

UPVScaleSettings * __thiscall
FPCGDataCollection::GetSettings<UPVScaleSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVScaleSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVScaleSettings *)local_res8[0].Handle == (UPVScaleSettings *)0x0) {
        return (UPVScaleSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVScaleSettings *)local_res8[0].Handle != (UPVScaleSettings *)0x0) {
      pUVar3 = UPVScaleSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVScaleSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVScaleSettings *)0x0;
}

// GetSettings<UPVSlopeSettings> @ 14da5c030

UPVSlopeSettings * __thiscall
FPCGDataCollection::GetSettings<UPVSlopeSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPVSlopeSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPVSlopeSettings *)local_res8[0].Handle == (UPVSlopeSettings *)0x0) {
        return (UPVSlopeSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPVSlopeSettings *)local_res8[0].Handle != (UPVSlopeSettings *)0x0) {
      pUVar3 = UPVSlopeSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPVSlopeSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPVSlopeSettings *)0x0;
}

