// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// PostSceneUpdate @ 144ea4fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialCacheSceneExtensionUpdater::PostSceneUpdate
          (FMaterialCacheSceneExtensionUpdater *this,FRDGBuilder *param_1,
          FScenePostUpdateChangeSet *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FPrimitiveSceneProxy *pFVar3;
  FMaterialCacheSceneExtensionData *pFVar4;
  undefined1 *puVar5;
  longlong lVar6;
  code *pcVar7;
  FMaterialCacheTagProvider *this_00;
  bool bVar8;
  undefined1 *puVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  FPrimitiveSceneInfo **ppFVar13;
  FPrimitiveSceneInfo **ppFVar14;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  TKeyInitializer<FPrimitiveComponentId_&&> local_58;
  uint *local_50;
  TIntVector2<unsigned_int>_u_0 local_48;
  FPrimitiveSceneInfo **local_40;
  
  if ((GMaterialCacheTagProvider == (FMaterialCacheTagProvider *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GMaterialCacheTagProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheTagProvider.cpp"
                         ,0x3a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = GMaterialCacheTagProvider;
  ppFVar14 = (param_2->AddedPrimitiveSceneInfos).DataPtr;
  ppFVar13 = ppFVar14 + (param_2->AddedPrimitiveSceneInfos).ArrayNum;
  local_40 = ppFVar13;
  if (ppFVar14 != ppFVar13) {
    do {
      pFVar3 = (*ppFVar14)->Proxy;
      if ((pFVar3 != (FPrimitiveSceneProxy *)0x0) && (pFVar3->bSupportsMaterialCache != '\0')) {
        if ((pFVar3->MaterialCacheDescriptor != 0xffffffff) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Proxy->MaterialCacheDescriptor == 0xffffffffui32",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheSceneExtension.cpp"
                               ,0x4b,L"Primitive double-registration"), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lpCriticalSection = &this_00->Mutex;
        if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        iVar12 = (this_00->FreeTagIndices).ArrayNum;
        if (iVar12 == 0) {
          uVar11 = this_00->TagOffsetAllocator;
          this_00->TagOffsetAllocator = uVar11 + 1;
        }
        else {
          if ((iVar12 < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar12 = (this_00->FreeTagIndices).ArrayNum;
          uVar11 = *(uint *)((this_00->FreeTagIndices).AllocatorInstance.Data +
                            (longlong)iVar12 * 4 + -4);
          iVar12 = iVar12 + -1;
          (this_00->FreeTagIndices).ArrayNum = iVar12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&(this_00->FreeTagIndices).AllocatorInstance,iVar12,
                     &(this_00->FreeTagIndices).ArrayMax);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
        uVar2 = (pFVar3->PrimitiveComponentId).PrimIDValue;
        pFVar3->MaterialCacheDescriptor = uVar11;
        pFVar4 = this->Data;
        if (*(int *)&(pFVar4->SceneDataMap).field_0x8 != *(int *)&(pFVar4->SceneDataMap).field_0x34)
        {
          puVar5 = *(undefined1 **)&(pFVar4->SceneDataMap).field_0x40;
          puVar9 = &(pFVar4->SceneDataMap).field_0x38;
          if (puVar5 != (undefined1 *)0x0) {
            puVar9 = puVar5;
          }
          iVar12 = *(int *)(puVar9 + (ulonglong)
                                     (*(int *)&(pFVar4->SceneDataMap).field_0x48 - 1U & uVar2) * 4);
          if (iVar12 != -1) {
            do {
              if (*(uint *)((longlong)iVar12 * 0x68 + *(longlong *)&pFVar4->SceneDataMap) == uVar2)
              {
                bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!Data.SceneDataMap.Contains(Proxy->GetPrimitiveComponentId())",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheSceneExtension.cpp"
                                   ,0x4f,L"Dangling primitive scene data");
                if (bVar8) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                break;
              }
              iVar12 = *(int *)((longlong)iVar12 * 0x68 + 0x60 + *(longlong *)&pFVar4->SceneDataMap)
              ;
            } while (iVar12 != -1);
          }
        }
        local_res20[0] = (pFVar3->PrimitiveComponentId).PrimIDValue;
        pFVar4 = this->Data;
        local_50 = local_res20;
        TSet<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMaterialCachePrimitiveData,0>,FDefaultSetAllocator>
        ::Emplace<TKeyInitializer<FPrimitiveComponentId_&&>_>
                  ((TSet<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMaterialCachePrimitiveData,0>,FDefaultSetAllocator>
                    *)&pFVar4->SceneDataMap,&local_58,(bool *)&local_50);
        *(FPrimitiveSceneProxy **)
         ((longlong)(int)local_58.Key * 0x68 + 8 + *(longlong *)&pFVar4->SceneDataMap) = pFVar3;
        pFVar10 = (pFVar3->MaterialCacheRenderProxies).AllocatorInstance.Data;
        iVar12 = (pFVar3->MaterialCacheRenderProxies).ArrayNum;
        pFVar1 = pFVar10 + (longlong)iVar12 * 8;
        while( true ) {
          if ((pFVar3->MaterialCacheRenderProxies).ArrayNum != iVar12) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FMaterialCacheVirtualTextureRenderProxy_*,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res18);
          }
          ppFVar13 = local_40;
          if (pFVar10 == pFVar1) break;
          lVar6 = *(longlong *)pFVar10;
          if (lVar6 == 0) {
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_5749326334337744808>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheSceneExtension.cpp"
                               ,0x58,"MaterialCacheProxy");
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          else {
            local_48 = *(TIntVector2<unsigned_int>_u_0 *)(lVar6 + 0x20);
            FMaterialCacheTagProvider::SetTagEntry
                      (this_00,pFVar3->MaterialCacheDescriptor,(FGuid *)(lVar6 + 4),
                       (FMaterialCacheTagEntry *)&local_48._s_0);
          }
          pFVar10 = pFVar10 + 8;
        }
      }
      ppFVar14 = ppFVar14 + 1;
    } while (ppFVar14 != ppFVar13);
  }
  return;
}

// PreSceneUpdate @ 144ea52f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMaterialCacheSceneExtensionUpdater::PreSceneUpdate
          (FMaterialCacheSceneExtensionUpdater *this,FRDGBuilder *param_1,
          FScenePreUpdateChangeSet *param_2,FSceneUniformBuffer *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  FPrimitiveSceneInfo **ppFVar3;
  FPrimitiveSceneProxy *pFVar4;
  FScriptContainerElement *pFVar5;
  FMaterialCacheSceneExtensionData *pFVar6;
  code *pcVar7;
  FMaterialCacheTagProvider *pFVar8;
  bool bVar9;
  int iVar10;
  FPrimitiveSceneInfo **ppFVar11;
  FPrimitiveComponentId local_res18 [4];
  uint local_38 [4];
  
  if ((GMaterialCacheTagProvider == (FMaterialCacheTagProvider *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GMaterialCacheTagProvider",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheTagProvider.cpp"
                         ,0x3a,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar8 = GMaterialCacheTagProvider;
  ppFVar11 = (param_2->RemovedPrimitiveSceneInfos).DataPtr;
  ppFVar3 = ppFVar11 + (param_2->RemovedPrimitiveSceneInfos).ArrayNum;
  do {
    if (ppFVar11 == ppFVar3) {
      return;
    }
    pFVar4 = (*ppFVar11)->Proxy;
    if ((pFVar4 != (FPrimitiveSceneProxy *)0x0) && (pFVar4->bSupportsMaterialCache != '\0')) {
      local_38[0] = pFVar4->MaterialCacheDescriptor;
      lpCriticalSection = &pFVar8->Mutex;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((local_38[0] == 0xffffffff) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("TagOffset != 0xffffffffui32",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MaterialCache\\MaterialCacheTagProvider.cpp"
                             ,0xd3,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar2 = &pFVar8->FreeTagIndices;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar5 + (longlong)(pFVar8->FreeTagIndices).ArrayMax * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (pFVar8->FreeTagIndices).ArrayNum;
      piVar1 = &(pFVar8->FreeTagIndices).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (pFVar8->FreeTagIndices).ArrayNum = iVar10 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_38[0];
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_res18[0].PrimIDValue = (pFVar4->PrimitiveComponentId).PrimIDValue;
      pFVar4->MaterialCacheDescriptor = 0xffffffff;
      pFVar6 = this->Data;
      if (*(int *)&(pFVar6->SceneDataMap).field_0x8 != *(int *)&(pFVar6->SceneDataMap).field_0x34) {
        TSet<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMaterialCachePrimitiveData,0>,FDefaultSetAllocator>
        ::RemoveImpl<FPrimitiveComponentId>
                  ((TSet<TTuple<FPrimitiveComponentId,FMaterialCachePrimitiveData>,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,FMaterialCachePrimitiveData,0>,FDefaultSetAllocator>
                    *)&pFVar6->SceneDataMap,local_res18[0].PrimIDValue,local_res18);
      }
    }
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

