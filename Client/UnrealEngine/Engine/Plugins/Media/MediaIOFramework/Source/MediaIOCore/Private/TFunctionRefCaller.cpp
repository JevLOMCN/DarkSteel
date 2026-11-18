// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 25

// Call @ 14d79a8d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TFutureBase<void>::Then<`UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>_>'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> TStack_50;
  code *apcStack_38 [5];
  undefined8 *puStack_10;
  
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x40);
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x18);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
            (&TStack_50,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)((longlong)param_1 + 0x20))
  ;
  apcStack_38[0] = (code *)0x0;
  puStack_10 = FMemory::Malloc(0x28,8);
  *puStack_10 = &TFunction_OwnedObject<``UMediaCapture::StopCapture_Callback'::`38'::<lambda_3>::operator()'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
  puVar1 = puStack_10 + 1;
  *puVar1 = uVar3;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puStack_10 + 2),
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&TStack_50);
  if (puVar1 != (undefined8 *)0x0) {
    apcStack_38[0] =
         TFunctionRefCaller<``UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>::operator()'::__l2::<lambda_1>,void>
         ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)apcStack_38);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&TStack_50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  TPromise<void>::EmplaceValue<>(param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// Call @ 14d79a8e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MediaCaptureData::FFrameManager::~FFrameManager'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int>
              (*(TSharedPtr<UE::MediaCaptureData::FFrame,1> **)param_1,
               *(int *)((longlong)param_1 + 8));
    *(undefined4 *)((longlong)param_1 + 8) = 0;
    return;
  }
  DestructItems<TSharedPtr<UE::MediaCaptureData::FFrame,1>,int>
            (*(TSharedPtr<UE::MediaCaptureData::FFrame,1> **)param_1,*(int *)((longlong)param_1 + 8)
            );
  *(undefined4 *)((longlong)param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,param_1,0,(int *)((longlong)param_1 + 0xc));
  }
  return;
}

// Call @ 14d79a8f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UMediaCapture::StopCapture_Callback'::__l38::<lambda_3>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  UMediaCapture *this;
  bool bVar1;
  uint uVar2;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar3;
  undefined1 auStack_1078 [32];
  FWeakObjectPtr FStack_1058;
  UMediaCapture *pUStack_1050;
  undefined1 auStack_1048 [24];
  FWeakObjectPtr FStack_1030;
  undefined8 uStack_1020;
  uchar auStack_1018 [4096];
  ulonglong uStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14d78e225;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_1078;
  TVar3 = FWeakObjectPtr::Pin(param_1,SUB81(&FStack_1058,0));
  this = *(UMediaCapture **)TVar3.Object;
  *(undefined8 *)TVar3.Object = 0;
  if (FStack_1058 != (FWeakObjectPtr)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)FStack_1058);
  }
  if (this != (UMediaCapture *)0x0) {
    if (this->MediaState != (atomic<EMediaCaptureState>)0x4) {
      LOCK();
      this->MediaState = (atomic<EMediaCaptureState>)0x4;
      UNLOCK();
      bVar1 = IsInGameThread();
      if (bVar1) {
        TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                  ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnStateChanged,
                   (void *)0x0);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnStateChangedNative);
      }
      else {
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)this);
        }
        FStack_1058.ObjectIndex = 0;
        FStack_1058.ObjectSerialNumber = 0;
        pUStack_1050 = this;
        if (GC::GIsIncrementalReachabilityPending != false) {
          GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&FStack_1058,(FObjectPtr)&pUStack_1050);
        uStack_1020 = 0;
        auStack_1048._16_8_ =
             &TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::_vftable_;
        FStack_1030 = FStack_1058;
        auStack_1048._0_8_ =
             TFunctionRefCaller<`UMediaCapture::SetState'::__l10::<lambda_1>,void>::Call;
        AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)auStack_1048);
      }
    }
    UMediaCapture::PostCaptureCleanup(this);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 8),
               (FReadAccessScope *)auStack_1048);
    if ((*(int *)((longlong)param_1 + 0x18) != 0) &&
       (*(longlong **)((longlong)param_1 + 0x10) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)((longlong)param_1 + 0x10) + 0x68))();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)auStack_1048);
    if (-1 < BookmarkChannel->Enabled) {
      if (__BookmarkPoint644 == false) {
        FMiscTrace::OutputBookmarkSpec
                  (&__BookmarkPoint644,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                   ,0x284,L"UMediaCapture::CompleteStopCapture");
        __BookmarkPoint644 = true;
      }
      uVar2 = CallstackTrace_GetCurrentId();
      auStack_1018[0] = '\0';
      FMiscTrace::OutputBookmarkInternal(&__BookmarkPoint644,uVar2,1,auStack_1018);
    }
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this);
  }
  return;
}

// Call @ 14d79a900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UFileMediaCapture::CacheMediaOutputValues'::__l2::<lambda_1>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  `UFileMediaCapture::CacheMediaOutputValues'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14d79a910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  MediaIOTests::TestBobDeinterlace(*(FAutomationTestBase **)param_1);
  return;
}

// Call @ 14d79a920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIOCorePlayerBase::ExecuteGPUTransfer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSharedPtr<FMediaIOCoreTextureSampleBase,1> *this;
  longlong *plVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  longlong lVar6;
  FMediaIOCoreTextureSampleBase *pFVar7;
  ITextureTransfer *pIVar8;
  undefined8 uVar9;
  TSharedRef<FMediaIOCoreTextureSampleBase,1> *pTVar10;
  FScriptContainerElement *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  TSharedRef<FMediaIOCoreTextureSampleBase,1> TStack_28;
  
  this = (TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)((longlong)param_1 + 0x10);
  if (*(longlong *)((longlong)param_1 + 0x10) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = (**(code **)(this->Object->_padding_ + 0x48))();
  if (lVar6 != 0) {
    pTVar12 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      aVar3 = pTVar12->SharedReferenceCount;
      do {
        if (aVar3 == (atomic<int>)0x0) {
          pTVar12 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_14d78ea30;
        }
        LOCK();
        aVar5 = pTVar12->SharedReferenceCount;
        bVar4 = aVar3 == aVar5;
        if (bVar4) {
          pTVar12->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
          aVar5 = aVar3;
        }
        UNLOCK();
        aVar3 = aVar5;
      } while (!bVar4);
      plVar1 = *(longlong **)param_1;
      if ((plVar1 != (longlong *)0x0) && (plVar1[0x27] != 0)) {
        pFVar7 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->(this);
        pFVar11 = pFVar7->ExternalBuffer;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
          pFVar11 = (pFVar7->Buffer).AllocatorInstance.Data;
        }
        if (5 < (byte)LogMediaIOCore._0_1_) {
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        }
        pIVar8 = TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>::operator->
                           ((TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *)
                            (plVar1 + 0x27));
        pcVar2 = *(code **)((longlong)*pIVar8 + 0x60);
        pFVar7 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->(this);
        uVar9 = (**(code **)(pFVar7->_padding_ + 0x48))(pFVar7);
        (*pcVar2)(pIVar8,pFVar11,uVar9,1);
        pIVar8 = TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>::operator->
                           ((TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *)
                            (plVar1 + 0x27));
        pcVar2 = *(code **)((longlong)*pIVar8 + 0x50);
        pFVar7 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->(this);
        pFVar11 = pFVar7->ExternalBuffer;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
          pFVar11 = (pFVar7->Buffer).AllocatorInstance.Data;
        }
        (*pcVar2)(pIVar8,pFVar11,1);
        pcVar2 = *(code **)(*plVar1 + 0x118);
        pTVar10 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::ToSharedRef(this,&TStack_28);
        (*pcVar2)(plVar1,pTVar10);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (TStack_28.SharedReferenceCount.ReferenceController);
        pIVar8 = TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1>::operator->
                           ((TSharedPtr<UE::GPUTextureTransfer::ITextureTransfer,1> *)
                            (plVar1 + 0x27));
        pcVar2 = *(code **)((longlong)*pIVar8 + 0x58);
        pFVar7 = TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->(this);
        pFVar11 = pFVar7->ExternalBuffer;
        if (pFVar11 == (FScriptContainerElement *)0x0) {
          pFVar11 = (pFVar7->Buffer).AllocatorInstance.Data;
        }
        (*pcVar2)(pIVar8,pFVar11);
      }
    }
