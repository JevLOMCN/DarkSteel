// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetScrollToStartEvent_WrapperImpl @ 14b5824f0

void __cdecl UDS_ScrollBox::SetScrollToStartEvent_WrapperImpl(void *param_1,void *param_2)

{
  SWidget *this;
  
  this = *(SWidget **)((longlong)param_1 + 0xbd8);
  if (this == (SWidget *)0x0) {
    return;
  }
  this[2].AccessibleSummaryBehavior = this[2].AccessibleSummaryBehavior & 0xdf;
  this[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame = 0;
  SWidget::Invalidate(this,Layout);
  return;
}

// SetScrollToEndEvent_WrapperImpl @ 14b582500

void __cdecl UDS_ScrollBox::SetScrollToEndEvent_WrapperImpl(void *param_1,void *param_2)

{
  SWidget *this;
  
  this = *(SWidget **)((longlong)param_1 + 0xbd8);
  if (this == (SWidget *)0x0) {
    return;
  }
  this[2].AccessibleSummaryBehavior = this[2].AccessibleSummaryBehavior | 0x20;
  SWidget::Invalidate(this,Layout);
  return;
}

// SetEntryFocusEventField_WrapperImpl @ 14b582510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UDS_ScrollBox::SetEntryFocusEventField_WrapperImpl(void *param_1,void *param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar5 [16];
  
  fVar7 = *(float *)((longlong)param_2 + 4);
  if (0.0 <= fVar7) {
    iVar2 = (int)fVar7;
    fVar4 = fVar7;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
      auVar3._4_4_ = fVar7;
      auVar3._0_4_ = fVar7;
      auVar3._8_8_ = 0;
      uVar1 = movmskps(in_EAX,auVar3);
      fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    fVar4 = fVar7 - fVar4;
  }
  else {
    fVar7 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
    auVar6._4_4_ = _UNK_150651574;
    auVar6._0_4_ = fVar7;
    iVar2 = (int)fVar7;
    fVar4 = fVar7;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
      auVar6._8_4_ = _UNK_150651574;
      auVar6._12_4_ = _UNK_150651574;
      auVar5._8_8_ = auVar6._8_8_;
      auVar5._4_4_ = fVar7;
      auVar5._0_4_ = fVar7;
      uVar1 = movmskps(in_EAX,auVar5);
      fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    fVar4 = fVar4 - fVar7;
  }
  UScrollBox::SetScrollOffset
            (param_1,((float)*(int *)param_2 + fVar4) * (float)*(int *)((longlong)param_1 + 0xc1c));
  return;
}

