// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 6

// FOptimusGroomSolverReadDataProviderProxy @ 14e268f10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FOptimusGroomSolverReadDataProviderProxy * __thiscall
FOptimusGroomSolverReadDataProviderProxy::FOptimusGroomSolverReadDataProviderProxy
          (FOptimusGroomSolverReadDataProviderProxy *this,UGroomSolverComponent *param_1,
          bool param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *pTVar3;
  TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *pTVar4;
  uint uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *pTVar8;
  bool bVar9;
  int iVar10;
  UClass *pUVar11;
  FOptimusGroomSolverReadDataProviderProxy *pFVar12;
  UGroomSolverComponent *pUVar13;
  longlong lVar14;
  ulonglong uVar15;
  FRefCountBase *pFVar16;
  uint uVar17;
  UGroomSolverComponent *pUVar18;
  undefined8 *puVar19;
  UGroomSolverComponent *pUVar20;
  undefined1 *puVar21;
  UGroomSolverComponent *pUVar22;
  uint *puVar23;
  undefined8 *puVar24;
  FRefCountBase *pFVar25;
  ForAnyElementType FVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  uint local_res20 [2];
  undefined1 local_118 [8];
  TArray<UGroomComponent_const_*,TSizedDefaultAllocator<32>_> local_110;
  FRefCountBase *local_100;
  UGroomSolverComponent *local_f8;
  undefined8 local_f0;
  uint local_e8;
  uint local_e4;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *local_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  int local_9c;
  undefined8 *local_98;
  undefined8 *local_90;
  TSet<TObjectPtr<UGroomComponent>,DefaultKeyFuncs<TObjectPtr<UGroomComponent>,0>,FDefaultSetAllocator>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FRefCountBase *local_58;
  undefined8 *local_50;
  
  pUVar18 = (UGroomSolverComponent *)0x0;
  local_res20[0] = 0;
  (this->SolverSettings).MaxLODDistance = 1000.0;
  (this->SolverSettings).MinLODDistance = 100.0;
  (this->SolverSettings).MaxPointsCount = 100000.0;
  (this->SolverSettings).CurveDynamicIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SolverSettings).CurveDynamicIndices.ArrayNum = 0;
  (this->SolverSettings).CurveDynamicIndices.ArrayMax = 0;
  (this->SolverSettings).CurveKinematicIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SolverSettings).CurveKinematicIndices.ArrayNum = 0;
  (this->SolverSettings).CurveKinematicIndices.ArrayMax = 0;
  (this->SolverSettings).PointDynamicIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SolverSettings).PointDynamicIndices.ArrayNum = 0;
  (this->SolverSettings).PointDynamicIndices.ArrayMax = 0;
  (this->SolverSettings).PointKinematicIndices.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SolverSettings).PointKinematicIndices.ArrayNum = 0;
  (this->SolverSettings).PointKinematicIndices.ArrayMax = 0;
  (this->SolverSettings).ObjectDistanceLods.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SolverSettings).ObjectDistanceLods.ArrayNum = 0;
  (this->SolverSettings).ObjectDistanceLods.ArrayMax = 0;
  (this->PointsCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointsCounts).ArrayNum = 0;
  (this->PointsCounts).ArrayMax = 0;
  (this->CurvesCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurvesCounts).ArrayNum = 0;
  (this->CurvesCounts).ArrayMax = 0;
  (this->GroupInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupInstances).ArrayNum = 0;
  (this->GroupInstances).ArrayMax = 0;
  this->bResetSimulationTrigger = false;
  this->_padding_ = (longlong)&___7FOptimusGroomSolverReadDataProviderProxy__6B_;
  this->ObjectPointOffsetsBuffer = (FRDGBuffer *)0x0;
  this->ObjectCurveOffsetsBuffer = (FRDGBuffer *)0x0;
  this->ObjectNumPointsBuffer = (FRDGBuffer *)0x0;
  this->ObjectNumCurvesBuffer = (FRDGBuffer *)0x0;
  this->PointObjectIndicesBuffer = (FRDGBuffer *)0x0;
  this->CurveObjectIndicesBuffer = (FRDGBuffer *)0x0;
  this->DynamicPointIndicesBuffer = (FRDGBuffer *)0x0;
  this->DynamicCurveIndicesBuffer = (FRDGBuffer *)0x0;
  this->KinematicPointIndicesBuffer = (FRDGBuffer *)0x0;
  this->KinematicCurveIndicesBuffer = (FRDGBuffer *)0x0;
  this->ObjectDistanceLodsBuffer = (FRDGBuffer *)0x0;
  this->NumPoints = 0;
  this->NumCurves = 0;
  this->ObjectPointOffsetsResource = (FRDGBufferSRV *)0x0;
  this->ObjectCurveOffsetsResource = (FRDGBufferSRV *)0x0;
  this->ObjectNumPointsResource = (FRDGBufferSRV *)0x0;
  this->ObjectNumCurvesResource = (FRDGBufferSRV *)0x0;
  this->PointObjectIndicesResource = (FRDGBufferSRV *)0x0;
  this->CurveObjectIndicesResource = (FRDGBufferSRV *)0x0;
  this->DynamicPointIndicesResource = (FRDGBufferSRV *)0x0;
  this->DynamicCurveIndicesResource = (FRDGBufferSRV *)0x0;
  this->KinematicPointIndicesResource = (FRDGBufferSRV *)0x0;
  this->KinematicCurveIndicesResource = (FRDGBufferSRV *)0x0;
  this->ObjectDistanceLodsResource = (FRDGBufferSRV *)0x0;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  if (param_1 != (UGroomSolverComponent *)0x0) {
    pUVar11 = Z_Construct_UClass_UGroomComponent_NoRegister();
    iVar10 = (int)pUVar11->_padding_;
    if ((iVar10 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar11->_padding_)) {
      local_f8 = param_1;
      if ((local_110.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f8) &&
         (((FScriptContainerElement *)&local_f8 <
           local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 8 &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar9)))) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FOptimusGroomSolverReadDataProviderProxy *)(*pcVar7)();
        return pFVar12;
      }
      if (local_110.ArrayNum == local_110.ArrayMax) {
        local_110.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_110.AllocatorInstance,&local_110.ArrayMax);
      }
      *(UGroomSolverComponent **)
       (local_110.AllocatorInstance.Data + (longlong)local_110.ArrayNum * 8) = local_f8;
      local_110.ArrayNum = local_110.ArrayNum + 1;
      goto LAB_14e269437;
    }
  }
  local_f8 = (UGroomSolverComponent *)0x0;
  if (param_1 == (UGroomSolverComponent *)0x0) {
LAB_14e26917c:
    pUVar13 = pUVar18;
  }
  else {
    pUVar11 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar10 = (int)pUVar11->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar10) ||
       (pUVar13 = param_1,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar10 * 8)
       != &pUVar11->_padding_)) goto LAB_14e26917c;
  }
  if (pUVar13 != (UGroomSolverComponent *)0x0) {
    pTVar3 = &pUVar13->GroomComponents;
    iVar10 = *(int *)&(pUVar13->GroomComponents).Elements.field_0x28;
    local_c0 = &(pUVar13->GroomComponents).Elements.field_0x10;
    uStack_c4 = 1;
    pUVar20 = pUVar18;
    pUVar22 = pUVar18;
    iStack_b4 = 0;
    if (iVar10 != 0) {
      puVar23 = *(uint **)&(pUVar13->GroomComponents).Elements.field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)local_c0;
      }
      for (uVar27 = *puVar23; uVar27 == 0; uVar27 = puVar23[(int)uVar27]) {
        uVar27 = (int)pUVar20 + 1;
        pUVar20 = (UGroomSolverComponent *)(ulonglong)uVar27;
        pUVar22 = (UGroomSolverComponent *)(ulonglong)((int)pUVar22 + 0x20);
        iStack_b4 = iVar10;
        if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar27)
        goto LAB_14e26920f;
      }
      uStack_c4 = ~(uVar27 - 1) & uVar27;
      uVar15 = (ulonglong)uStack_c4 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_a0 = (int)lVar14;
      iStack_b4 = local_a0 + -1 + (int)pUVar22;
      if (iVar10 < iStack_b4) {
        iStack_b4 = iVar10;
      }
    }
