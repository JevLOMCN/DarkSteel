// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCGGeometryScriptInterop
// Functions: 11

// GetSettings<UPCGAppendMeshesFromPointsSettings> @ 14cee09d0

UPCGAppendMeshesFromPointsSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGAppendMeshesFromPointsSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGAppendMeshesFromPointsSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGAppendMeshesFromPointsSettings *)local_res8[0].Handle ==
          (UPCGAppendMeshesFromPointsSettings *)0x0) {
        return (UPCGAppendMeshesFromPointsSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGAppendMeshesFromPointsSettings *)local_res8[0].Handle !=
        (UPCGAppendMeshesFromPointsSettings *)0x0) {
      pUVar3 = UPCGAppendMeshesFromPointsSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGAppendMeshesFromPointsSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGAppendMeshesFromPointsSettings *)0x0;
}

// GetSettings<UPCGBooleanOperationSettings> @ 14cee0a40

UPCGBooleanOperationSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGBooleanOperationSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGBooleanOperationSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGBooleanOperationSettings *)local_res8[0].Handle ==
          (UPCGBooleanOperationSettings *)0x0) {
        return (UPCGBooleanOperationSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGBooleanOperationSettings *)local_res8[0].Handle != (UPCGBooleanOperationSettings *)0x0)
    {
      pUVar3 = UPCGBooleanOperationSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGBooleanOperationSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGBooleanOperationSettings *)0x0;
}

// GetSettings<UPCGCreateEmptyDynamicMeshSettings> @ 14cee0ab0

UPCGCreateEmptyDynamicMeshSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGCreateEmptyDynamicMeshSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGCreateEmptyDynamicMeshSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGCreateEmptyDynamicMeshSettings *)local_res8[0].Handle ==
          (UPCGCreateEmptyDynamicMeshSettings *)0x0) {
        return (UPCGCreateEmptyDynamicMeshSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGCreateEmptyDynamicMeshSettings *)local_res8[0].Handle !=
        (UPCGCreateEmptyDynamicMeshSettings *)0x0) {
      pUVar3 = UPCGCreateEmptyDynamicMeshSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGCreateEmptyDynamicMeshSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGCreateEmptyDynamicMeshSettings *)0x0;
}

// GetSettings<UPCGDynamicMeshTransformSettings> @ 14cee0b20

UPCGDynamicMeshTransformSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGDynamicMeshTransformSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGDynamicMeshTransformSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGDynamicMeshTransformSettings *)local_res8[0].Handle ==
          (UPCGDynamicMeshTransformSettings *)0x0) {
        return (UPCGDynamicMeshTransformSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGDynamicMeshTransformSettings *)local_res8[0].Handle !=
        (UPCGDynamicMeshTransformSettings *)0x0) {
      pUVar3 = UPCGDynamicMeshTransformSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGDynamicMeshTransformSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGDynamicMeshTransformSettings *)0x0;
}

// GetSettings<UPCGGetDynamicMeshDataSettings> @ 14cee0b90

UPCGGetDynamicMeshDataSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGGetDynamicMeshDataSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGGetDynamicMeshDataSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGGetDynamicMeshDataSettings *)local_res8[0].Handle ==
          (UPCGGetDynamicMeshDataSettings *)0x0) {
        return (UPCGGetDynamicMeshDataSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGGetDynamicMeshDataSettings *)local_res8[0].Handle !=
        (UPCGGetDynamicMeshDataSettings *)0x0) {
      pUVar3 = UPCGGetDynamicMeshDataSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGGetDynamicMeshDataSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGGetDynamicMeshDataSettings *)0x0;
}

// GetSettings<UPCGMergeDynamicMeshesSettings> @ 14cee0c00

UPCGMergeDynamicMeshesSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGMergeDynamicMeshesSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMergeDynamicMeshesSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGMergeDynamicMeshesSettings *)local_res8[0].Handle ==
          (UPCGMergeDynamicMeshesSettings *)0x0) {
        return (UPCGMergeDynamicMeshesSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGMergeDynamicMeshesSettings *)local_res8[0].Handle !=
        (UPCGMergeDynamicMeshesSettings *)0x0) {
      pUVar3 = UPCGMergeDynamicMeshesSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGMergeDynamicMeshesSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGMergeDynamicMeshesSettings *)0x0;
}

