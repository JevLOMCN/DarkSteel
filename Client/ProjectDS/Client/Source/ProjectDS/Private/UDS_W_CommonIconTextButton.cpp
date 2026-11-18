// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetButtonDataID_WrapperImpl @ 14b77c0f0

void __cdecl UDS_W_CommonIconTextButton::SetButtonDataID_WrapperImpl(void *param_1,void *param_2)

{
  if (0 < *(longlong *)param_2) {
    if (*(UDS_CommonLazyImage **)((longlong)param_1 + 0x12e0) != (UDS_CommonLazyImage *)0x0) {
      UDS_CommonLazyImage::SetButtonTableID
                (*(UDS_CommonLazyImage **)((longlong)param_1 + 0x12e0),param_2);
    }
    if (*(UDS_CommonLazyImage **)((longlong)param_1 + 0x12e8) != (UDS_CommonLazyImage *)0x0) {
      UDS_CommonLazyImage::SetButtonTableID
                (*(UDS_CommonLazyImage **)((longlong)param_1 + 0x12e8),param_2);
    }
    if (*(UDS_CommonRichTextBlock **)((longlong)param_1 + 0x1328) != (UDS_CommonRichTextBlock *)0x0)
    {
      UDS_CommonRichTextBlock::SetButtonTableID
                (*(UDS_CommonRichTextBlock **)((longlong)param_1 + 0x1328),param_2);
    }
  }
  return;
}

// SetIconVisibility_WrapperImpl @ 14b77c100

void __cdecl UDS_W_CommonIconTextButton::SetIconVisibility_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x1310) = *(undefined1 *)param_2;
  plVar1 = *(longlong **)((longlong)param_1 + 0x12e8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd1fceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c0))(plVar1,*(undefined1 *)param_2);
    return;
  }
  return;
}

// SetTextVisibility_WrapperImpl @ 14b77c110

void __cdecl UDS_W_CommonIconTextButton::SetTextVisibility_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  
  *(undefined1 *)((longlong)param_1 + 0x1311) = *(undefined1 *)param_2;
  plVar1 = *(longlong **)((longlong)param_1 + 0x1328);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd229bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2c0))(plVar1,*(undefined1 *)param_2);
    return;
  }
  return;
}

// SetDSText_WrapperImpl @ 14b77c120

void __cdecl UDS_W_CommonIconTextButton::SetDSText_WrapperImpl(void *param_1,void *param_2)

{
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x1330),param_2);
  if (*(UDS_CommonRichTextBlock **)((longlong)param_1 + 0x1328) != (UDS_CommonRichTextBlock *)0x0) {
    UDS_CommonRichTextBlock::SetDSText
              (*(UDS_CommonRichTextBlock **)((longlong)param_1 + 0x1328),
               (FDS_Text *)((longlong)param_1 + 0x1330));
  }
  return;
}

// SetText_WrapperImpl @ 14b77c130

void __cdecl UDS_W_CommonIconTextButton::SetText_WrapperImpl(void *param_1,void *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FText *pFVar3;
  FText FStack_18;
  
  ::FString::operator=((FString *)((longlong)param_1 + 0x1380),param_2);
  plVar1 = *(longlong **)((longlong)param_1 + 0x1328);
  if (plVar1 != (longlong *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x358);
    pFVar3 = FText::FromString(&FStack_18,(FString *)((longlong)param_1 + 0x1380));
    (*pcVar2)(plVar1,pFVar3);
    if (FStack_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// StaticClass @ 14b77c140

UClass * __cdecl UDS_W_CommonIconTextButton::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonIconTextButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonIconTextButton",
               &Z_Registration_Info_UClass_UDS_W_CommonIconTextButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonIconTextButton,0x1390,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_CommonIconTextButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonIconTextButton>,local_res8,
               UDS_W_CommonButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonIconTextButton.InnerSingleton;
}

// UDS_W_CommonIconTextButton @ 14b780ec0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_CommonIconTextButton * __thiscall
UDS_W_CommonIconTextButton::UDS_W_CommonIconTextButton
          (UDS_W_CommonIconTextButton *this,FVTableHelper *param_1)

{
  UDS_W_CommonButton::UDS_W_CommonButton((UDS_W_CommonButton *)this,param_1);
  this->IconVisibility = SelfHitTestInvisible;
  this->TextVisibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->LazyImage).field0_0x0.DebugPtr = (UDS_CommonLazyImage *)0x0;
  (this->LazyImage_Icon).field0_0x0.DebugPtr = (UDS_CommonLazyImage *)0x0;
  (this->LazyImages_Else).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyImages_Else).ArrayNum = 0;
  (this->LazyImages_Else).ArrayMax = 0;
  (this->ButtonData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->RichText).field0_0x0.DebugPtr = (UDS_CommonRichTextBlock *)0x0;
  (this->DSText).StringTableType = None;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  (this->Text).Data.ArrayMax = 0;
  return this;
}

