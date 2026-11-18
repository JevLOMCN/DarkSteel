// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 8

// ~FMRMeshProxy @ 146c66b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FMRMeshProxy::~FMRMeshProxy(FMRMeshProxy *this)

{
  int iVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  
  this->_padding_ = (longlong)&___7FMRMeshProxy__6B_;
  pFVar4 = (this->ProxySections).AllocatorInstance.Data;
  iVar1 = (this->ProxySections).ArrayNum;
  local_res10 = pFVar4 + (longlong)iVar1 * 8;
  while( true ) {
    pFVar3 = local_res10;
    if ((this->ProxySections).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMRMeshProxySection_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar3) break;
    pvVar2 = *(void **)pFVar4;
    if (pvVar2 != (void *)0x0) {
      (**(code **)(*(longlong *)((longlong)pvVar2 + 8) + 0x20))((longlong)pvVar2 + 8);
      (**(code **)(*(longlong *)((longlong)pvVar2 + 0x38) + 0x20))((longlong)pvVar2 + 0x38);
      (**(code **)(*(longlong *)((longlong)pvVar2 + 0x68) + 0x20))((longlong)pvVar2 + 0x68);
      (**(code **)(*(longlong *)((longlong)pvVar2 + 0x98) + 0x20))((longlong)pvVar2 + 0x98);
      (**(code **)(*(longlong *)((longlong)pvVar2 + 200) + 0x20))();
      (**(code **)(*(longlong *)((longlong)pvVar2 + 0xf8) + 0x20))();
      if (*(FRHIResource **)((longlong)pvVar2 + 0x378) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)((longlong)pvVar2 + 0x378));
      }
      if (*(FRHIResource **)((longlong)pvVar2 + 0x370) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)((longlong)pvVar2 + 0x370));
      }
      if (*(FRHIResource **)((longlong)pvVar2 + 0x368) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)((longlong)pvVar2 + 0x368));
      }
      if (*(FRHIResource **)((longlong)pvVar2 + 0x360) != (FRHIResource *)0x0) {
        FRHIResource::Release(*(FRHIResource **)((longlong)pvVar2 + 0x360));
      }
      FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)((longlong)pvVar2 + 0xf8));
      FIndexBuffer::~FIndexBuffer((FIndexBuffer *)((longlong)pvVar2 + 200));
      FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar2 + 0x98));
      FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar2 + 0x68));
      FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar2 + 0x38));
      FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar2 + 8));
      ::operator_delete(pvVar2,0x380);
    }
    pFVar4 = pFVar4 + 8;
  }
  *(undefined4 *)&(this->OldVisDataByBrickId).field_0x48 = 0;
  pvVar2 = *(void **)&(this->OldVisDataByBrickId).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->OldVisDataByBrickId);
  pFVar4 = (this->ProxySections).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// GetDynamicMeshElements @ 146c6acd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMRMeshProxy::GetDynamicMeshElements
          (FMRMeshProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,
          FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  ulong64 *puVar2;
  undefined1 *puVar3;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar4;
  void *pvVar5;
  uint *puVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  TConsoleVariableData<int> *pTVar12;
  TMap<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
  *pTVar13;
  undefined4 uVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  ESceneDepthPriorityGroup EVar19;
  ulonglong *puVar20;
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *pTVar21;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar22;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar23;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined1 *puVar27;
  ForElementType<FSetElementId> _Src;
  char cVar28;
  TBitArray<FDefaultBitArrayAllocator> *pTVar29;
  TTuple<UE::Math::TBox<double>,bool> *pTVar30;
  longlong lVar31;
  uint uVar32;
  void *_Dst;
  int iVar33;
  FColor_u_0 FVar34;
  TBitArray<FDefaultBitArrayAllocator> *pTVar35;
  uint *puVar36;
  uint uVar37;
  ForElementType<FMeshBatchElement> FVar38;
  TMap<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
  *this_00;
  uint uVar39;
  ForElementType<FMeshBatchElement> FVar40;
  double dVar41;
  double dVar42;
  undefined1 auStackY_2b8 [32];
  undefined1 local_264;
  undefined1 local_263 [3];
  TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *local_260;
  uint local_258;
  undefined4 local_254;
  uint local_250;
  int local_24c;
  ulonglong local_248;
  FMeshElementCollector *local_240;
  TBitArray<FDefaultBitArrayAllocator> *local_238;
  TBitArray<FDefaultBitArrayAllocator> *local_230;
  longlong local_228;
  longlong local_220;
  FMRMeshProxy *local_218;
  FLinearColor_u_0 local_210;
  int local_200;
  int local_1fc;
  TMap<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
  *local_1f8;
  int iStack_1f0;
  uint uStack_1ec;
  undefined1 *local_1e8;
  undefined4 uStack_1e0;
  int iStack_1dc;
  int local_1d8;
  undefined4 uStack_1d4;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TMap<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
  *local_1c8;
  undefined1 auStack_1c0 [16];
  uint uStack_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180 [2];
  undefined4 local_14c;
  undefined1 local_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [8];
  ForElementType<FSetElementId> local_108;
  uint local_100;
  TTuple<UE::Math::TBox<double>,bool> local_f8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_240 = param_4;
  local_260 = param_1;
  local_218 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
    ::__l2::InfiniteBounds._40_16_ = ___xmm_42900000000000004290000000000000;
    `private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
    ::__l2::InfiniteBounds.Origin.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    `private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
    ::__l2::InfiniteBounds.Origin.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    `private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
    ::__l2::InfiniteBounds.Origin.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    `private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
    ::__l2::InfiniteBounds.BoxExtent.field0_0x0._0_16_ = ___xmm_42900000000000004290000000000000;
    _Init_thread_footer(&`private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar12 = CVarPauseMRMeshBrickCulling.Ref;
  local_148._0_8_ = (void *)0x0;
  local_148._8_8_ = 0;
  local_128 = 0;
  local_120 = 0;
  local_114 = 0;
  local_108 = (ForElementType<FSetElementId>)0x0;
  local_100 = 0;
  local_11c = 0x80;
  local_118 = 0xffffffff;
  bVar15 = IsInParallelRenderingThread();
  if ((!bVar15) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar15)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar11 = __real_3f1a36e2e0000000;
  uVar32 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar39 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar9 = __real_3fe0000000000000;
  local_24c = pTVar12->ShadowedValue[1];
  iVar18 = (this->ProxySections).ArrayNum;
  uVar25 = (ulonglong)iVar18;
  pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)(this->ProxySections).AllocatorInstance.Data;
  pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)
            ((longlong)(pTVar29->AllocatorInstance).InlineData + uVar25 * 8);
  local_248 = CONCAT44(local_248._4_4_,iVar18);
  local_238 = pTVar35;
  while( true ) {
    local_230 = pTVar29;
    if ((this->ProxySections).ArrayNum != (int)uVar25) {
      local_264 = 0;
      `TCheckedPointerIterator<FMRMeshProxySection_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_264);
    }
    uVar26 = local_100;
    if (pTVar29 == pTVar35) break;
    puVar2 = *(ulong64 **)(pTVar29->AllocatorInstance).InlineData;
    if (puVar2 != (ulong64 *)0x0) {
      local_228 = (**(code **)(this->MaterialToUse->_padding_ + 0x310))();
      iVar18 = param_1->ArrayNum;
      local_258 = 0;
      pTVar35 = local_238;
      if (0 < iVar18) {
        local_250 = 1;
        local_220 = 0;
        pTVar21 = local_260;
        do {
          lVar31 = local_220;
          uVar37 = local_250;
          uVar26 = local_258;
          if ((param_3 & local_250) != 0) {
            uVar17 = 0;
            if ((int)local_258 < iVar18) {
              uVar17 = ~local_258 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            dVar8 = ((double)puVar2[0x68] - (double)puVar2[0x65]) * dVar9;
            dVar42 = ((double)puVar2[0x69] - (double)puVar2[0x66]) * dVar9;
            dVar41 = ((double)puVar2[0x6a] - (double)puVar2[0x67]) * dVar9;
            if (((dVar11 < (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) & uVar32,
                                            SUB84(dVar8,0) & uVar39)) ||
                (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & uVar32,
                                           SUB84(dVar42,0) & uVar39))) ||
               (dVar11 < (double)CONCAT44((uint)((ulonglong)dVar41 >> 0x20) & uVar32,
                                          SUB84(dVar41,0) & uVar39))) {
              local_180[0]._0_8_ = ((double)puVar2[0x68] + (double)puVar2[0x65]) * dVar9;
              local_180[0]._8_8_ = ((double)puVar2[0x69] + (double)puVar2[0x66]) * dVar9;
              local_180[0]._16_8_ = ((double)puVar2[0x6a] + (double)puVar2[0x67]) * dVar9;
              local_198._s_0.X = dVar8;
              local_198._s_0.Y = dVar42;
              local_198._s_0.Z = dVar41;
              bVar15 = FConvexVolume::IntersectBox
                                 ((FConvexVolume *)
                                  (*(longlong *)((local_260->AllocatorInstance).Data + lVar31) +
                                  0xf40),(TVector<double> *)&local_180[0]._s_0,
                                  (TVector<double> *)&local_198._s_0);
              if (bVar15) goto LAB_146c6afe6;
              cVar28 = '\0';
            }
            else {
LAB_146c6afe6:
              cVar28 = '\x01';
            }
            if (local_24c == 1) {
              local_f8._0_8_ = puVar2[0x65];
              local_f8._8_8_ = puVar2[0x66];
              local_f8._16_8_ = puVar2[0x67];
              local_f8._24_8_ = puVar2[0x68];
              local_f8._32_8_ = puVar2[0x69];
              local_f8._40_8_ = puVar2[0x6a];
              local_f8._48_8_ = puVar2[0x6b];
              local_f8._56_1_ = cVar28;
              TMapBase<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
              ::Emplace<unsigned___int64_const_&,TTuple<UE::Math::TBox<double>,bool>_>
                        ((TMapBase<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
                          *)local_148,puVar2,&local_f8);
            }
            else if (local_24c == 2) {
              uVar25 = *puVar2;
              pTVar21 = local_260;
              if (*(int *)&(this->OldVisDataByBrickId).field_0x8 !=
                  *(int *)&(this->OldVisDataByBrickId).field_0x34) {
                puVar3 = *(undefined1 **)&(this->OldVisDataByBrickId).field_0x40;
                puVar27 = &(this->OldVisDataByBrickId).field_0x38;
                if (puVar3 != (undefined1 *)0x0) {
                  puVar27 = puVar3;
                }
                iVar18 = *(int *)(puVar27 +
                                 ((ulonglong)(*(int *)&(this->OldVisDataByBrickId).field_0x48 - 1) &
                                 (uVar25 >> 0x20) * 0x17 + uVar25) * 4);
                if (iVar18 != -1) {
                  do {
                    puVar20 = (ulonglong *)
                              ((longlong)iVar18 * 0x50 + *(longlong *)&this->OldVisDataByBrickId);
                    if (*puVar20 == uVar25) {
                      pTVar30 = (TTuple<UE::Math::TBox<double>,bool> *)(puVar20 + 1);
                      if (puVar20 == (ulonglong *)0x0) {
                        pTVar30 = (TTuple<UE::Math::TBox<double>,bool> *)0x0;
                      }
                      if (pTVar30 != (TTuple<UE::Math::TBox<double>,bool> *)0x0) {
                        TMapBase<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
                        ::
                        Emplace<unsigned___int64_const_&,TTuple<UE::Math::TBox<double>,bool>_const_&>
                                  ((TMapBase<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
                                    *)local_148,puVar2,pTVar30);
                        cVar28 = pTVar30->field_0x38;
                        goto LAB_146c6b140;
                      }
                      break;
                    }
                    iVar18 = (int)puVar20[9];
                  } while (iVar18 != -1);
                }
              }
              goto LAB_146c6b085;
            }
LAB_146c6b140:
            pTVar21 = local_260;
            if (cVar28 != '\0') {
              iVar18 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                       ::Add(&param_4->MeshBatchStorage,1);
              uVar26 = iVar18 / 0x49;
              uVar37 = 0;
              if ((int)uVar26 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
                uVar37 = ~uVar26 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar38 = (ForElementType<FMeshBatchElement>)
                       ((ulonglong)(uint)(iVar18 % 0x49) * 0xe0 +
                       (longlong)
                       (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar26])
              ;
              if ((*(int *)((longlong)FVar38 + 0xa0) < 1) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar15)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar40 = FVar38;
              if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar38 + 0x98) !=
                  (ForElementType<FMeshBatchElement>)0x0) {
                FVar40 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar38 + 0x98);
              }
              *(ulong64 **)((longlong)FVar40 + 0x18) = puVar2 + 0x19;
              uVar26 = ((uint)this->bUseWireframe << 6 ^ *(uint *)((longlong)FVar38 + 0xd4)) & 0x40
                       ^ *(uint *)((longlong)FVar38 + 0xd4);
              *(uint *)((longlong)FVar38 + 0xd4) = uVar26;
              uVar26 = ((uint)this->bEnableOcclusion << 5 ^ uVar26) & 0x20 ^ uVar26;
              *(uint *)((longlong)FVar38 + 0xd4) = uVar26;
              *(uint *)((longlong)FVar38 + 0xd4) =
                   ((uint)this->bEnableOcclusion << 4 ^ uVar26) & 0x10 ^ uVar26;
              *(ulong64 **)((longlong)FVar38 + 0xa8) = puVar2 + 0x1f;
              *(longlong *)((longlong)FVar38 + 0xb0) = local_228;
              paVar4 = &param_4->OneFrameResources->Next;
              aVar22 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                        )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
              *(undefined8 *)((longlong)aVar22 + 8) = 0;
              *(undefined ***)aVar22 =
                   &
                   ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
              ;
              TVar23.Next = *paVar4;
              do {
                *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                  *)((longlong)aVar22 + 8) = TVar23.Next;
                LOCK();
                aVar24 = *paVar4;
                bVar15 = TVar23.Next == aVar24;
                if (bVar15) {
                  *paVar4 = aVar22;
                  aVar24 = TVar23.Next;
                }
                UNLOCK();
                TVar23.Next = aVar24;
              } while (!bVar15);
              FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer
                        ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar22 + 0x10));
              bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
              if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
                 ((bVar1 & 0x60) != 0)) {
                bVar15 = true;
              }
              else {
                bVar15 = false;
              }
              if ((local_240->RHICmdList == (FRHICommandList *)0x0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("RHICmdList",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                      ,0x46,L""), bVar16)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FDynamicPrimitiveUniformBuffer::Set
                        ((FDynamicPrimitiveUniformBuffer *)((longlong)aVar22 + 0x10),
                         (FRHICommandListBase *)local_240->RHICmdList,
                         (TMatrix<double> *)&this->_padding_,(TMatrix<double> *)&this->_padding_,
                         &`private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::InfiniteBounds,
                         &`private:_virtual_void___cdecl_FMRMeshProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::InfiniteBounds,true,false,bVar15);
              param_4 = local_240;
              uVar26 = local_258;
              *(undefined8 **)((longlong)FVar40 + 8) = (undefined8 *)((longlong)aVar22 + 0x18);
              *(undefined4 *)((longlong)FVar40 + 0x58) = 0;
              iVar18 = (int)puVar2[0x1e];
              *(undefined4 *)((longlong)FVar40 + 0x68) = 0;
              *(int *)((longlong)FVar40 + 0x5c) =
                   iVar18 / 3 + (iVar18 >> 0x1f) +
                   (int)(((longlong)iVar18 / 3 + ((longlong)iVar18 >> 0x3f) & 0xffffffffU) >> 0x1f);
              *(int *)((longlong)FVar40 + 0x6c) = (int)puVar2[6] + -1;
              *(uint *)((longlong)FVar38 + 0xd4) =
                   ((byte)this->_padding_ & 1 ^ *(uint *)((longlong)FVar38 + 0xd4) & 0xfffffffe) &
                   0xffffc07f;
              FMeshElementCollector::AddMesh(local_240,local_258,(FMeshBatch *)FVar38);
              pTVar21 = local_260;
              lVar31 = local_220;
              uVar37 = local_250;
            }
          }
