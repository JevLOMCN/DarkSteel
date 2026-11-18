// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 11

// ~FSlateAccessibleWindow @ 1425c17a0

void __thiscall FSlateAccessibleWindow::~FSlateAccessibleWindow(FSlateAccessibleWindow *this)

{
  *(undefined ***)this = &_vftable__for__FSlateAccessibleWidget__;
  *(undefined ***)&this->field_0x68 = &_vftable__for__IAccessibleWindow__;
  FSlateAccessibleWidget::~FSlateAccessibleWidget((FSlateAccessibleWidget *)this);
  return;
}

// AsWindow @ 1425cb230

IAccessibleWindow * __thiscall FSlateAccessibleWindow::AsWindow(FSlateAccessibleWindow *this)

{
  IAccessibleWindow *pIVar1;
  
  pIVar1 = (IAccessibleWindow *)&this->field_0x68;
  if (this == (FSlateAccessibleWindow *)0x0) {
    pIVar1 = (IAccessibleWindow *)0x0;
  }
  return pIVar1;
}

// Close @ 1425d1970

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __thiscall FSlateAccessibleWindow::Close(FSlateAccessibleWindow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FSlateApplicationBase *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  SWidget *local_78;
  TReferenceControllerBase<1> *local_70;
  SWidget *local_68;
  TReferenceControllerBase<1> *local_60;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FReadAccessScope local_38;
  FReadAccessScope local_20;
  
  if (*(longlong *)&this[-1].field_0x20 == 0) {
    return;
  }
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1) {
    return;
  }
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar10 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  pTVar9 = pTVar10;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar10;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1425d19e8;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar11 = aVar2 == aVar4;
      if (bVar11) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar11);
    pTVar9 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar8;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) goto LAB_1425d1a0e;
  }
LAB_1425d19e8:
  bVar11 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  pTVar8 = pTVar7;
  if (bVar11) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1425d1a0e:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pTVar9[0x66].SharedReferenceCount,&local_38);
  if (((pTVar9[0x67].SharedReferenceCount == (atomic<int>)0x0) ||
      ((longlong *)pTVar9[0x67]._padding_ == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*(longlong *)pTVar9[0x67]._padding_ + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    pFVar6 = FSlateApplicationBase::Get();
    pcVar1 = *(code **)(*(longlong *)pFVar6 + 0x140);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&pTVar9->SharedReferenceCount,&local_48);
    local_68 = pTVar5->Object;
    local_60 = (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_60 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    (*pcVar1)(pFVar6,&local_68);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_38);
    pTVar5 = TSharedFromThis<SWidget,1>::AsShared
                       ((TSharedFromThis<SWidget,1> *)&pTVar9->SharedReferenceCount,&local_58);
    local_78 = pTVar5->Object;
    local_70 = (pTVar5->SharedReferenceCount).ReferenceController;
    if (local_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_70->SharedReferenceCount = (atomic<int>)((int)local_70->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pTVar9[0x66].SharedReferenceCount,&local_20);
    if (pTVar9[0x67].SharedReferenceCount != (atomic<int>)0x0) {
      pTVar10 = (TReferenceControllerBase<1> *)pTVar9[0x67]._padding_;
    }
    (**(code **)(pTVar10->_padding_ + 0x60))(pTVar10,&local_78);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_20);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// GetChildAtPosition @ 1425ded00

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleWindow::GetChildAtPosition
          (FSlateAccessibleWindow *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__,
          int param_1,int param_2)

{
  IAccessibleWidget *pIVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateGetChildAtPosition> FVar11;
  TSharedRef<IAccessibleWidget,1> *pTVar12;
  TSharedPtr<IAccessibleWidget,1> *pTVar13;
  double *pdVar14;
  FName FVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  FColor_u_0 local_res10 [2];
  int local_res18;
  int local_res20;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  TSharedPtr<IAccessibleWidget,1> local_d8;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  IAccessibleWidget *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  FName local_98;
  TSharedRef<IAccessibleWidget,1> local_90;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [48];
  
  __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return __return_storage_ptr__;
  }
  FVar11 = StatPtr_STAT_AccessibilitySlateGetChildAtPosition;
  local_res18 = param_1;
  local_res20 = param_2;
  if (StatPtr_STAT_AccessibilitySlateGetChildAtPosition ==
      (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateGetChildAtPosition>)0x0) {
    pFVar10 = ::FName::FName(&local_98,"STAT_AccessibilitySlateGetChildAtPosition");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_AccessibilitySlateGetChildAtPosition>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_AccessibilitySlateGetChildAtPosition,*pFVar10,
                        L"Slate Accessibility: Get Widget At Point","STATGROUP_Accessibility",
                        "STATCAT_Advanced",L"Accessibility",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar5 = false;
  bVar4 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  bVar7 = false;
  bVar6 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar4 = true;
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_c8.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Widgets\\Accessibility\\SlateCoreAccessibleWidgets.cpp"
                   ,0x174);
        bVar5 = true;
        bVar4 = true;
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c0 = FVar15;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_1425dee8f;
    }
  }
  bVar5 = bVar7;
  bVar4 = bVar6;
  bVar6 = false;
  local_c0 = local_b8;
  FVar15 = local_b8;
