// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 16

// StaticClass @ 14695bbf0

UClass * __cdecl UDynamicEntryBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicEntryBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"DynamicEntryBox",
               &Z_Registration_Info_UClass_UDynamicEntryBox.InnerSingleton,
               StaticRegisterNativesUDynamicEntryBox,0x298,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDynamicEntryBox>,
               InternalVTableHelperCtorCaller<UDynamicEntryBox>,local_res8,
               UDynamicEntryBoxBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicEntryBox.InnerSingleton;
}

// CreateEntry<UUserWidget> @ 1469742a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall
UDynamicEntryBox::CreateEntry<UUserWidget>(UDynamicEntryBox *this,TSubclassOf<UUserWidget> *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UClass *pUVar4;
  UUserWidget *pUVar5;
  UClass *pUVar6;
  UClass *local_res10;
  
  pUVar6 = (param_1->Class).field0_0x0.DebugPtr;
  if ((pUVar6 == (UClass *)0x0) ||
     (pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar3 == (UClass *)0x0)) {
LAB_1469742f3:
    pUVar6 = (this->EntryWidgetClass).Class.field0_0x0.DebugPtr;
  }
  else {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar2) || (pUVar6 = (param_1->Class).field0_0x0.DebugPtr, pUVar6 == (UClass *)0x0))
    goto LAB_1469742f3;
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar6 == (UClass *)0x0) {
      return (UUserWidget *)0x0;
    }
  }
  else {
    if (pUVar6 == (UClass *)0x0) {
      return (UUserWidget *)0x0;
    }
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
  if (pUVar3 == (UClass *)0x0) {
    return (UUserWidget *)0x0;
  }
  iVar1 = (int)pUVar3->_padding_;
  if (((int)pUVar6->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_))
  {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return (UUserWidget *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UUserWidget_NoRegister();
  if (pUVar3 != (UClass *)0x0) {
    iVar1 = (int)pUVar3->_padding_;
    if (((int)pUVar6->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar6->_padding_ + (longlong)iVar1 * 8) != &pUVar3->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pUVar3 = pUVar6;
    if (bVar2) goto LAB_14697438a;
  }
  pUVar3 = (UClass *)0x0;
LAB_14697438a:
  pUVar4 = Z_Construct_UClass_UUserWidget_NoRegister();
  if (pUVar4 != (UClass *)0x0) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar3->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_res10 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      bVar2 = UDynamicEntryBoxBase::IsEntryClassValid
                        ((UDynamicEntryBoxBase *)this,(TSubclassOf<UUserWidget>)&local_res10);
      if (bVar2) {
        local_res10 = pUVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar6);
        }
        pUVar5 = UDynamicEntryBoxBase::CreateEntryInternal
                           ((UDynamicEntryBoxBase *)this,(TSubclassOf<UUserWidget>)&local_res10);
        return pUVar5;
      }
    }
  }
  return (UUserWidget *)0x0;
}

// UDynamicEntryBox @ 146989870

UDynamicEntryBox * __thiscall
UDynamicEntryBox::UDynamicEntryBox(UDynamicEntryBox *this,FVTableHelper *param_1)

