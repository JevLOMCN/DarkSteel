// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 34

// FRenderAssetInstanceState @ 148805d80

FRenderAssetInstanceState * __thiscall
FRenderAssetInstanceState::FRenderAssetInstanceState(FRenderAssetInstanceState *this,bool param_1)

{
  FRenderAssetInstanceView::FRenderAssetInstanceView((FRenderAssetInstanceView *)this);
  this->bIsDynamicInstanceState = param_1;
  this->_padding_ = (longlong)&___7FRenderAssetInstanceState__6B_;
  (this->Bounds4Components).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Bounds4Components).ArrayNum = 0;
  (this->Bounds4Components).ArrayMax = 0;
  (this->FreeBoundIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeBoundIndices).ArrayNum = 0;
  (this->FreeBoundIndices).ArrayMax = 0;
  (this->FreeElementIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeElementIndices).ArrayNum = 0;
  (this->FreeElementIndices).ArrayMax = 0;
  (this->BoundsToUnpack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundsToUnpack).ArrayNum = 0;
  (this->BoundsToUnpack).ArrayMax = 0;
  (this->PendingRemoveComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingRemoveComponents).ArrayNum = 0;
  (this->PendingRemoveComponents).ArrayMax = 0;
  *(undefined8 *)&this->ComponentMap = 0;
  *(undefined8 *)&(this->ComponentMap).field_0x8 = 0;
  *(undefined8 *)&(this->ComponentMap).field_0x20 = 0;
  *(undefined4 *)&(this->ComponentMap).field_0x28 = 0;
  *(undefined4 *)&(this->ComponentMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComponentMap).field_0x34 = 0;
  *(undefined4 *)&(this->ComponentMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ComponentMap).field_0x40 = 0;
  *(undefined4 *)&(this->ComponentMap).field_0x48 = 0;
  return this;
}

// operator() @ 14880ebc0

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
`FRenderAssetInstanceState::CompileElements'::__l2::<lambda_1>::operator()
          (void *this,FCompileElementsContext *param_1,int param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  UStreamableRenderAsset *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  UClass *pUVar14;
  TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>
  *pTVar15;
  FRenderAssetDesc *pFVar16;
  FElement *pFVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *this_00;
  float fVar22;
  
  plVar5 = *(longlong **)((longlong)this + 8);
  uVar19 = 0;
  if (param_2 < (int)plVar5[1]) {
    uVar19 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar6 = *(UStreamableRenderAsset **)(*plVar5 + (longlong)param_2 * 8);
  if (pUVar6 != (UStreamableRenderAsset *)0x0) {
    pUVar14 = Z_Construct_UClass_UTexture_NoRegister();
    iVar18 = (int)pUVar14->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar18) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar18 * 8)
        != &pUVar14->_padding_)) {
      bVar9 = true;
      goto LAB_14880ec76;
    }
  }
  bVar9 = false;
LAB_14880ec76:
  pTVar15 = TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    *)(*(longlong *)this + 0x88),pUVar6);
  if ((pTVar15 ==
       (TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>
        *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Pair != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                          ,0x288,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar21 = *(longlong *)this;
  puVar1 = &pTVar15->field_0x8;
  iVar18 = 0;
  pFVar16 = TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
            ::Find((TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                    *)(lVar21 + 0x38),pUVar6);
  if (pFVar16 != (FRenderAssetDesc *)0x0) {
    iVar13 = pFVar16->HeadLink;
    iVar18 = 0;
    while (iVar13 != -1) {
      iVar18 = iVar18 + 1;
      pFVar17 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                              *)(lVar21 + 0x20),iVar13);
      iVar13 = pFVar17->NextRenderAssetLink;
    }
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0xc,4,iVar18,(ForAnyElementType *)puVar1,(int *)&pTVar15->field_0x10,
             (int *)&pTVar15->field_0x14);
  lVar21 = *(longlong *)this;
  iVar18 = 0;
  uVar19 = 0;
  pFVar16 = TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
            ::Find((TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                    *)(lVar21 + 0x38),pUVar6);
  if ((pFVar16 != (FRenderAssetDesc *)0x0) && (iVar13 = pFVar16->HeadLink, iVar13 != -1)) {
    this_00 = (TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_> *
              )(lVar21 + 0x20);
    lVar21 = 0;
    do {
      pFVar17 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                ::operator[](this_00,iVar13);
      fVar3 = pFVar17->TexelFactor;
      if ((bVar9) && (fVar3 < 0.0)) {
        iVar18 = iVar18 + 1;
      }
      fVar22 = param_1->MaxTexelFactor;
      if (param_1->MaxTexelFactor <= fVar3) {
        fVar22 = fVar3;
      }
      param_1->MaxTexelFactor = fVar22;
      pFVar17 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                ::operator[](this_00,iVar13);
      uVar20 = ~uVar19 >> 0x1f;
      iVar4 = pFVar17->BoundsIndex;
      uVar12 = 0;
      if ((int)uVar19 < *(int *)&pTVar15->field_0x10) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(int *)(*(longlong *)puVar1 + lVar21) = iVar4;
      uVar12 = 0;
      if ((int)uVar19 < *(int *)&pTVar15->field_0x10) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      *(float *)(*(longlong *)puVar1 + lVar21 + 4) = fVar3;
      pFVar17 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                ::operator[](this_00,iVar13);
      bVar10 = pFVar17->bForceLoad;
      uVar12 = 0;
      if ((int)uVar19 < *(int *)&pTVar15->field_0x10) {
        uVar12 = uVar20;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar19 = uVar19 + 1;
      *(bool *)(*(longlong *)puVar1 + lVar21 + 8) = bVar10;
      lVar21 = lVar21 + 0xc;
      pFVar17 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                ::operator[](this_00,iVar13);
      iVar13 = pFVar17->NextRenderAssetLink;
    } while (iVar13 != -1);
    if (0 < iVar18) {
      piVar2 = &(param_1->CompiledNumForcedLODCompArray).ArrayMax;
      iVar13 = (param_1->CompiledNumForcedLODCompArray).ArrayNum;
      if (iVar13 == *piVar2) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(param_1->CompiledNumForcedLODCompArray).AllocatorInstance,piVar2
                           );
      }
      (param_1->CompiledNumForcedLODCompArray).ArrayNum = iVar13 + 1;
      pFVar7 = (param_1->CompiledNumForcedLODCompArray).AllocatorInstance.Data;
      *(UStreamableRenderAsset **)(pFVar7 + (longlong)iVar13 * 0x10) = pUVar6;
      *(int *)(pFVar7 + (longlong)iVar13 * 0x10 + 8) = iVar18;
    }
  }
  return;
}

// operator() @ 14880ffe0

bool __thiscall
`FRenderAssetInstanceState::AddComponentInternal'::__l79::<lambda_2>::operator()
          (void *this,FStreamingRenderAssetPrimitiveInfo *param_1,
          FStreamingRenderAssetPrimitiveInfo *param_2)

{
  UStreamableRenderAsset *pUVar1;
  UStreamableRenderAsset *pUVar2;
  int iVar3;
  bool bVar4;
  
  if (((((param_2->Bounds).Origin.field0_0x0._s_0.X == (param_1->Bounds).Origin.field0_0x0._s_0.X)
       && ((param_2->Bounds).Origin.field0_0x0._s_0.Y == (param_1->Bounds).Origin.field0_0x0._s_0.Y)
       ) && ((param_2->Bounds).Origin.field0_0x0._s_0.Z ==
             (param_1->Bounds).Origin.field0_0x0._s_0.Z)) &&
     ((((param_2->Bounds).BoxExtent.field0_0x0._s_0.X ==
        (param_1->Bounds).BoxExtent.field0_0x0._s_0.X &&
       ((param_2->Bounds).BoxExtent.field0_0x0._s_0.Y ==
        (param_1->Bounds).BoxExtent.field0_0x0._s_0.Y)) &&
      (((param_2->Bounds).BoxExtent.field0_0x0._s_0.Z ==
        (param_1->Bounds).BoxExtent.field0_0x0._s_0.Z &&
       ((param_2->Bounds).SphereRadius == (param_1->Bounds).SphereRadius)))))) {
    pUVar1 = (param_2->RenderAsset).field0_0x0.DebugPtr;
    pUVar2 = (param_1->RenderAsset).field0_0x0.DebugPtr;
    bVar4 = pUVar2 < pUVar1;
    if (pUVar2 == pUVar1) {
      bVar4 = param_1->TexelFactor < param_2->TexelFactor;
    }
    return bVar4;
  }
  iVar3 = memcmp(&param_1->Bounds,&param_2->Bounds,0x38);
  return iVar3 < 0;
}

// AddBounds @ 1488173e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FRenderAssetInstanceState::AddBounds
          (FRenderAssetInstanceState *this,TBoxSphereBounds<double,double> *param_1,uint param_2,
          UPrimitiveComponent *param_3,float param_4,TVector4<double> *param_5,float param_6,
          float param_7,float param_8)

{
  int *piVar1;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  int local_1c8;
  int local_1c4;
  int local_1c0 [2];
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  TVector<double>_u_0 local_198;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_3 == (UPrimitiveComponent *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("InComponent",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                        ,0x1f,L"");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      iVar12 = (*pcVar7)();
      return iVar12;
    }
  }
  uVar18 = 0xffffffff;
  while (((piVar1 = &(this->Bounds4Components).ArrayNum, (int)uVar18 < 0 || (*piVar1 <= (int)uVar18)
          ) && (0 < (this->FreeBoundIndices).ArrayNum))) {
    iVar12 = (this->FreeBoundIndices).ArrayNum;
    iVar19 = iVar12 + -1;
    uVar18 = *(uint *)((this->FreeBoundIndices).AllocatorInstance.Data + (longlong)iVar12 * 4 + -4);
    (this->FreeBoundIndices).ArrayNum = iVar19;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeBoundIndices).AllocatorInstance,iVar19,
               &(this->FreeBoundIndices).ArrayMax);
  }
  if (((int)uVar18 < 0) || (*piVar1 <= (int)uVar18)) {
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_158 = 0;
    uStack_150 = 0;
    uVar18 = (int)this->_padding_ * 4;
    local_148 = 0;
    uStack_140 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = ___xmm_7f7fffff7f7fffff7f7fffff7f7fffff;
    uStack_40 = _UNK_150a1c8e8;
    local_38 = ___xmm_ff7fffffff7fffffff7fffffff7fffff;
    uStack_30 = _UNK_150af7a58;
    local_78 = 0;
    local_70 = 0;
    if (((undefined8 *)this->_padding_ <= &local_178) &&
       (&local_178 <
        (undefined8 *)this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 0x2a))
    {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        iVar12 = (*pcVar7)();
        return iVar12;
      }
    }
    iVar12 = (int)this->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x150,0x10,(ForAnyElementType *)&this->_padding_,piVar1);
    }
    *(int *)&this->_padding_ = iVar12 + 1;
    lVar15 = 2;
    puVar9 = &local_178;
    puVar10 = (undefined8 *)((longlong)iVar12 * 0x150 + this->_padding_);
    do {
      puVar17 = puVar10;
      puVar14 = puVar9;
      uVar8 = puVar14[1];
      *puVar17 = *puVar14;
      puVar17[1] = uVar8;
      uVar8 = puVar14[3];
      puVar17[2] = puVar14[2];
      puVar17[3] = uVar8;
      uVar8 = puVar14[5];
      puVar17[4] = puVar14[4];
      puVar17[5] = uVar8;
      uVar8 = puVar14[7];
      puVar17[6] = puVar14[6];
      puVar17[7] = uVar8;
      uVar8 = puVar14[9];
      puVar17[8] = puVar14[8];
      puVar17[9] = uVar8;
      uVar8 = puVar14[0xb];
      puVar17[10] = puVar14[10];
      puVar17[0xb] = uVar8;
      uVar8 = puVar14[0xd];
      puVar17[0xc] = puVar14[0xc];
      puVar17[0xd] = uVar8;
      uVar8 = puVar14[0xf];
      puVar17[0xe] = puVar14[0xe];
      puVar17[0xf] = uVar8;
      lVar15 = lVar15 + -1;
      puVar9 = puVar14 + 0x10;
      puVar10 = puVar17 + 0x10;
    } while (lVar15 != 0);
    uVar8 = puVar14[0x11];
    pTVar2 = &this->Bounds4Components;
    local_1b8 = 0;
    puVar17[0x10] = puVar14[0x10];
    puVar17[0x11] = uVar8;
    uVar8 = puVar14[0x13];
    puVar17[0x12] = puVar14[0x12];
    puVar17[0x13] = uVar8;
    uVar8 = puVar14[0x15];
    puVar17[0x14] = puVar14[0x14];
    puVar17[0x15] = uVar8;
    uVar8 = puVar14[0x17];
    puVar17[0x16] = puVar14[0x16];
    puVar17[0x17] = uVar8;
    uVar8 = puVar14[0x19];
    puVar17[0x18] = puVar14[0x18];
    puVar17[0x19] = uVar8;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_1b8) &&
       ((FScriptContainerElement *)&local_1b8 <
        pFVar6 + (longlong)(this->Bounds4Components).ArrayMax * 8)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        iVar12 = (*pcVar7)();
        return iVar12;
      }
    }
    iVar12 = (this->Bounds4Components).ArrayNum;
    if (iVar12 == (this->Bounds4Components).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(this->Bounds4Components).ArrayMax);
    }
    (this->Bounds4Components).ArrayNum = iVar12 + 1;
    local_1b0 = 0;
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_1b8;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_1b0) &&
       ((FScriptContainerElement *)&local_1b0 <
        pFVar6 + (longlong)(this->Bounds4Components).ArrayMax * 8)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        iVar12 = (*pcVar7)();
        return iVar12;
      }
    }
    iVar12 = (this->Bounds4Components).ArrayNum;
    if (iVar12 == (this->Bounds4Components).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(this->Bounds4Components).ArrayMax);
    }
    (this->Bounds4Components).ArrayNum = iVar12 + 1;
    pTVar3 = &this->Bounds4Components;
    local_1a8 = 0;
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_1b0;
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_1a8) &&
       ((FScriptContainerElement *)&local_1a8 <
        pFVar6 + (longlong)(this->Bounds4Components).ArrayMax * 8)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        iVar12 = (*pcVar7)();
        return iVar12;
      }
    }
    iVar12 = (this->Bounds4Components).ArrayNum;
    if (iVar12 == (this->Bounds4Components).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar3->AllocatorInstance,&(this->Bounds4Components).ArrayMax);
    }
    (this->Bounds4Components).ArrayNum = iVar12 + 1;
    pTVar2 = &this->Bounds4Components;
    local_1a0 = 0;
    *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_1a8;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_1a0) &&
       ((FScriptContainerElement *)&local_1a0 <
        pFVar6 + (longlong)(this->Bounds4Components).ArrayMax * 8)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        iVar12 = (*pcVar7)();
        return iVar12;
      }
    }
    iVar12 = (this->Bounds4Components).ArrayNum;
    if (iVar12 == (this->Bounds4Components).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,&(this->Bounds4Components).ArrayMax);
    }
    (this->Bounds4Components).ArrayNum = iVar12 + 1;
    pTVar4 = &this->FreeBoundIndices;
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_1a0;
    local_1c8 = uVar18 + 3;
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_1c8) &&
       ((FScriptContainerElement *)&local_1c8 <
        pFVar6 + (longlong)(this->FreeBoundIndices).ArrayMax * 4)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        iVar12 = (*pcVar7)();
        return iVar12;
      }
    }
    iVar12 = (this->FreeBoundIndices).ArrayNum;
    if (iVar12 == (this->FreeBoundIndices).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,&(this->FreeBoundIndices).ArrayMax);
    }
    (this->FreeBoundIndices).ArrayNum = iVar12 + 1;
    *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_1c8;
    local_1c4 = uVar18 + 2;
    pFVar6 = (pTVar4->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)&local_1c4) &&
       ((FScriptContainerElement *)&local_1c4 <
        pFVar6 + (longlong)(this->FreeBoundIndices).ArrayMax * 4)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        iVar12 = (*pcVar7)();
        return iVar12;
      }
    }
    iVar12 = (this->FreeBoundIndices).ArrayNum;
    if (iVar12 == (this->FreeBoundIndices).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar4->AllocatorInstance,&(this->FreeBoundIndices).ArrayMax);
    }
    (this->FreeBoundIndices).ArrayNum = iVar12 + 1;
    pTVar5 = &this->FreeBoundIndices;
    *(int *)((pTVar4->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_1c4;
    local_1c0[0] = uVar18 + 1;
    pFVar6 = (pTVar5->AllocatorInstance).Data;
    if ((pFVar6 <= (FScriptContainerElement *)local_1c0) &&
       ((FScriptContainerElement *)local_1c0 <
        pFVar6 + (longlong)(this->FreeBoundIndices).ArrayMax * 4)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        iVar12 = (*pcVar7)();
        return iVar12;
      }
    }
    iVar12 = (this->FreeBoundIndices).ArrayNum;
    if (iVar12 == (this->FreeBoundIndices).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar5->AllocatorInstance,&(this->FreeBoundIndices).ArrayMax);
    }
    (this->FreeBoundIndices).ArrayNum = iVar12 + 1;
    *(int *)((pTVar5->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_1c0[0];
  }
  uVar13 = (int)(uVar18 + ((int)uVar18 >> 0x1f & 3U)) >> 2;
  uVar16 = 0;
  if ((int)uVar13 < (int)this->_padding_) {
    uVar16 = ~uVar13 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      iVar12 = (*pcVar7)();
      return iVar12;
    }
  }
  local_198._s_0.X = (param_5->field0_0x0)._s_0.X;
  local_198._s_0.Y = (param_5->field0_0x0)._s_0.Y;
  local_198._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  uVar16 = uVar18 & 0x80000003;
  if ((int)uVar16 < 0) {
    uVar16 = (uVar16 - 1 | 0xfffffffc) + 1;
  }
  FBounds4::Set((FBounds4 *)((longlong)(int)uVar13 * 0x150 + this->_padding_),uVar16,param_1,param_2
                ,(float)param_1->SphereRadius,param_4,(TVector<double> *)&local_198._s_0,param_6,
                param_7,param_8);
  uVar16 = 0;
  if ((int)uVar18 < (this->Bounds4Components).ArrayNum) {
    uVar16 = ~uVar18 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar7 = (code *)swi(3);
      iVar12 = (*pcVar7)();
      return iVar12;
    }
  }
  *(UPrimitiveComponent **)
   ((this->Bounds4Components).AllocatorInstance.Data + (longlong)(int)uVar18 * 8) = param_3;
  return uVar18;
}