LAB_1425dee8f:
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,10,&local_e8,0,(int *)((longlong)&local_e0 + 4));
  pTVar12 = TSharedFromThis<IAccessibleWidget,1>::AsShared
                      ((TSharedFromThis<IAccessibleWidget,1> *)&this[-1].field_0x10,&local_90);
  local_d8.Object = pTVar12->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (pTVar12->SharedReferenceCount).ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (((local_e8.Data <= &local_d8) &&
      (&local_d8 <
       (TSharedPtr<IAccessibleWidget,1> *)(local_e8.Data + (longlong)local_e0._4_4_ * 0x10))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar3 = (code *)swi(3);
    pTVar13 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar3)();
    return pTVar13;
  }
  iVar9 = (int)local_e0;
  if ((int)local_e0 == local_e0._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_e8,(int *)((longlong)&local_e0 + 4));
  }
  *(IAccessibleWidget **)&local_e8.Data[(longlong)iVar9 * 0x10].field_0x0 = local_d8.Object;
  *(TReferenceControllerBase<1> **)(local_e8.Data + (longlong)iVar9 * 0x10 + 8) =
       local_d8.SharedReferenceCount.ReferenceController;
  local_d8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_d8.Object = (IAccessibleWidget *)0x0;
  local_e0._0_4_ = iVar9 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  iVar9 = local_res18;
  do {
    if ((int)local_e0 < 1) {
      DestructItems<TSharedPtr<IAccessibleWidget,1>,int>
                ((TSharedPtr<IAccessibleWidget,1> *)local_e8.Data,(int)local_e0);
      if ((TSharedPtr<IAccessibleWidget,1> *)local_e8.Data != (TSharedPtr<IAccessibleWidget,1> *)0x0
         ) {
        FMemory::Free(local_e8.Data);
      }
      if (bVar4) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar5) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (bVar6) {
        FThreadStats::AddMessage(FVar15,CycleScopeEnd);
      }
      return __return_storage_ptr__;
    }
    pIVar1 = ((TSharedPtr<IAccessibleWidget,1> *)
             ((longlong)local_e8.Data + ((longlong)(int)local_e0 + -1) * 0x10))->Object;
    pTVar2 = (((TSharedPtr<IAccessibleWidget,1> *)
              ((longlong)local_e8.Data + ((longlong)(int)local_e0 + -1) * 0x10))->
             SharedReferenceCount).ReferenceController;
    (((TSharedPtr<IAccessibleWidget,1> *)
     ((longlong)local_e8.Data + ((longlong)(int)local_e0 + -1) * 0x10))->SharedReferenceCount).
    ReferenceController = (TReferenceControllerBase<1> *)0x0;
    ((TSharedPtr<IAccessibleWidget,1> *)
    ((longlong)local_e8.Data + ((longlong)(int)local_e0 + -1) * 0x10))->Object =
         (IAccessibleWidget *)0x0;
    iVar16 = (int)local_e0 + -1;
    pTVar13 = (TSharedPtr<IAccessibleWidget,1> *)((longlong)local_e8.Data + (longlong)iVar16 * 0x10)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pTVar13->SharedReferenceCount).ReferenceController);
    iVar16 = ((int)local_e0 - iVar16) + -1;
    if (iVar16 != 0) {
      memmove(pTVar13,pTVar13 + 1,(longlong)iVar16 << 4);
    }
    local_e0._0_4_ = -1;
    if ((pIVar1 != (IAccessibleWidget *)0x0) &&
       (cVar8 = (**(code **)(*(longlong *)pIVar1 + 0x90))(pIVar1), cVar8 == '\0')) {
      pdVar14 = (double *)(**(code **)(*(longlong *)pIVar1 + 0x20))(pIVar1,local_70);
      dVar19 = (double)iVar9;
      dVar18 = (double)param_2;
      if ((*pdVar14 <= dVar19 && dVar19 != *pdVar14) &&
         (((dVar19 < pdVar14[2] && (pdVar14[1] <= dVar18 && dVar18 != pdVar14[1])) &&
          (dVar18 < pdVar14[3])))) {
        if (local_e0._4_4_ < 0) {
          DestructItems<TSharedPtr<IAccessibleWidget,1>,int>
                    ((TSharedPtr<IAccessibleWidget,1> *)local_e8.Data,(int)local_e0);
          local_e0._0_4_ = 0;
          if (local_e0._4_4_ != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_e8,0,(int *)((longlong)&local_e0 + 4));
          }
        }
        else {
          DestructItems<TSharedPtr<IAccessibleWidget,1>,int>
                    ((TSharedPtr<IAccessibleWidget,1> *)local_e8.Data,(int)local_e0);
          local_e0._0_4_ = 0;
        }
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8 = __return_storage_ptr__->Object;
        pTStack_a0 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
        __return_storage_ptr__->Object = pIVar1;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_a0);
        iVar16 = (**(code **)(*(longlong *)pIVar1 + 0x58))(pIVar1);
        iVar17 = 0;
        param_2 = local_res20;
        if (0 < iVar16) {
          do {
            pTVar13 = (TSharedPtr<IAccessibleWidget,1> *)
                      (**(code **)(*(longlong *)pIVar1 + 0x50))(pIVar1,local_80,iVar17);
            if (((local_e8.Data <= pTVar13) &&
                (pTVar13 < (TSharedPtr<IAccessibleWidget,1> *)
                           (local_e8.Data + (longlong)local_e0._4_4_ * 0x10))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar3 = (code *)swi(3);
              pTVar13 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar3)();
              return pTVar13;
            }
            if ((int)local_e0 == local_e0._4_4_) {
              local_e0._0_4_ =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_e8,(int *)((longlong)&local_e0 + 4));
            }
            *(IAccessibleWidget **)&local_e8.Data[(longlong)(int)local_e0 * 0x10].field_0x0 =
                 pTVar13->Object;
            *(TReferenceControllerBase<1> **)(local_e8.Data + (longlong)(int)local_e0 * 0x10 + 8) =
                 (pTVar13->SharedReferenceCount).ReferenceController;
            (pTVar13->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0
            ;
            pTVar13->Object = (IAccessibleWidget *)0x0;
            local_e0._0_4_ = (int)local_e0 + 1;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_78);
            iVar17 = iVar17 + 1;
            param_2 = local_res20;
          } while (iVar17 < iVar16);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FVar15 = local_c0;
  } while( true );
}

