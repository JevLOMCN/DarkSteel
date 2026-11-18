// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 22

// FGeometryCacheSceneProxy @ 14ca060f0

FGeometryCacheSceneProxy * __thiscall
FGeometryCacheSceneProxy::FGeometryCacheSceneProxy
          (FGeometryCacheSceneProxy *this,UGeometryCacheComponent *param_1)

{
  code *local_38 [2];
  undefined **local_28;
  FGeometryCacheSceneProxy *local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`1'::<lambda_24_>,0,0>
              ::_vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l1::<lambda_24_>,FGeomCacheTrackProxy_*>
                ::Call;
  local_20 = this;
  FGeometryCacheSceneProxy(this,param_1,(TFunction<FGeomCacheTrackProxy_*___cdecl(void)> *)local_38)
  ;
  *(undefined ***)this = &___7FGeometryCacheSceneProxy__6B_;
  return this;
}

// FGeometryCacheSceneProxy @ 14ca06150

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

FGeometryCacheSceneProxy * __thiscall
FGeometryCacheSceneProxy::FGeometryCacheSceneProxy
          (FGeometryCacheSceneProxy *this,UGeometryCacheComponent *param_1,
          TFunction<FGeomCacheTrackProxy_*___cdecl(void)> *param_2)

{
  TArray<FGeomCacheTrackProxy_*,TSizedDefaultAllocator<32>_> *pTVar1;
  FSceneInterface *this_00;
  code *pcVar2;
  longlong lVar3;
  UGeometryCache *pUVar4;
  FScriptContainerElement *pFVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  char cVar9;
  bool bVar10;
  EShaderPlatform EVar11;
  int iVar12;
  int iVar13;
  FGeometryCacheSceneProxy *pFVar14;
  undefined8 uVar15;
  FRenderCommandList *pFVar16;
  FCommandList *pFVar17;
  FRenderCommandTag *pFVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  longlong *plVar22;
  undefined ***pppuVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  ulonglong uVar27;
  uint uVar28;
  float fVar29;
  undefined1 auStackY_258 [32];
  longlong *local_208;
  undefined1 local_200 [8];
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_1f8;
  UMaterial *local_1e8;
  longlong local_1e0;
  undefined4 local_1d8 [2];
  undefined8 local_1d0;
  longlong local_1c8;
  longlong *local_1c0 [2];
  longlong local_1b0;
  longlong local_1a8;
  TFunction<FGeomCacheTrackProxy_*___cdecl(void)> *local_1a0;
  code *local_198 [2];
  undefined **local_188;
  longlong *plStack_180;
  int local_178;
  undefined4 uStack_174;
  undefined ***local_170;
  code *local_168 [2];
  undefined **local_158;
  FGeometryCacheSceneProxy *pFStack_150;
  undefined8 local_148;
  undefined ***local_140;
  code *local_138 [2];
  undefined **local_128;
  FGeometryCacheSceneProxy *pFStack_120;
  undefined8 local_118;
  undefined ***local_110;
  undefined1 local_108 [16];
  undefined **local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined ***local_e0;
  byte local_d8;
  undefined1 local_c8 [16];
  undefined **local_b8;
  FGeometryCacheSceneProxy *pFStack_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  byte local_98;
  undefined1 local_88 [16];
  undefined **local_78;
  FGeometryCacheSceneProxy *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  uVar28 = 0;
  local_1d0 = 0;
  local_1a0 = param_2;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  *(undefined ***)this = &___7FGeometryCacheSceneProxy__6B_;
  (this->Tracks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Tracks).ArrayNum = 0;
  (this->Tracks).ArrayMax = 0;
  (this->Scratch).InterpolatedPositions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scratch).InterpolatedPositions.ArrayNum = 0;
  (this->Scratch).InterpolatedPositions.ArrayMax = 0;
  (this->Scratch).InterpolatedTangentX.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scratch).InterpolatedTangentX.ArrayNum = 0;
  (this->Scratch).InterpolatedTangentX.ArrayMax = 0;
  (this->Scratch).InterpolatedTangentZ.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scratch).InterpolatedTangentZ.ArrayNum = 0;
  (this->Scratch).InterpolatedTangentZ.ArrayMax = 0;
  (this->Scratch).InterpolatedUVs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scratch).InterpolatedUVs.ArrayNum = 0;
  (this->Scratch).InterpolatedUVs.ArrayMax = 0;
  (this->Scratch).InterpolatedColors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scratch).InterpolatedColors.ArrayNum = 0;
  (this->Scratch).InterpolatedColors.ArrayMax = 0;
  (this->Scratch).InterpolatedMotionVectors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Scratch).InterpolatedMotionVectors.ArrayNum = 0;
  (this->Scratch).InterpolatedMotionVectors.ArrayMax = 0;
  this_00 = *(FSceneInterface **)&this->field_0x220;
  this->bOverrideWireframeColor = false;
  (this->WireframeOverrideColor).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Green.field0_0x0;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0xaa8);
  EVar11 = FSceneInterface::GetShaderPlatform(this_00);
  (*pcVar2)(param_1,&this->MaterialRelevance,EVar11);
  lVar3 = *(longlong *)param_2;
  *(longlong *)&this->CreateTrackProxy = lVar3;
  *(undefined8 *)&(this->CreateTrackProxy).field_0x28 = 0;
  if (lVar3 != 0) {
    puVar24 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar24 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar24)();
  }
  (this->RayTracingDebugName).ComparisonIndex = 0;
  (this->RayTracingDebugName).Number = 0;
  fVar29 = param_1->StartTimeOffset;
  if (__real_46610000 <= param_1->StartTimeOffset) {
    fVar29 = __real_46610000;
  }
  if (fVar29 <= __real_c6610000) {
    fVar29 = __real_c6610000;
  }
  this->Time = fVar29 + param_1->ElapsedTime;
  uVar21 = ((uint)param_1->bLooping ^ ZPULL(*(undefined4 *)&this->field_0x320,0,1)) & 1 ^
           *(undefined4 *)&this->field_0x320;
  *(uint *)&this->field_0x320 = uVar21;
  bVar10 = param_1->bExtrapolateFrames;
  this->field_0x82 = this->field_0x82 | 0x80;
  *(uint *)&this->field_0x320 = ((uint)bVar10 << 2 ^ uVar21) & 4 ^ uVar21;
  if (param_1->bRunning == false) {
    fVar29 = 0.0;
  }
  else {
    fVar29 = param_1->PlaybackSpeed;
    if (__real_44000000 <= param_1->PlaybackSpeed) {
      fVar29 = __real_44000000;
    }
    if (fVar29 <= 0.0) {
      fVar29 = 0.0;
    }
  }
  this->PlaybackSpeed = fVar29;
  fVar29 = param_1->MotionVectorScale;
  if (__real_42c80000 <= param_1->MotionVectorScale) {
    fVar29 = __real_42c80000;
  }
  if (fVar29 <= 0.0) {
    fVar29 = 0.0;
  }
  this->MotionVectorScale = fVar29;
  this->bOverrideWireframeColor = param_1->bOverrideWireframeColor;
  uVar15 = *(undefined8 *)&(param_1->WireframeOverrideColor).field0_0x0;
  uVar6 = *(undefined8 *)((longlong)&(param_1->WireframeOverrideColor).field0_0x0 + 8);
  this->UpdatedFrameNum = 0;
  *(undefined8 *)&(this->WireframeOverrideColor).field0_0x0 = uVar15;
  *(undefined8 *)((longlong)&(this->WireframeOverrideColor).field0_0x0 + 8) = uVar6;
  FPrimitiveSceneProxy::EnableGPUSceneSupportFlags((FPrimitiveSceneProxy *)this);
  this->field_0x7c = this->field_0x7c & 0xef;
  local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1f8.ArrayNum = 0;
  local_1f8.ArrayMax = 0;
  (**(code **)(*(longlong *)param_1 + 0xa90))(param_1,local_1c0);
  iVar13 = (int)local_1c0[1];
  plVar25 = local_1c0[0] + iVar13;
  plVar26 = local_1c0[0];
  while( true ) {
    if ((int)local_1c0[1] != iVar13) {
      local_200[0] = 0;
      `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_200);
    }
    if (plVar26 == plVar25) break;
    local_1e8 = (UMaterial *)*plVar26;
    if ((local_1e8 == (UMaterial *)0x0) ||
       (cVar9 = (**(code **)(local_1e8->_padding_ + 0x378))(local_1e8,0xd), cVar9 == '\0')) {
      local_1e8 = UMaterial::GetDefaultMaterial(MD_Surface);
    }
    if (((local_1f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_1e8) &&
        ((FScriptContainerElement *)&local_1e8 <
         local_1f8.AllocatorInstance.Data + (longlong)local_1f8.ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FGeometryCacheSceneProxy *)(*pcVar2)();
      return pFVar14;
    }
    iVar12 = local_1f8.ArrayNum;
    if (local_1f8.ArrayNum == local_1f8.ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_1f8.AllocatorInstance,&local_1f8.ArrayMax);
    }
    plVar26 = plVar26 + 1;
    local_1f8.ArrayNum = iVar12 + 1;
    *(UMaterial **)(local_1f8.AllocatorInstance.Data + (longlong)iVar12 * 8) = local_1e8;
  }
  if (local_1c0[0] != (longlong *)0x0) {
    FMemory::Free(local_1c0[0]);
  }
  uVar21 = (param_1->TrackSections).ArrayNum;
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
  }
  if ((this->Tracks).ArrayMax < (int)uVar21) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar21,&(this->Tracks).AllocatorInstance,(this->Tracks).ArrayNum,
               &(this->Tracks).ArrayMax);
  }
  local_1a8 = (longlong)(int)uVar21;
  if (0 < (int)uVar21) {
    pTVar1 = &this->Tracks;
    local_1c8 = 0;
    local_1e0 = 0;
    do {
      uVar21 = 0;
      if ((int)uVar28 < (param_1->TrackSections).ArrayNum) {
        uVar21 = ~uVar28 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FGeometryCacheSceneProxy *)(*pcVar2)();
        return pFVar14;
      }
      pUVar4 = (param_1->GeometryCache).field0_0x0.DebugPtr;
      pFVar5 = (param_1->TrackSections).AllocatorInstance.Data;
      uVar21 = 0;
      if ((int)uVar28 < (pUVar4->Tracks).ArrayNum) {
        uVar21 = ~uVar28 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FGeometryCacheSceneProxy *)(*pcVar2)();
        return pFVar14;
      }
      plVar25 = *(longlong **)((pUVar4->Tracks).AllocatorInstance.Data + local_1e0 * 8);
      local_1b0 = (**(code **)(*plVar25 + 0x2f0))(plVar25,this->Time,this->bLooping);
      UE::Core::Private::Function::CheckCallable(*(void **)&this->CreateTrackProxy);
      plVar26 = *(longlong **)&(this->CreateTrackProxy).field_0x28;
      pcVar2 = *(code **)&this->CreateTrackProxy;
      plVar22 = (longlong *)&(this->CreateTrackProxy).field_0x10;
      if (plVar26 != (longlong *)0x0) {
        plVar22 = plVar26;
      }
      uVar15 = (**(code **)(*plVar22 + 8))();
      local_208 = (longlong *)(*pcVar2)(uVar15);
      lVar8 = local_1c8;
      local_208[0x7e] = (longlong)plVar25;
      lVar3 = *(longlong *)(pFVar5 + local_1c8 + 8);
      local_208[0x80] = *(longlong *)(pFVar5 + local_1c8);
      local_208[0x81] = lVar3;
      lVar3 = *(longlong *)(pFVar5 + local_1c8 + 0x10 + 8);
      local_208[0x82] = *(longlong *)(pFVar5 + local_1c8 + 0x10);
      local_208[0x83] = lVar3;
      lVar3 = *(longlong *)(pFVar5 + local_1c8 + 0x20 + 8);
      local_208[0x84] = *(longlong *)(pFVar5 + local_1c8 + 0x20);
      local_208[0x85] = lVar3;
      lVar3 = *(longlong *)(pFVar5 + local_1c8 + 0x30 + 8);
      local_208[0x86] = *(longlong *)(pFVar5 + local_1c8 + 0x30);
      local_208[0x87] = lVar3;
      lVar3 = *(longlong *)(pFVar5 + local_1c8 + 0x40 + 8);
      local_208[0x88] = *(longlong *)(pFVar5 + local_1c8 + 0x40);
      local_208[0x89] = lVar3;
      lVar3 = *(longlong *)(pFVar5 + local_1c8 + 0x50 + 8);
      local_208[0x8a] = *(longlong *)(pFVar5 + local_1c8 + 0x50);
      local_208[0x8b] = lVar3;
      lVar3 = *(longlong *)(pFVar5 + local_1c8 + 0x60 + 8);
      local_208[0x8c] = *(longlong *)(pFVar5 + local_1c8 + 0x60);
      local_208[0x8d] = lVar3;
      lVar3 = *(longlong *)(pFVar5 + local_1c8 + 0x70 + 8);
      puVar24 = (undefined8 *)0x0;
      local_208[0x8e] = *(longlong *)(pFVar5 + local_1c8 + 0x70);
      local_208[0x8f] = lVar3;
      *(undefined4 *)(local_208 + 3) = 0xffffffff;
      *(undefined4 *)((longlong)local_208 + 0xc4) = 0xffffffff;
      *(undefined4 *)((longlong)local_208 + 0x1c) = 0xffffffff;
      *(undefined4 *)(local_208 + 4) = 0xffffffff;
      *(undefined4 *)((longlong)local_208 + 0x24) = 0;
      *(undefined4 *)(local_208 + 5) = 0;
      *(undefined4 *)((longlong)local_208 + 0x2c) = 0x3f800000;
      local_208[2] = 0;
      *(undefined1 *)((longlong)local_208 + 0x481) = 0;
      if (0 < *(int *)(local_1b0 + 0x40)) {
        local_170 = (undefined ***)0x0;
        local_188 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`14'::<lambda_1>,1,0>
                     ::_vftable_;
        uStack_174 = *(undefined4 *)(local_1b0 + 0x44);
        local_198[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l14::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
        plStack_180 = local_208;
        local_178 = *(int *)(local_1b0 + 0x40);
        pFVar16 = FRenderCommandList::GetInstanceTLS();
        if (pFVar16 == (FRenderCommandList *)0x0) {
          FRenderThreadCommandPipe::
          Enqueue<TRenderCommandTag<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l14::TSTR_FGeometryCacheInitResources154>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_198);
        }
        else {
          pFVar17 = FRenderCommandList::GetRenderThread(pFVar16);
          local_e8._4_4_ = uStack_174;
          local_e8._0_4_ = local_178;
          local_108._0_8_ = local_198[0];
          local_e0 = local_170;
          local_170 = (undefined ***)0x0;
          local_f8 = local_188;
          plStack_f0 = plStack_180;
          local_198[0] = (code *)0x0;
          local_d8 = 2;
          pFVar18 = (FRenderCommandTag *)
                    TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l14::TSTR_FGeometryCacheInitResources154>
                    ::Get();
          UE::RenderCommandPipe::FCommandList::Enqueue
                    (pFVar17,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                              *)local_108,pFVar18);
          uVar27 = (ulonglong)local_d8;
          if ((2 < uVar27) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                  ,0xd4,L""), bVar10)) {
            pcVar2 = (code *)swi(3);
            pFVar14 = (FGeometryCacheSceneProxy *)(*pcVar2)();
            return pFVar14;
          }
          if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar27] ==
              UE::Core::Private::
              TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::
              Destruct) {
            if ((code *)local_108._0_8_ != (code *)0x0) {
              pppuVar23 = (undefined ***)(local_108 + 0x10);
              if (local_e0 != (undefined ***)0x0) {
                pppuVar23 = local_e0;
              }
              (*(code *)(*pppuVar23)[2])();
            }
          }
          else {
            (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                        ::__l2::Destructors)[uVar27])(local_108);
          }
        }
        if (local_198[0] != (code *)0x0) {
          pppuVar23 = &local_188;
          if (local_170 != (undefined ***)0x0) {
            pppuVar23 = local_170;
          }
          (*(code *)(*pppuVar23)[2])();
        }
      }
      local_1d8[0] = 0xffffffff;
      puVar19 = ::operator_new(0xd8);
      puVar20 = puVar24;
      if (puVar19 != (undefined8 *)0x0) {
        puVar19[1] = 0;
        puVar19[3] = 0;
        puVar19[5] = 0;
        puVar19[7] = 0;
        puVar19[9] = 0;
        puVar19[0xb] = 0;
        puVar19[0xd] = 0;
        puVar19[0xf] = 0;
        *puVar19 = 0;
        puVar19[2] = 0;
        puVar19[4] = 0;
        puVar19[6] = 0;
        puVar19[8] = 0;
        puVar19[10] = 0;
        puVar19[0xc] = 0;
        puVar19[0xe] = 0;
        puVar19[0x10] = 0;
        puVar19[0x11] = 0;
        puVar19[0x12] = 0;
        *(undefined1 *)(puVar19 + 0x13) = 0;
        *(undefined2 *)((longlong)puVar19 + 0x99) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x9b) = 0;
        puVar19[0x14] = 0;
        puVar19[0x15] = 0;
        puVar19[0x16] = 0;
        *(undefined1 *)(puVar19 + 0x17) = 0;
        puVar19[0x18] = 0;
        puVar19[0x19] = 0;
        puVar19[0x1a] = 0;
        puVar20 = puVar19;
      }
      local_208[1] = (longlong)puVar20;
      (**(code **)(*local_208 + 8))(local_208,this->Time,this->bLooping,local_1d8);
      puVar20 = ::operator_new(0xd8);
      if (puVar20 != (undefined8 *)0x0) {
        puVar20[1] = 0;
        puVar20[3] = 0;
        puVar20[5] = 0;
        puVar20[7] = 0;
        puVar20[9] = 0;
        puVar20[0xb] = 0;
        puVar20[0xd] = 0;
        puVar20[0xf] = 0;
        *puVar20 = 0;
        puVar20[2] = 0;
        puVar20[4] = 0;
        puVar20[6] = 0;
        puVar20[8] = 0;
        puVar20[10] = 0;
        puVar20[0xc] = 0;
        puVar20[0xe] = 0;
        puVar20[0x10] = 0;
        puVar20[0x11] = 0;
        puVar20[0x12] = 0;
        *(undefined1 *)(puVar20 + 0x13) = 0;
        *(undefined2 *)((longlong)puVar20 + 0x99) = 0;
        *(undefined1 *)((longlong)puVar20 + 0x9b) = 0;
        puVar20[0x14] = 0;
        puVar20[0x15] = 0;
        puVar20[0x16] = 0;
        *(undefined1 *)(puVar20 + 0x17) = 0;
        puVar20[0x18] = 0;
        puVar20[0x19] = 0;
        puVar20[0x1a] = 0;
        puVar24 = puVar20;
      }
      local_208[2] = (longlong)puVar24;
      *(undefined1 *)(local_208 + 0x90) = 0;
      TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)(local_208 + 6),
                 &local_1f8);
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_208) &&
          ((FScriptContainerElement *)&local_208 < pFVar5 + (longlong)(this->Tracks).ArrayMax * 8))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FGeometryCacheSceneProxy *)(*pcVar2)();
        return pFVar14;
      }
      iVar13 = (this->Tracks).ArrayNum;
      if (iVar13 == (this->Tracks).ArrayMax) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,&(this->Tracks).ArrayMax);
      }
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      local_1c8 = lVar8 + 0xc0;
      (this->Tracks).ArrayNum = iVar13 + 1;
      uVar28 = uVar28 + 1;
      *(longlong **)(pFVar5 + (longlong)iVar13 * 8) = local_208;
      local_1e0 = local_1e0 + 1;
      param_2 = local_1a0;
    } while (local_1e0 < local_1a8);
  }
  local_158 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`2'::<lambda_2>,1,0>
               ::_vftable_;
  local_140 = (undefined ***)0x0;
  local_168[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                 ::Call;
  pFStack_150 = this;
  pFVar16 = FRenderCommandList::GetInstanceTLS();
  if (pFVar16 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l2::TSTR_FGeometryCacheUpdateAnimation176>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_168);
  }
  else {
    pFVar17 = FRenderCommandList::GetRenderThread(pFVar16);
    local_c8._0_8_ = local_168[0];
    local_a0 = local_140;
    local_b8 = local_158;
    pFStack_b0 = pFStack_150;
    local_a8 = local_148;
    local_168[0] = (code *)0x0;
    local_98 = 2;
    pFVar18 = (FRenderCommandTag *)
              TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l2::TSTR_FGeometryCacheUpdateAnimation176>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar17,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_c8,pFVar18);
    uVar27 = (ulonglong)local_98;
    if ((2 < uVar27) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      pFVar14 = (FGeometryCacheSceneProxy *)(*pcVar2)();
      return pFVar14;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar27] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_c8._0_8_ != (code *)0x0) {
        pppuVar23 = (undefined ***)(local_c8 + 0x10);
        if (local_a0 != (undefined ***)0x0) {
          pppuVar23 = local_a0;
        }
        (*(code *)(*pppuVar23)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar27])(local_c8);
    }
  }
  if (local_168[0] != (code *)0x0) {
    pppuVar23 = &local_158;
    if (local_140 != (undefined ***)0x0) {
      pppuVar23 = local_140;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  bVar10 = IsRayTracingEnabled();
  if (bVar10) {
    uVar7 = *(undefined4 *)&param_1->field_0x1c;
    (this->RayTracingDebugName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->field_0x18;
    (this->RayTracingDebugName).Number = uVar7;
    local_128 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::`18'::<lambda_3>,1,0>
                 ::_vftable_;
    local_138[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l18::<lambda_3>,void,FRHICommandListImmediate_&>
                   ::Call;
    local_110 = (undefined ***)0x0;
    pFStack_120 = this;
    pFVar16 = FRenderCommandList::GetInstanceTLS();
    if (pFVar16 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FGeometryCacheSceneProxy::FGeometryCacheSceneProxy_::__l18::TSTR_FGeometryCacheInitRayTracingGeometry187>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_138);
    }
    else {
      pFVar17 = FRenderCommandList::GetRenderThread(pFVar16);
      local_88._0_8_ = local_138[0];
      local_60 = local_110;
      local_78 = local_128;
      pFStack_70 = pFStack_120;
      local_68 = local_118;
      local_138[0] = (code *)0x0;
      local_58 = 2;
      pFVar18 = (FRenderCommandTag *)
                TRenderCommandTag<`FGeometryCacheSceneProxy::FGeometryCacheSceneProxy'::__l18::TSTR_FGeometryCacheInitRayTracingGeometry187>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar17,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar18);
      uVar27 = (ulonglong)local_58;
      if ((2 < uVar27) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        pFVar14 = (FGeometryCacheSceneProxy *)(*pcVar2)();
        return pFVar14;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar27] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          pppuVar23 = (undefined ***)(local_88 + 0x10);
          if (local_60 != (undefined ***)0x0) {
            pppuVar23 = local_60;
          }
          (*(code *)(*pppuVar23)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar27])(local_88);
      }
    }
    if (local_138[0] != (code *)0x0) {
      pppuVar23 = &local_128;
      if (local_110 != (undefined ***)0x0) {
        pppuVar23 = local_110;
      }
      (*(code *)(*pppuVar23)[2])();
    }
  }
  if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.AllocatorInstance.Data);
  }
  if (*(longlong *)param_2 != 0) {
    plVar25 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar25 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar25 + 0x10))();
  }
  return this;
}

