// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 14

// SLoadGuard @ 14a7ab070

SLoadGuard * __thiscall SLoadGuard::SLoadGuard(SLoadGuard *this)

{
  undefined1 *this_00;
  EWidgetUpdateFlags EVar1;
  EWidgetUpdateFlags EVar2;
  
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this_00 = &(this->LazyAsset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7SLoadGuard__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->LazyAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->LazyAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->LazyAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->LazyAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->ContentBorder).Object = (SBorder *)0x0;
  (this->ContentBorder).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GuardBorder).Object = (SBorder *)0x0;
  (this->GuardBorder).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->GuardTextBlock).Object = (STextBlock *)0x0;
  (this->GuardTextBlock).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->OnLoadingStateChanged = 0;
  *(undefined8 *)&(this->OnLoadingStateChanged).field_0x8 = 0;
  *(undefined4 *)&(this->OnLoadingStateChanged).field_0x10 = 0;
  (this->StreamingHandle).Object = (FStreamableHandle *)0x0;
  (this->StreamingHandle).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  EVar1 = (EWidgetUpdateFlags)this->_padding_;
  this->ThrobberSlot = (FSlot *)0x0;
  EVar2 = EVar1 & ~NeedsTick;
  this->bForceShowSpinner = false;
  this->bIsShowingSpinner = false;
  *(EWidgetUpdateFlags *)&this->_padding_ = EVar2;
  FWidgetProxyHandle::UpdateWidgetFlags
            ((FWidgetProxyHandle *)&this->_padding_,(SWidget *)this,EVar1,EVar2);
  return this;
}

// ~SLoadGuard @ 14a7b1a00

void __thiscall SLoadGuard::~SLoadGuard(SLoadGuard *this)