// GetDisplayState @ 1425e0eb0

EWindowDisplayState __thiscall FSlateAccessibleWindow::GetDisplayState(FSlateAccessibleWindow *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  char cVar3;
  atomic<int> aVar4;
  EWindowDisplayState EVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return Normal;
  }
  pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  EVar5 = Normal;
  pTVar6 = pTVar7;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_1425e0f2f:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    pTVar7 = pTVar6;
  }
  else {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1425e0f2f;
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) goto LAB_1425e0f5a;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    EVar5 = (*pcVar1)();
    return EVar5;
  }
LAB_1425e0f5a:
  if (((longlong *)pTVar8[0x59]._padding_ == (longlong *)0x0) ||
     (cVar3 = (**(code **)(*(longlong *)pTVar8[0x59]._padding_ + 0x70))(), cVar3 == '\0')) {
    if ((pTVar8 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar1 = (code *)swi(3);
      EVar5 = (*pcVar1)();
      return EVar5;
    }
    if (((longlong *)pTVar8[0x59]._padding_ != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*(longlong *)pTVar8[0x59]._padding_ + 0x78))(), cVar3 != '\0')) {
      EVar5 = Minimize;
    }
  }
  else {
    EVar5 = Maximize;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return EVar5;
}

// GetNativeWindow @ 1425e1740

