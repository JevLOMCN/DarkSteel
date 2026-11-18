// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 7

// FCalibratedMapProcessor @ 14d6a6ed0

FCalibratedMapProcessor * __thiscall
FCalibratedMapProcessor::FCalibratedMapProcessor(FCalibratedMapProcessor *this)

{
  int *piVar1;
  FSharedReferencer<1> *pFVar2;
  TPimplPtr<FRHIGPUBufferReadback,0> *pTVar3;
  FRHIGPUBufferReadback *pFVar4;
  TNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  TNode *pTVar8;
  TNode *pTVar9;
  TNode *pTVar10;
  FCalibratedMapProcessor *pFVar11;
  TNode *pTVar12;
  FName *pFVar13;
  TNode *pTVar14;
  ForAnyElementType FVar15;
  TNode *pTVar16;
  uint uVar17;
  FDerivedDistortionDataJob *pFVar18;
  FName local_res8;
  longlong local_48;
  FString local_40;
  
  this->_padding_ = (longlong)&___7FCalibratedMapProcessor__6B_;
  pTVar8 = ::operator_new(0x18);
  if (pTVar8 == (TNode *)0x0) {
    pTVar8 = (TNode *)0x0;
  }
  else {
    pTVar8->NextNode = (TNode *)0x0;
    (pTVar8->Item).Object = (FDerivedDistortionDataJob *)0x0;
    (pTVar8->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar8->NextNode = (TNode *)0x0;
    (pTVar8->Item).Object = (FDerivedDistortionDataJob *)0x0;
    (pTVar8->Item).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  pTVar16 = (TNode *)0x0;
  (this->AvailableJobs).Tail = pTVar8;
  (this->AvailableJobs).Head = pTVar8;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->RunningJobsCriticalSection,4000);
  piVar1 = &(this->RunningJobs).ArrayMax;
  *piVar1 = 0;
  (this->RunningJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RunningJobs).ArrayNum = 0;
  pTVar9 = ::operator_new(0x18);
  pTVar10 = pTVar16;
  if (pTVar9 != (TNode *)0x0) {
    pTVar9->NextNode = (TNode *)0x0;
    (pTVar9->Item).Focus = 0.0;
    (pTVar9->Item).Zoom = 0.0;
    ((FSharedReferencer<1> *)&(pTVar9->Item).Format)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar9->NextNode = (TNode *)0x0;
    (pTVar9->Item).Focus = 0.0;
    (pTVar9->Item).Zoom = 0.0;
    ((FSharedReferencer<1> *)&(pTVar9->Item).Format)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pTVar10 = pTVar9;
  }
  (this->CompletedJobs).Tail = (TNode *)pTVar10;
  (this->CompletedJobs).Head = (TNode *)pTVar10;
  pTVar9 = ::operator_new(0x48);
  pTVar10 = pTVar16;
  if (pTVar9 != (TNode *)0x0) {
    pTVar9->NextNode = (TNode *)0x0;
    (pTVar9->Item).Focus = 0.0;
    (pTVar9->Item).Zoom = 0.0;
    ((FSharedReferencer<1> *)&(pTVar9->Item).Format)->ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)&(pTVar9->Item).SourceDistortionMap.WeakPtr.ObjectSerialNumber = 0;
    *(undefined8 *)&(pTVar9->Item).OutputUndistortionDisplacementMap.WeakPtr.ObjectSerialNumber = 0;
    *(undefined8 *)&(pTVar9->Item).OutputDistortionDisplacementMap.WeakPtr.ObjectSerialNumber = 0;
    *(undefined8 *)&(pTVar9->Item).JobCompletedCallback.field_0x0 = 0;
    *(undefined8 *)&(pTVar9->Item).JobCompletedCallback.field_0x8 = 0;
    *(undefined8 *)&(pTVar9->Item).JobCompletedCallback.field_0x10 = 0;
    pTVar9->NextNode = (TNode *)0x0;
    (pTVar9->Item).Focus = 0.0;
    (pTVar9->Item).Zoom = 0.0;
    *(undefined2 *)&((FSharedReferencer<1> *)&(pTVar9->Item).Format)->ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&((FSharedReferencer<1> *)&(pTVar9->Item).Format)->ReferenceController + 2) = 1;
    (pTVar9->Item).SourceDistortionMap.WeakPtr = (FWeakObjectPtr)0x0;
    (pTVar9->Item).OutputUndistortionDisplacementMap.WeakPtr = (FWeakObjectPtr)0x0;
    (pTVar9->Item).OutputDistortionDisplacementMap.WeakPtr = (FWeakObjectPtr)0x0;
    *(undefined8 *)&(pTVar9->Item).JobCompletedCallback.field_0x0 = 0;
    *(undefined8 *)&(pTVar9->Item).JobCompletedCallback.field_0x8 = 0;
    *(undefined4 *)&(pTVar9->Item).JobCompletedCallback.field_0x10 = 0;
    pTVar10 = pTVar9;
  }
  (this->PendingJobs).Tail = pTVar10;
  (this->PendingJobs).Head = pTVar10;
  pTVar10 = pTVar16;
  if (*piVar1 < 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,&(this->RunningJobs).AllocatorInstance,(this->RunningJobs).ArrayNum,piVar1);
  }
  do {
    pTVar9 = ::operator_new(0x80);
    if (pTVar9 == (TNode *)0x0) {
      pFVar18 = (FDerivedDistortionDataJob *)&DAT_00000010;
      pTVar9 = pTVar16;
    }
    else {
      (pTVar9->Item).Focus = 1.4013e-45;
      piVar1 = &pTVar9[1].Item.SourceDistortionMap.WeakPtr.ObjectSerialNumber;
      (pTVar9->Item).Zoom = 1.4013e-45;
      pTVar9->NextNode =
           (TNode *)&
                    ___7__TIntrusiveReferenceController_UFDerivedDistortionDataJob___00_SharedPointerInternals__6B_
      ;
      ((FSharedReferencer<1> *)&(pTVar9->Item).Format)->ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined8 *)&(pTVar9->Item).SourceDistortionMap.WeakPtr.ObjectSerialNumber = 0;
      *(undefined8 *)&(pTVar9->Item).OutputUndistortionDisplacementMap.WeakPtr.ObjectSerialNumber =
           0;
      *(undefined8 *)&(pTVar9->Item).OutputDistortionDisplacementMap.WeakPtr.ObjectSerialNumber = 0;
      *(undefined8 *)&(pTVar9->Item).JobCompletedCallback.field_0x0 = 0;
      *(undefined8 *)&(pTVar9->Item).JobCompletedCallback.field_0x8 = 0;
      *(undefined8 *)&(pTVar9->Item).JobCompletedCallback.field_0x10 = 0;
      pTVar9[1].NextNode = (TNode *)0x0;
      pTVar9[1].Item.Focus = 0.0;
      pTVar9[1].Item.Zoom = 0.0;
      ((FSharedReferencer<1> *)&pTVar9[1].Item.Format)->ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined8 *)&pTVar9[1].Item.SourceDistortionMap.WeakPtr.ObjectSerialNumber = 0;
      *(undefined8 *)&pTVar9[1].Item.OutputUndistortionDisplacementMap.WeakPtr.ObjectSerialNumber =
           0;
      *(undefined8 *)&pTVar9[1].Item.OutputDistortionDisplacementMap.WeakPtr.ObjectSerialNumber = 0;
      *(undefined8 *)&pTVar9[1].Item.JobCompletedCallback.field_0x0 = 0;
      *(undefined8 *)&(pTVar9->Item).SourceDistortionMap.WeakPtr.ObjectSerialNumber = 0;
      *(undefined1 *)
       ((longlong)&(pTVar9->Item).OutputUndistortionDisplacementMap.WeakPtr.ObjectSerialNumber + 2)
           = 1;
      *(undefined1 *)piVar1 = 1;
      pTVar9[1].Item.OutputUndistortionDisplacementMap.WeakPtr.ObjectIndex = -0x40800000;
      pTVar9[1].Item.OutputUndistortionDisplacementMap.WeakPtr.ObjectSerialNumber = -0x40800000;
      FDerivedDistortionDataJobOutput::Reset((FDerivedDistortionDataJobOutput *)piVar1);
      pFVar18 = (FDerivedDistortionDataJob *)&(pTVar9->Item).Format;
      if ((pFVar18 == (FDerivedDistortionDataJob *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar11 = (FCalibratedMapProcessor *)(*pcVar6)();
        return pFVar11;
      }
      LOCK();
      (pTVar9->Item).Focus = (float)((int)(pTVar9->Item).Focus + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar9);
    ::FString::PrintfImpl(&local_40,L"DerivedDistortionDataJobReadback_%02d");
    FVar15.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar15.Data = local_40.Data.AllocatorInstance.Data;
    }
    pTVar12 = ::operator_new(0x70);
    pTVar14 = pTVar16;
    if (pTVar12 != (TNode *)0x0) {
      (pTVar12->Item).Focus = 0.0;
      (pTVar12->Item).Zoom = 0.0;
      pTVar12->NextNode = (TNode *)UE::Core::Private::PimplPtr::DeleterFunc<FRHIGPUBufferReadback>;
      pFVar13 = ::FName::FName(&local_res8,(wchar_t *)FVar15.Data);
      FRHIGPUBufferReadback::FRHIGPUBufferReadback
                ((FRHIGPUBufferReadback *)&(pTVar12->Item).Format,*pFVar13);
      pTVar14 = pTVar12;
    }
    pFVar2 = (FSharedReferencer<1> *)&(pTVar14->Item).Format;
    if ((pFVar18 == (FDerivedDistortionDataJob *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar11 = (FCalibratedMapProcessor *)(*pcVar6)();
      return pFVar11;
    }
    pTVar3 = &pFVar18->Readback;
    if ((TPimplPtr<FRHIGPUBufferReadback,0> *)&local_48 == pTVar3) {
      if (pFVar2 != (FSharedReferencer<1> *)0x0) {
        pTVar12 = pTVar14->NextNode;
        goto LAB_14d6a7189;
      }
    }
    else {
      pFVar4 = pTVar3->Ptr;
      pTVar3->Ptr = (FRHIGPUBufferReadback *)pFVar2;
      if (pFVar4 != (FRHIGPUBufferReadback *)0x0) {
        pTVar12 = (TNode *)pFVar4[-1].DestinationStagingBuffers[6].Reference;
        pTVar14 = (TNode *)(pFVar4[-1].DestinationStagingBuffers + 6);
LAB_14d6a7189:
        (*(code *)pTVar12)(pTVar14);
      }
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    pTVar8 = ::operator_new(0x18);
    if (pTVar8 != (TNode *)0x0) {
      pTVar8->NextNode = (TNode *)0x0;
      (pTVar8->Item).Object = pFVar18;
      (pTVar8->Item).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pTVar9;
      if (pTVar9 != (TNode *)0x0) {
        LOCK();
        (pTVar9->Item).Focus = (float)((int)(pTVar9->Item).Focus + 1);
        UNLOCK();
      }
      pTVar5 = (this->AvailableJobs).Head;
      (this->AvailableJobs).Head = pTVar8;
      pTVar5->NextNode = pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar9);
    uVar17 = (int)pTVar10 + 1;
    pTVar10 = (TNode *)(ulonglong)uVar17;
    if (3 < (int)uVar17) {
      return this;
    }
  } while( true );
}

// ~FCalibratedMapProcessor @ 14d6abea0

void __thiscall FCalibratedMapProcessor::~FCalibratedMapProcessor(FCalibratedMapProcessor *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FScriptContainerElement *pFVar4;
  
  this->_padding_ = (longlong)&___7FCalibratedMapProcessor__6B_;
  FlushRenderingCommands();
  lpCriticalSection = &this->RunningJobsCriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  DestructItems<TSharedPtr<FDerivedDistortionDataJob,1>,int>
            ((TSharedPtr<FDerivedDistortionDataJob,1> *)(this->RunningJobs).AllocatorInstance.Data,
             (this->RunningJobs).ArrayNum);
  piVar1 = &(this->RunningJobs).ArrayMax;
  (this->RunningJobs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->RunningJobs).AllocatorInstance,0,piVar1);
  }
  TQueue<TSharedPtr<FDerivedDistortionDataJob,1>,1>::Empty(&this->CompletedJobs);
  TQueue<TSharedPtr<FDerivedDistortionDataJob,1>,1>::Empty(&this->AvailableJobs);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar2 = (this->PendingJobs).Tail;
  while (pTVar2 != (TNode *)0x0) {
    (this->PendingJobs).Tail = pTVar2->NextNode;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar2->Item).JobCompletedCallback);
    ::operator_delete(pTVar2,0x48);
    pTVar2 = (this->PendingJobs).Tail;
  }
  pTVar3 = (this->CompletedJobs).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->CompletedJobs).Tail = pTVar3->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar3->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->CompletedJobs).Tail;
  }
  DestructItems<TSharedPtr<FDerivedDistortionDataJob,1>,int>
            ((TSharedPtr<FDerivedDistortionDataJob,1> *)(this->RunningJobs).AllocatorInstance.Data,
             (this->RunningJobs).ArrayNum);
  pFVar4 = (this->RunningJobs).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar3 = (this->AvailableJobs).Tail;
  while (pTVar3 != (TNode *)0x0) {
    (this->AvailableJobs).Tail = pTVar3->NextNode;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar3->Item).SharedReferenceCount.ReferenceController);
    ::operator_delete(pTVar3,0x18);
    pTVar3 = (this->AvailableJobs).Tail;
  }
  return;
}

