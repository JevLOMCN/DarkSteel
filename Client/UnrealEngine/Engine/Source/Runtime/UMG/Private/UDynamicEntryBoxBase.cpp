// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 50

// GetEntrySpacing_WrapperImpl @ 14695b6b0

void __cdecl UDynamicEntryBoxBase::GetEntrySpacing_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1b8);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1b0);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetEntrySpacing_WrapperImpl @ 14695b6d0

void __cdecl UDynamicEntryBoxBase::SetEntrySpacing_WrapperImpl(void *param_1,void *param_2)

{
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  *pTVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  SWrapBox *this;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  SPanel *pSVar7;
  longlong lVar8;
  TSharedPtr<SPanel,1> *this_00;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_f0;
  ForAnyElementType FStack_e8;
  ulonglong uStack_e0;
  undefined1 auStack_d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_c0;
  ForAnyElementType FStack_b8;
  ulonglong uStack_b0;
  FDestructionSentinel FStack_a8;
  FDestructionSentinel FStack_90;
  TVector2<double>_u_0 aTStack_78 [5];
  
  auVar2 = *(undefined1 (*) [16])param_2;
  *(undefined1 (*) [16])((longlong)param_1 + 0x1b0) = auVar2;
  this_00 = (TSharedPtr<SPanel,1> *)((longlong)param_1 + 0x1f8);
  fVar18 = (float)auVar2._0_8_;
  this = (SWrapBox *)this_00->Object;
  fVar16 = (float)auVar2._8_8_;
  if (this != (SWrapBox *)0x0) {
    bVar3 = *(byte *)((longlong)param_1 + 0x1d0);
    if ((byte)(bVar3 - 2) < 2) {
      pTVar4 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x200);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      aTStack_78[0]._0_8_ = *(double *)((longlong)param_1 + 0x1b0);
      aTStack_78[0]._8_8_ = *(double *)((longlong)param_1 + 0x1b8);
      SWrapBox::SetInnerSlotPadding(this,(TVector2<double> *)&aTStack_78[0]._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
    else if (bVar3 == 5) {
      pSVar7 = TSharedPtr<SPanel,1>::operator->(this_00);
      lVar8 = (**(code **)(*(longlong *)pSVar7 + 0x180))(pSVar7);
      uVar12 = __xmm_80000000800000008000000080000000;
      uVar15 = 0;
      uVar10 = uVar15;
      uVar14 = uVar15;
      if (0 < *(int *)(lVar8 + 0x28)) {
        do {
          uStack_118 = 0;
          uStack_110 = 0;
          uVar13 = (uint)uVar10;
          if (*(int *)((longlong)param_1 + 0x1c8) < 1) {
            fVar17 = fVar18 * (float)(int)uVar13;
            if (fVar18 < 0.0) {
              uStack_110 = (ulonglong)((uint)fVar17 ^ uVar12);
            }
            else {
              uStack_118 = (ulonglong)(uint)fVar17;
            }
            fVar17 = fVar16 * (float)(int)uVar13;
            if (fVar16 < 0.0) goto LAB_146a138d2;
            uStack_118 = CONCAT44(fVar17,(undefined4)uStack_118);
          }
          else {
            fVar18 = 0.0;
            fVar17 = 0.0;
            uVar10 = uVar15;
            if ((int)uVar13 < 1) {
LAB_146a138bb:
              uStack_118 = (ulonglong)(uint)fVar18;
            }
            else {
              do {
                uVar9 = (int)uVar10 % *(int *)((longlong)param_1 + 0x1c8);
                uVar11 = 0;
                if ((int)uVar9 < *(int *)((longlong)param_1 + 0x1c8)) {
                  uVar11 = ~uVar9 >> 0x1f;
                }
                if ((uVar11 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                uVar11 = (int)uVar10 + 1;
                fVar18 = fVar18 + (float)*(double *)
                                          (*(longlong *)((longlong)param_1 + 0x1c0) +
                                          (longlong)(int)uVar9 * 0x10);
                fVar17 = fVar17 + (float)*(double *)
                                          (*(longlong *)((longlong)param_1 + 0x1c0) + 8 +
                                          (longlong)(int)uVar9 * 0x10);
                uVar10 = (ulonglong)uVar11;
              } while ((int)uVar11 < (int)uVar13);
              if (0.0 <= fVar18) goto LAB_146a138bb;
              uStack_110 = (ulonglong)((uint)fVar18 ^ uVar12);
            }
            fVar16 = fVar17;
            if (fVar17 < 0.0) {
LAB_146a138d2:
              uStack_110 = CONCAT44((uint)fVar17 ^ uVar12,(undefined4)uStack_110);
            }
            else {
              uStack_118 = CONCAT44(fVar17,(undefined4)uStack_118);
            }
          }
          uVar11 = 0;
          if ((int)uVar13 < *(int *)(lVar8 + 0x28)) {
            uVar11 = ~uVar13 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          auStack_108[0x10] = true;
          uVar10 = *(ulonglong *)(uVar14 + *(longlong *)(lVar8 + 0x20));
          auStack_108._0_8_ = uStack_118;
          auStack_108._8_8_ = uStack_110;
          uStack_e0 = 0;
          pTVar1 = (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                    *)(uVar10 + 0x28);
          TStack_f0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_e8.Data = (FScriptContainerElement *)0x0;
          if (pTVar1 == (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                         *)0x0) {
            uVar10 = uVar15;
          }
          SlateAttributePrivate::
          TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
          ::Assign(pTVar1,(ISlateAttributeContainer *)(uVar10 + 0x20),
                   (TAttribute<FMargin> *)auStack_108,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&TStack_f0,(FWriteAccessScope *)&FStack_a8);
          if (((int)uStack_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_e8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_e8,0,0,0x10);
            uStack_e0 = uStack_e0 & 0xffffffff00000000;
          }
          if (FStack_a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_a8.Accessor,&FStack_a8);
          }
          if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_e8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_f0.AccessDetector);
          uVar10 = (ulonglong)(uVar13 + 1);
          uVar14 = uVar14 + 8;
        } while ((int)(uVar13 + 1) < *(int *)(lVar8 + 0x28));
      }
    }
    else if (bVar3 < 2) {
      pSVar7 = TSharedPtr<SPanel,1>::operator->(this_00);
      lVar8 = (**(code **)(*(longlong *)pSVar7 + 0x180))(pSVar7);
      uVar15 = 0;
      uVar10 = uVar15;
      uVar14 = uVar15;
      if (0 < *(int *)(lVar8 + 0x28)) {
        do {
          uVar12 = (uint)uVar10;
          if ((((bVar3 == 0) || (uStack_118._4_4_ = fVar16, uVar12 == 0)) &&
              (uStack_118._4_4_ = 0.0, bVar3 == 0)) && (uVar12 != 0)) {
            uStack_118 = (ulonglong)(uint)fVar18;
          }
          else {
            uStack_118 = (ulonglong)(uint)uStack_118._4_4_ << 0x20;
          }
          uVar13 = 0;
          if ((int)uVar12 < *(int *)(lVar8 + 0x28)) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          auStack_d8[0x10] = true;
          uVar10 = *(ulonglong *)(uVar14 + *(longlong *)(lVar8 + 0x20));
          auStack_d8._0_8_ = uStack_118;
          auStack_d8._8_4_ = 0.0;
          auStack_d8._12_4_ = 0.0;
          uStack_b0 = 0;
          pTVar1 = (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                    *)(uVar10 + 0x28);
          TStack_c0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_b8.Data = (FScriptContainerElement *)0x0;
          if (pTVar1 == (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                         *)0x0) {
            uVar10 = uVar15;
          }
          SlateAttributePrivate::
          TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
          ::Assign(pTVar1,(ISlateAttributeContainer *)(uVar10 + 0x20),
                   (TAttribute<FMargin> *)auStack_d8,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&TStack_c0,(FWriteAccessScope *)&FStack_90);
          if (((int)uStack_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_b8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_b8,0,0,0x10);
            uStack_b0 = uStack_b0 & 0xffffffff00000000;
          }
          if (FStack_90.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_90.Accessor,&FStack_90);
          }
          if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_b8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_c0.AccessDetector);
          uVar10 = (ulonglong)(uVar12 + 1);
          uVar14 = uVar14 + 8;
        } while ((int)(uVar12 + 1) < *(int *)(lVar8 + 0x28));
      }
    }
  }
  return;
}

// GetEntryBoxType_WrapperImpl @ 14695b6e0

void __cdecl UDynamicEntryBoxBase::GetEntryBoxType_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1d0);
  return;
}

// GetEntrySizeRule_WrapperImpl @ 14695b6f0

void __cdecl UDynamicEntryBoxBase::GetEntrySizeRule_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1d4);
  return;
}

// GetEntryHorizontalAlignment_WrapperImpl @ 14695b710

void __cdecl
UDynamicEntryBoxBase::GetEntryHorizontalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1dc);
  return;
}

// GetEntryVerticalAlignment_WrapperImpl @ 14695b760

void __cdecl
UDynamicEntryBoxBase::GetEntryVerticalAlignment_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1dd);
  return;
}

// GetMaxElementSize_WrapperImpl @ 14695b770

void __cdecl UDynamicEntryBoxBase::GetMaxElementSize_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined4 *)param_2 = *(undefined4 *)((longlong)param_1 + 0x1e0);
  return;
}

// GetRadialBoxSettings_WrapperImpl @ 14695b780

void __cdecl UDynamicEntryBoxBase::GetRadialBoxSettings_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x1ec);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x1e4);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetRadialBoxSettings_WrapperImpl @ 14695b7a0

void __cdecl UDynamicEntryBoxBase::SetRadialBoxSettings_WrapperImpl(void *param_1,void *param_2)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  SRadialBox *this;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  
  uVar4 = *(undefined8 *)((longlong)param_2 + 8);
  lVar1 = *(longlong *)((longlong)param_1 + 0x1f8);
  *(undefined8 *)((longlong)param_1 + 0x1e4) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = uVar4;
  if ((lVar1 != 0) && (*(char *)((longlong)param_1 + 0x1d0) == '\x04')) {
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x200);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined4 *)(lVar1 + 0x24c) = *(undefined4 *)param_2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x200);
    lVar1 = *(longlong *)((longlong)param_1 + 0x1f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar1 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined1 *)(lVar1 + 600) = *(undefined1 *)((longlong)param_2 + 4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x200);
    lVar1 = *(longlong *)((longlong)param_1 + 0x1f8);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar1 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)(lVar1 + 0x254) = *(undefined4 *)((longlong)param_2 + 8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    this = *(SRadialBox **)((longlong)param_1 + 0x1f8);
    pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0x200);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this == (SRadialBox *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SRadialBox::SetSectorCentralAngle(this,*(float *)((longlong)param_2 + 0xc));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// StaticClass @ 14695b7f0

UClass * __cdecl UDynamicEntryBoxBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicEntryBoxBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"DynamicEntryBoxBase",
               &Z_Registration_Info_UClass_UDynamicEntryBoxBase.InnerSingleton,
               StaticRegisterNativesUDynamicEntryBoxBase,0x290,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicEntryBoxBase>,
               InternalVTableHelperCtorCaller<UDynamicEntryBoxBase>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicEntryBoxBase.InnerSingleton;
}

// UDynamicEntryBoxBase @ 1469898f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicEntryBoxBase * __thiscall
UDynamicEntryBoxBase::UDynamicEntryBoxBase(UDynamicEntryBoxBase *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->SpacingPattern).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpacingPattern).ArrayNum = 0;
  (this->SpacingPattern).ArrayMax = 0;
  this->MaxElementSize = 0;
  (this->RadialBoxSettings).StartingAngle = 0.0;
  (this->RadialBoxSettings).AngleBetweenItems = 0.0;
  (this->MyPanelWidget).Object = (SPanel *)0x0;
  (this->MyPanelWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EntryWidgetPool).ActiveWidgets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryWidgetPool).ActiveWidgets.ArrayNum = 0;
  (this->EntryWidgetPool).ActiveWidgets.ArrayMax = 0;
  (this->EntryWidgetPool).InactiveWidgets.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EntryWidgetPool).InactiveWidgets.ArrayNum = 0;
  (this->EntryWidgetPool).InactiveWidgets.ArrayMax = 0;
  (this->EntryWidgetPool).OwningWidget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntryWidgetPool).OwningWorld.WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntryWidgetPool).DefaultPlayerController.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject = 0;
  *(undefined8 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x8 = 0;
  *(undefined8 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x20 = 0;
  (this->EntrySizeRule).SizeRule.Value = '\x01';
  (this->RadialBoxSettings).bDistributeItemsEvenly = true;
  (this->RadialBoxSettings).bClockwiseOrder = false;
  (this->RadialBoxSettings).SectorCentralAngle = 360.0;
  (this->EntrySizeRule).Value = 1.0;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x28 = 0;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x2c = 0x80;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x34 = 0;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x40 = 0;
  *(undefined4 *)&(this->EntryWidgetPool).CachedSlateByWidgetObject.field_0x48 = 0;
  return this;
}

// UDynamicEntryBoxBase @ 1469899f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDynamicEntryBoxBase * __thiscall
UDynamicEntryBoxBase::UDynamicEntryBoxBase(UDynamicEntryBoxBase *this,FObjectInitializer *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  (this->EntrySizeRule).Value = 1.0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->SpacingPattern).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpacingPattern).ArrayNum = 0;
  (this->SpacingPattern).ArrayMax = 0;
  this->MaxElementSize = 0;
  (this->RadialBoxSettings).StartingAngle = 0.0;
  (this->RadialBoxSettings).AngleBetweenItems = 0.0;
  (this->MyPanelWidget).Object = (SPanel *)0x0;
  (this->MyPanelWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->EntrySizeRule).SizeRule.Value = '\x01';
  (this->RadialBoxSettings).bDistributeItemsEvenly = true;
  (this->RadialBoxSettings).bClockwiseOrder = false;
  (this->RadialBoxSettings).SectorCentralAngle = 360.0;
  FUserWidgetPool::FUserWidgetPool(&this->EntryWidgetPool,(UWidget *)this);
  UWidget::SetVisibilityInternal((UWidget *)this,SelfHitTestInvisible);
  (this->EntrySizeRule).SizeRule.Value = '\0';
  return this;
}