// GetSettings<UPCGMeshSamplerSettings> @ 14cee0c70

UPCGMeshSamplerSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGMeshSamplerSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGMeshSamplerSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGMeshSamplerSettings *)local_res8[0].Handle == (UPCGMeshSamplerSettings *)0x0) {
        return (UPCGMeshSamplerSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGMeshSamplerSettings *)local_res8[0].Handle != (UPCGMeshSamplerSettings *)0x0) {
      pUVar3 = UPCGMeshSamplerSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGMeshSamplerSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGMeshSamplerSettings *)0x0;
}

// GetSettings<UPCGPrimitiveCrossSectionSettings> @ 14cee0ce0

UPCGPrimitiveCrossSectionSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGPrimitiveCrossSectionSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGPrimitiveCrossSectionSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGPrimitiveCrossSectionSettings *)local_res8[0].Handle ==
          (UPCGPrimitiveCrossSectionSettings *)0x0) {
        return (UPCGPrimitiveCrossSectionSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGPrimitiveCrossSectionSettings *)local_res8[0].Handle !=
        (UPCGPrimitiveCrossSectionSettings *)0x0) {
      pUVar3 = UPCGPrimitiveCrossSectionSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGPrimitiveCrossSectionSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGPrimitiveCrossSectionSettings *)0x0;
}

// GetSettings<UPCGSpawnDynamicMeshSettings> @ 14cee0d50

UPCGSpawnDynamicMeshSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSpawnDynamicMeshSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSpawnDynamicMeshSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSpawnDynamicMeshSettings *)local_res8[0].Handle ==
          (UPCGSpawnDynamicMeshSettings *)0x0) {
        return (UPCGSpawnDynamicMeshSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSpawnDynamicMeshSettings *)local_res8[0].Handle != (UPCGSpawnDynamicMeshSettings *)0x0)
    {
      pUVar3 = UPCGSpawnDynamicMeshSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSpawnDynamicMeshSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSpawnDynamicMeshSettings *)0x0;
}

// GetSettings<UPCGSplineToMeshSettings> @ 14cee0dc0

UPCGSplineToMeshSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGSplineToMeshSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGSplineToMeshSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGSplineToMeshSettings *)local_res8[0].Handle == (UPCGSplineToMeshSettings *)0x0) {
        return (UPCGSplineToMeshSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGSplineToMeshSettings *)local_res8[0].Handle != (UPCGSplineToMeshSettings *)0x0) {
      pUVar3 = UPCGSplineToMeshSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGSplineToMeshSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGSplineToMeshSettings *)0x0;
}

// GetSettings<UPCGStaticMeshToDynamicMeshSettings> @ 14cee0e30

UPCGStaticMeshToDynamicMeshSettings * __thiscall
FPCGDataCollection::GetSettings<UPCGStaticMeshToDynamicMeshSettings>(FPCGDataCollection *this)

{
  bool bVar1;
  FObjectPtr_u_0 *pFVar2;
  UClass *pUVar3;
  FObjectPtr_u_0 local_res8 [4];
  
  pFVar2 = (FObjectPtr_u_0 *)
           TArray<FPCGTaggedData,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_FPCGDataCollection::GetSettings<UPCGStaticMeshToDynamicMeshSettings>_::__l2::<lambda_1>_>
                     (&this->TaggedData,(<lambda_1>)local_res8[0]._0_1_);
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    local_res8[0] = (FObjectPtr_u_0)pFVar2->Handle;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if ((UPCGStaticMeshToDynamicMeshSettings *)local_res8[0].Handle ==
          (UPCGStaticMeshToDynamicMeshSettings *)0x0) {
        return (UPCGStaticMeshToDynamicMeshSettings *)0x0;
      }
      UE::GC::MarkAsReachable(local_res8[0].Handle);
    }
    if ((UPCGStaticMeshToDynamicMeshSettings *)local_res8[0].Handle !=
        (UPCGStaticMeshToDynamicMeshSettings *)0x0) {
      pUVar3 = UPCGStaticMeshToDynamicMeshSettings::StaticClass();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)local_res8,pUVar3);
      if (bVar1) {
        return (UPCGStaticMeshToDynamicMeshSettings *)local_res8[0].Handle;
      }
    }
  }
  return (UPCGStaticMeshToDynamicMeshSettings *)0x0;
}

