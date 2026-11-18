// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// operator() @ 14e0403e0

TBitArray<FDefaultBitArrayAllocator> * __thiscall
`FHairGeometryCache::AddDebug'::__l5::<lambda_1>::operator()
          (void *this,TBitArray<FDefaultBitArrayAllocator> *__return_storage_ptr__,
          TArray<FCachedGeometry::Section,TSizedDefaultAllocator<32>_> *param_1)

{
  uint *puVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  ForElementType<unsigned_int> FVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
  __return_storage_ptr__->NumBits = 0;
  __return_storage_ptr__->MaxBits = 0x80;
  iVar7 = *(int *)this;
  __return_storage_ptr__->NumBits = iVar7;
  uVar6 = iVar7 + 0x1f;
  uVar11 = uVar6 >> 5;
  if (uVar6 >> 5 != 0) {
    if (4 < uVar11) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(&__return_storage_ptr__->AllocatorInstance,0,uVar11,4);
      __return_storage_ptr__->MaxBits = uVar11 << 5;
    }
    FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar10 = (ForElementType<unsigned_int>)__return_storage_ptr__;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar3;
    }
    memset((void *)FVar10,0,(ulonglong)uVar11 << 2);
    uVar11 = __return_storage_ptr__->NumBits >> 0x1f & 0x1f;
    uVar6 = __return_storage_ptr__->NumBits + uVar11;
    iVar7 = (uVar6 & 0x1f) - uVar11;
    if (iVar7 != 0) {
      FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<unsigned_int>)__return_storage_ptr__;
      if (FVar3 != (ForElementType<unsigned_int>)0x0) {
        FVar10 = FVar3;
      }
      puVar1 = (uint *)((longlong)FVar10 + (longlong)((int)uVar6 >> 5) * 4);
      *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar7 & 0x1f);
    }
  }
  iVar7 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar12 = pFVar13 + (longlong)iVar7 * 0x70;
  while( true ) {
    if (param_1->ArrayNum != iVar7) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FCachedGeometry::Section_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar13 == pFVar12) {
      return __return_storage_ptr__;
    }
    if ((*(uint *)this <= *(uint *)(pFVar13 + 0x60)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("S.SectionIndex < InTotalSectionCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomManager.cpp"
                           ,0x16e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar4)();
      return pTVar9;
    }
    iVar2 = *(int *)(pFVar13 + 0x60);
    if (((iVar2 < 0) || (__return_storage_ptr__->NumBits <= iVar2)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar5)) break;
    FVar3 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
    FVar10 = (ForElementType<unsigned_int>)__return_storage_ptr__;
    if (FVar3 != (ForElementType<unsigned_int>)0x0) {
      FVar10 = FVar3;
    }
    iVar8 = iVar2;
    if (iVar2 < 0) {
      iVar8 = iVar2 + 0x1f;
    }
    puVar1 = (uint *)((longlong)FVar10 + (longlong)(iVar8 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
    pFVar13 = pFVar13 + 0x70;
  }
  pcVar4 = (code *)swi(3);
  pTVar9 = (TBitArray<FDefaultBitArrayAllocator> *)(*pcVar4)();
  return pTVar9;
}

// AddDebug @ 14e042720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FHairGeometryCache::AddDebug
          (FHairGeometryCache *this,FHairGroupInstance *param_1,FPrimitiveSceneProxy *param_2,
          FCachedGeometry *param_3,EHairPositionUpdateType param_4,ECacheType param_5,uint param_6)

{
  TArray<FHairGeometryCache::FDebugData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8;
  <lambda_1> local_c7 [3];
  uint local_c4;
  FString local_c0;
  FName local_b0;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (this->bDebugEnable != false) {
    if (param_5 != HairCache) {
      param_6 = (param_3->Sections).ArrayNum;
    }
    iVar6 = (this->DebugDatas).ArrayNum;
    pTVar1 = &this->DebugDatas;
    pFVar9 = (pTVar1->AllocatorInstance).Data;
    pFVar3 = pFVar9 + (longlong)iVar6 * 0x48;
    local_c4 = param_6;
    local_b0 = (FName)param_1;
    while( true ) {
      if ((this->DebugDatas).ArrayNum != iVar6) {
        local_c8 = 0;
        `TCheckedPointerIterator<FHairGeometryCache::FDebugData,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_c8);
      }
      if (pFVar9 == pFVar3) {
        iVar6 = (this->DebugDatas).ArrayNum;
        piVar2 = &(this->DebugDatas).ArrayMax;
        if (iVar6 == *piVar2) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x848,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->DebugDatas).ArrayNum = iVar6 + 1;
        pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x48;
        DefaultConstructItems<FHairGeometryCache::FDebugData,int>(pFVar9,1);
        local_b0 = (FName)(*(UMeshComponent **)((longlong)local_b0 + 0x188))->_padding_;
        ::FName::ToString(&local_b0,&local_c0);
        pFVar3 = pFVar9 + 8;
        if (pFVar3 != (FScriptContainerElement *)&local_c0) {
          if (*(void **)pFVar3 != (void *)0x0) {
            FMemory::Free(*(void **)pFVar3);
          }
          *(FScriptContainerElement **)pFVar3 = local_c0.Data.AllocatorInstance.Data;
          *(int *)(pFVar9 + 0x10) = local_c0.Data.ArrayNum;
          *(int *)(pFVar9 + 0x14) = local_c0.Data.ArrayMax;
          local_c0.Data.ArrayNum = 0;
          local_c0.Data.ArrayMax = 0;
          local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        }
        *(FPrimitiveSceneProxy **)pFVar9 = param_2;
        *(int *)(pFVar9 + 0x18) = param_3->LODIndex;
        *(undefined4 *)(pFVar9 + 0x1c) = 1;
        *(uint *)(pFVar9 + 0x20) = *(uint *)(pFVar9 + 0x20) | 1 << (param_5 & 0x1f);
        *(uint *)(pFVar9 + 0x24) = *(uint *)(pFVar9 + 0x24) | 1 << (param_4 & 0x1f);
        pTVar8 = `FHairGeometryCache::AddDebug'::__l5::<lambda_1>::operator()
                           (&local_c4,&local_68,&param_3->Sections);
        if ((TBitArray<FDefaultBitArrayAllocator> *)(pFVar9 + 0x28) != pTVar8) {
          if ((pTVar8->AllocatorInstance).SecondaryData == (ForElementType<unsigned_int>)0x0) {
            memmove((TBitArray<FDefaultBitArrayAllocator> *)(pFVar9 + 0x28),pTVar8,0x10);
          }
          if (*(void **)(pFVar9 + 0x38) != (void *)0x0) {
            FMemory::Free(*(void **)(pFVar9 + 0x38));
          }
          *(ForElementType<unsigned_int> *)(pFVar9 + 0x38) =
               (pTVar8->AllocatorInstance).SecondaryData;
          (pTVar8->AllocatorInstance).SecondaryData = (ForElementType<unsigned_int>)0x0;
          *(int *)(pFVar9 + 0x40) = pTVar8->NumBits;
          *(int *)(pFVar9 + 0x44) = pTVar8->MaxBits;
          pTVar8->NumBits = 0;
          pTVar8->MaxBits = 0;
        }
        goto LAB_14e0429dc;
      }
      if ((*(FPrimitiveSceneProxy **)pFVar9 == param_2) &&
         (*(int *)(pFVar9 + 0x18) == param_3->LODIndex)) break;
      pFVar9 = pFVar9 + 0x48;
    }
    *(int *)(pFVar9 + 0x1c) = *(int *)(pFVar9 + 0x1c) + 1;
    *(uint *)(pFVar9 + 0x20) = *(uint *)(pFVar9 + 0x20) | 1 << (param_5 & 0x1f);
    *(uint *)(pFVar9 + 0x24) = *(uint *)(pFVar9 + 0x24) | 1 << (param_4 & 0x1f);
    pTVar7 = `FHairGeometryCache::AddDebug'::__l5::<lambda_1>::operator()
                       (&local_c4,&local_88,&param_3->Sections);
    pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)(pFVar9 + 0x28);
    if ((pTVar8 == pTVar7) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("&A != &B",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x52d,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_a8.NumBits = 0;
    local_a8.MaxBits = 0x80;
    UE::Core::Private::
    BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
              (pTVar8,pTVar7,&local_a8,MaxSize,local_c7);
    if (pTVar8 != &local_a8) {
      if (local_a8.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        *(undefined8 *)(pTVar8->AllocatorInstance).InlineData =
             local_a8.AllocatorInstance.InlineData._0_8_;
        *(undefined8 *)(pFVar9 + 0x30) = local_a8.AllocatorInstance.InlineData._8_8_;
      }
      if (*(void **)(pFVar9 + 0x38) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar9 + 0x38));
      }
      *(ForElementType<unsigned_int> *)(pFVar9 + 0x38) = local_a8.AllocatorInstance.SecondaryData;
      *(int *)(pFVar9 + 0x40) = local_a8.NumBits;
      *(int *)(pFVar9 + 0x44) = local_a8.MaxBits;
      local_a8.NumBits = 0;
      local_a8.MaxBits = 0;
      local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    }
    local_68.AllocatorInstance.SecondaryData = local_88.AllocatorInstance.SecondaryData;
    if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
      local_68.AllocatorInstance.SecondaryData = local_88.AllocatorInstance.SecondaryData;
    }