LAB_14d78ea30:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  return;
}

// Call @ 14d79a930

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMediaCapture::InitializeOutputResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  longlong *plVar2;
  atomic<int> *paVar3;
  UObject *pUVar4;
  FRHITexture *pFVar5;
  ForAnyElementType *pFVar6;
  FFrameManager *this;
  code *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  int iVar10;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar11;
  FRHIGPUBufferReadback *pFVar12;
  FRHIGPUTextureReadback *this_00;
  FName *pFVar13;
  FRHIGPUBufferReadback *pFVar14;
  FScriptContainerElement *pFVar15;
  FRHIGPUBufferReadback *pFVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  int iVar19;
  TReferenceControllerBase<1> *pTVar20;
  longlong *plVar21;
  TReferenceControllerBase<1> *pTStackX_18;
  FWeakObjectPtr FStackX_20;
  longlong *plStack_d8;
  FRHIGPUBufferReadback *pFStack_d0;
  UObject *pUStack_c8;
  UObject *pUStack_c0;
  FString FStack_b8;
  FString FStack_a8;
  TSharedPtr<UE::MediaCaptureData::FFrame,1> TStack_98;
  FName FStack_88;
  longlong lStack_80;
  FName FStack_78;
  undefined8 uStack_70;
  code *apcStack_68 [2];
  undefined **ppuStack_58;
  FWeakObjectPtr FStack_50;
  undefined8 uStack_40;
  
  TVar11 = FWeakObjectPtr::Pin(param_1);
  iVar19 = 0;
                    /* WARNING: Load size is inaccurate */
  pUVar4 = *TVar11.Object;
  *(undefined8 *)TVar11.Object = 0;
  if (pUStack_c8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUStack_c8);
    pUStack_c8 = (UObject *)0x0;
  }
  if (pUVar4 != (UObject *)0x0) {
LAB_14d78ebfc:
    pFVar14 = (FRHIGPUBufferReadback *)0x0;
    if (iVar19 < *(int *)&pUVar4[4].field_0x8) {
      if (pUVar4[0xd].field_0x19 == '\0') {
        pFVar12 = ::operator_new(0x120);
        if (pFVar12 == (FRHIGPUBufferReadback *)0x0) {
          plVar21 = (longlong *)&DAT_00000010;
          pFVar12 = pFVar14;
        }
        else {
          *(undefined4 *)&pFVar12->_padding_ = 1;
          *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = 1;
          pFVar12->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFTextureCaptureFrame_MediaCaptureData_UE___00_SharedPointerInternals__6B_
          ;
          MediaCaptureData::FCaptureFrame::FCaptureFrame
                    ((FCaptureFrame *)&pFVar12->_padding_,iVar19);
          pFVar12->_padding_ = (longlong)&___7FTextureCaptureFrame_MediaCaptureData_UE__6B_;
          plVar21 = &pFVar12->_padding_;
          pFVar12[3]._padding_ = 0;
          if ((plVar21 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          LOCK();
          *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar12);
        if (pUVar4[0xe].field_0xe == '\0') {
          ::FString::PrintfImpl(&FStack_b8,L"MediaCaptureTextureReadback_%d");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (FStack_b8.Data.ArrayNum != 0) {
            FVar18.Data = FStack_b8.Data.AllocatorInstance.Data;
          }
          this_00 = ::operator_new(0x58);
          if (this_00 != (FRHIGPUTextureReadback *)0x0) {
            pFVar13 = ::FName::FName(&FStack_88,(wchar_t *)FVar18.Data);
            pFVar14 = (FRHIGPUBufferReadback *)
                      FRHIGPUTextureReadback::FRHIGPUTextureReadback(this_00,*pFVar13);
          }
          if ((plVar21 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          plVar2 = plVar21 + 0x21;
          if (plVar2 == &lStack_80) {
            if (pFVar14 != (FRHIGPUBufferReadback *)0x0) {
              pFVar16 = pFVar14 + 1;
              lVar17 = 8;
              do {
                pFVar5 = ((TRefCountPtr<FRHITexture> *)pFVar16[-1].DestinationStagingBuffers)[7].
                         Reference;
                pFVar16 = (FRHIGPUBufferReadback *)
                          ((TRefCountPtr<FRHITexture> *)pFVar16[-1].DestinationStagingBuffers + 7);
                lVar17 = lVar17 + -1;
                if (pFVar5 != (FRHITexture *)0x0) {
                  FRHIResource::Release((FRHIResource *)pFVar5);
                }
              } while (lVar17 != 0);
              pFVar14->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
              pFVar16 = pFVar14;
              if ((FRHIResource *)pFVar14->_padding_ != (FRHIResource *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar14->_padding_);
              }
              goto LAB_14d78ee05;
            }
          }
          else {
            pFVar16 = (FRHIGPUBufferReadback *)*plVar2;
            *plVar2 = (longlong)pFVar14;
            if (pFVar16 != (FRHIGPUBufferReadback *)0x0) {
              pFVar14 = pFVar16 + 1;
              lVar17 = 8;
              do {
                pFVar5 = ((TRefCountPtr<FRHITexture> *)pFVar14[-1].DestinationStagingBuffers)[7].
                         Reference;
                pFVar14 = (FRHIGPUBufferReadback *)
                          ((TRefCountPtr<FRHITexture> *)pFVar14[-1].DestinationStagingBuffers + 7);
                lVar17 = lVar17 + -1;
                if (pFVar5 != (FRHITexture *)0x0) {
                  FRHIResource::Release((FRHIResource *)pFVar5);
                }
              } while (lVar17 != 0);
              pFVar16->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
              if ((FRHIResource *)pFVar16->_padding_ != (FRHIResource *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar16->_padding_);
              }
LAB_14d78ee05:
              ::operator_delete(pFVar16,0x58);
            }
          }
          if (FStack_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_b8.Data.AllocatorInstance.Data);
          }
        }
        if (pUVar4[0xd].field_0xd != '\0') {
          if ((plVar21 == (longlong *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined1 *)(plVar21 + 0x20) = 0;
        }
        pFVar6 = *(ForAnyElementType **)&pUVar4[4].field_0x10;
        if (pFVar12 != (FRHIGPUBufferReadback *)0x0) {
          LOCK();
          *(int *)&pFVar12->_padding_ = (int)pFVar12->_padding_ + 1;
          UNLOCK();
        }
        plStack_d8 = plVar21;
        pFStack_d0 = pFVar12;
        if ((plVar21 == (longlong *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar9 = (**(code **)(*plStack_d8 + 8))(plStack_d8);
        pFVar15 = pFVar6[4].Data;
        if (pFVar15 == pFVar6[5].Data) {
          pFVar15 = pFVar6[4].Data;
          pFVar6[5].Data = pFVar6[2].Data;
          if (pFVar15 == pFVar6[2].Data) {
            pFVar15 = FMemory::Malloc(0x10,8);
            *(undefined4 *)(pFVar15 + 0xc) = 0;
            *(undefined8 *)pFVar15 = 0;
          }
          else {
            pFVar6[4].Data = *(FScriptContainerElement **)pFVar15;
            *(undefined8 *)pFVar15 = 0;
          }
        }
        else {
          pFVar6[4].Data = *(FScriptContainerElement **)pFVar15;
          *(undefined8 *)pFVar15 = 0;
        }
        *(undefined4 *)(pFVar15 + 8) = uVar9;
        *(FScriptContainerElement **)pFVar6[3].Data = pFVar15;
        pFVar6[3].Data = pFVar15;
        LOCK();
        *(int *)&pFVar6[6].Data = *(int *)&pFVar6[6].Data + 1;
        UNLOCK();
        if (((pFVar6->Data <= (FScriptContainerElement *)&plStack_d8) &&
            ((FScriptContainerElement *)&plStack_d8 <
             pFVar6->Data + (longlong)*(int *)((longlong)&pFVar6[1].Data + 4) * 0x10)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = *(int *)&pFVar6[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        if (iVar10 == *piVar1) {
          iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar6,piVar1);
        }
        *(int *)&pFVar6[1].Data = iVar10 + 1;
        pFVar15 = pFVar6->Data;
        *(longlong **)(pFVar15 + (longlong)iVar10 * 0x10) = plStack_d8;
        *(FRHIGPUBufferReadback **)(pFVar15 + (longlong)iVar10 * 0x10 + 8) = pFStack_d0;
        pFStack_d0 = (FRHIGPUBufferReadback *)0x0;
        plStack_d8 = (longlong *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pFVar12);
        iVar19 = iVar19 + 1;
      }
      else {
        pTStackX_18 = ::operator_new(0x178);
        if (pTStackX_18 == (TReferenceControllerBase<1> *)0x0) {
          pTStackX_18 = (TReferenceControllerBase<1> *)0x0;
          pTVar20 = (TReferenceControllerBase<1> *)&DAT_00000010;
LAB_14d78f0d2:
          lVar17._0_4_ = pTVar20[0x10].SharedReferenceCount;
          lVar17._4_4_ = pTVar20[0x10].WeakReferenceCount;
          if (((lVar17 == 0) || (pTVar20[0x11]._padding_ == 0)) ||
             (*(int *)(pTVar20[0x11]._padding_ + 8) < 1)) {
            if (pTStackX_18 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTStackX_18->SharedReferenceCount =
                   (atomic<int>)((int)pTStackX_18->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(TReferenceControllerBase<1> **)&pTVar20[0x10].SharedReferenceCount = pTVar20;
            if (pTStackX_18 != (TReferenceControllerBase<1> *)pTVar20[0x11]._padding_) {
              if (pTStackX_18 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTStackX_18->WeakReferenceCount =
                     (atomic<int>)((int)pTStackX_18->WeakReferenceCount + 1);
                UNLOCK();
              }
              plVar21 = (longlong *)pTVar20[0x11]._padding_;
              if (plVar21 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar21 + 8))();
                }
              }
              pTVar20[0x11]._padding_ = (longlong)pTStackX_18;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStackX_18);
          }
          if (pTStackX_18 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d78f151;
        }
        else {
          pTStackX_18->SharedReferenceCount = (atomic<int>)0x1;
          pTStackX_18->WeakReferenceCount = (atomic<int>)0x1;
          pTStackX_18->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFBufferCaptureFrame_MediaCaptureData_UE___00_SharedPointerInternals__6B_
          ;
          MediaCaptureData::FCaptureFrame::FCaptureFrame((FCaptureFrame *)(pTStackX_18 + 1),iVar19);
          pTStackX_18[0x11].SharedReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x11].WeakReferenceCount = (atomic<int>)0x0;
          pTVar20 = pTStackX_18 + 1;
          pTStackX_18[0x12]._padding_ = 0;
          pTStackX_18[1]._padding_ = (longlong)&___7FBufferCaptureFrame_MediaCaptureData_UE__6B_;
          pTStackX_18[0x12].SharedReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x12].WeakReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x13]._padding_ = 0;
          pTStackX_18[0x13].SharedReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x13].WeakReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x14]._padding_ = 0;
          pTStackX_18[0x14].SharedReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x14].WeakReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x15]._padding_ = 0;
          pTStackX_18[0x15].SharedReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x15].WeakReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x16]._padding_ = 0;
          pTStackX_18[0x16].SharedReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x16].WeakReferenceCount = (atomic<int>)0x0;
          pTStackX_18[0x17]._padding_ = 1;
          if (pTVar20 != (TReferenceControllerBase<1> *)0x0) goto LAB_14d78f0d2;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L"");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_14d78f151:
          LOCK();
          pTStackX_18->SharedReferenceCount =
               (atomic<int>)((int)pTStackX_18->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStackX_18);
        if (*(int *)&pUVar4[8].field_0xc == 0) {
          if (1 < (byte)LogMediaIOCore._0_1_) {
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
          }
          if (pUVar4[4].field_0x1c != '\0') {
            LOCK();
            pUVar4[4].field_0x1c = 0;
            UNLOCK();
            bVar8 = IsInGameThread();
            if (bVar8) {
              TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::
              ProcessMulticastDelegate<UObject>
                        ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar4 + 1),
                         (void *)0x0);
              TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                        ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pUVar4[1].field_0x18);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStackX_18);
              iVar19 = iVar19 + 1;
              goto LAB_14d78ebfc;
            }
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar4);
            }
            FStackX_20.ObjectIndex = 0;
            FStackX_20.ObjectSerialNumber = 0;
            pUStack_c0 = pUVar4;
            if (GC::GIsIncrementalReachabilityPending != false) {
              GC::MarkAsReachable(pUVar4);
            }
            FWeakObjectPtr::operator=(&FStackX_20,(FObjectPtr)&pUStack_c0);
            uStack_40 = 0;
            ppuStack_58 = &TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::
                           _vftable_;
            FStack_50 = FStackX_20;
            apcStack_68[0] =
                 TFunctionRefCaller<`UMediaCapture::SetState'::__l10::<lambda_1>,void>::Call;
            AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)apcStack_68);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStackX_18);
          iVar19 = iVar19 + 1;
          goto LAB_14d78ebfc;
        }
        if (pUVar4[0xe].field_0xe == '\0') {
          ::FString::PrintfImpl(&FStack_a8,L"MediaCaptureBufferReadback_%d");
          FVar18.Data = (FScriptContainerElement *)L"";
          if (FStack_a8.Data.ArrayNum != 0) {
            FVar18.Data = FStack_a8.Data.AllocatorInstance.Data;
          }
          pFVar12 = ::operator_new(0x58);
          if (pFVar12 != (FRHIGPUBufferReadback *)0x0) {
            pFVar13 = ::FName::FName(&FStack_78,(wchar_t *)FVar18.Data);
            pFVar14 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar12,*pFVar13);
          }
          if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          paVar3 = &pTVar20[0x11].SharedReferenceCount;
          if (paVar3 == (atomic<int> *)&uStack_70) {
            if (pFVar14 != (FRHIGPUBufferReadback *)0x0) {
              pFVar12 = pFVar14 + 1;
              lVar17 = 8;
              do {
                pFVar5 = ((TRefCountPtr<FRHITexture> *)pFVar12[-1].DestinationStagingBuffers)[7].
                         Reference;
                pFVar12 = (FRHIGPUBufferReadback *)
                          ((TRefCountPtr<FRHITexture> *)pFVar12[-1].DestinationStagingBuffers + 7);
                lVar17 = lVar17 + -1;
                if (pFVar5 != (FRHITexture *)0x0) {
                  FRHIResource::Release((FRHIResource *)pFVar5);
                }
              } while (lVar17 != 0);
              pFVar14->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
              pFVar12 = pFVar14;
              if ((FRHIResource *)pFVar14->_padding_ != (FRHIResource *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar14->_padding_);
              }
              goto LAB_14d78f2b5;
            }
          }
          else {
            pFVar12 = *(FRHIGPUBufferReadback **)paVar3;
            *(FRHIGPUBufferReadback **)paVar3 = pFVar14;
            if (pFVar12 != (FRHIGPUBufferReadback *)0x0) {
              pFVar14 = pFVar12 + 1;
              lVar17 = 8;
              do {
                pFVar5 = ((TRefCountPtr<FRHITexture> *)pFVar14[-1].DestinationStagingBuffers)[7].
                         Reference;
                pFVar14 = (FRHIGPUBufferReadback *)
                          ((TRefCountPtr<FRHITexture> *)pFVar14[-1].DestinationStagingBuffers + 7);
                lVar17 = lVar17 + -1;
                if (pFVar5 != (FRHITexture *)0x0) {
                  FRHIResource::Release((FRHIResource *)pFVar5);
                }
              } while (lVar17 != 0);
              pFVar12->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
              if ((FRHIResource *)pFVar12->_padding_ != (FRHIResource *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar12->_padding_);
              }
LAB_14d78f2b5:
              ::operator_delete(pFVar12,0x58);
            }
          }
          if (FStack_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_a8.Data.AllocatorInstance.Data);
          }
        }
        if (pUVar4[0xd].field_0xd != '\0') {
          if ((pTVar20 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(undefined1 *)&pTVar20[0x10]._padding_ = 0;
        }
        this = *(FFrameManager **)&pUVar4[4].field_0x10;
        if (pTStackX_18 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStackX_18->SharedReferenceCount =
               (atomic<int>)((int)pTStackX_18->SharedReferenceCount + 1);
          UNLOCK();
        }
        TStack_98.Object = (FFrame *)pTVar20;
        TStack_98.SharedReferenceCount.ReferenceController = pTStackX_18;
        MediaCaptureData::FFrameManager::AddFrame(this,&TStack_98);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStackX_18);
        iVar19 = iVar19 + 1;
      }
      goto LAB_14d78ebfc;
    }
    LOCK();
    pUVar4[0xe].field_0xc = 0;
    UNLOCK();
    UEStrongObjectPtr_Private::ReleaseUObject(pUVar4);
  }
  return;
}

// Call @ 14d79a940

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIOCorePlayerBase::UnregisterSampleBuffers'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  undefined1 auStackX_8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (*(longlong *)param_1 != 0) {
    iVar3 = *(int *)((longlong)param_1 + 0x38);
    iVar12 = 0;
    iVar14 = 0;
    uVar7 = 1;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x20);
    iVar8 = 0;
    if (iVar3 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x30);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x30) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d78f53d;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar7 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = (int)lVar9 + -1 + iVar14;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14d78f53d:
    uVar11 = *(uint *)((longlong)param_1 + 0x38);
    uVar10 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar12);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)((longlong)param_1 + 0x18) - *(int *)((longlong)param_1 + 0x44));
    TStack_60.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)((longlong)param_1 + 0x38);
    if (uVar11 != uVar7) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x30);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x30) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14d78f650;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar10;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_14d78f650:
    while( true ) {
      if (*(int *)((longlong)param_1 + 0x18) - *(int *)((longlong)param_1 + 0x44) != (int)uStack_40)
      {
        auStackX_8[0] = 0;
        `TSparseArray<TSparseSetElement<void_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) && (TStack_60.Array == pTVar1)) break;
      uVar4 = *(undefined8 *)
               (*(longlong *)((longlong)param_1 + 0x10) + (longlong)TStack_60.CurrentBitIndex * 0x10
               );
      if ((*(longlong *)param_1 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (**(code **)(**(longlong **)param_1 + 0x28))(*(longlong **)param_1,uVar4);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// Call @ 14d79a950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIOCorePlayerBase::UnregisterTextures'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  undefined1 auStackX_8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  if (*(longlong *)param_1 != 0) {
    iVar3 = *(int *)((longlong)param_1 + 0x38);
    iVar12 = 0;
    iVar14 = 0;
    uVar6 = 1;
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x20);
    iVar7 = 0;
    if (iVar3 != 0) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x30);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x30) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar7 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14d78f7cd;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uVar6 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar6 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = iVar14 + -1 + (int)lVar8;
      if (iVar3 < iVar7) {
        iVar7 = iVar3;
      }
    }
