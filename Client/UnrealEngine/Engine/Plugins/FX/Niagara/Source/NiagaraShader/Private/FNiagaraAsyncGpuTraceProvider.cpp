// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 10

// ~FNiagaraAsyncGpuTraceProvider @ 148df13c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceProvider::~FNiagaraAsyncGpuTraceProvider(FNiagaraAsyncGpuTraceProvider *this)

{
  return;
}

// BuildCollisionGroupHashMap @ 148df4c40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
FNiagaraAsyncGpuTraceProvider::BuildCollisionGroupHashMap
          (FRHICommandList *param_1,Type param_2,FSceneInterface *param_3,
          TMap<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
          *param_4,FCollisionGroupHashMap *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  FRHIUnorderedAccessView *pFVar3;
  FRHIShaderResourceView *pFVar4;
  undefined8 uVar5;
  FShaderMapResource *this;
  code *pcVar6;
  ForElementType<unsigned_int> FVar7;
  bool bVar8;
  uint uVar9;
  atomic<unsigned_int> aVar10;
  undefined4 uVar11;
  FRHIBreadcrumbAllocator *pFVar12;
  FRHIBreadcrumbNode *pFVar13;
  TRefCountPtr<FRHIBuffer> TVar14;
  TRefCountPtr<FRHIShaderResourceView> TVar15;
  undefined4 *_Dst;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar16;
  FName FVar17;
  atomic<FRHIShader_*> aVar18;
  FShaderParametersMetadata *pFVar19;
  FRHIBatchedShaderUnbinds *pFVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  TRefCountPtr<FRHIUnorderedAccessView> *pTVar24;
  ForElementType<unsigned_int> FVar25;
  int iVar26;
  uint *puVar27;
  uint uVar28;
  FRHIBuffer *pFVar29;
  undefined1 local_3c8 [16];
  ForElementType<unsigned_int> local_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  TIndexedPtrBase<FShaderType,FShaderType_*>_u_0 local_3a8;
  FName FStack_3a0;
  uint local_398;
  FRHIResource *local_390;
  FRHIBuffer *local_388;
  uint local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  int iStack_374;
  wchar_t *local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 local_34c;
  TMap<FPrimitiveComponentId,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FPrimitiveComponentId,unsigned_int,0>_>
  *local_348;
  int iStack_340;
  uint uStack_33c;
  undefined1 *local_338;
  undefined4 uStack_330;
  int iStack_32c;
  int local_328;
  int iStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  int local_318;
  int local_314;
  undefined1 local_310 [16];
  wchar_t *local_300;
  FResourceArrayUploadInterface *pFStack_2f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_2f0;
  FName local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d8;
  undefined8 uStack_2b8;
  undefined1 local_2b0 [24];
  FRHITransitionInfo local_298;
  FRHITransitionInfo local_268;
  FRHITransitionInfo local_238;
  FRHITransitionInfo local_208;
  uint local_1d8;
  undefined2 local_1d4;
  FRHIUnorderedAccessView *local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined1 local_1b0;
  undefined4 local_1a8;
  undefined2 local_1a4;
  FRHIUnorderedAccessView *local_1a0;
  undefined1 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 local_18c;
  undefined1 local_180;
  char *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  wchar_t *pwStack_160;
  FRHIBreadcrumbScope local_158;
  char local_148;
  ForAnyElementType local_138;
  uint local_130;
  FRHIUnorderedAccessView *local_128;
  FRHIResource *local_120;
  int local_118;
  FString local_108;
  TIndexedPtrBase<FShaderType,FShaderType_*>_u_0 local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  TIndexedPtrBase<FShaderType,FShaderType_*>_u_0 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  TArrayView<FRHITransitionInfo_const_,int> local_c8;
  TArrayView<FRHITransitionInfo_const_,int> local_b8;
  TArrayView<FRHITransitionInfo_const_,int> local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  ulonglong local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar28 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  if (uVar28 == 0) {
    param_5->HashTableSize = 0;
    (param_5->PrimIdHashTable).NumBytes = 0;
    pFVar29 = (param_5->PrimIdHashTable).Buffer.Reference;
    if (pFVar29 != (FRHIBuffer *)0x0) {
      (param_5->PrimIdHashTable).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar29);
    }
    pFVar3 = (param_5->PrimIdHashTable).UAV.Reference;
    if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
      (param_5->PrimIdHashTable).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar4 = (param_5->PrimIdHashTable).SRV.Reference;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      (param_5->PrimIdHashTable).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
    }
    (param_5->HashToCollisionGroups).NumBytes = 0;
    pFVar29 = (param_5->HashToCollisionGroups).Buffer.Reference;
    if (pFVar29 != (FRHIBuffer *)0x0) {
      (param_5->HashToCollisionGroups).Buffer.Reference = (FRHIBuffer *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar29);
    }
    pFVar3 = (param_5->HashToCollisionGroups).UAV.Reference;
    if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
      (param_5->HashToCollisionGroups).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
    pFVar4 = (param_5->HashToCollisionGroups).SRV.Reference;
    if (pFVar4 != (FRHIShaderResourceView *)0x0) {
      (param_5->HashToCollisionGroups).SRV.Reference = (FRHIShaderResourceView *)0x0;
      FRHIResource::Release((FRHIResource *)pFVar4);
      return;
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_178 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProvider.cpp"
      ;
      pwStack_160 = L"NiagaraUpdateCollisionGroupsMap";
      uStack_170 = 0xd6;
      local_168 = 0;
      ::Desc._padding_._0_4_ = 0x51cf84f0;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0xd6;
      ::Desc._padding_._4_4_ = uStack_16c;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51cf8920;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNiagaraAsyncGpuTraceProvider::BuildCollisionGroupHashMap'::__l10::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x50,8);
    pFVar13->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar13->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar13->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar13->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar13->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar13->Allocator = pFVar12;
    pFVar13->TraceCpuSpecId = 0;
    pFVar13->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar9 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar13->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar13->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar13->ID = uVar9;
    pFVar13->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar13[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar8 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar8)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar10 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar10;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar13->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_158,(FRHIComputeCommandList *)param_1,pFVar13);
    uStack_354 = 0;
    uStack_350 = 0;
    local_2b0._0_8_ = (FRHIBuffer *)0x0;
    local_2b0._8_8_ = (FRHIResource *)0x0;
    iVar26 = 0;
    uStack_37c = 0;
    uStack_378 = 0x4104;
    uStack_368 = 0;
    uVar9 = 0x40;
    if (0x40 < uVar28) {
      uVar9 = uVar28;
    }
    uStack_35c = 0;
    uStack_358 = 0;
    iStack_374 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
    local_360 = 0x70;
    uVar9 = uVar9 + 0x3f & 0xffffffc0;
    local_34c = 0;
    local_148 = '\x01';
    local_370 = L"NewPrimIdCollisionGroupPairs";
    uVar28 = uVar9 * 8;
    local_88 = (ulonglong)uVar28;
    uStack_80 = CONCAT44(iStack_374,0x4104);
    local_78 = L"NewPrimIdCollisionGroupPairs";
    uStack_70 = 0;
    local_58 = 0;
    local_68 = 0x70;
    uStack_60 = 0;
    local_398 = uVar9;
    local_380 = uVar28;
    TVar14 = FRHICommandListBase::CreateBuffer
                       ((FRHICommandListBase *)param_1,(FRHIBufferCreateDesc *)local_310);
    pFVar29 = (FRHIBuffer *)local_2b0._0_8_;
    if ((FRHIBuffer *)local_2b0 != TVar14.Reference) {
      pFVar29 = (FRHIBuffer *)(TVar14.Reference)->_padding_;
      (TVar14.Reference)->_padding_ = 0;
    }
    local_388 = pFVar29;
    if ((FRHIResource *)local_310._0_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_310._0_8_);
    }
    pFStack_2f8 = (FResourceArrayUploadInterface *)0x0;
    local_300 = (wchar_t *)0x14400;
    TVar15 = FRHICommandListBase::CreateShaderResourceView
                       ((FRHICommandListBase *)param_1,(FRHIBuffer *)(local_310 + 8),
                        (FInitializer *)pFVar29);
    if ((FRHIShaderResourceView *)(local_2b0 + 8) == TVar15.Reference) {
      local_390 = (FRHIResource *)local_2b0._8_8_;
    }
    else {
      local_390 = *(FRHIResource **)TVar15.Reference;
      *(undefined8 *)TVar15.Reference = 0;
    }
    if ((FRHIResource *)local_310._8_8_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_310._8_8_);
    }
    _Dst = FRHICommandListBase::LockBuffer
                     ((FRHICommandListBase *)param_1,pFVar29,0,uVar28,RLM_WriteOnly);
    memset(_Dst,0,(ulonglong)uVar9 << 3);
    iVar23 = *(int *)&param_4->field_0x28;
    local_3b8 = (ForElementType<unsigned_int>)&param_4->field_0x10;
    uStack_33c = 1;
    iVar22 = 0;
    iStack_32c = iVar26;
    iStack_340 = 0;
    if (iVar23 != 0) {
      puVar27 = *(uint **)&param_4->field_0x20;
      if (*(uint **)&param_4->field_0x20 == (uint *)0x0) {
        puVar27 = (uint *)local_3b8;
      }
      uVar28 = *puVar27;
      iVar26 = 0;
      while (uVar28 == 0) {
        lVar21 = (longlong)iStack_340;
        iVar26 = iVar26 + 0x20;
        iStack_340 = iStack_340 + 1;
        if ((int)(iVar23 + -1 + (iVar23 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_340) {
          iVar22 = *(int *)&param_4->field_0x28;
          iStack_32c = iVar23;
          goto LAB_148df5015;
        }
        uVar28 = (puVar27 + 1)[lVar21];
      }
      iVar22 = *(int *)&param_4->field_0x28;
      uStack_33c = -uVar28 & uVar28;
      uVar1 = (ulonglong)uStack_33c * 2 + 1;
      lVar21 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_318 = (int)lVar21;
      iStack_32c = local_318 + -1 + iVar26;
      if (iVar22 < iStack_32c) {
        iStack_32c = iVar23;
      }
    }
LAB_148df5015:
    iStack_320 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
    uVar28 = *(uint *)&param_4->field_0x28;
    TStack_2d8._padding_ = CONCAT44(uStack_33c,iStack_340);
    uVar9 = uVar28 & 0xffffffe0;
    uStack_330 = 0xffffffff;
    TStack_2d8.CurrentBitIndex = iStack_32c;
    TStack_2d8.UnvisitedBitMask = 0xffffffff;
    iVar23 = (int)uVar28 >> 5;
    TStack_2d8._28_4_ = iStack_32c;
    TStack_2d8.BaseBitIndex = iVar26;
    uStack_2b8 = CONCAT44(uStack_31c,iStack_320);
    local_348 = param_4;
    local_338 = (undefined1 *)local_3b8;
    local_328 = iVar26;
    iStack_324 = iStack_32c;
    local_2e0 = (FName)param_4;
    TStack_2d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_3b8;
    if ((((int)uVar28 < 0) || (iVar22 < (int)uVar28)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar7 = local_3b8;
    uVar2 = *(int *)((longlong)local_3b8 + 0x18);
    if (uVar28 != uVar2) {
      FVar25 = *(ForElementType<unsigned_int> *)((longlong)local_3b8 + 0x10);
      if (*(ForElementType<unsigned_int> *)((longlong)local_3b8 + 0x10) ==
          (ForElementType<unsigned_int>)0x0) {
        FVar25 = local_3b8;
      }
      uVar28 = -1 << ((byte)uVar28 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar23 * 4);
      while (uVar28 == 0) {
        lVar21 = (longlong)iVar23;
        uVar9 = uVar9 + 0x20;
        iVar23 = iVar23 + 1;
        uVar28 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
        goto LAB_148df5140;
        uVar28 = *(uint *)((undefined1 *)((longlong)FVar25 + 4) + lVar21 * 4);
      }
      uVar1 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
      lVar21 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      local_314 = (int)lVar21;
      uVar28 = local_314 + -1 + uVar9;
      if ((int)uVar2 < (int)uVar28) {
        uVar28 = uVar2;
      }
    }
LAB_148df5140:
    while( true ) {
      FVar17 = local_2e0;
      if (*(int *)((longlong)local_2e0 + 8) - *(int *)((longlong)local_2e0 + 0x34) !=
          (int)uStack_2b8) {
        local_3c8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FPrimitiveComponentId,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_3c8);
      }
      if (((TStack_2d8.CurrentBitIndex == uVar28) &&
          ((ForElementType<unsigned_int>)TStack_2d8.Array == FVar7)) && (FVar17 == (FName)param_4))
      break;
      uVar5 = *(undefined8 *)(*(longlong *)FVar17 + (longlong)TStack_2d8.CurrentBitIndex * 0x10);
      lVar21 = (**(code **)(param_3->_padding_ + 0xd8))(param_3);
      if (lVar21 == 0) {
        uVar11 = 0xffffffff;
      }
      else {
        uVar11 = *(undefined4 *)(lVar21 + 0x224);
      }
      *_Dst = uVar11;
      _Dst[1] = (int)((ulonglong)uVar5 >> 0x20);
      TStack_2d8.UnvisitedBitMask = TStack_2d8.UnvisitedBitMask & ~TStack_2d8._padding_._4_4_;
      _Dst = _Dst + 2;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d8);
    }
    FRHICommandListBase::UnlockBuffer((FRHICommandListBase *)param_1,local_388);
    uVar28 = local_398;
    if (param_5->HashTableSize < local_398) {
      param_5->HashTableSize = local_398;
      (param_5->PrimIdHashTable).NumBytes = 0;
      pFVar29 = (param_5->PrimIdHashTable).Buffer.Reference;
      if (pFVar29 != (FRHIBuffer *)0x0) {
        (param_5->PrimIdHashTable).Buffer.Reference = (FRHIBuffer *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar29);
      }
      pFVar3 = (param_5->PrimIdHashTable).UAV.Reference;
      if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
        (param_5->PrimIdHashTable).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
      pFVar4 = (param_5->PrimIdHashTable).SRV.Reference;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        (param_5->PrimIdHashTable).SRV.Reference = (FRHIShaderResourceView *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
      FRWBufferStructured::Initialize
                (&param_5->PrimIdHashTable,(FRHICommandListBase *)param_1,L"NiagaraPrimIdHashTable",
                 4,uVar28,Static,false,false,UAVMask);
      (param_5->HashToCollisionGroups).NumBytes = 0;
      pFVar29 = (param_5->HashToCollisionGroups).Buffer.Reference;
      if (pFVar29 != (FRHIBuffer *)0x0) {
        (param_5->HashToCollisionGroups).Buffer.Reference = (FRHIBuffer *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar29);
      }
      pFVar3 = (param_5->HashToCollisionGroups).UAV.Reference;
      if (pFVar3 != (FRHIUnorderedAccessView *)0x0) {
        (param_5->HashToCollisionGroups).UAV.Reference = (FRHIUnorderedAccessView *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar3);
      }
      pFVar4 = (param_5->HashToCollisionGroups).SRV.Reference;
      if (pFVar4 != (FRHIShaderResourceView *)0x0) {
        (param_5->HashToCollisionGroups).SRV.Reference = (FRHIShaderResourceView *)0x0;
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
      FRWBuffer::Initialize
                (&param_5->HashToCollisionGroups,(FRHICommandListBase *)param_1,
                 L"NiagaraPrimIdHashToCollisionGroups",4,uVar28,PF_R32_UINT,UAVCompute,Static,
                 (FResourceArrayUploadInterface *)0x0);
    }
    pTVar24 = &(param_5->HashToCollisionGroups).UAV;
    local_298.field1_0x8 = (FRHITransitionInfo_u_8)(param_5->PrimIdHashTable).UAV.Reference;
    local_3b8 = (ForElementType<unsigned_int>)&local_298;
    uStack_3b0 = 1;
    local_c8._12_4_ = uStack_3ac;
    local_c8.ArrayNum = 1;
    local_298._padding_._0_4_ = 0xffffffff;
    local_298._padding_._4_2_ = 0xffff;
    local_298.Type = UAV;
    local_298.AccessBefore = None;
    local_298.AccessAfter = UAVCompute;
    local_298.Flags = None;
    local_298.CommitInfo.bIsSet = false;
    local_c8.DataPtr = (FRHITransitionInfo *)local_3b8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_c8,None);
    local_268.field1_0x8.UAV = pTVar24->Reference;
    local_3b8 = (ForElementType<unsigned_int>)&local_268;
    uStack_3b0 = 1;
    local_b8._12_4_ = uStack_3ac;
    local_b8.ArrayNum = 1;
    local_268._padding_._0_4_ = 0xffffffff;
    local_268._padding_._4_2_ = 0xffff;
    local_268.Type = UAV;
    local_268.AccessBefore = None;
    local_268.AccessAfter = UAVCompute;
    local_268.Flags = None;
    local_268.CommitInfo.bIsSet = false;
    local_b8.DataPtr = (FRHITransitionInfo *)local_3b8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_b8,None);
    NiagaraFillGPUIntBuffer
              (param_1,param_2,(param_5->PrimIdHashTable).UAV.Reference,
               (param_5->PrimIdHashTable).NumBytes >> 2,0);
    local_238.field1_0x8 = (FRHITransitionInfo_u_8)(param_5->PrimIdHashTable).UAV.Reference;
    local_3b8 = (ForElementType<unsigned_int>)&local_238;
    uStack_3b0 = 1;
    local_a8._12_4_ = uStack_3ac;
    local_a8.ArrayNum = 1;
    local_238._padding_._0_4_ = 0xffffffff;
    local_238._padding_._4_2_ = 0xffff;
    local_238.Type = UAV;
    local_238.AccessBefore = UAVCompute;
    local_238.AccessAfter = UAVCompute;
    local_238.Flags = None;
    local_238.CommitInfo.bIsSet = false;
    local_a8.DataPtr = (FRHITransitionInfo *)local_3b8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_a8,None);
    NiagaraFillGPUIntBuffer
              (param_1,param_2,pTVar24->Reference,(param_5->HashToCollisionGroups).NumBytes >> 2,-1)
    ;
    local_208.field1_0x8 = (FRHITransitionInfo_u_8)pTVar24->Reference;
    local_3b8 = (ForElementType<unsigned_int>)&local_208;
    local_208._padding_._0_4_ = 0xffffffff;
    local_208._padding_._4_2_ = 0xffff;
    local_208.Type = UAV;
    local_208.AccessBefore = UAVCompute;
    local_208.AccessAfter = UAVCompute;
    local_208.Flags = None;
    local_208.CommitInfo.bIsSet = false;
    uStack_3b0 = 1;
    local_98._12_4_ = uStack_3ac;
    local_98.ArrayNum = 1;
    local_98.DataPtr = (FRHITransitionInfo *)local_3b8;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar16 = (FShaderType *)FNiagaraUpdateCollisionGroupMapCS::GetStaticType();
    FGlobalShaderMap::GetShader(this_00,&local_2f0,pFVar16,0);
    if (local_2f0.ShaderContent == (FShader *)0x0) {
      FVar17 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d8);
      ::FName::ToString((FName *)FVar17,&local_108);
      FNiagaraUpdateCollisionGroupMapCS::GetStaticType();
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    FNiagaraUpdateCollisionGroupMapCS::GetStaticType();
    aVar18 = (atomic<FRHIShader_*>)0x0;
    if (local_2f0.ShaderContent != (FShader *)0x0) {
      this = *(FShaderMapResource **)((longlong)local_2f0.ShaderMap + 8);
      if ((this == (FShaderMapResource *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                             ,0x426,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      aVar18 = (this->RHIShaders).Ptr[(local_2f0.ShaderContent)->ResourceIndex];
      if (((aVar18 == (atomic<FRHIShader_*>)0x0) &&
          (aVar18 = (atomic<FRHIShader_*>)
                    FShaderMapResource::CreateShaderOrCrash
                              (this,(local_2f0.ShaderContent)->ResourceIndex,true),
          aVar18 == (atomic<FRHIShader_*>)0x0)) &&
         (aVar18 = (atomic<FRHIShader_*>)0x0, 4 < (byte)LogShaders._0_1_)) {
        if ((*(longlong *)((longlong)local_2f0.ShaderMap + 0x18) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FShader::GetType(local_2f0.ShaderContent,
                         *(FShaderMapPointerTable **)((longlong)local_2f0.ShaderMap + 0x18));
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)
                   &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FNiagaraUpdateCollisionGroupMapCS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                    ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
      }
    }
    local_138 = (ForAnyElementType)(param_5->PrimIdHashTable).UAV.Reference;
    local_130 = param_5->HashTableSize;
    local_128 = (param_5->HashToCollisionGroups).UAV.Reference;
    local_120 = local_390;
    local_118 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
    if (((local_130 & 0x3f) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Result.HashTableSize % FNiagaraUpdateCollisionGroupMapCS::THREAD_COUNT == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProvider.cpp"
                           ,0x112,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SetComputePipelineState((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar18);
    pFVar19 = FNiagaraUpdateCollisionGroupMapCS::FParameters::FTypeInfo::GetStructMetadata();
    local_3a8.Ptr = (FShaderType *)local_2f0.ShaderContent;
    FStack_3a0 = (FName)local_2f0.ShaderMap;
    ValidateShaderParameters
              ((TShaderRefBase<FShader,FShaderMapPointerTable> *)&local_3a8,pFVar19,&local_138);
    ::SetShaderParameters
              (param_1,(FRHIComputeShader *)aVar18,&(local_2f0.ShaderContent)->Bindings,pFVar19,
               &local_138);
    iVar26 = (*(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34) + 0x3f;
    FRHIComputeCommandList::DispatchComputeShader
              ((FRHIComputeCommandList *)param_1,(int)((iVar26 >> 0x1f & 0x3fU) + iVar26) >> 6,1,1);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar20 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
      if ((((local_2f0.ShaderContent)->Bindings).RootParameterBufferIndex != 0xffff) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UnsetShaderUAVs(pFVar20,&(local_2f0.ShaderContent)->Bindings);
      FRHIComputeCommandList::SetBatchedShaderUnbinds
                ((FRHIComputeCommandList *)param_1,(FRHIComputeShader *)aVar18,pFVar20);
    }
    local_1d0 = (param_5->PrimIdHashTable).UAV.Reference;
    local_3a8.Ptr = (FShaderType *)&local_1d8;
    FStack_3a0.ComparisonIndex.Value = 1;
    uStack_f0 = 1;
    uStack_ec = FStack_3a0.Number;
    local_1d8 = 0xffffffff;
    local_1d4 = 0xffff;
    local_1c8 = 3;
    local_1c4 = 0x400;
    local_1c0 = 0x10;
    local_1bc = 0;
    local_1b0 = 0;
    local_f8.Ptr = local_3a8.Ptr;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)&local_f8,None);
    local_1a0 = (param_5->HashToCollisionGroups).UAV.Reference;
    local_3a8.Ptr = (FShaderType *)&local_1a8;
    FStack_3a0.ComparisonIndex.Value = 1;
    uStack_e0._0_4_ = 1;
    uStack_e0._4_4_ = FStack_3a0.Number;
    local_1a8 = 0xffffffff;
    local_1a4 = 0xffff;
    local_198 = 3;
    local_194 = 0x400;
    local_190 = 0x10;
    local_18c = 0;
    local_180 = 0;
    local_e8.Ptr = local_3a8.Ptr;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)&local_e8,None);
    if (local_390 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_390);
    }
    if (local_388 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_388);
    }
    if (local_148 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_158);
    }
  }
  return;
}