LAB_146c6b085:
          iVar18 = pTVar21->ArrayNum;
          local_258 = uVar26 + 1;
          local_250 = uVar37 << 1 | (uint)((int)uVar37 < 0);
          local_220 = lVar31 + 8;
          pTVar29 = local_230;
          pTVar35 = local_238;
          param_1 = local_260;
        } while ((int)local_258 < iVar18);
      }
    }
    uVar25 = local_248 & 0xffffffff;
    pTVar29 = (TBitArray<FDefaultBitArrayAllocator> *)
              ((longlong)(pTVar29->AllocatorInstance).InlineData + 8);
  }
  this_00 = &this->OldVisDataByBrickId;
  if (this_00 ==
      (TMap<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>,0>_>
       *)local_148) goto LAB_146c6b4ec;
  lVar31 = (longlong)(int)local_100;
  uVar39 = local_100;
  if (local_100 < 2) {
    if (*(longlong *)&(this->OldVisDataByBrickId).field_0x40 != 0) {
      uVar39 = 0;
      goto LAB_146c6b427;
    }
  }
  else {
LAB_146c6b427:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(this->OldVisDataByBrickId).field_0x40,0,uVar39,4);
  }
  _Src = (ForElementType<FSetElementId>)local_110;
  if (local_108 != (ForElementType<FSetElementId>)0x0) {
    _Src = local_108;
  }
  pvVar5 = *(void **)&(this->OldVisDataByBrickId).field_0x40;
  _Dst = &(this->OldVisDataByBrickId).field_0x38;
  if (pvVar5 != (void *)0x0) {
    _Dst = pvVar5;
  }
  if (uVar26 != 0) {
    memcpy(_Dst,(void *)_Src,lVar31 << 2);
  }
  *(uint *)&(this->OldVisDataByBrickId).field_0x48 = uVar26;
  uVar14 = local_148._8_4_;
  lVar31 = (longlong)(int)local_148._8_4_;
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           *)this_00,local_148._8_4_);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,uVar14,(ForAnyElementType *)this_00,
             (int *)&(this->OldVisDataByBrickId).field_0x8,
             (int *)&(this->OldVisDataByBrickId).field_0xc);
  puVar3 = &(this->OldVisDataByBrickId).field_0x10;
  *(undefined4 *)&(this->OldVisDataByBrickId).field_0x30 = local_118;
  *(undefined4 *)&(this->OldVisDataByBrickId).field_0x34 = local_114;
  if (puVar3 != local_148 + 0x10) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
               (TBitArray<FDefaultBitArrayAllocator> *)(local_148 + 0x10));
  }
  if (uVar14 != 0) {
    memcpy(*(void **)this_00,(void *)local_148._0_8_,lVar31 * 0x50);
  }
