// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// PostSceneUpdate @ 145912e90

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
FRuntimeVirtualTextureSceneExtensionUpdater::PostSceneUpdate
          (FRuntimeVirtualTextureSceneExtensionUpdater *this,FRDGBuilder *param_1,
          FScenePostUpdateChangeSet *param_2)

{
  FScriptContainerElement *pFVar1;
  uchar *puVar2;
  int iVar3;
  uint uVar4;
  FPrimitiveSceneInfo *pFVar5;
  FPrimitiveSceneProxy *pFVar6;
  TSet<TTuple<int,FRuntimeVirtualTextureSceneExtensionData::FActivePrimitives>,TDefaultMapHashableKeyFuncs<int,FRuntimeVirtualTextureSceneExtensionData::FActivePrimitives,0>,FDefaultSetAllocator>
  *this_00;
  ForElementType<FSetElementId> FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  TBitArray<FDefaultBitArrayAllocator> *this_01;
  ForElementType<FSetElementId> FVar14;
  int iVar15;
  FPrimitiveSceneInfo **ppFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 local_res18 [8];
  uint local_res20 [2];
  int local_58 [2];
  FPrimitiveSceneInfo **local_50;
  uint *local_48;
  FPrimitiveSceneInfo **local_40;
  
  local_50 = (param_2->AddedPrimitiveSceneInfos).DataPtr;
  ppFVar16 = local_50 + (param_2->AddedPrimitiveSceneInfos).ArrayNum;
  local_40 = ppFVar16;
  if (local_50 != ppFVar16) {
    do {
      pFVar5 = *local_50;
      if ((pFVar5->bWritesRuntimeVirtualTexture) &&
         (pFVar6 = pFVar5->Proxy, pFVar6 != (FPrimitiveSceneProxy *)0x0)) {
        pFVar17 = (pFVar6->RuntimeVirtualTextures).AllocatorInstance.Data;
        iVar3 = (pFVar6->RuntimeVirtualTextures).ArrayNum;
        uVar4 = (pFVar5->PersistentIndex).Index;
        pFVar1 = pFVar17 + (longlong)iVar3 * 4;
        while( true ) {
          if ((pFVar6->RuntimeVirtualTextures).ArrayNum != iVar3) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          ppFVar16 = local_40;
          if (pFVar17 == pFVar1) break;
          this_00 = (TSet<TTuple<int,FRuntimeVirtualTextureSceneExtensionData::FActivePrimitives>,TDefaultMapHashableKeyFuncs<int,FRuntimeVirtualTextureSceneExtensionData::FActivePrimitives,0>,FDefaultSetAllocator>
                     *)this->Data;
          local_res20[0] = *(uint *)pFVar17;
          if (*(int *)&(this_00->Elements).field_0x8 != *(int *)&(this_00->Elements).field_0x34) {
            FVar7 = (this_00->Hash).SecondaryData;
            FVar14 = (ForElementType<FSetElementId>)&this_00->Hash;
            if (FVar7 != (ForElementType<FSetElementId>)0x0) {
              FVar14 = FVar7;
            }
            uVar10 = *(uint *)((longlong)FVar14 +
                              (ulonglong)(this_00->HashSize - 1U & local_res20[0]) * 4);
            if (uVar10 != 0xffffffff) {
              do {
                puVar12 = (uint *)((longlong)(int)uVar10 * 0x38 + *(longlong *)&this_00->Elements);
                if (*puVar12 == local_res20[0]) {
                  if (puVar12 != (uint *)0x0) goto LAB_145912fd1;
                  break;
                }
                uVar10 = puVar12[0xc];
              } while (uVar10 != 0xffffffff);
            }
          }
          local_48 = local_res20;
          TSet<TTuple<int,FRuntimeVirtualTextureSceneExtensionData::FActivePrimitives>,TDefaultMapHashableKeyFuncs<int,FRuntimeVirtualTextureSceneExtensionData::FActivePrimitives,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                    (this_00,(uint)local_58,
                     (TKeyInitializer<int_const_&> *)(ulonglong)local_res20[0],(bool *)&local_48);
          puVar12 = (uint *)((longlong)local_58[0] * 0x38 + *(longlong *)&this_00->Elements);
LAB_145912fd1:
          this_01 = (TBitArray<FDefaultBitArrayAllocator> *)(puVar12 + 2);
          iVar15 = (uVar4 - puVar12[8]) + 1;
          if (0 < iVar15) {
            iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_01,iVar15);
            TBitArray<FDefaultBitArrayAllocator>::SetRange(this_01,iVar11,iVar15,false);
          }
          if ((((int)uVar4 < 0) || ((int)puVar12[8] <= (int)uVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pTVar13 = this_01;
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar12 + 6) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar12 + 6);
          }
          uVar10 = uVar4;
          if ((int)uVar4 < 0) {
            uVar10 = uVar4 + 0x1f;
          }
          if (((*(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)((int)uVar10 >> 5) * 4
                         ) >> (uVar4 & 0x1f) & 1) != 0) &&
             (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5926353556155138144>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\RuntimeVirtualTextureSceneExtension.cpp"
                                 ,0x60,"Entry.BitArray[PersistentIndex.Index] == false"), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if ((((int)uVar4 < 0) || ((int)puVar12[8] <= (int)uVar4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(TBitArray<FDefaultBitArrayAllocator> **)(puVar12 + 6) !=
              (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
            this_01 = *(TBitArray<FDefaultBitArrayAllocator> **)(puVar12 + 6);
          }
          uVar10 = uVar4;
          if ((int)uVar4 < 0) {
            uVar10 = uVar4 + 0x1f;
          }
          puVar2 = (this_01->AllocatorInstance).InlineData + (longlong)((int)uVar10 >> 5) * 4;
          *(uint *)puVar2 = *(uint *)puVar2 | 1 << ((byte)uVar4 & 0x1f);
          puVar12[10] = puVar12[10] + 1;
          pFVar17 = pFVar17 + 4;
        }
      }
      local_50 = local_50 + 1;
    } while (local_50 != ppFVar16);
  }
  return;
}

// PreSceneUpdate @ 145913130

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
FRuntimeVirtualTextureSceneExtensionUpdater::PreSceneUpdate
          (FRuntimeVirtualTextureSceneExtensionUpdater *this,FRDGBuilder *param_1,
          FScenePreUpdateChangeSet *param_2,FSceneUniformBuffer *param_3)

{
  FPrimitiveSceneInfo **ppFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  uint uVar4;
  FPrimitiveSceneInfo *pFVar5;
  FPrimitiveSceneProxy *pFVar6;
  FRuntimeVirtualTextureSceneExtensionData *pFVar7;
  undefined1 *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  FScriptContainerElement *pFVar14;
  uint *puVar15;
  FPrimitiveSceneInfo **ppFVar16;
  undefined1 local_res18 [8];
  
  ppFVar16 = (param_2->RemovedPrimitiveSceneInfos).DataPtr;
  ppFVar1 = ppFVar16 + (param_2->RemovedPrimitiveSceneInfos).ArrayNum;
  do {
    if (ppFVar16 == ppFVar1) {
      return;
    }
    pFVar5 = *ppFVar16;
    if ((pFVar5->bWritesRuntimeVirtualTexture) &&
       (pFVar6 = pFVar5->Proxy, pFVar6 != (FPrimitiveSceneProxy *)0x0)) {
      pFVar14 = (pFVar6->RuntimeVirtualTextures).AllocatorInstance.Data;
      iVar3 = (pFVar6->RuntimeVirtualTextures).ArrayNum;
      uVar4 = (pFVar5->PersistentIndex).Index;
      pFVar2 = pFVar14 + (longlong)iVar3 * 4;
      while( true ) {
        if ((pFVar6->RuntimeVirtualTextures).ArrayNum != iVar3) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar14 == pFVar2) break;
        pFVar7 = this->Data;
        if (*(int *)&(pFVar7->RuntimeVirtualTextureMap).field_0x8 !=
            *(int *)&(pFVar7->RuntimeVirtualTextureMap).field_0x34) {
          puVar8 = *(undefined1 **)&(pFVar7->RuntimeVirtualTextureMap).field_0x40;
          puVar13 = &(pFVar7->RuntimeVirtualTextureMap).field_0x38;
          if (puVar8 != (undefined1 *)0x0) {
            puVar13 = puVar8;
          }
          uVar11 = *(uint *)(puVar13 +
                            (ulonglong)
                            (*(int *)&(pFVar7->RuntimeVirtualTextureMap).field_0x48 - 1U &
                            *(uint *)pFVar14) * 4);
          if (uVar11 != 0xffffffff) {
            do {
              puVar15 = (uint *)((longlong)(int)uVar11 * 0x38 +
                                *(longlong *)&pFVar7->RuntimeVirtualTextureMap);
              if (*puVar15 == *(uint *)pFVar14) {
                if (puVar15 != (uint *)0x0) goto LAB_145913262;
                goto LAB_14591323c;
              }
              uVar11 = puVar15[0xc];
            } while (uVar11 != 0xffffffff);
          }
        }
        puVar15 = (uint *)0x0;
LAB_14591323c:
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
LAB_145913262:
        if ((((int)uVar4 < 0) || ((int)puVar15[8] <= (int)uVar4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar12 = puVar15 + 2;
        if (*(uint **)(puVar15 + 6) != (uint *)0x0) {
          puVar12 = *(uint **)(puVar15 + 6);
        }
        uVar11 = uVar4;
        if ((int)uVar4 < 0) {
          uVar11 = uVar4 + 0x1f;
        }
        if (((puVar12[(int)uVar11 >> 5] >> (uVar4 & 0x1f) & 1) == 0) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<5926353556155138121>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VT\\RuntimeVirtualTextureSceneExtension.cpp"
                                ,0x49,"Entry.BitArray[PersistentIndex.Index] == true"), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if ((((int)uVar4 < 0) || ((int)puVar15[8] <= (int)uVar4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar12 = puVar15 + 2;
        if (*(uint **)(puVar15 + 6) != (uint *)0x0) {
          puVar12 = *(uint **)(puVar15 + 6);
        }
        uVar11 = uVar4;
        if ((int)uVar4 < 0) {
          uVar11 = uVar4 + 0x1f;
        }
        puVar12[(int)uVar11 >> 5] = puVar12[(int)uVar11 >> 5] & ~(1 << ((byte)uVar4 & 0x1f));
        puVar15[10] = puVar15[10] - 1;
        pFVar14 = pFVar14 + 4;
      }
    }
    ppFVar16 = ppFVar16 + 1;
  } while( true );
}

