// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 10

// ComputeVolatility @ 1428582d0

bool __thiscall SThrobber::ComputeVolatility(SThrobber *this)

{
  return this->Animate != None;
}

// Construct @ 1428620f0

void __thiscall SThrobber::Construct(SThrobber *this,FArguments *param_1)

{
  TSharedPtr<SHorizontalBox,1> *pTVar1;
  longlong *this_00;
  SHorizontalBox *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FArguments *pFVar6;
  TSharedRef<SHorizontalBox,1> *pTVar7;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  SHorizontalBox *local_278;
  FSharedReferencer<1> local_270;
  TSharedRef<SHorizontalBox,1> local_268;
  longlong local_258;
  TReferenceControllerBase<1> *pTStack_250;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_248;
  FArguments local_230;
  
  this->PieceImage = param_1->_PieceImage;
  this->NumPieces = param_1->_NumPieces;
  this->Animate = param_1->_Animate;
  pFVar6 = SHorizontalBox::FArguments::FArguments(&local_230);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
            (&local_248,"SHorizontalBox",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Images\\SThrobber.cpp"
             ,0x10,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar7 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_248,&local_268,pFVar6);
  local_270.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
  local_278 = pTVar7->Object;
  if (local_270.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_270.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_270.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->HBox;
  if (pTVar1 != (TSharedPtr<SHorizontalBox,1> *)&local_278) {
    pTVar1->Object = local_278;
    local_278 = (SHorizontalBox *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->HBox).SharedReferenceCount,&local_270);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_270.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_248._Widget.SharedReferenceCount.ReferenceController);
  DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)local_230._Slots.AllocatorInstance.Data,local_230._Slots.ArrayNum);
  if ((FSlotArguments *)local_230._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
    FMemory::Free(local_230._Slots.AllocatorInstance.Data);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_230);
  if (pTVar1->Object == (SHorizontalBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pSVar2 = pTVar1->Object;
  pTVar3 = (this->HBox).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SHorizontalBox *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = &this->_padding_;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
  }
  else {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_258 = this->_padding_;
  pTStack_250 = (TReferenceControllerBase<1> *)this->_padding_;
  this->_padding_ = (longlong)pSVar2;
  this->_padding_ = (longlong)pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_250);
  FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  ConstructPieces(this);
  return;
}

// ConstructPieces @ 142862350

/* WARNING: Removing unreachable block (ram,0x000142862a47) */

void __thiscall SThrobber::ConstructPieces(SThrobber *this)