// ~FGeometryCacheSceneProxy @ 14ca08cc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FGeometryCacheSceneProxy::~FGeometryCacheSceneProxy(FGeometryCacheSceneProxy *this)

{
  int *piVar1;
  TArray<FGeomCacheTrackProxy_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  undefined8 *puVar5;
  FGeometryCacheMeshData *pFVar6;
  longlong *plVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pTVar2 = &this->Tracks;
  *(undefined ***)this = &___7FGeometryCacheSceneProxy__6B_;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  iVar4 = (this->Tracks).ArrayNum;
  pFVar3 = pFVar9 + (longlong)iVar4 * 8;
  while( true ) {
    if ((this->Tracks).ArrayNum != iVar4) {
      `TCheckedPointerIterator<FGeomCacheTrackProxy_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar9 == pFVar3) break;
    puVar5 = *(undefined8 **)pFVar9;
    if (puVar5 != (undefined8 *)0x0) {
      (**(code **)(puVar5[0x19] + 0x20))();
      (**(code **)(puVar5[0x20] + 0x20))();
      (**(code **)(puVar5[0x27] + 0x20))();
      (**(code **)(puVar5[0x2e] + 0x20))();
      (**(code **)(puVar5[0x35] + 0x20))();
      (**(code **)(puVar5[0x3c] + 0x20))();
      (**(code **)(puVar5[8] + 0x20))(puVar5 + 8);
      (**(code **)(puVar5[0xf] + 0x20))(puVar5 + 0xf);
      (**(code **)(puVar5[0x91] + 0x20))();
      pFVar6 = (FGeometryCacheMeshData *)puVar5[1];
      if (pFVar6 != (FGeometryCacheMeshData *)0x0) {
        FGeometryCacheMeshData::~FGeometryCacheMeshData(pFVar6);
        ::operator_delete(pFVar6,0xd8);
      }
      pFVar6 = (FGeometryCacheMeshData *)puVar5[2];
      if (pFVar6 != (FGeometryCacheMeshData *)0x0) {
        FGeometryCacheMeshData::~FGeometryCacheMeshData(pFVar6);
        ::operator_delete(pFVar6,0xd8);
      }
      (**(code **)*puVar5)(puVar5,1);
    }
    pFVar9 = pFVar9 + 8;
  }
  piVar1 = &(this->Tracks).ArrayMax;
  (this->Tracks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (*(longlong *)&this->CreateTrackProxy != 0) {
    plVar7 = *(longlong **)&(this->CreateTrackProxy).field_0x28;
    plVar8 = (longlong *)&(this->CreateTrackProxy).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar8 = plVar7;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  FScratchMemory::~FScratchMemory(&this->Scratch);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 14ca0c450

void __thiscall
`FGeometryCacheSceneProxy::FrameUpdate'::__l280::<lambda_1>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  lVar5 = **(longlong **)((longlong)this + 0x10);
  uVar9 = 0;
  if (param_1 < *(int *)(lVar5 + 0x68)) {
    uVar9 = (uint)~param_1 >> 0x1f;
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
  lVar5 = *(longlong *)(lVar5 + 0x60);
  fVar1 = *(float *)this;
  plVar6 = *(longlong **)((longlong)this + 8);
  fVar2 = *(float *)(lVar5 + lVar10 * 0xc);
  fVar3 = *(float *)(lVar5 + 4 + lVar10 * 0xc);
  fVar4 = *(float *)(lVar5 + 8 + lVar10 * 0xc);
  uVar9 = 0;
  if (param_1 < (int)plVar6[1]) {
    uVar9 = (uint)~param_1 >> 0x1f;
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
  lVar5 = *plVar6;
  *(float *)(lVar5 + lVar10 * 0xc) = fVar1 * fVar2;
  *(float *)(lVar5 + 4 + lVar10 * 0xc) = fVar1 * fVar3;
  *(float *)(lVar5 + 8 + lVar10 * 0xc) = fVar1 * fVar4;
  return;
}

// operator() @ 14ca0c620

void __thiscall
`FGeometryCacheSceneProxy::FrameUpdate'::__l283::<lambda_2>::operator()(void *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  lVar14 = (longlong)param_1;
  plVar8 = (longlong *)**(longlong **)((longlong)this + 8);
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = uVar15;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  lVar9 = *plVar8;
  plVar8 = *(longlong **)((longlong)this + 0x18);
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = uVar15;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  lVar10 = *plVar8;
  fVar1 = *(float *)this;
  plVar8 = *(longlong **)((longlong)this + 0x10);
  fVar2 = *(float *)(lVar9 + lVar14 * 0xc);
  fVar3 = *(float *)(lVar10 + lVar14 * 0xc);
  fVar4 = *(float *)(lVar10 + 4 + lVar14 * 0xc);
  fVar5 = *(float *)(lVar10 + 8 + lVar14 * 0xc);
  fVar6 = *(float *)(lVar9 + 4 + lVar14 * 0xc);
  fVar7 = *(float *)(lVar9 + 8 + lVar14 * 0xc);
  uVar13 = 0;
  if (param_1 < (int)plVar8[1]) {
    uVar13 = uVar15;
  }
  if (uVar13 == 0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar12) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  lVar9 = *plVar8;
  *(float *)(lVar9 + lVar14 * 0xc) = fVar2 - fVar1 * fVar3;
  *(float *)(lVar9 + 4 + lVar14 * 0xc) = fVar6 - fVar1 * fVar4;
  *(float *)(lVar9 + 8 + lVar14 * 0xc) = fVar7 - fVar1 * fVar5;
  return;
}

// CanBeOccluded @ 14ca0fc70

bool __thiscall FGeometryCacheSceneProxy::CanBeOccluded(FGeometryCacheSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// ClearSections @ 14ca0fd50

void __thiscall FGeometryCacheSceneProxy::ClearSections(FGeometryCacheSceneProxy *this)

{
  int *piVar1;
  
  piVar1 = &(this->Tracks).ArrayMax;
  (this->Tracks).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Tracks).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Scratch).InterpolatedPositions.ArrayMax;
  (this->Scratch).InterpolatedPositions.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)&this->Scratch,0,piVar1);
  }
  piVar1 = &(this->Scratch).InterpolatedTangentX.ArrayMax;
  (this->Scratch).InterpolatedTangentX.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Scratch).InterpolatedTangentX.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Scratch).InterpolatedTangentZ.ArrayMax;
  (this->Scratch).InterpolatedTangentZ.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Scratch).InterpolatedTangentZ.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Scratch).InterpolatedUVs.ArrayMax;
  (this->Scratch).InterpolatedUVs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->Scratch).InterpolatedUVs.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Scratch).InterpolatedColors.ArrayMax;
  (this->Scratch).InterpolatedColors.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Scratch).InterpolatedColors.AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->Scratch).InterpolatedMotionVectors.ArrayMax;
  (this->Scratch).InterpolatedMotionVectors.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->Scratch).InterpolatedMotionVectors.AllocatorInstance,0,piVar1);
  }
  return;
}

// CreateMeshBatch @ 14ca10910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FGeometryCacheSceneProxy::CreateMeshBatch
          (FGeometryCacheSceneProxy *this,FRHICommandListBase *param_1,FGeomCacheTrackProxy *param_2
          ,FGeometryCacheMeshBatchInfo *param_3,FGeometryCacheVertexFactoryUserDataWrapper *param_4,
          FDynamicPrimitiveUniformBuffer *param_5,FMeshBatch *param_6)

{
  TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters> *pTVar1;
  uchar *puVar2;
  int iVar3;
  FGeometryCacheMeshData *pFVar4;
  FGeometryCacheMeshData *pFVar5;
  TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters> this_00;
  ForElementType<FMeshBatchElement> FVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters> TVar10;
  float *pfVar11;
  longlong lVar12;
  FGeometryCacheVertexFactoryUserData *pFVar13;
  ForElementType<FMeshBatchElement> FVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStackY_5b8 [32];
  undefined1 local_588 [16];
  TVector<float>_u_0 local_578;
  TVector<float>_u_0 local_568;
  TVector<float>_u_0 local_558;
  undefined8 local_548;
  float local_540;
  undefined8 local_538;
  float local_530;
  float local_52c;
  TMatrix<double> local_528;
  undefined1 local_4a8 [664];
  float local_210 [34];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  pFVar13 = &param_4->Data;
  local_588._8_8_ = param_5;
  *(ulonglong *)&(param_4->Data).MeshExtension.field0_0x0 =
       CONCAT44(UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y,
                UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X);
  (param_4->Data).MeshExtension.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  *(ulonglong *)&(param_4->Data).MeshOrigin.field0_0x0 =
       CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  (param_4->Data).MeshOrigin.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  pFVar4 = param_2->MeshData;
  if (((((pFVar4->VertexInfo).bHasMotionVectors == false) ||
       (pFVar5 = param_2->NextFrameMeshData, (pFVar5->VertexInfo).bHasMotionVectors == false)) ||
      ((pFVar4->Positions).ArrayNum != (pFVar4->MotionVectors).ArrayNum)) ||
     ((pFVar5->Positions).ArrayNum != (pFVar5->MotionVectors).ArrayNum)) {
    fVar18 = __real_3f800000;
    if (this->UpdatedFrameNum < GFrameNumber) {
      fVar18 = 0.0;
    }
    fVar17 = __real_3f800000 - fVar18;
    fVar16 = fVar18 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
    fVar15 = fVar18 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    (param_4->Data).MotionBlurDataExtension.field0_0x0._s_0.X =
         fVar18 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X;
    (param_4->Data).MotionBlurDataExtension.field0_0x0._s_0.Y = fVar16;
    (param_4->Data).MotionBlurDataExtension.field0_0x0._s_0.Z = fVar15;
  }
  else {
    fVar18 = this->PlaybackSpeed;
    fVar17 = param_2->SubframeInterpolationFactor;
    fVar16 = fVar18 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
    fVar15 = fVar18 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
    (param_4->Data).MotionBlurDataExtension.field0_0x0._s_0.X =
         fVar18 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * fVar17;
    (param_4->Data).MotionBlurDataExtension.field0_0x0._s_0.Y = fVar16 * fVar17;
    (param_4->Data).MotionBlurDataExtension.field0_0x0._s_0.Z = fVar15 * fVar17;
    fVar17 = __real_3f800000;
  }
  *(ulonglong *)&(param_4->Data).MotionBlurDataOrigin.field0_0x0 =
       CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  (param_4->Data).MotionBlurDataOrigin.field0_0x0._s_0.Z =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  (param_4->Data).MotionBlurPositionScale = fVar17;
  local_578._0_8_ = param_3;
  bVar9 = IsRayTracingEnabled();
  if (bVar9) {
    if ((((UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X !=
           (param_4->Data).MeshExtension.field0_0x0._s_0.X) ||
         (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y !=
          (param_4->Data).MeshExtension.field0_0x0._s_0.Y)) ||
        (UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z !=
         (param_4->Data).MeshExtension.field0_0x0._s_0.Z)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserData.MeshExtension == FVector3f::OneVector",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                           ,0x128,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((((UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X !=
           (param_4->Data).MeshOrigin.field0_0x0._s_0.X) ||
         (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y !=
          (param_4->Data).MeshOrigin.field0_0x0._s_0.Y)) ||
        (UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z !=
         (param_4->Data).MeshOrigin.field0_0x0._s_0.Z)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("UserData.MeshOrigin == FVector3f::ZeroVector",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                           ,0x129,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  local_568._0_8_ = *(undefined8 *)&(param_4->Data).MeshOrigin.field0_0x0;
  local_558._0_8_ = *(undefined8 *)&(param_4->Data).MeshExtension.field0_0x0;
  local_548 = *(undefined8 *)&(param_4->Data).MotionBlurDataOrigin.field0_0x0;
  local_538 = *(undefined8 *)&(param_4->Data).MotionBlurDataExtension.field0_0x0;
  local_52c = (param_4->Data).MotionBlurPositionScale;
  pFVar13->PositionBuffer =
       (FVertexBuffer *)(param_2->PositionBuffers + (param_2->CurrentPositionBufferIndex & 1));
  local_568._s_0.Z = (param_4->Data).MeshOrigin.field0_0x0._s_0.Z;
  local_558._s_0.Z = (param_4->Data).MeshExtension.field0_0x0._s_0.Z;
  local_540 = (param_4->Data).MotionBlurDataOrigin.field0_0x0._s_0.Z;
  (param_4->Data).MotionBlurDataBuffer =
       (FVertexBuffer *)(param_2->PositionBuffers + (param_2->CurrentPositionBufferIndex - 1 & 1));
  local_530 = (param_4->Data).MotionBlurDataExtension.field0_0x0._s_0.Z;
  TVar10 = TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>::
           CreateUniformBufferImmediate
                     ((FGeometryCacheVertexFactoryUniformBufferParameters *)local_588,
                      (EUniformBufferUsage)&local_568,ValidateResources);
  pTVar1 = &(param_4->Data).UniformBuffer;
  if ((TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>)pTVar1 != TVar10) {
    this_00 = *pTVar1;
    *pTVar1 = *(TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters> *)TVar10;
    *(undefined8 *)TVar10 = 0;
    if (this_00 != (TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  if ((FRHIResource *)local_588._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_588._0_8_);
  }
  FGeometryCacheVertexVertexFactory::CreateManualVertexFetchUniformBuffer
            ((FGeometryCacheVertexVertexFactory *)&param_2->VertexFactory,param_1,
             pFVar13->PositionBuffer,(param_4->Data).MotionBlurDataBuffer,pFVar13);
  if (((param_6->Elements).ArrayNum < 1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_4a8._376_8_ = _UNK_150689648;
  local_4a8._368_8_ = ___xmm_3f800000000000000000000000000000;
  FVar6 = (param_6->Elements).AllocatorInstance.SecondaryData;
  lVar12 = 9;
  FVar14 = (ForElementType<FMeshBatchElement>)param_6;
  if (FVar6 != (ForElementType<FMeshBatchElement>)0x0) {
    FVar14 = FVar6;
  }
  *(FGeomCacheIndexBuffer **)((longlong)FVar14 + 0x18) = &param_2->IndexBuffer;
  pfVar11 = &(((FPrimitiveUniformShaderParametersBuilder *)local_4a8)->Parameters).
             CustomPrimitiveData.Elements[0].field0_0x0._s_0.Z;
  param_6->VertexFactory = (FVertexFactory *)&param_2->VertexFactory;
  param_6->SegmentIndex = 0;
  local_4a8._448_8_ = local_4a8._368_8_;
  local_4a8._456_8_ = local_4a8._376_8_;
  do {
    ((TVector4<float>_u_0_s_0 *)(pfVar11 + -2))->X = 0.0;
    ((TVector4<float>_u_0_s_0 *)(pfVar11 + -2))->Y = 0.0;
    *pfVar11 = 0.0;
    pfVar11[1] = 1.0;
    pfVar11 = pfVar11 + 4;
    lVar12 = lVar12 + -1;
  } while (lVar12 != 0);
  FPrimitiveSceneProxy::BuildUniformShaderParameters
            ((FPrimitiveSceneProxy *)this,(FPrimitiveUniformShaderParametersBuilder *)local_4a8);
  VectorMatrixMultiply(&local_528,&param_2->WorldMatrix,(TMatrix<double> *)&this->field_0x110);
  uVar8 = local_588._8_8_;
  local_188 = local_528.M[0][0];
  dStack_180 = local_528.M[0][1];
  local_178 = local_528.M[0][2];
  dStack_170 = local_528.M[0][3];
  local_168 = local_528.M[1][0];
  dStack_160 = local_528.M[1][1];
  local_158 = local_528.M[1][2];
  dStack_150 = local_528.M[1][3];
  local_148 = local_528.M[2][0];
  dStack_140 = local_528.M[2][1];
  local_138 = local_528.M[2][2];
  dStack_130 = local_528.M[2][3];
  local_128 = local_528.M[3][0];
  dStack_120 = local_528.M[3][1];
  local_118 = local_528.M[3][2];
  dStack_110 = local_528.M[3][3];
  FDynamicPrimitiveUniformBuffer::Set
            ((FDynamicPrimitiveUniformBuffer *)local_588._8_8_,param_1,
             (FPrimitiveUniformShaderParametersBuilder *)local_4a8);
  *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar14 + 8) =
       (TUniformBuffer<FPrimitiveUniformShaderParameters> *)(uVar8 + 8);
  lVar12 = 0x10;
  if (param_2->bNextFrameMeshDataSelected == false) {
    lVar12 = 8;
  }
  lVar12 = *(longlong *)((longlong)param_2->PositionBuffers + lVar12 + -0x40);
  *(undefined4 *)((longlong)FVar14 + 0x58) = *(undefined4 *)local_578._0_8_;
  *(uint *)((longlong)FVar14 + 0x5c) = *(uint *)(local_578._0_8_ + 4);
  puVar2 = (uchar *)((longlong)FVar14 + 0x68);
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  iVar3 = *(int *)(lVar12 + 8);
  *(FGeometryCacheVertexFactoryUserData **)((longlong)FVar14 + 0x40) = pFVar13;
  *(int *)((longlong)FVar14 + 0x6c) = iVar3 + -1;
  *(uint *)&param_6->field_0xd4 =
       ((byte)this->field_0x78 & 1 ^ *(uint *)&param_6->field_0xd4 & 0xfffffffe) & 0xffffc07f;
  return;
}

// FrameUpdate @ 14ca168b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FGeometryCacheSceneProxy::FrameUpdate(FGeometryCacheSceneProxy *this,FRHICommandListBase *param_1)

{
  float *pfVar1;
  float *pfVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong *plVar7;
  code *pcVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  TConsoleVariableData<int> *pTVar48;
  char cVar49;
  bool bVar50;
  bool bVar51;
  char cVar52;
  longlong lVar53;
  FName *pFVar54;
  FThreadSafeStaticStat<FStat_STAT_InterpolateFrames> FVar55;
  float *pfVar56;
  FScriptContainerElement *pFVar57;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar58;
  ulonglong uVar59;
  undefined4 *puVar60;
  longlong lVar61;
  int iVar62;
  FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions> FVar63;
  FNameEntryId FVar64;
  FName FVar65;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar66;
  FScriptContainerElement *pFVar67;
  FName FVar68;
  longlong lVar69;
  longlong *plVar70;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar71;
  int iVar72;
  longlong lVar73;
  bool bVar74;
  undefined1 auVar75 [16];
  float fVar76;
  float fVar77;
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  <lambda_1> local_res8;
  int *piVar85;
  int *piVar86;
  float local_328;
  bool local_324;
  int local_320;
  char local_31c;
  FScriptContainerElement *local_318;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_310;
  undefined1 local_308 [8];
  FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions> local_300;
  FScriptContainerElement *local_2f8;
  FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDTangents> local_2f0;
  FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDMotionVectors> local_2e8;
  int local_2e0;
  int local_2dc;
  undefined4 *local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  FScriptContainerElement *local_2c0;
  FColor_u_0 local_2b8;
  FColor_u_0 local_2b4;
  FColor_u_0 local_2b0;
  FColor_u_0 local_2ac;
  FColor_u_0 local_2a8;
  FColor_u_0 local_2a4;
  uint local_2a0;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_298;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_288;
  FName local_278;
  uint local_270;
  uint uStack_26c;
  FName local_268;
  uint local_260;
  uint uStack_25c;
  FName local_258;
  uint local_250;
  uint uStack_24c;
  FName local_248;
  uint local_240;
  uint uStack_23c;
  float local_238;
  float fStack_234;
  FName local_230;
  uint local_228;
  uint uStack_224;
  FScriptContainerElement *local_220;
  FName local_218;
  uint local_210;
  uint uStack_20c;
  FName local_208;
  FName local_1f8;
  FName local_1e8;
  FName local_1d8;
  FName local_1c8;
  FName local_1b8;
  LARGE_INTEGER local_1a8;
  FStatMessage local_1a0;
  TArrayView<std::nullptr_t,int> local_190;
  code *local_180;
  float *local_178;
  TArrayView<std::nullptr_t,int> local_170;
  code *local_160;
  float *local_158;
  float local_150 [2];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_148;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **local_140;
  float local_138 [2];
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> **local_130;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_128;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_120;
  FName local_118;
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0 [22];
  
  bVar74 = -1 < CpuChannel->Enabled;
  if (bVar74) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId695,"FGeometryCacheSceneProxy::FrameUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
               ,0x2b7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId695);
  }
  fVar47 = _UNK_15068962c;
  fVar46 = _UNK_150689628;
  fVar45 = _UNK_150689624;
  fVar44 = ___xmm_3f0000003f0000003f0000003f000000;
  fVar43 = __real_3f000000;
  uVar42 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar41 = __real_3f800000;
  fVar40 = __real_38d1b717;
  fVar39 = __real_322bcc77;
  local_2a0 = (this->Tracks).ArrayNum;
  uVar59 = (ulonglong)(int)local_2a0;
  pFVar57 = (this->Tracks).AllocatorInstance.Data;
  local_res8 = SUB81(this,0);
  local_2c0 = pFVar57 + uVar59 * 8;
  pFVar67 = local_2c0;
  do {
    while( true ) {
      fVar78 = __real_40000000;
      local_220 = pFVar57;
      if ((this->Tracks).ArrayNum != (int)uVar59) {
        local_308[0] = 0;
        `TCheckedPointerIterator<FGeomCacheTrackProxy_*_const,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_308);
      }
      if (pFVar57 == pFVar67) goto LAB_14ca18fab;
      plVar7 = *(longlong **)pFVar57;
      if ((plVar7 != (longlong *)0x0) &&
         (lVar53 = (**(code **)(*plVar7 + 0x20))(plVar7), *(char *)(lVar53 + 0x10) != '\0')) break;
LAB_14ca18ea4:
      uVar59 = (ulonglong)local_2a0;
      pFVar57 = local_220 + 8;
    }
    pfVar56 = &local_328;
    piVar86 = &local_2e0;
    *(int *)(plVar7 + 4) = (int)plVar7[3];
    *(undefined4 *)(plVar7 + 5) = *(undefined4 *)((longlong)plVar7 + 0x24);
    piVar85 = &local_2dc;
    *(undefined4 *)((longlong)plVar7 + 0x2c) = 0x3f800000;
    (**(code **)(*plVar7 + 0x28))(plVar7);
    fVar84 = *(float *)((longlong)plVar7 + 0x24);
    lVar53 = plVar7[3];
    bVar32 = false;
    *(float *)((longlong)plVar7 + 0x24) = local_328;
    bVar51 = false;
    bVar33 = false;
    local_31c = '\0';
    local_300._0_4_ = (int)ROUND(fVar84 + fVar84 + fVar43) >> 1;
    fVar76 = local_328 * fVar78 + fVar43;
    auVar81 = ZEXT416((uint)fVar76);
    local_320 = (int)ROUND(fVar76) >> 1;
    bVar13 = (float)((uint)(local_328 - fVar84) & uVar42) <= fVar39;
    if (((int)lVar53 != local_2dc) || (*(int *)((longlong)plVar7 + 0x1c) != local_2e0)) {
      lVar61 = plVar7[1];
      pcVar8 = *(code **)(*plVar7 + 0x10);
      bVar32 = false;
      if (*(int *)((longlong)plVar7 + 0x1c) == local_2dc) {
        *(int *)(plVar7 + 3) = *(int *)((longlong)plVar7 + 0x1c);
        plVar7[1] = plVar7[2];
        plVar7[2] = lVar61;
        *(int *)((longlong)plVar7 + 0x1c) = (int)lVar53;
        cVar49 = (*pcVar8)(plVar7,local_2e0,lVar61,pcVar8,piVar85,piVar86,pfVar56);
        if (cVar49 == '\0') {
          *(undefined4 *)((longlong)plVar7 + 0x1c) = 0xffffffff;
LAB_14ca16be5:
          bVar32 = true;
        }
        else {
          *(int *)((longlong)plVar7 + 0x1c) = local_2e0;
          bVar33 = true;
        }
      }
      else {
        cVar49 = (*pcVar8)(plVar7,local_2dc,lVar61,pcVar8,piVar85,piVar86,pfVar56);
        if (cVar49 == '\0') {
          *(undefined4 *)(plVar7 + 3) = 0xffffffff;
          *(undefined4 *)(plVar7 + 4) = 0xffffffff;
          goto LAB_14ca16be5;
        }
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(plVar7[2] + 0xa0),
                   (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(plVar7[1] + 0xa0));
        cVar49 = (**(code **)(*plVar7 + 0x10))(plVar7,local_2e0,plVar7[2]);
        if (cVar49 == '\0') {
          *(undefined4 *)((longlong)plVar7 + 0x1c) = 0xffffffff;
          bVar32 = true;
          local_31c = '\0';
        }
        else {
          *(int *)(plVar7 + 3) = local_2dc;
          *(int *)((longlong)plVar7 + 0x1c) = local_2e0;
          bVar33 = true;
          local_31c = '\x01';
        }
      }
      bVar51 = true;
    }
    cVar49 = (**(code **)(*plVar7 + 0x18))
                       (plVar7,(int)plVar7[3],*(undefined4 *)((longlong)plVar7 + 0x1c));
    pTVar48 = CVarInterpolateFrames.Ref;
    lVar53 = plVar7[1];
    if ((((*(char *)(lVar53 + 0xb4) == '\0') ||
         (lVar61 = plVar7[2], *(char *)(lVar61 + 0xb4) == '\0')) ||
        (*(int *)(lVar53 + 8) != *(int *)(lVar53 + 0x68))) ||
       (local_324 = true, *(int *)(lVar61 + 8) != *(int *)(lVar61 + 0x68))) {
      local_324 = false;
    }
    if (((cVar49 == '\0') || ((bVar13 && (!bVar51)))) || (bVar32)) {
LAB_14ca1889a:
      bVar50 = CpuChannel->Enabled < 0;
      if (!bVar50) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1211,
                   "FGeometryCacheSceneProxy::FrameUpdate::NonInterpolate",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                   ,0x4bb);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1211);
      }
      if ((((bVar51) || (local_320 != local_300._0_4_)) ||
          ((!bVar13 && (this->bExtrapolateFrames != 0)))) || ((bVar33 || (bVar32)))) {
        if ((((int)ROUND(local_328 * fVar78 + fVar43) & 0xfffffffeU) == 0) ||
           ((*(int *)(plVar7[2] + 8) < 1 ||
            (iVar72 = *(int *)((longlong)plVar7 + 0x1c), iVar72 == -1)))) {
          iVar72 = (int)plVar7[3];
          plVar70 = plVar7 + 1;
          cVar49 = '\0';
        }
        else {
          cVar49 = '\x01';
          plVar70 = plVar7 + 2;
        }
        local_310 = (TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)*plVar70;
        if (local_310->ArrayNum == 0) goto LAB_14ca18fa4;
        if (*(char *)((longlong)plVar7 + 0x481) == '\0') {
          (**(code **)(*plVar7 + 0x30))(plVar7,param_1,local_310->ArrayNum,local_310[10].ArrayNum);
        }
        *(char *)(plVar7 + 0x90) = cVar49;
        if (*(char *)&local_310[0xb].AllocatorInstance.Data != '\0') {
          FGeomCacheVertexBuffer::UpdateRaw
                    ((FGeomCacheVertexBuffer *)(plVar7 + 0x19),param_1,
                     local_310[2].AllocatorInstance.Data,local_310[2].ArrayNum << 2,1,1);
        }
        if (*(char *)((longlong)&local_310[0xb].AllocatorInstance.Data + 1) != '\0') {
          FGeomCacheVertexBuffer::UpdateRaw
                    ((FGeomCacheVertexBuffer *)(plVar7 + 0x20),param_1,
                     local_310[3].AllocatorInstance.Data,local_310[3].ArrayNum << 2,1,1);
        }
        if ((char)local_310[0xb].ArrayNum == '\0') {
          FGeomCacheIndexBuffer::Update
                    ((FGeomCacheIndexBuffer *)(plVar7 + 0x35),param_1,
                     (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(local_310 + 10));
        }
        if (*(char *)((longlong)&local_310[0xb].AllocatorInstance.Data + 2) != '\0') {
          FGeomCacheVertexBuffer::UpdateRaw
                    ((FGeomCacheVertexBuffer *)(plVar7 + 0x27),param_1,
                     local_310[1].AllocatorInstance.Data,local_310[1].ArrayNum << 3,1,1);
        }
        if (*(char *)((longlong)&local_310[0xb].AllocatorInstance.Data + 3) != '\0') {
          FGeomCacheVertexBuffer::UpdateRaw
                    ((FGeomCacheVertexBuffer *)(plVar7 + 0x2e),param_1,
                     local_310[4].AllocatorInstance.Data,local_310[4].ArrayNum << 2,1,1);
        }
        cVar52 = (**(code **)(*plVar7 + 0x18))
                           (plVar7,*(undefined4 *)
                                    ((longlong)plVar7 +
                                    (ulonglong)(*(uint *)(plVar7 + 0x18) & 1) * 4 + 0xb0),iVar72);
        if (local_324 == false) {
          iVar62 = (int)plVar7[0x18];
          if (((iVar62 == -1) || (cVar52 == '\0')) || (local_31c != '\0')) {
            FGeomCacheVertexBuffer::UpdateRaw
                      ((FGeomCacheVertexBuffer *)(plVar7 + 8),param_1,
                       (local_310->AllocatorInstance).Data,local_310->ArrayNum * 0xc,1,1);
            FGeomCacheVertexBuffer::UpdateRaw
                      ((FGeomCacheVertexBuffer *)(plVar7 + 0xf),param_1,
                       (local_310->AllocatorInstance).Data,local_310->ArrayNum * 0xc,1,1);
            *(undefined4 *)(plVar7 + 0x18) = 0;
            *(int *)(plVar7 + 0x16) = iVar72;
            *(int *)((longlong)plVar7 + 0xb4) = iVar72;
          }
          else {
            *(int *)(plVar7 + 0x18) = iVar62 + 1;
            FGeomCacheVertexBuffer::UpdateRaw
                      ((FGeomCacheVertexBuffer *)(plVar7 + (ulonglong)(iVar62 - 1U & 1) * 7 + 8),
                       param_1,(local_310->AllocatorInstance).Data,local_310->ArrayNum * 0xc,1,1);
            *(int *)((longlong)plVar7 + (ulonglong)(*(uint *)(plVar7 + 0x18) & 1) * 4 + 0xb0) =
                 iVar72;
          }
        }
        else {
          local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_298.ArrayNum = 0;
          local_298.ArrayMax = 0;
          fVar78 = this->MotionVectorScale;
          if ((float)((uint)(fVar78 - fVar41) & uVar42) <= fVar39) {
            pTVar66 = local_310 + 6;
          }
          else {
            TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
                      (&local_298,local_310->ArrayNum,Default);
            local_148 = &local_298;
            local_140 = &local_310;
            local_180 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGeometryCacheSceneProxy::FrameUpdate'::__l280::<lambda_1>,void,int>
                        ::Call;
            local_178 = local_150;
            local_190.DataPtr = (void **)0x0;
            local_190.ArrayNum = 0;
            local_150[0] = fVar78;
            ParallelForImpl::
            ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                      (L"ParallelFor Task",local_310->ArrayNum,1,
                       (TFunctionRef<void___cdecl(int)> *)&local_180,local_res8,None,&local_190);
            pTVar66 = &local_298;
          }
          local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.ArrayNum = 0;
          local_288.ArrayMax = 0;
          if (this->bExtrapolateFrames != 0) {
            TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>::SetNum
                      (&local_288,local_310->ArrayNum,Default);
            local_138[0] = local_328;
            if (cVar49 != '\0') {
              local_138[0] = local_328 - fVar41;
            }
            local_130 = &local_310;
            local_160 = UE::Core::Private::Function::
                        TFunctionRefCaller<`FGeometryCacheSceneProxy::FrameUpdate'::__l283::<lambda_2>,void,int>
                        ::Call;
            local_158 = local_138;
            local_170.DataPtr = (void **)0x0;
            local_170.ArrayNum = 0;
            local_128 = &local_288;
            local_120 = pTVar66;
            ParallelForImpl::
            ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                      (L"ParallelFor Task",local_310->ArrayNum,1,
                       (TFunctionRef<void___cdecl(int)> *)&local_160,local_res8,None,&local_170);
          }
          fVar78 = (float)((uint)((float)((int)plVar7[3] - (int)plVar7[4]) +
                                 (local_328 - *(float *)(plVar7 + 5))) & uVar42);
          if (fVar41 <= fVar78) {
            fVar78 = fVar41;
          }
          if (fVar78 <= 0.0) {
            fVar78 = 0.0;
          }
          if ((float)((uint)(fVar78 - fVar41) & uVar42) <= fVar40) {
            fVar78 = fVar41;
          }
          *(float *)((longlong)plVar7 + 0x2c) = fVar78;
          *(undefined4 *)(plVar7 + 0x18) = 0;
          pTVar71 = &local_288;
          if (this->bExtrapolateFrames == 0) {
            pTVar71 = local_310;
          }
          FGeomCacheVertexBuffer::UpdateRaw
                    ((FGeomCacheVertexBuffer *)(plVar7 + 8),param_1,
                     (pTVar71->AllocatorInstance).Data,pTVar71->ArrayNum * 0xc,1,1);
          FGeomCacheVertexBuffer::UpdateRaw
                    ((FGeomCacheVertexBuffer *)(plVar7 + 0xf),param_1,
                     (pTVar66->AllocatorInstance).Data,pTVar66->ArrayNum * 0xc,1,1);
          *(int *)(plVar7 + 0x16) = iVar72;
          *(undefined4 *)((longlong)plVar7 + 0xb4) = 0xffffffff;
          *(float *)(plVar7 + 0x17) = this->Time;
          *(float *)((longlong)plVar7 + 0xbc) = this->Time;
          if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.AllocatorInstance.Data);
          }
          if (local_298.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.AllocatorInstance.Data);
          }
        }
      }
      pFVar67 = local_2c0;
      if (!bVar50) {
        FCpuProfilerTrace::OutputEndEvent();
        pFVar67 = local_2c0;
      }
      goto LAB_14ca18ea4;
    }
    bVar50 = IsInParallelRenderingThread();
    if ((!bVar50) &&
       (bVar50 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar50)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (pTVar48->ShadowedValue[1] == 0) goto LAB_14ca1889a;
    bVar50 = CpuChannel->Enabled < 0;
    if (!bVar50) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId801,"FGeometryCacheSceneProxy::FrameUpdate::Interpolate",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                 ,0x321);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId801);
    }
    *(undefined1 *)(plVar7 + 0x90) = 0;
    FVar55 = StatPtr_STAT_InterpolateFrames;
    if (StatPtr_STAT_InterpolateFrames == (FThreadSafeStaticStat<FStat_STAT_InterpolateFrames>)0x0)
    {
      pFVar54 = ::FName::FName(local_f0,"STAT_InterpolateFrames");
      FVar55 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFrames>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpolateFrames,*pFVar54,
                          L"InterpolateFrames","STATGROUP_GeometryCache","STATCAT_Advanced",
                          L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar68 = *(FName *)FVar55;
    bVar33 = false;
    bVar32 = false;
    local_1b8.ComparisonIndex.Value = 0;
    local_1b8.Number = 0;
    bVar13 = false;
    bVar51 = false;
    FVar64 = FVar68.ComparisonIndex.Value;
    uVar58 = FVar68.Number;
    if ((FVar64.Value == 0) && (bVar38 = bVar51, uVar58 == 0)) {
LAB_14ca16e2a:
      bVar51 = bVar32;
      bVar34 = false;
      bVar32 = false;
      FVar68 = local_1b8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_2b8.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_2b8._s_0,(char *)*(FName *)((longlong)FVar55 + 0x10));
        bVar33 = false;
        bVar32 = true;
        bVar13 = false;
        bVar51 = true;
        if (-1 < CpuChannel->Enabled) {
          local_218.ComparisonIndex.Value = FVar64.Value;
          local_218.Number = uVar58;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_218,(wchar_t *)*(FName *)((longlong)FVar55 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                     ,0x325);
          bVar33 = true;
          bVar32 = true;
          bVar13 = true;
          bVar51 = true;
        }
      }
      bVar38 = bVar51;
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca16e2a;
      local_210 = FVar64.Value;
      uStack_20c = uVar58;
      local_1b8 = FVar68;
      FThreadStats::AddMessage(FVar68,CycleScopeStart);
      bVar34 = true;
      bVar33 = false;
      bVar32 = true;
    }
    iVar72 = *(int *)(plVar7[1] + 8);
    local_320 = iVar72;
    if (iVar72 == 0) {
      if (bVar51) {
        FGenericPlatformMisc::EndNamedEvent();
        bVar33 = false;
        bVar34 = false;
      }
      if (bVar33) {
        FCpuProfilerTrace::OutputEndEvent();
        bVar34 = false;
      }
      if (((bVar34) && (FVar68 != (FName)0x0)) &&
         ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))))
      {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
          local_1a0.NameAndInfo.Index = FVar68.ComparisonIndex.Value;
          local_1a0.NameAndInfo.Number = FVar68.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_1a8);
          local_1a0.StatData.Pad[4] = '\0';
          local_1a0.StatData.Pad[5] = '\0';
          local_1a0.StatData.Pad[6] = '\0';
          local_1a0.StatData.Pad[7] = '\0';
          local_1a0.StatData.Pad[0] = local_1a8.s.LowPart._0_1_;
          local_1a0.StatData.Pad[1] = local_1a8.s.LowPart._1_1_;
          local_1a0.StatData.Pad[2] = local_1a8.s.LowPart._2_1_;
          local_1a0.StatData.Pad[3] = local_1a8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this_00,&local_1a0);
          piVar86 = &this_00->ScopeCount;
          *piVar86 = *piVar86 + -1;
          if (*piVar86 == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
LAB_14ca18fa4:
      if (!bVar50) {
        FCpuProfilerTrace::OutputEndEvent();
      }
LAB_14ca18fab:
      if (bVar74) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    if (*(char *)((longlong)plVar7 + 0x481) == '\0') {
      (**(code **)(*plVar7 + 0x30))(plVar7,param_1,iVar72,*(undefined4 *)(plVar7[1] + 0xa8));
    }
    FScratchMemory::Prepare(&this->Scratch,iVar72,local_324);
    fVar78 = local_328;
    fVar84 = fVar41 - local_328;
    if ((*(int *)(plVar7[1] + 8) < iVar72) &&
       (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrackProxy->MeshData->Positions.Num() >= NumVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                            ,0x346,L""), bVar51)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)(plVar7[2] + 8) < iVar72) &&
       (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrackProxy->NextFrameMeshData->Positions.Num() >= NumVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                            ,0x347,L""), bVar51)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this->Scratch).InterpolatedPositions.ArrayNum < iVar72) &&
       (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                           ("Scratch.InterpolatedPositions.Num() >= NumVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                            ,0x348,L""), bVar51)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_318 = *(FScriptContainerElement **)plVar7[1];
    local_2f8 = *(FScriptContainerElement **)plVar7[2];
    local_2f0 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDTangents>)
                (this->Scratch).InterpolatedPositions.AllocatorInstance.Data;
    local_300 = StatPtr_STAT_InterpolateFramesSIMDPositions;
    if (StatPtr_STAT_InterpolateFramesSIMDPositions ==
        (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions>)0x0) {
      pFVar54 = ::FName::FName(&local_118,"STAT_InterpolateFramesSIMDPositions");
      local_300 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_InterpolateFramesSIMDPositions,*pFVar54,
                             L"InterpolateFramesSIMDPositions","STATGROUP_GeometryCache",
                             "STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true,false,
                             MCR_Invalid);
    }
    FVar65 = *(FName *)local_300;
    local_208.ComparisonIndex.Value = 0;
    local_208.Number = 0;
    bVar33 = false;
    bVar51 = false;
    FVar64 = FVar65.ComparisonIndex.Value;
    uVar58 = FVar65.Number;
    if ((FVar64.Value == 0) && (uVar58 == 0)) {
LAB_14ca170c3:
      bVar34 = false;
      FVar65 = local_208;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_2b4.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_2b4._s_0,(char *)*(FName *)((longlong)local_300 + 0x10));
        bVar33 = false;
        bVar51 = true;
        if (-1 < CpuChannel->Enabled) {
          local_278.ComparisonIndex.Value = FVar64.Value;
          local_278.Number = uVar58;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_278,(wchar_t *)*(FName *)((longlong)local_300 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                     ,0x34d);
          bVar33 = true;
          bVar51 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca170c3;
      local_270 = FVar64.Value;
      uStack_26c = uVar58;
      local_208 = FVar65;
      FThreadStats::AddMessage(FVar65,CycleScopeStart);
      bVar34 = true;
    }
    local_300 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions>)
                (longlong)local_320;
    if (GGeometryCacheSceneProxyUseIspc == false) {
      lVar53 = 0;
      if (3 < local_320) {
        lVar61 = (longlong)local_2f8 - (longlong)local_318;
        iVar72 = 3;
        pfVar56 = (float *)((longlong)local_318 + 0x20);
        lVar69 = (longlong)local_2f0 - (longlong)local_318;
        do {
          fVar76 = pfVar56[-3];
          fVar4 = pfVar56[-2];
          fVar5 = pfVar56[-1];
          iVar72 = iVar72 + 4;
          lVar53 = lVar53 + 4;
          pfVar2 = (float *)(lVar61 + -0x10 + (longlong)pfVar56);
          fVar6 = pfVar2[1];
          fVar77 = pfVar2[2];
          fVar14 = pfVar2[3];
          fVar15 = *pfVar56;
          fVar16 = pfVar56[1];
          fVar17 = pfVar56[2];
          fVar18 = pfVar56[3];
          fVar19 = pfVar56[-8];
          fVar20 = pfVar56[-7];
          fVar21 = pfVar56[-6];
          fVar22 = pfVar56[-5];
          pfVar1 = (float *)(lVar61 + (longlong)pfVar56);
          fVar23 = *pfVar1;
          fVar24 = pfVar1[1];
          fVar25 = pfVar1[2];
          fVar26 = pfVar1[3];
          pfVar1 = (float *)(lVar61 + -0x20 + (longlong)pfVar56);
          fVar27 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar29 = pfVar1[2];
          fVar30 = pfVar1[3];
          pfVar1 = (float *)(lVar69 + -0x10 + (longlong)pfVar56);
          *pfVar1 = pfVar56[-4] * fVar84 + *pfVar2 * fVar78;
          pfVar1[1] = fVar76 * fVar84 + fVar6 * fVar78;
          pfVar1[2] = fVar4 * fVar84 + fVar77 * fVar78;
          pfVar1[3] = fVar5 * fVar84 + fVar14 * fVar78;
          pfVar1 = (float *)(lVar69 + (longlong)pfVar56);
          *pfVar1 = fVar15 * fVar84 + fVar23 * fVar78;
          pfVar1[1] = fVar16 * fVar84 + fVar24 * fVar78;
          pfVar1[2] = fVar17 * fVar84 + fVar25 * fVar78;
          pfVar1[3] = fVar18 * fVar84 + fVar26 * fVar78;
          auVar81._0_4_ = fVar19 * fVar84 + fVar27 * fVar78;
          auVar81._4_4_ = fVar20 * fVar84 + fVar28 * fVar78;
          auVar81._8_4_ = fVar21 * fVar84 + fVar29 * fVar78;
          auVar81._12_4_ = fVar22 * fVar84 + fVar30 * fVar78;
          *(undefined1 (*) [16])(lVar69 + -0x20 + (longlong)pfVar56) = auVar81;
          pfVar56 = pfVar56 + 0xc;
        } while (iVar72 < local_320);
      }
      if (lVar53 < (longlong)local_300) {
        if (3 < (longlong)local_300 - lVar53) {
          lVar69 = (longlong)local_2f0 - (longlong)local_318;
          pfVar56 = (float *)((longlong)local_318 + lVar53 * 0xc + 8);
          lVar61 = (longlong)local_2f8 - (longlong)local_318;
          lVar73 = (((longlong)local_300 - lVar53) - 4U >> 2) + 1;
          lVar53 = lVar53 + lVar73 * 4;
          do {
            fVar76 = *(float *)((longlong)pfVar56 + lVar61 + -4);
            fVar4 = *(float *)((longlong)pfVar56 + lVar61);
            fVar5 = pfVar56[-1];
            fVar6 = *pfVar56;
            *(float *)((longlong)pfVar56 + lVar69 + -8) =
                 local_328 * *(float *)((longlong)pfVar56 + lVar61 + -8) + fVar84 * pfVar56[-2];
            *(float *)((longlong)pfVar56 + lVar69 + -4) = fVar84 * fVar5 + local_328 * fVar76;
            *(float *)((longlong)pfVar56 + lVar69) = fVar84 * fVar6 + local_328 * fVar4;
            fVar76 = pfVar56[2];
            fVar4 = pfVar56[3];
            fVar5 = *(float *)((longlong)pfVar56 + lVar61 + 8);
            fVar6 = *(float *)((longlong)pfVar56 + lVar61 + 0xc);
            *(float *)((longlong)pfVar56 + lVar69 + 4) =
                 local_328 * *(float *)((longlong)pfVar56 + lVar61 + 4) + fVar84 * pfVar56[1];
            *(float *)((longlong)pfVar56 + lVar69 + 8) = fVar84 * fVar76 + local_328 * fVar5;
            *(float *)((longlong)pfVar56 + lVar69 + 0xc) = fVar84 * fVar4 + local_328 * fVar6;
            fVar76 = *(float *)((longlong)pfVar56 + lVar61 + 0x14);
            fVar4 = *(float *)((longlong)pfVar56 + lVar61 + 0x18);
            fVar5 = pfVar56[5];
            fVar6 = pfVar56[6];
            *(float *)((longlong)pfVar56 + lVar69 + 0x10) =
                 local_328 * *(float *)((longlong)pfVar56 + lVar61 + 0x10) + fVar84 * pfVar56[4];
            *(float *)((longlong)pfVar56 + lVar69 + 0x14) = local_328 * fVar76 + fVar84 * fVar5;
            *(float *)((longlong)pfVar56 + lVar69 + 0x18) = local_328 * fVar4 + fVar84 * fVar6;
            fVar76 = *(float *)((longlong)pfVar56 + lVar61 + 0x20);
            fVar4 = pfVar56[8];
            fVar5 = pfVar56[9];
            fVar77 = local_328 * *(float *)((longlong)pfVar56 + lVar61 + 0x1c) + fVar84 * pfVar56[7]
            ;
            auVar81 = ZEXT416((uint)fVar77);
            fVar6 = *(float *)((longlong)pfVar56 + lVar61 + 0x24);
            *(float *)((longlong)pfVar56 + lVar69 + 0x1c) = fVar77;
            *(float *)((longlong)pfVar56 + lVar69 + 0x20) = local_328 * fVar76 + fVar84 * fVar4;
            *(float *)((longlong)pfVar56 + lVar69 + 0x24) = local_328 * fVar6 + fVar84 * fVar5;
            pfVar56 = pfVar56 + 0xc;
            lVar73 = lVar73 + -1;
          } while (lVar73 != 0);
          if ((longlong)local_300 <= lVar53) goto LAB_14ca173dc;
        }
        lVar61 = (longlong)local_2f8 - (longlong)local_318;
        lVar69 = (longlong)local_2f0 - (longlong)local_318;
        pfVar56 = (float *)((longlong)local_318 + lVar53 * 0xc + 8);
        lVar53 = (longlong)local_300 - lVar53;
        do {
          fVar76 = *(float *)(lVar61 + -4 + (longlong)pfVar56);
          fVar4 = pfVar56[-1];
          fVar5 = *pfVar56;
          fVar77 = local_328 * *(float *)(lVar61 + -8 + (longlong)pfVar56) + fVar84 * pfVar56[-2];
          auVar81 = ZEXT416((uint)fVar77);
          fVar6 = *(float *)(lVar61 + (longlong)pfVar56);
          *(float *)(lVar69 + -8 + (longlong)pfVar56) = fVar77;
          *(float *)(lVar69 + -4 + (longlong)pfVar56) = local_328 * fVar76 + fVar84 * fVar4;
          *(float *)(lVar69 + (longlong)pfVar56) = local_328 * fVar6 + fVar84 * fVar5;
          pfVar56 = pfVar56 + 3;
          lVar53 = lVar53 + -1;
        } while (lVar53 != 0);
      }
    }
    else {
      InterpolatePositions(local_318,local_2f8,local_2f0,local_320,fVar84,local_328);
    }
LAB_14ca173dc:
    if (bVar51) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar33) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar34) {
      FThreadStats::AddMessage(FVar65,CycleScopeEnd);
    }
    iVar72 = local_320;
    if ((*(int *)(plVar7[1] + 0x28) < local_320) &&
       (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrackProxy->MeshData->TangentsX.Num() >= NumVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                            ,0x381,L""), bVar51)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)(plVar7[2] + 0x28) < iVar72) &&
       (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrackProxy->NextFrameMeshData->TangentsX.Num() >= NumVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                            ,0x382,L""), bVar51)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)(plVar7[1] + 0x38) < iVar72) &&
       (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrackProxy->MeshData->TangentsZ.Num() >= NumVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                            ,899,L""), bVar51)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((*(int *)(plVar7[2] + 0x38) < iVar72) &&
       (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                           ("TrackProxy->NextFrameMeshData->TangentsZ.Num() >= NumVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                            ,900,L""), bVar51)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this->Scratch).InterpolatedTangentX.ArrayNum < iVar72) &&
       (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                           ("Scratch.InterpolatedTangentX.Num() >= NumVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                            ,0x385,L""), bVar51)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((this->Scratch).InterpolatedTangentZ.ArrayNum < iVar72) &&
       (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                           ("Scratch.InterpolatedTangentZ.Num() >= NumVerts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                            ,0x386,L""), bVar51)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_2f8 = *(FScriptContainerElement **)(plVar7[1] + 0x20);
    local_2e8 = *(FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDMotionVectors> *)
                 (plVar7[1] + 0x30);
    local_2d0 = *(FScriptContainerElement **)(plVar7[2] + 0x20);
    local_2d8 = *(undefined4 **)(plVar7[2] + 0x30);
    local_2c8 = (this->Scratch).InterpolatedTangentX.AllocatorInstance.Data;
    local_318 = (this->Scratch).InterpolatedTangentZ.AllocatorInstance.Data;
    local_2f0 = StatPtr_STAT_InterpolateFramesSIMDTangents;
    if (StatPtr_STAT_InterpolateFramesSIMDTangents ==
        (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDTangents>)0x0) {
      pFVar54 = ::FName::FName(&local_110,"STAT_InterpolateFramesSIMDTangents");
      local_2f0 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDTangents>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_InterpolateFramesSIMDTangents,*pFVar54,
                             L"InterpolateFramesSIMDTangents","STATGROUP_GeometryCache",
                             "STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true,false,
                             MCR_Invalid);
    }
    FVar65 = *(FName *)local_2f0;
    bVar34 = false;
    bVar51 = false;
    local_1f8.ComparisonIndex.Value = 0;
    local_1f8.Number = 0;
    bVar35 = false;
    bVar33 = false;
    FVar64 = FVar65.ComparisonIndex.Value;
    uVar58 = FVar65.Number;
    if ((FVar64.Value == 0) && (uVar58 == 0)) {
LAB_14ca176cf:
      bVar37 = false;
      bVar36 = false;
      FVar65 = local_1f8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_2b0.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_2b0._s_0,(char *)*(FName *)((longlong)local_2f0 + 0x10));
        bVar34 = false;
        bVar51 = true;
        bVar35 = false;
        bVar33 = true;
        if (-1 < CpuChannel->Enabled) {
          local_268.ComparisonIndex.Value = FVar64.Value;
          local_268.Number = uVar58;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_268,(wchar_t *)*(FName *)((longlong)local_2f0 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                     ,0x38e);
          bVar34 = true;
          bVar51 = true;
          bVar35 = true;
          bVar33 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca176cf;
      local_260 = FVar64.Value;
      uStack_25c = uVar58;
      local_1f8 = FVar65;
      FThreadStats::AddMessage(FVar65,CycleScopeStart);
      bVar36 = true;
      bVar37 = true;
      bVar51 = bVar33;
      bVar34 = bVar35;
    }
    if (GGeometryCacheSceneProxyUseIspc == false) {
      if (0 < (longlong)local_300) {
        local_318 = local_318 + -(longlong)local_2f8;
        pFVar57 = local_2f8;
        FVar63 = local_300;
        do {
          auVar81 = pmovzxbd(auVar81,ZEXT416(*(uint *)(pFVar57 +
                                                      ((longlong)local_2d0 - (longlong)local_2f8)) ^
                                             0x80808080));
          auVar79 = pmovzxbd(auVar81,ZEXT416(*(uint *)pFVar57 ^ 0x80808080));
          auVar80._0_4_ =
               (int)((float)auVar81._0_4_ * fVar78 + (float)auVar79._0_4_ * fVar84 + fVar44);
          auVar80._4_4_ =
               (int)((float)auVar81._4_4_ * fVar78 + (float)auVar79._4_4_ * fVar84 + fVar45);
          auVar80._8_4_ =
               (int)((float)auVar81._8_4_ * fVar78 + (float)auVar79._8_4_ * fVar84 + fVar46);
          auVar80._12_4_ =
               (int)((float)auVar81._12_4_ * fVar78 + (float)auVar79._12_4_ * fVar84 + fVar47);
          auVar81 = packssdw(auVar80,auVar80);
          sVar9 = auVar81._0_2_;
          sVar10 = auVar81._2_2_;
          sVar11 = auVar81._4_2_;
          sVar12 = auVar81._6_2_;
          *(uint *)(pFVar57 + ((longlong)local_2c8 - (longlong)local_2f8)) =
               CONCAT13((0 < sVar12) * (sVar12 < 0x100) * auVar81[6] - (0xff < sVar12),
                        CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar81[4] - (0xff < sVar11),
                                 CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar81[2] -
                                          (0xff < sVar10),
                                          (0 < sVar9) * (sVar9 < 0x100) * auVar81[0] -
                                          (0xff < sVar9)))) ^ 0x80808080;
          auVar80 = pmovzxbd(auVar79,ZEXT416(*(uint *)(pFVar57 +
                                                      ((longlong)local_2e8 - (longlong)local_2f8)) ^
                                             0x80808080));
          auVar81 = pmovzxbd(auVar80,ZEXT416(*(uint *)(pFVar57 +
                                                      ((longlong)local_2d8 - (longlong)local_2f8)) ^
                                             0x80808080));
          auVar79._0_4_ =
               (int)((float)auVar80._0_4_ * fVar84 + (float)auVar81._0_4_ * fVar78 + fVar44);
          auVar79._4_4_ =
               (int)((float)auVar80._4_4_ * fVar84 + (float)auVar81._4_4_ * fVar78 + fVar45);
          auVar79._8_4_ =
               (int)((float)auVar80._8_4_ * fVar84 + (float)auVar81._8_4_ * fVar78 + fVar46);
          auVar79._12_4_ =
               (int)((float)auVar80._12_4_ * fVar84 + (float)auVar81._12_4_ * fVar78 + fVar47);
          auVar80 = packssdw(auVar79,auVar79);
          sVar9 = auVar80._0_2_;
          sVar10 = auVar80._2_2_;
          sVar11 = auVar80._4_2_;
          sVar12 = auVar80._6_2_;
          *(uint *)(local_318 + (longlong)pFVar57) =
               CONCAT13((0 < sVar12) * (sVar12 < 0x100) * auVar80[6] - (0xff < sVar12),
                        CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar80[4] - (0xff < sVar11),
                                 CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar80[2] -
                                          (0xff < sVar10),
                                          (0 < sVar9) * (sVar9 < 0x100) * auVar80[0] -
                                          (0xff < sVar9)))) ^ 0x80808080;
          pFVar57 = pFVar57 + 4;
          FVar63 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions>)
                   ((longlong)FVar63 + -1);
        } while (FVar63 != (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions>)0x0);
      }
    }
    else {
      InterpolateTangents(local_2f8,local_2d0,local_2e8,local_2d8,local_2c8,local_318,local_320 * 4,
                          fVar84,local_328);
      bVar51 = bVar33;
      bVar34 = bVar35;
      bVar36 = bVar37;
    }
    if (bVar51) {
      FGenericPlatformMisc::EndNamedEvent();
      bVar34 = bVar35;
      bVar36 = bVar37;
    }
    if (bVar34) {
      FCpuProfilerTrace::OutputEndEvent();
      bVar36 = bVar37;
    }
    if (bVar36) {
      FThreadStats::AddMessage(FVar65,CycleScopeEnd);
    }
    iVar72 = local_320;
    if (*(char *)(plVar7[1] + 0xb3) != '\0') {
      if ((*(int *)(plVar7[1] + 0x48) < local_320) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("TrackProxy->MeshData->Colors.Num() >= NumVerts",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                              ,0x3d7,L""), bVar51)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)(plVar7[2] + 0x48) < iVar72) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("TrackProxy->NextFrameMeshData->Colors.Num() >= NumVerts",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                              ,0x3d8,L""), bVar51)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((this->Scratch).InterpolatedColors.ArrayNum < iVar72) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("Scratch.InterpolatedColors.Num() >= NumVerts",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                              ,0x3d9,L""), bVar51)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_2d8 = *(undefined4 **)(plVar7[1] + 0x40);
      local_2c8 = *(FScriptContainerElement **)(plVar7[2] + 0x40);
      local_2d0 = (this->Scratch).InterpolatedColors.AllocatorInstance.Data;
      local_2e8 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDMotionVectors>)
                  StatPtr_STAT_InterpolateFramesSIMDColors;
      if (StatPtr_STAT_InterpolateFramesSIMDColors ==
          (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDColors>)0x0) {
        pFVar54 = ::FName::FName(&local_108,"STAT_InterpolateFramesSIMDColors");
        local_2e8 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDMotionVectors>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_InterpolateFramesSIMDColors,*pFVar54,
                               L"InterpolateFramesSIMDColors","STATGROUP_GeometryCache",
                               "STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true,false,
                               MCR_Invalid);
      }
      FVar65 = *(FName *)local_2e8;
      bVar34 = false;
      bVar51 = false;
      local_1e8.ComparisonIndex.Value = 0;
      local_1e8.Number = 0;
      bVar35 = false;
      bVar33 = false;
      FVar64 = FVar65.ComparisonIndex.Value;
      uVar58 = FVar65.Number;
      if ((FVar64.Value == 0) && (uVar58 == 0)) {
LAB_14ca17a84:
        bVar37 = false;
        bVar36 = false;
        FVar65 = local_1e8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_2ac.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_2ac._s_0,(char *)*(FName *)((longlong)local_2e8 + 0x10));
          bVar34 = false;
          bVar51 = true;
          bVar35 = false;
          bVar33 = true;
          if (-1 < CpuChannel->Enabled) {
            local_258.ComparisonIndex.Value = FVar64.Value;
            local_258.Number = uVar58;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_258,(wchar_t *)*(FName *)((longlong)local_2e8 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                       ,0x3de);
            bVar34 = true;
            bVar51 = true;
            bVar35 = true;
            bVar33 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca17a84;
        local_250 = FVar64.Value;
        uStack_24c = uVar58;
        local_1e8 = FVar65;
        FThreadStats::AddMessage(FVar65,CycleScopeStart);
        bVar36 = true;
        bVar37 = true;
        bVar51 = bVar33;
        bVar34 = bVar35;
      }
      if (GGeometryCacheSceneProxyUseIspc == false) {
        if (0 < (longlong)local_300) {
          puVar60 = local_2d8;
          FVar63 = local_300;
          do {
            auVar80 = pmovzxbd(auVar81,*(undefined4 *)
                                        ((longlong)puVar60 +
                                        ((longlong)local_2c8 - (longlong)local_2d8)));
            auVar81 = pmovzxbd(auVar80,*puVar60);
            auVar75._0_4_ =
                 (int)((float)auVar80._0_4_ * fVar78 + (float)auVar81._0_4_ * fVar84 + fVar44);
            auVar75._4_4_ =
                 (int)((float)auVar80._4_4_ * fVar78 + (float)auVar81._4_4_ * fVar84 + fVar45);
            auVar75._8_4_ =
                 (int)((float)auVar80._8_4_ * fVar78 + (float)auVar81._8_4_ * fVar84 + fVar46);
            auVar75._12_4_ =
                 (int)((float)auVar80._12_4_ * fVar78 + (float)auVar81._12_4_ * fVar84 + fVar47);
            auVar80 = packssdw(auVar75,auVar75);
            sVar9 = auVar80._0_2_;
            sVar10 = auVar80._2_2_;
            sVar11 = auVar80._4_2_;
            sVar12 = auVar80._6_2_;
            *(uint *)((longlong)puVar60 + ((longlong)local_2d0 - (longlong)local_2d8)) =
                 CONCAT13((0 < sVar12) * (sVar12 < 0x100) * auVar80[6] - (0xff < sVar12),
                          CONCAT12((0 < sVar11) * (sVar11 < 0x100) * auVar80[4] - (0xff < sVar11),
                                   CONCAT11((0 < sVar10) * (sVar10 < 0x100) * auVar80[2] -
                                            (0xff < sVar10),
                                            (0 < sVar9) * (sVar9 < 0x100) * auVar80[0] -
                                            (0xff < sVar9))));
            puVar60 = puVar60 + 1;
            FVar63 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions>)
                     ((longlong)FVar63 + -1);
          } while (FVar63 != (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDPositions>)0x0);
        }
      }
      else {
        InterpolateColors(local_2d8,local_2c8,local_2d0,local_320 * 4,fVar84,local_328);
        bVar51 = bVar33;
        bVar34 = bVar35;
        bVar36 = bVar37;
      }
      if (bVar51) {
        FGenericPlatformMisc::EndNamedEvent();
        bVar34 = bVar35;
        bVar36 = bVar37;
      }
      if (bVar34) {
        FCpuProfilerTrace::OutputEndEvent();
        bVar36 = bVar37;
      }
      if (bVar36) {
        FThreadStats::AddMessage(FVar65,CycleScopeEnd);
      }
    }
    iVar72 = local_320;
    if (*(char *)(plVar7[1] + 0xb2) != '\0') {
      if ((*(int *)(plVar7[1] + 0x18) < local_320) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("TrackProxy->MeshData->TextureCoordinates.Num() >= NumVerts",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                              ,0x404,L""), bVar51)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)(plVar7[2] + 0x18) < iVar72) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("TrackProxy->NextFrameMeshData->TextureCoordinates.Num() >= NumVerts",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                              ,0x405,L""), bVar51)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((this->Scratch).InterpolatedUVs.ArrayNum < iVar72) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("Scratch.InterpolatedUVs.Num() >= NumVerts",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                              ,0x406,L""), bVar51)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_318 = *(FScriptContainerElement **)(plVar7[1] + 0x10);
      local_2f0 = *(FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDTangents> *)
                   (plVar7[2] + 0x10);
      local_2f8 = (this->Scratch).InterpolatedUVs.AllocatorInstance.Data;
      local_2e8 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDMotionVectors>)
                  StatPtr_STAT_InterpolateFramesSIMDUVs;
      if (StatPtr_STAT_InterpolateFramesSIMDUVs ==
          (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDUVs>)0x0) {
        pFVar54 = ::FName::FName(&local_100,"STAT_InterpolateFramesSIMDUVs");
        local_2e8 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDMotionVectors>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_InterpolateFramesSIMDUVs,
                               *pFVar54,L"InterpolateFramesSIMDUVs","STATGROUP_GeometryCache",
                               "STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true,false,
                               MCR_Invalid);
      }
      FVar65 = *(FName *)local_2e8;
      local_1d8.ComparisonIndex.Value = 0;
      local_1d8.Number = 0;
      bVar33 = false;
      bVar51 = false;
      FVar64 = FVar65.ComparisonIndex.Value;
      uVar58 = FVar65.Number;
      if ((FVar64.Value == 0) && (uVar58 == 0)) {
LAB_14ca17d7a:
        bVar34 = false;
        FVar65 = local_1d8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_2a8.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_2a8._s_0,(char *)*(FName *)((longlong)local_2e8 + 0x10));
          bVar33 = false;
          bVar51 = true;
          if (-1 < CpuChannel->Enabled) {
            local_248.ComparisonIndex.Value = FVar64.Value;
            local_248.Number = uVar58;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_248,(wchar_t *)*(FName *)((longlong)local_2e8 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                       ,0x40b);
            bVar33 = true;
            bVar51 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca17d7a;
        local_240 = FVar64.Value;
        uStack_23c = uVar58;
        local_1d8 = FVar65;
        FThreadStats::AddMessage(FVar65,CycleScopeStart);
        bVar34 = true;
      }
      if (GGeometryCacheSceneProxyUseIspc == false) {
        iVar72 = 0;
        lVar53 = 0;
        if (1 < local_320) {
          iVar62 = 1;
          pFVar57 = local_318;
          do {
            pFVar67 = pFVar57 + ((longlong)local_2f0 - (longlong)local_318);
            iVar72 = iVar72 + 2;
            iVar62 = iVar62 + 2;
            lVar53 = lVar53 + 2;
            auVar82._0_4_ = *(float *)pFVar67 * fVar78 + *(float *)pFVar57 * fVar84;
            auVar82._4_4_ = *(float *)(pFVar67 + 4) * fVar78 + *(float *)(pFVar57 + 4) * fVar84;
            auVar82._8_4_ = *(float *)(pFVar67 + 8) * fVar78 + *(float *)(pFVar57 + 8) * fVar84;
            auVar82._12_4_ = *(float *)(pFVar67 + 0xc) * fVar78 + *(float *)(pFVar57 + 0xc) * fVar84
            ;
            *(undefined1 (*) [16])(pFVar57 + ((longlong)local_2f8 - (longlong)local_318)) = auVar82;
            pFVar57 = pFVar57 + 0x10;
          } while (iVar62 < local_320);
        }
        if (iVar72 < local_320) {
          local_238 = local_328 *
                      (float)(((FName *)((longlong)local_2f0 + lVar53 * 8))->ComparisonIndex).Value
                      + fVar84 * *(float *)(local_318 + lVar53 * 8);
          fStack_234 = fVar84 * *(float *)(local_318 + (lVar53 * 2 + 1) * 4) +
                       local_328 * (float)((uint *)((longlong)local_2f0 + 4))[lVar53 * 2];
          *(ulonglong *)(local_2f8 + lVar53 * 8) = CONCAT44(fStack_234,local_238);
        }
      }
      else {
        InterpolateUVs(local_318,local_2f0,local_2f8,local_320,fVar84,local_328);
      }
      if (bVar51) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar33) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar34) {
        FThreadStats::AddMessage(FVar65,CycleScopeEnd);
      }
    }
    iVar72 = local_320;
    if (local_324 != false) {
      if ((*(int *)(plVar7[1] + 0x68) < local_320) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("TrackProxy->MeshData->MotionVectors.Num() >= NumVerts",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                              ,0x439,L""), bVar51)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((*(int *)(plVar7[2] + 0x68) < iVar72) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("TrackProxy->NextFrameMeshData->MotionVectors.Num() >= NumVerts",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                              ,0x43a,L""), bVar51)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((this->Scratch).InterpolatedMotionVectors.ArrayNum < iVar72) &&
         (bVar51 = ::FDebug::CheckVerifyFailedImpl2
                             ("Scratch.InterpolatedMotionVectors.Num() >= NumVerts",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                              ,0x43b,L""), bVar51)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_318 = *(FScriptContainerElement **)(plVar7[1] + 0x60);
      local_2f0 = *(FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDTangents> *)
                   (plVar7[2] + 0x60);
      local_2f8 = (this->Scratch).InterpolatedMotionVectors.AllocatorInstance.Data;
      fVar78 = (float)((uint)((float)((int)plVar7[3] - (int)plVar7[4]) +
                             (local_328 - *(float *)(plVar7 + 5))) & uVar42);
      if (fVar41 <= fVar78) {
        fVar78 = fVar41;
      }
      if (fVar78 <= 0.0) {
        fVar78 = 0.0;
      }
      if ((float)((uint)(fVar78 - fVar41) & uVar42) <= fVar40) {
        fVar78 = fVar41;
      }
      *(float *)((longlong)plVar7 + 0x2c) = fVar78;
      local_2e8 = StatPtr_STAT_InterpolateFramesSIMDMotionVectors;
      if (StatPtr_STAT_InterpolateFramesSIMDMotionVectors ==
          (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDMotionVectors>)0x0) {
        pFVar54 = ::FName::FName(&local_f8,"STAT_InterpolateFramesSIMDMotionVectors");
        local_2e8 = (FThreadSafeStaticStat<FStat_STAT_InterpolateFramesSIMDMotionVectors>)
                    FThreadSafeStaticStatBase::DoSetup
                              ((FThreadSafeStaticStatBase *)
                               &StatPtr_STAT_InterpolateFramesSIMDMotionVectors,*pFVar54,
                               L"InterpolateFramesSIMDMotionVectors","STATGROUP_GeometryCache",
                               "STATCAT_Advanced",L"GeometryCache",true,true,ST_int64,true,false,
                               MCR_Invalid);
      }
      FVar65 = *(FName *)local_2e8;
      local_1c8.ComparisonIndex.Value = 0;
      local_1c8.Number = 0;
      bVar33 = false;
      bVar51 = false;
      FVar64 = FVar65.ComparisonIndex.Value;
      uVar58 = FVar65.Number;
      if ((FVar64.Value == 0) && (uVar58 == 0)) {
LAB_14ca180e8:
        bVar34 = false;
        FVar65 = local_1c8;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_2a4.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_2a4._s_0,(char *)*(FName *)((longlong)local_2e8 + 0x10));
          bVar33 = false;
          bVar51 = true;
          if (-1 < CpuChannel->Enabled) {
            local_230.ComparisonIndex.Value = FVar64.Value;
            local_230.Number = uVar58;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_230,(wchar_t *)*(FName *)((longlong)local_2e8 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                       ,0x448);
            bVar33 = true;
            bVar51 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14ca180e8;
        local_228 = FVar64.Value;
        uStack_224 = uVar58;
        local_1c8 = FVar65;
        FThreadStats::AddMessage(FVar65,CycleScopeStart);
        bVar34 = true;
      }
      fVar78 = this->MotionVectorScale;
      if (GGeometryCacheSceneProxyUseIspc == false) {
        lVar53 = 0;
        fVar76 = fVar84 * fVar78;
        fVar78 = fVar78 * local_328;
        if (3 < local_320) {
          lVar61 = (longlong)local_2f0 - (longlong)local_318;
          iVar72 = 3;
          pFVar57 = local_318 + 0x20;
          lVar69 = (longlong)local_2f8 - (longlong)local_318;
          do {
            fVar4 = *(float *)(pFVar57 + -0xc);
            fVar5 = *(float *)(pFVar57 + -8);
            fVar6 = *(float *)(pFVar57 + -4);
            iVar72 = iVar72 + 4;
            lVar53 = lVar53 + 4;
            pFVar3 = pFVar57 + lVar61 + -0x10;
            fVar77 = *(float *)(pFVar3 + 4);
            fVar14 = *(float *)(pFVar3 + 8);
            fVar15 = *(float *)(pFVar3 + 0xc);
            fVar16 = *(float *)pFVar57;
            fVar17 = *(float *)(pFVar57 + 4);
            fVar18 = *(float *)(pFVar57 + 8);
            fVar19 = *(float *)(pFVar57 + 0xc);
            pFVar67 = pFVar57 + lVar61;
            fVar20 = *(float *)pFVar67;
            fVar21 = *(float *)(pFVar67 + 4);
            fVar22 = *(float *)(pFVar67 + 8);
            fVar23 = *(float *)(pFVar67 + 0xc);
            pFVar67 = pFVar57 + lVar61 + -0x20;
            fVar24 = *(float *)pFVar67;
            fVar25 = *(float *)(pFVar67 + 4);
            fVar26 = *(float *)(pFVar67 + 8);
            fVar27 = *(float *)(pFVar67 + 0xc);
            fVar28 = *(float *)(pFVar57 + -0x20);
            fVar29 = *(float *)(pFVar57 + -0x1c);
            fVar30 = *(float *)(pFVar57 + -0x18);
            fVar31 = *(float *)(pFVar57 + -0x14);
            pFVar67 = pFVar57 + lVar69 + -0x10;
            *(float *)pFVar67 = *(float *)(pFVar57 + -0x10) * fVar76 + *(float *)pFVar3 * fVar78;
            *(float *)(pFVar67 + 4) = fVar4 * fVar76 + fVar77 * fVar78;
            *(float *)(pFVar67 + 8) = fVar5 * fVar76 + fVar14 * fVar78;
            *(float *)(pFVar67 + 0xc) = fVar6 * fVar76 + fVar15 * fVar78;
            pFVar67 = pFVar57 + lVar69;
            *(float *)pFVar67 = fVar76 * fVar16 + fVar78 * fVar20;
            *(float *)(pFVar67 + 4) = fVar76 * fVar17 + fVar78 * fVar21;
            *(float *)(pFVar67 + 8) = fVar76 * fVar18 + fVar78 * fVar22;
            *(float *)(pFVar67 + 0xc) = fVar76 * fVar19 + fVar78 * fVar23;
            auVar83._0_4_ = fVar28 * fVar76 + fVar24 * fVar78;
            auVar83._4_4_ = fVar29 * fVar76 + fVar25 * fVar78;
            auVar83._8_4_ = fVar30 * fVar76 + fVar26 * fVar78;
            auVar83._12_4_ = fVar31 * fVar76 + fVar27 * fVar78;
            *(undefined1 (*) [16])(pFVar57 + lVar69 + -0x20) = auVar83;
            pFVar57 = pFVar57 + 0x30;
          } while (iVar72 < local_320);
        }
        if (lVar53 < (longlong)local_300) {
          if (3 < (longlong)local_300 - lVar53) {
            lVar69 = (longlong)local_2f0 - (longlong)local_318;
            lVar73 = (longlong)local_2f8 - (longlong)local_318;
            pFVar57 = local_318 + (lVar53 * 3 + 2) * 4;
            lVar61 = (((longlong)local_300 - lVar53) - 4U >> 2) + 1;
            lVar53 = lVar53 + lVar61 * 4;
            do {
              fVar78 = this->MotionVectorScale;
              fVar76 = *(float *)(pFVar57 + lVar69 + -4);
              fVar4 = *(float *)(pFVar57 + -4);
              fVar5 = *(float *)pFVar57;
              fVar6 = *(float *)(pFVar57 + lVar69);
              *(float *)(pFVar57 + lVar73 + -8) =
                   (local_328 * *(float *)(pFVar57 + lVar69 + -8) +
                   fVar84 * *(float *)(pFVar57 + -8)) * fVar78;
              *(float *)(pFVar57 + lVar73 + -4) = (fVar84 * fVar4 + local_328 * fVar76) * fVar78;
              *(float *)(pFVar57 + lVar73) = (fVar84 * fVar5 + local_328 * fVar6) * fVar78;
              fVar78 = *(float *)(pFVar57 + 8);
              fVar76 = *(float *)(pFVar57 + 0xc);
              fVar4 = this->MotionVectorScale;
              fVar5 = *(float *)(pFVar57 + lVar69 + 8);
              fVar6 = *(float *)(pFVar57 + lVar69 + 0xc);
              *(float *)(pFVar57 + lVar73 + 4) =
                   (local_328 * *(float *)(pFVar57 + lVar69 + 4) + fVar84 * *(float *)(pFVar57 + 4))
                   * fVar4;
              *(float *)(pFVar57 + lVar73 + 8) = (fVar84 * fVar78 + local_328 * fVar5) * fVar4;
              *(float *)(pFVar57 + lVar73 + 0xc) = (fVar84 * fVar76 + local_328 * fVar6) * fVar4;
              fVar78 = this->MotionVectorScale;
              fVar76 = *(float *)(pFVar57 + lVar69 + 0x14);
              fVar4 = *(float *)(pFVar57 + lVar69 + 0x18);
              fVar5 = *(float *)(pFVar57 + 0x14);
              fVar6 = *(float *)(pFVar57 + 0x18);
              *(float *)(pFVar57 + lVar73 + 0x10) =
                   (local_328 * *(float *)(pFVar57 + lVar69 + 0x10) +
                   fVar84 * *(float *)(pFVar57 + 0x10)) * fVar78;
              *(float *)(pFVar57 + lVar73 + 0x14) = (fVar84 * fVar5 + local_328 * fVar76) * fVar78;
              *(float *)(pFVar57 + lVar73 + 0x18) = (fVar84 * fVar6 + local_328 * fVar4) * fVar78;
              fVar78 = *(float *)(pFVar57 + 0x20);
              fVar76 = this->MotionVectorScale;
              fVar4 = *(float *)(pFVar57 + lVar69 + 0x20);
              fVar5 = *(float *)(pFVar57 + lVar69 + 0x24);
              fVar6 = *(float *)(pFVar57 + 0x24);
              *(float *)(pFVar57 + lVar73 + 0x1c) =
                   (local_328 * *(float *)(pFVar57 + lVar69 + 0x1c) +
                   fVar84 * *(float *)(pFVar57 + 0x1c)) * fVar76;
              *(float *)(pFVar57 + lVar73 + 0x20) = (local_328 * fVar4 + fVar84 * fVar78) * fVar76;
              *(float *)(pFVar57 + lVar73 + 0x24) = (local_328 * fVar5 + fVar84 * fVar6) * fVar76;
              pFVar57 = pFVar57 + 0x30;
              lVar61 = lVar61 + -1;
            } while (lVar61 != 0);
          }
          if (lVar53 < (longlong)local_300) {
            lVar61 = (longlong)local_2f0 - (longlong)local_318;
            lVar69 = (longlong)local_2f8 - (longlong)local_318;
            lVar73 = (longlong)local_300 - lVar53;
            pFVar57 = local_318 + (lVar53 * 3 + 2) * 4;
            do {
              fVar78 = this->MotionVectorScale;
              fVar76 = *(float *)(pFVar57 + lVar61 + -4);
              fVar4 = *(float *)(pFVar57 + lVar61);
              fVar5 = *(float *)(pFVar57 + -4);
              fVar6 = *(float *)pFVar57;
              *(float *)(pFVar57 + lVar69 + -8) =
                   (fVar84 * *(float *)(pFVar57 + -8) +
                   local_328 * *(float *)(pFVar57 + lVar61 + -8)) * fVar78;
              *(float *)(pFVar57 + lVar69 + -4) = (fVar84 * fVar5 + local_328 * fVar76) * fVar78;
              *(float *)(pFVar57 + lVar69) = (local_328 * fVar4 + fVar84 * fVar6) * fVar78;
              pFVar57 = pFVar57 + 0xc;
              lVar73 = lVar73 + -1;
            } while (lVar73 != 0);
          }
        }
      }
      else {
        InterpolateMotionVectors(local_318,local_2f0,local_2f8,local_320,fVar84,local_328,fVar78);
      }
      if (bVar51) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar33) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar34) {
        FThreadStats::AddMessage(FVar65,CycleScopeEnd);
      }
    }
    if (*(char *)(plVar7[1] + 0xb8) == '\0') {
      FGeomCacheIndexBuffer::Update
                ((FGeomCacheIndexBuffer *)(plVar7 + 0x35),param_1,
                 (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(plVar7[1] + 0xa0));
    }
    if (*(char *)(plVar7[1] + 0xb0) != '\0') {
      FGeomCacheVertexBuffer::UpdateRaw
                ((FGeomCacheVertexBuffer *)(plVar7 + 0x19),param_1,
                 (this->Scratch).InterpolatedTangentX.AllocatorInstance.Data,
                 (this->Scratch).InterpolatedTangentX.ArrayNum << 2,1,1);
    }
    if (*(char *)(plVar7[1] + 0xb1) != '\0') {
      FGeomCacheVertexBuffer::UpdateRaw
                ((FGeomCacheVertexBuffer *)(plVar7 + 0x20),param_1,
                 (this->Scratch).InterpolatedTangentZ.AllocatorInstance.Data,
                 (this->Scratch).InterpolatedTangentZ.ArrayNum << 2,1,1);
    }
    if (*(char *)(plVar7[1] + 0xb2) != '\0') {
      FGeomCacheVertexBuffer::UpdateRaw
                ((FGeomCacheVertexBuffer *)(plVar7 + 0x27),param_1,
                 (this->Scratch).InterpolatedUVs.AllocatorInstance.Data,
                 (this->Scratch).InterpolatedUVs.ArrayNum << 3,1,1);
    }
    if (*(char *)(plVar7[1] + 0xb3) != '\0') {
      FGeomCacheVertexBuffer::UpdateRaw
                ((FGeomCacheVertexBuffer *)(plVar7 + 0x2e),param_1,
                 (this->Scratch).InterpolatedColors.AllocatorInstance.Data,
                 (this->Scratch).InterpolatedColors.ArrayNum << 2,1,1);
    }
    cVar49 = (**(code **)(*plVar7 + 0x18))
                       (plVar7,*(undefined4 *)
                                ((longlong)plVar7 +
                                (ulonglong)(*(uint *)(plVar7 + 0x18) & 1) * 4 + 0xb0),(int)plVar7[3]
                       );
    if (local_324 == false) {
      iVar72 = (int)plVar7[0x18];
      if ((iVar72 == -1) || (cVar49 == '\0')) {
        FGeomCacheVertexBuffer::UpdateRaw
                  ((FGeomCacheVertexBuffer *)(plVar7 + 8),param_1,
                   (this->Scratch).InterpolatedPositions.AllocatorInstance.Data,
                   (this->Scratch).InterpolatedPositions.ArrayNum * 0xc,1,1);
        FGeomCacheVertexBuffer::UpdateRaw
                  ((FGeomCacheVertexBuffer *)(plVar7 + 0xf),param_1,
                   (this->Scratch).InterpolatedPositions.AllocatorInstance.Data,
                   (this->Scratch).InterpolatedPositions.ArrayNum * 0xc,1,1);
        *(undefined4 *)(plVar7 + 0x18) = 0;
        *(float *)(plVar7 + 0x17) = this->Time;
        *(float *)((longlong)plVar7 + 0xbc) = this->Time;
        *(undefined4 *)(plVar7 + 0x16) = *(undefined4 *)((longlong)plVar7 + 0x1c);
        *(undefined4 *)((longlong)plVar7 + 0xb4) = *(undefined4 *)((longlong)plVar7 + 0x1c);
      }
      else {
        *(int *)(plVar7 + 0x18) = iVar72 + 1;
        FGeomCacheVertexBuffer::UpdateRaw
                  ((FGeomCacheVertexBuffer *)(plVar7 + (ulonglong)(iVar72 - 1U & 1) * 7 + 8),param_1
                   ,(this->Scratch).InterpolatedPositions.AllocatorInstance.Data,
                   (this->Scratch).InterpolatedPositions.ArrayNum * 0xc,1,1);
        *(float *)((longlong)plVar7 + (ulonglong)(*(uint *)(plVar7 + 0x18) & 1) * 4 + 0xb8) =
             this->Time;
        *(undefined4 *)((longlong)plVar7 + (ulonglong)(*(uint *)(plVar7 + 0x18) & 1) * 4 + 0xb0) =
             *(undefined4 *)((longlong)plVar7 + 0x1c);
      }
    }
    else {
      *(undefined4 *)(plVar7 + 0x18) = 0;
      FGeomCacheVertexBuffer::UpdateRaw
                ((FGeomCacheVertexBuffer *)(plVar7 + 8),param_1,
                 (this->Scratch).InterpolatedPositions.AllocatorInstance.Data,
                 (this->Scratch).InterpolatedPositions.ArrayNum * 0xc,1,1);
      FGeomCacheVertexBuffer::UpdateRaw
                ((FGeomCacheVertexBuffer *)(plVar7 + 0xf),param_1,
                 (this->Scratch).InterpolatedMotionVectors.AllocatorInstance.Data,
                 (this->Scratch).InterpolatedMotionVectors.ArrayNum * 0xc,1,1);
      *(int *)(plVar7 + 0x16) = (int)plVar7[3];
      *(undefined4 *)((longlong)plVar7 + 0xb4) = 0xffffffff;
      *(float *)(plVar7 + 0x17) = this->Time;
      *(float *)((longlong)plVar7 + 0xbc) = this->Time;
    }
    if (bVar38) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar32) {
      FThreadStats::AddMessage(FVar68,CycleScopeEnd);
    }
    pFVar67 = local_2c0;
    if (bVar50) goto LAB_14ca18ea4;
    FCpuProfilerTrace::OutputEndEvent();
    pFVar57 = local_220 + 8;
    uVar59 = (ulonglong)local_2a0;
    pFVar67 = local_2c0;
  } while( true );
}

// GetAllocatedSize @ 14ca1a730

uint __thiscall FGeometryCacheSceneProxy::GetAllocatedSize(FGeometryCacheSceneProxy *this)

{
  return *(int *)&this->field_0x104 << 2;
}

// GetDynamicMeshElements @ 14ca1aef0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
FGeometryCacheSceneProxy::GetDynamicMeshElements
          (FGeometryCacheSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  undefined1 *puVar1;
  byte bVar2;
  UMaterial *pUVar3;
  FGeomCacheTrackProxy *pFVar4;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  bool bVar9;
  FGeometryCacheMeshBatchInfo *pFVar10;
  bool bVar11;
  bool bVar12;
  FNameEntryId FVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_GetMeshElements> FVar19;
  FColoredMaterialRenderProxy *this_00;
  undefined4 extraout_var;
  FLinearColor *pFVar20;
  FMaterialRenderProxy *pFVar21;
  longlong lVar23;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar24;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar25;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar26;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar27;
  FName FVar28;
  FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_TriangleCount> FVar29;
  FThreadStats *pFVar30;
  FThreadStatsPool *pFVar31;
  FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_MeshBatchCount> FVar32;
  FPrimitiveDrawInterface *pFVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  FScriptContainerElement *pFVar36;
  uint uVar37;
  ForElementType<FMeshBatchElement> FVar38;
  uchar auVar39 [8];
  byte local_147;
  undefined1 local_146 [6];
  FName local_140;
  longlong local_138;
  FColor_u_0 local_130;
  uint local_12c;
  FName local_128;
  FNameEntryId local_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint local_110;
  uint uStack_10c;
  longlong local_108;
  longlong local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FName local_e8;
  FName local_e0;
  undefined1 local_d0 [8];
  FGeometryCacheMeshBatchInfo *local_c8;
  FRHICommandListBase *local_c0;
  FName local_b8;
  FName local_b0;
  FStatMessage local_a8;
  FStatMessage local_98;
  FName local_88;
  FName local_80;
  FName local_78 [2];
  FLinearColor_u_0 local_68;
  FLinearColor local_58;
  FMaterialRenderProxy *pFVar22;
  
  pFVar22 = (FMaterialRenderProxy *)0x0;
  FVar19 = StatPtr_STAT_GeometryCacheSceneProxy_GetMeshElements;
  if (StatPtr_STAT_GeometryCacheSceneProxy_GetMeshElements ==
      (FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_GetMeshElements>)0x0) {
    pFVar18 = ::FName::FName(&local_88,"STAT_GeometryCacheSceneProxy_GetMeshElements");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_GetMeshElements>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_GeometryCacheSceneProxy_GetMeshElements,*pFVar18,
                        L"Gather Mesh Elements","STATGROUP_GeometryCache","STATCAT_Advanced",
                        L"GeometryCache",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar19;
  bVar8 = false;
  bVar9 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar28.ComparisonIndex.Value.Value != 0) || (FVar28.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_130.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_130._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_128.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                   ,0x183);
        bVar8 = true;
        bVar9 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_140 = FVar28;
      local_e8 = FVar28;
      FThreadStats::AddMessage(FVar28,CycleScopeStart);
      bVar11 = true;
      goto LAB_14ca1b061;
    }
  }
  bVar9 = bVar12;
  bVar8 = bVar11;
  bVar11 = false;
  local_e8 = local_e0;
  FVar28 = local_e0;
LAB_14ca1b061:
  if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_c0 = (FRHICommandListBase *)param_4->RHICmdList;
  bVar12 = AllowDebugViewmodes();
  if ((bVar12) && ((param_2->EngineShowFlags).Wireframe != 0)) {
    local_147 = 1;
    if (this->bOverrideWireframeColor == false) {
      local_68._s_0.R = (float)*(undefined4 *)&this->field_0x30;
      local_68._s_0.G = (float)*(undefined4 *)&this->field_0x34;
      local_68._s_0.B = (float)*(undefined4 *)&this->field_0x38;
      local_68._s_0.A = (float)*(undefined4 *)&this->field_0x3c;
    }
    else {
      local_68._s_0.R = (this->WireframeOverrideColor).field0_0x0._s_0.R;
      local_68._s_0.G = (this->WireframeOverrideColor).field0_0x0._s_0.G;
      local_68._s_0.B = (this->WireframeOverrideColor).field0_0x0._s_0.B;
      local_68._s_0.A = (this->WireframeOverrideColor).field0_0x0._s_0.A;
    }
    if ((param_2->EngineShowFlags).ActorColoration != 0) {
      local_68._s_0.R = (float)*(undefined4 *)&this->field_0x40;
      local_68._s_0.G = (float)*(undefined4 *)&this->field_0x44;
      local_68._s_0.B = (float)*(undefined4 *)&this->field_0x48;
      local_68._s_0.A = (float)*(undefined4 *)&this->field_0x4c;
    }
    this_00 = ::operator_new(0xe0);
    if (this_00 == (FColoredMaterialRenderProxy *)0x0) {
      local_140 = (FName)0x0;
      FMeshElementCollector::RegisterOneFrameMaterialProxy(param_4,(FMaterialRenderProxy *)0x0);
    }
    else {
      FVar13 = FNameEntryId::FromValidEName((EName)local_d0);
      uStack_11c = 0;
      local_120.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value);
      pFVar20 = GetSelectionColor(&local_58,(FLinearColor *)&local_68._s_0,true,
                                  (bool)((byte)this->field_0x79 >> 4 & 1),false);
      pUVar3 = (GEngine->WireframeMaterial).field0_0x0.DebugPtr;
      pFVar21 = pFVar22;
      if (pUVar3 != (UMaterial *)0x0) {
        pFVar21 = (FMaterialRenderProxy *)(**(code **)(pUVar3->_padding_ + 0x310))();
      }
      FVar7.Number = uStack_11c;
      FVar7.ComparisonIndex.Value = local_120.Value;
      local_140 = (FName)FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
                                   (this_00,pFVar21,pFVar20,FVar7);
      FMeshElementCollector::RegisterOneFrameMaterialProxy
                (param_4,(FMaterialRenderProxy *)local_140);
    }
  }
  else {
    local_147 = 0;
    local_140 = (FName)0x0;
  }
  if (0 < param_1->ArrayNum) {
    do {
      if ((param_3 >> ((uint)pFVar22 & 0x1f) & 1) != 0) {
        local_12c = (this->Tracks).ArrayNum;
        uVar34 = (ulonglong)(int)local_12c;
        pFVar36 = (this->Tracks).AllocatorInstance.Data;
        pFVar35 = pFVar36 + uVar34 * 8;
        local_f8 = pFVar35;
        while( true ) {
          local_f0 = pFVar36;
          if ((this->Tracks).ArrayNum != (int)uVar34) {
            local_146[0] = 0;
            `TCheckedPointerIterator<FGeomCacheTrackProxy_*_const,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_146);
          }
          FVar28 = local_e8;
          if (pFVar36 == pFVar35) break;
          pFVar4 = *(FGeomCacheTrackProxy **)pFVar36;
          lVar23 = (**(code **)(*(longlong *)pFVar4 + 0x20))(pFVar4,this->Time,this->bLooping);
          if (*(char *)(lVar23 + 0x10) != '\0') {
            lVar23 = 0x10;
            if (pFVar4->bNextFrameMeshDataSelected == false) {
              lVar23 = 8;
            }
            uVar14 = 0;
            local_100 = *(longlong *)((longlong)pFVar4->PositionBuffers + lVar23 + -0x40);
            local_138 = (longlong)*(int *)(local_100 + 0x78);
            pFVar35 = local_f8;
            if (0 < local_138) {
              local_108 = 0;
              do {
                lVar23 = local_108;
                uVar37 = 0;
                if ((int)uVar14 < *(int *)(local_100 + 0x78)) {
                  uVar37 = ~uVar14 >> 0x1f;
                }
                if ((uVar37 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_c8 = (FGeometryCacheMeshBatchInfo *)(*(longlong *)(local_100 + 0x70) + lVar23)
                ;
                uVar37 = 0;
                if (0 < param_1->ArrayNum) {
                  do {
                    if ((param_3 >> (uVar37 & 0x1f) & 1) != 0) {
                      iVar15 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                               ::Add(&param_4->MeshBatchStorage,1);
                      uVar17 = iVar15 / 0x49;
                      uVar16 = 0;
                      if ((int)uVar17 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
                        uVar16 = ~uVar17 >> 0x1f;
                      }
                      if ((uVar16 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      paVar5 = &param_4->OneFrameResources->Next;
                      FVar38 = (ForElementType<FMeshBatchElement>)
                               ((ulonglong)(uint)(iVar15 % 0x49) * 0xe0 +
                               (longlong)
                               (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data
                               [(int)uVar17]);
                      aVar24 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                                )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc
                                           (0xa0,8);
                      *(undefined8 *)((longlong)aVar24 + 8) = 0;
                      *(undefined ***)aVar24 =
                           &
                           ___7__TObject_VFGeometryCacheVertexFactoryUserDataWrapper_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
                      ;
                      TVar26.Next = *paVar5;
                      do {
                        *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                          *)((longlong)aVar24 + 8) = TVar26.Next;
                        LOCK();
                        aVar25 = *paVar5;
                        bVar12 = TVar26.Next == aVar25;
                        if (bVar12) {
                          *paVar5 = aVar24;
                          aVar25 = TVar26.Next;
                        }
                        UNLOCK();
                        TVar26.Next = aVar25;
                      } while (!bVar12);
                      *(undefined8 *)((longlong)aVar24 + 0x18) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x20) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x28) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x30) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x38) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x40) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x48) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x50) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x58) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x60) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x68) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x70) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x78) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x80) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x88) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x90) = 0;
                      *(undefined8 *)((longlong)aVar24 + 0x98) = 0;
                      ((FGeometryCacheVertexFactoryUserDataWrapper *)((longlong)aVar24 + 0x10))->
                      _padding_ = (longlong)&FGeometryCacheVertexFactoryUserDataWrapper::_vftable_;
                      paVar5 = &param_4->OneFrameResources->Next;
                      aVar25 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                                )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc
                                           (0x50,8);
                      *(undefined8 *)((longlong)aVar25 + 8) = 0;
                      *(undefined ***)aVar25 =
                           &
                           ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
                      ;
                      TVar26.Next = *paVar5;
                      do {
                        *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                          *)((longlong)aVar25 + 8) = TVar26.Next;
                        LOCK();
                        aVar27 = *paVar5;
                        bVar12 = TVar26.Next == aVar27;
                        if (bVar12) {
                          *paVar5 = aVar25;
                          aVar27 = TVar26.Next;
                        }
                        UNLOCK();
                        TVar26.Next = aVar27;
                      } while (!bVar12);
                      FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                                ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar25 + 0x10));
                      pFVar10 = local_c8;
                      CreateMeshBatch(this,local_c0,pFVar4,local_c8,
                                      (FGeometryCacheVertexFactoryUserDataWrapper *)
                                      ((longlong)aVar24 + 0x10),
                                      (FDynamicPrimitiveUniformBuffer *)((longlong)aVar25 + 0x10),
                                      (FMeshBatch *)FVar38);
                      uVar17 = pFVar10->MaterialIndex;
                      if (((int)uVar17 < 0) || ((pFVar4->Materials).ArrayNum <= (int)uVar17)) {
                        if (((int)uVar14 < 0) || ((pFVar4->Materials).ArrayNum <= (int)uVar14)) {
                          bVar12 = false;
                        }
                        else {
                          bVar12 = true;
                        }
                        uVar17 = 0;
                        if (bVar12) {
                          uVar17 = uVar14;
                        }
                      }
                      FVar28 = local_140;
                      if (local_147 == 0) {
                        uVar16 = 0;
                        if ((int)uVar17 < (pFVar4->Materials).ArrayNum) {
                          uVar16 = ~uVar17 >> 0x1f;
                        }
                        if ((uVar16 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        if (*(longlong *)
                             ((pFVar4->Materials).AllocatorInstance.Data + (longlong)(int)uVar17 * 8
                             ) == 0) {
                          FVar28 = (FName)(FColoredMaterialRenderProxy *)0x0;
                        }
                        else {
                          uVar16 = 0;
                          if ((int)uVar17 < (pFVar4->Materials).ArrayNum) {
                            uVar16 = ~uVar17 >> 0x1f;
                          }
                          if ((uVar16 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar12)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          FVar28 = (FName)(**(code **)(**(longlong **)
                                                         ((pFVar4->Materials).AllocatorInstance.Data
                                                         + (longlong)(int)uVar17 * 8) + 0x310))();
                        }
                      }
                      *(uint *)((longlong)FVar38 + 0xd4) =
                           *(uint *)((longlong)FVar38 + 0xd4) & 0xffffffbf;
                      *(uint *)((longlong)FVar38 + 0xd4) =
                           *(uint *)((longlong)FVar38 + 0xd4) | (uint)local_147 << 6;
                      *(FName *)((longlong)FVar38 + 0xb0) = FVar28;
                      FMeshElementCollector::AddMesh(param_4,uVar37,(FMeshBatch *)FVar38);
                      if ((*(int *)((longlong)FVar38 + 0xa0) < 1) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar38 + 0x98) !=
                          (ForElementType<FMeshBatchElement>)0x0) {
                        FVar38 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar38 + 0x98);
                      }
                      auVar39[4] = '\0';
                      auVar39[5] = '\0';
                      auVar39[6] = '\0';
                      auVar39[7] = '\0';
                      auVar39._0_4_ = *(uint *)((longlong)FVar38 + 0x5c);
                      if (auVar39 == (uchar  [8])0x0) {
LAB_14ca1b72f:
                        if (FThreadStats::bPrimaryEnable != false) {
                          FVar32 = StatPtr_STAT_GeometryCacheSceneProxy_MeshBatchCount;
                          if (StatPtr_STAT_GeometryCacheSceneProxy_MeshBatchCount ==
                              (FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_MeshBatchCount>
                               )0x0) {
                            pFVar18 = ::FName::FName(local_78,
                                                  "STAT_GeometryCacheSceneProxy_MeshBatchCount");
                            FVar32 = (FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_MeshBatchCount>
                                      )FThreadSafeStaticStatBase::DoSetup
                                                 ((FThreadSafeStaticStatBase *)
                                                  &
                                                  StatPtr_STAT_GeometryCacheSceneProxy_MeshBatchCount
                                                  ,*pFVar18,L"Batch Count","STATGROUP_GeometryCache"
                                                  ,"STATCAT_Advanced",L"GeometryCache",true,true,
                                                  ST_int64,false,false,MCR_Invalid);
                          }
                          FVar28 = *(FName *)FVar32;
                          FVar13 = FVar28.ComparisonIndex.Value;
                          uVar17 = FVar28.Number;
                          local_110 = FVar13.Value;
                          uStack_10c = uVar17;
                          if (((FVar28 != (FName)0x0) &&
                              (FThreadStats::bPrimaryDisableForever == false)) &&
                             (FThreadStats::TlsSlot != 0xffffffff)) {
                            pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
                            if (pFVar30 == (FThreadStats *)0x0) {
                              pFVar31 = FThreadStatsPool::Get();
                              pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
                            }
                            local_98.NameAndInfo.Number = uVar17 & 0xffffafff | 0xa000;
                            local_98.StatData.Pad[0] = '\x01';
                            local_98.StatData.Pad[1] = '\0';
                            local_98.StatData.Pad[2] = '\0';
                            local_98.StatData.Pad[3] = '\0';
                            local_98.StatData.Pad[4] = '\0';
                            local_98.StatData.Pad[5] = '\0';
                            local_98.StatData.Pad[6] = '\0';
                            local_98.StatData.Pad[7] = '\0';
                            local_b0 = FVar28;
                            local_98.NameAndInfo.Index.Value = FVar13.Value;
                            FThreadStats::AddStatMessage(pFVar30,&local_98);
                            FStatsTrace::Add(&local_b0,1);
                            if (pFVar30->ScopeCount == 0) {
                              FThreadStats::Flush(pFVar30,false,false);
                            }
                            else if (FThreadStats::bIsRawStatsActive != false) {
                              FThreadStats::FlushRawStats(pFVar30,false,false);
                            }
                          }
                        }
                      }
                      else if (FThreadStats::bPrimaryEnable != false) {
                        FVar29 = StatPtr_STAT_GeometryCacheSceneProxy_TriangleCount;
                        if (StatPtr_STAT_GeometryCacheSceneProxy_TriangleCount ==
                            (FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_TriangleCount>
                            )0x0) {
                          pFVar18 = ::FName::FName(&local_80,
                                                   "STAT_GeometryCacheSceneProxy_TriangleCount");
                          FVar29 = (FThreadSafeStaticStat<FStat_STAT_GeometryCacheSceneProxy_TriangleCount>
                                    )FThreadSafeStaticStatBase::DoSetup
                                               ((FThreadSafeStaticStatBase *)
                                                &StatPtr_STAT_GeometryCacheSceneProxy_TriangleCount,
                                                *pFVar18,L"Triangle Count","STATGROUP_GeometryCache"
                                                ,"STATCAT_Advanced",L"GeometryCache",true,true,
                                                ST_int64,false,false,MCR_Invalid);
                        }
                        FVar28 = *(FName *)FVar29;
                        FVar13 = FVar28.ComparisonIndex.Value;
                        uVar17 = FVar28.Number;
                        local_118 = FVar13.Value;
                        uStack_114 = uVar17;
                        if (((FVar28 != (FName)0x0) &&
                            (FThreadStats::bPrimaryDisableForever == false)) &&
                           (FThreadStats::TlsSlot != 0xffffffff)) {
                          pFVar30 = TlsGetValue(FThreadStats::TlsSlot);
                          if (pFVar30 == (FThreadStats *)0x0) {
                            pFVar31 = FThreadStatsPool::Get();
                            pFVar30 = FThreadStatsPool::GetFromPool(pFVar31);
                          }
                          local_a8.NameAndInfo.Number = uVar17 & 0xffffafff | 0xa000;
                          local_b8 = FVar28;
                          local_a8.StatData.Pad = auVar39;
                          local_a8.NameAndInfo.Index.Value = FVar13.Value;
                          FThreadStats::AddStatMessage(pFVar30,&local_a8);
                          FStatsTrace::Add(&local_b8,(long64)auVar39);
                          if (pFVar30->ScopeCount == 0) {
                            FThreadStats::Flush(pFVar30,false,false);
                          }
                          else if (FThreadStats::bIsRawStatsActive != false) {
                            FThreadStats::FlushRawStats(pFVar30,false,false);
                          }
                        }
                        goto LAB_14ca1b72f;
                      }
                      bVar2 = this->field_0x79;
                      pFVar33 = FMeshElementCollector::GetPDI(param_4,uVar37);
                      FPrimitiveSceneProxy::RenderBounds
                                ((FPrimitiveSceneProxy *)this,pFVar33,&param_2->EngineShowFlags,
                                 (TBoxSphereBounds<double,double> *)&this->field_0x190,
                                 (bVar2 & 6) != 0);
                    }
                    uVar37 = uVar37 + 1;
                  } while ((int)uVar37 < param_1->ArrayNum);
                }
                uVar14 = uVar14 + 1;
                local_108 = local_108 + 0xc;
                local_138 = local_138 + -1;
              } while (local_138 != 0);
              local_138 = 0;
              pFVar35 = local_f8;
            }
          }
          uVar34 = (ulonglong)local_12c;
          pFVar36 = local_f0 + 8;
        }
        break;
      }
      uVar14 = (uint)pFVar22 + 1;
      pFVar22 = (FMaterialRenderProxy *)(ulonglong)uVar14;
    } while ((int)uVar14 < param_1->ArrayNum);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 14ca1b960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FGeometryCacheSceneProxy::GetDynamicRayTracingInstances
          (FGeometryCacheSceneProxy *this,FRayTracingInstanceCollector *param_1)

