// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator() @ 148810ff0

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
RenderAssetInstanceTask::FNormalizeLightmapTexelFactor::operator()
          (FNormalizeLightmapTexelFactor *this,bool param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  UStreamableRenderAsset *pUVar4;
  FRenderAssetInstanceState *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FRenderAssetDesc *pFVar14;
  FElement *pFVar15;
  uint uVar16;
  float fVar17;
  FIdentityFunctor local_res8 [8];
  float local_b8 [2];
  ForAnyElementType local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_98 [3];
  
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  FRenderAssetInstanceView::FRenderAssetIterator::FRenderAssetIterator
            ((FRenderAssetIterator *)&local_a0,(FRenderAssetInstanceView *)(this->State).Reference);
  fVar9 = __real_3ecccccd;
  fVar8 = __real_3fcccccd;
  fVar7 = __real_3f000000;
  if (local_98[0].CurrentBitIndex < (local_98[0].Array)->NumBits) {
    do {
      lVar10 = local_a8;
      iVar3 = *(int *)(*local_a0 + 0xc + (longlong)local_98[0].CurrentBitIndex * 0x18);
      pUVar4 = *(UStreamableRenderAsset **)
                (*local_a0 + (longlong)local_98[0].CurrentBitIndex * 0x18);
      if ((iVar3 == 0x11) || (iVar3 == 0x16)) {
        uVar13 = local_a8._4_4_;
        local_a8 = (ulonglong)local_a8._4_4_ << 0x20;
        if ((lVar10 < 0) && (uVar13 != 0)) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_b0,0,(int *)((longlong)&local_a8 + 4));
        }
        pFVar5 = (this->State).Reference;
        pFVar14 = TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                  ::Find((TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                          *)&pFVar5->_padding_,pUVar4);
        if (pFVar14 != (FRenderAssetDesc *)0x0) {
          iVar3 = pFVar14->HeadLink;
          while (iVar3 != -1) {
            pFVar15 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                      ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                                    *)&pFVar5->_padding_,iVar3);
            local_b8[0] = pFVar15->TexelFactor;
            if (((local_b0.Data <= (FScriptContainerElement *)local_b8) &&
                ((FScriptContainerElement *)local_b8 <
                 local_b0.Data + (longlong)(int)local_a8._4_4_ * 4)) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iVar12 = (int)local_a8;
            if ((int)local_a8 == local_a8._4_4_) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_b0,(int *)((longlong)&local_a8 + 4));
            }
            local_a8 = CONCAT44(local_a8._4_4_,iVar12 + 1);
            *(float *)(local_b0.Data + (longlong)iVar12 * 4) = local_b8[0];
            pFVar15 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                      ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                                    *)&pFVar5->_padding_,iVar3);
            iVar3 = pFVar15->NextRenderAssetLink;
          }
        }
        AlgoImpl::
        IntroSortInternal<float,int,FIdentityFunctor,TDereferenceWrapper<float,TLess<void>_>_>
                  ((float *)local_b0.Data,(int)local_a8,local_res8[0],(TLess<void> *)local_res8);
        uVar16 = (int)ROUND((float)(int)local_a8 * fVar9 - fVar7) >> 1;
        uVar13 = 0;
        if ((int)uVar16 < (int)local_a8) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if (uVar13 == 0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar11) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        fVar1 = *(float *)(local_b0.Data + (longlong)(int)uVar16 * 4);
        uVar16 = (int)ROUND((float)(int)local_a8 * fVar8 - fVar7) >> 1;
        uVar13 = 0;
        if ((int)uVar16 < (int)local_a8) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->State).Reference;
        fVar2 = *(float *)(local_b0.Data + (longlong)(int)uVar16 * 4);
        pFVar14 = TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                  ::Find((TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                          *)&pFVar5->_padding_,pUVar4);
        if (pFVar14 != (FRenderAssetDesc *)0x0) {
          iVar3 = pFVar14->HeadLink;
          while (iVar3 != -1) {
            pFVar15 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                      ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                                    *)&pFVar5->_padding_,iVar3);
            fVar17 = pFVar15->TexelFactor;
            if (fVar2 <= pFVar15->TexelFactor) {
              fVar17 = fVar2;
            }
            if (fVar17 <= fVar1) {
              fVar17 = fVar1;
            }
            pFVar15->TexelFactor = fVar17;
            pFVar15 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                      ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                                    *)&pFVar5->_padding_,iVar3);
            iVar3 = pFVar15->NextRenderAssetLink;
          }
        }
      }
      local_98[0].UnvisitedBitMask = local_98[0].UnvisitedBitMask & ~local_98[0]._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(local_98);
    } while (local_98[0].CurrentBitIndex < (local_98[0].Array)->NumBits);
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  return;
}

