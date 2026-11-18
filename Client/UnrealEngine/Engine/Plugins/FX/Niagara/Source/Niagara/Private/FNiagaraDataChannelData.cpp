// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 21

// FNiagaraDataChannelData @ 1490b1030

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

FNiagaraDataChannelData * __thiscall
FNiagaraDataChannelData::FNiagaraDataChannelData(FNiagaraDataChannelData *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->GameData).Object = (FNiagaraDataChannelGameData *)0x0;
  (this->GameData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->CPUSimData = (FNiagaraDataSet *)0x0;
  (this->PrevCPUSimData).Reference = (FNiagaraDataBuffer *)0x0;
  (this->PublishRequestsForGPU).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PublishRequestsForGPU).ArrayNum = 0;
  (this->PublishRequestsForGPU).ArrayMax = 0;
  (this->RTProxy).Object = (FNiagaraDataChannelDataProxy *)0x0;
  (this->RTProxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PublishRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PublishRequests).ArrayNum = 0;
  (this->PublishRequests).ArrayMax = 0;
  (this->PublishRequestsFromGPU).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PublishRequestsFromGPU).ArrayNum = 0;
  (this->PublishRequestsFromGPU).ArrayMax = 0;
  (this->WeakOwnerWorld).WeakPtr = (FWeakObjectPtr)0x0;
  this->GameDataStaging = (FNiagaraDataSet *)0x0;
  *(undefined8 *)&(this->LwcTile).field0_0x0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_
  ;
  (this->LwcTile).field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PublishCritSec,4000);
  (this->LayoutInfo).Object = (FNiagaraDataChannelLayoutInfo *)0x0;
  (this->LayoutInfo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->NumGPUSpawningReaders = (atomic<int>)0x0;
  (this->PendingDestGameData).AllocatorInstance.SecondaryData =
       (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0;
  (this->PendingDestGameData).ArrayNum = 0;
  (this->PendingDestGameData).ArrayMax = 8;
  return this;
}

// ~FNiagaraDataChannelData @ 1490b7740

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

void __thiscall FNiagaraDataChannelData::~FNiagaraDataChannelData(FNiagaraDataChannelData *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FNiagaraDataBuffer *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  undefined ***pppuVar9;
  ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_> FVar10;
  ulonglong uVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  code *local_88 [2];
  undefined **local_78;
  FNiagaraDataSet *pFStack_70;
  FNiagaraDataSet *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraDataSet *pFStack_40;
  FNiagaraDataSet *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0;
  FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->GameData != (TSharedPtr<FNiagaraDataChannelGameData,1> *)&local_a8) {
    (this->GameData).Object = (FNiagaraDataChannelGameData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GameData).SharedReferenceCount,&FStack_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_a0.ReferenceController);
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataChannelData::~FNiagaraDataChannelData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  pFStack_70 = this->CPUSimData;
  local_68 = this->GameDataStaging;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataChannelData::~FNiagaraDataChannelData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataChannelData::~FNiagaraDataChannelData_::__l2::TSTR_FDeleteContextCommand52>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
    pFVar8 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraDataChannelData::~FNiagaraDataChannelData'::__l2::TSTR_FDeleteContextCommand52>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar8);
    uVar11 = (ulonglong)local_28;
    if (2 < uVar11) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar9 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar9 = local_30;
        }
        (*(code *)(*pppuVar9)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar11])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar9 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar9 = local_60;
    }
    (*(code *)(*pppuVar9)[2])();
  }
  this->GameDataStaging = (FNiagaraDataSet *)0x0;
  this->CPUSimData = (FNiagaraDataSet *)0x0;
  local_98 = 0;
  FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->RTProxy != (TSharedPtr<FNiagaraDataChannelDataProxy,1> *)&local_98) {
    (this->RTProxy).Object = (FNiagaraDataChannelDataProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RTProxy).SharedReferenceCount,&FStack_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  FVar10 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
  if (FVar10 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
    FVar10 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)&this->PendingDestGameData;
  }
  DestructItems<TSharedPtr<FNiagaraDataChannelGameData,1>,int>
            ((TSharedPtr<FNiagaraDataChannelGameData,1> *)FVar10,
             (this->PendingDestGameData).ArrayNum);
  FVar10 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LayoutInfo).SharedReferenceCount.ReferenceController);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PublishCritSec);
  DestructItems<FNiagaraDataChannelPublishRequest,int>
            ((FNiagaraDataChannelPublishRequest *)
             (this->PublishRequestsFromGPU).AllocatorInstance.Data,
             (this->PublishRequestsFromGPU).ArrayNum);
  pFVar3 = (this->PublishRequestsFromGPU).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FNiagaraDataChannelPublishRequest,int>
            ((FNiagaraDataChannelPublishRequest *)(this->PublishRequests).AllocatorInstance.Data,
             (this->PublishRequests).ArrayNum);
  pFVar3 = (this->PublishRequests).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RTProxy).SharedReferenceCount.ReferenceController);
  DestructItems<FNiagaraDataChannelPublishRequest,int>
            ((FNiagaraDataChannelPublishRequest *)
             (this->PublishRequestsForGPU).AllocatorInstance.Data,
             (this->PublishRequestsForGPU).ArrayNum);
  pFVar3 = (this->PublishRequestsForGPU).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->PrevCPUSimData).Reference;
  if (pFVar4 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar4->_padding_ < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar4->_padding_ = (int)pFVar4->_padding_ + -1;
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GameData).SharedReferenceCount.ReferenceController);
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

// operator() @ 1490c1530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FNiagaraDataChannelData::EndFrame'::__l43::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if (*(longlong *)this == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)this;
  pFVar1 = (ForAnyElementType *)(lVar3 + 0x50);
  if (pFVar1 == (ForAnyElementType *)((longlong)this + 0x10)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar2 = *(int *)((longlong)this + 0x18);
  if (iVar2 != 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar2,pFVar1,(int *)(lVar3 + 0x58),(int *)(lVar3 + 0x5c));
    ConstructItems<TRefCountPtr<FNiagaraDataBuffer>,TRefCountPtr<FNiagaraDataBuffer>,int>
              (pFVar1->Data + (longlong)iVar6 * 8,
               (TRefCountPtr<FNiagaraDataBuffer> *)
               ((ForAnyElementType *)((longlong)this + 0x10))->Data,iVar2);
  }
  *(undefined1 *)(lVar3 + 0x39) = 1;
  return;
}

// BeginFrame @ 1490cce90

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

void __thiscall
FNiagaraDataChannelData::BeginFrame
          (FNiagaraDataChannelData *this,UNiagaraDataChannelHandler *param_1)

{
  TArray<FNiagaraDataChannelPublishRequest,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<FNiagaraDataChannelPublishRequest,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FNiagaraDataChannelGameData *pFVar5;
  FNiagaraDataChannelPublishRequest *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  UObject *pUVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  
  if ((this->RTProxy).Object == (FNiagaraDataChannelDataProxy *)0x0) {
    CreateRenderThreadProxy(this,param_1);
  }
  if ((this->GameData).Object == (FNiagaraDataChannelGameData *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar5 = (this->GameData).Object;
  if ((pFVar5->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  bVar10 = ((pFVar5->LayoutInfo).Object)->bKeepPreviousFrameData;
  if (bVar10 == false) {
    iVar11 = 0;
  }
  else {
    iVar11 = pFVar5->NumElements;
  }
  pFVar5->PrevNumElements = iVar11;
  pFVar5->NumElements = 0;
  iVar11 = (pFVar5->VariableData).ArrayNum;
  pFVar14 = (pFVar5->VariableData).AllocatorInstance.Data;
  pFVar4 = pFVar14 + (longlong)iVar11 * 0x28;
  while( true ) {
    if ((pFVar5->VariableData).ArrayNum != iVar11) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraDataChannelVariableBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar14 == pFVar4) break;
    if (bVar10 != false) {
      uVar8 = *(undefined8 *)&pFVar14->field_0x0;
      uVar9 = *(undefined8 *)&pFVar14[8].field_0x0;
      *(undefined8 *)&pFVar14->field_0x0 = *(undefined8 *)&pFVar14[0x10].field_0x0;
      *(undefined8 *)&pFVar14[8].field_0x0 = *(undefined8 *)&pFVar14[0x18].field_0x0;
      *(undefined8 *)&pFVar14[0x10].field_0x0 = uVar8;
      *(undefined8 *)&pFVar14[0x18].field_0x0 = uVar9;
    }
    iVar12 = *(int *)(pFVar14 + 0xc);
    *(undefined4 *)&pFVar14[8].field_0x0 = 0;
    if (iVar12 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)pFVar14,0,(int *)(pFVar14 + 0xc));
    }
    pFVar14 = pFVar14 + 0x28;
  }
  pUVar13 = FWeakObjectPtr::Get(&(param_1->DataChannel).WeakPtr);
  if (pUVar13 == (UObject *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Ret",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                        ,0x3a,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (pUVar13[1].field_0x10 != '\0') {
    TRefCountPtr<FNiagaraDataBuffer>::operator=(&this->PrevCPUSimData,this->CPUSimData->CurrentData)
    ;
  }
  FNiagaraDataSet::BeginSimulate(this->CPUSimData,true);
  FNiagaraDataSet::EndSimulate(this->CPUSimData,true);
  pTVar1 = &this->PublishRequests;
  pTVar2 = &this->PublishRequestsFromGPU;
  if (pTVar1 == pTVar2) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(void*)this != (void*)&Source",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x96e,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar11 = (this->PublishRequestsFromGPU).ArrayNum;
  if (iVar11 != 0) {
    iVar12 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x38,8,iVar11,&pTVar1->AllocatorInstance,&(this->PublishRequests).ArrayNum,
                        &(this->PublishRequests).ArrayMax);
    ConstructItems<FNiagaraDataChannelPublishRequest,FNiagaraDataChannelPublishRequest,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 0x38,
               (FNiagaraDataChannelPublishRequest *)(pTVar2->AllocatorInstance).Data,iVar11);
  }
  piVar3 = &(this->PublishRequestsFromGPU).ArrayMax;
  pFVar6 = (FNiagaraDataChannelPublishRequest *)(pTVar2->AllocatorInstance).Data;
  iVar11 = (this->PublishRequestsFromGPU).ArrayNum;
  if (*piVar3 < 0) {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar6,iVar11);
    (this->PublishRequestsFromGPU).ArrayNum = 0;
    if (*piVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar3);
    }
  }
  else {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar6,iVar11);
    (this->PublishRequestsFromGPU).ArrayNum = 0;
  }
  return;
}