// ~UDynamicEntryBoxBase @ 146992b70

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDynamicEntryBoxBase::~UDynamicEntryBoxBase(UDynamicEntryBoxBase *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FUserWidgetPool::~FUserWidgetPool(&this->EntryWidgetPool);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyPanelWidget).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SpacingPattern).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// operator() @ 146997190

bool __thiscall
`UDynamicEntryBoxBase::CreateEntryInternal'::__l2::<lambda_1>::operator()
          (void *this,TSubclassOf<UUserWidget> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)this;
  if (lVar5 != 0) {
    pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar5 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        lVar5 = *(longlong *)this;
        goto LAB_1469971e2;
      }
    }
  }
  lVar5 = 0;
LAB_1469971e2:
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30)) {
          return true;
        }
      }
    }
  }
  return false;
}

// AddEntryChild @ 1469a1630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDynamicEntryBoxBase::AddEntryChild(UDynamicEntryBoxBase *this,UUserWidget *param_1)

{
  longlong *plVar1;
  FSharedReferencer<1> *pFVar2;
  TSharedPtr<SPanel,1> *this_00;
  double dVar3;
  double dVar4;
  EDynamicBoxType EVar5;
  byte bVar6;
  int iVar7;
  SRadialBox *this_01;
  FScriptContainerElement *pFVar8;
  SOverlay *this_02;
  SHorizontalBox *this_03;
  SWrapBox *this_04;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  FScopedWidgetSlotArguments *pFVar14;
  TSharedRef<SWidget,1> *pTVar15;
  undefined8 *puVar16;
  FScopedWidgetSlotArguments *pFVar17;
  SPanel *pSVar18;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *pFVar19;
  FSizeParam *pFVar20;
  TOptional<FSizeParam> *pTVar21;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> *pFVar22;
  FScopedWidgetSlotArguments *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  uint uVar25;
  FScopedWidgetSlotArguments *pFVar26;
  uint uVar27;
  longlong lVar28;
  FSlotArguments *pFVar29;
  FSlotArguments *pFVar30;
  FSlotArguments *this_05;
  FSlotArguments *this_06;
  FScopedWidgetSlotArguments *pFVar31;
  uint uVar32;
  FSlotArguments *pFVar33;
  FSlotArguments *pFVar34;
  FScopedWidgetSlotArguments *this_07;
  float fVar35;
  float fVar36;
  undefined1 auStack_778 [32];
  longlong local_758;
  longlong local_750;
  undefined8 local_748;
  SWidget *pSStack_740;
  float local_738;
  undefined1 local_734;
  undefined1 local_730 [8];
  ForAnyElementType FStack_728;
  ulonglong local_720;
  float local_718;
  undefined1 local_714;
  undefined1 local_710 [8];
  ForAnyElementType FStack_708;
  ulonglong local_700;
  undefined2 local_6f8 [2];
  uint local_6f4;
  undefined1 local_6f0 [8];
  FSharedReferencer<1> FStack_6e8;
  SWidget *local_6e0;
  FSharedReferencer<1> local_6d8;
  SWidget *local_6d0;
  FSharedReferencer<1> local_6c8;
  UUserWidget *local_6c0;
  SWidget *pSStack_6b8;
  undefined1 local_6b0;
  undefined1 local_6a8 [8];
  ForAnyElementType FStack_6a0;
  ulonglong local_698;
  UUserWidget *local_690;
  SWidget *pSStack_688;
  undefined1 local_680;
  undefined1 local_678 [8];
  ForAnyElementType FStack_670;
  ulonglong local_668;
  undefined1 local_660 [8];
  undefined1 local_658 [8];
  undefined1 local_650 [8];
  undefined1 local_648 [8];
  undefined1 local_640 [8];
  undefined1 local_638 [8];
  undefined1 local_630 [8];
  undefined1 local_628 [8];
  SWidget *local_620;
  TReferenceControllerBase<1> *pTStack_618;
  undefined1 local_610;
  undefined1 local_608 [8];
  void *pvStack_600;
  undefined8 local_5f8;
  FDestructionSentinel local_5f0;
  FDestructionSentinel local_5d8;
  FDestructionSentinel local_5c0;
  FDestructionSentinel local_5a8;
  TSharedRef<SWidget,1> local_590;
  TSharedRef<SWidget,1> local_580;
  TSharedRef<SWidget,1> local_570;
  TSharedRef<SWidget,1> local_560;
  undefined1 local_550 [16];
  undefined1 local_540 [32];
  undefined1 local_520 [24];
  undefined1 local_508 [16];
  undefined1 local_4f8 [32];
  undefined1 local_4d8 [24];
  TOptional<FSizeParam> local_4c0;
  TOptional<FSizeParam> local_470;
  FScopedWidgetSlotArguments<SHorizontalBox::FSlot> local_420;
  FScopedWidgetSlotArguments<SVerticalBox::FSlot> local_320;
  FScopedWidgetSlotArguments local_218;
  FScopedWidgetSlotArguments local_1b8;
  FScopedWidgetSlotArguments local_118;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_778;
  EVar5 = this->EntryBoxType;
  local_748 = param_1;
  if ((EVar5 == Wrap) || (EVar5 == VerticalWrap)) {
    pTVar24 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
    this_04 = (SWrapBox *)(this->MyPanelWidget).Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_04 == (SWrapBox *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar23 = SWrapBox::AddSlot(this_04,&local_118);
    if ((longlong *)local_6f8 != &pFVar23->_padding_) {
      *(undefined2 *)&pFVar23->_padding_ = 0x100;
    }
    plVar1 = &pFVar23->_padding_;
    if ((longlong *)local_630 != plVar1) {
      *(uint *)plVar1 = (uint)(this->EntryHorizontalAlignment).Value;
      *(undefined1 *)((longlong)&pFVar23->_padding_ + 4) = 1;
    }
    pFVar31 = (FScopedWidgetSlotArguments *)0x0;
    if (plVar1 != (longlong *)0x0) {
      pFVar31 = pFVar23;
    }
    if ((longlong *)local_628 != &pFVar31->_padding_) {
      *(uint *)&pFVar31->_padding_ = (uint)(this->EntryVerticalAlignment).Value;
      *(undefined1 *)((longlong)&pFVar31->_padding_ + 4) = 1;
    }
    if (pFVar31 == (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
      pFVar31 = (FScopedWidgetSlotArguments *)0x0;
    }
    pTVar15 = UWidget::TakeWidget((UWidget *)param_1,&local_560);
    local_6c8.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
    local_6d0 = pTVar15->Object;
    if (local_6c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_6c8.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_6c8.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((SWidget **)&pFVar31->_padding_ != &local_6d0) {
      pFVar31->_padding_ = (longlong)local_6d0;
      local_6d0 = (SWidget *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&pFVar31->_padding_,&local_6c8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6c8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_560.SharedReferenceCount.ReferenceController);
    TPanelChildren<SWrapBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
              (&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  }
  else {
    this_00 = &this->MyPanelWidget;
    if (EVar5 == Radial) {
      pTVar24 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
      this_01 = (SRadialBox *)this_00->Object;
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_01 == (SRadialBox *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar14 = SRadialBox::AddSlot(this_01,&local_218);
      pTVar15 = UWidget::TakeWidget((UWidget *)param_1,(TSharedRef<SWidget,1> *)local_6f0);
      local_6d8.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
      local_6e0 = pTVar15->Object;
      if (local_6d8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_6d8.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_6d8.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((SWidget **)&pFVar14->_padding_ != &local_6e0) {
        pFVar14->_padding_ = (longlong)local_6e0;
        local_6e0 = (SWidget *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&pFVar14->_padding_,&local_6d8);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6d8.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_6e8.ReferenceController);
      TPanelChildren<SRadialBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
                (&local_218);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    }
    else if (this_00->Object != (SPanel *)0x0) {
      if (EVar5 == Overlay) {
        puVar16 = (undefined8 *)(**(code **)(*(longlong *)this_00->Object + 0x180))();
        iVar13 = (**(code **)*puVar16)(puVar16);
        bVar6 = (this->EntryHorizontalAlignment).Value;
        this_07 = (FScopedWidgetSlotArguments *)0x0;
        uVar32 = (uint)(this->EntryVerticalAlignment).Value;
        local_6f4 = (uint)bVar6;
        if ((this->SpacingPattern).ArrayNum < 1) {
          dVar3 = (this->EntrySpacing).field0_0x0._s_0.X;
          dVar4 = (this->EntrySpacing).field0_0x0._s_0.Y;
          uVar10 = dVar3 * (double)iVar13;
          uVar11 = dVar4 * (double)iVar13;
          uVar27 = 3;
          if (0.0 <= dVar3) {
            uVar27 = 1;
          }
          uVar32 = 3;
          if (0.0 <= dVar4) {
            uVar32 = 1;
          }
        }
        else {
          pFVar17 = this_07;
          uVar27 = (uint)bVar6;
          uVar10 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
          uVar11 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
          if (0 < iVar13) {
            do {
              iVar7 = (this->SpacingPattern).ArrayNum;
              uVar25 = (int)pFVar17 % iVar7;
              lVar28 = (longlong)(int)uVar25;
              uVar27 = 0;
              if ((int)uVar25 < iVar7) {
                uVar27 = ~uVar25 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (local_758 = lVar28, local_750 = (longlong)iVar7,
                 bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar12)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              pFVar8 = (this->SpacingPattern).AllocatorInstance.Data;
              uVar25 = (int)pFVar17 + 1;
              uVar10 = (double)uVar10 + *(double *)(pFVar8 + lVar28 * 0x10);
              uVar11 = (double)uVar11 + *(double *)(pFVar8 + lVar28 * 0x10 + 8);
              pFVar17 = (FScopedWidgetSlotArguments *)(ulonglong)uVar25;
              uVar27 = local_6f4;
            } while ((int)uVar25 < iVar13);
          }
        }
        pTVar24 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
        this_02 = (SOverlay *)this_00->Object;
        if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this_02 == (SOverlay *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar17 = SOverlay::AddSlot(this_02,&local_1b8,-1);
        plVar1 = &pFVar17->_padding_;
        if ((longlong *)local_660 != plVar1) {
          *(uint *)plVar1 = uVar27;
          *(undefined1 *)((longlong)&pFVar17->_padding_ + 4) = 1;
        }
        pFVar26 = this_07;
        if (plVar1 != (longlong *)0x0) {
          pFVar26 = pFVar17;
        }
        if ((longlong *)local_658 != &pFVar26->_padding_) {
          *(uint *)&pFVar26->_padding_ = uVar32;
          *(undefined1 *)((longlong)&pFVar26->_padding_ + 4) = 1;
        }
        fVar36 = (float)(double)uVar10;
        if (pFVar26 == (FScopedWidgetSlotArguments *)0xffffffffffffffb8) {
          pFVar26 = this_07;
        }
        local_6f0 = (undefined1  [8])0x0;
        FStack_6e8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        fVar35 = (float)(double)uVar11;
        if (fVar36 < 0.0) {
          FStack_6e8.ReferenceController._4_4_ = 0;
          FStack_6e8.ReferenceController._0_4_ =
               (uint)fVar36 ^ __xmm_80000000800000008000000080000000;
        }
        else {
          local_6f0._4_4_ = 0;
          local_6f0._0_4_ = fVar36;
        }
        if (fVar35 < 0.0) {
          FStack_6e8.ReferenceController._4_4_ =
               (uint)fVar35 ^ __xmm_80000000800000008000000080000000;
        }
        else {
          local_6f0._4_4_ = fVar35;
        }
        local_610 = 1;
        local_620 = (SWidget *)local_6f0;
        pTStack_618 = FStack_6e8.ReferenceController;
        local_5f8 = 0;
        local_608 = (undefined1  [8])0x0;
        pvStack_600 = (void *)0x0;
        pFVar26->_padding_ = (longlong)local_6f0;
        pFVar26->_padding_ = (longlong)FStack_6e8.ReferenceController;
        *(undefined1 *)&pFVar26->_padding_ = 1;
        TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar26->_padding_,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)local_608);
        if (&pFVar26->_padding_ != (longlong *)0x0) {
          this_07 = pFVar26;
        }
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_608);
        if (pvStack_600 != (void *)0x0) {
          FMemory::Free(pvStack_600);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_608);
        pTVar15 = UWidget::TakeWidget((UWidget *)local_748,&local_570);
        TSlotBase<SOverlay::FOverlaySlot>::FSlotArguments::operator[]
                  ((FSlotArguments *)this_07,pTVar15);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_570.SharedReferenceCount.ReferenceController);
        TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::
        ~FScopedWidgetSlotArguments(&local_1b8);
      }
      else {
        pSVar18 = TSharedPtr<SPanel,1>::operator->(this_00);
        puVar16 = (undefined8 *)(**(code **)(*(longlong *)pSVar18 + 0x180))(pSVar18);
        iVar13 = (**(code **)*puVar16)(puVar16);
        pSStack_740 = (SWidget *)0x0;
        local_748._4_4_ = (float)(this->EntrySpacing).field0_0x0._s_0.Y;
        if ((((EVar5 == Horizontal) || (iVar13 == 0)) &&
            (local_748._4_4_ = 0.0, EVar5 == Horizontal)) && (iVar13 != 0)) {
          local_748 = (UUserWidget *)(ulonglong)(uint)(float)(this->EntrySpacing).field0_0x0._s_0.X;
        }
        else {
          local_748 = (UUserWidget *)((ulonglong)(uint)local_748._4_4_ << 0x20);
        }
        this_03 = (SHorizontalBox *)this_00->Object;
        pTVar24 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
        if (EVar5 == Horizontal) {
          if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_03 == (SHorizontalBox *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar19 = SHorizontalBox::AddSlot(this_03,&local_420);
          local_714 = 1;
          local_718 = (float)this->MaxElementSize;
          this_05 = (FSlotArguments *)0x0;
          local_700 = 0;
          local_710 = (undefined1  [8])0x0;
          FStack_708.Data = (FScriptContainerElement *)0x0;
          *(float *)&pFVar19->_padding_ = local_718;
          *(undefined1 *)((longlong)&pFVar19->_padding_ + 4) = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar19->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_710);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_710,
                     (FWriteAccessScope *)&local_5a8);
          if (((int)local_700 != 0) && (FStack_708.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_708.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_708,0,0,0x10);
            local_700 = local_700 & 0xffffffff00000000;
          }
          if (local_5a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5a8.Accessor,&local_5a8);
          }
          if (FStack_708.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_708.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_710);
          plVar1 = &pFVar19->_padding_;
          if ((longlong *)local_650 != plVar1) {
            *(uint *)plVar1 = (uint)(this->EntryHorizontalAlignment).Value;
            *(undefined1 *)((longlong)&pFVar19->_padding_ + 4) = 1;
          }
          pFVar33 = (FSlotArguments *)&pFVar19->_padding_;
          if (plVar1 == (longlong *)0x0) {
            pFVar33 = this_05;
          }
          if ((TSharedPtr<SWidget,1> *)local_648 != &pFVar33[3].ChildWidget) {
            *(uint *)&pFVar33[3].ChildWidget.Object = (uint)(this->EntryVerticalAlignment).Value;
            *(undefined1 *)((longlong)&pFVar33[3].ChildWidget.Object + 4) = 1;
          }
          pFVar29 = this_05;
          if (pFVar33 != (FSlotArguments *)0xffffffffffffffb8) {
            pFVar29 = pFVar33;
          }
          pFVar2 = &pFVar29[3].ChildWidget.SharedReferenceCount;
          pFVar20 = UWidget::ConvertSerializedSizeParamToRuntime
                              ((FSizeParam *)local_550,&this->EntrySizeRule);
          pTVar21 = TOptional<FSizeParam>::TOptional<FSizeParam>(&local_4c0,pFVar20);
          TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)pFVar2,pTVar21);
          if (pFVar2 == (FSharedReferencer<1> *)0x0) {
            pFVar29 = this_05;
          }
          TOptional<FSizeParam>::~TOptional<FSizeParam>(pTVar21);
          local_680 = 1;
          local_690 = local_748;
          pSStack_688 = pSStack_740;
          local_668 = 0;
          local_678 = (undefined1  [8])0x0;
          FStack_670.Data = (FScriptContainerElement *)0x0;
          pFVar29[1].Slot.Ptr = (FSlot *)local_748;
          pFVar29[1].ChildWidget.Object = pSStack_740;
          *(undefined1 *)&pFVar29[1].ChildWidget.SharedReferenceCount.ReferenceController = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar29 + 2),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_678);
          if (pFVar29 + 1 != (FSlotArguments *)0x0) {
            this_05 = pFVar29;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_678,
                     (FWriteAccessScope *)&local_5f0);
          if (((int)local_668 != 0) && (FStack_670.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_670.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_670,0,0,0x10);
            local_668 = local_668 & 0xffffffff00000000;
          }
          if (local_5f0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5f0.Accessor,&local_5f0);
          }
          if (FStack_670.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_670.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_678);
          pTVar15 = UWidget::TakeWidget((UWidget *)param_1,&local_580);
          TSlotBase<SHorizontalBox::FSlot>::FSlotArguments::operator[](this_05,pTVar15);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_580.SharedReferenceCount.ReferenceController);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_520);
          if ((void *)local_520._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_520._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_520);
          TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_540);
          if ((void *)local_540._8_8_ != (void *)0x0) {
            FMemory::Free((void *)local_540._8_8_);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_540);
          SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
          ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>(&local_420);
        }
        else {
          if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_03 == (SHorizontalBox *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar22 = SVerticalBox::AddSlot((SVerticalBox *)this_03,&local_320);
          local_734 = 1;
          local_738 = (float)this->MaxElementSize;
          this_06 = (FSlotArguments *)0x0;
          local_720 = 0;
          local_730 = (undefined1  [8])0x0;
          FStack_728.Data = (FScriptContainerElement *)0x0;
          *(float *)&pFVar22->_padding_ = local_738;
          *(undefined1 *)((longlong)&pFVar22->_padding_ + 4) = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar22->_padding_,
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_730);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_730,
                     (FWriteAccessScope *)&local_5d8);
          if (((int)local_720 != 0) && (FStack_728.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_728.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_728,0,0,0x10);
            local_720 = local_720 & 0xffffffff00000000;
          }
          if (local_5d8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5d8.Accessor,&local_5d8);
          }
          if (FStack_728.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_728.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_730);
          plVar1 = &pFVar22->_padding_;
          if ((longlong *)local_640 != plVar1) {
            *(uint *)plVar1 = (uint)(this->EntryHorizontalAlignment).Value;
            *(undefined1 *)((longlong)&pFVar22->_padding_ + 4) = 1;
          }
          pFVar34 = (FSlotArguments *)&pFVar22->_padding_;
          if (plVar1 == (longlong *)0x0) {
            pFVar34 = this_06;
          }
          if ((TSharedPtr<SWidget,1> *)local_638 != &pFVar34[3].ChildWidget) {
            *(uint *)&pFVar34[3].ChildWidget.Object = (uint)(this->EntryVerticalAlignment).Value;
            *(undefined1 *)((longlong)&pFVar34[3].ChildWidget.Object + 4) = 1;
          }
          pFVar30 = this_06;
          if (pFVar34 != (FSlotArguments *)0xffffffffffffffb8) {
            pFVar30 = pFVar34;
          }
          pFVar2 = &pFVar30[3].ChildWidget.SharedReferenceCount;
          pFVar20 = UWidget::ConvertSerializedSizeParamToRuntime
                              ((FSizeParam *)local_508,&this->EntrySizeRule);
          pTVar21 = TOptional<FSizeParam>::TOptional<FSizeParam>(&local_470,pFVar20);
          TOptional<FSizeParam>::operator=((TOptional<FSizeParam> *)pFVar2,pTVar21);
          if (pFVar2 == (FSharedReferencer<1> *)0x0) {
            pFVar30 = this_06;
          }
          TOptional<FSizeParam>::~TOptional<FSizeParam>(pTVar21);
          local_6b0 = 1;
          local_6c0 = local_748;
          pSStack_6b8 = pSStack_740;
          local_698 = 0;
          local_6a8 = (undefined1  [8])0x0;
          FStack_6a0.Data = (FScriptContainerElement *)0x0;
          pFVar30[1].Slot.Ptr = (FSlot *)local_748;
          pFVar30[1].ChildWidget.Object = pSStack_740;
          *(undefined1 *)&pFVar30[1].ChildWidget.SharedReferenceCount.ReferenceController = 1;
          TDelegateBase<FNotThreadSafeDelegateMode>::operator=
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pFVar30 + 2),
                     (TDelegateBase<FNotThreadSafeDelegateMode> *)local_6a8);
          if (pFVar30 + 1 != (FSlotArguments *)0x0) {
            this_06 = pFVar30;
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_6a8,
                     (FWriteAccessScope *)&local_5c0);
          if (((int)local_698 != 0) && (FStack_6a0.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_6a0.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_6a0,0,0,0x10);
            local_698 = local_698 & 0xffffffff00000000;
          }
          if (local_5c0.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_5c0.Accessor,&local_5c0);
          }
          if (FStack_6a0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_6a0.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                    ((FMRSWRecursiveAccessDetector *)local_6a8);
          pTVar15 = UWidget::TakeWidget((UWidget *)param_1,&local_590);
          TSlotBase<SVerticalBox::FSlot>::FSlotArguments::operator[](this_06,pTVar15);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_590.SharedReferenceCount.ReferenceController);
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
          SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
          ~FScopedWidgetSlotArguments<SVerticalBox::FSlot>(&local_320);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    }
  }
  return;
}

// BuildEntryPadding @ 1469a3760

FMargin * __thiscall
UDynamicEntryBoxBase::BuildEntryPadding
          (UDynamicEntryBoxBase *this,FMargin *__return_storage_ptr__,TVector2<double> *param_1)

{
  double dVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  uVar2 = __xmm_80000000800000008000000080000000;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  fVar4 = (float)(param_1->field0_0x0)._s_0.X;
  __return_storage_ptr__->Left = 0.0;
  __return_storage_ptr__->Top = 0.0;
  __return_storage_ptr__->Right = 0.0;
  __return_storage_ptr__->Bottom = 0.0;
  fVar3 = (float)dVar1;
  if (fVar4 < 0.0) {
    __return_storage_ptr__->Right = (float)((uint)fVar4 ^ uVar2);
  }
  else {
    __return_storage_ptr__->Left = fVar4;
  }
  if (0.0 <= fVar3) {
    __return_storage_ptr__->Top = fVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Bottom = (float)((uint)fVar3 ^ uVar2);
  return __return_storage_ptr__;
}

// CreateEntryInternal @ 1469bd530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall
UDynamicEntryBoxBase::CreateEntryInternal
          (UDynamicEntryBoxBase *this,TSubclassOf<UUserWidget> param_1)

{
  ForElementType<TSubclassOf<UUserWidget>_> FVar1;
  void *_Dst;
  UObject *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  TObjectPtr<UClass>_u_0 TVar8;
  UUserWidget *pUVar9;
  longlong lVar10;
  longlong lVar11;
  UClass *pUVar12;
  longlong lVar13;
  TArray<TSubclassOf<UUserWidget>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar14
  ;
  TArray<TSubclassOf<UUserWidget>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar15
  ;
  undefined1 local_res10 [8];
  UObject *local_res18;
  UObject *local_res20;
  FName local_78;
  FName local_70;
  UObject *local_68;
  FString local_60;
  FString local_50;
  code *local_40;
  undefined1 *local_38;
  
  pUVar2 = *(UObject **)param_1.Class.field0_0x0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
  }
  local_res20 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pTVar15 = &DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection;
  pTVar14 = &DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection;
  if (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.SecondaryData !=
      (ForElementType<TSubclassOf<UUserWidget>_>)0x0) {
    pTVar14 = (TArray<TSubclassOf<UUserWidget>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.
                 SecondaryData;
  }
  FVar1 = (ForElementType<TSubclassOf<UUserWidget>_>)
          ((longlong)pTVar14 +
          (longlong)DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum * 8);
  for (; (ForElementType<TSubclassOf<UUserWidget>_>)pTVar14 != FVar1;
      pTVar14 = (TArray<TSubclassOf<UUserWidget>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                 *)((longlong)pTVar14 + 8)) {
    local_res18 = *(UObject **)pTVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    bVar5 = `UDynamicEntryBoxBase::CreateEntryInternal'::__l2::<lambda_1>::operator()
                      (&local_res20,(TSubclassOf<UUserWidget>)&local_res18);
    if (bVar5) {
      if (1 < (byte)LogSlate._0_1_) {
        lVar10 = 0;
        uVar7 = 0;
        if ((int)(DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum - 1U) <
            DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum) {
          uVar7 = ~(DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum - 1U) >>
                  0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          pUVar9 = (UUserWidget *)(*pcVar4)();
          return pUVar9;
        }
        if (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.
            SecondaryData != (ForElementType<TSubclassOf<UUserWidget>_>)0x0) {
          pTVar15 = (TArray<TSubclassOf<UUserWidget>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.
                       SecondaryData;
        }
        lVar11 = (longlong)DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum;
        lVar3 = *(longlong *)((longlong)pTVar15 + -8 + lVar11 * 8);
        lVar13 = lVar10;
        if ((lVar3 != 0) &&
           (pUVar12 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar12 != (UClass *)0x0)) {
          iVar6 = (int)pUVar12->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar12->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            lVar13 = *(longlong *)((longlong)pTVar15 + lVar11 * 8 + -8);
          }
        }
        local_78 = *(FName *)(lVar13 + 0x18);
        ::FName::ToString(&local_78,&local_50);
        lVar3 = *(longlong *)param_1.Class.field0_0x0;
        if ((lVar3 != 0) &&
           (pUVar12 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar12 != (UClass *)0x0)) {
          iVar6 = (int)pUVar12->_padding_;
          if ((*(int *)(lVar3 + 0x38) < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar12->_padding_)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (bVar5) {
            lVar10 = *(longlong *)param_1.Class.field0_0x0;
          }
        }
        local_70 = *(FName *)(lVar10 + 0x18);
        ::FName::ToString(&local_70,&local_60);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
      }
      return (UUserWidget *)0x0;
    }
  }
  TVar8 = (TObjectPtr<UClass>_u_0)&DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection;
  if (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.SecondaryData !=
      (ForElementType<TSubclassOf<UUserWidget>_>)0x0) {
    TVar8 = (TObjectPtr<UClass>_u_0)
            DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.
            SecondaryData;
  }
  if ((ulonglong)TVar8 <= (ulonglong)param_1.Class.field0_0x0) {
    TVar8 = (TObjectPtr<UClass>_u_0)&DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection;
    if (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.SecondaryData
        != (ForElementType<TSubclassOf<UUserWidget>_>)0x0) {
      TVar8 = (TObjectPtr<UClass>_u_0)
              DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.
              SecondaryData;
    }
    if (((ulonglong)param_1.Class.field0_0x0 <
         &(TVar8.DebugPtr)->_padding_ +
         DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayMax) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UUserWidget *)(*pcVar4)();
      return pUVar9;
    }
  }
  if (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum ==
      DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayMax) {
    DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UUserWidget>_>_>
                   (0x808,&DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.
                           AllocatorInstance,
                    &DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayMax);
  }
  lVar10 = (longlong)DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum;
  pTVar14 = &DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection;
  if (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.SecondaryData !=
      (ForElementType<TSubclassOf<UUserWidget>_>)0x0) {
    pTVar14 = (TArray<TSubclassOf<UUserWidget>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.
                 SecondaryData;
  }
  pUVar2 = *(UObject **)param_1.Class.field0_0x0;
  DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum =
       DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum + 1;
  *(UObject **)((longlong)pTVar14 + lVar10 * 8) = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar2 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_38 = local_res10;
  local_40 = UE::Core::Private::Function::
             TFunctionRefCaller<`FUserWidgetPool::GetOrCreateInstance<UUserWidget>'::__l2::<lambda_1>,TSharedPtr<SObjectWidget,1>,UUserWidget_*,TSharedRef<SWidget,1>_>
             ::Call;
  local_68 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pUVar9 = FUserWidgetPool::AddActiveWidgetInternal<UUserWidget>
                     (&this->EntryWidgetPool,(TSubclassOf<UUserWidget>)&local_68,
                      (TFunctionRef<TSharedPtr<SObjectWidget,1>___cdecl(UUserWidget_*,TSharedRef<SWidget,1>)>
                       *)&local_40);
  if (((this->MyPanelWidget).Object != (SPanel *)0x0) && (pUVar9 != (UUserWidget *)0x0)) {
    (**(code **)(this->_padding_ + 0x310))(this,pUVar9);
  }
  if ((DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pUVar9 = (UUserWidget *)(*pcVar4)();
    return pUVar9;
  }
  pTVar14 = &DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection;
  if (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.SecondaryData !=
      (ForElementType<TSubclassOf<UUserWidget>_>)0x0) {
    pTVar14 = (TArray<TSubclassOf<UUserWidget>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.
                 SecondaryData;
  }
  pUVar2 = *(UObject **)
            ((longlong)pTVar14 +
            (longlong)(DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum + -1) * 8
            );
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  pTVar14 = &DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection;
  if (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.SecondaryData !=
      (ForElementType<TSubclassOf<UUserWidget>_>)0x0) {
    pTVar14 = (TArray<TSubclassOf<UUserWidget>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance.
                 SecondaryData;
  }
  _Dst = (void *)((longlong)pTVar14 +
                 (longlong)
                 (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum + -1) * 8);
  iVar6 = (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum -
          (DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum + -1)) + -1;
  if (iVar6 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar6 << 3);
  }
  DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum =
       DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum + -1;
  UE::Core::Private::
  ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSubclassOf<UUserWidget>_>_>
            (8,8,&DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.AllocatorInstance,
             DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayNum,
             &DynamicEntryBoxBaseCreateEntryInternal::RecursiveDetection.ArrayMax);
  return pUVar9;
}

// GetAllEntries @ 1469cd050

TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> * __thiscall
UDynamicEntryBoxBase::GetAllEntries(UDynamicEntryBoxBase *this)

{
  return (TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *)&this->EntryWidgetPool;
}

// GetBoxType @ 1469cdfe0

EDynamicBoxType __thiscall UDynamicEntryBoxBase::GetBoxType(UDynamicEntryBoxBase *this)

{
  return this->EntryBoxType;
}

// GetEntryHorizontalAlignment @ 1469d0270

EHorizontalAlignment __thiscall
UDynamicEntryBoxBase::GetEntryHorizontalAlignment(UDynamicEntryBoxBase *this)

{
  return (EHorizontalAlignment)(this->EntryHorizontalAlignment).Value;
}

// GetEntrySizeRule @ 1469d0280

FSlateChildSize * __thiscall UDynamicEntryBoxBase::GetEntrySizeRule(UDynamicEntryBoxBase *this)

{
  return &this->EntrySizeRule;
}

// GetEntrySpacing @ 1469d0290

TVector2<double> * __thiscall UDynamicEntryBoxBase::GetEntrySpacing(UDynamicEntryBoxBase *this)

{
  return &this->EntrySpacing;
}

// GetEntryVerticalAlignment @ 1469d02a0

EVerticalAlignment __thiscall
UDynamicEntryBoxBase::GetEntryVerticalAlignment(UDynamicEntryBoxBase *this)

{
  return (EVerticalAlignment)(this->EntryVerticalAlignment).Value;
}

// GetMaxElementSize @ 1469d1c80

int __thiscall UDynamicEntryBoxBase::GetMaxElementSize(UDynamicEntryBoxBase *this)

{
  return this->MaxElementSize;
}

// GetNumEntries @ 1469d2000

int __thiscall UDynamicEntryBoxBase::GetNumEntries(UDynamicEntryBoxBase *this)

{
  return (this->EntryWidgetPool).ActiveWidgets.ArrayNum;
}

// GetPrivateStaticClass @ 1469d3df0

UClass * __cdecl UDynamicEntryBoxBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicEntryBoxBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"DynamicEntryBoxBase",
               &Z_Registration_Info_UClass_UDynamicEntryBoxBase.InnerSingleton,
               StaticRegisterNativesUDynamicEntryBoxBase,0x290,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicEntryBoxBase>,
               InternalVTableHelperCtorCaller<UDynamicEntryBoxBase>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicEntryBoxBase.InnerSingleton;
}

// GetRadialBoxSettings @ 1469d6b80

FRadialBoxSettings * __thiscall
UDynamicEntryBoxBase::GetRadialBoxSettings(UDynamicEntryBoxBase *this)

{
  return &this->RadialBoxSettings;
}

// InitEntryBoxType @ 1469dfae0

void __thiscall
UDynamicEntryBoxBase::InitEntryBoxType(UDynamicEntryBoxBase *this,EDynamicBoxType param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyPanelWidget).Object != (SPanel *)0x0) {
    `UDynamicEntryBoxBase::InitEntryBoxType'::__l2::<lambda_1>::operator()(local_res10);
    this->EntryBoxType = param_1;
    return;
  }
  this->EntryBoxType = param_1;
  return;
}