LAB_14d78f7cd:
    uVar11 = *(uint *)((longlong)param_1 + 0x38);
    uVar10 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar6,iVar12);
    TStack_60.CurrentBitIndex = iVar7;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_60._28_4_ = iVar7;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,
                         *(int *)((longlong)param_1 + 0x18) - *(int *)((longlong)param_1 + 0x44));
    TStack_60.Array = pTVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = *(uint *)((longlong)param_1 + 0x38);
    if (uVar11 != uVar6) {
      pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x30);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x30) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar13 = pTVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) &
               *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar12;
        uVar10 = uVar10 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14d78f8e0;
        uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar11 = (int)lVar8 + -1 + uVar10;
      if ((int)uVar6 < (int)uVar11) {
        uVar11 = uVar6;
      }
    }
LAB_14d78f8e0:
    while( true ) {
      if (*(int *)((longlong)param_1 + 0x18) - *(int *)((longlong)param_1 + 0x44) != (int)uStack_40)
      {
        auStackX_8[0] = 0;
        `TSparseArray<TSparseSetElement<TRefCountPtr<FRHITexture>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) && (TStack_60.Array == pTVar1)) break;
      puVar9 = (undefined8 *)
               ((longlong)TStack_60.CurrentBitIndex * 0x10 + *(longlong *)((longlong)param_1 + 0x10)
               );
      if (5 < (byte)LogMediaIOCore._0_1_) {
        (**(code **)(*(longlong *)*puVar9 + 0x38))();
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      if ((*(longlong *)param_1 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(**(longlong **)param_1 + 0x38))(*(longlong **)param_1,*puVar9);
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
  }
  return;
}

// Call @ 14d79a960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l5::<lambda_1>,void>::Call
          (void *param_1)

{
  FMediaIOCorePlayerBase::CreateAndRegisterTextures(*(FMediaIOCorePlayerBase **)param_1);
  return;
}

// Call @ 14d79a970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MediaIOCore::FBlendDeinterlacer::Deinterlace'::__l5::<lambda_1>,void,int>::
Call(void *param_1,int *param_2)

{
  `UE::MediaIOCore::FBlendDeinterlacer::Deinterlace'::__l5::<lambda_1>::operator()(param_1,*param_2)
  ;
  return;
}

// Call @ 14d79a980

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIOCorePlayerBase::RegisterSampleBuffer'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined1 uStack_24;
  
  if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar6 = *(longlong *)((longlong)param_1 + 8);
  if ((*(longlong *)(lVar6 + 0xc0) == 0) && (*(longlong *)(lVar6 + 0xb0) == 0)) {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      return;
    }
  }
  else {
    if ((lVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar6 = (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x48))();
    if (lVar6 == 0) {
      if (1 < (byte)LogMediaIOCore._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        return;
      }
    }
    else {
      if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = (longlong *)(**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x48))();
      lVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
      iVar2 = *(int *)(lVar6 + 0x24);
      if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = (longlong *)(**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x48))();
      lVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
      uVar3 = *(undefined4 *)(lVar6 + 0x28);
      if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = (longlong *)(**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x48))();
      lVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
      cVar1 = *(char *)(lVar6 + 0x33);
      iVar8 = 0x10;
      if (cVar1 != '0') {
        iVar8 = 4;
      }
      if (5 < (byte)LogMediaIOCore._0_1_) {
        TSharedPtr<FMediaIOCoreTextureSampleBase,1>::operator->
                  ((TSharedPtr<FMediaIOCoreTextureSampleBase,1> *)((longlong)param_1 + 8));
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lStack_38 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0xc0);
      if (lStack_38 == 0) {
        lStack_38 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0xb0);
      }
      lVar6 = *(longlong *)param_1;
      uStack_24 = cVar1 != '\x02';
      iStack_30 = iVar2;
      uStack_2c = uVar3;
      iStack_28 = iVar8 * iVar2;
      if ((*(longlong *)(lVar6 + 0x138) == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = *(longlong **)(lVar6 + 0x138);
      (**(code **)(*plVar7 + 0x20))(plVar7,&lStack_38);
    }
  }
  return;
}