TSharedPtr<FGenericWindow,1> * __thiscall
FSlateAccessibleWindow::GetNativeWindow
          (FSlateAccessibleWindow *this,TSharedPtr<FGenericWindow,1> *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TSharedPtr<FGenericWindow,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    __return_storage_ptr__->Object = (FGenericWindow *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    return __return_storage_ptr__;
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar5 = pTVar6;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar6->SharedReferenceCount;
    do {
      pTVar5 = pTVar7;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1425e17a1;
      LOCK();
      aVar3 = pTVar6->SharedReferenceCount;
      bVar8 = aVar2 == aVar3;
      if (bVar8) {
        pTVar6->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar8);
    pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar6;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1425e17c7;
  }
LAB_1425e17a1:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar6 = pTVar5;
  if (bVar8) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<FGenericWindow,1> *)(*pcVar1)();
    return pTVar4;
  }
LAB_1425e17c7:
  __return_storage_ptr__->Object = (FGenericWindow *)pTVar7[0x59]._padding_;
  pTVar7 = *(TReferenceControllerBase<1> **)&pTVar7[0x59].SharedReferenceCount;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return __return_storage_ptr__;
}

// GetUserFocusedWidget @ 1425e4310

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedPtr<IAccessibleWidget,1> * __thiscall
FSlateAccessibleWindow::GetUserFocusedWidget
          (FSlateAccessibleWindow *this,TSharedPtr<IAccessibleWidget,1> *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FSlateAccessibleMessageHandler *pFVar2;
  IAccessibleWidget *pIVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  FSlateApplicationBase *pFVar8;
  TSharedPtr<IAccessibleWidget,1> *pTVar9;
  IAccessibleWidget *pIVar10;
  IAccessibleWidget *pIVar11;
  TSharedPtr<FGenericAccessibleUser,1> local_38;
  IAccessibleWidget *local_20;
  
  pIVar11 = (IAccessibleWidget *)0x0;
  pFVar8 = FSlateApplicationBase::Get();
  pTVar1 = (pFVar8->AccessibleMessageHandler).SharedReferenceCount.ReferenceController;
  pFVar2 = (pFVar8->AccessibleMessageHandler).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FGenericAccessibleUserRegistry::GetUser
            ((FGenericAccessibleUserRegistry *)pFVar2->_padding_,&local_38,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (local_38.Object == (FGenericAccessibleUser *)0x0) {
    __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
    bVar6 = false;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    if ((local_38.Object == (FGenericAccessibleUser *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedPtr<IAccessibleWidget,1> *)(*pcVar4)();
      return pTVar9;
    }
    local_20 = pIVar11;
    if (((((local_38.Object)->FocusedAccessibleWidget).Object == (IAccessibleWidget *)0x0) ||
        (pTVar1 = ((local_38.Object)->FocusedAccessibleWidget).WeakReferenceCount.
                  ReferenceController, pTVar1 == (TReferenceControllerBase<1> *)0x0)) ||
       ((int)pTVar1->SharedReferenceCount < 1)) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      bVar6 = true;
      __return_storage_ptr__->Object = (IAccessibleWidget *)0x0;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pIVar3 = (IAccessibleWidget *)
               ((local_38.Object)->FocusedAccessibleWidget).WeakReferenceCount.ReferenceController;
      pIVar10 = pIVar3;
      if (pIVar3 != (IAccessibleWidget *)0x0) {
        iVar5 = *(int *)&pIVar3->field_0x8;
        do {
          pIVar10 = pIVar11;
          if (iVar5 == 0) goto LAB_1425e43f1;
          LOCK();
          iVar7 = *(int *)&pIVar3->field_0x8;
          bVar6 = iVar5 == iVar7;
          if (bVar6) {
            *(int *)&pIVar3->field_0x8 = iVar5 + 1;
            iVar7 = iVar5;
          }
          UNLOCK();
          iVar5 = iVar7;
        } while (!bVar6);
        pIVar10 = pIVar3;
        pIVar11 = ((local_38.Object)->FocusedAccessibleWidget).Object;
      }
LAB_1425e43f1:
      bVar6 = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      __return_storage_ptr__->Object = pIVar11;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
           (TReferenceControllerBase<1> *)pIVar10;
    }
  }
  if (bVar6) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetWidgetName @ 1425e4bd0

FString * __thiscall
FSlateAccessibleWindow::GetWidgetName(FSlateAccessibleWindow *this,FString *__return_storage_ptr__)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FString *pFVar4;
  FText *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  undefined1 local_res8 [8];
  FText local_18;
  
  if (((*(longlong *)&this->field_0x18 == 0) || (*(longlong *)&this->field_0x20 == 0)) ||
     (*(int *)(*(longlong *)&this->field_0x20 + 8) < 1)) {
    FSlateAccessibleWidget::GetWidgetName((FSlateAccessibleWidget *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  pTVar7 = *(TReferenceControllerBase<1> **)&this->field_0x20;
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar8;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1425e4c35;
      LOCK();
      aVar3 = pTVar7->SharedReferenceCount;
      bVar9 = aVar2 == aVar3;
      if (bVar9) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar9);
    pTVar8 = *(TReferenceControllerBase<1> **)&this->field_0x18;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar7;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) goto LAB_1425e4c5b;
  }
LAB_1425e4c35:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar7 = pTVar6;
  if (bVar9) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar1)();
    return pFVar4;
  }
