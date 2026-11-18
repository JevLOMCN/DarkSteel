// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 8

// AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame> @ 14d780ad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::MediaCaptureData::FMediaCaptureHelper::
AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>
          (FRDGBuilder *param_1,UMediaCapture *param_2,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_3,FRDGViewableResource *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRDGEventName *pFVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  undefined8 *local_78;
  FString local_70;
  <lambda_1> local_60;
  FRDGEventName local_48;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'
                ::__l2::__CpuProfilerEventSpecId34,"MediaCaptureSyncPoint",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.h"
               ,0x22);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'
               ::__l2::__CpuProfilerEventSpecId34);
  }
  if ((param_3->Object == (FCaptureFrame *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::PrintfImpl(&local_70,L"MediaCaptureSyncPoint_%d");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    FVar8.Data = local_70.Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar8.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.h"
               ,0x23);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (param_2->bSyncHandlersInitialized == (atomic<bool>)0x0) {
    UMediaCapture::InitializeSyncHandlers_RenderThread(param_2);
  }
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    puVar6[2] = 0;
    *puVar6 = &
              ___7__TObject_VFMediaCaptureBufferSyncPassParameters_MediaCaptureData_UE___FRDGAllocator__6B_
    ;
    *(undefined4 *)(puVar6 + 3) = 0x80;
  }
  local_78 = puVar6;
  if ((((undefined8 **)param_1->_padding_ <= &local_78) &&
      (&local_78 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar5 + 1;
  local_70.Data.ArrayNum = 0x80;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar5 * 8) = local_78;
  puVar6[2] = param_4;
  puVar6[3] = CONCAT44(local_70.Data.ArrayMax,0x80);
  local_60.CapturingFrame.Object = param_3->Object;
  local_60.CapturingFrame.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_60.CapturingFrame.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_60.CapturingFrame.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_60.CapturingFrame.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_4;
  local_60.MediaCapture = param_2;
  pFVar7 = FRDGEventName::FRDGEventName(&local_48,1,L"MediaCaptureCopySyncPass");
  FRDGBuilder::
  AddPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>_::__l2::<lambda_1>_>
            (param_1,pFVar7,(FMediaCaptureBufferSyncPassParameters *)(puVar6 + 2),Readback,&local_60
            );
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.CapturingFrame.SharedReferenceCount.ReferenceController);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame> @ 14d780de0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::MediaCaptureData::FMediaCaptureHelper::
AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>
          (FRDGBuilder *param_1,UMediaCapture *param_2,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_3,FRDGViewableResource *param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  FRDGEventName *pFVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  undefined8 *local_88;
  FString local_80;
  <lambda_1> local_70;
  FRDGTextureAccess local_58;
  FRDGEventName local_40;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'
                ::__l2::__CpuProfilerEventSpecId34,"MediaCaptureSyncPoint",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.h"
               ,0x22);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'
               ::__l2::__CpuProfilerEventSpecId34);
  }
  if ((param_3->Object == (FCaptureFrame *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ::FString::PrintfImpl(&local_80,L"MediaCaptureSyncPoint_%d");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_80.Data.ArrayNum != 0) {
    FVar8.Data = local_80.Data.AllocatorInstance.Data;
  }
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)FVar8.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.h"
               ,0x23);
  }
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (param_2->bSyncHandlersInitialized == (atomic<bool>)0x0) {
    UMediaCapture::InitializeSyncHandlers_RenderThread(param_2);
  }
  puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    *puVar6 = &
              ___7__TObject_VFMediaCaptureTextureSyncPassParameters_MediaCaptureData_UE___FRDGAllocator__6B_
    ;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
  }
  local_88 = puVar6;
  if ((((undefined8 **)param_1->_padding_ <= &local_88) &&
      (&local_88 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar5 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar5 * 8) = local_88;
  FRDGTextureAccess::FRDGTextureAccess(&local_58,(FRDGTexture *)param_4,CopySrc);
  puVar6[2] = local_58.Texture;
  *(FRDGTextureSubresourceRange *)(puVar6 + 3) = local_58.SubresourceRange;
  puVar6[4] = local_58._16_8_;
  local_70.CapturingFrame.Object = param_3->Object;
  local_70.CapturingFrame.SharedReferenceCount.ReferenceController =
       (param_3->SharedReferenceCount).ReferenceController;
  if (local_70.CapturingFrame.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.CapturingFrame.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_70.CapturingFrame.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_70.MediaCapture = param_2;
  pFVar7 = FRDGEventName::FRDGEventName(&local_40,1,L"MediaCaptureCopySyncPass");
  FRDGBuilder::
  AddPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>_::__l2::<lambda_1>_>
            (param_1,pFVar7,(FMediaCaptureTextureSyncPassParameters *)(puVar6 + 2),Readback,
             &local_70);
  if (local_40.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.FormattedEventName.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.CapturingFrame.SharedReferenceCount.ReferenceController);
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// operator() @ 14d78e050

void __thiscall
`UE::MediaCaptureData::FMediaCaptureHelper::
AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_18;
  
  local_18.Object = *(FCaptureFrame **)((longlong)this + 8);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::MediaCaptureData::FMediaCaptureHelper::ExecuteSyncPointPass
            (param_1,*(UMediaCapture **)this,&local_18);
  return;
}

// operator() @ 14d78e090

void __thiscall
`UE::MediaCaptureData::FMediaCaptureHelper::
AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_18;
  
  local_18.Object = *(FCaptureFrame **)((longlong)this + 8);
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::MediaCaptureData::FMediaCaptureHelper::ExecuteSyncPointPass
            (param_1,*(UMediaCapture **)this,&local_18);
  return;
}

// AreInputsValid @ 14d797420

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

bool __cdecl UE::MediaCaptureData::FMediaCaptureHelper::AreInputsValid(FCaptureFrameArgs *param_1)

{
  EMediaCaptureResizeMethod EVar1;
  EMediaCaptureCroppingType EVar2;
  UMediaCapture *pUVar3;
  EPixelFormat EVar4;
  char cVar5;
  TSet<EPixelFormat,DefaultKeyFuncs<EPixelFormat,0>,FDefaultSetAllocator> *pTVar6;
  longlong lVar7;
  EPixelFormat EVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  TIntPoint<int>_u_0 TVar11;
  int iVar12;
  byte bVar13;
  
  EVar8 = ((param_1->MediaCapture).field0_0x0.DebugPtr)->DesiredPixelFormat;
  if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
    lVar7 = (**(code **)(((param_1->ResourceToCapture).Reference)->_padding_ + 0x20))();
    EVar4 = *(EPixelFormat *)(lVar7 + 0x33);
  }
  else {
    EVar4 = (param_1->RDGResourceToCapture->Desc).field_0x33;
  }
  if (EVar8 == EVar4) {
LAB_14d797613:
    pUVar3 = (param_1->MediaCapture).field0_0x0.DebugPtr;
    EVar1 = (pUVar3->DesiredCaptureOptions).ResizeMethod;
    if (EVar1 == ResizeInCapturePass) {
      if (pUVar3->ConversionOperation == CUSTOM) {
        return true;
      }
      if (1 < (byte)LogMediaIOCore._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        return false;
      }
    }
    else {
      if (EVar1 == ResizeInRenderPass) {
        return true;
      }
      EVar2 = (pUVar3->DesiredCaptureOptions).Crop;
      if (EVar2 == None) {
        iVar9 = *(int *)((longlong)&(param_1->SourceViewRect).field0_0x0 + 0xc) -
                *(int *)((longlong)&(param_1->SourceViewRect).field0_0x0 + 4);
        iVar12 = *(int *)((longlong)&(param_1->SourceViewRect).field0_0x0 + 8) -
                 *(int *)&(param_1->SourceViewRect).field0_0x0;
        if (iVar9 * iVar12 == 0) {
          iVar9 = (param_1->DesiredSize).field0_0x0._s_0.X;
          iVar12 = FCaptureFrameArgs::GetSizeX(param_1);
          if ((iVar9 == iVar12) &&
             (iVar9 = FCaptureFrameArgs::GetSizeY(param_1),
             (param_1->DesiredSize).field0_0x0._s_0.Y == iVar9)) {
            return true;
          }
        }
        else if (((param_1->DesiredSize).field0_0x0._s_0.X == iVar12) &&
                ((param_1->DesiredSize).field0_0x0._s_0.Y == iVar9)) {
          (pUVar3->DesiredCaptureOptions).Crop = Custom;
          (((param_1->MediaCapture).field0_0x0.DebugPtr)->DesiredCaptureOptions).CustomCapturePoint.
          field0_0x0 = (param_1->SourceViewRect).field0_0x0._s_0.Min.field0_0x0;
          return true;
        }
      }
      else {
        iVar9 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._4_4_;
        TVar11 = UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
        if (EVar2 == Custom) {
          TVar11 = (TIntPoint<int>_u_0)
                   *(TIntPoint<int>_u_0 *)
                    &(pUVar3->DesiredCaptureOptions).CustomCapturePoint.field0_0x0._s_0;
          iVar9 = TVar11._s_0.Y;
        }
        iVar12 = FCaptureFrameArgs::GetSizeX(param_1);
        if (((param_1->DesiredSize).field0_0x0._s_0.X + TVar11._s_0.X <= iVar12) &&
           (iVar12 = FCaptureFrameArgs::GetSizeY(param_1),
           (param_1->DesiredSize).field0_0x0._s_0.Y + iVar9 <= iVar12)) {
          return true;
        }
      }
      cVar5 = (**(code **)(((param_1->MediaCapture).field0_0x0.DebugPtr)->_padding_ + 0x368))();
      if (((cVar5 == '\0') ||
          (pUVar3 = (param_1->MediaCapture).field0_0x0.DebugPtr,
          pUVar3->bUseRequestedTargetSize == false)) ||
         ((pUVar3->DesiredCaptureOptions).bAutoRestartOnSourceSizeChange == false)) {
        if (1 < (byte)LogMediaIOCore._0_1_) {
          FCaptureFrameArgs::GetSizeY(param_1);
          FCaptureFrameArgs::GetSizeX(param_1);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
        }
      }
      else {
        LOCK();
        pUVar3->bIsAutoRestartRequired = (atomic<bool>)0x1;
        UNLOCK();
        if (4 < (byte)LogMediaIOCore._0_1_) {
          FCaptureFrameArgs::GetSizeY(param_1);
          FCaptureFrameArgs::GetSizeX(param_1);
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
          return false;
        }
      }
    }
  }
  else {
    pTVar6 = UMediaCapture::GetSupportedRgbaSwizzleFormats();
    if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
      lVar7 = (**(code **)(((param_1->ResourceToCapture).Reference)->_padding_ + 0x20))();
      bVar13 = *(byte *)(lVar7 + 0x33);
    }
    else {
      bVar13 = (param_1->RDGResourceToCapture->Desc).field_0x33;
    }
    if (*(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34) {
      FVar10 = (pTVar6->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&pTVar6->Hash;
      }
      iVar9 = *(int *)((longlong)FVar10 +
                      ((ulonglong)(pTVar6->HashSize - 1) & (ulonglong)bVar13) * 4);
      if (iVar9 != -1) {
        do {
          if (*(byte *)(*(longlong *)&pTVar6->Elements + (longlong)iVar9 * 0xc) == bVar13) {
            if ((((param_1->MediaCapture).field0_0x0.DebugPtr)->DesiredCaptureOptions).
                bConvertToDesiredPixelFormat != false) goto LAB_14d797613;
            break;
          }
          iVar9 = *(int *)(*(longlong *)&pTVar6->Elements + 4 + (longlong)iVar9 * 0xc);
        } while (iVar9 != -1);
      }
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
        lVar7 = (**(code **)(((param_1->ResourceToCapture).Reference)->_padding_ + 0x20))();
        EVar8 = *(EPixelFormat *)(lVar7 + 0x33);
      }
      else {
        EVar8 = (param_1->RDGResourceToCapture->Desc).field_0x33;
      }
      GetPixelFormatString(EVar8);
      GetPixelFormatString(((param_1->MediaCapture).field0_0x0.DebugPtr)->DesiredPixelFormat);
      pTVar6 = UMediaCapture::GetSupportedRgbaSwizzleFormats();
      if (param_1->RDGResourceToCapture == (FRDGTexture *)0x0) {
        lVar7 = (**(code **)(((param_1->ResourceToCapture).Reference)->_padding_ + 0x20))();
        bVar13 = *(byte *)(lVar7 + 0x33);
      }
      else {
        bVar13 = (param_1->RDGResourceToCapture->Desc).field_0x33;
      }
      if (*(int *)&(pTVar6->Elements).field_0x8 != *(int *)&(pTVar6->Elements).field_0x34) {
        FVar10 = (pTVar6->Hash).SecondaryData;
        if (FVar10 == (ForElementType<FSetElementId>)0x0) {
          FVar10 = (ForElementType<FSetElementId>)&pTVar6->Hash;
        }
        iVar9 = *(int *)((longlong)FVar10 +
                        ((ulonglong)(pTVar6->HashSize - 1) & (ulonglong)bVar13) * 4);
        if (iVar9 != -1) {
          do {
            if (*(byte *)(*(longlong *)&pTVar6->Elements + (longlong)iVar9 * 0xc) == bVar13) break;
            iVar9 = *(int *)(*(longlong *)&pTVar6->Elements + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
      return false;
    }
  }
  return false;
}

// CaptureFrame @ 14d79af70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */

bool __cdecl
UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame
          (FCaptureFrameArgs *param_1,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2)

{
  longlong *plVar1;
  atomic<int> *paVar2;
  atomic<bool> aVar3;
  FRDGBuilder *pFVar4;
  UMediaCapture *pUVar5;
  FFrameManager *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  atomic<unsigned_int> aVar19;
  FRDGScope *pFVar20;
  FCaptureFrame *pFVar21;
  FName *pFVar22;
  FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_FrameCapture> FVar23;
  TTuple<FName,TRefCountPtr<IPooledRenderTarget>_> *pTVar24;
  undefined8 *puVar25;
  TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_> *pTVar26;
  FRHIBreadcrumbAllocator *pFVar27;
  FRHIBreadcrumbNode *pFVar28;
  ForAnyElementType FVar29;
  FName FVar30;
  FColor_u_0 local_res18 [2];
  int local_res20 [2];
  TRefCountPtr<IPooledRenderTarget> local_1f8;
  FRDGTexture *local_1f0;
  TRefCountPtr<FRDGPooledBuffer> local_1e8;
  FName local_1e0;
  FName local_1d8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_1c8;
  char local_1b8;
  FRHIResource *local_1b0;
  FRHIComputeCommandList *local_1a8;
  FRDGTexture *local_1a0;
  int *local_198;
  FString local_190;
  TRDGEventScopeGuard<FRDGScope_RHI> local_180;
  atomic<bool> local_170;
  TRDGEventScopeGuard<FRDGScope_RHI> local_168;
  undefined1 local_158;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_150;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_140;
  char *local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  wchar_t *pwStack_118;
  FName local_110;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_> local_108;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_> local_f8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_> local_e8;
  FRHIBreadcrumbScope local_d8;
  undefined1 local_c8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  FMetadataSerializer local_a0;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  
  bVar13 = false;
  local_1b8 = '\0';
  cVar15 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
  if ((cVar15 != '\0') && ((cVar15 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_b0 = 0x54d902c0;
      uStack_ac = 1;
      ::Desc._padding_._0_4_ = 0x54d902c0;
      ::Desc._padding_._4_4_ = uStack_b4;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_MediaCapture_Ca;
      ::Desc._padding_ = (longlong)u_MediaCapture_Ca;
      ::Desc._padding_._0_4_ = 0x7f;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame'::__l7::Desc::operator()<>'
             ::__l3::<lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar4 = param_1->GraphBuilder;
    local_108._Myfirst._Val = &::Desc;
    local_1c8.State = (FRDGScopeState *)pFVar4;
    pFVar20 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&pFVar4->_padding_,(FRDGScope **)pFVar4);
    ((FState *)&pFVar4->_padding_)->Current = pFVar20;
    local_1c8.Scope = pFVar20;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<26>_const_*,std::tuple<>_>_>
              (&(pFVar20->Impl).Impl,(FRDGScopeState *)pFVar4,&local_108);
    if (*(bool *)((longlong)&pFVar4->_padding_ + 4) != false) {
      FRDGScope::BeginCPU(pFVar20,(FRHIComputeCommandList *)pFVar4->_padding_,false);
      FRDGScope::BeginGPU(pFVar20,(FRHIComputeCommandList *)pFVar4->_padding_);
    }
    bVar13 = true;
    local_1b8 = '\x01';
  }
  if (((param_1->ResourceToCapture).Reference == (FRHITexture *)0x0) &&
     (param_1->RDGResourceToCapture == (FRDGTexture *)0x0)) {
    if (1 < (byte)LogMediaIOCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
    if (bVar13) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1c8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return false;
  }
  bVar12 = AreInputsValid(param_1);
  if (!bVar12) {
    if (bVar13) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1c8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return false;
  }
  if ((param_2->Object == (FCaptureFrame *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  cVar15 = (**(code **)(param_2->Object->_padding_ + 0x20))();
  if (cVar15 != '\0') {
    bVar13 = -1 < CpuChannel->Enabled;
    if (bVar13) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId144,"UMediaCapture::LockDMATexture_RenderThread",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                 ,0x90);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId144);
    }
    TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
    ::FString::PrintfImpl(&local_190,L"LockDmaTexture Output Frame %d");
    FVar29.Data = (FScriptContainerElement *)L"";
    if (local_190.Data.ArrayNum != 0) {
      FVar29.Data = local_190.Data.AllocatorInstance.Data;
    }
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                ((wchar_t *)FVar29.Data,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                 ,0x91);
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
    pUVar5 = (param_1->MediaCapture).field0_0x0.DebugPtr;
    pcVar8 = *(code **)(pUVar5->_padding_ + 0x350);
    pFVar21 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
    local_1b0 = (FRHIResource *)(**(code **)(pFVar21->_padding_ + 0x60))(pFVar21);
    if (local_1b0 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(local_1b0);
    }
    (*pcVar8)(pUVar5,&local_1b0);
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId150,"UMediaCapture::FrameCapture",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
               ,0x96);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId150);
  }
  FVar23 = StatPtr_STAT_MediaCaptureHelper_RenderThread_FrameCapture;
  if (StatPtr_STAT_MediaCaptureHelper_RenderThread_FrameCapture ==
      (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_FrameCapture>)0x0) {
    pFVar22 = ::FName::FName(&local_110,"STAT_MediaCaptureHelper_RenderThread_FrameCapture");
    FVar23 = (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_FrameCapture>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_MediaCaptureHelper_RenderThread_FrameCapture,*pFVar22,
                        L"MediaCapture RenderThread FrameCapture","STATGROUP_Media",
                        "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar30 = *(FName *)FVar23;
  bVar9 = false;
  bVar12 = false;
  local_1d8.ComparisonIndex.Value = 0;
  local_1d8.Number = 0;
  bVar16 = false;
  bVar11 = false;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_14d79b457:
    bVar9 = bVar16;
    bVar12 = bVar11;
    bVar11 = false;
    FVar30 = local_1d8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar23 + 0x10));
      bVar9 = false;
      bVar12 = true;
      bVar16 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e0.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_1e0.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e0,(wchar_t *)*(FName *)((longlong)FVar23 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                   ,0x97);
        bVar9 = true;
        bVar12 = true;
        bVar16 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14d79b457;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    bVar11 = true;
  }
  local_1a0 = param_1->RDGResourceToCapture;
  if ((param_2->Object == (FCaptureFrame *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar8 = (code *)swi(3);
    uVar14 = (*pcVar8)();
    return (bool)uVar14;
  }
  pFVar21 = param_2->Object;
  pFVar4 = param_1->GraphBuilder;
  pTVar24 = TSet<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<FName,TRefCountPtr<IPooledRenderTarget>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<IPooledRenderTarget>,0>,FDefaultSetAllocator>
                    *)&(pFVar21->RenderPassResources).PassTextureOutputs,
                   (pFVar21->RenderPassResources).LastRenderPassName);
  local_1f8.Reference = (IPooledRenderTarget *)0x0;
  if (((pTVar24 == (TTuple<FName,TRefCountPtr<IPooledRenderTarget>_> *)0x0) ||
      (local_1f8.Reference = *(IPooledRenderTarget **)&pTVar24->field_0x8,
      local_1f8.Reference == (IPooledRenderTarget *)0x0)) ||
     ((**(code **)((local_1f8.Reference)->_padding_ + 0x30))(),
     local_1f8.Reference == (IPooledRenderTarget *)0x0)) {
    pTVar26 = TSet<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_>,TDefaultMapHashableKeyFuncs<FName,TRefCountPtr<FRDGPooledBuffer>,0>,FDefaultSetAllocator>
                      *)&(pFVar21->RenderPassResources).PassBufferOutputs,
                     (pFVar21->RenderPassResources).LastRenderPassName);
    local_1e8.Reference = (FRDGPooledBuffer *)0x0;
    if ((pTVar26 != (TTuple<FName,TRefCountPtr<FRDGPooledBuffer>_> *)0x0) &&
       (local_1e8.Reference = *(FRDGPooledBuffer **)&pTVar26->field_0x8,
       local_1e8.Reference != (FRDGPooledBuffer *)0x0)) {
      LOCK();
      *(int *)&(local_1e8.Reference)->_padding_ = (int)(local_1e8.Reference)->_padding_ + 1;
      UNLOCK();
      if (local_1e8.Reference != (FRDGPooledBuffer *)0x0) {
        local_1f0 = (FRDGTexture *)
                    FRDGBuilder::RegisterExternalBuffer
                              (pFVar4,&local_1e8,(local_1e8.Reference)->Name,None);
        if (local_1e8.Reference != (FRDGPooledBuffer *)0x0) {
          plVar1 = &(local_1e8.Reference)->_padding_;
          LOCK();
          lVar10 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((((int)lVar10 == 1) && (plVar1 != (longlong *)0x0)) &&
             (local_1e8.Reference != (FRDGPooledBuffer *)0x0)) {
            (**(code **)(local_1e8.Reference)->_padding_)(local_1e8.Reference,1);
          }
        }
        goto LAB_14d79b4f2;
      }
    }
    if (local_1f8.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_1f8.Reference)->_padding_ + 0x38))();
    }
    local_1f0 = (FRDGTexture *)0x0;
  }
  else {
    puVar25 = (undefined8 *)(**(code **)((local_1f8.Reference)->_padding_ + 0x10))();
    local_1f0 = FRDGBuilder::RegisterExternalTexture(pFVar4,&local_1f8,(wchar_t *)*puVar25,None);
LAB_14d79b4f2:
    if (local_1f8.Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)((local_1f8.Reference)->_padding_ + 0x38))();
    }
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId158,"UMediaCapture::GraphSetup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
               ,0x9e);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId158);
  }
  local_198 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
  if ((*local_198 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_130 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
    ;
    pwStack_118 = L"MediaCapture";
    uStack_128 = 0x9f;
    local_120 = 0;
    ::Desc._padding_ = (longlong)u_MediaCapture;
    ::Desc._padding_._0_4_ = 0x52bdd640;
    ::Desc._padding_._4_4_ = 1;
    ::Desc._padding_._0_4_ = 0x9f;
    ::Desc._padding_._4_4_ = uStack_124;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x52bdb118;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame'::__l41::<lambda_2>::
           operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  local_1a8 = (FRHIComputeCommandList *)param_1->GraphBuilder->_padding_;
  pFVar27 = FRHIComputeCommandList::GetBreadcrumbAllocator(local_1a8);
  pFVar28 = FMemStackBase::Alloc(&pFVar27->Inner,0x50,8);
  pFVar28->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar28->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar28->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar28->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar28->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar28->Allocator = pFVar27;
  pFVar28->TraceCpuSpecId = 0;
  pFVar28->TraceCpuMetadataId = 0;
  pFVar28->Data = (FRHIBreadcrumbData *)&::Desc;
  LOCK();
  UNLOCK();
  uVar18 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar28->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar28->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar28->ID = uVar18;
  pFVar28->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0N___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar28[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar17 = RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar17)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar19 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar19;
      UNLOCK();
      RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_a0);
      FCpuProfilerTrace::OutputEventMetadataSpec
                ((uint)::Desc.TraceCpuSpecId,
                 (wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                 (wchar_t *)::Desc._padding_,&local_a0.CborData);
      RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_a0);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar28->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_d8,local_1a8,pFVar28);
  local_c8 = 1;
  MediaCapture::FRenderPipeline::ExecutePasses_RenderThread
            ((((param_1->MediaCapture).field0_0x0.DebugPtr)->CaptureRenderPipeline).Ptr,param_1,
             param_2,param_1->GraphBuilder,local_1a0);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_d8);
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  aVar3 = ((param_1->MediaCapture).field0_0x0.DebugPtr)->bShouldCaptureRHIResource;
  if (aVar3 == (atomic<bool>)0x0) {
    cVar15 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
    local_170 = (atomic<bool>)0x0;
    if ((cVar15 != '\0') && ((cVar15 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
      local_170 = aVar3;
      if ((*local_198 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0xa6;
        local_70 = 0x54d90410;
        uStack_6c = 1;
        ::Desc._padding_._0_4_ = 0x54d90410;
        ::Desc._padding_._4_4_ = uStack_74;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_MediaCapture_Re;
        ::Desc._padding_ = (longlong)u_MediaCapture_Re;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame'::__l49::<lambda_3>::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar4 = param_1->GraphBuilder;
      local_f8._Myfirst._Val = &::Desc;
      local_180.State = (FRDGScopeState *)pFVar4;
      pFVar20 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar4->_padding_,(FRDGScope **)pFVar4);
      ((FState *)&pFVar4->_padding_)->Current = pFVar20;
      local_180.Scope = pFVar20;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<22>_const_*,std::tuple<>_>_>
                (&(pFVar20->Impl).Impl,(FRDGScopeState *)pFVar4,&local_f8);
      if (*(bool *)((longlong)&pFVar4->_padding_ + 4) != false) {
        FRDGScope::BeginCPU(pFVar20,(FRHIComputeCommandList *)pFVar4->_padding_,false);
        FRDGScope::BeginGPU(pFVar20,(FRHIComputeCommandList *)pFVar4->_padding_);
      }
      local_170 = (atomic<bool>)0x1;
    }
    bVar16 = -1 < CpuChannel->Enabled;
    if (bVar16) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId168,"UMediaCapture::EnqueueReadback",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                 ,0xa8);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId168);
    }
    pFVar21 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
    pcVar8 = *(code **)(pFVar21->_padding_ + 0x58);
    bVar17 = UMediaCapture::UseAnyThreadCapture((param_1->MediaCapture).field0_0x0.DebugPtr);
    (*pcVar8)(pFVar21,param_1->GraphBuilder,local_1f0,bVar17);
    pFVar21 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
    LOCK();
    pFVar21->bReadbackRequested = (atomic<bool>)0x1;
    UNLOCK();
    if (bVar16) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (local_170 != (atomic<bool>)0x0) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_180);
    }
  }
  else {
    pFVar21 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
    LOCK();
    pFVar21->bDoingGPUCopy = (atomic<bool>)0x1;
    UNLOCK();
  }
  pFVar6 = (((param_1->MediaCapture).field0_0x0.DebugPtr)->FrameManager).Ptr;
  pFVar21 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::
            operator*<UE::MediaCaptureData::FCaptureFrame>(param_2);
  cVar15 = (**(code **)(pFVar21->_padding_ + 0x10))(pFVar21);
  if (cVar15 == '\0') {
    bVar16 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<6148925066445848712>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaIOFrameManager.h"
                        ,0x88,"InFrame.IsPending()");
    if (bVar16) {
      pcVar8 = (code *)swi(3);
      uVar14 = (*pcVar8)();
      return (bool)uVar14;
    }
  }
  else {
    local_res20[0] = (**(code **)(pFVar21->_padding_ + 8))(pFVar21);
    TSpscQueue<int,FMemory>::Enqueue<int>(&pFVar6->PendingFrames,local_res20);
  }
  LOCK();
  paVar2 = &((param_1->MediaCapture).field0_0x0.DebugPtr)->PendingFrameCount;
  *paVar2 = (atomic<int>)((int)*paVar2 + 1);
  UNLOCK();
  bVar16 = UMediaCapture::UseExperimentalScheduling((param_1->MediaCapture).field0_0x0.DebugPtr);
  if (bVar16) {
    bVar16 = false;
    local_158 = 0;
    cVar15 = *(char *)((longlong)&param_1->GraphBuilder->_padding_ + 6);
    if ((cVar15 != '\0') && ((cVar15 != '\x01' || ((param_1->GraphBuilder->_padding_ & 4) == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::Desc._padding_._0_4_ = 0xb7;
        local_50 = 0x54d90330;
        uStack_4c = 1;
        ::Desc._padding_._0_4_ = 0x54d90330;
        ::Desc._padding_._4_4_ = uStack_54;
        ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
        ::Desc._padding_._4_4_ = 1;
        ::Desc._padding_ = (longlong)u_MediaCapture_Sy;
        ::Desc._padding_ = (longlong)u_MediaCapture_Sy;
        InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
        ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
        ::Desc.TraceGpuSpecId = 0;
        ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
        atexit(```UE::MediaCaptureData::FMediaCaptureHelper::CaptureFrame'::__l59::<lambda_4>::
               operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
               _dynamic_atexit_destructor_for__Desc__);
        _Init_thread_footer(&::_TSS0);
      }
      pFVar4 = param_1->GraphBuilder;
      local_e8._Myfirst._Val = &::Desc;
      local_168.State = (FRDGScopeState *)pFVar4;
      pFVar20 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                          ((FRDGAllocator *)&pFVar4->_padding_,(FRDGScope **)pFVar4);
      ((FState *)&pFVar4->_padding_)->Current = pFVar20;
      local_168.Scope = pFVar20;
      TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<23>_const_*,std::tuple<>_>_>
                (&(pFVar20->Impl).Impl,(FRDGScopeState *)pFVar4,&local_e8);
      if (*(bool *)((longlong)&pFVar4->_padding_ + 4) != false) {
        FRDGScope::BeginCPU(pFVar20,(FRHIComputeCommandList *)pFVar4->_padding_,false);
        FRDGScope::BeginGPU(pFVar20,(FRHIComputeCommandList *)pFVar4->_padding_);
      }
      bVar16 = true;
      local_158 = 1;
    }
    pFVar21 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
    cVar15 = (**(code **)(pFVar21->_padding_ + 0x20))(pFVar21);
    pFVar21 = param_2->Object;
    pTVar7 = (param_2->SharedReferenceCount).ReferenceController;
    if (cVar15 == '\0') {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_140.Object = pFVar21;
      local_140.SharedReferenceCount.ReferenceController = pTVar7;
      AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>
                (param_1->GraphBuilder,(param_1->MediaCapture).field0_0x0.DebugPtr,&local_140,
                 (FRDGViewableResource *)local_1f0);
    }
    else {
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_150.Object = pFVar21;
      local_150.SharedReferenceCount.ReferenceController = pTVar7;
      AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>
                (param_1->GraphBuilder,(param_1->MediaCapture).field0_0x0.DebugPtr,&local_150,
                 (FRDGViewableResource *)local_1f0);
    }
    if (bVar16) {
      TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_168);
    }
  }
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_1b8 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_1c8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return true;
}

// ExecuteSyncPointPass @ 14d7a6d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MediaCaptureData::FMediaCaptureHelper::ExecuteSyncPointPass
          (FRHICommandListImmediate *param_1,UMediaCapture *param_2,
          TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_3)

{
  code *pcVar1;
  FMediaCaptureSyncData *pFVar2;
  char cVar3;
  bool bVar4;
  FCaptureFrame *pFVar5;
  TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  FRHIResource *local_res18;
  FPendingCaptureData local_58;
  FPendingCaptureData local_38;
  
  if ((param_3->Object == (FCaptureFrame *)0x0) ||
     (param_3->Object->bMediaCaptureActive == (atomic<bool>)0x0)) goto LAB_14d7a6f20;
  cVar3 = (**(code **)(param_2->_padding_ + 0x380))(param_2);
  if (cVar3 != '\0') {
    pcVar1 = *(code **)(param_2->_padding_ + 0x358);
    pFVar5 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_3);
    local_res18 = (FRHIResource *)(**(code **)(pFVar5->_padding_ + 0x60))(pFVar5);
    if (local_res18 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(local_res18);
    }
    (*pcVar1)(param_2,&local_res18);
    local_38.CapturingFrame.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    local_38.CapturingFrame.Object = param_3->Object;
    if (local_38.CapturingFrame.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.CapturingFrame.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.CapturingFrame.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_38.SyncHandler.Object = (FMediaCaptureSyncData *)0x0;
    local_38.SyncHandler.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    FSyncPointWatcher::QueuePendingCapture((param_2->SyncPointWatcher).Ptr,&local_38);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    goto LAB_14d7a6f20;
  }
  pTVar6 = TArray<TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1>,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UMediaCapture::GetAvailableSyncHandler_::__l2::<lambda_1>_>
                     (&param_2->SyncHandlers,local_res18._0_1_);
  if (pTVar6 == (TSharedPtr<UMediaCapture::FMediaCaptureSyncData,1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
LAB_14d7a6e9e:
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3965407884077957335>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                       ,0xd7,"SyncDataPtr");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (1 < (byte)LogMediaIOCore._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    }
  }
  else {
    pTVar7 = (pTVar6->SharedReferenceCount).ReferenceController;
    pFVar2 = pTVar6->Object;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pFVar2 == (FMediaCaptureSyncData *)0x0) goto LAB_14d7a6e9e;
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_1,(pFVar2->RHIFence).Reference);
    LOCK();
    pFVar2->bIsBusy = (atomic<bool>)0x1;
    UNLOCK();
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_58.CapturingFrame.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    local_58.CapturingFrame.Object = param_3->Object;
    if (local_58.CapturingFrame.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_58.CapturingFrame.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_58.CapturingFrame.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    local_58.SyncHandler.Object = pFVar2;
    local_58.SyncHandler.SharedReferenceCount.ReferenceController = pTVar7;
    FSyncPointWatcher::QueuePendingCapture((param_2->SyncPointWatcher).Ptr,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
LAB_14d7a6f20:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// OnReadbackComplete @ 14d7b3770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MediaCaptureData::FMediaCaptureHelper::OnReadbackComplete
          (UMediaCapture *param_1,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> *param_2)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FFrameManager *this;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  bool bVar13;
  DWORD DVar14;
  FCaptureFrame *pFVar15;
  TStatId TVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_LockResource> FVar18;
  FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_AnyThread_LockResource> FVar19;
  FThreadStats *pFVar20;
  FThreadStatsPool *pFVar21;
  int iVar22;
  ForAnyElementType FVar23;
  FRHIGPUMask FVar24;
  longlong lVar25;
  FName FVar26;
  FName FVar27;
  bool bVar28;
  undefined4 local_res20 [2];
  ForAnyElementType local_2a0;
  int local_298;
  int local_294;
  ForAnyElementType local_290;
  int local_288;
  int local_284;
  FColor_u_0 local_280;
  FColor_u_0 local_27c;
  undefined4 local_278;
  FColor_u_0 local_274;
  FColor_u_0 local_270 [2];
  code *local_268;
  FName local_260;
  byte local_258;
  FName local_250;
  byte local_248;
  FName local_240;
  FName local_238;
  FName local_230;
  FName local_228;
  FName local_220;
  FName local_210;
  FName local_200;
  FName local_1f0;
  longlong local_1e0;
  LARGE_INTEGER local_1d8;
  FRHIResource *local_1d0;
  LARGE_INTEGER local_1c8;
  LARGE_INTEGER local_1c0;
  FRHIResource *local_1b8;
  int local_1b0;
  FRHIResource *local_1a8;
  FRHIResource *local_1a0;
  FRHIResource *local_198;
  FString local_190;
  FString local_180;
  FStatMessage local_170;
  FString local_160;
  FString local_150;
  FStatMessage local_140;
  FStatMessage local_130;
  code *local_120;
  int local_118;
  int local_114;
  undefined4 local_110;
  FSourceLocation local_108;
  FSourceLocation local_e8;
  FMediaCaptureUserData *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FMediaCaptureUserData *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FMediaCaptureUserData *local_a8;
  TReferenceControllerBase<1> *local_a0;
  FMediaCaptureUserData *local_98;
  TReferenceControllerBase<1> *local_90;
  FMediaCaptureUserData *local_88;
  TReferenceControllerBase<1> *local_80;
  FMediaCaptureUserData *local_78;
  TReferenceControllerBase<1> *local_70;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48 [2];
  
  if (5 < (byte)LogMediaIOCore._0_1_) {
    if ((param_2->Object == (FCaptureFrame *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(param_2->Object->_padding_ + 8))();
    DVar14 = GetCurrentThreadId();
    FThreadManager::GetThreadName(DVar14);
    local_2a0.Data = (FScriptContainerElement *)0x0;
    local_298 = (param_1->MediaOutputName).Data.ArrayNum;
    lVar25 = (longlong)local_298;
    pFVar3 = (param_1->MediaOutputName).Data.AllocatorInstance.Data;
    if (local_298 == 0) {
      local_294 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_298,0,&local_2a0,local_298,&local_294);
      memcpy(local_2a0.Data,pFVar3,lVar25 * 2);
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    if (local_2a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data);
    }
  }
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId242,"UMediaCapture::OnReadbackComplete",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
               ,0xf2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId242);
  }
  bVar11 = IsInRenderingThread();
  if (!bVar11) {
    cVar12 = (**(code **)(param_1->_padding_ + 0x380))(param_1);
    if (cVar12 != '\0') {
      if ((param_2->Object == (FCaptureFrame *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar12 = (**(code **)(param_2->Object->_padding_ + 0x20))();
      iVar22 = CpuChannel->Enabled;
      if (cVar12 == '\0') {
        if (-1 < iVar22) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId331,"UMediaCapture::RHIResourceCaptured",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                     ,0x14b);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId331);
        }
        pcVar4 = *(code **)(param_1->_padding_ + 0x3c8);
        pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
        local_1b8 = (FRHIResource *)(**(code **)(pFVar15->_padding_ + 0x68))(pFVar15);
        if (local_1b8 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(local_1b8);
        }
        pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
        local_98 = (pFVar15->UserData).Object;
        local_90 = (pFVar15->UserData).SharedReferenceCount.ReferenceController;
        if (local_90 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
        (*pcVar4)(param_1,&pFVar15->CaptureBaseData,&local_98);
        if (-1 < iVar22) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      else {
        if (-1 < iVar22) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&__CpuProfilerEventSpecId323,"UMediaCapture::RHIResourceCaptured",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                     ,0x143);
          FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId323);
        }
        TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
        ::FString::PrintfImpl(&local_160,L"MediaCapture Output Frame %d");
        FVar23.Data = (FScriptContainerElement *)L"";
        if (local_160.Data.ArrayNum != 0) {
          FVar23.Data = local_160.Data.AllocatorInstance.Data;
        }
        bVar11 = -1 < CpuChannel->Enabled;
        if (bVar11) {
          FCpuProfilerTrace::OutputBeginDynamicEvent
                    ((wchar_t *)FVar23.Data,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                     ,0x144);
        }
        if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.Data.AllocatorInstance.Data);
        }
        TVar16 = FThreadSafeStaticStatInner<FStat_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback,1>
                 ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback,1>
                              *)&StatPtr_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback);
        local_e8.Impl._Line = 0x145;
        local_e8.Impl._Function =
             "void __cdecl UE::MediaCaptureData::FMediaCaptureHelper::OnReadbackComplete(class UMediaCapture *,class TSharedPtr<class UE::MediaCaptureData::FCaptureFrame,1>)"
        ;
        local_e8.Impl._Column = 6;
        local_e8.Impl._File =
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
        ;
        FScopeCycleCounter::FScopeCycleCounter
                  ((FScopeCycleCounter *)&local_250,*(TStatIdData **)&(TVar16.StatIdPtr)->Name,
                   CycleStat|ClearEveryFrame,false,&local_e8);
        pcVar4 = *(code **)(param_1->_padding_ + 0x3d0);
        pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
        local_1d0 = (FRHIResource *)(**(code **)(pFVar15->_padding_ + 0x60))(pFVar15);
        if (local_1d0 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(local_1d0);
        }
        pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
        local_a8 = (pFVar15->UserData).Object;
        local_a0 = (pFVar15->UserData).SharedReferenceCount.ReferenceController;
        if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
        (*pcVar4)(param_1,&pFVar15->CaptureBaseData,&local_a8);
        if ((local_248 & 1) != 0) {
          FGenericPlatformMisc::EndNamedEvent();
        }
        if ((local_248 & 2) != 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if ((local_248 & 4) != 0) {
          FThreadStats::AddMessage(local_250,CycleScopeEnd);
        }
        local_248 = 0;
        if (bVar11) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (-1 < iVar22) {
          FCpuProfilerTrace::OutputEndEvent();
        }
      }
      goto LAB_14d7b4b6a;
    }
    FVar18 = StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource;
    if (StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource ==
        (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_LockResource>)0x0) {
      pFVar17 = ::FName::FName(&local_60,"STAT_MediaCaptureHelper_RenderThread_LockResource");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_LockResource>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource,*pFVar17,
                          L"MediaCapture RenderThread LockResource","STATGROUP_Media",
                          "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar26 = *(FName *)FVar18;
    bVar11 = false;
    bVar8 = false;
    local_200.ComparisonIndex.Value = 0;
    local_200.Number = 0;
    bVar28 = false;
    bVar13 = false;
    if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_14d7b46a7:
      bVar8 = bVar13;
      bVar11 = bVar28;
      bVar28 = false;
      FVar26 = local_200;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_274.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_274._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar11 = false;
        bVar8 = true;
        bVar28 = false;
        bVar13 = true;
        if (-1 < CpuChannel->Enabled) {
          local_230.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
          local_230.Number = FVar26.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_230,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                     ,0x156);
          bVar11 = true;
          bVar8 = true;
          bVar28 = true;
          bVar13 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7b46a7;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar28 = true;
    }
    if ((param_2->Object == (FCaptureFrame *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_268 = (code *)(**(code **)(param_2->Object->_padding_ + 0x38))();
    if (local_268 == (code *)0x0) {
      bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3965407884077957465>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                          ,0x159,"ColorDataBuffer");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      (**(code **)(pFVar15->_padding_ + 8))(pFVar15);
      ::FString::PrintfImpl(&local_150,L"MediaCapture Output Frame %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_150.Data.ArrayNum != 0) {
        FVar23.Data = local_150.Data.AllocatorInstance.Data;
      }
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar23.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                   ,0x15c);
      }
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      FVar19 = StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource;
      if (StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource ==
          (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_AnyThread_LockResource>)0x0) {
        pFVar17 = ::FName::FName(&local_58,"STAT_MediaCaptureHelper_AnyThread_LockResource");
        FVar19 = (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_AnyThread_LockResource>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource,*pFVar17,
                            L"MediaCapture AnyThread LockResource","STATGROUP_Media",
                            "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar27 = *(FName *)FVar19;
      local_1f0.ComparisonIndex.Value = 0;
      local_1f0.Number = 0;
      bVar7 = false;
      bVar6 = false;
      if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_14d7b4902:
        bVar5 = false;
        FVar27 = local_1f0;
      }
      else {
        bVar7 = false;
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_270[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_270[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
          bVar7 = false;
          bVar6 = true;
          if (-1 < CpuChannel->Enabled) {
            local_228.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
            local_228.Number = FVar27.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_228,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                       ,0x15d);
            bVar7 = true;
            bVar6 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7b4902;
        FThreadStats::AddMessage(FVar27,CycleScopeStart);
        bVar7 = false;
        bVar5 = true;
      }
      local_120 = local_268;
      local_118 = (param_1->DesiredOutputSize).field0_0x0._s_0.X;
      local_114 = (param_1->DesiredOutputSize).field0_0x0._s_0.Y;
      local_110 = 0;
      pcVar4 = *(code **)(param_1->_padding_ + 0x3a8);
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      local_88 = (pFVar15->UserData).Object;
      local_80 = (pFVar15->UserData).SharedReferenceCount.ReferenceController;
      if (local_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_80->SharedReferenceCount = (atomic<int>)((int)local_80->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      (*pcVar4)(param_1,&pFVar15->CaptureBaseData);
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar5) && (FVar27 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar20 == (FThreadStats *)0x0) {
          pFVar21 = FThreadStatsPool::Get();
          pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
        }
        if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
          local_140.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
          local_140.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&local_1c8);
          local_140.StatData.Pad[4] = '\0';
          local_140.StatData.Pad[5] = '\0';
          local_140.StatData.Pad[6] = '\0';
          local_140.StatData.Pad[7] = '\0';
          local_140.StatData.Pad[0] = local_1c8.s.LowPart._0_1_;
          local_140.StatData.Pad[1] = local_1c8.s.LowPart._1_1_;
          local_140.StatData.Pad[2] = local_1c8.s.LowPart._2_1_;
          local_140.StatData.Pad[3] = local_1c8.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar20,&local_140);
          piVar1 = &pFVar20->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar20,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar20,false,false);
          }
        }
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      (**(code **)(pFVar15->_padding_ + 0x48))(pFVar15);
    }
    if (bVar8) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar28) && (FVar26 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
        local_130.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
        local_130.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1c0);
        local_130.StatData.Pad[4] = '\0';
        local_130.StatData.Pad[5] = '\0';
        local_130.StatData.Pad[6] = '\0';
        local_130.StatData.Pad[7] = '\0';
        local_130.StatData.Pad[0] = local_1c0.s.LowPart._0_1_;
        local_130.StatData.Pad[1] = local_1c0.s.LowPart._1_1_;
        local_130.StatData.Pad[2] = local_1c0.s.LowPart._2_1_;
        local_130.StatData.Pad[3] = local_1c0.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar20,&local_130);
        piVar1 = &pFVar20->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar20,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
    goto LAB_14d7b4b6a;
  }
  bVar11 = IsInRenderingThread();
  if ((!bVar11) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                          ,0x1594,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = GRHICommandList.CommandListImmediate._668_4_;
  FVar24.GPUMask = GRHICommandList.CommandListImmediate._668_4_;
  if ((GRHICommandList.CommandListImmediate._668_4_ &
      GRHICommandList.CommandListImmediate._668_4_ - 1) != 0) {
    local_1b0 = 0;
    if (GRHICommandList.CommandListImmediate._668_4_ != 0) {
      for (; ((uint)GRHICommandList.CommandListImmediate._668_4_ >> local_1b0 & 1) == 0;
          local_1b0 = local_1b0 + 1) {
      }
    }
    iVar22 = 0;
    if (GRHICommandList.CommandListImmediate._668_4_ != 0) {
      iVar22 = local_1b0;
    }
    FVar24.GPUMask = 1 << ((byte)iVar22 & 0x1f);
  }
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,FVar24);
  cVar12 = (**(code **)(param_1->_padding_ + 0x380))(param_1);
  if (cVar12 == '\0') {
    local_res20[0] = 0;
    FVar18 = StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource;
    if (StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource ==
        (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_LockResource>)0x0) {
      pFVar17 = ::FName::FName(local_48,"STAT_MediaCaptureHelper_RenderThread_LockResource");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_RenderThread_LockResource>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_MediaCaptureHelper_RenderThread_LockResource,*pFVar17,
                          L"MediaCapture RenderThread LockResource","STATGROUP_Media",
                          "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar26 = *(FName *)FVar18;
    local_220.ComparisonIndex.Value = 0;
    local_220.Number = 0;
    bVar28 = false;
    bVar11 = false;
    if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_14d7b3e39:
      bVar8 = false;
      FVar26 = local_220;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_280.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_280._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar28 = false;
        bVar11 = true;
        if (-1 < CpuChannel->Enabled) {
          local_240.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
          local_240.Number = FVar26.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_240,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                     ,0x12d);
          bVar28 = true;
          bVar11 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7b3e39;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar8 = true;
    }
    if ((param_2->Object == (FCaptureFrame *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1e0 = (**(code **)(param_2->Object->_padding_ + 0x30))
                          (param_2->Object,0x154be5ed0,local_res20);
    if (local_1e0 == 0) {
      bVar13 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3965407884077957424>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                          ,0x130,"ColorDataBuffer");
      if (bVar13) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else {
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      (**(code **)(pFVar15->_padding_ + 8))(pFVar15);
      ::FString::PrintfImpl(&local_180,L"MediaCapture Output Frame %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_180.Data.ArrayNum != 0) {
        FVar23.Data = local_180.Data.AllocatorInstance.Data;
      }
      bVar13 = -1 < CpuChannel->Enabled;
      if (bVar13) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar23.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                   ,0x133);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      FVar19 = StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource;
      if (StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource ==
          (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_AnyThread_LockResource>)0x0) {
        pFVar17 = ::FName::FName(&local_50,"STAT_MediaCaptureHelper_AnyThread_LockResource");
        FVar19 = (FThreadSafeStaticStat<FStat_STAT_MediaCaptureHelper_AnyThread_LockResource>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_MediaCaptureHelper_AnyThread_LockResource,*pFVar17,
                            L"MediaCapture AnyThread LockResource","STATGROUP_Media",
                            "STATCAT_Advanced",L"Media",true,true,ST_int64,true,false,MCR_Invalid);
      }
      FVar27 = *(FName *)FVar19;
      local_210.ComparisonIndex.Value = 0;
      local_210.Number = 0;
      bVar7 = false;
      bVar6 = false;
      if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_14d7b409b:
        bVar5 = false;
        FVar27 = local_210;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_27c.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_27c._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
          bVar7 = false;
          bVar6 = true;
          if (-1 < CpuChannel->Enabled) {
            local_238.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
            local_238.Number = FVar27.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_238,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                       ,0x134);
            bVar7 = true;
            bVar6 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14d7b409b;
        FThreadStats::AddMessage(FVar27,CycleScopeStart);
        bVar5 = true;
      }
      local_268 = *(code **)(param_1->_padding_ + 0x3a0);
      local_278 = local_res20[0];
      iVar22 = (param_1->DesiredOutputSize).field0_0x0._s_0.Y;
      iVar2 = (param_1->DesiredOutputSize).field0_0x0._s_0.X;
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      local_78 = (pFVar15->UserData).Object;
      local_70 = (pFVar15->UserData).SharedReferenceCount.ReferenceController;
      if (local_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      (*local_268)(param_1,&pFVar15->CaptureBaseData,&local_78,local_1e0,iVar2,iVar22,local_278);
      if (bVar6) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar7) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar5) {
        FThreadStats::AddMessage(FVar27,CycleScopeEnd);
      }
      if (bVar13) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      (**(code **)(pFVar15->_padding_ + 0x40))(pFVar15);
    }
    if (bVar11) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar28) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar8) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar20 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar20 == (FThreadStats *)0x0) {
        pFVar21 = FThreadStatsPool::Get();
        pFVar20 = FThreadStatsPool::GetFromPool(pFVar21);
      }
      if (pFVar20->bWaitForExplicitFlush < pFVar20->ScopeCount) {
        local_170.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
        local_170.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_1d8);
        local_170.StatData.Pad[4] = '\0';
        local_170.StatData.Pad[5] = '\0';
        local_170.StatData.Pad[6] = '\0';
        local_170.StatData.Pad[7] = '\0';
        local_170.StatData.Pad[0] = local_1d8.s.LowPart._0_1_;
        local_170.StatData.Pad[1] = local_1d8.s.LowPart._1_1_;
        local_170.StatData.Pad[2] = local_1d8.s.LowPart._2_1_;
        local_170.StatData.Pad[3] = local_1d8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar20,&local_170);
        piVar1 = &pFVar20->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar20,false,false);
          FRHIComputeCommandList::SetGPUMask
                    ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,
                     (FRHIGPUMask)uVar9);
          goto LAB_14d7b4b6a;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar20,false,false);
        }
      }
    }
  }
  else {
    if ((param_2->Object == (FCaptureFrame *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    cVar12 = (**(code **)(param_2->Object->_padding_ + 0x20))();
    iVar22 = CpuChannel->Enabled;
    if (cVar12 == '\0') {
      if (-1 < iVar22) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId290,"UMediaCapture::RHIResourceCaptured",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                   ,0x122);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId290);
      }
      pcVar4 = *(code **)(param_1->_padding_ + 0x3b8);
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      local_198 = (FRHIResource *)(**(code **)(pFVar15->_padding_ + 0x68))(pFVar15);
      if (local_198 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_198);
      }
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      local_b8 = (pFVar15->UserData).Object;
      local_b0 = (pFVar15->UserData).SharedReferenceCount.ReferenceController;
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      (*pcVar4)(param_1,0x154be5ed0,&pFVar15->CaptureBaseData,&local_b8,&local_198);
      if (-1 < iVar22) {
        FCpuProfilerTrace::OutputEndEvent();
        FRHIComputeCommandList::SetGPUMask
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,
                   (FRHIGPUMask)uVar9);
        goto LAB_14d7b4b6a;
      }
    }
    else {
      if (-1 < iVar22) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId278,"UMediaCapture::UnlockDMATexture_RenderThread",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                   ,0x116);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId278);
      }
      pcVar4 = *(code **)(param_1->_padding_ + 0x358);
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      local_1a8 = (FRHIResource *)(**(code **)(pFVar15->_padding_ + 0x60))(pFVar15);
      if (local_1a8 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_1a8);
      }
      (*pcVar4)(param_1,&local_1a8);
      if (-1 < iVar22) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar11 = -1 < CpuChannel->Enabled;
      if (bVar11) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId282,"UMediaCapture::RHIResourceCaptured",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                   ,0x11a);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId282);
      }
      TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      ::FString::PrintfImpl(&local_190,L"MediaCapture Output Frame %d");
      FVar23.Data = (FScriptContainerElement *)L"";
      if (local_190.Data.ArrayNum != 0) {
        FVar23.Data = local_190.Data.AllocatorInstance.Data;
      }
      bVar28 = -1 < CpuChannel->Enabled;
      if (bVar28) {
        FCpuProfilerTrace::OutputBeginDynamicEvent
                  ((wchar_t *)FVar23.Data,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
                   ,0x11b);
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      TVar16 = FThreadSafeStaticStatInner<FStat_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback,1>
               ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback,1>
                            *)&StatPtr_STAT_MediaCaptureHelper_RenderThread_RHI_CaptureCallback);
      local_108.Impl._Line = 0x11c;
      local_108.Impl._Function =
           "void __cdecl UE::MediaCaptureData::FMediaCaptureHelper::OnReadbackComplete(class UMediaCapture *,class TSharedPtr<class UE::MediaCaptureData::FCaptureFrame,1>)"
      ;
      local_108.Impl._Column = 6;
      local_108.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\MediaCaptureHelper.cpp"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_260,*(TStatIdData **)&(TVar16.StatIdPtr)->Name,
                 CycleStat|ClearEveryFrame,false,&local_108);
      pcVar4 = *(code **)(param_1->_padding_ + 0x3c0);
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      local_1a0 = (FRHIResource *)(**(code **)(pFVar15->_padding_ + 0x60))(pFVar15);
      if (local_1a0 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_1a0);
      }
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      local_c8 = (pFVar15->UserData).Object;
      local_c0 = (pFVar15->UserData).SharedReferenceCount.ReferenceController;
      if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_c0->SharedReferenceCount = (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar15 = TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>::operator->(param_2);
      (*pcVar4)(param_1,0x154be5ed0,&pFVar15->CaptureBaseData,&local_c8,&local_1a0);
      if ((local_258 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_258 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_258 & 4) != 0) {
        FThreadStats::AddMessage(local_260,CycleScopeEnd);
      }
      local_258 = 0;
      if (bVar28) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar11) {
        FCpuProfilerTrace::OutputEndEvent();
        FRHIComputeCommandList::SetGPUMask
                  ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,
                   (FRHIGPUMask)uVar9);
        goto LAB_14d7b4b6a;
      }
    }
  }
  FRHIComputeCommandList::SetGPUMask
            ((FRHIComputeCommandList *)&GRHICommandList.CommandListImmediate,(FRHIGPUMask)uVar9);
LAB_14d7b4b6a:
  if ((param_2->Object == (FCaptureFrame *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  param_2->Object->bDoingGPUCopy = (atomic<bool>)0x0;
  UNLOCK();
  if ((param_2->Object == (FCaptureFrame *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  param_2->Object->bReadbackRequested = (atomic<bool>)0x0;
  UNLOCK();
  if (5 < (byte)LogMediaIOCore._0_1_) {
    if ((param_2->Object == (FCaptureFrame *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(param_2->Object->_padding_ + 8))();
    DVar14 = GetCurrentThreadId();
    FThreadManager::GetThreadName(DVar14);
    local_290.Data = (FScriptContainerElement *)0x0;
    local_288 = (param_1->MediaOutputName).Data.ArrayNum;
    lVar25 = (longlong)local_288;
    pFVar3 = (param_1->MediaOutputName).Data.AllocatorInstance.Data;
    if (local_288 == 0) {
      local_284 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_288,0,&local_290,local_288,&local_284);
      memcpy(local_290.Data,pFVar3,lVar25 * 2);
    }
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMediaIOCore);
    if (local_290.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.Data);
    }
  }
  this = (param_1->FrameManager).Ptr;
  if ((param_2->Object == (FCaptureFrame *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FFrameManager::CompleteNextPending(this,(FFrame *)param_2->Object);
  LOCK();
  param_1->PendingFrameCount = (atomic<int>)((int)param_1->PendingFrameCount + -1);
  UNLOCK();
  bVar11 = IsInRenderingThread();
  if (bVar11) {
    LOCK();
    param_1->WaitingForRenderCommandExecutionCounter =
         (atomic<int>)((int)param_1->WaitingForRenderCommandExecutionCounter + -1);
    UNLOCK();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