// Call @ 14d79a990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMediaCapture::PrepareAndDispatchCapture_GameThread'::__l6::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIGPUMask FVar1;
  TObjectPtr<UMediaCapture>_u_0 this;
  TIntPoint<int>_u_0 TVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  FRHITexture *this_00;
  void *pvVar5;
  bool bVar6;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar7;
  FCaptureFrame *pFVar8;
  longlong lVar9;
  undefined1 auStackY_918 [32];
  FRHITexture *pFStack_8e8;
  FRHICommandListImmediate *pFStack_8e0;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> TStack_8d8;
  UObject *pUStack_8c8;
  void *pvStack_8c0;
  FRDGEventName FStack_8b8;
  FCaptureFrameArgs FStack_8a0;
  FRDGBuilder *pFStack_868;
  TObjectPtr<UMediaCapture>_u_0 TStack_860;
  FRHITexture *pFStack_858;
  undefined8 uStack_850;
  TIntPoint<int>_u_0 TStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  FRDGBuilder FStack_828;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_918;
  FVar1.GPUMask = *(uint *)&param_2->field_0x29c;
  pFStack_8e0 = param_2;
  pvStack_8c0 = param_1;
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)param_2,(FRHIGPUMask)*(uint *)((longlong)param_1 + 0x30));
  TVar7 = FWeakObjectPtr::Pin(param_1);
  lVar9 = 0;
  this.DebugPtr = *(UMediaCapture **)TVar7.Object;
  *(undefined8 *)TVar7.Object = 0;
  if (pUStack_8c8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(pUStack_8c8);
    pUStack_8c8 = (UObject *)0x0;
  }
  if (this.DebugPtr == (UMediaCapture *)0x0) goto LAB_14d7903dd;
  MediaCaptureData::FFrameManager::PeekNextPending<UE::MediaCaptureData::FCaptureFrame>
            (((this.DebugPtr)->FrameManager).Ptr,&TStack_8d8);
  if ((TStack_8d8.Object != (FCaptureFrame *)0x0) && (*(longlong *)((longlong)param_1 + 0x18) != 0))
  {
    if ((TStack_8d8.Object == (FCaptureFrame *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar8 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->
                       ((TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *)
                        ((longlong)param_1 + 0x18));
    if (((TStack_8d8.Object)->FrameId == pFVar8->FrameId) &&
       (bVar6 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_887742707559037823>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCapture.cpp"
                           ,0x481,"NextPending->FrameId != CapturingFrame->FrameId"), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FStack_8b8.EventFormat = L"";
  FStack_8b8.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_8b8.FormattedEventName.Data.ArrayNum = 0;
  FStack_8b8.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&FStack_828,pFStack_8e0,&FStack_8b8,None,GMaxRHIShaderPlatform);
  if ((*(longlong *)((longlong)param_1 + 8) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x50))
            (*(longlong **)((longlong)param_1 + 8),&pFStack_8e8);
  pFStack_868 = &FStack_828;
  uStack_850 = 0;
  pFStack_858 = (FRHITexture *)0x0;
  uStack_840 = 0;
  uStack_838 = 0;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)this.DebugPtr);
  }
  this_00 = pFStack_8e8;
  FStack_8a0.GraphBuilder = &FStack_828;
  TVar2 = *(TIntPoint<int>_u_0 *)((longlong)param_1 + 0x28);
  pFStack_858 = pFStack_8e8;
  pFStack_8e8 = (FRHITexture *)0x0;
  FStack_8a0.MediaCapture.field0_0x0 =
       (TObjectPtr<UMediaCapture>_u_0)(TObjectPtr<UMediaCapture>_u_0)this.DebugPtr;
  TStack_860.DebugPtr = this.DebugPtr;
  TStack_848 = TVar2;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)this.DebugPtr);
  }
  FStack_8a0.ResourceToCapture.Reference = this_00;
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  pvVar5 = pvStack_8c0;
  FStack_8a0.SourceViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0
  ;
  FStack_8a0.RDGResourceToCapture = (FRDGTexture *)0x0;
  FStack_8a0.SourceViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0
  ;
  FStack_8a0.DesiredSize.field0_0x0 = TVar2;
  UMediaCapture::ProcessCapture_RenderThread
            (this.DebugPtr,
             (TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *)((longlong)pvStack_8c0 + 0x18),
             &FStack_8a0);
  if (5 < (byte)LogMediaIOCore._0_1_) {
    if (*(longlong *)((longlong)pvVar5 + 0x18) != 0) {
      TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->
                ((TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *)((longlong)pvVar5 + 0x18));
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
  }
  FRDGBuilder::Execute(&FStack_828);
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  if (pFStack_8e8 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)pFStack_8e8);
  }
  FRDGBuilder::~FRDGBuilder(&FStack_828);
  pTVar4 = CVarMediaIOEnableExperimentalScheduling.Ref;
  if (GRHIGlobals.SupportsMultithreading == false) {
LAB_14d790327:
    if (5 < (byte)LogMediaIOCore._0_1_) {
      if (((TStack_8d8.Object != (FCaptureFrame *)0x0) &&
          (TStack_8d8.Object == (FCaptureFrame *)0x0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    if (TStack_8d8.Object != (FCaptureFrame *)0x0) {
      UMediaCapture::ProcessReadyFrame_RenderThread
                (this.DebugPtr,pFStack_8e0,this.DebugPtr,&TStack_8d8);
    }
  }
  else {
    bVar6 = IsInParallelGameThread();
    if ((!bVar6) && (bVar6 = IsInGameThread(), !bVar6)) {
      lVar9 = 4;
    }
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar9) != 1) goto LAB_14d790327;
  }
  LOCK();
  (this.DebugPtr)->WaitingForRenderCommandExecutionCounter =
       (atomic<int>)((int)(this.DebugPtr)->WaitingForRenderCommandExecutionCounter + -1);
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_8d8.SharedReferenceCount.ReferenceController);
  UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this.DebugPtr);
