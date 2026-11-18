// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// operator= @ 148780b60

FRenderAssetInstanceAsyncView * __thiscall
FRenderAssetInstanceAsyncView::operator=
          (FRenderAssetInstanceAsyncView *this,FRenderAssetInstanceAsyncView *param_1)

{
  longlong *plVar1;
  TArray<FBoundsViewInfo,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FBoundsViewInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  FRenderAssetInstanceView *pFVar4;
  FScriptContainerElement *pFVar5;
  
  if (this != param_1) {
    pFVar4 = (this->View).Reference;
    (this->View).Reference = (param_1->View).Reference;
    (param_1->View).Reference = (FRenderAssetInstanceView *)0x0;
    if (pFVar4 != (FRenderAssetInstanceView *)0x0) {
      plVar1 = &pFVar4->_padding_;
      *(int *)plVar1 = (int)*plVar1 + -1;
      if ((int)*plVar1 == 0) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  pTVar2 = &param_1->BoundsViewInfo;
  pTVar3 = &this->BoundsViewInfo;
  if (pTVar3 != pTVar2) {
    pFVar5 = (pTVar3->AllocatorInstance).Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pTVar3->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->BoundsViewInfo).ArrayNum = (param_1->BoundsViewInfo).ArrayNum;
    (this->BoundsViewInfo).ArrayMax = (param_1->BoundsViewInfo).ArrayMax;
    (param_1->BoundsViewInfo).ArrayNum = 0;
    (param_1->BoundsViewInfo).ArrayMax = 0;
  }
  this->MaxLevelRenderAssetScreenSize = param_1->MaxLevelRenderAssetScreenSize;
  return this;
}

// GetRenderAssetScreenSize @ 148841140

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRenderAssetInstanceAsyncView::GetRenderAssetScreenSize
          (FRenderAssetInstanceAsyncView *this,EStreamableRenderAssetType param_1,
          UStreamableRenderAsset *param_2,float *param_3,float *param_4,int *param_5,float param_6,
          wchar_t *param_7)

{
  FBoundsViewInfo *pFVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  FRenderAssetInstanceView *pFVar8;
  FScriptContainerElement *pFVar9;
  UPrimitiveComponent *pUVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>
  *pTVar15;
  longlong lVar16;
  FRenderAssetDesc *pFVar17;
  FElement *pFVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  float *pfVar22;
  uint uVar23;
  undefined8 *puVar24;
  float fVar25;
  FRenderAssetLinkConstIterator local_c0;
  TBoxSphereBounds<double,double> local_b0 [2];
  
  pFVar8 = (this->View).Reference;
  if (pFVar8 != (FRenderAssetInstanceView *)0x0) {
    if ((*(int *)&(pFVar8->CompiledRenderAssetMap).field_0x8 ==
         *(int *)&(pFVar8->CompiledRenderAssetMap).field_0x34) || (param_7 != (wchar_t *)0x0)) {
      local_c0.CurrElementIndex = -1;
      local_c0.State = pFVar8;
      pFVar17 = TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                ::Find((TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                        *)&pFVar8->RenderAssetMap,param_2);
      if (pFVar17 != (FRenderAssetDesc *)0x0) {
        iVar4 = pFVar17->HeadLink;
        while ((iVar4 != -1 &&
               (((param_1 != Texture || (*param_4 <= param_6 && param_6 != *param_4)) ||
                (param_7 != (wchar_t *)0x0))))) {
          local_c0.CurrElementIndex = iVar4;
          pFVar18 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                    ::operator[](&pFVar8->Elements,iVar4);
          if ((pFVar18->BoundsIndex < 0) ||
             ((this->BoundsViewInfo).ArrayNum <= pFVar18->BoundsIndex)) {
            bVar12 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<8264142433332232770>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                                ,0x242,"BoundsViewInfo.IsValidIndex(It.GetBoundsIndex())");
            if (bVar12) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
          }
          else {
            pFVar18 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                      ::operator[](&pFVar8->Elements,iVar4);
            uVar23 = pFVar18->BoundsIndex;
            uVar21 = 0;
            if ((int)uVar23 < (this->BoundsViewInfo).ArrayNum) {
              uVar21 = ~uVar23 >> 0x1f;
            }
            if ((uVar21 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar1 = (FBoundsViewInfo *)
                     ((this->BoundsViewInfo).AllocatorInstance.Data + (longlong)(int)uVar23 * 0xc);
            pFVar18 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                      ::operator[](&pFVar8->Elements,iVar4);
            bVar12 = pFVar18->bForceLoad;
            pFVar18 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                      ::operator[](&pFVar8->Elements,iVar4);
            fVar25 = pFVar18->TexelFactor;
            if (param_1 == Texture) {
              fVar25 = fVar25 * pFVar1->ComponentScale;
            }
            ProcessElement(param_1,pFVar1,fVar25,bVar12,param_3,param_4,param_5);
            if (param_7 != (wchar_t *)0x0) {
              fVar25 = pFVar1->MaxNormalizedSize_VisibleOnly;
              fVar6 = pFVar1->MaxNormalizedSize;
              FRenderAssetInstanceView::FRenderAssetLinkConstIterator::GetBounds(&local_c0,local_b0)
              ;
              pFVar18 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                        ::operator[](&pFVar8->Elements,iVar4);
              pUVar10 = pFVar18->Component;
              pFVar18 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                        ::operator[](&pFVar8->Elements,iVar4);
              bVar12 = pFVar18->bForceLoad;
              pFVar18 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                        ::operator[](&pFVar8->Elements,iVar4);
              fVar2 = pFVar18->TexelFactor;
              pFVar18 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                        ::operator[](&pFVar8->Elements,iVar4);
              FRenderAssetInstanceView::OutputToLog
                        (local_b0,pFVar18->BoundsIndex,&pFVar8->Bounds4,fVar2,bVar12,fVar6,fVar25,
                         param_7,pUVar10);
            }
          }
          pFVar18 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                    ::operator[](&pFVar8->Elements,iVar4);
          iVar4 = pFVar18->NextRenderAssetLink;
        }
      }
    }
    else {
      pTVar15 = TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)&pFVar8->CompiledRenderAssetMap,param_2);
      puVar20 = (undefined8 *)0x0;
      puVar19 = (undefined8 *)&pTVar15->field_0x8;
      if (pTVar15 ==
          (TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>
           *)0x0) {
        puVar19 = puVar20;
      }
      if (puVar19 != (undefined8 *)0x0) {
        iVar4 = *(int *)(puVar19 + 1);
        uVar23 = 0;
        puVar19 = (undefined8 *)*puVar19;
        if (0 < (longlong)iVar4) {
          pfVar22 = (float *)((longlong)puVar19 + 4);
          puVar24 = puVar20;
          do {
            uVar23 = (uint)puVar20;
            if (param_6 < *param_4 || param_6 == *param_4) break;
            fVar25 = pfVar22[-1];
            if (((int)fVar25 < 0) || ((this->BoundsViewInfo).ArrayNum <= (int)fVar25)) {
              bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<8264142433332232734>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                                  ,0x21e,"BoundsViewInfo.IsValidIndex(CompiledElement.BoundsIndex)")
              ;
              if (bVar12) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            else {
              if ((param_1 != Texture) && (*pfVar22 == 0.0)) {
                pFVar8 = (this->View).Reference;
                iVar5 = (pFVar8->Bounds4).ArrayNum;
                if ((int)fVar25 < iVar5 * 4) {
                  uVar14 = (int)((int)fVar25 + ((int)fVar25 >> 0x1f & 3U)) >> 2;
                  uVar21 = 0;
                  if ((int)uVar14 < iVar5) {
                    uVar21 = ~uVar14 >> 0x1f;
                  }
                  if ((uVar21 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  pFVar9 = (pFVar8->Bounds4).AllocatorInstance.Data;
                  uVar21 = (uint)pfVar22[-1] & 0x80000003;
                  if ((int)uVar21 < 0) {
                    uVar21 = (uVar21 - 1 | 0xfffffffc) + 1;
                  }
                  if ((3 < uVar21) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValidIndex(Index)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                                          ,0x319,L""), bVar12)) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                  fVar25 = *(float *)(pFVar9 + (longlong)(int)uVar21 * 4 +
                                               (longlong)(int)uVar14 * 0x150 + 0xf0);
                  *pfVar22 = fVar25 + fVar25;
                }
                else {
                  bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<8264142433332232739>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                                      ,0x223,"CompiledElement.BoundsIndex < View->NumBounds4() * 4")
                  ;
                  if (bVar12) {
                    pcVar11 = (code *)swi(3);
                    (*pcVar11)();
                    return;
                  }
                }
              }
              fVar6 = pfVar22[-1];
              bVar12 = *(bool *)(pfVar22 + 1);
              fVar25 = *pfVar22;
              uVar21 = 0;
              if ((int)fVar6 < (this->BoundsViewInfo).ArrayNum) {
                uVar21 = ~(uint)fVar6 >> 0x1f;
              }
              if ((uVar21 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              ProcessElement(param_1,(FBoundsViewInfo *)
                                     ((this->BoundsViewInfo).AllocatorInstance.Data +
                                     (longlong)(int)fVar6 * 0xc),fVar25,bVar12,param_3,param_4,
                             param_5);
            }
            uVar23 = uVar23 + 1;
            puVar20 = (undefined8 *)(ulonglong)uVar23;
            puVar24 = (undefined8 *)((longlong)puVar24 + 1);
            pfVar22 = pfVar22 + 3;
          } while ((longlong)puVar24 < (longlong)iVar4);
        }
        if ((param_6 < *param_4 || param_6 == *param_4) && (1 < (int)uVar23)) {
          uVar3 = *puVar19;
          uVar7 = *(undefined4 *)(puVar19 + 1);
          lVar16 = (longlong)(int)uVar23;
          *puVar19 = *(undefined8 *)((longlong)puVar19 + lVar16 * 0xc + -0xc);
          *(undefined4 *)(puVar19 + 1) = *(undefined4 *)((longlong)puVar19 + lVar16 * 0xc + -4);
          *(undefined8 *)((longlong)puVar19 + lVar16 * 0xc + -0xc) = uVar3;
          *(undefined4 *)((longlong)puVar19 + lVar16 * 0xc + -4) = uVar7;
        }
      }
    }
  }
  return;
}

// ProcessElement @ 14884f1a0

void __cdecl
FRenderAssetInstanceAsyncView::ProcessElement
          (EStreamableRenderAssetType param_1,FBoundsViewInfo *param_2,float param_3,bool param_4,
          float *param_5,float *param_6,int *param_7)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = __real_7f7fffff;
  if (param_3 == __real_7f7fffff) {
    fVar5 = __real_7f7fffff;
    if (param_2->MaxNormalizedSize <= 0.0) {
      fVar5 = *param_5;
    }
    *param_5 = fVar5;
    if (param_2->MaxNormalizedSize_VisibleOnly <= 0.0) {
      fVar4 = *param_6;
    }
    *param_6 = fVar4;
    return;
  }
  if (param_3 < 0.0) {
    if (param_1 == Texture) {
      fVar5 = (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000);
      fVar4 = *param_5;
      if (*param_5 <= fVar5) {
        fVar4 = fVar5;
      }
      *param_5 = fVar4;
      fVar4 = *param_6;
      if (*param_6 <= fVar5) {
        fVar4 = fVar5;
      }
      *param_6 = fVar4;
    }
    else {
      if ((1 < (byte)(param_1 - StaticMesh)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("AssetType == EStreamableRenderAssetType::StaticMesh || AssetType == EStreamableRenderAssetType::SkeletalMesh"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                             ,0x1f1,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar4 = (float)((uint)param_3 ^ __xmm_80000000800000008000000080000000);
      if ((__real_41000000 < fVar4) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("-TexelFactor <= (float)MAX_MESH_LOD_COUNT",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                             ,0x1f2,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = (int)fVar4;
      if (iVar3 < *param_7) {
        iVar3 = *param_7;
      }
      *param_7 = iVar3;
    }
    if ((param_4) &&
       ((0.0 < param_2->MaxNormalizedSize || (0.0 < param_2->MaxNormalizedSize_VisibleOnly)))) {
      *param_5 = 3.4028235e+38;
      *param_6 = 3.4028235e+38;
    }
  }
  else {
    fVar4 = param_3 * param_2->MaxNormalizedSize;
    if (fVar4 <= *param_5) {
      fVar4 = *param_5;
    }
    *param_5 = fVar4;
    fVar4 = param_3 * param_2->MaxNormalizedSize_VisibleOnly;
    if (fVar4 <= *param_6) {
      fVar4 = *param_6;
    }
    *param_6 = fVar4;
    if ((param_4) &&
       ((0.0 < param_2->MaxNormalizedSize || (0.0 < param_2->MaxNormalizedSize_VisibleOnly)))) {
      *param_5 = 3.4028235e+38;
    }
  }
  return;
}

// UpdateBoundSizes @ 1488605d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FRenderAssetInstanceAsyncView::UpdateBoundSizes
          (TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStreamingViewInfoExtra,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,float param_3,float param_4,FRenderAssetStreamingSettings *param_5,
          TArrayView<FBounds4_const_,int> *param_6,
          TArray<FBoundsViewInfo,TSizedDefaultAllocator<32>_> *param_7,float *param_8)

{
  int *piVar1;
  double *pdVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  FBounds4 *pFVar9;
  FScriptContainerElement *pFVar10;
  ForElementType<FStreamingViewInfoExtra> FVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  bool bVar83;
  bool bVar84;
  ForElementType<FStreamingViewInfoExtra> FVar85;
  uint uVar86;
  longlong lVar87;
  longlong lVar88;
  uint uVar89;
  double dVar90;
  double dVar104;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double dVar105;
  double dVar106;
  uint uVar113;
  uint uVar114;
  double dVar115;
  double dVar116;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  uint uVar118;
  double dVar117;
  double dVar119;
  double dVar120;
  undefined1 auVar121 [16];
  double dVar125;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  double dVar126;
  double dVar127;
  double dVar130;
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  double dVar131;
  undefined1 auVar132 [16];
  double dVar135;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  double dVar136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  double dVar139;
  double dVar140;
  double dVar144;
  undefined1 auVar141 [16];
  double dVar145;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  uint uVar146;
  uint uVar147;
  uint uVar148;
  uint uVar149;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined4 uVar152;
  undefined4 uVar153;
  undefined4 uVar154;
  undefined4 uVar155;
  undefined4 uVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
  undefined4 uVar161;
  undefined4 uVar162;
  undefined4 uVar163;
  undefined4 uVar164;
  undefined4 uVar165;
  undefined4 uVar166;
  undefined4 uVar167;
  undefined4 uVar168;
  uint local_3b8;
  uint local_3b4;
  longlong local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined1 local_388 [16];
  undefined1 local_378 [144];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  double dStack_f0;
  double dStack_e0;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    bVar83 = ::FDebug::CheckVerifyFailedImpl2
                       ("ViewInfos.Num() == ViewInfoExtras.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                        ,0x12f,L"");
    if (bVar83) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar7 = param_1->ArrayNum;
  iVar8 = param_6->ArrayNum;
  local_398 = (longlong)iVar8;
  if ((FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager == 0) ||
     (bVar83 = false,
     FSimpleStreamableAssetManager::GSimpleStreamableAssetManagerConsiderVisibility != 0)) {
    bVar83 = true;
  }
  uVar86 = iVar8 * 4;
  if (-1 < (int)uVar86) {
    piVar1 = &param_7->ArrayMax;
    param_7->ArrayNum = 0;
    if (*piVar1 != uVar86) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar86,&param_7->AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar86,&param_7->AllocatorInstance,&param_7->ArrayNum,piVar1);
    local_388 = ZEXT816(0);
    local_3b8 = 0;
    local_378._0_16_ = ZEXT816(0);
    dVar136 = 0.0;
    dVar117 = 0.0;
    dVar120 = 0.0;
    dVar126 = 0.0;
    if (0 < iVar8) {
      local_3a0 = 0;
      local_3b4 = 0;
      local_3a8 = 0;
      do {
        dVar117 = 0.0;
        dVar136 = 0.0;
        uVar86 = 0;
        if ((int)local_3b8 < param_6->ArrayNum) {
          uVar86 = ~local_3b8 >> 0x1f;
        }
        if (uVar86 == 0) {
          bVar84 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar84) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        pFVar9 = param_6->DataPtr;
        uVar86 = 0;
        uVar113 = 0;
        uVar114 = 0;
        uVar118 = 0;
        local_2d8 = ZEXT816(0) << 0x40;
        pdVar2 = (double *)((longlong)&(pFVar9->OriginX).field0_0x0 + local_3a8);
        dVar120 = *pdVar2;
        dVar126 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->OriginX).field0_0x0 + local_3a8 + 0x10);
        dVar49 = *pdVar2;
        dVar50 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->OriginY).field0_0x0 + local_3a8);
        dVar51 = *pdVar2;
        dVar52 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->OriginY).field0_0x0 + local_3a8 + 0x10);
        dVar53 = *pdVar2;
        dVar54 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->OriginZ).field0_0x0 + local_3a8);
        dVar55 = *pdVar2;
        dVar56 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->OriginZ).field0_0x0 + local_3a8 + 0x10);
        dVar57 = *pdVar2;
        dVar58 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->RangeOriginX).field0_0x0 + local_3a8);
        dVar59 = *pdVar2;
        dVar60 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->RangeOriginX).field0_0x0 + local_3a8 + 0x10);
        dVar61 = *pdVar2;
        dVar62 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->RangeOriginY).field0_0x0 + local_3a8);
        dVar63 = *pdVar2;
        dVar64 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->RangeOriginY).field0_0x0 + local_3a8 + 0x10);
        dVar65 = *pdVar2;
        dVar66 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->RangeOriginZ).field0_0x0 + local_3a8);
        dVar67 = *pdVar2;
        dVar68 = pdVar2[1];
        pdVar2 = (double *)((longlong)&(pFVar9->RangeOriginZ).field0_0x0 + local_3a8 + 0x10);
        dVar69 = *pdVar2;
        dVar70 = pdVar2[1];
        pfVar3 = (float *)((longlong)&(pFVar9->ExtentX).field0_0x0 + local_3a8);
        fVar18 = *pfVar3;
        fVar20 = pfVar3[1];
        fVar21 = pfVar3[2];
        fVar22 = pfVar3[3];
        pfVar3 = (float *)((longlong)&(pFVar9->ExtentY).field0_0x0 + local_3a8);
        fVar23 = *pfVar3;
        fVar24 = pfVar3[1];
        fVar25 = pfVar3[2];
        fVar26 = pfVar3[3];
        pfVar3 = (float *)((longlong)&(pFVar9->ExtentZ).field0_0x0 + local_3a8);
        dVar105 = (double)*pfVar3;
        dVar115 = (double)pfVar3[1];
        dVar90 = (double)pfVar3[2];
        dVar104 = (double)pfVar3[3];
        pfVar3 = (float *)((longlong)&(pFVar9->RadiusOrComponentScale).field0_0x0 + local_3a8);
        fVar27 = *pfVar3;
        fVar28 = pfVar3[2];
        dStack_f0 = (double)pfVar3[1];
        dStack_e0 = (double)pfVar3[3];
        pfVar3 = (float *)((longlong)&(pFVar9->PackedRelativeBox).field0_0x0 + local_3a8);
        fVar29 = *pfVar3;
        fVar30 = pfVar3[1];
        fVar31 = pfVar3[2];
        fVar32 = pfVar3[3];
        pfVar3 = (float *)((longlong)&(pFVar9->MinDistanceSq).field0_0x0 + local_3a8);
        fVar33 = *pfVar3;
        fVar34 = pfVar3[1];
        fVar35 = pfVar3[2];
        fVar36 = pfVar3[3];
        pfVar3 = (float *)((longlong)&(pFVar9->MinRangeSq).field0_0x0 + local_3a8);
        fVar37 = *pfVar3;
        fVar38 = pfVar3[1];
        fVar39 = pfVar3[2];
        fVar40 = pfVar3[3];
        pfVar3 = (float *)((longlong)&(pFVar9->MaxRangeSq).field0_0x0 + local_3a8);
        fVar41 = *pfVar3;
        fVar42 = pfVar3[1];
        fVar43 = pfVar3[2];
        fVar44 = pfVar3[3];
        pfVar3 = (float *)((longlong)&(pFVar9->LastRenderTime).field0_0x0 + local_3a8);
        fVar45 = *pfVar3;
        fVar46 = pfVar3[1];
        fVar47 = pfVar3[2];
        fVar48 = pfVar3[3];
        auVar15._8_4_ = SUB84(dStack_f0,0);
        auVar15._0_8_ = (double)fVar27;
        auVar15._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
        auVar16._8_4_ = SUB84(dStack_e0,0);
        auVar16._0_8_ = (double)fVar28;
        auVar16._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
        uVar89 = 0;
        lVar88 = 0;
        local_2c8 = ZEXT816(0) << 0x40;
        uVar146 = uVar86;
        uVar147 = uVar113;
        uVar148 = uVar114;
        uVar149 = uVar118;
        if (0 < (longlong)iVar7) {
          uVar161 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
          uVar162 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
          uVar163 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._0_4_;
          uVar164 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._4_4_;
          uVar165 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
          uVar166 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
          uVar167 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
          uVar168 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
          lVar87 = 0;
          fVar157 = GlobalVectorConstants::FloatOne.m128_f32[0];
          fVar158 = GlobalVectorConstants::FloatOne.m128_f32[1];
          fVar159 = GlobalVectorConstants::FloatOne.m128_f32[2];
          fVar160 = GlobalVectorConstants::FloatOne.m128_f32[3];
          local_2e8 = ZEXT816(0);
          local_2c8 = ZEXT816(0) << 0x40;
          do {
            uVar146 = 0;
            if ((int)uVar89 < param_1->ArrayNum) {
              uVar146 = ~uVar89 >> 0x1f;
            }
            if (uVar146 == 0) {
              bVar84 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar84) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              fVar157 = GlobalVectorConstants::FloatOne.m128_f32[0];
              fVar158 = GlobalVectorConstants::FloatOne.m128_f32[1];
              fVar159 = GlobalVectorConstants::FloatOne.m128_f32[2];
              fVar160 = GlobalVectorConstants::FloatOne.m128_f32[3];
              uVar165 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
              uVar166 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
              uVar167 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
              uVar168 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
              uVar161 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
              uVar162 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
              uVar163 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._0_4_;
              uVar164 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._4_4_;
            }
            pFVar10 = (param_1->AllocatorInstance).Data;
            uVar146 = 0;
            if ((int)uVar89 < param_2->ArrayNum) {
              uVar146 = ~uVar89 >> 0x1f;
            }
            if (uVar146 == 0) {
              bVar84 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar84) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              fVar157 = GlobalVectorConstants::FloatOne.m128_f32[0];
              fVar158 = GlobalVectorConstants::FloatOne.m128_f32[1];
              fVar159 = GlobalVectorConstants::FloatOne.m128_f32[2];
              fVar160 = GlobalVectorConstants::FloatOne.m128_f32[3];
              uVar165 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._0_4_;
              uVar166 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[0]._4_4_;
              uVar167 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._0_4_;
              uVar168 = GlobalVectorConstants::DoubleOne.XY.m128d_f64[1]._4_4_;
              uVar161 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._0_4_;
              uVar162 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0]._4_4_;
              uVar163 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._0_4_;
              uVar164 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1]._4_4_;
            }
            FVar11 = (param_2->AllocatorInstance).SecondaryData;
            dVar136 = *(double *)(pFVar10 + lVar87 + 8);
            dVar117 = *(double *)(pFVar10 + lVar87);
            dVar6 = *(double *)(pFVar10 + lVar87 + 0x10);
            FVar85 = (ForElementType<FStreamingViewInfoExtra>)param_2;
            if (FVar11 != (ForElementType<FStreamingViewInfoExtra>)0x0) {
              FVar85 = FVar11;
            }
            uVar152 = (undefined4)((ulonglong)dVar136 >> 0x20);
            uVar153 = SUB84(dVar117,0);
            uVar154 = (undefined4)((ulonglong)dVar117 >> 0x20);
            fVar4 = *(float *)((longlong)FVar85 + lVar88 * 8);
            auVar134._8_4_ = SUB84(dVar136,0);
            auVar134._0_8_ = dVar136;
            auVar134._12_4_ = uVar152;
            auVar109._8_4_ = uVar153;
            auVar109._0_8_ = dVar117;
            auVar109._12_4_ = uVar154;
            dVar119 = dVar136 - dVar51;
            dVar125 = dVar136 - dVar52;
            dVar139 = dVar136 - dVar53;
            dVar144 = auVar134._8_8_ - dVar54;
            fVar5 = *(float *)((uchar *)((longlong)FVar85 + 4) + lVar88 * 8);
            uVar155 = SUB84(dVar6,0);
            uVar156 = (undefined4)((ulonglong)dVar6 >> 0x20);
            auVar92._8_4_ = uVar155;
            auVar92._0_8_ = dVar6;
            auVar92._12_4_ = uVar156;
            if (param_5->bUseNewMetrics == false) {
              dVar140 = dVar117 - dVar120;
              dVar145 = auVar109._8_8_ - dVar126;
              dVar127 = dVar6 - dVar55;
              dVar130 = auVar92._8_8_ - dVar56;
              auVar123._8_4_ = uVar153;
              auVar123._0_8_ = dVar117;
              auVar123._12_4_ = uVar154;
              auVar98._8_4_ = uVar155;
              auVar98._0_8_ = dVar6;
              auVar98._12_4_ = uVar156;
              dVar106 = dVar6 - dVar57;
              dVar116 = auVar98._8_8_ - dVar58;
              dVar131 = dVar117 - dVar49;
              dVar135 = auVar123._8_8_ - dVar50;
              auVar142._0_8_ =
                   (dVar139 * dVar139 + dVar131 * dVar131 + dVar106 * dVar106) - dVar90 * dVar90;
              auVar142._8_8_ =
                   (dVar144 * dVar144 + dVar135 * dVar135 + dVar116 * dVar116) - dVar104 * dVar104;
              dVar119 = (dVar119 * dVar119 + dVar140 * dVar140 + dVar127 * dVar127) -
                        dVar105 * dVar105;
              dVar125 = (dVar125 * dVar125 + dVar145 * dVar145 + dVar130 * dVar130) -
                        dVar115 * dVar115;
            }
            else {
              auVar132._8_4_ = uVar153;
              auVar132._0_8_ = dVar117;
              auVar132._12_4_ = uVar154;
              dVar131 = dVar117 - dVar120;
              dVar135 = auVar132._8_8_ - dVar126;
              dVar127 = dVar117 - dVar49;
              dVar130 = auVar109._8_8_ - dVar50;
              dVar106 = dVar6 - dVar57;
              dVar116 = auVar92._8_8_ - dVar58;
              uVar146 = SUB84(dVar119,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
              uVar147 = (uint)((ulonglong)dVar119 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
              uVar148 = SUB84(dVar125,0) & _UNK_15061cc88;
              uVar149 = (uint)((ulonglong)dVar125 >> 0x20) & _UNK_15061cc8c;
              auVar141._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar139 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar139,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
              ;
              auVar141._8_4_ = SUB84(dVar144,0) & _UNK_15061cc88;
              auVar141._12_4_ = (uint)((ulonglong)dVar144 >> 0x20) & _UNK_15061cc8c;
              auVar133._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar131 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar131,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
              ;
              auVar133._8_4_ = SUB84(dVar135,0) & _UNK_15061cc88;
              auVar133._12_4_ = (uint)((ulonglong)dVar135 >> 0x20) & _UNK_15061cc8c;
              auVar128._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar127 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar127,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
              ;
              auVar128._8_4_ = SUB84(dVar130,0) & _UNK_15061cc88;
              auVar128._12_4_ = (uint)((ulonglong)dVar130 >> 0x20) & _UNK_15061cc8c;
              auVar91._8_4_ = auVar133._8_4_;
              auVar91._0_8_ = auVar133._0_8_;
              auVar91._12_4_ = auVar133._12_4_;
              auVar107._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar106 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar106,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
              ;
              auVar107._8_4_ = SUB84(dVar116,0) & _UNK_15061cc88;
              auVar107._12_4_ = (uint)((ulonglong)dVar116 >> 0x20) & _UNK_15061cc8c;
              auVar73._8_8_ = (double)fVar20;
              auVar73._0_8_ = (double)fVar18;
              auVar92 = minpd(auVar91,auVar73);
              auVar121._8_4_ = uVar155;
              auVar121._0_8_ = dVar6;
              auVar121._12_4_ = uVar156;
              dVar119 = dVar6 - dVar55;
              dVar125 = auVar121._8_8_ - dVar56;
              dVar131 = auVar133._0_8_ - auVar92._0_8_;
              dVar135 = auVar133._8_8_ - auVar92._8_8_;
              auVar93._8_4_ = auVar128._8_4_;
              auVar93._0_8_ = auVar128._0_8_;
              auVar93._12_4_ = auVar128._12_4_;
              auVar122._0_8_ =
                   (double)CONCAT44((uint)((ulonglong)dVar119 >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar119,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
              ;
              auVar122._8_4_ = SUB84(dVar125,0) & _UNK_15061cc88;
              auVar122._12_4_ = (uint)((ulonglong)dVar125 >> 0x20) & _UNK_15061cc8c;
              auVar74._8_8_ = (double)fVar22;
              auVar74._0_8_ = (double)fVar21;
              auVar92 = minpd(auVar93,auVar74);
              dVar127 = auVar128._0_8_ - auVar92._0_8_;
              dVar130 = auVar128._8_8_ - auVar92._8_8_;
              auVar94._4_4_ = uVar147;
              auVar94._0_4_ = uVar146;
              auVar94._8_4_ = uVar148;
              auVar94._12_4_ = uVar149;
              auVar75._8_8_ = (double)fVar24;
              auVar75._0_8_ = (double)fVar23;
              auVar92 = minpd(auVar94,auVar75);
              dVar119 = (double)CONCAT44(uVar147,uVar146) - auVar92._0_8_;
              dVar125 = (double)CONCAT44(uVar149,uVar148) - auVar92._8_8_;
              auVar95._8_4_ = auVar141._8_4_;
              auVar95._0_8_ = auVar141._0_8_;
              auVar95._12_4_ = auVar141._12_4_;
              auVar76._8_8_ = (double)fVar26;
              auVar76._0_8_ = (double)fVar25;
              auVar92 = minpd(auVar95,auVar76);
              dVar140 = auVar141._0_8_ - auVar92._0_8_;
              dVar145 = auVar141._8_8_ - auVar92._8_8_;
              auVar96._8_4_ = auVar122._8_4_;
              auVar96._0_8_ = auVar122._0_8_;
              auVar96._12_4_ = auVar122._12_4_;
              auVar72._8_8_ = dVar115;
              auVar72._0_8_ = dVar105;
              auVar92 = minpd(auVar96,auVar72);
              dVar106 = auVar122._0_8_ - auVar92._0_8_;
              dVar116 = auVar122._8_8_ - auVar92._8_8_;
              auVar97._8_4_ = auVar107._8_4_;
              auVar97._0_8_ = auVar107._0_8_;
              auVar97._12_4_ = auVar107._12_4_;
              auVar71._8_8_ = dVar104;
              auVar71._0_8_ = dVar90;
              auVar92 = minpd(auVar97,auVar71);
              dVar139 = auVar107._0_8_ - auVar92._0_8_;
              dVar144 = auVar107._8_8_ - auVar92._8_8_;
              auVar142._0_8_ = dVar140 * dVar140 + dVar127 * dVar127 + dVar139 * dVar139;
              auVar142._8_8_ = dVar145 * dVar145 + dVar130 * dVar130 + dVar144 * dVar144;
              dVar119 = dVar119 * dVar119 + dVar131 * dVar131 + dVar106 * dVar106;
              dVar125 = dVar125 * dVar125 + dVar135 * dVar135 + dVar116 * dVar116;
            }
            auVar137._8_4_ = SUB84(dVar136,0);
            auVar137._0_8_ = dVar136;
            auVar137._12_4_ = uVar152;
            dVar139 = dVar136 - dVar65;
            dVar144 = dVar136 - dVar66;
            dVar136 = dVar136 - dVar63;
            dVar140 = auVar137._8_8_ - dVar64;
            auVar78._8_8_ = (double)fVar44;
            auVar78._0_8_ = (double)fVar43;
            auVar108._8_4_ = uVar153;
            auVar108._0_8_ = dVar117;
            auVar108._12_4_ = uVar154;
            dVar131 = dVar117 - dVar59;
            dVar135 = auVar108._8_8_ - dVar60;
            dVar106 = dVar117 - dVar61;
            dVar117 = dVar117 - dVar62;
            auVar99._8_4_ = uVar155;
            auVar99._0_8_ = dVar6;
            auVar99._12_4_ = uVar156;
            auVar129._4_4_ = uVar166;
            auVar129._0_4_ = uVar165;
            auVar129._8_4_ = uVar167;
            auVar129._12_4_ = uVar168;
            dVar127 = dVar6 - dVar67;
            dVar130 = auVar99._8_8_ - dVar68;
            dVar116 = dVar6 - dVar69;
            dVar6 = dVar6 - dVar70;
            auVar79._8_8_ = (double)fVar34;
            auVar79._0_8_ = (double)fVar33;
            auVar124._4_4_ = uVar162;
            auVar124._0_4_ = uVar161;
            auVar124._8_4_ = uVar163;
            auVar124._12_4_ = uVar164;
            auVar138._0_8_ = dVar136 * dVar136 + dVar131 * dVar131 + dVar127 * dVar127;
            auVar138._8_8_ = dVar140 * dVar140 + dVar135 * dVar135 + dVar130 * dVar130;
            auVar77._8_8_ = (double)fVar40;
            auVar77._0_8_ = (double)fVar39;
            auVar13._8_4_ = SUB84(dVar125,0);
            auVar13._0_8_ = dVar119;
            auVar13._12_4_ = (int)((ulonglong)dVar125 >> 0x20);
            auVar109 = maxpd(auVar79,auVar13);
            dVar119 = dVar139 * dVar139 + dVar106 * dVar106 + dVar116 * dVar116;
            dVar6 = dVar144 * dVar144 + dVar117 * dVar117 + dVar6 * dVar6;
            auVar14._8_4_ = SUB84(dVar6,0);
            auVar14._0_8_ = dVar119;
            auVar14._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
            auVar92 = maxpd(auVar77,auVar14);
            auVar134 = minpd(auVar78,auVar92);
            auVar100._0_8_ = (double)fVar157;
            auVar100._8_8_ = (double)fVar158;
            auVar92 = maxpd(auVar109,auVar100);
            auVar92 = sqrtpd(auVar92,auVar92);
            auVar92 = divpd(auVar129,auVar92);
            auVar80._8_8_ = (double)fVar36;
            auVar80._0_8_ = (double)fVar35;
            dVar144 = auVar92._0_8_ * (double)fVar4;
            dVar106 = auVar92._8_8_ * (double)fVar4;
            auVar92 = maxpd(auVar80,auVar142);
            auVar101._0_8_ = (double)fVar159;
            auVar101._8_8_ = (double)fVar160;
            auVar92 = maxpd(auVar92,auVar101);
            local_1b8 = (uint)-(ulonglong)(fVar29 != 0.0);
            uStack_1b4 = (uint)(-(ulonglong)(fVar29 != 0.0) >> 0x20);
            uStack_1b0 = (uint)-(ulonglong)(fVar30 != 0.0);
            uStack_1ac = (uint)(-(ulonglong)(fVar30 != 0.0) >> 0x20);
            auVar92 = sqrtpd(auVar92,auVar92);
            auVar92 = divpd(auVar124,auVar92);
            auVar110._8_4_ = SUB84(dVar106,0);
            auVar110._0_8_ = dVar144;
            auVar110._12_4_ = (int)((ulonglong)dVar106 >> 0x20);
            local_2e8 = maxpd(auVar110,local_2e8);
            dVar125 = auVar92._0_8_ * (double)fVar4;
            dVar139 = auVar92._8_8_ * (double)fVar4;
            uVar146 = local_2e8._0_4_;
            auVar102._0_4_ = local_1b8 & uVar146;
            uVar147 = local_2e8._4_4_;
            auVar102._4_4_ = uStack_1b4 & uVar147;
            uVar148 = local_2e8._8_4_;
            auVar102._8_4_ = uStack_1b0 & uVar148;
            uVar149 = local_2e8._12_4_;
            auVar102._12_4_ = uStack_1ac & uVar149;
            auVar143._8_4_ = SUB84(dVar139,0);
            auVar143._0_8_ = dVar125;
            auVar143._12_4_ = (int)((ulonglong)dVar139 >> 0x20);
            local_2d8 = maxpd(auVar143,local_2d8);
            local_388 = maxpd(local_388,auVar102);
            dVar136 = local_2d8._0_8_;
            dVar117 = local_2d8._8_8_;
            auVar103._0_4_ = (uint)-(ulonglong)(fVar31 != 0.0) & local_2d8._0_4_;
            auVar103._4_4_ = (uint)(-(ulonglong)(fVar31 != 0.0) >> 0x20) & local_2d8._4_4_;
            auVar103._8_4_ = (uint)-(ulonglong)(fVar32 != 0.0) & local_2d8._8_4_;
            auVar103._12_4_ = (uint)(-(ulonglong)(fVar32 != 0.0) >> 0x20) & local_2d8._12_4_;
            local_378._0_16_ = maxpd(local_378._0_16_,auVar103 | ZEXT816(0));
            auVar81._8_8_ = (double)fVar38;
            auVar81._0_8_ = (double)fVar37;
            auVar82._8_8_ = (double)fVar42;
            auVar82._0_8_ = (double)fVar41;
            auVar92 = maxpd(auVar81,auVar138);
            auVar92 = minpd(auVar82,auVar92);
            auVar150._0_8_ =
                 -(ulonglong)(auVar134._0_8_ == dVar119) & (ulonglong)((double)fVar5 * dVar125);
            uVar19 = -(ulonglong)(auVar134._8_8_ == dVar6) & (ulonglong)((double)fVar5 * dVar139);
            auVar150._8_4_ = (undefined4)uVar19;
            auVar150._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar111._0_8_ =
                 (ulonglong)((double)fVar5 * dVar144) &
                 -(ulonglong)(auVar92._0_8_ == auVar138._0_8_);
            uVar19 = (ulonglong)((double)fVar5 * dVar106) &
                     -(ulonglong)(auVar92._8_8_ == auVar138._8_8_);
            auVar111._8_4_ = (undefined4)uVar19;
            auVar111._12_4_ = (undefined4)(uVar19 >> 0x20);
            auVar150 = auVar150 | ZEXT816(0);
            auVar112 = auVar111;
            if (bVar83) {
              auVar151._0_4_ = auVar150._0_4_ & (uint)-(ulonglong)(param_3 < fVar47);
              auVar151._4_4_ = auVar150._4_4_ & (uint)(-(ulonglong)(param_3 < fVar47) >> 0x20);
              auVar151._8_4_ = auVar150._8_4_ & (uint)-(ulonglong)(param_3 < fVar48);
              auVar151._12_4_ = auVar150._12_4_ & (uint)(-(ulonglong)(param_3 < fVar48) >> 0x20);
              auVar150 = auVar151 | ZEXT816(0);
              auVar112._0_4_ = (uint)auVar111._0_8_ & (uint)-(ulonglong)(param_3 < fVar45);
              auVar112._4_4_ =
                   (uint)(auVar111._0_8_ >> 0x20) & (uint)(-(ulonglong)(param_3 < fVar45) >> 0x20);
              uVar19 = -(ulonglong)(param_3 < fVar46) & uVar19;
              auVar112._8_4_ = (undefined4)uVar19;
              auVar112._12_4_ = (undefined4)(uVar19 >> 0x20);
            }
            local_2c8 = maxpd(auVar150,local_2c8);
            uVar89 = uVar89 + 1;
            lVar88 = lVar88 + 1;
            lVar87 = lVar87 + 0x40;
            auVar17._4_4_ = uVar113;
            auVar17._0_4_ = uVar86;
            auVar17._8_4_ = uVar114;
            auVar17._12_4_ = uVar118;
            auVar92 = maxpd(auVar112,auVar17);
            uVar86 = auVar92._0_4_;
            uVar113 = auVar92._4_4_;
            uVar114 = auVar92._8_4_;
            uVar118 = auVar92._12_4_;
          } while (lVar88 < iVar7);
          dStack_f0 = auVar15._8_8_;
          dStack_e0 = auVar16._8_8_;
        }
        uVar89 = 0;
        if ((int)local_3b4 < param_7->ArrayNum) {
          uVar89 = ~local_3b4 >> 0x1f;
        }
        if (uVar89 == 0) {
          bVar84 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar84) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        pFVar10 = (param_7->AllocatorInstance).Data;
        local_3b8 = local_3b8 + 1;
        local_3b4 = local_3b4 + 4;
        local_3a8 = local_3a8 + 0x150;
        *(float *)(pFVar10 + local_3a0) = (float)(double)CONCAT44(uVar147,uVar146);
        *(float *)(pFVar10 + local_3a0 + 4) = (float)(double)CONCAT44(uVar113,uVar86);
        *(float *)(pFVar10 + local_3a0 + 8) = fVar27;
        *(float *)(pFVar10 + local_3a0 + 0xc) = (float)(double)CONCAT44(uVar149,uVar148);
        *(float *)(pFVar10 + local_3a0 + 0x10) = (float)(double)CONCAT44(uVar118,uVar114);
        *(float *)(pFVar10 + local_3a0 + 0x14) = (float)dStack_f0;
        *(float *)(pFVar10 + local_3a0 + 0x18) = (float)dVar136;
        *(float *)(pFVar10 + local_3a0 + 0x28) = (float)local_2c8._8_8_;
        *(float *)(pFVar10 + local_3a0 + 0x1c) = (float)local_2c8._0_8_;
        *(float *)(pFVar10 + local_3a0 + 0x20) = fVar28;
        *(float *)(pFVar10 + local_3a0 + 0x24) = (float)dVar117;
        *(float *)(pFVar10 + local_3a0 + 0x2c) = (float)dStack_e0;
        local_3a0 = local_3a0 + 0x30;
        local_398 = local_398 + -1;
      } while (local_398 != 0);
      dVar136 = (double)local_388._0_8_;
      dVar117 = (double)local_388._8_8_;
      dVar120 = (double)local_378._0_8_;
      dVar126 = (double)local_378._8_8_;
    }
    if (0.0 < param_5->MinLevelRenderAssetScreenSize) {
      fVar18 = (float)dVar136;
      if ((float)dVar136 <= (float)dVar117) {
        fVar18 = (float)dVar117;
      }
      if (fVar18 <= (float)dVar120) {
        fVar18 = (float)dVar120;
      }
      if (fVar18 <= (float)dVar126) {
        fVar18 = (float)dVar126;
      }
      *param_8 = fVar18 * param_4;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar86);
}

// UpdateBoundSizes_Async @ 148861180

void __thiscall
FRenderAssetInstanceAsyncView::UpdateBoundSizes_Async
          (FRenderAssetInstanceAsyncView *this,
          TArray<FStreamingViewInfo,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FStreamingViewInfoExtra,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,float param_3,FRenderAssetStreamingSettings *param_4)

{
  int iVar1;
  FRenderAssetInstanceView *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<FBounds4_const_,int> local_28 [2];
  
  pFVar2 = (this->View).Reference;
  if (pFVar2 != (FRenderAssetInstanceView *)0x0) {
    local_28[0].DataPtr = (FBounds4 *)(pFVar2->Bounds4).AllocatorInstance.Data;
    iVar1 = (pFVar2->Bounds4).ArrayNum;
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
    local_28[0].ArrayNum = iVar1;
    UpdateBoundSizes(param_1,param_2,param_3,((this->View).Reference)->MaxTexelFactor,param_4,
                     local_28,&this->BoundsViewInfo,&this->MaxLevelRenderAssetScreenSize);
  }
  return;
}