// SetEntryBindingEventField_WrapperImpl @ 14b582520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_ScrollBox::SetEntryBindingEventField_WrapperImpl(void *param_1,void *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  UDS_UserWidget *pUVar9;
  UDS_LogManager *pUVar10;
  UWidget *pUVar11;
  FWeakObjectPtr FVar12;
  int iVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  UDS_UserObjectListItem *pUVar18;
  undefined1 auStackY_558 [32];
  ESlateVisibility aEStack_528 [2];
  bool bStack_526;
  bool bStack_525;
  uint uStack_524;
  uint uStack_520;
  uint uStack_51c;
  undefined1 auStack_518 [8];
  FWeakObjectPtr FStack_510;
  FWeakObjectPtr FStack_508;
  FWeakObjectPtr FStack_500;
  FWeakObjectPtr FStack_4f8;
  UDS_UserWidget *pUStack_4f0;
  UDS_UserWidget *pUStack_4e8;
  UDS_UserWidget *pUStack_4e0;
  UWidget *apUStack_4d8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_168;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  pUStack_4e8 = param_1;
  if (*(char *)((longlong)param_1 + 0xc08) == '\0') {
    iVar7 = UPanelWidget::GetChildrenCount(param_1);
    if (iVar7 == 0) {
      pUVar10 = UDS_LogManager::GetInst();
      if (pUVar10 != (UDS_LogManager *)0x0) {
        pUVar10 = UDS_LogManager::GetInst();
        TStack_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&TStack_168,"UDS_ScrollBox::OnEntryBindingEvent",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar10,1,Warning,TStack_168.Ptr,0x7f,L"ScrollBox\'s GetChildrenCount is Zero.");
        if ((void *)TStack_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)TStack_168._padding_);
        }
      }
    }
    else {
      uVar15 = 0;
      uVar16 = uVar15;
      if (0 < iVar7) {
        do {
          iVar13 = (int)uVar15;
          pUVar11 = UPanelWidget::GetChildAt(param_1,iVar13);
          if (pUVar11 != (UWidget *)0x0) {
            pUVar8 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
            iVar2 = (int)pUVar8->_padding_;
            if ((((iVar2 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar2 * 8)
                  == &pUVar8->_padding_)) && (-1 < iVar13)) &&
               (iVar13 < *(int *)((longlong)param_2 + 8))) {
              pUVar18 = *(UDS_UserObjectListItem **)(*(longlong *)param_2 + uVar16 * 8);
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              FStack_4f8.ObjectIndex = 0;
              FStack_4f8.ObjectSerialNumber = 0;
              apUStack_4d8[0] = pUVar11;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              FWeakObjectPtr::operator=(&FStack_4f8,(FObjectPtr)apUStack_4d8);
              UDS_UserObjectListItem::BindViewModels
                        (pUVar18,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FStack_4f8);
              param_1 = pUStack_4e8;
            }
          }
          uVar15 = (ulonglong)(iVar13 + 1);
          uVar16 = uVar16 + 1;
        } while ((longlong)uVar16 < (longlong)iVar7);
      }
    }
  }
  else {
    lVar3 = *(longlong *)((longlong)param_1 + 0xc10);
    if ((lVar3 != 0) &&
       (pUVar8 = Z_Construct_UClass_UDS_UserWidget_NoRegister(), pUVar8 != (UClass *)0x0)) {
      iVar7 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar7) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar7 * 8) !=
          &pUVar8->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (*(longlong *)((longlong)param_1 + 0xc10) != 0)) {
        iVar7 = UPanelWidget::GetChildrenCount(param_1);
        uVar1 = *(uint *)((longlong)param_2 + 8);
        uVar16 = (ulonglong)(int)uVar1;
        uVar17 = (uint)((float)iVar7 * __real_3f000000);
        uStack_524 = uVar1;
        uStack_51c = uVar17;
        if ((int)uVar17 < 1) {
          puVar14 = *(undefined8 **)param_2;
          pUStack_4f0 = (UDS_UserWidget *)(puVar14 + uVar16);
          while( true ) {
            pUVar9 = pUStack_4f0;
            uVar17 = (uint)uVar16;
            if (*(uint *)((longlong)param_2 + 8) != uVar1) {
              `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='
              ::__l2::<lambda_1>::operator()(auStack_518);
              uVar17 = uStack_524;
            }
            if ((UDS_UserWidget *)puVar14 == pUVar9) {
              return;
            }
            uStack_524 = uVar17 - 1;
            bStack_525 = uStack_524 == 0;
            pUVar9 = AddChildEntryWidget(param_1,&FLinearColor::Transparent,&bStack_525);
            if (pUVar9 == (UDS_UserWidget *)0x0) break;
            pUVar18 = (UDS_UserObjectListItem *)*puVar14;
            if (pUVar18 != (UDS_UserObjectListItem *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar9);
              }
              FStack_500.ObjectIndex = 0;
              FStack_500.ObjectSerialNumber = 0;
              pUStack_4e8 = pUVar9;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar9);
              }
              FWeakObjectPtr::operator=(&FStack_500,(FObjectPtr)&pUStack_4e8);
              UDS_UserObjectListItem::BindViewModels
                        (pUVar18,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FStack_500);
            }
            puVar14 = puVar14 + 1;
            uVar16 = (ulonglong)uStack_524;
          }
          pUVar10 = UDS_LogManager::GetInst();
          if (pUVar10 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar10 = UDS_LogManager::GetInst();
          TStack_3a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_3a8,"UDS_ScrollBox::OnEntryBindingEvent",0x22,Yes);
          UDS_LogManager::PrintLog(pUVar10,1,Warning,TStack_3a8.Ptr,0x6f,L"userWidget is nullptr.");
          if ((void *)TStack_3a8._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)TStack_3a8._padding_);
          return;
        }
        uVar5 = uVar17;
        if ((int)uVar17 < (int)uVar1) {
          uVar5 = uVar1;
        }
        uStack_520 = 0;
        if ((int)uVar5 < 1) {
          return;
        }
        do {
          uVar1 = uStack_520;
          if ((int)uStack_520 < (int)uVar17) {
            if ((int)uStack_520 < (int)uVar16) {
              if (((int)uStack_520 < 0) || (*(int *)((longlong)param_2 + 8) <= (int)uStack_520))
              goto LAB_14bcb473d;
              aEStack_528[0] = SelfHitTestInvisible;
              pUVar9 = SetEntryVisibility(param_1,(int *)&uStack_520,aEStack_528);
              if (pUVar9 != (UDS_UserWidget *)0x0) {
                uVar17 = 0;
                if ((int)uVar1 < *(int *)((longlong)param_2 + 8)) {
                  uVar17 = ~uVar1 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pUVar18 = *(UDS_UserObjectListItem **)
                           (*(longlong *)param_2 + (longlong)(int)uVar1 * 8);
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar9);
                }
                FStack_510.ObjectIndex = 0;
                FStack_510.ObjectSerialNumber = 0;
                pUStack_4e0 = pUVar9;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar9);
                }
                FWeakObjectPtr::operator=(&FStack_510,(FObjectPtr)&pUStack_4e0);
                FVar12 = FStack_510;
                goto LAB_14bcb472b;
              }
            }
            else {
              aEStack_528[1] = 1;
              SetEntryVisibility(param_1,(int *)&uStack_520,aEStack_528 + 1);
            }
LAB_14bcb4733:
            uVar16 = (ulonglong)uStack_524;
            uVar17 = uStack_51c;
          }
          else if ((((int)uStack_520 < (int)uVar16) && (-1 < (int)uStack_520)) &&
                  ((int)uStack_520 < *(int *)((longlong)param_2 + 8))) {
            bStack_526 = uVar5 - 1 == uStack_520;
            pUVar9 = AddChildEntryWidget(param_1,&FLinearColor::Transparent,&bStack_526);
            if (pUVar9 == (UDS_UserWidget *)0x0) {
              pUVar10 = UDS_LogManager::GetInst();
              if (pUVar10 == (UDS_LogManager *)0x0) {
                return;
              }
              pUVar10 = UDS_LogManager::GetInst();
              TStack_4c8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&TStack_4c8,"UDS_ScrollBox::OnEntryBindingEvent",0x22,Yes);
              UDS_LogManager::PrintLog
                        (pUVar10,1,Warning,TStack_4c8.Ptr,0x5d,L"userWidget is nullptr.");
              if ((void *)TStack_4c8._padding_ == (void *)0x0) {
                return;
              }
              FMemory::Free((void *)TStack_4c8._padding_);
              return;
            }
            uVar17 = 0;
            if ((int)uVar1 < *(int *)((longlong)param_2 + 8)) {
              uVar17 = ~uVar1 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar18 = *(UDS_UserObjectListItem **)(*(longlong *)param_2 + (longlong)(int)uVar1 * 8);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            FStack_508.ObjectIndex = 0;
            FStack_508.ObjectSerialNumber = 0;
            pUStack_4f0 = pUVar9;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
            FWeakObjectPtr::operator=(&FStack_508,(FObjectPtr)&pUStack_4f0);
            FVar12 = FStack_508;
LAB_14bcb472b:
            UDS_UserObjectListItem::BindViewModels
                      (pUVar18,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FVar12);
            goto LAB_14bcb4733;
          }
LAB_14bcb473d:
          uStack_520 = uVar1 + 1;
          if ((int)uVar5 <= (int)uStack_520) {
            return;
          }
        } while( true );
      }
    }
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 != (UDS_LogManager *)0x0) {
      pUVar10 = UDS_LogManager::GetInst();
      TStack_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_288,"UDS_ScrollBox::OnEntryBindingEvent",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar10,1,Warning,TStack_288.Ptr,0x38,L"EntryWidgetClass is nullptr")
      ;
      if ((void *)TStack_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_288._padding_);
      }
    }
  }
  return;
}

// StaticClass @ 14b582530

UClass * __cdecl UDS_ScrollBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ScrollBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ScrollBox",
               &Z_Registration_Info_UClass_UDS_ScrollBox.InnerSingleton,
               StaticRegisterNativesUDS_ScrollBox,0xc20,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ScrollBox>,
               InternalVTableHelperCtorCaller<UDS_ScrollBox>,local_res8,UScrollBox::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ScrollBox.InnerSingleton;
}

// UDS_ScrollBox @ 14b587580

UDS_ScrollBox * __thiscall UDS_ScrollBox::UDS_ScrollBox(UDS_ScrollBox *this,FVTableHelper *param_1)

{
  UScrollBox::UScrollBox((UScrollBox *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EntryFocusEventField).FocusIndex = 0;
  (this->EntryFocusEventField).Offset = 0.0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->EntryWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->ScrollToStartEvent = false;
  this->ScrollToEndEvent = false;
  return this;
}

// ~UDS_ScrollBox @ 14b587c50

void __thiscall UDS_ScrollBox::~UDS_ScrollBox(UDS_ScrollBox *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UScrollBox::~UScrollBox((UScrollBox *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b588c40

IClassDescriptor * __thiscall UDS_ScrollBox::GetFieldNotificationDescriptor(UDS_ScrollBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_ScrollBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b589670

UClass * __cdecl UDS_ScrollBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ScrollBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ScrollBox",
               &Z_Registration_Info_UClass_UDS_ScrollBox.InnerSingleton,
               StaticRegisterNativesUDS_ScrollBox,0xc20,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ScrollBox>,
               InternalVTableHelperCtorCaller<UDS_ScrollBox>,local_res8,UScrollBox::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ScrollBox.InnerSingleton;
}

// StaticRegisterNativesUDS_ScrollBox @ 14b589c20

void __cdecl UDS_ScrollBox::StaticRegisterNativesUDS_ScrollBox(void)

{
  return;
}

// UDS_ScrollBox @ 14bc84170

UDS_ScrollBox * __thiscall
UDS_ScrollBox::UDS_ScrollBox(UDS_ScrollBox *this,FObjectInitializer *param_1)

{
  UScrollBox::UScrollBox((UScrollBox *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EntryFocusEventField).FocusIndex = 0;
  (this->EntryFocusEventField).Offset = 0.0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->EntryWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  this->ScrollToStartEvent = false;
  this->ScrollToEndEvent = false;
  return this;
}

// AddChildEntryWidget @ 14bc87060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDS_UserWidget * __thiscall
UDS_ScrollBox::AddChildEntryWidget(UDS_ScrollBox *this,FLinearColor *param_1,bool *param_2)

{
  EOrientation EVar1;
  UDS_UserWidget *pUVar2;
  UClass *pUVar3;
  UBorder *this_00;
  UWidget *pUVar4;
  longlong *plVar5;
  undefined1 auStack_238 [32];
  FName local_218;
  FLinearColor_u_0 local_208 [2];
  undefined1 local_1e8 [32];
  float local_1c8;
  float local_1c4;
  FSharedReferencer<1> local_148;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  pUVar3 = (this->EntryWidgetClass).Class.field0_0x0.DebugPtr;
  local_208[0]._0_8_ = pUVar3;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar2 = CreateWidget<UDS_UserWidget,UDS_ScrollBox_*>
                     (this,(TSubclassOf<UUserWidget>)local_208,local_218);
  UPanelWidget::AddChild((UPanelWidget *)this,(UWidget *)pUVar2);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UBorder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_138,pUVar3);
  local_138._8_8_ = this;
  this_00 = (UBorder *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138)
  ;
  if (local_138._64_8_ != 0) {
    plVar5 = (longlong *)(local_138 + 0x50);
    if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_138._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  local_208[0] = FLinearColor::Transparent.field0_0x0;
  UBorder::SetBrushColor(this_00,(FLinearColor *)&local_208[0]._s_0);
  (**(code **)(*(longlong *)this_00 + 0x2c0))(this_00);
  UBorder::SetHorizontalAlignment(this_00,HAlign_Fill);
  UBorder::SetVerticalAlignment(this_00,VAlign_Fill);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_CommonLazyImage_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar3);
  local_b8._8_8_ = this;
  pUVar4 = (UWidget *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar5 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  FSlateBrush::FSlateBrush((FSlateBrush *)local_1e8);
  local_1e8._8_8_ = *(undefined8 *)&param_1->field0_0x0;
  local_1e8._16_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  local_1e8._25_2_ = local_208[1]._1_2_;
  local_1e8[0x1b] = local_208[1]._3_1_;
  local_1e8[0x18] = UseColor_Specified;
  EVar1 = UScrollBox::GetOrientation((UScrollBox *)this);
  if (EVar1 == Orient_Horizontal) {
    if (*param_2 == true) {
      local_1c4 = 1.0;
      local_1c8 = 0.0;
    }
    else {
      local_1c8 = this->Spacing;
      local_1c4 = 1.0;
    }
  }
  else if (EVar1 == Orient_Vertical) {
    if (*param_2 == true) {
      local_1c4 = 0.0;
    }
    else {
      local_1c4 = this->Spacing;
    }
    local_1c8 = 1.0;
  }
  (**(code **)(pUVar4->_padding_ + 0x310))(pUVar4,local_1e8);
  UPanelWidget::AddChild((UPanelWidget *)this_00,pUVar4);
  UPanelWidget::AddChild((UPanelWidget *)this,(UWidget *)this_00);
  local_1e8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.ReferenceController);
  return pUVar2;
}

// BeginDestroy @ 14bc87df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ScrollBox::BeginDestroy(UDS_ScrollBox *this)

{
  UWorld *pUVar1;
  UGameViewportSubsystem *this_00;
  
  if ((this->_padding_ & 0x2000) != 0) {
    pUVar1 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    this_00 = UGameViewportSubsystem::Get(pUVar1);
    if (this_00 != (UGameViewportSubsystem *)0x0) {
      UGameViewportSubsystem::RemoveWidget(this_00,(UWidget *)this);
    }
  }
  UObject::BeginDestroy((UObject *)this);
                    /* WARNING: Could not recover jumptable at 0x0001469a3148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2b0))(this,0);
  return;
}

// GetEntryCount @ 14bc9f930

int __thiscall UDS_ScrollBox::GetEntryCount(UDS_ScrollBox *this)

{
  int iVar1;
  
  iVar1 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  return (int)((float)iVar1 * __real_3f000000);
}

// OnEntryBindingEvent @ 14bcb4450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_ScrollBox::OnEntryBindingEvent(UDS_ScrollBox *this,FDS_EntryBindingEventField *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  UDS_UserWidget *pUVar8;
  UDS_LogManager *pUVar9;
  UDS_ScrollBox *pUVar10;
  UWidget *pUVar11;
  UClass *pUVar12;
  FWeakObjectPtr FVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  UDS_UserObjectListItem *pUVar19;
  undefined1 auStackY_558 [32];
  ESlateVisibility local_528 [2];
  bool local_526;
  bool local_525;
  uint local_524;
  uint local_520;
  uint local_51c;
  undefined1 local_518 [8];
  FWeakObjectPtr local_510;
  FWeakObjectPtr local_508;
  FWeakObjectPtr local_500;
  FWeakObjectPtr local_4f8;
  UDS_UserWidget *local_4f0;
  UDS_ScrollBox *local_4e8;
  UDS_UserWidget *local_4e0;
  UWidget *local_4d8 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  local_4e8 = this;
  if (this->bIsCreateEntry == false) {
    iVar6 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
    if (iVar6 == 0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 != (UDS_LogManager *)0x0) {
        pUVar9 = UDS_LogManager::GetInst();
        local_168._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_168,"UDS_ScrollBox::OnEntryBindingEvent",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_168.Ptr,0x7f,L"ScrollBox\'s GetChildrenCount is Zero.");
        if ((void *)local_168._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_168._padding_);
        }
      }
    }
    else {
      uVar16 = 0;
      uVar17 = uVar16;
      if (0 < iVar6) {
        do {
          iVar14 = (int)uVar16;
          pUVar11 = UPanelWidget::GetChildAt((UPanelWidget *)this,iVar14);
          if (pUVar11 != (UWidget *)0x0) {
            pUVar12 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
            iVar2 = (int)pUVar12->_padding_;
            if ((((iVar2 <= *(int *)(pUVar11->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar2 * 8)
                  == &pUVar12->_padding_)) && (-1 < iVar14)) &&
               (iVar14 < (param_1->UserObjectList).ArrayNum)) {
              pUVar19 = *(UDS_UserObjectListItem **)
                         ((param_1->UserObjectList).AllocatorInstance.Data + uVar17 * 8);
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              local_4f8.ObjectIndex = 0;
              local_4f8.ObjectSerialNumber = 0;
              local_4d8[0] = pUVar11;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              FWeakObjectPtr::operator=(&local_4f8,(FObjectPtr)local_4d8);
              UDS_UserObjectListItem::BindViewModels
                        (pUVar19,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_4f8);
              this = local_4e8;
            }
          }
          uVar16 = (ulonglong)(iVar14 + 1);
          uVar17 = uVar17 + 1;
        } while ((longlong)uVar17 < (longlong)iVar6);
      }
    }
  }
  else {
    pUVar12 = (this->EntryWidgetClass).Class.field0_0x0.DebugPtr;
    if ((pUVar12 != (UClass *)0x0) &&
       (pUVar7 = Z_Construct_UClass_UDS_UserWidget_NoRegister(), pUVar7 != (UClass *)0x0)) {
      iVar6 = (int)pUVar7->_padding_;
      if (((int)pUVar12->_padding_ < iVar6) ||
         ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar6 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && ((this->EntryWidgetClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
        iVar6 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
        uVar1 = (param_1->UserObjectList).ArrayNum;
        uVar17 = (ulonglong)(int)uVar1;
        uVar18 = (uint)((float)iVar6 * __real_3f000000);
        local_524 = uVar1;
        local_51c = uVar18;
        if ((int)uVar18 < 1) {
          pFVar15 = (param_1->UserObjectList).AllocatorInstance.Data;
          local_4f0 = (UDS_UserWidget *)(pFVar15 + uVar17 * 8);
          while( true ) {
            pUVar8 = local_4f0;
            uVar18 = (uint)uVar17;
            if ((param_1->UserObjectList).ArrayNum != uVar1) {
              `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='
              ::__l2::<lambda_1>::operator()(local_518);
              uVar18 = local_524;
            }
            if ((UDS_UserWidget *)pFVar15 == pUVar8) {
              return;
            }
            local_524 = uVar18 - 1;
            local_525 = local_524 == 0;
            pUVar10 = (UDS_ScrollBox *)
                      AddChildEntryWidget(this,&FLinearColor::Transparent,&local_525);
            if (pUVar10 == (UDS_ScrollBox *)0x0) break;
            pUVar19 = *(UDS_UserObjectListItem **)pFVar15;
            if (pUVar19 != (UDS_UserObjectListItem *)0x0) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar10);
              }
              local_500.ObjectIndex = 0;
              local_500.ObjectSerialNumber = 0;
              local_4e8 = pUVar10;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar10);
              }
              FWeakObjectPtr::operator=(&local_500,(FObjectPtr)&local_4e8);
              UDS_UserObjectListItem::BindViewModels
                        (pUVar19,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_500);
            }
            pFVar15 = pFVar15 + 8;
            uVar17 = (ulonglong)local_524;
          }
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar9 = UDS_LogManager::GetInst();
          local_3a8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3a8,"UDS_ScrollBox::OnEntryBindingEvent",0x22,Yes);
          UDS_LogManager::PrintLog(pUVar9,1,Warning,local_3a8.Ptr,0x6f,L"userWidget is nullptr.");
          if ((void *)local_3a8._padding_ == (void *)0x0) {
            return;
          }
          FMemory::Free((void *)local_3a8._padding_);
          return;
        }
        uVar4 = uVar18;
        if ((int)uVar18 < (int)uVar1) {
          uVar4 = uVar1;
        }
        local_520 = 0;
        if ((int)uVar4 < 1) {
          return;
        }
        do {
          uVar1 = local_520;
          if ((int)local_520 < (int)uVar18) {
            if ((int)local_520 < (int)uVar17) {
              if (((int)local_520 < 0) || ((param_1->UserObjectList).ArrayNum <= (int)local_520))
              goto LAB_14bcb473d;
              local_528[0] = SelfHitTestInvisible;
              pUVar8 = SetEntryVisibility(this,(int *)&local_520,local_528);
              if (pUVar8 != (UDS_UserWidget *)0x0) {
                uVar18 = 0;
                if ((int)uVar1 < (param_1->UserObjectList).ArrayNum) {
                  uVar18 = ~uVar1 >> 0x1f;
                }
                if ((uVar18 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pUVar19 = *(UDS_UserObjectListItem **)
                           ((param_1->UserObjectList).AllocatorInstance.Data +
                           (longlong)(int)uVar1 * 8);
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar8);
                }
                local_510.ObjectIndex = 0;
                local_510.ObjectSerialNumber = 0;
                local_4e0 = pUVar8;
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar8);
                }
                FWeakObjectPtr::operator=(&local_510,(FObjectPtr)&local_4e0);
                FVar13 = local_510;
                goto LAB_14bcb472b;
              }
            }
            else {
              local_528[1] = 1;
              SetEntryVisibility(this,(int *)&local_520,local_528 + 1);
            }
