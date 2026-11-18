// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 14

// FLiveLinkModule @ 14d011b40

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkModule * __thiscall FLiveLinkModule::FLiveLinkModule(FLiveLinkModule *this)

{
  FLiveLinkClient *this_00;
  FLiveLinkMotionController *this_01;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this_02;
  FDelegateHandle FVar4;
  FGuid *pFVar5;
  FLiveLinkHeartbeatEmitter *this_03;
  FLiveLinkMessageBusDiscoveryManager *pFVar6;
  FLiveLinkMessageBusDiscoveryManager *this_04;
  FLiveLinkDebugCommand *this_05;
  FLiveLinkMessageBusDiscoveryManager *pFVar7;
  code *local_18;
  undefined8 uStack_10;
  
  this_00 = &this->LiveLinkClient;
  this->_padding_ = (longlong)&___7FLiveLinkModule__6B_;
  FLiveLinkClient::FLiveLinkClient(this_00,&FCoreDelegates::OnSamplingInput);
  this_01 = &this->LiveLinkMotionController;
  pFVar7 = (FLiveLinkMessageBusDiscoveryManager *)0x0;
  this_00->_padding_ = (longlong)&___7FLiveLinkClient__6B_;
  this_01->_padding_ = (longlong)&___7FLiveLinkMotionController__6B_;
  (this->LiveLinkMotionController).EnumeratedSources.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LiveLinkMotionController).EnumeratedSources.ArrayNum = 0;
  (this->LiveLinkMotionController).EnumeratedSources.ArrayMax = 0;
  (this->LiveLinkMotionController).Client = this_00;
  (this->LiveLinkMotionController).OnSubjectsChangedHandle.ID = 0;
  (this->LiveLinkMotionController).WildcardSource.A = 0;
  (this->LiveLinkMotionController).WildcardSource.B = 0;
  (this->LiveLinkMotionController).WildcardSource.C = 0;
  (this->LiveLinkMotionController).WildcardSource.D = 0;
  FLiveLinkMotionController::BuildSourceData(this_01);
  this_02 = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
            (**(code **)(((this->LiveLinkMotionController).Client)->_padding_ + 0x1e0))();
  uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
  local_18 = FLiveLinkMotionController::OnSubjectsChangedHandler;
  FVar4 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddRaw<FLiveLinkMotionController>
                    (this_02,(FLiveLinkMotionController *)&stack0x00000008,(pmf_e598784a *)this_01);
                    /* WARNING: Load size is inaccurate */
  (this->LiveLinkMotionController).OnSubjectsChangedHandle.ID = *FVar4.ID;
  pFVar5 = FGuid::NewGuid((FGuid *)&local_18);
  uVar1 = pFVar5->B;
  uVar2 = pFVar5->C;
  uVar3 = pFVar5->D;
  (this->LiveLinkMotionController).WildcardSource.A = pFVar5->A;
  (this->LiveLinkMotionController).WildcardSource.B = uVar1;
  (this->LiveLinkMotionController).WildcardSource.C = uVar2;
  (this->LiveLinkMotionController).WildcardSource.D = uVar3;
  (this->StyleSet).Object = (FSlateStyleSet *)0x0;
  (this->StyleSet).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this_03 = ::operator_new(0x58);
  pFVar6 = pFVar7;
  if (this_03 != (FLiveLinkHeartbeatEmitter *)0x0) {
    pFVar6 = (FLiveLinkMessageBusDiscoveryManager *)
             FLiveLinkHeartbeatEmitter::FLiveLinkHeartbeatEmitter(this_03);
  }
  (this->HeartbeatEmitter).Ptr = (FLiveLinkHeartbeatEmitter *)pFVar6;
  this_04 = ::operator_new(0x90);
  pFVar6 = pFVar7;
  if (this_04 != (FLiveLinkMessageBusDiscoveryManager *)0x0) {
    pFVar6 = FLiveLinkMessageBusDiscoveryManager::FLiveLinkMessageBusDiscoveryManager(this_04);
  }
  (this->DiscoveryManager).Ptr = pFVar6;
  this_05 = ::operator_new(0x40);
  if (this_05 != (FLiveLinkDebugCommand *)0x0) {
    pFVar7 = (FLiveLinkMessageBusDiscoveryManager *)
             FLiveLinkDebugCommand::FLiveLinkDebugCommand(this_05,this_00);
  }
  (this->LiveLinkDebugCommand).Ptr = (FLiveLinkDebugCommand *)pFVar7;
  *(undefined8 *)&this->RegisteredSourceFilters = 0;
  *(undefined8 *)&(this->RegisteredSourceFilters).field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredSourceFilters).field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredSourceFilters).field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredSourceFilters).field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredSourceFilters).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredSourceFilters).field_0x34 = 0;
  *(undefined8 *)&(this->RegisteredSourceFilters).field_0x40 = 0;
  *(undefined4 *)&(this->RegisteredSourceFilters).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&this->OutboundNameModifiedDelegate,4000);
  *(undefined8 *)&(this->OutboundNameModifiedDelegate).field_0x28 = 0;
  *(undefined8 *)&(this->OutboundNameModifiedDelegate).field_0x30 = 0;
  *(undefined8 *)&(this->OutboundNameModifiedDelegate).field_0x38 = 2;
  return this;
}

