// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 3

// Convert @ 14e5e9e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FGLTFJsonScene * __thiscall FGLTFSceneConverter::Convert(FGLTFSceneConverter *this,UWorld *param_1)

{
  int *piVar1;
  ULevel *this_00;
  ALevelVariantSetsActor *this_01;
  TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *pTVar2;
  undefined1 *puVar3;
  FGLTFConvertBuilder *this_02;
  FGLTFLogBuilder *this_03;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FGLTFJsonScene *pFVar9;
  UClass *pUVar10;
  ULevelVariantSets *this_04;
  TArray<UVariant_*,TSizedDefaultAllocator<32>_> *pTVar11;
  TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *this_05;
  AActor *pAVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  ForAnyElementType FVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_148;
  undefined1 local_147;
  undefined1 local_146 [6];
  ForAnyElementType local_140;
  uint local_138;
  int local_134;
  FGLTFJsonNode *local_130;
  ForAnyElementType local_128;
  int local_120;
  int local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  FScriptContainerElement *local_108;
  ulonglong local_100;
  TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> *local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  undefined1 local_d0 [4];
  FName local_cc;
  ulonglong local_c0;
  undefined8 local_b8;
  TArray<UVariantSet_*,TSizedDefaultAllocator<32>_> *local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FGLTFJsonScene *local_98;
  TArray<ULevel_*,TSizedDefaultAllocator<32>_> *local_90;
  FName local_88;
  FString local_80;
  ulonglong *local_70;
  undefined8 *local_68;
  FString local_60 [2];
  
  pFVar9 = FGLTFJsonBuilder::AddScene(*(FGLTFJsonBuilder **)&this->field_0x58);
  local_cc = (FName)param_1->_padding_;
  local_98 = pFVar9;
  ::FName::ToString(&local_cc,&pFVar9->Name);
  local_90 = UWorld::GetLevels(param_1);
  local_110 = local_90->ArrayNum;
  uVar14 = (ulonglong)(int)local_110;
  if ((int)local_110 < 1) {
    local_88 = (FName)param_1->_padding_;
    this_03 = *(FGLTFLogBuilder **)&this->field_0x58;
    ::FName::ToString(&local_88,&local_80);
    ::FString::PrintfImpl
              (local_60,
               L"World %s has no levels. Please make sure the world has been fully initialized");
    FGLTFLogBuilder::LogWarning(this_03,local_60);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  else {
    pFVar16 = (local_90->AllocatorInstance).Data;
    pFVar17 = pFVar16 + uVar14 * 8;
    local_e0 = pFVar17;
    while( true ) {
      local_d8 = pFVar16;
      if (local_90->ArrayNum != (int)uVar14) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<ULevel_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar16 == pFVar17) break;
      this_00 = *(ULevel **)pFVar16;
      if ((this_00 != (ULevel *)0x0) &&
         ((bVar6 = ULevel::IsInstancedLevel(this_00), !bVar6 ||
          (bVar6 = ULevel::IsCurrentLevel(this_00), bVar6)))) {
        uVar13 = (this_00->Actors).ArrayNum;
        pFVar17 = (this_00->Actors).AllocatorInstance.Data;
        local_108 = (FScriptContainerElement *)0x0;
        local_140.Data = (FScriptContainerElement *)0x0;
        local_138 = uVar13;
        if (uVar13 == 0) {
          local_134 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,uVar13,0,&local_140,uVar13,&local_134);
          ConstructItems<AActor_*,TObjectPtr<AActor>,int>
                    (local_140.Data,(TObjectPtr<AActor> *)pFVar17,uVar13);
          local_108 = local_140.Data;
        }
        local_140.Data = local_108;
        if (*(char *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0xb2) != '\0') {
          uVar14 = (ulonglong)(int)local_138;
          local_114 = local_138;
          local_a0 = local_108 + uVar14 * 8;
          while( true ) {
            pFVar16 = local_a0;
            pFVar17 = local_108;
            if (local_138 != (uint)uVar14) {
              local_res18[0] = 0;
              `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_res18);
            }
            pFVar9 = local_98;
            if (pFVar17 == pFVar16) break;
            this_01 = *(ALevelVariantSetsActor **)pFVar17;
            if (this_01 != (ALevelVariantSetsActor *)0x0) {
              pUVar10 = Z_Construct_UClass_ALevelVariantSetsActor_NoRegister();
              iVar8 = (int)pUVar10->_padding_;
              if (((iVar8 <= *(int *)(this_01->_padding_ + 0x38)) &&
                  ((longlong *)
                   *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar8 * 8)
                   == &pUVar10->_padding_)) &&
                 (this_04 = ALevelVariantSetsActor::GetLevelVariantSets(this_01,true),
                 this_04 != (ULevelVariantSets *)0x0)) {
                local_b0 = ULevelVariantSets::GetVariantSets(this_04);
                local_118 = local_b0->ArrayNum;
                uVar14 = (ulonglong)(int)local_118;
                pFVar16 = (local_b0->AllocatorInstance).Data;
                local_a8 = pFVar16 + uVar14 * 8;
                while( true ) {
                  pFVar5 = local_a8;
                  local_e8 = pFVar16;
                  if (local_b0->ArrayNum != (int)uVar14) {
                    local_res20[0] = 0;
                    `TCheckedPointerIterator<UVariantSet_*_const,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(local_res20);
                  }
                  pFVar17 = local_108;
                  if (pFVar16 == pFVar5) break;
                  pTVar11 = UVariantSet::GetVariants(*(UVariantSet **)pFVar16);
                  pFVar16 = (pTVar11->AllocatorInstance).Data;
                  iVar8 = pTVar11->ArrayNum;
                  pFVar17 = pFVar16 + (longlong)iVar8 * 8;
                  local_f0 = pFVar17;
                  while( true ) {
                    if (pTVar11->ArrayNum != iVar8) {
                      local_148 = 0;
                      `TCheckedPointerIterator<UVariant_*_const,int,0>::operator!='::__l2::
                      <lambda_1>::operator()(&local_148);
                    }
                    if (pFVar16 == pFVar17) break;
                    if (*(ulonglong *)pFVar16 != 0) {
                      pTVar2 = *(TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*> **)
                                (*(longlong *)&this->field_0x58 + 0x940);
                      local_100 = *(ulonglong *)pFVar16;
                      (**(code **)(pTVar2->_padding_ + 8))(pTVar2,&local_100);
                      local_c0 = local_100;
                      uVar13 = ((uint)(local_100 >> 0x14) & 0xffff ^ (uint)(local_100 >> 4)) *
                               -0x7a143595;
                      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
                      uVar13 = uVar13 >> 0x10 ^ uVar13;
                      if (*(int *)&(pTVar2->CachedOutputs).field_0x8 !=
                          *(int *)&(pTVar2->CachedOutputs).field_0x34) {
                        puVar3 = *(undefined1 **)&(pTVar2->CachedOutputs).field_0x40;
                        puVar15 = &(pTVar2->CachedOutputs).field_0x38;
                        if (puVar3 != (undefined1 *)0x0) {
                          puVar15 = puVar3;
                        }
                        iVar7 = *(int *)(puVar15 +
                                        (ulonglong)
                                        (*(int *)&(pTVar2->CachedOutputs).field_0x48 - 1U & uVar13)
                                        * 4);
                        if (iVar7 != -1) {
                          lVar18 = *(longlong *)&pTVar2->CachedOutputs;
                          do {
                            if (*(ulonglong *)(lVar18 + (longlong)iVar7 * 0x18) == local_100) {
                              if (((iVar7 != -1) &&
                                  (lVar18 = lVar18 + (longlong)iVar7 * 0x18, lVar18 != 0)) &&
                                 (pFVar17 = local_f0, lVar18 != -8)) goto LAB_14e5ea1fc;
                              break;
                            }
                            iVar7 = *(int *)(lVar18 + 0x10 + (longlong)iVar7 * 0x18);
                          } while (iVar7 != -1);
                        }
                      }
                      local_f8 = pTVar2;
                      this_05 = UE::Core::Private::
                                DereferenceIfNecessary<TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>,TGLTFConverter<FGLTFJsonMaterialVariant_*,UVariant_const_*>_*>
                                          (&local_f8);
                      local_b8 = TGLTFConverter<FGLTFJsonMaterialVariant*___ptr64,UVariant_const*___ptr64>
                                 ::_vcall__16__flat______
                                           ((TGLTFConverter<FGLTFJsonMaterialVariant*___ptr64,UVariant_const*___ptr64>
                                             *)this_05);
                      local_70 = &local_c0;
                      local_68 = &local_b8;
                      TSet<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>,TDefaultMapHashableKeyFuncs<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*,0>,FDefaultSetAllocator>
                      ::
                      EmplaceByHash<TPairInitializer<TTuple<UVariant_const_*>_&&,FGLTFJsonMaterialVariant_*_const_&>_>
                                ((TSet<TTuple<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*>,TDefaultMapHashableKeyFuncs<TTuple<UVariant_const_*>,FGLTFJsonMaterialVariant_*,0>,FDefaultSetAllocator>
                                  *)&pTVar2->CachedOutputs,(uint)local_d0,
                                 (TPairInitializer<TTuple<UVariant_const_*>_&&,FGLTFJsonMaterialVariant_*_const_&>
                                  *)(ulonglong)uVar13,(bool *)&local_70);
                      pFVar17 = local_f0;
                    }
LAB_14e5ea1fc:
                    pFVar16 = pFVar16 + 8;
                  }
                  pFVar16 = local_e8 + 8;
                  uVar14 = (ulonglong)local_118;
                }
              }
            }
            uVar14 = (ulonglong)local_114;
            local_108 = pFVar17 + 8;
          }
        }
        uVar13 = local_138;
        pFVar17 = local_140.Data + (longlong)(int)local_138 * 8;
        FVar19.Data = local_140.Data;
        while( true ) {
          if (local_138 != uVar13) {
            local_147 = 0;
            `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_147);
          }
          if (FVar19.Data == pFVar17) break;
          pAVar12 = *(AActor **)FVar19.Data;
          local_130 = FGLTFConvertBuilder::AddUniqueNode
                                (*(FGLTFConvertBuilder **)&this->field_0x58,pAVar12);
          if (local_130 != (FGLTFJsonNode *)0x0) {
            this_02 = *(FGLTFConvertBuilder **)&this->field_0x58;
            pAVar12 = AActor::GetAttachParentActor(pAVar12);
            if ((pAVar12 == (AActor *)0x0) ||
               (bVar6 = FGLTFConvertBuilder::IsSelectedActor(this_02,pAVar12), !bVar6)) {
              pFVar16 = (pFVar9->Nodes).AllocatorInstance.Data;
              if ((pFVar16 <= (FScriptContainerElement *)&local_130) &&
                 (((FScriptContainerElement *)&local_130 <
                   pFVar16 + (longlong)(pFVar9->Nodes).ArrayMax * 8 &&
                  (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar6)))) {
                pcVar4 = (code *)swi(3);
                pFVar9 = (FGLTFJsonScene *)(*pcVar4)();
                return pFVar9;
              }
              iVar8 = (pFVar9->Nodes).ArrayNum;
              piVar1 = &(pFVar9->Nodes).ArrayMax;
              if (iVar8 == *piVar1) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&(pFVar9->Nodes).AllocatorInstance,piVar1);
              }
              (pFVar9->Nodes).ArrayNum = iVar8 + 1;
              *(FGLTFJsonNode **)((pFVar9->Nodes).AllocatorInstance.Data + (longlong)iVar8 * 8) =
                   local_130;
            }
          }
          FVar19.Data = FVar19.Data + 8;
        }
        if (*(char *)(*(longlong *)(*(longlong *)&this->field_0x58 + 0x18) + 0x9f) != '\0') {
          local_120 = (pFVar9->Nodes).ArrayNum;
          lVar18 = (longlong)local_120;
          pFVar17 = (pFVar9->Nodes).AllocatorInstance.Data;
          local_128.Data = (FScriptContainerElement *)0x0;
          if (local_120 == 0) {
            local_11c = 0;
            iVar8 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_120,0,&local_128,local_120,&local_11c);
            memcpy(local_128.Data,pFVar17,lVar18 << 3);
            iVar8 = local_120;
          }
          pFVar17 = local_128.Data + (longlong)iVar8 * 8;
          FVar19.Data = local_128.Data;
          iVar7 = iVar8;
          while( true ) {
            if (iVar7 != iVar8) {
              local_146[0] = 0;
              `TCheckedPointerIterator<FGLTFJsonNode_*,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_146);
            }
            if (FVar19.Data == pFVar17) break;
            MakeSkinnedMeshesRoot(this,*(FGLTFJsonNode **)FVar19.Data,true,pFVar9);
            FVar19.Data = FVar19.Data + 8;
            iVar7 = local_120;
          }
          if (local_128.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data);
          }
        }
        pFVar17 = local_e0;
        if (local_140.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_140.Data);
          pFVar17 = local_e0;
        }
      }
      pFVar16 = local_d8 + 8;
      uVar14 = (ulonglong)local_110;
    }
  }
  return pFVar9;
}

// MakeSkinnedMeshesRoot @ 14e602090

void __thiscall
FGLTFSceneConverter::MakeSkinnedMeshesRoot
          (FGLTFSceneConverter *this,FGLTFJsonNode *param_1,bool param_2,FGLTFJsonScene *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  FGLTFJsonNode *local_28 [2];
  
  if ((param_1->Mesh != (FGLTFJsonMesh *)0x0) && (param_1->Skin != (FGLTFJsonSkin *)0x0)) {
    uVar8 = 0;
    uVar6 = uVar8;
    if (param_2) {
      do {
        if (*(float *)(&FGLTFJsonTransform::Identity.Translation.field_0x8 + uVar6) !=
            *(float *)((longlong)&param_1->_padding_ + uVar6)) goto LAB_14e60213c;
        uVar6 = uVar6 + 4;
        uVar7 = uVar8;
      } while (uVar6 < 0xc);
      do {
        if (*(float *)(&FGLTFJsonTransform::Identity.Rotation.field_0x8 + uVar7) !=
            *(float *)((longlong)&param_1->_padding_ + uVar7)) goto LAB_14e60213c;
        uVar7 = uVar7 + 4;
      } while (uVar7 < 0x10);
      do {
        if (*(float *)(&FGLTFJsonTransform::Identity.Scale.field_0x8 + uVar8) !=
            *(float *)((longlong)&param_1->_padding_ + uVar8)) goto LAB_14e60213c;
        uVar8 = uVar8 + 4;
      } while (uVar8 < 0xc);
    }
    else {
LAB_14e60213c:
      local_28[0] = FGLTFJsonBuilder::AddNode(*(FGLTFJsonBuilder **)&this->field_0x58);
      local_28[0]->Mesh = param_1->Mesh;
      local_28[0]->Skin = param_1->Skin;
      param_1->Mesh = (FGLTFJsonMesh *)0x0;
      param_1->Skin = (FGLTFJsonSkin *)0x0;
      pFVar2 = (param_3->Nodes).AllocatorInstance.Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(param_3->Nodes).ArrayMax * 8))
         && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (param_3->Nodes).ArrayNum;
      piVar1 = &(param_3->Nodes).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(param_3->Nodes).AllocatorInstance,piVar1);
      }
      (param_3->Nodes).ArrayNum = iVar5 + 1;
      *(FGLTFJsonNode **)((param_3->Nodes).AllocatorInstance.Data + (longlong)iVar5 * 8) =
           local_28[0];
    }
  }
  pFVar9 = (param_1->Children).AllocatorInstance.Data;
  iVar5 = (param_1->Children).ArrayNum;
  pFVar2 = pFVar9 + (longlong)iVar5 * 8;
  while( true ) {
    if ((param_1->Children).ArrayNum != iVar5) {
      `TCheckedPointerIterator<FGLTFJsonNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar9 == pFVar2) break;
    MakeSkinnedMeshesRoot(this,*(FGLTFJsonNode **)pFVar9,false,param_3);
    pFVar9 = pFVar9 + 8;
  }
  return;
}

// MakeSkinnedMeshesRoot @ 14e602270

void __thiscall
FGLTFSceneConverter::MakeSkinnedMeshesRoot(FGLTFSceneConverter *this,FGLTFJsonScene *param_1)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType FVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (param_1->Nodes).ArrayNum;
  lVar5 = (longlong)local_20;
  pFVar1 = (param_1->Nodes).AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
    iVar3 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,pFVar1,lVar5 << 3);
    iVar3 = local_20;
  }
  pFVar1 = local_28.Data + (longlong)iVar3 * 8;
  FVar2.Data = local_28.Data;
  iVar4 = iVar3;
  while( true ) {
    if (iVar4 != iVar3) {
      `TCheckedPointerIterator<FGLTFJsonNode_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar2.Data == pFVar1) break;
    MakeSkinnedMeshesRoot(this,*(FGLTFJsonNode **)FVar2.Data,true,param_1);
    FVar2.Data = FVar2.Data + 8;
    iVar4 = local_20;
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return;
}

