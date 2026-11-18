// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FMaterialCacheSceneExtension @ 144e72460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMaterialCacheSceneExtension * __thiscall
FMaterialCacheSceneExtension::FMaterialCacheSceneExtension
          (FMaterialCacheSceneExtension *this,FScene *param_1)

{
  TUniquePtr<FMaterialCacheSceneExtensionData,TDefaultDelete<FMaterialCacheSceneExtensionData>_>
  *pTVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  FMaterialCacheSceneExtensionData *pFVar5;
  FMaterialCacheSceneExtension *pFVar6;
  FMaterialCacheSceneExtensionData *lpCriticalSection;
  undefined8 local_18 [2];
  
  this->_padding_ = (longlong)param_1;
  pTVar1 = &this->Data;
  lpCriticalSection = (FMaterialCacheSceneExtensionData *)0x0;
  this->_padding_ = (longlong)&___7FMaterialCacheSceneExtension__6B_;
  *(undefined8 *)&this->TagBuckets = 0;
  *(undefined8 *)&(this->TagBuckets).field_0x8 = 0;
  *(undefined8 *)&(this->TagBuckets).field_0x20 = 0;
  *(undefined4 *)&(this->TagBuckets).field_0x28 = 0;
  *(undefined4 *)&(this->TagBuckets).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagBuckets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TagBuckets).field_0x34 = 0;
  *(undefined8 *)&(this->TagBuckets).field_0x40 = 0;
  *(undefined4 *)&(this->TagBuckets).field_0x48 = 0;
  pTVar1->Ptr = (FMaterialCacheSceneExtensionData *)0x0;
  pFVar5 = ::operator_new(0x78);
  if (pFVar5 != (FMaterialCacheSceneExtensionData *)0x0) {
    (pFVar5->CriticalSection).CriticalSection.Opaque1[0] = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    *(undefined8 *)(pFVar5->CriticalSection).CriticalSection.Opaque2 = 0;
    (pFVar5->CriticalSection).CriticalSection.Opaque3[0] = (HANDLE)0x0;
    (pFVar5->CriticalSection).CriticalSection.Opaque3[1] = (HANDLE)0x0;
    (pFVar5->CriticalSection).CriticalSection.Opaque3[2] = (void *)0x0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x0 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x10 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x18 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x20 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x28 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x30 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x38 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x40 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x48 = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)pFVar5,4000);
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x0 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x20 = 0;
    *(undefined4 *)&(pFVar5->SceneDataMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar5->SceneDataMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar5->SceneDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar5->SceneDataMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar5->SceneDataMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar5->SceneDataMap).field_0x48 = 0;
    lpCriticalSection = pFVar5;
  }
  if (pTVar1 == (TUniquePtr<FMaterialCacheSceneExtensionData,TDefaultDelete<FMaterialCacheSceneExtensionData>_>
                 *)local_18) {
    if (lpCriticalSection == (FMaterialCacheSceneExtensionData *)0x0) {
      return this;
    }
    if ((*(int *)&(lpCriticalSection->SceneDataMap).field_0x8 !=
         *(int *)&(lpCriticalSection->SceneDataMap).field_0x34) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneDataMap.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheSceneExtension.cpp"
                           ,0x14,L"Released scene extension data with dangling references"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMaterialCacheSceneExtension *)(*pcVar3)();
      return pFVar6;
    }
    *(undefined4 *)&(lpCriticalSection->SceneDataMap).field_0x48 = 0;
    pvVar2 = *(void **)&(lpCriticalSection->SceneDataMap).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&lpCriticalSection->SceneDataMap);
    DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  else {
    pFVar5 = pTVar1->Ptr;
    pTVar1->Ptr = lpCriticalSection;
    if (pFVar5 == (FMaterialCacheSceneExtensionData *)0x0) {
      return this;
    }
    if ((*(int *)&(pFVar5->SceneDataMap).field_0x8 != *(int *)&(pFVar5->SceneDataMap).field_0x34) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SceneDataMap.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheSceneExtension.cpp"
                           ,0x14,L"Released scene extension data with dangling references"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FMaterialCacheSceneExtension *)(*pcVar3)();
      return pFVar6;
    }
    *(undefined4 *)&(pFVar5->SceneDataMap).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar5->SceneDataMap).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar5->SceneDataMap);
    DeleteCriticalSection((LPCRITICAL_SECTION)pFVar5);
    lpCriticalSection = pFVar5;
  }
  ::operator_delete(lpCriticalSection,0x78);
  return this;
}

// ClearCachedPrimitiveData @ 144e7dd60