{
  UDynamicEntryBoxBase::UDynamicEntryBoxBase((UDynamicEntryBoxBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EntryWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// UDynamicEntryBox @ 1469898b0

UDynamicEntryBox * __thiscall
UDynamicEntryBox::UDynamicEntryBox(UDynamicEntryBox *this,FObjectInitializer *param_1)

{
  UDynamicEntryBoxBase::UDynamicEntryBoxBase((UDynamicEntryBoxBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->EntryWidgetClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  return this;
}

// ~UDynamicEntryBox @ 146992b10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDynamicEntryBox::~UDynamicEntryBox(UDynamicEntryBox *this)

{
  this->_padding_ = (longlong)&UDynamicEntryBoxBase::_vftable__for__UVisual__;
  this->_padding_ = (longlong)&UDynamicEntryBoxBase::_vftable__for__INotifyFieldValueChanged__;
  FUserWidgetPool::~FUserWidgetPool((FUserWidgetPool *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UWidget::~UWidget((UWidget *)this);
  return;
}

// BP_CreateEntry @ 1469a2c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall UDynamicEntryBox::BP_CreateEntry(UDynamicEntryBox *this)

{
  UUserWidget *pUVar1;
  TObjectPtr<UClass>_u_0 local_res10 [3];
  
  local_res10[0].DebugPtr = (UClass *)0x0;
  pUVar1 = CreateEntry<UUserWidget>(this,(TSubclassOf<UUserWidget> *)&local_res10[0].ObjectPtr);
  return pUVar1;
}

// BP_CreateEntryOfClass @ 1469a2cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __thiscall
UDynamicEntryBox::BP_CreateEntryOfClass(UDynamicEntryBox *this,TSubclassOf<UUserWidget> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UUserWidget *pUVar5;
  UObject *local_res10;
  
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
      if ((bVar3) &&
         (local_res10 = *(UObject **)param_1.Class.field0_0x0, local_res10 != (UObject *)0x0)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_res10);
        }
        bVar3 = UDynamicEntryBoxBase::IsEntryClassValid
                          ((UDynamicEntryBoxBase *)this,(TSubclassOf<UUserWidget>)&local_res10);
        if (bVar3) {
          local_res10 = *(UObject **)param_1.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res10 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_res10);
          }
          pUVar5 = UDynamicEntryBoxBase::CreateEntryInternal
                             ((UDynamicEntryBoxBase *)this,(TSubclassOf<UUserWidget>)&local_res10);
          return pUVar5;
        }
      }
    }
  }
  return (UUserWidget *)0x0;
}

// GetPrivateStaticClass @ 1469d3d30

UClass * __cdecl UDynamicEntryBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicEntryBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"DynamicEntryBox",
               &Z_Registration_Info_UClass_UDynamicEntryBox.InnerSingleton,
               StaticRegisterNativesUDynamicEntryBox,0x298,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDynamicEntryBox>,
               InternalVTableHelperCtorCaller<UDynamicEntryBox>,local_res8,
               UDynamicEntryBoxBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicEntryBox.InnerSingleton;
}

// RemoveEntry @ 146a0c020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDynamicEntryBox::RemoveEntry(UDynamicEntryBox *this,UUserWidget *param_1)

{
  UDynamicEntryBoxBase::RemoveEntryInternal((UDynamicEntryBoxBase *)this,param_1,false);
  return;
}

// Reset @ 146a0d9c0

void __thiscall UDynamicEntryBox::Reset(UDynamicEntryBox *this,bool param_1)

