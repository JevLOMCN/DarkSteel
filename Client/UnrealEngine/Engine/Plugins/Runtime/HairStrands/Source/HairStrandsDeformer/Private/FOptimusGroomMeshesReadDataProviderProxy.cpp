// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 4

// FOptimusGroomMeshesReadDataProviderProxy @ 14e267970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

FOptimusGroomMeshesReadDataProviderProxy * __thiscall
FOptimusGroomMeshesReadDataProviderProxy::FOptimusGroomMeshesReadDataProviderProxy
          (FOptimusGroomMeshesReadDataProviderProxy *this,UMeshComponent *param_1)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  UGroomAsset *pUVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  UClass *pUVar25;
  FOptimusGroomMeshesReadDataProviderProxy *pFVar26;
  AActor *this_00;
  UClass *pUVar27;
  UClass *pUVar28;
  USkeletalMesh *pUVar29;
  USkeletalMesh *pUVar30;
  USkinnedAsset *pUVar31;
  longlong *plVar32;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar33;
  TMatrix<float> *pTVar34;
  FHairGroupInstance *pFVar35;
  TMatrix<double> *this_01;
  FScriptContainerElement *pFVar36;
  longlong *plVar37;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *pTVar38;
  ulonglong uVar39;
  uint uVar40;
  TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *pTVar41;
  longlong lVar42;
  USkeletalMeshComponent *this_02;
  uint uVar43;
  ForAnyElementType FVar44;
  longlong lVar45;
  TArray<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar46;
  UGroomComponent *this_03;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined1 auStackY_5d8 [32];
  undefined1 local_584;
  undefined1 local_583;
  undefined1 local_582 [2];
  ForAnyElementType local_580;
  uint local_578;
  uint uStack_574;
  ForAnyElementType local_570;
  undefined8 local_568;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_560;
  uint local_550;
  FHairGroupInstance *local_548;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_540;
  UMeshComponent *local_530;
  undefined8 local_528;
  FOptimusGroomMeshesReadDataProviderProxy *local_520;
  uint local_518;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_510;
  uint local_500;
  FScriptContainerElement *local_4f8;
  FScriptContainerElement *local_4f0;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *local_4e8;
  TArray<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *local_4e0;
  FScriptContainerElement *local_4d8;
  TArray<TRefCountPtr<FHairGroupInstance_const_>,TSizedDefaultAllocator<32>_> *local_4d0;
  longlong *local_4c8;
  undefined8 uStack_4c0;
  longlong *local_4b8;
  undefined8 uStack_4b0;
  int local_4a8;
  undefined4 uStack_4a4;
  int iStack_4a0;
  undefined4 uStack_49c;
  USkeletalMeshComponent *local_498;
  UGroomComponent *local_490;
  UClass *local_488;
  UClass *local_480;
  undefined8 *local_478;
  int local_470;
  int local_46c;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_468;
  UClass *local_458;
  longlong *local_450;
  undefined1 auStack_448 [20];
  uint uStack_434;
  undefined8 local_430;
  undefined8 uStack_428;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_420 [2];
  undefined4 local_3f4;
  TMatrix<float> local_3e8;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  TMatrix<float> local_368;
  TMatrix<float> local_328;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  bVar20 = false;
  bVar19 = false;
  pTVar38 = &this->SkeletalMeshTransforms;
  pTVar46 = &this->BonesRefToLocals;
  (pTVar38->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pTVar41 = &this->GroupInstances;
  (this->SkeletalMeshTransforms).ArrayNum = 0;
  (this->SkeletalMeshTransforms).ArrayMax = 0;
  (pTVar46->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BonesRefToLocals).ArrayNum = 0;
  (this->BonesRefToLocals).ArrayMax = 0;
  (pTVar41->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->GroupInstances).ArrayNum = 0;
  (this->GroupInstances).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FOptimusGroomMeshesReadDataProviderProxy__6B_;
  (this->SkeletalMeshObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshObjects).ArrayNum = 0;
  (this->SkeletalMeshObjects).ArrayMax = 0;
  (this->BindTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BindTransforms).ArrayNum = 0;
  (this->BindTransforms).ArrayMax = 0;
  (this->BoneMatricesResources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoneMatricesResources).ArrayNum = 0;
  (this->BoneMatricesResources).ArrayMax = 0;
  this->FallbackStructuredSRV = (FRDGBufferSRV *)0x0;
  local_580.Data = (FScriptContainerElement *)0x0;
  local_578 = 0;
  uStack_574 = 0;
  local_520 = this;
  local_4e8 = pTVar38;
  local_4e0 = pTVar46;
  local_4d0 = pTVar41;
  if (param_1 != (UMeshComponent *)0x0) {
    pUVar25 = Z_Construct_UClass_UGroomComponent_NoRegister();
    iVar24 = (int)pUVar25->_padding_;
    if ((iVar24 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar24 * 8) ==
        &pUVar25->_padding_)) {
      local_530 = param_1;
      if ((local_580.Data <= (FScriptContainerElement *)&local_530) &&
         (((FScriptContainerElement *)&local_530 < local_580.Data + (longlong)(int)uStack_574 * 8 &&
          (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar21)))) {
        pcVar7 = (code *)swi(3);
        pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
        return pFVar26;
      }
      if (local_578 == uStack_574) {
        local_578 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_580,(int *)&uStack_574);
      }
      *(UMeshComponent **)(local_580.Data + (longlong)(int)local_578 * 8) = local_530;
      local_578 = local_578 + 1;
      goto LAB_14e267e3c;
    }
  }
  local_530 = (UMeshComponent *)0x0;
  if (param_1 == (UMeshComponent *)0x0) {
LAB_14e267b76:
    param_1 = (UMeshComponent *)0x0;
  }
  else {
    pUVar25 = Z_Construct_UClass_UGroomSolverComponent_NoRegister();
    iVar24 = (int)pUVar25->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar24) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar24 * 8) !=
        &pUVar25->_padding_)) goto LAB_14e267b76;
  }
  iVar24 = 0;
  if (param_1 != (UMeshComponent *)0x0) {
    plVar32 = &param_1[1]._padding_;
    iVar4 = (int)param_1[1]._padding_;
    local_4b8 = &param_1[1]._padding_;
    uVar22 = 1;
    iVar23 = 0;
    local_4a8 = iVar24;
    if (iVar4 != 0) {
      plVar37 = (longlong *)param_1[1]._padding_;
      if ((longlong *)param_1[1]._padding_ == (longlong *)0x0) {
        plVar37 = local_4b8;
      }
      uVar40 = (uint)*plVar37;
      while (uVar40 == 0) {
        iVar24 = iVar24 + 1;
        local_4a8 = local_4a8 + 0x20;
        iVar23 = iVar4;
        if ((int)((iVar4 + -1 >> 0x1f & 0x1fU) + iVar4 + -1) >> 5 < iVar24) goto LAB_14e267c02;
        uVar40 = *(uint *)((longlong)plVar37 + (longlong)iVar24 * 4);
      }
      uVar22 = ~(uVar40 - 1) & uVar40;
      uVar39 = (ulonglong)uVar22 * 2 + 1;
      lVar42 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar42 == 0; lVar42 = lVar42 + -1) {
        }
      }
      local_46c = (int)lVar42;
      iVar23 = local_46c + -1 + local_4a8;
      if (iVar4 < iVar23) {
        iVar23 = iVar4;
      }
    }
