// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 12

// FDefaultStereoLayers @ 14cf7d1b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FDefaultStereoLayers * __thiscall
FDefaultStereoLayers::FDefaultStereoLayers
          (FDefaultStereoLayers *this,FAutoRegister *param_1,FHeadMountedDisplayBase *param_2)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined1 auStackY_d8 [32];
  undefined1 local_98 [64];
  void *local_58;
  ulonglong local_50;
  uint local_48;
  bool local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  *(undefined2 *)&this->field_0x8 = 0;
  puVar1 = &this->field_0x58;
  *(undefined ***)this = &___7IStereoLayers__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  *(double *)&this->field_0x20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  *(undefined8 *)&this->field_0x28 = uVar10;
  *(double *)&this->field_0x30 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_98._16_8_ = 0;
  local_98._24_8_ = 0;
  *(undefined8 *)&this->field_0x38 = 0x3ff0000000000000;
  *(undefined8 *)&this->field_0x40 = 0x3ff0000000000000;
  *(undefined ***)this = &___7__TStereoLayerManager_UFLayerDesc_IStereoLayers____6B_;
  local_98._56_8_ = 0;
  local_50 = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  this->field_0x50 = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  *(undefined8 *)puVar1 = 0;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_48 = 1;
  local_44 = true;
  *(undefined4 *)&this->field_0x60 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,1,0,(ForAnyElementType *)puVar1,1,(int *)&this->field_0x64);
  ConstructItems<TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,TStereoLayerManager<IStereoLayers::FLayerDesc>::FLayerData,int>
            (*(void **)puVar1,(FLayerData *)local_98,1);
  local_50 = local_50 & 0xffffffff00000000;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,IStereoLayers::FLayerDesc>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  *(undefined2 *)&this->field_0x70 = 0;
  *(undefined ***)&this->field_0x68 = &___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)&this->field_0x68);
  *(undefined ***)this =
       &FSimpleLayerManager::_vftable__for__TStereoLayerManager<IStereoLayers::FLayerDesc>__;
  *(undefined ***)&this->field_0x68 = &FSimpleLayerManager::_vftable__for__FGCObject__;
  FSceneViewExtensionBase::FSceneViewExtensionBase
            ((FSceneViewExtensionBase *)&this->field_0x78,param_1);
  this->HMDDevice = param_2;
  *(undefined ***)this = &_vftable__for__TStereoLayerManager<IStereoLayers::FLayerDesc>__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__FGCObject__;
  *(undefined ***)&this->field_0x78 = &___7FDefaultStereoLayers__6B_;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar4._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar4._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar4._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->HmdTransform).Rotation.XY.m128d_f64 = auVar4;
  auVar5._8_4_ = SUB84((double)fVar3,0);
  auVar5._0_8_ = (double)fVar2;
  auVar5._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->HmdTransform).Rotation.ZW.m128d_f64 = auVar5;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->HmdTransform).Translation.XY.m128d_f64 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar3,0);
  auVar7._0_8_ = (double)fVar2;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->HmdTransform).Translation.ZW.m128d_f64 = auVar7;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->HmdTransform).Scale3D.XY.m128d_f64 = auVar8;
  auVar9._8_4_ = SUB84((double)fVar3,0);
  auVar9._0_8_ = (double)fVar2;
  auVar9._12_4_ = (int)((ulonglong)(double)fVar3 >> 0x20);
  *(undefined1 (*) [16])(this->HmdTransform).Scale3D.ZW.m128d_f64 = auVar9;
  (this->SortedSceneLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedSceneLayers).ArrayNum = 0;
  (this->SortedSceneLayers).ArrayMax = 0;
  (this->SortedOverlayLayers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SortedOverlayLayers).ArrayNum = 0;
  (this->SortedOverlayLayers).ArrayMax = 0;
  this->bClearLayerBackground = false;
  return this;
}

// operator() @ 14cf7f6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_1>::operator()
          (void *this,uint param_1,FLayerDesc *param_2)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  FStereoLayerToRenderTransfer *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_1e8 [32];
  FStereoLayerToRenderTransfer *local_1c8;
  FStereoLayerToRenderTransfer *local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  FStereoLayerToRenderTransfer local_198;
  FStereoLayerToRenderTransfer local_d8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  bVar5 = IStereoLayers::FLayerDesc::IsVisible(param_2);
  if (bVar5) {
    if (param_2->PositionType == FaceLocked) {
      pFVar2 = *(ForAnyElementType **)this;
      FDefaultStereoLayers::FStereoLayerToRenderTransfer::FStereoLayerToRenderTransfer
                (&local_198,param_2);
      pFVar3 = (FStereoLayerToRenderTransfer *)pFVar2->Data;
      if ((pFVar3 <= &local_198) &&
         (lVar7 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4), &local_198 < pFVar3 + lVar7)) {
        local_1b0 = (longlong)*(int *)&pFVar2[1].Data;
        local_1a8 = 0xc0;
        local_1c8 = &local_198;
        local_1c0 = pFVar3;
        local_1b8 = lVar7;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10c0,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar6 + 1;
      FDefaultStereoLayers::FStereoLayerToRenderTransfer::FStereoLayerToRenderTransfer
                ((FStereoLayerToRenderTransfer *)(pFVar2->Data + (longlong)iVar6 * 0xc0),&local_198)
      ;
    }
    else {
      pFVar2 = *(ForAnyElementType **)((longlong)this + 8);
      FDefaultStereoLayers::FStereoLayerToRenderTransfer::FStereoLayerToRenderTransfer
                (&local_d8,param_2);
      pFVar3 = (FStereoLayerToRenderTransfer *)pFVar2->Data;
      if ((pFVar3 <= &local_d8) &&
         (lVar7 = (longlong)*(int *)((longlong)&pFVar2[1].Data + 4), &local_d8 < pFVar3 + lVar7)) {
        local_1b0 = (longlong)*(int *)&pFVar2[1].Data;
        local_1a8 = 0xc0;
        local_1c8 = &local_d8;
        local_1c0 = pFVar3;
        local_1b8 = lVar7;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar6 = *(int *)&pFVar2[1].Data;
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x10c0,pFVar2,piVar1);
      }
      *(int *)&pFVar2[1].Data = iVar6 + 1;
      FDefaultStereoLayers::FStereoLayerToRenderTransfer::FStereoLayerToRenderTransfer
                ((FStereoLayerToRenderTransfer *)(pFVar2->Data + (longlong)iVar6 * 0xc0),&local_d8);
      local_198.Texture_Deprecated.Reference = local_d8.Texture_Deprecated.Reference;
    }
    if (local_198.Texture_Deprecated.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_198.Texture_Deprecated.Reference);
    }
  }
  return;
}

// operator() @ 14cf7f8c0

void __thiscall
`FDefaultStereoLayers::PostRenderView_RenderThread'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  int *piVar2;
  FDefaultStereoLayers_LayerRenderParams *pFVar3;
  FStereoLayerToRender *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> *pTVar8;
  undefined4 uStack_4c;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> local_48;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> local_38;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> local_28 [2];
  
  piVar2 = *(int **)((longlong)this + 8);
  FRHICommandList::SetViewport
            ((FRHICommandList *)param_1,(float)*piVar2,(float)piVar2[1],0.0,(float)piVar2[2],
             (float)piVar2[3],__real_3f800000);
  if (*(char *)(*(longlong *)this + 0x130) != '\0') {
    DrawClearQuadMRT((FRHICommandList *)param_1,true,1,&FLinearColor::Black,false,0.0,false,0);
  }
  pFVar3 = *(FDefaultStereoLayers_LayerRenderParams **)((longlong)this + 8);
  pFVar4 = *(FStereoLayerToRender **)(*(longlong *)this + 0x110);
  iVar1 = *(int *)(*(longlong *)this + 0x118);
  if (iVar1 < 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar1;
  local_48.DataPtr = pFVar4;
  FDefaultStereoLayers::StereoLayerRender(param_1,&local_48,pFVar3);
  if (*(char *)((longlong)this + 0x20) == '\0') {
    puVar5 = *(undefined8 **)((longlong)this + 8);
    *puVar5 = *(undefined8 *)((longlong)this + 0x10);
    puVar5[1] = *(undefined8 *)((longlong)this + 0x18);
    pFVar3 = *(FDefaultStereoLayers_LayerRenderParams **)((longlong)this + 8);
    pTVar8 = TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int>::
             TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int><TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_>_&,TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_>_>
                       (local_28,(TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_>
                                  *)(*(longlong *)this + 0x120));
    local_38.DataPtr = pTVar8->DataPtr;
    local_38.ArrayNum = pTVar8->ArrayNum;
    local_38._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    FDefaultStereoLayers::StereoLayerRender(param_1,&local_38,pFVar3);
  }
  return;
}

// operator() @ 14cf7fb00

void __thiscall
`FDefaultStereoLayers::PostRenderView_RenderThread'::__l19::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  FDefaultStereoLayers_LayerRenderParams *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uStack_3c;
  FLinearColor_u_0 local_38;
  TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> local_28 [2];
  
  puVar2 = *(undefined8 **)((longlong)this + 8);
  *puVar2 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 0x18);
  local_38._0_8_ = 0;
  local_38._8_8_ = 0;
  DrawClearQuadMRT((FRHICommandList *)param_1,true,1,(FLinearColor *)&local_38._s_0,false,0.0,false,
                   0);
  piVar3 = *(int **)((longlong)this + 8);
  FRHICommandList::SetViewport
            ((FRHICommandList *)param_1,(float)*piVar3,(float)piVar3[1],0.0,(float)piVar3[2],
             (float)piVar3[3],__real_3f800000);
  pFVar4 = *(FDefaultStereoLayers_LayerRenderParams **)((longlong)this + 8);
  local_28[0].DataPtr = *(FStereoLayerToRender **)(*(longlong *)this + 0x120);
  iVar1 = *(int *)(*(longlong *)this + 0x128);
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_28[0]._12_4_ = uStack_3c;
  local_28[0].ArrayNum = iVar1;
  FDefaultStereoLayers::StereoLayerRender(param_1,local_28,pFVar4);
  return;
}

// operator() @ 14cf7fc40