// ClearResults @ 148df8050

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FNiagaraAsyncGpuTraceProvider::ClearResults
          (FRHICommandList *param_1,EShaderPlatform param_2,FDispatchRequest *param_3)

{
  code *pcVar1;
  FShader *pFVar2;
  bool bVar3;
  uint uVar4;
  atomic<unsigned_int> aVar5;
  int iVar6;
  FRHIBreadcrumbAllocator *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FGlobalShaderMap *this;
  FShaderType *pFVar9;
  FName this_00;
  FRHIComputeShader *pFVar10;
  FShaderParametersMetadata *pFVar11;
  FRHIBatchedShaderUnbinds *pFVar12;
  undefined1 local_res8 [8];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b8;
  FRHIUnorderedAccessView *local_a8;
  uint local_a0;
  uint local_9c;
  TShaderRefBase<FNiagaraClearAsyncGpuTraceCS,FShaderMapPointerTable> local_98;
  char *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  wchar_t *pwStack_70;
  FRHIBreadcrumbScope local_68;
  char local_58;
  FString local_50;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_80 = 0xb2;
    local_88 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Private\\NiagaraAsyncGpuTraceProvider.cpp"
    ;
    local_78 = 0;
    pwStack_70 = L"NiagaraClearAsyncGpuTraceResults";
    ::Desc._padding_._0_4_ = 0x51cf84f0;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0xb2;
    ::Desc._padding_._4_4_ = uStack_7c;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51cf88d0;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FNiagaraAsyncGpuTraceProvider::ClearResults'::__l7::<lambda_1>::operator()<>'::__l2::
           _dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar7 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar8 = FMemStackBase::Alloc(&pFVar7->Inner,0x50,8);
  pFVar8->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar8->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar8->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar8->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar8->Allocator = pFVar7;
  pFVar8->TraceCpuSpecId = 0;
  pFVar8->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar4 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar8->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar8->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar8->ID = uVar4;
  pFVar8->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar8[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar3 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar3)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar5 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                         (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar5;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar8->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_68,(FRHIComputeCommandList *)param_1,pFVar8);
  local_58 = '\x01';
  if (param_3->MaxTraceCount != 0) {
    this = GetGlobalShaderMap(param_2);
    pFVar9 = (FShaderType *)FNiagaraClearAsyncGpuTraceCS::GetStaticType();
    FGlobalShaderMap::GetShader(this,&local_b8,pFVar9,0);
    if (local_b8.ShaderContent == (FShader *)0x0) {
      this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
      ::FName::ToString((FName *)this_00,&local_50);
      FNiagaraClearAsyncGpuTraceCS::GetStaticType();
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                         ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNiagaraClearAsyncGpuTraceCS::GetStaticType();
    pFVar2 = local_b8.ShaderContent;
    local_98.ShaderMap = local_b8.ShaderMap;
    local_98.ShaderContent = (FNiagaraClearAsyncGpuTraceCS *)local_b8.ShaderContent;
    local_a8 = (param_3->ResultsBuffer->UAV).Reference;
    local_9c = param_3->ResultsOffset;
    local_a0 = param_3->MaxTraceCount;
    pFVar10 = TShaderRefBase<FNiagaraClearAsyncGpuTraceCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_98);
    SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar10);
    pFVar10 = TShaderRefBase<FNiagaraClearAsyncGpuTraceCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_98);
    pFVar11 = FNiagaraClearAsyncGpuTraceCS::FParameters::FTypeInfo::GetStructMetadata();
    local_38.ShaderContent = local_b8.ShaderContent;
    local_38.ShaderMap = local_b8.ShaderMap;
    ValidateShaderParameters(&local_38,pFVar11,&local_a8);
    ::SetShaderParameters(param_1,pFVar10,&pFVar2->Bindings,pFVar11,&local_a8);
    iVar6 = param_3->MaxTraceCount + 0x1f;
    DispatchComputeShader
              ((FRHIComputeCommandList *)param_1,pFVar2,(int)((iVar6 >> 0x1f & 0x1fU) + iVar6) >> 5,
               1,1);
    pFVar10 = TShaderRefBase<FNiagaraClearAsyncGpuTraceCS,FShaderMapPointerTable>::GetComputeShader
                        (&local_98);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar12 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
      if (((pFVar2->Bindings).RootParameterBufferIndex != 0xffff) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                             ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
         , bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      UnsetShaderUAVs(pFVar12,&pFVar2->Bindings);
      FRHIComputeCommandList::SetBatchedShaderUnbinds
                ((FRHIComputeCommandList *)param_1,pFVar10,pFVar12);
    }
    if (local_58 == '\0') {
      return;
    }
  }
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_68);
  return;
}

