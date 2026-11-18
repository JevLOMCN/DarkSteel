// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 8

// FTriangleSetSceneProxy @ 14caca980

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

FTriangleSetSceneProxy * __thiscall
FTriangleSetSceneProxy::FTriangleSetSceneProxy
          (FTriangleSetSceneProxy *this,UTriangleSetComponent *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FTriangleSetMeshBatchData,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined8 *puVar4;
  uchar *puVar5;
  ushort *puVar6;
  undefined1 *puVar7;
  double dVar8;
  double dVar9;
  code *pcVar10;
  FScriptContainerElement *pFVar11;
  uchar *puVar12;
  FCommandList *pFVar13;
  longlong *plVar14;
  TMap<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
  *pTVar15;
  bool bVar16;
  EShaderPlatform EVar17;
  uint uVar18;
  int iVar19;
  FTriangleSetSceneProxy *pFVar20;
  longlong lVar21;
  undefined8 uVar22;
  FRenderCommandList *this_00;
  FRenderCommandTag *pFVar23;
  byte bVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined ***pppuVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  undefined1 *puVar31;
  ForElementType<unsigned_int> FVar32;
  TBitArray<FDefaultBitArrayAllocator> *pTVar33;
  uint uVar34;
  uint *puVar35;
  uint uVar36;
  longlong lVar37;
  longlong *plVar38;
  float fVar39;
  float fVar40;
  undefined1 auStackY_368 [32];
  <lambda_1> local_328 [4];
  uint local_324;
  uint local_320;
  undefined1 local_31c [2];
  ushort local_31a;
  ushort local_318;
  ushort local_316;
  ushort local_314;
  ushort local_312;
  ushort local_310 [2];
  uint local_30c;
  ForElementType<unsigned_int> local_308;
  uint local_300;
  uint uStack_2fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2f8;
  uint local_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  undefined4 uStack_2e4;
  longlong local_2e0;
  int local_2d8;
  uint uStack_2d4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2d0;
  undefined4 local_2c8;
  int iStack_2c4;
  int iStack_2c0;
  undefined4 uStack_2bc;
  TMap<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
  *local_2b8;
  undefined8 uStack_2b0;
  TBitArray<FDefaultBitArrayAllocator> *local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  int iStack_290;
  undefined4 uStack_28c;
  longlong local_288;
  undefined8 local_280;
  float local_278;
  float fStack_274;
  float local_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  TVector<float>_u_0 local_258;
  TVector<float>_u_0 local_248;
  TVector<float>_u_0 local_238;
  TVector<float>_u_0 local_228;
  TVector<float>_u_0 local_218;
  TVector<float>_u_0 local_208;
  TVector<float>_u_0 local_1f8;
  TVector<float>_u_0 local_1e8;
  TVector<float>_u_0 local_1d8;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1c0;
  int local_1a0;
  int local_198;
  TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>
  *local_190;
  longlong *local_188;
  int local_180;
  int local_17c;
  int local_178;
  TMap<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
  *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  longlong *local_140;
  undefined8 uStack_138;
  TMap<UMaterialInterface_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface_*,int,0>_>
  *local_130;
  undefined8 uStack_128;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_e4;
  code *local_d8 [2];
  undefined **local_c8;
  FTriangleSetSceneProxy *pFStack_c0;
  undefined8 local_b8;
  undefined ***local_b0;
  undefined1 local_a8 [16];
  undefined **local_98;
  FTriangleSetSceneProxy *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  byte local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_368;
  iVar30 = 0;
  local_280 = 0;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->_padding_ = (longlong)&___7FTriangleSetSceneProxy__6B_;
  (this->MeshBatchDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshBatchDatas).ArrayNum = 0;
  (this->MeshBatchDatas).ArrayMax = 0;
  pcVar10 = *(code **)(param_1->_padding_ + 0xaa8);
  EVar17 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  (*pcVar10)(param_1,&this->MaterialRelevance,EVar17);
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(this->_padding_ + 8),"FTriangleSetSceneProxy");
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  local_190 = &param_1->TrianglesByMaterial;
  uVar18 = Algo::
           Accumulate<int,TSparseArray<TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>,FDefaultSparseArrayAllocator>,_FTriangleSetSceneProxy::FTriangleSetSceneProxy_::__l2::<lambda_1>_>
                     (local_190,0,local_328[0]);
  FPositionVertexBuffer::Init(&(this->VertexBuffers).PositionVertexBuffer,uVar18,true);
  FStaticMeshVertexBuffer::Init(&(this->VertexBuffers).StaticMeshVertexBuffer,uVar18,1,true);
  FColorVertexBuffer::Init(&(this->VertexBuffers).ColorVertexBuffer,uVar18,true);
  pTVar2 = &(this->IndexBuffer).Indices;
  iVar19 = (this->IndexBuffer).Indices.ArrayNum;
  piVar1 = &(this->IndexBuffer).Indices.ArrayNum;
  if (iVar19 < (int)uVar18) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar18 - iVar19,&pTVar2->AllocatorInstance,piVar1,
               &(this->IndexBuffer).Indices.ArrayMax);
  }
  else {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if ((int)uVar18 < iVar19) {
      uVar28 = iVar19 - uVar18;
      if (((int)(uVar28 | uVar18) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar10 = (code *)swi(3);
        pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
        return pFVar20;
      }
      if (uVar28 != 0) {
        pFVar11 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 4;
        iVar19 = (*piVar1 - uVar28) - uVar18;
        if (iVar19 != 0) {
          memmove(pFVar11,pFVar11 + (longlong)(int)uVar28 * 4,(longlong)iVar19 << 2);
        }
        *piVar1 = *piVar1 - uVar28;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar2->AllocatorInstance,*piVar1,&(this->IndexBuffer).Indices.ArrayMax);
      }
    }
  }
  puVar7 = &(param_1->MaterialToIndex).field_0x10;
  iVar19 = *(int *)&(param_1->MaterialToIndex).field_0x28;
  local_2b8 = &param_1->MaterialToIndex;
  local_324 = 0;
  uVar18 = 1;
  local_30c = 0;
  local_298._0_4_ = 0;
  uStack_2a0._4_4_ = (int)local_298;
  if (iVar19 != 0) {
    puVar35 = *(uint **)&(param_1->MaterialToIndex).field_0x20;
    if (puVar35 == (uint *)0x0) {
      puVar35 = (uint *)puVar7;
    }
    uVar28 = *puVar35;
    local_298._0_4_ = 0;
    iVar30 = 0;
    while (uVar28 == 0) {
      lVar25 = (longlong)iVar30;
      local_298._0_4_ = (int)local_298 + 0x20;
      iVar30 = iVar30 + 1;
      uStack_2a0._4_4_ = iVar19;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar30) goto LAB_14cacac30;
      uVar28 = puVar35[lVar25 + 1];
    }
    uVar18 = -uVar28 & uVar28;
    uVar26 = (ulonglong)uVar18 * 2 + 1;
    lVar25 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_198 = (int)lVar25;
    uStack_2a0._4_4_ = local_198 + -1 + (int)local_298;
    if (iVar19 < uStack_2a0._4_4_) {
      uStack_2a0._4_4_ = iVar19;
    }
  }