LAB_14e26920f:
    uVar27 = *(uint *)&(pUVar13->GroomComponents).Elements.field_0x28;
    puVar2 = &(pUVar13->GroomComponents).Elements.field_0x10;
    uVar17 = uVar27 & 0xffffffe0;
    iStack_a8 = *(int *)&(pUVar13->GroomComponents).Elements.field_0x8 -
                *(int *)&(pUVar13->GroomComponents).Elements.field_0x34;
    uStack_b8 = 0xffffffff;
    TStack_80.CurrentBitIndex = iStack_b4;
    TStack_80.UnvisitedBitMask = 0xffffffff;
    uStack_c8 = SUB84(pUVar20,0);
    TStack_80._padding_ = CONCAT44(uStack_c4,uStack_c8);
    local_b0 = (int)pUVar22;
    iVar10 = (int)uVar27 >> 5;
    TStack_80._28_4_ = iStack_b4;
    TStack_80.BaseBitIndex = local_b0;
    uStack_60 = CONCAT44(uStack_a4,iStack_a8);
    local_d0 = pTVar3;
    iStack_ac = iStack_b4;
    local_88 = pTVar3;
    TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
    if ((((int)uVar27 < 0) ||
        (*(int *)&(pUVar13->GroomComponents).Elements.field_0x28 < (int)uVar27)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      pFVar12 = (FOptimusGroomSolverReadDataProviderProxy *)(*pcVar7)();
      return pFVar12;
    }
    uVar5 = *(uint *)&(pUVar13->GroomComponents).Elements.field_0x28;
    if (uVar27 != uVar5) {
      puVar6 = *(undefined1 **)&(pUVar13->GroomComponents).Elements.field_0x20;
      puVar21 = puVar2;
      if (puVar6 != (undefined1 *)0x0) {
        puVar21 = puVar6;
      }
      uVar27 = -1 << ((byte)uVar27 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar10 * 4);
      while (uVar27 == 0) {
        iVar10 = iVar10 + 1;
        uVar17 = uVar17 + 0x20;
        uVar27 = uVar5;
        if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar10)
        goto LAB_14e269320;
        uVar27 = *(uint *)(puVar21 + (longlong)iVar10 * 4);
      }
      uVar15 = (ulonglong)(~(uVar27 - 1) & uVar27) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      local_9c = (int)lVar14;
      uVar27 = (uVar17 - 1) + local_9c;
      if ((int)uVar5 < (int)uVar27) {
        uVar27 = uVar5;
      }
    }
LAB_14e269320:
    while( true ) {
      pTVar8 = local_88;
      if (*(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34 !=
          (int)uStack_60) {
        local_res20[0] = local_res20[0] & 0xffffff00;
        `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_80.CurrentBitIndex == uVar27) &&
          (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == pTVar3)
         ) break;
      local_f0 = *(undefined8 *)
                  (*(longlong *)&pTVar8->Elements + (longlong)TStack_80.CurrentBitIndex * 0x10);
      if (((local_110.AllocatorInstance.Data <= (FScriptContainerElement *)&local_f0) &&
          ((FScriptContainerElement *)&local_f0 <
           local_110.AllocatorInstance.Data + (longlong)local_110.ArrayMax * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        pFVar12 = (FOptimusGroomSolverReadDataProviderProxy *)(*pcVar7)();
        return pFVar12;
      }
      if (local_110.ArrayNum == local_110.ArrayMax) {
        local_110.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_110.AllocatorInstance,&local_110.ArrayMax);
      }
      lVar14 = (longlong)local_110.ArrayNum;
      local_110.ArrayNum = local_110.ArrayNum + 1;
      *(undefined8 *)(local_110.AllocatorInstance.Data + lVar14 * 8) = local_f0;
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    }
  }
LAB_14e269437:
  pTVar4 = &this->GroupInstances;
  pFVar28 = (pTVar4->AllocatorInstance).Data;
  iVar10 = (this->GroupInstances).ArrayNum;
  if ((this->GroupInstances).ArrayMax < 0) {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar28,iVar10);
    (this->GroupInstances).ArrayNum = 0;
    if ((this->GroupInstances).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar4->AllocatorInstance,0,&(this->GroupInstances).ArrayMax);
    }
  }
  else {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar28,iVar10);
    (this->GroupInstances).ArrayNum = 0;
  }
  uVar15 = (ulonglong)local_110.ArrayNum;
  local_e4 = local_110.ArrayNum;
  pFVar28 = local_110.AllocatorInstance.Data + uVar15 * 8;
  pFVar16 = local_58;
  puVar19 = local_50;
  FVar26.Data = local_110.AllocatorInstance.Data;
  local_e0 = pFVar28;
  do {
    local_d8 = FVar26.Data;
    if (local_110.ArrayNum != (uint)uVar15) {
      local_118[0] = 0;
      `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_118);
    }
    if (FVar26.Data == pFVar28) {
      UE::Groom::Private::GetGroomInvocationElementCounts
                (&local_110,UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Points,
                 &this->PointsCounts,false);
      UE::Groom::Private::GetGroomInvocationElementCounts
                (&local_110,UOptimusGroomAssetComponentSource::FGuidesExecutionDomains::Curves,
                 &this->CurvesCounts,false);
      (this->SolverSettings).MaxLODDistance = (param_1->SolverSettings).MaxLODDistance;
      (this->SolverSettings).MinLODDistance = (param_1->SolverSettings).MinLODDistance;
      (this->SolverSettings).MaxPointsCount = (param_1->SolverSettings).MaxPointsCount;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&(this->SolverSettings).CurveDynamicIndices,
                 &(param_1->SolverSettings).CurveDynamicIndices);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&(this->SolverSettings).CurveKinematicIndices,
                 &(param_1->SolverSettings).CurveKinematicIndices);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&(this->SolverSettings).PointDynamicIndices,
                 &(param_1->SolverSettings).PointDynamicIndices);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&(this->SolverSettings).PointKinematicIndices,
                 &(param_1->SolverSettings).PointKinematicIndices);
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                (&(this->SolverSettings).ObjectDistanceLods,
                 &(param_1->SolverSettings).ObjectDistanceLods);
      this->bResetSimulationTrigger = param_2;
      if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.AllocatorInstance.Data);
      }
      return this;
    }
    pUVar13 = *(UGroomSolverComponent **)FVar26.Data;
    if (pUVar13 != (UGroomSolverComponent *)0x0) {
      local_e8 = (uint)(pUVar13->GroomSolverProxy)._padding_;
      uVar27 = 0;
      pFVar28 = local_e0;
      if (local_e8 != 0) {
        do {
          bVar9 = UGroomComponent::IsDeformationEnable((UGroomComponent *)pUVar13,uVar27);
          if (bVar9) {
            if (((int)uVar27 < 0) || ((int)(pUVar13->GroomSolverProxy)._padding_ <= (int)uVar27)) {
              pUVar18 = (UGroomSolverComponent *)(ulonglong)((uint)pUVar18 | 2);
              local_98 = (undefined8 *)0x0;
              puVar24 = (undefined8 *)0x0;
            }
            else {
              pUVar18 = (UGroomSolverComponent *)(ulonglong)((uint)pUVar18 | 1);
              if (((int)(pUVar13->GroomSolverProxy)._padding_ <= (int)uVar27) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar7 = (code *)swi(3);
                pFVar12 = (FOptimusGroomSolverReadDataProviderProxy *)(*pcVar7)();
                return pFVar12;
              }
              puVar24 = *(undefined8 **)
                         ((((TArray<TRefCountPtr<FHairGroupInstance>,TSizedDefaultAllocator<32>_> *)
                           &(pUVar13->GroomSolverProxy)._padding_)->AllocatorInstance).Data +
                         (longlong)(int)uVar27 * 8);
              local_90 = puVar24;
              if (puVar24 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                UNLOCK();
              }
            }
            if ((((ulonglong)pUVar18 & 2) != 0) &&
               (pUVar18 = (UGroomSolverComponent *)(ulonglong)((uint)pUVar18 & 0xfffffffd),
               local_98 != (undefined8 *)0x0)) {
              piVar1 = (int *)(local_98 + 1);
              LOCK();
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar10 == 1) && ((piVar1 != (int *)0x0 && (local_98 != (undefined8 *)0x0)))) {
                (**(code **)*local_98)(local_98,1);
              }
            }
            if ((((ulonglong)pUVar18 & 1) != 0) &&
               (pUVar18 = (UGroomSolverComponent *)(ulonglong)((uint)pUVar18 & 0xfffffffe),
               local_90 != (undefined8 *)0x0)) {
              piVar1 = (int *)(local_90 + 1);
              LOCK();
              iVar10 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if ((iVar10 == 1) && ((piVar1 != (int *)0x0 && (local_90 != (undefined8 *)0x0)))) {
                (**(code **)*local_90)(local_90,1);
              }
            }
            if (puVar24 != (undefined8 *)0x0) {
              if (((int)uVar27 < 0) || ((int)(pUVar13->GroomSolverProxy)._padding_ <= (int)uVar27))
              {
                uVar17 = (uint)pUVar18 | 8;
                puVar19 = (undefined8 *)0x0;
                pFVar25 = (FRefCountBase *)0x0;
              }
              else {
                uVar17 = (uint)pUVar18 | 4;
                if (((int)(pUVar13->GroomSolverProxy)._padding_ <= (int)uVar27) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar7 = (code *)swi(3);
                  pFVar12 = (FOptimusGroomSolverReadDataProviderProxy *)(*pcVar7)();
                  return pFVar12;
                }
                pFVar16 = *(FRefCountBase **)
                           ((((TArray<TRefCountPtr<FHairGroupInstance>,TSizedDefaultAllocator<32>_>
                               *)&(pUVar13->GroomSolverProxy)._padding_)->AllocatorInstance).Data +
                           (longlong)(int)uVar27 * 8);
                pFVar25 = pFVar16;
                if (pFVar16 != (FRefCountBase *)0x0) {
                  LOCK();
                  *(int *)&pFVar16->field_0x8 = *(int *)&pFVar16->field_0x8 + 1;
                  UNLOCK();
                }
              }
              pUVar18 = (UGroomSolverComponent *)(ulonglong)uVar17;
              if (((uVar17 & 8) != 0) &&
                 (pUVar18 = (UGroomSolverComponent *)(ulonglong)(uVar17 & 0xfffffff7),
                 puVar19 != (undefined8 *)0x0)) {
                piVar1 = (int *)(puVar19 + 1);
                LOCK();
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar10 == 1) && (piVar1 != (int *)0x0)) {
                  (**(code **)*puVar19)(puVar19,1);
                }
              }
              if ((((ulonglong)pUVar18 & 4) != 0) &&
                 (pUVar18 = (UGroomSolverComponent *)(ulonglong)((uint)pUVar18 & 0xfffffffb),
                 pFVar16 != (FRefCountBase *)0x0)) {
                puVar2 = &pFVar16->field_0x8;
                LOCK();
                iVar10 = *(int *)puVar2;
                *(int *)puVar2 = *(int *)puVar2 + -1;
                UNLOCK();
                if ((iVar10 == 1) && (puVar2 != (undefined1 *)0x0)) {
                  (*(code *)**(undefined8 **)pFVar16)(pFVar16,1);
                }
              }
              if (pFVar25 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&pFVar25->field_0x8 = *(int *)&pFVar25->field_0x8 + 1;
                UNLOCK();
              }
              pFVar28 = (pTVar4->AllocatorInstance).Data;
              piVar1 = &(this->GroupInstances).ArrayMax;
              local_100 = pFVar25;
              if (((pFVar28 <= (FScriptContainerElement *)&local_100) &&
                  ((FScriptContainerElement *)&local_100 < pFVar28 + (longlong)*piVar1 * 8)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar7 = (code *)swi(3);
                pFVar12 = (FOptimusGroomSolverReadDataProviderProxy *)(*pcVar7)();
                return pFVar12;
              }
              iVar10 = (this->GroupInstances).ArrayNum;
              if (iVar10 == *piVar1) {
                iVar10 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&pTVar4->AllocatorInstance,piVar1);
              }
              (this->GroupInstances).ArrayNum = iVar10 + 1;
              pFVar28 = (pTVar4->AllocatorInstance).Data;
              *(undefined8 *)(pFVar28 + (longlong)iVar10 * 8) = 0;
              *(FRefCountBase **)(pFVar28 + (longlong)iVar10 * 8) = local_100;
              if (local_100 != (FRefCountBase *)0x0) {
                LOCK();
                *(int *)&local_100->field_0x8 = *(int *)&local_100->field_0x8 + 1;
                UNLOCK();
                if (local_100 != (FRefCountBase *)0x0) {
                  FRefCountBase::Release(local_100);
                }
              }
            }
          }
          uVar27 = uVar27 + 1;
          FVar26.Data = local_d8;
          pFVar28 = local_e0;
        } while (uVar27 < local_e8);
      }
    }
    uVar15 = (ulonglong)local_e4;
    FVar26.Data = FVar26.Data + 8;
  } while( true );
}

