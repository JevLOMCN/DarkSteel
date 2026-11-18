// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// Init @ 1485e49a0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::Init(FSkeletalMeshUpdatePacketGPUSkin *this,FInitializer *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->NumRemoves;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->DynamicDatasToFree).ArrayMax < (int)uVar1) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FDynamicSkelMeshObjectDataGPUSkin_*>_>
              (8,8,uVar1,&(this->DynamicDatasToFree).AllocatorInstance,
               (this->DynamicDatasToFree).ArrayNum,&(this->DynamicDatasToFree).ArrayMax);
  }
  uVar1 = param_1->NumUpdates;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->MeshDeformer).ArrayMax < (int)uVar1) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshObjectGPUSkin_*>_>
              (8,8,uVar1,&(this->MeshDeformer).AllocatorInstance,(this->MeshDeformer).ArrayNum,
               &(this->MeshDeformer).ArrayMax);
  }
  uVar1 = param_1->NumUpdates;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
  }
  if ((this->SkinCache).ArrayMax < (int)uVar1) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdatePacketGPUSkin::FCommand>_>
              (0x10,8,uVar1,&(this->SkinCache).AllocatorInstance,(this->SkinCache).ArrayNum,
               &(this->SkinCache).ArrayMax);
  }
  uVar1 = param_1->NumUpdates;
  if (-1 < (int)uVar1) {
    if ((this->Inline).ArrayMax < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdatePacketGPUSkin::FCommand>_>
                (0x10,8,uVar1,&(this->Inline).AllocatorInstance,(this->Inline).ArrayNum,
                 &(this->Inline).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
}

// ProcessStage_MeshDeformer @ 1485e4ad0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::ProcessStage_MeshDeformer
          (FSkeletalMeshUpdatePacketGPUSkin *this,FRHICommandList *param_1,FTaskEvent *param_2)

{
  FSkeletalMeshObjectGPUSkin **ppFVar1;
  int iVar2;
  FSkeletalMeshObjectGPUSkin **ppFVar3;
  undefined1 local_res8 [8];
  
  ppFVar3 = (this->MeshDeformer).AllocatorInstance.Data;
  iVar2 = (this->MeshDeformer).ArrayNum;
  ppFVar1 = ppFVar3 + iVar2;
  while( true ) {
    if ((this->MeshDeformer).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FSkeletalMeshObjectGPUSkin_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (ppFVar3 == ppFVar1) break;
    FSkeletalMeshObjectGPUSkin::ProcessUpdatedDynamicData(*ppFVar3,param_1,Raster);
    ppFVar3 = ppFVar3 + 1;
  }
  return;
}

// ProcessStage_Inline @ 1485e4b40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::ProcessStage_Inline
          (FSkeletalMeshUpdatePacketGPUSkin *this,FRHICommandList *param_1,FTaskEvent *param_2)

{
  int iVar1;
  FCommand *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FSkeletalMeshUpdatePacketGPUSkin::FCommand,int> local_18;
  
  pFVar2 = (this->Inline).AllocatorInstance.Data;
  iVar1 = (this->Inline).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  ProcessUpdatedDynamicData(this,&local_18,param_1);
  return;
}

// ProcessStage_SkinCache @ 1485e4bd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::ProcessStage_SkinCache
          (FSkeletalMeshUpdatePacketGPUSkin *this,FRHICommandList *param_1,FTaskEvent *param_2)

{
  int iVar1;
  FCommand *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FSkeletalMeshUpdatePacketGPUSkin::FCommand,int> local_18;
  
  pFVar2 = (this->SkinCache).AllocatorInstance.Data;
  iVar1 = (this->SkinCache).ArrayNum;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = pFVar2;
  ProcessUpdatedDynamicData(this,&local_18,param_1);
  return;
}

// ProcessStage_Upload @ 1485e4c50

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::ProcessStage_Upload
          (FSkeletalMeshUpdatePacketGPUSkin *this,FRHICommandList *param_1)

{
  FSkeletalMeshObjectGPUSkin **ppFVar1;
  FDynamicSkelMeshObjectDataGPUSkin **ppFVar2;
  int iVar3;
  FSkeletalMeshObjectGPUSkin *pFVar4;
  FDynamicSkelMeshObjectDataGPUSkin *this_00;
  code *pcVar5;
  bool bVar6;
  ERHIPipeline EVar7;
  int iVar8;
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1> *this_01;
  FSkeletalMeshObjectGPUSkin **ppFVar9;
  FCommand *pFVar10;
  FDynamicSkelMeshObjectDataGPUSkin **ppFVar11;
  FCommand *pFVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  ppFVar9 = (this->MeshDeformer).AllocatorInstance.Data;
  iVar3 = (this->MeshDeformer).ArrayNum;
  ppFVar1 = ppFVar9 + iVar3;
  while( true ) {
    if ((this->MeshDeformer).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSkeletalMeshObjectGPUSkin_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (ppFVar9 == ppFVar1) break;
    FSkeletalMeshObjectGPUSkin::UpdateBufferData(*ppFVar9,param_1,Raster);
    ppFVar9 = ppFVar9 + 1;
  }
  iVar3 = (this->Inline).ArrayNum;
  pFVar10 = (this->Inline).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12 = pFVar10 + iVar3;
  for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 1) {
    pFVar4 = pFVar10->MeshObject;
    FSkeletalMeshObjectGPUSkin::UpdateBufferData(pFVar4,param_1,Raster);
    if (pFVar10->bUpdateRayTracingMode != false) {
      FSkeletalMeshObjectGPUSkin::UpdateBufferData(pFVar4,param_1,RayTracing);
    }
  }
  EVar7 = FRHICommandListBase::SwitchPipeline
                    ((FRHICommandListBase *)param_1,(ERHIPipeline)this->_padding_);
  iVar3 = (this->SkinCache).ArrayNum;
  pFVar10 = (this->SkinCache).AllocatorInstance.Data;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar12 = pFVar10 + iVar3;
  for (; pFVar10 != pFVar12; pFVar10 = pFVar10 + 1) {
    pFVar4 = pFVar10->MeshObject;
    FSkeletalMeshObjectGPUSkin::UpdateBufferData(pFVar4,param_1,Raster);
    if (pFVar10->bUpdateRayTracingMode != false) {
      FSkeletalMeshObjectGPUSkin::UpdateBufferData(pFVar4,param_1,RayTracing);
    }
  }
  FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,EVar7);
  ppFVar11 = (this->DynamicDatasToFree).AllocatorInstance.Data;
  iVar3 = (this->DynamicDatasToFree).ArrayNum;
  ppFVar2 = ppFVar11 + iVar3;
  while( true ) {
    if ((this->DynamicDatasToFree).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FDynamicSkelMeshObjectDataGPUSkin_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (ppFVar11 == ppFVar2) break;
    this_00 = *ppFVar11;
    if (this_00 != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
      iVar8 = FDynamicSkelMeshObjectDataGPUSkin::Reset(this_00);
      *(int *)&this_00->field_0x14 = iVar8;
      LOCK();
      TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool.NumFreeBytes =
           TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool.NumFreeBytes +
           (longlong)iVar8;
      UNLOCK();
      FSkeletalMeshDynamicDataPool::AddStatsMemory
                ((FSkeletalMeshDynamicDataPool *)
                 &TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataGPUSkin>::Pool,
                 *(int *)&this_00->field_0x10,iVar8);
      this_01 = (FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1> *)
                TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataGPUSkin>::GetBucket
                          (*(int *)&this_00->field_0x10);
      FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataGPUSkin,0,1>::Push(this_01,this_00);
    }
    ppFVar11 = ppFVar11 + 1;
  }
  return;
}

// Add @ 14862ce30

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::Add
          (FSkeletalMeshUpdatePacketGPUSkin *this,FSkeletalMeshObjectGPUSkin *param_1,
          FDynamicSkelMeshObjectDataGPUSkin *param_2)

{
  int *piVar1;
  ESkeletalMeshGPUSkinTechnique EVar2;
  FDynamicSkelMeshObjectDataGPUSkin *this_00;
  bool bVar3;
  int iVar4;
  FCommand *pFVar5;
  
  if (param_1->DynamicData != (FDynamicSkelMeshObjectDataGPUSkin *)0x0) {
    iVar4 = (this->DynamicDatasToFree).ArrayNum;
    piVar1 = &(this->DynamicDatasToFree).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FDynamicSkelMeshObjectDataGPUSkin_*>_>
                        (0x808,&(this->DynamicDatasToFree).AllocatorInstance,piVar1);
    }
    (this->DynamicDatasToFree).ArrayNum = iVar4 + 1;
    (this->DynamicDatasToFree).AllocatorInstance.Data[iVar4] = param_1->DynamicData;
  }
  this_00 = param_1->DynamicData;
  if ((((this_00 == (FDynamicSkelMeshObjectDataGPUSkin *)0x0) ||
       (0 < (param_2->ExternalMorphWeightData).NumActiveMorphTargets)) ||
      (this_00->LODIndex != param_2->LODIndex)) ||
     (bVar3 = FDynamicSkelMeshObjectDataGPUSkin::ActiveMorphTargetsEqual
                        (this_00,&param_2->ActiveMorphTargets,&param_2->MorphTargetWeights), !bVar3)
     ) {
    param_1->bMorphNeedsUpdate = true;
    param_1->DynamicData = param_2;
  }
  else {
    param_1->bMorphNeedsUpdate = false;
    param_1->DynamicData = param_2;
  }
  EVar2 = param_2->GPUSkinTechnique;
  if (EVar2 == Inline) {
    iVar4 = (this->Inline).ArrayNum;
    piVar1 = &(this->Inline).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdatePacketGPUSkin::FCommand>_>
                        (0x810,&(this->Inline).AllocatorInstance,piVar1);
    }
    (this->Inline).ArrayNum = iVar4 + 1;
    pFVar5 = (this->Inline).AllocatorInstance.Data;
  }
  else {
    if (EVar2 != GPUSkinCache) {
      if (EVar2 != MeshDeformer) {
        return;
      }
      iVar4 = (this->MeshDeformer).ArrayNum;
      piVar1 = &(this->MeshDeformer).ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshObjectGPUSkin_*>_>
                          (0x808,&(this->MeshDeformer).AllocatorInstance,piVar1);
      }
      (this->MeshDeformer).ArrayNum = iVar4 + 1;
      (this->MeshDeformer).AllocatorInstance.Data[iVar4] = param_1;
      return;
    }
    iVar4 = (this->SkinCache).ArrayNum;
    piVar1 = &(this->SkinCache).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FSkeletalMeshUpdatePacketGPUSkin::FCommand>_>
                        (0x810,&(this->SkinCache).AllocatorInstance,piVar1);
    }
    (this->SkinCache).ArrayNum = iVar4 + 1;
    pFVar5 = (this->SkinCache).AllocatorInstance.Data;
  }
  pFVar5[iVar4].bUpdateRayTracingMode = false;
  pFVar5[iVar4].MeshObject = param_1;
  return;
}