void __thiscall
FMaterialCacheSceneExtension::ClearCachedPrimitiveData(FMaterialCacheSceneExtension *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FMaterialCacheSceneExtensionData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
  *this_00;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pFVar4 = (this->Data).Ptr;
  iVar3 = *(int *)&(pFVar4->SceneDataMap).field_0x28;
  puVar1 = &(pFVar4->SceneDataMap).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(pFVar4->SceneDataMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_144e7de0d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_144e7de0d:
  uVar11 = *(uint *)&(pFVar4->SceneDataMap).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(pFVar4->SceneDataMap).field_0x8 -
                       *(int *)&(pFVar4->SceneDataMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(pFVar4->SceneDataMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(pFVar4->SceneDataMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_144e7df10;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_144e7df10:
  while( true ) {
    if (*(int *)&(pFVar4->SceneDataMap).field_0x8 - *(int *)&(pFVar4->SceneDataMap).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    this_00 = (TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
               *)(*(longlong *)&pFVar4->SceneDataMap + 0x10 +
                 (longlong)TStack_60.CurrentBitIndex * 0x68);
    bVar6 = 1 < this_00->HashSize;
    if (!bVar6) {
      TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
      ::UnhashElements(this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this_00->Elements).field_0x8);
    puVar13 = &(this_00->Elements).field_0xc;
    *(undefined4 *)&(this_00->Elements).field_0x8 = 0;
    if (*(int *)puVar13 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,(ForAnyElementType *)this_00,0,(int *)puVar13);
    }
    *(undefined4 *)&(this_00->Elements).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this_00->Elements).field_0x34 = 0;
    iVar3 = *(int *)&(this_00->Elements).field_0x2c;
    *(undefined4 *)&(this_00->Elements).field_0x28 = 0;
    if ((iVar3 < 0) || (0x80 < iVar3)) {
      *(undefined4 *)&(this_00->Elements).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this_00->Elements).field_0x10,0);
    }
    if (bVar6) {
      this_00->HashSize = 1;
      TSet<TTuple<FGuid,FMaterialCachePrimitiveCachedTagCommands>,TDefaultMapHashableKeyFuncs<FGuid,FMaterialCachePrimitiveCachedTagCommands,0>,FDefaultSetAllocator>
      ::Rehash(this_00);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// CreateUpdater @ 144e82fb0

ISceneExtensionUpdater * __thiscall
FMaterialCacheSceneExtension::CreateUpdater(FMaterialCacheSceneExtension *this)

{
  ISceneExtensionUpdater IVar1;
  ISceneExtensionUpdater IVar2;
  ISceneExtensionUpdater *pIVar3;
  
  pIVar3 = ::operator_new(0x18);
  if (pIVar3 != (ISceneExtensionUpdater *)0x0) {
    IVar1 = (ISceneExtensionUpdater)(this->Data).Ptr;
    IVar2 = (ISceneExtensionUpdater)this->_padding_;
    *pIVar3 = (ISceneExtensionUpdater)&___7FMaterialCacheSceneExtensionUpdater__6B_;
    pIVar3[1] = IVar2;
    pIVar3[2] = IVar1;
    return pIVar3;
  }
  return (ISceneExtensionUpdater *)0x0;
}

// GetPrimitiveData @ 144e924b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FMaterialCachePrimitiveData * __thiscall
FMaterialCacheSceneExtension::GetPrimitiveData
          (FMaterialCacheSceneExtension *this,FPrimitiveComponentId param_1)

{
  FMaterialCacheSceneExtensionData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMaterialCachePrimitiveData *pFVar5;
  FMaterialCachePrimitiveData *pFVar6;
  undefined1 *puVar7;
  FMaterialCachePrimitiveData *pFVar8;
  
  bVar3 = IsInParallelRenderingThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheSceneExtension.cpp"
                         ,0x7a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMaterialCachePrimitiveData *)(*pcVar2)();
    return pFVar5;
  }
  pFVar1 = (this->Data).Ptr;
  pFVar8 = (FMaterialCachePrimitiveData *)0x0;
  pFVar5 = pFVar8;
  if (*(int *)&(pFVar1->SceneDataMap).field_0x8 != *(int *)&(pFVar1->SceneDataMap).field_0x34) {
    puVar7 = *(undefined1 **)&(pFVar1->SceneDataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(pFVar1->SceneDataMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(pFVar1->SceneDataMap).field_0x48 - 1U & param_1.PrimIDValue
                              ) * 4);
    if (iVar4 != -1) {
      do {
        pFVar5 = (FMaterialCachePrimitiveData *)
                 ((longlong)iVar4 * 0x68 + *(longlong *)&pFVar1->SceneDataMap);
        if (*(uint *)&pFVar5->Proxy == param_1.PrimIDValue) break;
        iVar4 = *(int *)&pFVar5[1].CachedCommands.Tags;
        pFVar5 = pFVar8;
      } while (iVar4 != -1);
    }
  }
  pFVar6 = (FMaterialCachePrimitiveData *)&pFVar5->CachedCommands;
  if (pFVar5 == (FMaterialCachePrimitiveData *)0x0) {
    pFVar6 = pFVar8;
  }
  return pFVar6;
}

// ShouldCreateExtension @ 144eb0da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl FMaterialCacheSceneExtension::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  FStaticShaderPlatform FVar2;
  
  FVar2.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
  bVar1 = IsMaterialCacheEnabled(FVar2);
  return bVar1;
}

