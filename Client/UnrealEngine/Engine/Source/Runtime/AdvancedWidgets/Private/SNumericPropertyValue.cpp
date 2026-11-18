// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 14

// Construct @ 14d84f8a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x00014d85001b) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::Construct
          (SNumericPropertyValue *this,FArguments *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  TUniquePtr<FSlateStyleSet,TDefaultDelete<FSlateStyleSet>_> TVar13;
  FSharedReferencer<1> FVar14;
  SSpinBox<double> *pSVar15;
  char cVar16;
  byte bVar17;
  bool bVar18;
  FProperty *pFVar19;
  FName *pFVar20;
  FSpinBoxStyle *pFVar21;
  FArguments *pFVar22;
  undefined8 *puVar23;
  TSharedRef<SWidget_const_,1> *pTVar24;
  ulong64 uVar25;
  TSharedRef<SWidget,1> *pTVar26;
  SSpinBox<__int64> *pSVar27;
  SSpinBox<__int64> *pSVar28;
  FArguments *pFVar29;
  SSpinBox<unsigned___int64> *pSVar30;
  SSpinBox<unsigned___int64> *pSVar31;
  FArguments *pFVar32;
  SWidget *pSVar33;
  longlong *this_00;
  SWidget *local_res8;
  SWidget *local_res10;
  T0RequiredArgs local_res18 [8];
  FLLMScope local_res20 [2];
  FMemScope local_1858;
  undefined4 uStack_1850;
  uint uStack_184c;
  FLLMScope local_1848;
  FLLMScope local_1844 [4];
  TSharedRef<SWidget,1> local_1838;
  TSharedRef<SWidget,1> local_1828;
  longlong local_1818;
  undefined8 uStack_1810;
  TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs> local_1808;
  TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs> local_17f0;
  TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs> local_17d8;
  FName local_17c0;
  FMemScope local_17b8;
  FName local_17b0;
  FMemScope local_17a8;
  FName local_17a0;
  FDestructionSentinel local_1798;
  undefined1 *local_1780;
  FDestructionSentinel local_1778;
  undefined1 *local_1760;
  FDestructionSentinel local_1758;
  undefined1 *local_1740;
  FDestructionSentinel local_1738;
  undefined1 *local_1720;
  FDestructionSentinel local_1718;
  undefined1 *local_1700;
  FDestructionSentinel local_16f8;
  undefined1 *local_16e0;
  code *local_16d8;
  TReferenceControllerBase<1> *pTStack_16d0;
  TSharedRef<SWidget,1> local_16c8;
  code *local_16b8;
  TReferenceControllerBase<1> *pTStack_16b0;
  FName local_16a8;
  TSharedRef<SWidget_const_,1> local_16a0;
  code *local_1688;
  longlong lStack_1680;
  TSharedRef<SWidget,1> local_1678;
  code *local_1668;
  longlong lStack_1660;
  TSharedRef<SWidget_const_,1> local_1658;
  code *local_1648;
  TReferenceControllerBase<1> *pTStack_1640;
  TSharedRef<SWidget,1> local_1638;
  code *local_1628;
  TReferenceControllerBase<1> *pTStack_1620;
  TSharedRef<SWidget_const_,1> local_1618;
  FArguments local_1608;
  FArguments local_ec8;
  FArguments local_788;
  
  bVar12 = false;
  bVar11 = false;
  bVar10 = false;
  bVar9 = false;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar18 = false;
  local_res8 = (SWidget *)((ulonglong)local_res8 & 0xffffffff00000000);
  FPropertyPath::operator=(&this->Path,&param_1->_Path);
  this->NotifyHook = param_1->_NotifyHook;
  pFVar19 = FPropertyPath::GetLastProperty(&this->Path);
  TVar13 = AdvancedWidgets::FAdvancedWidgetsStyle::Instance;
  if (pFVar19 == (FProperty *)0x0) {
    return;
  }
  if ((*(uint *)(pFVar19->_padding_ + 0x18) >> 0x18 & 1) == 0) {
    return;
  }
  if (pFVar19->ArrayDim != 1) {
    return;
  }
  pFVar20 = ::FName::FName(&local_16a8,"PropertyValue.SpinBox");
  pFVar21 = (FSpinBoxStyle *)
            (**(code **)((TVar13.Ptr)->_padding_ + 0xa0))
                      (TVar13.Ptr,FSpinBoxStyle::TypeName,*pFVar20,0,1);
  if (pFVar21 == (FSpinBoxStyle *)0x0) {
    pFVar21 = FSpinBoxStyle::GetDefault();
  }
  cVar16 = (**(code **)(pFVar19->_padding_ + 0x250))(pFVar19,0xffffffffffffffff);
  if ((cVar16 == '\0') ||
     (cVar16 = (**(code **)(pFVar19->_padding_ + 0x1d8))(pFVar19), cVar16 == '\0')) {
    cVar16 = (**(code **)(pFVar19->_padding_ + 0x1d8))(pFVar19);
    if (cVar16 == '\0') {
      pFVar32 = SSpinBox<double>::FArguments::FArguments(&local_788);
      pFVar32->_Style = pFVar21;
      (pFVar32->_Value).bIsSet = true;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar32->_Value).Getter
                 ,(FWriteAccessScope *)&local_1718);
      local_1700 = &(pFVar32->_Value).Getter.field_0x8;
      puVar23 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1700);
      pSVar33 = local_res8;
      if (puVar23 != (undefined8 *)0x0) {
        uStack_184c = uStack_1810._4_4_;
        local_1858 = (FMemScope)GetCurrentValue_double;
        uStack_1850 = 0;
        pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1618);
        pSVar33 = (SWidget *)(pTVar24->SharedReferenceCount).ReferenceController;
        pSVar3 = pTVar24->Object;
        if (pSVar33 != (SWidget *)0x0) {
          LOCK();
          *(int *)&pSVar33->_padding_ = (int)pSVar33->_padding_ + 1;
          UNLOCK();
          LOCK();
          *(int *)&pSVar33->_padding_ = (int)pSVar33->_padding_ + 1;
          UNLOCK();
        }
        *puVar23 = &___7__TCommonDelegateInstanceState___A6ANXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar25;
        *puVar23 = &
                   ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6ANXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar23[3] = pSVar3;
        puVar23[4] = pSVar33;
        if (pSVar33 != (SWidget *)0x0) {
          LOCK();
          puVar2 = (undefined1 *)((longlong)&pSVar33->_padding_ + 4);
          *(int *)puVar2 = *(int *)puVar2 + 1;
          UNLOCK();
        }
        bVar12 = true;
        bVar11 = true;
        bVar10 = true;
        *(FMemScope *)(puVar23 + 5) = local_1858;
        puVar23[6] = CONCAT44(uStack_184c,uStack_1850);
      }
      if (bVar11) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar33);
      }
      if (bVar12) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar33);
      }
      if (bVar10) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1618.SharedReferenceCount.ReferenceController);
      }
      bVar6 = false;
      bVar5 = false;
      bVar18 = false;
      if (local_1718.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1718.Accessor,&local_1718);
      }
      local_1838.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           ((ulonglong)local_1838.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
      local_1838.Object = (SWidget *)OnValueChanged_double;
      local_16d8 = OnValueChanged_double;
      pTStack_16d0 = local_1838.SharedReferenceCount.ReferenceController;
      TDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy>::
      BindSP<UE::PropertyViewer::SNumericPropertyValue>
                ((TDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy> *)
                 &pFVar32->_OnValueChanged,this,(pmf_4a76d27f *)&local_16d8);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &pFVar32->_OnValueCommitted,(FWriteAccessScope *)&local_16f8);
      local_16e0 = &(pFVar32->_OnValueCommitted).field_0x8;
      puVar23 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_16e0);
      pSVar33 = local_res8;
      if (puVar23 != (undefined8 *)0x0) {
        uStack_184c = uStack_1810._4_4_;
        local_1858 = (FMemScope)OnValueCommitted_double;
        uStack_1850 = 0;
        pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                            ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_16c8);
        pSVar33 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
        local_res8 = pTVar26->Object;
        if (pSVar33 != (SWidget *)0x0) {
          LOCK();
          *(int *)&pSVar33->_padding_ = (int)pSVar33->_padding_ + 1;
          UNLOCK();
          LOCK();
          *(int *)&pSVar33->_padding_ = (int)pSVar33->_padding_ + 1;
          UNLOCK();
        }
        bVar6 = true;
        bVar5 = true;
        bVar18 = true;
        *puVar23 = &
                   ___7__TCommonDelegateInstanceState___A6AXNW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar25 = FDelegateHandle::GenerateNewID();
        puVar23[2] = uVar25;
        *puVar23 = &
                   ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AXNW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
        ;
        puVar23[3] = local_res8;
        puVar23[4] = pSVar33;
        if (pSVar33 != (SWidget *)0x0) {
          LOCK();
          puVar2 = (undefined1 *)((longlong)&pSVar33->_padding_ + 4);
          *(int *)puVar2 = *(int *)puVar2 + 1;
          UNLOCK();
        }
        *(FMemScope *)(puVar23 + 5) = local_1858;
        puVar23[6] = CONCAT44(uStack_184c,uStack_1850);
      }
      if (bVar18) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar33);
      }
      if (bVar5) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pSVar33);
      }
      if (bVar6) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_16c8.SharedReferenceCount.ReferenceController);
      }
      if (local_16f8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_16f8.Accessor,&local_16f8);
      }
      local_1838.SharedReferenceCount.ReferenceController =
           local_1838.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
      local_1838.Object = (SWidget *)OnEndSliderMovement_double;
      local_16b8 = OnEndSliderMovement_double;
      pTStack_16b0 = local_1838.SharedReferenceCount.ReferenceController;
      TDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy>::
      BindSP<UE::PropertyViewer::SNumericPropertyValue>
                ((TDelegateRegistration<void___cdecl(double),FDefaultDelegateUserPolicy> *)
                 &pFVar32->_OnEndSliderMovement,this,(pmf_4a76d27f *)&local_16b8);
      FLLMScope::FLLMScope(local_1844,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true)
      ;
      local_17a0 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&local_1858,&local_17a0,true);
      TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SSpinBox<double>,RequiredArgs::T0RequiredArgs>
                (&local_17d8,"SSpinBox<double>",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SNumericPropertyValue.cpp"
                 ,0x42,local_res18);
      FMemScope::~FMemScope(&local_1858);
      FLLMScope::~FLLMScope(local_1844);
      pSVar15 = local_17d8._Widget.Object;
      if ((local_17d8._Widget.Object == (SSpinBox<double> *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SWidget::SWidgetConstruct((SWidget *)local_17d8._Widget.Object,(FSlateBaseNamedArgs *)pFVar32)
      ;
      SSpinBox<double>::Construct(local_17d8._Widget.Object,pFVar32);
      if ((local_17d8._Widget.Object == (SSpinBox<double> *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((local_17d8._Widget.Object)->_padding_ & 0x10) == 0) {
        cVar16 = (**(code **)((local_17d8._Widget.Object)->_padding_ + 0x228))
                           (local_17d8._Widget.Object);
        bVar17 = 0;
        if (cVar16 == '\0') goto LAB_14d8505b9;
      }
      bVar17 = 0x20;
LAB_14d8505b9:
      *(byte *)&(local_17d8._Widget.Object)->_padding_ =
           (byte)(local_17d8._Widget.Object)->_padding_ & 0xdf;
      *(byte *)&(local_17d8._Widget.Object)->_padding_ =
           (byte)(local_17d8._Widget.Object)->_padding_ | bVar17;
      if ((local_17d8._Widget.Object == (SSpinBox<double> *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pbVar1 = (byte *)((longlong)&(local_17d8._Widget.Object)->_padding_ + 1);
      *pbVar1 = *pbVar1 | 4;
      if ((local_17d8._Widget.Object == (SSpinBox<double> *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x416,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar14.ReferenceController = local_17d8._Widget.SharedReferenceCount.ReferenceController;
      local_17d8._Widget.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      local_17d8._Widget.Object = (SSpinBox<double> *)0x0;
      if ((pSVar15 == (SSpinBox<double> *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x26c,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = &this->_padding_;
      if (FVar14.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
        FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
      }
      else {
        LOCK();
        (FVar14.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
        FSlotBase::DetatchParentFromContent((FSlotBase *)this_00);
        LOCK();
        (FVar14.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1818 = this->_padding_;
      uStack_1810 = (TReferenceControllerBase<1> *)this->_padding_;
      this->_padding_ = (longlong)pSVar15;
      this->_padding_ = (longlong)FVar14.ReferenceController;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (uStack_1810);
      FSlotBase::AfterContentOrOwnerAssigned((FSlotBase *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar14.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar14.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_17d8._Widget.SharedReferenceCount.ReferenceController);
      SSpinBox<double>::FArguments::~FArguments(&local_788);
      return;
    }
    pFVar29 = SSpinBox<unsigned___int64>::FArguments::FArguments(&local_ec8);
    pFVar29->_Style = pFVar21;
    (pFVar29->_Value).bIsSet = true;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar29->_Value).Getter,
               (FWriteAccessScope *)&local_1758);
    local_1740 = &(pFVar29->_Value).Getter.field_0x8;
    puVar23 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1740);
    pSVar33 = local_res8;
    if (puVar23 != (undefined8 *)0x0) {
      uStack_184c = uStack_1810._4_4_;
      local_1858 = (FMemScope)GetCurrentValue_uint64;
      uStack_1850 = 0;
      pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1658);
      pSVar33 = (SWidget *)(pTVar24->SharedReferenceCount).ReferenceController;
      pSVar3 = pTVar24->Object;
      if (pSVar33 != (SWidget *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar33->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pSVar33->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
        UNLOCK();
      }
      *puVar23 = &___7__TCommonDelegateInstanceState___A6A_KXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar25 = FDelegateHandle::GenerateNewID();
      puVar23[2] = uVar25;
      *puVar23 = &
                 ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6A_KXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar23[3] = pSVar3;
      puVar23[4] = pSVar33;
      if (pSVar33 != (SWidget *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar33->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar33->_padding_)[1] + 1);
        UNLOCK();
      }
      bVar9 = true;
      bVar8 = true;
      bVar7 = true;
      *(FMemScope *)(puVar23 + 5) = local_1858;
      puVar23[6] = CONCAT44(uStack_184c,uStack_1850);
    }
    if (bVar7) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar33);
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar33);
    }
    if (bVar9) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1658.SharedReferenceCount.ReferenceController);
    }
    bVar5 = false;
    bVar18 = false;
    if (local_1758.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1758.Accessor,&local_1758);
    }
    local_1828.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)
         ((ulonglong)local_1828.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
    local_1828.Object = (SWidget *)OnValueChanged_uint64;
    local_1648 = OnValueChanged_uint64;
    pTStack_1640 = local_1828.SharedReferenceCount.ReferenceController;
    TDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
    BindSP<UE::PropertyViewer::SNumericPropertyValue>
              ((TDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *)
               &pFVar29->_OnValueChanged,this,(pmf_b4a4eab9 *)&local_1648);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar29->_OnValueCommitted
               ,(FWriteAccessScope *)&local_1738);
    local_1720 = &(pFVar29->_OnValueCommitted).field_0x8;
    puVar23 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1720);
    pSVar33 = local_res8;
    if (puVar23 != (undefined8 *)0x0) {
      uStack_184c = uStack_1810._4_4_;
      local_1858 = (FMemScope)OnValueCommitted_uint64;
      uStack_1850 = 0;
      pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                          ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1638);
      pSVar33 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
      local_res8 = pTVar26->Object;
      if (pSVar33 != (SWidget *)0x0) {
        LOCK();
        *(atomic<int> *)&pSVar33->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
        UNLOCK();
        LOCK();
        *(atomic<int> *)&pSVar33->_padding_ =
             (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
        UNLOCK();
      }
      bVar18 = true;
      bVar5 = true;
      *puVar23 = &
                 ___7__TCommonDelegateInstanceState___A6AX_KW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar25 = FDelegateHandle::GenerateNewID();
      puVar23[2] = uVar25;
      *puVar23 = &
                 ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_KW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar23[3] = local_res8;
      puVar23[4] = pSVar33;
      if (pSVar33 != (SWidget *)0x0) {
        LOCK();
        ((atomic<int> *)&pSVar33->_padding_)[1] =
             (atomic<int>)((int)((atomic<int> *)&pSVar33->_padding_)[1] + 1);
        UNLOCK();
      }
      *(FMemScope *)(puVar23 + 5) = local_1858;
      puVar23[6] = CONCAT44(uStack_184c,uStack_1850);
    }
    if (bVar18) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar33);
    }
    if (bVar5) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1638.SharedReferenceCount.ReferenceController);
    }
    if (local_1738.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1738.Accessor,&local_1738);
    }
    local_1828.SharedReferenceCount.ReferenceController =
         local_1828.SharedReferenceCount.ReferenceController & 0xffffffff00000000;
    local_1828.Object = (SWidget *)OnEndSliderMovement_uint64;
    local_1628 = OnEndSliderMovement_uint64;
    pTStack_1620 = local_1828.SharedReferenceCount.ReferenceController;
    TDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
    BindSP<UE::PropertyViewer::SNumericPropertyValue>
              ((TDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy> *)
               &pFVar29->_OnEndSliderMovement,this,(pmf_b4a4eab9 *)&local_1628);
    FLLMScope::FLLMScope(&local_1848,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_17b0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_17a8,&local_17b0,true);
    TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SSpinBox<unsigned___int64>,RequiredArgs::T0RequiredArgs>
              (&local_17f0,"SSpinBox<uint64>",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SNumericPropertyValue.cpp"
               ,0x35,(T0RequiredArgs *)&local_res10);
    FMemScope::~FMemScope(&local_17a8);
    FLLMScope::~FLLMScope(&local_1848);
    pSVar30 = TSharedPtr<SSpinBox<unsigned___int64>,1>::operator->(&local_17f0._Widget);
    SWidget::SWidgetConstruct((SWidget *)pSVar30,(FSlateBaseNamedArgs *)pFVar29);
    pSVar30 = local_17f0._Widget.Object;
    SSpinBox<unsigned___int64>::Construct(local_17f0._Widget.Object,pFVar29);
    pSVar31 = TSharedPtr<SSpinBox<unsigned___int64>,1>::operator->(&local_17f0._Widget);
    if ((pSVar31->_padding_ & 0x10) == 0) {
      cVar16 = (**(code **)(pSVar31->_padding_ + 0x228))(pSVar31);
      bVar17 = 0;
      if (cVar16 == '\0') goto LAB_14d850142;
    }
    bVar17 = 0x20;