// Free @ 1486416f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::Free
          (FSkeletalMeshUpdatePacketGPUSkin *this,FDynamicSkelMeshObjectDataGPUSkin *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = (this->DynamicDatasToFree).ArrayNum;
  piVar1 = &(this->DynamicDatasToFree).ArrayMax;
  if (iVar2 == *piVar1) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FDynamicSkelMeshObjectDataGPUSkin_*>_>
                      (0x808,&(this->DynamicDatasToFree).AllocatorInstance,piVar1);
  }
  (this->DynamicDatasToFree).ArrayNum = iVar2 + 1;
  (this->DynamicDatasToFree).AllocatorInstance.Data[iVar2] = param_1;
  return;
}

// ProcessUpdatedDynamicData @ 14865d240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData
          (FSkeletalMeshUpdatePacketGPUSkin *this,
          TArrayView<FSkeletalMeshUpdatePacketGPUSkin::FCommand,int> *param_1,
          FRHICommandList *param_2)

{
  FRayTracingGeometry *this_00;
  FSkinCacheEntryThrottled *pFVar1;
  FSkinCacheEntryThrottled *pFVar2;
  uint uVar3;
  FDynamicSkelMeshObjectDataGPUSkin *pFVar4;
  code *pcVar5;
  FSkeletalMeshObjectGPUSkin *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  <lambda_1> <Var9;
  FRHICommandList *pFVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FSkinCacheEntryThrottled *pFVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  longlong lVar24;
  FSkeletalMeshObjectGPUSkin *pFVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  ForElementType<_private:_void___cdecl_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData(TArrayView<FSkeletalMeshUpdatePacketGPUSkin::FCommand,int>,FRHICommandList_&)_::_2_::FSkinCacheEntryThrottled>
  FVar28;
  uint uVar29;
  FSkinCacheEntryThrottled *pFVar30;
  FSkinCacheEntryThrottled *pFVar31;
  undefined1 auStackY_1e8 [32];
  <lambda_1> local_1a8 [4];
  uint local_1a4;
  ForElementType<_private:_void___cdecl_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData(TArrayView<FSkeletalMeshUpdatePacketGPUSkin::FCommand,int>,FRHICommandList_&)_::_2_::FSkinCacheEntryThrottled>
  local_1a0;
  undefined8 local_198;
  uint local_190;
  FRHICommandList *local_188;
  FSkinCacheEntryThrottled *local_180;
  FSkinCacheEntryThrottled *local_178;
  TArrayView<FSkeletalMeshUpdatePacketGPUSkin::FCommand,int> *local_170;
  longlong local_168;
  FSkeletalMeshUpdatePacketGPUSkin *local_160;
  FSkeletalMeshObjectGPUSkin *local_158;
  undefined8 uStack_150;
  FRayTracingGeometryInitializer local_148;
  FSkinCacheEntryThrottled local_d8;
  FSkinCacheEntryThrottled local_c8;
  FRHIBuffer *local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined4 local_a4;
  ERayTracingGeometryInitializerType local_a0;
  FRayTracingGeometrySegment *local_98;
  undefined8 local_90;
  FResourceArrayUploadInterface *local_88;
  uint local_80 [6];
  FRHIRayTracingGeometry *local_68;
  FDebugName local_60;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  uVar19 = 0;
  local_1a0.Data = (FSkinCacheEntryThrottled *)0x0;
  local_1a4 = 0;
  local_198 = 0;
  uVar27 = uVar19;
  local_188 = param_2;
  local_170 = param_1;
  local_160 = this;
  if (0 < GSkeletalMeshThrottleGPUSkinRayTracingUpdates) {
    uVar29 = param_1->ArrayNum;
    if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar29);
    }
    uVar27 = 0;
    if (0 < (int)uVar29) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData_::__l2::FSkinCacheEntryThrottled>_>
                (0x10,8,uVar29,&local_1a0,0,(int *)((longlong)&local_198 + 4));
      uVar27 = local_198 & 0xffffffff;
      local_1a4 = (uint)local_198;
    }
  }
  iVar14 = param_1->ArrayNum;
  local_190 = 0;
  if (iVar14 < 1) {
LAB_14865da5a:
    if (local_1a0.Data != (FSkinCacheEntryThrottled *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_1a0.Data);
    }
    return;
  }
  local_168 = 0;
  do {
    lVar24 = local_168;
    FVar28.Data = local_1a0.Data;
    <Var9 = local_1a8[0];
    uVar16 = (uint)uVar27;
    uVar29 = 0;
    if ((int)(uint)uVar19 < iVar14) {
      uVar29 = ~(uint)uVar19 >> 0x1f;
    }
    if ((uVar29 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar26 = (undefined8 *)((longlong)&param_1->DataPtr->MeshObject + lVar24);
    pFVar25 = (FSkeletalMeshObjectGPUSkin *)*puVar26;
    FSkeletalMeshObjectGPUSkin::ProcessUpdatedDynamicData(pFVar25,local_188,Raster);
    if (((*(char *)((longlong)&local_160->_padding_ + 1) == '\0') ||
        (pFVar25->DynamicData->RayTracingLODIndex == -1)) ||
       (pFVar25->DynamicData->GPUSkinTechnique == MeshDeformer)) {
LAB_14865d482:
      FGPUSkinCache::Release((FGPUSkinCacheEntry **)&pFVar25->_padding_);
    }
    else {
      iVar14 = (**(code **)(pFVar25->_padding_ + 0xa0))(pFVar25);
      iVar15 = (**(code **)(pFVar25->_padding_ + 0xe8))(pFVar25);
      if ((iVar14 == iVar15) || (*(char *)(pFVar25->_padding_ + 0x1e) == '\0')) goto LAB_14865d482;
      pFVar4 = pFVar25->DynamicData;
      if ((pFVar4->PreviousBoneTransformUpdateMode == None) &&
         (0 < GSkeletalMeshThrottleGPUSkinRayTracingUpdates)) {
        uVar29 = pFVar4->BoneTransformFrameNumber;
        uVar3 = pFVar25->LastRayTracingBoneTransformUpdate;
        if (uVar16 == local_198._4_4_) {
          uVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData_::__l2::FSkinCacheEntryThrottled>_>
                             (0x810,&local_1a0,(int *)((longlong)&local_198 + 4));
          FVar28.Data = local_1a0.Data;
        }
        local_1a4 = uVar16 + 1;
        local_198 = CONCAT44(local_198._4_4_,local_1a4);
        FVar28.Data[(int)uVar16].MeshObject = pFVar25;
        FVar28.Data[(int)uVar16].BoneFrameDelta = uVar29 - uVar3;
        FVar28.Data[(int)uVar16].CommandIndex = local_190;
        FVar28.Data = local_1a0.Data;
        uVar16 = local_1a4;
      }
      else {
        FSkeletalMeshObjectGPUSkin::ProcessUpdatedDynamicData(pFVar25,local_188,RayTracing);
        pFVar25->LastRayTracingBoneTransformUpdate = pFVar4->BoneTransformFrameNumber;
        *(undefined1 *)(puVar26 + 1) = 1;
      }
    }
    cVar12 = (**(code **)(pFVar25->_padding_ + 0xf0))(pFVar25);
    plVar20 = &pFVar25->_padding_;
    if (cVar12 == '\0') {
      plVar20 = &pFVar25->_padding_;
    }
    if (*plVar20 == 0) {
      this_00 = &pFVar25->RayTracingGeometry;
      (**(code **)(this_00->_padding_ + 0x10))(this_00);
      local_a4 = 0x10000;
      local_b8 = (FRHIBuffer *)0x0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = Rendering;
      local_98 = (FRayTracingGeometrySegment *)0x0;
      local_90 = 0;
      local_88 = (FResourceArrayUploadInterface *)0x0;
      local_68 = (FRHIRayTracingGeometry *)0x0;
      local_80[0] = 0xffffffff;
      local_80[1] = 0xffffffff;
      local_80[2] = 0xffffffff;
      local_80[3] = 0xffffffff;
      local_80[4] = 0xffffffff;
      local_80[5] = 0xffffffff;
      FDebugName::FDebugName(&local_60);
      local_148.IndexBuffer.Reference = local_b8;
      local_148.IndexBufferOffset = (uint)local_b0;
      local_148.GeometryType = local_b0._4_4_;
      local_148.TotalPrimitiveCount = local_a8;
      local_148.bFastBuild = (bool)(undefined1)local_a4;
      local_148.bAllowUpdate = (bool)local_a4._1_1_;
      local_148.bAllowCompaction = (bool)local_a4._2_1_;
      local_148.bTemplate = (bool)local_a4._3_1_;
      local_148.Type = local_a0;
      local_148.Segments.AllocatorInstance.Data = (FScriptContainerElement *)local_98;
      local_148.Segments.ArrayNum = (int)local_90;
      local_148.Segments.ArrayMax = local_90._4_4_;
      local_148.OfflineData = local_88;
      local_148.SourceGeometry = local_68;
      local_148.DebugName.Number = local_60.Number;
      local_148.OfflineDataHeader.Reserved[0] = local_80[0];
      local_148.OfflineDataHeader.Reserved[1] = local_80[1];
      local_148.OfflineDataHeader.Reserved[2] = local_80[2];
      local_148.OfflineDataHeader.Reserved[3] = local_80[3];
      local_148.OwnerName.ComparisonIndex.Value = 0;
      local_148.OwnerName.Number = 0;
      local_54 = 0;
      local_b8 = (FRHIBuffer *)0x0;
      local_98 = (FRayTracingGeometrySegment *)0x0;
      local_90 = 0;
      local_148.OfflineDataHeader.Reserved[4] = local_80[4];
      local_148.OfflineDataHeader.Reserved[5] = local_80[5];
      local_148.DebugName.Name = local_60.Name;
      FRayTracingGeometry::SetInitializer(this_00,&local_148);
      DestructItems<FRayTracingGeometrySegment,int>(local_98,(int)local_90);
      if (local_98 != (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_b8 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_b8);
      }
    }
    if (uVar16 != 0) {
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId501,"SkinCacheRayTracingThrottled",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                   ,0x1f5);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId501);
      }
      uVar29 = uVar16;
      if (GSkeletalMeshThrottleGPUSkinRayTracingUpdates < (int)uVar16) {
        uVar29 = GSkeletalMeshThrottleGPUSkinRayTracingUpdates;
      }
      lVar24 = (longlong)(int)uVar29 * 0x10;
      pFVar17 = FVar28.Data + (int)uVar16;
      local_178 = FVar28.Data + (int)uVar29;
      local_180 = pFVar17;
      if (FVar28.Data != local_178) {
        pFVar25 = (FSkeletalMeshObjectGPUSkin *)(lVar24 >> 4);
        puVar22 = (undefined1 *)(lVar24 >> 5);
        pFVar31 = local_178;
        local_158 = pFVar25;
        if (0 < (longlong)puVar22) {
          puVar23 = (undefined1 *)((longlong)&pFVar25[-1].field_0x207 >> 1);
          pFVar30 = FVar28.Data + (longlong)puVar22;
          do {
            pFVar6 = pFVar30[-1].MeshObject;
            uVar7 = pFVar30[-1].BoneFrameDelta;
            uVar8 = pFVar30[-1].CommandIndex;
            puVar22 = puVar22 + -1;
            pFVar30 = pFVar30 + -1;
            puVar21 = puVar22;
            while ((longlong)puVar21 < (longlong)puVar23) {
              puVar18 = (undefined1 *)
                        ((2 - (ulonglong)
                              (FVar28.Data[(longlong)puVar21 * 2 + 1].BoneFrameDelta <
                              FVar28.Data[(longlong)puVar21 * 2 + 2].BoneFrameDelta)) +
                        (longlong)puVar21 * 2);
              pFVar1 = FVar28.Data + (longlong)puVar18;
              uVar29 = pFVar1->BoneFrameDelta;
              uVar3 = pFVar1->CommandIndex;
              pFVar2 = FVar28.Data + (longlong)puVar21;
              pFVar2->MeshObject = pFVar1->MeshObject;
              pFVar2->BoneFrameDelta = uVar29;
              pFVar2->CommandIndex = uVar3;
              puVar21 = puVar18;
            }
            if ((puVar21 == puVar23) && (((ulonglong)pFVar25 & 1) == 0)) {
              pFVar2 = FVar28.Data + (longlong)&pFVar25[-1].field_0x207;
              uVar29 = pFVar2->BoneFrameDelta;
              uVar3 = pFVar2->CommandIndex;
              pFVar1 = FVar28.Data + (longlong)puVar21;
              pFVar1->MeshObject = pFVar2->MeshObject;
              pFVar1->BoneFrameDelta = uVar29;
              pFVar1->CommandIndex = uVar3;
              puVar21 = &pFVar25[-1].field_0x207;
            }
            if ((longlong)puVar22 < (longlong)puVar21) {
              do {
                puVar18 = (undefined1 *)((longlong)(puVar21 + -1) >> 1);
                if (FVar28.Data[(longlong)puVar18].BoneFrameDelta <= (uint)uVar7) break;
                pFVar1 = FVar28.Data + (longlong)puVar18;
                uVar29 = pFVar1->BoneFrameDelta;
                uVar3 = pFVar1->CommandIndex;
                pFVar2 = FVar28.Data + (longlong)puVar21;
                pFVar2->MeshObject = pFVar1->MeshObject;
                pFVar2->BoneFrameDelta = uVar29;
                pFVar2->CommandIndex = uVar3;
                puVar21 = puVar18;
              } while ((longlong)puVar22 < (longlong)puVar18);
            }
            pFVar1 = FVar28.Data + (longlong)puVar21;
            pFVar1->MeshObject = pFVar6;
            pFVar1->BoneFrameDelta = uVar7;
            pFVar1->CommandIndex = uVar8;
          } while (0 < (longlong)puVar22);
        }
        for (; pFVar31 < pFVar17; pFVar31 = pFVar31 + 1) {
          if ((FVar28.Data)->BoneFrameDelta < pFVar31->BoneFrameDelta) {
            local_d8.MeshObject = pFVar31->MeshObject;
            local_d8.BoneFrameDelta = pFVar31->BoneFrameDelta;
            local_d8.CommandIndex = pFVar31->CommandIndex;
            uVar29 = (FVar28.Data)->BoneFrameDelta;
            uVar3 = (FVar28.Data)->CommandIndex;
            pFVar31->MeshObject = (FVar28.Data)->MeshObject;
            pFVar31->BoneFrameDelta = uVar29;
            pFVar31->CommandIndex = uVar3;
            std::
            _Pop_heap_hole_by_index<_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData_::__l2::FSkinCacheEntryThrottled_*,_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData_::__l2::FSkinCacheEntryThrottled,_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData_::__l23::<lambda_1>_>
                      (FVar28.Data,0,(long64)pFVar25,&local_d8,<Var9);
            pFVar25 = local_158;
          }
        }
        if (1 < (longlong)pFVar25) {
          lVar24 = (longlong)local_178 - (longlong)FVar28.Data >> 4;
          pFVar17 = local_178;
          do {
            pFVar31 = pFVar17 + -1;
            if (1 < lVar24) {
              local_c8.MeshObject = pFVar31->MeshObject;
              local_c8.BoneFrameDelta = pFVar17[-1].BoneFrameDelta;
              local_c8.CommandIndex = pFVar17[-1].CommandIndex;
              uVar29 = (FVar28.Data)->BoneFrameDelta;
              uVar3 = (FVar28.Data)->CommandIndex;
              pFVar31->MeshObject = (FVar28.Data)->MeshObject;
              pFVar17[-1].BoneFrameDelta = uVar29;
              pFVar17[-1].CommandIndex = uVar3;
              std::
              _Pop_heap_hole_by_index<_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData_::__l2::FSkinCacheEntryThrottled_*,_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData_::__l2::FSkinCacheEntryThrottled,_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData_::__l23::<lambda_1>_>
                        (FVar28.Data,0,(longlong)pFVar31 - (longlong)FVar28.Data >> 4,&local_c8,
                         <Var9);
            }
            lVar24 = (longlong)pFVar31 - (longlong)FVar28.Data >> 4;
            pFVar17 = pFVar31;
          } while (1 < lVar24);
        }
      }
      iVar14 = GSkeletalMeshThrottleGPUSkinRayTracingUpdates;
      if (GSkeletalMeshThrottleGPUSkinRayTracingUpdates < (int)uVar16) {
        if ((int)uVar16 < GSkeletalMeshThrottleGPUSkinRayTracingUpdates) {
          UE::Core::Private::
          ReallocGrow<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<_FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData_::__l2::FSkinCacheEntryThrottled>_>
                    (0x10,8,GSkeletalMeshThrottleGPUSkinRayTracingUpdates - uVar16,&local_1a0,
                     (int *)&local_198,(int *)((longlong)&local_198 + 4));
          local_1a4 = (uint)local_198;
          FVar28.Data = local_1a0.Data;
          uVar16 = (uint)local_198;
        }
        else {
          if (GSkeletalMeshThrottleGPUSkinRayTracingUpdates < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum
                      ((ulonglong)(uint)GSkeletalMeshThrottleGPUSkinRayTracingUpdates);
          }
          if (GSkeletalMeshThrottleGPUSkinRayTracingUpdates < (int)uVar16) {
            uVar29 = uVar16 - GSkeletalMeshThrottleGPUSkinRayTracingUpdates;
            if (((int)(uVar29 | GSkeletalMeshThrottleGPUSkinRayTracingUpdates) < 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar13)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (uVar29 != 0) {
              uVar16 = uVar16 - uVar29;
              iVar15 = uVar16 - iVar14;
              local_1a4 = uVar16;
              if (iVar15 != 0) {
                memmove(FVar28.Data + iVar14,FVar28.Data + iVar14 + (int)uVar29,
                        (longlong)iVar15 << 4);
              }
              local_198 = CONCAT44(local_198._4_4_,uVar16);
            }
          }
        }
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    pFVar10 = local_188;
    uVar29 = local_1a4;
    pFVar17 = FVar28.Data + (int)uVar16;
    while( true ) {
      param_1 = local_170;
      if (uVar29 != uVar16) {
        local_1a8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<`FSkeletalMeshUpdatePacketGPUSkin::ProcessUpdatedDynamicData'::__l2::FSkinCacheEntryThrottled,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_1a8);
      }
      iVar14 = param_1->ArrayNum;
      if (FVar28.Data == pFVar17) break;
      pFVar25 = (FVar28.Data)->MeshObject;
      uStack_150._0_4_ = (FVar28.Data)->BoneFrameDelta;
      uStack_150._4_4_ = (FVar28.Data)->CommandIndex;
      local_158 = pFVar25;
      FSkeletalMeshObjectGPUSkin::ProcessUpdatedDynamicData(pFVar25,pFVar10,RayTracing);
      iVar15 = uStack_150._4_4_;
      pFVar25->LastRayTracingBoneTransformUpdate = pFVar25->DynamicData->BoneTransformFrameNumber;
      if ((uStack_150 < 0 || iVar14 <= uStack_150._4_4_) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar28.Data = FVar28.Data + 1;
      local_170->DataPtr[iVar15].bUpdateRayTracingMode = true;
    }
    local_190 = local_190 + 1;
    uVar19 = (ulonglong)local_190;
    local_168 = local_168 + 0x10;
    local_1a4 = uVar29;
    if (iVar14 <= (int)local_190) goto LAB_14865da5a;
    uVar27 = (ulonglong)uVar29;
  } while( true );
}

// UpdateBufferData @ 14866aaa0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::UpdateBufferData
          (FSkeletalMeshUpdatePacketGPUSkin *this,
          TArrayView<FSkeletalMeshUpdatePacketGPUSkin::FCommand_const_,int> *param_1,
          FRHICommandList *param_2)

{
  FSkeletalMeshObjectGPUSkin *this_00;
  FCommand *pFVar1;
  FCommand *pFVar2;
  
  pFVar1 = param_1->DataPtr;
  pFVar2 = pFVar1 + param_1->ArrayNum;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 1) {
    this_00 = pFVar1->MeshObject;
    FSkeletalMeshObjectGPUSkin::UpdateBufferData(this_00,param_2,Raster);
    if (pFVar1->bUpdateRayTracingMode != false) {
      FSkeletalMeshObjectGPUSkin::UpdateBufferData(this_00,param_2,RayTracing);
    }
  }
  return;
}

// UpdateImmediate @ 14866bd80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkeletalMeshUpdatePacketGPUSkin::UpdateImmediate
          (FSkeletalMeshUpdatePacketGPUSkin *this,FRHICommandList *param_1,
          FSkeletalMeshObjectGPUSkin *param_2,FDynamicSkelMeshObjectDataGPUSkin *param_3)

{
  ERHIPipeline EVar1;
  
  if (param_3->GPUSkinTechnique == GPUSkinCache) {
    EVar1 = (ERHIPipeline)this->_padding_;
  }
  else {
    EVar1 = Graphics;
  }
  EVar1 = FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,EVar1);
  FSkeletalMeshObjectGPUSkin::UpdateDynamicData_RenderThread(param_2,param_1,param_3);
  FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,EVar1);
  return;
}

