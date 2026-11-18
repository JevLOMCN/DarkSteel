// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FMaterialCache @ 147abbeb0

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

FMaterialCache * __thiscall
FDebugRenderSceneProxy::FMaterialCache::FMaterialCache
          (FMaterialCache *this,FMeshElementCollector *param_1,bool param_2,UMaterial *param_3)

{
  UMaterial *local_res8;
  
  this->Collector = param_1;
  *(undefined8 *)&this->MeshColorInstances = 0;
  *(undefined8 *)&(this->MeshColorInstances).field_0x8 = 0;
  *(undefined8 *)&(this->MeshColorInstances).field_0x20 = 0;
  *(undefined4 *)&(this->MeshColorInstances).field_0x28 = 0;
  *(undefined4 *)&(this->MeshColorInstances).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshColorInstances).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshColorInstances).field_0x34 = 0;
  *(undefined8 *)&(this->MeshColorInstances).field_0x40 = 0;
  *(undefined4 *)&(this->MeshColorInstances).field_0x48 = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->SolidMeshMaterial).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=(&(this->SolidMeshMaterial).WeakPtr,(FObjectPtr)&local_res8);
  this->bUseFakeLight = param_2;
  return this;
}

// operator[] @ 147ac0a20

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

FMaterialRenderProxy * __thiscall
FDebugRenderSceneProxy::FMaterialCache::operator[](FMaterialCache *this,FLinearColor *param_1)

{
  longlong lVar1;
  FMeshElementCollector *pFVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar3;
  bool bVar4;
  int iVar5;
  FNameEntryId FVar6;
  UObject *pUVar7;
  FMaterialRenderProxy *pFVar8;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar9;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar10;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar11;
  FName *pFVar12;
  undefined8 *puVar13;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar14;
  undefined4 extraout_var;
  uint uVar15;
  undefined8 *puVar16;
  FName FVar17;
  undefined1 *puVar18;
  uint local_res8 [2];
  TPairInitializer<unsigned_int_const_&,FMaterialRenderProxy_*_const_&> local_res18;
  uint *local_38;
  FMaterialRenderProxy ***local_30;
  
  local_res18.Value = (FMaterialRenderProxy **)0x0;
  local_res8[0] = FCrc::MemCrc_DEPRECATED(param_1,0x10,0);
  if (*(int *)&(this->MeshColorInstances).field_0x8 !=
      *(int *)&(this->MeshColorInstances).field_0x34) {
    puVar18 = *(undefined1 **)&(this->MeshColorInstances).field_0x40;
    uVar15 = *(int *)&(this->MeshColorInstances).field_0x48 - 1;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->MeshColorInstances).field_0x38;
    }
    iVar5 = *(int *)(puVar18 + (ulonglong)(local_res8[0] & uVar15) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->MeshColorInstances).field_0x0;
      do {
        if (*(uint *)(lVar1 + (longlong)iVar5 * 0x18) == local_res8[0]) {
          iVar5 = *(int *)(puVar18 + (ulonglong)(local_res8[0] & uVar15) * 4);
          while ((puVar16 = (undefined8 *)0x0, iVar5 != -1 &&
                 (puVar16 = (undefined8 *)(lVar1 + (longlong)iVar5 * 0x18),
                 *(uint *)(lVar1 + (longlong)iVar5 * 0x18) != local_res8[0]))) {
            iVar5 = *(int *)(puVar16 + 2);
          }
          puVar13 = puVar16 + 1;
          if (puVar16 == (undefined8 *)0x0) {
            puVar13 = (undefined8 *)0x0;
          }
          return (FMaterialRenderProxy *)*puVar13;
        }
        iVar5 = *(int *)(lVar1 + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  if (this->bUseFakeLight != false) {
    bVar4 = FWeakObjectPtr::IsValid(&(this->SolidMeshMaterial).WeakPtr);
    if (bVar4) {
      pFVar2 = this->Collector;
      pUVar7 = FWeakObjectPtr::Get(&(this->SolidMeshMaterial).WeakPtr);
      pFVar8 = (FMaterialRenderProxy *)(**(code **)(*(longlong *)pUVar7 + 0x310))(pUVar7);
      paVar3 = &pFVar2->OneFrameResources->Next;
      aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
               )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
      *(undefined8 *)((longlong)aVar9 + 8) = 0;
      *(undefined ***)aVar9 =
           &
           ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
      ;
      TVar10.Next = *paVar3;
      do {
        *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
          *)((longlong)aVar9 + 8) = TVar10.Next;
        LOCK();
        aVar11 = *paVar3;
        bVar4 = TVar10.Next == aVar11;
        if (bVar4) {
          *paVar3 = aVar9;
          aVar11 = TVar10.Next;
        }
        UNLOCK();
        TVar10.Next = aVar11;
      } while (!bVar4);
      pFVar12 = ::FName::FName((FName *)&local_res18,"GizmoColor");
      FVar17 = *pFVar12;
      goto LAB_147ac0bf9;
    }
  }
  pFVar2 = this->Collector;
  pFVar8 = (FMaterialRenderProxy *)
           (**(code **)(((GEngine->DebugMeshMaterial).field0_0x0.DebugPtr)->_padding_ + 0x310))();
  paVar3 = &pFVar2->OneFrameResources->Next;
  aVar9 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
           )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xf0,8);
  *(undefined8 *)((longlong)aVar9 + 8) = 0;
  *(undefined ***)aVar9 =
       &
       ___7__TObject_VFColoredMaterialRenderProxy_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  aVar11 = *paVar3;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar9 + 8) = aVar11;
    LOCK();
    aVar14 = *paVar3;
    bVar4 = aVar11 == aVar14;
    if (bVar4) {
      *paVar3 = aVar9;
      aVar14 = aVar11;
    }
    UNLOCK();
    aVar11 = aVar14;
  } while (!bVar4);
  FVar6 = FNameEntryId::FromValidEName((EName)&local_res18);
  local_res18.Key._0_4_ = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  local_res18.Key._4_4_ = 0;
  FVar17.Number = 0;
  FVar17.ComparisonIndex.Value = (uint)local_res18.Key;
LAB_147ac0bf9:
  FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
            ((FColoredMaterialRenderProxy *)((longlong)aVar9 + 0x10),pFVar8,param_1,FVar17);
  local_38 = local_res8;
  local_30 = &local_res18.Value;
  local_res18.Value = (FMaterialRenderProxy **)((longlong)aVar9 + 0x10);
  TSet<TTuple<unsigned_int,FMaterialRenderProxy_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FMaterialRenderProxy_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,FMaterialRenderProxy_*_const_&>_>
            ((TSet<TTuple<unsigned_int,FMaterialRenderProxy_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FMaterialRenderProxy_*,0>,FDefaultSetAllocator>
              *)&this->MeshColorInstances,&local_res18,(bool *)&local_38);
  return (FMaterialRenderProxy *)(FColoredMaterialRenderProxy *)local_res18.Value;
}