// AllocateResources @ 14e26e1a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGroomSolverReadDataProviderProxy::AllocateResources
          (FOptimusGroomSolverReadDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FRDGBuilder *pFVar6;
  bool bVar7;
  uint uVar8;
  FRDGBufferSRV *pFVar9;
  FString *pFVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint auStackX_8 [2];
  FRDGBuilder *pFStackX_10;
  uint auStackX_18 [2];
  int aiStackX_20 [2];
  FString FStack_3d8;
  FRDGBufferSRVDesc FStack_3c8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> TStack_3a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> TStack_398;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> TStack_388;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> TStack_378;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_368;
  TArray<int,TSizedDefaultAllocator<32>_> TStack_358;
  uint uStack_348;
  int iStack_344;
  uint auStack_340 [2];
  FRDGBufferSRVDesc FStack_338;
  FRDGBufferSRVDesc FStack_318;
  FRDGBufferSRVDesc FStack_2f8;
  FRDGBufferSRVDesc FStack_2d8;
  FRDGBufferSRVDesc FStack_2b8;
  FRDGBufferSRVDesc FStack_298;
  FRDGBufferSRVDesc FStack_278;
  FRDGBufferSRVDesc FStack_258;
  FRDGBufferSRVDesc FStack_238;
  FRDGBufferSRVDesc FStack_218;
  FString FStack_1f8;
  FString FStack_1e8;
  FString FStack_1d8;
  FString FStack_1c8;
  FString FStack_1b8;
  FString FStack_1a8;
  FString FStack_198;
  FString FStack_188;
  FString FStack_178;
  FString FStack_168;
  FRDGBufferDesc FStack_158;
  FRDGBufferDesc FStack_140;
  FRDGBufferDesc FStack_128;
  FRDGBufferDesc FStack_110;
  FRDGBufferDesc FStack_f8;
  FRDGBufferDesc FStack_e0;
  FRDGBufferDesc FStack_c8;
  FRDGBufferDesc FStack_b0;
  FRDGBufferDesc FStack_98;
  FRDGBufferDesc FStack_80;
  FRDGBufferDesc FStack_68;
  
  uVar13 = (this->PointsCounts).ArrayNum;
  uVar12 = 0;
  uVar17 = 0;
  TStack_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_3a8.ArrayNum = 0;
  TStack_3a8.ArrayMax = 0;
  TStack_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_378.ArrayNum = 0;
  TStack_378.ArrayMax = 0;
  TStack_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_358.ArrayNum = 0;
  TStack_358.ArrayMax = 0;
  auStackX_8[0] = 0;
  pFStackX_10 = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init(&TStack_3a8,auStackX_8,uVar13 + 1);
  auStackX_18[0] = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init(&TStack_378,auStackX_18,uVar13);
  uVar8 = uVar12;
  if (uVar13 != 0) {
    do {
      uVar15 = ~uVar12 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar12 < (this->PointsCounts).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar12;
      uVar2 = *(undefined4 *)((this->PointsCounts).AllocatorInstance.Data + lVar14 * 4);
      uVar17 = 0;
      if ((int)uVar12 < TStack_378.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)(TStack_378.AllocatorInstance.Data + lVar14 * 4) = uVar2;
      uVar17 = 0;
      if ((int)uVar12 < TStack_3a8.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(TStack_3a8.AllocatorInstance.Data + lVar14 * 4) = uVar8;
      uVar17 = 0;
      if ((int)uVar12 < (this->PointsCounts).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = uVar12 + 1;
      uVar17 = uVar8 + *(int *)((this->PointsCounts).AllocatorInstance.Data + lVar14 * 4);
      uVar8 = uVar17;
    } while (uVar12 < uVar13);
  }
  uVar12 = 0;
  uVar8 = 0;
  if ((int)uVar13 < TStack_3a8.ArrayNum) {
    uVar8 = ~uVar13 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  aiStackX_20[0] = -1;
  *(uint *)(TStack_3a8.AllocatorInstance.Data + (longlong)(int)uVar13 * 4) = uVar17;
  this->NumPoints = uVar17;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&TStack_358,aiStackX_20,uVar17);
  if (uVar13 != 0) {
    do {
      uVar17 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < TStack_3a8.ArrayNum) {
        uVar8 = uVar17;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar12;
      uVar8 = 0;
      if ((int)uVar12 < TStack_3a8.ArrayNum) {
        uVar8 = uVar17;
      }
      uVar15 = *(uint *)(TStack_3a8.AllocatorInstance.Data + lVar14 * 4);
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = TStack_3a8.AllocatorInstance.Data + lVar14 * 4;
      uVar8 = 0;
      if ((int)uVar12 < TStack_378.ArrayNum) {
        uVar8 = uVar17;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = *(int *)(TStack_378.AllocatorInstance.Data + lVar14 * 4);
      iVar4 = *(int *)pFVar1;
      for (; uVar15 < (uint)(iVar3 + iVar4); uVar15 = uVar15 + 1) {
        uVar8 = 0;
        if ((int)uVar15 < TStack_358.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(TStack_358.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) = uVar12;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar13);
  }
  uVar13 = 0;
  ::FString::FString(&FStack_3d8,"Hair.Deformer.ObjectPointOffsets");
  pFVar6 = pFStackX_10;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._4_4_ = TStack_3a8.ArrayNum;
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_e0.NumElements = TStack_3a8.ArrayNum;
  FStack_e0.BytesPerElement = 4;
  FStack_e0._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_e0.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_e0.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_2f8.Buffer = FRDGBuilder::CreateBuffer(pFStackX_10,&FStack_e0,(wchar_t *)FVar16.Data,None);
  this->ObjectPointOffsetsBuffer = FStack_2f8.Buffer;
  FStack_2f8._padding_._4_4_ = 0;
  FStack_2f8._padding_._0_4_ = 0xffffffff;
  FStack_2f8._padding_ = 0;
  FStack_2f8._padding_._0_1_ = 0;
  if ((((FStack_2f8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_2f8._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_2f8);
  this->ObjectPointOffsetsResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectPointOffsetsBuffer,TStack_3a8.AllocatorInstance.Data,
             (longlong)TStack_3a8.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&FStack_1f8,"Hair.Deformer.ObjectNumPoints");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1f8.Data.AllocatorInstance.Data);
  }
  FStack_3c8._padding_._4_4_ = TStack_378.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_158.NumElements = TStack_378.ArrayNum;
  FStack_158.BytesPerElement = 4;
  FStack_158._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_158.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_158.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_2d8.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&FStack_158,(wchar_t *)FVar16.Data,None);
  this->ObjectNumPointsBuffer = FStack_2d8.Buffer;
  FStack_2d8._padding_._0_1_ = 0;
  FStack_2d8._padding_._4_4_ = 0;
  FStack_2d8._padding_._0_4_ = 0xffffffff;
  FStack_2d8._padding_ = 0;
  if ((((FStack_2d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_2d8._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_2d8);
  this->ObjectNumPointsResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectNumPointsBuffer,TStack_378.AllocatorInstance.Data,
             (longlong)TStack_378.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&FStack_1e8,"Hair.Deformer.PointObjectIndices");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1e8.Data.AllocatorInstance.Data);
  }
  FStack_3c8._padding_._4_4_ = TStack_358.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_140.NumElements = TStack_358.ArrayNum;
  FStack_140.BytesPerElement = 4;
  FStack_140._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_140.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_140.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_2b8.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&FStack_140,(wchar_t *)FVar16.Data,None);
  this->PointObjectIndicesBuffer = FStack_2b8.Buffer;
  FStack_2b8._padding_._0_1_ = 0;
  FStack_2b8._padding_._4_4_ = 0;
  FStack_2b8._padding_._0_4_ = 0xffffffff;
  FStack_2b8._padding_ = 0;
  if ((((FStack_2b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_2b8._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_2b8);
  this->PointObjectIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->PointObjectIndicesBuffer,TStack_358.AllocatorInstance.Data,
             (longlong)TStack_358.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&FStack_1d8,"Hair.Deformer.DynamicPointIndices");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1d8.Data.AllocatorInstance.Data);
  }
  FStack_3c8._padding_._4_4_ = (this->SolverSettings).PointDynamicIndices.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_128.NumElements = FStack_3c8._padding_._4_4_;
  FStack_128.BytesPerElement = 4;
  FStack_128._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_128.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_128.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_298.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&FStack_128,(wchar_t *)FVar16.Data,None);
  this->DynamicPointIndicesBuffer = FStack_298.Buffer;
  FStack_298._padding_._0_1_ = 0;
  FStack_298._padding_._4_4_ = 0;
  FStack_298._padding_._0_4_ = 0xffffffff;
  FStack_298._padding_ = 0;
  if ((((FStack_298.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_298._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_298);
  iVar3 = (this->SolverSettings).PointDynamicIndices.ArrayNum;
  pFVar1 = (this->SolverSettings).PointDynamicIndices.AllocatorInstance.Data;
  this->DynamicPointIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->DynamicPointIndicesBuffer,pFVar1,(longlong)iVar3 << 2,None);
  pFVar10 = ::FString::FString(&FStack_1c8,"Hair.Deformer.KinematicPointIndices");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1c8.Data.AllocatorInstance.Data);
  }
  FStack_3c8._padding_._4_4_ = (this->SolverSettings).PointKinematicIndices.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_110.NumElements = FStack_3c8._padding_._4_4_;
  FStack_110.BytesPerElement = 4;
  FStack_110._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_110.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_110.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_3c8.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&FStack_110,(wchar_t *)FVar16.Data,None);
  this->KinematicPointIndicesBuffer = FStack_3c8.Buffer;
  uVar11 = 0;
  FStack_3c8._padding_._4_4_ = 0;
  FStack_3c8._padding_._0_4_ = 0xffffffff;
  FStack_3c8._padding_ = 0;
  if ((((FStack_3c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar11 = 0x1c;
  }
  FStack_3c8._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)FStack_3c8._padding_ >> 8),uVar11);
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_3c8);
  iVar3 = (this->SolverSettings).PointKinematicIndices.ArrayNum;
  pFVar1 = (this->SolverSettings).PointKinematicIndices.AllocatorInstance.Data;
  this->KinematicPointIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->KinematicPointIndicesBuffer,pFVar1,(longlong)iVar3 << 2,None);
  uVar8 = (this->CurvesCounts).ArrayNum;
  TStack_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_398.ArrayNum = 0;
  TStack_398.ArrayMax = 0;
  TStack_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_388.ArrayNum = 0;
  TStack_388.ArrayMax = 0;
  TStack_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_368.ArrayNum = 0;
  TStack_368.ArrayMax = 0;
  auStack_340[0] = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init(&TStack_398,auStack_340,uVar8 + 1);
  uStack_348 = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init(&TStack_388,&uStack_348,uVar8);
  uVar12 = uVar13;
  if (uVar8 != 0) {
    do {
      uVar15 = ~uVar13 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar13 < (this->CurvesCounts).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar13;
      uVar2 = *(undefined4 *)((this->CurvesCounts).AllocatorInstance.Data + lVar14 * 4);
      uVar17 = 0;
      if ((int)uVar13 < TStack_388.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)(TStack_388.AllocatorInstance.Data + lVar14 * 4) = uVar2;
      uVar17 = 0;
      if ((int)uVar13 < TStack_398.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(TStack_398.AllocatorInstance.Data + lVar14 * 4) = uVar12;
      uVar17 = 0;
      if ((int)uVar13 < (this->CurvesCounts).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 + *(int *)((this->CurvesCounts).AllocatorInstance.Data + lVar14 * 4);
    } while (uVar13 < uVar8);
  }
  uVar17 = 0;
  uVar13 = 0;
  if ((int)uVar8 < TStack_398.ArrayNum) {
    uVar13 = ~uVar8 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iStack_344 = -1;
  *(uint *)(TStack_398.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = uVar12;
  this->NumCurves = uVar12;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&TStack_368,&iStack_344,uVar12);
  if (uVar8 != 0) {
    do {
      uVar12 = ~uVar17 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar17 < TStack_398.ArrayNum) {
        uVar13 = uVar12;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar17;
      uVar13 = *(uint *)(TStack_398.AllocatorInstance.Data + lVar14 * 4);
      uVar15 = 0;
      if ((int)uVar17 < TStack_398.ArrayNum) {
        uVar15 = uVar12;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = TStack_398.AllocatorInstance.Data + lVar14 * 4;
      uVar15 = 0;
      if ((int)uVar17 < TStack_388.ArrayNum) {
        uVar15 = uVar12;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = *(int *)(TStack_388.AllocatorInstance.Data + lVar14 * 4);
      iVar4 = *(int *)pFVar1;
      for (; uVar13 < (uint)(iVar3 + iVar4); uVar13 = uVar13 + 1) {
        uVar12 = 0;
        if ((int)uVar13 < TStack_368.ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(TStack_368.AllocatorInstance.Data + (longlong)(int)uVar13 * 4) = uVar17;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar8);
  }
  pFVar10 = ::FString::FString(&FStack_1b8,"Hair.Deformer.ObjectCurveOffsets");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1b8.Data.AllocatorInstance.Data);
  }
  pFVar6 = pFStackX_10;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._4_4_ = TStack_398.ArrayNum;
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_f8.NumElements = TStack_398.ArrayNum;
  FStack_f8.BytesPerElement = 4;
  FStack_f8._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_f8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_f8.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_318.Buffer = FRDGBuilder::CreateBuffer(pFStackX_10,&FStack_f8,(wchar_t *)FVar16.Data,None);
  this->ObjectCurveOffsetsBuffer = FStack_318.Buffer;
  FStack_318._padding_._4_4_ = 0;
  FStack_318._padding_._0_4_ = 0xffffffff;
  FStack_318._padding_ = 0;
  FStack_318._padding_._0_1_ = 0;
  if ((((FStack_318.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_318._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_318);
  this->ObjectCurveOffsetsResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectCurveOffsetsBuffer,TStack_398.AllocatorInstance.Data,
             (longlong)TStack_398.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&FStack_1a8,"Hair.Deformer.ObjectNumCurves");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_1a8.Data.AllocatorInstance.Data);
  }
  FStack_3c8._padding_._4_4_ = TStack_388.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_c8.NumElements = TStack_388.ArrayNum;
  FStack_c8.BytesPerElement = 4;
  FStack_c8._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_c8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_c8.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_278.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&FStack_c8,(wchar_t *)FVar16.Data,None);
  this->ObjectNumCurvesBuffer = FStack_278.Buffer;
  FStack_278._padding_._0_1_ = 0;
  FStack_278._padding_._4_4_ = 0;
  FStack_278._padding_._0_4_ = 0xffffffff;
  FStack_278._padding_ = 0;
  if ((((FStack_278.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_278._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_278);
  this->ObjectNumCurvesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectNumCurvesBuffer,TStack_388.AllocatorInstance.Data,
             (longlong)TStack_388.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&FStack_198,"Hair.Deformer.CurveObjectIndices");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_198.Data.AllocatorInstance.Data);
  }
  FStack_3c8._padding_._4_4_ = TStack_368.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_b0.NumElements = TStack_368.ArrayNum;
  FStack_b0.BytesPerElement = 4;
  FStack_b0._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_b0.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_b0.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_258.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&FStack_b0,(wchar_t *)FVar16.Data,None);
  this->CurveObjectIndicesBuffer = FStack_258.Buffer;
  FStack_258._padding_._0_1_ = 0;
  FStack_258._padding_._4_4_ = 0;
  FStack_258._padding_._0_4_ = 0xffffffff;
  FStack_258._padding_ = 0;
  if ((((FStack_258.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_258._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_258);
  this->CurveObjectIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->CurveObjectIndicesBuffer,TStack_368.AllocatorInstance.Data,
             (longlong)TStack_368.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&FStack_188,"Hair.Deformer.DynamicCurveIndices");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_188.Data.AllocatorInstance.Data);
  }
  FStack_3c8._padding_._4_4_ = (this->SolverSettings).CurveDynamicIndices.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_98.NumElements = FStack_3c8._padding_._4_4_;
  FStack_98.BytesPerElement = 4;
  FStack_98._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_98.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_98.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_238.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&FStack_98,(wchar_t *)FVar16.Data,None);
  this->DynamicCurveIndicesBuffer = FStack_238.Buffer;
  FStack_238._padding_._0_1_ = 0;
  FStack_238._padding_._4_4_ = 0;
  FStack_238._padding_._0_4_ = 0xffffffff;
  FStack_238._padding_ = 0;
  if ((((FStack_238.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_238._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_238);
  iVar3 = (this->SolverSettings).CurveDynamicIndices.ArrayNum;
  pFVar1 = (this->SolverSettings).CurveDynamicIndices.AllocatorInstance.Data;
  this->DynamicCurveIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->DynamicCurveIndicesBuffer,pFVar1,(longlong)iVar3 << 2,None);
  pFVar10 = ::FString::FString(&FStack_178,"Hair.Deformer.KinematicCurveIndices");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_178.Data.AllocatorInstance.Data);
  }
  FStack_3c8._padding_._4_4_ = (this->SolverSettings).CurveKinematicIndices.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_80.NumElements = FStack_3c8._padding_._4_4_;
  FStack_80.BytesPerElement = 4;
  FStack_80._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_80.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_80.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_218.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&FStack_80,(wchar_t *)FVar16.Data,None);
  this->KinematicCurveIndicesBuffer = FStack_218.Buffer;
  FStack_218._padding_._0_1_ = 0;
  FStack_218._padding_._4_4_ = 0;
  FStack_218._padding_._0_4_ = 0xffffffff;
  FStack_218._padding_ = 0;
  if ((((FStack_218.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_218._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_218);
  iVar3 = (this->SolverSettings).CurveKinematicIndices.ArrayNum;
  pFVar1 = (this->SolverSettings).CurveKinematicIndices.AllocatorInstance.Data;
  this->KinematicCurveIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->KinematicCurveIndicesBuffer,pFVar1,(longlong)iVar3 << 2,None);
  pFVar10 = ::FString::FString(&FStack_168,"Hair.Deformer.ObjectDistanceLods");
  if (&FStack_3d8 != pFVar10) {
    if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
    }
    FStack_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    FStack_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (FStack_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_168.Data.AllocatorInstance.Data);
  }
  FStack_3c8._padding_._4_4_ = (this->SolverSettings).ObjectDistanceLods.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (FStack_3d8.Data.ArrayNum != 0) {
    FVar16.Data = FStack_3d8.Data.AllocatorInstance.Data;
  }
  FStack_3c8._padding_._0_4_ = 0x10109;
  FStack_3c8._padding_._0_4_ = 4;
  FStack_68.NumElements = FStack_3c8._padding_._4_4_;
  FStack_68.BytesPerElement = 4;
  FStack_68._12_4_ = FStack_3c8._padding_._4_4_;
  FStack_68.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  FStack_3c8._padding_ = 0;
  FStack_68.Metadata = (FShaderParametersMetadata *)0x0;
  FStack_338.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&FStack_68,(wchar_t *)FVar16.Data,None);
  this->ObjectDistanceLodsBuffer = FStack_338.Buffer;
  FStack_338._padding_._0_1_ = 0;
  FStack_338._padding_._4_4_ = 0;
  FStack_338._padding_._0_4_ = 0xffffffff;
  FStack_338._padding_ = 0;
  if ((((FStack_338.Buffer)->Desc).Usage & DrawIndirect) != None) {
    FStack_338._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&FStack_338);
  iVar3 = (this->SolverSettings).ObjectDistanceLods.ArrayNum;
  pFVar1 = (this->SolverSettings).ObjectDistanceLods.AllocatorInstance.Data;
  this->ObjectDistanceLodsResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectDistanceLodsBuffer,pFVar1,(longlong)iVar3 << 2,None);
  if (TStack_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_368.AllocatorInstance.Data);
  }
  if (TStack_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_388.AllocatorInstance.Data);
  }
  if (TStack_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_398.AllocatorInstance.Data);
  }
  if (FStack_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_3d8.Data.AllocatorInstance.Data);
  }
  if (TStack_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_358.AllocatorInstance.Data);
  }
  if (TStack_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_378.AllocatorInstance.Data);
  }
  if (TStack_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_3a8.AllocatorInstance.Data);
  }
  return;
}