LAB_14d850142:
    *(byte *)&pSVar31->_padding_ = (byte)pSVar31->_padding_ & 0xdf;
    *(byte *)&pSVar31->_padding_ = (byte)pSVar31->_padding_ | bVar17;
    pSVar31 = TSharedPtr<SSpinBox<unsigned___int64>,1>::operator->(&local_17f0._Widget);
    pbVar1 = (byte *)((longlong)&pSVar31->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if ((local_17f0._Widget.Object == (SSpinBox<unsigned___int64> *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x416,L""), bVar18)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar14.ReferenceController = local_17f0._Widget.SharedReferenceCount.ReferenceController;
    local_17f0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
    ;
    local_17f0._Widget.Object = (SSpinBox<unsigned___int64> *)0x0;
    if ((pSVar30 == (SSpinBox<unsigned___int64> *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x26c,L""), bVar18)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1838.Object = (SWidget *)pSVar30;
    local_1838.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
    if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar14.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
              ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
               &this->_padding_,&local_1838);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar14.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SSpinBox<unsigned___int64>::FArguments::~FArguments(&local_ec8);
    return;
  }
  pFVar22 = SSpinBox<__int64>::FArguments::FArguments(&local_1608);
  pFVar22->_Style = pFVar21;
  (pFVar22->_Value).bIsSet = true;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&(pFVar22->_Value).Getter,
             (FWriteAccessScope *)&local_1798);
  local_1780 = &(pFVar22->_Value).Getter.field_0x8;
  puVar23 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1780);
  pSVar33 = local_res8;
  if (puVar23 != (undefined8 *)0x0) {
    uStack_184c = uStack_1810._4_4_;
    local_1858 = (FMemScope)GetCurrentValue_int64;
    uStack_1850 = 0;
    pTVar24 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_16a0);
    pSVar33 = (SWidget *)(pTVar24->SharedReferenceCount).ReferenceController;
    pSVar3 = pTVar24->Object;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
    }
    *puVar23 = &___7__TCommonDelegateInstanceState___A6A_JXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar25;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__00__CBVSNumericPropertyValue_PropertyViewer_UE___00__A6A_JXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = pSVar3;
    puVar23[4] = pSVar33;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar33->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar33->_padding_)[1] + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar18 = true;
    *(FMemScope *)(puVar23 + 5) = local_1858;
    puVar23[6] = CONCAT44(uStack_184c,uStack_1850);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_16a0.SharedReferenceCount.ReferenceController);
  }
  bVar6 = false;
  bVar5 = false;
  bVar18 = false;
  if (local_1798.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1798.Accessor,&local_1798);
  }
  uStack_1850 = 0;
  local_1858 = (FMemScope)OnValueChanged_int64;
  lStack_1680 = (ulonglong)uStack_184c << 0x20;
  local_1688 = OnValueChanged_int64;
  TDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
  BindSP<UE::PropertyViewer::SNumericPropertyValue>
            ((TDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
             &pFVar22->_OnValueChanged,this,(pmf_6267366a *)&local_1688);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar22->_OnValueCommitted,
             (FWriteAccessScope *)&local_1778);
  local_1760 = &(pFVar22->_OnValueCommitted).field_0x8;
  puVar23 = Core::Private::DelegateAllocate(0x38,(FDelegateAllocation *)local_1760);
  pSVar33 = local_res8;
  if (puVar23 != (undefined8 *)0x0) {
    uStack_184c = uStack_1810._4_4_;
    local_1858 = (FMemScope)OnValueCommitted_int64;
    uStack_1850 = 0;
    pTVar26 = TSharedFromThis<SWidget,1>::AsShared
                        ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_1678);
    pSVar33 = (SWidget *)(pTVar26->SharedReferenceCount).ReferenceController;
    local_res10 = pTVar26->Object;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
      LOCK();
      *(atomic<int> *)&pSVar33->_padding_ =
           (atomic<int>)((int)*(atomic<int> *)&pSVar33->_padding_ + 1);
      UNLOCK();
    }
    bVar6 = true;
    bVar5 = true;
    bVar18 = true;
    *puVar23 = &
               ___7__TCommonDelegateInstanceState___A6AX_JW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar25 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar25;
    *puVar23 = &
               ___7__TBaseSPMethodDelegateInstance__0A_VSNumericPropertyValue_PropertyViewer_UE___00__A6AX_JW4Type_ETextCommit___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar23[3] = local_res10;
    puVar23[4] = pSVar33;
    if (pSVar33 != (SWidget *)0x0) {
      LOCK();
      ((atomic<int> *)&pSVar33->_padding_)[1] =
           (atomic<int>)((int)((atomic<int> *)&pSVar33->_padding_)[1] + 1);
      UNLOCK();
    }
    *(FMemScope *)(puVar23 + 5) = local_1858;
    puVar23[6] = CONCAT44(uStack_184c,uStack_1850);
  }
  if (bVar18) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar5) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar33);
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1678.SharedReferenceCount.ReferenceController);
  }
  if (local_1778.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1778.Accessor,&local_1778);
  }
  uStack_1850 = 0;
  local_1858 = (FMemScope)OnEndSliderMovement_int64;
  lStack_1660 = (ulonglong)uStack_184c << 0x20;
  local_1668 = OnEndSliderMovement_int64;
  TDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
  BindSP<UE::PropertyViewer::SNumericPropertyValue>
            ((TDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
             &pFVar22->_OnEndSliderMovement,this,(pmf_6267366a *)&local_1668);
  FLLMScope::FLLMScope(local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_17c0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_17b8,&local_17c0,true);
  TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SSpinBox<__int64>,RequiredArgs::T0RequiredArgs>
            (&local_1808,"SSpinBox<int64>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SNumericPropertyValue.cpp"
             ,0x28,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_17b8);
  FLLMScope::~FLLMScope(local_res20);
  pSVar27 = TSharedPtr<SSpinBox<__int64>,1>::operator->(&local_1808._Widget);
  SWidget::SWidgetConstruct((SWidget *)pSVar27,(FSlateBaseNamedArgs *)pFVar22);
  pSVar27 = local_1808._Widget.Object;
  SSpinBox<__int64>::Construct(local_1808._Widget.Object,pFVar22);
  pSVar28 = TSharedPtr<SSpinBox<__int64>,1>::operator->(&local_1808._Widget);
  if ((pSVar28->_padding_ & 0x10) == 0) {
    cVar16 = (**(code **)(pSVar28->_padding_ + 0x228))(pSVar28);
    bVar17 = 0;
    if (cVar16 == '\0') goto LAB_14d84fd0d;
  }
  bVar17 = 0x20;
LAB_14d84fd0d:
  *(byte *)&pSVar28->_padding_ = (byte)pSVar28->_padding_ & 0xdf;
  *(byte *)&pSVar28->_padding_ = (byte)pSVar28->_padding_ | bVar17;
  pSVar28 = TSharedPtr<SSpinBox<__int64>,1>::operator->(&local_1808._Widget);
  pbVar1 = (byte *)((longlong)&pSVar28->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_1808._Widget.Object == (SSpinBox<__int64> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x416,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVar14.ReferenceController = local_1808._Widget.SharedReferenceCount.ReferenceController;
  local_1808._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_1808._Widget.Object = (SSpinBox<__int64> *)0x0;
  if ((pSVar27 == (SSpinBox<__int64> *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x26c,L""), bVar18)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_1828.Object = (SWidget *)pSVar27;
  local_1828.SharedReferenceCount.ReferenceController = FVar14.ReferenceController;
  if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar14.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_>::operator[]
            ((TSingleWidgetChildrenWithSlot<TSingleWidgetChildrenWithBasicLayoutSlot<0>_> *)
             &this->_padding_,&local_1828);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar14.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SSpinBox<__int64>::FArguments::~FArguments(&local_1608);
  return;
}

// CreateInstance @ 14d85a470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedPtr<SWidget,1> * __cdecl
UE::PropertyViewer::SNumericPropertyValue::CreateInstance
          (TSharedPtr<SWidget,1> *__return_storage_ptr__,FGenerateArgs *param_1)

{
  byte *pbVar1;
  ForElementType<FProperty_const_*> FVar2;
  code *pcVar3;
  SNumericPropertyValue *pSVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  FArguments *pFVar9;
  FPropertyPath *pFVar10;
  TSharedPtr<SWidget,1> *pTVar11;
  undefined1 auStackY_328 [32];
  T0RequiredArgs local_2f8 [4];
  FLLMScope local_2f4;
  undefined1 local_2f0;
  undefined1 local_2ef;
  undefined1 local_2e8 [8];
  ForAnyElementType FStack_2e0;
  ulonglong local_2d8;
  TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs> local_2d0;
  FName local_2b8;
  FMemScope local_2b0;
  FDestructionSentinel local_2a8;
  FPropertyPath local_290;
  FArguments local_260;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pFVar9 = FArguments::FArguments(&local_260);
  pFVar10 = FPropertyPath::FPropertyPath(&local_290,&param_1->Path);
  FPropertyPath::operator=(&pFVar9->_Path,pFVar10);
  FVar2 = (pFVar10->Properties).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  pFVar9->_NotifyHook = param_1->NotifyHook;
  local_2f0 = param_1->bCanEditValue;
  local_2ef = 1;
  local_2e8 = (undefined1  [8])0x0;
  FStack_2e0.Data = (FScriptContainerElement *)0x0;
  local_2d8 = 0;
  *(undefined1 *)&pFVar9->_padding_ = local_2f0;
  *(undefined1 *)((longlong)&pFVar9->_padding_ + 1) = 1;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar9->_padding_,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2e8,
             (FWriteAccessScope *)&local_2a8);
  if (((int)local_2d8 != 0) && (FStack_2e0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e0,0,0,0x10);
    local_2d8 = local_2d8 & 0xffffffff00000000;
  }
  if (local_2a8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2a8.Accessor,&local_2a8);
  }
  if (FStack_2e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2e8);
  FLLMScope::FLLMScope(&local_2f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_2b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_2b0,&local_2b8,true);
  TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<UE::PropertyViewer::SNumericPropertyValue,RequiredArgs::T0RequiredArgs>
            (&local_2d0,"SNumericPropertyValue",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AdvancedWidgets\\Private\\Widgets\\PropertyViewer\\SNumericPropertyValue.cpp"
             ,0x13,local_2f8);
  FMemScope::~FMemScope(&local_2b0);
  FLLMScope::~FLLMScope(&local_2f4);
  pSVar4 = local_2d0._Widget.Object;
  if (local_2d0._Widget.Object == (SNumericPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_2d0._Widget.Object,(FSlateBaseNamedArgs *)pFVar9);
  Construct(local_2d0._Widget.Object,pFVar9);
  if (local_2d0._Widget.Object == (SNumericPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  if (((local_2d0._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar7 = (**(code **)((local_2d0._Widget.Object)->_padding_ + 0x228))(local_2d0._Widget.Object);
    bVar8 = 0;
    if (cVar7 == '\0') goto LAB_14d85a6a8;
  }
  bVar8 = 0x20;
LAB_14d85a6a8:
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_2d0._Widget.Object)->_padding_ =
       (byte)(local_2d0._Widget.Object)->_padding_ | bVar8;
  if (local_2d0._Widget.Object == (SNumericPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_2d0._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_2d0._Widget.Object == (SNumericPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  FVar5.ReferenceController = local_2d0._Widget.SharedReferenceCount.ReferenceController;
  local_2d0._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_2d0._Widget.Object = (SNumericPropertyValue *)0x0;
  if (pSVar4 == (SNumericPropertyValue *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar11 = (TSharedPtr<SWidget,1> *)(*pcVar3)();
      return pTVar11;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar4;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = FVar5.ReferenceController;
  if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar5.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar5.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  if (local_260._Path.Properties.AllocatorInstance.SecondaryData !=
      (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)local_260._Path.Properties.AllocatorInstance.SecondaryData);
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_260);
  FVar2 = (param_1->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  return __return_storage_ptr__;
}

// GetCurrentValue_double @ 14d866fb0

double __thiscall
UE::PropertyViewer::SNumericPropertyValue::GetCurrentValue_double(SNumericPropertyValue *this)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  pvVar4 = FPropertyPath::GetContainerPtr(&this->Path);
  if (pvVar4 != (void *)0x0) {
    pFVar5 = FPropertyPath::GetLastProperty(&this->Path);
    if ((pFVar5 != (FProperty *)0x0) && ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
      if (pFVar5->ArrayDim < 1) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          dVar2 = (double)(*pcVar1)();
          return dVar2;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014d86703f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      dVar2 = (double)(**(code **)(pFVar5->_padding_ + 0x230))
                                (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4);
      return dVar2;
    }
  }
  return 0.0;
}

// GetCurrentValue_int64 @ 14d867060

long64 __thiscall
UE::PropertyViewer::SNumericPropertyValue::GetCurrentValue_int64(SNumericPropertyValue *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FProperty *pFVar4;
  long64 lVar5;
  
  pvVar3 = FPropertyPath::GetContainerPtr(&this->Path);
  if (pvVar3 != (void *)0x0) {
    pFVar4 = FPropertyPath::GetLastProperty(&this->Path);
    if ((pFVar4 != (FProperty *)0x0) && ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
      if (pFVar4->ArrayDim < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          lVar5 = (*pcVar1)();
          return lVar5;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014d8670ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      lVar5 = (**(code **)(pFVar4->_padding_ + 0x210))
                        (pFVar4,(longlong)pFVar4->Offset_Internal + (longlong)pvVar3);
      return lVar5;
    }
  }
  return 0;
}

// GetCurrentValue_uint64 @ 14d867110

ulong64 __thiscall
UE::PropertyViewer::SNumericPropertyValue::GetCurrentValue_uint64(SNumericPropertyValue *this)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  FProperty *pFVar4;
  ulong64 uVar5;
  
  pvVar3 = FPropertyPath::GetContainerPtr(&this->Path);
  if (pvVar3 != (void *)0x0) {
    pFVar4 = FPropertyPath::GetLastProperty(&this->Path);
    if ((pFVar4 != (FProperty *)0x0) && ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
      if (pFVar4->ArrayDim < 1) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar5 = (*pcVar1)();
          return uVar5;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00014d86719f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (**(code **)(pFVar4->_padding_ + 0x220))
                        (pFVar4,(longlong)pFVar4->Offset_Internal + (longlong)pvVar3);
      return uVar5;
    }
  }
  return 0;
}

// OnEndSliderMovement_double @ 14d874930

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::OnEndSliderMovement_double
          (SNumericPropertyValue *this,double param_1)

{
  FPropertyPath *this_00;
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  pIVar1 = this->NotifyHook;
  this_00 = &this->Path;
  pvVar4 = FPropertyPath::GetContainerPtr(this_00);
  if (((pvVar4 != (void *)0x0) &&
      (pFVar5 = FPropertyPath::GetLastProperty(this_00), pFVar5 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,this_00);
    }
    if ((pFVar5->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x1f8))
              (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4,SUB84(param_1,0));
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
    }
  }
  return;
}

// OnEndSliderMovement_int64 @ 14d874940

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::OnEndSliderMovement_int64
          (SNumericPropertyValue *this,long64 param_1)

{
  FPropertyPath *this_00;
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  pIVar1 = this->NotifyHook;
  this_00 = &this->Path;
  pvVar4 = FPropertyPath::GetContainerPtr(this_00);
  if (((pvVar4 != (void *)0x0) &&
      (pFVar5 = FPropertyPath::GetLastProperty(this_00), pFVar5 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,this_00);
    }
    if ((pFVar5->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x1e8))
              (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4,param_1);
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
    }
  }
  return;
}

// OnEndSliderMovement_uint64 @ 14d874950

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::OnEndSliderMovement_uint64
          (SNumericPropertyValue *this,ulong64 param_1)

{
  FPropertyPath *this_00;
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  pIVar1 = this->NotifyHook;
  this_00 = &this->Path;
  pvVar4 = FPropertyPath::GetContainerPtr(this_00);
  if (((pvVar4 != (void *)0x0) &&
      (pFVar5 = FPropertyPath::GetLastProperty(this_00), pFVar5 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,this_00);
    }
    if ((pFVar5->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x1f0))
              (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4,param_1);
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
    }
  }
  return;
}

// OnValueChanged_double @ 14d87d660

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::OnValueChanged_double
          (SNumericPropertyValue *this,double param_1)

{
  FPropertyPath *this_00;
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  pIVar1 = this->NotifyHook;
  this_00 = &this->Path;
  pvVar4 = FPropertyPath::GetContainerPtr(this_00);
  if (((pvVar4 != (void *)0x0) &&
      (pFVar5 = FPropertyPath::GetLastProperty(this_00), pFVar5 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,this_00);
    }
    if ((pFVar5->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x1f8))
              (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4,SUB84(param_1,0));
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
    }
  }
  return;
}

// OnValueChanged_int64 @ 14d87d760

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::OnValueChanged_int64
          (SNumericPropertyValue *this,long64 param_1)

{
  FPropertyPath *this_00;
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  pIVar1 = this->NotifyHook;
  this_00 = &this->Path;
  pvVar4 = FPropertyPath::GetContainerPtr(this_00);
  if (((pvVar4 != (void *)0x0) &&
      (pFVar5 = FPropertyPath::GetLastProperty(this_00), pFVar5 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,this_00);
    }
    if ((pFVar5->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x1e8))
              (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4,param_1);
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
    }
  }
  return;
}

// OnValueChanged_uint64 @ 14d87d860

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::OnValueChanged_uint64
          (SNumericPropertyValue *this,ulong64 param_1)

{
  FPropertyPath *this_00;
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  pIVar1 = this->NotifyHook;
  this_00 = &this->Path;
  pvVar4 = FPropertyPath::GetContainerPtr(this_00);
  if (((pvVar4 != (void *)0x0) &&
      (pFVar5 = FPropertyPath::GetLastProperty(this_00), pFVar5 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,this_00);
    }
    if ((pFVar5->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x1f0))
              (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4,param_1);
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
    }
  }
  return;
}

// OnValueCommitted_double @ 14d87d960

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::OnValueCommitted_double
          (SNumericPropertyValue *this,double param_1,Type param_2)

{
  FPropertyPath *this_00;
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  if (1 < param_2 - OnEnter) {
    return;
  }
  pIVar1 = this->NotifyHook;
  this_00 = &this->Path;
  pvVar4 = FPropertyPath::GetContainerPtr(this_00);
  if (((pvVar4 != (void *)0x0) &&
      (pFVar5 = FPropertyPath::GetLastProperty(this_00), pFVar5 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,this_00);
    }
    if ((pFVar5->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x1f8))
              (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4,SUB84(param_1,0));
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
    }
  }
  return;
}

// OnValueCommitted_int64 @ 14d87d980

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::OnValueCommitted_int64
          (SNumericPropertyValue *this,long64 param_1,Type param_2)

{
  FPropertyPath *this_00;
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  if (1 < param_2 - OnEnter) {
    return;
  }
  pIVar1 = this->NotifyHook;
  this_00 = &this->Path;
  pvVar4 = FPropertyPath::GetContainerPtr(this_00);
  if (((pvVar4 != (void *)0x0) &&
      (pFVar5 = FPropertyPath::GetLastProperty(this_00), pFVar5 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,this_00);
    }
    if ((pFVar5->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x1e8))
              (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4,param_1);
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
    }
  }
  return;
}

// OnValueCommitted_uint64 @ 14d87d9a0

void __thiscall
UE::PropertyViewer::SNumericPropertyValue::OnValueCommitted_uint64
          (SNumericPropertyValue *this,ulong64 param_1,Type param_2)

{
  FPropertyPath *this_00;
  INotifyHook *pIVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FProperty *pFVar5;
  
  if (1 < param_2 - OnEnter) {
    return;
  }
  pIVar1 = this->NotifyHook;
  this_00 = &this->Path;
  pvVar4 = FPropertyPath::GetContainerPtr(this_00);
  if (((pvVar4 != (void *)0x0) &&
      (pFVar5 = FPropertyPath::GetLastProperty(this_00), pFVar5 != (FProperty *)0x0)) &&
     ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x18 & 1) != 0)) {
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)*pIVar1)(pIVar1,this_00);
    }
    if ((pFVar5->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)(pFVar5->_padding_ + 0x1f0))
              (pFVar5,(longlong)pFVar5->Offset_Internal + (longlong)pvVar4,param_1);
    if (pIVar1 != (INotifyHook *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,this_00);
    }
  }
  return;
}