LAB_14bcb4733:
            uVar17 = (ulonglong)local_524;
            uVar18 = local_51c;
          }
          else if ((((int)local_520 < (int)uVar17) && (-1 < (int)local_520)) &&
                  ((int)local_520 < (param_1->UserObjectList).ArrayNum)) {
            local_526 = uVar4 - 1 == local_520;
            pUVar8 = AddChildEntryWidget(this,&FLinearColor::Transparent,&local_526);
            if (pUVar8 == (UDS_UserWidget *)0x0) {
              pUVar9 = UDS_LogManager::GetInst();
              if (pUVar9 == (UDS_LogManager *)0x0) {
                return;
              }
              pUVar9 = UDS_LogManager::GetInst();
              local_4c8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_4c8,"UDS_ScrollBox::OnEntryBindingEvent",0x22,Yes);
              UDS_LogManager::PrintLog
                        (pUVar9,1,Warning,local_4c8.Ptr,0x5d,L"userWidget is nullptr.");
              if ((void *)local_4c8._padding_ == (void *)0x0) {
                return;
              }
              FMemory::Free((void *)local_4c8._padding_);
              return;
            }
            uVar18 = 0;
            if ((int)uVar1 < (param_1->UserObjectList).ArrayNum) {
              uVar18 = ~uVar1 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pUVar19 = *(UDS_UserObjectListItem **)
                       ((param_1->UserObjectList).AllocatorInstance.Data + (longlong)(int)uVar1 * 8)
            ;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            local_508.ObjectIndex = 0;
            local_508.ObjectSerialNumber = 0;
            local_4f0 = pUVar8;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar8);
            }
            FWeakObjectPtr::operator=(&local_508,(FObjectPtr)&local_4f0);
            FVar13 = local_508;