// UDS_W_CommonIconTextButton @ 14b780fa0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_W_CommonIconTextButton * __thiscall
UDS_W_CommonIconTextButton::UDS_W_CommonIconTextButton
          (UDS_W_CommonIconTextButton *this,FObjectInitializer *param_1)

{
  UDS_W_CommonButton::UDS_W_CommonButton((UDS_W_CommonButton *)this,param_1);
  this->IconVisibility = SelfHitTestInvisible;
  this->TextVisibility = SelfHitTestInvisible;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  (this->LazyImage).field0_0x0.DebugPtr = (UDS_CommonLazyImage *)0x0;
  (this->LazyImage_Icon).field0_0x0.DebugPtr = (UDS_CommonLazyImage *)0x0;
  (this->LazyImages_Else).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LazyImages_Else).ArrayNum = 0;
  (this->LazyImages_Else).ArrayMax = 0;
  (this->ButtonData).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->RichText).field0_0x0.DebugPtr = (UDS_CommonRichTextBlock *)0x0;
  (this->DSText).StringTableType = None;
  (this->DSText).StringTableID = 0;
  (this->DSText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->DSText).StringEnumTableNameID.Number = 0;
  (this->DSText).DateTime.Ticks = 0;
  (this->DSText).TimeSpan.Ticks = 0;
  (this->DSText).TimeExpressionType = None;
  (this->DSText).IsExpression = false;
  (this->DSText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).UniqueString.Data.ArrayNum = 0;
  (this->DSText).UniqueString.Data.ArrayMax = 0;
  (this->DSText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DSText).FormatArgs.ArrayNum = 0;
  (this->DSText).FormatArgs.ArrayMax = 0;
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = 0;
  (this->Text).Data.ArrayMax = 0;
  return this;
}