LAB_1425e4c5b:
  pFVar5 = TAttribute<FText>::Get((TAttribute<FText> *)&pTVar8[0x37].SharedReferenceCount);
  local_18.TextData.Reference = (pFVar5->TextData).Reference;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res8);
  }
  local_18.Flags = pFVar5->Flags;
  pFVar4 = FText::ToString(&local_18);
  ::FString::FString(__return_storage_ptr__,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// IsModal @ 1425e96f0

bool __thiscall FSlateAccessibleWindow::IsModal(FSlateAccessibleWindow *this)

{
  byte bVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar7 = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1425e9747;
      LOCK();
      aVar5 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar5;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar9);
    pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) goto LAB_1425e976d;
  }
LAB_1425e9747:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pTVar8 = pTVar7;
  if (bVar9) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_1425e976d:
  bVar1 = pTVar6[0x3e].SharedReferenceCount.field_0x1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (bool)(bVar1 >> 6 & 1);
}

// SetDisplayState @ 1425fc3a0

void __thiscall
FSlateAccessibleWindow::SetDisplayState(FSlateAccessibleWindow *this,EWindowDisplayState param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  EWindowDisplayState EVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  
  if (*(longlong *)&this[-1].field_0x20 == 0) {
    return;
  }
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1) {
    return;
  }
  EVar3 = (**(code **)(*(longlong *)this + 0x28))();
  if (EVar3 == param_1) {
    return;
  }
  if (param_1 != Normal) {
    if (param_1 == Minimize) {
      pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
      pTVar5 = (TReferenceControllerBase<1> *)0x0;
      pTVar6 = pTVar7;
      if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_1425fc494:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        pTVar7 = pTVar6;
        if (bVar8) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else {
        aVar2 = pTVar7->SharedReferenceCount;
        do {
          pTVar6 = pTVar5;
          if (aVar2 == (atomic<int>)0x0) goto LAB_1425fc494;
          LOCK();
          aVar4 = pTVar7->SharedReferenceCount;
          bVar8 = aVar2 == aVar4;
          if (bVar8) {
            pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
            aVar4 = aVar2;
          }
          UNLOCK();
          aVar2 = aVar4;
        } while (!bVar8);
        pTVar5 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
        pTVar6 = pTVar7;
        if (pTVar5 == (TReferenceControllerBase<1> *)0x0) goto LAB_1425fc494;
      }
      if ((longlong *)pTVar5[0x59]._padding_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)pTVar5[0x59]._padding_ + 0x38))();
      }
      goto LAB_1425fc539;
    }
    if (param_1 != Maximize) {
      return;
    }
    pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
    pTVar5 = (TReferenceControllerBase<1> *)0x0;
    pTVar6 = pTVar7;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_1425fc421:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pTVar7 = pTVar6;
      if (bVar8) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      aVar2 = pTVar7->SharedReferenceCount;
      do {
        pTVar6 = pTVar5;
        if (aVar2 == (atomic<int>)0x0) goto LAB_1425fc421;
        LOCK();
        aVar4 = pTVar7->SharedReferenceCount;
        bVar8 = aVar2 == aVar4;
        if (bVar8) {
          pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar8);
      pTVar5 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
      pTVar6 = pTVar7;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) goto LAB_1425fc421;
    }
    if ((longlong *)pTVar5[0x59]._padding_ != (longlong *)0x0) {
      (**(code **)(*(longlong *)pTVar5[0x59]._padding_ + 0x40))();
    }
    goto LAB_1425fc539;
  }
  pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  pTVar6 = pTVar7;
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
LAB_1425fc501:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pTVar7 = pTVar6;
    if (bVar8) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    aVar2 = pTVar7->SharedReferenceCount;
    do {
      pTVar6 = pTVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_1425fc501;
      LOCK();
      aVar4 = pTVar7->SharedReferenceCount;
      bVar8 = aVar2 == aVar4;
      if (bVar8) {
        pTVar7->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar8);
    pTVar5 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
    pTVar6 = pTVar7;
    if (pTVar5 == (TReferenceControllerBase<1> *)0x0) goto LAB_1425fc501;
  }
  if ((longlong *)pTVar5[0x59]._padding_ != (longlong *)0x0) {
    (**(code **)(*(longlong *)pTVar5[0x59]._padding_ + 0x48))();
  }