// AddComponent @ 148818110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAddComponentResult __thiscall
FRenderAssetInstanceState::AddComponent
          (FRenderAssetInstanceState *this,FPreAddComponentPayload *param_1)

{
  int iVar1;
  EAddComponentResult EVar2;
  uint uVar3;
  
  if (param_1->Result == Success) {
    iVar1 = (int)this->_padding_;
    uVar3 = (param_1->Bounds).ArrayNum + iVar1;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*(int *)((longlong)&this->_padding_ + 4) < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x150,0x10,uVar3,(ForAnyElementType *)&this->_padding_,iVar1,
                 (int *)((longlong)&this->_padding_ + 4));
    }
  }
  EVar2 = AddComponentInternal(this,param_1);
  return EVar2;
}

// AddComponent @ 148818180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAddComponentResult __thiscall
FRenderAssetInstanceState::AddComponent
          (FRenderAssetInstanceState *this,UPrimitiveComponent *param_1,
          FStreamingTextureLevelContext *param_2,float param_3)

{
  EAddComponentResult EVar1;
  
  EVar1 = AddComponentInternal(param_1,param_2,param_3,this,(FPreAddComponentPayload *)0x0);
  return EVar1;
}

// AddComponentIgnoreBounds @ 1488181b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAddComponentResult __thiscall
FRenderAssetInstanceState::AddComponentIgnoreBounds
          (FRenderAssetInstanceState *this,FPreAddComponentIgnoreBoundsPayload *param_1)

{
  UPrimitiveComponent *this_00;
  code *pcVar1;
  bool bVar2;
  EAddComponentResult EVar3;
  int iVar4;
  float fVar5;
  int *local_res8;
  TVector4<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  if (this->bIsDynamicInstanceState == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsDynamicInstanceState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                       ,0x230,
                       L"Error: trying to add component to static instance manager as dynamic");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  if (param_1->Result == Success) {
    this_00 = param_1->Component;
    local_res8 = TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                 ::Find((TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                         *)&this->ComponentMap,this_00);
    if (this->bIsDynamicInstanceState == false) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsDynamicInstanceState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x17,
                         L"This version of AddBounds should only be called by the dynamic instance manager."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
    }
    local_48._s_0.X = (double)*(undefined8 *)&this_00->field_0x110;
    local_48._s_0.Y = (double)*(undefined8 *)&this_00->field_0x118;
    local_48._16_4_ = *(undefined4 *)&this_00->field_0x120;
    local_48._20_4_ = *(undefined4 *)&this_00->field_0x124;
    uStack_30 = *(undefined4 *)&this_00->field_0x128;
    uStack_2c = *(undefined4 *)&this_00->field_0x12c;
    local_28 = *(undefined4 *)&this_00->field_0x130;
    uStack_24 = *(undefined4 *)&this_00->field_0x134;
    uStack_20 = *(undefined4 *)&this_00->field_0x138;
    uStack_1c = *(undefined4 *)&this_00->field_0x13c;
    fVar5 = (float)(**(code **)(*(longlong *)this_00 + 0x7a0))(this_00);
    local_18 = (double)fVar5;
    local_68._s_0.X = (double)*(undefined8 *)&this_00->field_0x110;
    local_68._s_0.Y = (double)*(undefined8 *)&this_00->field_0x118;
    local_68._s_0.Z = (double)*(undefined8 *)&this_00->field_0x120;
    local_68._s_0.W = __real_3ff0000000000000;
    fVar5 = UPrimitiveComponent::GetLastRenderTimeOnScreen(this_00);
    iVar4 = AddBounds(this,(TBoxSphereBounds<double,double> *)&local_48._s_0,0xffff0000,this_00,
                      fVar5,(TVector4<double> *)&local_68._s_0,0.0,0.0,__real_7f7fffff);
    AddRenderAssetElements(this,param_1->Component,&param_1->RenderAssets,iVar4,&local_res8);
  }
  return param_1->Result;
}

// AddComponentIgnoreBounds @ 148818350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAddComponentResult __thiscall
FRenderAssetInstanceState::AddComponentIgnoreBounds
          (FRenderAssetInstanceState *this,UPrimitiveComponent *param_1,
          FStreamingTextureLevelContext *param_2)

{
  EAddComponentResult EVar1;
  
  EVar1 = AddComponentIgnoreBoundsInternal
                    (param_1,param_2,this,(FPreAddComponentIgnoreBoundsPayload *)0x0);
  return EVar1;
}