// ~UDS_W_CommonIconTextButton @ 14b782c20

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonIconTextButton::~UDS_W_CommonIconTextButton(UDS_W_CommonIconTextButton *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  pFVar1 = (this->Text).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->DSText).FormatArgs.AllocatorInstance.Data,
             (this->DSText).FormatArgs.ArrayNum);
  pFVar1 = (this->DSText).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DSText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LazyImages_Else).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_W_CommonButton::~UDS_W_CommonButton((UDS_W_CommonButton *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b784fe0

IClassDescriptor * __thiscall
UDS_W_CommonIconTextButton::GetFieldNotificationDescriptor(UDS_W_CommonIconTextButton *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_W_CommonIconTextButton::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b785660

UClass * __cdecl UDS_W_CommonIconTextButton::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_W_CommonIconTextButton.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_W_CommonIconTextButton",
               &Z_Registration_Info_UClass_UDS_W_CommonIconTextButton.InnerSingleton,
               StaticRegisterNativesUDS_W_CommonIconTextButton,0x1390,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_W_CommonIconTextButton>,
               InternalVTableHelperCtorCaller<UDS_W_CommonIconTextButton>,local_res8,
               UDS_W_CommonButton::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_W_CommonIconTextButton.InnerSingleton;
}

// StaticRegisterNativesUDS_W_CommonIconTextButton @ 14b786480

void __cdecl UDS_W_CommonIconTextButton::StaticRegisterNativesUDS_W_CommonIconTextButton(void)

{
  return;
}

// InitWidgetBinding @ 14bd04890

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_W_CommonIconTextButton::InitWidgetBinding(UDS_W_CommonIconTextButton *this,UWidget *param_1)

{
  int *piVar1;
  TObjectPtr<UDS_CommonLazyImage> *pTVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  UDS_CommonRichTextBlock *pUVar6;
  code *pcVar7;
  bool bVar8;
  TBitArray<FDefaultBitArrayAllocator> *pTVar9;
  int iVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  FText *pFVar13;
  UDS_CommonLazyImage *this_00;
  float fVar14;
  TVector2<double>_u_0 local_28;
  
  UDS_W_CommonButton::InitWidgetBinding((UDS_W_CommonButton *)this,param_1);
  if (param_1 != (UWidget *)0x0) {
    pUVar11 = Z_Construct_UClass_UDS_CommonLazyImage_NoRegister();
    iVar10 = (int)pUVar11->_padding_;
    if ((iVar10 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar11->_padding_)) {
      cVar5 = (char)param_1[2].NativeBindings.ArrayMax;
      if (cVar5 == '\0') goto LAB_14bd04b0b;
      if (cVar5 == '\x01') {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        (this->LazyImage).field0_0x0.DebugPtr = (UDS_CommonLazyImage *)param_1;
        pUVar11 = (this->ButtonData).Class.field0_0x0.DebugPtr;
        if ((pUVar11 != (UClass *)0x0) &&
           (pUVar12 = Z_Construct_UClass_UDS_ButtonData_NoRegister(), pUVar12 != (UClass *)0x0)) {
          iVar10 = (int)pUVar12->_padding_;
          if (((int)pUVar11->_padding_ < iVar10) ||
             ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar10 * 8) !=
              &pUVar12->_padding_)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if ((bVar8) && ((this->ButtonData).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
            TSubclassOf<UDS_ButtonData>::operator=
                      (&((this->LazyImage).field0_0x0.DebugPtr)->ButtonData,&this->ButtonData);
            (**(code **)(((this->LazyImage).field0_0x0.DebugPtr)->_padding_ + 0x380))();
          }
        }
        this_00 = (this->LazyImage).field0_0x0.DebugPtr;
      }
      else {
        if (cVar5 == '\x02') {
          pTVar2 = &this->LazyImage_Icon;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          (pTVar2->field0_0x0).DebugPtr = (UDS_CommonLazyImage *)param_1;
          pUVar11 = (this->ButtonData).Class.field0_0x0.DebugPtr;
          if ((pUVar11 != (UClass *)0x0) &&
             (pUVar12 = Z_Construct_UClass_UDS_ButtonData_NoRegister(), pUVar12 != (UClass *)0x0)) {
            iVar10 = (int)pUVar12->_padding_;
            if (((int)pUVar11->_padding_ < iVar10) ||
               ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar10 * 8) !=
                &pUVar12->_padding_)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if ((bVar8) && ((this->ButtonData).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
              TSubclassOf<UDS_ButtonData>::operator=
                        (&((pTVar2->field0_0x0).DebugPtr)->ButtonData,&this->ButtonData);
              (**(code **)(((pTVar2->field0_0x0).DebugPtr)->_padding_ + 0x380))();
            }
          }
          fVar14 = __real_3f800000;
          if (this->UseOpacityImage != false) {
            fVar14 = this->Opacity;
          }
          UImage::SetOpacity((UImage *)(pTVar2->field0_0x0).DebugPtr,fVar14);
          if (this->UseIconSize != false) {
            uVar3 = this->IconSizeX;
            uVar4 = this->IconSizeY;
            local_28._8_4_ = SUB84((double)(float)uVar4,0);
            local_28._s_0.X = (double)(float)uVar3;
            local_28._12_4_ = (int)((ulonglong)(double)(float)uVar4 >> 0x20);
            UImage::SetDesiredSizeOverride
                      ((UImage *)(pTVar2->field0_0x0).DebugPtr,(TVector2<double> *)&local_28._s_0);
          }
          (**(code **)(((pTVar2->field0_0x0).DebugPtr)->_padding_ + 0x2c0))
                    ((pTVar2->field0_0x0).DebugPtr,this->IconVisibility);
          goto LAB_14bd04b0b;
        }
        if (cVar5 != '\x03') goto LAB_14bd04b0b;
        pTVar9 = &param_1[2].EnabledFieldNotifications;
        (pTVar9->AllocatorInstance).InlineData[8] = '\0';
        (pTVar9->AllocatorInstance).InlineData[9] = '\0';
        (pTVar9->AllocatorInstance).InlineData[10] = '\0';
        (pTVar9->AllocatorInstance).InlineData[0xb] = '\0';
        (pTVar9->AllocatorInstance).InlineData[0xc] = '\0';
        (pTVar9->AllocatorInstance).InlineData[0xd] = '\0';
        (pTVar9->AllocatorInstance).InlineData[0xe] = '\0';
        (pTVar9->AllocatorInstance).InlineData[0xf] = '\0';
        piVar1 = &(this->LazyImages_Else).ArrayMax;
        iVar10 = (this->LazyImages_Else).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&(this->LazyImages_Else).AllocatorInstance,piVar1);
        }
        (this->LazyImages_Else).ArrayNum = iVar10 + 1;
        *(UWidget **)((this->LazyImages_Else).AllocatorInstance.Data + (longlong)iVar10 * 8) =
             param_1;
        this_00 = (UDS_CommonLazyImage *)param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
      }
      fVar14 = __real_3f800000;
      if (this->UseOpacityImage != false) {
        fVar14 = this->Opacity;
      }
      UImage::SetOpacity((UImage *)this_00,fVar14);
      goto LAB_14bd04b0b;
    }
  }
  if (param_1 == (UWidget *)0x0) {
    return;
  }
LAB_14bd04b0b:
  pUVar11 = Z_Construct_UClass_UDS_CommonRichTextBlock_NoRegister();
  iVar10 = (int)pUVar11->_padding_;
  if (((iVar10 <= *(int *)(param_1->_padding_ + 0x38)) &&
      ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar10 * 8)
       == &pUVar11->_padding_)) && (param_1[4].PostWidgetStateChanged.field_0x18 != '\0')) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->RichText).field0_0x0.DebugPtr = (UDS_CommonRichTextBlock *)param_1;
    pUVar11 = (this->ButtonData).Class.field0_0x0.DebugPtr;
    if ((pUVar11 != (UClass *)0x0) &&
       (pUVar12 = Z_Construct_UClass_UDS_ButtonData_NoRegister(), pUVar12 != (UClass *)0x0)) {
      iVar10 = (int)pUVar12->_padding_;
      if (((int)pUVar11->_padding_ < iVar10) ||
         ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar10 * 8) !=
          &pUVar12->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar8) &&
         (pUVar11 = (this->ButtonData).Class.field0_0x0.DebugPtr, pUVar11 != (UClass *)0x0)) {
        pUVar6 = (this->RichText).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        (pUVar6->ButtonData).Class.field0_0x0 = (this->ButtonData).Class.field0_0x0;
      }
    }
    if (((this->DSText).StringTableID < 1) || ((this->DSText).StringTableType == None)) {
      pUVar6 = (this->RichText).field0_0x0.DebugPtr;
      pcVar7 = *(code **)(pUVar6->_padding_ + 0x358);
      pFVar13 = FText::FromString((FText *)&local_28._s_0,&this->Text);
      (*pcVar7)(pUVar6,pFVar13);
      if ((longlong *)local_28._s_0.X != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_28._s_0.X + 0x10))();
      }
    }
    else {
      UDS_CommonRichTextBlock::SetDSText((this->RichText).field0_0x0.DebugPtr,&this->DSText);
    }
    pUVar6 = (this->RichText).field0_0x0.DebugPtr;
    (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6,this->TextVisibility);
  }
  return;
}