// InitEntryHorizontalAlignment @ 1469dfb30

void __thiscall
UDynamicEntryBoxBase::InitEntryHorizontalAlignment
          (UDynamicEntryBoxBase *this,EHorizontalAlignment param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyPanelWidget).Object != (SPanel *)0x0) {
    `UDynamicEntryBoxBase::InitEntryHorizontalAlignment'::__l2::<lambda_1>::operator()(local_res10);
    (this->EntryHorizontalAlignment).Value = (uchar)param_1;
    return;
  }
  (this->EntryHorizontalAlignment).Value = (uchar)param_1;
  return;
}

// InitEntrySizeRule @ 1469dfb80

void __thiscall
UDynamicEntryBoxBase::InitEntrySizeRule(UDynamicEntryBoxBase *this,FSlateChildSize param_1)

{
  undefined1 local_res8 [8];
  
  if ((this->MyPanelWidget).Object != (SPanel *)0x0) {
    `UDynamicEntryBoxBase::InitEntrySizeRule'::__l2::<lambda_1>::operator()(local_res8);
    this->EntrySizeRule = param_1;
    return;
  }
  this->EntrySizeRule = param_1;
  return;
}

// InitEntryVerticalAlignment @ 1469dfbd0

void __thiscall
UDynamicEntryBoxBase::InitEntryVerticalAlignment
          (UDynamicEntryBoxBase *this,EVerticalAlignment param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyPanelWidget).Object != (SPanel *)0x0) {
    `UDynamicEntryBoxBase::InitEntryVerticalAlignment'::__l2::<lambda_1>::operator()(local_res10);
    (this->EntryVerticalAlignment).Value = (uchar)param_1;
    return;
  }
  (this->EntryVerticalAlignment).Value = (uchar)param_1;
  return;
}

// InitMaxElementSize @ 1469dfe60

void __thiscall UDynamicEntryBoxBase::InitMaxElementSize(UDynamicEntryBoxBase *this,int param_1)

{
  undefined1 local_res10 [24];
  
  if ((this->MyPanelWidget).Object != (SPanel *)0x0) {
    `UDynamicEntryBoxBase::InitMaxElementSize'::__l2::<lambda_1>::operator()(local_res10);
    this->MaxElementSize = param_1;
    return;
  }
  this->MaxElementSize = param_1;
  return;
}