LAB_146c6b4ec:
  fVar10 = __real_3b808081;
  if (local_24c != 0) {
    uVar39 = 0;
    local_254 = 0xff7f7f7f;
    if (0 < local_260->ArrayNum) {
      local_248 = 0;
      pTVar21 = local_260;
      do {
        if ((param_3 >> (uVar39 & 0x1f) & 1) != 0) {
          pTVar35 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->OldVisDataByBrickId).field_0x10;
          iStack_1f0 = 0;
          iVar18 = *(int *)&(this->OldVisDataByBrickId).field_0x28;
          uStack_1ec = 1;
          local_1d8 = 0;
          iStack_1dc = iStack_1f0;
          if (iVar18 != 0) {
            puVar6 = *(uint **)&(this->OldVisDataByBrickId).field_0x20;
            puVar36 = (uint *)pTVar35;
            if (puVar6 != (uint *)0x0) {
              puVar36 = puVar6;
            }
            uVar32 = *puVar36;
            local_1d8 = 0;
            iStack_1f0 = 0;
            while (uVar32 == 0) {
              lVar31 = (longlong)iStack_1f0;
              local_1d8 = local_1d8 + 0x20;
              iStack_1f0 = iStack_1f0 + 1;
              iStack_1dc = iVar18;
              if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1f0)
              goto LAB_146c6b5ce;
              uVar32 = puVar36[lVar31 + 1];
            }
            uStack_1ec = -uVar32 & uVar32;
            uVar25 = (ulonglong)uStack_1ec * 2 + 1;
            lVar31 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            local_200 = (int)lVar31;
            iStack_1dc = local_1d8 + -1 + local_200;
            if (iVar18 < iStack_1dc) {
              iStack_1dc = iVar18;
            }
          }
LAB_146c6b5ce:
          uStack_1d4 = local_14c;
          iStack_1d0 = *(int *)&(this->OldVisDataByBrickId).field_0x8 -
                       *(int *)&(this->OldVisDataByBrickId).field_0x34;
          uVar32 = *(uint *)&(this->OldVisDataByBrickId).field_0x28;
          uVar26 = uVar32 & 0xffffffe0;
          auStack_1c0._0_8_ = CONCAT44(uStack_1ec,iStack_1f0);
          uStack_1e0 = 0xffffffff;
          uStack_1b0 = 0xffffffff;
          auStack_1c0._8_8_ = pTVar35;
          uStack_1ac = iStack_1dc;
          iVar33 = (int)uVar32 >> 5;
          local_1a8._4_4_ = local_14c;
          local_1a8._0_4_ = local_1d8;
          uStack_1a0 = CONCAT44(uStack_1cc,iStack_1d0);
          local_258 = uVar32;
          local_238 = pTVar35;
          local_1f8 = this_00;
          local_1e8 = (undefined1 *)pTVar35;
          local_1c8 = this_00;
          if ((((int)uVar32 < 0) || (iVar18 < (int)uVar32)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L""), bVar15)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar37 = *(uint *)&(this->OldVisDataByBrickId).field_0x28;
          if (uVar32 != uVar37) {
            puVar3 = *(undefined1 **)&(this->OldVisDataByBrickId).field_0x20;
            puVar27 = (undefined1 *)pTVar35;
            if (puVar3 != (undefined1 *)0x0) {
              puVar27 = puVar3;
            }
            uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar27 + (longlong)iVar33 * 4);
            while (uVar32 == 0) {
              lVar31 = (longlong)iVar33;
              uVar26 = uVar26 + 0x20;
              iVar33 = iVar33 + 1;
              uVar32 = uVar37;
              local_258 = uVar37;
              if ((int)((uVar37 - 1) + ((int)(uVar37 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
              goto LAB_146c6b700;
              uVar32 = *(uint *)(puVar27 + lVar31 * 4 + 4);
            }
            uVar25 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
            lVar31 = 0x3f;
            if (uVar25 != 0) {
              for (; uVar25 >> lVar31 == 0; lVar31 = lVar31 + -1) {
              }
            }
            local_1fc = (int)lVar31;
            uVar32 = (uVar26 - 1) + local_1fc;
            local_258 = uVar32;
            if ((int)uVar37 < (int)uVar32) {
              uVar32 = uVar37;
              local_258 = uVar37;
            }
          }
LAB_146c6b700:
          while( true ) {
            pTVar13 = local_1c8;
            if (*(int *)&local_1c8->field_0x8 - *(int *)&local_1c8->field_0x34 != (int)uStack_1a0) {
              local_263[0] = 0;
              `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_263);
            }
            lVar31 = (longlong)(int)uStack_1ac;
            if (((uStack_1ac == uVar32) &&
                ((TBitArray<FDefaultBitArrayAllocator> *)auStack_1c0._8_8_ == pTVar35)) &&
               (this_00 = &local_218->OldVisDataByBrickId, pTVar21 = local_260, this = local_218,
               pTVar13 == this_00)) break;
            local_228 = *(longlong *)pTVar13;
            FVar34.Bits = 0xff7f7f7f;
            if (*(char *)(lVar31 * 0x50 + 0x40 + local_228) != '\0') {
              FVar34 = FColor::Green.field0_0x0;
            }
            local_230 = (TBitArray<FDefaultBitArrayAllocator> *)
                        FMeshElementCollector::GetPDI(local_240,uVar39);
            uVar32 = 0;
            if ((int)uVar39 < local_260->ArrayNum) {
              uVar32 = ~uVar39 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            EVar19 = FPrimitiveSceneProxy::GetDepthPriorityGroup
                               ((FPrimitiveSceneProxy *)local_218,
                                *(FSceneView **)((local_260->AllocatorInstance).Data + local_248));
            local_210._s_0.R = FLinearColor::sRGBToLinearTable[FVar34.Bits >> 0x10 & 0xff];
            local_210._s_0.A = (float)(FVar34.Bits >> 0x18) * fVar10;
            local_210._s_0.G = FLinearColor::sRGBToLinearTable[FVar34.Bits >> 8 & 0xff];
            local_210._s_0.B = FLinearColor::sRGBToLinearTable[FVar34.Bits & 0xff];
            DrawWireBox((FPrimitiveDrawInterface *)local_230,
                        (TBox<double> *)(local_228 + 8 + lVar31 * 0x50),
                        (FLinearColor *)&local_210._s_0,(uchar)EVar19,0.0,0.0,false);
            uStack_1b0 = uStack_1b0 & ~auStack_1c0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1c0);
            pTVar35 = local_238;
            uVar32 = local_258;
          }
        }
        local_248 = local_248 + 8;
        uVar39 = uVar39 + 1;
      } while ((int)uVar39 < pTVar21->ArrayNum);
    }
  }
  local_100 = 0;
  if (local_108 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_108);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,TTuple<UE::Math::TBox<double>,bool>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_148);
  return;
}

// GetMemoryFootprint @ 146c6ba00

uint __thiscall FMRMeshProxy::GetMemoryFootprint(FMRMeshProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x2f0;
}

// GetTypeHash @ 146c6c1b0

ulong64 __thiscall FMRMeshProxy::GetTypeHash(FMRMeshProxy *this)

{
  return 0x1551be1e0;
}

// GetViewRelevance @ 146c6c3a0

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
FMRMeshProxy::GetViewRelevance
          (FMRMeshProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,FSceneView *param_1)

{
  byte *pbVar1;
  bool bVar2;
  UMaterial *pUVar3;
  longlong lVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
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
  bVar6 = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 3 | 2;
  uVar7 = 0;
  uVar5 = uVar7;
  if (((this->bUseWireframe != false) ||
      (pUVar3 = UMaterial::GetDefaultMaterial(MD_Surface),
      (UMaterial *)this->MaterialToUse != pUVar3)) && ((this->_padding_ & 0x8000000) != 0)) {
    uVar5 = 0x80;
  }
  __return_storage_ptr__->bRenderInMainPass = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar5;
  uVar5 = ((uint)this->bEnableOcclusion << 6 ^ *(uint *)&__return_storage_ptr__->field_0x8) & 0x40 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar7 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar7 | uVar5 & 0xffffdfff;
  bVar2 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  local_30 = &local_28;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar2 << 5;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  lVar4 = (**(code **)(this->MaterialToUse->_padding_ + 0x2e0))(this->MaterialToUse,&local_38);
  if (*(char *)(lVar4 + 0x1a2) == '\x01') {
    bVar6 = 0x80;
  }
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 & 0x7f;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | bVar6;
  return __return_storage_ptr__;
}

// RenderThread_RemoveAllSections @ 146c6d590

void __thiscall FMRMeshProxy::RenderThread_RemoveAllSections(FMRMeshProxy *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  TArray<FMRMeshProxySection_*,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong lVar13;
  uint uVar14;
  
  bVar7 = IsInRenderingThread();
  if (((!bVar7) && (bVar7 = IsInRHIThread(), !bVar7)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                         ,0x133,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar11 = (this->ProxySections).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    pTVar12 = &this->ProxySections;
    lVar10 = (longlong)(int)uVar11;
    lVar13 = lVar10 * 8;
    do {
      uVar14 = ~uVar11 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar11 < (this->ProxySections).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)((pTVar12->AllocatorInstance).Data + lVar13);
      (**(code **)(*(longlong *)(lVar3 + 8) + 0x20))(lVar3 + 8);
      (**(code **)(*(longlong *)(lVar3 + 0x38) + 0x20))(lVar3 + 0x38);
      (**(code **)(*(longlong *)(lVar3 + 0x68) + 0x20))(lVar3 + 0x68);
      (**(code **)(*(longlong *)(lVar3 + 0x98) + 0x20))();
      (**(code **)(*(longlong *)(lVar3 + 200) + 0x20))();
      (**(code **)(*(longlong *)(lVar3 + 0xf8) + 0x20))();
      uVar8 = 0;
      if ((int)uVar11 < (this->ProxySections).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pvVar4 = *(void **)((pTVar12->AllocatorInstance).Data + lVar13);
      if (pvVar4 != (void *)0x0) {
        if (*(FRHIResource **)((longlong)pvVar4 + 0x378) != (FRHIResource *)0x0) {
          FRHIResource::Release(*(FRHIResource **)((longlong)pvVar4 + 0x378));
        }
        if (*(FRHIResource **)((longlong)pvVar4 + 0x370) != (FRHIResource *)0x0) {
          FRHIResource::Release(*(FRHIResource **)((longlong)pvVar4 + 0x370));
        }
        if (*(FRHIResource **)((longlong)pvVar4 + 0x368) != (FRHIResource *)0x0) {
          FRHIResource::Release(*(FRHIResource **)((longlong)pvVar4 + 0x368));
        }
        if (*(FRHIResource **)((longlong)pvVar4 + 0x360) != (FRHIResource *)0x0) {
          FRHIResource::Release(*(FRHIResource **)((longlong)pvVar4 + 0x360));
        }
        FLocalVertexFactory::~FLocalVertexFactory((FLocalVertexFactory *)((longlong)pvVar4 + 0xf8));
        FIndexBuffer::~FIndexBuffer((FIndexBuffer *)((longlong)pvVar4 + 200));
        FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar4 + 0x98));
        FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar4 + 0x68));
        FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar4 + 0x38));
        FVertexBuffer::~FVertexBuffer((FVertexBuffer *)((longlong)pvVar4 + 8));
        ::operator_delete(pvVar4,0x380);
      }
      uVar8 = 0;
      if ((int)uVar11 < (this->ProxySections).ArrayNum) {
        uVar8 = uVar14;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar2 = (this->ProxySections).ArrayNum;
      pFVar5 = (pTVar12->AllocatorInstance).Data;
      iVar9 = iVar2 + ~uVar11;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      if (iVar9 != 0) {
        memmove(pFVar5 + lVar10 * 8,pFVar5 + (longlong)(iVar2 - iVar9) * 8,(longlong)iVar9 << 3);
      }
      piVar1 = &(this->ProxySections).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&pTVar12->AllocatorInstance,(this->ProxySections).ArrayNum,
                 &(this->ProxySections).ArrayMax);
      lVar10 = lVar10 + -1;
      lVar13 = lVar13 + -8;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return;
}

// RenderThread_RemoveSection @ 146c6d870

bool __thiscall FMRMeshProxy::RenderThread_RemoveSection(FMRMeshProxy *this,ulong64 param_1)

{
  int *piVar1;
  TArray<FMRMeshProxySection_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FMRMeshProxySection *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  bVar6 = IsInRenderingThread();
  if (((!bVar6) && (bVar6 = IsInRHIThread(), !bVar6)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread() || IsInRHIThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                         ,0x123,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  uVar10 = 0;
  if (0 < (this->ProxySections).ArrayNum) {
    pTVar2 = &this->ProxySections;
    lVar12 = 0;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar10 < (this->ProxySections).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      if (**(ulong64 **)((pTVar2->AllocatorInstance).Data + lVar12) == param_1) {
        uVar8 = 0;
        if ((int)uVar10 < (this->ProxySections).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        lVar13 = (longlong)(int)uVar10;
        lVar12 = *(longlong *)((pTVar2->AllocatorInstance).Data + lVar13 * 8);
        (**(code **)(*(longlong *)(lVar12 + 8) + 0x20))(lVar12 + 8);
        (**(code **)(*(longlong *)(lVar12 + 0x38) + 0x20))(lVar12 + 0x38);
        (**(code **)(*(longlong *)(lVar12 + 0x68) + 0x20))(lVar12 + 0x68);
        (**(code **)(*(longlong *)(lVar12 + 0x98) + 0x20))();
        (**(code **)(*(longlong *)(lVar12 + 200) + 0x20))();
        (**(code **)(*(longlong *)(lVar12 + 0xf8) + 0x20))();
        uVar8 = 0;
        if ((int)uVar10 < (this->ProxySections).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        this_00 = *(FMRMeshProxySection **)((pTVar2->AllocatorInstance).Data + lVar13 * 8);
        if (this_00 != (FMRMeshProxySection *)0x0) {
          FMRMeshProxySection::_scalar_deleting_destructor_(this_00,1);
        }
        uVar8 = 0;
        if ((int)uVar10 < (this->ProxySections).ArrayNum) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar3 = (this->ProxySections).ArrayNum;
        pFVar4 = (pTVar2->AllocatorInstance).Data;
        iVar9 = iVar3 + ~uVar10;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar4 + lVar13 * 8,pFVar4 + (longlong)(iVar3 - iVar9) * 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->ProxySections).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->ProxySections).ArrayNum,
                   &(this->ProxySections).ArrayMax);
        return true;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 8;
    } while ((int)uVar10 < (this->ProxySections).ArrayNum);
  }
  return false;
}

// RenderThread_UploadNewSection @ 146c6db10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FMRMeshProxy::RenderThread_UploadNewSection(FMRMeshProxy *this,FSendBrickDataArgs *param_1)

{
  int *piVar1;
  ulong64 *puVar2;
  TArray<FMRMeshProxySection_*,TSizedDefaultAllocator<32>_> *pTVar3;
  Type TVar4;
  FScriptContainerElement *pFVar5;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar6;
  FRHIResource *pFVar7;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar11;
  code *pcVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  TRefCountPtr<FRHIShaderResourceView> TVar16;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar17;
  FRHIShaderResourceView *pFVar18;
  undefined ***pppuVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_448 [32];
  ulong64 **local_428;
  FScriptContainerElement *local_420;
  longlong local_418;
  longlong local_410;
  undefined8 local_408;
  ulong64 *local_3f8;
  undefined1 local_3f0 [16];
  undefined1 local_3e0 [16];
  undefined1 local_3d0 [12];
  uint uStack_3c4;
  FNameEntryId FStack_3c0;
  ERHIBufferInitAction EStack_3bc;
  wchar_t *local_3b8;
  FName FStack_3b0;
  FNameEntryId local_3a8;
  uint uStack_3a4;
  FName FStack_3a0;
  undefined8 local_398;
  uint local_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  int iStack_384;
  wchar_t *local_380;
  undefined ***pppuStack_378;
  ERHIAccess local_370;
  undefined4 uStack_36c;
  undefined8 uStack_368;
  undefined8 local_360;
  uint local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  int iStack_34c;
  wchar_t *local_348;
  undefined ***pppuStack_340;
  ERHIAccess local_338;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined8 local_328;
  uint local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  int iStack_314;
  wchar_t *local_310;
  undefined ***pppuStack_308;
  ERHIAccess local_300;
  undefined4 uStack_2fc;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  int local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  int iStack_2dc;
  wchar_t *local_2d8;
  undefined ***pppuStack_2d0;
  ERHIAccess local_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0 [16];
  undefined1 local_2a0 [16];
  longlong local_290;
  longlong lStack_288;
  longlong local_280;
  longlong lStack_278;
  longlong local_270;
  longlong lStack_268;
  longlong local_260;
  longlong lStack_258;
  undefined **local_250;
  FScriptContainerElement *local_248;
  uint local_240;
  undefined **local_238;
  FScriptContainerElement *local_230;
  uint local_228;
  undefined **local_220;
  FScriptContainerElement *local_218;
  uint local_210;
  undefined **local_208;
  FScriptContainerElement *local_200;
  uint local_1f8;
  undefined **local_1f0;
  FScriptContainerElement *local_1e8;
  int local_1e0;
  ulonglong local_1d8;
  longlong lStack_1d0;
  wchar_t *local_1c8;
  FName FStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ulonglong local_1a0;
  undefined8 uStack_198;
  wchar_t *local_190;
  undefined ***pppuStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulonglong local_168;
  undefined8 uStack_160;
  wchar_t *local_158;
  undefined ***pppuStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  ulonglong local_130;
  undefined8 uStack_128;
  wchar_t *local_120;
  undefined ***pppuStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  wchar_t *local_e8;
  undefined ***pppuStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  code *local_b8 [2];
  undefined **local_a8;
  ulong64 *puStack_a0;
  ulong64 *local_98;
  undefined ***local_90;
  undefined1 local_88 [16];
  undefined **local_78;
  ulong64 *puStack_70;
  ulong64 *local_68;
  undefined ***local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_448;
  bVar14 = IsInRenderingThread();
  if (!bVar14) {
    bVar14 = IsInRHIThread();
    if (!bVar14) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread() || IsInRHIThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                          ,0xcd,L"");
      if (bVar14) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
  }
  bVar14 = IsInRenderingThread();
  if (!bVar14) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInRenderingThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                        ,0x1594,L"");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  local_3f8 = ::operator_new(0x380);
  if (local_3f8 == (ulong64 *)0x0) {
    local_3f8 = (ulong64 *)0x0;
  }
  else {
    TVar4 = this->FeatureLevel;
    *local_3f8 = param_1->BrickId;
    FVertexBuffer::FVertexBuffer((FVertexBuffer *)(local_3f8 + 1));
    local_3f8[1] = (ulong64)&___7__FMRMeshVertexBuffer_U__TVector_M_Math_UE____6B_;
    *(undefined4 *)(local_3f8 + 6) = 0;
    FVertexBuffer::FVertexBuffer((FVertexBuffer *)(local_3f8 + 7));
    *(undefined4 *)(local_3f8 + 0xc) = 0;
    local_3f8[7] = (ulong64)&___7__FMRMeshVertexBuffer_U__TVector2_N_Math_UE____6B_;
    FVertexBuffer::FVertexBuffer((FVertexBuffer *)(local_3f8 + 0xd));
    *(undefined4 *)(local_3f8 + 0x12) = 0;
    local_3f8[0xd] = (ulong64)&___7__FMRMeshVertexBuffer_UFPackedNormal____6B_;
    FVertexBuffer::FVertexBuffer((FVertexBuffer *)(local_3f8 + 0x13));
    *(undefined4 *)(local_3f8 + 0x18) = 0;
    local_3f8[0x13] = (ulong64)&___7__FMRMeshVertexBuffer_UFColor____6B_;
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)(local_3f8 + 0x19));
    *(undefined4 *)(local_3f8 + 0x1e) = 0;
    local_3f8[0x19] = (ulong64)&___7FMRMeshIndexBuffer__6B_;
    FLocalVertexFactory::FLocalVertexFactory
              ((FLocalVertexFactory *)(local_3f8 + 0x1f),TVar4,"FMRMeshProxySection");
    *(undefined1 *)(local_3f8 + 0x6b) = 0;
    local_3f8[0x6c] = 0;
    local_3f8[0x6d] = 0;
    local_3f8[0x6e] = 0;
    local_3f8[0x6f] = 0;
  }
  pTVar3 = &this->ProxySections;
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_3f8) &&
     (lVar20 = (longlong)(this->ProxySections).ArrayMax,
     (FScriptContainerElement *)&local_3f8 < pFVar5 + lVar20 * 8)) {
    local_410 = (longlong)(this->ProxySections).ArrayNum;
    local_408 = 8;
    local_428 = &local_3f8;
    local_420 = pFVar5;
    local_418 = lVar20;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  iVar15 = (this->ProxySections).ArrayNum;
  piVar1 = &(this->ProxySections).ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->ProxySections).ArrayNum = iVar15 + 1;
  *(ulong64 **)((pTVar3->AllocatorInstance).Data + (longlong)iVar15 * 8) = local_3f8;
  iVar15 = param_1->PositionData->ArrayNum;
  if (iVar15 != param_1->ColorData->ArrayNum) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(NumVerts == Args.ColorData.Num())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                        ,0xd5,L"");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  if (iVar15 != param_1->UVData->ArrayNum) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(NumVerts == Args.UVData.Num())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                        ,0xd6,L"");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  if (iVar15 * 2 != param_1->TangentXZData->ArrayNum) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(NumVerts * 2) == Args.TangentXZData.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MRMeshComponent.cpp"
                        ,0xd7,L"");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  (**(code **)(local_3f8[1] + 0x18))();
  puVar2 = local_3f8;
  pTVar6 = param_1->PositionData;
  *(int *)(local_3f8 + 6) = pTVar6->ArrayNum;
  iVar15 = pTVar6->ArrayNum;
  pFVar5 = (pTVar6->AllocatorInstance).Data;
  if (iVar15 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  local_3a8.Value = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
  uStack_3c4 = 0;
  local_250 = &___7FResourceArrayUploadArrayView__6B_;
  local_3d0._8_4_ = iVar15 * 0xc;
  FStack_3c0.Value = 0x4101;
  EStack_3bc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  local_3b8 = L"FMRMeshVertexBuffer";
  FStack_3b0 = (FName)&local_250;
  local_1d8 = (ulonglong)(uint)local_3d0._8_4_;
  lStack_1d0 = CONCAT44(EStack_3bc,VertexBuffer|ShaderResource|Static);
  FStack_3a0.ComparisonIndex.Value = 0;
  FStack_3a0.Number = 0;
  uStack_3a4 = 2;
  local_1b8 = CONCAT44(2,local_3a8.Value);
  local_398 = 0;
  local_1c8 = L"FMRMeshVertexBuffer";
  local_1a8 = 0;
  uStack_1b0 = 0;
  local_248 = pFVar5;
  local_240 = local_3d0._8_4_;
  FStack_1c0 = FStack_3b0;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHIBufferCreateDesc *)local_3f0);
  local_250 = &___7FResourceArrayUploadInterface__6B_;
  puVar2 = puVar2 + 5;
  if (puVar2 == (ulong64 *)local_3f0) {
LAB_146c6df2e:
    if ((FRHIResource *)local_3f0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_3f0._0_8_);
    }
  }
  else {
    pFVar7 = (FRHIResource *)*puVar2;
    *puVar2 = local_3f0._0_8_;
    local_3f0._0_8_ = (FRHIResource *)0x0;
    if (pFVar7 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar7);
      goto LAB_146c6df2e;
    }
  }
  lStack_288 = 0;
  local_290 = 0x10d00;
  TVar16 = FRHICommandListBase::CreateShaderResourceView
                     ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                      (FRHIBuffer *)local_2b0,(FInitializer *)local_3f8[5]);
  pFVar18 = (FRHIShaderResourceView *)(local_3f8 + 0x6c);
  if (pFVar18 != TVar16.Reference) {
    pFVar7 = *(FRHIResource **)pFVar18;
    *(undefined8 *)pFVar18 = *(undefined8 *)TVar16.Reference;
    *(undefined8 *)TVar16.Reference = 0;
    if (pFVar7 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar7);
    }
  }
  if ((FRHIResource *)local_2b0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_2b0._0_8_);
  }
  (**(code **)(local_3f8[7] + 0x18))();
  puVar2 = local_3f8;
  pTVar8 = param_1->UVData;
  if (pTVar8->ArrayNum != 0) {
    *(int *)(local_3f8 + 0xc) = pTVar8->ArrayNum;
    iVar15 = pTVar8->ArrayNum;
    pFVar5 = (pTVar8->AllocatorInstance).Data;
    if (iVar15 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar14) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    local_370 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
    local_238 = &___7FResourceArrayUploadArrayView__6B_;
    pppuStack_378 = &local_238;
    local_390 = iVar15 << 4;
    iStack_384 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_38c = 0;
    uStack_388 = 0x4101;
    local_1a0 = (ulonglong)local_390;
    uStack_198 = CONCAT44(iStack_384,0x4101);
    local_380 = L"FMRMeshVertexBuffer";
    uStack_368 = 0;
    uStack_36c = 2;
    local_180 = CONCAT44(2,local_370);
    local_360 = 0;
    local_190 = L"FMRMeshVertexBuffer";
    uStack_178 = 0;
    local_170 = 0;
    local_230 = pFVar5;
    local_228 = local_390;
    pppuStack_188 = pppuStack_378;
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (FRHIBufferCreateDesc *)(local_3f0 + 8));
    local_238 = &___7FResourceArrayUploadInterface__6B_;
    puVar2 = puVar2 + 0xb;
    if (puVar2 == (ulong64 *)(local_3f0 + 8)) {
LAB_146c6e0f7:
      if ((FRHIResource *)local_3f0._8_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_3f0._8_8_);
      }
    }
    else {
      pFVar7 = (FRHIResource *)*puVar2;
      *puVar2 = local_3f0._8_8_;
      local_3f0._8_8_ = (FRHIResource *)0x0;
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
        goto LAB_146c6e0f7;
      }
    }
    lStack_278 = 0;
    local_280 = 0x11100;
    TVar16 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                        (FRHIBuffer *)(local_2b0 + 8),(FInitializer *)local_3f8[0xb]);
    pFVar18 = (FRHIShaderResourceView *)(local_3f8 + 0x6d);
    if (pFVar18 != TVar16.Reference) {
      pFVar7 = *(FRHIResource **)pFVar18;
      *(undefined8 *)pFVar18 = *(undefined8 *)TVar16.Reference;
      *(undefined8 *)TVar16.Reference = 0;
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
      }
    }
    if ((FRHIResource *)local_2b0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2b0._8_8_);
    }
  }
  (**(code **)(local_3f8[0xd] + 0x18))();
  puVar2 = local_3f8;
  pTVar9 = param_1->TangentXZData;
  if (pTVar9->ArrayNum != 0) {
    *(int *)(local_3f8 + 0x12) = pTVar9->ArrayNum;
    iVar15 = pTVar9->ArrayNum;
    pFVar5 = (pTVar9->AllocatorInstance).Data;
    if (iVar15 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar14) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    local_338 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
    local_220 = &___7FResourceArrayUploadArrayView__6B_;
    pppuStack_340 = &local_220;
    local_358 = iVar15 * 4;
    iStack_34c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    uStack_354 = 0;
    uStack_350 = 0x4101;
    local_168 = (ulonglong)local_358;
    uStack_160 = CONCAT44(iStack_34c,0x4101);
    local_348 = L"FMRMeshVertexBuffer";
    uStack_330 = 0;
    uStack_334 = 2;
    local_148 = CONCAT44(2,local_338);
    local_328 = 0;
    local_158 = L"FMRMeshVertexBuffer";
    uStack_140 = 0;
    local_138 = 0;
    local_218 = pFVar5;
    local_210 = local_358;
    pppuStack_150 = pppuStack_340;
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (FRHIBufferCreateDesc *)local_3e0);
    local_220 = &___7FResourceArrayUploadInterface__6B_;
    puVar2 = puVar2 + 0x11;
    if (puVar2 != (ulong64 *)local_3e0) {
      pFVar7 = (FRHIResource *)*puVar2;
      *puVar2 = local_3e0._0_8_;
      local_3e0._0_8_ = (FRHIResource *)0x0;
      if (pFVar7 == (FRHIResource *)0x0) goto LAB_146c6e2d9;
      FRHIResource::Release(pFVar7);
    }
    if ((FRHIResource *)local_3e0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_3e0._0_8_);
    }
  }
LAB_146c6e2d9:
  uVar21 = (ulonglong)GMaxRHIShaderPlatform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar21].bContainsValidPlatformInfo == 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid(Platform)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                        ,0x2ce,L"");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar21].bSupportsManualVertexFetch != 0) {
    lStack_268 = 0;
    local_270 = 0x13d00;
    TVar16 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                        (FRHIBuffer *)local_2a0,(FInitializer *)local_3f8[0x11]);
    pFVar18 = (FRHIShaderResourceView *)(local_3f8 + 0x6e);
    if (pFVar18 != TVar16.Reference) {
      pFVar7 = *(FRHIResource **)pFVar18;
      *(undefined8 *)pFVar18 = *(undefined8 *)TVar16.Reference;
      *(undefined8 *)TVar16.Reference = 0;
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
      }
    }
    if ((FRHIResource *)local_2a0._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2a0._0_8_);
    }
  }
  (**(code **)(local_3f8[0x13] + 0x18))();
  puVar2 = local_3f8;
  pTVar10 = param_1->ColorData;
  if (pTVar10->ArrayNum != 0) {
    *(int *)(local_3f8 + 0x18) = pTVar10->ArrayNum;
    iVar15 = pTVar10->ArrayNum;
    pFVar5 = (pTVar10->AllocatorInstance).Data;
    if (iVar15 < 0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar14) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    local_300 = RHIGetDefaultResourceState(VertexBuffer|ShaderResource|Static,false);
    local_208 = &___7FResourceArrayUploadArrayView__6B_;
    pppuStack_308 = &local_208;
    local_320 = iVar15 * 4;
    iStack_314 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_310 = L"FMRMeshVertexBuffer";
    uStack_31c = 0;
    local_120 = L"FMRMeshVertexBuffer";
    uStack_318 = 0x4101;
    local_130 = (ulonglong)local_320;
    uStack_128 = CONCAT44(iStack_314,0x4101);
    uStack_2f8 = 0;
    uStack_2fc = 2;
    local_2f0 = 0;
    local_110 = CONCAT44(2,local_300);
    uStack_108 = 0;
    local_100 = 0;
    local_200 = pFVar5;
    local_1f8 = local_320;
    pppuStack_118 = pppuStack_308;
    FRHICommandListBase::CreateBuffer
              ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
               (FRHIBufferCreateDesc *)(local_3e0 + 8));
    local_208 = &___7FResourceArrayUploadInterface__6B_;
    puVar2 = puVar2 + 0x17;
    if (puVar2 == (ulong64 *)(local_3e0 + 8)) {
LAB_146c6e4fc:
      if ((FRHIResource *)local_3e0._8_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_3e0._8_8_);
      }
    }
    else {
      pFVar7 = (FRHIResource *)*puVar2;
      *puVar2 = local_3e0._8_8_;
      local_3e0._8_8_ = (FRHIResource *)0x0;
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
        goto LAB_146c6e4fc;
      }
    }
    lStack_258 = 0;
    local_260 = 0x12500;
    TVar16 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
                        (FRHIBuffer *)(local_2a0 + 8),(FInitializer *)local_3f8[0x17]);
    pFVar18 = (FRHIShaderResourceView *)(local_3f8 + 0x6f);
    if (pFVar18 != TVar16.Reference) {
      pFVar7 = *(FRHIResource **)pFVar18;
      *(undefined8 *)pFVar18 = *(undefined8 *)TVar16.Reference;
      *(undefined8 *)TVar16.Reference = 0;
      if (pFVar7 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar7);
      }
    }
    if ((FRHIResource *)local_2a0._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_2a0._8_8_);
    }
  }
  (**(code **)(local_3f8[0x19] + 0x18))();
  puVar2 = local_3f8;
  pTVar11 = param_1->Indices;
  *(int *)(local_3f8 + 0x1e) = pTVar11->ArrayNum;
  iVar15 = pTVar11->ArrayNum;
  pFVar5 = (pTVar11->AllocatorInstance).Data;
  if (iVar15 < 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InCount >= 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                        ,0xeb,L"");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  local_2c8 = RHIGetDefaultResourceState(IndexBuffer|Static,false);
  local_1f0 = &___7FResourceArrayUploadArrayView__6B_;
  pppuStack_2d0 = &local_1f0;
  local_2e8 = iVar15 * 4;
  local_2d8 = L"FMRMeshIndexBuffer";
  iStack_2dc = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  uStack_2e4 = 4;
  local_e8 = L"FMRMeshIndexBuffer";
  uStack_2e0 = 0x8001;
  local_f8 = CONCAT44(4,local_2e8);
  uStack_f0 = CONCAT44(iStack_2dc,0x8001);
  uStack_2c0 = 0;
  uStack_2c4 = 2;
  local_2b8 = 0;
  local_d8 = CONCAT44(2,local_2c8);
  uStack_d0 = 0;
  local_c8 = 0;
  local_1e8 = pFVar5;
  local_1e0 = local_2e8;
  pppuStack_e0 = pppuStack_2d0;
  FRHICommandListBase::CreateBuffer
            ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,
             (FRHIBufferCreateDesc *)local_3d0);
  local_1f0 = &___7FResourceArrayUploadInterface__6B_;
  puVar2 = puVar2 + 0x1d;
  if (puVar2 != (ulong64 *)local_3d0) {
    pFVar7 = (FRHIResource *)*puVar2;
    *puVar2 = local_3d0._0_8_;
    local_3d0._0_8_ = (FRHIResource *)0x0;
    if (pFVar7 == (FRHIResource *)0x0) goto LAB_146c6e6fb;
    FRHIResource::Release(pFVar7);
  }
  if ((FRHIResource *)local_3d0._0_8_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)local_3d0._0_8_);
  }
LAB_146c6e6fb:
  local_a8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`InitVertexFactory'::`2'::<lambda_1>,1,0>::_vftable_;
  local_90 = (undefined ***)0x0;
  local_98 = local_3f8;
  puStack_a0 = local_3f8 + 0x1f;
  local_b8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`InitVertexFactory'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_InitVertexFactory_::__l2::TSTR_InitMrMeshVertexFactory134>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_78 = local_a8;
    puStack_70 = puStack_a0;
    local_68 = local_98;
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar17 = (FRenderCommandTag *)
              TRenderCommandTag<`InitVertexFactory'::__l2::TSTR_InitMrMeshVertexFactory134>::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar17);
    uVar21 = (ulonglong)local_58;
    if (2 < uVar21) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L"");
      if (bVar14) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        pppuVar19 = (undefined ***)(local_88 + 0x10);
        if (local_60 != (undefined ***)0x0) {
          pppuVar19 = local_60;
        }
        (*(code *)(*pppuVar19)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar21])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    pppuVar19 = &local_a8;
    if (local_90 != (undefined ***)0x0) {
      pppuVar19 = local_90;
    }
    (*(code *)(*pppuVar19)[2])();
  }
  dVar13 = (param_1->Bounds).Min.field0_0x0._s_0.Y;
  local_3f8[0x65] = (ulong64)(param_1->Bounds).Min.field0_0x0._s_0.X;
  local_3f8[0x66] = (ulong64)dVar13;
  dVar13 = (param_1->Bounds).Max.field0_0x0._s_0.X;
  local_3f8[0x67] = (ulong64)(param_1->Bounds).Min.field0_0x0._s_0.Z;
  local_3f8[0x68] = (ulong64)dVar13;
  dVar13 = (param_1->Bounds).Max.field0_0x0._s_0.Z;
  local_3f8[0x69] = (ulong64)(param_1->Bounds).Max.field0_0x0._s_0.Y;
  local_3f8[0x6a] = (ulong64)dVar13;
  local_3f8[0x6b] = *(ulong64 *)&(param_1->Bounds).IsValid;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->BrickDataReceipt).SharedReferenceCount.ReferenceController);
  return;
}