// AddComponentIgnoreBoundsInternal @ 148818370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAddComponentResult __cdecl
FRenderAssetInstanceState::AddComponentIgnoreBoundsInternal
          (UPrimitiveComponent *param_1,FStreamingTextureLevelContext *param_2,
          FRenderAssetInstanceState *param_3,FPreAddComponentIgnoreBoundsPayload *param_4)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  EAddComponentResult EVar4;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> *pTVar5;
  TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *pTVar6;
  float fVar7;
  FIdentityFunctor local_res8 [8];
  int *local_res18;
  TArray<FRenderAssetInstanceState::FPreAddRenderAssetElement,TSizedDefaultAllocator<32>_>
  *local_res20;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> local_f8;
  code *local_e8;
  FRenderAssetInstanceState **local_e0;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> local_d8;
  code *local_c8;
  TArray<FRenderAssetInstanceState::FPreAddRenderAssetElement,TSizedDefaultAllocator<32>_>
  **local_c0;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> local_b8;
  TVector4<double>_u_0 local_a8;
  FRenderAssetInstanceState *local_88;
  UPrimitiveComponent *local_80;
  int local_78;
  int **local_70;
  TVector<double>_u_0 local_68;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  
  if (((param_1->field_0x98 & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component->IsRegistered()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x240,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    EVar4 = (*pcVar1)();
    return EVar4;
  }
  if (param_3 == (FRenderAssetInstanceState *)0x0) {
    if (param_4 == (FPreAddComponentIgnoreBoundsPayload *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("State || OutPreAddPayload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x241,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
      goto LAB_14881842c;
    }
  }
  else {
    if ((param_3->bIsDynamicInstanceState == false) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!State || State->bIsDynamicInstanceState",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                           ,0x242,
                           L"Error: trying to add component to static instance manager as dynamic"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      EVar4 = (*pcVar1)();
      return EVar4;
    }
    if (param_4 == (FPreAddComponentIgnoreBoundsPayload *)0x0) goto LAB_14881842c;
  }
  param_4->Component = param_1;
LAB_14881842c:
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  UPrimitiveComponent::GetStreamingRenderAssetInfoWithNULLRemoval(param_1,param_2,&local_f8);
  if (local_f8.ArrayNum == 0) {
    EVar4 = Fail;
  }
  else {
    AlgoImpl::
    IntroSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FRenderAssetInstanceState::AddComponentIgnoreBoundsInternal_::__l2::<lambda_1>_>_>
              ((FStreamingRenderAssetPrimitiveInfo *)local_f8.AllocatorInstance.Data,
               local_f8.ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
    if (param_3 == (FRenderAssetInstanceState *)0x0) {
      local_res18 = (int *)0x0;
      if ((param_4 == (FPreAddComponentIgnoreBoundsPayload *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("OutPreAddPayload",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                             ,0x263,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
      iVar2 = local_f8.ArrayNum;
      local_b8.DataPtr = (FStreamingRenderAssetPrimitiveInfo *)local_f8.AllocatorInstance.Data;
      if ((local_f8.ArrayNum < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
      local_res20 = &param_4->RenderAssets;
      local_b8.ArrayNum = iVar2;
      pTVar6 = (TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *)&local_c8;
      local_c0 = &local_res20;
      pTVar5 = &local_b8;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Private::PreAddRenderAssetElements'::__l2::<lambda_1>,void,UStreamableRenderAsset_const_*,float>
                 ::Call;
    }
    else {
      local_res18 = TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                    ::Find((TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                            *)&param_3->ComponentMap,param_1);
      if ((param_3->bIsDynamicInstanceState == false) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsDynamicInstanceState",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                             ,0x17,
                             L"This version of AddBounds should only be called by the dynamic instance manager."
                            ), bVar3)) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
      local_68._s_0.X = (double)*(undefined8 *)&param_1->field_0x110;
      local_68._s_0.Y = (double)*(undefined8 *)&param_1->field_0x118;
      local_68._16_4_ = *(undefined4 *)&param_1->field_0x120;
      local_68._20_4_ = *(undefined4 *)&param_1->field_0x124;
      uStack_50 = *(undefined4 *)&param_1->field_0x128;
      uStack_4c = *(undefined4 *)&param_1->field_0x12c;
      local_48 = *(undefined4 *)&param_1->field_0x130;
      uStack_44 = *(undefined4 *)&param_1->field_0x134;
      uStack_40 = *(undefined4 *)&param_1->field_0x138;
      uStack_3c = *(undefined4 *)&param_1->field_0x13c;
      fVar7 = (float)(**(code **)(*(longlong *)param_1 + 0x7a0))(param_1);
      local_38 = (double)fVar7;
      local_a8._s_0.X = (double)*(undefined8 *)&param_1->field_0x110;
      local_a8._s_0.Y = (double)*(undefined8 *)&param_1->field_0x118;
      local_a8._s_0.Z = (double)*(undefined8 *)&param_1->field_0x120;
      local_a8._s_0.W = __real_3ff0000000000000;
      fVar7 = UPrimitiveComponent::GetLastRenderTimeOnScreen(param_1);
      local_78 = AddBounds(param_3,(TBoxSphereBounds<double,double> *)&local_68._s_0,0xffff0000,
                           param_1,fVar7,(TVector4<double> *)&local_a8._s_0,0.0,0.0,__real_7f7fffff)
      ;
      local_d8.ArrayNum = local_f8.ArrayNum;
      local_d8.DataPtr = (FStreamingRenderAssetPrimitiveInfo *)local_f8.AllocatorInstance.Data;
      if ((local_f8.ArrayNum < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        EVar4 = (*pcVar1)();
        return EVar4;
      }
      local_70 = &local_res18;
      pTVar6 = (TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *)&local_e8;
      local_e0 = &local_88;
      pTVar5 = &local_d8;
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FRenderAssetInstanceState::AddRenderAssetElements'::__l2::<lambda_1>,void,UStreamableRenderAsset_const_*,float>
                 ::Call;
      local_88 = param_3;
      local_80 = param_1;
    }
    UE::Private::ForEachRenderAssetTexelFactorGroup(pTVar5,pTVar6);
    EVar4 = Success;
  }
  if ((FStreamingRenderAssetPrimitiveInfo *)local_f8.AllocatorInstance.Data !=
      (FStreamingRenderAssetPrimitiveInfo *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return EVar4;
}

// AddComponentInternal @ 1488186a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAddComponentResult __thiscall
FRenderAssetInstanceState::AddComponentInternal
          (FRenderAssetInstanceState *this,FPreAddComponentPayload *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  UPrimitiveComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  TBoxSphereBounds<double,double> *pTVar7;
  bool bVar8;
  EAddComponentResult EVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  TBoxSphereBounds<double,double> *pTVar15;
  TBoxSphereBounds<double,double> *pTVar16;
  float fVar17;
  undefined1 local_res8 [8];
  FPreAddComponentPayload *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_a8 [2];
  int *local_a0;
  TBoxSphereBounds<double,double> *local_98;
  TVector4<double>_u_0 local_88 [2];
  
  local_res10 = param_1;
  if ((this->bIsDynamicInstanceState != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsDynamicInstanceState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x16b,
                         L"Error: trying to add component to dynamic instance manager as static"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    EVar9 = (*pcVar5)();
    return EVar9;
  }
  if (param_1->Result == Success) {
    local_a0 = TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
               ::Find((TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                       *)&this->ComponentMap,param_1->Component);
    fVar17 = UPrimitiveComponent::GetLastRenderTimeOnScreen(param_1->Component);
    dVar6 = __real_3ff0000000000000;
    local_res20 = (param_1->Bounds).ArrayNum;
    uVar12 = (ulonglong)(int)local_res20;
    pTVar16 = (TBoxSphereBounds<double,double> *)(param_1->Bounds).AllocatorInstance.Data;
    pTVar15 = pTVar16 + 2;
    local_98 = (TBoxSphereBounds<double,double> *)((longlong)pTVar16 + uVar12 * 0x78);
    while( true ) {
      pTVar7 = local_98;
      if ((param_1->Bounds).ArrayNum != (int)uVar12) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FRenderAssetInstanceState::FPreAddBounds_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pTVar16 == pTVar7) break;
      local_88[0]._0_8_ = pTVar15[-1].Origin.field0_0x0._s_0.Y;
      local_88[0]._8_8_ = pTVar15[-1].Origin.field0_0x0._s_0.Z;
      local_88[0]._16_8_ = pTVar15[-1].BoxExtent.field0_0x0._s_0.X;
      local_88[0]._s_0.W = dVar6;
      iVar10 = AddBounds(this,pTVar16,*(uint *)&pTVar15[-1].Origin.field0_0x0,param_1->Component,
                         fVar17,(TVector4<double> *)&local_88[0]._s_0,
                         *(float *)((longlong)&pTVar15[-1].BoxExtent.field0_0x0 + 8),
                         *(float *)((longlong)&pTVar15[-1].BoxExtent.field0_0x0 + 0xc),
                         *(float *)((longlong)&pTVar15[-1].BoxExtent.field0_0x0 + 0x10));
      pUVar3 = param_1->Component;
      iVar11 = *(int *)&(pTVar15->Origin).field0_0x0;
      puVar13 = (undefined8 *)pTVar15[-1].SphereRadius;
      puVar14 = puVar13 + (longlong)iVar11 * 2;
      local_a8[0] = iVar10;
      while( true ) {
        if (*(int *)&(pTVar15->Origin).field0_0x0 != iVar11) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FRenderAssetInstanceState::FPreAddRenderAssetElement_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (puVar13 == puVar14) break;
        AddElement(this,pUVar3,(UStreamableRenderAsset *)*puVar13,iVar10,*(float *)(puVar13 + 1),
                   pUVar3->bForceMipStreaming,&local_a0);
        puVar13 = puVar13 + 2;
      }
      if (*(undefined1 *)((longlong)&pTVar15[-1].BoxExtent.field0_0x0 + 0x14) != '\0') {
        pTVar2 = &this->BoundsToUnpack;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 <
             pFVar4 + (longlong)(this->BoundsToUnpack).ArrayMax * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          EVar9 = (*pcVar5)();
          return EVar9;
        }
        iVar11 = (this->BoundsToUnpack).ArrayNum;
        piVar1 = &(this->BoundsToUnpack).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->BoundsToUnpack).ArrayNum = iVar11 + 1;
        *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_a8[0];
      }
      pTVar16 = (TBoxSphereBounds<double,double> *)((longlong)&pTVar16[2].Origin.field0_0x0 + 8);
      pTVar15 = (TBoxSphereBounds<double,double> *)((longlong)&pTVar15[2].Origin.field0_0x0 + 8);
      uVar12 = (ulonglong)local_res20;
      param_1 = local_res10;
    }
  }
  return param_1->Result;
}

// AddComponentInternal @ 148818990

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAddComponentResult __cdecl
FRenderAssetInstanceState::AddComponentInternal
          (UPrimitiveComponent *param_1,FStreamingTextureLevelContext *param_2,float param_3,
          FRenderAssetInstanceState *param_4,FPreAddComponentPayload *param_5)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  float fVar16;
  bool bVar17;
  EAddComponentResult EVar18;
  uint uVar19;
  int iVar20;
  UPrimitiveComponent *pUVar21;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> *pTVar22;
  ulonglong uVar23;
  longlong lVar24;
  TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *pTVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  ForAnyElementType FVar28;
  FScriptContainerElement *pFVar29;
  int iVar30;
  FStreamingRenderAssetPrimitiveInfo *pFVar31;
  longlong lVar32;
  uint uVar33;
  longlong lVar34;
  longlong lVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  FIdentityFunctor local_res8;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> local_248;
  undefined1 local_238;
  undefined1 local_237;
  undefined1 local_236 [2];
  int local_234;
  undefined1 local_230;
  undefined1 local_22f [7];
  longlong local_228;
  int *local_220;
  int *local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  code *local_200;
  FRenderAssetInstanceState **local_1f8;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> local_1f0;
  code *local_1e0;
  FScriptContainerElement **local_1d8;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> local_1d0;
  code *local_1c0;
  FRenderAssetInstanceState **local_1b8;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> local_1b0;
  code *local_1a0;
  FScriptContainerElement **local_198;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> local_190;
  FRenderAssetInstanceState *local_180;
  UPrimitiveComponent *local_178;
  int local_170;
  int **local_168;
  TVector4<double>_u_0 local_158;
  FRenderAssetInstanceState *local_138;
  UPrimitiveComponent *local_130;
  int local_128;
  int **local_120;
  TVector4<double>_u_0 local_118;
  TVector<double>_u_0 local_f8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  
  if (param_4 == (FRenderAssetInstanceState *)0x0) {
    if (param_5 == (FPreAddComponentPayload *)0x0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("State || OutPreAddPayload",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                          ,0x18a,L"");
      if (bVar17) {
        pcVar8 = (code *)swi(3);
        EVar18 = (*pcVar8)();
        return EVar18;
      }
    }
    else {
LAB_148818a40:
      param_5->Component = param_1;
    }
  }
  else {
    if ((param_4->bIsDynamicInstanceState != false) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("!State || !State->bIsDynamicInstanceState",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                            ,0x18b,
                            L"Error: trying to add component to dynamic instance manager as static")
       , bVar17)) {
      pcVar8 = (code *)swi(3);
      EVar18 = (*pcVar8)();
      return EVar18;
    }
    if (param_5 != (FPreAddComponentPayload *)0x0) goto LAB_148818a40;
  }
  if ((param_1 == (UPrimitiveComponent *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Component",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                          ,0x192,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    EVar18 = (*pcVar8)();
    return EVar18;
  }
  uVar33 = 0;
  local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.ArrayNum = 0;
  local_248.ArrayMax = 0;
  UPrimitiveComponent::GetStreamingRenderAssetInfoWithNULLRemoval(param_1,param_2,&local_248);
  fVar36 = (float)(**(code **)(*(longlong *)param_1 + 0x7a0))(param_1);
  fVar16 = __real_3f800000;
  iVar20 = local_248.ArrayNum;
  if (fVar36 == __real_3f800000) {
    uVar23 = local_248._8_8_ & 0xffffffff;
  }
  else {
    uVar23 = (ulonglong)local_248.ArrayNum;
    pFVar27 = local_248.AllocatorInstance.Data + 0x40;
    pFVar31 = (FStreamingRenderAssetPrimitiveInfo *)
              (local_248.AllocatorInstance.Data + uVar23 * 0x50);
    while( true ) {
      if ((int)uVar23 != iVar20) {
        local_238 = 0;
        `TCheckedPointerIterator<FStreamingRenderAssetPrimitiveInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_238);
        uVar23 = local_248._8_8_ & 0xffffffff;
      }
      if ((FStreamingRenderAssetPrimitiveInfo *)(pFVar27 + -0x40) == pFVar31) break;
      fVar44 = fVar16;
      if (((byte)pFVar27[8] & 2) != 0) {
        fVar44 = fVar36;
      }
      *(float *)pFVar27 = fVar44 * *(float *)pFVar27;
      pFVar27 = pFVar27 + 0x50;
      uVar23 = local_248._8_8_ & 0xffffffff;
    }
  }
  iVar20 = (int)uVar23;
  if (iVar20 == 0) {
LAB_148818b2c:
    EVar18 = Fail;
    goto LAB_1488195c3;
  }
  if (0.0 < param_3) {
    pFVar31 = (FStreamingRenderAssetPrimitiveInfo *)
              (local_248.AllocatorInstance.Data + (longlong)iVar20 * 0x50);
    FVar28.Data = local_248.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar23 != iVar20) {
        local_237 = 0;
        `TCheckedPointerIterator<FStreamingRenderAssetPrimitiveInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_237);
        uVar23 = local_248._8_8_ & 0xffffffff;
      }
      if ((FStreamingRenderAssetPrimitiveInfo *)FVar28.Data == pFVar31) goto LAB_148818b80;
      if (param_3 < ((FStreamingRenderAssetPrimitiveInfo *)FVar28.Data)->TexelFactor) break;
      FVar28.Data = FVar28.Data + 0x50;
    }
    EVar18 = Fail_UIDensityConstraint;
    goto LAB_1488195c3;
  }
LAB_148818b80:
  iVar20 = (int)uVar23;
  local_res8 = SUB81(param_1,0);
  if ((param_1->field_0x98 & 1) == 0) {
    pFVar31 = (FStreamingRenderAssetPrimitiveInfo *)
              (local_248.AllocatorInstance.Data + (longlong)iVar20 * 0x50);
    FVar28.Data = local_248.AllocatorInstance.Data;
    do {
      if ((int)uVar23 != iVar20) {
        local_236[0] = 0;
        `TCheckedPointerIterator<FStreamingRenderAssetPrimitiveInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_236);
        uVar23 = local_248._8_8_ & 0xffffffff;
      }
      if ((FStreamingRenderAssetPrimitiveInfo *)FVar28.Data == pFVar31) {
        AlgoImpl::
        IntroSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FRenderAssetInstanceState::AddComponentInternal_::__l51::<lambda_1>_>_>
                  ((FStreamingRenderAssetPrimitiveInfo *)local_248.AllocatorInstance.Data,
                   (int)uVar23,local_res8,(<lambda_1> *)&local_230);
        if (param_4 == (FRenderAssetInstanceState *)0x0) {
          local_220 = (int *)0x0;
LAB_148818c3f:
        }
        else {
          local_220 = TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                      ::Find((TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                              *)&param_4->ComponentMap,param_1);
          iVar20 = (int)param_4->_padding_;
          uVar26 = iVar20 + local_248.ArrayNum;
          if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
          }
          if (*(int *)((longlong)&param_4->_padding_ + 4) < (int)uVar26) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x150,0x10,uVar26,(ForAnyElementType *)&param_4->_padding_,iVar20,
                       (int *)((longlong)&param_4->_padding_ + 4));
            goto LAB_148818c3f;
          }
        }
        fVar16 = __real_7f7fffff;
        dVar3 = _UNK_15061cbc8;
        dVar15 = ___xmm_3ff00000000000000000000000000000;
        if (0 < local_248.ArrayNum) {
          local_228 = 0;
          iVar20 = local_248.ArrayNum;
          do {
            lVar32 = local_228;
            uVar26 = 0;
            if ((int)uVar33 < iVar20) {
              uVar26 = ~uVar33 >> 0x1f;
            }
            if (uVar26 == 0) {
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar8 = (code *)swi(3);
                EVar18 = (*pcVar8)();
                return EVar18;
              }
              iVar20 = local_248.ArrayNum;
            }
            FVar28.Data = local_248.AllocatorInstance.Data;
            lVar34 = lVar32 * 0x50;
            uVar26 = uVar33 + 1;
            iVar30 = 1;
            lVar35 = 1;
            lVar24 = lVar34;
            if ((int)uVar26 < iVar20) {
              do {
                uVar19 = 0;
                if ((int)uVar26 < iVar20) {
                  uVar19 = ~uVar26 >> 0x1f;
                }
                if (uVar19 == 0) {
                  bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar17) {
                    pcVar8 = (code *)swi(3);
                    EVar18 = (*pcVar8)();
                    return EVar18;
                  }
                  iVar20 = local_248.ArrayNum;
                }
                lVar32 = local_228;
                if (*(int *)(local_248.AllocatorInstance.Data + lVar24 + 0x94) !=
                    *(int *)(FVar28.Data + lVar34 + 0x44)) break;
                iVar30 = iVar30 + 1;
                lVar35 = lVar35 + 1;
                uVar26 = uVar26 + 1;
                lVar24 = lVar24 + 0x50;
              } while ((int)uVar26 < iVar20);
            }
            if (param_4 == (FRenderAssetInstanceState *)0x0) {
              if ((param_5 == (FPreAddComponentPayload *)0x0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("OutPreAddPayload",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                                      ,0x1e8,L""), bVar17)) {
                pcVar8 = (code *)swi(3);
                EVar18 = (*pcVar8)();
                return EVar18;
              }
              iVar20 = (param_5->Bounds).ArrayNum;
              piVar1 = &(param_5->Bounds).ArrayMax;
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x878,&(param_5->Bounds).AllocatorInstance,piVar1);
              }
              (param_5->Bounds).ArrayNum = iVar20 + 1;
              pFVar27 = (param_5->Bounds).AllocatorInstance.Data;
              lVar24 = (longlong)iVar20 * 0x78;
              uVar7 = *(undefined4 *)(FVar28.Data + lVar34 + 0x44);
              pFVar29 = pFVar27 + lVar24 + 0x68;
              *(undefined8 *)(pFVar27 + lVar24) = 0;
              *(undefined8 *)(pFVar27 + lVar24 + 8) = 0;
              *(undefined8 *)(pFVar27 + lVar24 + 0x10) = 0;
              *(undefined8 *)(pFVar27 + lVar24 + 0x18) = 0;
              *(undefined8 *)(pFVar27 + lVar24 + 0x20) = 0;
              *(undefined8 *)(pFVar27 + lVar24 + 0x28) = 0;
              *(undefined8 *)(pFVar27 + lVar24 + 0x30) = 0;
              *(undefined4 *)(pFVar27 + lVar24 + 0x38) = uVar7;
              *(undefined8 *)(pFVar27 + lVar24 + 0x40) = 0;
              *(undefined8 *)(pFVar27 + lVar24 + 0x48) = 0;
              *(undefined8 *)(pFVar27 + lVar24 + 0x50) = 0;
              *(undefined8 *)(pFVar27 + lVar24 + 0x58) = 0;
              *(undefined4 *)(pFVar27 + lVar24 + 0x60) = 0x7f7fffff;
              pFVar27[lVar24 + 100] = (FScriptContainerElement)0x1;
              *(undefined8 *)pFVar29 = 0;
              *(undefined8 *)(pFVar29 + 8) = 0;
              local_1d0.DataPtr =
                   (FStreamingRenderAssetPrimitiveInfo *)(local_248.AllocatorInstance.Data + lVar34)
              ;
              local_1d0.ArrayNum = iVar30;
              if ((iVar30 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar17)) {
                pcVar8 = (code *)swi(3);
                EVar18 = (*pcVar8)();
                return EVar18;
              }
              local_1d8 = &local_210;
              local_1e0 = UE::Core::Private::Function::
                          TFunctionRefCaller<`UE::Private::PreAddRenderAssetElements'::__l2::<lambda_1>,void,UStreamableRenderAsset_const_*,float>
                          ::Call;
              local_210 = pFVar29;
              UE::Private::ForEachRenderAssetTexelFactorGroup
                        (&local_1d0,
                         (TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *)
                         &local_1e0);
            }
            else {
              local_118._s_0.X = 0.0;
              local_118._s_0.Y = 0.0;
              local_118._s_0.Z = dVar15;
              local_118._s_0.W = dVar3;
              fVar36 = UPrimitiveComponent::GetLastRenderTimeOnScreen(param_1);
              local_c8 = 0;
              local_f8._s_0.X = 0.0;
              local_f8._s_0.Y = 0.0;
              local_f8._s_0.Z = 0.0;
              uStack_e0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              iVar20 = AddBounds(param_4,(TBoxSphereBounds<double,double> *)&local_f8._s_0,
                                 *(uint *)(FVar28.Data + lVar34 + 0x44),param_1,fVar36,
                                 (TVector4<double> *)&local_118._s_0,0.0,0.0,fVar16);
              local_1f0.DataPtr =
                   (FStreamingRenderAssetPrimitiveInfo *)(local_248.AllocatorInstance.Data + lVar34)
              ;
              local_234 = iVar20;
              local_1f0.ArrayNum = iVar30;
              if ((iVar30 < 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("ArrayNum >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xfe,L""), bVar17)) {
                pcVar8 = (code *)swi(3);
                EVar18 = (*pcVar8)();
                return EVar18;
              }
              local_168 = &local_220;
              local_1f8 = &local_180;
              local_200 = UE::Core::Private::Function::
                          TFunctionRefCaller<`FRenderAssetInstanceState::AddRenderAssetElements'::__l2::<lambda_1>,void,UStreamableRenderAsset_const_*,float>
                          ::Call;
              local_180 = param_4;
              local_178 = param_1;
              local_170 = iVar20;
              UE::Private::ForEachRenderAssetTexelFactorGroup
                        (&local_1f0,
                         (TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *)
                         &local_200);
              pTVar2 = &param_4->BoundsToUnpack;
              pFVar27 = (pTVar2->AllocatorInstance).Data;
              if (((pFVar27 <= (FScriptContainerElement *)&local_234) &&
                  ((FScriptContainerElement *)&local_234 <
                   pFVar27 + (longlong)(param_4->BoundsToUnpack).ArrayMax * 4)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar8 = (code *)swi(3);
                EVar18 = (*pcVar8)();
                return EVar18;
              }
              iVar20 = (param_4->BoundsToUnpack).ArrayNum;
              piVar1 = &(param_4->BoundsToUnpack).ArrayMax;
              if (iVar20 == *piVar1) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x404,&pTVar2->AllocatorInstance,piVar1);
              }
              (param_4->BoundsToUnpack).ArrayNum = iVar20 + 1;
              *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar20 * 4) = local_234;
            }
            local_228 = lVar32 + lVar35;
            uVar33 = uVar33 + iVar30;
            iVar20 = local_248.ArrayNum;
          } while ((int)uVar33 < local_248.ArrayNum);
        }
        goto LAB_1488195c1;
      }
      if (((FStreamingRenderAssetPrimitiveInfo *)FVar28.Data)->PackedRelativeBox == 0)
      goto LAB_148818b2c;
      FVar28.Data = FVar28.Data + 0x50;
    } while( true );
  }
  AlgoImpl::
  IntroSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FRenderAssetInstanceState::AddComponentInternal_::__l79::<lambda_2>_>_>
            ((FStreamingRenderAssetPrimitiveInfo *)local_248.AllocatorInstance.Data,iVar20,
             local_res8,(<lambda_2> *)local_22f);
  if (param_4 == (FRenderAssetInstanceState *)0x0) {
    local_218 = (int *)0x0;
LAB_1488190ac:
  }
  else {
    local_218 = TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                ::Find((TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                        *)&param_4->ComponentMap,param_1);
    iVar20 = (int)param_4->_padding_;
    uVar26 = iVar20 + local_248.ArrayNum;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    if (*(int *)((longlong)&param_4->_padding_ + 4) < (int)uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x150,0x10,uVar26,(ForAnyElementType *)&param_4->_padding_,iVar20,
                 (int *)((longlong)&param_4->_padding_ + 4));
      goto LAB_1488190ac;
    }
  }
  fVar16 = __real_7f7fffff;
  dVar15 = __real_3ff0000000000000;
  if (0 < local_248.ArrayNum) {
    local_228 = 0;
    iVar20 = local_248.ArrayNum;
    do {
      lVar32 = local_228;
      uVar26 = 0;
      if ((int)uVar33 < iVar20) {
        uVar26 = ~uVar33 >> 0x1f;
      }
      if (uVar26 == 0) {
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          EVar18 = (*pcVar8)();
          return EVar18;
        }
        iVar20 = local_248.ArrayNum;
      }
      FVar28.Data = local_248.AllocatorInstance.Data;
      lVar32 = lVar32 * 0x50;
      uVar26 = uVar33 + 1;
      iVar30 = 1;
      lVar34 = 1;
      lVar24 = lVar32;
      if ((int)uVar26 < iVar20) {
        do {
          uVar19 = 0;
          if ((int)uVar26 < iVar20) {
            uVar19 = ~uVar26 >> 0x1f;
          }
          if (uVar19 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar8 = (code *)swi(3);
              EVar18 = (*pcVar8)();
              return EVar18;
            }
            iVar20 = local_248.ArrayNum;
          }
          if (((((*(double *)(FVar28.Data + lVar32 + 8) !=
                  *(double *)(local_248.AllocatorInstance.Data + lVar24 + 0x58)) ||
                (*(double *)(FVar28.Data + lVar32 + 0x10) !=
                 *(double *)(local_248.AllocatorInstance.Data + lVar24 + 0x60))) ||
               ((*(double *)(FVar28.Data + lVar32 + 0x18) !=
                 *(double *)(local_248.AllocatorInstance.Data + lVar24 + 0x68) ||
                ((*(double *)(FVar28.Data + lVar32 + 0x20) !=
                  *(double *)(local_248.AllocatorInstance.Data + lVar24 + 0x70) ||
                 (*(double *)(FVar28.Data + lVar32 + 0x28) !=
                  *(double *)(local_248.AllocatorInstance.Data + lVar24 + 0x78))))))) ||
              (*(double *)(FVar28.Data + lVar32 + 0x30) !=
               *(double *)(local_248.AllocatorInstance.Data + lVar24 + 0x80))) ||
             (*(double *)(FVar28.Data + lVar32 + 0x38) !=
              *(double *)(local_248.AllocatorInstance.Data + lVar24 + 0x88))) break;
          iVar30 = iVar30 + 1;
          lVar34 = lVar34 + 1;
          uVar26 = uVar26 + 1;
          lVar24 = lVar24 + 0x50;
        } while ((int)uVar26 < iVar20);
      }
      if (((param_1->field_0x98 & 1) == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Component && Component->IsRegistered()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.cpp"
                              ,0xf0,L""), bVar17)) {
        pcVar8 = (code *)swi(3);
        EVar18 = (*pcVar8)();
        return EVar18;
      }
      pUVar21 = UPrimitiveComponent::GetLODParentPrimitive(param_1);
      dVar3 = *(double *)&param_1->field_0x110;
      dVar4 = *(double *)&param_1->field_0x118;
      dVar41 = *(double *)&FVar28.Data[lVar32 + 8].field_0x0 - dVar3;
      dVar5 = *(double *)&param_1->field_0x120;
      fVar36 = param_1->MinDrawDistance;
      dVar40 = (double)fVar36;
      if (fVar36 <= 0.0) {
        fVar36 = 0.0;
      }
      auVar38._0_8_ =
           (*(double *)(FVar28.Data + lVar32 + 0x18) - dVar5) *
           (*(double *)(FVar28.Data + lVar32 + 0x18) - dVar5);
      auVar38._8_8_ = 0;
      auVar39._8_8_ = 0;
      auVar39._0_8_ =
           (*(double *)(FVar28.Data + lVar32 + 0x10) - dVar4) *
           (*(double *)(FVar28.Data + lVar32 + 0x10) - dVar4) + dVar41 * dVar41 + auVar38._0_8_;
      auVar39 = sqrtpd(auVar38,auVar39);
      dVar41 = (dVar40 - auVar39._0_8_) - *(double *)(FVar28.Data + lVar32 + 0x38);
      if (dVar41 <= 0.0) {
        dVar41 = 0.0;
      }
      fVar45 = (float)dVar41 * (float)dVar41;
      fVar44 = fVar16;
      if (pUVar21 != (UPrimitiveComponent *)0x0) {
        dVar41 = dVar4 - *(double *)&pUVar21->field_0x118;
        dVar42 = dVar3 - *(double *)&pUVar21->field_0x110;
        dVar40 = dVar5 - *(double *)&pUVar21->field_0x120;
        auVar43._0_8_ = dVar42 * dVar42;
        auVar43._8_8_ = 0;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = dVar41 * dVar41 + auVar43._0_8_ + dVar40 * dVar40;
        auVar39 = sqrtpd(auVar43,auVar9);
        fVar44 = (float)(auVar39._0_8_ +
                        (double)((float)*(double *)&pUVar21->field_0x140 + pUVar21->MinDrawDistance)
                        );
        fVar44 = fVar44 * fVar44;
      }
      if (param_4 == (FRenderAssetInstanceState *)0x0) {
        if ((param_5 == (FPreAddComponentPayload *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("OutPreAddPayload",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                                ,0x21d,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          EVar18 = (*pcVar8)();
          return EVar18;
        }
        iVar20 = (param_5->Bounds).ArrayNum;
        piVar1 = &(param_5->Bounds).ArrayMax;
        if (iVar20 == *piVar1) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&(param_5->Bounds).AllocatorInstance,piVar1);
        }
        (param_5->Bounds).ArrayNum = iVar20 + 1;
        uVar10 = *(undefined8 *)(FVar28.Data + lVar32 + 0x10);
        uVar6 = *(undefined8 *)(FVar28.Data + lVar32 + 0x38);
        uVar11 = *(undefined8 *)(FVar28.Data + lVar32 + 0x18);
        uVar12 = *(undefined8 *)&FVar28.Data[lVar32 + 0x20].field_0x0;
        uVar13 = *(undefined8 *)(FVar28.Data + lVar32 + 0x28);
        uVar14 = *(undefined8 *)(FVar28.Data + lVar32 + 0x30);
        lVar24 = (longlong)iVar20 * 0x78;
        pFVar27 = (param_5->Bounds).AllocatorInstance.Data;
        *(undefined8 *)(pFVar27 + lVar24) = *(undefined8 *)&FVar28.Data[lVar32 + 8].field_0x0;
        *(undefined8 *)(pFVar27 + lVar24 + 8) = uVar10;
        *(undefined4 *)(pFVar27 + lVar24 + 0x38) = 0xffff0000;
        *(undefined8 *)(pFVar27 + lVar24 + 0x10) = uVar11;
        *(undefined8 *)(pFVar27 + lVar24 + 0x10 + 8) = uVar12;
        pFVar29 = pFVar27 + lVar24 + 0x68;
        *(undefined8 *)(pFVar27 + lVar24 + 0x20) = uVar13;
        *(undefined8 *)(pFVar27 + lVar24 + 0x20 + 8) = uVar14;
        *(undefined8 *)(pFVar27 + lVar24 + 0x30) = uVar6;
        uVar6 = *(undefined8 *)&param_1->field_0x118;
        *(undefined8 *)(pFVar27 + lVar24 + 0x40) = *(undefined8 *)&param_1->field_0x110;
        *(undefined8 *)(pFVar27 + lVar24 + 0x40 + 8) = uVar6;
        *(undefined8 *)(pFVar27 + lVar24 + 0x50) = *(undefined8 *)&param_1->field_0x120;
        *(float *)(pFVar27 + lVar24 + 0x58) = fVar45;
        *(float *)(pFVar27 + lVar24 + 0x5c) = fVar36 * fVar36;
        *(float *)(pFVar27 + lVar24 + 0x60) = fVar44;
        pFVar27[lVar24 + 100] = (FScriptContainerElement)0x0;
        *(undefined8 *)pFVar29 = 0;
        *(undefined8 *)(pFVar29 + 8) = 0;
        iVar20 = local_248.ArrayNum;
        local_190.DataPtr = (FStreamingRenderAssetPrimitiveInfo *)local_248.AllocatorInstance.Data;
        if ((local_248.ArrayNum < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          EVar18 = (*pcVar8)();
          return EVar18;
        }
        local_198 = &local_208;
        local_190.ArrayNum = iVar20;
        pTVar25 = (TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *)&local_1a0;
        local_1a0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Private::PreAddRenderAssetElements'::__l2::<lambda_1>,void,UStreamableRenderAsset_const_*,float>
                    ::Call;
        pTVar22 = &local_190;
        local_208 = pFVar29;
      }
      else {
        local_158._s_0.W = dVar15;
        local_158._s_0.X = dVar3;
        local_158._s_0.Y = dVar4;
        local_158._s_0.Z = dVar5;
        fVar37 = UPrimitiveComponent::GetLastRenderTimeOnScreen(param_1);
        iVar20 = AddBounds(param_4,(TBoxSphereBounds<double,double> *)(FVar28.Data + lVar32 + 8),
                           0xffff0000,param_1,fVar37,(TVector4<double> *)&local_158._s_0,fVar45,
                           fVar36 * fVar36,fVar44);
        local_1b0.DataPtr =
             (FStreamingRenderAssetPrimitiveInfo *)(local_248.AllocatorInstance.Data + lVar32);
        local_1b0.ArrayNum = iVar30;
        if ((iVar30 < 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar17)) {
          pcVar8 = (code *)swi(3);
          EVar18 = (*pcVar8)();
          return EVar18;
        }
        pTVar25 = (TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *)&local_1c0;
        pTVar22 = &local_1b0;
        local_120 = &local_218;
        local_1b8 = &local_138;
        local_1c0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRenderAssetInstanceState::AddRenderAssetElements'::__l2::<lambda_1>,void,UStreamableRenderAsset_const_*,float>
                    ::Call;
        local_138 = param_4;
        local_130 = param_1;
        local_128 = iVar20;
      }
      UE::Private::ForEachRenderAssetTexelFactorGroup(pTVar22,pTVar25);
      uVar33 = uVar33 + iVar30;
      local_228 = local_228 + lVar34;
      iVar20 = local_248.ArrayNum;
    } while ((int)uVar33 < local_248.ArrayNum);
  }
LAB_1488195c1:
  EVar18 = Success;
LAB_1488195c3:
  if ((FStreamingRenderAssetPrimitiveInfo *)local_248.AllocatorInstance.Data !=
      (FStreamingRenderAssetPrimitiveInfo *)0x0) {
    FMemory::Free(local_248.AllocatorInstance.Data);
  }
  return EVar18;
}

// AddComponents @ 148819640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

EAddComponentResult __thiscall
FRenderAssetInstanceState::AddComponents
          (FRenderAssetInstanceState *this,
          TArray<FRenderAssetInstanceState::FPreAddComponentPayload,TSizedDefaultAllocator<32>_>
          *param_1,TFunctionRef<void___cdecl(FRenderAssetInstanceState::FPreAddComponentPayload_const_&,EAddComponentResult)>
                   *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  EAddComponentResult EVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  EAddComponentResult local_res20 [8];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId331,"FRenderAssetInstanceState::AddComponents",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
               ,0x14b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId331);
  }
  if ((this->bIsDynamicInstanceState != false) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsDynamicInstanceState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x14c,
                         L"Error: trying to add component to dynamic instance manager as static"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    EVar5 = (*pcVar3)();
    return EVar5;
  }
  iVar1 = param_1->ArrayNum;
  lVar9 = (longlong)iVar1;
  iVar10 = 0;
  uVar8 = 0;
  if (0 < iVar1) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      uVar8 = uVar8 + 1;
      iVar10 = iVar10 + *(int *)((param_1->AllocatorInstance).Data + lVar7 + 0x18);
      lVar7 = lVar7 + 0x20;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  iVar2 = (int)this->_padding_;
  uVar8 = iVar2 + iVar10;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x150,0x10,uVar8,(ForAnyElementType *)&this->_padding_,iVar2,
               (int *)((longlong)&this->_padding_ + 4));
  }
  uVar8 = 0;
  if (0 < iVar1) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      EVar5 = AddComponentInternal
                        (this,(FPreAddComponentPayload *)((param_1->AllocatorInstance).Data + lVar9)
                        );
      if (EVar5 != Success) {
        uVar6 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
        local_res20[0] = EVar5;
        (**(code **)param_2)
                  (*(undefined8 *)&param_2->field_0x8,(param_1->AllocatorInstance).Data + lVar9,
                   local_res20);
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x20;
    } while ((int)uVar8 < iVar1);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return Success;
}

// AddElement @ 1488199a0

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
FRenderAssetInstanceState::AddElement
          (FRenderAssetInstanceState *this,UPrimitiveComponent *param_1,
          UStreamableRenderAsset *param_2,int param_3,float param_4,bool param_5,int **param_6)

{
  UStreamableRenderAsset **ppUVar1;
  int *piVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  UStreamableRenderAsset *pUVar6;
  bool bVar7;
  int iVar8;
  FElement *pFVar9;
  FRenderAssetDesc *pFVar10;
  FElement *pFVar11;
  TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_> *pTVar12;
  UClass *pUVar13;
  TTuple<UStreamableRenderAsset_const_*,int> *pTVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  TPairInitializer<UPrimitiveComponent_const_*_const_&,int_const_&> local_res8;
  UStreamableRenderAsset *local_res18;
  int local_res20 [2];
  int local_f8;
  float fStack_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  int local_e8;
  undefined4 local_e4;
  undefined1 local_e0 [8];
  FRenderAssetDesc *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  UStreamableRenderAsset **local_b0;
  int *local_a8;
  int **local_a0;
  int *local_98;
  UStreamableRenderAsset **local_90;
  undefined4 *local_88;
  
  local_res8.Value = (int *)param_1;
  local_res18 = param_2;
  if (((param_1 == (UPrimitiveComponent *)0x0) || (param_2 == (UStreamableRenderAsset *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InComponent && InAsset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x67,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = (this->FreeElementIndices).ArrayNum;
  fVar18 = *(float *)&this->_padding_;
  if (*(float *)&this->_padding_ <= param_4) {
    fVar18 = param_4;
  }
  *(float *)&this->_padding_ = fVar18;
  if (iVar8 == 0) {
    local_res20[0] = (int)this->_padding_;
    local_c8 = 0xffffffff;
    uStack_c4 = 0;
    local_d8 = (FRenderAssetDesc *)0x0;
    uStack_d0 = 0;
    uStack_bc = 0xffffffff;
    uStack_b8 = 0xffffffff;
    uStack_b4 = 0xffffffff;
    iVar8 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::Add
                      ((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                        *)&this->_padding_,1);
    uVar17 = iVar8 / 0x199;
    uVar16 = 0;
    if ((int)uVar17 < (int)this->_padding_) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar3 = (undefined8 *)
             (*(longlong *)(this->_padding_ + (longlong)(int)uVar17 * 8) +
             (ulonglong)(uint)(iVar8 % 0x199) * 0x28);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = CONCAT44(uStack_c4,local_c8);
      puVar3[3] = CONCAT44(uStack_bc,uStack_c0);
      puVar3[4] = CONCAT44(uStack_b4,uStack_b8);
    }
  }
  else {
    if (((this->FreeElementIndices).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_res20[0] =
         *(int *)((this->FreeElementIndices).AllocatorInstance.Data +
                 (longlong)(this->FreeElementIndices).ArrayNum * 4 + -4);
    piVar2 = &(this->FreeElementIndices).ArrayNum;
    *piVar2 = *piVar2 + -1;
    if (((int)this->_padding_ <= local_res20[0]) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ElementIndex < Elements.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                           ,0x70,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar9 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
           operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                       *)&this->_padding_,local_res20[0]);
  pUVar6 = local_res18;
  pFVar9->Component = (UPrimitiveComponent *)local_res8.Value;
  ppUVar1 = &pFVar9->RenderAsset;
  pFVar9->TexelFactor = param_4;
  pFVar9->BoundsIndex = param_3;
  *ppUVar1 = local_res18;
  pFVar9->bForceLoad = param_5;
  pFVar10 = TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
            ::Find((TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                    *)&this->_padding_,local_res18);
  if (pFVar10 == (FRenderAssetDesc *)0x0) {
    local_e4 = (**(code **)(pUVar6->_padding_ + 0x2b0))(pUVar6);
    local_b0 = &local_res18;
    local_e8 = local_res20[0];
    local_a8 = &local_e8;
    TSet<TTuple<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<UStreamableRenderAsset_const_*_const_&,FRenderAssetInstanceView::FRenderAssetDesc_&&>_>
              ((TSet<TTuple<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>,FDefaultSetAllocator>
                *)&this->_padding_,
               (TPairInitializer<UStreamableRenderAsset_const_*_const_&,FRenderAssetInstanceView::FRenderAssetDesc_&&>
                *)local_e0,(bool *)&local_b0);
    if ((pFVar9->NextRenderAssetLink != -1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Element.NextRenderAssetLink == INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                           ,0x8e,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    if (((int)this->_padding_ <= pFVar10->HeadLink) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("AssetDesc->HeadLink < Elements.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                           ,0x83,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar11 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
              operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                          *)&this->_padding_,pFVar10->HeadLink);
    pFVar9->NextRenderAssetLink = pFVar10->HeadLink;
    pFVar11->PrevRenderAssetLink = local_res20[0];
    pFVar10->HeadLink = local_res20[0];
  }
  if ((pFVar9->PrevRenderAssetLink != -1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Element.PrevRenderAssetLink == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x91,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (*param_6 == (int *)0x0) {
    local_a0 = &local_res8.Value;
    local_98 = local_res20;
    TSet<TTuple<UPrimitiveComponent_const_*,int>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UPrimitiveComponent_const_*_const_&,int_const_&>_>
              ((TSet<TTuple<UPrimitiveComponent_const_*,int>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>,FDefaultSetAllocator>
                *)&this->ComponentMap,&local_res8,(bool *)&local_a0);
    *param_6 = (int *)(*(longlong *)&this->ComponentMap +
                      ((longlong)(int)local_res8.Key * 3 + 1) * 8);
  }
  else {
    pFVar9->NextComponentLink = **param_6;
    **param_6 = local_res20[0];
  }
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    uVar17 = ((uint)((ulonglong)*ppUVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)*ppUVar1 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    pTVar12 = TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<UStreamableRenderAsset_const_*_const_&>
                        ((TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->_padding_,uVar17 >> 0x10 ^ uVar17,ppUVar1);
    local_f8 = pFVar9->BoundsIndex;
    fStack_f4 = pFVar9->TexelFactor;
    local_f0 = CONCAT31(local_f0._1_3_,pFVar9->bForceLoad);
    pFVar4 = (pTVar12->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 < pFVar4 + (longlong)pTVar12->ArrayMax * 0xc)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = pTVar12->ArrayNum;
    if (iVar8 == pTVar12->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
    }
    pUVar6 = local_res18;
    pTVar12->ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar12->AllocatorInstance).Data;
    *(ulonglong *)(pFVar4 + (longlong)iVar8 * 0xc) = CONCAT44(fStack_f4,local_f8);
    *(undefined4 *)(pFVar4 + (longlong)iVar8 * 0xc + 8) = local_f0;
    if (pFVar9->TexelFactor <= 0.0 && pFVar9->TexelFactor != 0.0) {
      pUVar13 = Z_Construct_UClass_UTexture_NoRegister();
      iVar8 = (int)pUVar13->_padding_;
      if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar13->_padding_)) {
        pTVar14 = TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
                          *)&this->_padding_,*ppUVar1);
        if ((pTVar14 == (TTuple<UStreamableRenderAsset_const_*,int> *)0x0) ||
           (puVar15 = &pTVar14->field_0x8, puVar15 == (undefined1 *)0x0)) {
          local_88 = &local_ec;
          local_ec = 1;
          local_90 = ppUVar1;
          TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UStreamableRenderAsset_const_*_const_&,int_&&>_>
                    ((TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
                      *)&this->_padding_,
                     (TPairInitializer<UStreamableRenderAsset_const_*_const_&,int_&&> *)
                     (local_e0 + 4),(bool *)&local_90);
        }
        else {
          *(int *)puVar15 = *(int *)puVar15 + 1;
        }
      }
    }
  }
  return;
}

// AddRenderAssetElements @ 148819f30

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
FRenderAssetInstanceState::AddRenderAssetElements
          (FRenderAssetInstanceState *this,UPrimitiveComponent *param_1,
          TArray<FRenderAssetInstanceState::FPreAddRenderAssetElement,TSizedDefaultAllocator<32>_>
          *param_2,int param_3,int **param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [8];
  
  iVar1 = param_2->ArrayNum;
  pFVar2 = (param_2->AllocatorInstance).Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_2->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRenderAssetInstanceState::FPreAddRenderAssetElement_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar2 == pFVar3) break;
    AddElement(this,param_1,*(UStreamableRenderAsset **)pFVar2,param_3,*(float *)(pFVar2 + 8),
               param_1->bForceMipStreaming,param_4);
    pFVar2 = pFVar2 + 0x10;
  }
  return;
}

// AddRenderAssetElements @ 148819ff0

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
FRenderAssetInstanceState::AddRenderAssetElements
          (FRenderAssetInstanceState *this,UPrimitiveComponent *param_1,
          TArrayView<FStreamingRenderAssetPrimitiveInfo,int> *param_2,int param_3,int **param_4)

{
  code *local_38;
  FRenderAssetInstanceState **local_30;
  FRenderAssetInstanceState *local_28;
  UPrimitiveComponent *local_20;
  int local_18;
  int **local_10;
  
  local_10 = param_4;
  local_30 = &local_28;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FRenderAssetInstanceState::AddRenderAssetElements'::__l2::<lambda_1>,void,UStreamableRenderAsset_const_*,float>
             ::Call;
  local_28 = this;
  local_20 = param_1;
  local_18 = param_3;
  UE::Private::ForEachRenderAssetTexelFactorGroup
            (param_2,(TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *)&local_38);
  return;
}

// CheckRegistrationAndUnpackBounds @ 1488292c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

int __thiscall
FRenderAssetInstanceState::CheckRegistrationAndUnpackBounds
          (FRenderAssetInstanceState *this,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  UPrimitiveComponent *local_38 [2];
  
  iVar8 = (this->BoundsToUnpack).ArrayNum;
  pFVar15 = (this->BoundsToUnpack).AllocatorInstance.Data;
  pFVar1 = pFVar15 + (longlong)iVar8 * 4;
  do {
    while( true ) {
      if ((this->BoundsToUnpack).ArrayNum != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar15 == pFVar1) {
        iVar8 = (this->BoundsToUnpack).ArrayNum;
        (this->BoundsToUnpack).ArrayNum = 0;
        if ((this->BoundsToUnpack).ArrayMax != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(this->BoundsToUnpack).AllocatorInstance,0,
                     &(this->BoundsToUnpack).ArrayMax);
        }
        return iVar8;
      }
      uVar9 = *(uint *)pFVar15;
      if ((-1 < (int)uVar9) && ((int)uVar9 < (this->Bounds4Components).ArrayNum)) break;
LAB_14882957f:
      pFVar15 = pFVar15 + 4;
    }
    uVar7 = 0;
    if ((int)uVar9 < (this->Bounds4Components).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    local_38[0] = *(UPrimitiveComponent **)
                   ((this->Bounds4Components).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
    if (local_38[0] == (UPrimitiveComponent *)0x0) goto LAB_14882957f;
    if (((local_38[0]->field_0x98 & 1) == 0) ||
       (((local_38[0]->field_0x98 & 2) != 0 &&
        (local_38[0]->SceneProxy == (FPrimitiveSceneProxy *)0x0)))) {
      iVar10 = -1;
      uVar9 = ((uint)((ulonglong)local_38[0] >> 0x14) & 0xffff ^ (uint)((ulonglong)local_38[0] >> 4)
              ) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (*(int *)&(this->ComponentMap).field_0x8 != *(int *)&(this->ComponentMap).field_0x34) {
        puVar3 = *(undefined1 **)&(this->ComponentMap).field_0x40;
        puVar11 = &(this->ComponentMap).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar11 = puVar3;
        }
        iVar13 = *(int *)(puVar11 +
                         (ulonglong)
                         (*(int *)&(this->ComponentMap).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9)) *
                         4);
        if (iVar13 != -1) {
          do {
            lVar2 = *(longlong *)&this->ComponentMap + (longlong)iVar13 * 0x18;
            if (*(UPrimitiveComponent **)
                 (*(longlong *)&this->ComponentMap + (longlong)iVar13 * 0x18) == local_38[0]) {
              iVar10 = *(int *)(lVar2 + 8);
              TSet<TTuple<UPrimitiveComponent_const_*,int>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<UPrimitiveComponent_const_*,int>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>,FDefaultSetAllocator>
                               *)&this->ComponentMap,iVar13);
              break;
            }
            iVar13 = *(int *)(lVar2 + 0x10);
          } while (iVar13 != -1);
        }
      }
      RemoveComponentByHandle
                (this,iVar10,
                 (TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == param_1->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(UPrimitiveComponent **)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           local_38[0];
      goto LAB_14882957f;
    }
    uVar12 = (int)uVar9 >> 0x1f & 3;
    uVar9 = uVar9 + uVar12;
    uVar14 = (int)uVar9 >> 2;
    uVar7 = 0;
    if ((int)uVar14 < (int)this->_padding_) {
      uVar7 = ~uVar14 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    FBounds4::UnpackBounds
              ((FBounds4 *)((longlong)(int)uVar14 * 0x150 + this->_padding_),(uVar9 & 3) - uVar12,
               local_38[0]);
    pFVar15 = pFVar15 + 4;
  } while( true );
}

// CompileElements @ 14882b170

int __thiscall FRenderAssetInstanceState::CompileElements(FRenderAssetInstanceState *this)

{
  int *piVar1;
  longlong *this_00;
  longlong *this_01;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  float fVar16;
  <lambda_1> local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18 [2];
  FScriptContainerElement *local_res20;
  ForAnyElementType local_108;
  undefined8 local_100;
  TArray<UStreamableRenderAsset_const_*,TSizedDefaultAllocator<32>_> local_f8;
  UStreamableRenderAsset *local_e8;
  TPairInitializer<UStreamableRenderAsset_const_*_const_&,int_const_&> local_e0;
  int iStack_d0;
  uint uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  longlong *local_a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  TArrayView<_public:_int___cdecl_FRenderAssetInstanceState::CompileElements(void)_::_2_::FCompileElementsContext,int>
  local_80;
  <lambda_1> local_68;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  
  this_00 = &this->_padding_;
  bVar5 = 1 < (int)this->_padding_;
  if (!bVar5) {
    TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar14 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this_00,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar3 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar5) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->_padding_;
  bVar5 = 1 < (int)this->_padding_;
  if (!bVar5) {
    TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,piVar1);
  }
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  iVar3 = *(int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_,0);
  }
  if (bVar5) {
    *(undefined4 *)&this->_padding_ = 1;
    TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
              *)this_01);
  }
  *(undefined4 *)&this->_padding_ = 0;
  uVar13 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  if (0 < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
  }
  local_e0.Value = (int *)&this->_padding_;
  local_c8 = &this->_padding_;
  local_b8 = 0;
  uStack_cc = 1;
  iVar3 = (int)this->_padding_;
  iStack_bc = 0;
  if (iVar3 != 0) {
    plVar15 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar15 = local_c8;
    }
    uVar13 = (uint)*plVar15;
    local_b8 = 0;
    iVar14 = 0;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar14;
      local_b8 = local_b8 + 0x20;
      iVar14 = iVar14 + 1;
      iStack_bc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14882b37e;
      uVar13 = *(uint *)((longlong)plVar15 + lVar9 * 4 + 4);
    }
    uStack_cc = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iStack_bc = local_b8 + -1 + (int)lVar9;
    local_res20 = (FScriptContainerElement *)CONCAT44(local_res20._4_4_,(int)lVar9);
    if (iVar3 < iStack_bc) {
      iStack_bc = iVar3;
    }
  }
LAB_14882b37e:
  uStack_c0 = 0xffffffff;
  TStack_a0._padding_ = CONCAT44(uStack_cc,iVar14);
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  TStack_a0._28_4_ = iStack_bc;
  TStack_a0.BaseBitIndex = local_b8;
  iStack_d0 = iVar14;
  iStack_b4 = iStack_bc;
  local_a8 = (longlong *)local_e0.Value;
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c8;
  TStack_a0.CurrentBitIndex = iStack_bc;
  if (iStack_bc < iVar3) {
    do {
      local_e8 = *(UStreamableRenderAsset **)
                  (*local_a8 + (longlong)TStack_a0.CurrentBitIndex * 0x18);
      TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
      ::Emplace<UStreamableRenderAsset_const_*_const_&>
                ((TMapBase<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>_>
                  *)this_00,&local_e8);
      if (((local_f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 <
           local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar14 = (*pcVar4)();
        return iVar14;
      }
      iVar14 = local_f8.ArrayNum;
      if (local_f8.ArrayNum == local_f8.ArrayMax) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
      }
      local_f8.ArrayNum = iVar14 + 1;
      *(UStreamableRenderAsset **)(local_f8.AllocatorInstance.Data + (longlong)iVar14 * 8) =
           local_e8;
      TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
    } while (TStack_a0.CurrentBitIndex < (int)*(longlong *)&(TStack_a0.Array)->NumBits);
  }
  local_res18[0] = 1;
  local_108.Data = (FScriptContainerElement *)0x0;
  local_100 = 0;
  bVar5 = FRenderAssetStreamingManager::IsParallelForAllowedDuringIncrementalUpdate
                    (local_f8.ArrayNum,local_res18);
  iVar14 = local_res18[0];
  iVar3 = local_f8.ArrayNum;
  if (0 < local_f8.ArrayNum) {
    iVar7 = ParallelForImpl::GetNumberOfThreadTasks
                      (local_f8.ArrayNum,local_res18[0],bVar5 ^ ForceSingleThread);
    if (local_100 < 0) {
      DestructItems<_FRenderAssetInstanceState::CompileElements_::__l2::FCompileElementsContext,int>
                ((FCompileElementsContext *)local_108.Data,(int)local_100);
      if (local_100._4_4_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_108,0,(int *)((longlong)&local_100 + 4));
      }
    }
    else {
      DestructItems<_FRenderAssetInstanceState::CompileElements_::__l2::FCompileElementsContext,int>
                ((FCompileElementsContext *)local_108.Data,(int)local_100);
    }
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,iVar7,&local_108,(int *)&local_100,(int *)((longlong)&local_100 + 4));
    DefaultConstructItems<_FRenderAssetInstanceState::CompileElements_::__l2::FCompileElementsContext,int>
              (local_108.Data + (longlong)iVar8 * 0x18,iVar7);
    local_80.ArrayNum = (int)local_100;
    local_80.DataPtr = (FCompileElementsContext *)local_108.Data;
    if (((int)local_100 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      iVar14 = (*pcVar4)();
      return iVar14;
    }
    local_68.RenderAssets = &local_f8;
    local_68.__this = this;
    ParallelForImpl::
    ParallelForInternal<_FRenderAssetInstanceState::CompileElements_::__l2::<lambda_1>,_ParallelForWithTaskContext<_FRenderAssetInstanceState::CompileElements_::__l2::FCompileElementsContext,TSizedDefaultAllocator<32>,_FRenderAssetInstanceState::CompileElements_::__l2::<lambda_1>_>_::__l5::<lambda_1>,_FRenderAssetInstanceState::CompileElements_::__l2::FCompileElementsContext>
              (L"CompileElements",iVar3,iVar14,&local_68,local_res8[0],bVar5 ^ ForceSingleThread,
               &local_80);
  }
  iVar14 = (int)local_100;
  pFVar12 = local_108.Data + 0x10;
  local_res20 = local_108.Data + (longlong)(int)local_100 * 0x18;
  while( true ) {
    pFVar10 = local_res20;
    if ((int)local_100 != iVar14) {
      `TCheckedPointerIterator<`FRenderAssetInstanceState::CompileElements'::__l2::FCompileElementsContext,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar12 + -0x10 == pFVar10) break;
    fVar16 = *(float *)&pFVar12[-0x10].field_0x0;
    if (fVar16 <= *(float *)&this->_padding_) {
      fVar16 = *(float *)&this->_padding_;
    }
    *(float *)&this->_padding_ = fVar16;
    iVar3 = *(int *)pFVar12;
    pFVar10 = (((TArray<TTuple<UStreamableRenderAsset_const_*,int>,TSizedDefaultAllocator<32>_> *)
               (pFVar12 + -8))->AllocatorInstance).Data;
    pFVar11 = pFVar10 + (longlong)iVar3 * 0x10;
    while( true ) {
      if (*(int *)pFVar12 != iVar3) {
        `TCheckedPointerIterator<TTuple<UStreamableRenderAsset_const_*,int>_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar10 == pFVar11) break;
      local_50 = pFVar10 + 8;
      local_58 = pFVar10;
      TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UStreamableRenderAsset_const_*_const_&,int_const_&>_>
                ((TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
                  *)this_01,&local_e0,(bool *)&local_58);
      pFVar10 = pFVar10 + 0x10;
    }
    pFVar12 = pFVar12 + 0x18;
  }
  lVar9 = this->_padding_;
  iVar14 = *(int *)((longlong)&this->_padding_ + 4);
  DestructItems<_FRenderAssetInstanceState::CompileElements_::__l2::FCompileElementsContext,int>
            ((FCompileElementsContext *)local_108.Data,(int)local_100);
  if ((FCompileElementsContext *)local_108.Data != (FCompileElementsContext *)0x0) {
    FMemory::Free(local_108.Data);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return (int)lVar9 - iVar14;
}

// ConditionalUpdateBounds @ 14882b720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FRenderAssetInstanceState::ConditionalUpdateBounds(FRenderAssetInstanceState *this,int param_1)

{
  UPrimitiveComponent *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((this->bIsDynamicInstanceState == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsDynamicInstanceState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x2e9,
                         L"Bounds shouldn\'t be updated after creation unless the instances are dynamic"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1 < 0) || ((this->Bounds4Components).ArrayNum <= param_1)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6552944750125646571>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                       ,0x2eb,"Bounds4Components.IsValidIndex(BoundIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    uVar5 = 0;
    if (param_1 < (this->Bounds4Components).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = *(UPrimitiveComponent **)
               ((this->Bounds4Components).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (this_00 != (UPrimitiveComponent *)0x0) {
      if (this_00->field_0x1ab == '\0') {
        uVar6 = (uint)param_1 >> 2;
        uVar5 = 0;
        if ((int)uVar6 < (int)this->_padding_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar1 = this->_padding_;
        fVar7 = UPrimitiveComponent::GetLastRenderTimeOnScreen(this_00);
        fVar8 = (float)(**(code **)(*(longlong *)this_00 + 0x7a0))(this_00);
        FBounds4::FullUpdate
                  ((FBounds4 *)(lVar1 + (ulonglong)uVar6 * 0x150),param_1 & 3,
                   (TVector<double> *)&this_00->field_0x110,(TVector<double> *)&this_00->field_0x128
                   ,fVar8,fVar7);
        return true;
      }
      fVar8 = (float)*(double *)&this_00->field_0x128 * (float)*(double *)&this_00->field_0x128;
      fVar9 = (float)*(double *)&this_00->field_0x130 * (float)*(double *)&this_00->field_0x130;
      fVar10 = (float)*(double *)&this_00->field_0x138 * (float)*(double *)&this_00->field_0x138;
      fVar11 = (float)*(double *)&this_00->field_0x140 * (float)*(double *)&this_00->field_0x140;
      fVar7 = fVar9;
      if (fVar8 <= fVar9) {
        fVar7 = fVar8;
      }
      if (fVar10 <= fVar7) {
        fVar7 = fVar10;
      }
      if ((fVar7 * __real_3f000000 <= fVar11) &&
         (fVar11 <= fVar9 + fVar9 + fVar8 + fVar8 + fVar10 + fVar10)) {
        uVar6 = (uint)param_1 >> 2;
        uVar5 = 0;
        if ((int)uVar6 < (int)this->_padding_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        lVar1 = this->_padding_;
        fVar7 = UPrimitiveComponent::GetLastRenderTimeOnScreen(this_00);
        fVar8 = (float)(**(code **)(*(longlong *)this_00 + 0x7a0))(this_00);
        FBounds4::FullUpdate
                  ((FBounds4 *)(lVar1 + (ulonglong)uVar6 * 0x150),param_1 & 3,
                   (TVector<double> *)&this_00->field_0x110,(TVector<double> *)&this_00->field_0x128
                   ,fVar8,fVar7);
        return true;
      }
    }
  }
  return false;
}

// FlushPendingRemoveComponents @ 14883b070

void __thiscall
FRenderAssetInstanceState::FlushPendingRemoveComponents
          (FRenderAssetInstanceState *this,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  if (0 < (this->PendingRemoveComponents).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->PendingRemoveComponents).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RemoveComponentByHandle
                (this,*(int *)((this->PendingRemoveComponents).AllocatorInstance.Data + lVar5),
                 param_1);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 4;
    } while ((int)uVar4 < (this->PendingRemoveComponents).ArrayNum);
  }
  (this->PendingRemoveComponents).ArrayNum = 0;
  if ((this->PendingRemoveComponents).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PendingRemoveComponents).AllocatorInstance,0,
               &(this->PendingRemoveComponents).ArrayMax);
  }
  return;
}

// GetAllocatedSize @ 14883cab0

uint __thiscall FRenderAssetInstanceState::GetAllocatedSize(FRenderAssetInstanceState *this)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  longlong *local_40;
  undefined4 uStack_38;
  int iStack_34;
  int local_30;
  int iStack_2c;
  
  iVar6 = (int)this->_padding_;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
  iVar11 = 0;
  iStack_48 = 0;
  uStack_44 = 1;
  local_30 = 0;
  iStack_34 = 0;
  if (iVar6 != 0) {
    plVar12 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar12 = (longlong *)TStack_70.Array;
    }
    uVar2 = (uint)*plVar12;
    local_30 = 0;
    while (uVar2 == 0) {
      lVar10 = (longlong)iStack_48;
      local_30 = local_30 + 0x20;
      iStack_48 = iStack_48 + 1;
      iStack_34 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_48) goto LAB_14883cb5a;
      uVar2 = *(uint *)((longlong)plVar12 + lVar10 * 4 + 4);
    }
    uStack_44 = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_34 = (int)lVar10 + -1 + local_30;
    if (iVar6 < iStack_34) {
      iStack_34 = iVar6;
    }
  }
LAB_14883cb5a:
  uStack_38 = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = &this->_padding_;
  local_40 = (longlong *)TStack_70.Array;
  TStack_70._padding_._0_4_ = iStack_48;
  TStack_70._padding_._4_4_ = uStack_44;
  TStack_70.CurrentBitIndex = iStack_34;
  if (iStack_34 < iVar6) {
    do {
      iVar11 = iVar11 + *(int *)((longlong)TStack_70.CurrentBitIndex * 0x20 + 0x14 + this->_padding_
                                ) * 0xc;
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (int)*(longlong *)&(TStack_70.Array)->NumBits);
  }
  uVar2 = (uint)this->_padding_;
  uVar3 = *(uint *)&(this->ComponentMap).field_0x48;
  uVar4 = (uint)this->_padding_;
  uVar5 = (uint)this->_padding_;
  iVar6 = uVar3 * 4;
  if (uVar3 < 2) {
    iVar6 = 0;
  }
  iVar7 = uVar4 * 4;
  if (uVar4 < 2) {
    iVar7 = 0;
  }
  iVar9 = uVar5 * 4;
  iVar8 = uVar2 * 4;
  if (uVar5 < 2) {
    iVar9 = 0;
  }
  if (uVar2 < 2) {
    iVar8 = 0;
  }
  return iVar8 + iVar9 + iVar11 +
                 iVar6 + ((*(int *)&(this->ComponentMap).field_0x2c + 0x1fU >> 5) +
                          ((*(int *)((longlong)&this->_padding_ + 4) * 0xe +
                            *(int *)&(this->ComponentMap).field_0xc +
                            *(int *)((longlong)&this->_padding_ + 4) +
                           *(int *)((longlong)&this->_padding_ + 4)) * 3 +
                           (int)this->_padding_ * 0x7fd +
                           *(int *)((longlong)&this->_padding_ + 4) * 4 +
                           (this->Bounds4Components).ArrayMax +
                          *(int *)((longlong)&this->_padding_ + 4)) * 2 +
                          (*(int *)((longlong)&this->_padding_ + 4) + 0x1fU >> 5) +
                          (*(int *)((longlong)&this->_padding_ + 4) + 0x1fU >> 5) +
                          (*(int *)((longlong)&this->_padding_ + 4) + 0x1fU >> 5) +
                          (this->FreeElementIndices).ArrayMax + (this->FreeBoundIndices).ArrayMax) *
                         4 + iVar7;
}

// GetReferencedComponents @ 148840f00

void __thiscall
FRenderAssetInstanceState::GetReferencedComponents
          (FRenderAssetInstanceState *this,
          TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  iVar10 = 0;
  iVar8 = *(int *)&(this->ComponentMap).field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ComponentMap).field_0x10;
  uVar7 = 1;
  iVar11 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar8 != 0) {
    puVar12 = *(uint **)&(this->ComponentMap).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)TStack_40.Array;
    }
    uVar3 = *puVar12;
    while (uVar3 == 0) {
      lVar9 = (longlong)iVar10;
      iVar11 = iVar11 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148840fa1;
      uVar3 = puVar12[lVar9 + 1];
    }
    uVar7 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar11;
    if (iVar8 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar8;
    }
  }
LAB_148840fa1:
  TStack_40._padding_ = CONCAT44(uVar7,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar11;
  if (TStack_40.CurrentBitIndex < iVar8) {
    do {
      pFVar1 = (FScriptContainerElement *)
               (*(longlong *)&this->ComponentMap + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar4 = (param_1->AllocatorInstance).Data;
      if (((pFVar4 <= pFVar1) && (pFVar1 < pFVar4 + (longlong)param_1->ArrayMax * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = param_1->ArrayNum;
      if (iVar8 == param_1->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar8 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
           *(undefined8 *)pFVar1;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// MoveBound @ 14884b200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FRenderAssetInstanceState::MoveBound(FRenderAssetInstanceState *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  UPrimitiveComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int *piVar8;
  FElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  
  lVar12 = (longlong)param_1;
  if ((((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) ||
      ((this->BoundsToUnpack).ArrayNum != 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasCompiledElements() && !BoundsToUnpack.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x3a8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (((-1 < param_2) && (iVar1 = (this->Bounds4Components).ArrayNum, param_2 < iVar1)) &&
     ((-1 < param_1 && (param_1 < iVar1)))) {
    uVar10 = 0;
    if (param_2 < iVar1) {
      uVar10 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (*(longlong *)((this->Bounds4Components).AllocatorInstance.Data + (longlong)param_2 * 8) == 0
       ) {
      uVar13 = (uint)~param_1 >> 0x1f;
      uVar10 = 0;
      if (param_1 < (this->Bounds4Components).ArrayNum) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(longlong *)((this->Bounds4Components).AllocatorInstance.Data + lVar12 * 8) != 0) {
        pFVar2 = (this->FreeBoundIndices).AllocatorInstance.Data;
        iVar1 = (this->FreeBoundIndices).ArrayNum;
        for (pFVar11 = pFVar2; pFVar11 != pFVar2 + (longlong)iVar1 * 4; pFVar11 = pFVar11 + 4) {
          if (*(int *)pFVar11 == param_2) {
            uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar2 >> 2);
            if (uVar10 == 0xffffffff) {
              return false;
            }
            uVar7 = 0;
            if ((int)uVar10 < iVar1) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            *(int *)((this->FreeBoundIndices).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) =
                 param_1;
            uVar10 = 0;
            if (param_1 < (this->Bounds4Components).ArrayNum) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pUVar3 = *(UPrimitiveComponent **)
                      ((this->Bounds4Components).AllocatorInstance.Data + lVar12 * 8);
            piVar8 = TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                     ::Find((TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                             *)&this->ComponentMap,pUVar3);
            if (piVar8 != (int *)0x0) {
              iVar1 = *piVar8;
              while (iVar1 != -1) {
                pFVar9 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                         ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                                       *)&this->_padding_,iVar1);
                if ((pFVar9->Component != pUVar3) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Element.Component == Component",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                                       ,0x3c0,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  uVar6 = (*pcVar4)();
                  return (bool)uVar6;
                }
                if (pFVar9->BoundsIndex == param_1) {
                  pFVar9->BoundsIndex = param_2;
                }
                iVar1 = pFVar9->NextComponentLink;
              }
            }
            uVar10 = 0;
            if (param_2 < (this->Bounds4Components).ArrayNum) {
              uVar10 = (uint)~param_2 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            *(UPrimitiveComponent **)
             ((this->Bounds4Components).AllocatorInstance.Data + (longlong)param_2 * 8) = pUVar3;
            uVar10 = 0;
            if (param_1 < (this->Bounds4Components).ArrayNum) {
              uVar10 = uVar13;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            *(undefined8 *)((this->Bounds4Components).AllocatorInstance.Data + lVar12 * 8) = 0;
            UpdateBounds(this,param_2);
            uVar13 = (uint)param_1 >> 2;
            uVar10 = 0;
            if ((int)uVar13 < (int)this->_padding_) {
              uVar10 = ~uVar13 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            lVar12 = (ulonglong)uVar13 * 0x150 + this->_padding_;
            uVar14 = (ulonglong)(param_1 & 3);
            *(undefined8 *)(lVar12 + uVar14 * 8) = 0;
            *(undefined8 *)(lVar12 + 0x20 + uVar14 * 8) = 0;
            *(undefined8 *)(lVar12 + 0x40 + uVar14 * 8) = 0;
            *(undefined8 *)(lVar12 + 0x60 + uVar14 * 8) = 0;
            *(undefined8 *)(lVar12 + 0x80 + uVar14 * 8) = 0;
            *(undefined8 *)(lVar12 + 0xa0 + uVar14 * 8) = 0;
            *(undefined4 *)(lVar12 + 0xc0 + uVar14 * 4) = 0;
            *(undefined4 *)(lVar12 + 0xd0 + uVar14 * 4) = 0;
            *(undefined4 *)(lVar12 + 0xe0 + uVar14 * 4) = 0;
            *(undefined4 *)(lVar12 + 0xf0 + uVar14 * 4) = 0;
            *(undefined4 *)(lVar12 + 0x100 + uVar14 * 4) = 0;
            *(undefined4 *)(lVar12 + 0x110 + uVar14 * 4) = 0;
            *(undefined4 *)(lVar12 + 0x120 + uVar14 * 4) = 0;
            *(undefined4 *)(lVar12 + 0x130 + uVar14 * 4) = 0x7f7fffff;
            *(undefined4 *)(lVar12 + 0x140 + uVar14 * 4) = 0xff7fffff;
            return true;
          }
        }
      }
    }
  }
  return false;
}

// OffsetBounds @ 14884b640

void __thiscall
FRenderAssetInstanceState::OffsetBounds(FRenderAssetInstanceState *this,TVector<double> *param_1)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar6 = 0;
  if (0 < (this->Bounds4Components).ArrayNum) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->Bounds4Components).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((this->Bounds4Components).AllocatorInstance.Data + lVar9) != 0) {
        uVar4 = (int)(uVar6 + ((int)uVar6 >> 0x1f & 3U)) >> 2;
        uVar5 = 0;
        if ((int)uVar4 < (int)this->_padding_) {
          uVar5 = ~uVar4 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar7 = (longlong)(int)uVar4 * 0x150 + this->_padding_;
        uVar5 = uVar6 & 0x80000003;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
        }
        if ((((int)uVar5 < 0) || (3 < (int)uVar5)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index >= 0 && Index < 4",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.inl"
                               ,0x33,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        dVar1 = (param_1->field0_0x0)._s_0.X;
        if ((3 < uVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                               ,0x310,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        lVar8 = (longlong)(int)uVar5;
        *(double *)(lVar7 + lVar8 * 8) = dVar1 + *(double *)(lVar7 + lVar8 * 8);
        dVar1 = (param_1->field0_0x0)._s_0.Y;
        if ((3 < uVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                               ,0x310,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(double *)(lVar7 + 0x20 + lVar8 * 8) = dVar1 + *(double *)(lVar7 + 0x20 + lVar8 * 8);
        dVar1 = (param_1->field0_0x0)._s_0.Z;
        if ((3 < uVar5) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                               ,0x310,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(double *)(lVar7 + 0x40 + lVar8 * 8) = dVar1 + *(double *)(lVar7 + 0x40 + lVar8 * 8);
      }
      uVar6 = uVar6 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar6 < (this->Bounds4Components).ArrayNum);
  }
  return;
}

// PreAddComponent @ 14884ef90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FRenderAssetInstanceState::PreAddComponent
          (UPrimitiveComponent *param_1,FStreamingTextureLevelContext *param_2,float param_3,
          FPreAddComponentPayload *param_4)

{
  code *pcVar1;
  EAddComponentResult EVar2;
  bool bVar3;
  
  EVar2 = AddComponentInternal(param_1,param_2,param_3,(FRenderAssetInstanceState *)0x0,param_4);
  param_4->Result = EVar2;
  if (param_4->Component != param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutPreAddPayload.Component == Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                       ,0x180,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// PreAddComponentIgnoreBounds @ 14884eff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
FRenderAssetInstanceState::PreAddComponentIgnoreBounds
          (UPrimitiveComponent *param_1,FStreamingTextureLevelContext *param_2,
          FPreAddComponentIgnoreBoundsPayload *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  EAddComponentResult EVar4;
  FIdentityFunctor local_res8 [8];
  TArray<FRenderAssetInstanceState::FPreAddRenderAssetElement,TSizedDefaultAllocator<32>_>
  *local_res18;
  TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> local_38;
  code *local_28;
  TArray<FRenderAssetInstanceState::FPreAddRenderAssetElement,TSizedDefaultAllocator<32>_>
  **local_20;
  TArrayView<FStreamingRenderAssetPrimitiveInfo,int> local_18;
  
  if ((param_1->field_0x98 & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component->IsRegistered()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                       ,0x240,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_3 == (FPreAddComponentIgnoreBoundsPayload *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State || OutPreAddPayload",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                       ,0x241,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    param_3->Component = param_1;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  UPrimitiveComponent::GetStreamingRenderAssetInfoWithNULLRemoval(param_1,param_2,&local_38);
  if (local_38.ArrayNum == 0) {
    if ((FStreamingRenderAssetPrimitiveInfo *)local_38.AllocatorInstance.Data !=
        (FStreamingRenderAssetPrimitiveInfo *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    EVar4 = Fail;
  }
  else {
    AlgoImpl::
    IntroSortInternal<FStreamingRenderAssetPrimitiveInfo,int,FIdentityFunctor,TDereferenceWrapper<FStreamingRenderAssetPrimitiveInfo,_FRenderAssetInstanceState::AddComponentIgnoreBoundsInternal_::__l2::<lambda_1>_>_>
              ((FStreamingRenderAssetPrimitiveInfo *)local_38.AllocatorInstance.Data,
               local_38.ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
    if (param_3 == (FPreAddComponentIgnoreBoundsPayload *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutPreAddPayload",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x263,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar2 = local_38.ArrayNum;
    local_18.DataPtr = (FStreamingRenderAssetPrimitiveInfo *)local_38.AllocatorInstance.Data;
    if (local_38.ArrayNum < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_res18 = &param_3->RenderAssets;
    local_18.ArrayNum = iVar2;
    local_20 = &local_res18;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Private::PreAddRenderAssetElements'::__l2::<lambda_1>,void,UStreamableRenderAsset_const_*,float>
               ::Call;
    UE::Private::ForEachRenderAssetTexelFactorGroup
              (&local_18,
               (TFunctionRef<void___cdecl(UStreamableRenderAsset_const_*,float)> *)&local_28);
    if ((FStreamingRenderAssetPrimitiveInfo *)local_38.AllocatorInstance.Data !=
        (FStreamingRenderAssetPrimitiveInfo *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    EVar4 = Success;
  }
  param_3->Result = EVar4;
  if (param_3->Component != param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutPayload.Component == Component",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                       ,0x22b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RemoveBounds @ 148853e30

void __thiscall FRenderAssetInstanceState::RemoveBounds(FRenderAssetInstanceState *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  atomic<unsigned_char> *paVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_res10 [2];
  
  local_res10[0] = param_1;
  if ((param_1 < 0) || ((this->Bounds4Components).ArrayNum <= param_1)) {
    iVar6 = 0x43;
    paVar8 = &bGEnsureHasExecuted<6552944750125645891>;
  }
  else {
    pFVar3 = (this->BoundsToUnpack).AllocatorInstance.Data;
    iVar6 = (this->BoundsToUnpack).ArrayNum;
    for (pFVar10 = pFVar3; pFVar10 != pFVar3 + (longlong)iVar6 * 4; pFVar10 = pFVar10 + 4) {
      if (*(int *)pFVar10 == param_1) {
        uVar9 = (uint)((longlong)pFVar10 - (longlong)pFVar3 >> 2);
        if (uVar9 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar9 < iVar6) {
            uVar7 = ~uVar9 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(undefined4 *)((this->BoundsToUnpack).AllocatorInstance.Data + (longlong)(int)uVar9 * 4)
               = 0xffffffff;
        }
        break;
      }
    }
    if ((-1 < (int)local_res10[0]) && ((int)local_res10[0] < (this->Bounds4Components).ArrayNum)) {
      if ((this->FreeBoundIndices).ArrayNum + 1 == (int)this->_padding_ << 2) {
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        *(undefined4 *)&this->_padding_ = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x150,0x10,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
        }
        piVar1 = &(this->Bounds4Components).ArrayMax;
        (this->Bounds4Components).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->Bounds4Components).AllocatorInstance,0,piVar1);
        }
        piVar1 = &(this->FreeBoundIndices).ArrayMax;
        (this->FreeBoundIndices).ArrayNum = 0;
        if (*piVar1 == 0) {
          return;
        }
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->FreeBoundIndices).AllocatorInstance,0,piVar1);
        return;
      }
      pTVar2 = &this->FreeBoundIndices;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar3 + (longlong)(this->FreeBoundIndices).ArrayMax * 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->FreeBoundIndices).ArrayNum;
      piVar1 = &(this->FreeBoundIndices).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->FreeBoundIndices).ArrayNum = iVar6 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
      uVar7 = (int)(local_res10[0] + ((int)local_res10[0] >> 0x1f & 3U)) >> 2;
      uVar9 = 0;
      if ((int)uVar7 < (int)this->_padding_) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar12 = (longlong)(int)uVar7 * 0x150 + this->_padding_;
      uVar9 = local_res10[0] & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      if ((((int)uVar9 < 0) || (3 < (int)uVar9)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index >= 0 && Index < 4",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceView.inl"
                             ,0x1e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar9 < 4) {
        lVar11 = (longlong)(int)uVar9;
        *(undefined8 *)(lVar12 + lVar11 * 8) = 0;
        *(undefined8 *)(lVar12 + 0x20 + lVar11 * 8) = 0;
        *(undefined8 *)(lVar12 + 0x40 + lVar11 * 8) = 0;
        *(undefined8 *)(lVar12 + 0x60 + lVar11 * 8) = 0;
        *(undefined8 *)(lVar12 + 0x80 + lVar11 * 8) = 0;
        *(undefined8 *)(lVar12 + 0xa0 + lVar11 * 8) = 0;
        *(undefined4 *)(lVar12 + 0xc0 + lVar11 * 4) = 0;
        *(undefined4 *)(lVar12 + 0xd0 + lVar11 * 4) = 0;
        *(undefined4 *)(lVar12 + 0xe0 + lVar11 * 4) = 0;
        *(undefined4 *)(lVar12 + 0xf0 + lVar11 * 4) = 0;
        *(undefined4 *)(lVar12 + 0x100 + lVar11 * 4) = 0;
        *(undefined4 *)(lVar12 + 0x110 + lVar11 * 4) = 0;
        *(undefined4 *)(lVar12 + 0x120 + lVar11 * 4) = 0;
        *(undefined4 *)(lVar12 + 0x130 + lVar11 * 4) = 0x7f7fffff;
      }
      else {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar11 = (longlong)(int)uVar9;
        *(undefined8 *)(lVar12 + lVar11 * 8) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(lVar12 + 0x20 + lVar11 * 8) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(lVar12 + 0x40 + lVar11 * 8) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(lVar12 + 0x60 + lVar11 * 8) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(lVar12 + 0x80 + lVar11 * 8) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(lVar12 + 0xa0 + lVar11 * 8) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar12 + 0xc0 + lVar11 * 4) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar12 + 0xd0 + lVar11 * 4) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar12 + 0xe0 + lVar11 * 4) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar12 + 0xf0 + lVar11 * 4) = 0;
        *(undefined4 *)(lVar12 + 0x100 + lVar11 * 4) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar12 + 0x110 + lVar11 * 4) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar12 + 0x120 + lVar11 * 4) = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined4 *)(lVar12 + 0x130 + lVar11 * 4) = __real_7f7fffff;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                           ,0x310,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(undefined4 *)(lVar12 + 0x140 + (longlong)(int)uVar9 * 4) = 0xff7fffff;
      lVar12 = (longlong)(int)local_res10[0];
      uVar9 = 0;
      if ((int)local_res10[0] < (this->Bounds4Components).ArrayNum) {
        uVar9 = ~local_res10[0] >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)((this->Bounds4Components).AllocatorInstance.Data + lVar12 * 8) = 0;
      return;
    }
    iVar6 = 0x51;
    paVar8 = &bGEnsureHasExecuted<6552944750125645905>;
  }
  bVar5 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar8,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                     ,iVar6,"Bounds4Components.IsValidIndex(BoundsIndex)");
  if (!bVar5) {
    return;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// RemoveComponent @ 148854a40

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
FRenderAssetInstanceState::RemoveComponent
          (FRenderAssetInstanceState *this,UPrimitiveComponent *param_1,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = -1;
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->ComponentMap).field_0x8 != *(int *)&(this->ComponentMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ComponentMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ComponentMap).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->ComponentMap).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->ComponentMap).field_0x0;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(UPrimitiveComponent **)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          iVar5 = *(int *)(lVar1 + 8);
          TSet<TTuple<UPrimitiveComponent_const_*,int>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UPrimitiveComponent_const_*,int>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>,FDefaultSetAllocator>
                           *)&this->ComponentMap,iVar4);
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  RemoveComponentByHandle(this,iVar5,param_2);
  return;
}

// RemoveComponentByHandle @ 148854b20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderAssetInstanceState::RemoveComponentByHandle
          (FRenderAssetInstanceState *this,int param_1,
          TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForElementType<int> FVar4;
  ForElementType<int> FVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStackY_e8 [32];
  int local_98 [2];
  int local_90 [2];
  UStreamableRenderAsset *local_88 [2];
  ForElementType<int> local_78;
  uint local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  uVar9 = 0;
  local_78.SecondaryData = (ForElementType<int>)0x0;
  local_40 = 0;
  local_3c = 0xc;
  local_90[0] = param_1;
  uVar7 = uVar9;
  do {
    if (local_90[0] == -1) {
      local_90[0] = -1;
      uVar10 = uVar9;
      if (0 < (int)uVar7) {
        do {
          uVar8 = (uint)uVar9;
          uVar3 = 0;
          if ((int)uVar8 < (int)uVar7) {
            uVar3 = ~uVar8 >> 0x1f;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          FVar5 = (ForElementType<int>)&local_78;
          if (local_78.SecondaryData != (ForElementType<int>)0x0) {
            FVar5 = local_78.SecondaryData;
          }
          RemoveBounds(this,*(int *)(uVar10 + (longlong)FVar5));
          uVar7 = (ulonglong)local_40;
          uVar9 = (ulonglong)(uVar8 + 1);
          uVar10 = uVar10 + 4;
        } while ((int)(uVar8 + 1) < (int)local_40);
      }
      if (local_78.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_78.SecondaryData);
      }
      return;
    }
    local_98[0] = -1;
    local_88[0] = (UStreamableRenderAsset *)0x0;
    RemoveElement(this,local_90[0],local_90,local_98,local_88);
    if (local_98[0] != -1) {
      uVar7 = (ulonglong)(int)local_40;
      FVar5 = (ForElementType<int>)&local_78;
      if (local_78.SecondaryData != (ForElementType<int>)0x0) {
        FVar5 = local_78.SecondaryData;
      }
      for (FVar4 = FVar5; FVar4 != (ForElementType<int>)((longlong)FVar5 + uVar7 * 4);
          FVar4 = (ForElementType<int>)((longlong)FVar4 + 4)) {
        if (*(int *)FVar4 == local_98[0]) {
          if ((int)((longlong)FVar4 - (longlong)FVar5 >> 2) != -1) goto LAB_148854cc0;
          break;
        }
      }
      FVar5 = (ForElementType<int>)&local_78;
      if (local_78.SecondaryData != (ForElementType<int>)0x0) {
        FVar5 = local_78.SecondaryData;
      }
      if ((ulonglong)FVar5 <= local_98) {
        FVar5 = (ForElementType<int>)&local_78;
        if (local_78.SecondaryData != (ForElementType<int>)0x0) {
          FVar5 = local_78.SecondaryData;
        }
        if ((local_98 < (int *)((longlong)FVar5 + (longlong)(int)local_3c * 4)) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
                             (0x404,&local_78,(int *)&local_3c);
      }
      lVar6 = (longlong)(int)local_40;
      local_40 = local_40 + 1;
      FVar5 = (ForElementType<int>)&local_78;
      if (local_78.SecondaryData != (ForElementType<int>)0x0) {
        FVar5 = local_78.SecondaryData;
      }
      *(int *)((longlong)FVar5 + lVar6 * 4) = local_98[0];
    }
    uVar7 = (ulonglong)local_40;
LAB_148854cc0:
    if ((local_88[0] != (UStreamableRenderAsset *)0x0) &&
       (param_2 !=
        (TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
         *)0x0)) {
      TArray<UStreamableRenderAsset_const_*,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
      ::AddUniqueImpl<UStreamableRenderAsset_const_*_const_&>(param_2,local_88);
      uVar7 = (ulonglong)local_40;
    }
  } while( true );
}

// RemoveComponentReferences @ 148854dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
FRenderAssetInstanceState::RemoveComponentReferences
          (FRenderAssetInstanceState *this,UPrimitiveComponent *param_1)

{
  TMap<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
  *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  undefined1 *puVar12;
  int local_28 [4];
  
  this_00 = &this->ComponentMap;
  piVar10 = TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
            ::Find((TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                    *)this_00,param_1);
  if (piVar10 == (int *)0x0) {
    return false;
  }
  local_28[0] = *piVar10;
  if (this->bIsDynamicInstanceState != false) {
    pTVar1 = &this->PendingRemoveComponents;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
        ((FScriptContainerElement *)local_28 <
         pFVar3 + (longlong)(this->PendingRemoveComponents).ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    iVar8 = (this->PendingRemoveComponents).ArrayNum;
    piVar10 = &(this->PendingRemoveComponents).ArrayMax;
    if (iVar8 == *piVar10) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar1->AllocatorInstance,piVar10);
    }
    (this->PendingRemoveComponents).ArrayNum = iVar8 + 1;
    *(int *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_28[0];
  }
  if (local_28[0] != -1) {
    do {
      iVar8 = local_28[0];
      uVar11 = local_28[0] / 0x199;
      uVar9 = 0;
      if ((int)uVar11 < (int)this->_padding_) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      lVar4 = *(longlong *)(this->_padding_ + (longlong)(int)uVar11 * 8);
      uVar11 = *(uint *)(lVar4 + 0x10 + (ulonglong)(uint)(iVar8 % 0x199) * 0x28);
      puVar2 = (undefined8 *)(lVar4 + (ulonglong)(uint)(iVar8 % 0x199) * 0x28);
      if (uVar11 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar11 < (this->Bounds4Components).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        *(undefined8 *)
         ((this->Bounds4Components).AllocatorInstance.Data + (longlong)(int)uVar11 * 8) = 0;
      }
      local_28[0] = *(int *)((longlong)puVar2 + 0x24);
      *puVar2 = 0;
    } while (local_28[0] != -1);
    local_28[0] = -1;
  }
  if (*(int *)&(this->ComponentMap).field_0x8 != *(int *)&(this->ComponentMap).field_0x34) {
    puVar12 = *(undefined1 **)&(this->ComponentMap).field_0x40;
    uVar11 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
             -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = &(this->ComponentMap).field_0x38;
    }
    iVar8 = *(int *)(puVar12 +
                    (((ulonglong)(uVar11 >> 0x10) ^ (longlong)(int)uVar11) &
                    (longlong)*(int *)&(this->ComponentMap).field_0x48 - 1U) * 4);
    if (iVar8 != -1) {
      while (*(UPrimitiveComponent **)(*(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18) !=
             param_1) {
        iVar8 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar8 * 0x18);
        if (iVar8 == -1) {
          return true;
        }
      }
      TSet<TTuple<UPrimitiveComponent_const_*,int>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>,FDefaultSetAllocator>
      ::RemoveByIndex((TSet<TTuple<UPrimitiveComponent_const_*,int>,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>,FDefaultSetAllocator>
                       *)this_00,iVar8);
    }
  }
  return true;
}

// RemoveElement @ 148855080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FRenderAssetInstanceState::RemoveElement
          (FRenderAssetInstanceState *this,int param_1,int *param_2,int *param_3,
          UStreamableRenderAsset **param_4)

{
  int *piVar1;
  UStreamableRenderAsset *pUVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FElement *pFVar7;
  TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>
  *pTVar8;
  TTuple<UStreamableRenderAsset_const_*,int> *pTVar9;
  FRenderAssetDesc *pFVar10;
  FElement *pFVar11;
  undefined1 *puVar12;
  uint uVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  int local_res10 [2];
  UStreamableRenderAsset *local_res18;
  UStreamableRenderAsset *local_res20;
  UStreamableRenderAsset *local_88;
  FCompiledElement local_80 [3];
  undefined4 uStack_58;
  
  local_res10[0] = param_1;
  if (((int)this->_padding_ <= param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementIndex < Elements.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0xb7,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::
           operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                       *)&this->_padding_,local_res10[0]);
  *param_2 = pFVar7->NextComponentLink;
  *param_3 = pFVar7->BoundsIndex;
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    pTVar8 = TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                     *)&this->_padding_,pFVar7->RenderAsset);
    if ((pTVar8 == (TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>
                    *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_80[0].BoundsIndex = pFVar7->BoundsIndex;
    local_80[0].TexelFactor = pFVar7->TexelFactor;
    local_80[0].bForceLoad = pFVar7->bForceLoad;
    TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
              ((TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_> *)
               &pTVar8->field_0x8,local_80,No);
    if (((pFVar7->TexelFactor <= 0.0 && pFVar7->TexelFactor != 0.0) &&
        (pFVar7->RenderAsset != (UStreamableRenderAsset *)0x0)) &&
       (bVar5 = UObjectBaseUtility::IsA<UTexture>((UObjectBaseUtility *)pFVar7->RenderAsset), !bVar5
       )) {
      pTVar9 = TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
                       *)&this->_padding_,pFVar7->RenderAsset);
      if ((pTVar9 == (TTuple<UStreamableRenderAsset_const_*,int> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar12 = &pTVar9->field_0x8;
      *(int *)puVar12 = *(int *)puVar12 + -1;
      if ((*(int *)puVar12 == 0) &&
         (local_res18 = pFVar7->RenderAsset,
         (int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4))) {
        uVar13 = ((uint)((ulonglong)local_res18 >> 0x14) & 0xffff ^
                 (uint)((ulonglong)local_res18 >> 4)) * -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
        ::RemoveImpl<UStreamableRenderAsset_const_*>
                  ((TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
                    *)&this->_padding_,uVar13 >> 0x10 ^ uVar13,&local_res18);
      }
    }
  }
  pUVar2 = pFVar7->RenderAsset;
  if (pUVar2 != (UStreamableRenderAsset *)0x0) {
    iVar6 = pFVar7->NextRenderAssetLink;
    if (pFVar7->PrevRenderAssetLink == -1) {
      if (iVar6 == -1) {
        local_res20 = pUVar2;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          uVar13 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
                   -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          TSet<TTuple<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>,FDefaultSetAllocator>
          ::RemoveImpl<UStreamableRenderAsset_const_*>
                    ((TSet<TTuple<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>,FDefaultSetAllocator>
                      *)&this->_padding_,uVar13 >> 0x10 ^ uVar13,&local_res20);
        }
        local_88 = pFVar7->RenderAsset;
        if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
          uVar13 = ((uint)((ulonglong)local_88 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_88 >> 4))
                   * -0x7a143595;
          uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
          TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<UStreamableRenderAsset_const_*>
                    ((TSet<TTuple<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,TArray<FRenderAssetInstanceView::FCompiledElement,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)&this->_padding_,uVar13 >> 0x10 ^ uVar13,&local_88);
        }
        pTVar9 = TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<UStreamableRenderAsset_const_*,int>,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,int,0>,FDefaultSetAllocator>
                         *)&this->_padding_,pFVar7->RenderAsset);
        puVar12 = &pTVar9->field_0x8;
        if (pTVar9 == (TTuple<UStreamableRenderAsset_const_*,int> *)0x0) {
          puVar12 = (undefined1 *)0x0;
        }
        if ((puVar12 != (undefined1 *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!CompiledNumForcedLODCompMap.Find(Element.RenderAsset)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                               ,0xd9,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *param_4 = pFVar7->RenderAsset;
      }
      else {
        pFVar10 = TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                  ::Find((TMapBase<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStreamableRenderAsset_const_*,FRenderAssetInstanceView::FRenderAssetDesc,0>_>
                          *)&this->_padding_,pUVar2);
        pFVar10->HeadLink = iVar6;
        pFVar11 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                  ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                                *)&this->_padding_,pFVar7->NextRenderAssetLink);
        pFVar11->PrevRenderAssetLink = -1;
      }
    }
    else {
      pFVar11 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                              *)&this->_padding_,pFVar7->PrevRenderAssetLink);
      pFVar11->NextRenderAssetLink = iVar6;
      if (pFVar7->NextRenderAssetLink != -1) {
        iVar6 = pFVar7->PrevRenderAssetLink;
        pFVar11 = TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                  ::operator[]((TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>
                                *)&this->_padding_,pFVar7->NextRenderAssetLink);
        pFVar11->PrevRenderAssetLink = iVar6;
      }
    }
  }
  if ((this->FreeElementIndices).ArrayNum + 1 == (int)this->_padding_) {
    if (((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RenderAssetMap.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                           ,0xf0,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
    ::Empty((TIndirectArray<TChunkedArray<FRenderAssetInstanceView::FElement,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
             *)&this->_padding_,0);
    *(undefined4 *)&this->_padding_ = 0;
    piVar1 = &(this->FreeElementIndices).ArrayMax;
    (this->FreeElementIndices).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->FreeElementIndices).AllocatorInstance,0,piVar1);
    }
  }
  else {
    pTVar14 = &this->FreeElementIndices;
    pFVar3 = (pTVar14->AllocatorInstance).Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
        ((FScriptContainerElement *)local_res10 <
         pFVar3 + (longlong)(this->FreeElementIndices).ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->FreeElementIndices).ArrayNum;
    piVar1 = &(this->FreeElementIndices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar14->AllocatorInstance,piVar1);
    }
    (this->FreeElementIndices).ArrayNum = iVar6 + 1;
    *(int *)((pTVar14->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
    pFVar7->Component = (UPrimitiveComponent *)0x0;
    pFVar7->RenderAsset = (UStreamableRenderAsset *)0x0;
    pFVar7->BoundsIndex = -1;
    pFVar7->TexelFactor = 0.0;
    pFVar7->bForceLoad = (bool)(char)uStack_58;
    *(int3 *)&pFVar7->field_0x19 = (int3)((uint)uStack_58 >> 8);
    pFVar7->PrevRenderAssetLink = 0xffffffff;
    pFVar7->NextRenderAssetLink = -1;
    pFVar7->NextComponentLink = -1;
  }
  return;
}

// TrimBounds @ 14885c220

void __thiscall FRenderAssetInstanceState::TrimBounds(FRenderAssetInstanceState *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  
  if ((this->PendingRemoveComponents).ArrayNum < 1) {
    if (((int)this->_padding_ << 2 != (this->Bounds4Components).ArrayNum) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumBounds4() * 4 == NumBounds()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                           ,0x3e2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = false;
    while( true ) {
      iVar11 = (this->Bounds4Components).ArrayNum;
      uVar10 = iVar11 - 8;
      if (((int)uVar10 < 0) || (iVar11 <= (int)uVar10)) break;
      lVar9 = (longlong)(int)uVar10 * 8;
      do {
        uVar7 = 0;
        if ((int)uVar10 < (this->Bounds4Components).ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)((this->Bounds4Components).AllocatorInstance.Data + lVar9) != 0)
        goto LAB_14885c418;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar10 < (this->Bounds4Components).ArrayNum);
      iVar11 = (int)this->_padding_ + -2;
      if ((iVar11 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      _Dst = (void *)((longlong)iVar11 * 0x150 + this->_padding_);
      iVar11 = ((int)this->_padding_ - iVar11) + -2;
      if (iVar11 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + 0x2a0),(longlong)iVar11 * 0x150);
      }
      *(int *)&this->_padding_ = (int)this->_padding_ + -2;
      iVar11 = (this->Bounds4Components).ArrayNum + -8;
      if ((iVar11 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Bounds4Components).AllocatorInstance.Data + (longlong)iVar11 * 8;
      iVar11 = ((this->Bounds4Components).ArrayNum - iVar11) + -8;
      if (iVar11 != 0) {
        memmove(pFVar3,pFVar3 + 0x40,(longlong)iVar11 << 3);
      }
      piVar1 = &(this->Bounds4Components).ArrayNum;
      *piVar1 = *piVar1 + -8;
      bVar5 = true;
    }
LAB_14885c418:
    if (bVar5) {
      uVar10 = 0;
      if (0 < (this->FreeBoundIndices).ArrayNum) {
        pTVar2 = &this->FreeBoundIndices;
        lVar9 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar10 < (this->FreeBoundIndices).ArrayNum) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          if ((this->Bounds4Components).ArrayNum <=
              *(int *)((pTVar2->AllocatorInstance).Data + lVar9)) {
            uVar7 = 0;
            if ((int)uVar10 < (this->FreeBoundIndices).ArrayNum) {
              uVar7 = ~uVar10 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar11 = (this->FreeBoundIndices).ArrayNum;
            pFVar3 = (pTVar2->AllocatorInstance).Data;
            iVar8 = ~uVar10 + iVar11;
            if (1 < iVar8) {
              iVar8 = 1;
            }
            if (iVar8 != 0) {
              memmove(pFVar3 + (longlong)(int)uVar10 * 4,pFVar3 + (longlong)(iVar11 - iVar8) * 4,
                      (longlong)iVar8 << 2);
            }
            piVar1 = &(this->FreeBoundIndices).ArrayNum;
            *piVar1 = *piVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&pTVar2->AllocatorInstance,(this->FreeBoundIndices).ArrayNum,
                       &(this->FreeBoundIndices).ArrayMax);
            uVar10 = uVar10 - 1;
            lVar9 = lVar9 + -4;
          }
          uVar10 = uVar10 + 1;
          lVar9 = lVar9 + 4;
        } while ((int)uVar10 < (this->FreeBoundIndices).ArrayNum);
      }
      if (((int)this->_padding_ << 2 != (this->Bounds4Components).ArrayNum) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumBounds4() * 4 == NumBounds()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                             ,0x414,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  return;
}

// UpdateBounds @ 148861260

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
FRenderAssetInstanceState::UpdateBounds
          (FRenderAssetInstanceState *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  
  if ((this->bIsDynamicInstanceState == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsDynamicInstanceState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x2c5,
                         L"Bounds shouldn\'t be updated after creation unless the instances are dynamic"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  piVar7 = TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
           ::Find((TMapBase<UPrimitiveComponent_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPrimitiveComponent_const_*,int,0>_>
                   *)&this->ComponentMap,param_1);
  if (piVar7 != (int *)0x0) {
    iVar1 = *piVar7;
    while (iVar1 != -1) {
      uVar8 = iVar1 / 0x199;
      uVar6 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar9 = (ulonglong)(uint)(iVar1 % 0x199);
      lVar2 = *(longlong *)(this->_padding_ + (longlong)(int)uVar8 * 8);
      iVar1 = *(int *)(lVar2 + 0x10 + uVar9 * 0x28);
      if (iVar1 != -1) {
        uVar6 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
        uVar8 = 0;
        if ((int)uVar6 < (int)this->_padding_) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar3 = this->_padding_;
        fVar10 = UPrimitiveComponent::GetLastRenderTimeOnScreen(param_1);
        fVar11 = (float)(**(code **)(*(longlong *)param_1 + 0x7a0))(param_1);
        uVar8 = *(uint *)(lVar2 + 0x10 + uVar9 * 0x28) & 0x80000003;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
        }
        FBounds4::FullUpdate
                  ((FBounds4 *)((longlong)(int)uVar6 * 0x150 + lVar3),uVar8,
                   (TVector<double> *)&param_1->field_0x110,(TVector<double> *)&param_1->field_0x128
                   ,fVar11,fVar10);
      }
      iVar1 = *(int *)(lVar2 + 0x24 + uVar9 * 0x28);
    }
  }
  return;
}

// UpdateBounds @ 148861440

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall FRenderAssetInstanceState::UpdateBounds(FRenderAssetInstanceState *this,int param_1)

{
  UPrimitiveComponent *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  
  if ((this->bIsDynamicInstanceState == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsDynamicInstanceState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                         ,0x2d9,
                         L"Bounds shouldn\'t be updated after creation unless the instances are dynamic"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((param_1 < 0) || ((this->Bounds4Components).ArrayNum <= param_1)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6552944750125646555>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                       ,0x2db,"Bounds4Components.IsValidIndex(BoundIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  else {
    uVar5 = 0;
    if (param_1 < (this->Bounds4Components).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    this_00 = *(UPrimitiveComponent **)
               ((this->Bounds4Components).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (this_00 != (UPrimitiveComponent *)0x0) {
      uVar6 = (uint)param_1 >> 2;
      uVar5 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      lVar1 = this->_padding_;
      fVar7 = UPrimitiveComponent::GetLastRenderTimeOnScreen(this_00);
      fVar8 = (float)(**(code **)(*(longlong *)this_00 + 0x7a0))(this_00);
      FBounds4::FullUpdate
                ((FBounds4 *)(lVar1 + (ulonglong)uVar6 * 0x150),param_1 & 3,
                 (TVector<double> *)&this_00->field_0x110,(TVector<double> *)&this_00->field_0x128,
                 fVar8,fVar7);
      return true;
    }
  }
  return false;
}

// UpdateLastRenderTimeAndMaxDrawDistance @ 148861db0

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
FRenderAssetInstanceState::UpdateLastRenderTimeAndMaxDrawDistance
          (FRenderAssetInstanceState *this,int param_1)

{
  UPrimitiveComponent *this_00;
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  UPrimitiveComponent *pUVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  
  if ((param_1 < 0) || ((this->Bounds4Components).ArrayNum <= param_1)) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6552944750125646611>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\TextureInstanceState.cpp"
                       ,0x313,"Bounds4Components.IsValidIndex(BoundIndex)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    uVar5 = 0;
    if (param_1 < (this->Bounds4Components).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = *(UPrimitiveComponent **)
               ((this->Bounds4Components).AllocatorInstance.Data + (longlong)param_1 * 8);
    if (this_00 != (UPrimitiveComponent *)0x0) {
      uVar6 = (uint)param_1 >> 2;
      uVar5 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar1 = this->_padding_;
      fVar7 = UPrimitiveComponent::GetLastRenderTimeOnScreen(this_00);
      *(float *)(lVar1 + (ulonglong)uVar6 * 0x150 + 0x140 + (ulonglong)(param_1 & 3) * 4) = fVar7;
      pUVar4 = UPrimitiveComponent::GetLODParentPrimitive(this_00);
      if (pUVar4 != (UPrimitiveComponent *)0x0) {
        dVar9 = *(double *)&this_00->field_0x110 - *(double *)&pUVar4->field_0x110;
        dVar12 = *(double *)&this_00->field_0x118 - *(double *)&pUVar4->field_0x118;
        dVar8 = *(double *)&this_00->field_0x120 - *(double *)&pUVar4->field_0x120;
        auVar10._0_8_ = dVar9 * dVar9;
        auVar10._8_8_ = 0;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = dVar12 * dVar12 + auVar10._0_8_ + dVar8 * dVar8;
        auVar11 = sqrtpd(auVar10,auVar11);
        uVar5 = 0;
        if ((int)uVar6 < (int)this->_padding_) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        fVar7 = (float)(auVar11._0_8_ +
                       (double)((float)*(double *)&pUVar4->field_0x140 + pUVar4->MinDrawDistance));
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        *(float *)((ulonglong)(param_1 & 3) * 4 + (ulonglong)uVar6 * 0x150 + 0x130 + this->_padding_
                  ) = fVar7 * fVar7;
      }
    }
  }
  return;
}