// ~FLiveLinkModule @ 14d016190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkModule::~FLiveLinkModule(FLiveLinkModule *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  FLiveLinkDebugCommand *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FAutoConsoleCommand *pFVar6;
  FLiveLinkMessageBusDiscoveryManager *pFVar7;
  FLiveLinkHeartbeatEmitter *pFVar8;
  FDelegateHandle FVar9;
  FScriptContainerElement *pFVar10;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OutboundNameModifiedDelegate).field_0x28,
             *(int *)&(this->OutboundNameModifiedDelegate).field_0x30);
  pvVar3 = *(void **)&(this->OutboundNameModifiedDelegate).field_0x28;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OutboundNameModifiedDelegate);
  *(undefined4 *)&(this->RegisteredSourceFilters).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RegisteredSourceFilters).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RegisteredSourceFilters);
  pFVar4 = (this->LiveLinkDebugCommand).Ptr;
  if (pFVar4 != (FLiveLinkDebugCommand *)0x0) {
    pTVar5 = (pFVar4->DebugViewGame).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    pTVar5 = (pFVar4->DebugViewEditor).WeakReferenceCount.ReferenceController;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    pFVar6 = (pFVar4->CommandHide).Ptr;
    if (pFVar6 != (FAutoConsoleCommand *)0x0) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
    }
    pFVar6 = (pFVar4->CommandShow).Ptr;
    if (pFVar6 != (FAutoConsoleCommand *)0x0) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
    }
    ::operator_delete(pFVar4,0x40);
  }
  pFVar7 = (this->DiscoveryManager).Ptr;
  if (pFVar7 != (FLiveLinkMessageBusDiscoveryManager *)0x0) {
    (**(code **)(pFVar7->_padding_ + 0x28))(pFVar7,1);
  }
  pFVar8 = (this->HeartbeatEmitter).Ptr;
  if (pFVar8 != (FLiveLinkHeartbeatEmitter *)0x0) {
    (**(code **)(pFVar8->_padding_ + 0x28))(pFVar8,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StyleSet).SharedReferenceCount.ReferenceController);
  (this->LiveLinkMotionController)._padding_ = (longlong)&___7FLiveLinkMotionController__6B_;
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            (**(code **)(((this->LiveLinkMotionController).Client)->_padding_ + 0x1e0))();
  FVar9.ID = (this->LiveLinkMotionController).OnSubjectsChangedHandle.ID;
  if (FVar9.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance(this_00,FVar9);
  }
  (this->LiveLinkMotionController).OnSubjectsChangedHandle.ID = 0;
  pFVar10 = (this->LiveLinkMotionController).EnumeratedSources.AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  (this->LiveLinkMotionController)._padding_ = (longlong)&___7IMotionController__6B_;
  FLiveLinkClient::~FLiveLinkClient(&this->LiveLinkClient);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  return;
}

// CreateStyle @ 14d0369e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkModule::CreateStyle(FLiveLinkModule *this)