{
  byte *pbVar1;
  uint uVar2;
  ForElementType<FCurveHandle> FVar3;
  SHorizontalBox *pSVar4;
  SWidget *pSVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  FSharedReferencer<1> FVar19;
  SImage *this_00;
  FSharedReferencer<1> FVar20;
  undefined4 uVar21;
  bool bVar22;
  char cVar23;
  byte bVar24;
  int iVar25;
  FCurveSequence *pFVar26;
  SBoxPanel *this_01;
  ForElementType<FCurveHandle> FVar27;
  FSlot *this_02;
  FSlot *pFVar28;
  FSizeParam *pFVar29;
  FArguments *pFVar30;
  undefined8 *puVar31;
  TSharedRef<SWidget_const_,1> *pTVar32;
  ulong64 uVar33;
  FArguments *pFVar34;
  SBorder *pSVar35;
  SBorder *pSVar36;
  TSharedRef<SWidget,1> *pTVar37;
  ForElementType<FCurveHandle> FVar38;
  ForElementType<FCurveHandle> FVar39;
  undefined4 local_res10 [2];
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  int local_a78;
  FLLMScope local_a74;
  FArguments *local_a70;
  FName local_a68;
  TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs> local_a60;
  TSlateDecl<SImage,RequiredArgs::T0RequiredArgs> local_a48;
  TReferenceControllerBase<1> *local_a30;
  TReferenceControllerBase<1> *local_a28;
  TReferenceControllerBase<1> *local_a20;
  SWidget *local_a18;
  TReferenceControllerBase<1> *pTStack_a10;
  undefined8 local_a08;
  FSharedReferencer<1> local_a00;
  TSharedRef<SWidget,1> local_9f8;
  FSlateBrush *local_9e8;
  undefined1 local_9e0;
  undefined1 local_9d8 [8];
  void *pvStack_9d0;
  undefined8 local_9c8;
  FMemScope local_9c0;
  FName local_9b8;
  FMemScope local_9b0;
  ForElementType<FCurveHandle> local_9a8;
  code *local_9a0;
  undefined4 uStack_998;
  undefined4 uStack_994;
  code *local_990;
  undefined4 uStack_988;
  undefined4 uStack_984;
  code *local_980;
  undefined4 uStack_978;
  undefined4 uStack_974;
  FSlot *local_970;
  TReferenceControllerBase<1> *local_968;
  TReferenceControllerBase<1> *local_960;
  TReferenceControllerBase<1> *local_958;
  FDestructionSentinel local_950;
  undefined1 *local_938;
  FDestructionSentinel local_930;
  undefined1 *local_918;
  FDestructionSentinel local_910;
  undefined1 *local_8f8;
  TSharedRef<SWidget_const_,1> local_8f0;
  TSharedRef<SWidget_const_,1> local_8e0;
  TSharedRef<SWidget_const_,1> local_8d0;
  undefined1 local_8c0 [16];
  undefined1 local_8b0 [32];
  undefined1 local_890 [24];
  undefined **local_878;
  undefined8 *local_870;
  SBorder *local_868;
  FSharedReferencer<1> local_860 [4];
  undefined1 local_840 [40];
  FSlotArgumentsMixin local_818;
  TPanelChildren<SBoxPanel::FSlot> *local_788;
  int local_780;
  FCurveHandle local_778;
  undefined1 local_768 [520];
  undefined1 local_560 [48];
  undefined1 local_530 [56];
  undefined1 local_4f8 [32];
  undefined1 local_4d8 [24];
  FCurveSequence local_4c0;
  FArguments local_450;
  
  FVar39 = (ForElementType<FCurveHandle>)&this->ThrobberCurve;
  local_res10[0] = 0;
  uVar2 = this->NumPieces;
  bVar16 = false;
  bVar15 = false;
  bVar14 = false;
  bVar13 = false;
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar8 = false;
  local_9a8 = FVar39;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  (this->ThrobberCurve).ArrayNum = 0;
  if ((this->ThrobberCurve).ArrayMax < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCurveHandle>_>
              (0x10,8,uVar2,(ForElementType<FCurveHandle> *)FVar39,0,&(this->ThrobberCurve).ArrayMax
              );
  }
  pFVar26 = FCurveSequence::FCurveSequence(&local_4c0);
  FCurveSequence::operator=(&this->AnimCurves,pFVar26);
  FCurveSequence::~FCurveSequence(&local_4c0);
  this_01 = (SBoxPanel *)TSharedPtr<SHorizontalBox,1>::operator->(&this->HBox);
  SBoxPanel::ClearChildren(this_01);
  uVar21 = local_9f8.SharedReferenceCount.ReferenceController._4_4_;
  fVar18 = __real_3fc00000;
  fVar17 = __real_3d4ccccd;
  local_a78 = 0;
  if (0 < this->NumPieces) {
    do {
      FVar27 = (ForElementType<FCurveHandle>)
               FCurveSequence::AddCurve
                         (&this->AnimCurves,&local_778,(float)local_a78 * fVar17,fVar18,Linear);
      FVar3 = *(ForElementType<FCurveHandle> *)((longlong)FVar39 + 0x30);
      FVar38 = FVar39;
      if (FVar3 != (ForElementType<FCurveHandle>)0x0) {
        FVar38 = FVar3;
      }
      if ((ulonglong)FVar38 <= (ulonglong)FVar27) {
        FVar38 = FVar39;
        if (FVar3 != (ForElementType<FCurveHandle>)0x0) {
          FVar38 = FVar3;
        }
        if (((ulonglong)FVar27 <
             (ulonglong)((longlong)*(int *)((longlong)FVar39 + 0x3c) * 0x10 + (longlong)FVar38)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar25 = *(int *)((longlong)FVar39 + 0x38);
      if (iVar25 == *(int *)((longlong)FVar39 + 0x3c)) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<FCurveHandle>_>
                           (0x810,(ForElementType<FCurveHandle> *)FVar39,
                            (int *)((longlong)FVar39 + 0x3c));
      }
      *(int *)((longlong)FVar39 + 0x38) = iVar25 + 1;
      uVar9 = *(undefined8 *)((longlong)FVar27 + 8);
      if (*(ForElementType<FCurveHandle> *)((longlong)FVar39 + 0x30) !=
          (ForElementType<FCurveHandle>)0x0) {
        FVar39 = *(ForElementType<FCurveHandle> *)((longlong)FVar39 + 0x30);
      }
      puVar31 = (undefined8 *)((longlong)FVar39 + (longlong)iVar25 * 0x10);
      *puVar31 = *(undefined8 *)FVar27;
      puVar31[1] = uVar9;
      if (((this->HBox).Object == (SHorizontalBox *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pSVar4 = (this->HBox).Object;
      this_02 = ::operator_new(0x58);
      pFVar28 = (FSlot *)0x0;
      if (this_02 != (FSlot *)0x0) {
        *(undefined8 *)this_02 = 0;
        *(undefined8 *)&this_02->field_0x8 = 0;
        *(undefined8 *)&this_02->field_0x10 = 0;
        *(undefined8 *)&this_02->field_0x18 = 0;
        *(undefined8 *)&this_02->field_0x20 = 0;
        *(undefined8 *)&this_02->field_0x28 = 0;
        *(undefined8 *)&this_02->field_0x30 = 0;
        *(undefined8 *)&this_02->field_0x38 = 0;
        *(undefined8 *)&this_02->field_0x40 = 0;
        *(undefined8 *)&this_02->field_0x48 = 0;
        *(undefined8 *)&this_02->field_0x50 = 0;
        pFVar28 = SHorizontalBox::FSlot::FSlot(this_02);
      }
      local_970 = pFVar28;
      SHorizontalBox::FSlot::FSlotArguments::FSlotArguments
                ((FSlotArguments *)&local_870,(FSlot *)&local_970);
      local_780 = -1;
      local_878 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      local_788 = (TPanelChildren<SBoxPanel::FSlot> *)&pSVar4->field_0x218;
      pFVar29 = (FSizeParam *)FAuto::FAuto((FAuto *)local_8c0);
      TOptional<FSizeParam>::operator=(&local_818._SizeParam,pFVar29);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_890);
      if ((void *)local_890._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_890._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_890);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_8b0);
      if ((void *)local_8b0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_8b0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_8b0);
      pFVar30 = SBorder::FArguments::FArguments(&local_450);
      local_a70 = pFVar30;
      local_9e8 = FStyleDefaults::GetNoBrush();
      local_9c8 = 0;
      local_9e0 = 1;
      local_9d8 = (undefined1  [8])0x0;
      pvStack_9d0 = (void *)0x0;
      (pFVar30->_BorderImage).Value = local_9e8;
      (pFVar30->_BorderImage).bIsSet = true;
      TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar30->_BorderImage).Getter,
                 (TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_9d8);
      if (pvStack_9d0 != (void *)0x0) {
        FMemory::Free(pvStack_9d0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_9d8);
      (pFVar30->_ContentScale).bIsSet = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar30->_ContentScale).Getter,(FWriteAccessScope *)&local_950);
      local_938 = &(pFVar30->_ContentScale).Getter.field_0x8;
      puVar31 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_938);
      if (puVar31 != (undefined8 *)0x0) {
        uStack_998 = 0;
        local_9a0 = GetPieceScale;
        uStack_994 = uVar21;
        pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_8d0);
        pSVar5 = pTVar32->Object;
        pTVar6 = (pTVar32->SharedReferenceCount).ReferenceController;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar12 = true;
        bVar11 = true;
        bVar10 = true;
        *puVar31 = &
                   ___7__TCommonDelegateInstanceState___A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy__H__6B_
        ;
        *(int *)(puVar31 + 1) = local_a78;
        local_a30 = pTVar6;
        local_968 = pTVar6;
        uVar33 = FDelegateHandle::GenerateNewID();
        puVar31[2] = uVar33;
        *puVar31 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSThrobber___00__A6A_AU__TVector2_N_Math_UE__XZUFDefaultDelegateUserPolicy__H__6B_
        ;
        puVar31[3] = pSVar5;
        puVar31[4] = pTVar6;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar31[5] = local_9a0;
        puVar31[6] = CONCAT44(uStack_994,uStack_998);
        pFVar30 = local_a70;
      }
      if (bVar11) {
        bVar11 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a30);
      }
      if (bVar12) {
        bVar12 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_968);
      }
      if (bVar10) {
        bVar10 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_8d0.SharedReferenceCount.ReferenceController);
      }
      if (local_950.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_950.Accessor,&local_950);
      }
      (pFVar30->_ColorAndOpacity).bIsSet = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &(pFVar30->_ColorAndOpacity).Getter,(FWriteAccessScope *)&local_930);
      local_918 = &(pFVar30->_ColorAndOpacity).Getter.field_0x8;
      puVar31 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_918);
      if (puVar31 != (undefined8 *)0x0) {
        uStack_988 = 0;
        local_990 = GetPieceColor;
        uStack_984 = uVar21;
        pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_8f0);
        pSVar5 = pTVar32->Object;
        pTVar6 = (pTVar32->SharedReferenceCount).ReferenceController;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar15 = true;
        bVar14 = true;
        bVar13 = true;
        *puVar31 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy__H__6B_
        ;
        *(int *)(puVar31 + 1) = local_a78;
        local_a28 = pTVar6;
        local_960 = pTVar6;
        uVar33 = FDelegateHandle::GenerateNewID();
        puVar31[2] = uVar33;
        *puVar31 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSThrobber___00__A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy__H__6B_
        ;
        puVar31[3] = pSVar5;
        puVar31[4] = pTVar6;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar31[5] = local_990;
        puVar31[6] = CONCAT44(uStack_984,uStack_988);
        pFVar30 = local_a70;
      }
      if (bVar13) {
        bVar13 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a28);
      }
      if (bVar14) {
        bVar14 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_960);
      }
      if (bVar15) {
        bVar15 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_8f0.SharedReferenceCount.ReferenceController);
      }
      if (local_930.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_930.Accessor,&local_930);
      }
      pFVar30->_HAlign = HAlign_Center;
      pFVar30->_VAlign = VAlign_Center;
      pFVar34 = SImage::FArguments::FArguments((FArguments *)local_768);
      (pFVar34->_Image).bIsSet = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar34->_Image).Getter
                 ,(FWriteAccessScope *)&local_910);
      local_8f8 = &(pFVar34->_Image).Getter.field_0x8;
      puVar31 = UE::Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_8f8);
      if (puVar31 != (undefined8 *)0x0) {
        local_980 = GetPieceBrush;
        uStack_978 = 0;
        uStack_974 = uVar21;
        pTVar32 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_8e0);
        local_a68 = (FName)pTVar32->Object;
        pTVar6 = (pTVar32->SharedReferenceCount).ReferenceController;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar16 = true;
        bVar8 = true;
        *puVar31 = &
                   ___7__TCommonDelegateInstanceState___A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        local_a20 = pTVar6;
        local_958 = pTVar6;
        uVar33 = FDelegateHandle::GenerateNewID();
        puVar31[2] = uVar33;
        *puVar31 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSThrobber___00__A6APEBUFSlateBrush__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar31 + 3) = local_a68;
        puVar31[4] = pTVar6;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
          UNLOCK();
        }
        puVar31[5] = local_980;
        puVar31[6] = CONCAT44(uStack_974,uStack_978);
      }
      if (bVar8) {
        bVar8 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a20);
      }
      if (bVar16) {
        bVar16 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_8e0.SharedReferenceCount.ReferenceController);
      }
      if (local_910.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_910.Accessor,&local_910);
      }
      FLLMScope::FLLMScope
                (local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      local_a68 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_9c0,&local_a68,true);
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SImage,RequiredArgs::T0RequiredArgs>
                (&local_a48,"SImage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Images\\SThrobber.cpp"
                 ,0x2d,(T0RequiredArgs *)local_res10);
      FMemScope::~FMemScope(&local_9c0);
      FLLMScope::~FLLMScope(local_res20);
      this_00 = local_a48._Widget.Object;
      if ((local_a48._Widget.Object == (SImage *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      SWidget::SWidgetConstruct((SWidget *)this_00,(FSlateBaseNamedArgs *)pFVar34);
      SImage::Construct(this_00,pFVar34);
      if ((this_00 == (SImage *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((this_00->_padding_ & 0x10) == 0) {
        cVar23 = (**(code **)(this_00->_padding_ + 0x228))(this_00);
        bVar24 = 0;
        if (cVar23 != '\0') goto LAB_142862b94;
      }
      else {
LAB_142862b94:
        bVar24 = 0x20;
      }
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ & 0xdf;
      *(byte *)&this_00->_padding_ = (byte)this_00->_padding_ | bVar24;
      if ((this_00 == (SImage *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pbVar1 = (byte *)((longlong)&this_00->_padding_ + 1);
      *pbVar1 = *pbVar1 | 4;
      if ((this_00 == (SImage *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar20.ReferenceController = local_a48._Widget.SharedReferenceCount.ReferenceController;
      local_a48._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_a48._Widget.Object = (SImage *)0x0;
      if ((this_00 == (SImage *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar30 = local_a70;
      if (FVar20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar20.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar20.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_a18 = (local_a70->_Content).Widget.Object;
      pTStack_a10 = (local_a70->_Content).Widget.SharedReferenceCount.ReferenceController;
      (local_a70->_Content).Widget.Object = (SWidget *)this_00;
      (local_a70->_Content).Widget.SharedReferenceCount.ReferenceController =
           FVar20.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_a10);
      FLLMScope::FLLMScope(&local_a74,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
      ;
      local_9b8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_9b0,&local_9b8,true);
      TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SBorder,RequiredArgs::T0RequiredArgs>
                (&local_a60,"SBorder",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Private\\Widgets\\Images\\SThrobber.cpp"
                 ,0x26,local_res18);
      FMemScope::~FMemScope(&local_9b0);
      FLLMScope::~FLLMScope(&local_a74);
      pSVar35 = TSharedPtr<SBorder,1>::operator->(&local_a60._Widget);
      SWidget::SWidgetConstruct((SWidget *)pSVar35,(FSlateBaseNamedArgs *)pFVar30);
      pSVar35 = local_a60._Widget.Object;
      SBorder::Construct(local_a60._Widget.Object,pFVar30);
      pSVar36 = TSharedPtr<SBorder,1>::operator->(&local_a60._Widget);
      if ((pSVar36->_padding_ & 0x10) == 0) {
        cVar23 = (**(code **)(pSVar36->_padding_ + 0x228))(pSVar36);
        bVar24 = 0;
        if (cVar23 != '\0') goto LAB_142862d44;
      }
      else {
LAB_142862d44:
        bVar24 = 0x20;
      }
      *(byte *)&pSVar36->_padding_ = (byte)pSVar36->_padding_ & 0xdf;
      *(byte *)&pSVar36->_padding_ = (byte)pSVar36->_padding_ | bVar24;
      pSVar36 = TSharedPtr<SBorder,1>::operator->(&local_a60._Widget);
      pbVar1 = (byte *)((longlong)&pSVar36->_padding_ + 1);
      *pbVar1 = *pbVar1 | 4;
      if ((pSVar35 == (SBorder *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar19.ReferenceController = local_a60._Widget.SharedReferenceCount.ReferenceController;
      local_a60._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_a60._Widget.Object = (SBorder *)0x0;
      if ((pSVar35 == (SBorder *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_a00.ReferenceController = FVar19.ReferenceController;
      if (FVar19.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar19.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        (FVar19.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar19.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_868 = pSVar35;
      local_a08 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_860,&local_a00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a00.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar19.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar19.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a60._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar20.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a48._Widget.SharedReferenceCount.ReferenceController);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4d8);
      if ((void *)local_4d8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4d8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4d8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_4f8);
      if ((void *)local_4f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_4f8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_4f8);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_530);
      if ((void *)local_530._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_530._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_530);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_560);
      if ((void *)local_560._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_560._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_560);
      FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_768);
      SBorder::FArguments::~FArguments(&local_450);
      local_878 = &___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
      if (local_870 != (undefined8 *)0x0) {
        if (local_780 == -1) {
          TPanelChildren<SBoxPanel::FSlot>::AddSlot(local_788,(FSlotArguments *)&local_870);
        }
        else {
          TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                    (local_788,(FSlotArguments *)&local_870,local_780);
        }
      }
      TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
                (&local_818);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_840);
      if ((void *)local_840._8_8_ != (void *)0x0) {
        FMemory::Free((void *)local_840._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)local_840);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_860[0].ReferenceController);
      if (local_870 != (undefined8 *)0x0) {
        (**(code **)*local_870)(local_870,1);
      }
      local_a78 = local_a78 + 1;
      FVar39 = local_9a8;
    } while (local_a78 < this->NumPieces);
  }
  pTVar37 = TSharedFromThis<SWidget,1>::AsShared
                      ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_9f8);
  FCurveSequence::Play(&this->AnimCurves,pTVar37,true,0.0,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)
             CONCAT44(local_9f8.SharedReferenceCount.ReferenceController._4_4_,
                      local_9f8.SharedReferenceCount.ReferenceController._0_4_));
  return;
}

// GetPieceBrush @ 142878d60

FSlateBrush * __thiscall SThrobber::GetPieceBrush(SThrobber *this)

{
  return this->PieceImage;
}

// GetPieceColor @ 142878d70

FLinearColor * __thiscall
SThrobber::GetPieceColor(SThrobber *this,FLinearColor *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLinearColor *pFVar4;
  ForElementType<FCurveHandle> FVar5;
  float fVar6;
  
  if ((this->Animate & Opacity) == None) {
    (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
    return __return_storage_ptr__;
  }
  uVar3 = 0;
  if (param_1 < (this->ThrobberCurve).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLinearColor *)(*pcVar1)();
      return pFVar4;
    }
  }
  FVar5 = (this->ThrobberCurve).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FCurveHandle>)0x0) {
    FVar5 = (ForElementType<FCurveHandle>)&this->ThrobberCurve;
  }
  fVar6 = FCurveHandle::GetLerp((FCurveHandle *)((longlong)FVar5 + (longlong)param_1 * 0x10));
  fVar6 = sinf(fVar6 * __real_40c90fdb);
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.R = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.G = 1.0;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 1.0;
  return __return_storage_ptr__;
}

// GetPieceScale @ 142878e70

TVector2<double> * __thiscall
SThrobber::GetPieceScale(SThrobber *this,TVector2<double> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector2<double> *pTVar4;
  ForElementType<FCurveHandle> FVar5;
  float fVar6;
  float fVar7;
  
  uVar3 = 0;
  if (param_1 < (this->ThrobberCurve).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector2<double> *)(*pcVar1)();
    return pTVar4;
  }
  FVar5 = (this->ThrobberCurve).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FCurveHandle>)0x0) {
    FVar5 = (ForElementType<FCurveHandle>)&this->ThrobberCurve;
  }
  fVar6 = FCurveHandle::GetLerp((FCurveHandle *)((longlong)FVar5 + (longlong)param_1 * 0x10));
  fVar6 = sinf(fVar6 * __real_40c90fdb);
  fVar7 = __real_3f800000;
  if ((this->Animate & Vertical) != None) {
    fVar7 = fVar6;
  }
  if ((this->Animate & Horizontal) == None) {
    fVar6 = __real_3f800000;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)fVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar7;
  return __return_storage_ptr__;
}

// InvalidatePieceImage @ 142881a50

void __thiscall SThrobber::InvalidatePieceImage(SThrobber *this)

{
  SWidget::Invalidate((SWidget *)this,Paint);
  return;
}

// SetAnimate @ 1428957b0

void __thiscall SThrobber::SetAnimate(SThrobber *this,EAnimation param_1)

{
  if (this->Animate != param_1) {
    this->Animate = param_1;
    SWidget::Invalidate((SWidget *)this,PaintAndVolatility);
    return;
  }
  return;
}

// SetNumPieces @ 142897ca0

void __thiscall SThrobber::SetNumPieces(SThrobber *this,int param_1)

{
  if (this->NumPieces != param_1) {
    this->NumPieces = param_1;
    ConstructPieces(this);
    SWidget::Invalidate((SWidget *)this,Layout);
    return;
  }
  return;
}

// SetPieceImage @ 142898640

void __thiscall SThrobber::SetPieceImage(SThrobber *this,FSlateBrush *param_1)

{
  if (this->PieceImage != param_1) {
    this->PieceImage = param_1;
    SWidget::Invalidate((SWidget *)this,Paint);
    return;
  }
  return;
}