void __thiscall
`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_3>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  FStereoLayerToRender *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForAnyElementType *pFVar9;
  
  TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<FDefaultStereoLayers::FStereoLayerToRender,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)this + 0x110),*(int *)((longlong)this + 0x10));
  lVar4 = *(longlong *)this;
  pFVar9 = (ForAnyElementType *)(lVar4 + 0x110);
  if (pFVar9 == (ForAnyElementType *)((longlong)this + 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar2 = *(int *)((longlong)this + 0x10);
  if (iVar2 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc0,0x10,iVar2,pFVar9,(int *)(lVar4 + 0x118),(int *)(lVar4 + 0x11c));
    ConstructItems<FDefaultStereoLayers::FStereoLayerToRender,FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
              (pFVar9->Data + (longlong)iVar8 * 0xc0,
               (FStereoLayerToRenderTransfer *)((ForAnyElementType *)((longlong)this + 8))->Data,
               iVar2);
  }
  lVar4 = *(longlong *)this;
  uVar3 = *(uint *)((longlong)this + 0x20);
  if (-1 < (int)uVar3) {
    puVar1 = (uint *)(lVar4 + 300);
    pFVar5 = (FStereoLayerToRender *)((ForAnyElementType *)(lVar4 + 0x120))->Data;
    if ((int)*puVar1 < (int)uVar3) {
      DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int>(pFVar5,*(int *)(lVar4 + 0x128));
      *(undefined4 *)(lVar4 + 0x128) = 0;
      if (*puVar1 != uVar3) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,0x10,uVar3,(ForAnyElementType *)(lVar4 + 0x120),0,(int *)puVar1);
      }
    }
    else {
      DestructItems<FDefaultStereoLayers::FStereoLayerToRender,int>(pFVar5,*(int *)(lVar4 + 0x128));
      *(undefined4 *)(lVar4 + 0x128) = 0;
    }
    lVar4 = *(longlong *)this;
    pFVar9 = (ForAnyElementType *)(lVar4 + 0x120);
    if (pFVar9 == (ForAnyElementType *)((longlong)this + 0x18)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar2 = *(int *)((longlong)this + 0x20);
    if (iVar2 != 0) {
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xc0,0x10,iVar2,pFVar9,(int *)(lVar4 + 0x128),(int *)(lVar4 + 300));
      ConstructItems<FDefaultStereoLayers::FStereoLayerToRender,FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
                (pFVar9->Data + (longlong)iVar8 * 0xc0,
                 (FStereoLayerToRenderTransfer *)
                 ((ForAnyElementType *)((longlong)this + 0x18))->Data,iVar2);
    }
    *(undefined1 *)(*(longlong *)this + 0x130) = *(undefined1 *)((longlong)this + 0x28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// BeginRenderViewFamily @ 14cf83430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultStereoLayers::BeginRenderViewFamily(FDefaultStereoLayers *this,FSceneViewFamily *param_1)

{
  TStereoLayerManager<IStereoLayers::FLayerDesc> *this_00;
  code *pcVar1;
  FStereoLayerToRenderTransfer *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FStereoLayerToRenderTransfer *pFVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar10;
  code **ppcVar11;
  ulonglong uVar12;
  undefined1 auStack_128 [32];
  FIdentityFunctor local_108;
  undefined1 local_107 [7];
  FStereoLayerToRenderTransfer *local_100;
  undefined8 local_f8;
  FStereoLayerToRenderTransfer *local_f0;
  undefined8 local_e8;
  code *local_d8 [2];
  undefined **local_c8;
  FStereoLayerToRenderTransfer **local_c0;
  FStereoLayerToRenderTransfer **local_b8;
  undefined8 local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_128;
  bVar8 = IsInGameThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Public\\StereoLayerManager.h"
                         ,0x7d,L""), bVar8)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_00 = (TStereoLayerManager<IStereoLayers::FLayerDesc> *)
            (this[-1].HmdTransform.Rotation.ZW.m128d_f64 + 1);
  if ((char)this[-1].SortedSceneLayers.ArrayNum == '\0') {
    return;
  }
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_c0 = &local_100;
  local_b8 = &local_f0;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_1>,void,unsigned_int,IStereoLayers::FLayerDesc_&>
                ::Call;
  local_f0 = (FStereoLayerToRenderTransfer *)0x0;
  local_e8 = 0;
  local_100 = (FStereoLayerToRenderTransfer *)0x0;
  local_f8 = 0;
  local_b0 = 0;
  TStereoLayerManager<IStereoLayers::FLayerDesc>::ForEachLayer
            (this_00,(TFunction<void___cdecl(unsigned_int,IStereoLayers::FLayerDesc_&)> *)local_d8,
             true);
  local_107[0] = 0;
  AlgoImpl::
  IntroSortInternal<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_2>_>_>
            (local_f0,(int)local_e8,local_108,(<lambda_2> *)local_107);
  AlgoImpl::
  IntroSortInternal<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int,FIdentityFunctor,TDereferenceWrapper<FDefaultStereoLayers::FStereoLayerToRenderTransfer,_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::<lambda_2>_>_>
            (local_100,(int)local_f8,local_108,(<lambda_2> *)local_107);
  if (*(char *)this[-1].HmdTransform.Translation.XY.m128d_f64 == '\0') {
    cVar9 = (**(code **)(this_00->_padding_ + 0x40))(this_00);
    local_108 = (FIdentityFunctor)0x0;
    if (cVar9 != '\0') goto LAB_14cf83563;
  }
  local_108 = (FIdentityFunctor)0x1;
LAB_14cf83563:
  pFVar5 = local_f0;
  pFVar2 = local_100;
  uVar6 = (int)local_e8;
  uVar7 = local_e8._4_4_;
  uVar3 = (int)local_f8;
  local_f0 = (FStereoLayerToRenderTransfer *)0x0;
  local_e8 = 0;
  local_100 = (FStereoLayerToRenderTransfer *)0x0;
  uVar4 = local_f8._4_4_;
  local_f8 = 0;
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x38,8);
  local_80[2] = (code *)pFVar5;
  *local_80 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FDefaultStereoLayers::BeginRenderViewFamily'::`2'::<lambda_3>,1,1>
                       ::_vftable_;
  local_80[1] = (code *)this_00;
  *(undefined4 *)(local_80 + 3) = uVar6;
  *(undefined4 *)((longlong)local_80 + 0x1c) = uVar7;
  local_80[4] = (code *)pFVar2;
  *(undefined4 *)(local_80 + 5) = uVar3;
  *(undefined4 *)((longlong)local_80 + 0x2c) = uVar4;
  *(FIdentityFunctor *)(local_80 + 6) = local_108;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::<lambda_3>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FDefaultStereoLayers::BeginRenderViewFamily_::__l2::TSTR_FDefaultStereoLayers_CommitLayersToRender239>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_78[0] = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_68[0] = local_98[0];
    local_68[1] = local_98[1];
    local_68[2] = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`FDefaultStereoLayers::BeginRenderViewFamily'::__l2::TSTR_FDefaultStereoLayers_CommitLayersToRender239>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar10);
    uVar12 = (ulonglong)local_48;
    if ((2 < uVar12) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar8)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_78[0] != (code *)0x0) {
        ppcVar11 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar11 = local_50;
        }
        (**(code **)(*ppcVar11 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])();
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar11 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar11 = local_80;
    }
    (**(code **)(*ppcVar11 + 0x10))();
  }
  DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
            ((FStereoLayerToRenderTransfer *)0x0,0);
  DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>
            ((FStereoLayerToRenderTransfer *)0x0,0);
  DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>(local_100,(int)local_f8);
  if (local_100 != (FStereoLayerToRenderTransfer *)0x0) {
    FMemory::Free(local_100);
  }
  DestructItems<FDefaultStereoLayers::FStereoLayerToRenderTransfer,int>(local_f0,(int)local_e8);
  if (local_f0 != (FStereoLayerToRenderTransfer *)0x0) {
    FMemory::Free(local_f0);
  }
  return;
}

// GetAllocatedTexture @ 14cf8dc40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultStereoLayers::GetAllocatedTexture
          (FDefaultStereoLayers *this,uint param_1,TRefCountPtr<FRHITexture> *param_2,
          TRefCountPtr<FRHITexture> *param_3)

{
  int iVar1;
  FRHITexture *pFVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultStereoLayers.cpp"
                         ,0x181,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = param_2->Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    param_2->Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar2 = param_3->Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    param_3->Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  iVar1 = (this->SortedSceneLayers).ArrayNum;
  pFVar5 = (this->SortedSceneLayers).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0xc0;
  while( true ) {
    if ((this->SortedSceneLayers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDefaultStereoLayers::FStereoLayerToRender,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(uint *)pFVar5 == param_1) goto LAB_14cf8dd28;
    pFVar5 = pFVar5 + 0xc0;
  }
  iVar1 = (this->SortedOverlayLayers).ArrayNum;
  pFVar5 = (this->SortedOverlayLayers).AllocatorInstance.Data;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0xc0;
  while( true ) {
    if ((this->SortedOverlayLayers).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FDefaultStereoLayers::FStereoLayerToRender,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res18);
    }
    if (pFVar5 == pFVar6) {
      return;
    }
    if (*(uint *)pFVar5 == param_1) break;
    pFVar5 = pFVar5 + 0xc0;
  }
LAB_14cf8dd28:
  pFVar2 = *(FRHITexture **)(pFVar5 + 0xb0);
  this_00 = param_2->Reference;
  if (this_00 != pFVar2) {
    param_2->Reference = pFVar2;
    if (pFVar2 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar2);
    }
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return;
}

// GetDebugLayerTexturesImpl_RenderThread @ 14cf8eaf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
FDefaultStereoLayers::GetDebugLayerTexturesImpl_RenderThread
          (FDefaultStereoLayers *this,
          TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  ForElementType<TRefCountPtr<FRHITexture>_> FVar2;
  FRHIResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar8
  ;
  ForElementType<TRefCountPtr<FRHITexture>_> FVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  ForElementType<TRefCountPtr<FRHITexture>_> FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FRHITexture>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 2;
  pFVar11 = (this->SortedSceneLayers).AllocatorInstance.Data;
  iVar1 = (this->SortedSceneLayers).ArrayNum;
  FVar12 = (ForElementType<TRefCountPtr<FRHITexture>_>)((longlong)pFVar11 + 0xb0);
  pFVar10 = pFVar11 + (longlong)iVar1 * 0xc0;
  do {
    if ((this->SortedSceneLayers).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDefaultStereoLayers::FStereoLayerToRender,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar10) {
      pFVar11 = (this->SortedOverlayLayers).AllocatorInstance.Data;
      iVar1 = (this->SortedOverlayLayers).ArrayNum;
      FVar12 = (ForElementType<TRefCountPtr<FRHITexture>_>)((longlong)pFVar11 + 0xb0);
      pFVar10 = pFVar11 + (longlong)iVar1 * 0xc0;
      while( true ) {
        if ((this->SortedOverlayLayers).ArrayNum != iVar1) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FDefaultStereoLayers::FStereoLayerToRender,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar11 == pFVar10) break;
        if (((((byte)*(FScriptContainerElement *)((longlong)FVar12 + -0xa8) & 0x40) != 0) &&
            (*(longlong **)FVar12 != (longlong *)0x0)) &&
           (lVar7 = (**(code **)(**(longlong **)FVar12 + 0x20))(), *(char *)(lVar7 + 0x32) == '\0'))
        {
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<TRefCountPtr<FRHITexture>_>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
            FVar9 = FVar2;
          }
          if ((ulonglong)FVar9 <= (ulonglong)FVar12) {
            FVar9 = (ForElementType<TRefCountPtr<FRHITexture>_>)__return_storage_ptr__;
            if (FVar2 != (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
              FVar9 = FVar2;
            }
            if (((ulonglong)FVar12 <
                 (ulonglong)((longlong)FVar9 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              pTVar8 = (TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                        *)(*pcVar4)();
              return pTVar8;
            }
          }
          iVar6 = __return_storage_ptr__->ArrayNum;
          if (iVar6 == __return_storage_ptr__->ArrayMax) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FRHITexture>_>_>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar6 + 1;
          FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
          FVar9 = (ForElementType<TRefCountPtr<FRHITexture>_>)__return_storage_ptr__;
          if (FVar2 != (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
            FVar9 = FVar2;
          }
          *(undefined8 *)((longlong)FVar9 + (longlong)iVar6 * 8) = 0;
          pFVar3 = *(FRHIResource **)FVar12;
          *(FRHIResource **)((longlong)FVar9 + (longlong)iVar6 * 8) = pFVar3;
          if (pFVar3 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(pFVar3);
          }
        }
        pFVar11 = pFVar11 + 0xc0;
        FVar12 = (ForElementType<TRefCountPtr<FRHITexture>_>)((longlong)FVar12 + 0xc0);
      }
      return __return_storage_ptr__;
    }
    if (((((byte)*(FScriptContainerElement *)((longlong)FVar12 + -0xa8) & 0x40) != 0) &&
        (*(longlong **)FVar12 != (longlong *)0x0)) &&
       (lVar7 = (**(code **)(**(longlong **)FVar12 + 0x20))(), *(char *)(lVar7 + 0x32) == '\0')) {
      FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TRefCountPtr<FRHITexture>_>)__return_storage_ptr__;
      if (FVar2 != (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
        FVar9 = FVar2;
      }
      if ((ulonglong)FVar9 <= (ulonglong)FVar12) {
        FVar9 = (ForElementType<TRefCountPtr<FRHITexture>_>)__return_storage_ptr__;
        if (FVar2 != (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
          FVar9 = FVar2;
        }
        if (((ulonglong)FVar12 <
             (ulonglong)((longlong)FVar9 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                    *)(*pcVar4)();
          return pTVar8;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FRHITexture>_>_>
                          (0x808,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      FVar2 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TRefCountPtr<FRHITexture>_>)__return_storage_ptr__;
      if (FVar2 != (ForElementType<TRefCountPtr<FRHITexture>_>)0x0) {
        FVar9 = FVar2;
      }
      *(undefined8 *)((longlong)FVar9 + (longlong)iVar6 * 8) = 0;
      pFVar3 = *(FRHIResource **)FVar12;
      *(FRHIResource **)((longlong)FVar9 + (longlong)iVar6 * 8) = pFVar3;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar3);
      }
    }
    pFVar11 = pFVar11 + 0xc0;
    FVar12 = (ForElementType<TRefCountPtr<FRHITexture>_>)((longlong)FVar12 + 0xc0);
  } while( true );
}

// GetDebugLayerTextures_RenderThread @ 14cf8edd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
FDefaultStereoLayers::GetDebugLayerTextures_RenderThread
          (FDefaultStereoLayers *this,
          TArray<TRefCountPtr<FRHITexture>,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FRHITexture>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 2;
  return __return_storage_ptr__;
}

// PostRenderView_RenderThread @ 14cf95ce0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FDefaultStereoLayers::PostRenderView_RenderThread
          (FDefaultStereoLayers *this,FRDGBuilder *param_1,FSceneView *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  TRDGHandleRegistry<TRDGHandle<FRDGPass,unsigned_int>,0> *pTVar3;
  uint uVar4;
  FRHITexture *pFVar5;
  longlong lVar6;
  code *pcVar7;
  FRDGTextureSubresourceRange FVar8;
  FRenderLayersPass *pFVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  FRHITexture *this_00;
  FSceneView *pFVar13;
  bool bVar14;
  bool bVar15;
  ERDGPassFlags EVar16;
  int iVar17;
  undefined8 *puVar18;
  FRenderLayersPass *pFVar19;
  FRDGTexture *pFVar20;
  TRefCountPtr<IPooledRenderTarget> TVar21;
  FRDGTextureAccess *pFVar22;
  TMatrix<double> *pTVar23;
  TRotator<double> *pTVar24;
  TInverseRotationMatrix<double> *pTVar25;
  FRDGEventName *pFVar26;
  FShaderParametersMetadata *pFVar27;
  wchar_t *pwVar28;
  FRDGPass *pFVar29;
  ulonglong uVar30;
  FRenderLayersPass *pFVar31;
  FScriptContainerElement *pFVar32;
  longlong lVar33;
  longlong lVar34;
  undefined1 auStackY_13d8 [32];
  undefined1 local_1380;
  undefined1 local_137f [7];
  FRHITexture *local_1378;
  wchar_t *local_1370;
  FSceneView *local_1368;
  undefined8 *local_1360;
  FRenderLayersPass *local_1358;
  FRHITexture *local_1350;
  double *local_1348;
  undefined8 local_1338;
  undefined8 uStack_1330;
  undefined4 local_1328;
  undefined4 uStack_1324;
  undefined4 uStack_1320;
  undefined4 uStack_131c;
  FRenderTargetBinding local_1318;
  FRenderTargetBinding local_1300;
  undefined1 local_12e8 [16];
  undefined1 local_12d8 [16];
  uint local_12c8;
  uint uStack_12c4;
  uint uStack_12c0;
  uint uStack_12bc;
  longlong local_12b8;
  FRDGParameterStruct local_12b0;
  FRDGParameterStruct local_1298;
  TQuat<double> local_1278;
  FRDGEventName local_1258;
  FRDGEventName local_1240;
  uint local_1228;
  uint uStack_1224;
  uint uStack_1220;
  uint uStack_121c;
  uint local_1218;
  uint uStack_1214;
  TQuat<double> local_1208;
  FRDGTextureAccess local_11e8;
  TRotator<double> local_11d0;
  TRotator<double> local_11b8;
  FRDGTextureAccess local_11a0;
  TMatrix<double> local_1188;
  undefined8 local_1108;
  undefined8 local_1100;
  double local_10f8;
  double dStack_10f0;
  double local_10e8;
  double dStack_10e0;
  double local_10d8;
  double dStack_10d0;
  double local_10c8;
  double dStack_10c0;
  double local_10b8;
  double dStack_10b0;
  double local_10a8;
  double dStack_10a0;
  double local_1098;
  double dStack_1090;
  double local_1088;
  double dStack_1080;
  TMatrix<double> local_1078;
  TMatrix<double> local_ff8;
  TMatrix<double> local_f78;
  TMatrix<double> local_ef8;
  TMatrix<double> local_e78;
  TMatrix<double> local_df8;
  TMatrix<double> local_d78;
  TMatrix<double> local_cf8;
  TMatrix<double> local_c78;
  TMatrix<double> local_bf8 [2];
  TMatrix<double> local_af8;
  TMatrix<double> local_a78;
  TMatrix<double> local_9f8;
  double local_978;
  double dStack_970;
  double local_968;
  double dStack_960;
  double local_958;
  double dStack_950;
  double local_948;
  double dStack_940;
  double local_938;
  double dStack_930;
  double local_928;
  double dStack_920;
  double local_918;
  double dStack_910;
  double local_908;
  double dStack_900;
  double local_8f8;
  double dStack_8f0;
  double local_8e8;
  double dStack_8e0;
  double local_8d8;
  double dStack_8d0;
  double local_8c8;
  double dStack_8c0;
  double local_8b8;
  double dStack_8b0;
  double local_8a8;
  double dStack_8a0;
  double local_898;
  double dStack_890;
  double local_888;
  double dStack_880;
  TMatrix<double> local_7f8;
  TMatrix<double> local_778 [3];
  double local_5f8;
  double dStack_5f0;
  double local_5e8;
  double dStack_5e0;
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  double local_5b8;
  double dStack_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  double local_558;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  double local_508;
  double dStack_500;
  undefined1 local_3a0 [40];
  TMatrix<double> local_378;
  TMatrix<double> local_2f8;
  TMatrix<double> local_278;
  TMatrix<double> local_1f8;
  TInverseRotationMatrix<double> local_178;
  TInverseRotationMatrix<double> local_f8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_13d8;
  local_1368 = param_2;
  bVar14 = IStereoRendering::IsStereoEyeView(param_2);
  if (bVar14) {
    local_1338 = *(undefined8 *)&(param_2->UnscaledViewRect).field0_0x0;
    uStack_1330 = *(undefined8 *)((longlong)&(param_2->UnscaledViewRect).field0_0x0 + 8);
    local_1348 = this[-1].HmdTransform.Rotation.ZW.m128d_f64 + 1;
    (**(code **)(**(longlong **)&this->field_0x28 + 0x260))
              (*(longlong **)&this->field_0x28,&local_1378,param_2->StereoViewIndex,&local_1338);
    if (local_1378 == (FRHITexture *)0x0) {
      puVar18 = (undefined8 *)(**(code **)(param_2->Family->RenderTarget->_padding_ + 0x10))();
      this_00 = local_1378;
      pFVar5 = (FRHITexture *)*puVar18;
      if (local_1378 != pFVar5) {
        local_1378 = pFVar5;
        if (pFVar5 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar5);
        }
        if (this_00 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
    }
    local_1328 = (undefined4)local_1338;
    uStack_1324 = local_1338._4_4_;
    uStack_1320 = (undefined4)uStack_1330;
    uStack_131c = uStack_1330._4_4_;
    (**(code **)(**(longlong **)&this->field_0x28 + 600))
              (*(longlong **)&this->field_0x28,&local_1350,param_2->StereoViewIndex,&local_1328);
    bVar14 = local_1350 != (FRHITexture *)0x0;
    pFVar19 = FRDGBuilder::AllocParameters<FRenderLayersPass>(param_1);
    if (bVar14) {
      local_1358 = FRDGBuilder::AllocParameters<FRenderLayersPass>(param_1);
    }
    else {
      local_1358 = (FRenderLayersPass *)0x0;
    }
    uVar4 = *(uint *)&this->HMDDevice;
    uVar30 = (ulonglong)(int)uVar4;
    lVar34 = *(longlong *)&this->field_0x98;
    lVar33 = uVar30 * 0xc0 + lVar34;
    while( true ) {
      if (*(int *)&this->HMDDevice != (int)uVar30) {
        local_1380 = 0;
        `TCheckedPointerIterator<FDefaultStereoLayers::FStereoLayerToRender,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_1380);
      }
      pFVar9 = local_1358;
      if (lVar34 == lVar33) break;
      pFVar5 = *(FRHITexture **)(lVar34 + 0xb0);
      pFVar20 = FRDGBuilder::FindExternalTexture(param_1,pFVar5);
      if (pFVar20 == (FRDGTexture *)0x0) {
        TVar21 = CreateRenderTarget((FRHITexture *)local_12e8,(wchar_t *)pFVar5);
        pFVar20 = FRDGBuilder::RegisterExternalTexture
                            (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar21.Reference,None);
        if ((longlong *)local_12e8._0_8_ != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_12e8._0_8_ + 0x38))();
        }
      }
      pFVar22 = FRDGTextureAccess::FRDGTextureAccess(&local_11a0,pFVar20,SRVGraphics);
      if ((*(FRDGTextureAccess **)&pFVar19->LayerTextures <= pFVar22) &&
         (pFVar22 < *(FRDGTextureAccess **)&pFVar19->LayerTextures +
                    *(int *)&(pFVar19->LayerTextures).field_0xc)) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar17 = *(int *)&(pFVar19->LayerTextures).field_0x8;
      puVar1 = &(pFVar19->LayerTextures).field_0xc;
      if (iVar17 == *(int *)puVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>_>
                           (0x818,(ForElementType<FRDGTextureAccess> *)pFVar19,(int *)puVar1);
      }
      lVar34 = lVar34 + 0xc0;
      *(int *)&(pFVar19->LayerTextures).field_0x8 = iVar17 + 1;
      FVar8 = pFVar22->SubresourceRange;
      lVar6 = *(longlong *)&pFVar19->LayerTextures;
      puVar18 = (undefined8 *)(lVar6 + (longlong)iVar17 * 0x18);
      *puVar18 = pFVar22->Texture;
      *(FRDGTextureSubresourceRange *)(puVar18 + 1) = FVar8;
      *(undefined8 *)(lVar6 + 0x10 + (longlong)iVar17 * 0x18) = *(undefined8 *)&pFVar22->Access;
      uVar30 = (ulonglong)uVar4;
    }
    uVar4 = *(uint *)(this->HmdTransform).Rotation.XY.m128d_f64;
    uVar30 = (ulonglong)(int)uVar4;
    lVar34 = *(longlong *)&this->field_0xa8;
    local_1370 = (wchar_t *)(uVar30 * 0xc0 + lVar34);
    while( true ) {
      pwVar28 = local_1370;
      if (*(int *)(this->HmdTransform).Rotation.XY.m128d_f64 != (int)uVar30) {
        local_137f[0] = 0;
        `TCheckedPointerIterator<FDefaultStereoLayers::FStereoLayerToRender,int,0>::operator!='::
        __l2::<lambda_1>::operator()(local_137f);
      }
      pFVar13 = local_1368;
      if ((wchar_t *)lVar34 == pwVar28) break;
      pFVar5 = *(FRHITexture **)(lVar34 + 0xb0);
      pFVar20 = FRDGBuilder::FindExternalTexture(param_1,pFVar5);
      if (pFVar20 == (FRDGTexture *)0x0) {
        TVar21 = CreateRenderTarget((FRHITexture *)(local_12e8 + 8),(wchar_t *)pFVar5);
        pFVar20 = FRDGBuilder::RegisterExternalTexture
                            (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar21.Reference,None);
        if ((longlong *)local_12e8._8_8_ != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_12e8._8_8_ + 0x38))();
        }
      }
      pFVar31 = pFVar19;
      if (pFVar9 != (FRenderLayersPass *)0x0) {
        pFVar31 = pFVar9;
      }
      pFVar22 = FRDGTextureAccess::FRDGTextureAccess(&local_11e8,pFVar20,SRVGraphics);
      if ((*(FRDGTextureAccess **)&pFVar31->LayerTextures <= pFVar22) &&
         (pFVar22 < *(FRDGTextureAccess **)&pFVar31->LayerTextures +
                    *(int *)&(pFVar31->LayerTextures).field_0xc)) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar17 = *(int *)&(pFVar31->LayerTextures).field_0x8;
      puVar1 = &(pFVar31->LayerTextures).field_0xc;
      if (iVar17 == *(int *)puVar1) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGTextureAccess>_>
                           (0x818,(ForElementType<FRDGTextureAccess> *)pFVar31,(int *)puVar1);
      }
      lVar34 = lVar34 + 0xc0;
      *(int *)&(pFVar31->LayerTextures).field_0x8 = iVar17 + 1;
      FVar8 = pFVar22->SubresourceRange;
      lVar33 = *(longlong *)&pFVar31->LayerTextures;
      puVar18 = (undefined8 *)(lVar33 + (longlong)iVar17 * 0x18);
      *puVar18 = pFVar22->Texture;
      *(FRDGTextureSubresourceRange *)(puVar18 + 1) = FVar8;
      *(undefined8 *)(lVar33 + 0x10 + (longlong)iVar17 * 0x18) = *(undefined8 *)&pFVar22->Access;
      uVar30 = (ulonglong)uVar4;
    }
    memcpy(local_bf8,&local_1368->ViewMatrices,0x880);
    local_ef8.M[3][3] = __real_3ff0000000000000;
    if (__real_3ff0000000000000 <= local_bf8[0].M[3][3]) {
      local_bf8[0].M[3][0] = local_bf8[0].M[3][0] - (double)local_3a0._0_8_;
      local_bf8[0].M[3][1] = local_bf8[0].M[3][1] - (double)local_3a0._8_8_;
    }
    else {
      local_bf8[0].M[2][0] = local_bf8[0].M[2][0] - (double)local_3a0._0_8_;
      local_bf8[0].M[2][1] = local_bf8[0].M[2][1] - (double)local_3a0._8_8_;
    }
    pTVar23 = FViewMatrices::InvertProjectionMatrix(&local_1188,local_bf8);
    local_af8.M[0][0] = pTVar23->M[0][0];
    local_af8.M[0][1] = pTVar23->M[0][1];
    local_af8.M[0][2] = pTVar23->M[0][2];
    local_af8.M[0][3] = pTVar23->M[0][3];
    local_af8.M[1][0] = pTVar23->M[1][0];
    local_af8.M[1][1] = pTVar23->M[1][1];
    local_af8.M[1][2] = pTVar23->M[1][2];
    local_af8.M[1][3] = pTVar23->M[1][3];
    local_af8.M[2][0] = pTVar23->M[2][0];
    local_af8.M[2][1] = pTVar23->M[2][1];
    local_af8.M[2][2] = pTVar23->M[2][2];
    local_af8.M[2][3] = pTVar23->M[2][3];
    local_af8.M[3][0] = pTVar23->M[3][0];
    local_af8.M[3][1] = pTVar23->M[3][1];
    local_af8.M[3][2] = pTVar23->M[3][2];
    local_af8.M[3][3] = pTVar23->M[3][3];
    local_3a0._0_16_ = (undefined1  [16])UE::Math::TVector2<double>::ZeroVector.field0_0x0;
    VectorMatrixMultiply(&local_e78,&local_a78,local_bf8);
    local_978 = local_e78.M[0][0];
    dStack_970 = local_e78.M[0][1];
    local_968 = local_e78.M[0][2];
    dStack_960 = local_e78.M[0][3];
    local_958 = local_e78.M[1][0];
    dStack_950 = local_e78.M[1][1];
    local_948 = local_e78.M[1][2];
    dStack_940 = local_e78.M[1][3];
    local_938 = local_e78.M[2][0];
    dStack_930 = local_e78.M[2][1];
    local_928 = local_e78.M[2][2];
    dStack_920 = local_e78.M[2][3];
    local_918 = local_e78.M[3][0];
    dStack_910 = local_e78.M[3][1];
    local_908 = local_e78.M[3][2];
    dStack_900 = local_e78.M[3][3];
    VectorMatrixMultiply(&local_df8,&local_af8,&local_9f8);
    local_8f8 = local_df8.M[0][0];
    dStack_8f0 = local_df8.M[0][1];
    local_8e8 = local_df8.M[0][2];
    dStack_8e0 = local_df8.M[0][3];
    local_8d8 = local_df8.M[1][0];
    dStack_8d0 = local_df8.M[1][1];
    local_8c8 = local_df8.M[1][2];
    dStack_8c0 = local_df8.M[1][3];
    local_8b8 = local_df8.M[2][0];
    dStack_8b0 = local_df8.M[2][1];
    local_8a8 = local_df8.M[2][2];
    dStack_8a0 = local_df8.M[2][3];
    local_898 = local_df8.M[3][0];
    dStack_890 = local_df8.M[3][1];
    local_888 = local_df8.M[3][2];
    dStack_880 = local_df8.M[3][3];
    VectorMatrixMultiply(&local_d78,&local_7f8,local_bf8);
    local_5f8 = local_d78.M[0][0];
    dStack_5f0 = local_d78.M[0][1];
    local_5e8 = local_d78.M[0][2];
    dStack_5e0 = local_d78.M[0][3];
    local_5d8 = local_d78.M[1][0];
    dStack_5d0 = local_d78.M[1][1];
    local_5c8 = local_d78.M[1][2];
    dStack_5c0 = local_d78.M[1][3];
    local_5b8 = local_d78.M[2][0];
    dStack_5b0 = local_d78.M[2][1];
    local_5a8 = local_d78.M[2][2];
    dStack_5a0 = local_d78.M[2][3];
    local_598 = local_d78.M[3][0];
    dStack_590 = local_d78.M[3][1];
    local_588 = local_d78.M[3][2];
    dStack_580 = local_d78.M[3][3];
    VectorMatrixMultiply(&local_cf8,&local_af8,local_778);
    local_578 = local_cf8.M[0][0];
    dStack_570 = local_cf8.M[0][1];
    local_568 = local_cf8.M[0][2];
    dStack_560 = local_cf8.M[0][3];
    local_558 = local_cf8.M[1][0];
    dStack_550 = local_cf8.M[1][1];
    local_548 = local_cf8.M[1][2];
    dStack_540 = local_cf8.M[1][3];
    local_538 = local_cf8.M[2][0];
    dStack_530 = local_cf8.M[2][1];
    local_528 = local_cf8.M[2][2];
    dStack_520 = local_cf8.M[2][3];
    local_518 = local_cf8.M[3][0]._0_4_;
    uStack_514 = local_cf8.M[3][0]._4_4_;
    uStack_510 = local_cf8.M[3][1]._0_4_;
    uStack_50c = local_cf8.M[3][1]._4_4_;
    local_508 = local_cf8.M[3][2];
    dStack_500 = local_cf8.M[3][3];
    (**(code **)(**(longlong **)&this->field_0x28 + 0x60))
              (*(longlong **)&this->field_0x28,0,pFVar13->StereoViewIndex,&local_1208);
    dVar12 = _UNK_150689518;
    dVar11 = ___xmm_00000000000000003ff0000000000000;
    uVar10 = __xmm_80000000000000008000000000000000._4_4_;
    uVar4 = (uint)__xmm_80000000000000008000000000000000;
    local_f78.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_f78.M[1][1] = _UNK_15061cbc8;
    local_f78.M[0][2] = 0.0;
    local_f78.M[0][3] = 0.0;
    local_f78.M[1][2] = 0.0;
    local_f78.M[1][3] = 0.0;
    local_f78.M[2][0] = 0.0;
    local_f78.M[2][1] = 0.0;
    local_f78.M[3][0]._0_4_ = local_12c8 ^ (uint)__xmm_80000000000000008000000000000000;
    local_f78.M[3][0]._4_4_ = uStack_12c4 ^ __xmm_80000000000000008000000000000000._4_4_;
    local_f78.M[3][1]._0_4_ = uStack_12c0 ^ _UNK_15066df78;
    local_f78.M[3][1]._4_4_ = uStack_12bc ^ _UNK_15066df7c;
    local_f78.M[3][2] =
         (double)CONCAT44((uint)((ulonglong)local_12b8 >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          (uint)local_12b8 ^ (uint)__xmm_80000000000000008000000000000000);
    local_f78.M[3][3] = local_ef8.M[3][3];
    local_f78.M[0][0] = ___xmm_00000000000000003ff0000000000000;
    local_f78.M[0][1] = _UNK_150689518;
    local_f78.M[2][2] = ___xmm_00000000000000003ff0000000000000;
    local_f78.M[2][3] = _UNK_150689518;
    pTVar24 = UE::Math::TQuat<double>::Rotator(&local_1208,&local_11d0);
    pTVar25 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                        (&local_178,pTVar24);
    VectorMatrixMultiply(&local_2f8,&local_f78,(TMatrix<double> *)pTVar25);
    local_c78.M[2][0] = ___xmm_3ff00000000000000000000000000000;
    local_c78.M[2][1] = _UNK_15061cbc8;
    local_c78.M[0][0] = 0.0;
    local_c78.M[0][1] = 0.0;
    local_c78.M[1][2] = 0.0;
    local_c78.M[1][3] = 0.0;
    local_c78.M[2][2] = 0.0;
    local_c78.M[2][3] = 0.0;
    local_c78.M[3][0] = 0.0;
    local_c78.M[3][1] = 0.0;
    local_c78.M[3][2] = ___xmm_3ff00000000000000000000000000000;
    local_c78.M[3][3] = _UNK_15061cbc8;
    local_c78.M[0][2] = dVar11;
    local_c78.M[0][3] = dVar12;
    local_c78.M[1][0] = dVar11;
    local_c78.M[1][1] = dVar12;
    VectorMatrixMultiply(&local_378,&local_2f8,&local_c78);
    local_1278.Z = *(double *)&this->field_0x48;
    local_1278.W = *(double *)&this->field_0x50;
    local_1278.X = *(double *)&this->field_0x38;
    local_1278.Y = *(double *)&this->field_0x40;
    local_1228 = *(uint *)&this->field_0x58;
    uStack_1224 = *(uint *)&this->field_0x5c;
    uStack_1220 = *(uint *)&this->field_0x60;
    uStack_121c = *(uint *)&this->field_0x64;
    local_1218 = *(uint *)&this->field_0x68;
    uStack_1214 = *(uint *)&this->field_0x6c;
    local_ef8.M[0][2] = 0.0;
    local_ef8.M[0][3] = 0.0;
    local_ef8.M[0][0] = dVar11;
    local_ef8.M[0][1] = dVar12;
    local_ef8.M[1][2] = 0.0;
    local_ef8.M[1][3] = 0.0;
    local_ef8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_ef8.M[1][1] = _UNK_15061cbc8;
    local_ef8.M[3][1] = (double)CONCAT44(uStack_121c ^ uVar10,uStack_1220 ^ uVar4);
    local_ef8.M[3][0] = (double)CONCAT44(uStack_1224 ^ uVar10,local_1228 ^ uVar4);
    local_ef8.M[3][2] = (double)CONCAT44(uStack_1214 ^ uVar10,local_1218 ^ uVar4);
    local_ef8.M[2][0] = 0.0;
    local_ef8.M[2][1] = 0.0;
    local_ef8.M[2][2] = dVar11;
    local_ef8.M[2][3] = dVar12;
    pTVar24 = UE::Math::TQuat<double>::Rotator(&local_1278,&local_11b8);
    pTVar25 = UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
                        (&local_f8,pTVar24);
    VectorMatrixMultiply(&local_278,&local_ef8,(TMatrix<double> *)pTVar25);
    VectorMatrixMultiply(&local_1f8,&local_278,&local_378);
    puVar18 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1a0,0x10);
    if (puVar18 == (undefined8 *)0x0) {
      puVar18 = (undefined8 *)0x0;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      *puVar18 = &___7__TObject_UFDefaultStereoLayers_LayerRenderParams___FRDGAllocator__6B_;
      memset(puVar18 + 4,0,0x180);
      puVar18[2] = 0;
      puVar18[3] = 0;
    }
    local_1360 = puVar18;
    if (((undefined8 **)param_1->_padding_ <= &local_1360) &&
       (&local_1360 <
        (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar17 = (int)param_1->_padding_;
    piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar17 == *piVar2) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar2);
    }
    *(int *)&param_1->_padding_ = iVar17 + 1;
    pFVar32 = (FScriptContainerElement *)(puVar18 + 2);
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar17 * 8) = local_1360;
    local_10f8 = local_978;
    dStack_10f0 = dStack_970;
    local_10e8 = local_968;
    dStack_10e0 = dStack_960;
    local_10d8 = local_958;
    dStack_10d0 = dStack_950;
    local_10c8 = local_948;
    dStack_10c0 = dStack_940;
    local_10b8 = local_938;
    dStack_10b0 = dStack_930;
    local_10a8 = local_928;
    dStack_10a0 = dStack_920;
    local_1108 = local_1338;
    local_1098 = local_918;
    dStack_1090 = dStack_910;
    local_1088 = local_908;
    dStack_1080 = dStack_900;
    local_1100 = uStack_1330;
    VectorMatrixMultiply(&local_1078,&local_1f8,local_bf8);
    VectorMatrixMultiply(&local_ff8,&local_378,local_bf8);
    pFVar5 = local_1378;
    *(undefined8 *)pFVar32 = local_1108;
    puVar18[3] = local_1100;
    puVar18[4] = local_10f8;
    puVar18[5] = dStack_10f0;
    puVar18[6] = local_10e8;
    puVar18[7] = dStack_10e0;
    puVar18[8] = local_10d8;
    puVar18[9] = dStack_10d0;
    puVar18[10] = local_10c8;
    puVar18[0xb] = dStack_10c0;
    puVar18[0xc] = local_10b8;
    puVar18[0xd] = dStack_10b0;
    puVar18[0xe] = local_10a8;
    puVar18[0xf] = dStack_10a0;
    puVar18[0x10] = local_1098;
    puVar18[0x11] = dStack_1090;
    puVar18[0x12] = local_1088;
    puVar18[0x13] = dStack_1080;
    puVar18[0x14] = local_1078.M[0][0];
    puVar18[0x15] = local_1078.M[0][1];
    puVar18[0x16] = local_1078.M[0][2];
    puVar18[0x17] = local_1078.M[0][3];
    puVar18[0x18] = local_1078.M[1][0];
    puVar18[0x19] = local_1078.M[1][1];
    puVar18[0x1a] = local_1078.M[1][2];
    puVar18[0x1b] = local_1078.M[1][3];
    puVar18[0x1c] = local_1078.M[2][0];
    puVar18[0x1d] = local_1078.M[2][1];
    puVar18[0x1e] = local_1078.M[2][2];
    puVar18[0x1f] = local_1078.M[2][3];
    puVar18[0x20] = local_1078.M[3][0];
    puVar18[0x21] = local_1078.M[3][1];
    puVar18[0x22] = local_1078.M[3][2];
    puVar18[0x23] = local_1078.M[3][3];
    puVar18[0x24] = local_ff8.M[0][0];
    puVar18[0x25] = local_ff8.M[0][1];
    puVar18[0x26] = local_ff8.M[0][2];
    puVar18[0x27] = local_ff8.M[0][3];
    puVar18[0x28] = local_ff8.M[1][0];
    puVar18[0x29] = local_ff8.M[1][1];
    puVar18[0x2a] = local_ff8.M[1][2];
    puVar18[0x2b] = local_ff8.M[1][3];
    puVar18[0x2c] = local_ff8.M[2][0];
    puVar18[0x2d] = local_ff8.M[2][1];
    puVar18[0x2e] = local_ff8.M[2][2];
    puVar18[0x2f] = local_ff8.M[2][3];
    puVar18[0x30] = local_ff8.M[3][0];
    puVar18[0x31] = local_ff8.M[3][1];
    puVar18[0x32] = local_ff8.M[3][2];
    puVar18[0x33] = local_ff8.M[3][3];
    pFVar20 = FRDGBuilder::FindExternalTexture(param_1,local_1378);
    if (pFVar20 == (FRDGTexture *)0x0) {
      TVar21 = CreateRenderTarget((FRHITexture *)local_12d8,(wchar_t *)pFVar5);
      pFVar20 = FRDGBuilder::RegisterExternalTexture
                          (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar21.Reference,None);
      if ((longlong *)local_12d8._0_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_12d8._0_8_ + 0x38))();
      }
    }
    local_1318.ResolveTexture = (FRDGTexture *)0x0;
    local_1318.LoadAction = ELoad;
    local_1318.MipIndex = '\0';
    local_1318.ArraySlice = -1;
    local_1318.Texture = pFVar20;
    bVar15 = FRenderTargetBinding::Validate(&local_1318);
    if (!bVar15) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (pFVar19->RenderTargets).Output.Elements[0].Texture = local_1318.Texture;
    (pFVar19->RenderTargets).Output.Elements[0].ResolveTexture = local_1318.ResolveTexture;
    (pFVar19->RenderTargets).Output.Elements[0].LoadAction = local_1318.LoadAction;
    (pFVar19->RenderTargets).Output.Elements[0].MipIndex = local_1318.MipIndex;
    (pFVar19->RenderTargets).Output.Elements[0].ArraySlice = local_1318.ArraySlice;
    *(undefined4 *)&(pFVar19->RenderTargets).Output.Elements[0].field_0x14 = local_1318._20_4_;
    local_1368 = (FSceneView *)CONCAT44(uStack_1324,local_1328);
    local_1370 = (wchar_t *)CONCAT44(uStack_131c,uStack_1320);
    pFVar26 = FRDGEventName::FRDGEventName(&local_1258,1,L"StereoLayerRender");
    pFVar27 = FRenderLayersPass::FTypeInfo::GetStructMetadata();
    FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar19,pFVar27,pFVar26,Raster);
    FRDGBuilder::FlushAccessModeQueue(param_1);
    pwVar28 = FRDGEventName::GetTCHAR(pFVar26);
    EVar16 = FRDGBuilder::OverridePassFlags(param_1,pwVar28,Raster);
    pFVar29 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
    local_12b0.Contents = (uchar *)pFVar19;
    if ((pFVar27->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L"");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_12b0.Layout.Reference = (pFVar27->Layout).Reference;
    if (local_12b0.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_12b0.Layout.Reference);
    }
    local_12b0.Metadata = pFVar27;
    FRDGPass::FRDGPass(pFVar29,pFVar26,&local_12b0,EVar16,Inline);
    pFVar29->_padding_ =
         (longlong)
         &TRDGLambdaPass<FRenderLayersPass,`FDefaultStereoLayers::PostRenderView_RenderThread'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar29[1]._padding_ = (longlong)local_1348;
    pFVar29[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar32;
    *(FSceneView **)&pFVar29[1].FullPathIfDebug.Data.ArrayNum = local_1368;
    pFVar29[1].Name.EventFormat = local_1370;
    *(bool *)&pFVar29[1].Name.FormattedEventName.Data.AllocatorInstance.Data = bVar14;
    *(FRenderLayersPass **)&pFVar29[1].Name.FormattedEventName.Data.ArrayNum = pFVar19;
    FRDGBuilder::ClobberPassOutputs(param_1,pFVar29);
    pTVar3 = &param_1->Passes;
    iVar17 = (param_1->Passes).Array.ArrayNum;
    if (iVar17 == (param_1->Passes).Array.ArrayMax) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                         (0x808,(ForElementType<FRDGPass_*> *)pTVar3,
                          &(param_1->Passes).Array.ArrayMax);
    }
    (param_1->Passes).Array.ArrayNum = iVar17 + 1;
    (pTVar3->Array).AllocatorInstance.Data[iVar17] = pFVar29;
    (pFVar29->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
    FRDGBuilder::SetupParameterPass(param_1,pFVar29);
    if (local_1258.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_1258.FormattedEventName.Data.AllocatorInstance.Data);
    }
    pFVar5 = local_1350;
    if ((bVar14) && (pFVar9 != (FRenderLayersPass *)0x0)) {
      pFVar20 = FRDGBuilder::FindExternalTexture(param_1,local_1350);
      if (pFVar20 == (FRDGTexture *)0x0) {
        TVar21 = CreateRenderTarget((FRHITexture *)(local_12d8 + 8),(wchar_t *)pFVar5);
        pFVar20 = FRDGBuilder::RegisterExternalTexture
                            (param_1,(TRefCountPtr<IPooledRenderTarget> *)TVar21.Reference,None);
        if ((longlong *)local_12d8._8_8_ != (longlong *)0x0) {
          (**(code **)(*(longlong *)local_12d8._8_8_ + 0x38))();
        }
      }
      local_1300.ResolveTexture = (FRDGTexture *)0x0;
      local_1300.LoadAction = ELoad;
      local_1300.MipIndex = '\0';
      local_1300.ArraySlice = -1;
      local_1300.Texture = pFVar20;
      bVar14 = FRenderTargetBinding::Validate(&local_1300);
      if (!bVar14) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Validate()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x216,L"");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      (pFVar9->RenderTargets).Output.Elements[0].Texture = local_1300.Texture;
      (pFVar9->RenderTargets).Output.Elements[0].ResolveTexture = local_1300.ResolveTexture;
      (pFVar9->RenderTargets).Output.Elements[0].LoadAction = local_1300.LoadAction;
      (pFVar9->RenderTargets).Output.Elements[0].MipIndex = local_1300.MipIndex;
      (pFVar9->RenderTargets).Output.Elements[0].ArraySlice = local_1300.ArraySlice;
      *(undefined4 *)&(pFVar9->RenderTargets).Output.Elements[0].field_0x14 = local_1300._20_4_;
      local_1370 = (wchar_t *)CONCAT44(uStack_1324,local_1328);
      local_1358 = (FRenderLayersPass *)CONCAT44(uStack_131c,uStack_1320);
      pFVar26 = FRDGEventName::FRDGEventName(&local_1240,1,L"StereoLayerRenderIntoOverlay");
      local_1368 = (FSceneView *)pFVar26;
      pFVar27 = FRenderLayersPass::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&param_1->UserValidation,pFVar9,pFVar27,pFVar26,Raster);
      FRDGBuilder::FlushAccessModeQueue(param_1);
      pwVar28 = FRDGEventName::GetTCHAR(pFVar26);
      EVar16 = FRDGBuilder::OverridePassFlags(param_1,pwVar28,Raster);
      pFVar29 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x1b0,8);
      local_1298.Contents = (uchar *)pFVar9;
      if ((pFVar27->Layout).Reference == (FRHIUniformBufferLayout *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L"");
        if (bVar14) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_1298.Layout.Reference = (pFVar27->Layout).Reference;
      if (local_1298.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_1298.Layout.Reference);
      }
      local_1298.Metadata = pFVar27;
      FRDGPass::FRDGPass(pFVar29,(FRDGEventName *)local_1368,&local_1298,EVar16,Inline);
      pFVar29->_padding_ =
           (longlong)
           &TRDGLambdaPass<FRenderLayersPass,`FDefaultStereoLayers::PostRenderView_RenderThread'::`19'::<lambda_2>_>
            ::_vftable_;
      pFVar29[1]._padding_ = (longlong)local_1348;
      pFVar29[1].FullPathIfDebug.Data.AllocatorInstance.Data = pFVar32;
      *(wchar_t **)&pFVar29[1].FullPathIfDebug.Data.ArrayNum = local_1370;
      pFVar29[1].Name.EventFormat = (wchar_t *)local_1358;
      *(undefined1 *)&pFVar29[1].Name.FormattedEventName.Data.AllocatorInstance.Data = 1;
      *(FRenderLayersPass **)&pFVar29[1].Name.FormattedEventName.Data.ArrayNum = pFVar9;
      FRDGBuilder::ClobberPassOutputs(param_1,pFVar29);
      iVar17 = (param_1->Passes).Array.ArrayNum;
      if (iVar17 == (param_1->Passes).Array.ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                           (0x808,(ForElementType<FRDGPass_*> *)pTVar3,
                            &(param_1->Passes).Array.ArrayMax);
      }
      (param_1->Passes).Array.ArrayNum = iVar17 + 1;
      (pTVar3->Array).AllocatorInstance.Data[iVar17] = pFVar29;
      (pFVar29->Handle).Index = (param_1->Passes).Array.ArrayNum - 1;
      FRDGBuilder::SetupParameterPass(param_1,pFVar29);
      if (local_1240.FormattedEventName.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1240.FormattedEventName.Data.AllocatorInstance.Data);
      }
    }
    if (local_1350 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1350);
    }
    if (local_1378 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_1378);
    }
  }
  return;
}