LAB_14d7903dd:
  FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)pFStack_8e0,FVar1);
  return;
}

// Call @ 14d79a9a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIOCoreTextureSampleBase::SetColorConversionSettings'::__l7::<lambda_1>,void>
::Call(void *param_1)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14d79a9d0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(FMediaIOCoreTextureSampleBase **)param_1 != (FMediaIOCoreTextureSampleBase *)0x0) {
      FMediaIOCoreTextureSampleBase::CacheColorCoversionSettings_GameThread
                (*(FMediaIOCoreTextureSampleBase **)param_1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
  }
LAB_14d79a9d0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// Call @ 14d79aa00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMediaCapture::StopCapture_Callback'::__l8::<lambda_1>,void>::Call
          (void *param_1)

{
  bool bVar1;
  UMediaCapture *this;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar2;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_28;
  
  this = (UMediaCapture *)FWeakObjectPtr::Get(param_1);
  bVar1 = UObjectInitialized();
  if ((bVar1) && (this != (UMediaCapture *)0x0)) {
    pTVar2 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>
                       (&local_28,
                        (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                        ((longlong)param_1 + 0x10));
    UMediaCapture::StopCapture_Callback(this,*(bool *)((longlong)param_1 + 8),pTVar2);
  }
  return;
}

// Call @ 14d79aa60

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`UMediaCapture::SetState'::__l10::<lambda_1>,void>::
Call(void *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get(param_1);
  bVar1 = UObjectInitialized();
  if ((bVar1) && (pUVar2 != (UObject *)0x0)) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar2 + 1),(void *)0x0);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2[1].field_0x18);
    return;
  }
  return;
}

// Call @ 14d79aab0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMediaCapture::RestartCapture'::__l30::<lambda_1>,void,TSharedPtr<UE::MediaCaptureData::FFrame,1>_const_&>
::Call(void *param_1,TSharedPtr<UE::MediaCaptureData::FFrame,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FFrame *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FFrame *)0x0) {
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
  LOCK();
  pFVar2[8].field_0x2 = 0;
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Call @ 14d79ab30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIOCorePlayerBase::CreateAndRegisterTextures'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  FRHIResource *this;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong *plVar11;
  ELLMTag EVar12;
  uint uVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  EPixelFormat EVar14;
  ForAnyElementType *pFVar15;
  uint uVar16;
  undefined1 auStackY_328 [32];
  byte bStack_2d8;
  FRHIResource *pFStack_2d0;
  FLLMScope aFStack_2c8 [2];
  FRHIResource *pFStack_2c0;
  uint uStack_2b8;
  undefined4 uStack_2b4;
  FRHICommandListImmediate *pFStack_2b0;
  FMemScope FStack_2a8;
  undefined4 uStack_2a0;
  undefined1 auStack_29c [4];
  FString FStack_298;
  FRHIResource *pFStack_288;
  undefined8 uStack_280;
  uint uStack_278;
  undefined4 uStack_274;
  undefined1 uStack_270;
  uint uStack_26c;
  undefined8 uStack_268;
  FRHITextureDesc FStack_258;
  FScriptContainerElement *pFStack_208;
  int iStack_200;
  undefined4 uStack_1fc;
  longlong lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  FRHITextureDesc FStack_1d8;
  FScriptContainerElement *pFStack_188;
  undefined8 uStack_180;
  longlong lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  FRHITextureDesc FStack_158;
  FScriptContainerElement *pFStack_108;
  ERHIAccess EStack_100;
  undefined4 uStack_fc;
  longlong lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [48];
  longlong lStack_a8;
  longlong alStack_98 [3];
  longlong *plStack_80;
  FRHICommandListBase *pFStack_78;
  FRHITexture *pFStack_70;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pFStack_2b0 = param_2;
  if ((*(longlong **)param_1)[0x27] == 0) {
    if ((byte)LogMediaIOCore._0_1_ < 2) {
      return;
    }
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    return;
  }
  cVar7 = (**(code **)(**(longlong **)param_1 + 0x128))();
  uVar9 = (**(code **)(**(longlong **)param_1 + 0x108))();
  lVar3 = *(longlong *)param_1;
  if (cVar7 != '\0') {
    uVar9 = 1;
  }
  if ((uint)(*(int *)(lVar3 + 0x1a0) - *(int *)(lVar3 + 0x1cc)) < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidSetNum((longlong)(int)uVar9);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)(lVar3 + 0x198),uVar9);
    if (uVar9 < 4) {
      iVar10 = 1;
    }
    else {
      uVar1 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      uStack_2a0 = (undefined4)lVar5;
      iVar10 = 1 << ((byte)lVar5 & 0x1f);
    }
    if ((*(int *)(lVar3 + 0x1e0) == 0) || (*(int *)(lVar3 + 0x1e0) < iVar10)) {
      *(int *)(lVar3 + 0x1e0) = iVar10;
      TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                *)(lVar3 + 0x198));
      lVar3 = *(longlong *)param_1;
      goto LAB_14d790521;
    }
  }
  lVar3 = *(longlong *)param_1;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar9);
  }
LAB_14d790521:
  if (*(int *)(lVar3 + 500) < (int)uVar9) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,(ForAnyElementType *)(lVar3 + 0x1e8),*(int *)(lVar3 + 0x1f0),
               (int *)(lVar3 + 500));
  }
  bStack_2d8 = 0;
  if (uVar9 != 0) {
    do {
      pFStack_2d0 = (FRHIResource *)0x0;
      ::FString::PrintfImpl(&FStack_298,L"FMediaIOCorePlayerTexture %d");
      plVar11 = *(longlong **)param_1;
      EVar14 = PF_Unknown;
      uVar13 = *(uint *)(plVar11 + 10);
      uVar2 = *(undefined4 *)((longlong)plVar11 + 0x54);
      cVar7 = (**(code **)(*plVar11 + 0x110))();
      if (cVar7 == '\0') {
        uVar13 = uVar13 >> 1;
        EVar14 = PF_B8G8R8A8;
        uVar16 = uVar13 * 4;
      }
      else if (cVar7 == '\x01') {
        EVar14 = PF_A2B10G10R10;
        uVar16 = uVar13 / 6;
        uVar13 = uVar16 * 4;
        uVar16 = uVar16 << 4;
      }
      else {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\Player\\MediaIOCorePlayerBase.cpp"
                           ,0x308,L"Format not supported");
        uVar16 = uVar13;
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar10 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
      pFStack_188 = (FScriptContainerElement *)L"";
      if (FStack_298.Data.ArrayNum != 0) {
        pFStack_188 = FStack_298.Data.AllocatorInstance.Data;
      }
      FStack_258.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
      FStack_1d8.ExtData = 0;
      FStack_1d8.Dimension = Texture2D;
      FStack_1d8.AliasableFormats.AllocatorInstance.SecondaryData =
           (ForElementType<EPixelFormat>)0x0;
      FStack_1d8.AliasableFormats.ArrayNum = 0;
      lStack_178 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      FStack_258.Flags = None;
      FStack_258.ClearValue.Value._4_8_ = 0;
      FStack_258.ClearValue.Value.Color[3] = 0.0;
      FStack_258.ExtData = 0;
      FStack_258.AliasableFormats.AllocatorInstance.SecondaryData =
           (ForElementType<EPixelFormat>)0x0;
      FStack_258.AliasableFormats.ArrayNum = 0;
      FStack_1d8.Extent.field0_0x0._s_0.Y = uVar2;
      FStack_1d8.Extent.field0_0x0._s_0.X = uVar13;
      FStack_1d8.ClearValue.Value.Color[3] = FClearValueBinding::White.Value.Color[3];
      FStack_1d8.Flags = External|ShaderResource|RenderTargetable;
      if (iVar10 != 4) {
        FStack_1d8.Flags = Shared|ShaderResource|RenderTargetable;
      }
      FStack_1d8.Depth = 1;
      FStack_1d8.ArraySize = 1;
      FStack_1d8.NumMips = '\x01';
      FStack_1d8.NumSamples = '\x01';
      FStack_1d8.UAVFormat = PF_Unknown;
      FStack_1d8.FastVRAMPercentage = 0xff;
      FStack_1d8.AliasableFormats.ArrayMax = 1;
      uStack_180 = 0x70;
      FStack_1d8.ClearValue._0_8_ = FClearValueBinding::White._0_8_;
      FStack_1d8.ClearValue.Value._4_8_ = FClearValueBinding::White.Value._4_8_;
      FStack_258.ClearValue._0_8_ = 1;
      FStack_258.Extent.field0_0x0._s_0.X = 1;
      FStack_258.Extent.field0_0x0._s_0.Y = 1;
      FStack_258.Depth = 1;
      FStack_258.ArraySize = 1;
      FStack_258.NumMips = '\x01';
      FStack_258.NumSamples = '\x01';
      FStack_258.Dimension = Texture2D;
      FStack_258.Format = PF_Unknown;
      FStack_258.UAVFormat = PF_Unknown;
      FStack_258.FastVRAMPercentage = 0xff;
      FStack_258.AliasableFormats.ArrayMax = 1;
      uStack_2b8 = uVar13;
      uStack_2b4 = uVar2;
      FStack_1d8.GPUMask.GPUMask = FStack_258.GPUMask.GPUMask;
      FStack_1d8.Format = EVar14;
      FRHITextureDesc::operator=(&FStack_258,&FStack_1d8);
      pFStack_208 = pFStack_188;
      iStack_200 = (int)uStack_180;
      uStack_1fc = uStack_180._4_4_;
      lStack_1f8 = lStack_178;
      uStack_1f0 = uStack_170;
      uStack_1e8 = uStack_168;
      if (FStack_1d8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)FStack_1d8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      EVar12 = Textures;
      if ((FStack_258.Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
        EVar12 = RenderTargets;
      }
      FLLMScope::FLLMScope(aFStack_2c8,EVar12,false,None,Default,true);
      EVar12 = Textures;
      if ((FStack_258.Flags & (DepthStencilTargetable|RenderTargetable)) != None) {
        EVar12 = RenderTargets;
      }
      FMemScope::FMemScope(&FStack_2a8,EVar12,true);
      if (iStack_200 == 0) {
        FStack_158.ClearValue._0_8_ = 1;
        FStack_158.Extent.field0_0x0._s_0.X = 1;
        FStack_158.GPUMask.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
        FStack_158.Extent.field0_0x0._s_0.Y = 1;
        FStack_158.AliasableFormats.ArrayMax = 1;
        FStack_158.Flags = None;
        FStack_158.ClearValue.Value._4_8_ = 0;
        FStack_158.ClearValue.Value.Color[3] = 0.0;
        FStack_158.ExtData = 0;
        FStack_158.Depth = 1;
        FStack_158.ArraySize = 1;
        FStack_158.NumMips = '\x01';
        FStack_158.NumSamples = '\x01';
        FStack_158.Dimension = Texture2D;
        FStack_158.Format = PF_Unknown;
        FStack_158.UAVFormat = PF_Unknown;
        FStack_158.FastVRAMPercentage = 0xff;
        FStack_158.AliasableFormats.AllocatorInstance.SecondaryData =
             (ForElementType<EPixelFormat>)0x0;
        FStack_158.AliasableFormats.ArrayNum = 0;
        FRHITextureDesc::operator=(&FStack_158,&FStack_258);
        pFStack_108 = pFStack_208;
        EStack_100 = iStack_200;
        uStack_fc = uStack_1fc;
        uStack_f0 = uStack_1f0;
        lStack_f8 = lStack_1f8;
        uStack_e8 = uStack_1e8;
        EStack_100 = RHIGetDefaultResourceState(FStack_258.Flags,lStack_1f8 != 0);
        (**(code **)(GDynamicRHI->_padding_ + 0x198))
                  (GDynamicRHI,auStack_d8,pFStack_2b0,&FStack_158);
        if (FStack_158.AliasableFormats.AllocatorInstance.SecondaryData !=
            (ForElementType<EPixelFormat>)0x0) {
          FMemory::Free((void *)FStack_158.AliasableFormats.AllocatorInstance.SecondaryData);
        }
        FMemScope::~FMemScope(&FStack_2a8);
        FLLMScope::~FLLMScope(aFStack_2c8);
      }
      else {
        (**(code **)(GDynamicRHI->_padding_ + 0x198))
                  (GDynamicRHI,auStack_d8,pFStack_2b0,&FStack_258);
        FMemScope::~FMemScope(&FStack_2a8);
        FLLMScope::~FLLMScope(aFStack_2c8);
      }
      FRHITextureInitializer::Finalize((FRHITextureInitializer *)auStack_d8);
      if ((pFStack_78 != (FRHICommandListBase *)0x0) && (pFStack_70 != (FRHITexture *)0x0)) {
        FRHITextureInitializer::RemovePendingTextureUpload((FRHITextureInitializer *)auStack_d8);
      }
      if (lStack_a8 != 0) {
        plVar11 = alStack_98;
        if (plStack_80 != (longlong *)0x0) {
          plVar11 = plStack_80;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      if (auStack_d8._0_8_ != 0) {
        plVar11 = (longlong *)(auStack_d8 + 0x10);
        if ((longlong *)auStack_d8._40_8_ != (longlong *)0x0) {
          plVar11 = (longlong *)auStack_d8._40_8_;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      this = pFStack_2d0;
      pFStack_2d0 = pFStack_2c0;
      pFStack_2c0 = (FRHIResource *)0x0;
      if ((this != (FRHIResource *)0x0) &&
         (FRHIResource::Release(this), pFStack_2c0 != (FRHIResource *)0x0)) {
        FRHIResource::Release(pFStack_2c0);
      }
      if (5 < (byte)LogMediaIOCore._0_1_) {
        (**(code **)(pFStack_2d0->_padding_ + 0x38))(pFStack_2d0);
        Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      }
      uStack_270 = cVar7 != '\0';
      lVar3 = *(longlong *)param_1;
      uStack_268 = 0;
      uStack_280 = 0;
      pFStack_288 = pFStack_2d0;
      uStack_278 = uVar13;
      uStack_274 = uVar2;
      uStack_26c = uVar16;
      if ((*(longlong *)(lVar3 + 0x138) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar11 = *(longlong **)(lVar3 + 0x138);
      (**(code **)(*plVar11 + 0x30))(plVar11,&pFStack_288);
      TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
      ::Emplace<TRefCountPtr<FRHITexture>_const_&>
                ((TSet<TRefCountPtr<FRHITexture>,DefaultKeyFuncs<TRefCountPtr<FRHITexture>,0>,FDefaultSetAllocator>
                  *)(*(longlong *)param_1 + 0x198),(TRefCountPtr<FRHITexture> *)auStack_29c,
                 (bool *)&pFStack_2d0);
      lpCriticalSection = (LPCRITICAL_SECTION)(*(longlong *)param_1 + 0x1f8);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        ReportNotNullPtr();
      }
      EnterCriticalSection(lpCriticalSection);
      lVar3 = *(longlong *)param_1;
      pFVar15 = (ForAnyElementType *)(lVar3 + 0x1e8);
      if (((pFVar15->Data <= (FScriptContainerElement *)&pFStack_2d0) &&
          ((FScriptContainerElement *)&pFStack_2d0 <
           pFVar15->Data + (longlong)*(int *)(lVar3 + 500) * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = *(int *)(lVar3 + 0x1f0);
      if (iVar10 == *(int *)(lVar3 + 500)) {
        iVar10 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,pFVar15,(int *)(lVar3 + 500));
      }
      *(int *)(lVar3 + 0x1f0) = iVar10 + 1;
      pFVar4 = pFVar15->Data;
      *(undefined8 *)(pFVar4 + (longlong)iVar10 * 8) = 0;
      *(FRHIResource **)(pFVar4 + (longlong)iVar10 * 8) = pFStack_2d0;
      if (pFStack_2d0 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFStack_2d0);
      }
      LeaveCriticalSection(lpCriticalSection);
      if (FStack_258.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)FStack_258.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      if (FStack_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_298.Data.AllocatorInstance.Data);
      }
      if (pFStack_2d0 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFStack_2d0);
      }
      bStack_2d8 = bStack_2d8 + 1;
    } while (bStack_2d8 < uVar9);
  }
  return;
}

// Call @ 14d79ab40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_2>,void>::Call(void *param_1)

{
  MediaIOTests::TestBlendDeinterlace(*(FAutomationTestBase **)param_1);
  return;
}

// Call @ 14d79ab50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIOCorePlayerBase::PreGPUTransfer'::__l9::<lambda_2>,void,TRefCountPtr<FRHITexture>_>
::Call(void *param_1,TRefCountPtr<FRHITexture> *param_2)

{
  FRHITexture *local_res10 [3];
  
  local_res10[0] = param_2->Reference;
  param_2->Reference = (FRHITexture *)0x0;
  `FMediaIOCorePlayerBase::PreGPUTransfer'::__l9::<lambda_2>::operator()
            (param_1,(FRHITexture *)local_res10);
  return;
}

// Call @ 14d79ab80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMediaCapture::StopCapture_Callback'::__l25::<lambda_2>,void,TSharedPtr<UE::MediaCaptureData::FFrame,1>_const_&>
::Call(void *param_1,TSharedPtr<UE::MediaCaptureData::FFrame,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FFrame *pFVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  pFVar2 = param_2->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar2 == (FFrame *)0x0) {
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
  LOCK();
  pFVar2[8].field_0x2 = 0;
  UNLOCK();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Call @ 14d79ac00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::MediaCaptureData::FSyncPointWatcher::ProcessPendingCapture'::__l31::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_18;
  
  local_18.Object = *(FCaptureFrame **)((longlong)param_1 + 8);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x10);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  MediaCaptureData::FMediaCaptureHelper::OnReadbackComplete(*(UMediaCapture **)param_1,&local_18);
  return;
}