LAB_1425fc539:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return;
}

// SupportsDisplayState @ 142600a80

bool __thiscall
FSlateAccessibleWindow::SupportsDisplayState
          (FSlateAccessibleWindow *this,EWindowDisplayState param_1)

{
  code *pcVar1;
  atomic<int> aVar2;
  undefined1 uVar3;
  atomic<int> aVar4;
  byte bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  if (param_1 == Normal) {
    return true;
  }
  if (param_1 != Minimize) {
    if (param_1 != Maximize) {
      return false;
    }
    pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pTVar7 = pTVar8;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142600af1:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pTVar8 = pTVar7;
      if (bVar9) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    else {
      aVar2 = pTVar8->SharedReferenceCount;
      do {
        pTVar7 = pTVar6;
        if (aVar2 == (atomic<int>)0x0) goto LAB_142600af1;
        LOCK();
        aVar4 = pTVar8->SharedReferenceCount;
        bVar9 = aVar2 == aVar4;
        if (bVar9) {
          pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
          aVar4 = aVar2;
        }
        UNLOCK();
        aVar2 = aVar4;
      } while (!bVar9);
      pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      pTVar7 = pTVar8;
      if (pTVar6 == (TReferenceControllerBase<1> *)0x0) goto LAB_142600af1;
    }
    bVar5 = (byte)pTVar6[0x3e].SharedReferenceCount.field_0x1 >> 4;
    goto LAB_142600b85;
  }
  pTVar8 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar6 = (TReferenceControllerBase<1> *)0x0;
  pTVar7 = pTVar8;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_142600b55:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pTVar8 = pTVar7;
    if (bVar9) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  else {
    aVar2 = pTVar8->SharedReferenceCount;
    do {
      pTVar7 = pTVar6;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142600b55;
      LOCK();
      aVar4 = pTVar8->SharedReferenceCount;
      bVar9 = aVar2 == aVar4;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar4 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar4;
    } while (!bVar9);
    pTVar6 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
    pTVar7 = pTVar8;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) goto LAB_142600b55;
  }
  bVar5 = (byte)pTVar6[0x3e].SharedReferenceCount.field_0x1 >> 3;
LAB_142600b85:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return (bool)(bVar5 & 1);
}

