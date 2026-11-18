// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// operator() @ 14927e5f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>::operator()
          (void *this,TArrayView<TTuple<void_*,unsigned_int>_const_,int> *param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FFloat16 *pFVar8;
  FFloat16 *pFVar9;
  FFloat16 *pFVar10;
  
  pFVar8 = (FFloat16 *)0x0;
  if ((param_1->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)((longlong)this + 0x10);
  iVar1 = **(int **)param_1->DataPtr;
  pFVar10 = pFVar8;
  if (uVar7 != 0xffffffff) {
    uVar5 = 0;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = *(FFloat16 **)(param_1->DataPtr + (int)uVar7);
  }
  uVar7 = *(uint *)((longlong)this + 0x14);
  uVar5 = 0;
  pFVar9 = pFVar8;
  if (uVar7 != 0xffffffff) {
    uVar6 = uVar5;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar9 = *(FFloat16 **)(param_1->DataPtr + (int)uVar7);
  }
  uVar7 = *(uint *)((longlong)this + 0x18);
  if (uVar7 != 0xffffffff) {
    uVar6 = uVar5;
    if ((int)uVar7 < param_1->ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = *(FFloat16 **)(param_1->DataPtr + (int)uVar7);
  }
  FNiagaraDataSet::CopyFromGPUReadback
            ((FNiagaraDataSet *)(*(longlong *)this + 0x20),(float *)pFVar10,(int *)pFVar8,pFVar9,0,
             iVar1,*(uint *)((longlong)this + 0x1c),*(uint *)((longlong)this + 0x20),
             *(uint *)((longlong)this + 0x24));
  lVar2 = *(longlong *)(*(longlong *)this + 0x98);
  if (lVar2 != 0) {
    uVar7 = *(uint *)((longlong)this + 0x28);
    if (uVar7 != 0xffffffff) {
      uVar6 = uVar5;
      if ((int)uVar7 < param_1->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      _Src = *(void **)(param_1->DataPtr + (int)uVar7);
      if (_Src != (void *)0x0) {
        uVar7 = *(uint *)((longlong)this + 0x28);
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = *(uint *)&param_1->DataPtr[(int)uVar7].field_0x8 >> 2;
        if (((int)uVar7 < iVar1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumIDs >= InstanceCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                               ,0xbc,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                  ((TArray<int,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x48),uVar7,Default);
        memcpy(*(void **)(lVar2 + 0x48),_Src,(ulonglong)uVar7 << 2);
        goto LAB_14927e8f7;
      }
    }
    *(undefined4 *)(lVar2 + 0x50) = 0;
    if (*(int *)(lVar2 + 0x54) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(lVar2 + 0x48),0,(int *)(lVar2 + 0x54));
    }
  }
LAB_14927e8f7:
  FNiagaraDataSetReadback::ReadbackCompleteInternal(*(FNiagaraDataSetReadback **)this);
  return;
}

// EnqueueReadback @ 14929b080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraDataSetReadback::EnqueueReadback
          (FNiagaraDataSetReadback *this,FNiagaraEmitterInstance *param_1)

{
  FNiagaraComputeExecutionContext *pFVar1;
  FNiagaraSystemInstance *pFVar2;
  FNiagaraGpuComputeDispatchInterface *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraDataSetReadback *pFVar5;
  FNiagaraDataBuffer *pFVar6;
  code *pcVar7;
  bool bVar8;
  FNiagaraEmitterHandle *pFVar9;
  TSharedRef<FNiagaraDataSetReadback,1> *pTVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  longlong lVar12;
  FNiagaraDataSet *pFVar13;
  FNiagaraStatelessEmitterInstance *this_02;
  FNiagaraParameterStore *pFVar14;
  code **ppcVar15;
  atomic<int> *paVar16;
  ulonglong uVar17;
  undefined1 auStackY_1d8 [32];
  code *local_188 [2];
  undefined **local_178;
  FNiagaraDataSetReadback *local_170;
  TReferenceControllerBase<1> *local_168;
  undefined8 local_160;
  TSharedRef<FNiagaraDataSetReadback,1> local_158;
  TSharedRef<FNiagaraDataSetReadback,1> local_148;
  FNiagaraParameterStore local_138;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  if ((param_1 == (FNiagaraEmitterInstance *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EmitterInstance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                         ,0x1a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->PendingReadbacks != (atomic<int>)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsReady()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                         ,0x1b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar9 = FNiagaraEmitterInstance::GetEmitterHandle(param_1);
  this->SourceName = pFVar9->Name;
  if ((param_1->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParticleDataSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                         ,0x39,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar13 = param_1->ParticleDataSet;
  if (((pFVar13->CompiledData).StructPtr == (FNiagaraDataSetCompiledData *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompiledData.Get() != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x169,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FNiagaraDataSet::Init(&this->DataSet,(pFVar13->CompiledData).StructPtr,0);
  pFVar1 = param_1->GPUExecContext;
  if (pFVar1 == (FNiagaraComputeExecutionContext *)0x0) {
    lVar12 = (**(code **)(param_1->_padding_ + 0x68))(param_1);
    if (lVar12 == 0) {
      this_02 = (FNiagaraStatelessEmitterInstance *)
                (**(code **)(param_1->_padding_ + 0x70))(param_1);
      if (this_02 != (FNiagaraStatelessEmitterInstance *)0x0) {
        LOCK();
        this->PendingReadbacks = (atomic<int>)((int)this->PendingReadbacks + 1);
        UNLOCK();
        FNiagaraDataSet::BeginSimulate(&this->DataSet,true);
        FNiagaraDataSet::EndSimulate(&this->DataSet,true);
        pTVar10 = TSharedFromThis<FNiagaraDataSetReadback,1>::AsShared
                            ((TSharedFromThis<FNiagaraDataSetReadback,1> *)this,&local_148);
        pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
        local_170 = pTVar10->Object;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_160 = 0;
        local_178 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::`32'::<lambda_2>,0,0>
                     ::_vftable_;
        local_188[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FNiagaraDataSetReadback::EnqueueReadback'::__l32::<lambda_2>,void>
                       ::Call;
        local_168 = pTVar4;
        FNiagaraStatelessEmitterInstance::EnqueueParticleDataBufferReadback
                  (this_02,(this->DataSet).CurrentData,(TFunction<void___cdecl(void)> *)local_188);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_148.SharedReferenceCount.ReferenceController);
        pFVar14 = FNiagaraParameterStore::FNiagaraParameterStore(&local_138);
        FNiagaraParameterStore::operator=(&this->ParameterStore,pFVar14);
        FNiagaraParameterStore::~FNiagaraParameterStore(&local_138);
      }
    }
    else {
      if ((param_1->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParticleDataSet",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                             ,0x39,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = param_1->ParticleDataSet->CurrentData;
      if (pFVar6 == (FNiagaraDataBuffer *)0x0) {
        FNiagaraDataSet::CopyFromGPUReadback
                  (&this->DataSet,(float *)0x0,(int *)0x0,(FFloat16 *)0x0,0,0,0,0,0);
      }
      else {
        pFVar13 = FNiagaraEmitterInstance::GetParticleData(param_1);
        FNiagaraDataSet::CopyTo(pFVar13,&this->DataSet,0,pFVar6->NumInstances,true);
      }
      FNiagaraParameterStore::operator=
                (&this->ParameterStore,(FNiagaraParameterStore *)(lVar12 + 0x488));
    }
  }
  else {
    FNiagaraParameterStore::operator=
              (&this->ParameterStore,(FNiagaraParameterStore *)&pFVar1->CombinedParamStore);
    pFVar2 = param_1->ParentSystemInstance;
    LOCK();
    this->PendingReadbacks = (atomic<int>)((int)this->PendingReadbacks + 1);
    UNLOCK();
    pTVar10 = TSharedFromThis<FNiagaraDataSetReadback,1>::AsShared
                        ((TSharedFromThis<FNiagaraDataSetReadback,1> *)this,&local_158);
    pFVar3 = (pFVar2->ComputeDispatchInterfacePtr).Object;
    pTVar4 = (pTVar10->SharedReferenceCount).ReferenceController;
    pFVar5 = pTVar10->Object;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar16 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar16 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    local_a8[0] = (code *)0x0;
    local_80 = FMemory::Malloc(0x28,8);
    local_80[1] = (code *)pFVar5;
    *local_80 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FNiagaraDataSetReadback::EnqueueReadback'::`19'::<lambda_1>,1,1>
                         ::_vftable_;
    local_80[2] = (code *)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar16 = (atomic<int>)((int)*paVar16 + 1);
      UNLOCK();
    }
    local_80[3] = (code *)pFVar3;
    local_80[4] = (code *)pFVar1;
    if (local_80 != (code **)&DAT_fffffffffffffff8) {
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraDataSetReadback::EnqueueReadback_::__l19::TSTR_NiagaraDataSetReadback38>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_78._0_8_ = local_a8[0];
      local_50 = local_80;
      local_80 = (code **)0x0;
      local_78._16_8_ = local_98[0];
      local_78._24_8_ = local_98[1];
      local_78._32_8_ = local_98[2];
      local_a8[0] = (code *)0x0;
      local_48 = 2;
      pFVar11 = (FRenderCommandTag *)
                TRenderCommandTag<`FNiagaraDataSetReadback::EnqueueReadback'::__l19::TSTR_NiagaraDataSetReadback38>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_78,pFVar11);
      uVar17 = (ulonglong)local_48;
      if ((2 < uVar17) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_78._0_8_ != (code *)0x0) {
          ppcVar15 = (code **)(local_78 + 0x10);
          if (local_50 != (code **)0x0) {
            ppcVar15 = local_50;
          }
          (**(code **)(*ppcVar15 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17])(local_78);
      }
    }
    if (local_a8[0] != (code *)0x0) {
      ppcVar15 = local_a8 + 2;
      if (local_80 != (code **)0x0) {
        ppcVar15 = local_80;
      }
      (**(code **)(*ppcVar15 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  return;
}

// GPUReadbackInternal @ 14929d060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraDataSetReadback::GPUReadbackInternal
          (FNiagaraDataSetReadback *this,FRHICommandListImmediate *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2,FNiagaraComputeExecutionContext *param_3)

{
  FNiagaraDataBuffer *pFVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNiagaraDataSetReadback *pFVar4;
  code *pcVar5;
  FRHICommandListImmediate *this_00;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  FRWBuffer *pFVar11;
  TSharedRef<FNiagaraDataSetReadback,1> *pTVar12;
  longlong lVar13;
  ForElementType<FRHITransitionInfo> FVar14;
  ForElementType<FNiagaraGpuReadbackManager::FBufferRequest> FVar15;
  undefined8 *puVar16;
  uint uVar17;
  atomic<int> *paVar18;
  uchar *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 uVar22;
  undefined1 auStackY_2d8 [32];
  undefined1 local_288 [4];
  uint local_284;
  uint local_280;
  longlong local_278;
  uint local_270;
  uint local_26c;
  uint local_268;
  FRHICommandListImmediate *local_260;
  FNiagaraDataSetReadback *local_258;
  FNiagaraGpuReadbackManager *local_250;
  ForElementType<FRHITransitionInfo> local_248;
  int iStack_240;
  undefined4 uStack_23c;
  ForElementType<FNiagaraGpuReadbackManager::FBufferRequest> local_238;
  uint uStack_230;
  undefined4 uStack_22c;
  ForElementType<FRHITransitionInfo> local_228;
  int iStack_220;
  undefined4 uStack_21c;
  TArrayView<FRHITransitionInfo_const_,int> local_218;
  TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> local_208;
  TSharedRef<FNiagaraDataSetReadback,1> local_1f8;
  TArrayView<FRHITransitionInfo_const_,int> local_1e8;
  code *local_1d8 [5];
  undefined8 *local_1b0;
  ForElementType<FNiagaraGpuReadbackManager::FBufferRequest> local_1a8;
  uint local_150;
  uint local_14c;
  ForElementType<FRHITransitionInfo> local_148;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_250 = (param_2->GpuReadbackManagerPtr).Ptr;
  pFVar1 = param_3->MainDataSet->CurrentData;
  local_260 = param_1;
  local_258 = this;
  if (((pFVar1 == (FNiagaraDataBuffer *)0x0) || (local_250 == (FNiagaraGpuReadbackManager *)0x0)) ||
     (uVar21 = pFVar1->GPUInstanceCountBufferOffset, uVar21 == 0xffffffff)) {
    FNiagaraDataSet::CopyFromGPUReadback
              (&this->DataSet,(float *)0x0,(int *)0x0,(FFloat16 *)0x0,0,0,0,0,0);
    ReadbackCompleteInternal(this);
  }
  else {
    bVar8 = IsInParallelRenderingThread();
    if ((!bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInParallelRenderingThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                           ,0x6a,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_14c = 5;
    local_1a8.SecondaryData = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0;
    local_150 = 0;
    pFVar11 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer
                        (&param_2->GPUInstanceCounterManager);
    uVar9 = local_150;
    if (local_150 == local_14c) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                        (0x810,&local_1a8,(int *)&local_14c);
    }
    local_150 = uVar9 + 1;
    FVar15 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1a8;
    if (local_1a8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0)
    {
      FVar15 = local_1a8.SecondaryData;
    }
    lVar13 = (longlong)(int)uVar9;
    uVar9 = 0xffffffff;
    *(FRHIBuffer **)((longlong)FVar15 + lVar13 * 0x10) = (pFVar11->Buffer).Reference;
    *(uint *)((uchar *)((longlong)FVar15 + 8) + lVar13 * 0x10) = uVar21 * 4;
    puVar19 = (uchar *)((longlong)FVar15 + 0xc) + lVar13 * 0x10;
    puVar19[0] = '\x04';
    puVar19[1] = '\0';
    puVar19[2] = '\0';
    puVar19[3] = '\0';
    if ((pFVar1->GPUBufferFloat).NumBytes == 0) {
      local_280 = 0xffffffff;
    }
    else {
      local_280 = local_150;
      if (local_150 == local_14c) {
        local_280 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                              (0x810,&local_1a8,(int *)&local_14c);
      }
      local_150 = local_280 + 1;
      FVar15 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1a8;
      if (local_1a8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0
         ) {
        FVar15 = local_1a8.SecondaryData;
      }
      puVar16 = (undefined8 *)((longlong)FVar15 + (longlong)(int)local_280 * 0x10);
      uVar21 = (pFVar1->GPUBufferFloat).NumBytes;
      *puVar16 = (pFVar1->GPUBufferFloat).Buffer.Reference;
      *(undefined4 *)(puVar16 + 1) = 0;
      *(uint *)((longlong)puVar16 + 0xc) = uVar21;
    }
    if ((pFVar1->GPUBufferHalf).NumBytes == 0) {
      local_284 = 0xffffffff;
    }
    else {
      local_284 = local_150;
      if (local_150 == local_14c) {
        local_284 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                              (0x810,&local_1a8,(int *)&local_14c);
      }
      local_150 = local_284 + 1;
      FVar15 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1a8;
      if (local_1a8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0
         ) {
        FVar15 = local_1a8.SecondaryData;
      }
      puVar16 = (undefined8 *)((longlong)FVar15 + (longlong)(int)local_284 * 0x10);
      uVar21 = (pFVar1->GPUBufferHalf).NumBytes;
      *puVar16 = (pFVar1->GPUBufferHalf).Buffer.Reference;
      *(undefined4 *)(puVar16 + 1) = 0;
      *(uint *)((longlong)puVar16 + 0xc) = uVar21;
    }
    uVar21 = local_284;
    if ((pFVar1->GPUBufferInt).NumBytes == 0) {
      uVar10 = 0xffffffff;
    }
    else {
      uVar10 = local_150;
      if (local_150 == local_14c) {
        uVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                           (0x810,&local_1a8,(int *)&local_14c);
      }
      local_150 = uVar10 + 1;
      FVar15 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1a8;
      if (local_1a8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0
         ) {
        FVar15 = local_1a8.SecondaryData;
      }
      puVar16 = (undefined8 *)((longlong)FVar15 + (longlong)(int)uVar10 * 0x10);
      uVar17 = (pFVar1->GPUBufferInt).NumBytes;
      *puVar16 = (pFVar1->GPUBufferInt).Buffer.Reference;
      *(undefined4 *)(puVar16 + 1) = 0;
      *(uint *)((longlong)puVar16 + 0xc) = uVar17;
    }
    if ((pFVar1->GPUIDToIndexTable).NumBytes != 0) {
      uVar9 = local_150;
      if (local_150 == local_14c) {
        uVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>_>
                          (0x810,&local_1a8,(int *)&local_14c);
      }
      local_150 = uVar9 + 1;
      FVar15 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1a8;
      if (local_1a8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0
         ) {
        FVar15 = local_1a8.SecondaryData;
      }
      puVar16 = (undefined8 *)((longlong)FVar15 + (longlong)(int)uVar9 * 0x10);
      uVar17 = (pFVar1->GPUIDToIndexTable).NumBytes;
      *puVar16 = (pFVar1->GPUIDToIndexTable).Buffer.Reference;
      *(undefined4 *)(puVar16 + 1) = 0;
      *(uint *)((longlong)puVar16 + 0xc) = uVar17;
    }
    local_270 = pFVar1->FloatStride;
    local_268 = pFVar1->HalfStride;
    local_26c = pFVar1->Int32Stride;
    local_148.SecondaryData = (ForElementType<FRHITransitionInfo>)0x0;
    local_50 = 0;
    local_4c = 5;
    if (((int)local_150 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar15 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1a8;
    if (local_1a8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0)
    {
      FVar15 = local_1a8.SecondaryData;
    }
    if (local_50 == local_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                           (0x830,&local_148,&local_4c);
    }
    lVar13 = (longlong)local_50;
    local_50 = local_50 + 1;
    uVar2 = *(undefined8 *)FVar15;
    FVar14 = (ForElementType<FRHITransitionInfo>)&local_148;
    if (local_148.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      FVar14 = local_148.SecondaryData;
    }
    uVar17 = 1;
    puVar20 = (undefined4 *)(lVar13 * 0x30 + (longlong)FVar14);
    *puVar20 = 0xffffffff;
    *(undefined2 *)(puVar20 + 1) = 0xffff;
    *(undefined8 *)(puVar20 + 2) = uVar2;
    *(undefined1 *)(puVar20 + 4) = 2;
    puVar20[5] = FNiagaraGPUInstanceCountManager::kCountBufferDefaultState;
    puVar20[6] = 0x80;
    *(undefined1 *)(puVar20 + 7) = 0;
    *(undefined1 *)(puVar20 + 10) = 0;
    if (1 < (int)local_150) {
      local_278 = 0x10;
      do {
        uVar22 = 0x70;
        if (uVar17 == uVar9) {
          uVar22 = 0x10;
        }
        uVar21 = 0;
        if ((int)uVar17 < (int)local_150) {
          uVar21 = ~uVar17 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar15 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1a8;
        if (local_1a8.SecondaryData !=
            (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0) {
          FVar15 = local_1a8.SecondaryData;
        }
        if (local_50 == local_4c) {
          local_50 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<FRHITransitionInfo>_>
                               (0x830,&local_148,&local_4c);
        }
        lVar13 = (longlong)local_50;
        local_50 = local_50 + 1;
        uVar2 = *(undefined8 *)((longlong)FVar15 + local_278);
        FVar14 = (ForElementType<FRHITransitionInfo>)&local_148;
        if (local_148.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
          FVar14 = local_148.SecondaryData;
        }
        local_278 = local_278 + 0x10;
        uVar17 = uVar17 + 1;
        *(undefined4 *)((longlong)FVar14 + lVar13 * 0x30) = 0xffffffff;
        ((uchar *)((longlong)FVar14 + 4) + lVar13 * 0x30)[0] = 0xff;
        ((uchar *)((longlong)FVar14 + 4) + lVar13 * 0x30)[1] = 0xff;
        *(undefined8 *)((uchar *)((longlong)FVar14 + 8) + lVar13 * 0x30) = uVar2;
        ((uchar *)((longlong)FVar14 + 0x10))[lVar13 * 0x30] = '\x02';
        *(undefined4 *)((uchar *)((longlong)FVar14 + 0x14) + lVar13 * 0x30) = uVar22;
        puVar19 = (uchar *)((longlong)FVar14 + 0x18) + lVar13 * 0x30;
        puVar19[0] = 0x80;
        puVar19[1] = '\0';
        puVar19[2] = '\0';
        puVar19[3] = '\0';
        ((uchar *)((longlong)FVar14 + 0x1c))[lVar13 * 0x30] = '\0';
        ((uchar *)((longlong)FVar14 + 0x28))[lVar13 * 0x30] = '\0';
        this = local_258;
        uVar21 = local_284;
      } while ((int)uVar17 < (int)local_150);
    }
    iVar6 = local_50;
    local_248 = (ForElementType<FRHITransitionInfo>)&local_148;
    if (local_148.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      local_248 = local_148.SecondaryData;
    }
    if ((local_50 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_240 = iVar6;
    local_218._12_4_ = uStack_23c;
    local_218.ArrayNum = iVar6;
    local_218.DataPtr = (FRHITransitionInfo *)local_248;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)local_260,&local_218,None);
    pTVar12 = TSharedFromThis<FNiagaraDataSetReadback,1>::AsShared
                        ((TSharedFromThis<FNiagaraDataSetReadback,1> *)this,&local_1f8);
    pTVar3 = (pTVar12->SharedReferenceCount).ReferenceController;
    pFVar4 = pTVar12->Object;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      paVar18 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar18 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
    }
    local_1d8[0] = (code *)0x0;
    local_1b0 = FMemory::Malloc(0x38,8);
    uStack_230 = local_150;
    local_1b0[1] = pFVar4;
    *local_1b0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FNiagaraDataSetReadback::GPUReadbackInternal'::`2'::<lambda_1>,0,1>
                  ::_vftable_;
    local_1b0[2] = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar18 = (atomic<int>)((int)*paVar18 + 1);
      UNLOCK();
    }
    *(uint *)(local_1b0 + 3) = local_280;
    *(uint *)((longlong)local_1b0 + 0x24) = local_270;
    *(uint *)(local_1b0 + 5) = local_26c;
    *(uint *)((longlong)local_1b0 + 0x1c) = uVar21;
    *(uint *)(local_1b0 + 4) = uVar10;
    *(uint *)((longlong)local_1b0 + 0x2c) = local_268;
    *(uint *)(local_1b0 + 6) = uVar9;
    if (local_1b0 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_1d8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`FNiagaraDataSetReadback::GPUReadbackInternal'::__l2::<lambda_1>,void,TArrayView<TTuple<void_*,unsigned_int>_const_,int>_>
                     ::Call;
    }
    FVar15 = (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)&local_1a8;
    if (local_1a8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0)
    {
      FVar15 = local_1a8.SecondaryData;
    }
    if (((int)local_150 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = local_260;
    local_208._12_4_ = uStack_22c;
    local_208.ArrayNum = uStack_230;
    local_238 = FVar15;
    local_208.DataPtr = (FBufferRequest *)FVar15;
    FNiagaraGpuReadbackManager::EnqueueReadbacks
              (local_250,(FRHICommandList *)local_260,&local_208,
               (TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
               local_1d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1f8.SharedReferenceCount.ReferenceController);
    iVar6 = local_50;
    lVar13 = (longlong)local_50;
    FVar14 = (ForElementType<FRHITransitionInfo>)&local_148;
    if (local_148.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      FVar14 = local_148.SecondaryData;
    }
    puVar19 = (uchar *)((longlong)FVar14 + 0x14);
    while( true ) {
      if (local_50 != iVar6) {
        local_288[0] = 0;
        `TCheckedPointerIterator<FRHITransitionInfo,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_288);
      }
      iVar7 = local_50;
      if ((ForElementType<FRHITransitionInfo> *)(puVar19 + -0x14) ==
          (ForElementType<FRHITransitionInfo> *)(lVar13 * 0x30 + (longlong)FVar14)) break;
      uVar22 = *(undefined4 *)puVar19;
      *(undefined4 *)puVar19 = *(undefined4 *)(puVar19 + 4);
      *(undefined4 *)(puVar19 + 4) = uVar22;
      puVar19 = puVar19 + 0x30;
    }
    local_228 = (ForElementType<FRHITransitionInfo>)&local_148;
    if (local_148.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      local_228 = local_148.SecondaryData;
    }
    if ((local_50 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_220 = iVar7;
    local_1e8._12_4_ = uStack_21c;
    local_1e8.ArrayNum = iVar7;
    local_1e8.DataPtr = (FRHITransitionInfo *)local_228;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)this_00,&local_1e8,None);
    if (local_148.SecondaryData != (ForElementType<FRHITransitionInfo>)0x0) {
      FMemory::Free((void *)local_148.SecondaryData);
    }
    if (local_1a8.SecondaryData != (ForElementType<FNiagaraGpuReadbackManager::FBufferRequest>)0x0)
    {
      FMemory::Free((void *)local_1a8.SecondaryData);
    }
  }
  return;
}

// ImmediateReadback @ 1492a9e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FNiagaraDataSetReadback::ImmediateReadback
          (FNiagaraDataSetReadback *this,FNiagaraEmitterInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraGpuComputeDispatchInterface *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraGpuComputeDispatchInterface *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  EnqueueReadback(this,param_1);
  if (this->PendingReadbacks != (atomic<int>)0x0) {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FNiagaraDataSetReadback::ImmediateReadback'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    pFStack_70 = (param_1->ParentSystemInstance->ComputeDispatchInterfacePtr).Object;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FNiagaraDataSetReadback::ImmediateReadback_::__l5::TSTR_NiagaraFlushReadback84>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FNiagaraDataSetReadback::ImmediateReadback'::__l5::TSTR_NiagaraFlushReadback84>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
    FlushRenderingCommands();
    if (this->PendingReadbacks != (atomic<int>)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsReady()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                         ,0x5c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ReadbackCompleteInternal @ 1492b1940

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDataSetReadback::ReadbackCompleteInternal(FNiagaraDataSetReadback *this)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined1 local_38 [24];
  FNiagaraDataSetReadback *local_20;
  undefined8 local_10;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnReadbackReady,
             (FReadAccessScope *)local_38);
  if ((*(int *)&(this->OnReadbackReady).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->OnReadbackReady).field_0x8, plVar1 != (longlong *)0x0)) {
    cVar3 = (**(code **)(*plVar1 + 0x38))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_1492b1985;
    }
  }
  bVar2 = false;
LAB_1492b1985:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_38);
  if (bVar2) {
    local_10 = 0;
    local_38._16_8_ =
         &UE::Core::Private::Function::
          TFunction_OwnedObject<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::`5'::<lambda_1>,1,0>
          ::_vftable_;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`FNiagaraDataSetReadback::ReadbackCompleteInternal'::__l5::<lambda_1>,void>
         ::Call;
    local_20 = this;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    return;
  }
  LOCK();
  this->PendingReadbacks = (atomic<int>)((int)this->PendingReadbacks + -1);
  UNLOCK();
  return;
}

// SetReadbackRead @ 1492b5d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDataSetReadback::SetReadbackRead
          (FNiagaraDataSetReadback *this,
          TDelegate<void___cdecl(FNiagaraDataSetReadback_const_&),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_58 [8];
  ForAnyElementType local_50;
  int local_48;
  FDestructionSentinel local_40;
  FReadAccessScope local_28;
  
  if (this->PendingReadbacks != (atomic<int>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsReady()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataSetReadback.cpp"
                       ,0x14,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1 != &this->OnReadbackReady) {
    local_58 = (undefined1  [8])0x0;
    local_50.Data = (FScriptContainerElement *)0x0;
    local_48 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_28);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_58);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnReadbackReady,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    if ((local_48 != 0) && (local_50.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_50.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_58);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