{
  code *pcVar1;
  void *_Src;
  bool bVar2;
  FSlateImageBrush *pFVar3;
  IPluginManager *pIVar4;
  longlong *plVar5;
  FSlateImageBrush *pFVar6;
  FName *pFVar7;
  FString *pFVar8;
  FSlateImageBrush *pFVar9;
  TSharedPtr<FSlateStyleSet,1> *pTVar10;
  FSlateImageBrush *pFVar11;
  uint uVar12;
  FSlateStyleSet *pFVar13;
  FDeprecateVector2DParameter local_res8;
  FDeprecateVector2DParameter local_res10;
  FDeprecateVector2DParameter local_res18;
  FDeprecateVector2DParameter local_res20;
  FString local_1f8;
  undefined8 *local_1e8;
  FSharedReferencer<1> FStack_1e0;
  FDeprecateVector2DParameter local_1d8;
  void *local_1d0;
  int local_1c8;
  FLinearColor_u_0 local_1c0;
  undefined1 local_1b0;
  FLinearColor_u_0 local_1a8;
  undefined1 local_198;
  FLinearColor_u_0 local_190;
  undefined1 local_180;
  FLinearColor_u_0 local_178;
  undefined1 local_168;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8 [2];
  wchar_t *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  TReferenceControllerBase<1> *local_90;
  FLinearColor_u_0 local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  pFVar9 = (FSlateImageBrush *)0x0;
  local_res8._0_4_ = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LiveLinkStyle,L"LiveLinkCoreStyle");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar3 = ::operator_new(0x410);
  if (pFVar3 == (FSlateImageBrush *)0x0) {
    local_1e8 = ___xmm_00000000000000000000000000000010;
    pFVar13 = (FSlateStyleSet *)&DAT_00000010;
    FStack_1e0.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    pFVar3 = pFVar9;
  }
  else {
    *(undefined4 *)&pFVar3->field_0x8 = 1;
    *(undefined4 *)&pFVar3->field_0xc = 1;
    *(undefined ***)pFVar3 =
         &___7__TIntrusiveReferenceController_VFSlateStyleSet___00_SharedPointerInternals__6B_;
    FSlateStyleSet::FSlateStyleSet((FSlateStyleSet *)&pFVar3->field_0x10,&LiveLinkStyle);
    pFVar13 = (FSlateStyleSet *)&pFVar3->field_0x10;
    if ((pFVar13 == (FSlateStyleSet *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    LOCK();
    *(int *)&pFVar3->field_0x8 = *(int *)&pFVar3->field_0x8 + 1;
    UNLOCK();
    FStack_1e0.ReferenceController = (TReferenceControllerBase<1> *)pFVar3;
    local_1e8 = (undefined8 *)pFVar13;
  }
  pTVar10 = &this->StyleSet;
  if (pTVar10 != (TSharedPtr<FSlateStyleSet,1> *)&local_1e8) {
    pTVar10->Object = pFVar13;
    local_1e8 = (undefined8 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->StyleSet).SharedReferenceCount,&FStack_1e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar3);
  FSlateStyleRegistry::RegisterSlateStyle((ISlateStyle *)pTVar10->Object);
  pIVar4 = IPluginManager::Get();
  uStack_150 = 8;
  local_158 = L"LiveLink";
  uStack_a0 = CONCAT44(uStack_14c,8);
  local_a8 = L"LiveLink";
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x70))(pIVar4,local_98,&local_a8);
  if ((*plVar5 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (**(code **)(*(longlong *)*plVar5 + 0x30))((longlong *)*plVar5,&local_1d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
  if ((pTVar10->Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar13 = pTVar10->Object;
  pFVar6 = ::operator_new(0xb0);
  _Src = local_1d0;
  pFVar3 = pFVar9;
  pFVar11 = pFVar9;
  if (pFVar6 != (FSlateImageBrush *)0x0) {
    local_88._0_8_ = ___xmm_3f8000003f8000003f8000003f800000;
    local_88._8_8_ = _UNK_15076b1f8;
    local_res8._0_4_ = 0x41800000;
    local_res8._4_4_ = 0x41800000;
    local_1f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar12 = (0xe - (uint)(local_1c8 != 0)) + local_1c8;
    if ((int)uVar12 < local_1c8) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar12,0,(ForAnyElementType *)&local_1f8,local_1c8,&local_1f8.Data.ArrayMax);
    if (local_1c8 != 0) {
      memcpy(local_1f8.Data.AllocatorInstance.Data,_Src,(longlong)local_1c8 * 2);
    }
    ::FString::PathAppend(&local_1f8,L"LiveLink_16x",0xc);
    ::FString::ConcatFC(&local_148,&local_1f8,L".png");
    pFVar3 = FSlateImageBrush::FSlateImageBrush
                       (pFVar6,&local_148,&local_res8,(FLinearColor *)&local_88._s_0,NoTile,
                        FullColor);
    pFVar11 = (FSlateImageBrush *)&DAT_00000003;
  }
  pFVar7 = ::FName::FName(&local_f8,"LiveLinkIcon");
  FSlateStyleSet::Set<FSlateImageBrush>(pFVar13,*pFVar7,pFVar3);
  if ((((ulonglong)pFVar11 & 2) != 0) &&
     (pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 & 0xfffffffd),
     local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pFVar11 & 1) != 0) &&
     (pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 & 0xfffffffe),
     local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  local_1c0._0_8_ = ___xmm_3f8000003d96bb993f49930c3c6f34d7;
  local_1c0._8_8_ = _UNK_152aaafa8;
  local_1b0 = 0;
  local_1a8._0_8_ = ___xmm_3f800000000000003eee48e93f800000;
  local_1a8._8_8_ = _UNK_152aaaf88;
  local_198 = 0;
  local_178._0_8_ = ___xmm_3f8000003d185f073d185f073f5a36e3;
  local_178._8_8_ = _UNK_152aaaf98;
  local_168 = 0;
  local_190._0_8_ = ___xmm_3f8000003e5d14e43e5d14e43e5d14e4;
  local_190._8_8_ = _UNK_152aaafb8;
  local_180 = 0;
  if ((pTVar10->Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar13 = pTVar10->Object;
  pFVar7 = ::FName::FName(&local_f0,"LiveLink.Color.Valid");
  FSlateStyleSet::Set(pFVar13,*pFVar7,(FSlateColor *)&local_1c0._s_0);
  if ((pTVar10->Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar13 = pTVar10->Object;
  pFVar7 = ::FName::FName(&local_e8,"LiveLink.Color.Invalid");
  FSlateStyleSet::Set(pFVar13,*pFVar7,(FSlateColor *)&local_1a8._s_0);
  if ((pTVar10->Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar13 = pTVar10->Object;
  pFVar7 = ::FName::FName(&local_e0,"LiveLink.Color.Error");
  FSlateStyleSet::Set(pFVar13,*pFVar7,(FSlateColor *)&local_178._s_0);
  if ((pTVar10->Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar13 = pTVar10->Object;
  pFVar7 = ::FName::FName(&local_d8,"LiveLink.Color.Paused");
  FSlateStyleSet::Set(pFVar13,*pFVar7,(FSlateColor *)&local_190._s_0);
  if ((pTVar10->Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar13 = pTVar10->Object;
  pFVar6 = ::operator_new(0xb0);
  pFVar3 = pFVar9;
  if (pFVar6 != (FSlateImageBrush *)0x0) {
    local_res10._0_4_ = 0x41800000;
    local_res10._4_4_ = 0x41800000;
    ::FString::FString(&local_138,L"Starship/Checkmark");
    pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 | 0xc);
    pFVar8 = LiveLinkModuleUtils::InPluginContent(&local_78,&local_138,".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar6,pFVar8,&local_res10,(FSlateColor *)&local_1c0._s_0,NoTile,Vector);
    *(undefined ***)pFVar6 = &___7FSlateVectorImageBrush__6B_;
    pFVar3 = pFVar6;
  }
  pFVar7 = ::FName::FName(&local_d0,"LiveLink.Subject.Okay");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar13,*pFVar7,(FSlateVectorImageBrush *)pFVar3);
  if ((((ulonglong)pFVar11 & 8) != 0) &&
     (pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 & 0xfffffff7),
     local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pFVar11 & 4) != 0) &&
     (pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 & 0xfffffffb),
     local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  if ((pTVar10->Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar13 = pTVar10->Object;
  pFVar6 = ::operator_new(0xb0);
  pFVar3 = pFVar9;
  if (pFVar6 != (FSlateImageBrush *)0x0) {
    local_res18._0_4_ = 0x41800000;
    local_res18._4_4_ = 0x41800000;
    ::FString::FString(&local_128,L"Starship/Warning");
    pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 | 0x30);
    pFVar8 = LiveLinkModuleUtils::InPluginContent(&local_68,&local_128,".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar6,pFVar8,&local_res18,(FSlateColor *)&local_1a8._s_0,NoTile,Vector);
    *(undefined ***)pFVar6 = &___7FSlateVectorImageBrush__6B_;
    pFVar3 = pFVar6;
  }
  pFVar7 = ::FName::FName(&local_c8,"LiveLink.Subject.Warning");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar13,*pFVar7,(FSlateVectorImageBrush *)pFVar3);
  if ((((ulonglong)pFVar11 & 0x20) != 0) &&
     (pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 & 0xffffffdf),
     local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pFVar11 & 0x10) != 0) &&
     (pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 & 0xffffffef),
     local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  if ((pTVar10->Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar13 = pTVar10->Object;
  pFVar6 = ::operator_new(0xb0);
  pFVar3 = pFVar9;
  if (pFVar6 != (FSlateImageBrush *)0x0) {
    local_res20._0_4_ = 0x41800000;
    local_res20._4_4_ = 0x41800000;
    ::FString::FString(&local_118,L"Starship/Pause");
    pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 | 0xc0);
    pFVar8 = LiveLinkModuleUtils::InPluginContent(&local_58,&local_118,".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar6,pFVar8,&local_res20,(FSlateColor *)&local_190._s_0,NoTile,Vector);
    *(undefined ***)pFVar6 = &___7FSlateVectorImageBrush__6B_;
    pFVar3 = pFVar6;
  }
  pFVar7 = ::FName::FName(&local_c0,"LiveLink.Subject.Pause");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar13,*pFVar7,(FSlateVectorImageBrush *)pFVar3);
  if (((char)pFVar11 < '\0') &&
     (pFVar11 = (FSlateImageBrush *)(ulonglong)((uint)pFVar11 & 0xffffff7f),
     local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if ((((ulonglong)pFVar11 & 0x40) != 0) &&
     (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  if ((pTVar10->Object == (FSlateStyleSet *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar13 = pTVar10->Object;
  pFVar3 = ::operator_new(0xb0);
  bVar2 = pFVar3 != (FSlateImageBrush *)0x0;
  if (bVar2) {
    local_1d8._0_4_ = 0x41800000;
    local_1d8._4_4_ = 0x41800000;
    ::FString::FString(&local_108,L"Starship/Error");
    pFVar8 = LiveLinkModuleUtils::InPluginContent(&local_48,&local_108,".svg");
    FSlateImageBrush::FSlateImageBrush
              (pFVar3,pFVar8,&local_1d8,(FSlateColor *)&local_178._s_0,NoTile,Vector);
    *(undefined ***)pFVar3 = &___7FSlateVectorImageBrush__6B_;
    pFVar9 = pFVar3;
  }
  pFVar7 = ::FName::FName(local_b8,"LiveLink.Subject.Error");
  FSlateStyleSet::Set<FSlateVectorImageBrush>(pFVar13,*pFVar7,(FSlateVectorImageBrush *)pFVar9);
  if ((bVar2) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_1d0 != (void *)0x0) {
    FMemory::Free(local_1d0);
  }
  return;
}

// GetHeartbeatEmitter @ 14d04db20

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkHeartbeatEmitter * __thiscall FLiveLinkModule::GetHeartbeatEmitter(FLiveLinkModule *this)

{
  return (this->HeartbeatEmitter).Ptr;
}

// GetMessageBusDiscoveryManager @ 14d0500e0

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkMessageBusDiscoveryManager * __thiscall
FLiveLinkModule::GetMessageBusDiscoveryManager(FLiveLinkModule *this)

{
  return (this->DiscoveryManager).Ptr;
}

// GetSourceFilters @ 14d0554c0

/* WARNING: Enum "Type": Some values do not have unique names */

TMap<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>_>
* __thiscall FLiveLinkModule::GetSourceFilters(FLiveLinkModule *this)

{
  return &this->RegisteredSourceFilters;
}

// GetStyle @ 14d056690

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FSlateStyleSet,1> * __thiscall
FLiveLinkModule::GetStyle
          (FLiveLinkModule *this,TSharedPtr<FSlateStyleSet,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  __return_storage_ptr__->Object = (this->StyleSet).Object;
  pTVar1 = (this->StyleSet).SharedReferenceCount.ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// OnEngineLoopInitComplete @ 14d0644c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkModule::OnEngineLoopInitComplete(FLiveLinkModule *this)

{
  UObject *pUVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  UClass *pUVar7;
  ULiveLinkPreset *this_00;
  FString local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  TFunction<void___cdecl(bool)> local_48;
  
  pwVar5 = FCommandLine::Get();
  ::FString::FString(&local_88,pwVar5);
  iVar2 = ::FString::Find(&local_88,L"LiveLink.Preset.Apply Preset=",0x1d,IgnoreCase,FromStart,-1);
  if (iVar2 == -1) {
LAB_14d0646fb:
    pUVar7 = ULiveLinkSettings::StaticClass();
    if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar7);
    }
    pUVar1 = (pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
    this_00 = (ULiveLinkPreset *)
              TPersistentObjectPtr<FSoftObjectPath>::Get
                        ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar1[2].field_0x10);
    if (this_00 == (ULiveLinkPreset *)0x0) {
      if (*(longlong *)&pUVar1[2].field_0x18 != 0) {
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)&pUVar1[2].field_0x18,(FUObjectSerializeContext *)0x0);
        this_00 = (ULiveLinkPreset *)
                  TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)&pUVar1[2].field_0x10);
        goto LAB_14d064749;
      }
LAB_14d064771:
      this_00 = (ULiveLinkPreset *)0x0;
    }
    else {
LAB_14d064749:
      if (this_00 == (ULiveLinkPreset *)0x0) goto LAB_14d064771;
      pUVar7 = ULiveLinkPreset::StaticClass();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) goto LAB_14d064771;
    }
    if (this_00 == (ULiveLinkPreset *)0x0) goto LAB_14d06478d;
  }
  else {
    ::FString::FString((FString *)&local_78,",");
    iVar3 = local_78.Size + -1;
    if (local_78.Size == 0) {
      iVar3 = 0;
    }
    pwVar5 = L"";
    if (local_78.Size != 0) {
      pwVar5 = local_78.DataPtr;
    }
    iVar3 = ::FString::Find(&local_88,pwVar5,iVar3,IgnoreCase,FromStart,iVar2);
    if (local_78.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
    ::FString::FString((FString *)&local_78,"\"");
    iVar4 = local_78.Size + -1;
    if (local_78.Size == 0) {
      iVar4 = 0;
    }
    pwVar5 = L"";
    if (local_78.Size != 0) {
      pwVar5 = local_78.DataPtr;
    }
    iVar4 = ::FString::Find(&local_88,pwVar5,iVar4,IgnoreCase,FromStart,iVar2);
    if (local_78.DataPtr != (wchar_t *)0x0) {
      FMemory::Free(local_78.DataPtr);
    }
    if (iVar3 == -1) {
joined_r0x00014d0645f4:
      iVar3 = iVar4;
      if (iVar3 == -1) goto LAB_14d0646fb;
    }
    else if (iVar4 != -1) {
      if (iVar3 < iVar4) {
        iVar4 = iVar3;
      }
      goto joined_r0x00014d0645f4;
    }
    iVar2 = iVar2 + 0x1d;
    if (((((iVar2 < 0) || (local_88.Data.ArrayNum == 0)) || (local_88.Data.ArrayNum + -1 <= iVar2))
        || ((iVar3 < 0 || (local_88.Data.ArrayNum == 0)))) || (local_88.Data.ArrayNum + -1 <= iVar3)
       ) goto LAB_14d0646fb;
    ::FString::Mid(&local_88,&local_58,iVar2,iVar3 - iVar2);
    local_78.Size = 0;
    local_78._12_4_ = 0;
    local_78.DataPtr = (wchar_t *)0x0;
    if (local_58.Data.ArrayNum == 0) {
      local_68.DataPtr = L"";
LAB_14d064672:
      sVar6 = wcslen(local_68.DataPtr);
      local_68.Size = (int)sVar6;
    }
    else {
      local_68.Size = 0;
      local_68.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_14d064672;
    }
    pUVar7 = ULiveLinkPreset::StaticClass();
    this_00 = (ULiveLinkPreset *)
              StaticLoadObject(pUVar7,(UObject *)0x0,&local_68,&local_78,0,(UPackageMap *)0x0,true,
                               (FLinkerInstancingContext *)0x0);
    if (this_00 == (ULiveLinkPreset *)0x0) {
LAB_14d0646e5:
      this_00 = (ULiveLinkPreset *)0x0;
    }
    else {
      pUVar7 = ULiveLinkPreset::StaticClass();
      iVar2 = (int)pUVar7->_padding_;
      if ((*(int *)(this_00->_padding_ + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar7->_padding_)) goto LAB_14d0646e5;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (this_00 == (ULiveLinkPreset *)0x0) goto LAB_14d0646fb;
  }
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  ULiveLinkPreset::ApplyToClientLatent(this_00,&local_48);
LAB_14d06478d:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// OnSubjectOutboundNameModified @ 14d06b070

/* WARNING: Enum "Type": Some values do not have unique names */

TMulticastDelegate<void___cdecl(FLiveLinkSubjectKey_const_&,FString_const_&,FString_const_&),FDefaultTSDelegateUserPolicy>
* __thiscall FLiveLinkModule::OnSubjectOutboundNameModified(FLiveLinkModule *this)

{
  return &this->OutboundNameModifiedDelegate;
}

// RegisterMessageBusSourceFilter @ 14d075a90

/* WARNING: Enum "Type": Some values do not have unique names */

FDelegateHandle __thiscall
FLiveLinkModule::RegisterMessageBusSourceFilter
          (FLiveLinkModule *this,
          TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
          *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
  *this_00;
  undefined8 uVar3;
  TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>
  *in_R8;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)in_R8,&local_28);
  if ((*(int *)&in_R8->field_0x10 == 0) ||
     (plVar1 = *(longlong **)&in_R8->field_0x8, plVar1 == (longlong *)0x0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8);
    uVar3 = *puVar2;
  }
  *(undefined8 *)param_1 = uVar3;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  this_00 = TMapBase<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>_>
            ::FindOrAddImpl<FDelegateHandle_const_&>
                      ((TMapBase<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>_>
                        *)&this->RegisteredSourceFilters,
                       (int)((ulonglong)*(undefined8 *)param_1 >> 0x20) * 0x17 +
                       (int)*(undefined8 *)param_1,(FDelegateHandle *)param_1);
  TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>::
  CopyFrom<FDefaultDelegateUserPolicy>(this_00,in_R8);
  return (FDelegateHandle)(ulong64)param_1;
}

// ShutdownModule @ 14d07fba0

/* WARNING: Removing unreachable block (ram,0x00014d07fcaa) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkModule::ShutdownModule(FLiveLinkModule *this)

{
  IModularFeatures *pIVar1;
  TArray<FLiveLinkMotionController::FLiveLinkMotionControllerEnumeratedSource,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FName local_res8;
  FLLMScope local_res10 [2];
  FMemScope local_res18 [2];
  
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_LiveLink.UniqueName,false,None,Default,true);
  local_res8 = LLMTagDeclaration_LiveLink.UniqueName;
  FMemScope::FMemScope(local_res18,&local_res8,true);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnFEngineLoopInitComplete,this);
  (**(code **)(((this->HeartbeatEmitter).Ptr)->_padding_ + 0x18))();
  (**(code **)(((this->DiscoveryManager).Ptr)->_padding_ + 0x10))();
  pIVar1 = IModularFeatures::Get();
  pTVar2 = &(this->LiveLinkMotionController).EnumeratedSources;
  if (this == (FLiveLinkModule *)0xfffffffffffffdf0) {
    pTVar2 = (TArray<FLiveLinkMotionController::FLiveLinkMotionControllerEnumeratedSource,TSizedDefaultAllocator<32>_>
              *)0x0;
  }
  (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,IMotionController::FeatureName,pTVar2);
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
  FConfigCacheIni::GetBool
            (GConfig,L"LiveLink",L"bUseModularClientReference",(bool *)&local_res8,&GEngineIni);
  if ((char)local_res8.ComparisonIndex.Value == '\0') {
    pIVar1 = IModularFeatures::Get();
    pTVar2 = (TArray<FLiveLinkMotionController::FLiveLinkMotionControllerEnumeratedSource,TSizedDefaultAllocator<32>_>
              *)&(this->LiveLinkClient).Collection;
    if (this == (FLiveLinkModule *)&DAT_fffffffffffffff8) {
      pTVar2 = (TArray<FLiveLinkMotionController::FLiveLinkMotionControllerEnumeratedSource,TSizedDefaultAllocator<32>_>
                *)0x0;
    }
    (**(code **)((longlong)*pIVar1 + 0x30))(pIVar1,ILiveLinkClient::ModularFeatureName,pTVar2);
    LOCK();
    LiveLinkClient_AnyThread = (FLiveLinkClient *)0x0;
    UNLOCK();
  }
  FSlateStyleRegistry::UnRegisterSlateStyle((ISlateStyle *)(this->StyleSet).Object);
  FLiveLinkLogInstance::DestroyInstance();
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res10);
  return;
}

// StartupModule @ 14d080300

/* WARNING: Removing unreachable block (ram,0x00014d080524) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLiveLinkModule::StartupModule(FLiveLinkModule *this)

{
  FLiveLinkLog FVar1;
  code *pcVar2;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar3;
  TUniquePtr<FLiveLinkLog,TDefaultDelete<FLiveLinkLog>_> TVar4;
  bool bVar5;
  FLiveLinkLogInstance *pFVar6;
  IModularFeatures *pIVar7;
  TArray<FLiveLinkMotionController::FLiveLinkMotionControllerEnumeratedSource,TSizedDefaultAllocator<32>_>
  *pTVar8;
  bool local_res8 [8];
  FLLMScope local_res10 [2];
  FLLMScope local_res18 [2];
  FName local_res20;
  FName local_48;
  longlong local_40;
  LARGE_INTEGER local_38;
  FMemScope local_30;
  FMemScope local_28;
  undefined1 local_20 [8];
  
  FLLMScope::FLLMScope(local_res18,LLMTagDeclaration_LiveLink.UniqueName,false,None,Default,true);
  local_res20 = LLMTagDeclaration_LiveLink.UniqueName;
  FMemScope::FMemScope(&local_28,&local_res20,true);
  FLLMScope::FLLMScope
            (local_res10,LLMTagDeclaration_LiveLink_LiveLinkLogInstance.UniqueName,false,None,
             Default,true);
  local_48 = LLMTagDeclaration_LiveLink_LiveLinkLogInstance.UniqueName;
  FMemScope::FMemScope(&local_30,&local_48,true);
  if (FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6492301340914483290>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLink\\Private\\LiveLinkLogInstance.cpp"
                       ,0x5a,"FLiveLinkLog::Instance == nullptr");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0) {
      FLiveLinkLogInstance::DestroyInstance();
    }
  }
  pFVar6 = ::operator_new(0x78);
  if (pFVar6 == (FLiveLinkLogInstance *)0x0) {
    pFVar6 = (FLiveLinkLogInstance *)0x0;
  }
  else {
    pFVar6->_padding_ = (longlong)&___7FLiveLinkLogInstance__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar6->CriticalSection,4000);
    (pFVar6->ToUpdateMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->ToUpdateMessages).ArrayNum = 0;
    (pFVar6->ToUpdateMessages).ArrayMax = 0;
    (pFVar6->RepeatableMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->RepeatableMessages).ArrayNum = 0;
    (pFVar6->RepeatableMessages).ArrayMax = 0;
    (pFVar6->DisabledMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->DisabledMessages).ArrayNum = 0;
    (pFVar6->DisabledMessages).ArrayMax = 0;
    pFVar6->ErrorCount = (TAtomic<int>)0x0;
    pFVar6->WarningCount = (TAtomic<int>)0x0;
    pFVar6->InfoCount = (TAtomic<int>)0x0;
    pFVar6->bSilentMode = false;
    pFVar6->bLogAllRepeatableMessage = false;
    FDateTime::Now();
    QueryPerformanceCounter(&local_38);
    pFVar6->HighPerformanceClockDelta =
         (double)(local_40 % 864000000000) * __real_3e7ad7f29abcaf48 -
         ((double)local_38.QuadPart * FGenericPlatformTime::SecondsPerCycle +
         __real_4170000000000000);
  }
  TVar3.Ptr = FLiveLinkLog::Instance.Ptr;
  TVar4.Ptr = FLiveLinkLog::Instance.Ptr;
  LiveLinkLogDetail::PrivateInstance = pFVar6;
  if (((FLiveLinkLogInstance *)FLiveLinkLog::Instance.Ptr != pFVar6) &&
     (TVar4.Ptr = (FLiveLinkLog *)pFVar6, FLiveLinkLog::Instance.Ptr != (FLiveLinkLog *)0x0)) {
    FVar1 = *FLiveLinkLog::Instance.Ptr;
    FLiveLinkLog::Instance.Ptr = (FLiveLinkLog *)pFVar6;
    (**(code **)FVar1)(TVar3.Ptr,1);
    TVar4.Ptr = FLiveLinkLog::Instance.Ptr;
  }
  FLiveLinkLog::Instance.Ptr = TVar4.Ptr;
  FMemScope::~FMemScope(&local_30);
  FLLMScope::~FLLMScope(local_res10);
  CreateStyle(this);
  local_res8[0] = false;
  FConfigCacheIni::GetBool(GConfig,L"LiveLink",L"bUseModularClientReference",local_res8,&GEngineIni)
  ;
  if (local_res8[0] == false) {
    LOCK();
    UNLOCK();
    LiveLinkClient_AnyThread = &this->LiveLinkClient;
    pIVar7 = IModularFeatures::Get();
    pTVar8 = (TArray<FLiveLinkMotionController::FLiveLinkMotionControllerEnumeratedSource,TSizedDefaultAllocator<32>_>
              *)&(this->LiveLinkClient).Collection;
    if (&this->LiveLinkClient == (FLiveLinkClient *)0x0) {
      pTVar8 = (TArray<FLiveLinkMotionController::FLiveLinkMotionControllerEnumeratedSource,TSizedDefaultAllocator<32>_>
                *)0x0;
    }
    (**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,ILiveLinkClient::ModularFeatureName,pTVar8);
  }
  pIVar7 = IModularFeatures::Get();
  pTVar8 = &(this->LiveLinkMotionController).EnumeratedSources;
  if (this == (FLiveLinkModule *)0xfffffffffffffdf0) {
    pTVar8 = (TArray<FLiveLinkMotionController::FLiveLinkMotionControllerEnumeratedSource,TSizedDefaultAllocator<32>_>
              *)0x0;
  }
  (**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,IMotionController::FeatureName,pTVar8);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FLiveLinkModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnFEngineLoopInitComplete,(FLiveLinkModule *)local_20,
             (pmf_1714868a)this);
  FMemScope::~FMemScope(&local_28);
  FLLMScope::~FLLMScope(local_res18);
  return;
}

// SupportsDynamicReloading @ 14d080aa0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FLiveLinkModule::SupportsDynamicReloading(FLiveLinkModule *this)

{
  return false;
}

// UnregisterMessageBusSourceFilter @ 14d086040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLiveLinkModule::UnregisterMessageBusSourceFilter(FLiveLinkModule *this,FDelegateHandle param_1)

{
  FDelegateHandle local_res10 [3];
  
  if (*(int *)&(this->RegisteredSourceFilters).field_0x8 !=
      *(int *)&(this->RegisteredSourceFilters).field_0x34) {
    local_res10[0].ID = param_1.ID;
    TSet<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
    ::RemoveImpl<FDelegateHandle>
              ((TSet<TTuple<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FDelegateHandle,TDelegate<bool___cdecl(UClass_*,TSharedPtr<FProviderPollResult,1>),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
                *)&this->RegisteredSourceFilters,(int)param_1.ID + (int)(param_1.ID >> 0x20) * 0x17,
               local_res10);
  }
  return;
}

