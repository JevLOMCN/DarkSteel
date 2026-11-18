// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// ~FPCGProxyForGPUDataCollection @ 14973d700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPCGProxyForGPUDataCollection::~FPCGProxyForGPUDataCollection(FPCGProxyForGPUDataCollection *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FRDGPooledBuffer *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  
  pFVar3 = (this->RawReadbackData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ReadbackRequest).SharedReferenceCount.ReferenceController);
  DestructItems<TStrongObjectPtr<UPCGData_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
            ((TStrongObjectPtr<UPCGData_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
              *)(this->ReadbackDataRefs).AllocatorInstance.Data,(this->ReadbackDataRefs).ArrayNum);
  pFVar3 = (this->ReadbackDataRefs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FPCGTaggedData_const_,int>
            ((FPCGTaggedData *)(this->ReadbackData).AllocatorInstance.Data,
             (this->ReadbackData).ArrayNum);
  pFVar3 = (this->ReadbackData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FString,int>
            ((FString *)(this->StringTable).AllocatorInstance.Data,(this->StringTable).ArrayNum);
  pFVar3 = (this->StringTable).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Description).SharedReferenceCount.ReferenceController);
  pFVar4 = (this->Buffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar5 = &pFVar4->_padding_;
    LOCK();
    lVar6 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if (((int)lVar6 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// FPCGProxyForGPUDataCollection @ 1497dff50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPCGProxyForGPUDataCollection * __thiscall
FPCGProxyForGPUDataCollection::FPCGProxyForGPUDataCollection
          (FPCGProxyForGPUDataCollection *this,TRefCountPtr<FRDGPooledBuffer> param_1,uint param_2,
          TSharedPtr<FPCGDataCollectionDesc_const_,1> *param_3,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_4)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FRDGPooledBuffer *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Buffer).Reference = (FRDGPooledBuffer *)0x0;
  pFVar4 = (FRDGPooledBuffer *)(param_1.Reference)->_padding_;
  (this->Buffer).Reference = pFVar4;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
    UNLOCK();
  }
  this->BufferSizeBytes = param_2;
  (this->Description).Object = param_3->Object;
  pTVar5 = (param_3->SharedReferenceCount).ReferenceController;
  (this->Description).SharedReferenceCount.ReferenceController = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->StringTable;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = param_4->ArrayNum;
  pFVar6 = (param_4->AllocatorInstance).Data;
  piVar2 = &(this->StringTable).ArrayMax;
  (this->StringTable).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FString,FString,int>((pTVar1->AllocatorInstance).Data,(FString *)pFVar6,iVar3);
  }
  (this->ReadbackData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadbackData).ArrayNum = 0;
  (this->ReadbackData).ArrayMax = 0;
  (this->ReadbackDataRefs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReadbackDataRefs).ArrayNum = 0;
  (this->ReadbackDataRefs).ArrayMax = 0;
  (this->ReadbackRequest).Object = (FRHIGPUBufferReadback *)0x0;
  (this->ReadbackRequest).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RawReadbackData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawReadbackData).ArrayNum = 0;
  (this->RawReadbackData).ArrayMax = 0;
  this->bReadbackDataProcessed = (atomic<bool>)0x0;
  this->bReadbackDataArrived = false;
  (this->ReadbackLock).bFlag = (atomic<bool>)0x0;
  puVar7 = (undefined8 *)(param_1.Reference)->_padding_;
  if (puVar7 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar7 + 1);
    LOCK();
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (piVar2 != (int *)0x0)) {
      (**(code **)*puVar7)(puVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// ~<lambda_1> @ 1497e17c0

void __thiscall
`FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  puVar3 = *(undefined8 **)((longlong)this + 0x20);
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  plVar4 = *(longlong **)((longlong)this + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// operator() @ 1497e6500

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 local_res8 [8];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_38;
  <lambda_2> local_30;
  
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_PCG.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_PCG.UniqueName;
  FMemScope::FMemScope(&local_38,&local_res20,true);
  if (*(longlong *)((longlong)this + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FRHIGPUBufferReadback::EnqueueCopy
            (*(FRHIGPUBufferReadback **)((longlong)this + 0x10),(FRHICommandList *)param_1,
             *(FRHIBuffer **)(*(longlong *)((longlong)this + 0x20) + 0x28),0);
  local_30.WeakThis.Object = *(FPCGProxyForGPUDataCollection **)this;
  local_30.WeakThis.WeakReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (local_30.WeakThis.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    (local_30.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_30.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  local_30.ReadbackRequest.Object = *(FRHIGPUBufferReadback **)((longlong)this + 0x10);
  local_30.ReadbackRequest.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x18);
  if (local_30.ReadbackRequest.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_30.ReadbackRequest.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_30.ReadbackRequest.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30.BufferSizeBytes = *(uint *)((longlong)this + 0x28);
  ``FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>::
  operator()<__FPCGProxyForGPUDataCollection::GetCPUData_::__l8::<lambda_1>::operator()_::__l2::<lambda_2>_&>
            (local_res8,&local_30);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReadbackRequest.SharedReferenceCount.ReferenceController);
  if (local_30.WeakThis.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
     ) {
    LOCK();
    paVar1 = &(local_30.WeakThis.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)((local_30.WeakThis.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_30.WeakThis.WeakReferenceCount.ReferenceController,1);
    }
  }
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// GetCPUData @ 149810aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FPCGProxyForGPUDataCollection::GetCPUData
          (FPCGProxyForGPUDataCollection *this,FPCGContext *param_1,int param_2,
          FPCGTaggedData *param_3)

{
  TSharedPtr<FRHIGPUBufferReadback,1> *pTVar1;
  int *piVar2;
  atomic<bool> aVar3;
  FRDGPooledBuffer *pFVar4;
  FCommandList *pFVar5;
  FScriptContainerElement *pFVar6;
  FPCGTaggedData *pFVar7;
  TObjectPtr<UPCGData_const_>_u_0 this_00;
  code *pcVar8;
  bool bVar9;
  atomic<int> aVar10;
  FPCGContext *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  atomic<int> aVar14;
  EPCGUnpackDataCollectionResult EVar15;
  int iVar16;
  TReferenceControllerBase<1> *pTVar17;
  FName *pFVar18;
  FPCGProxyForGPUDataCollection *pFVar19;
  FRenderCommandList *this_01;
  FRenderCommandTag *pFVar20;
  code **ppcVar21;
  ulonglong uVar22;
  TObjectPtr<UPCGData_const_>_u_0 *pTVar23;
  uint uVar24;
  atomic<bool> *paVar25;
  TReferenceControllerBase<1> *pTVar26;
  FPCGDataPtrWrapper *pFVar27;
  longlong lVar28;
  FPCGTaggedData *pFVar29;
  FRHIGPUBufferReadback *pFVar30;
  ForAnyElementType FVar31;
  uint uVar32;
  undefined1 auStackY_4c8 [32];
  undefined1 local_478 [8];
  TObjectPtr<UPCGData_const_>_u_0 local_470;
  FPCGProxyForGPUDataCollection *local_468;
  uint local_460;
  FPCGProxyForGPUDataCollection *local_458;
  FPCGContext *local_450;
  FRHIGPUBufferReadback *local_448;
  FSharedReferencer<1> FStack_440;
  FPCGDataCollection local_438;
  undefined8 local_408;
  FPCGTaggedData *local_400;
  FRHIGPUBufferReadback *local_3f8;
  undefined8 local_3f0;
  FSharedReferencer<1> FStack_3e8;
  TSharedPtr<FPCGDataCollectionDesc_const_,1> local_3e0;
  FName local_3d0;
  TObjectPtr<UPCGData_const_>_u_0 local_3c8;
  undefined8 local_3c0;
  undefined1 local_3b8 [24];
  undefined8 uStack_3a0;
  void *local_398;
  undefined4 local_390;
  uint local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined8 local_380;
  void *local_378;
  ulonglong local_370;
  undefined8 local_368;
  undefined4 local_360;
  undefined8 local_35c;
  undefined4 local_354;
  TObjectPtr<UPCGData_const_>_u_0 local_348;
  undefined8 local_340;
  undefined1 local_338 [24];
  undefined8 uStack_320;
  void *local_318;
  undefined4 local_310;
  uint local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined8 local_300;
  void *local_2f8;
  ulonglong local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2dc;
  undefined4 local_2d4;
  TObjectPtr<UPCGData_const_>_u_0 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [24];
  undefined8 uStack_2a0;
  void *local_298;
  undefined4 local_290;
  uint local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined8 local_280;
  void *local_278;
  ulonglong local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  code *local_248 [2];
  code *local_238 [3];
  code **local_220;
  TObjectPtr<UPCGData_const_>_u_0 local_218 [2];
  undefined1 local_208 [32];
  void *local_1e8;
  undefined4 local_1e0;
  uint local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  ForElementType<FSetElementId> local_1c8;
  int local_1c0;
  TObjectPtr<UPCGData_const_>_u_0 local_1b8;
  undefined1 local_1b0;
  undefined1 local_1af;
  undefined8 local_1ac;
  undefined4 local_1a4;
  TObjectPtr<UPCGData_const_>_u_0 local_198 [2];
  undefined1 local_188 [32];
  void *local_168;
  undefined4 local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  ForElementType<FSetElementId> local_148;
  int local_140;
  TObjectPtr<UPCGData_const_>_u_0 local_138;
  undefined1 local_130;
  undefined1 local_12f;
  undefined8 local_12c;
  undefined4 local_124;
  TObjectPtr<UPCGData_const_>_u_0 local_118;
  undefined8 local_110;
  void *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  void *local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  byte local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4c8;
  paVar25 = &(this->ReadbackLock).bFlag;
  local_460 = param_2;
  local_458 = this;
  local_450 = param_1;
  local_400 = param_3;
  if ((paVar25 == (atomic<bool> *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  LOCK();
  aVar3 = ((FSpinLock *)paVar25)->bFlag;
  ((FSpinLock *)paVar25)->bFlag = (atomic<bool>)0x1;
  UNLOCK();
  while (aVar3 != (atomic<bool>)0x0) {
    aVar3 = ((FSpinLock *)paVar25)->bFlag;
    while (aVar3 != (atomic<bool>)0x0) {
      aVar3 = ((FSpinLock *)paVar25)->bFlag;
    }
    LOCK();
    aVar3 = ((FSpinLock *)paVar25)->bFlag;
    ((FSpinLock *)paVar25)->bFlag = (atomic<bool>)0x1;
    UNLOCK();
  }
  if (this->bReadbackDataProcessed == (atomic<bool>)0x0) {
    pTVar1 = &this->ReadbackRequest;
    if (((this->ReadbackRequest).Object == (FRHIGPUBufferReadback *)0x0) &&
       (this->bReadbackDataArrived == false)) {
      pTVar17 = ::operator_new(0x68);
      if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
        pTVar17 = (TReferenceControllerBase<1> *)0x0;
        local_448 = ___xmm_00000000000000000000000000000010;
        pFVar30 = (FRHIGPUBufferReadback *)&DAT_00000010;
        FStack_440.ReferenceController = _UNK_150651568;
      }
      else {
        pTVar17->SharedReferenceCount = (atomic<int>)0x1;
        pTVar17->WeakReferenceCount = (atomic<int>)0x1;
        pTVar17->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFRHIGPUBufferReadback___00_SharedPointerInternals__6B_
        ;
        pFVar18 = ::FName::FName(&local_3d0,L"FPCGProxyForGPUDataCollectionReadback");
        FRHIGPUBufferReadback::FRHIGPUBufferReadback
                  ((FRHIGPUBufferReadback *)(pTVar17 + 1),*pFVar18);
        pFVar30 = (FRHIGPUBufferReadback *)(pTVar17 + 1);
        if ((pFVar30 == (FRHIGPUBufferReadback *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
        FStack_440.ReferenceController = pTVar17;
        local_448 = pFVar30;
      }
      if (pTVar1 != (TSharedPtr<FRHIGPUBufferReadback,1> *)&local_448) {
        local_448 = (FRHIGPUBufferReadback *)0x0;
        pTVar1->Object = pFVar30;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->ReadbackRequest).SharedReferenceCount,&FStack_440);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_440.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
      pTVar17 = (TReferenceControllerBase<1> *)this->_padding_;
      pFVar19 = (FPCGProxyForGPUDataCollection *)this->_padding_;
      pTVar26 = pTVar17;
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
        UNLOCK();
        aVar10 = pTVar17->SharedReferenceCount;
        do {
          if (aVar10 == (atomic<int>)0x0) {
            pTVar26 = (TReferenceControllerBase<1> *)0x0;
            break;
          }
          LOCK();
          aVar14 = pTVar17->SharedReferenceCount;
          bVar12 = aVar10 == aVar14;
          if (bVar12) {
            pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar10 + 1);
            aVar14 = aVar10;
          }
          UNLOCK();
          aVar10 = aVar14;
        } while (!bVar12);
      }
      local_468 = pFVar19;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar26);
      if (pTVar26 == (TReferenceControllerBase<1> *)0x0) {
        pFVar19 = (FPCGProxyForGPUDataCollection *)0x0;
      }
      if ((pFVar19 != this) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result.Pin().Get() == this",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x6c3,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pTVar26 = (this->ReadbackRequest).SharedReferenceCount.ReferenceController;
      local_3f8 = pTVar1->Object;
      uVar32 = this->BufferSizeBytes;
      if (pTVar26 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar26->SharedReferenceCount = (atomic<int>)((int)pTVar26->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar4 = (local_458->Buffer).Reference;
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + 1;
        UNLOCK();
      }
      local_248[0] = (code *)0x0;
      local_220 = FMemory::Malloc(0x38,8);
      local_220[2] = (code *)pTVar17;
      local_220[4] = (code *)pTVar26;
      *local_220 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FPCGProxyForGPUDataCollection::GetCPUData'::`8'::<lambda_1>,1,1>
                            ::_vftable_;
      local_220[1] = (code *)local_468;
      local_220[3] = (code *)local_3f8;
      local_220[5] = (code *)pFVar4;
      *(uint *)(local_220 + 6) = uVar32;
      if (local_220 + 1 != (code **)0x0) {
        local_248[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FPCGProxyForGPUDataCollection::GetCPUData'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FPCGProxyForGPUDataCollection::GetCPUData_::__l8::TSTR_ReadbackDataCollection172>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_248);
      }
      else {
        if (this_01->bInitialized == 0) {
          FRenderCommandList::Init(this_01);
        }
        iVar16 = (this_01->CommandLists).ArrayNum;
        uVar24 = iVar16 - 1;
        uVar32 = 0;
        if ((int)uVar24 < iVar16) {
          uVar32 = ~uVar24 >> 0x1f;
        }
        if ((uVar32 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar16 = (this_01->CommandLists).ArrayNum;
        pFVar5 = (this_01->CommandLists).AllocatorInstance.Data;
        local_88[0] = local_238[0];
        local_88[1] = local_238[1];
        local_88[2] = local_238[2];
        local_68 = 2;
        local_98[0] = local_248[0];
        local_70 = local_220;
        local_220 = (code **)0x0;
        local_248[0] = (code *)0x0;
        pFVar20 = (FRenderCommandTag *)
                  TRenderCommandTag<`FPCGProxyForGPUDataCollection::GetCPUData'::__l8::TSTR_ReadbackDataCollection172>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar5 + (iVar16 + -1),
                   (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    *)local_98,pFVar20);
        uVar22 = (ulonglong)local_68;
        if ((2 < uVar22) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar22] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if (local_98[0] != (code *)0x0) {
            ppcVar21 = local_98 + 2;
            if (local_70 != (code **)0x0) {
              ppcVar21 = local_70;
            }
            (**(code **)(*ppcVar21 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar22])();
        }
      }
      if (local_248[0] != (code *)0x0) {
        ppcVar21 = local_248 + 2;
        if (local_220 != (code **)0x0) {
          ppcVar21 = local_220;
        }
        (**(code **)(*ppcVar21 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      param_1 = local_450;
      this = local_458;
      param_3 = local_400;
    }
    if (this->bReadbackDataArrived == false) {
      local_338._16_8_ = 0;
      uStack_320 = 0;
      local_300 = 0;
      local_2f0 = 0;
      local_340 = 0;
      local_338._8_8_ = 0;
      local_2e8 = 0;
      local_2dc = 0;
      local_2e0 = 0x100;
      local_348.DebugPtr = (UPCGData *)0x0;
      local_338._0_8_ = (FScriptContainerElement *)0x0;
      local_318 = (void *)0x0;
      local_310 = 0;
      local_30c = 0x80;
      local_308 = 0xffffffff;
      local_304 = 0;
      local_2f8 = (void *)0x0;
      local_2d4 = 0xffffffff;
      FPCGTaggedData::operator=(param_3,(FPCGTaggedData *)&local_348.ObjectPtr);
      local_2f0 = local_2f0 & 0xffffffff00000000;
      if (local_2f8 != (void *)0x0) {
        FMemory::Free(local_2f8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_338,0,local_338._8_4_);
      bVar12 = local_338._12_4_ != 0;
      local_338._8_8_ = (ulonglong)(uint)local_338._12_4_ << 0x20;
      if (bVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_338,0,(int *)(local_338 + 0xc));
      }
      local_308 = 0xffffffff;
      local_304 = 0;
      local_310 = 0;
      if (0x80 < local_30c) {
        local_30c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_338 + 0x10),0);
      }
      if (local_318 != (void *)0x0) {
        FMemory::Free(local_318);
      }
      if ((FScriptContainerElement *)local_338._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_338._0_8_);
      }
      FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_348.ObjectPtr);
      bVar12 = false;
      goto LAB_149811bae;
    }
    local_3f0 = 0;
    FStack_3e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->ReadbackRequest != (TSharedPtr<FRHIGPUBufferReadback,1> *)&local_3f0) {
      (this->ReadbackRequest).Object = (FRHIGPUBufferReadback *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ReadbackRequest).SharedReferenceCount,&FStack_3e8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_3e8.ReferenceController);
    LOCK();
    this->bReadbackDataProcessed = (atomic<bool>)0x1;
    UNLOCK();
    pFVar19 = this;
    if ((this->RawReadbackData).ArrayNum != 0) {
      local_3e0.Object = (this->Description).Object;
      local_3e0.SharedReferenceCount.ReferenceController =
           (this->Description).SharedReferenceCount.ReferenceController;
      local_438.TaggedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_438.TaggedData.ArrayNum = 0;
      local_438.TaggedData.ArrayMax = 0;
      local_438.bCancelExecutionOnEmpty = false;
      local_438.bCancelExecution = false;
      local_438.DataCrcs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_438.DataCrcs.ArrayNum = 0;
      local_438.DataCrcs.ArrayMax = 0;
      local_438.InactiveOutputPinBitmask = 0;
      local_408 = 0;
      if (local_3e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_3e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_3e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      EVar15 = PCGDataCollectionPackingHelpers::UnpackDataCollection
                         (param_1,&local_3e0,&this->RawReadbackData,(FName)0x0,&this->StringTable,
                          &local_438);
      (this->RawReadbackData).ArrayNum = 0;
      if ((this->RawReadbackData).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,&(this->RawReadbackData).AllocatorInstance,0,
                   &(this->RawReadbackData).ArrayMax);
      }
      if (EVar15 != Success) {
        local_b0 = 0x100;
        local_d0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_c0 = 0;
        local_110 = 0;
        local_100 = 0;
        local_b8 = 0;
        local_ac = 0;
        local_118.DebugPtr = (UPCGData *)0x0;
        local_108 = (void *)0x0;
        local_e8 = (void *)0x0;
        local_e0 = 0;
        local_dc = 0x80;
        local_d8 = 0xffffffff;
        local_d4 = 0;
        local_c8 = (void *)0x0;
        local_a4 = 0xffffffff;
        FPCGTaggedData::operator=(param_3,(FPCGTaggedData *)&local_118.ObjectPtr);
        local_c0 = local_c0 & 0xffffffff00000000;
        if (local_c8 != (void *)0x0) {
          FMemory::Free(local_c8);
        }
        TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Empty((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&local_108,0);
        if (local_e8 != (void *)0x0) {
          FMemory::Free(local_e8);
        }
        if (local_108 != (void *)0x0) {
          FMemory::Free(local_108);
        }
        FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_118.ObjectPtr);
        if (local_438.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_438.DataCrcs.AllocatorInstance.Data);
        }
        DestructItems<FPCGTaggedData,int>
                  ((FPCGTaggedData *)local_438.TaggedData.AllocatorInstance.Data,
                   local_438.TaggedData.ArrayNum);
        if ((FPCGTaggedData *)local_438.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0)
        {
          FMemory::Free(local_438.TaggedData.AllocatorInstance.Data);
        }
        bVar12 = true;
        goto LAB_149811bae;
      }
      piVar2 = &(this->ReadbackData).ArrayMax;
      pFVar29 = (FPCGTaggedData *)(this->ReadbackData).AllocatorInstance.Data;
      iVar16 = (this->ReadbackData).ArrayNum;
      local_450 = (FPCGContext *)piVar2;
      if ((this->ReadbackData).ArrayMax < 0) {
        DestructItems<FPCGTaggedData_const_,int>(pFVar29,iVar16);
        (this->ReadbackData).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x78,8,0,&(this->ReadbackData).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<FPCGTaggedData_const_,int>(pFVar29,iVar16);
        (this->ReadbackData).ArrayNum = 0;
      }
      piVar2 = &(this->ReadbackDataRefs).ArrayMax;
      pFVar6 = (this->ReadbackDataRefs).AllocatorInstance.Data;
      iVar16 = (this->ReadbackDataRefs).ArrayNum;
      if ((this->ReadbackDataRefs).ArrayMax < 0) {
        DestructItems<TStrongObjectPtr<UPCGData_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                  ((TStrongObjectPtr<UPCGData_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                    *)pFVar6,iVar16);
        (this->ReadbackDataRefs).ArrayNum = 0;
        if (*piVar2 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->ReadbackDataRefs).AllocatorInstance,0,piVar2);
        }
      }
      else {
        DestructItems<TStrongObjectPtr<UPCGData_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>,int>
                  ((TStrongObjectPtr<UPCGData_const_,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
                    *)pFVar6,iVar16);
        (this->ReadbackDataRefs).ArrayNum = 0;
      }
      pFVar11 = local_450;
      uVar22 = (ulonglong)local_438.TaggedData.ArrayNum;
      local_468 = (FPCGProxyForGPUDataCollection *)
                  CONCAT44(local_468._4_4_,local_438.TaggedData.ArrayNum);
      pFVar29 = (FPCGTaggedData *)(local_438.TaggedData.AllocatorInstance.Data + uVar22 * 0x78);
      FVar31.Data = local_438.TaggedData.AllocatorInstance.Data;
      while( true ) {
        if (local_438.TaggedData.ArrayNum != (int)uVar22) {
          local_478[0] = 0;
          `TCheckedPointerIterator<FPCGTaggedData,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_478);
        }
        pFVar19 = local_458;
        if ((FPCGTaggedData *)FVar31.Data == pFVar29) break;
        pFVar7 = (FPCGTaggedData *)(this->ReadbackData).AllocatorInstance.Data;
        if (((pFVar7 <= FVar31.Data) && (FVar31.Data < pFVar7 + (this->ReadbackData).ArrayMax)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar16 = (this->ReadbackData).ArrayNum;
        if (iVar16 == (this->ReadbackData).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&(this->ReadbackData).AllocatorInstance,(int *)pFVar11);
        }
        (this->ReadbackData).ArrayNum = iVar16 + 1;
        FPCGTaggedData::FPCGTaggedData
                  ((FPCGTaggedData *)
                   ((this->ReadbackData).AllocatorInstance.Data + (longlong)iVar16 * 0x78),
                   (FPCGTaggedData *)FVar31.Data);
        this_00 = (TObjectPtr<UPCGData_const_>_u_0)
                  (((FPCGTaggedData *)FVar31.Data)->Data).Data.field0_0x0.DebugPtr;
        local_470.DebugPtr = (UPCGData *)0x0;
        if (this_00.DebugPtr != (UPCGData *)0x0) {
          UObjectBase::AddRef((UObjectBase *)this_00.DebugPtr);
          local_470 = this_00;
        }
        pTVar23 = (TObjectPtr<UPCGData_const_>_u_0 *)(this->ReadbackDataRefs).AllocatorInstance.Data
        ;
        if (((pTVar23 <= &local_470) && (&local_470 < pTVar23 + (this->ReadbackDataRefs).ArrayMax))
           && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        iVar16 = (this->ReadbackDataRefs).ArrayNum;
        if (iVar16 == (this->ReadbackDataRefs).ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->ReadbackDataRefs).AllocatorInstance,
                              &(this->ReadbackDataRefs).ArrayMax);
        }
        (this->ReadbackDataRefs).ArrayNum = iVar16 + 1;
        ((TObjectPtr<UPCGData_const_>_u_0 *)
        ((this->ReadbackDataRefs).AllocatorInstance.Data + (longlong)iVar16 * 8))->DebugPtr =
             (UPCGData *)local_470;
        uVar22 = (ulonglong)local_468 & 0xffffffff;
        FVar31.Data = FVar31.Data + 0x78;
        local_470.DebugPtr = (UPCGData *)0x0;
      }
      paVar25 = &(local_458->ReadbackLock).bFlag;
      if (local_438.DataCrcs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_438.DataCrcs.AllocatorInstance.Data);
      }
      DestructItems<FPCGTaggedData,int>
                ((FPCGTaggedData *)local_438.TaggedData.AllocatorInstance.Data,
                 local_438.TaggedData.ArrayNum);
      if ((FPCGTaggedData *)local_438.TaggedData.AllocatorInstance.Data != (FPCGTaggedData *)0x0) {
        FMemory::Free(local_438.TaggedData.AllocatorInstance.Data);
      }
    }
    lVar28 = (longlong)(int)local_460;
    if (((int)local_460 < 0) || ((pFVar19->ReadbackData).ArrayNum <= (int)local_460)) {
      local_260 = 0x100;
      local_280 = 0;
      local_2c8.DebugPtr = (UPCGData *)0x0;
      local_2c0 = 0;
      pTVar23 = &local_2c8;
      local_2b8._0_8_ = (FScriptContainerElement *)0x0;
      bVar9 = false;
      local_2b8._8_8_ = 0;
      bVar12 = true;
      local_298 = (void *)0x0;
      local_290 = 0;
      local_284 = 0;
      local_278 = (void *)0x0;
      local_268 = 0;
      local_25c = 0;
      local_2b8._16_8_ = 0;
      uStack_2a0 = 0;
      local_270 = 0;
      local_28c = 0x80;
      local_288 = 0xffffffff;
      local_254 = 0xffffffff;
    }
    else {
      uVar32 = 0;
      if ((int)local_460 < (pFVar19->ReadbackData).ArrayNum) {
        uVar32 = ~local_460 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pFVar27 = (FPCGDataPtrWrapper *)
                ((pFVar19->ReadbackData).AllocatorInstance.Data + lVar28 * 0x78);
      FPCGDataPtrWrapper::FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_198[0].ObjectPtr,pFVar27);
      local_188._0_8_ = (FScriptContainerElement *)0x0;
      local_188._8_8_ = 0;
      local_168 = (void *)0x0;
      local_160 = 0;
      local_15c = 0x80;
      local_158 = 0xffffffff;
      local_154 = 0;
      local_148 = (ForElementType<FSetElementId>)0x0;
      local_140 = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_188,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar27 + 1));
      local_138 = pFVar27[6].Data.field0_0x0;
      bVar9 = true;
      bVar12 = false;
      local_130 = (undefined1)pFVar27[6].WeakData.WeakPtr.ObjectIndex;
      local_12f = *(undefined1 *)((longlong)&pFVar27[6].WeakData.WeakPtr.ObjectIndex + 1);
      local_12c = *(undefined8 *)&pFVar27[6].WeakData.WeakPtr.ObjectSerialNumber;
      local_124 = *(undefined4 *)((longlong)&pFVar27[7].Data.field0_0x0 + 4);
      pTVar23 = local_198;
    }
    pFVar29 = local_400;
    FPCGDataPtrWrapper::operator=(&local_400->Data,(FPCGDataPtrWrapper *)&pTVar23->ObjectPtr);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              (&pFVar29->Tags,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               &pTVar23[2].ObjectPtr);
    pFVar29->Pin = (FName)pTVar23[0xc].ObjectPtr.field0_0x0;
    pFVar29->bPinlessData = *(bool *)(pTVar23 + 0xd);
    pFVar29->bIsUsedMultipleTimes = *(bool *)((longlong)pTVar23 + 0x69);
    (pFVar29->OriginatingNode).WeakPtr = *(FWeakObjectPtr *)((longlong)pTVar23 + 0x6c);
    pFVar29->OriginalIndex = *(int *)((longlong)&pTVar23[0xe].ObjectPtr.field0_0x0 + 4);
    if (bVar12) {
      local_270 = local_270 & 0xffffffff00000000;
      if (local_278 != (void *)0x0) {
        FMemory::Free(local_278);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_2b8,0,local_2b8._8_4_);
      bVar12 = local_2b8._12_4_ != 0;
      local_2b8._8_8_ = (ulonglong)(uint)local_2b8._12_4_ << 0x20;
      if (bVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_2b8,0,(int *)(local_2b8 + 0xc));
      }
      local_288 = 0xffffffff;
      local_284 = 0;
      local_290 = 0;
      if (0x80 < local_28c) {
        local_28c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_2b8 + 0x10),0);
      }
      if (local_298 != (void *)0x0) {
        FMemory::Free(local_298);
      }
      if ((FScriptContainerElement *)local_2b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_2b8._0_8_);
      }
      FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_2c8.ObjectPtr);
    }
    if (bVar9) {
      local_140 = 0;
      if (local_148 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_148);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_188,0,local_188._8_4_);
      bVar12 = local_188._12_4_ != 0;
      local_188._8_8_ = (ulonglong)(uint)local_188._12_4_ << 0x20;
      if (bVar12) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_188,0,(int *)(local_188 + 0xc));
      }
      local_158 = 0xffffffff;
      local_154 = 0;
      local_160 = 0;
      if (0x80 < local_15c) {
        local_15c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10),0);
      }
      if (local_168 != (void *)0x0) {
        FMemory::Free(local_168);
      }
      if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._0_8_);
      }
      pTVar23 = local_198;
      goto LAB_149811ba7;
    }
  }
  else {
    uVar32 = 0;
    if ((param_2 < 0) || ((this->ReadbackData).ArrayNum <= param_2)) {
      local_360 = 0x100;
      local_380 = 0;
      local_3b8._16_8_ = 0;
      uStack_3a0 = 0;
      local_370 = 0;
      local_3c8.DebugPtr = (UPCGData *)0x0;
      uVar24 = 2;
      local_3c0 = 0;
      local_3b8._0_8_ = (FScriptContainerElement *)0x0;
      local_3b8._8_8_ = 0;
      local_398 = (void *)0x0;
      local_390 = 0;
      local_38c = 0x80;
      local_388 = 0xffffffff;
      local_384 = 0;
      local_378 = (void *)0x0;
      local_368 = 0;
      local_35c = 0;
      local_354 = 0xffffffff;
      pTVar23 = &local_3c8;
    }
    else {
      uVar24 = uVar32;
      if (param_2 < (this->ReadbackData).ArrayNum) {
        uVar24 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        uVar13 = (*pcVar8)();
        return (bool)uVar13;
      }
      pFVar27 = (FPCGDataPtrWrapper *)
                ((this->ReadbackData).AllocatorInstance.Data + (longlong)param_2 * 0x78);
      FPCGDataPtrWrapper::FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_218[0].ObjectPtr,pFVar27);
      local_208._0_8_ = (FScriptContainerElement *)0x0;
      local_208._8_8_ = 0;
      local_1e8 = (void *)0x0;
      local_1e0 = 0;
      local_1dc = 0x80;
      local_1d8 = 0xffffffff;
      local_1d4 = 0;
      local_1c8 = (ForElementType<FSetElementId>)0x0;
      local_1c0 = 0;
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
                ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_208,
                 (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)(pFVar27 + 1));
      local_1b8 = pFVar27[6].Data.field0_0x0;
      local_1b0 = (undefined1)pFVar27[6].WeakData.WeakPtr.ObjectIndex;
      local_1af = *(undefined1 *)((longlong)&pFVar27[6].WeakData.WeakPtr.ObjectIndex + 1);
      local_1ac = *(undefined8 *)&pFVar27[6].WeakData.WeakPtr.ObjectSerialNumber;
      local_1a4 = *(undefined4 *)((longlong)&pFVar27[7].Data.field0_0x0 + 4);
      pTVar23 = local_218;
      uVar24 = uVar32;
      uVar32 = 1;
    }
    FPCGDataPtrWrapper::operator=(&param_3->Data,(FPCGDataPtrWrapper *)&pTVar23->ObjectPtr);
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::operator=
              (&param_3->Tags,
               (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
               &pTVar23[2].ObjectPtr);
    param_3->Pin = (FName)pTVar23[0xc].ObjectPtr.field0_0x0;
    param_3->bPinlessData = *(bool *)(pTVar23 + 0xd);
    param_3->bIsUsedMultipleTimes = *(bool *)((longlong)pTVar23 + 0x69);
    (param_3->OriginatingNode).WeakPtr = *(FWeakObjectPtr *)((longlong)pTVar23 + 0x6c);
    param_3->OriginalIndex = *(int *)((longlong)&pTVar23[0xe].ObjectPtr.field0_0x0 + 4);
    if (uVar24 != 0) {
      local_370 = local_370 & 0xffffffff00000000;
      if (local_378 != (void *)0x0) {
        FMemory::Free(local_378);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_3b8,0,local_3b8._8_4_);
      iVar16 = SUB84(local_3b8._8_8_,4);
      local_3b8._8_8_ = local_3b8._8_8_ & 0xffffffff00000000;
      if (iVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_3b8,0,(int *)(local_3b8 + 0xc));
      }
      local_388 = 0xffffffff;
      local_384 = 0;
      local_390 = 0;
      if (0x80 < local_38c) {
        local_38c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_3b8 + 0x10),0);
      }
      if (local_398 != (void *)0x0) {
        FMemory::Free(local_398);
      }
      if ((FScriptContainerElement *)local_3b8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_3b8._0_8_);
      }
      FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&local_3c8.ObjectPtr);
    }
    if (uVar32 != 0) {
      local_1c0 = 0;
      if (local_1c8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1c8);
      }
      TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_208,0,local_208._8_4_);
      iVar16 = SUB84(local_208._8_8_,4);
      local_208._8_8_ = local_208._8_8_ & 0xffffffff00000000;
      if (iVar16 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_208,0,(int *)(local_208 + 0xc));
      }
      local_1d8 = 0xffffffff;
      local_1d4 = 0;
      local_1e0 = 0;
      if (0x80 < local_1dc) {
        local_1dc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_208 + 0x10),0);
      }
      if (local_1e8 != (void *)0x0) {
        FMemory::Free(local_1e8);
      }
      if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_208._0_8_);
      }
      pTVar23 = local_218;
LAB_149811ba7:
      FPCGDataPtrWrapper::~FPCGDataPtrWrapper((FPCGDataPtrWrapper *)&pTVar23->ObjectPtr);
    }
  }
  bVar12 = true;
LAB_149811bae:
  if (paVar25 != (atomic<bool> *)0x0) {
    *paVar25 = (atomic<bool>)0x0;
  }
  return bVar12;
}