LAB_14bcb472b:
            UDS_UserObjectListItem::BindViewModels
                      (pUVar19,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FVar13);
            goto LAB_14bcb4733;
          }
LAB_14bcb473d:
          local_520 = uVar1 + 1;
          if ((int)uVar4 <= (int)local_520) {
            return;
          }
        } while( true );
      }
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 != (UDS_LogManager *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      local_288._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_288,"UDS_ScrollBox::OnEntryBindingEvent",0x22,Yes);
      UDS_LogManager::PrintLog(pUVar9,1,Warning,local_288.Ptr,0x38,L"EntryWidgetClass is nullptr");
      if ((void *)local_288._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_288._padding_);
      }
    }
  }
  return;
}

// OnEntryFocusEvent @ 14bcb4bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UDS_ScrollBox::OnEntryFocusEvent(UDS_ScrollBox *this,FDS_EntryFocusEventField *param_1)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar6 [16];
  float fVar7;
  undefined1 auVar5 [16];
  
  fVar7 = param_1->Offset;
  if (0.0 <= fVar7) {
    iVar2 = (int)fVar7;
    fVar4 = fVar7;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
      auVar3._4_4_ = fVar7;
      auVar3._0_4_ = fVar7;
      auVar3._8_8_ = 0;
      uVar1 = movmskps(in_EAX,auVar3);
      fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    fVar4 = fVar7 - fVar4;
  }
  else {
    fVar7 = (float)((uint)fVar7 ^ __xmm_80000000800000008000000080000000);
    auVar6._4_4_ = _UNK_150651574;
    auVar6._0_4_ = fVar7;
    iVar2 = (int)fVar7;
    fVar4 = fVar7;
    if ((iVar2 != -0x80000000) && ((float)iVar2 != fVar7)) {
      auVar6._8_4_ = _UNK_150651574;
      auVar6._12_4_ = _UNK_150651574;
      auVar5._8_8_ = auVar6._8_8_;
      auVar5._4_4_ = fVar7;
      auVar5._0_4_ = fVar7;
      uVar1 = movmskps(in_EAX,auVar5);
      fVar4 = (float)(int)(iVar2 - (uVar1 & 1));
    }
    fVar4 = fVar4 - fVar7;
  }
  UScrollBox::SetScrollOffset
            ((UScrollBox *)this,((float)param_1->FocusIndex + fVar4) * (float)this->ContentSize);
  return;
}