// NativeDestruct @ 14bd07840

void __thiscall UDS_W_CommonIconTextButton::NativeDestruct(UDS_W_CommonIconTextButton *this)

{
  bool bVar1;
  UObject *pUVar2;
  ADS_PlayerController *this_00;
  FWeakObjectPtr aFStackX_8 [4];
  
  if (this->_padding_ != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x15f0),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1610),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x15b0),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x15d0),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1570),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1630),this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(this->_padding_ + 0x1650),this
              );
  }
  if (this->_padding_ != 0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x28));
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x40));
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x58));
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(this->_padding_ + 0x70));
    this->_padding_ = 0;
  }
  if (*(char *)((longlong)&this->_padding_ + 7) == '\x01') {
    ADS_PlayerController::GetPlayerController();
    bVar1 = FWeakObjectPtr::IsValid(aFStackX_8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(aFStackX_8);
      if (pUVar2[0x3d].field_0x20 == '\x02') {
        this_00 = (ADS_PlayerController *)FWeakObjectPtr::Get(aFStackX_8);
        ADS_PlayerController::SetCursorShape(this_00,Default);
      }
    }
  }
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  return;
}

// NativePreConstruct @ 14bd09730

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonIconTextButton::NativePreConstruct(UDS_W_CommonIconTextButton *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 auStackX_8 [8];
  TArray<UWidget_*,TSizedDefaultAllocator<32>_> TStack_18;
  
  UDS_UserWidget::NativePreConstruct((UDS_UserWidget *)this);
  if (this->_padding_ != 0) {
    (**(code **)(this->_padding_ + 0x518))(this);
    if (*(char *)((longlong)&this->_padding_ + 6) != '\0') {
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar2 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)&this->_padding_,0,
                   (int *)((longlong)&this->_padding_ + 4));
      }
    }
    TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_18.ArrayNum = 0;
    TStack_18.ArrayMax = 0;
    UWidgetTree::GetAllWidgets((UWidgetTree *)this->_padding_,&TStack_18);
    iVar2 = TStack_18.ArrayNum;
    uVar3 = (ulonglong)TStack_18.ArrayNum;
    pFVar1 = TStack_18.AllocatorInstance.Data + uVar3 * 8;
    FVar4.Data = TStack_18.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar3 != iVar2) {
        `TCheckedPointerIterator<UWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_8);
      }
      if (FVar4.Data == pFVar1) break;
      (**(code **)(this->_padding_ + 0x520))(this,*(undefined8 *)FVar4.Data);
      uVar3 = TStack_18._8_8_ & 0xffffffff;
      FVar4.Data = FVar4.Data + 8;
    }
    (**(code **)(this->_padding_ + 0x528))(this);
    UDS_W_CommonButton::NotifyButtonSwitcher((UDS_W_CommonButton *)this);
    if (TStack_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_18.AllocatorInstance.Data);
    }
  }
  return;
}

// PreWidgetBinding @ 14bd17460

void __thiscall UDS_W_CommonIconTextButton::PreWidgetBinding(UDS_W_CommonIconTextButton *this)

{
  (this->LazyImages_Else).ArrayNum = 0;
  if ((this->LazyImages_Else).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LazyImages_Else).AllocatorInstance,0,&(this->LazyImages_Else).ArrayMax)
    ;
  }
  return;
}

// SetButtonDataID @ 14bd1e050

void __thiscall
UDS_W_CommonIconTextButton::SetButtonDataID(UDS_W_CommonIconTextButton *this,long64 *param_1)

{
  UDS_CommonLazyImage *pUVar1;
  UDS_CommonRichTextBlock *this_00;
  
  if (0 < *param_1) {
    pUVar1 = (this->LazyImage).field0_0x0.DebugPtr;
    if (pUVar1 != (UDS_CommonLazyImage *)0x0) {
      UDS_CommonLazyImage::SetButtonTableID(pUVar1,param_1);
    }
    pUVar1 = (this->LazyImage_Icon).field0_0x0.DebugPtr;
    if (pUVar1 != (UDS_CommonLazyImage *)0x0) {
      UDS_CommonLazyImage::SetButtonTableID(pUVar1,param_1);
    }
    this_00 = (this->RichText).field0_0x0.DebugPtr;
    if (this_00 != (UDS_CommonRichTextBlock *)0x0) {
      UDS_CommonRichTextBlock::SetButtonTableID(this_00,param_1);
    }
  }
  return;
}

// SetDSText @ 14bd1edb0

void __thiscall
UDS_W_CommonIconTextButton::SetDSText(UDS_W_CommonIconTextButton *this,FDS_Text *param_1)

{
  UDS_CommonRichTextBlock *this_00;
  
  FDS_Text::operator=(&this->DSText,param_1);
  this_00 = (this->RichText).field0_0x0.DebugPtr;
  if (this_00 != (UDS_CommonRichTextBlock *)0x0) {
    UDS_CommonRichTextBlock::SetDSText(this_00,&this->DSText);
  }
  return;
}

// SetIconVisibility @ 14bd1fcd0

void __thiscall
UDS_W_CommonIconTextButton::SetIconVisibility
          (UDS_W_CommonIconTextButton *this,ESlateVisibility *param_1)

{
  UDS_CommonLazyImage *pUVar1;
  
  this->IconVisibility = *param_1;
  pUVar1 = (this->LazyImage_Icon).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CommonLazyImage *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd1fceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,*param_1);
    return;
  }
  return;
}

// SetText @ 14bd223e0

void __thiscall
UDS_W_CommonIconTextButton::SetText(UDS_W_CommonIconTextButton *this,FString *param_1)

{
  UDS_CommonRichTextBlock *pUVar1;
  code *pcVar2;
  FText *pFVar3;
  FText local_18;
  
  ::FString::operator=(&this->Text,param_1);
  pUVar1 = (this->RichText).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CommonRichTextBlock *)0x0) {
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x358);
    pFVar3 = FText::FromString(&local_18,&this->Text);
    (*pcVar2)(pUVar1,pFVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  return;
}

// SetTextVisibility @ 14bd229a0

void __thiscall
UDS_W_CommonIconTextButton::SetTextVisibility
          (UDS_W_CommonIconTextButton *this,ESlateVisibility *param_1)

{
  UDS_CommonRichTextBlock *pUVar1;
  
  this->TextVisibility = *param_1;
  pUVar1 = (this->RichText).field0_0x0.DebugPtr;
  if (pUVar1 != (UDS_CommonRichTextBlock *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014bd229bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,*param_1);
    return;
  }
  return;
}

// SynchronizeProperties @ 14bd22fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_W_CommonIconTextButton::SynchronizeProperties(UDS_W_CommonIconTextButton *this)

{
  TReferenceControllerBase<1> *pTVar1;
  SObjectWidget *this_00;
  FName FVar2;
  code *pcVar3;
  atomic<int> aVar4;
  atomic<int> aVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  ulong64 uVar8;
  UFunction *pUVar9;
  FMRSWRecursiveAccessDetector *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  UObject *pUStackX_8;
  UObject *pUStackX_10;
  undefined1 auStack_290 [8];
  ForAnyElementType FStack_288;
  ulonglong uStack_280;
  longlong lStack_278;
  longlong lStack_270;
  undefined1 uStack_268;
  undefined1 auStack_260 [8];
  ForAnyElementType FStack_258;
  ulonglong uStack_250;
  longlong lStack_248;
  longlong lStack_240;
  uint uStack_238;
  undefined1 uStack_234;
  undefined1 auStack_230 [8];
  FDelegateAllocation FStack_228;
  undefined1 auStack_218 [24];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_200;
  ForAnyElementType FStack_1f8;
  ulonglong uStack_1f0;
  longlong lStack_1e8;
  longlong lStack_1e0;
  undefined1 uStack_1d8;
  undefined1 auStack_1d0 [8];
  FDelegateAllocation FStack_1c8;
  longlong lStack_1b8;
  longlong lStack_1b0;
  uint uStack_1a8;
  undefined1 uStack_1a4;
  undefined1 auStack_1a0 [24];
  longlong lStack_188;
  longlong lStack_180;
  undefined1 uStack_178;
  undefined1 auStack_170 [24];
  FDestructionSentinel FStack_158;
  FDestructionSentinel FStack_140;
  FDestructionSentinel FStack_128;
  FLinearColor_u_0 FStack_110;
  uint uStack_100;
  undefined1 uStack_fc;
  undefined1 auStack_f8 [24];
  FDestructionSentinel FStack_e0;
  FDelegateAllocation *pFStack_c8;
  FDestructionSentinel FStack_c0;
  FDelegateAllocation *pFStack_a8;
  FLinearColor_u_0 FStack_a0;
  undefined1 uStack_90;
  undefined1 auStack_88 [24];
  FReadAccessScope FStack_70;
  FReadAccessScope FStack_58;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
  pTVar11 = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar1->SharedReferenceCount;
    do {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_146a96f76;
      LOCK();
      aVar5 = pTVar1->SharedReferenceCount;
      bVar12 = aVar4 == aVar5;
      if (bVar12) {
        pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar5 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar5;
    } while (!bVar12);
    this_00 = (SObjectWidget *)this->_padding_;
    pTVar11 = pTVar1;
    if (this_00 != (SObjectWidget *)0x0) {
      bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      if (bVar12) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                   &FStack_70);
        FVar2 = (FName)this->_padding_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_70);
        pUVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
        uStack_1d8 = 1;
        FStack_1c8.DelegateSize = 0;
        FStack_1c8._12_4_ = 0;
        lStack_1e8 = 0;
        lStack_1e0 = 0;
        auStack_1d0 = (undefined1  [8])0x0;
        FStack_1c8.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_1d0,
                   (FWriteAccessScope *)&FStack_e0);
        pFStack_c8 = &FStack_1c8;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,&FStack_1c8);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFLinearColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          *(FName *)(puVar7 + 4) = FVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          puVar7[5] = 0;
          pUStackX_8 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 5),(FObjectPtr)&pUStackX_8);
          if ((FVar2 == (FName)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFunctionName != NAME_None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x56,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (pUVar6 != (UObject *)0x0) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar7 + 5));
            pUVar9 = UObject::FindFunctionChecked(pUVar6,FVar2);
            puVar7[3] = pUVar9;
          }
        }
        if (FStack_e0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_e0.Accessor,&FStack_e0);
        }
        uStack_178 = uStack_1d8;
        lStack_188 = lStack_1e8;
        lStack_180 = lStack_1e0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_170,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1d0);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1d0);
        if (FStack_1c8.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_1c8.DelegateAllocator);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_1d0;
      }
      else {
        lStack_278 = this->_padding_;
        lStack_270 = this->_padding_;
        uStack_268 = 1;
        uStack_250 = 0;
        uStack_178 = 1;
        auStack_260 = (undefined1  [8])0x0;
        FStack_258.Data = (FScriptContainerElement *)0x0;
        lStack_188 = lStack_278;
        lStack_180 = lStack_270;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_170,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_260);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_260,
                   (FWriteAccessScope *)&FStack_158);
        if (((int)uStack_250 != 0) && (FStack_258.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_258.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_258,0,0,0x10)
          ;
          uStack_250 = uStack_250 & 0xffffffff00000000;
        }
        if (FStack_158.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_158.Accessor,&FStack_158);
        }
        if (FStack_258.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_258.Data);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_260;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar10);
      bVar12 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                         ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
      if (bVar12) {
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->_padding_,
                   &FStack_58);
        FVar2 = (FName)this->_padding_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (&FStack_58);
        pUVar6 = TScriptDelegate<FNotThreadSafeDelegateMode>::GetUObject
                           ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_);
        uStack_238 = uStack_238 & 0xffffff00;
        uStack_234 = 1;
        FStack_228.DelegateSize = 0;
        FStack_228._12_4_ = 0;
        lStack_248 = ___xmm_3f8000003f800000000000003f800000;
        lStack_240 = _UNK_15090c6d8;
        auStack_230 = (undefined1  [8])0x0;
        FStack_228.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_230,
                   (FWriteAccessScope *)&FStack_c0);
        pFStack_a8 = &FStack_228;
        puVar7 = UE::Core::Private::DelegateAllocate(0x30,&FStack_228);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = &
                    ___7__TCommonDelegateInstanceState___A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar8 = FDelegateHandle::GenerateNewID();
          puVar7[2] = uVar8;
          *puVar7 = &
                    ___7__TBaseUFunctionDelegateInstance_VUObject____A6A_AUFSlateColor__XZUFDefaultDelegateUserPolicy____V__6B_
          ;
          *(FName *)(puVar7 + 4) = FVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          puVar7[5] = 0;
          pUStackX_10 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar7 + 5),(FObjectPtr)&pUStackX_10);
          if ((FVar2 == (FName)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InFunctionName != NAME_None",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\DelegateInstancesImpl.h"
                                  ,0x56,L""), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (pUVar6 != (UObject *)0x0) {
            pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(puVar7 + 5));
            pUVar9 = UObject::FindFunctionChecked(pUVar6,FVar2);
            puVar7[3] = pUVar9;
          }
        }
        if (FStack_c0.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_c0.Accessor,&FStack_c0);
        }
        uStack_1a8 = uStack_238;
        uStack_1a4 = uStack_234;
        lStack_1b8 = lStack_248;
        lStack_1b0 = lStack_240;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1a0,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_230);
        TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_230);
        if (FStack_228.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)FStack_228.DelegateAllocator);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_230;
      }
      else {
        uStack_1a8 = (uint)this->_padding_;
        lStack_1b8 = this->_padding_;
        lStack_1b0 = this->_padding_;
        uStack_280 = 0;
        uStack_1a4 = 1;
        auStack_290 = (undefined1  [8])0x0;
        FStack_288.Data = (FScriptContainerElement *)0x0;
        TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
                  ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1a0,
                   (TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_290);
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)auStack_290,
                   (FWriteAccessScope *)&FStack_140);
        if (((int)uStack_280 != 0) && (FStack_288.Data != (FScriptContainerElement *)0x0)) {
          (*(code *)**(undefined8 **)FStack_288.Data)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_288,0,0,0x10)
          ;
          uStack_280 = uStack_280 & 0xffffffff00000000;
        }
        if (FStack_140.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_140.Accessor,&FStack_140);
        }
        if (FStack_288.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_288.Data);
        }
        pFVar10 = (FMRSWRecursiveAccessDetector *)auStack_290;
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(pFVar10);
      uStack_90 = uStack_178;
      FStack_a0._0_8_ = lStack_188;
      FStack_a0._8_8_ = lStack_180;
      TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_88,
                 (TDelegate<FLinearColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_170);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FLinearColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this_00->_padding_,(SWidget *)this_00,(TAttribute<FLinearColor> *)&FStack_a0._s_0
               ,None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_88);
      if ((void *)auStack_88._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_88._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_88);
      uStack_100 = uStack_1a8;
      FStack_110._0_8_ = lStack_1b8;
      FStack_110._8_8_ = lStack_1b0;
      uStack_fc = uStack_1a4;
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>::
      TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy>
                ((TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_f8,
                 (TDelegate<FSlateColor___cdecl(void),FDefaultDelegateUserPolicy> *)auStack_1a0);
      SlateAttributePrivate::
      TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
      ::Assign((TSlateAttributeBase<SWidget,FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
                *)&this_00->_padding_,(SWidget *)this_00,(TAttribute<FSlateColor> *)&FStack_110._s_0
               ,None);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_f8);
      if ((void *)auStack_f8._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_f8._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_f8);
      auStack_218._0_8_ = this->_padding_;
      auStack_218._8_8_ = this->_padding_;
      auStack_218[0x10] = true;
      uStack_1f0 = 0;
      TStack_200.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      FStack_1f8.Data = (FScriptContainerElement *)0x0;
      SObjectWidget::SetPadding(this_00,(TAttribute<FMargin> *)auStack_218);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&TStack_200,(FWriteAccessScope *)&FStack_128);
      if (((int)uStack_1f0 != 0) && (FStack_1f8.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)FStack_1f8.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_1f8,0,0,0x10);
        uStack_1f0 = uStack_1f0 & 0xffffffff00000000;
      }
      if (FStack_128.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_128.Accessor,&FStack_128);
      }
      if (FStack_1f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_1f8.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_200.AccessDetector);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_1a0);
      if ((void *)auStack_1a0._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_1a0._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_1a0);
      TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                ((TDelegateBase<FNotThreadSafeDelegateMode> *)auStack_170);
      if ((void *)auStack_170._8_8_ != (void *)0x0) {
        FMemory::Free((void *)auStack_170._8_8_);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                ((FMRSWRecursiveAccessDetector *)auStack_170);
    }
  }
LAB_146a96f76:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return;
}