// operator() @ 14d6b1f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`FCalibratedMapProcessor::ExecuteJob'::__l10::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  wchar_t *pwVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<IPooledRenderTarget> TVar8;
  FRDGTexture *pFVar9;
  FRDGTexture *pFVar10;
  FRDGTexture *pFVar11;
  FRDGBuffer *pFVar12;
  undefined8 *puVar13;
  FRDGBufferUAV *pFVar14;
  FRDGTextureUAV *pFVar15;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar16;
  FName this_01;
  FRDGEventName *this_02;
  FShaderParametersMetadata *pFVar17;
  wchar_t *pwVar18;
  FRDGPass *this_03;
  FDerivedDistortionDataJob *pFVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_988 [32];
  FRDGTextureUAVDesc local_938;
  FRDGTextureUAVDesc local_920;
  undefined8 *local_908;
  ERDGPassFlags local_900;
  FRDGBufferUAVDesc local_8f8;
  float local_8e8;
  float fStack_8e4;
  undefined4 local_8e0;
  undefined4 uStack_8dc;
  FRDGBufferDesc local_8d8;
  undefined4 local_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 uStack_8b4;
  undefined8 local_8b0;
  undefined1 local_8a8 [16];
  undefined1 local_898 [24];
  longlong local_880;
  FRDGEventName local_878;
  FRDGParameterStruct local_860;
  undefined1 local_848 [8];
  FString local_840;
  FRDGEventName local_830;
  undefined1 local_818 [64];
  ForAnyElementType local_7d8;
  int local_7d0;
  int local_7cc [87];
  ForElementType<FRDGPass_*> local_670;
  uint local_668;
  uint local_664 [5];
  ForElementType<FRDGBuffer_*> local_650;
  uint local_648;
  uint local_644;
  ForElementType<FRDGView_*> local_640;
  int local_638;
  int local_634 [299];
  FRDGTrace local_188;
  FRDGUserValidation local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_988;
  local_878.EventFormat = L"";
  puVar21 = (undefined8 *)0x0;
  local_878.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_878.FormattedEventName.Data.ArrayNum = 0;
  local_878.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder((FRDGBuilder *)local_818,param_1,&local_878,None,GMaxRHIShaderPlatform);
  TVar8 = CreateRenderTarget((FRHITexture *)local_8a8,
                             *(wchar_t **)(*(longlong *)((longlong)this + 0x10) + 0x20));
  pFVar9 = FRDGBuilder::RegisterExternalTexture
                     ((FRDGBuilder *)local_818,(TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference,
                      None);
  if ((longlong *)local_8a8._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_8a8._0_8_ + 0x38))();
  }
  TVar8 = CreateRenderTarget((FRHITexture *)(local_8a8 + 8),*(wchar_t **)(*(longlong *)this + 0x20))
  ;
  pFVar10 = FRDGBuilder::RegisterExternalTexture
                      ((FRDGBuilder *)local_818,(TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference
                       ,None);
  if ((longlong *)local_8a8._8_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_8a8._8_8_ + 0x38))();
  }
  TVar8 = CreateRenderTarget((FRHITexture *)local_898,
                             *(wchar_t **)(*(longlong *)((longlong)this + 8) + 0x20));
  pFVar11 = FRDGBuilder::RegisterExternalTexture
                      ((FRDGBuilder *)local_818,(TRefCountPtr<IPooledRenderTarget> *)TVar8.Reference
                       ,None);
  if ((longlong *)local_898._0_8_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)local_898._0_8_ + 0x38))();
  }
  if (*(longlong *)((longlong)this + 0x18) == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(longlong *)((longlong)this + 0x18) == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uStack_8b4 = local_830.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  local_8c0 = 0x10;
  uStack_8bc = 8;
  uStack_8b8 = 0x4129;
  local_8d8.BytesPerElement = 0x10;
  local_8d8.NumElements = 8;
  local_8d8._12_4_ = local_830.FormattedEventName.Data.AllocatorInstance.Data._4_4_;
  local_8d8.Usage = VertexBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
  local_8b0 = 0;
  local_8d8.Metadata = (FShaderParametersMetadata *)0x0;
  FRDGUserValidation::ValidateCreateBuffer(&local_118,&local_8d8,L"EdgePointsBuffer",None);
  if (local_8d8.BytesPerElement == 0) {
    local_8d8.BytesPerElement = 1;
  }
  if (local_8d8.NumElements == 0) {
    local_8d8.NumElements = 1;
  }
  pFVar12 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x130,8);
  pFVar12 = FRDGBuffer::FRDGBuffer(pFVar12,L"EdgePointsBuffer",&local_8d8,None);
  local_898._8_8_ = pFVar12;
  if (local_648 == local_644) {
    local_648 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                          (0x808,&local_650,(int *)&local_644);
  }
  local_650.Data[(int)local_648] = pFVar12;
  (pFVar12->Handle).Index = local_648;
  local_648 = local_648 + 1;
  FRDGUserValidation::ValidateCreateBuffer(&local_118,pFVar12);
  FRDGTrace::AddResource(&local_188,(FRDGViewableResource *)pFVar12);
  puVar13 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x50,0x10);
  if (puVar13 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    puVar13[4] = 0;
    *puVar13 = &___7__TObject_VFParameters_FCalibratedMapDerivedDataCS___FRDGAllocator__6B_;
    puVar13[5] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    puVar13[8] = 0;
    puVar21 = puVar13;
  }
  local_908 = puVar21;
  if (((local_7d8.Data <= (FScriptContainerElement *)&local_908) &&
      ((FScriptContainerElement *)&local_908 < local_7d8.Data + (longlong)local_7cc[0] * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_7d0 == local_7cc[0]) {
    local_7d0 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_7d8,local_7cc);
  }
  fStack_8e4 = __real_3f800000;
  pwVar1 = (wchar_t *)(puVar21 + 2);
  local_8f8._padding_._0_2_ = 0x11;
  local_8f8._padding_._2_1_ = 0;
  *(undefined8 **)(local_7d8.Data + (longlong)local_7d0 * 8) = local_908;
  puVar21[4] = pFVar9;
  puVar21[5] = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
  local_8e8 = fStack_8e4 / (float)*(int *)&(pFVar10->Desc).field_0x24;
  fStack_8e4 = fStack_8e4 / (float)*(int *)&(pFVar10->Desc).field_0x28;
  *(ulonglong *)pwVar1 = CONCAT44(fStack_8e4,local_8e8);
  puVar2 = &(pFVar10->Desc).field_0x24;
  local_8e0 = *(undefined4 *)puVar2;
  uStack_8dc = *(undefined4 *)&(pFVar10->Desc).field_0x28;
  puVar21[3] = *(undefined8 *)puVar2;
  local_8f8.Buffer = pFVar12;
  local_7d0 = local_7d0 + 1;
  FRDGUserValidation::ValidateCreateUAV(&local_118,&local_8f8);
  pFVar12 = local_8f8.Buffer;
  pFVar14 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x48,8);
  lVar5 = pFVar12->_padding_;
  *(byte *)&pFVar14->_padding_ = (byte)pFVar14->_padding_ & 0xfe;
  *(undefined8 *)((longlong)&pFVar14->_padding_ + 4) = 0xffffffffffffffff;
  pFVar14->_padding_ = lVar5;
  pFVar14->_padding_ = 0;
  *(undefined1 *)&pFVar14->_padding_ = 2;
  *(undefined1 *)&pFVar14->_padding_ = 0;
  pFVar14->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
  (pFVar14->Desc)._padding_ =
       CONCAT53(local_8f8._padding_._3_5_,
                CONCAT12(local_8f8._padding_._2_1_,(undefined2)local_8f8._padding_));
  (pFVar14->Desc).Buffer = local_8f8.Buffer;
  if (local_638 == local_634[0]) {
    local_638 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                          (0x808,&local_640,local_634);
  }
  local_640.Data[local_638] = (FRDGView *)pFVar14;
  *(int *)((longlong)&pFVar14->_padding_ + 4) = local_638;
  local_638 = local_638 + 1;
  FRDGUserValidation::ValidateCreateUAV(&local_118,pFVar14);
  puVar21[6] = pFVar14;
  local_938._padding_._0_1_ = (pFVar10->Desc).field_0x34;
  local_938._padding_._1_1_ = 0;
  local_938._padding_._2_4_ = 0;
  local_938._padding_._6_1_ = 0;
  local_938._padding_._0_1_ = '\0';
  local_938.Texture = pFVar10;
  FRDGUserValidation::ValidateCreateUAV(&local_118,&local_938);
  pFVar9 = local_938.Texture;
  pFVar15 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x50,8);
  lVar5 = pFVar9->_padding_;
  *(byte *)&pFVar15->_padding_ = (byte)pFVar15->_padding_ & 0xfe;
  pFVar15->_padding_ = lVar5;
  pFVar15->_padding_ = 0;
  *(undefined1 *)&pFVar15->_padding_ = 0;
  *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&pFVar15->_padding_ = 0;
  pFVar15->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  *(undefined1 *)&(pFVar15->Desc)._padding_ = (undefined1)local_938._padding_;
  *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 1) = local_938._padding_._1_1_;
  *(undefined2 *)((longlong)&(pFVar15->Desc)._padding_ + 2) = local_938._padding_._2_2_;
  *(undefined2 *)((longlong)&(pFVar15->Desc)._padding_ + 4) = local_938._padding_._4_2_;
  *(undefined1 *)&(pFVar15->Desc)._padding_ = 0;
  *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 6) = local_938._padding_._6_1_;
  *(char *)&(pFVar15->Desc)._padding_ = (char)local_938._padding_;
  if ((char)local_938._padding_ != '\0') {
    *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 7) = local_938._padding_._7_1_;
  }
  (pFVar15->Desc).Texture = local_938.Texture;
  if (local_638 == local_634[0]) {
    local_638 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                          (0x808,&local_640,local_634);
  }
  local_640.Data[local_638] = (FRDGView *)pFVar15;
  *(int *)((longlong)&pFVar15->_padding_ + 4) = local_638;
  local_638 = local_638 + 1;
  FRDGUserValidation::ValidateCreateUAV(&local_118,pFVar15);
  puVar21[7] = pFVar15;
  local_920._padding_._0_1_ = (pFVar11->Desc).field_0x34;
  local_920._padding_._1_1_ = 0;
  local_920._padding_._2_4_ = 0;
  local_920._padding_._6_1_ = 0;
  local_920._padding_._0_1_ = '\0';
  local_920.Texture = pFVar11;
  FRDGUserValidation::ValidateCreateUAV(&local_118,&local_920);
  pFVar9 = local_920.Texture;
  pFVar15 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x50,8);
  lVar5 = pFVar9->_padding_;
  *(byte *)&pFVar15->_padding_ = (byte)pFVar15->_padding_ & 0xfe;
  pFVar15->_padding_ = lVar5;
  pFVar15->_padding_ = 0;
  *(undefined1 *)&pFVar15->_padding_ = 0;
  *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0xffffffffffffffff;
  *(undefined1 *)&pFVar15->_padding_ = 0;
  pFVar15->_padding_ = (longlong)&___7FRDGTextureUAV__6B_;
  *(undefined1 *)&(pFVar15->Desc)._padding_ = (undefined1)local_920._padding_;
  *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 1) = local_920._padding_._1_1_;
  *(undefined2 *)((longlong)&(pFVar15->Desc)._padding_ + 2) = local_920._padding_._2_2_;
  *(undefined2 *)((longlong)&(pFVar15->Desc)._padding_ + 4) = local_920._padding_._4_2_;
  *(undefined1 *)&(pFVar15->Desc)._padding_ = 0;
  *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 6) = local_920._padding_._6_1_;
  *(char *)&(pFVar15->Desc)._padding_ = (char)local_920._padding_;
  if ((char)local_920._padding_ != '\0') {
    *(undefined1 *)((longlong)&(pFVar15->Desc)._padding_ + 7) = local_920._padding_._7_1_;
  }
  (pFVar15->Desc).Texture = local_920.Texture;
  if (local_638 == local_634[0]) {
    local_638 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                          (0x808,&local_640,local_634);
  }
  local_640.Data[local_638] = (FRDGView *)pFVar15;
  *(int *)((longlong)&pFVar15->_padding_ + 4) = local_638;
  local_638 = local_638 + 1;
  FRDGUserValidation::ValidateCreateUAV(&local_118,pFVar15);
  puVar21[8] = pFVar15;
  if ((*(longlong *)((longlong)this + 0x18) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar3 = *(byte *)(*(longlong *)((longlong)this + 0x18) + 0x10);
  if ((*(longlong *)((longlong)this + 0x18) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar4 = *(byte *)(*(longlong *)((longlong)this + 0x18) + 0x11);
  if ((*(longlong *)((longlong)this + 0x18) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar23 = (uint)*(byte *)(*(longlong *)((longlong)this + 0x18) + 0x12);
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  uVar22 = (uint)bVar3;
  if ((1 < uVar22) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar20 = (uint)bVar4;
  if ((2 < uVar20) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((2 < uVar23) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PermutationId < PermutationCount && PermutationId >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderPermutation.h"
                         ,0x6a,L"Unknown shader permutation dimension value id %i."), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar16 = (FShaderType *)FCalibratedMapDerivedDataCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (this_00,(TShaderRefBase<FShader,FShaderMapPointerTable> *)(local_898 + 0x10),pFVar16,
             uVar22 + uVar20 * 2 + uVar23 * 6);
  if ((FScriptContainerElement *)local_898._16_8_ == (FScriptContainerElement *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_848);
    ::FName::ToString((FName *)this_01,&local_840);
    FCalibratedMapDerivedDataCS::GetStaticType();
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_840.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_840.Data.AllocatorInstance.Data);
    }
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FCalibratedMapDerivedDataCS::GetStaticType();
  this_02 = FRDGEventName::FRDGEventName(&local_830,1,L"LensFileSTMapConversion");
  pFVar17 = FCalibratedMapDerivedDataCS::FParameters::FTypeInfo::GetStructMetadata();
  FRDGUserValidation::ValidateAddPass(&local_118,pwVar1,pFVar17,this_02,Compute);
  FRDGBuilder::FlushAccessModeQueue((FRDGBuilder *)local_818);
  pwVar18 = FRDGEventName::GetTCHAR(this_02);
  local_900 = FRDGBuilder::OverridePassFlags((FRDGBuilder *)local_818,pwVar18,Compute);
  this_03 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x1a0,8);
  local_860.Contents = (uchar *)pwVar1;
  if (((pFVar17->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_860.Layout.Reference = (pFVar17->Layout).Reference;
  if (local_860.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_860.Layout.Reference);
  }
  local_860.Metadata = pFVar17;
  FRDGPass::FRDGPass(this_03,this_02,&local_860,local_900,Async);
  this_03->_padding_ =
       (longlong)
       &TRDGLambdaPass<FCalibratedMapDerivedDataCS::FParameters,``FCalibratedMapProcessor::ExecuteJob'::`10'::<lambda_1>::operator()'::`2'::<lambda_1>_>
        ::_vftable_;
  this_03[1]._padding_ = (longlong)pwVar1;
  this_03[1].FullPathIfDebug.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)local_898._16_8_;
  this_03[1].FullPathIfDebug.Data.ArrayNum = (undefined4)local_880;
  this_03[1].FullPathIfDebug.Data.ArrayMax = local_880._4_4_;
  this_03[1].Name.EventFormat = pwVar1;
  FRDGBuilder::ClobberPassOutputs((FRDGBuilder *)local_818,this_03);
  if (local_668 == local_664[0]) {
    local_668 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                          (0x808,&local_670,(int *)local_664);
  }
  local_670.Data[(int)local_668] = this_03;
  (this_03->Handle).Index = local_668;
  local_668 = local_668 + 1;
  FRDGBuilder::SetupParameterPass((FRDGBuilder *)local_818,this_03);
  if ((void *)CONCAT44(local_830.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                       local_830.FormattedEventName.Data.AllocatorInstance.Data._0_4_) !=
      (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_830.FormattedEventName.Data.AllocatorInstance.Data._4_4_,
                                   local_830.FormattedEventName.Data.AllocatorInstance.Data._0_4_));
  }
  pFVar19 = TSharedPtr<FDerivedDistortionDataJob,1>::operator->
                      ((TSharedPtr<FDerivedDistortionDataJob,1> *)((longlong)this + 0x18));
  AddEnqueueCopyPass((FRDGBuilder *)local_818,(pFVar19->Readback).Ptr,(FRDGBuffer *)local_898._8_8_,
                     0x80);
  FRDGBuilder::Execute((FRDGBuilder *)local_818);
  pFVar19 = TSharedPtr<FDerivedDistortionDataJob,1>::operator->
                      ((TSharedPtr<FDerivedDistortionDataJob,1> *)((longlong)this + 0x18));
  pFVar19->State = AwaitingResult;
  FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_818);
  return;
}

// ExecuteJob @ 14d6c8bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCalibratedMapProcessor::ExecuteJob
          (FCalibratedMapProcessor *this,TSharedPtr<FDerivedDistortionDataJob,1> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TSharedPtr<FDerivedDistortionDataJob,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDerivedDistortionDataJob *pFVar4;
  TNode *pTVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UTexture *this_00;
  UTexture *this_01;
  UTexture *this_02;
  FTextureResource *pFVar9;
  FTextureResource *pFVar10;
  FTextureResource *pFVar11;
  FRenderCommandList *this_03;
  FCommandList *this_04;
  FRenderCommandTag *pFVar12;
  TNode *pTVar13;
  code **ppcVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  undefined1 auStack_108 [32];
  TSharedPtr<FDerivedDistortionDataJob,1> *local_e8;
  TSharedPtr<FDerivedDistortionDataJob,1> *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (param_1->Object == (FDerivedDistortionDataJob *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Job",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\CalibratedMapProcessor.cpp"
                       ,0x97,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_1->Object == (FDerivedDistortionDataJob *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = (UTexture *)FWeakObjectPtr::Get(&(param_1->Object->JobArgs).SourceDistortionMap.WeakPtr)
  ;
  if ((param_1->Object == (FDerivedDistortionDataJob *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_01 = (UTexture *)
            FWeakObjectPtr::Get(&(param_1->Object->JobArgs).OutputUndistortionDisplacementMap.
                                 WeakPtr);
  if ((param_1->Object == (FDerivedDistortionDataJob *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_02 = (UTexture *)
            FWeakObjectPtr::Get(&(param_1->Object->JobArgs).OutputDistortionDisplacementMap.WeakPtr)
  ;
  if (((((this_00 != (UTexture *)0x0) && (this_01 != (UTexture *)0x0)) &&
       (this_02 != (UTexture *)0x0)) &&
      ((pFVar9 = UTexture::GetResource(this_00), pFVar9 != (FTextureResource *)0x0 &&
       (pFVar9 = UTexture::GetResource(this_01), pFVar9 != (FTextureResource *)0x0)))) &&
     (pFVar9 = UTexture::GetResource(this_02), pFVar9 != (FTextureResource *)0x0)) {
    pFVar9 = UTexture::GetResource(this_00);
    pFVar10 = UTexture::GetResource(this_01);
    pFVar11 = UTexture::GetResource(this_02);
    lpCriticalSection = &this->RunningJobsCriticalSection;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar2 = (TSharedPtr<FDerivedDistortionDataJob,1> *)(this->RunningJobs).AllocatorInstance.Data;
    if ((pTVar2 <= param_1) &&
       (lVar15 = (longlong)(this->RunningJobs).ArrayMax, param_1 < pTVar2 + lVar15)) {
      local_d0 = (longlong)(this->RunningJobs).ArrayNum;
      local_c8 = 0x10;
      local_e8 = param_1;
      local_e0 = pTVar2;
      local_d8 = lVar15;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar8 = (this->RunningJobs).ArrayNum;
    piVar1 = &(this->RunningJobs).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->RunningJobs).AllocatorInstance,piVar1);
    }
    (this->RunningJobs).ArrayNum = iVar8 + 1;
    pFVar16 = (this->RunningJobs).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(FDerivedDistortionDataJob **)pFVar16 = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar16 + 8) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x30,8);
    local_90[1] = (code *)pFVar10;
    local_90[2] = (code *)pFVar11;
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FCalibratedMapProcessor::ExecuteJob'::`10'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[3] = (code *)pFVar9;
    local_90[4] = (code *)pFVar4;
    local_90[5] = (code *)pTVar3;
    if (local_90 != (code **)&DAT_fffffffffffffff8) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FCalibratedMapProcessor::ExecuteJob'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_03 = FRenderCommandList::GetInstanceTLS();
    if (this_03 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FCalibratedMapProcessor::ExecuteJob_::__l10::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_04 = FRenderCommandList::GetRenderThread(this_03);
      local_88[0] = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_78[0] = local_a8[0];
      local_78[1] = local_a8[1];
      local_78[2] = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar12 = (FRenderCommandTag *)
                TRenderCommandTag<`FCalibratedMapProcessor::ExecuteJob'::__l10::TSTR_FCalibratedMapProcessor_ComputeDerivedDistortionData179>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_04,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar12);
      uVar17 = (ulonglong)local_58;
      if ((2 < uVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
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
                    ::__l2::Destructors)[uVar17])();
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar14 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar14 = local_90;
      }
      (**(code **)(*ppcVar14 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return;
  }
  if ((param_1->Object == (FDerivedDistortionDataJob *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  param_1->Object->State = Completed;
  if ((param_1->Object == (FDerivedDistortionDataJob *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (param_1->Object->Output).Result = Error;
  pTVar13 = ::operator_new(0x18);
  if (pTVar13 != (TNode *)0x0) {
    pTVar13->NextNode = (TNode *)0x0;
    (pTVar13->Item).Object = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    (pTVar13->Item).SharedReferenceCount.ReferenceController = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = (this->CompletedJobs).Head;
    (this->CompletedJobs).Head = pTVar13;
    pTVar5->NextNode = pTVar13;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// PushDerivedDistortionDataJob @ 14d6e5960

bool __thiscall
FCalibratedMapProcessor::PushDerivedDistortionDataJob
          (FCalibratedMapProcessor *this,FDerivedDistortionDataJobArgs *param_1)

{
  float fVar1;
  longlong *plVar2;
  TNode *pTVar3;
  code *pcVar4;
  ECalibratedMapChannels EVar5;
  FDerivedDistortionDataJob *pFVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  TNode *pTVar10;
  FSharedReferencer<1> FVar11;
  TSharedPtr<FDerivedDistortionDataJob,1> local_68;
  TSharedPtr<FDerivedDistortionDataJob,1> local_58;
  FReadAccessScope local_48 [2];
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &param_1->JobCompletedCallback,local_48);
  if (((*(int *)&(param_1->JobCompletedCallback).field_0x10 == 0) ||
      (plVar2 = *(longlong **)&(param_1->JobCompletedCallback).field_0x8, plVar2 == (longlong *)0x0)
      ) || (cVar7 = (**(code **)(*plVar2 + 0x38))(), cVar7 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
    bVar8 = FWeakObjectPtr::IsValid(&(param_1->SourceDistortionMap).WeakPtr);
    if (((bVar8) &&
        (bVar8 = FWeakObjectPtr::IsValid(&(param_1->OutputUndistortionDisplacementMap).WeakPtr),
        bVar8)) &&
       (bVar8 = FWeakObjectPtr::IsValid(&(param_1->OutputDistortionDisplacementMap).WeakPtr), bVar8)
       ) {
      local_68.Object = (FDerivedDistortionDataJob *)0x0;
      local_68.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      bVar8 = TQueue<TSharedPtr<FDerivedDistortionDataJob,1>,1>::Dequeue
                        (&this->AvailableJobs,&local_68);
      pFVar6 = local_68.Object;
      FVar11.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
      if (bVar8) {
        if ((local_68.Object == (FDerivedDistortionDataJob *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        FDerivedDistortionDataJobOutput::Reset(&pFVar6->Output);
        fVar1 = param_1->Focus;
        if ((pFVar6 == (FDerivedDistortionDataJob *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          uVar9 = (*pcVar4)();
          return (bool)uVar9;
        }
        (pFVar6->Output).Focus = fVar1;
        (pFVar6->Output).Zoom = param_1->Zoom;
        FDerivedDistortionDataJobArgs::operator=(&pFVar6->JobArgs,param_1);
        FVar11.ReferenceController = local_68.SharedReferenceCount.ReferenceController;
        local_58.Object = local_68.Object;
        local_58.SharedReferenceCount.ReferenceController =
             local_68.SharedReferenceCount.ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        ExecuteJob(this,&local_58);
      }
      if ((pFVar6 == (FDerivedDistortionDataJob *)0x0) &&
         (pTVar10 = ::operator_new(0x48), pTVar10 != (TNode *)0x0)) {
        pTVar10->NextNode = (TNode *)0x0;
        (pTVar10->Item).Focus = param_1->Focus;
        (pTVar10->Item).Zoom = param_1->Zoom;
        EVar5 = (param_1->Format).UndistortionChannels;
        (pTVar10->Item).Format.PixelOrigin = (param_1->Format).PixelOrigin;
        (pTVar10->Item).Format.UndistortionChannels = EVar5;
        (pTVar10->Item).Format.DistortionChannels = (param_1->Format).DistortionChannels;
        (pTVar10->Item).SourceDistortionMap.WeakPtr = (param_1->SourceDistortionMap).WeakPtr;
        (pTVar10->Item).OutputUndistortionDisplacementMap.WeakPtr =
             (param_1->OutputUndistortionDisplacementMap).WeakPtr;
        (pTVar10->Item).OutputDistortionDisplacementMap.WeakPtr =
             (param_1->OutputDistortionDisplacementMap).WeakPtr;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                   &(pTVar10->Item).JobCompletedCallback,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)&param_1->JobCompletedCallback);
        pTVar3 = (this->PendingJobs).Head;
        (this->PendingJobs).Head = pTVar10;
        pTVar3->NextNode = pTVar10;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar11.ReferenceController);
      return true;
    }
  }
  return false;
}

// Update @ 14d6f4230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FCalibratedMapProcessor::Update(FCalibratedMapProcessor *this)

{
  TSharedPtr<FDerivedDistortionDataJob,1> *pTVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TNode *pTVar4;
  longlong *plVar5;
  TNode *pTVar6;
  TNode *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TNode *pTVar11;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar12;
  FScriptContainerElement *_Dst;
  undefined ***pppuVar13;
  int iVar14;
  FDerivedDistortionDataJob *pFVar15;
  ulonglong uVar16;
  undefined1 auStackY_208 [32];
  FDerivedDistortionDataJob *local_1c8;
  FSharedReferencer<1> FStack_1c0;
  FDerivedDistortionDataJob *local_1b8;
  FSharedReferencer<1> FStack_1b0;
  undefined8 local_1a8;
  undefined2 local_1a0;
  ECalibratedMapChannels local_19e;
  FWeakObjectPtr local_19c;
  FWeakObjectPtr FStack_194;
  FWeakObjectPtr local_18c;
  undefined1 local_180 [8];
  ForAnyElementType FStack_178;
  int local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140 [8];
  ForAnyElementType FStack_138;
  ulonglong local_130;
  undefined8 local_128;
  FSharedReferencer<1> FStack_120;
  undefined8 local_118;
  FSharedReferencer<1> FStack_110;
  FDestructionSentinel local_108;
  FDestructionSentinel local_f0;
  TSharedPtr<FDerivedDistortionDataJob,1> local_d8;
  FReadAccessScope local_c8;
  code *local_a8 [2];
  undefined **local_98;
  FCalibratedMapProcessor *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FCalibratedMapProcessor *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1b8 = (FDerivedDistortionDataJob *)0x0;
  FStack_1b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar15 = (FDerivedDistortionDataJob *)0x0;
  while (pTVar11 = ((this->CompletedJobs).Tail)->NextNode, pTVar11 != (TNode *)0x0) {
    pTVar1 = &pTVar11->Item;
    if ((TSharedPtr<FDerivedDistortionDataJob,1> *)&local_1b8 != pTVar1) {
      local_1b8 = pTVar1->Object;
      pTVar1->Object = (FDerivedDistortionDataJob *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_1b0,&(pTVar11->Item).SharedReferenceCount);
      pFVar15 = local_1b8;
    }
    pTVar4 = (this->CompletedJobs).Tail;
    (this->CompletedJobs).Tail = pTVar11;
    local_128 = 0;
    FStack_120.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FDerivedDistortionDataJob,1> *)&local_128) {
      pTVar1->Object = (FDerivedDistortionDataJob *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar11->Item).SharedReferenceCount,&FStack_120);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_120.ReferenceController);
    if (pTVar4 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar4->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar4,0x18);
    }
    if (pFVar15 == (FDerivedDistortionDataJob *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (pFVar15 == (FDerivedDistortionDataJob *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &(pFVar15->JobArgs).JobCompletedCallback,&local_c8);
    if ((*(int *)&(pFVar15->JobArgs).JobCompletedCallback.field_0x10 != 0) &&
       (plVar5 = *(longlong **)&(pFVar15->JobArgs).JobCompletedCallback.field_0x8,
       plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x68))(plVar5,&pFVar15->Output);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_c8);
    pTVar11 = ::operator_new(0x18);
    if (pTVar11 != (TNode *)0x0) {
      pTVar11->NextNode = (TNode *)0x0;
      (pTVar11->Item).Object = pFVar15;
      (pTVar11->Item).SharedReferenceCount.ReferenceController = FStack_1b0.ReferenceController;
      if (FStack_1b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_1b0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FStack_1b0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = (this->AvailableJobs).Head;
      (this->AvailableJobs).Head = pTVar11;
      pTVar4->NextNode = pTVar11;
    }
  }
  while( true ) {
    if ((((this->PendingJobs).Tail)->NextNode == (TNode *)0x0) ||
       (((this->PendingJobs).Tail)->NextNode == (TNode *)0xfffffffffffffff8)) goto LAB_14d6f488f;
    local_1c8 = (FDerivedDistortionDataJob *)0x0;
    FStack_1c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar11 = ((this->AvailableJobs).Tail)->NextNode;
    if (pTVar11 == (TNode *)0x0) break;
    pTVar1 = &pTVar11->Item;
    if ((TSharedPtr<FDerivedDistortionDataJob,1> *)&local_1c8 != pTVar1) {
      local_1c8 = pTVar1->Object;
      pTVar1->Object = (FDerivedDistortionDataJob *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_1c0,&(pTVar11->Item).SharedReferenceCount);
    }
    pTVar4 = (this->AvailableJobs).Tail;
    (this->AvailableJobs).Tail = pTVar11;
    local_118 = 0;
    FStack_110.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FDerivedDistortionDataJob,1> *)&local_118) {
      pTVar1->Object = (FDerivedDistortionDataJob *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pTVar11->Item).SharedReferenceCount,&FStack_110);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_110.ReferenceController);
    if (pTVar4 != (TNode *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pTVar4->Item).SharedReferenceCount.ReferenceController);
      ::operator_delete(pTVar4,0x18);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19e = BA;
    local_19c.ObjectIndex = 0;
    local_19c.ObjectSerialNumber = 0;
    FStack_194.ObjectIndex = 0;
    FStack_194.ObjectSerialNumber = 0;
    local_18c.ObjectIndex = 0;
    local_18c.ObjectSerialNumber = 0;
    local_180 = (undefined1  [8])0x0;
    FStack_178.Data = (FScriptContainerElement *)0x0;
    local_170 = 0;
    pTVar6 = ((this->PendingJobs).Tail)->NextNode;
    if (pTVar6 == (TNode *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingJobs.Dequeue(PendingJob)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\CameraCalibrationCore\\Source\\CameraCalibrationCore\\Private\\CalibratedMapProcessor.cpp"
                         ,0x61,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      local_1a8._0_4_ = (pTVar6->Item).Focus;
      local_1a8._4_4_ = (pTVar6->Item).Zoom;
      local_1a0._0_1_ = (pTVar6->Item).Format.PixelOrigin;
      local_1a0._1_1_ = (pTVar6->Item).Format.UndistortionChannels;
      local_19e = (pTVar6->Item).Format.DistortionChannels;
      local_19c = (pTVar6->Item).SourceDistortionMap.WeakPtr;
      FStack_194 = (pTVar6->Item).OutputUndistortionDisplacementMap.WeakPtr;
      local_18c = (pTVar6->Item).OutputDistortionDisplacementMap.WeakPtr;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_180,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar6->Item).JobCompletedCallback);
      pTVar7 = (this->PendingJobs).Tail;
      local_160 = 0x10000;
      uStack_148 = 0;
      uStack_144 = 0;
      local_15c = 0;
      uStack_154 = 0;
      local_168 = 0;
      local_140 = (undefined1  [8])0x0;
      FStack_138.Data = (FScriptContainerElement *)0x0;
      local_14c = 0;
      (this->PendingJobs).Tail = pTVar6;
      local_130 = 0;
      (pTVar6->Item).Focus = 0.0;
      (pTVar6->Item).Zoom = 0.0;
      (pTVar6->Item).Format.PixelOrigin = TopLeft;
      (pTVar6->Item).Format.UndistortionChannels = RG;
      (pTVar6->Item).Format.DistortionChannels = BA;
      (pTVar6->Item).SourceDistortionMap.WeakPtr = (FWeakObjectPtr)0x0;
      (pTVar6->Item).OutputUndistortionDisplacementMap.WeakPtr = (FWeakObjectPtr)0x0;
      (pTVar6->Item).OutputDistortionDisplacementMap.WeakPtr = (FWeakObjectPtr)0x0;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar6->Item).JobCompletedCallback,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_140);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_140,
                 (FWriteAccessScope *)&local_108);
      if (((int)local_130 != 0) && (FStack_138.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_138.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_138,0,0,0x10);
        local_130 = local_130 & 0xffffffff00000000;
      }
      if (local_108.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
      }
      if (FStack_138.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_138.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_140);
      if (pTVar7 != (TNode *)0x0) {
        TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pTVar7->Item).JobCompletedCallback
                  );
        ::operator_delete(pTVar7,0x48);
      }
    }
    pFVar15 = local_1c8;
    if (local_1c8 == (FDerivedDistortionDataJob *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pTVar2 = &(pFVar15->Output).EdgePointsDistortedUVs;
    (pFVar15->Output).Result = Error;
    iVar14 = (pFVar15->Output).EdgePointsDistortedUVs.ArrayNum;
    piVar3 = &(pFVar15->Output).EdgePointsDistortedUVs.ArrayNum;
    if (iVar14 < 8) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,8 - iVar14,&pTVar2->AllocatorInstance,piVar3,
                          &(pFVar15->Output).EdgePointsDistortedUVs.ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10,0,
             (longlong)(8 - iVar14) << 4);
    }
    else if (8 < iVar14) {
      iVar14 = iVar14 + -8;
      if (iVar14 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else if (iVar14 == 0) goto LAB_14d6f475e;
      _Dst = (pTVar2->AllocatorInstance).Data + 0x80;
      iVar10 = (*piVar3 - iVar14) + -8;
      if (iVar10 != 0) {
        memmove(_Dst,_Dst + (longlong)iVar14 * 0x10,(longlong)iVar10 << 4);
      }
      iVar14 = (pFVar15->Output).EdgePointsDistortedUVs.ArrayNum - iVar14;
      (pFVar15->Output).EdgePointsDistortedUVs.ArrayNum = iVar14;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar2->AllocatorInstance,iVar14,
                 &(pFVar15->Output).EdgePointsDistortedUVs.ArrayMax);
    }
LAB_14d6f475e:
    if (pFVar15 == (FDerivedDistortionDataJob *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    (pFVar15->Output).Focus = (float)local_1a8;
    (pFVar15->Output).Zoom = local_1a8._4_4_;
    (pFVar15->JobArgs).Focus = (float)local_1a8;
    (pFVar15->JobArgs).Zoom = local_1a8._4_4_;
    (pFVar15->JobArgs).Format.PixelOrigin = (undefined1)local_1a0;
    (pFVar15->JobArgs).Format.UndistortionChannels = local_1a0._1_1_;
    (pFVar15->JobArgs).Format.DistortionChannels = local_19e;
    (pFVar15->JobArgs).SourceDistortionMap.WeakPtr = local_19c;
    (pFVar15->JobArgs).OutputUndistortionDisplacementMap.WeakPtr = FStack_194;
    (pFVar15->JobArgs).OutputDistortionDisplacementMap.WeakPtr = local_18c;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar15->JobArgs).JobCompletedCallback
               ,(TDelegateBase<FNotThreadSafeDelegateMode> *)local_180);
    local_d8.Object = local_1c8;
    local_d8.SharedReferenceCount.ReferenceController = FStack_1c0.ReferenceController;
    FStack_1c0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1c8 = (FDerivedDistortionDataJob *)0x0;
    ExecuteJob(this,&local_d8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_180,
               (FWriteAccessScope *)&local_f0);
    if ((local_170 != 0) && (FStack_178.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)FStack_178.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_178,0,0,0x10);
      local_170 = 0;
    }
    if (local_f0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f0.Accessor,&local_f0);
    }
    if (FStack_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_178.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_180);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
LAB_14d6f488f:
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FCalibratedMapProcessor::Update'::`2'::<lambda_1>,1,0>::
              _vftable_;
  local_a8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FCalibratedMapProcessor::Update'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_90 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FCalibratedMapProcessor::Update_::__l2::TSTR_FCalibratedMapProcessor_Update_RenderThread112>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_78._0_8_ = local_a8[0];
    local_50 = local_80;
    local_68 = local_98;
    pFStack_60 = pFStack_90;
    local_58 = local_88;
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar12 = (FRenderCommandTag *)
              TRenderCommandTag<`FCalibratedMapProcessor::Update'::__l2::TSTR_FCalibratedMapProcessor_Update_RenderThread112>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar12);
    uVar16 = (ulonglong)local_48;
    if (2 < uVar16) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar13 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar13 = local_50;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])(local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    pppuVar13 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar13 = local_80;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1b0.ReferenceController);
  return;
}

// Update_RenderThread @ 14d6f53f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FCalibratedMapProcessor::Update_RenderThread(FCalibratedMapProcessor *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TSharedPtr<FDerivedDistortionDataJob,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FRHIGPUBufferReadback *pFVar3;
  undefined8 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  TNode *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  undefined8 *puVar13;
  TNode *pTVar14;
  int iVar15;
  longlong lVar16;
  ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_> FVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  FCalibratedMapProcessor *pFVar20;
  uint uVar21;
  ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_> FVar22;
  undefined1 auStackY_118 [32];
  undefined1 local_c8 [8];
  TSharedPtr<FDerivedDistortionDataJob,1> local_c0;
  undefined8 local_b0;
  FCalibratedMapProcessor *local_a8;
  ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_> local_a0;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_118;
  uVar21 = 0;
  lpCriticalSection = &this->RunningJobsCriticalSection;
  local_a0.SecondaryData = (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)0x0;
  local_58 = 0;
  local_54 = 4;
  local_a8 = this;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->RunningJobs;
  while( true ) {
    if (((int)uVar21 < 0) || ((this->RunningJobs).ArrayNum <= (int)uVar21)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      iVar15 = local_58;
      FVar17 = (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)&local_a0;
      if (local_a0.SecondaryData != (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)0x0) {
        FVar17 = local_a0.SecondaryData;
      }
      FVar22 = (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)
               ((longlong)local_58 * 0x10 + (longlong)FVar17);
      pFVar20 = local_a8;
      do {
        if (local_58 != iVar15) {
          local_c8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FDerivedDistortionDataJob,1>,int,0>::operator!='::__l2
          ::<lambda_1>::operator()(local_c8);
        }
        if (FVar17 == FVar22) {
          FVar17 = (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)&local_a0;
          if (local_a0.SecondaryData !=
              (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)0x0) {
            FVar17 = local_a0.SecondaryData;
          }
          DestructItems<TSharedPtr<FDerivedDistortionDataJob,1>,int>
                    ((TSharedPtr<FDerivedDistortionDataJob,1> *)FVar17,local_58);
          if (local_a0.SecondaryData !=
              (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)0x0) {
            FMemory::Free((void *)local_a0.SecondaryData);
          }
          return;
        }
        if (*(longlong *)FVar17 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L"");
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((*(longlong *)FVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        puVar13 = FRHIGPUBufferReadback::Lock
                            (*(FRHIGPUBufferReadback **)(*(longlong *)FVar17 + 0x48),0x80);
        if (puVar13 == (undefined8 *)0x0) {
          if (1 < (byte)LogCameraCalibrationCore._0_1_) {
            UE::Logging::Private::BasicLog<2>
                      (&::LOG_Static,(FLogCategoryBase *)&LogCameraCalibrationCore);
          }
          if ((*(longlong *)FVar17 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined1 *)(*(longlong *)FVar17 + 0x50) = 1;
        }
        else {
          uVar21 = 0;
          lVar18 = 0;
          while( true ) {
            if ((*(longlong *)FVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar20 = local_a8;
            if (*(int *)(*(longlong *)FVar17 + 0x68) <= (int)uVar21) break;
            uVar4 = *puVar13;
            local_b0._0_4_ = (float)uVar4;
            local_b0._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
            dVar8 = (double)(float)local_b0;
            dVar9 = (double)local_b0._4_4_;
            local_b0 = uVar4;
            if ((*(longlong *)FVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar16 = *(longlong *)FVar17;
            uVar12 = 0;
            if ((int)uVar21 < *(int *)(lVar16 + 0x68)) {
              uVar12 = ~uVar21 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            lVar16 = *(longlong *)(lVar16 + 0x60);
            *(double *)(lVar18 + lVar16) = dVar8;
            *(double *)(lVar18 + 8 + lVar16) = dVar9;
            if ((*(longlong *)FVar17 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar21 = uVar21 + 1;
            puVar13 = puVar13 + 1;
            lVar18 = lVar18 + 0x10;
            *(undefined1 *)(*(longlong *)FVar17 + 0x50) = 0;
          }
        }
        if ((*(longlong *)FVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FRHIGPUBufferReadback::Unlock(*(FRHIGPUBufferReadback **)(*(longlong *)FVar17 + 0x48));
        if ((*(longlong *)FVar17 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        **(undefined1 **)FVar17 = 2;
        pTVar14 = ::operator_new(0x18);
        if (pTVar14 != (TNode *)0x0) {
          pTVar14->NextNode = (TNode *)0x0;
          (pTVar14->Item).Object = *(FDerivedDistortionDataJob **)FVar17;
          pTVar5 = ((FSharedReferencer<1> *)((longlong)FVar17 + 8))->ReferenceController;
          (pTVar14->Item).SharedReferenceCount.ReferenceController = pTVar5;
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          pTVar6 = (pFVar20->CompletedJobs).Head;
          (pFVar20->CompletedJobs).Head = pTVar14;
          pTVar6->NextNode = pTVar14;
        }
        FVar17 = (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)((longlong)FVar17 + 0x10)
        ;
      } while( true );
    }
    if (((int)uVar21 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar19 = (pTVar1->AllocatorInstance).Data;
    lVar18 = (longlong)(int)uVar21 * 0x10;
    local_c0.Object = *(FDerivedDistortionDataJob **)(pFVar19 + lVar18);
    local_c0.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar19 + lVar18 + 8);
    if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_c0.Object == (FDerivedDistortionDataJob *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) break;
    if ((local_c0.Object)->State == AwaitingResult) {
      pFVar3 = ((local_c0.Object)->Readback).Ptr;
      lVar16 = pFVar3->_padding_;
      if ((lVar16 == 0) ||
         ((*(int *)(lVar16 + 0x18) == 0 &&
          (cVar11 = (**(code **)(*(longlong *)pFVar3->_padding_ + 0x20))(), cVar11 != '\0')))) {
        FVar17 = (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)&local_a0;
        if (local_a0.SecondaryData != (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)0x0)
        {
          FVar17 = local_a0.SecondaryData;
        }
        if ((ulonglong)FVar17 <= &local_c0) {
          FVar17 = (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)&local_a0;
          if (local_a0.SecondaryData !=
              (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)0x0) {
            FVar17 = local_a0.SecondaryData;
          }
          if ((&local_c0 <
               (TSharedPtr<FDerivedDistortionDataJob,1> *)
               ((longlong)local_54 * 0x10 + (longlong)FVar17)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        if (local_58 == local_54) {
          local_58 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>_>
                               (0x810,&local_a0,&local_54);
        }
        lVar16 = (longlong)local_58;
        FVar17 = (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)&local_a0;
        if (local_a0.SecondaryData != (ForElementType<TSharedPtr<FDerivedDistortionDataJob,1>_>)0x0)
        {
          FVar17 = local_a0.SecondaryData;
        }
        local_58 = local_58 + 1;
        ((TSharedPtr<FDerivedDistortionDataJob,1> *)((longlong)FVar17 + lVar16 * 0x10))->Object =
             local_c0.Object;
        ((FSharedReferencer<1> *)((longlong)FVar17 + 8))[lVar16 * 2].ReferenceController =
             local_c0.SharedReferenceCount.ReferenceController;
        if (local_c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar12 = 0;
        if ((int)uVar21 < (this->RunningJobs).ArrayNum) {
          uVar12 = ~uVar21 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar19 = (pTVar1->AllocatorInstance).Data + lVar18;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar19 + 8));
        iVar15 = (this->RunningJobs).ArrayNum + ~uVar21;
        if (iVar15 != 0) {
          memmove(pFVar19,pFVar19 + 0x10,(longlong)iVar15 << 4);
        }
        piVar2 = &(this->RunningJobs).ArrayNum;
        *piVar2 = *piVar2 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&pTVar1->AllocatorInstance,(this->RunningJobs).ArrayNum,
                   &(this->RunningJobs).ArrayMax);
        uVar21 = uVar21 - 1;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c0.SharedReferenceCount.ReferenceController);
    uVar21 = uVar21 + 1;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