LAB_14e267c02:
    uVar40 = (uint)param_1[1]._padding_;
    uStack_4a4 = local_3f4;
    uVar43 = uVar40 & 0xffffffe0;
    iStack_4a0 = (int)param_1[1]._padding_ - *(int *)((longlong)&param_1[1]._padding_ + 4);
    uStack_4c0 = (double)CONCAT44(uVar22,iVar24);
    uStack_4b0 = (double)CONCAT44(iVar23,0xffffffff);
    auStack_448._0_8_ = uStack_4c0;
    iVar24 = (int)uVar40 >> 5;
    local_430._4_4_ = local_3f4;
    local_430._0_4_ = local_4a8;
    uStack_428 = CONCAT44(uStack_49c,iStack_4a0);
    stack0xfffffffffffffbc8 = uStack_4b0;
    local_4c8 = plVar32;
    local_450 = plVar32;
    auStack_448._8_8_ = local_4b8;
    if ((((int)uVar40 < 0) || ((int)param_1[1]._padding_ < (int)uVar40)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
      return pFVar26;
    }
    uVar22 = (uint)param_1[1]._padding_;
    if (uVar40 != uVar22) {
      plVar37 = &param_1[1]._padding_;
      if ((longlong *)param_1[1]._padding_ != (longlong *)0x0) {
        plVar37 = (longlong *)param_1[1]._padding_;
      }
      uVar40 = -1 << ((byte)uVar40 & 0x1f) & *(uint *)((longlong)plVar37 + (longlong)iVar24 * 4);
      while (uVar40 == 0) {
        iVar24 = iVar24 + 1;
        uVar43 = uVar43 + 0x20;
        uVar40 = uVar22;
        if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 < iVar24)
        goto LAB_14e267d10;
        uVar40 = *(uint *)((longlong)plVar37 + (longlong)iVar24 * 4);
      }
      uVar39 = (ulonglong)(~(uVar40 - 1) & uVar40) * 2 + 1;
      lVar42 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar42 == 0; lVar42 = lVar42 + -1) {
        }
      }
      local_470 = (int)lVar42;
      uVar40 = local_470 + -1 + uVar43;
      if ((int)uVar22 < (int)uVar40) {
        uVar40 = uVar22;
      }
    }