// SetupViewFamily @ 14cf9b9c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FDefaultStereoLayers::SetupViewFamily(FDefaultStereoLayers *this,FSceneViewFamily *param_1)

{
  undefined8 uVar1;
  double local_48;
  double dStack_40;
  double local_38;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_28 = UE::Math::TQuat<double>::Identity.X;
  dStack_20 = UE::Math::TQuat<double>::Identity.Y;
  local_18 = UE::Math::TQuat<double>::Identity.Z;
  dStack_10 = UE::Math::TQuat<double>::Identity.W;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_40 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (**(code **)(**(longlong **)&this->field_0x28 + 0x58))
            (*(longlong **)&this->field_0x28,0,&local_28,&local_48);
  *(double *)&this->field_0x38 = local_28;
  *(double *)&this->field_0x40 = dStack_20;
  *(double *)&this->field_0x48 = local_18;
  *(double *)&this->field_0x50 = dStack_10;
  *(double *)&this->field_0x58 = local_48;
  *(double *)&this->field_0x60 = dStack_40;
  *(double *)&this->field_0x68 = local_38;
  *(undefined8 *)&this->field_0x70 = 0;
  uVar1 = _UNK_150689688;
  *(undefined8 *)&this->field_0x78 = ___xmm_3ff00000000000003ff0000000000000;
  *(undefined8 *)&this->field_0x80 = uVar1;
  uVar1 = _UNK_150689518;
  *(undefined8 *)&this->field_0x88 = ___xmm_00000000000000003ff0000000000000;
  *(undefined8 *)&this->field_0x90 = uVar1;
  return;
}

