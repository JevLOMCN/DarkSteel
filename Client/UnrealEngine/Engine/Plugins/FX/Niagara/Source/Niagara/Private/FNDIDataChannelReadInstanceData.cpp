// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// ~FNDIDataChannelReadInstanceData @ 148e562d0

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
FNDIDataChannelReadInstanceData::~FNDIDataChannelReadInstanceData
          (FNDIDataChannelReadInstanceData *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar4;
  
  this->_padding_ = (longlong)&___7FNDIDataChannelReadInstanceData__6B_;
  if ((this->DataChannelData).Object != (FNiagaraDataChannelData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataChannelData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                       ,0x14a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&(this->EmitterInstanceData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EmitterInstanceData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EmitterInstanceData);
  FVar4 = (this->FuncToDataSetBindingInfo).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
    FVar4 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
            &this->FuncToDataSetBindingInfo;
  }
  DestructItems<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int>
            ((TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)FVar4,
             (this->FuncToDataSetBindingInfo).ArrayNum);
  FVar4 = (this->FuncToDataSetBindingInfo).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DataChannelData).SharedReferenceCount.ReferenceController);
  return;
}

// Cleanup @ 148e5d510

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
FNDIDataChannelReadInstanceData::Cleanup
          (FNDIDataChannelReadInstanceData *this,UNiagaraDataInterfaceDataChannelRead *param_1,
          FNiagaraSystemInstance *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FNiagaraDataChannelData *pFVar2;
  
  if ((this->DataChannelData).Object != (FNiagaraDataChannelData *)0x0) {
    if (((param_1->CompiledData).bUsedByGPU != false) &&
       ((param_1->CompiledData).bSpawnsParticles != false)) {
      pFVar2 = TSharedPtr<FNiagaraDataChannelData,1>::operator->(&this->DataChannelData);
      LOCK();
      pFVar2->NumGPUSpawningReaders = (atomic<int>)((int)pFVar2->NumGPUSpawningReaders + -1);
      UNLOCK();
    }
    pTVar1 = (this->DataChannelData).SharedReferenceCount.ReferenceController;
    (this->DataChannelData).Object = (FNiagaraDataChannelData *)0x0;
    (this->DataChannelData).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// GetReadBufferCPU @ 148e6eaa0

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

FNiagaraDataBuffer * __thiscall
FNDIDataChannelReadInstanceData::GetReadBufferCPU
          (FNDIDataChannelReadInstanceData *this,bool param_1)

{
  FNiagaraDataChannelData *this_00;
  code *pcVar1;
  bool bVar2;
  TRefCountPtr<FNiagaraDataBuffer> TVar3;
  FNiagaraDataBuffer *pFVar4;
  longlong local_res8;
  
  this_00 = (this->DataChannelData).Object;
  if (this_00 == (FNiagaraDataChannelData *)0x0) {
    return (FNiagaraDataBuffer *)0x0;
  }
  TVar3 = FNiagaraDataChannelData::GetCPUData(this_00,true);
  pFVar4 = (FNiagaraDataBuffer *)(TVar3.Reference)->_padding_;
  if (local_res8 != 0) {
    if (*(int *)(local_res8 + 8) < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FNiagaraDataBuffer *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    *(int *)(local_res8 + 8) = *(int *)(local_res8 + 8) + -1;
    UNLOCK();
  }
  return pFVar4;
}

// Init @ 148e73690

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

bool __thiscall
FNDIDataChannelReadInstanceData::Init
          (FNDIDataChannelReadInstanceData *this,UNiagaraDataInterfaceDataChannelRead *param_1,
          FNiagaraSystemInstance *param_2)

{
  bool bVar1;
  
  bVar1 = Tick(this,param_1,param_2,true);
  return bVar1;
}

// PostTick @ 148e785a0

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

bool __thiscall
FNDIDataChannelReadInstanceData::PostTick
          (FNDIDataChannelReadInstanceData *this,UNiagaraDataInterfaceDataChannelRead *param_1,
          FNiagaraSystemInstance *param_2)

{
  return true;
}

// SetDataChannelData @ 148e7c740

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
FNDIDataChannelReadInstanceData::SetDataChannelData
          (FNDIDataChannelReadInstanceData *this,TSharedPtr<FNiagaraDataChannelData,1> *param_1,
          UNiagaraDataInterfaceDataChannelRead *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraDataChannelData *pFVar3;
  
  pFVar3 = (this->DataChannelData).Object;
  if (pFVar3 != param_1->Object) {
    if (((param_2->CompiledData).bUsedByGPU != false) &&
       ((param_2->CompiledData).bSpawnsParticles != false)) {
      if (pFVar3 != (FNiagaraDataChannelData *)0x0) {
        pFVar3 = TSharedPtr<FNiagaraDataChannelData,1>::operator->(&this->DataChannelData);
        LOCK();
        pFVar3->NumGPUSpawningReaders = (atomic<int>)((int)pFVar3->NumGPUSpawningReaders + -1);
        UNLOCK();
      }
      if (param_1->Object != (FNiagaraDataChannelData *)0x0) {
        pFVar3 = TSharedPtr<FNiagaraDataChannelData,1>::operator->(param_1);
        LOCK();
        pFVar3->NumGPUSpawningReaders = (atomic<int>)((int)pFVar3->NumGPUSpawningReaders + 1);
        UNLOCK();
      }
    }
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar3 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = (this->DataChannelData).SharedReferenceCount.ReferenceController;
    (this->DataChannelData).Object = pFVar3;
    (this->DataChannelData).SharedReferenceCount.ReferenceController = pTVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Tick @ 148e81760

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FNDIDataChannelReadInstanceData::Tick
          (FNDIDataChannelReadInstanceData *this,UNiagaraDataInterfaceDataChannelRead *param_1,
          FNiagaraSystemInstance *param_2,bool param_3)

{
  undefined1 *puVar1;
  FNDCAccessContextInst *this_00;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *pTVar2;
  FName *pFVar3;
  ETickingGroup EVar4;
  UNiagaraDataChannelAsset *pUVar5;
  FNiagaraDataChannelData *this_01;
  UScriptStruct *pUVar6;
  FNiagaraDataChannelLayoutInfo *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  UNiagaraDataChannelHandler *pUVar19;
  FNiagaraWorldManager *pFVar20;
  UScriptStruct *pUVar21;
  FNDCAccessContextBase *pFVar22;
  USceneComponent *pUVar23;
  TSharedPtr<FNiagaraDataChannelData,1> *pTVar24;
  UObject *pUVar25;
  FText *pFVar26;
  UNiagaraDataChannel *pUVar27;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar28;
  FNDIDataChannelLayoutManager *this_02;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *pTVar29;
  FNiagaraTypeDefinition *pFVar30;
  longlong lVar31;
  ulonglong uVar32;
  ForAnyElementType this_03;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar33;
  int iVar34;
  uint uVar35;
  undefined1 *puVar36;
  uint uVar37;
  ulonglong uVar38;
  uint *puVar39;
  ulonglong uVar40;
  ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_> FVar41;
  uint uVar42;
  FNiagaraDataSetCompiledData *this_04;
  ulonglong uVar43;
  undefined1 local_2b8;
  undefined1 local_2b7;
  undefined1 local_2b6 [2];
  int local_2b4;
  FScriptContainerElement *local_2b0;
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> local_2a8;
  FString local_298;
  undefined8 local_288;
  FString local_280;
  TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
  *local_270;
  undefined8 uStack_268;
  undefined1 *local_260;
  undefined8 uStack_258;
  uint local_250;
  int iStack_248;
  undefined4 uStack_244;
  int local_240;
  UNiagaraDataChannelHandler *local_238;
  FName local_230;
  FNiagaraDataSetCompiledData *local_228;
  longlong local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FScriptContainerElement *local_1c0;
  undefined1 auStack_1b8 [20];
  uint uStack_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  UObject *local_190;
  double local_188;
  double dStack_180;
  double local_178;
  uint local_170;
  undefined1 local_168 [8];
  TSharedPtr<FNiagaraDataChannelData,1> local_160;
  FText local_150;
  FText local_140;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_130;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_120;
  TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  UObject local_b0;
  undefined4 local_6c;
  
  uVar40 = 0;
  puVar1 = &(this->EmitterInstanceData).field_0x10;
  local_2b4 = 0;
  local_2b0 = (FScriptContainerElement *)&this->EmitterInstanceData;
  LOCK();
  this->ConsumeIndex = (atomic<int>)0x0;
  UNLOCK();
  iVar18 = *(int *)&(this->EmitterInstanceData).field_0x28;
  uVar16 = 1;
  uVar37 = 0;
  uVar32 = uVar40;
  iVar17 = 0;
  local_250 = uVar37;
  if (iVar18 != 0) {
    puVar39 = *(uint **)&(this->EmitterInstanceData).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)puVar1;
    }
    uVar35 = *puVar39;
    uVar38 = uVar40;
    local_250 = 0;
    while (uVar35 == 0) {
      iVar34 = (int)uVar32;
      local_250 = (int)uVar38 + 0x20;
      uVar38 = (ulonglong)local_250;
      uVar35 = iVar34 + 1;
      uVar32 = (ulonglong)uVar35;
      iVar17 = iVar18;
      if ((int)(iVar18 + -1 + (iVar18 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar35) goto LAB_148e8182f;
      uVar35 = puVar39[(longlong)iVar34 + 1];
    }
    uVar16 = ~(uVar35 - 1) & uVar35;
    uVar38 = (ulonglong)uVar16 * 2 + 1;
    lVar31 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_2b4 = (int)lVar31;
    iVar17 = local_2b4 + -1 + local_250;
    if (iVar18 < iVar17) {
      iVar17 = iVar18;
    }
  }
LAB_148e8182f:
  uVar35 = *(uint *)&(this->EmitterInstanceData).field_0x28;
  iStack_248 = *(int *)&(this->EmitterInstanceData).field_0x8 -
               *(int *)&(this->EmitterInstanceData).field_0x34;
  uVar42 = uVar35 & 0xffffffe0;
  uStack_258 = (double)CONCAT44(iVar17,0xffffffff);
  uStack_268 = (double)CONCAT44(uVar16,(int)uVar32);
  auStack_1b8._0_8_ = uStack_268;
  iVar17 = (int)uVar35 >> 5;
  local_1a0._4_4_ = local_6c;
  local_1a0._0_4_ = local_250;
  uStack_198 = CONCAT44(uStack_244,iStack_248);
  stack0xfffffffffffffe58 = uStack_258;
  local_270 = (TMap<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData,0>_>
               *)local_2b0;
  local_260 = puVar1;
  local_1c0 = local_2b0;
  auStack_1b8._8_8_ = puVar1;
  if ((((int)uVar35 < 0) || (iVar18 < (int)uVar35)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  pFVar12 = local_2b0;
  uVar16 = *(uint *)&(this->EmitterInstanceData).field_0x28;
  if (uVar35 != uVar16) {
    puVar36 = *(undefined1 **)&(this->EmitterInstanceData).field_0x20;
    if (puVar36 == (undefined1 *)0x0) {
      puVar36 = puVar1;
    }
    uVar35 = -1 << ((byte)uVar35 & 0x1f) & *(uint *)(puVar36 + (longlong)iVar17 * 4);
    while (uVar35 == 0) {
      lVar31 = (longlong)iVar17;
      uVar42 = uVar42 + 0x20;
      iVar17 = iVar17 + 1;
      uVar35 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_148e81950;
      uVar35 = *(uint *)(puVar36 + lVar31 * 4 + 4);
    }
    uVar32 = (ulonglong)(~(uVar35 - 1) & uVar35) * 2 + 1;
    lVar31 = 0x3f;
    if (uVar32 != 0) {
      for (; uVar32 >> lVar31 == 0; lVar31 = lVar31 + -1) {
      }
    }
    local_240 = (int)lVar31;
    uVar35 = local_240 + -1 + uVar42;
    if ((int)uVar16 < (int)uVar35) {
      uVar35 = uVar16;
    }
  }
LAB_148e81950:
  while( true ) {
    pFVar13 = local_1c0;
    if (*(int *)(local_1c0 + 8) - *(int *)(local_1c0 + 0x34) != (int)uStack_198) {
      local_2b8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraEmitterInstance_*,FNDIDataChannelRead_EmitterInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b8);
    }
    if (((uStack_1a4 == uVar35) && ((undefined1 *)auStack_1b8._8_8_ == puVar1)) &&
       (pFVar13 == pFVar12)) break;
    lVar31 = *(longlong *)pFVar13 + (longlong)(int)uStack_1a4 * 0x70;
    *(undefined4 *)(lVar31 + 0x60) = 0;
    if (*(int *)(lVar31 + 100) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)(lVar31 + 0x58),0,(int *)(lVar31 + 100));
    }
    *(undefined4 *)(lVar31 + 0x10) = 0;
    if (*(int *)(lVar31 + 0x14) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)(lVar31 + 8),0,(int *)(lVar31 + 0x14));
    }
    stack0xfffffffffffffe58 = (double)CONCAT44(uStack_1a4,auStack_1b8._16_4_ & ~auStack_1b8._4_4_);
    *(undefined8 *)(lVar31 + 0x18) = 0;
    *(undefined8 *)(lVar31 + 0x20) = 0;
    *(undefined8 *)(lVar31 + 0x28) = 0;
    *(undefined8 *)(lVar31 + 0x30) = 0;
    *(undefined8 *)(lVar31 + 0x38) = 0;
    *(undefined8 *)(lVar31 + 0x40) = 0;
    *(undefined8 *)(lVar31 + 0x48) = 0;
    *(undefined8 *)(lVar31 + 0x50) = 0;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b8);
  }
  if (((param_1->CompiledData).bUsedByCPU == false) && ((param_1->CompiledData).bUsedByGPU == false)
     ) {
    return true;
  }
  local_2a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.ArrayNum = 0;
  local_2a8.ArrayMax = 0;
  this->Owner = param_2;
  pUVar19 = (UNiagaraDataChannelHandler *)FWeakObjectPtr::Get(&(this->DataChannel).WeakPtr);
  if (pUVar19 == (UNiagaraDataChannelHandler *)0x0) {
    local_160.Object = (FNiagaraDataChannelData *)0x0;
    local_160.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    SetDataChannelData(this,&local_160,param_1);
    this->ChachedDataSetLayoutHash = 0xffffffffffffffff;
    pFVar20 = FNiagaraWorldManager::Get(param_2->World);
    if (pFVar20 == (FNiagaraWorldManager *)0x0) goto LAB_148e8218e;
    pUVar5 = (param_1->Channel).field0_0x0.DebugPtr;
    if ((pUVar5 != (UNiagaraDataChannelAsset *)0x0) &&
       (pUVar19 = FNiagaraDataChannelManager::FindDataChannelHandler
                            ((pFVar20->DataChannelManager).Ptr,
                             (pUVar5->DataChannel).field0_0x0.DebugPtr),
       pUVar19 != (UNiagaraDataChannelHandler *)0x0)) {
      local_238 = pUVar19;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar19);
      }
      FWeakObjectPtr::operator=(&(this->DataChannel).WeakPtr,(FObjectPtr)&local_238);
      goto LAB_148e81ae9;
    }
    if ((byte)LogNiagara._0_1_ < 3) goto LAB_148e81b78;
    if ((param_1->Channel).field0_0x0.DebugPtr == (UNiagaraDataChannelAsset *)0x0) {
      local_288 = 0;
      local_230 = (FName)&local_288;
    }
    else {
      local_230 = UE::CoreUObject::Private::GetFName((UObject *)local_168);
    }
    local_230 = *(FName *)local_230;
    ::FName::ToString(&local_230,&local_1f0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  else {
LAB_148e81ae9:
    this_01 = (this->DataChannelData).Object;
    if ((this_01 == (FNiagaraDataChannelData *)0x0) ||
       (bVar14 = FNiagaraDataChannelData::IsLayoutValid(this_01,pUVar19), !bVar14)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if ((!param_3) && ((!bVar14 || (param_1->bUpdateSourceDataEveryTick != false)))) {
      bVar14 = IsInGameThread();
      if ((!bVar14) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                              ,0x91,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
      this_00 = &pUVar19->TransientAccessContext;
      FInstancedStruct::InitializeAs
                (&this_00->AccessContext,(pUVar19->AccessContextType).AccessContextStruct,
                 (uchar *)0x0);
      if ((((pUVar19->TransientAccessContext).AccessContext.StructMemory == (uchar *)0x0) ||
          ((this_00->AccessContext).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) ||
         (pUVar6 = (this_00->AccessContext).ScriptStruct.field0_0x0.DebugPtr,
         pUVar21 = FNDCAccessContextLegacy::StaticStruct(), pUVar6 == pUVar21)) {
        local_190 = FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uStack_258 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        pcVar8 = *(code **)(pUVar19->_padding_ + 0x2e0);
        uStack_268 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_260 = (undefined1 *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_190 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_190);
        }
        local_170 = local_170 & 0xfffffffe;
        local_178 = (double)uVar11;
        local_188 = (double)uVar9;
        dStack_180 = (double)uVar10;
        pTVar24 = (TSharedPtr<FNiagaraDataChannelData,1> *)
                  (*pcVar8)(pUVar19,&local_b0.field_0x18,&local_190,0);
        SetDataChannelData(this,pTVar24,param_1);
      }
      else {
        if ((param_1->bAutoLinkToSpawningNDC == false) && (this_00 != &param_1->AccessContext)) {
          FInstancedStruct::InitializeAs
                    (&this_00->AccessContext,
                     (param_1->AccessContext).AccessContext.ScriptStruct.field0_0x0.DebugPtr,
                     (param_1->AccessContext).AccessContext.StructMemory);
        }
        pFVar22 = FNDCAccessContextInst::GetChecked<FNDCAccessContextBase>(this_00);
        pUVar23 = (USceneComponent *)FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar23 != (USceneComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar23);
        }
        (pFVar22->OwningComponent).field0_0x0.DebugPtr = pUVar23;
        *(uint *)&pFVar22->field_0x8 =
             *(uint *)&pFVar22->field_0x8 ^
             ((uint)param_1->bAutoLinkToSpawningNDC ^ pFVar22->bIsAutoLinkingSystem) & 1;
        pTVar24 = (TSharedPtr<FNiagaraDataChannelData,1> *)
                  (**(code **)(pUVar19->_padding_ + 0x2d8))(pUVar19,&local_b0.field_0x8,this_00,0);
        SetDataChannelData(this,pTVar24,param_1);
      }
    }
    pUVar25 = FWeakObjectPtr::Get(&(pUVar19->DataChannel).WeakPtr);
    if (pUVar25 == (UObject *)0x0) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ret",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                          ,0x3a,L"");
      if (bVar14) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
    }
    else if (((!param_3) && (pUVar25[1].field_0x11 != '\0')) &&
            (param_1->bReadCurrentFrame != false)) {
      EVar4 = pUVar19->CurrentTG;
      iVar18 = (**(code **)(param_1->_padding_ + 0x3c8))(param_1,0);
      if ((int)EVar4 < iVar18) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
          TGEnum = StaticEnum<enum_ETickingGroup>();
          _Init_thread_footer(&::_TSS1);
        }
        if (2 < (byte)LogNiagara._0_1_) {
          pFVar26 = UEnum::GetDisplayNameTextByValue(TGEnum,&local_140,(longlong)(int)EVar4);
          FText::ToString(pFVar26);
          pFVar26 = UEnum::GetDisplayNameTextByValue(TGEnum,&local_150,(longlong)iVar18);
          FText::ToString(pFVar26);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_150.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
          }
          if (local_140.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
          }
        }
      }
    }
    pUVar27 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(&(pUVar19->DataChannel).WeakPtr);
    if ((pUVar27 == (UNiagaraDataChannel *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ret",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                            ,0x3a,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    pTVar28 = UNiagaraDataChannel::GetLayoutInfo(pUVar27,&local_130);
    if ((pTVar28->Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    this_04 = &pTVar28->Object->CompiledData;
    local_228 = this_04;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_130.SharedReferenceCount.ReferenceController);
    pUVar27 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(&(pUVar19->DataChannel).WeakPtr);
    if ((pUVar27 == (UNiagaraDataChannel *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ret",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                            ,0x3a,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    pTVar28 = UNiagaraDataChannel::GetLayoutInfo(pUVar27,&local_120);
    if ((pTVar28->Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    pFVar7 = pTVar28->Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_120.SharedReferenceCount.ReferenceController);
    uVar16 = FNiagaraDataSetCompiledData::GetLayoutHash(this_04);
    if (uVar16 == 0) {
LAB_148e81fda:
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("CPUSourceDataCompiledData.GetLayoutHash() && CPUSourceDataCompiledData.GetLayoutHash() == GPUSourceDataCompiledData.GetLayoutHash()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\DataInterface\\NiagaraDataInterfaceDataChannelRead.cpp"
                          ,0x21a,L"");
      if (bVar14) {
        pcVar8 = (code *)swi(3);
        uVar15 = (*pcVar8)();
        return (bool)uVar15;
      }
    }
    else {
      uVar16 = FNiagaraDataSetCompiledData::GetLayoutHash(&pFVar7->CompiledDataGPU);
      uVar35 = FNiagaraDataSetCompiledData::GetLayoutHash(this_04);
      if (uVar35 != uVar16) goto LAB_148e81fda;
    }
    uVar16 = FNiagaraDataSetCompiledData::GetLayoutHash(this_04);
    if ((ulonglong)uVar16 != this->ChachedDataSetLayoutHash) {
      this->ChachedDataSetLayoutHash = (ulonglong)uVar16;
      this->bUpdateFunctionBindingRTData = (param_1->CompiledData).bUsedByGPU;
      iVar18 = (param_1->CompiledData).FunctionInfo.ArrayNum;
      TArray<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
      ::SetNum(&this->FuncToDataSetBindingInfo,iVar18,Default);
      uVar32 = uVar40;
      uVar38 = uVar40;
      uVar43 = uVar40;
      local_220 = (longlong)iVar18;
      if (0 < iVar18) {
        do {
          uVar35 = (uint)uVar38;
          uVar16 = uVar37;
          if ((int)uVar35 < (param_1->CompiledData).FunctionInfo.ArrayNum) {
            uVar16 = ~uVar35 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            uVar15 = (*pcVar8)();
            return (bool)uVar15;
          }
          local_2b0 = (param_1->CompiledData).FunctionInfo.AllocatorInstance.Data;
          uVar16 = uVar37;
          if ((int)uVar35 < (this->FuncToDataSetBindingInfo).ArrayNum) {
            uVar16 = ~uVar35 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            uVar15 = (*pcVar8)();
            return (bool)uVar15;
          }
          FVar33 = (this->FuncToDataSetBindingInfo).AllocatorInstance.SecondaryData;
          FVar41 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                   &this->FuncToDataSetBindingInfo;
          if (FVar33 != (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0
             ) {
            FVar41 = FVar33;
          }
          pTVar2 = (TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1> *)
                   ((longlong)FVar41 + uVar32);
          this_02 = FNDIDataChannelLayoutManager::Get();
          pTVar29 = FNDIDataChannelLayoutManager::GetLayoutInfo
                              (this_02,&local_110,
                               (FNDIDataChannelFunctionInfo *)
                               ((longlong)&local_2b0->field_0x0 + uVar40),local_228,&local_2a8);
          if (pTVar2 != pTVar29) {
            pTVar2->Object = pTVar29->Object;
            pTVar29->Object = (FNDIDataChannel_FunctionToDataSetBinding *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&pTVar2->SharedReferenceCount,&pTVar29->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_110.SharedReferenceCount.ReferenceController);
          uVar43 = uVar43 + 1;
          uVar40 = uVar40 + 0x28;
          uVar32 = uVar32 + 0x10;
          uVar38 = (ulonglong)(uVar35 + 1);
        } while ((longlong)uVar43 < local_220);
      }
    }
LAB_148e8218e:
    iVar18 = local_2a8.ArrayNum;
    uVar32 = (ulonglong)local_2a8.ArrayNum;
    if (0 < local_2a8.ArrayNum) {
      local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_298.Data.ArrayNum = 0;
      local_298.Data.ArrayMax = 0;
      pFVar3 = (FName *)(local_2a8.AllocatorInstance.Data + uVar32 * 0xc);
      this_03.Data = local_2a8.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar32 != iVar18) {
          local_2b7 = 0;
          `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_2b7);
        }
        if ((FName *)this_03.Data == pFVar3) break;
        ::FName::ToString((FName *)this_03.Data,&local_100);
        pFVar30 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)((longlong)this_03.Data + 8));
        if ((pFVar30->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
          ::FString::FString(&local_280,L"Invalid");
        }
        else {
          local_218 = UE::CoreUObject::Private::GetFName(&local_b0);
          local_218 = *(FName *)local_218;
          ::FName::ToString(&local_218,&local_280);
        }
        ::FString::PrintfImpl(&local_1e0,L"%s %s\n");
        iVar17 = local_1e0.Data.ArrayNum + -1;
        if (local_1e0.Data.ArrayNum == 0) {
          iVar17 = 0;
        }
        ::FString::AppendChars(&local_298,(wchar_t *)local_1e0.Data.AllocatorInstance.Data,iVar17);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
        }
        if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data.AllocatorInstance.Data);
        }
        uVar32 = local_2a8._8_8_ & 0xffffffff;
        this_03.Data = (FScriptContainerElement *)&((FName *)((longlong)this_03.Data + 8))->Number;
      }
      if (2 < (byte)LogNiagara._0_1_) {
        pUVar25 = FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_e0,(UObject *)0x0);
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)param_2->System,&local_f0,(UObject *)0x0);
        pUVar25 = FWeakObjectPtr::Get(&(this->DataChannel).WeakPtr);
        pUVar25 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar25[1].field_0x8);
        if ((pUVar25 == (UObject *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Ret",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                                ,0x3a,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        local_210.ComparisonIndex.Value = *(uint *)&pUVar25->field_0x18;
        local_210.Number = *(uint *)&pUVar25->field_0x1c;
        ::FName::ToString(&local_210,&local_1d0);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_1d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d0.Data.AllocatorInstance.Data);
        }
        if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f0.Data.AllocatorInstance.Data);
        }
        if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
      }
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
    }
    bVar14 = FWeakObjectPtr::IsValid(&(this->DataChannel).WeakPtr);
    if (bVar14) {
      iVar18 = (this->FuncToDataSetBindingInfo).ArrayNum;
      if (iVar18 == (param_1->CompiledData).FunctionInfo.ArrayNum) {
        FVar33 = (this->FuncToDataSetBindingInfo).AllocatorInstance.SecondaryData;
        if (FVar33 == (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)0x0)
        {
          FVar33 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                   &this->FuncToDataSetBindingInfo;
        }
        FVar41 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                 ((longlong)iVar18 * 0x10 + (longlong)FVar33);
        while( true ) {
          if ((this->FuncToDataSetBindingInfo).ArrayNum != iVar18) {
            `TCheckedPointerIterator<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_2b6);
          }
          if (FVar33 == FVar41) {
            bVar14 = true;
            goto LAB_148e81b7a;
          }
          if ((*(longlong *)FVar33 == 0) || (*(int *)(*(longlong *)FVar33 + 0x20) == 0)) break;
          FVar33 = (ForElementType<TSharedPtr<FNDIDataChannel_FunctionToDataSetBinding,1>_>)
                   ((longlong)FVar33 + 0x10);
        }
      }
      goto LAB_148e81b78;
    }
    if ((byte)LogNiagara._0_1_ < 3) goto LAB_148e81b78;
    pUVar25 = FWeakObjectPtr::Get(&(param_2->AttachComponent).WeakPtr);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar25,&local_c0,(UObject *)0x0);
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2->System,&local_d0,(UObject *)0x0);
    pUVar5 = (param_1->Channel).field0_0x0.DebugPtr;
    if (pUVar5 != (UNiagaraDataChannelAsset *)0x0) {
      local_208 = (FName)pUVar5->_padding_;
      ::FName::ToString(&local_208,&local_200);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if ((pUVar5 != (UNiagaraDataChannelAsset *)0x0) &&
       (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    local_1f0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      local_1f0.Data.AllocatorInstance.Data = local_c0.Data.AllocatorInstance.Data;
    }
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
LAB_148e81b78:
  bVar14 = false;
LAB_148e81b7a:
  if ((FName *)local_2a8.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_2a8.AllocatorInstance.Data);
  }
  return bVar14;
}