LAB_14e267d10:
    while( true ) {
      plVar37 = local_450;
      if ((int)local_450[1] - *(int *)((longlong)local_450 + 0x34) != (int)uStack_428) {
        local_584 = 0;
        `TSparseArray<TSparseSetElement<TObjectPtr<UGroomComponent>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_584);
      }
      if (((uStack_434 == uVar40) && ((longlong *)auStack_448._8_8_ == &param_1[1]._padding_)) &&
         (pTVar41 = local_4d0, this = local_520, pTVar46 = local_4e0, pTVar38 = local_4e8,
         plVar37 == plVar32)) break;
      local_528 = *(undefined8 *)(*plVar37 + (longlong)(int)uStack_434 * 0x10);
      if (((local_580.Data <= (FScriptContainerElement *)&local_528) &&
          ((FScriptContainerElement *)&local_528 < local_580.Data + (longlong)(int)uStack_574 * 8))
         && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar21)) {
        pcVar7 = (code *)swi(3);
        pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
        return pFVar26;
      }
      if (local_578 == uStack_574) {
        local_578 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_580,(int *)&uStack_574);
      }
      lVar42 = (longlong)(int)local_578;
      local_578 = local_578 + 1;
      *(undefined8 *)(local_580.Data + lVar42 * 8) = local_528;
      stack0xfffffffffffffbc8 = (double)CONCAT44(uStack_434,auStack_448._16_4_ & ~auStack_448._4_4_)
      ;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_448);
    }
  }
LAB_14e267e3c:
  (this->SkeletalMeshObjects).ArrayNum = 0;
  if ((this->SkeletalMeshObjects).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SkeletalMeshObjects).AllocatorInstance,0,
               &(this->SkeletalMeshObjects).ArrayMax);
  }
  pTVar38->ArrayNum = 0;
  if (pTVar38->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,0,&pTVar38->AllocatorInstance,0,&pTVar38->ArrayMax);
  }
  pTVar38 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
            (pTVar46->AllocatorInstance).Data;
  if (pTVar46->ArrayMax < 0) {
    DestructItems<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,int>
              (pTVar38,pTVar46->ArrayNum);
    pTVar46->ArrayNum = 0;
    if (pTVar46->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar46->AllocatorInstance,0,&pTVar46->ArrayMax);
    }
  }
  else {
    DestructItems<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,int>
              (pTVar38,pTVar46->ArrayNum);
    pTVar46->ArrayNum = 0;
  }
  pTVar38 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
            (this->BindTransforms).AllocatorInstance.Data;
  iVar24 = (this->BindTransforms).ArrayNum;
  if ((this->BindTransforms).ArrayMax < 0) {
    DestructItems<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,int>(pTVar38,iVar24);
    (this->BindTransforms).ArrayNum = 0;
    if ((this->BindTransforms).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->BindTransforms).AllocatorInstance,0,
                 &(this->BindTransforms).ArrayMax);
    }
  }
  else {
    DestructItems<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>,int>(pTVar38,iVar24);
    (this->BindTransforms).ArrayNum = 0;
  }
  pFVar36 = (pTVar41->AllocatorInstance).Data;
  if (pTVar41->ArrayMax < 0) {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar36,pTVar41->ArrayNum);
    pTVar41->ArrayNum = 0;
    if (pTVar41->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&pTVar41->AllocatorInstance,0,&pTVar41->ArrayMax);
    }
  }
  else {
    DestructItems<TRefCountPtr<FHairGroupInstance_const_>,int>
              ((TRefCountPtr<FHairGroupInstance_const_> *)pFVar36,pTVar41->ArrayNum);
    pTVar41->ArrayNum = 0;
  }
  uVar39 = (ulonglong)(int)local_578;
  local_510.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_560.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_540.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar36 = local_580.Data + uVar39 * 8;
  local_510.ArrayNum = 0;
  local_510.ArrayMax = 0;
  local_560.ArrayNum = 0;
  local_560.ArrayMax = 0;
  local_540.ArrayNum = 0;
  local_540.ArrayMax = 0;
  local_518 = local_578;
  local_4f8 = local_580.Data;
  local_4d8 = pFVar36;
  do {
    if (local_578 != (uint)uVar39) {
      local_583 = 0;
      `TCheckedPointerIterator<UGroomComponent_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_583);
    }
    if (local_4f8 == pFVar36) {
      if (local_540.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_540.AllocatorInstance.Data);
      }
      if (local_560.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_560.AllocatorInstance.Data);
      }
      if (local_510.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_510.AllocatorInstance.Data);
      }
      if (local_580.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_580.Data);
      }
      return local_520;
    }
    this_03 = *(UGroomComponent **)local_4f8;
    local_490 = this_03;
    if (this_03 != (UGroomComponent *)0x0) {
      local_500 = (this_03->HairGroupInstances).ArrayNum;
      local_550 = 0;
      pFVar36 = local_4d8;
      if (local_500 != 0) {
LAB_14e268000:
        uVar22 = local_550;
        pUVar25 = (UClass *)0x0;
        bVar21 = UGroomComponent::IsDeformationEnable(this_03,local_550);
        if (bVar21) {
          if (((int)uVar22 < 0) || ((this_03->HairGroupInstances).ArrayNum <= (int)uVar22)) {
            bVar19 = true;
            local_478 = (undefined8 *)0x0;
            pUVar27 = pUVar25;
          }
          else {
            bVar20 = true;
            if (((this_03->HairGroupInstances).ArrayNum <= (int)uVar22) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar21)) {
              pcVar7 = (code *)swi(3);
              pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
              return pFVar26;
            }
            local_488 = *(UClass **)
                         ((this_03->HairGroupInstances).AllocatorInstance.Data +
                         (longlong)(int)uVar22 * 8);
            pUVar27 = local_488;
            if (local_488 != (UClass *)0x0) {
              LOCK();
              *(int *)&local_488->_padding_ = (int)local_488->_padding_ + 1;
              UNLOCK();
            }
          }
          if ((bVar19) && (bVar19 = false, local_478 != (undefined8 *)0x0)) {
            piVar1 = (int *)(local_478 + 1);
            LOCK();
            iVar24 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar24 == 1) && ((piVar1 != (int *)0x0 && (local_478 != (undefined8 *)0x0)))) {
              (**(code **)*local_478)(local_478,1);
            }
          }
          if ((bVar20) && (bVar20 = false, local_488 != (UClass *)0x0)) {
            plVar32 = &local_488->_padding_;
            LOCK();
            lVar42 = *plVar32;
            *(int *)plVar32 = (int)*plVar32 + -1;
            UNLOCK();
            if (((int)lVar42 == 1) && ((plVar32 != (longlong *)0x0 && (local_488 != (UClass *)0x0)))
               ) {
              (**(code **)local_488->_padding_)(local_488,1);
            }
          }
          if (pUVar27 != (UClass *)0x0) {
            local_570.Data = (FScriptContainerElement *)0x0;
            local_568 = 0;
            this_00 = USceneComponent::GetAttachmentRootActor((USceneComponent *)this_03);
            if (this_00 == (AActor *)0x0) goto LAB_14e26823b;
            pUVar27 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar27 != (UClass *)0x0))
            {
              UE::GC::MarkAsReachable((UObject *)pUVar27);
            }
            lVar42 = local_568;
            uVar40 = local_568._4_4_;
            local_568 = (ulonglong)local_568._4_4_ << 0x20;
            if ((lVar42 < 0) && (uVar40 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&local_570,0,(int *)((longlong)&local_568 + 4));
            }
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (pUVar27 != (UClass *)0x0) goto LAB_14e2681a2;
            }
            else if (pUVar27 != (UClass *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar27);
LAB_14e2681a2:
              pUVar28 = Z_Construct_UClass_UActorComponent_NoRegister();
              if (pUVar28 != (UClass *)0x0) {
                iVar24 = (int)pUVar28->_padding_;
                if (((int)pUVar27->_padding_ < iVar24) ||
                   ((longlong *)*(undefined1 **)(pUVar27->_padding_ + (longlong)iVar24 * 8) !=
                    &pUVar28->_padding_)) {
                  bVar21 = false;
                }
                else {
                  bVar21 = true;
                }
                if (bVar21) {
                  pUVar25 = pUVar27;
                }
              }
            }
            pUVar28 = Z_Construct_UClass_UActorComponent_NoRegister();
            if (pUVar25 == pUVar28) {
              local_458 = pUVar27;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar27 != (UClass *)0x0)
                 ) {
                UE::GC::MarkAsReachable((UObject *)pUVar27);
              }
              AActor::
              ForEachComponent_Internal<UActorComponent,1,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                        (this_00,(TSubclassOf<UActorComponent>)&local_458,
                         (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_570);
            }
            else {
              local_480 = pUVar27;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar27 != (UClass *)0x0)
                 ) {
                UE::GC::MarkAsReachable((UObject *)pUVar27);
              }
              AActor::
              ForEachComponent_Internal<UActorComponent,0,0,_AActor::GetComponents<TSizedDefaultAllocator<32>,UActorComponent>_::__l2::<lambda_1>_>
                        (this_00,(TSubclassOf<UActorComponent>)&local_480,
                         (TArray<UActorComponent_*,TSizedDefaultAllocator<32>_> *)&local_570);
            }