// ConsumePublishRequests @ 1490d6720

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

int __thiscall
FNiagaraDataChannelData::ConsumePublishRequests
          (FNiagaraDataChannelData *this,UNiagaraDataChannelHandler *param_1,ETickingGroup *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  byte bVar3;
  float fVar4;
  FNiagaraDataChannelGameData *pFVar5;
  FNiagaraDataSet *pFVar6;
  FNiagaraDataSet *pFVar7;
  code *pcVar8;
  UNiagaraDataChannelHandler *this_00;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  UNiagaraDataChannel *pUVar13;
  FText *pFVar14;
  UNiagaraDataChannelAsset *pUVar15;
  longlong lVar16;
  FNiagaraDataBuffer *pFVar17;
  UObject *pUVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  FNiagaraDataChannelPublishRequest *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  undefined1 local_res8 [8];
  UNiagaraDataChannelHandler *local_res10;
  ETickingGroup *local_res18;
  int local_res20;
  uint local_138;
  FName local_120;
  FName local_118;
  FName local_110;
  FScriptContainerElement *local_108;
  FWeakObjectPtr *local_100;
  FName local_f8;
  FName local_f0;
  TVector<float>_u_0 local_e8;
  TVector<float>_u_0 local_d8;
  TVector<float>_u_0 local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FText local_68;
  FText local_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (((param_1 == (UNiagaraDataChannelHandler *)0x0) ||
      (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Owner)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                         ,0xd1,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
  FlushAllPendingGameData(this);
  if (&this->PublishCritSec == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->PublishCritSec);
  local_100 = &(param_1->DataChannel).WeakPtr;
  pUVar13 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(local_100);
  if ((pUVar13 == (UNiagaraDataChannel *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                         ,0x3a,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
  if (((this->PublishRequests).ArrayNum == 0) || (pUVar13 == (UNiagaraDataChannel *)0x0)) {
    iVar10 = 0;
LAB_1490d712b:
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->PublishCritSec);
    return iVar10;
  }
  if ((NDCCVars::bEmitWarningsOnLateNDCWrites != false) &&
     (pUVar13->bEnforceTickGroupReadWriteOrder != false)) {
    bVar3 = (pUVar13->FinalWriteTickGroup).Value;
    iVar11 = param_1->CurrentTG - TG_StartPhysics;
    iVar10 = 7;
    if (iVar11 < 7) {
      iVar10 = iVar11;
    }
    iVar11 = 0;
    if (0 < iVar10) {
      iVar11 = iVar10;
    }
    if ((int)(uint)bVar3 < iVar11) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        TGEnum = StaticEnum<enum_ETickingGroup>();
        _Init_thread_footer(&::_TSS0);
      }
      if (2 < (byte)LogNiagara._0_1_) {
        pFVar14 = UEnum::GetDisplayNameTextByValue(TGEnum,&local_58,(ulonglong)bVar3);
        FText::ToString(pFVar14);
        pFVar14 = UEnum::GetDisplayNameTextByValue(TGEnum,&local_68,(longlong)iVar11);
        FText::ToString(pFVar14);
        pUVar15 = UNiagaraDataChannel::GetAsset(pUVar13);
        local_110 = (FName)pUVar15->_padding_;
        ::FName::ToString(&local_110,&local_b8);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
        }
      }
    }
  }
  lVar16 = (**(code **)(param_1->_padding_ + 0x180))(param_1);
  if (((lVar16 == 0) || ((*(uint *)(lVar16 + 8) >> 0x1e & 1) != 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(World)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                         ,0xef,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
  if (((this->GameData).Object == (FNiagaraDataChannelGameData *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
  iVar11 = ((this->GameData).Object)->NumElements;
  iVar12 = (this->PublishRequestsForGPU).ArrayNum;
  local_138 = this->CPUSimData->CurrentData->NumInstances;
  iVar10 = (this->PublishRequests).ArrayNum;
  uVar22 = iVar12 + iVar10;
  local_res20 = iVar11;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  if ((this->PublishRequestsForGPU).ArrayMax < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,uVar22,&(this->PublishRequestsForGPU).AllocatorInstance,iVar12,
               &(this->PublishRequestsForGPU).ArrayMax);
  }
  uVar22 = (this->PublishRequests).ArrayNum;
  uVar19 = (ulonglong)(int)uVar22;
  piVar1 = &(this->PublishRequestsForGPU).ArrayMax;
  pFVar23 = (this->PublishRequests).AllocatorInstance.Data;
  local_108 = pFVar23 + uVar19 * 0x38;
  do {
    pFVar20 = local_108;
    if ((this->PublishRequests).ArrayNum != (int)uVar19) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraDataChannelPublishRequest,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar23 == pFVar20) {
      FNiagaraDataSet::BeginSimulate(this->CPUSimData,true);
      FNiagaraDataSet::Allocate(this->CPUSimData,local_138,true);
      if (((this->GameData).Object == (FNiagaraDataChannelGameData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        iVar10 = (*pcVar8)();
        return iVar10;
      }
      FNiagaraDataChannelGameData::Reserve((this->GameData).Object,local_res20);
      for (iVar12 = 0; (-1 < iVar12 && (iVar12 < (this->PublishRequests).ArrayNum));
          iVar12 = iVar12 + 1) {
        if ((iVar12 < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          iVar10 = (*pcVar8)();
          return iVar10;
        }
        pFVar21 = (FNiagaraDataChannelPublishRequest *)
                  ((this->PublishRequests).AllocatorInstance.Data + (longlong)iVar12 * 0x38);
        pFVar5 = (pFVar21->GameData).Object;
        if ((pFVar5 != (FNiagaraDataChannelGameData *)0x0) && (pFVar5->NumElements != 0)) {
          if (pFVar21->bVisibleToGame != false) {
            if (((this->GameData).Object == (FNiagaraDataChannelGameData *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              iVar10 = (*pcVar8)();
              return iVar10;
            }
            FNiagaraDataChannelGameData::AppendFromGameData((this->GameData).Object,pFVar5);
          }
          if (pFVar21->bVisibleToCPUSims != false) {
            pFVar6 = this->CPUSimData;
            uVar2 = *(undefined8 *)&(this->LwcTile).field0_0x0;
            fVar4 = (this->LwcTile).field0_0x0._s_0.Z;
            if ((pFVar6->DestinationData == (FNiagaraDataBuffer *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("DestinationData",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                   ,0x15e,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              iVar10 = (*pcVar8)();
              return iVar10;
            }
            local_d8._0_8_ = uVar2;
            local_d8._s_0.Z = fVar4;
            FNiagaraDataChannelGameData::WriteToDataSet
                      (pFVar5,this->CPUSimData->DestinationData,
                       pFVar6->DestinationData->NumInstances,(TVector<float> *)&local_d8._s_0);
          }
        }
        if ((pFVar21->Data).Reference != (FNiagaraDataBuffer *)0x0) {
          if (pFVar21->bVisibleToGame != false) {
            if (((this->GameData).Object == (FNiagaraDataChannelGameData *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              iVar10 = (*pcVar8)();
              return iVar10;
            }
            local_c8._0_8_ = *(undefined8 *)&(pFVar21->LwcTile).field0_0x0;
            local_c8._s_0.Z = (pFVar21->LwcTile).field0_0x0._s_0.Z;
            FNiagaraDataChannelGameData::AppendFromDataSet
                      ((this->GameData).Object,(pFVar21->Data).Reference,
                       (TVector<float> *)&local_c8._s_0);
          }
          if (pFVar21->bVisibleToCPUSims != false) {
            pFVar17 = (pFVar21->Data).Reference;
            pFVar6 = this->CPUSimData;
            uVar22 = pFVar17->NumInstances;
            if ((pFVar6->DestinationData == (FNiagaraDataBuffer *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("DestinationData",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                   ,0x15e,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              iVar10 = (*pcVar8)();
              return iVar10;
            }
            pFVar7 = this->CPUSimData;
            uVar24 = pFVar6->DestinationData->NumInstances;
            if ((pFVar7->DestinationData == (FNiagaraDataBuffer *)0x0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("DestinationData",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                   ,0x15e,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              iVar10 = (*pcVar8)();
              return iVar10;
            }
            FNiagaraDataBuffer::CopyToUnrelated(pFVar17,pFVar7->DestinationData,0,uVar24,uVar22);
          }
        }
        pUVar13 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(local_100);
        if ((pUVar13 == (UNiagaraDataChannel *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                               ,0x3a,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          iVar10 = (*pcVar8)();
          return iVar10;
        }
        FNiagaraDataChannelDebugUtilities::LogWrite(pFVar21,pUVar13,local_res18);
      }
      piVar1 = &(this->PublishRequests).ArrayMax;
      pFVar21 = (FNiagaraDataChannelPublishRequest *)(this->PublishRequests).AllocatorInstance.Data;
      iVar12 = (this->PublishRequests).ArrayNum;
      if ((this->PublishRequests).ArrayMax < 0) {
        DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar21,iVar12);
        (this->PublishRequests).ArrayNum = 0;
        if (*piVar1 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,0,&(this->PublishRequests).AllocatorInstance,0,piVar1);
        }
      }
      else {
        DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar21,iVar12);
        (this->PublishRequests).ArrayNum = 0;
      }
      FNiagaraDataSet::EndSimulate(this->CPUSimData,true);
      this_00 = local_res10;
      pUVar18 = FWeakObjectPtr::Get(&(local_res10->DataChannel).WeakPtr);
      if ((pUVar18 == (UObject *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ret",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                             ,0x3a,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        iVar10 = (*pcVar8)();
        return iVar10;
      }
      if (*(char *)(pUVar18 + 2) != '\0') {
        pUVar18 = FWeakObjectPtr::Get(&(this_00->DataChannel).WeakPtr);
        if ((pUVar18 == (UObject *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Ret",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                               ,0x3a,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          iVar10 = (*pcVar8)();
          return iVar10;
        }
        local_f8.ComparisonIndex.Value = *(uint *)&pUVar18->field_0x18;
        local_f8.Number = *(uint *)&pUVar18->field_0x1c;
        ::FName::ToString(&local_f8,&local_a8);
        ::FString::PrintfImpl(&local_78,L"Data Channel %s - CURR");
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        local_120.ComparisonIndex.Value = 0;
        local_120.Number = 0;
        FNiagaraDataBuffer::Dump
                  (this->CPUSimData->CurrentData,0,this->CPUSimData->CurrentData->NumInstances,
                   &local_78,&local_120);
        if ((this->PrevCPUSimData).Reference != (FNiagaraDataBuffer *)0x0) {
          pUVar18 = FWeakObjectPtr::Get(&(this_00->DataChannel).WeakPtr);
          if ((pUVar18 == (UObject *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Ret",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                                 ,0x3a,L""), bVar9)) {
            pcVar8 = (code *)swi(3);
            iVar10 = (*pcVar8)();
            return iVar10;
          }
          local_f0.ComparisonIndex.Value = *(uint *)&pUVar18->field_0x18;
          local_f0.Number = *(uint *)&pUVar18->field_0x1c;
          ::FName::ToString(&local_f0,&local_98);
          ::FString::PrintfImpl(&local_88,L"Data Channel %s - PREV");
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          pFVar17 = (this->PrevCPUSimData).Reference;
          local_118.ComparisonIndex.Value = 0;
          local_118.Number = 0;
          FNiagaraDataBuffer::Dump(pFVar17,0,pFVar17->NumInstances,&local_88,&local_118);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
      UNiagaraDataChannelHandler::NotifySubscribers(this_00,this,iVar11,local_res20 - iVar11);
      goto LAB_1490d712b;
    }
    uVar24 = 0;
    if (((NDCCVars::AutoUploadGPUSpawnData == false) || ((int)this->NumGPUSpawningReaders < 1)) ||
       (pFVar23[0x19] == (FScriptContainerElement)0x0)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((pFVar23[0x1a] == (FScriptContainerElement)0x0) || (bVar9)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    pFVar5 = *(FNiagaraDataChannelGameData **)(pFVar23 + 8);
    if (pFVar5 == (FNiagaraDataChannelGameData *)0x0) {
      if (*(longlong *)pFVar23 == 0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<3215050747842396436>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                           ,0x114,"PublishRequest.Data");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          iVar10 = (*pcVar8)();
          return iVar10;
        }
      }
      else {
        uVar24 = *(uint *)(*(longlong *)pFVar23 + 0x124);
        if ((uVar24 != 0) && (bVar9)) {
          iVar12 = (this->PublishRequestsForGPU).ArrayNum;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x838,&(this->PublishRequestsForGPU).AllocatorInstance,piVar1);
          }
          (this->PublishRequestsForGPU).ArrayNum = iVar12 + 1;
          pFVar20 = (this->PublishRequestsForGPU).AllocatorInstance.Data + (longlong)iVar12 * 0x38;
          DefaultConstructItems<FNiagaraDataChannelPublishRequest,int>(pFVar20,1);
          TRefCountPtr<FNiagaraDataBuffer>::operator=
                    ((TRefCountPtr<FNiagaraDataBuffer> *)pFVar20,*(FNiagaraDataBuffer **)pFVar23);
          goto LAB_1490d6bb6;
        }
      }
    }
    else {
      uVar24 = pFVar5->NumElements;
      if ((0 < (int)uVar24) && (bVar9)) {
        pFVar17 = FNiagaraDataSet::BeginSimulate(this->GameDataStaging,true);
        FNiagaraDataBuffer::Allocate(pFVar17,uVar24,false);
        local_e8._s_0.Z = (this->LwcTile).field0_0x0._s_0.Z;
        local_e8._0_8_ = *(undefined8 *)&(this->LwcTile).field0_0x0;
        FNiagaraDataChannelGameData::WriteToDataSet
                  (pFVar5,pFVar17,0,(TVector<float> *)&local_e8._s_0);
        FNiagaraDataSet::EndSimulate(this->GameDataStaging,true);
        iVar12 = (this->PublishRequestsForGPU).ArrayNum;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&(this->PublishRequestsForGPU).AllocatorInstance,piVar1);
        }
        pFVar20 = (this->PublishRequestsForGPU).AllocatorInstance.Data;
        (this->PublishRequestsForGPU).ArrayNum = iVar12 + 1;
        pFVar20 = pFVar20 + (longlong)iVar12 * 0x38;
        DefaultConstructItems<FNiagaraDataChannelPublishRequest,int>(pFVar20,1);
        TRefCountPtr<FNiagaraDataBuffer>::operator=
                  ((TRefCountPtr<FNiagaraDataBuffer> *)pFVar20,pFVar17);
LAB_1490d6bb6:
        pFVar20[0x19] = pFVar23[0x19];
        pFVar20[0x1a] = pFVar23[0x1a];
        *(undefined8 *)(pFVar20 + 0x1c) = *(undefined8 *)(pFVar23 + 0x1c);
        *(undefined4 *)(pFVar20 + 0x24) = *(undefined4 *)(pFVar23 + 0x24);
      }
    }
    if (pFVar23[0x18] != (FScriptContainerElement)0x0) {
      local_res20 = local_res20 + uVar24;
    }
    if (pFVar23[0x19] != (FScriptContainerElement)0x0) {
      local_138 = local_138 + uVar24;
    }
    pFVar23 = pFVar23 + 0x38;
    uVar19 = (ulonglong)uVar22;
  } while( true );
}

// CreateRenderThreadProxy @ 1490e79a0

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDataChannelData::CreateRenderThreadProxy
          (FNiagaraDataChannelData *this,UNiagaraDataChannelHandler *param_1)

{
  int *piVar1;
  TSharedPtr<FNiagaraDataChannelDataProxy,1> *pTVar2;
  atomic<int> *paVar3;
  int iVar4;
  atomic<int> aVar5;
  longlong *plVar6;
  FNiagaraDataChannelData *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FNiagaraDataChannelLayoutInfo *pFVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  UNiagaraDataChannel *this_00;
  FNiagaraGpuComputeDispatchInterface *pFVar12;
  bool bVar13;
  bool bVar14;
  atomic<int> aVar15;
  UWorld *pUVar16;
  TReferenceControllerBase<1> *pTVar17;
  FNiagaraDataSet *pFVar18;
  UNiagaraDataChannelAsset *pUVar19;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar20;
  code **ppcVar21;
  FString *pFVar22;
  ulonglong uVar23;
  FNiagaraDataChannelDataProxy *pFVar24;
  undefined1 auStack_148 [32];
  FString local_128;
  FNiagaraDataChannelDataProxy *local_118;
  FSharedReferencer<1> local_110;
  FString local_108;
  UNiagaraDataChannel *local_f8;
  FName local_f0;
  FNiagaraGpuComputeDispatchInterface *local_e8;
  FNiagaraDataChannelLayoutInfo *local_e0;
  TReferenceControllerBase<1> *pTStack_d8;
  longlong local_d0 [3];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  if ((param_1 == (UNiagaraDataChannelHandler *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Owner",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                          ,0x1fc,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pUVar16 = (UWorld *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
  local_f8 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(&(param_1->DataChannel).WeakPtr);
  if (local_f8 == (UNiagaraDataChannel *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Ret",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                        ,0x3a,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("DataChannel",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                        ,0x1ff,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  local_e8 = FNiagaraGpuComputeDispatchInterface::Get(pUVar16);
  if (local_e8 == (FNiagaraGpuComputeDispatchInterface *)0x0) {
    return;
  }
  pTVar17 = ::operator_new(0xb8);
  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
    pFVar24 = (FNiagaraDataChannelDataProxy *)&DAT_00000010;
LAB_1490e7bb4:
    if (((pFVar24->_padding_ == 0) || (pFVar24->_padding_ == 0)) ||
       (*(int *)(pFVar24->_padding_ + 8) < 1)) {
      if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar24->_padding_ = (longlong)pFVar24;
      if (pTVar17 != (TReferenceControllerBase<1> *)pFVar24->_padding_) {
        if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar6 = (longlong *)pFVar24->_padding_;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
        pFVar24->_padding_ = (longlong)pTVar17;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    }
  }
  else {
    pTVar17->SharedReferenceCount = (atomic<int>)0x1;
    pFVar24 = (FNiagaraDataChannelDataProxy *)(pTVar17 + 1);
    pTVar17->WeakReferenceCount = (atomic<int>)0x1;
    pTVar17->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNiagaraDataChannelDataProxy___00_SharedPointerInternals__6B_
    ;
    pTVar17[4]._padding_ = 0;
    pTVar17[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[5]._padding_ = 0;
    pTVar17[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[6]._padding_ = 0;
    pTVar17[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[7]._padding_ = 0;
    pTVar17[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[8]._padding_ = 0;
    pTVar17[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[9]._padding_ = 0;
    pTVar17[9].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[9].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[10]._padding_ = 0;
    pTVar17[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[1]._padding_ = 0;
    pTVar17[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[2]._padding_ = 0;
    pTVar17[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[3]._padding_ = 0;
    pTVar17[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[4]._padding_ = 0;
    *(undefined2 *)&pTVar17[4].SharedReferenceCount = 0;
    pTVar17[5]._padding_ = 0;
    pTVar17[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[6]._padding_ = 0;
    pTVar17[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[7]._padding_ = 0;
    pTVar17[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[7].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[8]._padding_ = 0;
    pTVar17[8].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[8].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[9]._padding_ = 0;
    pTVar17[9].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)&pTVar17[9].WeakReferenceCount = 0;
    pTVar17[10]._padding_ = 0;
    pTVar17[10].SharedReferenceCount = (atomic<int>)0x0;
    pTVar17[10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar17[0xb]._padding_ = 0;
    if (pFVar24 != (FNiagaraDataChannelDataProxy *)0x0) goto LAB_1490e7bb4;
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar13) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->RTProxy;
  local_118 = pFVar24;
  local_110.ReferenceController = pTVar17;
  if (pTVar2 != (TSharedPtr<FNiagaraDataChannelDataProxy,1> *)&local_118) {
    pTVar2->Object = pFVar24;
    local_118 = (FNiagaraDataChannelDataProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RTProxy).SharedReferenceCount,&local_110);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_110.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
  pFVar18 = ::operator_new(0xc0);
  if (pFVar18 == (FNiagaraDataSet *)0x0) {
    pFVar18 = (FNiagaraDataSet *)0x0;
  }
  else {
    pFVar18 = FNiagaraDataSet::FNiagaraDataSet(pFVar18);
  }
  if ((pTVar2->Object == (FNiagaraDataChannelDataProxy *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar2->Object->GPUDataSet = pFVar18;
  if (((this->RTProxy).Object == (FNiagaraDataChannelDataProxy *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar18 = ((this->RTProxy).Object)->GPUDataSet;
  if (((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FNiagaraDataSet::Init(pFVar18,&((this->LayoutInfo).Object)->CompiledDataGPU,0);
  this_00 = local_f8;
  bVar13 = local_f8->bKeepPreviousFrameData;
  if (((this->RTProxy).Object == (FNiagaraDataChannelDataProxy *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  ((this->RTProxy).Object)->bNeedsPrevFrameData = bVar13;
  pTVar17 = (TReferenceControllerBase<1> *)this->_padding_;
  pFVar7 = (FNiagaraDataChannelData *)this->_padding_;
  if (pTVar17 == (TReferenceControllerBase<1> *)0x0) {
LAB_1490e7db4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar17->WeakReferenceCount = (atomic<int>)((int)pTVar17->WeakReferenceCount + 1);
    UNLOCK();
    aVar5 = pTVar17->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) goto LAB_1490e7db4;
      LOCK();
      aVar15 = pTVar17->SharedReferenceCount;
      bVar13 = aVar5 == aVar15;
      if (bVar13) {
        pTVar17->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar15 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar15;
    } while (!bVar13);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar17);
    if (pFVar7 == this) goto LAB_1490e7ddf;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("Result.Pin().Get() == this",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x6c3,L"");
  if (bVar13) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_1490e7ddf:
  if (((this->RTProxy).Object == (FNiagaraDataChannelDataProxy *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar24 = (this->RTProxy).Object;
  if (&pFVar24->Owner != (TWeakPtr<FNiagaraDataChannelData,1> *)local_d0) {
    pTVar8 = (pFVar24->Owner).WeakReferenceCount.ReferenceController;
    (pFVar24->Owner).WeakReferenceCount.ReferenceController = pTVar17;
    pTVar17 = (TReferenceControllerBase<1> *)0x0;
    (pFVar24->Owner).Object = pFVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar3 = &pTVar8->WeakReferenceCount;
      aVar5 = *paVar3;
      *paVar3 = (atomic<int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar8->_padding_ + 8))(pTVar8,1);
      }
    }
  }
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar3 = &pTVar17->WeakReferenceCount;
    aVar5 = *paVar3;
    *paVar3 = (atomic<int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar5 == (atomic<int>)0x1) {
      (**(code **)(pTVar17->_padding_ + 8))(pTVar17,1);
    }
  }
  if (((this->RTProxy).Object == (FNiagaraDataChannelDataProxy *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar17 = (this->LayoutInfo).SharedReferenceCount.ReferenceController;
  pFVar24 = (this->RTProxy).Object;
  pFVar9 = (this->LayoutInfo).Object;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e0 = (pFVar24->LayoutInfo).Object;
  pTStack_d8 = (pFVar24->LayoutInfo).SharedReferenceCount.ReferenceController;
  (pFVar24->LayoutInfo).Object = pFVar9;
  (pFVar24->LayoutInfo).SharedReferenceCount.ReferenceController = pTVar17;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d8);
  pUVar19 = UNiagaraDataChannel::GetAsset(this_00);
  if (pUVar19 == (UNiagaraDataChannelAsset *)0x0) {
    ::FString::FString(&local_108,L"None");
  }
  else {
    local_f0 = (FName)pUVar19->_padding_;
    ::FName::ToString(&local_f0,&local_108);
  }
  ::FString::PrintfImpl(&local_128,L"%s__GPUData");
  if (((this->RTProxy).Object == (FNiagaraDataChannelDataProxy *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar24 = (this->RTProxy).Object;
  pFVar22 = &pFVar24->DebugName;
  if (pFVar22 != &local_128) {
    pFVar10 = (pFVar22->Data).AllocatorInstance.Data;
    if (pFVar10 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar10);
    }
    (pFVar22->Data).AllocatorInstance.Data = local_128.Data.AllocatorInstance.Data;
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar24->DebugName).Data.ArrayNum = local_128.Data.ArrayNum;
    (pFVar24->DebugName).Data.ArrayMax = local_128.Data.ArrayMax;
    local_128.Data.ArrayNum = 0;
    local_128.Data.ArrayMax = 0;
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (((this->RTProxy).Object == (FNiagaraDataChannelDataProxy *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar12 = local_e8;
  ((this->RTProxy).Object)->DispatchInterfaceForDebuggingOnly = local_e8;
  pTVar17 = (this->RTProxy).SharedReferenceCount.ReferenceController;
  pFVar24 = (this->RTProxy).Object;
  if (pTVar17 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar17->SharedReferenceCount = (atomic<int>)((int)pTVar17->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x20,8);
  local_90[1] = (code *)pFVar12;
  local_90[2] = (code *)pFVar24;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FNiagaraDataChannelData::CreateRenderThreadProxy'::`19'::<lambda_1>,1,1>
                       ::_vftable_;
  local_90[3] = (code *)pTVar17;
  if (local_90 != (code **)&DAT_fffffffffffffff8) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNiagaraDataChannelData::CreateRenderThreadProxy'::__l19::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataChannelData::CreateRenderThreadProxy_::__l19::TSTR_FNiagaraDataChannelDataProxyInit525>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_88[0] = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_78[0] = local_a8[0];
    local_78[1] = local_a8[1];
    local_78[2] = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar20 = (FRenderCommandTag *)
              TRenderCommandTag<`FNiagaraDataChannelData::CreateRenderThreadProxy'::__l19::TSTR_FNiagaraDataChannelDataProxyInit525>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar20);
    uVar23 = (ulonglong)local_58;
    if ((2 < uVar23) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_88[0] != (code *)0x0) {
        ppcVar21 = local_88 + 2;
        if (local_60 != (code **)0x0) {
          ppcVar21 = local_60;
        }
        (**(code **)(*ppcVar21 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar23])();
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar21 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar21 = local_90;
    }
    (**(code **)(*ppcVar21 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// DestroyRenderThreadProxy @ 1490ec310

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
FNiagaraDataChannelData::DestroyRenderThreadProxy
          (FNiagaraDataChannelData *this,FNiagaraGpuComputeDispatchInterface *param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->RTProxy != (TSharedPtr<FNiagaraDataChannelDataProxy,1> *)&local_18) {
    (this->RTProxy).Object = (FNiagaraDataChannelDataProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->RTProxy).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// EndFrame @ 1490ef760

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraDataChannelData::EndFrame(FNiagaraDataChannelData *this,UNiagaraDataChannelHandler *param_1)

{
  int *piVar1;
  FNiagaraDataBuffer *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  FNiagaraDataChannelDataProxy *pFVar5;
  FNiagaraDataChannelPublishRequest *pFVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  int iVar12;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar13;
  code **ppcVar14;
  uint uVar15;
  ulonglong uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  undefined1 auStackY_108 [32];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  ETickingGroup local_c8 [4];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_c8[0] = TG_LastDemotable;
  ConsumePublishRequests(this,param_1,local_c8);
  uVar15 = 0;
  if ((this->RTProxy).Object != (FNiagaraDataChannelDataProxy *)0x0) {
    uVar18 = (this->PublishRequestsForGPU).ArrayNum;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (0 < (int)uVar18) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar18,&local_d8,0,(int *)((longlong)&local_d0 + 4));
    }
    uVar18 = uVar15;
    if (((int)this->NumGPUSpawningReaders < 1) || (NDCCVars::AutoUploadGPUSpawnData == false)) {
      for (; (-1 < (int)uVar15 && ((int)uVar15 < (this->PublishRequestsForGPU).ArrayNum));
          uVar15 = uVar15 + 1) {
        if (((int)uVar15 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = (this->PublishRequestsForGPU).AllocatorInstance.Data +
                  (longlong)(int)uVar15 * 0x38;
        if ((pFVar17[0x1a] == (FScriptContainerElement)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("PublishRequest.bVisibleToGPUSims",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                                ,0xb9,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(*(longlong *)pFVar17 + 0x124) != 0) {
          iVar12 = (int)local_d0;
          if ((int)local_d0 == local_d0._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar12 + 1);
          *(undefined8 *)(local_d8.Data + (longlong)iVar12 * 8) = 0;
          lVar3 = *(longlong *)pFVar17;
          *(longlong *)(local_d8.Data + (longlong)iVar12 * 8) = lVar3;
          if (lVar3 != 0) {
            if ((*(int *)(lVar3 + 8) == -1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!IsBeingWritten()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                    ,0x26,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          uVar18 = uVar18 + *(int *)(*(longlong *)pFVar17 + 0x124);
        }
      }
    }
    else {
      pFVar2 = this->CPUSimData->CurrentData;
      if ((pFVar2 != (FNiagaraDataBuffer *)0x0) && (uVar18 = 0, pFVar2->NumInstances != 0)) {
        iVar12 = (int)local_d0;
        if ((int)local_d0 == local_d0._4_4_) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
        }
        local_d0 = CONCAT44(local_d0._4_4_,iVar12 + 1);
        *(FNiagaraDataBuffer **)(local_d8.Data + (longlong)iVar12 * 8) = pFVar2;
        if (((int)pFVar2->_padding_ == -1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!IsBeingWritten()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                ,0x26,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        LOCK();
        *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + 1;
        UNLOCK();
        uVar18 = this->CPUSimData->CurrentData->NumInstances;
      }
      for (; (-1 < (int)uVar15 && ((int)uVar15 < (this->PublishRequestsForGPU).ArrayNum));
          uVar15 = uVar15 + 1) {
        if (((int)uVar15 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar17 = (this->PublishRequestsForGPU).AllocatorInstance.Data +
                  (longlong)(int)uVar15 * 0x38;
        if ((pFVar17[0x1a] == (FScriptContainerElement)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("PublishRequest.bVisibleToGPUSims",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                                ,0xa8,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((pFVar17[0x19] == (FScriptContainerElement)0x0) &&
           (*(int *)(*(longlong *)pFVar17 + 0x124) != 0)) {
          iVar12 = (int)local_d0;
          if ((int)local_d0 == local_d0._4_4_) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_d8,(int *)((longlong)&local_d0 + 4));
          }
          local_d0 = CONCAT44(local_d0._4_4_,iVar12 + 1);
          *(undefined8 *)(local_d8.Data + (longlong)iVar12 * 8) = 0;
          lVar3 = *(longlong *)pFVar17;
          *(longlong *)(local_d8.Data + (longlong)iVar12 * 8) = lVar3;
          if (lVar3 != 0) {
            if ((*(int *)(lVar3 + 8) == -1) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!IsBeingWritten()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                    ,0x26,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          uVar18 = uVar18 + *(int *)(*(longlong *)pFVar17 + 0x124);
        }
      }
    }
    FVar8.Data = local_d8.Data;
    if ((NiagaraRollbackCVars::NDC::bRetainGPUDataIfPendingCpuUpdate != false) || (0 < (int)uVar18))
    {
      pTVar4 = (this->RTProxy).SharedReferenceCount.ReferenceController;
      pFVar5 = (this->RTProxy).Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar9 = (int)local_d0;
      uVar10 = local_d0._4_4_;
      local_d8.Data = (FScriptContainerElement *)0x0;
      local_d0 = 0;
      local_b8[0] = (code *)0x0;
      local_90 = FMemory::Malloc(0x28,8);
      local_90[1] = (code *)pFVar5;
      local_90[2] = (code *)pTVar4;
      *local_90 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`FNiagaraDataChannelData::EndFrame'::`43'::<lambda_1>,1,1>
                           ::_vftable_;
      local_90[3] = (code *)FVar8.Data;
      *(undefined4 *)(local_90 + 4) = uVar9;
      *(undefined4 *)((longlong)local_90 + 0x24) = uVar10;
      if (local_90 != (code **)&DAT_fffffffffffffff8) {
        local_b8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`FNiagaraDataChannelData::EndFrame'::__l43::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FNiagaraDataChannelData::EndFrame_::__l43::TSTR_FDataChannelProxyEndFrame196>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_88[0] = local_b8[0];
        local_60 = local_90;
        local_90 = (code **)0x0;
        local_78[0] = local_a8[0];
        local_78[1] = local_a8[1];
        local_78[2] = local_a8[2];
        local_b8[0] = (code *)0x0;
        local_58 = 2;
        pFVar13 = (FRenderCommandTag *)
                  TRenderCommandTag<`FNiagaraDataChannelData::EndFrame'::__l43::TSTR_FDataChannelProxyEndFrame196>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_88,pFVar13);
        uVar16 = (ulonglong)local_58;
        if ((2 < uVar16) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if (local_88[0] != (code *)0x0) {
            ppcVar14 = local_88 + 2;
            if (local_60 != (code **)0x0) {
              ppcVar14 = local_60;
            }
            (**(code **)(*ppcVar14 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16])();
        }
      }
      if (local_b8[0] != (code *)0x0) {
        ppcVar14 = local_b8 + 2;
        if (local_90 != (code **)0x0) {
          ppcVar14 = local_90;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
      DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>((TRefCountPtr<FNiagaraDataBuffer> *)0x0,0)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
              ((TRefCountPtr<FNiagaraDataBuffer> *)local_d8.Data,(int)local_d0);
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
  }
  piVar1 = &(this->PublishRequestsForGPU).ArrayMax;
  pFVar6 = (FNiagaraDataChannelPublishRequest *)(this->PublishRequestsForGPU).AllocatorInstance.Data
  ;
  iVar12 = (this->PublishRequestsForGPU).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar6,iVar12);
    (this->PublishRequestsForGPU).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->PublishRequestsForGPU).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar6,iVar12);
    (this->PublishRequestsForGPU).ArrayNum = 0;
  }
  return;
}

// FlushAllPendingGameData @ 1490fa690

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

void __thiscall FNiagaraDataChannelData::FlushAllPendingGameData(FNiagaraDataChannelData *this)

{
  TArray<TSharedPtr<FNiagaraDataChannelGameData,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_> FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNiagaraDataChannelGameData *pFVar4;
  code *pcVar5;
  TRefCountPtr<FNiagaraDataBuffer> TVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_> FVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  FNiagaraDataChannelGameData *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FNiagaraDataChannelPublishRequest local_68;
  
  uVar14 = 0;
  if (0 < (this->PendingDestGameData).ArrayNum) {
    pTVar1 = &this->PendingDestGameData;
    do {
      uVar13 = (uint)uVar14;
      uVar15 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < (this->PendingDestGameData).ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar2 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
      FVar11 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar1;
      if (FVar2 != (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
        FVar11 = FVar2;
      }
      lVar16 = (longlong)(int)uVar13 * 0x10;
      uVar9 = 0;
      if (*(longlong *)(lVar16 + (longlong)FVar11) != 0) {
        uVar10 = uVar9;
        if ((int)uVar13 < (this->PendingDestGameData).ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar2 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar1;
        if (FVar2 != (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
          FVar11 = FVar2;
        }
        if ((*(longlong *)((longlong)FVar11 + lVar16) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (0 < *(int *)(*(longlong *)((longlong)FVar11 + lVar16) + 0x20)) {
          local_68.LwcTile.field0_0x0._s_0.Z =
               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          local_68.bVisibleToGame = (bool)((byte)uVar14 & 1);
          local_68.GameData.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_68.bVisibleToCPUSims = (bool)((byte)(uVar14 >> 1) & 1);
          local_68.DebugSource.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_68.bVisibleToGPUSims = (bool)((byte)(uVar14 >> 2) & 1);
          local_68.DebugSource.Data.ArrayNum = 0;
          local_68.DebugSource.Data.ArrayMax = 0;
          uVar10 = uVar9;
          if ((int)uVar13 < (this->PendingDestGameData).ArrayNum) {
            uVar10 = uVar15;
          }
          local_68.Data.Reference = (FNiagaraDataBuffer *)0x0;
          local_68.GameData.Object = (FNiagaraDataChannelGameData *)0x0;
          local_68.LwcTile.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar7.ReferenceController = local_68.GameData.SharedReferenceCount.ReferenceController;
          FVar2 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
          FVar11 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar1;
          if (FVar2 != (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
            FVar11 = FVar2;
          }
          pTVar3 = *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar11 + 8) + lVar16);
          pFVar4 = *(FNiagaraDataChannelGameData **)((longlong)FVar11 + lVar16);
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_78 = local_68.GameData.Object;
          pTStack_70 = local_68.GameData.SharedReferenceCount.ReferenceController;
          local_68.GameData.Object = pFVar4;
          local_68.GameData.SharedReferenceCount.ReferenceController = pTVar3;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar7.ReferenceController);
          ::FString::operator=(&local_68.DebugSource,L"Accumulated Pending Game Data");
          Publish(this,&local_68);
          if (local_68.DebugSource.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.DebugSource.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68.GameData.SharedReferenceCount.ReferenceController);
          TVar6.Reference = local_68.Data.Reference;
          if (local_68.Data.Reference != (FNiagaraDataBuffer *)0x0) {
            if (((int)(local_68.Data.Reference)->_padding_ < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsBeingRead()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                   ,0x2c,L""), bVar8)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            LOCK();
            *(int *)&(TVar6.Reference)->_padding_ = (int)(TVar6.Reference)->_padding_ + -1;
            UNLOCK();
          }
        }
      }
      if ((int)uVar13 < (this->PendingDestGameData).ArrayNum) {
        uVar9 = uVar15;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar2 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
      local_88 = 0;
      FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      FVar11 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar1;
      if (FVar2 != (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
        FVar11 = FVar2;
      }
      puVar12 = (undefined8 *)((longlong)FVar11 + lVar16);
      if (puVar12 != &local_88) {
        *puVar12 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(puVar12 + 1),&FStack_80);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
      uVar14 = (ulonglong)(uVar13 + 1);
    } while ((int)(uVar13 + 1) < (this->PendingDestGameData).ArrayNum);
  }
  return;
}

// FlushPendingGameData @ 1490fa9f0

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
FNiagaraDataChannelData::FlushPendingGameData(FNiagaraDataChannelData *this,int param_1)

{
  TArray<TSharedPtr<FNiagaraDataChannelGameData,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  undefined8 *puVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNiagaraDataChannelGameData *pFVar4;
  code *pcVar5;
  TRefCountPtr<FNiagaraDataBuffer> TVar6;
  FSharedReferencer<1> FVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_> FVar11;
  uint uVar12;
  longlong lVar13;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  FNiagaraDataChannelGameData *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FNiagaraDataChannelPublishRequest local_68;
  
  pTVar1 = &this->PendingDestGameData;
  lVar13 = (longlong)param_1;
  uVar12 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < (this->PendingDestGameData).ArrayNum) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar11 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
    FVar11 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar1;
  }
  uVar9 = 0;
  if (*(longlong *)((longlong)FVar11 + lVar13 * 0x10) != 0) {
    uVar10 = uVar9;
    if (param_1 < (this->PendingDestGameData).ArrayNum) {
      uVar10 = uVar12;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar11 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
    if (FVar11 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
      FVar11 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar1;
    }
    if ((*(longlong *)((longlong)FVar11 + lVar13 * 0x10) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (0 < *(int *)(*(longlong *)((longlong)FVar11 + lVar13 * 0x10) + 0x20)) {
      local_68.LwcTile.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
      local_68.bVisibleToGame = (bool)((byte)param_1 & 1);
      local_68.GameData.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_68.bVisibleToCPUSims = (bool)((byte)((uint)param_1 >> 1) & 1);
      local_68.DebugSource.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.bVisibleToGPUSims = (bool)((byte)((uint)param_1 >> 2) & 1);
      local_68.DebugSource.Data.ArrayNum = 0;
      local_68.DebugSource.Data.ArrayMax = 0;
      uVar10 = uVar9;
      if (param_1 < (this->PendingDestGameData).ArrayNum) {
        uVar10 = uVar12;
      }
      local_68.Data.Reference = (FNiagaraDataBuffer *)0x0;
      local_68.GameData.Object = (FNiagaraDataChannelGameData *)0x0;
      local_68.LwcTile.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar7.ReferenceController = local_68.GameData.SharedReferenceCount.ReferenceController;
      FVar11 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
      if (FVar11 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
        FVar11 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar1;
      }
      pTVar3 = *(TReferenceControllerBase<1> **)((uchar *)((longlong)FVar11 + 8) + lVar13 * 0x10);
      pFVar4 = *(FNiagaraDataChannelGameData **)((longlong)FVar11 + lVar13 * 0x10);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78 = local_68.GameData.Object;
      pTStack_70 = local_68.GameData.SharedReferenceCount.ReferenceController;
      local_68.GameData.Object = pFVar4;
      local_68.GameData.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar7.ReferenceController);
      ::FString::operator=(&local_68.DebugSource,L"Accumulated Pending Game Data");
      Publish(this,&local_68);
      if (local_68.DebugSource.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.DebugSource.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.GameData.SharedReferenceCount.ReferenceController);
      TVar6.Reference = local_68.Data.Reference;
      if (local_68.Data.Reference != (FNiagaraDataBuffer *)0x0) {
        if (((int)(local_68.Data.Reference)->_padding_ < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsBeingRead()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                               ,0x2c,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        *(int *)&(TVar6.Reference)->_padding_ = (int)(TVar6.Reference)->_padding_ + -1;
        UNLOCK();
      }
    }
  }
  if (param_1 < (this->PendingDestGameData).ArrayNum) {
    uVar9 = uVar12;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar11 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
    FVar11 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar1;
  }
  local_88 = 0;
  FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  puVar2 = (undefined8 *)((longlong)FVar11 + lVar13 * 0x10);
  if (puVar2 != &local_88) {
    *puVar2 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(puVar2 + 1),&FStack_80);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_80.ReferenceController);
  return;
}

// GetBufferForCPUWrite @ 149103a50

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
FNiagaraDataChannelData::GetBufferForCPUWrite(FNiagaraDataChannelData *this)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataBuffer *pFVar3;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                       ,0x191,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FNiagaraDataBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->CPUSimData != (FNiagaraDataSet *)0x0) {
    pFVar3 = FNiagaraDataSet::AllocateBuffer(this->CPUSimData);
    return pFVar3;
  }
  return (FNiagaraDataBuffer *)0x0;
}

// GetCPUData @ 149103ab0

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

TRefCountPtr<FNiagaraDataBuffer> __thiscall
FNiagaraDataChannelData::GetCPUData(FNiagaraDataChannelData *this,bool param_1)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FNiagaraDataBuffer> TVar4;
  undefined7 in_register_00000011;
  FNiagaraDataBuffer *this_00;
  char in_R8B;
  
  this_00 = (FNiagaraDataBuffer *)CONCAT71(in_register_00000011,param_1);
  if (in_R8B != '\0') {
    TRefCountPtr<FNiagaraDataBuffer>::TRefCountPtr<FNiagaraDataBuffer>
              ((TRefCountPtr<FNiagaraDataBuffer> *)this_00,&this->PrevCPUSimData);
    return (TRefCountPtr<FNiagaraDataBuffer>)this_00;
  }
  pFVar1 = this->CPUSimData->CurrentData;
  this_00->_padding_ = (longlong)pFVar1;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar1->_padding_ == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsBeingWritten()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x26,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar4.Reference = (FNiagaraDataBuffer *)(*pcVar2)();
        return (TRefCountPtr<FNiagaraDataBuffer>)TVar4.Reference;
      }
    }
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + 1;
    UNLOCK();
  }
  return (TRefCountPtr<FNiagaraDataBuffer>)this_00;
}

// GetCompiledData @ 149104540

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

FNiagaraDataSetCompiledData * __thiscall
FNiagaraDataChannelData::GetCompiledData(FNiagaraDataChannelData *this,ENiagaraSimTarget param_1)

{
  FNiagaraDataChannelLayoutInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDataSetCompiledData *pFVar4;
  
  pFVar1 = (this->LayoutInfo).Object;
  if (param_1 != CPUSim) {
    if (pFVar1 == (FNiagaraDataChannelLayoutInfo *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraDataSetCompiledData *)(*pcVar2)();
        return pFVar4;
      }
    }
    return &((this->LayoutInfo).Object)->CompiledDataGPU;
  }
  if (pFVar1 == (FNiagaraDataChannelLayoutInfo *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDataSetCompiledData *)(*pcVar2)();
      return pFVar4;
    }
  }
  return &((this->LayoutInfo).Object)->CompiledData;
}

// GetGameData @ 1491054d0

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

FNiagaraDataChannelGameData * __thiscall
FNiagaraDataChannelData::GetGameData(FNiagaraDataChannelData *this)

{
  return (this->GameData).Object;
}

// GetGameDataForWriteGT @ 1491054e0

/* WARNING: Type propagation algorithm not settling */
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

TSharedPtr<FNiagaraDataChannelGameData,1> * __thiscall
FNiagaraDataChannelData::GetGameDataForWriteGT
          (FNiagaraDataChannelData *this,
          TSharedPtr<FNiagaraDataChannelGameData,1> *__return_storage_ptr__,int param_1,bool param_2
          ,bool param_3,bool param_4,FString *param_5)

{
  int *piVar1;
  TArray<TSharedPtr<FNiagaraDataChannelGameData,1>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  TRefCountPtr<FNiagaraDataBuffer> TVar5;
  bool bVar6;
  int iVar7;
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  undefined8 *puVar11;
  TReferenceControllerBase<1> **ppTVar12;
  ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_> FVar13;
  longlong *plVar14;
  TReferenceControllerBase<1> *pTVar15;
  FNiagaraDataChannelGameData *pFVar16;
  uint uVar17;
  TReferenceControllerBase<1> *local_90;
  FSharedReferencer<1> local_88;
  undefined8 local_80;
  FSharedReferencer<1> local_78;
  FNiagaraDataChannelPublishRequest local_70;
  
  piVar1 = &(this->PendingDestGameData).ArrayNum;
  pTVar2 = &this->PendingDestGameData;
  pTVar15 = (TReferenceControllerBase<1> *)&DAT_00000010;
  if (*piVar1 == 0) {
    iVar7 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>_>
                      (0x10,8,8,&pTVar2->AllocatorInstance,piVar1,
                       &(this->PendingDestGameData).ArrayMax);
    FVar13 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
      FVar13 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar2;
    }
    puVar11 = (undefined8 *)((longlong)FVar13 + (longlong)iVar7 * 0x10);
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    puVar11[5] = 0;
    puVar11[6] = 0;
    puVar11[7] = 0;
    puVar11[8] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    puVar11[0xb] = 0;
    puVar11[0xc] = 0;
    puVar11[0xd] = 0;
    puVar11[0xe] = 0;
    puVar11[0xf] = 0;
  }
  uVar17 = (uint)param_4 * 4 + (uint)param_3 * 2 + (uint)param_2;
  if ((*piVar1 <= (int)uVar17) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FNiagaraDataChannelGameData,1> *)(*pcVar4)();
    return pTVar8;
  }
  FVar13 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
    FVar13 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)pTVar2;
  }
  if (NDCCVars::EnableAccumulatedWrites == false) {
    pTVar15 = (TReferenceControllerBase<1> *)0x0;
    local_70.Data.Reference = (FNiagaraDataBuffer *)0x0;
    local_70.GameData.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_70.LwcTile.field0_0x0._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    local_70.DebugSource.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.DebugSource.Data.ArrayNum = 0;
    local_70.DebugSource.Data.ArrayMax = 0;
    local_70.LwcTile.field0_0x0._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    local_70.bVisibleToCPUSims = param_3;
    local_70.bVisibleToGPUSims = param_4;
    local_70.bVisibleToGame = param_2;
    pTVar10 = ::operator_new(0x50);
    if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
      pFVar16 = (FNiagaraDataChannelGameData *)&DAT_00000010;
    }
    else {
      pTVar10->SharedReferenceCount = (atomic<int>)0x1;
      pTVar10->WeakReferenceCount = (atomic<int>)0x1;
      ((FNiagaraDataChannelGameData *)(pTVar10 + 1))->_padding_ = 0;
      pTVar10->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFNiagaraDataChannelGameData___00_SharedPointerInternals__6B_
      ;
      pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[2]._padding_ = 0;
      pTVar10[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar10[3]._padding_ = 0;
      pTVar10[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[4]._padding_ = 0;
      pTVar10[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar10[4].WeakReferenceCount = (atomic<int>)0x0;
      FNiagaraDataChannelGameData::Init
                ((FNiagaraDataChannelGameData *)(pTVar10 + 1),&this->LayoutInfo);
      pFVar16 = (FNiagaraDataChannelGameData *)(pTVar10 + 1);
      pTVar15 = pTVar10;
      if (pFVar16 == (FNiagaraDataChannelGameData *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TSharedPtr<FNiagaraDataChannelGameData,1> *)(*pcVar4)();
          return pTVar8;
        }
        goto LAB_149105a35;
      }
    }
    if (((pFVar16->_padding_ == 0) || (pFVar16->_padding_ == 0)) ||
       (*(int *)(pFVar16->_padding_ + 8) < 1)) {
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar16->_padding_ = (longlong)pFVar16;
      if (pTVar15 != (TReferenceControllerBase<1> *)pFVar16->_padding_) {
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->WeakReferenceCount = (atomic<int>)((int)pTVar15->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar14 = (longlong *)pFVar16->_padding_;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar7 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
        pFVar16->_padding_ = (longlong)pTVar15;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    }
LAB_149105a35:
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_80 = 0;
    local_78.ReferenceController = pTVar15;
    local_70.GameData.Object = pFVar16;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_70.GameData.SharedReferenceCount,&local_78);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
    if (&local_70.DebugSource != param_5) {
      iVar7 = (param_5->Data).ArrayNum;
      _Src = (param_5->Data).AllocatorInstance.Data;
      local_70.DebugSource.Data.ArrayNum = iVar7;
      if ((iVar7 == 0) && (local_70.DebugSource.Data.ArrayMax == 0)) {
        local_70.DebugSource.Data.ArrayNum = 0;
        local_70.DebugSource.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar7,local_70.DebugSource.Data.ArrayMax,
                   (ForAnyElementType *)&local_70.DebugSource,iVar7,
                   &local_70.DebugSource.Data.ArrayMax);
        if (iVar7 != 0) {
          memcpy(local_70.DebugSource.Data.AllocatorInstance.Data,_Src,(longlong)iVar7 * 2);
        }
      }
    }
    Publish(this,&local_70);
    __return_storage_ptr__->Object = local_70.GameData.Object;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         local_70.GameData.SharedReferenceCount.ReferenceController;
    if (local_70.GameData.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_70.GameData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_70.GameData.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if (local_70.DebugSource.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.DebugSource.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_70.GameData.SharedReferenceCount.ReferenceController);
    TVar5.Reference = local_70.Data.Reference;
    if (local_70.Data.Reference != (FNiagaraDataBuffer *)0x0) {
      if (((int)(local_70.Data.Reference)->_padding_ < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsBeingRead()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                             ,0x2c,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TSharedPtr<FNiagaraDataChannelGameData,1> *)(*pcVar4)();
        return pTVar8;
      }
      LOCK();
      *(int *)&(TVar5.Reference)->_padding_ = (int)(TVar5.Reference)->_padding_ + -1;
      UNLOCK();
    }
    return __return_storage_ptr__;
  }
  pFVar16 = *(FNiagaraDataChannelGameData **)((longlong)FVar13 + (ulonglong)uVar17 * 0x10);
  if ((pFVar16 != (FNiagaraDataChannelGameData *)0x0) &&
     (pFVar16->NumElements + param_1 <= pFVar16->MaxElements)) {
    __return_storage_ptr__->Object = pFVar16;
    pTVar15 = *(TReferenceControllerBase<1> **)
               ((uchar *)((longlong)FVar13 + 8) + (ulonglong)uVar17 * 0x10);
    goto LAB_149105627;
  }
  iVar7 = 0x80;
  if (0x80 < param_1) {
    iVar7 = param_1;
  }
  FlushPendingGameData(this,uVar17);
  pTVar9 = ::operator_new(0x50);
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_1491056f7:
    pTVar9 = pTVar10;
    if (((pTVar15->_padding_ == 0) || (*(longlong *)&pTVar15->SharedReferenceCount == 0)) ||
       (*(int *)(*(longlong *)&pTVar15->SharedReferenceCount + 8) < 1)) {
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar15->_padding_ = (longlong)pTVar15;
      if (pTVar10 != *(TReferenceControllerBase<1> **)&pTVar15->SharedReferenceCount) {
        if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar10->WeakReferenceCount = (atomic<int>)((int)pTVar10->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar14 = *(longlong **)&pTVar15->SharedReferenceCount;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar14 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar14 + 8))(plVar14,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pTVar15->SharedReferenceCount = pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
    }
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    ((FNiagaraDataChannelGameData *)(pTVar9 + 1))->_padding_ = 0;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNiagaraDataChannelGameData___00_SharedPointerInternals__6B_
    ;
    pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[2]._padding_ = 0;
    pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar9[3]._padding_ = 0;
    pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4]._padding_ = 0;
    pTVar9[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar9[4].WeakReferenceCount = (atomic<int>)0x0;
    FNiagaraDataChannelGameData::Init((FNiagaraDataChannelGameData *)(pTVar9 + 1),&this->LayoutInfo)
    ;
    pTVar15 = pTVar9 + 1;
    pTVar10 = pTVar9;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) goto LAB_1491056f7;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar8 = (TSharedPtr<FNiagaraDataChannelGameData,1> *)(*pcVar4)();
      return pTVar8;
    }
  }
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_90 = pTVar15;
  local_88.ReferenceController = pTVar9;
  if (((this->PendingDestGameData).ArrayNum <= (int)uVar17) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FNiagaraDataChannelGameData,1> *)(*pcVar4)();
    return pTVar8;
  }
  FVar13 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
    FVar13 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)&this->PendingDestGameData;
  }
  ppTVar12 = (TReferenceControllerBase<1> **)((longlong)FVar13 + (ulonglong)uVar17 * 0x10);
  if (ppTVar12 != &local_90) {
    *ppTVar12 = pTVar15;
    local_90 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(ppTVar12 + 1),&local_88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_88.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  if (((this->PendingDestGameData).ArrayNum <= (int)uVar17) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FNiagaraDataChannelGameData,1> *)(*pcVar4)();
    return pTVar8;
  }
  FVar13 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
    FVar13 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)&this->PendingDestGameData;
  }
  plVar14 = (longlong *)((ulonglong)uVar17 * 0x10 + (longlong)FVar13);
  if ((*plVar14 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FNiagaraDataChannelGameData,1> *)(*pcVar4)();
    return pTVar8;
  }
  FNiagaraDataChannelGameData::Reserve((FNiagaraDataChannelGameData *)*plVar14,iVar7);
  if (((this->PendingDestGameData).ArrayNum <= (int)uVar17) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TSharedPtr<FNiagaraDataChannelGameData,1> *)(*pcVar4)();
    return pTVar8;
  }
  FVar13 = (this->PendingDestGameData).AllocatorInstance.SecondaryData;
  if (FVar13 == (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)0x0) {
    FVar13 = (ForElementType<TSharedPtr<FNiagaraDataChannelGameData,1>_>)&this->PendingDestGameData;
  }
  puVar11 = (undefined8 *)((longlong)FVar13 + (ulonglong)uVar17 * 0x10);
  __return_storage_ptr__->Object = (FNiagaraDataChannelGameData *)*puVar11;
  pTVar15 = (TReferenceControllerBase<1> *)puVar11[1];
LAB_149105627:
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar15;
  if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
    return __return_storage_ptr__;
  }
  LOCK();
  pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
  UNLOCK();
  return __return_storage_ptr__;
}

// HasData @ 149111cc0

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

bool __thiscall FNiagaraDataChannelData::HasData(FNiagaraDataChannelData *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->GameData).Object == (FNiagaraDataChannelGameData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((((this->GameData).Object)->NumElements < 1) &&
     (((this->CPUSimData == (FNiagaraDataSet *)0x0 ||
       (this->CPUSimData->CurrentData->NumInstances == 0)) &&
      ((this->PublishRequestsForGPU).ArrayNum < 1)))) {
    return false;
  }
  return true;
}

// Init @ 1491133c0

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

void __thiscall
FNiagaraDataChannelData::Init(FNiagaraDataChannelData *this,UNiagaraDataChannelHandler *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FNiagaraDataChannelLayoutInfo *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  UNiagaraDataChannel *this_00;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar6;
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar7;
  FNiagaraDataSet *this_01;
  FNiagaraDataSet *pFVar8;
  FNiagaraDataSet *this_02;
  UObject *local_res8;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_28;
  TSharedPtr<FNiagaraDataChannelGameData,1> local_18;
  
  if ((param_1 == (UNiagaraDataChannelHandler *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                         ,0x48,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(&(param_1->DataChannel).WeakPtr);
  if (this_00 == (UNiagaraDataChannel *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                       ,0x3a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataChannel",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                       ,0x4a,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar6 = UNiagaraDataChannel::GetLayoutInfo(this_00,&local_28);
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pFVar2 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->LayoutInfo).SharedReferenceCount.ReferenceController;
  (this->LayoutInfo).Object = pFVar2;
  (this->LayoutInfo).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pTVar7 = UNiagaraDataChannel::CreateGameData(this_00,&local_18);
  this_02 = (FNiagaraDataSet *)0x0;
  if (&this->GameData != pTVar7) {
    (this->GameData).Object = pTVar7->Object;
    pTVar7->Object = (FNiagaraDataChannelGameData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->GameData).SharedReferenceCount,&pTVar7->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  this_01 = ::operator_new(0xc0);
  pFVar8 = this_02;
  if (this_01 != (FNiagaraDataSet *)0x0) {
    pFVar8 = FNiagaraDataSet::FNiagaraDataSet(this_01);
  }
  this->CPUSimData = pFVar8;
  if (((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNiagaraDataSet::Init(pFVar8,&((this->LayoutInfo).Object)->CompiledData,1);
  pFVar8 = ::operator_new(0xc0);
  if (pFVar8 != (FNiagaraDataSet *)0x0) {
    this_02 = FNiagaraDataSet::FNiagaraDataSet(pFVar8);
  }
  this->GameDataStaging = this_02;
  if (((this->LayoutInfo).Object == (FNiagaraDataChannelLayoutInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNiagaraDataSet::Init(this_02,&((this->LayoutInfo).Object)->CompiledData,0);
  local_res8 = (UObject *)(**(code **)(param_1->_padding_ + 0x180))(param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->WeakOwnerWorld).WeakPtr,(FObjectPtr)&local_res8);
  CreateRenderThreadProxy(this,param_1);
  return;
}

// IsLayoutValid @ 1491177b0

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

bool __thiscall
FNiagaraDataChannelData::IsLayoutValid
          (FNiagaraDataChannelData *this,UNiagaraDataChannelHandler *param_1)

{
  FNiagaraDataChannelLayoutInfo *pFVar1;
  FNiagaraDataChannelLayoutInfo *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UNiagaraDataChannel *this_00;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar6;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_18;
  
  if ((param_1 != (UNiagaraDataChannelHandler *)0x0) &&
     ((this->LayoutInfo).Object != (FNiagaraDataChannelLayoutInfo *)0x0)) {
    this_00 = (UNiagaraDataChannel *)FWeakObjectPtr::Get(&(param_1->DataChannel).WeakPtr);
    if (this_00 == (UNiagaraDataChannel *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelHandler.h"
                         ,0x3a,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pTVar6 = UNiagaraDataChannel::GetLayoutInfo(this_00,&local_18);
    pFVar1 = pTVar6->Object;
    pFVar2 = (this->LayoutInfo).Object;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return pFVar1 == pFVar2;
  }
  return false;
}

// Publish @ 1491254d0

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
FNiagaraDataChannelData::Publish
          (FNiagaraDataChannelData *this,FNiagaraDataChannelPublishRequest *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FNiagaraDataChannelPublishRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  lpCriticalSection = &this->PublishCritSec;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = (FNiagaraDataChannelPublishRequest *)(this->PublishRequests).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->PublishRequests).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->PublishRequests).ArrayNum;
  piVar1 = &(this->PublishRequests).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->PublishRequests).AllocatorInstance,piVar1);
  }
  (this->PublishRequests).ArrayNum = iVar5 + 1;
  FNiagaraDataChannelPublishRequest::FNiagaraDataChannelPublishRequest
            ((FNiagaraDataChannelPublishRequest *)
             ((this->PublishRequests).AllocatorInstance.Data + (longlong)iVar5 * 0x38),param_1);
                    /* WARNING: Could not recover jumptable at 0x0001491255a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// PublishFromGPU @ 1491255c0

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
FNiagaraDataChannelData::PublishFromGPU
          (FNiagaraDataChannelData *this,FNiagaraDataChannelPublishRequest *param_1)

{
  int *piVar1;
  FNiagaraDataChannelPublishRequest *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  bVar4 = IsInGameThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelData.cpp"
                       ,0x186,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (FNiagaraDataChannelPublishRequest *)
           (this->PublishRequestsFromGPU).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->PublishRequestsFromGPU).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->PublishRequestsFromGPU).ArrayNum;
  piVar1 = &(this->PublishRequestsFromGPU).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x838,&(this->PublishRequestsFromGPU).AllocatorInstance,piVar1);
  }
  (this->PublishRequestsFromGPU).ArrayNum = iVar5 + 1;
  FNiagaraDataChannelPublishRequest::FNiagaraDataChannelPublishRequest
            ((FNiagaraDataChannelPublishRequest *)
             ((this->PublishRequestsFromGPU).AllocatorInstance.Data + (longlong)iVar5 * 0x38),
             param_1);
  return;
}

// Reset @ 14912b390

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

void __thiscall FNiagaraDataChannelData::Reset(FNiagaraDataChannelData *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FNiagaraDataChannelPublishRequest *pFVar4;
  FNiagaraDataBuffer *pFVar5;
  FNiagaraDataChannelGameData *pFVar6;
  code *pcVar7;
  bool bVar8;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [16];
  code *local_a8 [2];
  undefined **local_98;
  FNiagaraDataChannelDataProxy *pFStack_90;
  TReferenceControllerBase<1> *local_88;
  undefined ***local_80;
  code *local_78 [2];
  undefined **local_68;
  FNiagaraDataChannelDataProxy *pFStack_60;
  TReferenceControllerBase<1> *local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (&this->PublishCritSec == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->PublishCritSec);
  piVar1 = &(this->PublishRequests).ArrayMax;
  pFVar4 = (FNiagaraDataChannelPublishRequest *)(this->PublishRequests).AllocatorInstance.Data;
  iVar3 = (this->PublishRequests).ArrayNum;
  if ((this->PublishRequests).ArrayMax < 0) {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar4,iVar3);
    (this->PublishRequests).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->PublishRequests).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar4,iVar3);
    (this->PublishRequests).ArrayNum = 0;
  }
  piVar1 = &(this->PublishRequestsFromGPU).ArrayMax;
  pFVar4 = (FNiagaraDataChannelPublishRequest *)
           (this->PublishRequestsFromGPU).AllocatorInstance.Data;
  iVar3 = (this->PublishRequestsFromGPU).ArrayNum;
  if ((this->PublishRequestsFromGPU).ArrayMax < 0) {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar4,iVar3);
    (this->PublishRequestsFromGPU).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->PublishRequestsFromGPU).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar4,iVar3);
    (this->PublishRequestsFromGPU).ArrayNum = 0;
  }
  piVar1 = &(this->PublishRequestsForGPU).ArrayMax;
  pFVar4 = (FNiagaraDataChannelPublishRequest *)(this->PublishRequestsForGPU).AllocatorInstance.Data
  ;
  iVar3 = (this->PublishRequestsForGPU).ArrayNum;
  if ((this->PublishRequestsForGPU).ArrayMax < 0) {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar4,iVar3);
    (this->PublishRequestsForGPU).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&(this->PublishRequestsForGPU).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FNiagaraDataChannelPublishRequest,int>(pFVar4,iVar3);
    (this->PublishRequestsForGPU).ArrayNum = 0;
  }
  pFVar5 = (this->PrevCPUSimData).Reference;
  if (pFVar5 != (FNiagaraDataBuffer *)0x0) {
    (this->PrevCPUSimData).Reference = (FNiagaraDataBuffer *)0x0;
    if ((int)pFVar5->_padding_ < 1) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + -1;
    UNLOCK();
  }
  if ((this->GameData).Object == (FNiagaraDataChannelGameData *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this->GameData).Object;
  pFVar6->NumElements = 0;
  pFVar6->MaxElements = 0;
  pFVar6->PrevNumElements = 0;
  pFVar13 = (pFVar6->VariableData).AllocatorInstance.Data;
  iVar3 = (pFVar6->VariableData).ArrayNum;
  pFVar11 = pFVar13 + 0x1c;
  pFVar2 = pFVar13 + (longlong)iVar3 * 0x28;
  while( true ) {
    if ((pFVar6->VariableData).ArrayNum != iVar3) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<FNiagaraDataChannelVariableBuffer,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_b8);
    }
    if (pFVar13 == pFVar2) break;
    *(undefined4 *)(pFVar11 + -4) = 0;
    if (*(int *)pFVar11 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(pFVar11 + -0xc),0,(int *)pFVar11);
    }
    *(undefined4 *)(pFVar11 + -0x14) = 0;
    if (*(int *)(pFVar11 + -0x10) != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)pFVar13,0,(int *)(pFVar11 + -0x10));
    }
    pFVar13 = pFVar13 + 0x28;
    pFVar11 = pFVar11 + 0x28;
  }
  FNiagaraDataSet::ResetBuffers(this->CPUSimData);
  FNiagaraDataSet::ResetBuffers(this->GameDataStaging);
  local_88 = (this->RTProxy).SharedReferenceCount.ReferenceController;
  pFStack_90 = (this->RTProxy).Object;
  if (local_88 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_88->SharedReferenceCount = (atomic<int>)((int)local_88->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80 = (undefined ***)0x0;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraDataChannelData::Reset'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraDataChannelData::Reset'::`2'::<lambda_1>,1,0>::
              _vftable_;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraDataChannelData::Reset_::__l2::TSTR_FResetProxyCommand106>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78[0] = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    pFStack_60 = pFStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar9 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraDataChannelData::Reset'::__l2::TSTR_FResetProxyCommand106>::
             Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar9);
    uVar12 = (ulonglong)local_48;
    if (2 < uVar12) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_78[0] != (code *)0x0) {
        pppuVar10 = (undefined ***)(local_78 + 2);
        if (local_50 != (undefined ***)0x0) {
          pppuVar10 = local_50;
        }
        (*(code *)(*pppuVar10)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar12])();
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar10 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar10 = local_80;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->PublishCritSec);
  return;
}