LAB_14e0429dc:
    if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// GetOrAdd @ 14e051140

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

void __thiscall
FHairGeometryCache::GetOrAdd
          (FHairGeometryCache *this,FRDGBuilder *param_1,FSkeletalMeshObject *param_2,
          FSkeletalMeshLODRenderData *param_3,uint param_4,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_5,FRDGBufferSRV **param_6,
          FRDGBufferSRV **param_7,FRDGBufferSRV **param_8)

{
  TArray<FHairGeometryCache::FData,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  undefined1 uVar4;
  FSkeletalMeshLODRenderData *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  FRDGBuffer *pFVar14;
  FRDGBufferSRV *pFVar15;
  FRHIShaderResourceView *pFVar16;
  ForElementType<unsigned_int> *_Dst;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong *puVar20;
  ForElementType<unsigned_int> *this_00;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_148 [8];
  uint local_140;
  uint uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  uint local_128;
  uint local_124;
  ulonglong local_120;
  uint local_118;
  uint uStack_114;
  undefined4 local_110;
  FName local_10c;
  FRDGBufferSRVDesc local_100;
  FRDGBufferSRVDesc local_e0;
  FRDGBufferSRVDesc local_c0;
  FString local_a0;
  FRDGBufferDesc local_90;
  FRDGBufferDesc local_78;
  FRDGBufferDesc local_60;
  
  if ((param_3 == (FSkeletalMeshLODRenderData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLODData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomManager.cpp"
                         ,0x10e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2 == (FSkeletalMeshObject *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMeshObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomManager.cpp"
                         ,0x10f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_5->ArrayNum < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("UniqueSections.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomManager.cpp"
                         ,0x110,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar8 = IsHairStrandContinuousDecimationReorderingEnabled();
  puVar20 = (ulonglong *)&local_128;
  uVar19 = param_2->ComponentId;
  uVar10 = 0;
  uStack_114 = param_4;
  local_124 = param_4;
  local_128 = uVar19;
  do {
    uVar17 = *puVar20;
    puVar20 = (ulonglong *)((longlong)puVar20 + 4);
    uVar10 = ((uint)uVar17 * -0x3361d2af >> 0x11 | (uint)uVar17 * 0x16a88000) * 0x1b873593 ^ uVar10;
    uVar10 = ((uVar10 >> 0x13 | uVar10 << 0xd) + 0xfaddaf14) * 5;
  } while (puVar20 != &local_120);
  uVar10 = (uVar10 >> 0x10 ^ uVar10) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  local_120 = (ulonglong)uVar10;
  uVar10 = (this->HashTable).Hash[uVar10 & (this->HashTable).HashMask];
  local_118 = uVar19;
  if (uVar10 != 0xffffffff) {
    do {
      uVar21 = 0;
      if ((int)uVar10 < (this->Datas).ArrayNum) {
        uVar21 = ~uVar10 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar22 = (this->Datas).AllocatorInstance.Data;
      if ((*(uint *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x40) == uVar19) &&
         (*(uint *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x44) == param_4)) {
        if (uVar10 != 0xffffffff) goto LAB_14e05179a;
        break;
      }
      uVar10 = (this->HashTable).NextIndex[uVar10];
    } while (uVar10 != 0xffffffff);
  }
  uVar10 = (this->Datas).ArrayNum;
  pTVar1 = &this->Datas;
  if (uVar10 == (this->Datas).ArrayMax) {
    uVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x890,&pTVar1->AllocatorInstance,&(this->Datas).ArrayMax);
  }
  pFVar22 = (pTVar1->AllocatorInstance).Data;
  iVar12 = uVar10 + 1;
  (this->Datas).ArrayNum = iVar12;
  DefaultConstructItems<FHairGeometryCache::FData,int>(pFVar22 + (longlong)(int)uVar10 * 0x90,1);
  if ((this->HashTable).IndexSize <= uVar10) {
    iVar11 = 1;
    if (iVar12 != 0) {
      iVar11 = iVar12;
    }
    uVar17 = (ulonglong)(iVar11 - 1) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar6 & 0x1f);
    local_110 = (undefined4)lVar6;
    if (uVar19 < 0x20) {
      uVar19 = 0x20;
    }
    FHashTable::Resize(&this->HashTable,uVar19);
  }
  uVar19 = (this->HashTable).HashMask & (uint)local_120;
  (this->HashTable).NextIndex[uVar10] = (this->HashTable).Hash[uVar19];
  (this->HashTable).Hash[uVar19] = uVar10;
  uVar19 = 0;
  if ((int)uVar10 < (this->Datas).ArrayNum) {
    uVar19 = ~uVar10 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x90;
  *(FSkeletalMeshObject **)pFVar22 = param_2;
  pFVar5 = *(FSkeletalMeshLODRenderData **)(pFVar22 + 8);
  if (pFVar5 != param_3) {
    *(FSkeletalMeshLODRenderData **)(pFVar22 + 8) = param_3;
    if (param_3 != (FSkeletalMeshLODRenderData *)0x0) {
      LOCK();
      *(int *)&param_3->_padding_ = (int)param_3->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar5 != (FSkeletalMeshLODRenderData *)0x0) {
      plVar2 = &pFVar5->_padding_;
      LOCK();
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  *(int *)(pFVar22 + 0x48) = (int)local_120;
  *(ulonglong *)(pFVar22 + 0x40) = CONCAT44(uStack_114,local_118);
  *(int *)(pFVar22 + 0x4c) = (param_3->RenderSections).ArrayNum;
  uStack_138 = 0x4109;
  local_140 = 4;
  uStack_13c = (param_3->StaticVertexBuffers).PositionVertexBuffer.NumVertices * 3;
  local_130 = 0;
  local_90.NumElements = uStack_13c;
  local_90.BytesPerElement = 4;
  local_90._12_4_ = uStack_134;
  local_90.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
  local_90.Metadata = (FShaderParametersMetadata *)0x0;
  pFVar14 = FRDGBuilder::CreateBuffer(param_1,&local_90,L"Hair.SkinnedDeformedPositions",None);
  *(FRDGBuffer **)(pFVar22 + 0x10) = pFVar14;
  if (bVar8) {
    uStack_138 = 0x4109;
    local_140 = 4;
    local_130 = 0;
    local_78.Metadata = (FShaderParametersMetadata *)0x0;
    uStack_13c = (param_3->StaticVertexBuffers).PositionVertexBuffer.NumVertices * 3;
    local_78.NumElements = uStack_13c;
    local_78.BytesPerElement = 4;
    local_78._12_4_ = uStack_134;
    local_78.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
    pFVar14 = FRDGBuilder::CreateBuffer
                        (param_1,&local_78,L"Hair.SkinnedDeformedPreviousPositions",None);
  }
  else {
    pFVar14 = (FRDGBuffer *)0x0;
  }
  *(FRDGBuffer **)(pFVar22 + 0x18) = pFVar14;
  local_100._padding_._0_1_ = 0xd;
  local_100._padding_._4_4_ = 0;
  local_100._padding_ = 0;
  local_100.Buffer = *(FRDGBuffer **)(pFVar22 + 0x10);
  local_100._padding_._0_4_ = 0xffffffff;
  pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_100);
  *(FRDGBufferSRV **)(pFVar22 + 0x28) = pFVar15;
  if (bVar8) {
    local_e0.Buffer = *(FRDGBuffer **)(pFVar22 + 0x18);
    local_e0._padding_._4_4_ = 0;
    local_e0._padding_ = 0;
    local_e0._padding_._0_1_ = 0xd;
    local_e0._padding_._0_4_ = 0xffffffff;
    pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_e0);
  }
  else {
    pFVar15 = (FRDGBufferSRV *)0x0;
  }
  *(FRDGBufferSRV **)(pFVar22 + 0x30) = pFVar15;
  *(undefined8 *)(pFVar22 + 0x20) = 0;
  *(undefined8 *)(pFVar22 + 0x38) = 0;
  pFVar16 = (param_3->StaticVertexBuffers).StaticMeshVertexBuffer.TangentsSRV.Reference;
  if (pFVar16 != (FRHIShaderResourceView *)0x0) {
    uVar4 = pFVar16->field_0x21;
    uVar19 = (param_3->StaticVertexBuffers).StaticMeshVertexBuffer.NumVertices;
    uVar21 = 8;
    if ((param_3->StaticVertexBuffers).StaticMeshVertexBuffer.bUseHighPrecisionTangentBasis != false
       ) {
      uVar21 = 0x10;
    }
    if ((pFVar16->field_0x22 != '\x01') &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TangentSRV->GetDesc().Buffer.SRV.BufferType == FRHIViewDesc::EBufferType::Typed"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomManager.cpp"
                           ,0x138,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uStack_138 = 0x4109;
    local_60.NumElements = uVar19;
    local_60.BytesPerElement = uVar21;
    local_60._12_4_ = uStack_134;
    local_60.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
    local_130 = 0;
    local_60.Metadata = (FShaderParametersMetadata *)0x0;
    local_140 = uVar21;
    uStack_13c = uVar19;
    local_c0.Buffer =
         FRDGBuilder::CreateBuffer(param_1,&local_60,L"Hair.SkinnedDeformedTangents",None);
    *(FRDGBuffer **)(pFVar22 + 0x20) = local_c0.Buffer;
    local_c0._padding_._4_4_ = 0;
    local_c0._padding_ = 0;
    local_c0._padding_._0_4_ = 0xffffffff;
    local_c0._padding_._0_1_ = uVar4;
    pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_c0);
    *(FRDGBufferSRV **)(pFVar22 + 0x38) = pFVar15;
  }
  uVar19 = *(uint *)(pFVar22 + 0x4c);
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
  }
  if (*(int *)(pFVar22 + 0x6c) < (int)uVar19) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar19,(ForAnyElementType *)(pFVar22 + 0x60),*(int *)(pFVar22 + 0x68),
               (int *)(pFVar22 + 0x6c));
  }
  this_00 = (ForElementType<unsigned_int> *)(pFVar22 + 0x70);
  *(int *)(pFVar22 + 0x88) = *(int *)(pFVar22 + 0x4c);
  uVar19 = *(int *)(pFVar22 + 0x4c) + 0x1f;
  uVar21 = uVar19 >> 5;
  if (uVar19 >> 5 != 0) {
    if (*(int *)(pFVar22 + 0x8c) + 0x1fU >> 5 < uVar21) {
      TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
      ResizeAllocation(this_00,0,uVar21,4);
      *(uint *)(pFVar22 + 0x8c) = uVar21 << 5;
    }
    _Dst = this_00;
    if (*(ForElementType<unsigned_int> **)(pFVar22 + 0x80) != (ForElementType<unsigned_int> *)0x0) {
      _Dst = *(ForElementType<unsigned_int> **)(pFVar22 + 0x80);
    }
    memset(_Dst,0,(ulonglong)uVar21 << 2);
    uVar21 = *(int *)(pFVar22 + 0x88) >> 0x1f & 0x1f;
    uVar19 = *(int *)(pFVar22 + 0x88) + uVar21;
    iVar12 = (uVar19 & 0x1f) - uVar21;
    if (iVar12 != 0) {
      if (*(ForElementType<unsigned_int> **)(pFVar22 + 0x80) != (ForElementType<unsigned_int> *)0x0)
      {
        this_00 = *(ForElementType<unsigned_int> **)(pFVar22 + 0x80);
      }
      *(uint *)(this_00->InlineData + (longlong)((int)uVar19 >> 5) * 4) =
           *(uint *)(this_00->InlineData + (longlong)((int)uVar19 >> 5) * 4) &
           0xffffffffU >> (0x20U - (char)iVar12 & 0x1f);
    }
  }
LAB_14e05179a:
  uVar19 = 0;
  if ((int)uVar10 < (this->Datas).ArrayNum) {
    uVar19 = ~uVar10 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = (this->Datas).AllocatorInstance.Data;
  if ((*(longlong *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x28) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.PositionSRV",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomManager.cpp"
                         ,0x143,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar19 = param_5->ArrayNum;
  uVar17 = (ulonglong)(int)uVar19;
  pFVar24 = (param_5->AllocatorInstance).Data;
  pFVar3 = pFVar24 + uVar17 * 4;
  while( true ) {
    if (param_5->ArrayNum != (int)uVar17) {
      local_148[0] = 0;
      `TCheckedPointerIterator<unsigned_int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_148);
    }
    if (pFVar24 == pFVar3) break;
    uVar21 = *(uint *)pFVar24;
    if ((((int)uVar21 < 0) ||
        (*(int *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x88) <= (int)uVar21)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar18 = pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x70;
    if (*(FScriptContainerElement **)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x80) !=
        (FScriptContainerElement *)0x0) {
      pFVar18 = *(FScriptContainerElement **)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x80);
    }
    uVar13 = uVar21;
    if ((int)uVar21 < 0) {
      uVar13 = uVar21 + 0x1f;
    }
    if ((*(uint *)(pFVar18 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar21 & 0x1f) & 1) == 0) {
      uVar13 = 0;
      if ((int)uVar21 < (param_3->RenderSections).ArrayNum) {
        uVar13 = ~uVar21 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar12 = *(int *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x68);
      pFVar18 = (param_3->RenderSections).AllocatorInstance.Data;
      if (iVar12 == *(int *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x6c)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x820,(ForAnyElementType *)
                                  (pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x60),
                            (int *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x6c));
      }
      lVar6 = *(longlong *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x60);
      *(int *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x68) = iVar12 + 1;
      puVar23 = (uint *)(lVar6 + (longlong)iVar12 * 0x20);
      DefaultConstructItems<FSkinUpdateSection,int>(puVar23,1);
      *puVar23 = uVar21;
      puVar23[1] = *(uint *)(pFVar18 + (longlong)(int)uVar21 * 0x118 + 0x48);
      puVar23[2] = *(uint *)(pFVar18 + (longlong)(int)uVar21 * 0x118 + 0x10);
      pFVar16 = FSkeletalMeshDeformerHelpers::GetBoneBufferForReading(param_2,param_4,uVar21,false);
      *(FRHIShaderResourceView **)(puVar23 + 4) = pFVar16;
      pFVar16 = FSkeletalMeshDeformerHelpers::GetBoneBufferForReading(param_2,param_4,uVar21,true);
      *(FRHIShaderResourceView **)(puVar23 + 6) = pFVar16;
      if ((((int)uVar21 < 0) ||
          (*(int *)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x88) <= (int)uVar21)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar18 = pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x70;
      if (*(FScriptContainerElement **)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x80) !=
          (FScriptContainerElement *)0x0) {
        pFVar18 = *(FScriptContainerElement **)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x80);
      }
      uVar13 = uVar21;
      if ((int)uVar21 < 0) {
        uVar13 = uVar21 + 0x1f;
      }
      *(uint *)(pFVar18 + (longlong)((int)uVar13 >> 5) * 4) =
           *(uint *)(pFVar18 + (longlong)((int)uVar13 >> 5) * 4) | 1 << ((byte)uVar21 & 0x1f);
      if ((1 < (byte)LogHairStrands._0_1_) && (*(longlong *)(puVar23 + 4) == 0)) {
        (**(code **)(param_2->_padding_ + 0x48))(param_2);
        local_10c = param_2->DebugName;
        ::FName::ToString(&local_10c,&local_a0);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FHairGeometryCache::GetOrAdd(FRDGBuilder&___ptr64,FSkeletalMeshObject_const*___ptr64,FSkeletalMeshLODRenderData*___ptr64,unsigned_int,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_const&___ptr64,FRDGBufferSRV*___ptr64&___ptr64,FRDGBufferSRV*___ptr64&___ptr64,FRDGBufferSRV*___ptr64&___ptr64)___ptr64'
                    ::__l53::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
      }
    }
    uVar17 = (ulonglong)uVar19;
    pFVar24 = pFVar24 + 4;
  }
  *param_6 = *(FRDGBufferSRV **)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x28);
  *param_7 = *(FRDGBufferSRV **)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x30);
  *param_8 = *(FRDGBufferSRV **)(pFVar22 + (longlong)(int)uVar10 * 0x90 + 0x38);
  return;
}

