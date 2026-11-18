// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// AllocateOneFrameResource<FColoredMaterialRenderProxy,FMaterialRenderProxy_*,FColor_const_&> @ 146dcba30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FColoredMaterialRenderProxy * __thiscall
FMeshElementCollector::
AllocateOneFrameResource<FColoredMaterialRenderProxy,FMaterialRenderProxy_*,FColor_const_&>
          (FMeshElementCollector *this,FMaterialRenderProxy **param_1,FColor *param_2)

{
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar1;
  FName FVar2;
  FNameEntryId FVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar4;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar5;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar6;
  undefined4 extraout_var;
  bool bVar7;
  uint local_res8 [2];
  FLinearColor_u_0 local_18;
  
  paVar1 = &this->OneFrameResources->Next;
  aVar4 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
  *(undefined8 *)((longlong)aVar4 + 8) = 0;
  *(undefined ***)aVar4 =
       &
       ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  TVar5.Next = *paVar1;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar4 + 8) = TVar5.Next;
    LOCK();
    aVar6 = *paVar1;
    bVar7 = TVar5.Next == aVar6;
    if (bVar7) {
      *paVar1 = aVar4;
      aVar6 = TVar5.Next;
    }
    UNLOCK();
    TVar5.Next = aVar6;
  } while (!bVar7);
  FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
  local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res8[1] = 0;
  local_18._s_0.R = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.R];
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = local_res8[0];
  local_18._s_0.G = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.G];
  local_18._s_0.B = FLinearColor::sRGBToLinearTable[(param_2->field0_0x0)._s_0.B];
  local_18._s_0.A = (float)(param_2->field0_0x0)._s_0.A * __real_3b808081;
  FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
            ((FColoredMaterialRenderProxy *)((longlong)aVar4 + 0x10),*param_1,
             (FLinearColor *)&local_18._s_0,FVar2);
  return (FColoredMaterialRenderProxy *)((longlong)aVar4 + 0x10);
}