// IsEntryClassValid @ 1469e1570

bool __thiscall
UDynamicEntryBoxBase::IsEntryClassValid(UDynamicEntryBoxBase *this,TSubclassOf<UUserWidget> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 == 0) {
    return true;
  }
  pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister();
  if (pUVar4 == (UClass *)0x0) {
    return true;
  }
  iVar1 = (int)pUVar4->_padding_;
  if ((*(int *)(lVar2 + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    return true;
  }
  if (*(longlong *)param_1.Class.field0_0x0 == 0) {
    return true;
  }
  lVar2 = this->_padding_;
  if (lVar2 == 0) {
    return true;
  }
  pUVar4 = Z_Construct_UClass_UWidgetTree_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) {
    return true;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return true;
  }
  lVar2 = *(longlong *)(lVar2 + 0x20);
  if (lVar2 == 0) {
    return true;
  }
  pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar1 = (int)pUVar4->_padding_;
  if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) {
    return true;
  }
  if ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar4->_padding_) {
    return true;
  }
  lVar5 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar5 != 0) &&
     (pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar5 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar5 = *(longlong *)param_1.Class.field0_0x0;
      goto LAB_1469e167e;
    }
  }
  lVar5 = 0;
LAB_1469e167e:
  lVar2 = *(longlong *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    return true;
  }
  if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return false;
  }
  return true;
}

// RebuildWidget @ 1469fbc10