LAB_14cacac30:
  uVar28 = *(uint *)&(param_1->MaterialToIndex).field_0x28;
  bVar24 = (byte)uVar28 & 0x1f;
  iStack_290 = *(int *)&(param_1->MaterialToIndex).field_0x8 -
               *(int *)&(param_1->MaterialToIndex).field_0x34;
  uVar29 = uVar28 & 0xffffffe0;
  uVar34 = (int)uVar28 >> 5;
  uStack_2fc = 1 << bVar24;
  uVar36 = -1 << bVar24;
  uStack_2b0 = CONCAT44(uVar18,iVar30);
  uStack_2a0._0_4_ = 0xffffffff;
  local_298._4_4_ = local_e4;
  TStack_168._padding_ = uStack_2b0;
  uStack_148 = CONCAT44(uStack_28c,iStack_290);
  TStack_168.UnvisitedBitMask = 0xffffffff;
  TStack_168.CurrentBitIndex = uStack_2a0._4_4_;
  TStack_168.BaseBitIndex = (int)local_298;
  TStack_168._28_4_ = local_e4;
  local_320 = uVar34;
  local_300 = uVar34;
  pTStack_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
  local_2f0 = uVar36;
  uStack_2ec = uVar28;
  uStack_2e8 = uVar29;
  local_170 = local_2b8;
  TStack_168.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar7;
  if ((((int)uVar28 < 0) || (iVar19 < (int)uVar28)) &&
     (local_2a8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar7,
     bVar16 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
    return pFVar20;
  }
  uVar18 = *(uint *)&(param_1->MaterialToIndex).field_0x28;
  if (uVar28 != uVar18) {
    puVar31 = *(undefined1 **)&(param_1->MaterialToIndex).field_0x20;
    if (puVar31 == (undefined1 *)0x0) {
      puVar31 = puVar7;
    }
    uVar36 = uVar36 & *(uint *)(puVar31 + (longlong)(int)uVar34 * 4);
    while (uVar36 == 0) {
      uStack_2e8 = uVar29 + 0x20;
      local_300 = uVar34 + 1;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_300)
      goto LAB_14cacada2;
      uVar36 = *(uint *)(puVar31 + (longlong)(int)uVar34 * 4 + 4);
      local_2f0 = 0xffffffff;
      uVar29 = uStack_2e8;
      uVar34 = local_300;
    }
    uStack_2fc = -uVar36 & uVar36;
    uVar26 = (ulonglong)uStack_2fc * 2 + 1;
    lVar25 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_178 = (int)lVar25;
    uStack_2ec = local_178 + -1 + uVar29;
    if ((int)uVar18 < (int)uStack_2ec) {
LAB_14cacada2:
      uStack_2ec = uVar18;
    }
  }
  uStack_2b0 = CONCAT44(uStack_2fc,local_300);
  local_2b8 = &param_1->MaterialToIndex;
  uStack_2a0 = CONCAT44(uStack_2ec,local_2f0);
  local_298 = CONCAT44(uStack_2e4,uStack_2e8);
  iStack_290 = *(int *)&(param_1->MaterialToIndex).field_0x8 -
               *(int *)&(param_1->MaterialToIndex).field_0x34;
  local_2a8 = pTStack_2f8;
  local_2e0 = 0;
  uStack_108 = CONCAT44(uStack_28c,iStack_290);
  local_120 = pTStack_2f8;
  local_130 = local_2b8;
  uStack_128 = uStack_2b0;
  uStack_118 = uStack_2a0;
  local_110 = local_298;
  do {
    pTVar15 = local_170;
    if (*(int *)&local_170->field_0x8 - *(int *)&local_170->field_0x34 != (int)uStack_148) {
      local_31c[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UMaterialInterface_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_31c);
    }
    if (((TStack_168.CurrentBitIndex == uStack_118._4_4_) && (TStack_168.Array == local_120)) &&
       (pTVar15 == local_130)) {
      local_b0 = (undefined ***)0x0;
      local_c8 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__1___0FTriangleSetSceneProxy__QEAA_PEAVUTriangleSetComponent___Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_d8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FTriangleSetSceneProxy::FTriangleSetSceneProxy'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_c0 = this;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FTriangleSetSceneProxy::FTriangleSetSceneProxy_::__l2::TSTR_LineSetVertexBuffersInit101>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
      }
      else {
        if (this_00->bInitialized == 0) {
          FRenderCommandList::Init(this_00);
        }
        iVar19 = (this_00->CommandLists).ArrayNum;
        uVar28 = iVar19 - 1;
        uVar18 = 0;
        if ((int)uVar28 < iVar19) {
          uVar18 = ~uVar28 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
          return pFVar20;
        }
        iVar19 = (this_00->CommandLists).ArrayNum;
        local_98 = local_c8;
        pFStack_90 = pFStack_c0;
        local_88 = local_b8;
        local_78 = 2;
        pFVar13 = (this_00->CommandLists).AllocatorInstance.Data;
        local_a8._0_8_ = local_d8[0];
        local_80 = local_b0;
        local_d8[0] = (code *)0x0;
        pFVar23 = (FRenderCommandTag *)
                  TRenderCommandTag<`FTriangleSetSceneProxy::FTriangleSetSceneProxy'::__l2::TSTR_LineSetVertexBuffersInit101>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar13 + (iVar19 + -1),
                   (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    *)local_a8,pFVar23);
        uVar26 = (ulonglong)local_78;
        if ((2 < uVar26) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar16)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
          return pFVar20;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar26] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_a8._0_8_ != (code *)0x0) {
            pppuVar27 = (undefined ***)(local_a8 + 0x10);
            if (local_80 != (undefined ***)0x0) {
              pppuVar27 = local_80;
            }
            (*(code *)(*pppuVar27)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar26])(local_a8);
        }
      }
      if (local_d8[0] != (code *)0x0) {
        pppuVar27 = &local_c8;
        if (local_b0 != (undefined ***)0x0) {
          pppuVar27 = local_b0;
        }
        (*(code *)(*pppuVar27)[2])();
      }
      return this;
    }
    puVar4 = (undefined8 *)(*(longlong *)pTVar15 + (longlong)TStack_168.CurrentBitIndex * 0x18);
    plVar14 = (longlong *)*puVar4;
    uStack_138 = puVar4[1];
    local_140 = plVar14;
    if (plVar14 != (longlong *)0x0) {
      pTVar3 = &this->MeshBatchDatas;
      iVar19 = (this->MeshBatchDatas).ArrayNum;
      plVar38 = (longlong *)((longlong)(int)uStack_138 * 0x38 + *(longlong *)local_190);
      local_188 = plVar38;
      if (iVar19 == (this->MeshBatchDatas).ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar3->AllocatorInstance,&(this->MeshBatchDatas).ArrayMax);
      }
      (this->MeshBatchDatas).ArrayNum = iVar19 + 1;
      *(undefined8 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 0x18) = 0;
      iVar19 = (this->MeshBatchDatas).ArrayNum;
      uVar28 = iVar19 - 1;
      uVar18 = 0;
      if ((int)uVar28 < iVar19) {
        uVar18 = ~uVar28 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar10 = (code *)swi(3);
        pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
        return pFVar20;
      }
      uVar18 = local_30c;
      lVar21 = (longlong)(this->MeshBatchDatas).ArrayNum;
      pFVar11 = (pTVar3->AllocatorInstance).Data;
      *(uint *)(pFVar11 + lVar21 * 0x18 + -8) = local_324;
      lVar25 = plVar38[1];
      iVar19 = *(int *)((longlong)plVar38 + 0x34);
      *(uint *)(pFVar11 + lVar21 * 0x18 + -0x10) = local_30c;
      *(uint *)(pFVar11 + lVar21 * 0x18 + -4) = local_324 + ((int)lVar25 - iVar19) * 3 + -1;
      *(int *)(pFVar11 + lVar21 * 0x18 + -0xc) =
           (int)plVar38[1] - *(int *)((longlong)plVar38 + 0x34);
      uVar22 = (**(code **)(*plVar14 + 0x310))(plVar14);
      pTStack_2d0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar38 + 2);
      uStack_2d4 = 1;
      *(undefined8 *)(pFVar11 + lVar21 * 0x18 + -0x18) = uVar22;
      iVar19 = (int)plVar38[5];
      local_2d8 = 0;
      iStack_2c4 = 0;
      iStack_2c0 = 0;
      if (iVar19 != 0) {
        pTVar33 = pTStack_2d0;
        if ((TBitArray<FDefaultBitArrayAllocator> *)plVar38[4] !=
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar33 = (TBitArray<FDefaultBitArrayAllocator> *)plVar38[4];
        }
        uVar28 = *(uint *)(pTVar33->AllocatorInstance).InlineData;
        while (uVar28 == 0) {
          iStack_2c0 = iStack_2c0 + 0x20;
          lVar25 = (longlong)local_2d8;
          local_2d8 = local_2d8 + 1;
          if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < local_2d8)
          goto LAB_14cacb00e;
          uVar28 = *(uint *)((pTVar33->AllocatorInstance).InlineData + lVar25 * 4 + 4);
        }
        uStack_2d4 = -uVar28 & uVar28;
        uVar26 = (ulonglong)uStack_2d4 * 2 + 1;
        lVar25 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_17c = (int)lVar25;
        iStack_2c4 = iStack_2c0 + -1 + local_17c;
        if (iVar19 < iStack_2c4) {
LAB_14cacb00e:
          iStack_2c4 = iVar19;
        }
      }
      local_2c8 = 0xffffffff;
      local_320 = *(uint *)(plVar38 + 5);
      local_1a0 = (int)plVar38[1] - *(int *)((longlong)plVar38 + 0x34);
      local_1c0._padding_ = CONCAT44(uStack_2d4,local_2d8);
      local_308 = (ForElementType<unsigned_int>)(plVar38 + 2);
      local_1c0.CurrentBitIndex = iStack_2c4;
      local_1c0.UnvisitedBitMask = 0xffffffff;
      local_1c0._28_4_ = uStack_2bc;
      local_1c0.BaseBitIndex = iStack_2c0;
      uVar28 = local_320 & 0xffffffe0;
      iVar30 = (int)local_320 >> 5;
      bVar24 = (byte)local_320;
      local_1c8 = plVar38;
      local_1c0.Array = pTStack_2d0;
      if ((((int)local_320 < 0) || (iVar19 < (int)local_320)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar16)) {
        pcVar10 = (code *)swi(3);
        pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
        return pFVar20;
      }
      uVar36 = *(int *)((longlong)local_308 + 0x18);
      if (local_320 != uVar36) {
        FVar32 = local_308;
        if (*(ForElementType<unsigned_int> *)((longlong)local_308 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar32 = *(ForElementType<unsigned_int> *)((longlong)local_308 + 0x10);
        }
        uVar29 = -1 << (bVar24 & 0x1f) & *(uint *)((longlong)FVar32 + (longlong)iVar30 * 4);
        while (uVar29 == 0) {
          lVar25 = (longlong)iVar30;
          uVar28 = uVar28 + 0x20;
          iVar30 = iVar30 + 1;
          local_320 = uVar36;
          if ((int)((uVar36 - 1) + ((int)(uVar36 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar30)
          goto LAB_14cacb126;
          uVar29 = *(uint *)((longlong)FVar32 + 4 + lVar25 * 4);
        }
        uVar26 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
        lVar25 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar25 == 0; lVar25 = lVar25 + -1) {
          }
        }
        local_180 = (int)lVar25;
        local_320 = (uVar28 - 1) + local_180;
        if ((int)uVar36 < (int)local_320) {
          local_320 = uVar36;
        }
      }
LAB_14cacb126:
      uVar18 = uVar18 + 2;
      local_288 = local_2e0 * 4 + 8;
      uVar28 = local_324 + 2;
      uVar36 = local_324;
      while( true ) {
        if ((int)plVar38[1] - *(int *)((longlong)plVar38 + 0x34) != local_1a0) {
          local_328[0] = (<lambda_1>)0x0;
          `TSparseArray<FRenderableTriangle,FDefaultSparseArrayAllocator>::TRangedForConstIterator::
          operator!='::__l2::<lambda_1>::operator()(local_328);
          uVar36 = local_324;
        }
        if (((local_1c0.CurrentBitIndex == local_320) &&
            ((ForElementType<unsigned_int>)local_1c0.Array == local_308)) && (plVar38 == local_188))
        break;
        lVar25 = *plVar38;
        lVar37 = (longlong)local_1c0.CurrentBitIndex * 0xe0;
        puVar12 = (this->VertexBuffers).PositionVertexBuffer.Data;
        uVar26 = (ulonglong)(uVar36 * (this->VertexBuffers).PositionVertexBuffer.Stride);
        dVar8 = *(double *)(lVar37 + 0x10 + lVar25);
        dVar9 = *(double *)(lVar37 + 0x18 + lVar25);
        *(float *)(puVar12 + uVar26) = (float)*(double *)(lVar37 + 8 + lVar25);
        *(float *)(puVar12 + uVar26 + 4) = (float)dVar8;
        *(float *)(puVar12 + uVar26 + 8) = (float)dVar9;
        uVar26 = (ulonglong)((uVar28 - 1) * (this->VertexBuffers).PositionVertexBuffer.Stride);
        dVar8 = *(double *)(lVar37 + 0x58 + lVar25);
        dVar9 = *(double *)(lVar37 + 0x60 + lVar25);
        puVar12 = (this->VertexBuffers).PositionVertexBuffer.Data;
        *(float *)(puVar12 + uVar26) = (float)*(double *)(lVar37 + 0x50 + lVar25);
        *(float *)(puVar12 + uVar26 + 4) = (float)dVar8;
        *(float *)(puVar12 + uVar26 + 8) = (float)dVar9;
        uVar26 = (ulonglong)(uVar28 * (this->VertexBuffers).PositionVertexBuffer.Stride);
        dVar8 = *(double *)(lVar37 + 0xa0 + lVar25);
        dVar9 = *(double *)(lVar37 + 0xa8 + lVar25);
        puVar12 = (this->VertexBuffers).PositionVertexBuffer.Data;
        *(float *)(puVar12 + uVar26) = (float)*(double *)(lVar37 + 0x98 + lVar25);
        *(float *)(puVar12 + uVar26 + 4) = (float)dVar8;
        *(float *)(puVar12 + uVar26 + 8) = (float)dVar9;
        local_258._s_0.X = (float)*(double *)(lVar37 + 0x30 + lVar25);
        local_248._s_0.X = 0.0;
        local_248._4_8_ = 0x3f800000;
        local_238._0_8_ = 0x3f800000;
        local_238._s_0.Z = 0.0;
        local_258._s_0.Y = (float)*(double *)(lVar37 + 0x38 + lVar25);
        local_258._s_0.Z = (float)*(double *)(lVar37 + 0x40 + lVar25);
        FStaticMeshVertexBuffer::SetVertexTangents
                  (&(this->VertexBuffers).StaticMeshVertexBuffer,uVar36,
                   (TVector<float> *)&local_238._s_0,(TVector<float> *)&local_248._s_0,
                   (TVector<float> *)&local_258._s_0);
        local_228._s_0.X = (float)*(double *)(lVar37 + 0x78 + lVar25);
        local_218._s_0.X = 0.0;
        local_218._4_8_ = 0x3f800000;
        local_208._0_8_ = 0x3f800000;
        local_208._s_0.Z = 0.0;
        local_228._s_0.Y = (float)*(double *)(lVar37 + 0x80 + lVar25);
        local_228._s_0.Z = (float)*(double *)(lVar37 + 0x88 + lVar25);
        FStaticMeshVertexBuffer::SetVertexTangents
                  (&(this->VertexBuffers).StaticMeshVertexBuffer,uVar28 - 1,
                   (TVector<float> *)&local_208._s_0,(TVector<float> *)&local_218._s_0,
                   (TVector<float> *)&local_228._s_0);
        local_1f8._s_0.X = (float)*(double *)(lVar37 + 0xc0 + lVar25);
        local_1f8._s_0.Z = (float)*(double *)(lVar37 + 0xd0 + lVar25);
        local_1e8._s_0.X = 0.0;
        local_1e8._4_8_ = 0x3f800000;
        local_1d8._0_8_ = 0x3f800000;
        local_1d8._s_0.Z = 0.0;
        local_1f8._s_0.Y = (float)*(double *)(lVar37 + 200 + lVar25);
        FStaticMeshVertexBuffer::SetVertexTangents
                  (&(this->VertexBuffers).StaticMeshVertexBuffer,uVar28,
                   (TVector<float> *)&local_1d8._s_0,(TVector<float> *)&local_1e8._s_0,
                   (TVector<float> *)&local_1f8._s_0);
        puVar12 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
        lVar21 = (ulonglong)(this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                 (ulonglong)local_324;
        fVar39 = (float)*(double *)(lVar37 + 0x20 + lVar25);
        fVar40 = (float)*(double *)(lVar37 + 0x28 + lVar25);
        pcVar10 = *(code **)((longlong)*(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                            0x50);
        local_278 = fVar39;
        fStack_274 = fVar40;
        if ((this->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
          puVar6 = (ushort *)(puVar12 + lVar21 * 4);
          lVar21 = (*pcVar10)();
          if ((puVar12 + lVar21 < puVar6 + 2) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x166,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          if ((puVar6 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x167,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          local_31a = 0;
          FGenericPlatformMath::StoreHalf(&local_31a,fVar39);
          *puVar6 = local_31a;
          local_318 = 0;
          FGenericPlatformMath::StoreHalf(&local_318,fVar40);
          puVar6[1] = local_318;
        }
        else {
          puVar5 = puVar12 + lVar21 * 8;
          lVar21 = (*pcVar10)();
          if ((puVar12 + lVar21 < puVar5 + 8) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15d,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          if ((puVar5 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15e,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          *(ulonglong *)puVar5 = CONCAT44(fStack_274,local_278);
        }
        puVar12 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
        lVar21 = (ulonglong)(this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                 (ulonglong)(uVar28 - 1);
        fVar39 = (float)*(double *)(lVar37 + 0x68 + lVar25);
        fVar40 = (float)*(double *)(lVar37 + 0x70 + lVar25);
        pcVar10 = *(code **)((longlong)*(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                            0x50);
        local_270 = fVar39;
        fStack_26c = fVar40;
        if ((this->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
          puVar6 = (ushort *)(puVar12 + lVar21 * 4);
          lVar21 = (*pcVar10)();
          if ((puVar12 + lVar21 < puVar6 + 2) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x166,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          if ((puVar6 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x167,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          local_316 = 0;
          FGenericPlatformMath::StoreHalf(&local_316,fVar39);
          *puVar6 = local_316;
          local_314 = 0;
          FGenericPlatformMath::StoreHalf(&local_314,fVar40);
          puVar6[1] = local_314;
        }
        else {
          puVar5 = puVar12 + lVar21 * 8;
          lVar21 = (*pcVar10)();
          if ((puVar12 + lVar21 < puVar5 + 8) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15d,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          if ((puVar5 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15e,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          *(ulonglong *)puVar5 = CONCAT44(fStack_26c,local_270);
        }
        puVar12 = (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr;
        lVar21 = (ulonglong)(this->VertexBuffers).StaticMeshVertexBuffer.NumTexCoords *
                 (ulonglong)uVar28;
        fVar39 = (float)*(double *)(lVar37 + 0xb0 + lVar25);
        fVar40 = (float)*(double *)(lVar37 + 0xb8 + lVar25);
        pcVar10 = *(code **)((longlong)*(this->VertexBuffers).StaticMeshVertexBuffer.TexcoordData +
                            0x50);
        local_268 = fVar39;
        fStack_264 = fVar40;
        if ((this->VertexBuffers).StaticMeshVertexBuffer.bUseFullPrecisionUVs == false) {
          puVar6 = (ushort *)(puVar12 + lVar21 * 4);
          lVar21 = (*pcVar10)();
          if ((puVar12 + lVar21 < puVar6 + 2) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x166,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          if ((puVar6 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x167,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          local_312 = 0;
          FGenericPlatformMath::StoreHalf(&local_312,fVar39);
          *puVar6 = local_312;
          local_310[0] = 0;
          FGenericPlatformMath::StoreHalf(local_310,fVar40);
          puVar6[1] = local_310[0];
        }
        else {
          puVar5 = puVar12 + lVar21 * 8;
          lVar21 = (*pcVar10)();
          if ((puVar12 + lVar21 < puVar5 + 8) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15d,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          if ((puVar5 < (this->VertexBuffers).StaticMeshVertexBuffer.TexcoordDataPtr) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                                  ,0x15e,L""), bVar16)) {
            pcVar10 = (code *)swi(3);
            pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
            return pFVar20;
          }
          *(ulonglong *)puVar5 = CONCAT44(fStack_264,local_268);
        }
        uVar29 = local_30c;
        *(undefined4 *)
         ((this->VertexBuffers).ColorVertexBuffer.Data +
         local_324 * (this->VertexBuffers).ColorVertexBuffer.Stride) =
             *(undefined4 *)(lVar37 + 0x48 + lVar25);
        *(undefined4 *)
         ((this->VertexBuffers).ColorVertexBuffer.Data +
         (uVar28 - 1) * (this->VertexBuffers).ColorVertexBuffer.Stride) =
             *(undefined4 *)(lVar37 + 0x90 + lVar25);
        *(undefined4 *)
         ((this->VertexBuffers).ColorVertexBuffer.Data +
         uVar28 * (this->VertexBuffers).ColorVertexBuffer.Stride) =
             *(undefined4 *)(lVar37 + 0xd8 + lVar25);
        uVar36 = 0;
        if ((int)local_30c < (this->IndexBuffer).Indices.ArrayNum) {
          uVar36 = ~local_30c >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
          return pFVar20;
        }
        lVar25 = local_288;
        uVar36 = local_324;
        *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + local_288 + -8) = local_324;
        uVar34 = 0;
        if ((int)(uVar18 - 1) < (this->IndexBuffer).Indices.ArrayNum) {
          uVar34 = ~(uVar18 - 1) >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
          return pFVar20;
        }
        *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + lVar25 + -4) = uVar28 - 1;
        uVar34 = 0;
        if ((int)uVar18 < (this->IndexBuffer).Indices.ArrayNum) {
          uVar34 = ~uVar18 >> 0x1f;
        }
        if ((uVar34 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar10 = (code *)swi(3);
          pFVar20 = (FTriangleSetSceneProxy *)(*pcVar10)();
          return pFVar20;
        }
        local_2e0 = local_2e0 + 3;
        uVar36 = uVar36 + 3;
        local_30c = uVar29 + 3;
        uVar18 = uVar18 + 3;
        *(uint *)((this->IndexBuffer).Indices.AllocatorInstance.Data + lVar25) = uVar28;
        local_288 = lVar25 + 0xc;
        uVar28 = uVar28 + 3;
        local_1c0.UnvisitedBitMask = local_1c0.UnvisitedBitMask & ~local_1c0._padding_._4_4_;
        local_324 = uVar36;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1c0);
        plVar38 = local_1c8;
      }
    }
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  } while( true );
}

// ~FTriangleSetSceneProxy @ 14cad1bd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FTriangleSetSceneProxy::~FTriangleSetSceneProxy(FTriangleSetSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FTriangleSetSceneProxy__6B_;
  this_00 = &this->VertexBuffers;
  (**(code **)((this->VertexBuffers).PositionVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).PositionVertexBuffer);
  (**(code **)((this_00->StaticMeshVertexBuffer)._padding_ + 0x20))(this_00);
  (**(code **)((this->VertexBuffers).ColorVertexBuffer._padding_ + 0x20))
            (&(this->VertexBuffers).ColorVertexBuffer);
  (**(code **)((this->IndexBuffer)._padding_ + 0x20))(&this->IndexBuffer);
  (**(code **)((this->VertexFactory)._padding_ + 0x20))(&this->VertexFactory);
  FDynamicMeshIndexBuffer32::~FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  FColorVertexBuffer::~FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FPositionVertexBuffer::~FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer(&this_00->StaticMeshVertexBuffer);
  FLocalVertexFactory::~FLocalVertexFactory(&this->VertexFactory);
  pFVar1 = (this->MeshBatchDatas).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPrimitiveSceneProxy::~FPrimitiveSceneProxy((FPrimitiveSceneProxy *)this);
  return;
}

// operator() @ 14cad85f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FTriangleSetSceneProxy::FTriangleSetSceneProxy'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined1 auStack_108 [32];
  FDataType local_e8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_108;
  (**(code **)(*(longlong *)(*(longlong *)this + 0x580) + 0x18))();
  (**(code **)(*(longlong *)(*(longlong *)this + 0x4c8) + 0x18))
            ((longlong *)(*(longlong *)this + 0x4c8),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x5d0) + 0x18))
            ((longlong *)(*(longlong *)this + 0x5d0),param_1);
  local_e8._padding_._4_4_ = 4;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._0_4_ = 0xffffffff;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_._4_2_ = 0xff;
  local_e8._padding_._6_1_ = 0;
  local_e8.PreSkinPositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
  local_e8.PreSkinPositionComponent.StreamOffset = 0;
  local_e8.PreSkinPositionComponent.Offset = '\0';
  local_e8.PreSkinPositionComponent.Stride = '\0';
  local_e8.PreSkinPositionComponent.Type.Value = '\0';
  local_e8.PreSkinPositionComponent.VertexStreamUsage = Default;
  local_e8.PreSkinPositionComponentSRV = (FRHIShaderResourceView *)0x0;
  FPositionVertexBuffer::BindPositionVertexBuffer
            ((FPositionVertexBuffer *)(*(longlong *)this + 0x580),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTangentVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4c8),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8);
  FStaticMeshVertexBuffer::BindTexCoordVertexBuffer
            ((FStaticMeshVertexBuffer *)(*(longlong *)this + 0x4c8),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8,-1);
  FColorVertexBuffer::BindColorVertexBuffer
            ((FColorVertexBuffer *)(*(longlong *)this + 0x5d0),
             (FVertexFactory *)(*(longlong *)this + 0x298),(FStaticMeshDataType *)&local_e8);
  FLocalVertexFactory::SetData
            ((FLocalVertexFactory *)(*(longlong *)this + 0x298),(FRHICommandListBase *)param_1,
             &local_e8);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x298) + 0x18))
            ((longlong *)(*(longlong *)this + 0x298),param_1);
  (**(code **)(*(longlong *)(*(longlong *)this + 0x620) + 0x18))
            ((longlong *)(*(longlong *)this + 0x620),param_1);
  return;
}

// CanBeOccluded @ 14caf29c0

bool __thiscall FTriangleSetSceneProxy::CanBeOccluded(FTriangleSetSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// GetDynamicMeshElements @ 14cb0f310

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
FTriangleSetSceneProxy::GetDynamicMeshElements
          (FTriangleSetSceneProxy *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4)

{
  byte bVar1;
  int iVar2;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  *paVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FDynamicPrimitiveUniformBuffer *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  TStatIdData *pTVar16;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar17;
  TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag> TVar18;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar19;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  ForElementType<FMeshBatchElement> FVar23;
  ForElementType<FMeshBatchElement> FVar24;
  FScriptContainerElement *pFVar25;
  undefined1 local_97 [7];
  uint local_90;
  uint uStack_8c;
  FColor_u_0 local_88 [2];
  FName local_80;
  FScriptContainerElement *local_78;
  FName local_70;
  FName local_68;
  FDynamicPrimitiveUniformBuffer *local_58;
  FScriptContainerElement *local_50;
  FName local_48;
  FName local_40;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_virtual_void___cdecl_FTriangleSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FTriangleSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FTriangleSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar15 = ::FName::FName(&local_48,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FTriangleSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements,*pFVar15,
               L"STAT_OverlaySceneProxy_GetDynamicMeshElements","STATGROUP_Quick","STATCAT_Advanced"
               ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FTriangleSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar16 = _StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar15 = ::FName::FName(&local_40,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
    pTVar16 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FTriangleSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                          ::__l2::StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements,*pFVar15,
                         L"STAT_OverlaySceneProxy_GetDynamicMeshElements","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)&pTVar16->Name;
  bVar5 = false;
  bVar7 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  bVar10 = false;
  bVar11 = false;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar20 = FVar22.Number;
  if ((FVar21.Value != 0) || (bVar12 = bVar5, bVar6 = bVar7, uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88[0]._s_0,(pTVar16->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar21.Value;
        local_80.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(pTVar16->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\TriangleSetComponent.cpp"
                   ,0x84);
        bVar5 = true;
        bVar7 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    bVar12 = bVar5;
    bVar6 = bVar7;
    if (FThreadStats::bPrimaryEnable != false) {
      local_90 = FVar21.Value;
      uStack_8c = uVar20;
      local_70 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar10 = true;
      goto LAB_14cb0f4be;
    }
  }
  bVar7 = bVar11;
  bVar5 = bVar10;
  bVar10 = false;
  local_70 = local_68;
  FVar22 = local_68;
LAB_14cb0f4be:
  local_90 = 0;
  if (0 < param_1->ArrayNum) {
    do {
      if ((param_3 >> (local_90 & 0x1f) & 1) != 0) {
        iVar2 = (this->MeshBatchDatas).ArrayNum;
        pFVar25 = (this->MeshBatchDatas).AllocatorInstance.Data;
        local_50 = pFVar25 + (longlong)iVar2 * 0x18;
        while( true ) {
          pFVar9 = local_50;
          local_78 = pFVar25;
          if ((this->MeshBatchDatas).ArrayNum != iVar2) {
            local_97[0] = 0;
            `TCheckedPointerIterator<FTriangleSetMeshBatchData_const_,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_97);
          }
          if (pFVar25 == pFVar9) break;
          iVar13 = TChunkedArray<FMeshBatch,16384,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                   ::Add(&param_4->MeshBatchStorage,1);
          uVar20 = iVar13 / 0x49;
          uVar14 = 0;
          if ((int)uVar20 < (param_4->MeshBatchStorage).Chunks.Array.ArrayNum) {
            uVar14 = ~uVar20 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar24 = (ForElementType<FMeshBatchElement>)
                   ((ulonglong)(uint)(iVar13 % 0x49) * 0xe0 +
                   (longlong)
                   (param_4->MeshBatchStorage).Chunks.Array.AllocatorInstance.Data[(int)uVar20]);
          if ((*(int *)((longlong)FVar24 + 0xa0) < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar23 = FVar24;
          if (*(ForElementType<FMeshBatchElement> *)((longlong)FVar24 + 0x98) !=
              (ForElementType<FMeshBatchElement>)0x0) {
            FVar23 = *(ForElementType<FMeshBatchElement> *)((longlong)FVar24 + 0x98);
          }
          *(FDynamicMeshIndexBuffer32 **)((longlong)FVar23 + 0x18) = &this->IndexBuffer;
          *(uint *)((longlong)FVar24 + 0xd4) = *(uint *)((longlong)FVar24 + 0xd4) & 0xffffffbf;
          *(FLocalVertexFactory **)((longlong)FVar24 + 0xa8) = &this->VertexFactory;
          *(undefined8 *)((longlong)FVar24 + 0xb0) = *(undefined8 *)pFVar25;
          paVar3 = &param_4->OneFrameResources->Next;
          aVar17 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
                    )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x50,8);
          *(undefined8 *)((longlong)aVar17 + 8) = 0;
          local_58 = (FDynamicPrimitiveUniformBuffer *)((longlong)aVar17 + 0x10);
          *(undefined ***)aVar17 =
               &
               ___7__TObject_VFDynamicPrimitiveUniformBuffer_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
          ;
          TVar18.Next = *paVar3;
          do {
            *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
              *)((longlong)aVar17 + 8) = TVar18.Next;
            LOCK();
            aVar19 = *paVar3;
            bVar11 = TVar18.Next == aVar19;
            if (bVar11) {
              *paVar3 = aVar17;
              aVar19 = TVar18.Next;
            }
            UNLOCK();
            TVar18.Next = aVar19;
          } while (!bVar11);
          FDynamicPrimitiveUniformBuffer::FDynamicPrimitiveUniformBuffer(local_58);
          bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
          if (((((char)bVar1 < '\0') || ((bVar1 & 0x10) != 0)) || ((bVar1 & 3) == 3)) ||
             ((bVar1 & 0x60) != 0)) {
            bVar11 = true;
          }
          else {
            bVar11 = false;
          }
          if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RHICmdList",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                  ,0x46,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar8 = local_58;
          FDynamicPrimitiveUniformBuffer::Set
                    (local_58,(FRHICommandListBase *)param_4->RHICmdList,
                     (TMatrix<double> *)&this->_padding_,(TMatrix<double> *)&this->_padding_,
                     (TBoxSphereBounds<double,double> *)&this->_padding_,
                     (TBoxSphereBounds<double,double> *)&this->_padding_,true,false,bVar11);
          pFVar25 = local_78;
          *(TUniformBuffer<FPrimitiveUniformShaderParameters> **)((longlong)FVar23 + 8) =
               &pFVar8->UniformBuffer;
          *(undefined4 *)((longlong)FVar23 + 0x58) = *(undefined4 *)(local_78 + 8);
          *(undefined4 *)((longlong)FVar23 + 0x5c) = *(undefined4 *)(local_78 + 0xc);
          *(undefined4 *)((longlong)FVar23 + 0x68) = *(undefined4 *)(local_78 + 0x10);
          *(undefined4 *)((longlong)FVar23 + 0x6c) = *(undefined4 *)(local_78 + 0x14);
          *(uint *)((longlong)FVar24 + 0xd4) =
               ((byte)this->_padding_ & 1 ^ *(uint *)((longlong)FVar24 + 0xd4) & 0xfffffffe) &
               0xffffc07f;
          FMeshElementCollector::AddMesh(param_4,local_90,(FMeshBatch *)FVar24);
          pFVar25 = pFVar25 + 0x18;
        }
      }
      local_90 = local_90 + 1;
      FVar22 = local_70;
      bVar12 = bVar5;
      bVar6 = bVar7;
    } while ((int)local_90 < param_1->ArrayNum);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// GetMemoryFootprint @ 14cb10c90

uint __thiscall FTriangleSetSceneProxy::GetMemoryFootprint(FTriangleSetSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x660;
}

// GetTypeHash @ 14cb150f0

ulong64 __thiscall FTriangleSetSceneProxy::GetTypeHash(FTriangleSetSceneProxy *this)

{
  return 0x155348d60;
}

// GetViewRelevance @ 14cb15590

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
FTriangleSetSceneProxy::GetViewRelevance
          (FTriangleSetSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
          FSceneView *param_1)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  
  __return_storage_ptr__->_padding_ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  pbVar1 = (byte *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *pbVar1 = *pbVar1 | 4;
  __return_storage_ptr__->bRenderInMainPass = 1;
  bVar4 = FPrimitiveSceneProxy::IsShown((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bDrawRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 2;
  bVar4 = FPrimitiveSceneProxy::IsShadowCast((FPrimitiveSceneProxy *)this,param_1);
  __return_storage_ptr__->bShadowRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 3 | 2;
  uVar5 = ((uint)*(byte *)((longlong)&this->_padding_ + 3) << 4 ^
          *(uint *)&__return_storage_ptr__->field_0x8) & 0x80 ^
          *(uint *)&__return_storage_ptr__->field_0x8;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar5;
  uVar6 = 0;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
    uVar6 = 0x2000;
  }
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar6 | uVar5 & 0xffffdfff;
  bVar4 = FPrimitiveSceneProxy::ShouldRenderCustomDepth((FPrimitiveSceneProxy *)this);
  __return_storage_ptr__->bRenderCustomDepth = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 | (uint)bVar4 << 5;
  *(uint *)&__return_storage_ptr__->field_0x8 =
       *(uint *)&__return_storage_ptr__->field_0x8 ^
       ((uint)*(byte *)((longlong)&this->_padding_ + 7) << 0xe ^
       *(uint *)&__return_storage_ptr__->field_0x8) & 0x4000;
  FMaterialRelevance::SetPrimitiveViewRelevance(&this->MaterialRelevance,__return_storage_ptr__);
  cVar2 = (char)this->_padding_;
  if (((((cVar2 == '\x02') || (cVar2 == '\x01')) || ((this->_padding_ & 0x1000000000000) != 0)) ||
      ((bVar3 = *(byte *)((longlong)&this->_padding_ + 2), (char)bVar3 < '\0' ||
       (uVar6 = 0, (bVar3 & 0x72) != 0)))) &&
     ((uVar6 = 0, (__return_storage_ptr__->_padding_ & 0x400000000) != 0 &&
      (__return_storage_ptr__->bRenderInMainPass != 0)))) {
    uVar6 = 0x10;
  }
  __return_storage_ptr__->bVelocityRelevance = 0;
  *(uint *)&__return_storage_ptr__->field_0x8 = *(uint *)&__return_storage_ptr__->field_0x8 | uVar6;
  return __return_storage_ptr__;
}