LAB_14e26823b:
            iVar24 = (int)local_568;
            pFVar36 = local_570.Data + (longlong)(int)local_568 * 8;
            FVar44.Data = local_570.Data;
            local_4f0 = pFVar36;
            do {
              if ((int)local_568 != iVar24) {
                local_582[0] = 0;
                `TCheckedPointerIterator<UActorComponent_*,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_582);
              }
              if (FVar44.Data == pFVar36) {
                if (local_570.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_570.Data);
                }
                break;
              }
              this_02 = *(USkeletalMeshComponent **)FVar44.Data;
              if (this_02 != (USkeletalMeshComponent *)0x0) {
                pUVar25 = Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
                iVar4 = (int)pUVar25->_padding_;
                if (((iVar4 <= *(int *)(this_02->_padding_ + 0x38)) &&
                    ((longlong *)
                     *(undefined1 **)
                      (*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
                     &pUVar25->_padding_)) &&
                   (pUVar5 = (this_03->GroomAsset).field0_0x0.DebugPtr, pUVar5 != (UGroomAsset *)0x0
                   )) {
                  pUVar29 = USkeletalMeshComponent::GetSkeletalMeshAsset(this_02);
                  pUVar30 = FGroomDataflowSettings::GetSkeletalMesh
                                      (&pUVar5->DataflowSettings,uVar22);
                  pFVar36 = local_4f0;
                  if (pUVar29 == pUVar30) goto LAB_14e2682cc;
                }
              }
              FVar44.Data = FVar44.Data + 8;
            } while( true );
          }
        }
        goto LAB_14e268e43;
      }
    }
LAB_14e268e5c:
    uVar39 = (ulonglong)local_518;
    local_4f8 = local_4f8 + 8;
  } while( true );
LAB_14e2682cc:
  iVar24 = FGroomDataflowSettings::GetMeshLOD
                     (&((this_03->GroomAsset).field0_0x0.DebugPtr)->DataflowSettings,uVar22);
  if (local_570.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_570.Data);
  }
  pUVar31 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this_02);
  if (((pUVar31 != (USkinnedAsset *)0x0) &&
      (plVar32 = (longlong *)(**(code **)(*(longlong *)pUVar31 + 0x398))(pUVar31),
      plVar32 != (longlong *)0x0)) && ((-1 < iVar24 && (iVar24 < (int)plVar32[1])))) {
    lVar42 = *(longlong *)(*plVar32 + (longlong)iVar24 * 8);
    local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TArray<unsigned_short,TSizedDefaultAllocator<32>_>::CopyToEmpty<unsigned_short,int>
              (&local_468,*(ushort **)(lVar42 + 0x508),*(int *)(lVar42 + 0x510),0);
    pUVar31 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this_02);
    plVar32 = (longlong *)(**(code **)(*(longlong *)pUVar31 + 0x380))(pUVar31);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::Init
              (&local_510,&UE::Math::TTransform<double>::Identity,(int)plVar32[1]);
    pUVar31 = USkinnedMeshComponent::GetSkinnedAsset((USkinnedMeshComponent *)this_02);
    pTVar33 = USkeletalMeshComponent::GetBoneSpaceTransforms(this_02,local_420);
    USkinnedAsset::FillComponentSpaceTransforms(pUVar31,pTVar33,&local_468,&local_510);
    if (local_420[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420[0].AllocatorInstance.Data);
    }
    TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::Init
              (&local_560,&UE::Math::TMatrix<float>::Identity,(int)plVar32[1]);
    TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::Init
              (&local_540,&UE::Math::TMatrix<float>::Identity,(int)plVar32[1]);
    uVar40 = 0;
    if (0 < local_560.ArrayNum) {
      lVar42 = 0;
      lVar45 = 0;
      local_498 = this_02;
      do {
        uVar43 = ~uVar40 >> 0x1f;
        uVar22 = 0;
        if ((int)uVar40 < (int)plVar32[1]) {
          uVar22 = uVar43;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
          return pFVar26;
        }
        lVar6 = *plVar32;
        uVar22 = 0;
        if ((int)uVar40 < local_510.ArrayNum) {
          uVar22 = uVar43;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
          return pFVar26;
        }
        local_4b8 = *(longlong **)(local_510.AllocatorInstance.Data + lVar42 + 0x10);
        uStack_4b0 = *(double *)(local_510.AllocatorInstance.Data + lVar42 + 0x10 + 8);
        dVar8 = *(double *)(local_510.AllocatorInstance.Data + lVar42);
        dVar51 = *(double *)(local_510.AllocatorInstance.Data + lVar42 + 8);
        local_4c8 = *(longlong **)(local_510.AllocatorInstance.Data + lVar42);
        uStack_4c0 = *(double *)(local_510.AllocatorInstance.Data + lVar42 + 8);
        dVar9 = dVar8 + dVar8;
        dVar10 = dVar51 + dVar51;
        dVar47 = (double)local_4b8 + (double)local_4b8;
        auVar49._8_4_ = SUB84(dVar10,0);
        auVar49._0_8_ = dVar9;
        auVar49._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        dVar51 = auVar49._8_8_ * dVar51;
        dVar50 = SUB168(*(undefined1 (*) [16])(local_510.AllocatorInstance.Data + lVar42 + 0x50),0);
        auVar49 = blendpd(*(undefined1 (*) [16])(local_510.AllocatorInstance.Data + lVar42 + 0x40),
                          *(undefined1 (*) [16])(local_510.AllocatorInstance.Data + lVar42 + 0x50),2
                         );
        local_368.M[0][1] =
             (float)((uStack_4b0 * dVar47 + dVar10 * (double)local_4c8) *
                    *(double *)(local_510.AllocatorInstance.Data + lVar42 + 0x40));
        local_368.M[0][0] =
             (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
                     (dVar47 * (double)local_4b8 + dVar51)) *
                    *(double *)(local_510.AllocatorInstance.Data + lVar42 + 0x40));
        local_368.M[0][2] =
             (float)(auVar49._0_8_ * ((double)local_4c8 * dVar47 - dVar10 * uStack_4b0));
        local_368.M[0][3] = 0.0;
        local_368.M[1][1] =
             (float)((GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
                     (dVar47 * (double)local_4b8 + dVar9 * dVar8)) *
                    *(double *)(local_510.AllocatorInstance.Data + lVar42 + 0x40 + 8));
        local_368.M[1][0] =
             (float)(SUB168(*(undefined1 (*) [16])(local_510.AllocatorInstance.Data + lVar42 + 0x40)
                            ,8) * (dVar10 * (double)local_4c8 - uStack_4b0 * dVar47));
        local_368.M[1][2] =
             (float)((uStack_4b0 * dVar9 + dVar47 * uStack_4c0) *
                    *(double *)(local_510.AllocatorInstance.Data + lVar42 + 0x40 + 8));
        local_368.M[1][3] = 0.0;
        local_368.M[3][0] = (float)*(double *)(local_510.AllocatorInstance.Data + lVar42 + 0x20);
        local_368.M[3][1] = (float)*(double *)(local_510.AllocatorInstance.Data + lVar42 + 0x20 + 8)
        ;
        local_368.M[2][1] = (float)(dVar50 * (dVar47 * uStack_4c0 - uStack_4b0 * dVar9));
        local_368.M[2][0] = (float)((dVar10 * uStack_4b0 + (double)local_4c8 * dVar47) * dVar50);
        local_368.M[2][2] =
             (float)((GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar9 * dVar8 + dVar51)) *
                    dVar50);
        local_368.M[2][3] = 0.0;
        local_368.M[3][2] = (float)*(double *)(local_510.AllocatorInstance.Data + lVar42 + 0x30);
        local_368.M[3][3] = (float)GlobalVectorConstants::DoubleOne2d.m128d_f64[1];
        VectorMatrixMultiply
                  (&local_328,(TMatrix<float> *)((longlong)(int)uVar40 * 0x40 + lVar6),&local_368);
        uVar18 = local_328.M[3]._8_8_;
        uVar17 = local_328.M[3]._0_8_;
        uVar16 = local_328.M[2]._8_8_;
        uVar15 = local_328.M[2]._0_8_;
        uVar14 = local_328.M[1]._8_8_;
        uVar13 = local_328.M[1]._0_8_;
        uVar12 = local_328.M[0]._8_8_;
        uVar11 = local_328.M[0]._0_8_;
        uVar22 = 0;
        if ((int)uVar40 < local_560.ArrayNum) {
          uVar22 = uVar43;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
          return pFVar26;
        }
        *(undefined8 *)(local_560.AllocatorInstance.Data + lVar45) = uVar11;
        *(undefined8 *)(local_560.AllocatorInstance.Data + lVar45 + 8) = uVar12;
        *(undefined8 *)(local_560.AllocatorInstance.Data + lVar45 + 0x10) = uVar13;
        *(undefined8 *)(local_560.AllocatorInstance.Data + lVar45 + 0x10 + 8) = uVar14;
        *(undefined8 *)(local_560.AllocatorInstance.Data + lVar45 + 0x20) = uVar15;
        *(undefined8 *)(local_560.AllocatorInstance.Data + lVar45 + 0x20 + 8) = uVar16;
        *(undefined8 *)(local_560.AllocatorInstance.Data + lVar45 + 0x30) = uVar17;
        *(undefined8 *)(local_560.AllocatorInstance.Data + lVar45 + 0x30 + 8) = uVar18;
        uVar22 = 0;
        if ((int)uVar40 < (int)plVar32[1]) {
          uVar22 = ~uVar40 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
          return pFVar26;
        }
        pTVar34 = UE::Math::TMatrix<float>::Inverse
                            ((TMatrix<float> *)((longlong)(int)uVar40 * 0x40 + *plVar32),&local_3e8)
        ;
        uVar11 = *(undefined8 *)pTVar34->M[0];
        uVar12 = *(undefined8 *)(pTVar34->M[0] + 2);
        uVar13 = *(undefined8 *)pTVar34->M[1];
        uVar14 = *(undefined8 *)(pTVar34->M[1] + 2);
        uVar15 = *(undefined8 *)pTVar34->M[2];
        uVar16 = *(undefined8 *)(pTVar34->M[2] + 2);
        uVar17 = *(undefined8 *)pTVar34->M[3];
        uVar18 = *(undefined8 *)(pTVar34->M[3] + 2);
        uVar22 = 0;
        if ((int)uVar40 < local_540.ArrayNum) {
          uVar22 = ~uVar40 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar7 = (code *)swi(3);
          pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
          return pFVar26;
        }
        uVar40 = uVar40 + 1;
        lVar42 = lVar42 + 0x60;
        *(undefined8 *)(local_540.AllocatorInstance.Data + lVar45) = uVar11;
        *(undefined8 *)(local_540.AllocatorInstance.Data + lVar45 + 8) = uVar12;
        *(undefined8 *)(local_540.AllocatorInstance.Data + lVar45 + 0x10) = uVar13;
        *(undefined8 *)(local_540.AllocatorInstance.Data + lVar45 + 0x10 + 8) = uVar14;
        *(undefined8 *)(local_540.AllocatorInstance.Data + lVar45 + 0x20) = uVar15;
        *(undefined8 *)(local_540.AllocatorInstance.Data + lVar45 + 0x20 + 8) = uVar16;
        *(undefined8 *)(local_540.AllocatorInstance.Data + lVar45 + 0x30) = uVar17;
        *(undefined8 *)(local_540.AllocatorInstance.Data + lVar45 + 0x30 + 8) = uVar18;
        lVar45 = lVar45 + 0x40;
        this_02 = local_498;
        uVar22 = local_550;
      } while ((int)uVar40 < local_560.ArrayNum);
    }
    this_03 = local_490;
    pFVar35 = UGroomComponent::GetGroupInstance(local_490,uVar22);
    dVar50 = (double)this_02->_padding_;
    dVar47 = (double)this_02->_padding_;
    local_4b8 = (longlong *)this_02->_padding_;
    uStack_4b0 = (double)this_02->_padding_;
    local_4c8 = (longlong *)this_02->_padding_;
    uStack_4c0 = (double)this_02->_padding_;
    auVar2._0_8_ = this_02->_padding_;
    auVar2._8_8_ = this_02->_padding_;
    dVar48 = (double)local_4b8 + (double)local_4b8;
    dVar51 = dVar47 + dVar47;
    auVar3._0_8_ = this_02->_padding_;
    auVar3._8_8_ = this_02->_padding_;
    auVar49 = blendpd(auVar2,auVar3,2);
    dVar10 = dVar50 * (dVar50 + dVar50);
    dVar8 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] -
            (dVar48 * (double)local_4b8 + dVar10)) * (double)this_02->_padding_;
    dVar50 = uStack_4b0 * (dVar50 + dVar50);
    dVar9 = (uStack_4b0 * dVar48 + dVar51 * (double)local_4c8) * (double)this_02->_padding_;
    local_2b8 = (dVar50 + dVar48 * uStack_4c0) * (double)this_02->_padding_;
    dVar50 = (double)this_02->_padding_ * (dVar48 * uStack_4c0 - dVar50);
    local_2d8 = auVar49._0_8_ * ((double)local_4c8 * dVar48 - dVar51 * uStack_4b0);
    local_298 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - (dVar10 + dVar47 * dVar51)) *
                (double)this_02->_padding_;
    local_2e8._8_4_ = SUB84(dVar9,0);
    local_2e8._0_8_ =
         (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] -
         (dVar48 * (double)local_4b8 + dVar47 * dVar51)) * (double)this_02->_padding_;
    local_2e8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    dStack_2d0 = 0.0;
    local_2c8._8_4_ = SUB84(dVar8,0);
    local_2c8._0_8_ = (double)auVar2._8_8_ * (dVar51 * (double)local_4c8 - uStack_4b0 * dVar48);
    local_2c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    local_278 = (undefined4)this_02->_padding_;
    uStack_274 = *(undefined4 *)((longlong)&this_02->_padding_ + 4);
    local_288 = (double)this_02->_padding_;
    dStack_280 = (double)this_02->_padding_;
    lVar42 = 0x2c0;
    if (pFVar35->BindingType != Skinning) {
      lVar42 = 0x200;
    }
    local_2a8._8_4_ = SUB84(dVar50,0);
    local_2a8._0_8_ =
         (dVar51 * uStack_4b0 + (double)local_4c8 * dVar48) * (double)this_02->_padding_;
    local_2a8._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    uStack_270 = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    uStack_26c = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    dStack_2b0 = 0.0;
    dStack_290 = 0.0;
    this_01 = UE::Math::TTransform<double>::ToMatrixWithScale
                        ((TTransform<double> *)(&pFVar35->field_0x0 + lVar42),&local_168);
    UE::Math::TMatrix<double>::Inverse(this_01,&local_1e8);
    VectorMatrixMultiply(&local_268,(TMatrix<double> *)local_2e8,&local_1e8);
    pTVar38 = local_4e8;
    local_3a8 = (float)local_268.M[0][0];
    fStack_3a4 = (float)local_268.M[0][1];
    pFVar36 = (local_4e8->AllocatorInstance).Data;
    local_398 = (float)local_268.M[1][0];
    fStack_394 = (float)local_268.M[1][1];
    fStack_3a0 = (float)local_268.M[0][2];
    fStack_39c = (float)local_268.M[0][3];
    fStack_390 = (float)local_268.M[1][2];
    fStack_38c = (float)local_268.M[1][3];
    local_388 = (float)local_268.M[2][0];
    fStack_384 = (float)local_268.M[2][1];
    fStack_380 = (float)local_268.M[2][2];
    fStack_37c = (float)local_268.M[2][3];
    local_378 = (float)local_268.M[3][0];
    fStack_374 = (float)local_268.M[3][1];
    fStack_370 = (float)local_268.M[3][2];
    fStack_36c = (float)local_268.M[3][3];
    if (((pFVar36 <= (FScriptContainerElement *)&local_3a8) &&
        ((FScriptContainerElement *)&local_3a8 < pFVar36 + (longlong)local_4e8->ArrayMax * 0x40)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
      return pFVar26;
    }
    iVar24 = pTVar38->ArrayNum;
    if (iVar24 == pTVar38->ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x1040,&pTVar38->AllocatorInstance,&pTVar38->ArrayMax);
    }
    pTVar46 = local_4e0;
    pTVar38->ArrayNum = iVar24 + 1;
    pFVar36 = (pTVar38->AllocatorInstance).Data + (longlong)iVar24 * 0x40;
    *(ulonglong *)pFVar36 = CONCAT44(fStack_3a4,local_3a8);
    *(ulonglong *)(pFVar36 + 8) = CONCAT44(fStack_39c,fStack_3a0);
    *(ulonglong *)(pFVar36 + 0x10) = CONCAT44(fStack_394,local_398);
    *(ulonglong *)(pFVar36 + 0x18) = CONCAT44(fStack_38c,fStack_390);
    *(ulonglong *)(pFVar36 + 0x20) = CONCAT44(fStack_384,local_388);
    *(ulonglong *)(pFVar36 + 0x28) = CONCAT44(fStack_37c,fStack_380);
    *(ulonglong *)(pFVar36 + 0x30) = CONCAT44(fStack_374,local_378);
    *(ulonglong *)(pFVar36 + 0x38) = CONCAT44(fStack_36c,fStack_370);
    pTVar38 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
              (local_4e0->AllocatorInstance).Data;
    if (((pTVar38 <= &local_560) && (&local_560 < pTVar38 + local_4e0->ArrayMax)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
      return pFVar26;
    }
    iVar24 = pTVar46->ArrayNum;
    if (iVar24 == pTVar46->ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar46->AllocatorInstance,&pTVar46->ArrayMax);
    }
    pTVar46->ArrayNum = iVar24 + 1;
    pTVar38 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
              ((pTVar46->AllocatorInstance).Data + (longlong)iVar24 * 0x10);
    (pTVar38->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<UE::Math::TMatrix<float>,int>
              (pTVar38,(TMatrix<float> *)local_560.AllocatorInstance.Data,local_560.ArrayNum,0);
    pFVar26 = local_520;
    pTVar38 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
              (local_520->BindTransforms).AllocatorInstance.Data;
    if (((pTVar38 <= &local_540) && (&local_540 < pTVar38 + (local_520->BindTransforms).ArrayMax))
       && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
      return pFVar26;
    }
    iVar24 = (pFVar26->BindTransforms).ArrayNum;
    if (iVar24 == (pFVar26->BindTransforms).ArrayMax) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(pFVar26->BindTransforms).AllocatorInstance,
                          &(pFVar26->BindTransforms).ArrayMax);
    }
    pTVar38 = (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)
              ((pFVar26->BindTransforms).AllocatorInstance.Data + (longlong)iVar24 * 0x10);
    (pFVar26->BindTransforms).ArrayNum = iVar24 + 1;
    (pTVar38->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<UE::Math::TMatrix<float>,int>
              (pTVar38,(TMatrix<float> *)local_540.AllocatorInstance.Data,local_540.ArrayNum,0);
    pFVar36 = (pFVar26->SkeletalMeshObjects).AllocatorInstance.Data;
    piVar1 = &(pFVar26->SkeletalMeshObjects).ArrayMax;
    plVar32 = &this_02->_padding_;
    if (((pFVar36 <= plVar32) && (plVar32 < pFVar36 + (longlong)*piVar1 * 8)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
      return pFVar26;
    }
    iVar24 = (pFVar26->SkeletalMeshObjects).ArrayNum;
    if (iVar24 == *piVar1) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(pFVar26->SkeletalMeshObjects).AllocatorInstance,piVar1);
    }
    pFVar36 = (pFVar26->SkeletalMeshObjects).AllocatorInstance.Data;
    (pFVar26->SkeletalMeshObjects).ArrayNum = iVar24 + 1;
    *(longlong *)(pFVar36 + (longlong)iVar24 * 8) = *plVar32;
    local_548 = UGroomComponent::GetGroupInstance(this_03,uVar22);
    pTVar41 = local_4d0;
    if (local_548 != (FHairGroupInstance *)0x0) {
      LOCK();
      *(int *)&local_548->field_0x8 = *(int *)&local_548->field_0x8 + 1;
      UNLOCK();
    }
    pFVar36 = (local_4d0->AllocatorInstance).Data;
    piVar1 = &local_4d0->ArrayMax;
    if (((pFVar36 <= (FScriptContainerElement *)&local_548) &&
        ((FScriptContainerElement *)&local_548 < pFVar36 + (longlong)*piVar1 * 8)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar7 = (code *)swi(3);
      pFVar26 = (FOptimusGroomMeshesReadDataProviderProxy *)(*pcVar7)();
      return pFVar26;
    }
    iVar24 = pTVar41->ArrayNum;
    if (iVar24 == *piVar1) {
      iVar24 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar41->AllocatorInstance,piVar1);
    }
    pTVar41->ArrayNum = iVar24 + 1;
    pFVar36 = (pTVar41->AllocatorInstance).Data;
    *(undefined8 *)(pFVar36 + (longlong)iVar24 * 8) = 0;
    *(FHairGroupInstance **)(pFVar36 + (longlong)iVar24 * 8) = local_548;
    local_548 = (FHairGroupInstance *)0x0;
    if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_468.AllocatorInstance.Data);
    }
  }
LAB_14e268e43:
  local_550 = uVar22 + 1;
  pFVar36 = local_4d8;
  if (local_500 <= local_550) goto LAB_14e268e5c;
  goto LAB_14e268000;
}

// AllocateResources @ 14e26ded0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FOptimusGroomMeshesReadDataProviderProxy::AllocateResources
          (FOptimusGroomMeshesReadDataProviderProxy *this,FRDGBuilder *param_1,
          FAllocationData *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FSkeletalMeshObject *pFVar3;
  FHairGroupInstance *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FRDGBufferSRV *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  FRDGBufferSRVDesc local_58;
  
  local_res10 = param_1;
  if (this->FallbackStructuredSRV == (FRDGBufferSRV *)0x0) {
    local_58.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_58._padding_._4_4_ = 0;
    local_58._padding_._0_4_ = 0xffffffff;
    local_58._padding_ = 0;
    local_58._padding_._0_1_ = 0;
    if ((((local_58.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_58._padding_._0_1_ = 0x1c;
    }
    pFVar10 = FRDGBuilder::CreateSRV(param_1,&local_58);
    this->FallbackStructuredSRV = pFVar10;
  }
  (this->BoneMatricesResources).ArrayNum = 0;
  if ((this->BoneMatricesResources).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->BoneMatricesResources).AllocatorInstance,0,
               &(this->BoneMatricesResources).ArrayMax);
  }
  uVar2 = (this->SkeletalMeshObjects).ArrayNum;
  uVar11 = (ulonglong)(int)uVar2;
  uVar12 = 0;
  pFVar16 = (this->SkeletalMeshObjects).AllocatorInstance.Data;
  lVar15 = 0;
  pFVar1 = pFVar16 + uVar11 * 8;
  while( true ) {
    if ((this->SkeletalMeshObjects).ArrayNum != (int)uVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSkeletalMeshObject_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar16 == pFVar1) break;
    pFVar3 = *(FSkeletalMeshObject **)pFVar16;
    uVar13 = ~uVar12 >> 0x1f;
    uVar9 = 0;
    if ((int)uVar12 < (this->GroupInstances).ArrayNum) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar4 = *(FHairGroupInstance **)((this->GroupInstances).AllocatorInstance.Data + lVar15);
    uVar9 = 0;
    if ((int)uVar12 < (this->BindTransforms).ArrayNum) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar5 = (this->BindTransforms).AllocatorInstance.Data;
    lVar14 = (longlong)(int)uVar12 * 0x10;
    uVar9 = 0;
    if ((int)uVar12 < (this->BonesRefToLocals).ArrayNum) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pFVar6 = (this->BonesRefToLocals).AllocatorInstance.Data;
    uVar9 = 0;
    if ((int)uVar12 < (this->SkeletalMeshTransforms).ArrayNum) {
      uVar9 = uVar13;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    CreateInternalBuffers
              (pFVar3,(TMatrix<float> *)
                      ((this->SkeletalMeshTransforms).AllocatorInstance.Data +
                      (longlong)(int)uVar12 * 0x40),
               (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)(pFVar6 + lVar14),
               (TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> *)(pFVar5 + lVar14),
               pFVar4,local_res10,&this->BoneMatricesResources);
    uVar12 = uVar12 + 1;
    uVar11 = (ulonglong)uVar2;
    lVar15 = lVar15 + 8;
    pFVar16 = pFVar16 + 8;
  }
  return;
}

// GatherDispatchData @ 14e272a20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FOptimusGroomMeshesReadDataProviderProxy::GatherDispatchData
          (FOptimusGroomMeshesReadDataProviderProxy *this,FDispatchData *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FRDGBufferSRV *pFVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uchar *puVar11;
  
  if ((param_1->NumInvocations != (this->SkeletalMeshObjects).ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InDispatchData.NumInvocations == SkeletalMeshObjects.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsDeformer\\Private\\DeformerGroomMeshesRead.cpp"
                         ,0xca,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar11 = param_1->ParameterBuffer + param_1->ParameterBufferOffset;
  iVar1 = param_1->NumInvocations;
  iVar2 = param_1->ParameterBufferStride;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x3f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((iVar2 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x40,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((((longlong)iVar2 & 0xfU) != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesBetweenElements % alignof(ElementType) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                         ,0x41,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = 0;
  if (0 < iVar1) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      uVar7 = ~uVar9 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar9 < iVar1) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < NumElements)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                             ,0x96,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = 0;
      if ((int)uVar9 < (this->SkeletalMeshObjects).ArrayNum) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(longlong *)((this->SkeletalMeshObjects).AllocatorInstance.Data + lVar8 * 8) == 0) {
        puVar11[0] = '\0';
        puVar11[1] = '\0';
        puVar11[2] = '\0';
        puVar11[3] = '\0';
        pFVar6 = this->FallbackStructuredSRV;
      }
      else {
        uVar5 = 0;
        if ((int)uVar9 < (this->BonesRefToLocals).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)puVar11 =
             *(undefined4 *)((this->BonesRefToLocals).AllocatorInstance.Data + lVar10 + 8);
        uVar5 = 0;
        if ((int)uVar9 < (this->BoneMatricesResources).ArrayNum) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar6 = *(FRDGBufferSRV **)
                  ((this->BoneMatricesResources).AllocatorInstance.Data + lVar8 * 8);
      }
      *(FRDGBufferSRV **)(puVar11 + 8) = pFVar6;
      uVar9 = uVar9 + 1;
      puVar11 = puVar11 + iVar2;
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < iVar1);
  }
  return;
}

// IsValid @ 14e2890f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FOptimusGroomMeshesReadDataProviderProxy::IsValid
          (FOptimusGroomMeshesReadDataProviderProxy *this,FValidationData *param_1)

{
  if (param_1->ParameterStructSize == 0x10) {
    return param_1->NumInvocations == (this->SkeletalMeshObjects).ArrayNum;
  }
  return false;
}