TSharedRef<SWidget,1> * __thiscall
UDynamicEntryBoxBase::RebuildWidget
          (UDynamicEntryBoxBase *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  FSharedReferencer<1> FVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  FArguments *pFVar10;
  TSharedRef<SHorizontalBox,1> *pTVar11;
  FArguments *pFVar12;
  TSharedRef<SVerticalBox,1> *pTVar13;
  FArguments *pFVar14;
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> *pTVar15;
  TSharedRef<SWrapBox,1> *pTVar16;
  FArguments *pFVar17;
  FArguments *pFVar18;
  TSharedRef<SOverlay,1> *pTVar19;
  TSharedRef<SWidget,1> *pTVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res8 [8];
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  SWrapBox *local_f68;
  FSharedReferencer<1> FStack_f60;
  T0RequiredArgs local_f58;
  T0RequiredArgs local_f57;
  T0RequiredArgs local_f56 [2];
  FLLMScope local_f54;
  FLLMScope local_f50;
  FLLMScope local_f4c;
  FLLMScope local_f48;
  FLLMScope local_f44;
  FLLMScope local_f40 [2];
  TSlateDecl<SRadialBox,RequiredArgs::T0RequiredArgs> local_f38;
  SWrapBox *local_f20;
  FSharedReferencer<1> local_f18;
  SHorizontalBox *local_f10;
  FSharedReferencer<1> local_f08;
  SVerticalBox *local_f00;
  FSharedReferencer<1> local_ef8;
  SOverlay *local_ef0;
  FSharedReferencer<1> local_ee8;
  FName local_ee0;
  FMemScope local_ed8;
  FName local_ed0;
  FMemScope local_ec8;
  FName local_ec0;
  FMemScope local_eb8;
  FName local_eb0;
  FName local_ea8;
  FMemScope local_ea0;
  FMemScope local_e98;
  FName local_e90;
  undefined8 local_e88;
  FSharedReferencer<1> local_e80;
  undefined8 local_e78;
  FSharedReferencer<1> local_e70;
  undefined8 local_e68;
  FSharedReferencer<1> local_e60;
  undefined8 local_e58;
  FSharedReferencer<1> local_e50;
  undefined8 local_e48;
  FSharedReferencer<1> local_e40;
  undefined8 local_e38;
  FSharedReferencer<1> local_e30;
  FMemScope local_e28;
  TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs> local_e20;
  TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs> local_e08;
  TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs> local_df0;
  TSharedRef<SVerticalBox,1> local_dd8;
  TSharedRef<SWrapBox,1> local_dc8;
  TSharedRef<SWrapBox,1> local_db8;
  TSharedRef<SOverlay,1> local_da8;
  TSharedRef<SHorizontalBox,1> local_d98;
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> local_d88;
  TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs> local_d70;
  undefined1 local_d58 [528];
  undefined1 local_b48 [48];
  FArguments local_b18;
  FArguments local_910;
  FArguments local_708;
  FArguments local_500;
  FArguments local_2a0;
  
  local_f68 = (SWrapBox *)0x0;
  FStack_f60.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  switch(this->EntryBoxType) {
  case Horizontal:
    pFVar10 = SHorizontalBox::FArguments::FArguments(&local_b18);
    FLLMScope::FLLMScope(&local_f54,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_e90 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_e28,&local_e90,true);
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>
              (&local_e20,"SHorizontalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBoxBase.cpp"
               ,0x10a,local_res10);
    FMemScope::~FMemScope(&local_e28);
    FLLMScope::~FLLMScope(&local_f54);
    local_f10 = local_e20._Widget.Object;
    local_f08.ReferenceController = local_e20._Widget.SharedReferenceCount.ReferenceController;
    if (local_e20._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e20._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e20._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if (&this->MyPanelWidget != (TSharedPtr<SPanel,1> *)&local_f10) {
      (this->MyPanelWidget).Object = (SPanel *)local_e20._Widget.Object;
      local_f10 = (SHorizontalBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MyPanelWidget).SharedReferenceCount,&local_f08);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f08.ReferenceController);
    pTVar11 = TSlateDecl<SHorizontalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_e20,&local_d98,pFVar10);
    local_e80.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_f68 = (SWrapBox *)pTVar11->Object;
    if (local_e80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e80.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e80.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e88 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f60,&local_e80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e80.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d98.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e20._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SHorizontalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_b18._Slots.AllocatorInstance.Data,local_b18._Slots.ArrayNum);
    if ((FSlotArguments *)local_b18._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_b18._Slots.AllocatorInstance.Data);
    }
    pFVar10 = &local_b18;
    break;
  case Vertical:
    pFVar12 = SVerticalBox::FArguments::FArguments(&local_910);
    FLLMScope::FLLMScope(&local_f50,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_ee0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_ed8,&local_ee0,true);
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>
              (&local_e08,"SVerticalBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBoxBase.cpp"
               ,0x10d,local_res18);
    FMemScope::~FMemScope(&local_ed8);
    FLLMScope::~FLLMScope(&local_f50);
    local_f00 = local_e08._Widget.Object;
    local_ef8.ReferenceController = local_e08._Widget.SharedReferenceCount.ReferenceController;
    if (local_e08._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e08._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_e08._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if (&this->MyPanelWidget != (TSharedPtr<SPanel,1> *)&local_f00) {
      (this->MyPanelWidget).Object = (SPanel *)local_e08._Widget.Object;
      local_f00 = (SVerticalBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MyPanelWidget).SharedReferenceCount,&local_ef8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ef8.ReferenceController);
    pTVar13 = TSlateDecl<SVerticalBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_e08,&local_dd8,pFVar12);
    local_e70.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
    local_f68 = (SWrapBox *)pTVar13->Object;
    if (local_e70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e70.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e70.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e78 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f60,&local_e70);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e70.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_dd8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e08._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SVerticalBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_910._Slots.AllocatorInstance.Data,local_910._Slots.ArrayNum);
    if ((FSlotArguments *)local_910._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_910._Slots.AllocatorInstance.Data);
    }
    pFVar10 = (FArguments *)&local_910;
    break;
  case Wrap:
    pFVar14 = SWrapBox::FArguments::FArguments(&local_500);
    pFVar14->_UseAllottedSize = true;
    pFVar14->_Orientation = Orient_Horizontal;
    dVar5 = (this->EntrySpacing).field0_0x0._s_0.Y;
    (pFVar14->_InnerSlotPadding).field0_0x0._s_0.X = (this->EntrySpacing).field0_0x0._s_0.X;
    (pFVar14->_InnerSlotPadding).field0_0x0._s_0.Y = dVar5;
    FLLMScope::FLLMScope(&local_f4c,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_ed0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_ec8,&local_ed0,true);
    TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>
              (&local_d88,"SWrapBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBoxBase.cpp"
               ,0x110,local_res20);
    FMemScope::~FMemScope(&local_ec8);
    FLLMScope::~FLLMScope(&local_f4c);
    pTVar15 = TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>::Expose<SPanel>
                        (&local_d88,&this->MyPanelWidget);
    pTVar16 = TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar15,&local_dc8,pFVar14);
    local_e60.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
    local_f68 = pTVar16->Object;
    if (local_e60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e68 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f60,&local_e60);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_dc8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d88._Widget.SharedReferenceCount.ReferenceController);
    SWrapBox::FArguments::~FArguments(&local_500);
    goto switchD_1469fbc5a_default;
  case VerticalWrap:
    pFVar14 = SWrapBox::FArguments::FArguments(&local_2a0);
    pFVar14->_UseAllottedSize = true;
    pFVar14->_Orientation = Orient_Vertical;
    dVar5 = (this->EntrySpacing).field0_0x0._s_0.Y;
    (pFVar14->_InnerSlotPadding).field0_0x0._s_0.X = (this->EntrySpacing).field0_0x0._s_0.X;
    (pFVar14->_InnerSlotPadding).field0_0x0._s_0.Y = dVar5;
    FLLMScope::FLLMScope(&local_f48,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_ec0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_eb8,&local_ec0,true);
    TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>
              (&local_d70,"SWrapBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBoxBase.cpp"
               ,0x116,&local_f58);
    FMemScope::~FMemScope(&local_eb8);
    FLLMScope::~FLLMScope(&local_f48);
    pTVar15 = TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>::Expose<SPanel>
                        (&local_d70,&this->MyPanelWidget);
    pTVar16 = TSlateDecl<SWrapBox,RequiredArgs::T0RequiredArgs>::operator<<=
                        (pTVar15,&local_db8,pFVar14);
    local_e50.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
    local_f68 = pTVar16->Object;
    if (local_e50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e58 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f60,&local_e50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_db8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d70._Widget.SharedReferenceCount.ReferenceController);
    SWrapBox::FArguments::~FArguments(&local_2a0);
    goto switchD_1469fbc5a_default;
  case Radial:
    pFVar17 = SRadialBox::FArguments::FArguments((FArguments *)local_d58);
    pFVar17->_UseAllottedWidth = true;
    pFVar17->_StartingAngle = (this->RadialBoxSettings).StartingAngle;
    pFVar17->_bDistributeItemsEvenly = (this->RadialBoxSettings).bDistributeItemsEvenly;
    pFVar17->_bClockwiseOrder = (this->RadialBoxSettings).bClockwiseOrder;
    pFVar17->_AngleBetweenItems = (this->RadialBoxSettings).AngleBetweenItems;
    pFVar17->_SectorCentralAngle = (this->RadialBoxSettings).SectorCentralAngle;
    FLLMScope::FLLMScope(&local_f44,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_eb0 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_e98,&local_eb0,true);
    TSlateDecl<SRadialBox,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SRadialBox,RequiredArgs::T0RequiredArgs>
              (&local_f38,"SRadialBox",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBoxBase.cpp"
               ,0x11c,&local_f57);
    FMemScope::~FMemScope(&local_e98);
    FLLMScope::~FLLMScope(&local_f44);
    local_f68 = (SWrapBox *)local_f38._Widget.Object;
    local_f20 = (SWrapBox *)local_f38._Widget.Object;
    local_f18.ReferenceController = local_f38._Widget.SharedReferenceCount.ReferenceController;
    if (local_f38._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_f38._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_f38._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if (&this->MyPanelWidget != (TSharedPtr<SPanel,1> *)&local_f20) {
      (this->MyPanelWidget).Object = (SPanel *)local_f38._Widget.Object;
      local_f20 = (SWrapBox *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MyPanelWidget).SharedReferenceCount,&local_f18);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f18.ReferenceController);
    if (((SWrapBox *)local_f38._Widget.Object == (SWrapBox *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar20;
    }
    SWidget::SWidgetConstruct((SWidget *)local_f38._Widget.Object,(FSlateBaseNamedArgs *)pFVar17);
    SRadialBox::Construct(local_f38._Widget.Object,pFVar17);
    if (((SWrapBox *)local_f38._Widget.Object == (SWrapBox *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar20;
    }
    if (((local_f38._Widget.Object)->_padding_ & 0x10) == 0) {
      cVar7 = (**(code **)((local_f38._Widget.Object)->_padding_ + 0x228))(local_f38._Widget.Object)
      ;
      bVar8 = 0;
      if (cVar7 != '\0') goto LAB_1469fc31d;
    }
    else {
LAB_1469fc31d:
      bVar8 = 0x20;
    }
    *(byte *)&(local_f38._Widget.Object)->_padding_ =
         (byte)(local_f38._Widget.Object)->_padding_ & 0xdf;
    *(byte *)&(local_f38._Widget.Object)->_padding_ =
         (byte)(local_f38._Widget.Object)->_padding_ | bVar8;
    if (((SWrapBox *)local_f38._Widget.Object == (SWrapBox *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar20;
    }
    pbVar1 = (byte *)((longlong)&(local_f38._Widget.Object)->_padding_ + 1);
    *pbVar1 = *pbVar1 | 4;
    if (((SWrapBox *)local_f38._Widget.Object == (SWrapBox *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x416,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar20;
    }
    FVar6.ReferenceController = local_f38._Widget.SharedReferenceCount.ReferenceController;
    local_f38._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_f38._Widget.Object = (SRadialBox *)0x0;
    if ((local_f68 == (SWrapBox *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x26c,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar20;
    }
    local_e40.ReferenceController = FVar6.ReferenceController;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f60,&local_e40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e40.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_b48);
    if ((void *)local_b48._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b48._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_b48);
    DestructItems<SRadialBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_d58._504_8_,local_d58._512_4_);
    if ((FSlotArguments *)local_d58._504_8_ != (FSlotArguments *)0x0) {
      FMemory::Free((void *)local_d58._504_8_);
    }
    pFVar10 = (FArguments *)local_d58;
    break;
  case Overlay:
    pFVar18 = SOverlay::FArguments::FArguments(&local_708);
    *(undefined1 *)((longlong)&pFVar18->_padding_ + 2) = 1;
    FLLMScope::FLLMScope(local_f40,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_ea8 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_ea0,&local_ea8,true);
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>
              (&local_df0,"SOverlay",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\DynamicEntryBoxBase.cpp"
               ,0x125,local_f56);
    FMemScope::~FMemScope(&local_ea0);
    FLLMScope::~FLLMScope(local_f40);
    local_ef0 = local_df0._Widget.Object;
    local_ee8.ReferenceController = local_df0._Widget.SharedReferenceCount.ReferenceController;
    if (local_df0._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_df0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_df0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if (&this->MyPanelWidget != (TSharedPtr<SPanel,1> *)&local_ef0) {
      (this->MyPanelWidget).Object = (SPanel *)local_df0._Widget.Object;
      local_ef0 = (SOverlay *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MyPanelWidget).SharedReferenceCount,&local_ee8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_ee8.ReferenceController);
    pTVar19 = TSlateDecl<SOverlay,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_df0,&local_da8,pFVar18);
    local_e30.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
    local_f68 = (SWrapBox *)pTVar19->Object;
    if (local_e30.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_e30.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_e30.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_f60,&local_e30);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e30.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_da8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_df0._Widget.SharedReferenceCount.ReferenceController);
    DestructItems<SOverlay::FOverlaySlot::FSlotArguments,int>
              ((FSlotArguments *)local_708._Slots.AllocatorInstance.Data,local_708._Slots.ArrayNum);
    if ((FSlotArguments *)local_708._Slots.AllocatorInstance.Data != (FSlotArguments *)0x0) {
      FMemory::Free(local_708._Slots.AllocatorInstance.Data);
    }
    pFVar10 = (FArguments *)&local_708;
    break;
  default:
    goto switchD_1469fbc5a_default;
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)pFVar10);
switchD_1469fbc5a_default:
  FUserWidgetPool::RebuildWidgets(&this->EntryWidgetPool);
  pFVar21 = (this->EntryWidgetPool).ActiveWidgets.AllocatorInstance.Data;
  iVar3 = (this->EntryWidgetPool).ActiveWidgets.ArrayNum;
  pFVar2 = pFVar21 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->EntryWidgetPool).ActiveWidgets.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UUserWidget_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar21 == pFVar2) break;
    (**(code **)(this->_padding_ + 0x310))(this,*(undefined8 *)pFVar21);
    pFVar21 = pFVar21 + 8;
  }
  if ((local_f68 == (SWrapBox *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar20;
  }
  FVar6.ReferenceController = FStack_f60.ReferenceController;
  __return_storage_ptr__->Object = (SWidget *)local_f68;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       FStack_f60.ReferenceController;
  if (FStack_f60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_f60.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_f60.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((__return_storage_ptr__->Object == (SWidget *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar20 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar20;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a300

void __thiscall UDynamicEntryBoxBase::ReleaseSlateResources(UDynamicEntryBoxBase *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  FUserWidgetPool::ReleaseAllSlateResources(&this->EntryWidgetPool);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyPanelWidget != (TSharedPtr<SPanel,1> *)&local_18) {
    (this->MyPanelWidget).Object = (SPanel *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyPanelWidget).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// RemoveEntryInternal @ 146a0c030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDynamicEntryBoxBase::RemoveEntryInternal
          (UDynamicEntryBoxBase *this,UUserWidget *param_1,bool param_2)

{
  SBoxPanel *this_00;
  SWrapBox *this_01;
  SRadialBox *this_02;
  TReferenceControllerBase<1> *pTVar1;
  SOverlay *this_03;
  code *pcVar2;
  SWidget *pSVar3;
  bool bVar4;
  TSharedRef<SWidget,1> *pTVar5;
  TSharedPtr<SWidget,1> local_68;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  TSharedRef<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  if (param_1 != (UUserWidget *)0x0) {
    if ((this->MyPanelWidget).Object != (SPanel *)0x0) {
      UWidget::GetCachedWidget((UWidget *)param_1,&local_68);
      pSVar3 = local_68.Object;
      if (local_68.Object != (SWidget *)0x0) {
        switch(this->EntryBoxType) {
        case Horizontal:
        case Vertical:
          pTVar1 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
          this_00 = (SBoxPanel *)(this->MyPanelWidget).Object;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_00 == (SBoxPanel *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((pSVar3 == (SWidget *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_58.Object = local_68.Object;
          local_58.SharedReferenceCount.ReferenceController =
               local_68.SharedReferenceCount.ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if ((local_68.Object == (SWidget *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          SBoxPanel::RemoveSlot(this_00,&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          break;
        case Wrap:
        case VerticalWrap:
          pTVar1 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
          this_01 = (SWrapBox *)(this->MyPanelWidget).Object;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_01 == (SWrapBox *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((pSVar3 == (SWidget *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_48.Object = local_68.Object;
          local_48.SharedReferenceCount.ReferenceController =
               local_68.SharedReferenceCount.ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if ((local_68.Object == (SWidget *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          SWrapBox::RemoveSlot(this_01,&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          break;
        case Radial:
          pTVar1 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
          this_02 = (SRadialBox *)(this->MyPanelWidget).Object;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_02 == (SRadialBox *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((pSVar3 == (SWidget *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_38.Object = local_68.Object;
          local_38.SharedReferenceCount.ReferenceController =
               local_68.SharedReferenceCount.ReferenceController;
          if (local_68.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          if ((local_68.Object == (SWidget *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          SRadialBox::RemoveSlot(this_02,&local_38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          break;
        case Overlay:
          pTVar1 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
          this_03 = (SOverlay *)(this->MyPanelWidget).Object;
          if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_03 == (SOverlay *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar5 = TSharedPtr<SWidget,1>::ToSharedRef(&local_68,&local_28);
          SOverlay::RemoveSlot(this_03,pTVar5);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    FUserWidgetPool::Release(&this->EntryWidgetPool,param_1,param_2);
  }
  return;
}

// ResetInternal @ 146a0dbe0

void __thiscall UDynamicEntryBoxBase::ResetInternal(UDynamicEntryBoxBase *this,bool param_1)

{
  SWrapBox *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  FUserWidgetPool::ReleaseAll(&this->EntryWidgetPool,param_1);
  this_00 = (SWrapBox *)(this->MyPanelWidget).Object;
  if (this_00 != (SWrapBox *)0x0) {
    switch(this->EntryBoxType) {
    case Horizontal:
    case Vertical:
      pTVar1 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SBoxPanel::ClearChildren((SBoxPanel *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    case Wrap:
    case VerticalWrap:
      pTVar1 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWrapBox::ClearChildren(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    case Radial:
      pTVar1 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SRadialBox::ClearChildren((SRadialBox *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    case Overlay:
      pTVar1 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SOverlay::ClearChildren((SOverlay *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    }
  }
  return;
}

// SetEntrySpacing @ 146a13710

void __thiscall
UDynamicEntryBoxBase::SetEntrySpacing(UDynamicEntryBoxBase *this,TVector2<double> *param_1)

{
  TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
  *pTVar1;
  TVector2<double>_u_0_s_0 TVar2;
  EDynamicBoxType EVar3;
  int iVar4;
  SWrapBox *this_00;
  FScriptContainerElement *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  SPanel *pSVar9;
  longlong lVar10;
  TSharedPtr<SPanel,1> *this_01;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_f0;
  ForAnyElementType FStack_e8;
  ulonglong local_e0;
  undefined1 local_d8 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_c0;
  ForAnyElementType FStack_b8;
  ulonglong local_b0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  TVector2<double>_u_0 local_78 [5];
  
  TVar2 = (param_1->field0_0x0)._s_0;
  (this->EntrySpacing).field0_0x0._s_0 = TVar2;
  this_01 = &this->MyPanelWidget;
  fVar20 = (float)TVar2.X;
  this_00 = (SWrapBox *)this_01->Object;
  fVar18 = (float)TVar2.Y;
  if (this_00 != (SWrapBox *)0x0) {
    EVar3 = this->EntryBoxType;
    if ((byte)(EVar3 - Wrap) < 2) {
      pTVar6 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_78[0]._0_8_ = (this->EntrySpacing).field0_0x0._s_0.X;
      local_78[0]._8_8_ = (this->EntrySpacing).field0_0x0._s_0.Y;
      SWrapBox::SetInnerSlotPadding(this_00,(TVector2<double> *)&local_78[0]._s_0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    }
    else if (EVar3 == Overlay) {
      pSVar9 = TSharedPtr<SPanel,1>::operator->(this_01);
      lVar10 = (**(code **)(*(longlong *)pSVar9 + 0x180))(pSVar9);
      uVar14 = __xmm_80000000800000008000000080000000;
      uVar17 = 0;
      uVar12 = uVar17;
      uVar16 = uVar17;
      if (0 < *(int *)(lVar10 + 0x28)) {
        do {
          local_118 = 0;
          uStack_110 = 0;
          uVar15 = (uint)uVar12;
          if ((this->SpacingPattern).ArrayNum < 1) {
            fVar19 = fVar20 * (float)(int)uVar15;
            if (fVar20 < 0.0) {
              uStack_110 = (ulonglong)((uint)fVar19 ^ uVar14);
            }
            else {
              local_118 = (ulonglong)(uint)fVar19;
            }
            fVar19 = fVar18 * (float)(int)uVar15;
            if (fVar18 < 0.0) goto LAB_146a138d2;
            local_118 = CONCAT44(fVar19,(undefined4)local_118);
          }
          else {
            fVar20 = 0.0;
            fVar19 = 0.0;
            uVar12 = uVar17;
            if ((int)uVar15 < 1) {
LAB_146a138bb:
              local_118 = (ulonglong)(uint)fVar20;
            }
            else {
              do {
                iVar4 = (this->SpacingPattern).ArrayNum;
                uVar11 = (int)uVar12 % iVar4;
                uVar13 = 0;
                if ((int)uVar11 < iVar4) {
                  uVar13 = ~uVar11 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
                pFVar5 = (this->SpacingPattern).AllocatorInstance.Data;
                uVar13 = (int)uVar12 + 1;
                fVar20 = fVar20 + (float)*(double *)(pFVar5 + (longlong)(int)uVar11 * 0x10);
                fVar19 = fVar19 + (float)*(double *)(pFVar5 + (longlong)(int)uVar11 * 0x10 + 8);
                uVar12 = (ulonglong)uVar13;
              } while ((int)uVar13 < (int)uVar15);
              if (0.0 <= fVar20) goto LAB_146a138bb;
              uStack_110 = (ulonglong)((uint)fVar20 ^ uVar14);
            }
            fVar18 = fVar19;
            if (fVar19 < 0.0) {
LAB_146a138d2:
              uStack_110 = CONCAT44((uint)fVar19 ^ uVar14,(undefined4)uStack_110);
            }
            else {
              local_118 = CONCAT44(fVar19,(undefined4)local_118);
            }
          }
          uVar13 = 0;
          if ((int)uVar15 < *(int *)(lVar10 + 0x28)) {
            uVar13 = ~uVar15 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_108[0x10] = true;
          uVar12 = *(ulonglong *)(uVar16 + *(longlong *)(lVar10 + 0x20));
          local_108._0_8_ = local_118;
          local_108._8_8_ = uStack_110;
          local_e0 = 0;
          pTVar1 = (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                    *)(uVar12 + 0x28);
          local_f0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_e8.Data = (FScriptContainerElement *)0x0;
          if (pTVar1 == (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                         *)0x0) {
            uVar12 = uVar17;
          }
          SlateAttributePrivate::
          TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
          ::Assign(pTVar1,(ISlateAttributeContainer *)(uVar12 + 0x20),
                   (TAttribute<FMargin> *)local_108,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_f0,(FWriteAccessScope *)&local_a8);
          if (((int)local_e0 != 0) && (FStack_e8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_e8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_e8,0,0,0x10);
            local_e0 = local_e0 & 0xffffffff00000000;
          }
          if (local_a8.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
          }
          if (FStack_e8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_e8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_f0.AccessDetector);
          uVar12 = (ulonglong)(uVar15 + 1);
          uVar16 = uVar16 + 8;
        } while ((int)(uVar15 + 1) < *(int *)(lVar10 + 0x28));
      }
    }
    else if (EVar3 < Wrap) {
      pSVar9 = TSharedPtr<SPanel,1>::operator->(this_01);
      lVar10 = (**(code **)(*(longlong *)pSVar9 + 0x180))(pSVar9);
      uVar17 = 0;
      uVar12 = uVar17;
      uVar16 = uVar17;
      if (0 < *(int *)(lVar10 + 0x28)) {
        do {
          uVar14 = (uint)uVar12;
          if ((((EVar3 == Horizontal) || (local_118._4_4_ = fVar18, uVar14 == 0)) &&
              (local_118._4_4_ = 0.0, EVar3 == Horizontal)) && (uVar14 != 0)) {
            local_118 = (ulonglong)(uint)fVar20;
          }
          else {
            local_118 = (ulonglong)(uint)local_118._4_4_ << 0x20;
          }
          uVar15 = 0;
          if ((int)uVar14 < *(int *)(lVar10 + 0x28)) {
            uVar15 = ~uVar14 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          local_d8[0x10] = true;
          uVar12 = *(ulonglong *)(uVar16 + *(longlong *)(lVar10 + 0x20));
          local_d8._0_8_ = local_118;
          local_d8._8_4_ = 0.0;
          local_d8._12_4_ = 0.0;
          local_b0 = 0;
          pTVar1 = (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                    *)(uVar12 + 0x28);
          local_c0.AccessDetector.State =
               (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
          FStack_b8.Data = (FScriptContainerElement *)0x0;
          if (pTVar1 == (TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
                         *)0x0) {
            uVar12 = uVar17;
          }
          SlateAttributePrivate::
          TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
          ::Assign(pTVar1,(ISlateAttributeContainer *)(uVar12 + 0x20),
                   (TAttribute<FMargin> *)local_d8,None);
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                    (&local_c0,(FWriteAccessScope *)&local_90);
          if (((int)local_b0 != 0) && (FStack_b8.Data != (FScriptContainerElement *)0x0)) {
            (*(code *)**(undefined8 **)FStack_b8.Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      (&FStack_b8,0,0,0x10);
            local_b0 = local_b0 & 0xffffffff00000000;
          }
          if (local_90.bDestroyed == false) {
            FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
          }
          if (FStack_b8.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FStack_b8.Data);
          }
          FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_c0.AccessDetector);
          uVar12 = (ulonglong)(uVar14 + 1);
          uVar16 = uVar16 + 8;
        } while ((int)(uVar14 + 1) < *(int *)(lVar10 + 0x28));
      }
    }
  }
  return;
}

// SetRadialSettings @ 146a19250

void __thiscall
UDynamicEntryBoxBase::SetRadialSettings(UDynamicEntryBoxBase *this,FRadialBoxSettings *param_1)

{
  SPanel *pSVar1;
  TReferenceControllerBase<1> *pTVar2;
  SRadialBox *this_00;
  code *pcVar3;
  bool bVar4;
  undefined2 uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  
  bVar8 = param_1->bDistributeItemsEvenly;
  bVar4 = param_1->bClockwiseOrder;
  uVar5 = *(undefined2 *)&param_1->field_0x6;
  fVar6 = param_1->AngleBetweenItems;
  fVar7 = param_1->SectorCentralAngle;
  pSVar1 = (this->MyPanelWidget).Object;
  (this->RadialBoxSettings).StartingAngle = param_1->StartingAngle;
  (this->RadialBoxSettings).bDistributeItemsEvenly = bVar8;
  (this->RadialBoxSettings).bClockwiseOrder = bVar4;
  *(undefined2 *)&(this->RadialBoxSettings).field_0x6 = uVar5;
  (this->RadialBoxSettings).AngleBetweenItems = fVar6;
  (this->RadialBoxSettings).SectorCentralAngle = fVar7;
  if ((pSVar1 != (SPanel *)0x0) && (this->EntryBoxType == Radial)) {
    pTVar2 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(float *)&pSVar1[1].field_0x34 = param_1->StartingAngle;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
    pSVar1 = (this->MyPanelWidget).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar1 == (SPanel *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pSVar1[1].field_0x40 = param_1->bDistributeItemsEvenly;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
    pSVar1 = (this->MyPanelWidget).Object;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pSVar1 == (SPanel *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)&pSVar1[1].field_0x3c = param_1->AngleBetweenItems;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    this_00 = (SRadialBox *)(this->MyPanelWidget).Object;
    pTVar2 = (this->MyPanelWidget).SharedReferenceCount.ReferenceController;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 == (SRadialBox *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    SRadialBox::SetSectorCentralAngle(this_00,param_1->SectorCentralAngle);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  return;
}

// StaticRegisterNativesUDynamicEntryBoxBase @ 146a1e760

void __cdecl UDynamicEntryBoxBase::StaticRegisterNativesUDynamicEntryBoxBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDynamicEntryBoxBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a1fb10

/* WARNING: Removing unreachable block (ram,0x000146a28528) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDynamicEntryBoxBase::SynchronizeProperties(UDynamicEntryBoxBase *this)

{
  EFlowDirectionPreference EVar1;
  byte bVar2;
  byte bVar3;
  FName FVar4;
  TReferenceControllerBase<1> *pTVar5;
  SWidget *pSVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  EVisibility EVar12;
  UObject *pUVar13;
  undefined8 *puVar14;
  ulong64 uVar15;
  UFunction *pUVar16;
  undefined7 extraout_var;
  FDelegateToolTip *pFVar17;
  FDelegateToolTip *pFVar18;
  FArguments *pFVar19;
  TSharedRef<SWidget,1> *pTVar20;
  TAttribute<FText> *pTVar21;
  TDelegateBase<FNotThreadSafeDelegateMode> *pTVar22;
  undefined1 auStackX_8 [16];
  FLLMScope aFStackX_18 [5];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_878;
  FDelegateAllocation FStack_870;
  TSharedPtr<SWidget,1> TStack_860;
  SWidget *pSStack_850;
  TReferenceControllerBase<1> *pTStack_848;
  undefined1 uStack_840;
  undefined1 uStack_83f;
  undefined1 auStack_838 [8];
  ForAnyElementType FStack_830;
  ulonglong uStack_828;
  byte bStack_820;
  undefined1 uStack_81f;
  undefined1 auStack_818 [8];
  ForAnyElementType FStack_810;
  ulonglong uStack_808;
  undefined2 uStack_800;
  undefined1 auStack_7f8 [8];
  FDelegateAllocation FStack_7f0;
  undefined2 uStack_7e0;
  undefined1 auStack_7d8 [8];
  FDelegateAllocation FStack_7d0;
  undefined2 uStack_7c0;
  undefined1 auStack_7b8 [8];
  void *pvStack_7b0;
  int iStack_7a8;
  undefined1 auStack_7a0 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_788;
  ForAnyElementType FStack_780;
  ulonglong uStack_778;
  undefined1 auStack_770 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_758;
  ForAnyElementType FStack_750;
  ulonglong uStack_748;
  code *pcStack_738;
  undefined4 uStack_730;
  undefined4 uStack_72c;
  bool bStack_728;
  undefined1 auStack_718 [16];
  undefined1 auStack_708 [8];
  void *pvStack_700;
  undefined8 uStack_6f8;
  UObject *pUStack_6f0;
  UDynamicEntryBoxBase *pUStack_6e8;
  code *pcStack_6e0;
  TRawPtrProxy<FDelegateToolTip> TStack_6d8;
  UObject *pUStack_6d0;
  FMemScope FStack_6c8;
  FName FStack_6c0;
  FName FStack_6b8;
  undefined1 auStack_6b0 [8];
  undefined1 auStack_6a8 [24];
  undefined1 uStack_690;
  undefined1 uStack_68f;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  TVector2<double>_u_0 TStack_670;
  undefined1 uStack_660;
  undefined1 auStack_658 [8];
  void *pvStack_650;
  undefined8 uStack_648;
  TSharedRef<FDelegateToolTip,1> TStack_640;
  TSharedRef<SToolTip,1> TStack_630;
  TSharedRef<SWidget,1> TStack_620;
  TAttribute<FSlateBrush_const_*> TStack_610;
  FDestructionSentinel FStack_5e8;
  FDestructionSentinel FStack_5d0;
  FDestructionSentinel FStack_5b8;
  FDestructionSentinel FStack_5a0;
  FDestructionSentinel FStack_588;
  FDestructionSentinel FStack_570;
  FDelegateAllocation *pFStack_558;
  FDestructionSentinel FStack_550;
  FDelegateAllocation *pFStack_538;
  FDestructionSentinel FStack_530;
  FDelegateAllocation *pFStack_518;
  TAttribute<FMargin> TStack_510;
  undefined1 uStack_4e0;
  undefined1 uStack_4df;
  TDelegateBase<FNotThreadSafeDelegateMode> TStack_4d8;
  SWidget *pSStack_4c0;
  TReferenceControllerBase<1> *pTStack_4b8;
  TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs> TStack_4b0;
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  FReadAccessScope FStack_438;
  FReadAccessScope FStack_420;
  FReadAccessScope FStack_408;
  TAttribute<FText> TStack_3f0;
  TAttribute<FText> TStack_3c0;
  FArguments FStack_390;
  
  auStackX_8[0] = Visible;
  auStackX_8[1] = false;
  auStackX_8._2_2_ = 0;
  *(undefined1 *)&this->_padding_ = 1;
  UWidget::GetCachedWidget((UWidget *)this,&TStack_860);
  pSVar6 = TStack_860.Object;
  if (TStack_860.Object != (SWidget *)0x0) {
    if ((this->_padding_ & 0x800) != 0) {
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      auStack_718._0_4_ = ZEXT14(*(byte *)((longlong)&this->_padding_ + 3));
      auStack_718[4] = true;
      uStack_6f8 = 0;
      auStack_718[8] = true;
      auStack_708 = (undefined1  [8])0x0;
      pvStack_700 = (void *)0x0;
      SWidget::SetCursor(pSVar6,(TAttribute<TOptional<EMouseCursor::Type>_> *)auStack_718);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_708);
      if (pvStack_700 != (void *)0x0) {
        FMemory::Free(pvStack_700);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_708);
    }
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
    if (bVar11) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &FStack_408);
      FVar4 = (FName)this->_padding_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_408);
      pUVar13 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      uStack_800 = 0x100;
      FStack_7f0.DelegateSize = 0;
      FStack_7f0._12_4_ = 0;
      auStack_7f8 = (undefined1  [8])0x0;
      FStack_7f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7f8,
                 (FWriteAccessScope *)&FStack_570);
      pFStack_558 = &FStack_7f0;
      puVar14 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7f0);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[2] = uVar15;
        *puVar14 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_NXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar14 + 4) = FVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        puVar14[5] = 0;
        pUStack_6d0 = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 5),(FObjectPtr)&pUStack_6d0);
        if ((FVar4 == (FName)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pUVar13 != (UObject *)0x0) {
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar14 + 5));
          pUVar16 = UObject::FindFunctionChecked(pUVar13,FVar4);
          puVar14[3] = pUVar16;
        }
      }
      if (FStack_570.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_570.Accessor,&FStack_570);
      }
      pTVar22 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8;
      bVar8 = false;
      bVar11 = true;
      auStack_6b0[0] = (byte)uStack_800;
      auStack_6b0[1] = uStack_800._1_1_;
    }
    else {
      auStack_6b0[1] = 1;
      auStack_6b0[0] = *(byte *)((longlong)&this->_padding_ + 1) >> 2 & 1;
      uStack_81f = 1;
      bVar8 = true;
      bVar11 = false;
      uStack_808 = 0;
      pTVar22 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_818;
      auStack_818 = (undefined1  [8])0x0;
      FStack_810.Data = (FScriptContainerElement *)0x0;
      bStack_820 = auStack_6b0[0];
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8,pTVar22);
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,bool,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar6->EnabledStateAttribute,pSVar6,(TAttribute<bool> *)auStack_6b0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_6a8);
    if ((void *)auStack_6a8._8_8_ != (void *)0x0) {
      FMemory::Free((void *)auStack_6a8._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_6a8);
    if (bVar8) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_818,
                 (FWriteAccessScope *)&FStack_5b8);
      if (((int)uStack_808 != 0) && (FStack_810.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_810.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_810,0,0,0x10);
        uStack_808 = uStack_808 & 0xffffffff00000000;
      }
      if (FStack_5b8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5b8.Accessor,&FStack_5b8);
      }
      if (FStack_810.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_810.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_818);
    }
    if (bVar11) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7f8);
      if (FStack_7f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7f0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7f8);
    }
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcStack_6e0 = *(code **)(pSVar6->_padding_ + 0x1c8);
    bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
    if (bVar11) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 &FStack_438);
      FVar4 = (FName)this->_padding_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_438);
      pUVar13 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                          ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      uStack_7e0 = 0x100;
      FStack_7d0.DelegateSize = 0;
      FStack_7d0._12_4_ = 0;
      auStack_7d8 = (undefined1  [8])0x0;
      FStack_7d0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_7d8,
                 (FWriteAccessScope *)&FStack_550);
      pFStack_538 = &FStack_7d0;
      puVar14 = UE::Core::Private::DelegateAllocate(0x30,&FStack_7d0);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[2] = uVar15;
        *puVar14 = &
                   ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AW4ESlateVisibility__XZUFDefaultDelegateUserPolicy____V__6B_
        ;
        *(FName *)(puVar14 + 4) = FVar4;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        puVar14[5] = 0;
        pUStack_6f0 = pUVar13;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar13);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 5),(FObjectPtr)&pUStack_6f0);
        if ((FVar4 == (FName)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InFunctionName != NAME_None",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                ,0x56,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (pUVar13 != (UObject *)0x0) {
          pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar14 + 5));
          pUVar16 = UObject::FindFunctionChecked(pUVar13,FVar4);
          puVar14[3] = pUVar16;
        }
      }
      if (FStack_550.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_550.Accessor,&FStack_550);
      }
      pcStack_738 = UWidget::ConvertVisibility;
      uStack_72c = TStack_620.SharedReferenceCount.ReferenceController._4_4_;
      uStack_730 = 0;
      TStack_878.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      FStack_870.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_530);
      pFStack_518 = &FStack_870;
      puVar14 = UE::Core::Private::DelegateAllocate(0x48,&FStack_870);
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = &
                   ___7__TCommonDelegateInstanceState___A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        *(undefined1 *)(puVar14 + 1) = (undefined1)uStack_7e0;
        *(undefined1 *)((longlong)puVar14 + 9) = uStack_7e0._1_1_;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)(puVar14 + 2),
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
        uVar15 = FDelegateHandle::GenerateNewID();
        puVar14[5] = uVar15;
        *puVar14 = &
                   ___7__TBaseUObjectMethodDelegateInstance__00__CBVUWidget____A6A_AUEVisibility__XZUFDefaultDelegateUserPolicy__V__TAttribute_W4ESlateVisibility______6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar14[6] = 0;
        pUStack_6e8 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar14 + 6),(FObjectPtr)&pUStack_6e8);
        puVar14[7] = pcStack_738;
        puVar14[8] = CONCAT44(uStack_72c,uStack_730);
      }
      if (FStack_530.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_530.Accessor,&FStack_530);
      }
      uStack_7c0 = 0x119;
      auStack_7b8 = (undefined1  [8])0x0;
      pvStack_7b0 = (void *)0x0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&pcStack_738);
      if (pvStack_7b0 != (void *)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      pvStack_7b0 = (void *)FStack_870.DelegateAllocator;
      iStack_7a8 = FStack_870.DelegateSize;
      FStack_870.DelegateSize = 0;
      FStack_870.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      if (bStack_728 == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_72c,uStack_730),
                   (FDestructionSentinel *)&pcStack_738);
      }
      pTVar22 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8;
      bVar10 = true;
      bVar9 = true;
      bVar8 = true;
      bVar11 = false;
      uStack_4e0 = (undefined1)uStack_7c0;
      uStack_4df = uStack_7c0._1_1_;
    }
    else {
      uStack_690 = *(undefined1 *)((longlong)&this->_padding_ + 5);
      uStack_68f = 1;
      uStack_678 = 0;
      uStack_688 = 0;
      uStack_680 = 0;
      EVar12 = UWidget::ConvertVisibility
                         ((UWidget *)this,(TAttribute<ESlateVisibility> *)auStackX_8);
      uStack_4df = 1;
      bVar10 = false;
      bVar9 = false;
      bVar8 = false;
      bVar11 = true;
      uStack_4e0 = *(undefined1 *)CONCAT71(extraout_var,EVar12.Value.Value);
      pTVar22 = (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_838;
      uStack_828 = 0;
      uStack_83f = 1;
      auStack_838 = (undefined1  [8])0x0;
      FStack_830.Data = (FScriptContainerElement *)0x0;
      uStack_840 = uStack_4e0;
    }
    pFVar18 = (FDelegateToolTip *)0x0;
    TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
              (&TStack_4d8,pTVar22);
    (*pcStack_6e0)(pSVar6,&uStack_4e0);
    if (bVar11) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_838,
                 (FWriteAccessScope *)&FStack_5a0);
      if (((int)uStack_828 != 0) && (FStack_830.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_830.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_830,0,0,0x10);
        uStack_828 = uStack_828 & 0xffffffff00000000;
      }
      if (FStack_5a0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5a0.Accessor,&FStack_5a0);
      }
      if (FStack_830.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_830.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_838);
    }
    if (bVar8) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7b8);
      if ((ForElementType<TAlignedBytes<16,16>_>)pvStack_7b0 !=
          (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free(pvStack_7b0);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7b8);
    }
    if (bVar9) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_878,(FWriteAccessScope *)&FStack_5d0);
      if ((FStack_870.DelegateSize != 0) &&
         (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
        (*(code *)**(undefined8 **)FStack_870.DelegateAllocator)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&FStack_870,0,0,0x10);
        FStack_870.DelegateSize = 0;
      }
      if (FStack_5d0.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5d0.Accessor,&FStack_5d0);
      }
      if (FStack_870.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_870.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_878.AccessDetector);
    }
    if (bVar10) {
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_7d8);
      if (FStack_7d0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
        FMemory::Free((void *)FStack_7d0.DelegateAllocator);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_7d8);
    }
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SWidget::SetClipping(pSVar6,*(EWidgetClipping *)((longlong)&this->_padding_ + 4));
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    SWidget::SetPixelSnapping(pSVar6,*(EWidgetPixelSnapping *)((longlong)&this->_padding_ + 6));
    if ((pSVar6 == (SWidget *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    EVar1 = (EFlowDirectionPreference)this->_padding_;
    if (pSVar6->FlowDirectionPreference != EVar1) {
      pSVar6->FlowDirectionPreference = EVar1;
      SWidget::Invalidate(pSVar6,Paint);
    }
    bVar2 = pSVar6->field_0x30;
    bVar3 = *(byte *)((longlong)&this->_padding_ + 1);
    if (((bVar2 ^ bVar3) >> 4 & 1) != 0) {
      pSVar6->field_0x30 = (bVar3 & 0xf0 ^ bVar2) & 0x10 ^ bVar2;
      SWidget::Invalidate(pSVar6,PaintAndVolatility);
    }
    if (*(float *)&this->_padding_ != pSVar6->RenderOpacity) {
      pSVar6->RenderOpacity = *(float *)&this->_padding_;
      SWidget::Invalidate(pSVar6,Paint);
    }
    UWidget::UpdateRenderTransform((UWidget *)this);
    TStack_670._s_0.X = (double)this->_padding_;
    TStack_670._s_0.Y = (double)this->_padding_;
    uStack_660 = 1;
    uStack_648 = 0;
    auStack_658 = (undefined1  [8])0x0;
    pvStack_650 = (void *)0x0;
    SlateAttributePrivate::
    TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
    ::Assign((TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
              *)&pSVar6->RenderTransformPivotAttribute,pSVar6,
             (TAttribute<UE::Math::TVector2<double>_> *)&TStack_670._s_0,None);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_658);
    if (pvStack_650 != (void *)0x0) {
      FMemory::Free(pvStack_650);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)auStack_658);
    bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                       ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
    if (bVar11) {
      pFVar17 = ::operator_new(0x30);
      if (pFVar17 != (FDelegateToolTip *)0x0) {
        *(undefined8 *)&pFVar17->ToolTipWidgetDelegate = 0;
        pFVar17->_padding_ = (longlong)&___7FDelegateToolTip__6B_;
        *(undefined8 *)&(pFVar17->ToolTipWidgetDelegate).field_0x8 = 0;
        *(undefined8 *)&(pFVar17->ToolTipWidgetDelegate).field_0x10 = 0;
        (pFVar17->CachedToolTip).Object = (SWidget *)0x0;
        (pFVar17->CachedToolTip).SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        pFVar18 = pFVar17;
      }
      TStack_6d8.Object = pFVar18;
      TSharedRef<FDelegateToolTip,1>::TSharedRef<FDelegateToolTip,1><FDelegateToolTip>
                (&TStack_640,&TStack_6d8);
      TScriptDelegate<FNotThreadSafeDelegateMode>::operator=
                ((TScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &(TStack_640.Object)->ToolTipWidgetDelegate,
                 (TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      auStack_7a0._0_8_ = TStack_640.Object;
      auStack_7a0._8_8_ = TStack_640.SharedReferenceCount.ReferenceController;
      if (TStack_640.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_640.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_7a0[0x10] = true;
      uStack_778 = 0;
      TStack_788.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_780.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(pSVar6,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_7a0);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_788,(FWriteAccessScope *)&FStack_588);
      if (((int)uStack_778 != 0) && (FStack_780.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_780.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_780,0,0,0x10);
        uStack_778 = uStack_778 & 0xffffffff00000000;
      }
      if (FStack_588.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_588.Accessor,&FStack_588);
      }
      if (FStack_780.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_780.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_788.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_7a0._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_640.SharedReferenceCount.ReferenceController);
    }
    else if (this->_padding_ == 0) {
      bVar11 = FText::IsEmpty((FText *)&this->_padding_);
      if ((!bVar11) ||
         (bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                             ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_),
         bVar11)) {
        bVar11 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
        if (!bVar11) {
          pTVar21 = TAttribute<FText>::TAttribute<FText><FText>
                              (&TStack_3f0,(FText *)&this->_padding_);
        }
        else {
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                     &FStack_420);
          FStack_6c0 = (FName)this->_padding_;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&FStack_420);
          pUVar13 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
          pTVar21 = TAttribute<FText>::Create<UObject>(&TStack_3c0,pUVar13,&FStack_6c0);
        }
        SWidget::SetToolTipText(pSVar6,pTVar21);
        if (bVar11) {
          TAttribute<FText>::~TAttribute<FText>(&TStack_3c0);
        }
      }
    }
    else {
      pFVar19 = SToolTip::FArguments::FArguments(&FStack_390);
      TStack_510.bIsSet = true;
      TStack_510.Getter._16_8_ = 0;
      TStack_510.Value.Left = 0.0;
      TStack_510.Value.Top = 0.0;
      TStack_510.Value.Right = 0.0;
      TStack_510.Value.Bottom = 0.0;
      TStack_510.Getter._0_8_ = 0;
      TStack_510.Getter._8_8_ = 0;
      pFVar19 = SToolTip::FArguments::TextMargin(pFVar19,&TStack_510);
      TStack_610.Value = (FSlateBrush *)0x0;
      TStack_610.bIsSet = true;
      TStack_610.Getter._16_8_ = 0;
      TStack_610.Getter._0_8_ = 0;
      TStack_610.Getter._8_8_ = 0;
      pFVar19 = SToolTip::FArguments::BorderImage(pFVar19,&TStack_610);
      pTVar20 = UWidget::TakeWidget((UWidget *)this->_padding_,&TStack_620);
      pTVar5 = (pTVar20->SharedReferenceCount).ReferenceController;
      pSVar6 = pTVar20->Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      pSStack_4c0 = (pFVar19->_Content).Widget.Object;
      pTStack_4b8 = (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController;
      (pFVar19->_Content).Widget.Object = pSVar6;
      (pFVar19->_Content).Widget.SharedReferenceCount.ReferenceController = pTVar5;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_4b8);
      FLLMScope::FLLMScope
                (aFStackX_18,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
      FStack_6b8 = LLMTagDeclaration_UI_Slate.UniqueName;
      FMemScope::FMemScope(&FStack_6c8,&FStack_6b8,true);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>
                (&TStack_4b0,"SToolTip",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\Widget.cpp"
                 ,0x5f8,(T0RequiredArgs *)(auStackX_8 + 8));
      FMemScope::~FMemScope(&FStack_6c8);
      FLLMScope::~FLLMScope(aFStackX_18);
      TSlateDecl<SToolTip,RequiredArgs::T0RequiredArgs>::operator<<=
                (&TStack_4b0,&TStack_630,pFVar19);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_4b0._Widget.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)
                 CONCAT44(TStack_620.SharedReferenceCount.ReferenceController._4_4_,
                          TStack_620.SharedReferenceCount.ReferenceController._0_4_));
      SToolTip::FArguments::~FArguments(&FStack_390);
      if ((TStack_860.Object == (SWidget *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      auStack_770._8_8_ = TStack_630.SharedReferenceCount.ReferenceController;
      auStack_770._0_8_ = &(TStack_630.Object)->_padding_;
      if (TStack_630.Object == (SToolTip *)0x0) {
        auStack_770._0_8_ = pFVar18;
      }
      if (TStack_630.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(TStack_630.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      auStack_770[0x10] = true;
      uStack_748 = 0;
      TStack_758.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_750.Data = (FScriptContainerElement *)0x0;
      SWidget::SetToolTip(TStack_860.Object,(TAttribute<TSharedPtr<IToolTip,1>_> *)auStack_770);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_758,(FWriteAccessScope *)&FStack_5e8);
      if (((int)uStack_748 != 0) && (FStack_750.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_750.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_750,0,0,0x10);
        uStack_748 = uStack_748 & 0xffffffff00000000;
      }
      if (FStack_5e8.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_5e8.Accessor,&FStack_5e8);
      }
      if (FStack_750.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_750.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_758.AccessDetector);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)auStack_770._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (TStack_630.SharedReferenceCount.ReferenceController);
    }
    if (this->_padding_ != 0) {
      (**(code **)(this->_padding_ + 0x308))(this,&pSStack_850);
      if (pSStack_850 != (SWidget *)0x0) {
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pSVar6 = pSStack_850;
        pTVar21 = USlateAccessibleWidgetData::CreateAccessibleTextAttribute
                            ((USlateAccessibleWidgetData *)this->_padding_,
                             (TAttribute<FText> *)auStack_498);
        SWidget::SetAccessibleBehavior
                  (pSVar6,*(EAccessibleBehavior *)(this->_padding_ + 0x29),pTVar21,Main);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_480);
        if ((void *)auStack_480._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_480._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_480);
        if ((ITextData *)auStack_498._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_498._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pSVar6 = pSStack_850;
        pTVar21 = USlateAccessibleWidgetData::CreateAccessibleSummaryTextAttribute
                            ((USlateAccessibleWidgetData *)this->_padding_,
                             (TAttribute<FText> *)auStack_468);
        SWidget::SetAccessibleBehavior
                  (pSVar6,*(EAccessibleBehavior *)(this->_padding_ + 0x2a),pTVar21,Summary);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_450);
        if ((void *)auStack_450._8_8_ != (void *)0x0) {
          FMemory::Free((void *)auStack_450._8_8_);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)auStack_450);
        if ((ITextData *)auStack_468._0_8_ != (ITextData *)0x0) {
          (**(code **)((longlong)*(ITextData *)auStack_468._0_8_ + 0x10))();
        }
        if ((pSStack_850 == (SWidget *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        SWidget::SetCanChildrenBeAccessible(pSStack_850,*(bool *)(this->_padding_ + 0x28));
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_848);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (TStack_860.SharedReferenceCount.ReferenceController);
  return;
}

// execGetAllEntries @ 146a344c0

void __cdecl UDynamicEntryBoxBase::execGetAllEntries(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TArray<UUserWidget_*,TSizedDefaultAllocator<32>_>::operator=
            (param_3,(TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *)(param_1 + 0xd));
  return;
}

// execGetNumEntries @ 146a35a30

void __cdecl UDynamicEntryBoxBase::execGetNumEntries(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)&param_1[0xd].field_0x8;
  return;
}

// execSetEntrySpacing @ 146a3c260

void __cdecl
UDynamicEntryBoxBase::execSetEntrySpacing(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TVector2<double> *pTVar2;
  TVector2<double> local_18;
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TVector2<double> *)param_2->MostRecentPropertyAddress != (TVector2<double> *)0x0) {
    pTVar2 = (TVector2<double> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetEntrySpacing((UDynamicEntryBoxBase *)param_1,pTVar2);
  return;
}

// execSetRadialSettings @ 146a40e10

void __cdecl
UDynamicEntryBoxBase::execSetRadialSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FRadialBoxSettings *pFVar2;
  FRadialBoxSettings local_18;
  
  local_18.StartingAngle = 0.0;
  local_18.bDistributeItemsEvenly = true;
  local_18.bClockwiseOrder = false;
  local_18.AngleBetweenItems = 0.0;
  local_18.SectorCentralAngle = 360.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FRadialBoxSettings *)param_2->MostRecentPropertyAddress != (FRadialBoxSettings *)0x0) {
    pFVar2 = (FRadialBoxSettings *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SetRadialSettings((UDynamicEntryBoxBase *)param_1,pFVar2);
  return;
}

// operator() @ 1504f66d0

bool __thiscall `UDynamicEntryBoxBase::InitEntryBoxType'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3877950800764337658>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3877950800764337658>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6710

bool __thiscall
`UDynamicEntryBoxBase::InitEntryHorizontalAlignment'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3877950800764337646>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3877950800764337646>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6750

bool __thiscall `UDynamicEntryBoxBase::InitEntrySizeRule'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3877950800764337652>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3877950800764337652>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6790

bool __thiscall
`UDynamicEntryBoxBase::InitEntryVerticalAlignment'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3877950800764337640>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3877950800764337640>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f6990

bool __thiscall `UDynamicEntryBoxBase::InitMaxElementSize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3877950800764337634>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3877950800764337634>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