{
  SWrapBox *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  FUserWidgetPool::ReleaseAll((FUserWidgetPool *)&this->_padding_,param_1);
  this_00 = (SWrapBox *)this->_padding_;
  if (this_00 != (SWrapBox *)0x0) {
    switch((char)this->_padding_) {
    case '\0':
    case '\x01':
      pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SBoxPanel::ClearChildren((SBoxPanel *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    case '\x02':
    case '\x03':
      pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWrapBox::ClearChildren(this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    case '\x04':
      pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SRadialBox::ClearChildren((SRadialBox *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return;
    case '\x05':
      pTVar1 = (TReferenceControllerBase<1> *)this->_padding_;
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

// StaticRegisterNativesUDynamicEntryBox @ 146a1e720

void __cdecl UDynamicEntryBox::StaticRegisterNativesUDynamicEntryBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDynamicEntryBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 146a1fb00

/* WARNING: Removing unreachable block (ram,0x000146a28528) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDynamicEntryBox::SynchronizeProperties(UDynamicEntryBox *this)

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
  UDynamicEntryBox *pUStack_6e8;
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

// execBP_CreateEntry @ 146a323d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDynamicEntryBox::execBP_CreateEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  UUserWidget *pUVar1;
  TObjectPtr<UClass>_u_0 local_res10 [3];
  
  local_res10[0].DebugPtr = (UClass *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = CreateEntry<UUserWidget>
                     ((UDynamicEntryBox *)param_1,
                      (TSubclassOf<UUserWidget> *)&local_res10[0].ObjectPtr);
  *(UUserWidget **)param_3 = pUVar1;
  return;
}

// execBP_CreateEntryOfClass @ 146a32410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UDynamicEntryBox::execBP_CreateEntryOfClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *pUVar7;
  UUserWidget *pUVar8;
  UObject *local_res10;
  UObject *local_res18 [2];
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (local_res10 == (UObject *)0x0) goto LAB_146a3261e;
  }
  else {
    if (local_res10 == (UObject *)0x0) goto LAB_146a3261e;
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
  if (pUVar6 == (UClass *)0x0) goto LAB_146a3261e;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (!bVar4) goto LAB_146a3261e;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
  if (pUVar6 == (UClass *)0x0) goto LAB_146a325eb;
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((!bVar4) || (lVar3 = *(longlong *)&param_1->field_0x20, lVar3 == 0)) goto LAB_146a325eb;
  pUVar6 = Z_Construct_UClass_UWidgetTree_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
     (((longlong *)
       *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar6->_padding_ || (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 == 0))))
  goto LAB_146a325eb;
  pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) goto LAB_146a325eb;
  pUVar6 = Z_Construct_UClass_UUserWidget_NoRegister();
  if (pUVar6 == (UClass *)0x0) {
LAB_146a325bf:
    pUVar7 = (UObject *)0x0;
  }
  else {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)&pUVar5[1].field_0x10 < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    pUVar7 = pUVar5;
    if (!bVar4) goto LAB_146a325bf;
  }
  lVar3 = *(longlong *)(lVar3 + 0x10);
  if (lVar3 != 0) {
    if ((*(int *)&pUVar7[1].field_0x10 < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
LAB_146a3261e:
      *(undefined8 *)param_3 = 0;
      return;
    }
  }
LAB_146a325eb:
  local_res18[0] = pUVar5;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  pUVar8 = UDynamicEntryBoxBase::CreateEntryInternal
                     ((UDynamicEntryBoxBase *)param_1,(TSubclassOf<UUserWidget>)local_res18);
  *(UUserWidget **)param_3 = pUVar8;
  return;
}

// execRemoveEntry @ 146a38480

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDynamicEntryBox::execRemoveEntry(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SBoxPanel *this;
  SWrapBox *this_00;
  SRadialBox *this_01;
  TReferenceControllerBase<1> *pTVar2;
  SOverlay *this_02;
  code *pcVar3;
  UUserWidget *pUVar4;
  SWidget *pSVar5;
  bool bVar6;
  TSharedRef<SWidget,1> *pTVar7;
  UUserWidget *local_res10;
  TSharedPtr<SWidget,1> local_68;
  TSharedRef<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  TSharedRef<SWidget,1> local_38;
  TSharedRef<SWidget,1> local_28;
  
  local_res10 = (UUserWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar4 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UUserWidget *)0x0) {
    if (*(longlong *)&param_1[0xc].field_0x18 != 0) {
      UWidget::GetCachedWidget((UWidget *)local_res10,&local_68);
      pSVar5 = local_68.Object;
      if (local_68.Object != (SWidget *)0x0) {
        switch(param_1[0xb].field_0x18) {
        case 0:
        case 1:
          pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0xc].field_0x20;
          this = *(SBoxPanel **)&param_1[0xc].field_0x18;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this == (SBoxPanel *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((pSVar5 == (SWidget *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
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
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          SBoxPanel::RemoveSlot(this,&local_58);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          break;
        case 2:
        case 3:
          pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0xc].field_0x20;
          this_00 = *(SWrapBox **)&param_1[0xc].field_0x18;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_00 == (SWrapBox *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((pSVar5 == (SWidget *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
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
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          SWrapBox::RemoveSlot(this_00,&local_48);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_48.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          break;
        case 4:
          pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0xc].field_0x20;
          this_01 = *(SRadialBox **)&param_1[0xc].field_0x18;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_01 == (SRadialBox *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((pSVar5 == (SWidget *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
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
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x25d,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          SRadialBox::RemoveSlot(this_01,&local_38);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_38.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          break;
        case 5:
          pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0xc].field_0x20;
          this_02 = *(SOverlay **)&param_1[0xc].field_0x18;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((this_02 == (SOverlay *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pTVar7 = TSharedPtr<SWidget,1>::ToSharedRef(&local_68,&local_28);
          SOverlay::RemoveSlot(this_02,pTVar7);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    FUserWidgetPool::Release((FUserWidgetPool *)(param_1 + 0xd),pUVar4,false);
  }
  return;
}

// execReset @ 146a39340

void __cdecl UDynamicEntryBox::execReset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWrapBox *this;
  TReferenceControllerBase<1> *pTVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FUserWidgetPool::ReleaseAll((FUserWidgetPool *)(param_1 + 0xd),local_res8[0] != 0);
  this = *(SWrapBox **)&param_1[0xc].field_0x18;
  if (this != (SWrapBox *)0x0) {
    switch(param_1[0xb].field_0x18) {
    case 0:
    case 1:
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0xc].field_0x20;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SBoxPanel::ClearChildren((SBoxPanel *)this);
      break;
    case 2:
    case 3:
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0xc].field_0x20;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SWrapBox::ClearChildren(this);
      break;
    case 4:
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0xc].field_0x20;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SRadialBox::ClearChildren((SRadialBox *)this);
      break;
    case 5:
      pTVar2 = *(TReferenceControllerBase<1> **)&param_1[0xc].field_0x20;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SOverlay::ClearChildren((SOverlay *)this);
      break;
    default:
      goto switchD_146a393ed_default;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
switchD_146a393ed_default:
  return;
}

