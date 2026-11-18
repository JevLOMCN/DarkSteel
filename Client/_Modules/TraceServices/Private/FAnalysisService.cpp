// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 5

// FAnalysisService @ 14d3cb8d0

FAnalysisService * __thiscall
TraceServices::FAnalysisService::FAnalysisService(FAnalysisService *this,FModuleService *param_1)

{
  this->ModuleService = param_1;
  this->_padding_ = (longlong)&___7FAnalysisService_TraceServices__6B_;
  return this;
}

// ~FAnalysisService @ 14d3cf430

void __thiscall TraceServices::FAnalysisService::~FAnalysisService(FAnalysisService *this)

{
  this->_padding_ = (longlong)&___7FAnalysisService_TraceServices__6B_;
  return;
}

// Analyze @ 14d3d5430

TSharedPtr<TraceServices::IAnalysisSession_const_,1> * __thiscall
TraceServices::FAnalysisService::Analyze
          (FAnalysisService *this,
          TSharedPtr<TraceServices::IAnalysisSession_const_,1> *__return_storage_ptr__,
          wchar_t *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<TraceServices::IAnalysisSession_const_,1> *pTVar3;
  
  (**(code **)(this->_padding_ + 0x10))();
  if (__return_storage_ptr__->Object == (IAnalysisSession *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (**(code **)((longlong)*__return_storage_ptr__->Object + 0x10))();
  return __return_storage_ptr__;
}

// StartAnalysis @ 14d4027b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<TraceServices::IAnalysisSession_const_,1> * __thiscall
TraceServices::FAnalysisService::StartAnalysis
          (FAnalysisService *this,
          TSharedPtr<TraceServices::IAnalysisSession_const_,1> *__return_storage_ptr__,uint param_1,
          wchar_t *param_2,
          TUniquePtr<UE::Trace::IInDataStream,TDefaultDelete<UE::Trace::IInDataStream>_> *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<TraceServices::IAnalysisSession_const_,1> *pTVar4;
  FName FVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  FBookmarksAnalyzer *this_00;
  FBookmarksAnalyzer *pFVar16;
  atomic<int> *paVar17;
  FBookmarksAnalyzer *pFVar18;
  FAnalysisSession *this_01;
  TReferenceControllerBase<1> *pTVar19;
  atomic<int> *paVar20;
  TReferenceControllerBase<1> *pTVar21;
  TReferenceControllerBase<1> *local_228;
  TReferenceControllerBase<1> *local_208;
  TReferenceControllerBase<1> *local_200;
  TReferenceControllerBase<1> *local_1e0;
  TReferenceControllerBase<1> *local_1d8;
  TReferenceControllerBase<1> *local_1d0;
  TReferenceControllerBase<1> *local_1c8;
  TReferenceControllerBase<1> *local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  TReferenceControllerBase<1> *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  TReferenceControllerBase<1> *local_198;
  TReferenceControllerBase<1> *local_190;
  TReferenceControllerBase<1> *local_188;
  TReferenceControllerBase<1> *local_180;
  TReferenceControllerBase<1> *local_178;
  TReferenceControllerBase<1> *local_170;
  TReferenceControllerBase<1> *local_168;
  TReferenceControllerBase<1> *local_160;
  TReferenceControllerBase<1> *local_158;
  TReferenceControllerBase<1> *local_150;
  TReferenceControllerBase<1> *local_148;
  TReferenceControllerBase<1> *local_140;
  atomic<int> *local_138;
  TReferenceControllerBase<1> *local_130;
  atomic<int> *local_128;
  TReferenceControllerBase<1> *local_120;
  atomic<int> *local_118;
  TReferenceControllerBase<1> *local_110;
  atomic<int> *local_108;
  TReferenceControllerBase<1> *local_100;
  TReferenceControllerBase<1> *local_f8;
  TReferenceControllerBase<1> *local_f0;
  atomic<int> *local_e8;
  TReferenceControllerBase<1> *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *local_d0;
  atomic<int> *local_c8;
  TReferenceControllerBase<1> *local_c0;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_200 = ::operator_new(0x2f8);
  if (local_200 == (TReferenceControllerBase<1> *)0x0) {
    local_200 = (TReferenceControllerBase<1> *)0x0;
    this_01 = (FAnalysisSession *)&DAT_00000010;
  }
  else {
    local_200->SharedReferenceCount = (atomic<int>)0x1;
    local_200->WeakReferenceCount = (atomic<int>)0x1;
    local_200->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFAnalysisSession_TraceServices___00_SharedPointerInternals__6B_
    ;
    FAnalysisSession::FAnalysisSession((FAnalysisSession *)(local_200 + 1),param_1,param_2,param_3);
    this_01 = (FAnalysisSession *)(local_200 + 1);
    if ((this_01 == (FAnalysisSession *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  (**(code **)(this_01->_padding_ + 0xa0))(this_01);
  local_208 = ::operator_new(0x40088);
  paVar20 = (atomic<int> *)&DAT_00000008;
  if (local_208 == (TReferenceControllerBase<1> *)0x0) {
    local_208 = (TReferenceControllerBase<1> *)0x0;
    local_1b0 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar17 = (atomic<int> *)&DAT_00000008;
  }
  else {
    local_208->SharedReferenceCount = (atomic<int>)0x1;
    local_208->WeakReferenceCount = (atomic<int>)0x1;
    local_208->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFBookmarkProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FBookmarkProvider::FBookmarkProvider
              ((FBookmarkProvider *)(local_208 + 1),(IAnalysisSession *)this_01);
    local_1b0 = local_208 + 1;
    if ((local_1b0 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    paVar17 = &local_208->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_208);
  pcVar2 = *(code **)(this_01->_padding_ + 0xf0);
  local_138 = &local_1b0->SharedReferenceCount;
  if (local_1b0 == (TReferenceControllerBase<1> *)0x0) {
    local_138 = (atomic<int> *)0x0;
  }
  local_130 = local_208;
  if (local_208 == (TReferenceControllerBase<1> *)0x0) {
    local_160 = local_208;
  }
  else {
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
    local_160 = local_208;
  }
  local_168 = local_1b0;
  FVar5 = GetBookmarkProviderName();
  (*pcVar2)(this_01,FVar5,&local_168,&local_138);
  pTVar6 = ::operator_new(0x228);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    local_1c8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar17 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFRegionProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FRegionProvider::FRegionProvider((FRegionProvider *)(pTVar6 + 1),(IAnalysisSession *)this_01);
    local_1c8 = pTVar6 + 1;
    if ((local_1c8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    paVar17 = &pTVar6->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pcVar2 = *(code **)(this_01->_padding_ + 0xf0);
  local_128 = &local_1c8->SharedReferenceCount;
  if (local_1c8 == (TReferenceControllerBase<1> *)0x0) {
    local_128 = (atomic<int> *)0x0;
  }
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  local_1a8 = local_1c8;
  local_1a0 = pTVar6;
  local_120 = pTVar6;
  FVar5 = GetRegionProviderName();
  (*pcVar2)(this_01,FVar5,&local_1a8,&local_128);
  pTVar7 = ::operator_new(0x401a0);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar21 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar17 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar7->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7->WeakReferenceCount = (atomic<int>)0x1;
    pTVar7->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFLogProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FLogProvider::FLogProvider((FLogProvider *)(pTVar7 + 1),(IAnalysisSession *)this_01);
    pTVar21 = pTVar7 + 1;
    if ((pTVar21 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    paVar17 = &pTVar7->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pcVar2 = *(code **)(this_01->_padding_ + 0xf0);
  local_118 = &pTVar21->SharedReferenceCount;
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    local_118 = (atomic<int> *)0x0;
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  local_178 = pTVar21;
  local_170 = pTVar7;
  local_110 = pTVar7;
  FVar5 = GetLogProviderName();
  (*pcVar2)(this_01,FVar5,&local_178,&local_118);
  pTVar8 = ::operator_new(0x90);
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_1d8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar17 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFThreadProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FThreadProvider::FThreadProvider((FThreadProvider *)(pTVar8 + 1),(IAnalysisSession *)this_01);
    local_1d8 = pTVar8 + 1;
    if ((local_1d8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    paVar17 = &pTVar8->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pcVar2 = *(code **)(this_01->_padding_ + 0xf0);
  local_108 = &local_1d8->SharedReferenceCount;
  if (local_1d8 == (TReferenceControllerBase<1> *)0x0) {
    local_108 = (atomic<int> *)0x0;
  }
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    local_188 = local_1d8;
  }
  else {
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
    local_188 = local_1d8;
  }
  local_180 = pTVar8;
  local_100 = pTVar8;
  FVar5 = GetThreadProviderName();
  (*pcVar2)(this_01,FVar5,&local_188,&local_108);
  pTVar9 = ::operator_new(0x60);
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
    local_1b8 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar17 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar9->SharedReferenceCount = (atomic<int>)0x1;
    pTVar9->WeakReferenceCount = (atomic<int>)0x1;
    pTVar9->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFFrameProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FFrameProvider::FFrameProvider((FFrameProvider *)(pTVar9 + 1),(IAnalysisSession *)this_01);
    local_1b8 = pTVar9 + 1;
    if ((local_1b8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    paVar17 = &pTVar9->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_70 = 0;
  uStack_68 = 0;
  pcVar2 = *(code **)(this_01->_padding_ + 0xf0);
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  local_f8 = local_1b8;
  local_f0 = pTVar9;
  FVar5 = GetFrameProviderName();
  (*pcVar2)(this_01,FVar5,&local_f8,&local_70);
  if ((local_1b8 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
    return pTVar4;
  }
  local_228 = ::operator_new(0x40);
  if (local_228 == (TReferenceControllerBase<1> *)0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
    local_228 = (TReferenceControllerBase<1> *)0x0;
    paVar17 = (atomic<int> *)&DAT_00000008;
  }
  else {
    local_228->SharedReferenceCount = (atomic<int>)0x1;
    local_228->WeakReferenceCount = (atomic<int>)0x1;
    local_228->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCounterProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FCounterProvider::FCounterProvider
              ((FCounterProvider *)(local_228 + 1),(IAnalysisSession *)this_01,
               (IFrameProvider *)local_1b8);
    pTVar10 = local_228 + 1;
    if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    paVar17 = &local_228->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_228);
  pcVar2 = *(code **)(this_01->_padding_ + 0xf0);
  local_e8 = &pTVar10->SharedReferenceCount;
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    local_e8 = (atomic<int> *)0x0;
  }
  local_e0 = local_228;
  if (local_228 == (TReferenceControllerBase<1> *)0x0) {
    local_190 = local_228;
  }
  else {
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
    local_190 = local_228;
  }
  local_198 = pTVar10;
  FVar5 = GetCounterProviderName();
  (*pcVar2)(this_01,FVar5,&local_198,&local_e8);
  pTVar10 = ::operator_new(0x30);
  if (pTVar10 == (TReferenceControllerBase<1> *)0x0) {
    local_1d0 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar17 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFChannelProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FChannelProvider::FChannelProvider((FChannelProvider *)(pTVar10 + 1));
    local_1d0 = pTVar10 + 1;
    if ((local_1d0 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    paVar17 = &pTVar10->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  local_60 = 0;
  uStack_58 = 0;
  pcVar2 = *(code **)(this_01->_padding_ + 0xf0);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  local_148 = local_1d0;
  local_140 = pTVar10;
  FVar5 = GetChannelProviderName();
  (*pcVar2)(this_01,FVar5,&local_148,&local_60);
  pTVar11 = ::operator_new(0x70);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    local_1e0 = (TReferenceControllerBase<1> *)&DAT_00000010;
    paVar17 = (atomic<int> *)&DAT_00000008;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFScreenshotProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FScreenshotProvider::FScreenshotProvider
              ((FScreenshotProvider *)(pTVar11 + 1),(IAnalysisSession *)this_01);
    local_1e0 = pTVar11 + 1;
    if ((local_1e0 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    paVar17 = &pTVar11->SharedReferenceCount;
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  local_50 = 0;
  uStack_48 = 0;
  pcVar2 = *(code **)(this_01->_padding_ + 0xf0);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar17 = (atomic<int>)((int)*paVar17 + 1);
    UNLOCK();
  }
  local_d8 = local_1e0;
  local_d0 = pTVar11;
  FVar5 = GetScreenshotProviderName();
  (*pcVar2)(this_01,FVar5,&local_d8,&local_50);
  pTVar12 = ::operator_new(0xe0);
  if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
    pTVar19 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar12->SharedReferenceCount = (atomic<int>)0x1;
    pTVar12->WeakReferenceCount = (atomic<int>)0x1;
    pTVar12->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDefinitionProvider_TraceServices___00_SharedPointerInternals__6B_
    ;
    FDefinitionProvider::FDefinitionProvider
              ((FDefinitionProvider *)(pTVar12 + 1),(IAnalysisSession *)this_01);
    pTVar19 = pTVar12 + 1;
    if ((pTVar19 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    paVar20 = &pTVar12->SharedReferenceCount;
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  pcVar2 = *(code **)(this_01->_padding_ + 0xf0);
  local_c8 = &pTVar19->SharedReferenceCount;
  if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
    local_c8 = (atomic<int> *)0x0;
  }
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
    LOCK();
    *paVar20 = (atomic<int>)((int)*paVar20 + 1);
    UNLOCK();
  }
  local_158 = pTVar19;
  local_150 = pTVar12;
  local_c0 = pTVar12;
  FVar5 = GetDefinitionProviderName();
  (*pcVar2)(this_01,FVar5,&local_158,&local_c8);
  pcVar2 = *(code **)(this_01->_padding_ + 0xe8);
  puVar13 = ::operator_new(0xa8);
  if (puVar13 == (undefined8 *)0x0) {
    puVar13 = (undefined8 *)0x0;
  }
  else {
    if ((local_1c8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    if ((local_1e0 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    if ((local_1d0 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    if ((local_1b8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    if ((pTVar21 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    if ((local_1d8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    puVar13[1] = this_01;
    puVar13[3] = pTVar21;
    *puVar13 = &___7FMiscTraceAnalyzer_TraceServices__6B_;
    puVar13[5] = local_1d0;
    puVar13[2] = local_1d8;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[0xc] = 0;
    puVar13[6] = local_1e0;
    puVar13[7] = local_1c8;
    puVar13[4] = local_1b8;
    *(undefined4 *)(puVar13 + 0xd) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x6c) = 0x80;
    *(undefined4 *)(puVar13 + 0xe) = 0xffffffff;
    *(undefined4 *)((longlong)puVar13 + 0x74) = 0;
    puVar13[0x10] = 0;
    *(undefined4 *)(puVar13 + 0x11) = 0;
    plVar1 = (longlong *)puVar13[1];
    puVar13[0x12] = 0;
    puVar13[0x13] = 0;
    puVar13[0x14] = 0xffffffffffffffff;
    (**(code **)(*plVar1 + 0xa0))(plVar1);
    uVar14 = (**(code **)(*(longlong *)(puVar13[3] + 8) + 0x20))();
    puVar13[0x14] = uVar14;
    puVar15 = (undefined8 *)
              (**(code **)(*(longlong *)(puVar13[3] + 8) + 0x28))
                        ((longlong *)(puVar13[3] + 8),uVar14);
    *puVar15 = L"Screenshot";
    (**(code **)(*plVar1 + 0xa8))(plVar1);
  }
  pFVar16 = (FBookmarksAnalyzer *)0x0;
  (*pcVar2)(this_01,puVar13);
  pcVar2 = *(code **)(this_01->_padding_ + 0xe8);
  this_00 = ::operator_new(0x40028);
  if (this_00 != (FBookmarksAnalyzer *)0x0) {
    pFVar18 = (FBookmarksAnalyzer *)&pTVar21->SharedReferenceCount;
    if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
      pFVar18 = pFVar16;
    }
    if ((local_1b0 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    pFVar16 = FBookmarksAnalyzer::FBookmarksAnalyzer
                        (this_00,(IAnalysisSession *)this_01,
                         (IEditableBookmarkProvider *)&local_1b0->SharedReferenceCount,
                         (IEditableLogProvider *)pFVar18);
  }
  puVar13 = (undefined8 *)0x0;
  (*pcVar2)(this_01,pFVar16);
  pcVar2 = *(code **)(this_01->_padding_ + 0xe8);
  puVar15 = ::operator_new(0x18);
  if (puVar15 == (undefined8 *)0x0) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    if ((pTVar21 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<TraceServices::IAnalysisSession_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
    puVar15[1] = this_01;
    *puVar15 = &___7FLogTraceAnalyzer_TraceServices__6B_;
    puVar15[2] = pTVar21;
  }
  (*pcVar2)(this_01,puVar15);
  pcVar2 = *(code **)(this_01->_padding_ + 0xe8);
  puVar15 = ::operator_new(0x10);
  if (puVar15 != (undefined8 *)0x0) {
    puVar15[1] = this_01;
    *puVar15 = &___7FStringsAnalyzer_TraceServices__6B_;
    puVar13 = puVar15;
  }
  (*pcVar2)(this_01,puVar13);
  FModuleService::OnAnalysisBegin(this->ModuleService,(IAnalysisSession *)this_01);
  FAnalysisSession::Start(this_01);
  __return_storage_ptr__->Object = (IAnalysisSession *)this_01;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_200;
  if (local_200 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_200->SharedReferenceCount = (atomic<int>)((int)local_200->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_228);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_208);
  (**(code **)(this_01->_padding_ + 0xa8))(this_01);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_200);
  return __return_storage_ptr__;
}

// StartAnalysis @ 14d403580

TSharedPtr<TraceServices::IAnalysisSession_const_,1> * __thiscall
TraceServices::FAnalysisService::StartAnalysis
          (FAnalysisService *this,
          TSharedPtr<TraceServices::IAnalysisSession_const_,1> *__return_storage_ptr__,
          wchar_t *param_1)

{
  longlong *plVar1;
  IPlatformFile *pIVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *local_res20;
  longlong local_28 [2];
  
  pIVar2 = IPlatformFile::GetPlatformPhysical();
  plVar3 = (longlong *)(**(code **)((longlong)*pIVar2 + 0xe8))(pIVar2,param_1,1);
  if (plVar3 == (longlong *)0x0) {
    __return_storage_ptr__->Object = (IAnalysisSession *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  puVar4 = ::operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[2] = 0;
    *puVar4 = &`TraceServices::FAnalysisService::StartAnalysis'::`2'::FFileDataStream::_vftable_;
    puVar4[1] = 0;
  }
  plVar1 = puVar4 + 1;
  if (plVar1 == local_28) {
    puVar5 = (undefined8 *)*plVar3;
    plVar7 = plVar3;
  }
  else {
    plVar7 = (longlong *)*plVar1;
    *plVar1 = (longlong)plVar3;
    if (plVar7 == (longlong *)0x0) goto LAB_14d403629;
    puVar5 = (undefined8 *)*plVar7;
  }
  (*(code *)*puVar5)(plVar7,1);
LAB_14d403629:
  uVar6 = (**(code **)(*plVar3 + 0x50))(plVar3);
  puVar4[2] = uVar6;
  local_res20 = puVar4;
  (**(code **)(this->_padding_ + 8))(this,__return_storage_ptr__,0xffffffff,param_1,&local_res20);
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  return __return_storage_ptr__;
}