{
  FGeomCacheTrackProxy *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  TConsoleVariableData<int> *pTVar5;
  ForAnyElementType FVar6;
  void *_Src;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ForElementType<FMeshBatchElement> FVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  uint uVar19;
  FGeometryCacheSceneProxy *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FGeometryCacheMeshBatchInfo *pFVar23;
  undefined1 auStackY_2a8 [32];
  undefined1 local_258 [8];
  FGeometryCacheSceneProxy *local_250;
  FRayTracingGeometry *local_248;
  ForAnyElementType local_240;
  undefined8 local_238;
  FMeshBatch *local_230;
  int iStack_228;
  undefined4 uStack_224;
  undefined8 local_220;
  void *local_218;
  undefined8 local_210;
  uint *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  TMatrix<double> *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  int local_1d8;
  uint local_1d4;
  uint local_1d0;
  FRayTracingInstanceCollector *local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  uint local_1b0;
  FSceneView *local_1a8;
  longlong local_1a0;
  FRayTracingInstance local_198;
  FMeshBatch local_128;
  ulonglong local_48;
  
  pTVar5 = CVarRayTracingGeometryCache.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  local_250 = this;
  local_1c8 = param_1;
  bVar7 = IsInParallelRenderingThread();
  if ((!bVar7) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (pTVar5->ShadowedValue[1] != 0) {
    pFVar17 = (param_1->Views).AllocatorInstance.Data;
    iVar10 = (param_1->Views).ArrayNum;
    local_1d8 = iVar10;
    if ((iVar10 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar22 = param_1->VisibilityMap;
    local_1b0 = 0;
    if (uVar22 != 0) {
      for (; (uVar22 >> local_1b0 & 1) == 0; local_1b0 = local_1b0 + 1) {
      }
    }
    uVar19 = 0x20;
    if (uVar22 != 0) {
      uVar19 = local_1b0;
    }
    local_1d4 = uVar22;
    if ((((int)uVar19 < 0) || (iVar10 <= (int)uVar19)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Views.IsValidIndex(FirstActiveViewIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                           ,0x1f1,
                           L"There should be at least one active view when calling GetDynamicRayTracingInstances(...)."
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar8 = 0;
    if ((int)uVar19 < iVar10) {
      uVar8 = ~uVar19 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_1a8 = *(FSceneView **)(pFVar17 + (longlong)(int)uVar19 * 8);
    local_1d0 = (local_250->Tracks).ArrayNum;
    uVar15 = (ulonglong)(int)local_1d0;
    pFVar21 = (local_250->Tracks).AllocatorInstance.Data;
    pFVar17 = pFVar21 + uVar15 * 8;
    pFVar20 = local_250;
    local_1c0 = pFVar17;
    while( true ) {
      local_1b8 = pFVar21;
      if ((pFVar20->Tracks).ArrayNum != (int)uVar15) {
        local_258[0] = 0;
        `TCheckedPointerIterator<FGeomCacheTrackProxy_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_258);
      }
      if (pFVar21 == pFVar17) break;
      pFVar1 = *(FGeomCacheTrackProxy **)pFVar21;
      lVar11 = (**(code **)(*(longlong *)pFVar1 + 0x20))(pFVar1,pFVar20->Time,pFVar20->bLooping);
      if (*(char *)(lVar11 + 0x10) != '\0') {
        local_248 = &pFVar1->RayTracingGeometry;
        local_240.Data = (FScriptContainerElement *)0x0;
        local_238 = 0;
        local_230 = (FMeshBatch *)0x0;
        iStack_228 = 0;
        local_220 = 0x1000000;
        local_218 = (void *)0x0;
        local_210 = 0;
        local_208 = (uint *)0x0;
        iStack_200 = 0;
        local_1f8.Data = (FScriptContainerElement *)0x0;
        local_1f0 = 0;
        local_1e8 = (TMatrix<double> *)0x0;
        iStack_1e0 = 0;
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1080,&local_1f8,(int *)((longlong)&local_1f0 + 4));
        uVar4 = *(undefined8 *)&pFVar20->field_0x118;
        local_1f0 = CONCAT44(local_1f0._4_4_,iVar9 + 1);
        lVar11 = (longlong)iVar9 * 0x80;
        *(undefined8 *)(local_1f8.Data + lVar11) = *(undefined8 *)&pFVar20->field_0x110;
        *(undefined8 *)(local_1f8.Data + lVar11 + 8) = uVar4;
        uVar4 = *(undefined8 *)&pFVar20->field_0x128;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x10) = *(undefined8 *)&pFVar20->field_0x120;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x10 + 8) = uVar4;
        uVar4 = *(undefined8 *)&pFVar20->field_0x138;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x20) = *(undefined8 *)&pFVar20->field_0x130;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x20 + 8) = uVar4;
        uVar4 = *(undefined8 *)&pFVar20->field_0x148;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x30) = *(undefined8 *)&pFVar20->field_0x140;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x30 + 8) = uVar4;
        uVar4 = *(undefined8 *)&pFVar20->field_0x158;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x40) = *(undefined8 *)&pFVar20->field_0x150;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x40 + 8) = uVar4;
        uVar4 = *(undefined8 *)&pFVar20->field_0x168;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x50) = *(undefined8 *)&pFVar20->field_0x160;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x50 + 8) = uVar4;
        uVar4 = *(undefined8 *)&pFVar20->field_0x178;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x60) = *(undefined8 *)&pFVar20->field_0x170;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x60 + 8) = uVar4;
        uVar4 = *(undefined8 *)&pFVar20->field_0x188;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x70) = *(undefined8 *)&pFVar20->field_0x180;
        *(undefined8 *)(local_1f8.Data + lVar11 + 0x70 + 8) = uVar4;
        lVar11 = 0x10;
        if (pFVar1->bNextFrameMeshDataSelected == false) {
          lVar11 = 8;
        }
        uVar18 = 0;
        local_1a0 = *(longlong *)((longlong)pFVar1->PositionBuffers + lVar11 + -0x40);
        uVar15 = uVar18;
        if (0 < *(int *)(local_1a0 + 0x78)) {
          do {
            lVar11 = local_1a0;
            uVar19 = (uint)uVar18;
            uVar22 = 0;
            if ((int)uVar19 < *(int *)(local_1a0 + 0x78)) {
              uVar22 = ~uVar19 >> 0x1f;
            }
            if ((uVar22 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_128.bUseForLumenSurfaceCacheCapture = 0;
            local_128.bUseForWaterInfoTextureDepth = 0;
            local_128.bViewDependentArguments = 0;
            local_128.bForceTwoSidedInRayTracing = 0;
            local_128.CastRayTracedShadow = 1;
            local_128.bOverlayMaterial = 0;
            local_128.RuntimeVirtualTextureMaterialType = 0;
            local_128.bRenderToVirtualTexture = 0;
            local_128.bDitheredLODTransition = 0;
            local_128.bSelectable = 1;
            local_128.bUseSelectionOutline = 1;
            local_128.bUseWireframeSelectionColoring = 0;
            local_128.bCanApplyViewModeOverrides = 0;
            local_128.DepthPriorityGroup = 0;
            local_128.Type = 0;
            local_128.bWireframe = 0;
            local_128.bUseAsOccluder = 1;
            local_128.bUseForDepthPass = 1;
            local_128.bUseForMaterial = 1;
            local_128.CastShadow = 1;
            local_128.bDisableBackfaceCulling = 0;
            local_128.ReverseCulling = 0;
            local_128.Elements.AllocatorInstance.SecondaryData =
                 (ForElementType<FMeshBatchElement>)0x0;
            local_128.Elements.ArrayMax = 1;
            pFVar23 = (FGeometryCacheMeshBatchInfo *)(*(longlong *)(lVar11 + 0x70) + uVar15);
            local_128.LCI = (FLightCacheInterface *)0x0;
            local_128.VertexFactory = (FVertexFactory *)0x0;
            local_128.MaterialRenderProxy = (FMaterialRenderProxy *)0x0;
            local_128.BatchHitProxyId.Index = -1;
            local_128.DynamicMeshBoundsIndex = -1;
            local_128.TessellationDisablingShadowMapMeshSize = 0.0;
            local_128.SegmentIndex = -1;
            local_128.MeshIdInPrimitive = 0;
            local_128.LODIndex = -1;
            local_128.VisualizeHLODIndex = -1;
            local_128.VisualizeLODIndex = -1;
            local_128.Elements.ArrayNum = 1;
            DefaultConstructItems<FMeshBatchElement,int>(&local_128,1);
            plVar2 = (longlong *)param_1->_padding_;
            puVar12 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0xa0,8);
            puVar12[1] = 0;
            *puVar12 = &
                       ___7__TObject_VFGeometryCacheVertexFactoryUserDataWrapper_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
            ;
            lVar11 = *plVar2;
            do {
              puVar12[1] = lVar11;
              LOCK();
              lVar14 = *plVar2;
              bVar7 = lVar11 == lVar14;
              if (bVar7) {
                *plVar2 = (longlong)puVar12;
                lVar14 = lVar11;
              }
              UNLOCK();
              lVar11 = lVar14;
            } while (!bVar7);
            puVar12[3] = 0;
            puVar12[4] = 0;
            puVar12[5] = 0;
            puVar12[6] = 0;
            puVar12[7] = 0;
            puVar12[8] = 0;
            puVar12[9] = 0;
            puVar12[10] = 0;
            puVar12[0xb] = 0;
            puVar12[0xc] = 0;
            puVar12[0xd] = 0;
            puVar12[0xe] = 0;
            puVar12[0xf] = 0;
            puVar12[0x10] = 0;
            puVar12[0x11] = 0;
            puVar12[0x12] = 0;
            puVar12[0x13] = 0;
            ((FGeometryCacheVertexFactoryUserDataWrapper *)(puVar12 + 2))->_padding_ =
                 (longlong)&FGeometryCacheVertexFactoryUserDataWrapper::_vftable_;
            plVar2 = (longlong *)local_1c8->_padding_;
            puVar13 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
            puVar13[1] = 0;
            *puVar13 = &
                       ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
            ;
            lVar11 = *plVar2;
            do {
              puVar13[1] = lVar11;
              LOCK();
              lVar14 = *plVar2;
              bVar7 = lVar11 == lVar14;
              if (bVar7) {
                *plVar2 = (longlong)puVar13;
                lVar14 = lVar11;
              }
              UNLOCK();
              lVar11 = lVar14;
            } while (!bVar7);
            FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                      ((FDynamicPrimitiveUniformBuffer *)(puVar13 + 2));
            if ((local_1c8->_padding_ == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("RHICmdList",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                   ,0x46,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            param_1 = local_1c8;
            pFVar20 = local_250;
            CreateMeshBatch(local_250,(FRHICommandListBase *)local_1c8->_padding_,pFVar1,pFVar23,
                            (FGeometryCacheVertexFactoryUserDataWrapper *)(puVar12 + 2),
                            (FDynamicPrimitiveUniformBuffer *)(puVar13 + 2),&local_128);
            uVar22 = pFVar23->MaterialIndex;
            if (((int)uVar22 < 0) || ((pFVar1->Materials).ArrayNum <= (int)uVar22)) {
              uVar22 = uVar19;
            }
            uVar8 = 0;
            if ((int)uVar22 < (pFVar1->Materials).ArrayNum) {
              uVar8 = ~uVar22 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_128.MaterialRenderProxy =
                 (FMaterialRenderProxy *)
                 (**(code **)(**(longlong **)
                                ((pFVar1->Materials).AllocatorInstance.Data +
                                (longlong)(int)uVar22 * 8) + 0x310))();
            bVar7 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)pFVar20,local_1a8);
            local_128._212_4_ = (uint)bVar7 << 0x17 | local_128._212_4_ & 0xff7ffffe;
            local_128.SegmentIndex = uVar19;
            if (((local_240.Data <= &local_128) &&
                (&local_128 < (FMeshBatch *)(local_240.Data + (longlong)local_238._4_4_ * 0xe0))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar10 = (int)local_238;
            if ((int)local_238 == local_238._4_4_) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8e0,&local_240,(int *)((longlong)&local_238 + 4));
            }
            local_238 = CONCAT44(local_238._4_4_,iVar10 + 1);
            FMeshBatch::FMeshBatch
                      ((FMeshBatch *)(local_240.Data + (longlong)iVar10 * 0xe0),&local_128);
            FVar16 = (ForElementType<FMeshBatchElement>)&local_128;
            if (local_128.Elements.AllocatorInstance.SecondaryData !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FVar16 = local_128.Elements.AllocatorInstance.SecondaryData;
            }
            DestructItems<FMeshBatchElement,int>
                      ((FMeshBatchElement *)FVar16,local_128.Elements.ArrayNum);
            if (local_128.Elements.AllocatorInstance.SecondaryData !=
                (ForElementType<FMeshBatchElement>)0x0) {
              FMemory::Free((void *)local_128.Elements.AllocatorInstance.SecondaryData);
            }
            uVar18 = (ulonglong)(uVar19 + 1);
            uVar15 = uVar15 + 0xc;
            uVar22 = local_1d4;
            iVar10 = local_1d8;
          } while ((int)(uVar19 + 1) < *(int *)(local_1a0 + 0x78));
        }
        uVar19 = 0;
        iVar9 = (int)local_238;
        if ((0 < (int)local_238) && (0 < iVar10)) {
          do {
            FVar6.Data = local_240.Data;
            if ((uVar22 >> (uVar19 & 0x1f) & 1) != 0) {
              local_198.Geometry = local_248;
              local_198.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_198.Materials.ArrayNum = iVar9;
              if (iVar9 == 0) {
                local_198.Materials.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xe0,8,iVar9,0,&local_198.Materials.AllocatorInstance,iVar9,
                           &local_198.Materials.ArrayMax);
                ConstructItems<FMeshBatch,FMeshBatch,int>
                          (local_198.Materials.AllocatorInstance.Data,(FMeshBatch *)FVar6.Data,iVar9
                          );
              }
              _Src = local_218;
              lVar11 = (longlong)(int)local_210;
              local_198.bApplyLocalBoundsTransform = (bool)(undefined1)local_220;
              local_198.bThinGeometry = (bool)local_220._1_1_;
              local_198.InstanceLayer = local_220._2_1_;
              local_198.bInstanceMaskAndFlagsDirty = (bool)local_220._3_1_;
              local_198.NumTransforms = local_220._4_4_;
              local_198.PrimitiveInstanceIndices.AllocatorInstance.Data =
                   (FScriptContainerElement *)0x0;
              local_198.PrimitiveInstanceIndices.ArrayNum = (int)local_210;
              local_198.MaterialsView._12_4_ = uStack_224;
              local_198.MaterialsView.ArrayNum = iStack_228;
              local_198.MaterialsView.DataPtr = local_230;
              if ((int)local_210 == 0) {
                local_198.PrimitiveInstanceIndices.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,(int)local_210,0,
                           &local_198.PrimitiveInstanceIndices.AllocatorInstance,(int)local_210,
                           &local_198.PrimitiveInstanceIndices.ArrayMax);
                memcpy(local_198.PrimitiveInstanceIndices.AllocatorInstance.Data,_Src,lVar11 << 2);
              }
              FVar6.Data = local_1f8.Data;
              lVar11 = (longlong)(int)local_1f0;
              local_198.PrimitiveInstanceIndicesView._12_4_ = uStack_1fc;
              local_198.PrimitiveInstanceIndicesView.ArrayNum = iStack_200;
              local_198.InstanceTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_198.InstanceTransforms.ArrayNum = (int)local_1f0;
              local_198.PrimitiveInstanceIndicesView.DataPtr = local_208;
              if ((int)local_1f0 == 0) {
                local_198.InstanceTransforms.ArrayMax = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x80,0x10,(int)local_1f0,0,
                           &local_198.InstanceTransforms.AllocatorInstance,(int)local_1f0,
                           &local_198.InstanceTransforms.ArrayMax);
                memcpy(local_198.InstanceTransforms.AllocatorInstance.Data,FVar6.Data,lVar11 << 7);
              }
              local_198.InstanceTransformsView._12_4_ = uStack_1dc;
              local_198.InstanceTransformsView.ArrayNum = iStack_1e0;
              local_198.InstanceTransformsView.DataPtr = local_1e8;
              FRayTracingInstanceCollector::AddRayTracingInstance(param_1,uVar19,&local_198);
              iVar9 = (int)local_238;
            }
            uVar19 = uVar19 + 1;
          } while ((int)uVar19 < iVar10);
        }
        if (local_1f8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data);
          iVar9 = (int)local_238;
        }
        if (local_218 != (void *)0x0) {
          FMemory::Free(local_218);
          iVar9 = (int)local_238;
        }
        DestructItems<FMeshBatch,int>((FMeshBatch *)local_240.Data,iVar9);
        pFVar17 = local_1c0;
        pFVar20 = local_250;
        if ((FMeshBatch *)local_240.Data != (FMeshBatch *)0x0) {
          FMemory::Free(local_240.Data);
          pFVar17 = local_1c0;
          pFVar20 = local_250;
        }
      }
      uVar15 = (ulonglong)local_1d0;
      pFVar21 = local_1b8 + 8;
    }
  }
  return;
}

// GetMemoryFootprint @ 14ca1e1d0

uint __thiscall FGeometryCacheSceneProxy::GetMemoryFootprint(FGeometryCacheSceneProxy *this)

{
  return *(int *)&this->field_0x104 * 4 + 0x370;
}

// GetTypeHash @ 14ca1fbd0

ulong64 __thiscall FGeometryCacheSceneProxy::GetTypeHash(FGeometryCacheSceneProxy *this)

{
  return 0x155347710;
}

// GetViewRelevance @ 14ca1fcb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPrimitiveViewRelevance * __thiscall
FGeometryCacheSceneProxy::GetViewRelevance
          (FGeometryCacheSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar2 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 2;
  bVar2 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3 | 2;
  bVar2 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 5;
  uVar3 = 0;
  if (this->field_0x89 != '\x01') {
    uVar3 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 =
       uVar3 | *(uint *)&__return_storage_ptr__->field_0x8 & 0xffffdfff;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  if (((((this->field_0x68 == '\x02') || (this->field_0x68 == '\x01')) ||
       ((this->field_0x86 & 1) != 0)) ||
      (((char)this->field_0x82 < '\0' || (uVar3 = 0, (this->field_0x82 & 0x72) != 0)))) &&
     ((uVar3 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar3 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar3;
  return __return_storage_ptr__;
}

// HasRayTracingRepresentation @ 14ca20030

bool __thiscall
FGeometryCacheSceneProxy::HasRayTracingRepresentation(FGeometryCacheSceneProxy *this)

{
  return true;
}

// InitRayTracing @ 14ca21be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FGeometryCacheSceneProxy::InitRayTracing
          (FGeometryCacheSceneProxy *this,FRHICommandListBase *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  FRHIBuffer *pFVar3;
  FRHIBuffer *this_00;
  code *pcVar4;
  ushort uVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_1e8 [32];
  undefined1 local_198;
  undefined1 local_197 [7];
  ForAnyElementType local_190;
  undefined8 local_188;
  FRayTracingGeometrySegment local_180;
  uint local_158;
  ulonglong local_150;
  FGeometryCacheSceneProxy *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FRHICommandListBase *local_130;
  FRayTracingGeometryInitializer local_128;
  FRHIBuffer *local_b8;
  uint local_b0;
  ERayTracingGeometryType EStack_ac;
  uint local_a8;
  undefined1 local_a4 [2];
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  ERayTracingGeometryInitializerType local_a0;
  ForAnyElementType local_98;
  undefined8 local_90;
  FResourceArrayUploadInterface *local_88;
  uint local_80 [6];
  FRHIRayTracingGeometry *local_68;
  FDebugName local_60;
  FName local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  pFVar17 = (this->Tracks).AllocatorInstance.Data;
  local_158 = (this->Tracks).ArrayNum;
  uVar11 = (ulonglong)(int)local_158;
  pFVar15 = pFVar17 + uVar11 * 8;
  local_148 = this;
  local_140 = pFVar15;
  local_130 = param_1;
  do {
    local_138 = pFVar17;
    if ((this->Tracks).ArrayNum != (int)uVar11) {
      local_198 = 0;
      `TCheckedPointerIterator<FGeomCacheTrackProxy_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_198);
    }
    if (pFVar17 == pFVar15) {
      return;
    }
    plVar2 = *(longlong **)pFVar17;
    if ((plVar2 != (longlong *)0x0) &&
       (lVar10 = (**(code **)(*plVar2 + 0x20))(plVar2,this->Time,this->bLooping),
       *(char *)(lVar10 + 0x10) != '\0')) {
      _local_a4 = 0x10000;
      local_b8 = (FRHIBuffer *)0x0;
      local_b0 = 0;
      EStack_ac = 0;
      local_a8 = 0;
      local_a0 = Rendering;
      local_98.Data = (FScriptContainerElement *)0x0;
      local_90 = 0;
      local_88 = (FResourceArrayUploadInterface *)0x0;
      local_68 = (FRHIRayTracingGeometry *)0x0;
      local_80[0] = 0xffffffff;
      local_80[1] = 0xffffffff;
      local_80[2] = 0xffffffff;
      local_80[3] = 0xffffffff;
      local_80[4] = 0xffffffff;
      local_80[5] = 0xffffffff;
      FDebugName::FDebugName(&local_60);
      local_54.ComparisonIndex.Value = 0;
      local_54.Number = 0;
      FDebugName::operator=(&local_60,this->RayTracingDebugName);
      lVar10 = 0x10;
      if ((char)plVar2[0x90] == '\0') {
        lVar10 = 8;
      }
      EStack_ac = RTGT_Triangles;
      local_a8 = 0;
      uVar6 = (uint)_local_a4 >> 0x18;
      uVar5 = (ushort)_local_a4;
      _local_a4 = (uint3)(uVar5 & 0xff00);
      _local_a4 = CONCAT13((char)uVar6,_local_a4);
      local_190.Data = (FScriptContainerElement *)0x0;
      local_188 = 0;
      lVar10 = *(longlong *)(lVar10 + (longlong)plVar2);
      iVar13 = *(int *)(lVar10 + 0x78);
      puVar14 = *(uint **)(lVar10 + 0x70);
      puVar1 = puVar14 + (longlong)iVar13 * 3;
      local_150 = (ulonglong)(*(uint *)(plVar2 + 0x18) & 1);
      if (*(uint *)(plVar2 + 0x18) == 0xffffffff) {
        local_150 = 0;
      }
      while( true ) {
        if (*(int *)(lVar10 + 0x78) != iVar13) {
          local_197[0] = 0;
          `TCheckedPointerIterator<FGeometryCacheMeshBatchInfo_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_197);
        }
        uVar11 = local_150;
        if (puVar14 == puVar1) break;
        local_180.VertexBuffer.Reference = (FRHIBuffer *)0x0;
        local_180.NumPrimitives = puVar14[1];
        uVar16 = 0xc;
        pFVar3 = (FRHIBuffer *)plVar2[local_150 * 7 + 0xc];
        local_180.FirstPrimitive = *puVar14 / 3;
        local_180.VertexBufferElementType = VET_Float3;
        local_180.VertexBufferOffset = 0;
        local_180.VertexBufferStride = 0xc;
        local_180.MaxVertices = 0;
        local_180.bForceOpaque = false;
        local_180.bAllowDuplicateAnyHitShaderInvocation = true;
        local_180.bEnabled = true;
        if (pFVar3 != (FRHIBuffer *)0x0) {
          local_180.VertexBuffer.Reference = pFVar3;
          FRHIResource::AddRef((FRHIResource *)pFVar3);
          uVar16 = local_180._16_8_ & 0xffffffff;
        }
        local_180.MaxVertices = (uint)(*(uint *)(plVar2 + uVar11 * 7 + 0xd) / uVar16);
        if (((local_190.Data <= &local_180) &&
            (&local_180 <
             (FRayTracingGeometrySegment *)(local_190.Data + (longlong)local_188._4_4_ * 0x28))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((int)local_188 == local_188._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&local_190,(int *)((longlong)&local_188 + 4));
          local_188 = CONCAT44(local_188._4_4_,iVar9);
        }
        FVar7.Data = local_190.Data;
        lVar12 = (longlong)(int)local_188;
        local_188 = CONCAT44(local_188._4_4_,(int)local_188 + 1);
        *(undefined8 *)&local_190.Data[lVar12 * 0x28].field_0x0 = 0;
        *(FRHIBuffer **)&local_190.Data[lVar12 * 0x28].field_0x0 = local_180.VertexBuffer.Reference;
        if (local_180.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_180.VertexBuffer.Reference);
        }
        *(EVertexElementType *)(FVar7.Data + lVar12 * 0x28 + 8) = local_180.VertexBufferElementType;
        *(uint *)(FVar7.Data + lVar12 * 0x28 + 0xc) = local_180.VertexBufferOffset;
        *(uint *)(FVar7.Data + lVar12 * 0x28 + 0x10) = local_180.VertexBufferStride;
        *(uint *)(FVar7.Data + lVar12 * 0x28 + 0x14) = local_180.MaxVertices;
        *(uint *)(FVar7.Data + lVar12 * 0x28 + 0x18) = local_180.FirstPrimitive;
        *(uint *)(FVar7.Data + lVar12 * 0x28 + 0x1c) = local_180.NumPrimitives;
        FVar7.Data[lVar12 * 0x28 + 0x20] = (FScriptContainerElement)local_180.bForceOpaque;
        FVar7.Data[lVar12 * 0x28 + 0x21] =
             (FScriptContainerElement)local_180.bAllowDuplicateAnyHitShaderInvocation;
        FVar7.Data[lVar12 * 0x28 + 0x22] = (FScriptContainerElement)local_180.bEnabled;
        local_a8 = local_a8 + puVar14[1];
        if (local_180.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)local_180.VertexBuffer.Reference);
        }
        puVar14 = puVar14 + 3;
      }
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_98.Data,(int)local_90);
      FVar7.Data = local_190.Data;
      iVar13 = (int)local_188;
      local_90 = CONCAT44(local_90._4_4_,(int)local_188);
      if (((int)local_188 == 0) && (local_90._4_4_ == 0)) {
        local_90 = local_188 & 0xffffffff;
        iVar13 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,(int)local_188,local_90._4_4_,&local_98,(int)local_188,
                   (int *)((longlong)&local_90 + 4));
        ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                  (local_98.Data,(FRayTracingGeometrySegment *)FVar7.Data,iVar13);
        iVar13 = (int)local_90;
      }
      pFVar3 = local_b8;
      if ((local_a8 != 0) && (this_00 = (FRHIBuffer *)plVar2[0x39], local_b8 != this_00)) {
        local_b8 = this_00;
        if (this_00 != (FRHIBuffer *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_00);
          iVar13 = (int)local_90;
        }
        if (pFVar3 != (FRHIBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)pFVar3);
          iVar13 = (int)local_90;
        }
      }
      local_128.IndexBuffer.Reference = local_b8;
      if (local_b8 != (FRHIBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_b8);
        iVar13 = (int)local_90;
      }
      FVar7.Data = local_98.Data;
      local_128.IndexBufferOffset = local_b0;
      local_128.GeometryType = EStack_ac;
      local_128.TotalPrimitiveCount = local_a8;
      local_128.bFastBuild = (bool)local_a4[0];
      local_128.bAllowUpdate = (bool)local_a4[1];
      local_128.bAllowCompaction = (bool)uStack_a2;
      local_128.bTemplate = (bool)uStack_a1;
      local_128.Type = local_a0;
      local_128.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Segments.ArrayNum = iVar13;
      if (iVar13 == 0) {
        local_128.Segments.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x28,8,iVar13,0,&local_128.Segments.AllocatorInstance,iVar13,
                   &local_128.Segments.ArrayMax);
        ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                  (local_128.Segments.AllocatorInstance.Data,
                   (FRayTracingGeometrySegment *)FVar7.Data,iVar13);
      }
      local_128.OfflineData = local_88;
      local_128.SourceGeometry = local_68;
      local_128.DebugName.Number = local_60.Number;
      local_128.OfflineDataHeader.Reserved[0] = local_80[0];
      local_128.OfflineDataHeader.Reserved[1] = local_80[1];
      local_128.OfflineDataHeader.Reserved[2] = local_80[2];
      local_128.OfflineDataHeader.Reserved[3] = local_80[3];
      local_128.OwnerName = local_54;
      local_128.OfflineDataHeader.Reserved[4] = local_80[4];
      local_128.OfflineDataHeader.Reserved[5] = local_80[5];
      local_128.DebugName.Name = local_60.Name;
      FRayTracingGeometry::SetInitializer((FRayTracingGeometry *)(plVar2 + 0x91),&local_128);
      (**(code **)(plVar2[0x91] + 0x18))(plVar2 + 0x91,local_130);
      *(undefined1 *)((longlong)plVar2 + 0x482) = 1;
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_190.Data,(int)local_188);
      if ((FRayTracingGeometrySegment *)local_190.Data != (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_190.Data);
      }
      DestructItems<FRayTracingGeometrySegment,int>
                ((FRayTracingGeometrySegment *)local_98.Data,(int)local_90);
      if ((FRayTracingGeometrySegment *)local_98.Data != (FRayTracingGeometrySegment *)0x0) {
        FMemory::Free(local_98.Data);
      }
      this = local_148;
      pFVar15 = local_140;
      if (local_b8 != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_b8);
        this = local_148;
        pFVar15 = local_140;
      }
    }
    uVar11 = (ulonglong)local_158;
    pFVar17 = local_138 + 8;
  } while( true );
}

// IsRayTracingRelevant @ 14ca237f0

bool __thiscall FGeometryCacheSceneProxy::IsRayTracingRelevant(FGeometryCacheSceneProxy *this)

{
  return true;
}

// IsUsingDistanceCullFade @ 14ca23d00

bool __thiscall FGeometryCacheSceneProxy::IsUsingDistanceCullFade(FGeometryCacheSceneProxy *this)

{
  return (bool)(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 1 & 1);
}

// UpdateAnimation @ 14ca2cf30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FGeometryCacheSceneProxy::UpdateAnimation
          (FGeometryCacheSceneProxy *this,FRHICommandListBase *param_1,float param_2,bool param_3,
          bool param_4,float param_5,float param_6)

{
  uint *puVar1;
  ForAnyElementType *pFVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  FRHIBuffer *this_00;
  FRHIRayTracingGeometry *this_01;
  FRHIResource *this_02;
  FRHIResource *this_03;
  code *pcVar6;
  ForAnyElementType FVar7;
  TRefCountPtr<FRHIBuffer> this_04;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  float fVar15;
  ulonglong uVar16;
  uint *puVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res20 [8];
  ForAnyElementType local_108;
  undefined8 local_100;
  FRayTracingGeometrySegment local_f8;
  ulonglong local_d0;
  longlong local_c8;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FRayTracingGeometryBuildParams local_b0;
  FRayTracingGeometrySegment *local_90;
  float *local_88;
  FRayTracingGeometrySegment *local_80;
  int iStack_78;
  undefined4 uStack_74;
  FRayTracingGeometryBuildParams *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> local_58;
  
  this->Time = param_2;
  this->PlaybackSpeed = param_5;
  this->MotionVectorScale = param_6;
  *(uint *)&this->field_0x320 =
       *(uint *)&this->field_0x320 & 0xfffffffc | (uint)param_3 | (uint)param_4 * 2;
  this->UpdatedFrameNum = GFrameNumber + 1;
  FrameUpdate(this,param_1);
  bVar8 = IsRayTracingEnabled();
  if (bVar8) {
    uVar3 = (this->Tracks).ArrayNum;
    uVar16 = (ulonglong)(int)uVar3;
    pFVar21 = (this->Tracks).AllocatorInstance.Data;
    pFVar18 = pFVar21 + uVar16 * 8;
    local_c0 = pFVar18;
    while( true ) {
      local_b8 = pFVar21;
      if ((this->Tracks).ArrayNum != (int)uVar16) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<FGeomCacheTrackProxy_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar21 == pFVar18) break;
      plVar5 = *(longlong **)pFVar21;
      if ((plVar5 != (longlong *)0x0) &&
         (lVar12 = (**(code **)(*plVar5 + 0x20))(plVar5,this->Time,this->bLooping),
         *(char *)(lVar12 + 0x10) != '\0')) {
        if (*(char *)((longlong)plVar5 + 0x482) == '\0') {
          InitRayTracing(this,param_1);
        }
        plVar13 = plVar5 + 2;
        uVar16 = (ulonglong)(*(uint *)(plVar5 + 0x18) & 1);
        if (*(uint *)(plVar5 + 0x18) == 0xffffffff) {
          uVar16 = 0;
        }
        if ((char)plVar5[0x90] == '\0') {
          plVar13 = plVar5 + 1;
        }
        local_c8 = *plVar13;
        iVar20 = *(int *)((longlong)plVar5 + 0x1d4);
        puVar1 = (uint *)(local_c8 + 0x78);
        param_6 = (float)(iVar20 / 3 + (iVar20 >> 0x1f) +
                         (int)(((longlong)iVar20 / 3 + ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                              0x1f));
        local_d0 = uVar16;
        if ((plVar5[0x9f] == plVar5[0x39]) && (uVar14 = *puVar1, *(uint *)(plVar5 + 0xa4) == uVar14)
           ) {
          uVar19 = 0;
          bVar8 = false;
          if (0 < (int)uVar14) {
            lVar12 = 0;
            bVar8 = false;
            do {
              uVar10 = 0;
              if ((int)uVar19 < (int)uVar14) {
                uVar10 = ~uVar19 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar14 = 0;
              if ((int)uVar19 < (int)plVar5[0xa4]) {
                uVar14 = ~uVar19 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if ((bVar8) ||
                 (*(uint *)(lVar12 + 0x14 + plVar5[0xa3]) !=
                  *(uint *)(plVar5 + uVar16 * 7 + 0xd) / *(uint *)(lVar12 + 0x10 + plVar5[0xa3]))) {
                bVar8 = true;
              }
              uVar14 = *puVar1;
              uVar19 = uVar19 + 1;
              lVar12 = lVar12 + 0x28;
            } while ((int)uVar19 < (int)uVar14);
          }
        }
        else {
          bVar8 = true;
        }
        lVar12 = local_c8;
        iVar20 = 0;
        local_108.Data = (FScriptContainerElement *)0x0;
        local_100 = 0;
        uVar14 = *puVar1;
        if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
        }
        if (0 < (int)uVar14) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,uVar14,&local_108,0,(int *)((longlong)&local_100 + 4));
        }
        iVar4 = *(int *)(lVar12 + 0x78);
        puVar17 = *(uint **)(lVar12 + 0x70);
        puVar1 = puVar17 + (longlong)iVar4 * 3;
        while( true ) {
          if (*(int *)(lVar12 + 0x78) != iVar4) {
            param_5 = (float)((uint)param_5 & 0xffffff00);
            `TCheckedPointerIterator<FGeometryCacheMeshBatchInfo_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(&param_5);
          }
          if (puVar17 == puVar1) break;
          local_f8.VertexBufferElementType = VET_Float3;
          local_f8.VertexBufferOffset = 0;
          local_f8.VertexBuffer.Reference = (FRHIBuffer *)0x0;
          local_f8.VertexBufferStride = 0xc;
          local_f8.MaxVertices = 0;
          local_f8.NumPrimitives = puVar17[1];
          local_f8.FirstPrimitive = *puVar17 / 3;
          local_f8.bForceOpaque = false;
          local_f8.bAllowDuplicateAnyHitShaderInvocation = true;
          local_f8.bEnabled = true;
          if ((uint)param_6 < local_f8.NumPrimitives + local_f8.FirstPrimitive) {
            local_90 = &local_f8;
            local_88 = &param_6;
            bVar9 = `FGeometryCacheSceneProxy::UpdateAnimation'::__l28::<lambda_1>::operator()
                              (&local_90);
            if (!bVar9) {
              fVar15 = param_6;
              if (local_f8.FirstPrimitive < (uint)param_6) {
                fVar15 = (float)local_f8.FirstPrimitive;
              }
              local_f8.NumPrimitives = (int)param_6 - (int)fVar15;
            }
          }
          this_04.Reference = local_f8.VertexBuffer.Reference;
          this_00 = (FRHIBuffer *)plVar5[uVar16 * 7 + 0xc];
          if (local_f8.VertexBuffer.Reference != this_00) {
            local_f8.VertexBuffer.Reference = this_00;
            if (this_00 != (FRHIBuffer *)0x0) {
              FRHIResource::AddRef((FRHIResource *)this_00);
            }
            if (this_04.Reference != (FRHIBuffer *)0x0) {
              FRHIResource::Release((FRHIResource *)this_04.Reference);
            }
          }
          local_f8.MaxVertices = *(uint *)(plVar5 + uVar16 * 7 + 0xd) / local_f8.VertexBufferStride;
          if (((local_108.Data <= &local_f8) &&
              (&local_f8 <
               (FRayTracingGeometrySegment *)(local_108.Data + (longlong)local_100._4_4_ * 0x28)))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((int)local_100 == local_100._4_4_) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&local_108,(int *)((longlong)&local_100 + 4));
            local_100 = CONCAT44(local_100._4_4_,iVar11);
          }
          FVar7.Data = local_108.Data;
          lVar12 = (longlong)(int)local_100;
          local_100 = CONCAT44(local_100._4_4_,(int)local_100 + 1);
          *(undefined8 *)&local_108.Data[lVar12 * 0x28].field_0x0 = 0;
          *(FRHIBuffer **)&local_108.Data[lVar12 * 0x28].field_0x0 = local_f8.VertexBuffer.Reference
          ;
          if (local_f8.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_f8.VertexBuffer.Reference);
          }
          *(EVertexElementType *)(FVar7.Data + lVar12 * 0x28 + 8) = local_f8.VertexBufferElementType
          ;
          *(uint *)(FVar7.Data + lVar12 * 0x28 + 0xc) = local_f8.VertexBufferOffset;
          *(uint *)(FVar7.Data + lVar12 * 0x28 + 0x10) = local_f8.VertexBufferStride;
          *(uint *)(FVar7.Data + lVar12 * 0x28 + 0x14) = local_f8.MaxVertices;
          *(uint *)(FVar7.Data + lVar12 * 0x28 + 0x18) = local_f8.FirstPrimitive;
          *(uint *)(FVar7.Data + lVar12 * 0x28 + 0x1c) = local_f8.NumPrimitives;
          FVar7.Data[lVar12 * 0x28 + 0x20] = (FScriptContainerElement)local_f8.bForceOpaque;
          FVar7.Data[lVar12 * 0x28 + 0x21] =
               (FScriptContainerElement)local_f8.bAllowDuplicateAnyHitShaderInvocation;
          FVar7.Data[lVar12 * 0x28 + 0x22] = (FScriptContainerElement)local_f8.bEnabled;
          iVar20 = iVar20 + local_f8.NumPrimitives;
          if (local_f8.VertexBuffer.Reference != (FRHIBuffer *)0x0) {
            FRHIResource::Release((FRHIResource *)local_f8.VertexBuffer.Reference);
          }
          puVar17 = puVar17 + 3;
          lVar12 = local_c8;
          uVar16 = local_d0;
        }
        if ((bVar8) || ((int)plVar5[0xa1] != iVar20)) {
          (**(code **)(plVar5[0x91] + 0x10))();
          this_02 = (FRHIResource *)plVar5[0x39];
          this_03 = (FRHIResource *)plVar5[0x9f];
          if (this_03 != this_02) {
            plVar5[0x9f] = (longlong)this_02;
            if (this_02 != (FRHIResource *)0x0) {
              FRHIResource::AddRef(this_02);
            }
            if (this_03 != (FRHIResource *)0x0) {
              FRHIResource::Release(this_03);
            }
          }
          pFVar2 = (ForAnyElementType *)(plVar5 + 0xa3);
          *(int *)(plVar5 + 0xa1) = iVar20;
          if (pFVar2 != &local_108) {
            DestructItems<FRayTracingGeometrySegment,int>
                      ((FRayTracingGeometrySegment *)pFVar2->Data,(int)plVar5[0xa4]);
            if (pFVar2->Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar2->Data);
            }
            pFVar2->Data = local_108.Data;
            *(int *)(plVar5 + 0xa4) = (int)local_100;
            *(int *)((longlong)plVar5 + 0x524) = local_100._4_4_;
            local_100 = 0;
            local_108.Data = (FScriptContainerElement *)0x0;
          }
          (**(code **)(plVar5[0x91] + 8))(plVar5 + 0x91,param_1);
        }
        else {
          bVar8 = FRayTracingGeometry::IsValid((FRayTracingGeometry *)(plVar5 + 0x91));
          if ((bVar8) &&
             (bVar8 = FRayTracingGeometry::IsEvicted((FRayTracingGeometry *)(plVar5 + 0x91)), !bVar8
             )) {
            pFVar2 = (ForAnyElementType *)(plVar5 + 0xa3);
            if (pFVar2 != &local_108) {
              DestructItems<FRayTracingGeometrySegment,int>
                        ((FRayTracingGeometrySegment *)pFVar2->Data,(int)plVar5[0xa4]);
              if (pFVar2->Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar2->Data);
              }
              pFVar2->Data = local_108.Data;
              *(int *)(plVar5 + 0xa4) = (int)local_100;
              *(int *)((longlong)plVar5 + 0x524) = local_100._4_4_;
              local_100 = 0;
              local_108.Data = (FScriptContainerElement *)0x0;
            }
            this_01 = (FRHIRayTracingGeometry *)plVar5[0xae];
            local_b0.Geometry.Reference = (FRHIRayTracingGeometry *)0x0;
            local_b0.BuildMode = Build;
            local_b0.Segments.DataPtr = (FRayTracingGeometrySegment *)0x0;
            local_b0.Segments._8_8_ = local_b0.Segments._8_8_ & 0xffffffff00000000;
            if (this_01 != (FRHIRayTracingGeometry *)0x0) {
              local_b0.Geometry.Reference = this_01;
              FRHIResource::AddRef((FRHIResource *)this_01);
            }
            local_80 = (FRayTracingGeometrySegment *)pFVar2->Data;
            iVar20 = (int)plVar5[0xa4];
            local_b0.BuildMode = Build;
            if ((iVar20 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_68 = &local_b0;
            local_b0.Segments._8_8_ = CONCAT44(uStack_74,iVar20);
            uStack_60 = 1;
            local_b0.Segments.DataPtr = local_80;
            local_58._12_4_ = uStack_5c;
            local_58.ArrayNum = 1;
            iStack_78 = iVar20;
            local_58.DataPtr = local_68;
            FRHIComputeCommandList::BuildAccelerationStructures
                      ((FRHIComputeCommandList *)param_1,&local_58);
            if (local_b0.Geometry.Reference != (FRHIRayTracingGeometry *)0x0) {
              FRHIResource::Release((FRHIResource *)local_b0.Geometry.Reference);
            }
          }
        }
        DestructItems<FRayTracingGeometrySegment,int>
                  ((FRayTracingGeometrySegment *)local_108.Data,(int)local_100);
        pFVar18 = local_c0;
        if ((FRayTracingGeometrySegment *)local_108.Data != (FRayTracingGeometrySegment *)0x0) {
          FMemory::Free(local_108.Data);
          pFVar18 = local_c0;
        }
      }
      uVar16 = (ulonglong)uVar3;
      pFVar21 = local_b8 + 8;
    }
  }
  return;
}

// UpdateSectionWorldMatrix @ 14ca2ee60

void __thiscall
FGeometryCacheSceneProxy::UpdateSectionWorldMatrix
          (FGeometryCacheSceneProxy *this,int param_1,TMatrix<double> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  bool bVar21;
  uint uVar22;
  
  if (((this->Tracks).ArrayNum <= param_1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("SectionIndex < Tracks.Num() && \"Section Index out of range\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryCache\\Source\\GeometryCache\\Private\\GeometryCacheSceneProxy.cpp"
                          ,0x592,L""), bVar21)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  dVar7 = param_2->M[0][2];
  dVar8 = param_2->M[0][3];
  dVar9 = param_2->M[1][0];
  dVar10 = param_2->M[1][1];
  uVar3 = *(undefined4 *)param_2->M[0];
  uVar4 = *(undefined4 *)((longlong)param_2->M[0] + 4);
  uVar5 = *(undefined4 *)(param_2->M[0] + 1);
  uVar6 = *(undefined4 *)((longlong)param_2->M[0] + 0xc);
  dVar11 = param_2->M[1][2];
  dVar12 = param_2->M[1][3];
  uVar22 = 0;
  if (param_1 < (this->Tracks).ArrayNum) {
    uVar22 = (uint)~param_1 >> 0x1f;
  }
  dVar13 = param_2->M[2][0];
  dVar14 = param_2->M[2][1];
  dVar15 = param_2->M[2][2];
  dVar16 = param_2->M[2][3];
  dVar17 = param_2->M[3][0];
  dVar18 = param_2->M[3][1];
  dVar19 = param_2->M[3][2];
  dVar20 = param_2->M[3][3];
  if ((uVar22 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar1 = *(longlong *)((this->Tracks).AllocatorInstance.Data + (longlong)param_1 * 8);
  *(undefined4 *)(lVar1 + 0x400) = uVar3;
  *(undefined4 *)(lVar1 + 0x404) = uVar4;
  *(undefined4 *)(lVar1 + 0x408) = uVar5;
  *(undefined4 *)(lVar1 + 0x40c) = uVar6;
  *(double *)(lVar1 + 0x410) = dVar7;
  *(double *)(lVar1 + 0x418) = dVar8;
  *(double *)(lVar1 + 0x420) = dVar9;
  *(double *)(lVar1 + 0x428) = dVar10;
  *(double *)(lVar1 + 0x430) = dVar11;
  *(double *)(lVar1 + 0x438) = dVar12;
  *(double *)(lVar1 + 0x440) = dVar13;
  *(double *)(lVar1 + 0x448) = dVar14;
  *(double *)(lVar1 + 0x450) = dVar15;
  *(double *)(lVar1 + 0x458) = dVar16;
  *(double *)(lVar1 + 0x460) = dVar17;
  *(double *)(lVar1 + 0x468) = dVar18;
  *(double *)(lVar1 + 0x470) = dVar19;
  *(double *)(lVar1 + 0x478) = dVar20;
  return;
}

// operator() @ 150575980

bool __thiscall
`FGeometryCacheSceneProxy::UpdateAnimation'::__l28::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<2950723410881151628>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2950723410881151628>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

