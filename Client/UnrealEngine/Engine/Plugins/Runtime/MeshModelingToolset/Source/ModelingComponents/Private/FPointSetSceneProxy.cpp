// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 9

// FPointSetSceneProxy @ 14ca65c10

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPointSetSceneProxy * __thiscall
FPointSetSceneProxy::FPointSetSceneProxy(FPointSetSceneProxy *this,UPointSetComponent *param_1)

{
  int *piVar1;
  TArray<FPointSetMeshBatchData,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  uint uVar4;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  EShaderPlatform EVar8;
  FPointSetSceneProxy *pFVar9;
  longlong lVar10;
  longlong lVar11;
  UMaterial *pUVar12;
  undefined8 uVar13;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar14;
  undefined ***pppuVar15;
  uint uVar16;
  int iVar17;
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator> *pTVar18;
  ulonglong uVar19;
  int iVar20;
  uint uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator> *pTVar24;
  undefined1 auStackY_238 [32];
  <lambda_1> local_1e8 [8];
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  uint local_1c8;
  int local_1c0;
  uint uStack_1bc;
  undefined1 *puStack_1b8;
  undefined4 local_1b0;
  int iStack_1ac;
  int iStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  FPointSetSceneProxy *local_198;
  TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator> *local_190;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_188;
  int local_168;
  int local_160;
  int local_15c;
  TArrayView<std::nullptr_t,int> local_158;
  code *local_148;
  ForAnyElementType **local_140;
  ForAnyElementType *local_138;
  FPointSetSceneProxy *local_130;
  undefined8 *local_128;
  code *local_118 [2];
  undefined **local_108;
  FPointSetSceneProxy *pFStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  undefined1 local_e8 [16];
  undefined **local_d8;
  FPointSetSceneProxy *pFStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  byte local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1a0 = 0;
  local_198 = this;
  FPrimitiveSceneProxy::FPrimitiveSceneProxy
            ((FPrimitiveSceneProxy *)this,(UPrimitiveComponent *)param_1,(FName)0x0);
  this->_padding_ = (longlong)&___7FPointSetSceneProxy__6B_;
  pTVar2 = &this->MeshBatchDatas;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MeshBatchDatas).ArrayNum = 0;
  (this->MeshBatchDatas).ArrayMax = 0;
  pcVar5 = *(code **)(param_1->_padding_ + 0xaa8);
  EVar8 = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
  (*pcVar5)(param_1,&this->MaterialRelevance,EVar8);
  FLocalVertexFactory::FLocalVertexFactory
            (&this->VertexFactory,*(Type *)(this->_padding_ + 8),"FPointSetSceneProxy");
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(&(this->VertexBuffers).StaticMeshVertexBuffer);
  FPositionVertexBuffer::FPositionVertexBuffer(&(this->VertexBuffers).PositionVertexBuffer);
  FColorVertexBuffer::FColorVertexBuffer(&(this->VertexBuffers).ColorVertexBuffer);
  FDynamicMeshIndexBuffer32::FDynamicMeshIndexBuffer32(&this->IndexBuffer);
  iVar17 = *(int *)&(param_1->Points).field_0x8 - *(int *)&(param_1->Points).field_0x34;
  local_1c8 = iVar17 * 4;
  FPositionVertexBuffer::Init(&(this->VertexBuffers).PositionVertexBuffer,local_1c8,true);
  FStaticMeshVertexBuffer::Init(&(this->VertexBuffers).StaticMeshVertexBuffer,iVar17 * 4,1,true);
  FColorVertexBuffer::Init(&(this->VertexBuffers).ColorVertexBuffer,iVar17 * 4,true);
  TArray<unsigned_int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&(this->IndexBuffer).Indices,iVar17 * 6,Default);
  if (0 < *(int *)&(param_1->Points).field_0x8 - *(int *)&(param_1->Points).field_0x34) {
    iVar17 = (this->MeshBatchDatas).ArrayNum;
    piVar1 = &(this->MeshBatchDatas).ArrayMax;
    if (iVar17 == *piVar1) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->MeshBatchDatas).ArrayNum = iVar17 + 1;
    *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 0x18) = 0;
    iVar17 = (this->MeshBatchDatas).ArrayNum;
    uVar16 = iVar17 - 1;
    uVar21 = 0;
    if ((int)uVar16 < iVar17) {
      uVar21 = ~uVar16 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FPointSetSceneProxy *)(*pcVar5)();
      return pFVar9;
    }
    lVar10 = (longlong)(this->MeshBatchDatas).ArrayNum;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    *(undefined4 *)(pFVar6 + lVar10 * 0x18 + -8) = 0;
    *(uint *)(pFVar6 + lVar10 * 0x18 + -4) = local_1c8 - 1;
    *(undefined4 *)(pFVar6 + lVar10 * 0x18 + -0x10) = 0;
    *(int *)(pFVar6 + lVar10 * 0x18 + -0xc) =
         (*(int *)&(param_1->Points).field_0x8 - *(int *)&(param_1->Points).field_0x34) * 2;
    lVar11 = (**(code **)(param_1->_padding_ + 0x690))(param_1,0);
    if (lVar11 == 0) {
      pUVar12 = UMaterial::GetDefaultMaterial(MD_Surface);
    }
    else {
      pUVar12 = (UMaterial *)(**(code **)(param_1->_padding_ + 0x690))(param_1,0);
    }
    uVar13 = (**(code **)(pUVar12->_padding_ + 0x310))(pUVar12);
    *(undefined8 *)(pFVar6 + lVar10 * 0x18 + -0x18) = uVar13;
    uVar21 = *(int *)&(param_1->Points).field_0x8 - *(int *)&(param_1->Points).field_0x34;
    local_a8 = ___xmm_bff00000000000003ff0000000000000;
    uStack_a0 = _UNK_15076c6f8;
    local_98 = ___xmm_3ff00000000000000000000000000000;
    uStack_90 = _UNK_15061cbc8;
    local_88 = ___xmm_00000000000000003ff0000000000000;
    uStack_80 = _UNK_150689518;
    local_78 = ___xmm_3ff0000000000000bff0000000000000;
    uStack_70 = _UNK_15076b868;
    local_68 = ___xmm_bff00000000000000000000000000000;
    uStack_60 = _UNK_1508ffb28;
    local_58 = ___xmm_0000000000000000bff0000000000000;
    uStack_50 = _UNK_15076ad98;
    local_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d8 = 0;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    if (0 < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar21,&local_1e0,0,(int *)((longlong)&local_1d8 + 4));
    }
    pTVar24 = &param_1->Points;
    uStack_1bc = 1;
    iVar17 = *(int *)&(param_1->Points).field_0x28;
    puVar3 = &(param_1->Points).field_0x10;
    local_1c0 = 0;
    iStack_1ac = 0;
    iStack_1a8 = 0;
    if (iVar17 != 0) {
      puVar23 = *(uint **)&(param_1->Points).field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar3;
      }
      uVar21 = *puVar23;
      iStack_1a8 = 0;
      local_1c0 = 0;
      while (uVar21 == 0) {
        iStack_1a8 = iStack_1a8 + 0x20;
        lVar10 = (longlong)local_1c0;
        local_1c0 = local_1c0 + 1;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1c0) goto LAB_14ca65f9b;
        uVar21 = puVar23[lVar10 + 1];
      }
      uStack_1bc = -uVar21 & uVar21;
      uVar19 = (ulonglong)uStack_1bc * 2 + 1;
      lVar10 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_160 = (int)lVar10;
      iStack_1ac = local_160 + -1 + iStack_1a8;
      if (iVar17 < iStack_1ac) {
LAB_14ca65f9b:
        iStack_1ac = iVar17;
      }
    }
    local_1b0 = 0xffffffff;
    uVar21 = *(uint *)&(param_1->Points).field_0x28;
    local_168 = *(int *)&(param_1->Points).field_0x8 - *(int *)&(param_1->Points).field_0x34;
    local_188._padding_ = CONCAT44(uStack_1bc,local_1c0);
    iVar20 = (int)uVar21 >> 5;
    local_188.CurrentBitIndex = iStack_1ac;
    local_188.UnvisitedBitMask = 0xffffffff;
    local_188._28_4_ = uStack_1a4;
    local_188.BaseBitIndex = iStack_1a8;
    uVar16 = uVar21 & 0xffffffe0;
    puStack_1b8 = puVar3;
    local_190 = pTVar24;
    local_188.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
    if ((((int)uVar21 < 0) || (iVar17 < (int)uVar21)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FPointSetSceneProxy *)(*pcVar5)();
      return pFVar9;
    }
    uVar4 = *(uint *)&(param_1->Points).field_0x28;
    pTVar18 = pTVar24;
    if (uVar21 != uVar4) {
      puVar22 = *(undefined1 **)&(param_1->Points).field_0x20;
      if (puVar22 == (undefined1 *)0x0) {
        puVar22 = puVar3;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar20 * 4);
      while (uVar21 == 0) {
        lVar10 = (longlong)iVar20;
        uVar16 = uVar16 + 0x20;
        iVar20 = iVar20 + 1;
        uVar21 = uVar4;
        if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14ca66080;
        uVar21 = *(uint *)(puVar22 + lVar10 * 4 + 4);
      }
      uVar19 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_15c = (int)lVar10;
      uVar21 = local_15c + -1 + uVar16;
      if ((int)uVar4 < (int)uVar21) {
        uVar21 = uVar4;
      }
    }