// CreateSupportedProviders @ 148dfa740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArray<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,TSizedDefaultAllocator<32>_>
* __cdecl FNiagaraAsyncGpuTraceProvider::CreateSupportedProviders
                    (TArray<TUniquePtr<FNiagaraAsyncGpuTraceProvider,TDefaultDelete<FNiagaraAsyncGpuTraceProvider>_>,TSizedDefaultAllocator<32>_>
                     *__return_storage_ptr__,EShaderPlatform param_1,
                    FNiagaraGpuComputeDispatchInterface *param_2,
                    TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
                    *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  uVar2 = param_3->ArrayNum;
  uVar5 = (ulonglong)(int)uVar2;
  pFVar7 = (param_3->AllocatorInstance).Data;
  pFVar1 = pFVar7 + uVar5;
  do {
    if (param_3->ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<TEnumAsByte<enum_ENDICollisionQuery_AsyncGpuTraceProvider::Type>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) {
      return __return_storage_ptr__;
    }
    if (*pFVar7 == (FScriptContainerElement)0x1) {
      if (GNiagaraAsyncGpuTraceHwrtEnabled != 0) {
        bVar3 = IsRayTracingEnabled();
        if (bVar3) {
          puVar6 = ::operator_new(0x38);
          if (puVar6 == (undefined8 *)0x0) goto LAB_148dfa853;
          *(EShaderPlatform *)(puVar6 + 1) = param_1;
          puVar6[2] = param_2;
          *puVar6 = &___7FNiagaraAsyncGpuTraceProviderHwrt__6B_;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          puVar6[6] = 0;
          goto LAB_148dfa855;
        }
      }
    }
    else if ((*pFVar7 == (FScriptContainerElement)0x2) && (GNiagaraAsyncGpuTraceGsdfEnabled != 0)) {
      bVar3 = DoesProjectSupportDistanceFields();
      if (bVar3) {
        puVar6 = ::operator_new(0x230);
        if (puVar6 == (undefined8 *)0x0) {
LAB_148dfa853:
          puVar6 = (undefined8 *)0x0;
        }
        else {
          *(EShaderPlatform *)(puVar6 + 1) = param_1;
          puVar6[2] = param_2;
          *puVar6 = &___7FNiagaraAsyncGpuTraceProviderGsdf__6B_;
          memset(puVar6 + 4,0,0x200);
          puVar6[0x44] = 0;
        }
LAB_148dfa855:
        iVar4 = __return_storage_ptr__->ArrayNum;
        if (iVar4 == __return_storage_ptr__->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar4 + 1;
        *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
             puVar6;
      }
    }
    uVar5 = (ulonglong)uVar2;
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// IssueTraces @ 148e09790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceProvider::IssueTraces
          (FNiagaraAsyncGpuTraceProvider *this,FRHICommandList *param_1,FDispatchRequest *param_2,
          TUniformBufferRef<FSceneUniformParameters> param_3,FCollisionGroupHashMap *param_4)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = *(FRHIResource **)param_3;
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// PostRenderOpaque @ 148e0b1d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraAsyncGpuTraceProvider::PostRenderOpaque
          (FNiagaraAsyncGpuTraceProvider *this,FRHICommandList *param_1,
          TStridedView<FSceneView_const_,int> *param_2,
          TUniformBufferRef<FSceneUniformParameters> param_3,FCollisionGroupHashMap *param_4)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = *(FRHIResource **)param_3;
  if (this_00 == (FRHIResource *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = &this_00->AtomicFlags;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete(this_00);
  }
  return;
}

// RequiresGlobalDistanceField @ 148e0c750

bool __cdecl
FNiagaraAsyncGpuTraceProvider::RequiresGlobalDistanceField
          (Type param_1,
          TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  bool bVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  if (param_1 == GSDF) {
LAB_148e0c784:
    if ((GNiagaraAsyncGpuTraceGsdfEnabled != 0) &&
       (bVar1 = DoesProjectSupportDistanceFields(), bVar1)) {
      return true;
    }
  }
  else if (param_1 == Default) {
    pFVar2 = (param_2->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_2->ArrayNum;
    for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
      if (*pFVar2 == (FScriptContainerElement)0x2) goto LAB_148e0c784;
    }
  }
  return false;
}

// RequiresRayTracingScene @ 148e0c7b0

bool __cdecl
FNiagaraAsyncGpuTraceProvider::RequiresRayTracingScene
          (Type param_1,
          TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  bool bVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  if (param_1 == HWRT) {
LAB_148e0c7e4:
    if ((GNiagaraAsyncGpuTraceHwrtEnabled != 0) && (bVar1 = IsRayTracingEnabled(), bVar1)) {
      return true;
    }
  }
  else if (param_1 == Default) {
    pFVar2 = (param_2->AllocatorInstance).Data;
    pFVar3 = pFVar2 + param_2->ArrayNum;
    for (; pFVar2 != pFVar3; pFVar2 = pFVar2 + 1) {
      if (*pFVar2 == (FScriptContainerElement)0x1) goto LAB_148e0c7e4;
    }
  }
  return false;
}

// Reset @ 148e0c810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNiagaraAsyncGpuTraceProvider::Reset(FNiagaraAsyncGpuTraceProvider *this)

{
  return;
}

// ResolveSupportedType @ 148e0c9d0

Type __cdecl
FNiagaraAsyncGpuTraceProvider::ResolveSupportedType
          (Type param_1,
          TArray<TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider::Type>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  bool bVar3;
  Type TVar4;
  Type TVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if (param_1 != Default) {
    if (param_1 == HWRT) {
      if ((GNiagaraAsyncGpuTraceHwrtEnabled != 0) && (bVar3 = IsRayTracingEnabled(), bVar3)) {
        return HWRT;
      }
      return None;
    }
    if (param_1 != GSDF) {
      return None;
    }
    if ((GNiagaraAsyncGpuTraceGsdfEnabled != 0) &&
       (bVar3 = DoesProjectSupportDistanceFields(), bVar3)) {
      return GSDF;
    }
    return None;
  }
  pFVar6 = (param_2->AllocatorInstance).Data;
  iVar2 = param_2->ArrayNum;
  pFVar1 = pFVar6 + iVar2;
  TVar5 = None;
  do {
    while( true ) {
      if (param_2->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TEnumAsByte<enum_ENDICollisionQuery_AsyncGpuTraceProvider::Type>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar1) {
        return TVar5;
      }
      if ((*pFVar6 != (FScriptContainerElement)0x0) &&
         (TVar4 = ResolveSupportedType((uint)(byte)*pFVar6,param_2), TVar4 != None)) break;
LAB_148e0caab:
      pFVar6 = pFVar6 + 1;
    }
    if (TVar5 != None) {
      if (TVar5 != TVar4) {
        return Default;
      }
      goto LAB_148e0caab;
    }
    pFVar6 = pFVar6 + 1;
    TVar5 = TVar4;
  } while( true );
}