// Call @ 14d79ac40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMediaCapture::ProcessCapture_RenderThread'::__l182::<lambda_2>,void>::Call
          (void *param_1)

{
  UMediaCapture *this;
  bool bVar1;
  TStrongObjectPtr<UObject,UEStrongObjectPtr_Private::FInternalReferenceCollectorReferencerNameProvider>
  TVar2;
  undefined8 local_res8;
  
  TVar2 = FWeakObjectPtr::Pin(param_1);
  this = *(UMediaCapture **)TVar2.Object;
  *(undefined8 *)TVar2.Object = 0;
  if (local_res8 != (UObject *)0x0) {
    UEStrongObjectPtr_Private::ReleaseUObject(local_res8);
  }
  bVar1 = UObjectInitialized();
  if (this != (UMediaCapture *)0x0) {
    if (bVar1) {
      UMediaCapture::RestartCapture(this);
    }
    UEStrongObjectPtr_Private::ReleaseUObject((UObject *)this);
    return;
  }
  return;
}

// Call @ 14d79aca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_3>,void>::Call(void *param_1)

{
  MediaIOTests::TestDiscardDeinterlace(*(FAutomationTestBase **)param_1);
  return;
}

// Call @ 14d79acb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FMediaIODeinterlacerTests::Define'::__l2::<lambda_4>,void>::Call(void *param_1)

{
  MediaIOTests::TestDiscardDeinterlaceBottomFieldOrder(*(FAutomationTestBase **)param_1);
  return;
}