LAB_14ca66080:
    while( true ) {
      if (*(int *)&pTVar18->field_0x8 - *(int *)&pTVar18->field_0x34 != local_168) {
        local_1e8[0] = (<lambda_1>)0x0;
        `TSparseArray<FRenderablePoint,FDefaultSparseArrayAllocator>::TRangedForIterator::
        operator!='::__l2::<lambda_1>::operator()(local_1e8);
      }
      this = local_198;
      if (((local_188.CurrentBitIndex == uVar21) &&
          (local_188.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar3)) &&
         (pTVar18 == pTVar24)) break;
      local_1d0 = *(longlong *)pTVar18 + (longlong)local_188.CurrentBitIndex * 0x28;
      if (((local_1e0.Data <= (FScriptContainerElement *)&local_1d0) &&
          ((FScriptContainerElement *)&local_1d0 < local_1e0.Data + (longlong)local_1d8._4_4_ * 8))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FPointSetSceneProxy *)(*pcVar5)();
        return pFVar9;
      }
      if ((int)local_1d8 == local_1d8._4_4_) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_1e0,(int *)((longlong)&local_1d8 + 4));
        local_1d8 = CONCAT44(local_1d8._4_4_,iVar17);
      }
      lVar10 = (longlong)(int)local_1d8;
      local_1d8 = CONCAT44(local_1d8._4_4_,(int)local_1d8 + 1);
      *(longlong *)(local_1e0.Data + lVar10 * 8) = local_1d0;
      local_188.UnvisitedBitMask = local_188.UnvisitedBitMask & ~local_188._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_188);
      pTVar18 = local_190;
    }
    local_138 = &local_1e0;
    local_130 = local_198;
    local_128 = &local_a8;
    local_158.DataPtr = (void **)0x0;
    local_158.ArrayNum = 0;
    local_148 = UE::Core::Private::Function::
                TFunctionRefCaller<`FPointSetSceneProxy::FPointSetSceneProxy'::__l5::<lambda_1>,void,int>
                ::Call;
    local_140 = &local_138;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(int)local_1d8,1,(TFunctionRef<void___cdecl(int)> *)&local_148,
               local_1e8[0],None,&local_158);
    if (local_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data);
    }
  }
  local_f0 = (undefined ***)0x0;
  local_108 = &
              ___7__TFunction_OwnedObject_V<lambda_2>__1___0FPointSetSceneProxy__QEAA_PEAVUPointSetComponent___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_118[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPointSetSceneProxy::FPointSetSceneProxy'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                 ::Call;
  pFStack_100 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FPointSetSceneProxy::FPointSetSceneProxy_::__l2::TSTR_OverlayVertexBuffersInit132>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_e8._0_8_ = local_118[0];
    local_c0 = local_f0;
    local_d8 = local_108;
    pFStack_d0 = pFStack_100;
    local_c8 = local_f8;
    local_118[0] = (code *)0x0;
    local_b8 = 2;
    pFVar14 = (FRenderCommandTag *)
              TRenderCommandTag<`FPointSetSceneProxy::FPointSetSceneProxy'::__l2::TSTR_OverlayVertexBuffersInit132>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_e8,pFVar14);
    uVar19 = (ulonglong)local_b8;
    if ((2 < uVar19) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FPointSetSceneProxy *)(*pcVar5)();
      return pFVar9;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar19] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_e8._0_8_ != (code *)0x0) {
        pppuVar15 = (undefined ***)(local_e8 + 0x10);
        if (local_c0 != (undefined ***)0x0) {
          pppuVar15 = local_c0;
        }
        (*(code *)(*pppuVar15)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar19])(local_e8);
    }
  }
  if (local_118[0] != (code *)0x0) {
    pppuVar15 = &local_108;
    if (local_f0 != (undefined ***)0x0) {
      pppuVar15 = local_f0;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  return this;
}

// ~FPointSetSceneProxy @ 14ca6b0a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FPointSetSceneProxy::~FPointSetSceneProxy(FPointSetSceneProxy *this)

{
  FStaticMeshVertexBuffers *this_00;
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPointSetSceneProxy__6B_;
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

// operator() @ 14ca6e6a0

void __thiscall
`FPointSetSceneProxy::FPointSetSceneProxy'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  longlong *plVar7;
  double *pdVar8;
  longlong lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ushort local_res8 [4];
  ushort local_res10 [4];
  undefined4 local_res18;
  uint local_res20;
  longlong local_a8;
  TVector<float>_u_0 local_98;
  TVector<float>_u_0 local_88;
  TVector<float>_u_0 local_78 [4];
  
  plVar7 = *(longlong **)this;
  uVar21 = 0;
  if (param_1 < (int)plVar7[1]) {
    uVar21 = (uint)~param_1 >> 0x1f;
  }
  if (uVar21 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar21 = param_1 * 4;
  pdVar8 = *(double **)(*plVar7 + (longlong)param_1 * 8);
  local_res20 = param_1 * 6;
  fVar3 = *(float *)((longlong)pdVar8 + 0x1c);
  fVar4 = *(float *)(pdVar8 + 4);
  uVar11 = *(undefined8 *)((longlong)pdVar8 + 0x1c);
  fVar23 = FLinearColor::sRGBToLinearTable[*(byte *)(pdVar8 + 3)];
  if (fVar23 <= 0.0) {
    fVar23 = 0.0;
  }
  local_a8 = 0;
  if (__real_3f800000 <= fVar23) {
    fVar23 = __real_3f800000;
  }
  fVar24 = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pdVar8 + 0x19)];
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  if (__real_3f800000 <= fVar24) {
    fVar24 = __real_3f800000;
  }
  fVar25 = FLinearColor::sRGBToLinearTable[*(byte *)((longlong)pdVar8 + 0x1a)];
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  if (__real_3f800000 <= fVar25) {
    fVar25 = __real_3f800000;
  }
  fVar26 = (float)*(byte *)((longlong)pdVar8 + 0x1b) * __real_3b808081;
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  if (__real_3f800000 <= fVar26) {
    fVar26 = __real_3f800000;
  }
  uVar12 = CONCAT13((char)(int)(fVar26 * __real_437f0000 + __real_3f000000),
                    CONCAT12((char)(int)(fVar25 * __real_437f0000 + __real_3f000000),
                             CONCAT11((char)(int)(fVar24 * __real_437f0000 + __real_3f000000),
                                      (char)(int)(fVar23 * __real_437f0000 + __real_3f000000))));
  uVar22 = uVar21;
  local_res18 = uVar12;
  do {
    dVar5 = pdVar8[1];
    dVar6 = pdVar8[2];
    uVar15 = (ulonglong)(uVar22 * *(int *)(*(longlong *)((longlong)this + 8) + 0x5c0));
    lVar9 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x5b8);
    *(float *)(uVar15 + lVar9) = (float)*pdVar8;
    *(float *)(uVar15 + 4 + lVar9) = (float)dVar5;
    *(float *)(uVar15 + 8 + lVar9) = (float)dVar6;
    lVar9 = *(longlong *)((longlong)this + 8);
    lVar20 = *(longlong *)(lVar9 + 0x560);
    lVar16 = (ulonglong)*(uint *)(lVar9 + 0x570) * (ulonglong)uVar22;
    if (*(char *)(lVar9 + 0x578) == '\0') {
      puVar2 = (ushort *)(lVar20 + lVar16 * 4);
      lVar16 = (**(code **)(**(longlong **)(lVar9 + 0x548) + 0x50))();
      if ((ushort *)(lVar16 + lVar20) < puVar2 + 2) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                            ,0x166,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (puVar2 < *(ushort **)(lVar9 + 0x560)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                            ,0x167,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      local_res10[0] = 0;
      FGenericPlatformMath::StoreHalf(local_res10,fVar3);
      *puVar2 = local_res10[0];
      local_res8[0] = 0;
      FGenericPlatformMath::StoreHalf(local_res8,fVar4);
      puVar2[1] = local_res8[0];
    }
    else {
      puVar1 = (undefined8 *)(lVar20 + lVar16 * 8);
      lVar16 = (**(code **)(**(longlong **)(lVar9 + 0x548) + 0x50))();
      if ((undefined8 *)(lVar16 + lVar20) < puVar1 + 1) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[UVIndex]) + 1) <= (void*)(TexcoordDataPtr + TexcoordData->GetResourceSize())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                            ,0x15d,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (puVar1 < *(undefined8 **)(lVar9 + 0x560)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)((&ElementData[UVIndex]) + 0) >= (void*)(TexcoordDataPtr)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Rendering\\StaticMeshVertexBuffer.h"
                            ,0x15e,L"");
        if (bVar13) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      *puVar1 = uVar11;
    }
    *(undefined4 *)
     ((ulonglong)(uVar22 * *(int *)(*(longlong *)((longlong)this + 8) + 0x610)) +
     *(longlong *)(*(longlong *)((longlong)this + 8) + 0x608)) = uVar12;
    lVar9 = *(longlong *)((longlong)this + 0x10);
    local_98._s_0.X = (float)*(double *)(local_a8 + lVar9);
    local_98._s_0.Y = (float)*(double *)(local_a8 + 8 + lVar9);
    local_98._s_0.Z = (float)*(double *)(local_a8 + 0x10 + lVar9);
    local_88._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_78[0]._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_88._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_78[0]._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    FStaticMeshVertexBuffer::SetVertexTangents
              ((FStaticMeshVertexBuffer *)(*(longlong *)((longlong)this + 8) + 0x4c8),uVar22,
               (TVector<float> *)&local_78[0]._s_0,(TVector<float> *)&local_88._s_0,
               (TVector<float> *)&local_98._s_0);
    uVar19 = local_res20;
    local_a8 = local_a8 + 0x18;
    uVar22 = uVar22 + 1;
  } while (local_a8 < 0x60);
  lVar20 = (longlong)(int)local_res20;
  lVar9 = *(longlong *)((longlong)this + 8);
  uVar22 = 0;
  if ((int)local_res20 < *(int *)(lVar9 + 0x650)) {
    uVar22 = ~local_res20 >> 0x1f;
  }
  if (uVar22 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar17 = uVar19 + 1;
  *(uint *)(*(longlong *)(lVar9 + 0x648) + lVar20 * 4) = uVar21;
  lVar9 = *(longlong *)((longlong)this + 8);
  uVar14 = 0;
  uVar22 = uVar14;
  if ((int)uVar17 < *(int *)(lVar9 + 0x650)) {
    uVar22 = ~uVar17 >> 0x1f;
  }
  if (uVar22 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar18 = uVar19 + 2;
  *(uint *)(*(longlong *)(lVar9 + 0x648) + (longlong)(int)uVar17 * 4) = uVar21 + 1;
  lVar9 = *(longlong *)((longlong)this + 8);
  uVar22 = uVar14;
  if ((int)uVar18 < *(int *)(lVar9 + 0x650)) {
    uVar22 = ~uVar18 >> 0x1f;
  }
  if (uVar22 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar17 = uVar19 + 3;
  *(uint *)(*(longlong *)(lVar9 + 0x648) + (longlong)(int)uVar18 * 4) = uVar21 + 2;
  lVar9 = *(longlong *)((longlong)this + 8);
  uVar22 = uVar14;
  if ((int)uVar17 < *(int *)(lVar9 + 0x650)) {
    uVar22 = ~uVar17 >> 0x1f;
  }
  if (uVar22 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar18 = uVar19 + 4;
  *(uint *)(*(longlong *)(lVar9 + 0x648) + (longlong)(int)uVar17 * 4) = uVar21 + 2;
  lVar9 = *(longlong *)((longlong)this + 8);
  uVar22 = uVar14;
  if ((int)uVar18 < *(int *)(lVar9 + 0x650)) {
    uVar22 = ~uVar18 >> 0x1f;
  }
  if (uVar22 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  uVar19 = uVar19 + 5;
  *(uint *)(*(longlong *)(lVar9 + 0x648) + (longlong)(int)uVar18 * 4) = uVar21 + 3;
  lVar9 = *(longlong *)((longlong)this + 8);
  if ((int)uVar19 < *(int *)(lVar9 + 0x650)) {
    uVar14 = ~uVar19 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  *(uint *)(*(longlong *)(lVar9 + 0x648) + (longlong)(int)uVar19 * 4) = uVar21;
  return;
}

// operator() @ 14ca70430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FPointSetSceneProxy::FPointSetSceneProxy'::__l2::<lambda_2>::operator()
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

// CanBeOccluded @ 14ca7d690

bool __thiscall FPointSetSceneProxy::CanBeOccluded(FPointSetSceneProxy *this)

{
  return (bool)(~(*(byte *)((longlong)&(this->MaterialRelevance).field0_0x0 + 7) >> 2) & 1);
}

// GetDynamicMeshElements @ 14ca8f430

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
FPointSetSceneProxy::GetDynamicMeshElements
          (FPointSetSceneProxy *this,TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1
          ,FSceneViewFamily *param_2,uint param_3,FMeshElementCollector *param_4)

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
       `public:_virtual_void___cdecl_FPointSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_virtual_void___cdecl_FPointSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_virtual_void___cdecl_FPointSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements = (TStatIdData *)0x0;
    pFVar15 = ::FName::FName(&local_48,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_virtual_void___cdecl_FPointSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                ::__l2::StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements,*pFVar15,
               L"STAT_OverlaySceneProxy_GetDynamicMeshElements","STATGROUP_Quick","STATCAT_Advanced"
               ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_virtual_void___cdecl_FPointSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar16 = _StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements;
  if (_StatPtr_STAT_OverlaySceneProxy_GetDynamicMeshElements == (TStatIdData *)0x0) {
    pFVar15 = ::FName::FName(&local_40,"STAT_OverlaySceneProxy_GetDynamicMeshElements");
    pTVar16 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_virtual_void___cdecl_FPointSetSceneProxy::GetDynamicMeshElements(TArray<FSceneView_const*___ptr64,TSizedDefaultAllocator<32>_>_const&___ptr64,FSceneViewFamily_const&___ptr64,unsigned_int,FMeshElementCollector&___ptr64)const___ptr64'
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
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Drawing\\PointSetComponent.cpp"
                   ,0xa2);
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
      goto LAB_14ca8f5de;
    }
  }
  bVar7 = bVar11;
  bVar5 = bVar10;
  bVar10 = false;
  local_70 = local_68;
  FVar22 = local_68;
LAB_14ca8f5de:
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
            `TCheckedPointerIterator<FPointSetMeshBatchData_const_,int,0>::operator!='::__l2::
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

// GetMemoryFootprint @ 14ca90800

uint __thiscall FPointSetSceneProxy::GetMemoryFootprint(FPointSetSceneProxy *this)

{
  return *(int *)((longlong)&this->_padding_ + 4) * 4 + 0x660;
}

// GetTypeHash @ 14ca93ff0

ulong64 __thiscall FPointSetSceneProxy::GetTypeHash(FPointSetSceneProxy *this)

{
  return 0x155348198;
}

// GetViewRelevance @ 14ca948a0

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
FPointSetSceneProxy::GetViewRelevance
          (FPointSetSceneProxy *this,FPrimitiveViewRelevance *__return_storage_ptr__,
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