{
  void *pvVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StreamingHandle).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnLoadingStateChanged);
  pvVar1 = *(void **)&(this->OnLoadingStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoadingStateChanged);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GuardTextBlock).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->GuardBorder).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContentBorder).SharedReferenceCount.ReferenceController);
  pvVar1 = *(void **)&(this->LazyAsset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 14a7b6ae0

void __thiscall `SLoadGuard::GuardAndLoadAsset'::__l15::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong *plVar2;
  UObject *pUVar3;
  undefined8 *puVar4;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  FReadAccessScope local_28;
  
  if (((*(longlong *)((longlong)this + 8) != 0) && (*(longlong *)((longlong)this + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)((longlong)this + 0x10) + 8))) {
    pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)(*(longlong *)this + 0x2a8));
    if (pUVar3 != (UObject *)0x0) {
      lVar1 = *(longlong *)this;
      puVar4 = (undefined8 *)(lVar1 + 800);
      local_38 = 0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (puVar4 != &local_38) {
        *puVar4 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(lVar1 + 0x328),&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
      SLoadGuard::UpdateLoadingAppearance(*(SLoadGuard **)this);
      pUVar3 = TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)(*(longlong *)this + 0x2a8));
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
                 &local_28);
      if ((*(int *)((longlong)this + 0x28) != 0) &&
         (plVar2 = *(longlong **)((longlong)this + 0x20), plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x68))(plVar2,pUVar3);
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
    }
  }
  return;
}

// ComputeDesiredSize @ 14a7c4a10

TVector2<double> * __thiscall
SLoadGuard::ComputeDesiredSize
          (SLoadGuard *this,TVector2<double> *__return_storage_ptr__,float param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  TVector2<double> *pTVar4;
  FDeprecateSlateVector2D FVar5;
  
  if ((this->ContentBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TVector2<double> *)(*pcVar2)();
      return pTVar4;
    }
  }
  FVar5 = SWidget::GetDesiredSize((SWidget *)(this->ContentBorder).Object);
  uVar1 = *(undefined8 *)FVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)(float)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)(float)((ulonglong)uVar1 >> 0x20);
  return __return_storage_ptr__;
}

// Construct @ 14a7c6540

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall SLoadGuard::Construct(SLoadGuard *this,FArguments *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  SWidget *pSVar7;
  TReferenceControllerBase<1> *pTVar8;
  SHorizontalBox *pSVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  code *pcVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  FSharedReferencer<1> FVar17;
  bool bVar18;
  char cVar19;
  byte bVar20;
  UClass *pUVar21;
  UClass *pUVar22;
  UCommonTextStyle *this_00;
  TSharedRef<SWidget,1> *pTVar23;
  FArguments *pFVar24;
  UCommonUISettings *this_01;
  TSharedRef<SImage,1> *pTVar25;
  FArguments *pFVar26;
  FSlotArguments *pFVar27;
  FArguments *pFVar28;
  TSharedRef<SBorder,1> *pTVar29;
  FArguments *pFVar30;
  FArguments *pFVar31;
  FSlot *pFVar32;
  FSlotArguments *pFVar33;
  FArguments *pFVar34;
  TSharedRef<STextBlock,1> *pTVar35;
  TSharedRef<SHorizontalBox,1> *pTVar36;
  SScaleBox *pSVar37;
  SScaleBox *pSVar38;
  TSharedRef<SOverlay,1> *pTVar39;
  STextBlock *this_02;
  FSlotArguments *pFVar40;
  FSlotArguments *pFVar41;
  float fVar42;
  undefined4 local_res8 [2];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  T0RequiredArgs local_2038;
  T0RequiredArgs local_2037;
  T0RequiredArgs local_2036 [2];
  FLLMScope local_2034;
  FLLMScope local_2030;
  FLLMScope local_202c;
  FLLMScope local_2028;
  FLLMScope local_2024;
  FLLMScope local_2020;
  FLLMScope local_201c;
  SBorder *local_2018;
  FSharedReferencer<1> local_2010;
  SBorder *local_2008;
  FSharedReferencer<1> local_2000;
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs> local_1ff8;
  SImage *local_1fe0;
  FArguments *local_1fd8;
  TObjectPtr<UClass>_u_0 local_1fd0;
  SImage *local_1fc8;
  FSharedReferencer<1> local_1fc0;
  SWidget *local_1fb8;
  TReferenceControllerBase<1> *pTStack_1fb0;
  uchar local_1fa8;
  undefined1 local_1fa7;
  undefined1 local_1fa0 [8];
  void *pvStack_1f98;
  undefined8 local_1f90;
  uchar local_1f88;
  undefined1 local_1f87;
  undefined1 local_1f80 [8];
  void *pvStack_1f78;
  undefined8 local_1f70;
  undefined4 local_1f68;
  undefined1 local_1f64;
  undefined1 local_1f60 [8];
  void *pvStack_1f58;
  undefined8 local_1f50;
  undefined4 local_1f48;
  undefined1 local_1f44;
  undefined1 local_1f40 [8];
  void *pvStack_1f38;
  undefined8 local_1f30;
  undefined8 local_1f28;
  FSharedReferencer<1> local_1f20;
  undefined8 local_1f18;
  undefined1 local_1f10;
  undefined1 local_1f08 [8];
  void *pvStack_1f00;
  undefined8 local_1ef8;
  FSlateBrush *local_1ef0;
  undefined1 local_1ee8;
  undefined1 local_1ee0 [8];
  void *pvStack_1ed8;
  undefined8 local_1ed0;
  FName local_1ec8;
  FMemScope local_1ec0;
  FName local_1eb8;
  FMemScope local_1eb0;
  FSlot *local_1ea8;
  FSlot *local_1ea0;
  FName local_1e98;
  FMemScope local_1e90;
  FName local_1e88;
  FMemScope local_1e80;
  FName local_1e78;
  FMemScope local_1e70;
  FMemScope local_1e68;
  FSlotArguments *local_1e60;
  FArguments *local_1e58;
  FName local_1e50;
  FMemScope local_1e48;
  TReferenceControllerBase<1> *local_1e40;
  FName local_1e38;
  undefined4 local_1e30 [2];
  TSharedRef<SWidget,1> local_1e28;
  undefined4 local_1e18 [2];
  undefined4 local_1e10 [2];
  undefined4 local_1e08 [2];
  undefined4 local_1e00 [2];
  undefined4 local_1df8 [2];
  undefined1 local_1df0 [8];
  TObjectPtr<UClass>_u_0 local_1de8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_1de0;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1dc8;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_1db0;
  TSharedRef<SWidget,1> local_1d98;
  TAttribute<FSlateBrush_const_*> local_1d88;
  TAttribute<FText> local_1d60;
  TSharedRef<SBorder,1> local_1d30;
  TSharedRef<SHorizontalBox,1> local_1d20;
  TSharedRef<STextBlock,1> local_1d10;
  TSharedRef<SBorder,1> local_1d00;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_1cf0;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_1cd8;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_1cc0;
  TSharedRef<SImage,1> local_1ca8;
  TSharedRef<SWidget,1> local_1c98;
  SWidget *local_1c88;
  TReferenceControllerBase<1> *pTStack_1c80;
  SBorder *local_1c78;
  TReferenceControllerBase<1> *pTStack_1c70;
  STextBlock *local_1c68;
  TReferenceControllerBase<1> *pTStack_1c60;
  SWidget *local_1c58;
  TReferenceControllerBase<1> *pTStack_1c50;
  SBorder *local_1c48;
  TReferenceControllerBase<1> *pTStack_1c40;
  TSharedRef<SOverlay,1> local_1c38;
  undefined1 local_1c28 [56];
  void *local_1bf0;
  undefined1 local_1bc8 [56];
  void *local_1b90;
  undefined8 *local_1b68;
  STextBlock *local_1b60;
  FSharedReferencer<1> local_1b58 [4];
  undefined1 local_1b38 [24];
  undefined4 local_1b20;
  undefined1 local_1b1c;
  undefined4 local_1b18;
  undefined1 local_1b14;
  FSlotArgumentsMixin local_1b10;
  FSlot *local_1a80 [2];
  TReferenceControllerBase<1> *local_1a70;
  undefined1 local_1a50 [40];
  FSlotArgumentsMixin local_1a28;
  undefined1 local_1998 [536];
  undefined1 local_1780 [32];
  undefined1 local_1760 [32];
  undefined1 local_1740 [32];
  undefined1 local_1720 [24];
  FArguments local_1708;
  FArguments local_1500;
  FTextBlockStyle local_12f8;
  FArguments local_1018;
  FArguments local_d70;
  FArguments local_990;
  FArguments local_5b0;
  undefined8 uStack_48;
  
  uStack_48 = 0x14a7c655f;
  local_res8[0] = 0;
  FTextBlockStyle::FTextBlockStyle(&local_12f8);
  pUVar22 = (param_1->_GuardTextStyle).Class.field0_0x0.DebugPtr;
  if ((pUVar22 == (UClass *)0x0) ||
     (pUVar21 = UCommonTextStyle::StaticClass(), pUVar21 == (UClass *)0x0)) {
LAB_14a7c6616:
    local_1fd0.DebugPtr = (UClass *)0x0;
  }
  else {
    iVar4 = (int)pUVar21->_padding_;
    if (((int)pUVar22->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(pUVar22->_padding_ + (longlong)iVar4 * 8) !=
        &pUVar21->_padding_)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (!bVar18) goto LAB_14a7c6616;
    local_1fd0 = (TObjectPtr<UClass>_u_0)(param_1->_GuardTextStyle).Class.field0_0x0.DebugPtr;
    if (local_1fd0.DebugPtr != (UClass *)0x0) {
      local_1de8 = local_1fd0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)local_1fd0.DebugPtr);
      }
      pUVar22 = TSubclassOf<UCommonTextStyle>::operator*
                          ((TSubclassOf<UCommonTextStyle> *)&local_1de8.ObjectPtr);
      this_00 = GetDefault<UCommonTextStyle>(pUVar22);
      if (this_00 != (UCommonTextStyle *)0x0) {
        UCommonTextStyle::ToTextBlockStyle(this_00,&local_12f8);
      }
    }
  }
  TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::operator=
            (&this->OnLoadingStateChanged,&param_1->_OnLoadingStateChanged);
  if ((param_1->_Throbber).Object == (SWidget *)0x0) {
    pFVar24 = SImage::FArguments::FArguments(&local_1018);
    this_01 = ICommonUIModule::GetSettings();
    local_1d88.Value = UCommonUISettings::GetDefaultThrobberBrush(this_01);
    local_1d88.bIsSet = true;
    local_1d88.Getter._16_8_ = 0;
    local_1d88.Getter._0_8_ = 0;
    local_1d88.Getter._8_8_ = 0;
    pFVar24 = SImage::FArguments::Image(pFVar24,&local_1d88);
    FLLMScope::FLLMScope(&local_2034,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_1ec8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_1ec0,&local_1ec8,true);
    TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
              (&local_1cf0,"SImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
               ,0x2c,(T0RequiredArgs *)local_res8);
    FMemScope::~FMemScope(&local_1ec0);
    FLLMScope::~FLLMScope(&local_2034);
    pTVar25 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_1cf0,&local_1ca8,pFVar24);
    local_1e28.SharedReferenceCount.ReferenceController =
         (pTVar25->SharedReferenceCount).ReferenceController;
    local_1fe0 = pTVar25->Object;
    if (local_1e28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar23 = &local_1e28;
    bVar16 = false;
    bVar15 = true;
    bVar14 = true;
    bVar13 = true;
    bVar18 = true;
    local_1e28.Object = (SWidget *)local_1fe0;
  }
  else {
    pTVar23 = TSharedPtr<SWidget,1>::ToSharedRef(&param_1->_Throbber,&local_1c98);
    bVar16 = true;
    bVar15 = false;
    bVar14 = false;
    bVar13 = false;
    bVar18 = false;
    local_1fe0 = (SImage *)pTVar23->Object;
  }
  pTVar5 = (pTVar23->SharedReferenceCount).ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1e40 = pTVar5;
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e28.SharedReferenceCount.ReferenceController);
  }
  if (bVar13) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1ca8.SharedReferenceCount.ReferenceController);
  }
  if (bVar14) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1cf0._Widget.SharedReferenceCount.ReferenceController);
  }
  if (bVar15) {
    SImage::FArguments::~FArguments(&local_1018);
  }
  if (bVar16) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1c98.SharedReferenceCount.ReferenceController);
  }
  pFVar26 = SOverlay::FArguments::FArguments(&local_1500);
  pFVar27 = SOverlay::Slot((FSlotArguments *)local_1bc8,0);
  plVar1 = &pFVar27->_padding_;
  if ((longlong *)local_1e30 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar27->_padding_ + 4) = 1;
  }
  pFVar40 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar40 = pFVar27;
  }
  if ((longlong *)local_1e18 != &pFVar40->_padding_) {
    *(undefined4 *)&pFVar40->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar40->_padding_ + 4) = 1;
  }
  pFVar27 = (FSlotArguments *)0x0;
  if (pFVar40 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar27 = pFVar40;
  }
  pFVar28 = SBorder::FArguments::FArguments(&local_990);
  pFVar28 = SBorder::FArguments::Padding(pFVar28,0.0);
  local_1f10 = 1;
  local_1f18 = 0;
  local_1ef8 = 0;
  local_1f08 = (undefined1  [8])0x0;
  pvStack_1f00 = (void *)0x0;
  (pFVar28->_BorderImage).Value = (FSlateBrush *)0x0;
  (pFVar28->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f08);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f08);
  if (pvStack_1f00 != (void *)0x0) {
    FMemory::Free(pvStack_1f00);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f08);
  local_1fa8 = (uchar)EVisibility::SelfHitTestInvisible.Value.Value;
  local_1fa7 = 1;
  local_1f90 = 0;
  local_1fa0 = (undefined1  [8])0x0;
  pvStack_1f98 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar28->_padding_ =
       EVisibility::SelfHitTestInvisible.Value.Value;
  *(undefined1 *)((longlong)&pFVar28->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar28->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fa0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1fa0);
  if (pvStack_1f98 != (void *)0x0) {
    FMemory::Free(pvStack_1f98);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1fa0);
  pTVar6 = (param_1->_Content).Widget.SharedReferenceCount.ReferenceController;
  pSVar7 = (param_1->_Content).Widget.Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c88 = (pFVar28->_Content).Widget.Object;
  pTStack_1c80 = (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar28->_Content).Widget.Object = pSVar7;
  (pFVar28->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c80);
  FLLMScope::FLLMScope(&local_2030,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1eb8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1eb0,&local_1eb8,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1dc8,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
             ,0x35,local_res10);
  FMemScope::~FMemScope(&local_1eb0);
  FLLMScope::~FLLMScope(&local_2030);
  if (local_1dc8._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1dc8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1dc8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1c78 = (this->ContentBorder).Object;
  pTStack_1c70 = (this->ContentBorder).SharedReferenceCount.ReferenceController;
  (this->ContentBorder).Object = local_1dc8._Widget.Object;
  (this->ContentBorder).SharedReferenceCount.ReferenceController =
       local_1dc8._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c70);
  pTVar29 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1dc8,&local_1d00,pFVar28);
  pTVar6 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_2018 = pTVar29->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2010.ReferenceController = pTVar6;
  if ((SBorder **)&pFVar27->_padding_ != &local_2018) {
    pFVar27->_padding_ = (longlong)local_2018;
    local_2018 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar27->_padding_,&local_2010);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2010.ReferenceController);
  local_1e58 = SOverlay::FArguments::operator+(pFVar26,pFVar27);
  pFVar27 = SOverlay::Slot((FSlotArguments *)local_1c28,0);
  plVar1 = &pFVar27->_padding_;
  if ((longlong *)local_1e10 != plVar1) {
    *(undefined4 *)plVar1 = 0;
    *(undefined1 *)((longlong)&pFVar27->_padding_ + 4) = 1;
  }
  pFVar40 = (FSlotArguments *)0x0;
  if (plVar1 != (longlong *)0x0) {
    pFVar40 = pFVar27;
  }
  if ((longlong *)local_1e08 != &pFVar40->_padding_) {
    *(undefined4 *)&pFVar40->_padding_ = 0;
    *(undefined1 *)((longlong)&pFVar40->_padding_ + 4) = 1;
  }
  local_1e60 = (FSlotArguments *)0x0;
  if (pFVar40 != (FSlotArguments *)0xffffffffffffffb8) {
    local_1e60 = pFVar40;
  }
  pFVar28 = SBorder::FArguments::FArguments(&local_d70);
  local_1f88 = (uchar)EVisibility::Collapsed.Value.Value;
  local_1f87 = 1;
  local_1f70 = 0;
  local_1f80 = (undefined1  [8])0x0;
  pvStack_1f78 = (void *)0x0;
  *(TEnumAsByte<EVisibility::Private> *)&pFVar28->_padding_ = EVisibility::Collapsed.Value.Value;
  *(undefined1 *)((longlong)&pFVar28->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar28->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f80);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f80);
  if (pvStack_1f78 != (void *)0x0) {
    FMemory::Free(pvStack_1f78);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f80);
  pFVar28->_HAlign = param_1->_ThrobberHAlign;
  pFVar28->_VAlign = VAlign_Center;
  local_1ef0 = param_1->_GuardBackgroundBrush;
  local_1ee8 = 1;
  local_1ee0 = (undefined1  [8])0x0;
  pvStack_1ed8 = (void *)0x0;
  local_1ed0 = 0;
  (pFVar28->_BorderImage).Value = local_1ef0;
  (pFVar28->_BorderImage).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar28->_BorderImage).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ee0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1ee0);
  if (pvStack_1ed8 != (void *)0x0) {
    FMemory::Free(pvStack_1ed8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1ee0);
  local_1fd8 = SBorder::FArguments::Padding(pFVar28,0.0);
  pFVar30 = SScaleBox::FArguments::FArguments((FArguments *)local_1998);
  local_1f64 = 1;
  local_1f68 = 2;
  local_1f50 = 0;
  local_1f60 = (undefined1  [8])0x0;
  pvStack_1f58 = (void *)0x0;
  (pFVar30->_Stretch).Value = ScaleToFit;
  (pFVar30->_Stretch).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_Stretch).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f60);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f60);
  if (pvStack_1f58 != (void *)0x0) {
    FMemory::Free(pvStack_1f58);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f60);
  local_1f44 = 1;
  local_1f48 = 1;
  local_1f30 = 0;
  local_1f40 = (undefined1  [8])0x0;
  pvStack_1f38 = (void *)0x0;
  (pFVar30->_StretchDirection).Value = DownOnly;
  (pFVar30->_StretchDirection).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_StretchDirection).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f40);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1f40);
  if (pvStack_1f38 != (void *)0x0) {
    FMemory::Free(pvStack_1f38);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1f40);
  pFVar30->_HAlign = HAlign_Fill;
  pFVar30->_VAlign = VAlign_Fill;
  pFVar31 = SHorizontalBox::FArguments::FArguments(&local_1708);
  pFVar32 = ::operator_new(0x58);
  local_1ea8 = (FSlot *)0x0;
  if (pFVar32 != (FSlot *)0x0) {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    local_1ea8 = SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)local_1a80,(FSlot *)&local_1ea8);
  this->ThrobberSlot = local_1a80[0];
  pFVar33 = SHorizontalBox::FSlot::FSlotArguments::AutoWidth((FSlotArguments *)local_1a80);
  puVar2 = &pFVar33->field_0x48;
  if (local_1e00 != (undefined4 *)puVar2) {
    *(undefined4 *)puVar2 = 1;
    pFVar33->field_0x4c = 1;
  }
  pFVar41 = (FSlotArguments *)0x0;
  if (puVar2 != (undefined1 *)0x0) {
    pFVar41 = pFVar33;
  }
  if (local_1df8 != (undefined4 *)&pFVar41->field_0x50) {
    *(undefined4 *)&pFVar41->field_0x50 = 2;
    pFVar41->field_0x54 = 1;
  }
  pFVar33 = (FSlotArguments *)0x0;
  if (pFVar41 != (FSlotArguments *)0xffffffffffffffb8) {
    pFVar33 = pFVar41;
  }
  bVar18 = FText::IsEmpty(&param_1->_GuardText);
  fVar42 = __real_41900000;
  if (bVar18) {
    fVar42 = 0.0;
  }
  pFVar33 = TPaddingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::Padding
                      ((FSlotArgumentsMixin *)&pFVar33->field_0x18,0.0,0.0,fVar42,0.0);
  local_1fc8 = local_1fe0;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1fc0.ReferenceController = pTVar5;
  if ((SImage **)&pFVar33->field_0x8 != &local_1fc8) {
    *(SImage **)&pFVar33->field_0x8 = local_1fe0;
    local_1fc8 = (SImage *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&pFVar33->field_0x10,&local_1fc0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1fc0.ReferenceController);
  pFVar31 = SHorizontalBox::FArguments::operator+(pFVar31,pFVar33);
  pFVar32 = ::operator_new(0x58);
  local_1ea0 = (FSlot *)0x0;
  if (pFVar32 != (FSlot *)0x0) {
    *(undefined8 *)pFVar32 = 0;
    *(undefined8 *)&pFVar32->field_0x8 = 0;
    *(undefined8 *)&pFVar32->field_0x10 = 0;
    *(undefined8 *)&pFVar32->field_0x18 = 0;
    *(undefined8 *)&pFVar32->field_0x20 = 0;
    *(undefined8 *)&pFVar32->field_0x28 = 0;
    *(undefined8 *)&pFVar32->field_0x30 = 0;
    *(undefined8 *)&pFVar32->field_0x38 = 0;
    *(undefined8 *)&pFVar32->field_0x40 = 0;
    *(undefined8 *)&pFVar32->field_0x48 = 0;
    *(undefined8 *)&pFVar32->field_0x50 = 0;
    local_1ea0 = SHorizontalBox::FSlot::FSlot(pFVar32);
  }
  SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
            ((FSlotArguments *)&local_1b68,(FSlot *)&local_1ea0);
  local_1b20 = 1;
  local_1b1c = 1;
  local_1b18 = 2;
  local_1b14 = 1;
  pFVar34 = STextBlock::FArguments::FArguments(&local_5b0);
  local_1d60.Value.TextData.Reference = (param_1->_GuardText).TextData.Reference;
  if (local_1d60.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1d60.Value.TextData.Reference + 8))
              (local_1d60.Value.TextData.Reference,local_1df0);
  }
  local_1d60.Value.Flags = (param_1->_GuardText).Flags;
  local_1d60.bIsSet = true;
  local_1d60.Getter._16_8_ = 0;
  local_1d60.Getter._0_8_ = 0;
  local_1d60.Getter._8_8_ = 0;
  pFVar34 = STextBlock::FArguments::Text(pFVar34,&local_1d60);
  FLLMScope::FLLMScope(&local_202c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e98 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e90,&local_1e98,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_1de0,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
             ,0x5e,local_res18);
  FMemScope::~FMemScope(&local_1e90);
  FLLMScope::~FLLMScope(&local_202c);
  if (local_1de0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1de0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1de0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1c68 = (this->GuardTextBlock).Object;
  pTStack_1c60 = (this->GuardTextBlock).SharedReferenceCount.ReferenceController;
  (this->GuardTextBlock).Object = local_1de0._Widget.Object;
  (this->GuardTextBlock).SharedReferenceCount.ReferenceController =
       local_1de0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c60);
  pTVar35 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1de0,&local_1d10,pFVar34);
  pTVar5 = (pTVar35->SharedReferenceCount).ReferenceController;
  local_1b60 = pTVar35->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1f28 = 0;
  local_1f20.ReferenceController = pTVar5;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_1b58,&local_1f20);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f20.ReferenceController);
  pFVar31 = SHorizontalBox::FArguments::operator+(pFVar31,(FSlotArguments *)&local_1b68);
  FLLMScope::FLLMScope(&local_2028,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e88 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e80,&local_1e88,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_1cc0,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
             ,0x4f,local_res20);
  FMemScope::~FMemScope(&local_1e80);
  FLLMScope::~FLLMScope(&local_2028);
  pTVar36 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1cc0,&local_1d20,pFVar31);
  pTVar8 = (pTVar36->SharedReferenceCount).ReferenceController;
  pSVar9 = pTVar36->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1fb8 = (pFVar30->_Content).Widget.Object;
  pTStack_1fb0 = (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController;
  (pFVar30->_Content).Widget.Object = (SWidget *)pSVar9;
  (pFVar30->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar8;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1fb0);
  FLLMScope::FLLMScope(&local_2024,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e78 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e70,&local_1e78,true);
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SScaleBox,RequiredArgs::T0RequiredArgs>
            (&local_1ff8,"SScaleBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
             ,0x49,&local_2038);
  FMemScope::~FMemScope(&local_1e70);
  FLLMScope::~FLLMScope(&local_2024);
  pSVar37 = TSharedPtr<SScaleBox,1>::operator->(&local_1ff8._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar37,(FSlateBaseNamedArgs *)pFVar30);
  pSVar37 = local_1ff8._Widget.Object;
  SScaleBox::Construct(local_1ff8._Widget.Object,pFVar30);
  pSVar38 = TSharedPtr<SScaleBox,1>::operator->(&local_1ff8._Widget);
  if ((pSVar38->_padding_ & 0x10) == 0) {
    cVar19 = (**(code **)(pSVar38->_padding_ + 0x228))(pSVar38);
    bVar20 = 0;
    if (cVar19 == '\0') goto LAB_14a7c7206;
  }
  bVar20 = 0x20;
LAB_14a7c7206:
  *(byte *)&pSVar38->_padding_ = (byte)pSVar38->_padding_ & 0xdf;
  *(byte *)&pSVar38->_padding_ = (byte)pSVar38->_padding_ | bVar20;
  pSVar38 = TSharedPtr<SScaleBox,1>::operator->(&local_1ff8._Widget);
  pbVar3 = (byte *)((longlong)&pSVar38->_padding_ + 1);
  *pbVar3 = *pbVar3 | 4;
  if ((local_1ff8._Widget.Object == (SScaleBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  FVar17.ReferenceController = local_1ff8._Widget.SharedReferenceCount.ReferenceController;
  local_1ff8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1ff8._Widget.Object = (SScaleBox *)0x0;
  if ((pSVar37 == (SScaleBox *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar28 = local_1fd8;
  if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (FVar17.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1c58 = (local_1fd8->_Content).Widget.Object;
  pTStack_1c50 = (local_1fd8->_Content).Widget.SharedReferenceCount.ReferenceController;
  (local_1fd8->_Content).Widget.Object = (SWidget *)pSVar37;
  (local_1fd8->_Content).Widget.SharedReferenceCount.ReferenceController =
       FVar17.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c50);
  FLLMScope::FLLMScope(&local_2020,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e38 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e68,&local_1e38,true);
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
            (&local_1db0,"SBorder",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
             ,0x42,&local_2037);
  FMemScope::~FMemScope(&local_1e68);
  FLLMScope::~FLLMScope(&local_2020);
  if (local_1db0._Widget.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1db0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1db0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_1c48 = (this->GuardBorder).Object;
  pTStack_1c40 = (this->GuardBorder).SharedReferenceCount.ReferenceController;
  (this->GuardBorder).Object = local_1db0._Widget.Object;
  (this->GuardBorder).SharedReferenceCount.ReferenceController =
       local_1db0._Widget.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_1c40);
  pTVar29 = TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1db0,&local_1d30,pFVar28);
  pFVar27 = local_1e60;
  pTVar10 = (pTVar29->SharedReferenceCount).ReferenceController;
  local_2008 = pTVar29->Object;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_2000.ReferenceController = pTVar10;
  if ((SBorder **)&local_1e60->_padding_ != &local_2008) {
    local_1e60->_padding_ = (longlong)local_2008;
    local_2008 = (SBorder *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&local_1e60->_padding_,&local_2000);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2000.ReferenceController);
  pFVar26 = SOverlay::FArguments::operator+(local_1e58,pFVar27);
  FLLMScope::FLLMScope(&local_201c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_1e50 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_1e48,&local_1e50,true);
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
            (&local_1cd8,"SOverlay",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
             ,0x30,local_2036);
  FMemScope::~FMemScope(&local_1e48);
  FLLMScope::~FLLMScope(&local_201c);
  pTVar39 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                      (&local_1cd8,&local_1c38,pFVar26);
  pTVar11 = (pTVar39->SharedReferenceCount).ReferenceController;
  local_1d98.Object = (SWidget *)pTVar39->Object;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_1d98.SharedReferenceCount.ReferenceController = pTVar11;
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_1d98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c38.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cd8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d30.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1db0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar17.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1ff8._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d20.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1cc0._Widget.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d10.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1de0._Widget.SharedReferenceCount.ReferenceController);
  STextBlock::FArguments::~FArguments(&local_5b0);
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1b10);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b38);
  if ((void *)local_1b38._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b38._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b58[0].ReferenceController);
  if (local_1b68 != (undefined8 *)0x0) {
    (**(code **)*local_1b68)(local_1b68,1);
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            (&local_1a28);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1a50);
  if ((void *)local_1a50._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1a50._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1a50);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a70);
  if (local_1a80[0] != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_1a80[0])(local_1a80[0],1);
  }
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_1708._Slots.AllocatorInstance.Data,local_1708._Slots.ArrayNum);
  if ((FSlotArguments *)local_1708._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1708._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1708);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1720);
  if ((void *)local_1720._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1720._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1720);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1740);
  if ((void *)local_1740._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1740._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1740);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1760);
  if ((void *)local_1760._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1760._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1760);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1780);
  if ((void *)local_1780._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1780._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1780);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1998._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_1998);
  SBorder::FArguments::~FArguments(&local_d70);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1c28 + 0x30));
  if (local_1bf0 != (void *)0x0) {
    FMemory::Free(local_1bf0);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1c28 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1c28._16_8_);
  if ((undefined8 *)local_1c28._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1c28._0_8_)(local_1c28._0_8_,1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d00.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1dc8._Widget.SharedReferenceCount.ReferenceController);
  SBorder::FArguments::~FArguments(&local_990);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_1bc8 + 0x30));
  if (local_1b90 != (void *)0x0) {
    FMemory::Free(local_1b90);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_1bc8 + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_1bc8._16_8_);
  if ((undefined8 *)local_1bc8._0_8_ != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)local_1bc8._0_8_)(local_1bc8._0_8_,1);
  }
  DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
            ((FSlotArguments *)local_1500._Slots.AllocatorInstance.Data,local_1500._Slots.ArrayNum);
  if ((FSlotArguments *)local_1500._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_1500._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_1500);
  if (local_1fd0.DebugPtr != (UClass *)0x0) {
    this_02 = TSharedPtr<STextBlock,1>::operator->(&this->GuardTextBlock);
    STextBlock::SetTextStyle(this_02,&local_12f8);
  }
  this->bForceShowSpinner = false;
  UpdateLoadingAppearance(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1e40);
  FTextBlockStyle::~FTextBlockStyle(&local_12f8);
  return;
}

// GuardAndLoadAsset @ 14a7e9a20

void __thiscall
SLoadGuard::GuardAndLoadAsset
          (SLoadGuard *this,TSoftObjectPtr<UObject> *param_1,
          TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  SLoadGuard *pSVar5;
  bool bVar6;
  UObject *pUVar7;
  TSharedRef<SWidget,1> *pTVar8;
  UAssetManager *pUVar9;
  TSharedPtr<FStreamableHandle,1> *pTVar10;
  undefined8 local_a8;
  FSharedReferencer<1> FStack_a0;
  TSharedRef<SWidget,1> local_98;
  TSharedPtr<FStreamableHandle,1> local_88;
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  undefined1 local_40 [8];
  ForAnyElementType FStack_38;
  int local_30;
  
  bVar6 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(this->LazyAsset).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  if (!bVar6) {
    pTVar10 = &this->StreamingHandle;
    if (pTVar10->Object != (FStreamableHandle *)0x0) {
      FStreamableHandle::CancelHandle(pTVar10->Object);
      local_a8 = 0;
      FStack_a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar10 != (TSharedPtr<FStreamableHandle,1> *)&local_a8) {
        pTVar10->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->StreamingHandle).SharedReferenceCount,&FStack_a0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_a0.ReferenceController);
    }
  }
  *(undefined8 *)&(this->LazyAsset).SoftObjectPtr = *(undefined8 *)&param_1->SoftObjectPtr;
  FSoftObjectPath::operator=
            ((FSoftObjectPath *)&(this->LazyAsset).SoftObjectPtr.field_0x8,
             (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8);
  pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
  if (pUVar7 == (UObject *)0x0) {
    if ((!bVar6) && (*(longlong *)&(param_1->SoftObjectPtr).field_0x8 != 0)) {
      pTVar8 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_98);
      pTVar4 = (pTVar8->SharedReferenceCount).ReferenceController;
      pSVar5 = (SLoadGuard *)pTVar8->Object;
      if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
      }
      else {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98.SharedReferenceCount.ReferenceController);
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pUVar9 = UAssetManager::Get();
      local_98.Object = (SWidget *)0x0;
      local_98.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_30 = 0;
      local_40 = (undefined1  [8])0x0;
      FStack_38.Data = (FScriptContainerElement *)0x0;
      local_58._0_8_ = this;
      local_58._8_8_ = pSVar5;
      local_58._16_8_ = pTVar4;
      TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(UObject_*),FDefaultDelegateUserPolicy> *)local_40,param_2);
      local_78._0_4_ = 0xcb;
      local_78._8_8_ =
           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
      ;
      local_78._4_4_ = 0x3b;
      local_78._16_8_ =
           "void __cdecl SLoadGuard::GuardAndLoadAsset(const struct TSoftObjectPtr<class UObject> &,class TDelegate<void __cdecl(class UObject *),struct FDefaultDelegateUserPolicy>)"
      ;
      pTVar10 = FStreamableManager::
                RequestAsyncLoad<FSoftObjectPath_const_&,_SLoadGuard::GuardAndLoadAsset_::__l15::<lambda_1>,void>
                          (&pUVar9->StreamableManager,&local_88,
                           (FSoftObjectPath *)&(param_1->SoftObjectPtr).field_0x8,
                           (<lambda_1> *)local_58,100,false,false,(FString *)&local_98,
                           (FSourceLocation *)local_78);
      if (&this->StreamingHandle != pTVar10) {
        (this->StreamingHandle).Object = pTVar10->Object;
        pTVar10->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->StreamingHandle).SharedReferenceCount,&pTVar10->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_40,
                 (FWriteAccessScope *)local_78);
      if ((local_30 != 0) && (FStack_38.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_38.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_38,0,0,0x10);
        local_30 = 0;
      }
      if (local_78[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
      }
      if (FStack_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_38.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_40);
      if ((TReferenceControllerBase<1> *)local_58._16_8_ != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = (atomic<int> *)(local_58._16_8_ + 0xc);
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(*(longlong *)local_58._16_8_ + 8))(local_58._16_8_,1);
        }
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
    }
  }
  else {
    pUVar7 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)param_1);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FReadAccessScope *)local_78);
    if ((*(int *)&param_2->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&param_2->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,pUVar7);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_78);
  }
  UpdateLoadingAppearance(this);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_2);
  if (*(void **)&param_2->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&param_2->field_0x8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_2);
  return;
}

// SetContent @ 14a817bc0

void __thiscall SLoadGuard::SetContent(SLoadGuard *this,TSharedRef<SWidget,1> *param_1)

{
  SBorder *pSVar1;
  code *pcVar2;
  bool bVar3;
  SWidget *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if ((this->ContentBorder).Object == (SBorder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pSVar1 = (this->ContentBorder).Object;
  pcVar2 = *(code **)(pSVar1->_padding_ + 0x248);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar2)(pSVar1,&local_18);
  return;
}

// SetForceShowSpinner @ 14a818210

void __thiscall SLoadGuard::SetForceShowSpinner(SLoadGuard *this,bool param_1)

{
  this->bForceShowSpinner = param_1;
  UpdateLoadingAppearance(this);
  return;
}

// SetGuardBackgroundBrush @ 14a818250

void __thiscall SLoadGuard::SetGuardBackgroundBrush(SLoadGuard *this,FSlateBrush *param_1)

{
  code *pcVar1;
  bool bVar2;
  TAttribute<FSlateBrush_const_*> local_38;
  
  if ((this->GuardBorder).Object == (SBorder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.Getter._16_8_ = 0;
  local_38.bIsSet = true;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  local_38.Value = param_1;
  SBorder::SetBorderImage((this->GuardBorder).Object,&local_38);
  return;
}

// SetGuardText @ 14a8182d0

void __thiscall SLoadGuard::SetGuardText(SLoadGuard *this,FText *param_1)

{
  STextBlock *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 local_res8 [8];
  TAttribute<FText> local_38;
  
  if ((this->GuardTextBlock).Object == (STextBlock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_38.Value.TextData.Reference = (param_1->TextData).Reference;
  this_00 = (this->GuardTextBlock).Object;
  if (local_38.Value.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.Value.TextData.Reference + 8))
              (local_38.Value.TextData.Reference,local_res8);
  }
  local_38.Value.Flags = param_1->Flags;
  local_38.bIsSet = true;
  local_38.Getter._16_8_ = 0;
  local_38.Getter._0_8_ = 0;
  local_38.Getter._8_8_ = 0;
  STextBlock::SetText(this_00,&local_38);
  return;
}

// SetGuardTextStyle @ 14a818370

void __thiscall SLoadGuard::SetGuardTextStyle(SLoadGuard *this,FTextBlockStyle *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->GuardTextBlock).Object == (STextBlock *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  STextBlock::SetTextStyle((this->GuardTextBlock).Object,param_1);
  return;
}

// SetThrobber @ 14a81c770

void __thiscall SLoadGuard::SetThrobber(SLoadGuard *this,TSharedPtr<SWidget,1> *param_1)

{
  FSlot *this_00;
  FMemScope FVar1;
  FMemScope FVar2;
  FMemScope FVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FArguments *pFVar9;
  UCommonUISettings *this_01;
  TSharedRef<SImage,1> *pTVar10;
  FMemScope *pFVar11;
  undefined4 local_res8 [2];
  FLLMScope local_res18 [2];
  FName local_res20;
  FMemScope local_338;
  TReferenceControllerBase<1> *local_330;
  FMemScope local_328;
  TReferenceControllerBase<1> *pTStack_320;
  TAttribute<FSlateBrush_const_*> local_318;
  TSharedRef<SImage,1> local_2f0;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_2e0;
  FArguments local_2c8;
  
  local_res8[0] = 0;
  this_00 = this->ThrobberSlot;
  if (this_00 != (FSlot *)0x0) {
    FVar1 = (FMemScope)param_1->Object;
    if (FVar1 == (FMemScope)0x0) {
      pFVar9 = SImage::FArguments::FArguments(&local_2c8);
      this_01 = ICommonUIModule::GetSettings();
      local_318.Value = UCommonUISettings::GetDefaultThrobberBrush(this_01);
      local_318.bIsSet = true;
      local_318.Getter._16_8_ = 0;
      local_318.Getter._0_8_ = 0;
      local_318.Getter._8_8_ = 0;
      pFVar9 = SImage::FArguments::Image(pFVar9,&local_318);
      FLLMScope::FLLMScope
                (local_res18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_res20 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_338,&local_res20,true);
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                (&local_2e0,"SImage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\CommonUI\\Source\\CommonUI\\Private\\CommonLoadGuard.cpp"
                 ,0x89,(T0RequiredArgs *)local_res8);
      FMemScope::~FMemScope(&local_338);
      FLLMScope::~FLLMScope(local_res18);
      pTVar10 = TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::operator<<=
                          (&local_2e0,&local_2f0,pFVar9);
      local_338 = (FMemScope)pTVar10->Object;
      local_330 = (pTVar10->SharedReferenceCount).ReferenceController;
      if (local_330 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_330->SharedReferenceCount = (atomic<int>)((int)local_330->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = &local_338;
      bVar8 = false;
      bVar7 = true;
      bVar6 = true;
      bVar5 = true;
      bVar4 = true;
    }
    else {
      pTStack_320 = (param_1->SharedReferenceCount).ReferenceController;
      if (pTStack_320 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_320->SharedReferenceCount =
             (atomic<int>)((int)pTStack_320->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = &local_328;
      bVar8 = true;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      bVar4 = false;
      local_328 = FVar1;
    }
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    FVar1 = (FMemScope)((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController;
    FVar2 = *pFVar11;
    FVar3 = pFVar11[1];
    *pFVar11 = (FMemScope)((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object;
    pFVar11[1] = FVar1;
    ((TSharedRef<SWidget,1> *)&this_00->field_0x10)->Object = (SWidget *)FVar2;
    ((FSharedReferencer<1> *)&this_00->field_0x18)->ReferenceController =
         (TReferenceControllerBase<1> *)FVar3;
    FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
    if (bVar4) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_330)
      ;
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2f0.SharedReferenceCount.ReferenceController);
    }
    if (bVar6) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2e0._Widget.SharedReferenceCount.ReferenceController);
    }
    if (bVar7) {
      SImage::FArguments::~FArguments(&local_2c8);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_320);
    }
  }
  return;
}

// SetThrobberHAlign @ 14a81c960

void __thiscall SLoadGuard::SetThrobberHAlign(SLoadGuard *this,EHorizontalAlignment param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->GuardBorder).Object == (SBorder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SBorder::SetHAlign((this->GuardBorder).Object,param_1);
  return;
}

// UpdateLoadingAppearance @ 14a8279b0

void __thiscall SLoadGuard::UpdateLoadingAppearance(SLoadGuard *this)

{
  FStreamableHandle *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  SBorder *pSVar5;
  TAttribute<EVisibility> *pTVar6;
  TAttribute<EVisibility> local_a8;
  TAttribute<EVisibility> local_88;
  TAttribute<EVisibility> local_68;
  TAttribute<EVisibility> local_48;
  FReadAccessScope local_28;
  
  pFVar1 = (this->StreamingHandle).Object;
  if (this->bIsShowingSpinner == false) {
    if ((pFVar1 == (FStreamableHandle *)0x0) && (this->bForceShowSpinner == false)) {
      return;
    }
    this->bIsShowingSpinner = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnLoadingStateChanged,&local_28);
    if ((*(int *)&(this->OnLoadingStateChanged).field_0x10 != 0) &&
       (plVar2 = *(longlong **)&(this->OnLoadingStateChanged).field_0x8, plVar2 != (longlong *)0x0))
    {
      (**(code **)(*plVar2 + 0x68))(plVar2,1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (((this->ContentBorder).Object == (SBorder *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_68.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    local_68.bIsSet = true;
    local_68.Getter._16_8_ = 0;
    local_68.Getter._0_8_ = 0;
    local_68.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)(this->ContentBorder).Object,&local_68);
    if (((this->GuardBorder).Object == (SBorder *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_48.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
    pTVar6 = &local_48;
    pSVar5 = (this->GuardBorder).Object;
    local_48.Getter._16_8_ = 0;
    local_48.bIsSet = true;
    local_48.Getter._0_8_ = 0;
    local_48.Getter._8_8_ = 0;
  }
  else {
    if (pFVar1 != (FStreamableHandle *)0x0) {
      return;
    }
    if (this->bForceShowSpinner != false) {
      return;
    }
    this->bIsShowingSpinner = false;
    TDelegate<void___cdecl(bool),FDefaultDelegateUserPolicy>::ExecuteIfBound
              (&this->OnLoadingStateChanged,false);
    pSVar5 = TSharedPtr<SBorder,1>::operator->(&this->ContentBorder);
    local_a8.Value = (EVisibility)EVisibility::SelfHitTestInvisible.Value.Value;
    local_a8.bIsSet = true;
    local_a8.Getter._16_8_ = 0;
    local_a8.Getter._0_8_ = 0;
    local_a8.Getter._8_8_ = 0;
    SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar5,&local_a8);
    pSVar5 = TSharedPtr<SBorder,1>::operator->(&this->GuardBorder);
    local_88.Value = (EVisibility)EVisibility::Collapsed.Value.Value;
    pTVar6 = &local_88;
    local_88.bIsSet = true;
    local_88.Getter._16_8_ = 0;
    local_88.Getter._0_8_ = 0;
    local_88.Getter._8_8_ = 0;
  }
  SCompoundWidget::SetVisibility((SCompoundWidget *)pSVar5,pTVar6);
  SWidget::Invalidate((SWidget *)this,Layout);
  return;
}