// StereoLayerRender @ 14cf9cac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FDefaultStereoLayers::StereoLayerRender
          (FRHICommandListImmediate *param_1,
          TArrayView<FDefaultStereoLayers::FStereoLayerToRender_const_,int> *param_2,
          FDefaultStereoLayers_LayerRenderParams *param_3)

{
  ushort uVar1;
  int iVar2;
  FShaderMapResource *this;
  FRHITexture *this_00;
  code *pcVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TRefCountPtr<FRHISamplerState> TVar12;
  FStereoLayerPS *pFVar13;
  FShaderMapBase *pFVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  IRHICommandContext *pIVar18;
  undefined8 *puVar19;
  FGlobalShaderMap *this_01;
  FShaderType *pFVar20;
  FName FVar21;
  atomic<FRHIShader_*> aVar22;
  TMatrix<double> *pTVar23;
  longlong lVar24;
  FRHIVertexShader *pFVar25;
  FRHIBatchedShaderParameters *pFVar26;
  FRHIPixelShader *pFVar27;
  uint uVar28;
  uint uVar29;
  VectorRegister4Double *pVVar30;
  bool bVar31;
  uint uVar32;
  uint uVar33;
  undefined1 auStackY_588 [32];
  float local_504 [3];
  TShaderRefBase<FStereoLayerPS,FShaderMapPointerTable> local_4f8;
  TShaderRefBase<FStereoLayerVS,FShaderMapPointerTable> local_4e8;
  FStereoLayerToRender *local_4d8;
  FShaderMapBase *local_4d0;
  FDefaultStereoLayers_LayerRenderParams *local_4c8;
  IRendererModule *local_4c0;
  FStereoLayerToRender *local_4b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_4b0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_498;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_488;
  TVector2<double>_u_0 local_478;
  undefined1 local_468 [8];
  undefined1 local_460 [8];
  undefined1 local_458 [8];
  FString local_450;
  FString local_440;
  FString local_430;
  FStereoLayerVS *local_418;
  FShaderMapBase *pFStack_410;
  TVector2<double>_u_0 local_408;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined1 local_3d8 [16];
  double local_3c8;
  double local_3c0;
  double dStack_3b8;
  double local_3b0;
  TTransform<double> local_3a8;
  FGraphicsPipelineStateInitializer local_348;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_588;
  local_4c8 = param_3;
  bVar15 = IsInRenderingThread();
  if ((!bVar15) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultStereoLayers.cpp"
                          ,0x3f,L""), bVar15)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_2->ArrayNum != 0) {
    local_4c0 = GetRendererModule();
    local_348.RenderTargetsEnabled = 0;
    local_348.RenderTargetFormats.Elements[0] = '\0';
    local_348.RenderTargetFormats.Elements[1] = '\0';
    local_348.RenderTargetFormats.Elements[2] = '\0';
    local_348.RenderTargetFormats.Elements[3] = '\0';
    local_348.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    local_348.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
    local_348.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
    local_348.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
    local_348.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
    local_348.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
    local_348.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
    local_348.BlendState = (FRHIBlendState *)0x0;
    local_348.RasterizerState = (FRHIRasterizerState *)0x0;
    local_348.DepthStencilState = (FRHIDepthStencilState *)0x0;
    local_348.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
    local_348.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
    local_348.RenderTargetFlags.Elements[0] = None;
    local_348.RenderTargetFlags.Elements[1] = None;
    local_348.RenderTargetFlags.Elements[2] = None;
    local_348.RenderTargetFlags.Elements[3] = None;
    local_348.RenderTargetFlags.Elements[4] = None;
    local_348.RenderTargetFlags.Elements[5] = None;
    local_348.RenderTargetFlags.Elements[6] = None;
    local_348.RenderTargetFlags.Elements[7] = None;
    local_348.RenderTargetFormats.Elements[4] = '\0';
    local_348.RenderTargetFormats.Elements[5] = '\0';
    local_348.RenderTargetFormats.Elements[6] = '\0';
    local_348.RenderTargetFormats.Elements[7] = '\0';
    local_348.DepthStencilTargetFormat = PF_Unknown;
    local_348.DepthStencilTargetFlag = None;
    local_348.DepthTargetLoadAction = ENoAction;
    local_348.DepthTargetStoreAction = ENoAction;
    local_348.StencilTargetLoadAction = ENoAction;
    local_348.StencilTargetStoreAction = ENoAction;
    local_348.DepthStencilAccess.Value = DepthNop;
    local_348.NumSamples = 0;
    local_348.SubpassHint = None;
    local_348.SubpassIndex = '\0';
    local_348.ConservativeRasterization = Disabled;
    local_348.bDepthBounds = false;
    local_348.MultiViewCount = '\0';
    local_348.bHasFragmentDensityAttachment = false;
    local_348.bAllowVariableRateShading = true;
    local_348.ShadingRate = VRSSR_1x1;
    local_348.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
    local_348.StatePrecachePSOHash = 0;
    FRHICommandList::ApplyCachedRenderTargets((FRHICommandList *)param_1,&local_348);
    local_348.RasterizerState =
         TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
         ::StaticResource.StateRHI.Reference;
    local_348.DepthStencilState =
         TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
         ::StaticResource.StateRHI.Reference;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar19 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar19;
      *(undefined8 **)&param_1->field_0x30 = puVar19 + 1;
      puVar19[1] = 0;
      *puVar19 = &___7FRHICommandSetScissorRect__6B_;
      *(undefined1 *)(puVar19 + 2) = 0;
      *(undefined8 *)((longlong)puVar19 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0;
    }
    else {
      pIVar18 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar18->_padding_ + 0x1b0))(pIVar18,0,0);
    }
    fVar6 = __real_3f800000;
    FRHICommandList::SetViewport
              ((FRHICommandList *)param_1,(float)*(int *)&(param_3->Viewport).field0_0x0,
               (float)*(int *)((longlong)&(param_3->Viewport).field0_0x0 + 4),0.0,
               (float)*(int *)((longlong)&(param_3->Viewport).field0_0x0 + 8),
               (float)*(int *)((longlong)&(param_3->Viewport).field0_0x0 + 0xc),__real_3f800000);
    this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar20 = (FShaderType *)FStereoLayerVS::GetStaticType();
    FGlobalShaderMap::GetShader(this_01,&local_498,pFVar20,0);
    if ((FStereoLayerVS *)local_498.ShaderContent == (FStereoLayerVS *)0x0) {
      FVar21 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_468);
      ::FName::ToString((FName *)FVar21,&local_450);
      FStereoLayerVS::GetStaticType();
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_450.Data.AllocatorInstance.Data);
      }
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FStereoLayerVS::GetStaticType();
    local_4e8.ShaderContent = (FStereoLayerVS *)local_498.ShaderContent;
    local_4e8.ShaderMap = local_498.ShaderMap;
    pFVar20 = (FShaderType *)FStereoLayerPS::GetStaticType();
    FGlobalShaderMap::GetShader(this_01,&local_488,pFVar20,0);
    if ((FStereoLayerPS *)local_488.ShaderContent == (FStereoLayerPS *)0x0) {
      FVar21 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_460);
      ::FName::ToString((FName *)FVar21,&local_440);
      FStereoLayerPS::GetStaticType();
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_440.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data.AllocatorInstance.Data);
      }
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FStereoLayerPS::GetStaticType();
    local_4f8.ShaderContent = (FStereoLayerPS *)local_488.ShaderContent;
    local_4f8.ShaderMap = local_488.ShaderMap;
    pFVar20 = (FShaderType *)FStereoLayerPS_External::GetStaticType();
    FGlobalShaderMap::GetShader(this_01,&local_4b0,pFVar20,0);
    if (local_4b0.ShaderContent == (FShader *)0x0) {
      FVar21 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_458);
      ::FName::ToString((FName *)FVar21,&local_430);
      FStereoLayerPS_External::GetStaticType();
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data.AllocatorInstance.Data);
      }
      if (bVar15) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FStereoLayerPS_External::GetStaticType();
    local_4d0 = local_4b0.ShaderMap;
    local_348.BoundShaderState.VertexDeclarationRHI =
         (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
    local_348.BoundShaderState.VertexShaderRHI =
         TShaderRefBase<FStereoLayerVS,FShaderMapPointerTable>::GetVertexShader(&local_4e8,true);
    local_348.PrimitiveType = PT_TriangleList;
    if ((param_2->ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar15 = (bool)(~(byte)(param_2->DataPtr->Flags >> 1) & 1);
    if ((param_2->ArrayNum < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar13 = local_4f8.ShaderContent;
    dVar11 = _UNK_150689518;
    dVar10 = ___xmm_00000000000000003ff0000000000000;
    dVar9 = _UNK_15061cbc8;
    dVar8 = ___xmm_3ff00000000000000000000000000000;
    dVar7 = __real_3fe0000000000000;
    local_4d8 = param_2->DataPtr;
    bVar16 = (bool)(~(byte)(local_4d8->Flags >> 4) & 1);
    local_4b8 = local_4d8 + param_2->ArrayNum;
    if (local_4d8 != local_4b8) {
      pVVar30 = &(local_4d8->Transform).Translation;
      uVar32 = (uint)__xmm_80000000000000008000000000000000;
      uVar33 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      do {
        if (((*(longlong *)(pVVar30 + 2) == 0) ||
            ((*(byte *)((longlong)(pVVar30 + -4) + 0x18) & 0x20) != 0)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Layer.Texture != nullptr && !(Layer.Flags & LAYER_FLAG_HIDDEN)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\XRBase\\Source\\XRBase\\Private\\DefaultStereoLayers.cpp"
                                ,100,L""), bVar17)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = local_4d0;
        uVar28 = *(uint *)((longlong)(pVVar30 + -4) + 0x18);
        uVar29 = uVar28 & 2;
        uVar28 = uVar28 & 0x10;
        bVar31 = uVar28 != 0;
        bVar17 = false;
        if ((uVar29 != 0) != bVar15) {
          local_348.BlendState =
               TStaticStateRHI<TStaticBlendState<15,0,4,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference;
          if (uVar29 != 0) {
            local_348.BlendState =
                 TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
                 ::StaticResource.StateRHI.Reference;
          }
          bVar17 = true;
          bVar15 = uVar29 != 0;
        }
        if (bVar31 == bVar16) {
          aVar22 = (atomic<FRHIShader_*>)local_348.BoundShaderState.PixelShaderRHI;
          bVar31 = bVar16;
          if (bVar17) goto LAB_14cf9d1d4;
        }
        else {
          if (uVar28 == 0) {
            aVar22 = (atomic<FRHIShader_*>)
                     TShaderRefBase<FStereoLayerPS,FShaderMapPointerTable>::GetPixelShader
                               (&local_4f8,true);
          }
          else {
            aVar22 = (atomic<FRHIShader_*>)0x0;
            if (local_4b0.ShaderContent != (FShader *)0x0) {
              this = (local_4d0->Resource).Reference;
              if ((this == (FShaderMapResource *)0x0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Resource",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                      ,0x426,L""), bVar16)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              aVar22 = (this->RHIShaders).Ptr[(local_4b0.ShaderContent)->ResourceIndex];
              if ((aVar22 == (atomic<FRHIShader_*>)0x0) &&
                 (aVar22 = (atomic<FRHIShader_*>)
                           FShaderMapResource::CreateShaderOrCrash
                                     (this,(local_4b0.ShaderContent)->ResourceIndex,true),
                 aVar22 == (atomic<FRHIShader_*>)0x0)) {
                if (4 < (byte)LogShaders._0_1_) {
                  if ((pFVar14->PointerTable == (FShaderMapPointerTable *)0x0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("PointerTable",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                          ,0x9b4,L""), bVar16)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  FShader::GetType(local_4b0.ShaderContent,pFVar14->PointerTable);
                  UE::Logging::Private::BasicLog<5>
                            ((FStaticBasicLogRecord *)
                             &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FStereoLayerPS_External,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                              ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
                }
                aVar22 = (atomic<FRHIShader_*>)0x0;
              }
            }
          }
LAB_14cf9d1d4:
          local_348.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar22;
          SetGraphicsPipelineState((FRHICommandList *)param_1,&local_348,0,CheckApply,true);
          bVar16 = bVar31;
        }
        local_3d8 = *(undefined1 (*) [16])(pVVar30->XY).m128d_f64;
        local_3a8.Translation.XY.m128d_f64[0]._0_4_ = local_3d8._8_4_;
        local_3a8.Translation.XY.m128d_f64[0]._4_4_ = local_3d8._12_4_;
        local_3c0 = pVVar30[1].XY.m128d_f64[0];
        dStack_3b8 = pVVar30[1].XY.m128d_f64[1];
        local_3c8 = (pVVar30->ZW).m128d_f64[0];
        local_3b0 = pVVar30[1].ZW.m128d_f64[0];
        local_3a8.Rotation.XY.m128d_f64[1]._0_4_ =
             *(uint *)(((TTransform<double> *)(pVVar30 + -1))->Rotation).ZW.m128d_f64 ^ uVar32;
        local_3a8.Rotation.XY.m128d_f64[1]._4_4_ =
             *(uint *)((longlong)(((TTransform<double> *)(pVVar30 + -1))->Rotation).ZW.m128d_f64 + 4
                      ) ^ uVar33;
        local_3a8.Rotation.ZW.m128d_f64[0]._0_4_ =
             *(uint *)(((TTransform<double> *)(pVVar30 + -1))->Rotation).XY.m128d_f64 ^ uVar32;
        local_3a8.Rotation.ZW.m128d_f64[0]._4_4_ =
             *(uint *)((longlong)(((TTransform<double> *)(pVVar30 + -1))->Rotation).XY.m128d_f64 + 4
                      ) ^ uVar33;
        local_3a8.Rotation.XY.m128d_f64[0] =
             (double)CONCAT44(*(uint *)((longlong)
                                        (((TTransform<double> *)(pVVar30 + -1))->Rotation).XY.
                                        m128d_f64 + 0xc) ^ uVar33,
                              *(uint *)((((TTransform<double> *)(pVVar30 + -1))->Rotation).XY.
                                        m128d_f64 + 1) ^ uVar32);
        local_3a8.Rotation.ZW.m128d_f64[1]._0_4_ =
             *(uint *)((((TTransform<double> *)(pVVar30 + -1))->Rotation).ZW.m128d_f64 + 1) ^ uVar32
        ;
        local_3a8.Rotation.ZW.m128d_f64[1]._4_4_ =
             *(uint *)((longlong)(((TTransform<double> *)(pVVar30 + -1))->Rotation).ZW.m128d_f64 +
                      0xc) ^ uVar33;
        local_3a8.Translation.ZW.m128d_f64[0] = local_3d8._0_8_;
        local_3a8.Translation.ZW.m128d_f64[1] = 0.0;
        local_3a8.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_3a8.Translation.XY.m128d_f64[1] = local_3c8;
        local_3a8.Scale3D.XY.m128d_f64[0] = dStack_3b8;
        local_3a8.Scale3D.XY.m128d_f64[1] = local_3b0;
        local_3a8.Scale3D.ZW.m128d_f64[0] = local_3c0;
        pTVar23 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_3a8,&local_168);
        local_268.M[0][0] = dVar8;
        local_268.M[0][1] = dVar9;
        local_268.M[0][2] = 0.0;
        local_268.M[0][3] = 0.0;
        local_268.M[1][0] = 0.0;
        local_268.M[1][1] = 0.0;
        local_268.M[2][2] = 0.0;
        local_268.M[2][3] = 0.0;
        local_268.M[3][0] = 0.0;
        local_268.M[3][1] = 0.0;
        local_268.M[1][2] = dVar10;
        local_268.M[1][3] = dVar11;
        local_268.M[2][0] = dVar10;
        local_268.M[2][1] = dVar11;
        local_268.M[3][2] = dVar8;
        local_268.M[3][3] = dVar9;
        VectorMatrixMultiply(&local_1e8,pTVar23,&local_268);
        this_00 = *(FRHITexture **)(pVVar30 + 2);
        if (this_00 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_00);
        }
        dVar4 = *(double *)((longlong)(pVVar30 + -3) + 8) * dVar7;
        dVar5 = *(double *)(pVVar30 + -3) * dVar7;
        if ((((*(byte *)((longlong)(pVVar30 + -4) + 0x18) & 4) != 0) &&
            (this_00 != (FRHITexture *)0x0)) &&
           (lVar24 = (**(code **)(this_00->_padding_ + 0x20))(this_00),
           *(char *)(lVar24 + 0x32) == '\0')) {
          lVar24 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
          uVar28 = *(uint *)(lVar24 + 0x24);
          lVar24 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
          if ((float)uVar28 != 0.0) {
            dVar4 = (double)((float)*(uint *)(lVar24 + 0x28) / (float)uVar28) * dVar5;
          }
        }
        iVar2 = *(int *)((longlong)(pVVar30 + -4) + 0x1c);
        pFVar25 = TShaderRefBase<FStereoLayerVS,FShaderMapPointerTable>::GetVertexShader
                            (&local_4e8,true);
        pFVar26 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
        local_408._s_0.X = (double)*(undefined8 *)((longlong)(pVVar30 + -3) + 0x10);
        local_408._s_0.Y = (double)*(undefined8 *)((longlong)(pVVar30 + -3) + 0x18);
        local_3f8 = *(undefined8 *)(pVVar30 + -2);
        uStack_3f0 = *(undefined8 *)((longlong)(pVVar30 + -2) + 8);
        local_3e8 = *(undefined8 *)((longlong)(pVVar30 + -2) + 0x10);
        local_478._s_0.X = dVar5;
        local_478._s_0.Y = dVar4;
        FStereoLayerVS::SetParameters
                  (local_4e8.ShaderContent,pFVar26,(TVector2<double> *)&local_478._s_0,
                   (TBox2<double> *)&local_408._s_0,param_3->RenderMatrices + iVar2,&local_1e8);
        FRHICommandList::SetBatchedShaderParameters
                  ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar25,pFVar26);
        TVar12 = TStaticStateRHI<TStaticSamplerState<2,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                 ::StaticResource.StateRHI;
        pFVar27 = TShaderRefBase<FStereoLayerPS,FShaderMapPointerTable>::GetPixelShader
                            (&local_4f8,true);
        pFVar26 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
        SetTextureParameter(pFVar26,(FShaderResourceParameter *)&pFVar13->field_0xe0,this_00);
        SetSamplerParameter(pFVar26,(FShaderResourceParameter *)&pFVar13->field_0xe4,
                            TVar12.Reference);
        uVar1 = *(ushort *)&pFVar13->field_0xec;
        if (uVar1 != 0) {
          local_504[0] = fVar6;
          if (uVar29 == 0) {
            local_504[0] = 0.0;
          }
          uVar28 = (uint)uVar1;
          if (4 < uVar1) {
            uVar28 = 4;
          }
          if (uVar28 != 0) {
            FRHIBatchedShaderParameters::SetShaderParameter
                      (pFVar26,(uint)*(ushort *)&pFVar13->field_0xe8,
                       (uint)*(ushort *)&pFVar13->field_0xea,uVar28,local_504);
          }
        }
        FRHICommandList::SetBatchedShaderParameters
                  ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar27,pFVar26);
        param_3 = local_4c8;
        local_418 = local_4e8.ShaderContent;
        pFStack_410 = local_4e8.ShaderMap;
        (**(code **)((longlong)*local_4c0 + 0xe8))(local_4c0,param_1);
        if (this_00 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
        pVVar30 = pVVar30 + 6;
        local_4d8 = local_4d8 + 1;
      } while (local_4d8 != local_4b8);
    }
  }
  return;
}