// ReleaseSlateResources @ 14bcc3c20

void __thiscall UDS_ScrollBox::ReleaseSlateResources(UDS_ScrollBox *this,bool param_1)

{
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &uStack_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// RemoveChildEntryWidget @ 14bcc3db0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ScrollBox::RemoveChildEntryWidget(UDS_ScrollBox *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UWidget *pUVar4;
  UWidget *pUVar5;
  
  iVar3 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (iVar3 < 2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6834542532836196579>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_ScrollBox.cpp"
                       ,0xe3,"false");
    if (!bVar2) {
      return;
    }
  }
  else {
    iVar3 = *param_1;
    pUVar4 = UPanelWidget::GetChildAt((UPanelWidget *)this,iVar3 * 2);
    pUVar5 = UPanelWidget::GetChildAt((UPanelWidget *)this,iVar3 * 2 + 1);
    if ((pUVar4 != (UWidget *)0x0) && (pUVar5 != (UWidget *)0x0)) {
      UPanelWidget::RemoveChild((UPanelWidget *)this,pUVar4);
      UPanelWidget::RemoveChild((UPanelWidget *)this,pUVar5);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6834542532836196596>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_ScrollBox.cpp"
                       ,0xf4,"false");
    if (!bVar2) {
      return;
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// SetEntryVisibility @ 14bcc6260

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_UserWidget * __thiscall
UDS_ScrollBox::SetEntryVisibility(UDS_ScrollBox *this,int *param_1,ESlateVisibility *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDS_UserWidget *pUVar4;
  UWidget *pUVar5;
  UClass *pUVar6;
  
  iVar3 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (*param_1 < (int)((float)iVar3 * __real_3f000000)) {
    iVar3 = *param_1 * 2;
    pUVar4 = (UDS_UserWidget *)UPanelWidget::GetChildAt((UPanelWidget *)this,iVar3);
    pUVar5 = UPanelWidget::GetChildAt((UPanelWidget *)this,iVar3 + 1);
    if (pUVar4 != (UDS_UserWidget *)0x0) {
      pUVar6 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if ((iVar3 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar6->_padding_)) {
        (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,*param_2);
        if (pUVar5 == (UWidget *)0x0) {
          return pUVar4;
        }
        (**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5,*param_2);
        return pUVar4;
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6834542532836196605>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_ScrollBox.cpp"
                       ,0xfd,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar4 = (UDS_UserWidget *)(*pcVar1)();
      return pUVar4;
    }
  }
  return (UDS_UserWidget *)0x0;
}

// SetScrollToEndEvent @ 14bcc86c0

void __thiscall
UDS_ScrollBox::SetScrollToEndEvent(UDS_ScrollBox *this,FDS_WidgetEventField *param_1)

{
  SWidget *this_00;
  
  this_00 = (SWidget *)this->_padding_;
  if (this_00 == (SWidget *)0x0) {
    return;
  }
  this_00[2].AccessibleSummaryBehavior = this_00[2].AccessibleSummaryBehavior | 0x20;
  SWidget::Invalidate(this_00,Layout);
  return;
}

// SetScrollToStartEvent @ 14bcc86d0

void __thiscall
UDS_ScrollBox::SetScrollToStartEvent(UDS_ScrollBox *this,FDS_WidgetEventField *param_1)

{
  SWidget *this_00;
  
  this_00 = (SWidget *)this->_padding_;
  if (this_00 == (SWidget *)0x0) {
    return;
  }
  this_00[2].AccessibleSummaryBehavior = this_00[2].AccessibleSummaryBehavior & 0xdf;
  this_00[1].PersistentState.InitialClipState.TypedValue.Debugging_StateIndexFromFrame = 0;
  SWidget::Invalidate(this_00,Layout);
  return;
}

// SetSpacing @ 14bcc8970

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ScrollBox::SetSpacing(UDS_ScrollBox *this,UPanelSlot *param_1)

{
  int iVar1;
  EOrientation EVar2;
  UClass *pUVar3;
  FMargin local_18;
  
  if (param_1 != (UPanelSlot *)0x0) {
    pUVar3 = Z_Construct_UClass_UScrollBoxSlot_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      EVar2 = UScrollBox::GetOrientation((UScrollBox *)this);
      if (EVar2 == Orient_Horizontal) {
        local_18.Left = this->Spacing;
        local_18.Top = 0.0;
      }
      else {
        if (EVar2 != Orient_Vertical) {
          return;
        }
        local_18.Top = this->Spacing;
        local_18.Left = 0.0;
      }
      local_18.Right = local_18.Left;
      local_18.Bottom = local_18.Top;
      UScrollBoxSlot::SetPadding((UScrollBoxSlot *)param_1,&local_18);
    }
  }
  return;
}

// SynchronizeProperties @ 14bccbb60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_ScrollBox::SynchronizeProperties(UDS_ScrollBox *this)

{
  SScrollBox *pSVar1;
  code *pcVar2;
  FDeprecateVector2DParameter FVar3;
  bool bVar4;
  EVisibility EVar5;
  undefined7 extraout_var;
  undefined1 auStackX_8 [8];
  float fStackX_10;
  float fStackX_14;
  FKey FStack_28;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((SScrollBox *)this->_padding_ == (SScrollBox *)0x0) {
    return;
  }
  SScrollBox::SetScrollOffset((SScrollBox *)this->_padding_,*(float *)&this->_padding_);
  if (this->_padding_ == 0) {
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
  SScrollBox::SetOrientation((SScrollBox *)this->_padding_,(uint)(byte)this->_padding_);
  if (this->_padding_ == 0) {
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
  pSVar1 = (SScrollBox *)this->_padding_;
  EVar5 = UWidget::ConvertSerializedVisibilityToRuntime((ESlateVisibility)auStackX_8);
  SScrollBox::SetScrollBarVisibility
            (pSVar1,(EVisibility)
                    ((TEnumAsByte<EVisibility::Private> *)CONCAT71(extraout_var,EVar5.Value.Value))
                    ->Value);
  if (this->_padding_ == 0) {
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
  fStackX_10 = (float)(double)this->_padding_;
  fStackX_14 = (float)(double)this->_padding_;
  FVar3._4_4_ = fStackX_14;
  FVar3._0_4_ = fStackX_10;
  SScrollBox::SetScrollBarThickness((SScrollBox *)this->_padding_,FVar3);
  if (this->_padding_ == 0) {
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
  SScrollBox::SetScrollBarPadding((SScrollBox *)this->_padding_,(FMargin *)&this->_padding_);
  if (this->_padding_ == 0) {
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
  SScrollBox::SetScrollBarAlwaysVisible((SScrollBox *)this->_padding_,SUB81(this->_padding_,0));
  if (this->_padding_ == 0) {
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
  SScrollBox::SetScrollBarTrackAlwaysVisible
            ((SScrollBox *)this->_padding_,*(bool *)((longlong)&this->_padding_ + 1));
  if (this->_padding_ == 0) {
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
  SScrollBox::SetAllowOverscroll
            ((SScrollBox *)this->_padding_,*(char *)((longlong)&this->_padding_ + 2) == '\0');
  if (this->_padding_ == 0) {
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
  SScrollBox::SetScrollBarRightClickDragAllowed
            ((SScrollBox *)this->_padding_,*(bool *)((longlong)&this->_padding_ + 5));
  if (this->_padding_ == 0) {
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
  SScrollBox::SetConsumeMouseWheel
            ((SScrollBox *)this->_padding_,*(EConsumeMouseWheel *)((longlong)&this->_padding_ + 2));
  if (this->_padding_ == 0) {
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
  FStack_28.KeyName = (FName)this->_padding_;
  pSVar1 = (SScrollBox *)this->_padding_;
  FStack_28.KeyDetails.Object = (FKeyDetails *)this->_padding_;
  FStack_28.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)this->_padding_;
  if (FStack_28.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(FStack_28.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         + 1);
    UNLOCK();
  }
  SScrollBox::SetAnalogMouseWheelKey(pSVar1,&FStack_28);
  if (this->_padding_ == 0) {
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
  SScrollBox::SetIsFocusable((SScrollBox *)this->_padding_,SUB81(this->_padding_,0));
  if (this->_padding_ == 0) {
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
  SScrollBox::SetAnimateWheelScrolling
            ((SScrollBox *)this->_padding_,*(bool *)((longlong)&this->_padding_ + 5));
  if (this->_padding_ == 0) {
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
  SScrollBox::SetScrollingAnimationInterpolationSpeed
            ((SScrollBox *)this->_padding_,*(float *)&this->_padding_);
  if (this->_padding_ == 0) {
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
  SScrollBox::SetWheelScrollMultiplier((SScrollBox *)this->_padding_,*(float *)&this->_padding_);
  if (this->_padding_ == 0) {
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
  SScrollBox::SetIsTouchScrollingEnabled
            ((SScrollBox *)this->_padding_,*(bool *)((longlong)&this->_padding_ + 4));
  if (this->_padding_ == 0) {
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
  *(undefined1 *)(this->_padding_ + 0x45d) = *(undefined1 *)((longlong)&this->_padding_ + 5);
  if (this->_padding_ == 0) {
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
  SScrollBox::SetStyle((SScrollBox *)this->_padding_,(FScrollBoxStyle *)&this->_padding_);
  if (this->_padding_ == 0) {
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
  SScrollBox::InvalidateStyle((SScrollBox *)this->_padding_);
  if (this->_padding_ == 0) {
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
  SScrollBox::SetScrollBarStyle((SScrollBox *)this->_padding_,(FScrollBarStyle *)&this->_padding_);
  if (this->_padding_ == 0) {
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
  SScrollBox::InvalidateScrollBarStyle((SScrollBox *)this->_padding_);
  return;
}