// CreateInternalBuffers @ 14e2700e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FOptimusGroomSolverReadDataProviderProxy::CreateInternalBuffers
          (FOptimusGroomSolverReadDataProviderProxy *this,FRDGBuilder *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  FRDGBuilder *pFVar6;
  bool bVar7;
  uint uVar8;
  FRDGBufferSRV *pFVar9;
  FString *pFVar10;
  undefined1 uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint local_res8 [2];
  FRDGBuilder *local_res10;
  uint local_res18 [2];
  int local_res20 [2];
  FString local_3d8;
  FRDGBufferSRVDesc local_3c8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_3a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_398;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_388;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_378;
  TArray<int,TSizedDefaultAllocator<32>_> local_368;
  TArray<int,TSizedDefaultAllocator<32>_> local_358;
  uint local_348;
  int local_344;
  uint local_340 [2];
  FRDGBufferSRVDesc local_338;
  FRDGBufferSRVDesc local_318;
  FRDGBufferSRVDesc local_2f8;
  FRDGBufferSRVDesc local_2d8;
  FRDGBufferSRVDesc local_2b8;
  FRDGBufferSRVDesc local_298;
  FRDGBufferSRVDesc local_278;
  FRDGBufferSRVDesc local_258;
  FRDGBufferSRVDesc local_238;
  FRDGBufferSRVDesc local_218;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FRDGBufferDesc local_158;
  FRDGBufferDesc local_140;
  FRDGBufferDesc local_128;
  FRDGBufferDesc local_110;
  FRDGBufferDesc local_f8;
  FRDGBufferDesc local_e0;
  FRDGBufferDesc local_c8;
  FRDGBufferDesc local_b0;
  FRDGBufferDesc local_98;
  FRDGBufferDesc local_80;
  FRDGBufferDesc local_68;
  
  uVar13 = (this->PointsCounts).ArrayNum;
  uVar12 = 0;
  uVar17 = 0;
  local_3a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_3a8.ArrayNum = 0;
  local_3a8.ArrayMax = 0;
  local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.ArrayNum = 0;
  local_378.ArrayMax = 0;
  local_358.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_358.ArrayNum = 0;
  local_358.ArrayMax = 0;
  local_res8[0] = 0;
  local_res10 = param_1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init(&local_3a8,local_res8,uVar13 + 1);
  local_res18[0] = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init(&local_378,local_res18,uVar13);
  uVar8 = uVar12;
  if (uVar13 != 0) {
    do {
      uVar15 = ~uVar12 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar12 < (this->PointsCounts).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar12;
      uVar2 = *(undefined4 *)((this->PointsCounts).AllocatorInstance.Data + lVar14 * 4);
      uVar17 = 0;
      if ((int)uVar12 < local_378.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)(local_378.AllocatorInstance.Data + lVar14 * 4) = uVar2;
      uVar17 = 0;
      if ((int)uVar12 < local_3a8.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(local_3a8.AllocatorInstance.Data + lVar14 * 4) = uVar8;
      uVar17 = 0;
      if ((int)uVar12 < (this->PointsCounts).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = uVar12 + 1;
      uVar17 = uVar8 + *(int *)((this->PointsCounts).AllocatorInstance.Data + lVar14 * 4);
      uVar8 = uVar17;
    } while (uVar12 < uVar13);
  }
  uVar12 = 0;
  uVar8 = 0;
  if ((int)uVar13 < local_3a8.ArrayNum) {
    uVar8 = ~uVar13 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_res20[0] = -1;
  *(uint *)(local_3a8.AllocatorInstance.Data + (longlong)(int)uVar13 * 4) = uVar17;
  this->NumPoints = uVar17;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_358,local_res20,uVar17);
  if (uVar13 != 0) {
    do {
      uVar17 = ~uVar12 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar12 < local_3a8.ArrayNum) {
        uVar8 = uVar17;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar12;
      uVar8 = 0;
      if ((int)uVar12 < local_3a8.ArrayNum) {
        uVar8 = uVar17;
      }
      uVar15 = *(uint *)(local_3a8.AllocatorInstance.Data + lVar14 * 4);
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = local_3a8.AllocatorInstance.Data + lVar14 * 4;
      uVar8 = 0;
      if ((int)uVar12 < local_378.ArrayNum) {
        uVar8 = uVar17;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = *(int *)(local_378.AllocatorInstance.Data + lVar14 * 4);
      iVar4 = *(int *)pFVar1;
      for (; uVar15 < (uint)(iVar3 + iVar4); uVar15 = uVar15 + 1) {
        uVar8 = 0;
        if ((int)uVar15 < local_358.ArrayNum) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(local_358.AllocatorInstance.Data + (longlong)(int)uVar15 * 4) = uVar12;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar13);
  }
  uVar13 = 0;
  ::FString::FString(&local_3d8,"Hair.Deformer.ObjectPointOffsets");
  pFVar6 = local_res10;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._4_4_ = local_3a8.ArrayNum;
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_e0.NumElements = local_3a8.ArrayNum;
  local_e0.BytesPerElement = 4;
  local_e0._12_4_ = local_3c8._padding_._4_4_;
  local_e0.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_e0.Metadata = (FShaderParametersMetadata *)0x0;
  local_2f8.Buffer = FRDGBuilder::CreateBuffer(local_res10,&local_e0,(wchar_t *)FVar16.Data,None);
  this->ObjectPointOffsetsBuffer = local_2f8.Buffer;
  local_2f8._padding_._4_4_ = 0;
  local_2f8._padding_._0_4_ = 0xffffffff;
  local_2f8._padding_ = 0;
  local_2f8._padding_._0_1_ = 0;
  if ((((local_2f8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_2f8._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_2f8);
  this->ObjectPointOffsetsResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectPointOffsetsBuffer,local_3a8.AllocatorInstance.Data,
             (longlong)local_3a8.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&local_1f8,"Hair.Deformer.ObjectNumPoints");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  local_3c8._padding_._4_4_ = local_378.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_158.NumElements = local_378.ArrayNum;
  local_158.BytesPerElement = 4;
  local_158._12_4_ = local_3c8._padding_._4_4_;
  local_158.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_158.Metadata = (FShaderParametersMetadata *)0x0;
  local_2d8.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&local_158,(wchar_t *)FVar16.Data,None);
  this->ObjectNumPointsBuffer = local_2d8.Buffer;
  local_2d8._padding_._0_1_ = 0;
  local_2d8._padding_._4_4_ = 0;
  local_2d8._padding_._0_4_ = 0xffffffff;
  local_2d8._padding_ = 0;
  if ((((local_2d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_2d8._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_2d8);
  this->ObjectNumPointsResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectNumPointsBuffer,local_378.AllocatorInstance.Data,
             (longlong)local_378.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&local_1e8,"Hair.Deformer.PointObjectIndices");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  local_3c8._padding_._4_4_ = local_358.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_140.NumElements = local_358.ArrayNum;
  local_140.BytesPerElement = 4;
  local_140._12_4_ = local_3c8._padding_._4_4_;
  local_140.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_140.Metadata = (FShaderParametersMetadata *)0x0;
  local_2b8.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&local_140,(wchar_t *)FVar16.Data,None);
  this->PointObjectIndicesBuffer = local_2b8.Buffer;
  local_2b8._padding_._0_1_ = 0;
  local_2b8._padding_._4_4_ = 0;
  local_2b8._padding_._0_4_ = 0xffffffff;
  local_2b8._padding_ = 0;
  if ((((local_2b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_2b8._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_2b8);
  this->PointObjectIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->PointObjectIndicesBuffer,local_358.AllocatorInstance.Data,
             (longlong)local_358.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&local_1d8,"Hair.Deformer.DynamicPointIndices");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  local_3c8._padding_._4_4_ = (this->SolverSettings).PointDynamicIndices.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_128.NumElements = local_3c8._padding_._4_4_;
  local_128.BytesPerElement = 4;
  local_128._12_4_ = local_3c8._padding_._4_4_;
  local_128.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_128.Metadata = (FShaderParametersMetadata *)0x0;
  local_298.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&local_128,(wchar_t *)FVar16.Data,None);
  this->DynamicPointIndicesBuffer = local_298.Buffer;
  local_298._padding_._0_1_ = 0;
  local_298._padding_._4_4_ = 0;
  local_298._padding_._0_4_ = 0xffffffff;
  local_298._padding_ = 0;
  if ((((local_298.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_298._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_298);
  iVar3 = (this->SolverSettings).PointDynamicIndices.ArrayNum;
  pFVar1 = (this->SolverSettings).PointDynamicIndices.AllocatorInstance.Data;
  this->DynamicPointIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->DynamicPointIndicesBuffer,pFVar1,(longlong)iVar3 << 2,None);
  pFVar10 = ::FString::FString(&local_1c8,"Hair.Deformer.KinematicPointIndices");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
  }
  local_3c8._padding_._4_4_ = (this->SolverSettings).PointKinematicIndices.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_110.NumElements = local_3c8._padding_._4_4_;
  local_110.BytesPerElement = 4;
  local_110._12_4_ = local_3c8._padding_._4_4_;
  local_110.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_110.Metadata = (FShaderParametersMetadata *)0x0;
  local_3c8.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&local_110,(wchar_t *)FVar16.Data,None);
  this->KinematicPointIndicesBuffer = local_3c8.Buffer;
  uVar11 = 0;
  local_3c8._padding_._4_4_ = 0;
  local_3c8._padding_._0_4_ = 0xffffffff;
  local_3c8._padding_ = 0;
  if ((((local_3c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
    uVar11 = 0x1c;
  }
  local_3c8._padding_._0_4_ = CONCAT31((int3)((uint)(undefined4)local_3c8._padding_ >> 8),uVar11);
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_3c8);
  iVar3 = (this->SolverSettings).PointKinematicIndices.ArrayNum;
  pFVar1 = (this->SolverSettings).PointKinematicIndices.AllocatorInstance.Data;
  this->KinematicPointIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->KinematicPointIndicesBuffer,pFVar1,(longlong)iVar3 << 2,None);
  uVar8 = (this->CurvesCounts).ArrayNum;
  local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.ArrayNum = 0;
  local_398.ArrayMax = 0;
  local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.ArrayNum = 0;
  local_388.ArrayMax = 0;
  local_368.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.ArrayNum = 0;
  local_368.ArrayMax = 0;
  local_340[0] = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init(&local_398,local_340,uVar8 + 1);
  local_348 = 0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::Init(&local_388,&local_348,uVar8);
  uVar12 = uVar13;
  if (uVar8 != 0) {
    do {
      uVar15 = ~uVar13 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar13 < (this->CurvesCounts).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar13;
      uVar2 = *(undefined4 *)((this->CurvesCounts).AllocatorInstance.Data + lVar14 * 4);
      uVar17 = 0;
      if ((int)uVar13 < local_388.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined4 *)(local_388.AllocatorInstance.Data + lVar14 * 4) = uVar2;
      uVar17 = 0;
      if ((int)uVar13 < local_398.ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(uint *)(local_398.AllocatorInstance.Data + lVar14 * 4) = uVar12;
      uVar17 = 0;
      if ((int)uVar13 < (this->CurvesCounts).ArrayNum) {
        uVar17 = uVar15;
      }
      if ((uVar17 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 + *(int *)((this->CurvesCounts).AllocatorInstance.Data + lVar14 * 4);
    } while (uVar13 < uVar8);
  }
  uVar17 = 0;
  uVar13 = 0;
  if ((int)uVar8 < local_398.ArrayNum) {
    uVar13 = ~uVar8 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_344 = -1;
  *(uint *)(local_398.AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = uVar12;
  this->NumCurves = uVar12;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_368,&local_344,uVar12);
  if (uVar8 != 0) {
    do {
      uVar12 = ~uVar17 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar17 < local_398.ArrayNum) {
        uVar13 = uVar12;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar14 = (longlong)(int)uVar17;
      uVar13 = *(uint *)(local_398.AllocatorInstance.Data + lVar14 * 4);
      uVar15 = 0;
      if ((int)uVar17 < local_398.ArrayNum) {
        uVar15 = uVar12;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar1 = local_398.AllocatorInstance.Data + lVar14 * 4;
      uVar15 = 0;
      if ((int)uVar17 < local_388.ArrayNum) {
        uVar15 = uVar12;
      }
      if ((uVar15 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar3 = *(int *)(local_388.AllocatorInstance.Data + lVar14 * 4);
      iVar4 = *(int *)pFVar1;
      for (; uVar13 < (uint)(iVar3 + iVar4); uVar13 = uVar13 + 1) {
        uVar12 = 0;
        if ((int)uVar13 < local_368.ArrayNum) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        *(uint *)(local_368.AllocatorInstance.Data + (longlong)(int)uVar13 * 4) = uVar17;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < uVar8);
  }
  pFVar10 = ::FString::FString(&local_1b8,"Hair.Deformer.ObjectCurveOffsets");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  pFVar6 = local_res10;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._4_4_ = local_398.ArrayNum;
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_f8.NumElements = local_398.ArrayNum;
  local_f8.BytesPerElement = 4;
  local_f8._12_4_ = local_3c8._padding_._4_4_;
  local_f8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_f8.Metadata = (FShaderParametersMetadata *)0x0;
  local_318.Buffer = FRDGBuilder::CreateBuffer(local_res10,&local_f8,(wchar_t *)FVar16.Data,None);
  this->ObjectCurveOffsetsBuffer = local_318.Buffer;
  local_318._padding_._4_4_ = 0;
  local_318._padding_._0_4_ = 0xffffffff;
  local_318._padding_ = 0;
  local_318._padding_._0_1_ = 0;
  if ((((local_318.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_318._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_318);
  this->ObjectCurveOffsetsResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectCurveOffsetsBuffer,local_398.AllocatorInstance.Data,
             (longlong)local_398.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&local_1a8,"Hair.Deformer.ObjectNumCurves");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  local_3c8._padding_._4_4_ = local_388.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_c8.NumElements = local_388.ArrayNum;
  local_c8.BytesPerElement = 4;
  local_c8._12_4_ = local_3c8._padding_._4_4_;
  local_c8.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_c8.Metadata = (FShaderParametersMetadata *)0x0;
  local_278.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&local_c8,(wchar_t *)FVar16.Data,None);
  this->ObjectNumCurvesBuffer = local_278.Buffer;
  local_278._padding_._0_1_ = 0;
  local_278._padding_._4_4_ = 0;
  local_278._padding_._0_4_ = 0xffffffff;
  local_278._padding_ = 0;
  if ((((local_278.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_278._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_278);
  this->ObjectNumCurvesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectNumCurvesBuffer,local_388.AllocatorInstance.Data,
             (longlong)local_388.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&local_198,"Hair.Deformer.CurveObjectIndices");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  local_3c8._padding_._4_4_ = local_368.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_b0.NumElements = local_368.ArrayNum;
  local_b0.BytesPerElement = 4;
  local_b0._12_4_ = local_3c8._padding_._4_4_;
  local_b0.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_b0.Metadata = (FShaderParametersMetadata *)0x0;
  local_258.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&local_b0,(wchar_t *)FVar16.Data,None);
  this->CurveObjectIndicesBuffer = local_258.Buffer;
  local_258._padding_._0_1_ = 0;
  local_258._padding_._4_4_ = 0;
  local_258._padding_._0_4_ = 0xffffffff;
  local_258._padding_ = 0;
  if ((((local_258.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_258._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_258);
  this->CurveObjectIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->CurveObjectIndicesBuffer,local_368.AllocatorInstance.Data,
             (longlong)local_368.ArrayNum << 2,None);
  pFVar10 = ::FString::FString(&local_188,"Hair.Deformer.DynamicCurveIndices");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  local_3c8._padding_._4_4_ = (this->SolverSettings).CurveDynamicIndices.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_98.NumElements = local_3c8._padding_._4_4_;
  local_98.BytesPerElement = 4;
  local_98._12_4_ = local_3c8._padding_._4_4_;
  local_98.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_98.Metadata = (FShaderParametersMetadata *)0x0;
  local_238.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&local_98,(wchar_t *)FVar16.Data,None);
  this->DynamicCurveIndicesBuffer = local_238.Buffer;
  local_238._padding_._0_1_ = 0;
  local_238._padding_._4_4_ = 0;
  local_238._padding_._0_4_ = 0xffffffff;
  local_238._padding_ = 0;
  if ((((local_238.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_238._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_238);
  iVar3 = (this->SolverSettings).CurveDynamicIndices.ArrayNum;
  pFVar1 = (this->SolverSettings).CurveDynamicIndices.AllocatorInstance.Data;
  this->DynamicCurveIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->DynamicCurveIndicesBuffer,pFVar1,(longlong)iVar3 << 2,None);
  pFVar10 = ::FString::FString(&local_178,"Hair.Deformer.KinematicCurveIndices");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  local_3c8._padding_._4_4_ = (this->SolverSettings).CurveKinematicIndices.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_80.NumElements = local_3c8._padding_._4_4_;
  local_80.BytesPerElement = 4;
  local_80._12_4_ = local_3c8._padding_._4_4_;
  local_80.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_80.Metadata = (FShaderParametersMetadata *)0x0;
  local_218.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&local_80,(wchar_t *)FVar16.Data,None);
  this->KinematicCurveIndicesBuffer = local_218.Buffer;
  local_218._padding_._0_1_ = 0;
  local_218._padding_._4_4_ = 0;
  local_218._padding_._0_4_ = 0xffffffff;
  local_218._padding_ = 0;
  if ((((local_218.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_218._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_218);
  iVar3 = (this->SolverSettings).CurveKinematicIndices.ArrayNum;
  pFVar1 = (this->SolverSettings).CurveKinematicIndices.AllocatorInstance.Data;
  this->KinematicCurveIndicesResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->KinematicCurveIndicesBuffer,pFVar1,(longlong)iVar3 << 2,None);
  pFVar10 = ::FString::FString(&local_168,"Hair.Deformer.ObjectDistanceLods");
  if (&local_3d8 != pFVar10) {
    if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
    }
    local_3d8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
    local_3d8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  local_3c8._padding_._4_4_ = (this->SolverSettings).ObjectDistanceLods.ArrayNum;
  FVar16.Data = (FScriptContainerElement *)L"";
  if (local_3d8.Data.ArrayNum != 0) {
    FVar16.Data = local_3d8.Data.AllocatorInstance.Data;
  }
  local_3c8._padding_._0_4_ = 0x10109;
  local_3c8._padding_._0_4_ = 4;
  local_68.NumElements = local_3c8._padding_._4_4_;
  local_68.BytesPerElement = 4;
  local_68._12_4_ = local_3c8._padding_._4_4_;
  local_68.Usage = StructuredBuffer|ShaderResource|UnorderedAccess|Static;
  local_3c8._padding_ = 0;
  local_68.Metadata = (FShaderParametersMetadata *)0x0;
  local_338.Buffer = FRDGBuilder::CreateBuffer(pFVar6,&local_68,(wchar_t *)FVar16.Data,None);
  this->ObjectDistanceLodsBuffer = local_338.Buffer;
  local_338._padding_._0_1_ = 0;
  local_338._padding_._4_4_ = 0;
  local_338._padding_._0_4_ = 0xffffffff;
  local_338._padding_ = 0;
  if ((((local_338.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_338._padding_._0_1_ = 0x1c;
  }
  pFVar9 = FRDGBuilder::CreateSRV(pFVar6,&local_338);
  iVar3 = (this->SolverSettings).ObjectDistanceLods.ArrayNum;
  pFVar1 = (this->SolverSettings).ObjectDistanceLods.AllocatorInstance.Data;
  this->ObjectDistanceLodsResource = pFVar9;
  FRDGBuilder::QueueBufferUpload
            (pFVar6,this->ObjectDistanceLodsBuffer,pFVar1,(longlong)iVar3 << 2,None);
  if (local_368.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.AllocatorInstance.Data);
  }
  if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_388.AllocatorInstance.Data);
  }
  if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_398.AllocatorInstance.Data);
  }
  if (local_3d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3d8.Data.AllocatorInstance.Data);
  }
  if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.AllocatorInstance.Data);
  }
  if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.AllocatorInstance.Data);
  }
  if (local_3a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_3a8.AllocatorInstance.Data);
  }
  return;
}

// GatherDispatchData @ 14e272c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusGroomSolverReadDataProviderProxy::GatherDispatchData
          (FOptimusGroomSolverReadDataProviderProxy *this,FDispatchData *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [8];
  double dVar10;
  undefined1 auVar11 [8];
  undefined1 auVar12 [8];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  bool bVar17;
  double *pdVar18;
  FScriptContainerElement *pFVar19;
  float *pfVar20;
  int iVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 local_res8 [8];
  uchar *local_res10;
  undefined1 local_138 [8];
  double dStack_130;
  undefined1 local_128 [8];
  double dStack_120;
  undefined1 local_118 [8];
  double dStack_110;
  
  iVar2 = param_1->NumInvocations;
  iVar3 = param_1->ParameterBufferStride;
  local_res10 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
  if (iVar2 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("NumElements >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                        ,0x3f,L"");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iVar3 < 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("BytesBetweenElements >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                        ,0x40,L"");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (((longlong)iVar3 & 0xfU) != 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("BytesBetweenElements % alignof(ElementType) == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                        ,0x41,L"");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iVar2 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("!ParameterArray.IsEmpty()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomSolverRead.cpp"
                        ,499,L"");
    if (bVar17) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar19 = (this->GroupInstances).AllocatorInstance.Data;
  bVar17 = false;
  iVar21 = (this->GroupInstances).ArrayNum;
  _local_138 = ZEXT816(0);
  auVar14 = _local_138;
  dStack_130 = 0.0;
  local_138 = (undefined1  [8])0x0;
  pFVar1 = pFVar19 + (longlong)iVar21 * 8;
  _local_128 = ZEXT816(0);
  auVar15 = _local_128;
  dStack_120 = 0.0;
  local_128 = (undefined1  [8])0x0;
  _local_118 = ZEXT816(0);
  auVar16 = _local_118;
  dStack_110 = 0.0;
  local_118 = (undefined1  [8])0x0;
  auVar9 = local_118;
  dVar8 = dStack_120;
  dVar10 = dStack_110;
  auVar11 = local_138;
  auVar12 = local_128;
  dVar13 = dStack_130;
  _local_138 = auVar14;
  _local_128 = auVar15;
  _local_118 = auVar16;
  while( true ) {
    if ((this->GroupInstances).ArrayNum != iVar21) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TRefCountPtr<FHairGroupInstance_const_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == pFVar1) break;
    pdVar18 = (double *)(**(code **)(**(longlong **)pFVar19 + 8))();
    dVar5 = *pdVar18 + pdVar18[3];
    dVar6 = pdVar18[1] + pdVar18[4];
    dVar7 = pdVar18[2] + pdVar18[5];
    dVar22 = *pdVar18 - pdVar18[3];
    dVar23 = pdVar18[1] - pdVar18[4];
    dVar24 = pdVar18[2] - pdVar18[5];
    if (bVar17) {
      if (dVar22 <= (double)auVar11) {
        auVar11 = (undefined1  [8])dVar22;
      }
      pFVar19 = pFVar19 + 8;
      if (dVar23 <= dVar13) {
        dVar13 = dVar23;
      }
      if (dVar24 <= (double)auVar12) {
        auVar12 = (undefined1  [8])dVar24;
      }
      if (dVar8 <= dVar5) {
        dVar8 = dVar5;
      }
      if ((double)auVar9 <= dVar6) {
        auVar9 = (undefined1  [8])dVar6;
      }
      if (dVar10 <= dVar7) {
        dVar10 = dVar7;
      }
      dStack_130 = dVar13;
      local_138 = auVar11;
      dStack_120 = dVar8;
      local_128 = auVar12;
      dStack_110 = dVar10;
      local_118 = auVar9;
    }
    else {
      bVar17 = true;
      pFVar19 = pFVar19 + 8;
      unique0x10000198 = SUB84(dVar23,0);
      local_138 = (undefined1  [8])dVar22;
      unique0x1000019c = (int)((ulonglong)dVar23 >> 0x20);
      unique0x10000254 = SUB84(dVar5,0);
      local_128 = (undefined1  [8])dVar24;
      unique0x10000258 = (int)((ulonglong)dVar5 >> 0x20);
      unique0x10000308 = SUB84(dVar7,0);
      local_118 = (undefined1  [8])dVar6;
      unique0x1000030c = (int)((ulonglong)dVar7 >> 0x20);
      auVar9 = (undefined1  [8])dVar6;
      dVar8 = dVar5;
      dVar10 = dVar7;
      auVar11 = (undefined1  [8])dVar22;
      auVar12 = (undefined1  [8])dVar24;
      dVar13 = dVar23;
    }
  }
  iVar21 = 0;
  if (0 < iVar2) {
    pfVar20 = (float *)(local_res10 + 0x28);
    while( true ) {
      if (iVar21 < 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < NumElements)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                            ,0x96,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar17) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pfVar20[-10] = (float)this->NumPoints;
      pfVar20[-9] = (float)this->NumCurves;
      iVar21 = iVar21 + 1;
      pfVar20[-8] = (float)(this->GroupInstances).ArrayNum;
      pfVar20[-2] = (float)(double)auVar11;
      pfVar20[-1] = (float)dVar13;
      *pfVar20 = (float)(double)auVar12;
      pfVar20[2] = (float)dStack_120;
      pfVar20[3] = (float)(double)local_118;
      pfVar20[4] = (float)dStack_110;
      pfVar20[-7] = (float)(this->SolverSettings).PointDynamicIndices.ArrayNum;
      pfVar20[-6] = (float)(this->SolverSettings).CurveDynamicIndices.ArrayNum;
      pfVar20[-5] = (float)(this->SolverSettings).PointKinematicIndices.ArrayNum;
      pfVar20[-4] = (float)(this->SolverSettings).CurveKinematicIndices.ArrayNum;
      *(FRDGBufferSRV **)(pfVar20 + 6) = this->ObjectPointOffsetsResource;
      *(FRDGBufferSRV **)(pfVar20 + 8) = this->ObjectCurveOffsetsResource;
      *(FRDGBufferSRV **)(pfVar20 + 10) = this->ObjectNumPointsResource;
      *(FRDGBufferSRV **)(pfVar20 + 0xc) = this->ObjectNumCurvesResource;
      *(FRDGBufferSRV **)(pfVar20 + 0xe) = this->PointObjectIndicesResource;
      *(FRDGBufferSRV **)(pfVar20 + 0x10) = this->CurveObjectIndicesResource;
      *(FRDGBufferSRV **)(pfVar20 + 0x12) = this->DynamicPointIndicesResource;
      *(FRDGBufferSRV **)(pfVar20 + 0x14) = this->DynamicCurveIndicesResource;
      *(FRDGBufferSRV **)(pfVar20 + 0x16) = this->KinematicPointIndicesResource;
      *(FRDGBufferSRV **)(pfVar20 + 0x18) = this->KinematicCurveIndicesResource;
      *(FRDGBufferSRV **)(pfVar20 + 0x1a) = this->ObjectDistanceLodsResource;
      pfVar20 = (float *)((longlong)pfVar20 + (longlong)iVar3);
      if (iVar2 <= iVar21) break;
      auVar11 = local_138;
      auVar12 = local_128;
      dVar13 = dStack_130;
    }
  }
  return;
}

// GatherPermutations @ 14e273d90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusGroomSolverReadDataProviderProxy::GatherPermutations
          (FOptimusGroomSolverReadDataProviderProxy *this,FPermutationData *param_1)

{
  return;
}

// IsValid @ 14e289110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FOptimusGroomSolverReadDataProviderProxy::IsValid
          (FOptimusGroomSolverReadDataProviderProxy *this,FValidationData *param_1)

{
  bool bVar1;
  
  if (param_1->ParameterStructSize == 0xa0) {
    bVar1 = UE::Groom::Private::HaveGuidesInstanceResources(&this->GroupInstances);
    if (bVar1) {
      bVar1 = UE::Groom::Private::HaveGuidesSkinnedResources(&this->GroupInstances);
      if ((bVar1) && (this->bResetSimulationTrigger == false)) {
        return true;
      }
    }
  }
  return false;
}

