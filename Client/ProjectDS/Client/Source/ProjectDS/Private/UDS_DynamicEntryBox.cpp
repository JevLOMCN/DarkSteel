// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// SetEntryBindingEventField_WrapperImpl @ 14b488520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UDS_DynamicEntryBox::SetEntryBindingEventField_WrapperImpl(void *param_1,void *param_2)

{
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *this;
  FScriptContainerElement *pFVar1;
  float fVar2;
  TObjectPtr<UClass>_u_0 TVar4;
  UObject *pUVar5;
  UDS_UserObjectListItem *this_00;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  UClass *pUVar11;
  SPanel *pSVar12;
  UUserWidget *pUVar13;
  FRadialBoxSettings *pFVar14;
  UDS_LogManager *pUVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  float fVar21;
  undefined1 auStackY_288 [32];
  undefined1 uStack_258;
  undefined1 uStack_257;
  undefined1 auStack_256 [2];
  uint uStack_254;
  FWeakObjectPtr FStack_250;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> TStack_248;
  TObjectPtr<UClass>_u_0 TStack_238;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> TStack_230;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> TStack_220;
  TObjectPtr<UClass>_u_0 TStack_210;
  UObject *pUStack_208;
  FScriptContainerElement *pFStack_200;
  UObject *apUStack_1f8 [2];
  code *pcStack_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  code *pcStack_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined1 auStack_1c8 [16];
  code *pcStack_1b8;
  longlong lStack_1b0;
  code *pcStack_1a8;
  longlong lStack_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_198;
  ulonglong uStack_78;
  float fVar3;
  
  uStack_78 = __security_cookie.value ^ (ulonglong)auStackY_288;
  ClearEntryItemsBinding(param_1);
  if (*(longlong *)((longlong)param_1 + 0x1f8) == 0) {
    return;
  }
  this = (TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_> *)
         ((longlong)param_1 + 0x2a8);
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=(this,param_2);
  TVar4 = (TObjectPtr<UClass>_u_0)((TObjectPtr<UClass>_u_0 *)((longlong)param_1 + 0x290))->DebugPtr;
  TStack_238 = TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  iVar17 = *(int *)((longlong)param_1 + 0x2b0);
  if ((*(longlong *)((longlong)param_1 + 0x1f8) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar10 = (undefined8 *)(**(code **)(**(longlong **)((longlong)param_1 + 0x1f8) + 0x180))();
  iVar9 = (**(code **)*puVar10)(puVar10);
  if (iVar9 == iVar17) {
LAB_14bcb3efe:
    if (*(char *)((longlong)param_1 + 0x298) != '\0') {
      pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings(param_1);
      fVar7 = __real_43b40000;
      fVar21 = __real_43b40000 - pFVar14->StartingAngle;
      pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings(param_1);
      if (pFVar14->bDistributeItemsEvenly == false) {
        UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>(param_1,&TStack_230);
        iVar17 = TStack_230.ArrayNum;
        pFVar1 = TStack_230.AllocatorInstance.Data + (longlong)TStack_230.ArrayNum * 8;
        FVar19.Data = TStack_230.AllocatorInstance.Data;
        while( true ) {
          if (TStack_230.ArrayNum != iVar17) {
            uStack_258 = 0;
            `TCheckedPointerIterator<UDS_UserWidget_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&uStack_258);
          }
          TStack_248.AllocatorInstance.Data = TStack_230.AllocatorInstance.Data;
          if (FVar19.Data == pFVar1) break;
          if (*(UWidget **)FVar19.Data != (UWidget *)0x0) {
            UWidget::SetRenderTransformAngle(*(UWidget **)FVar19.Data,fVar21);
            pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings(param_1);
            fVar21 = fVar21 - pFVar14->AngleBetweenItems;
            if (fVar21 < 0.0) {
              fVar21 = fVar21 + fVar7;
            }
          }
          FVar19.Data = FVar19.Data + 8;
        }
      }
      else {
        pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings(param_1);
        fVar2 = pFVar14->SectorCentralAngle;
        fVar3 = pFVar14->SectorCentralAngle;
        UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>(param_1,&TStack_248);
        iVar17 = TStack_248.ArrayNum;
        iVar9 = TStack_248.ArrayNum;
        if (fVar3 <= fVar7 && fVar7 != fVar2) {
          iVar9 = TStack_248.ArrayNum + -1;
        }
        pFVar1 = TStack_248.AllocatorInstance.Data + (longlong)TStack_248.ArrayNum * 8;
        FVar19.Data = TStack_248.AllocatorInstance.Data;
        while( true ) {
          if (TStack_248.ArrayNum != iVar17) {
            uStack_257 = 0;
            `TCheckedPointerIterator<UDS_UserWidget_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&uStack_257);
          }
          if (FVar19.Data == pFVar1) break;
          if (*(UWidget **)FVar19.Data != (UWidget *)0x0) {
            UWidget::SetRenderTransformAngle(*(UWidget **)FVar19.Data,fVar21);
            pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings(param_1);
            fVar21 = fVar21 - pFVar14->SectorCentralAngle / (float)iVar9;
            if (fVar21 < 0.0) {
              fVar21 = fVar21 + fVar7;
            }
          }
          FVar19.Data = FVar19.Data + 8;
        }
      }
      if (TStack_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_248.AllocatorInstance.Data);
      }
    }
    uVar20 = 0;
    UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>(param_1,&TStack_220);
    uVar16 = (ulonglong)TStack_220.ArrayNum;
    uStack_254 = TStack_220.ArrayNum;
    pFStack_200 = TStack_220.AllocatorInstance.Data + uVar16 * 8;
    FVar19.Data = TStack_220.AllocatorInstance.Data;
    uVar18 = uVar20;
    while( true ) {
      pFVar1 = pFStack_200;
      if (TStack_220.ArrayNum != (uint)uVar16) {
        auStack_256[0] = 0;
        `TCheckedPointerIterator<UDS_UserWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStack_256);
      }
      if (FVar19.Data == pFVar1) break;
      pUVar5 = *(UObject **)FVar19.Data;
      if (((pUVar5 != (UObject *)0x0) && (iVar17 = (int)uVar20, -1 < iVar17)) &&
         (iVar17 < *(int *)((longlong)param_1 + 0x2b0))) {
        this_00 = *(UDS_UserObjectListItem **)((this->AllocatorInstance).Data + uVar18);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FStack_250.ObjectIndex = 0;
        FStack_250.ObjectSerialNumber = 0;
        pUStack_208 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&FStack_250,(FObjectPtr)&pUStack_208);
        UDS_UserObjectListItem::BindViewModels
                  (this_00,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)FStack_250);
        if ((*(int *)((longlong)param_1 + 0x2b0) <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   (*(longlong *)((this->AllocatorInstance).Data + uVar18) + 0x40),param_1);
        if ((*(int *)((longlong)param_1 + 0x2b0) <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcStack_1e8 = OnFocusedItem;
        uStack_1e0 = 0;
        lStack_1b0 = (ulonglong)uStack_1dc << 0x20;
        pcStack_1b8 = OnFocusedItem;
        TMulticastDelegateRegistration<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_DynamicEntryBox>
                  ((TMulticastDelegateRegistration<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
                    *)(*(longlong *)((this->AllocatorInstance).Data + uVar18) + 0x40),
                   (UDS_DynamicEntryBox *)auStack_1c8,param_1);
        if ((*(int *)((longlong)param_1 + 0x2b0) <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   (*(longlong *)((this->AllocatorInstance).Data + uVar18) + 0x60),param_1);
        if ((*(int *)((longlong)param_1 + 0x2b0) <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_1d0 = 0;
        pcStack_1d8 = OnFocusLostedItem;
        lStack_1a0 = (ulonglong)uStack_1cc << 0x20;
        pcStack_1a8 = OnFocusLostedItem;
        TMulticastDelegateRegistration<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_DynamicEntryBox>
                  ((TMulticastDelegateRegistration<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
                    *)(*(longlong *)((this->AllocatorInstance).Data + uVar18) + 0x60),
                   (UDS_DynamicEntryBox *)(auStack_1c8 + 8),param_1);
        if ((*(int *)((longlong)param_1 + 0x2b0) <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        UDS_UserObjectListItem::SetListItemIndex
                  (*(UDS_UserObjectListItem **)((this->AllocatorInstance).Data + uVar18),iVar17);
        uVar20 = (ulonglong)(iVar17 + 1);
        uVar18 = uVar18 + 8;
      }
      uVar16 = (ulonglong)uStack_254;
      FVar19.Data = FVar19.Data + 8;
    }
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != pFVar1 + (longlong)*(int *)((longlong)param_1 + 0x2b0) * 8) {
      pUVar5 = *(UObject **)pFVar1;
      if (pUVar5 == (UObject *)0x0) {
        pUVar15 = UDS_LogManager::GetInst();
        if (pUVar15 != (UDS_LogManager *)0x0) {
          pUVar15 = UDS_LogManager::GetInst();
          TStack_198._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&TStack_198,"UDS_DynamicEntryBox::OnEntryBindingEvent",0x28,Yes);
          UDS_LogManager::PrintLog(pUVar15,1,Warning,TStack_198.Ptr,0xe1,L"First item is nullptr");
          if ((void *)TStack_198._padding_ != (void *)0x0) {
            FMemory::Free((void *)TStack_198._padding_);
          }
        }
      }
      else {
        apUStack_1f8[0] = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)((longlong)param_1 + 0x2b8),(FObjectPtr)apUStack_1f8);
        ItemSelectionChangedEvent(param_1,pUVar5);
      }
    }
    if (TStack_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_220.AllocatorInstance.Data);
    }
  }
  else {
    if ((TVar4.DebugPtr != (UClass *)0x0) &&
       (pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar11 != (UClass *)0x0)) {
      iVar9 = (int)pUVar11->_padding_;
      if (((int)(TVar4.DebugPtr)->_padding_ < iVar9) ||
         ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
          &pUVar11->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        TStack_210 = TVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
        }
        bVar8 = UDynamicEntryBoxBase::IsEntryClassValid
                          (param_1,(TSubclassOf<UUserWidget>)&TStack_210);
        if (bVar8) {
          UDynamicEntryBox::Reset(param_1,false);
          pSVar12 = TSharedPtr<SPanel,1>::operator->
                              ((TSharedPtr<SPanel,1> *)((longlong)param_1 + 0x1f8));
          puVar10 = (undefined8 *)(**(code **)(*(longlong *)pSVar12 + 0x180))(pSVar12);
          iVar9 = (**(code **)*puVar10)(puVar10);
          if (iVar9 < iVar17) {
            uVar18 = (ulonglong)(uint)(iVar17 - iVar9);
            do {
              pUVar13 = UDynamicEntryBox::CreateEntry<UUserWidget>
                                  (param_1,(TSubclassOf<UUserWidget> *)&TStack_238.ObjectPtr);
              if (pUVar13 != (UUserWidget *)0x0) {
                Z_Construct_UClass_UDS_UserWidget_NoRegister();
              }
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          goto LAB_14bcb3efe;
        }
      }
    }
    UDynamicEntryBox::Reset(param_1,true);
  }
  return;
}

// StaticClass @ 14b488530

UClass * __cdecl UDS_DynamicEntryBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DynamicEntryBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DynamicEntryBox",
               &Z_Registration_Info_UClass_UDS_DynamicEntryBox.InnerSingleton,
               StaticRegisterNativesUDS_DynamicEntryBox,0x2c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DynamicEntryBox>,
               InternalVTableHelperCtorCaller<UDS_DynamicEntryBox>,local_res8,
               UDynamicEntryBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DynamicEntryBox.InnerSingleton;
}

// UDS_DynamicEntryBox @ 14b48b300

UDS_DynamicEntryBox * __thiscall
UDS_DynamicEntryBox::UDS_DynamicEntryBox(UDS_DynamicEntryBox *this,FVTableHelper *param_1)

{
  UDynamicEntryBox::UDynamicEntryBox((UDynamicEntryBox *)this,param_1);
  this->RadialWidgetRotate = false;
  this->StartFirstIndex = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->OnEntrySetupComplete).DynamicWidget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusedObjectItem).WeakPtr = (FWeakObjectPtr)0x0;
  this->KeepSelected = false;
  return this;
}

// UDS_DynamicEntryBox @ 14b48b360

UDS_DynamicEntryBox * __thiscall
UDS_DynamicEntryBox::UDS_DynamicEntryBox(UDS_DynamicEntryBox *this,FObjectInitializer *param_1)

{
  UDynamicEntryBox::UDynamicEntryBox((UDynamicEntryBox *)this,param_1);
  this->RadialWidgetRotate = false;
  this->StartFirstIndex = false;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->OnEntrySetupComplete).DynamicWidget.WeakPtr = (FWeakObjectPtr)0x0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->FocusedObjectItem).WeakPtr = (FWeakObjectPtr)0x0;
  this->KeepSelected = false;
  return this;
}

// ~UDS_DynamicEntryBox @ 14b48bdb0

void __thiscall UDS_DynamicEntryBox::~UDS_DynamicEntryBox(UDS_DynamicEntryBox *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDynamicEntryBox::~UDynamicEntryBox((UDynamicEntryBox *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b48cbb0

IClassDescriptor * __thiscall
UDS_DynamicEntryBox::GetFieldNotificationDescriptor(UDS_DynamicEntryBox *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_DynamicEntryBox::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b48d3d0

UClass * __cdecl UDS_DynamicEntryBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_DynamicEntryBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_DynamicEntryBox",
               &Z_Registration_Info_UClass_UDS_DynamicEntryBox.InnerSingleton,
               StaticRegisterNativesUDS_DynamicEntryBox,0x2c0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_DynamicEntryBox>,
               InternalVTableHelperCtorCaller<UDS_DynamicEntryBox>,local_res8,
               UDynamicEntryBox::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_DynamicEntryBox.InnerSingleton;
}

// NativeOnFocusLost @ 14b48d6f0

void __thiscall
UDS_DynamicEntryBox::NativeOnFocusLost(UDS_DynamicEntryBox *this,FFocusEvent *param_1)

{
  return;
}

// StaticRegisterNativesUDS_DynamicEntryBox @ 14b48d870

void __cdecl UDS_DynamicEntryBox::StaticRegisterNativesUDS_DynamicEntryBox(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_DynamicEntryBox_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnFocusLostedItem @ 14b48e7d0

void __cdecl
UDS_DynamicEntryBox::execOnFocusLostedItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserObjectListItem *local_res10;
  
  local_res10 = (UDS_UserObjectListItem *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnFocusLostedItem((UDS_DynamicEntryBox *)param_1,local_res10);
  return;
}

// execOnFocusedItem @ 14b48e860

void __cdecl UDS_DynamicEntryBox::execOnFocusedItem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDS_UserObjectListItem *local_res10;
  
  local_res10 = (UDS_UserObjectListItem *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnFocusedItem((UDS_DynamicEntryBox *)param_1,local_res10);
  return;
}

// BeginDestroy @ 14bc87d40

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DynamicEntryBox::BeginDestroy(UDS_DynamicEntryBox *this)

{
  ClearEntryItemsBinding(this);
  UDynamicEntryBox::Reset((UDynamicEntryBox *)this,true);
  UWidget::BeginDestroy((UWidget *)this);
  return;
}

// ClearEntryItemsBinding @ 14bc8c400

void __thiscall UDS_DynamicEntryBox::ClearEntryItemsBinding(UDS_DynamicEntryBox *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  iVar2 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->EntryBindingEventField).UserObjectList.ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UDS_UserObjectListItem>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    lVar3 = *(longlong *)pFVar4;
    if (lVar3 != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x40),this);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar3 + 0x60),this);
    }
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// ItemSelectionChangedEvent @ 14bca9150

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DynamicEntryBox::ItemSelectionChangedEvent(UDS_DynamicEntryBox *this,UObject *param_1)

{
  int iVar1;
  UDS_UserObjectListItem *this_00;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10 [3];
  FFieldId local_18;
  
  if (param_1 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_UserObjectListItem_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if (((iVar3 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar3 * 8) ==
         &pUVar4->_padding_)) &&
       (iVar3 = UDS_UserObjectListItem::GetListItemIndex((UDS_UserObjectListItem *)param_1),
       -1 < iVar3)) {
      iVar1 = this->ListSlotIndex;
      if (iVar3 != iVar1) {
        if (((this->KeepSelected == true) && (-1 < iVar1)) &&
           ((iVar1 < (this->EntryBindingEventField).UserObjectList.ArrayNum &&
            (this_00 = *(UDS_UserObjectListItem **)
                        ((this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data +
                        (longlong)iVar1 * 8), this_00 != (UDS_UserObjectListItem *)0x0)))) {
          UDS_UserObjectListItem::GetOwnerWidget(this_00);
          bVar2 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)local_res10,
                             (void *)0x0);
          if (!bVar2) {
            pUVar5 = FWeakObjectPtr::Get(local_res10);
            bVar2 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &pUVar5[0x19].field_0x20);
            if (bVar2) {
              pUVar5 = FWeakObjectPtr::Get(local_res10);
              TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                        ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                         &pUVar5[0x19].field_0x20);
            }
          }
        }
        iVar3 = UDS_UserObjectListItem::GetListItemIndex((UDS_UserObjectListItem *)param_1);
        this->ListSlotIndex = iVar3;
        local_18.FieldName = FFieldNotificationClassDescriptor::ListSlotIndex.FieldName;
        local_18.BitNumber = FFieldNotificationClassDescriptor::ListSlotIndex.BitNumber;
        UWidget::BroadcastFieldValueChanged((UWidget *)&this->_padding_,&local_18);
      }
    }
  }
  return;
}

// NativeOnFocusReceived @ 14bcac710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FReply * __thiscall
UDS_DynamicEntryBox::NativeOnFocusReceived
          (UDS_DynamicEntryBox *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FFocusEvent *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FReply *pFVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FWeakObjectPtr local_res8;
  UObject *local_38;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> local_30;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->FocusedObjectItem).WeakPtr);
  if (!bVar3) {
    if ((this->EntryBindingEventField).UserObjectList.ArrayNum < 1) goto LAB_14bcac836;
    pUVar4 = *(UObject **)(this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_38 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_38);
    (this->FocusedObjectItem).WeakPtr = local_res8;
    bVar3 = FWeakObjectPtr::IsValid(&(this->FocusedObjectItem).WeakPtr);
    if (!bVar3) goto LAB_14bcac836;
  }
  uVar6 = 0;
  if (this->StartFirstIndex == true) {
LAB_14bcac869:
    UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>((UDynamicEntryBoxBase *)this,&local_30);
    if ((int)uVar6 < local_30.ArrayNum) {
      uVar8 = 0;
      if ((int)uVar6 < local_30.ArrayNum) {
        uVar8 = ~uVar6 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FReply *)(*pcVar2)();
        return pFVar5;
      }
      UWidget::SetFocus(*(UWidget **)(local_30.AllocatorInstance.Data + (longlong)(int)uVar6 * 8));
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    FReply::FReply(__return_storage_ptr__,bVar3);
    if (local_30.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return __return_storage_ptr__;
    }
    FMemory::Free(local_30.AllocatorInstance.Data);
    return __return_storage_ptr__;
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->FocusedObjectItem).WeakPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  for (pFVar7 = pFVar1;
      pFVar7 != pFVar1 + (longlong)(this->EntryBindingEventField).UserObjectList.ArrayNum * 8;
      pFVar7 = pFVar7 + 8) {
    if (*(UObject **)pFVar7 == pUVar4) {
      uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
      if (-1 < (int)uVar6) goto LAB_14bcac869;
      break;
    }
  }
LAB_14bcac836:
  FReply::FReply(__return_storage_ptr__,false);
  return __return_storage_ptr__;
}

// NativeOnNavigation @ 14bcadcd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FNavigationReply * __thiscall
UDS_DynamicEntryBox::NativeOnNavigation
          (UDS_DynamicEntryBox *this,FNavigationReply *__return_storage_ptr__,FGeometry *param_1,
          FNavigationEvent *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EDynamicBoxType EVar4;
  uint uVar5;
  UObject *pUVar6;
  FNavigationReply *pFVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  FWeakObjectPtr local_res8;
  UObject *local_48;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> local_40;
  TSharedPtr<SWidget,1> local_30;
  
  bVar3 = FWeakObjectPtr::IsValid(&(this->FocusedObjectItem).WeakPtr);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&(this->FocusedObjectItem).WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    pFVar1 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
    for (pFVar11 = pFVar1;
        pFVar11 != pFVar1 + (longlong)(this->EntryBindingEventField).UserObjectList.ArrayNum * 8;
        pFVar11 = pFVar11 + 8) {
      if (*(UObject **)pFVar11 == pUVar6) {
        iVar8 = (int)((longlong)pFVar11 - (longlong)pFVar1 >> 3);
        if (iVar8 != -1) {
          UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>
                    ((UDynamicEntryBoxBase *)this,&local_40);
          if ((-1 < iVar8) && (iVar8 < local_40.ArrayNum)) {
            EVar4 = UDynamicEntryBoxBase::GetBoxType((UDynamicEntryBoxBase *)this);
            if (EVar4 == Horizontal) {
              if (param_2->NavigationType == Left) {
                uVar5 = iVar8 - 1;
              }
              else {
                if (param_2->NavigationType != Right) goto LAB_14bcadfb0;
LAB_14bcade2b:
                uVar5 = iVar8 + 1;
              }
LAB_14bcade2d:
              uVar10 = uVar5;
              if (-1 < (int)uVar5) {
LAB_14bcade35:
                if (((int)uVar10 < local_40.ArrayNum) &&
                   ((int)uVar10 < (this->EntryBindingEventField).UserObjectList.ArrayNum)) {
                  uVar5 = 0;
                  if ((int)uVar10 < local_40.ArrayNum) {
                    uVar5 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    pFVar7 = (FNavigationReply *)(*pcVar2)();
                    return pFVar7;
                  }
                  UWidget::SetFocus(*(UWidget **)
                                     (local_40.AllocatorInstance.Data + (ulonglong)uVar10 * 8));
                  uVar5 = 0;
                  if ((int)uVar10 < (this->EntryBindingEventField).UserObjectList.ArrayNum) {
                    uVar5 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar5 == 0) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar3)) {
                    pcVar2 = (code *)swi(3);
                    pFVar7 = (FNavigationReply *)(*pcVar2)();
                    return pFVar7;
                  }
                  pUVar6 = *(UObject **)
                            ((this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data +
                            (ulonglong)uVar10 * 8);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    if (pUVar6 != (UObject *)0x0) {
                      UE::GC::MarkAsReachable(pUVar6);
                    }
                    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                       (pUVar6 != (UObject *)0x0)) {
                      UE::GC::MarkAsReachable(pUVar6);
                    }
                  }
                  local_res8.ObjectIndex = 0;
                  local_res8.ObjectSerialNumber = 0;
                  local_48 = pUVar6;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (pUVar6 != (UObject *)0x0)) {
                    UE::GC::MarkAsReachable(pUVar6);
                  }
                  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_48);
                  (this->FocusedObjectItem).WeakPtr = local_res8;
                  pUVar6 = FWeakObjectPtr::Get(&(this->FocusedObjectItem).WeakPtr);
                  ItemSelectionChangedEvent(this,pUVar6);
                  local_30.Object = (SWidget *)0x0;
                  local_30.SharedReferenceCount.ReferenceController =
                       (TReferenceControllerBase<1> *)0x0;
                  FNavigationReply::Explicit(__return_storage_ptr__,&local_30);
                  goto LAB_14bcadfcf;
                }
              }
            }
            else if (EVar4 == Vertical) {
              if (param_2->NavigationType == Up) {
                uVar5 = iVar8 - 1;
                goto LAB_14bcade2d;
              }
              if (param_2->NavigationType == Down) goto LAB_14bcade2b;
            }
            else if (EVar4 == Radial) {
              if (param_2->NavigationType == Left) {
                uVar9 = iVar8 - 1;
              }
              else {
                if (param_2->NavigationType != Right) goto LAB_14bcadfb0;
                uVar9 = iVar8 + 1;
              }
              uVar5 = (this->EntryBindingEventField).UserObjectList.ArrayNum - 1;
              uVar10 = 0;
              if (((int)uVar9 <= (int)uVar5) && (uVar10 = uVar9, (int)uVar9 < 0))
              goto LAB_14bcade2d;
              goto LAB_14bcade35;
            }
          }
LAB_14bcadfb0:
          (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
          (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
          (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
          *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
          *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
          __return_storage_ptr__->BoundaryRule = Escape;
LAB_14bcadfcf:
          if (local_40.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_40.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
        break;
      }
    }
  }
  (__return_storage_ptr__->EventHandler).Object = (SWidget *)0x0;
  (__return_storage_ptr__->EventHandler).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (__return_storage_ptr__->FocusRecipient).Object = (SWidget *)0x0;
  (__return_storage_ptr__->FocusRecipient).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->FocusDelegate = 0;
  *(undefined8 *)&(__return_storage_ptr__->FocusDelegate).field_0x8 = 0;
  __return_storage_ptr__->BoundaryRule = Escape;
  return __return_storage_ptr__;
}

// OnEntryBindingEvent @ 14bcb3d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_DynamicEntryBox::OnEntryBindingEvent
          (UDS_DynamicEntryBox *this,FDS_EntryBindingEventField *param_1)

{
  FDS_EntryBindingEventField *this_00;
  FScriptContainerElement *pFVar1;
  float fVar2;
  TObjectPtr<UClass>_u_0 TVar4;
  UObject *pUVar5;
  UDS_UserObjectListItem *this_01;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  UClass *pUVar11;
  SPanel *pSVar12;
  UUserWidget *pUVar13;
  FRadialBoxSettings *pFVar14;
  UDS_LogManager *pUVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  float fVar21;
  undefined1 auStackY_288 [32];
  undefined1 local_258;
  undefined1 local_257;
  undefined1 local_256 [2];
  uint local_254;
  FWeakObjectPtr local_250;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> local_248;
  TObjectPtr<UClass>_u_0 local_238;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> local_230;
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> local_220;
  TObjectPtr<UClass>_u_0 local_210;
  UObject *local_208;
  FScriptContainerElement *local_200;
  UObject *local_1f8 [2];
  code *local_1e8;
  undefined4 uStack_1e0;
  uint uStack_1dc;
  code *local_1d8;
  undefined4 uStack_1d0;
  uint uStack_1cc;
  undefined1 local_1c8 [16];
  code *local_1b8;
  longlong lStack_1b0;
  code *local_1a8;
  longlong lStack_1a0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_198;
  ulonglong local_78;
  float fVar3;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_288;
  ClearEntryItemsBinding(this);
  if (this->_padding_ == 0) {
    return;
  }
  this_00 = &this->EntryBindingEventField;
  TArray<TObjectPtr<UDS_UserObjectListItem>,TSizedDefaultAllocator<32>_>::operator=
            (&this_00->UserObjectList,&param_1->UserObjectList);
  TVar4 = (TObjectPtr<UClass>_u_0)this->_padding_;
  local_238 = TVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar4.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
  }
  iVar17 = (this->EntryBindingEventField).UserObjectList.ArrayNum;
  if ((this->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  puVar10 = (undefined8 *)(**(code **)(*(longlong *)this->_padding_ + 0x180))();
  iVar9 = (**(code **)*puVar10)(puVar10);
  if (iVar9 == iVar17) {
LAB_14bcb3efe:
    if (this->RadialWidgetRotate != false) {
      pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
      fVar7 = __real_43b40000;
      fVar21 = __real_43b40000 - pFVar14->StartingAngle;
      pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
      if (pFVar14->bDistributeItemsEvenly == false) {
        UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>
                  ((UDynamicEntryBoxBase *)this,&local_230);
        iVar17 = local_230.ArrayNum;
        pFVar1 = local_230.AllocatorInstance.Data + (longlong)local_230.ArrayNum * 8;
        FVar19.Data = local_230.AllocatorInstance.Data;
        while( true ) {
          if (local_230.ArrayNum != iVar17) {
            local_258 = 0;
            `TCheckedPointerIterator<UDS_UserWidget_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_258);
          }
          local_248.AllocatorInstance.Data = local_230.AllocatorInstance.Data;
          if (FVar19.Data == pFVar1) break;
          if (*(UWidget **)FVar19.Data != (UWidget *)0x0) {
            UWidget::SetRenderTransformAngle(*(UWidget **)FVar19.Data,fVar21);
            pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
            fVar21 = fVar21 - pFVar14->AngleBetweenItems;
            if (fVar21 < 0.0) {
              fVar21 = fVar21 + fVar7;
            }
          }
          FVar19.Data = FVar19.Data + 8;
        }
      }
      else {
        pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
        fVar2 = pFVar14->SectorCentralAngle;
        fVar3 = pFVar14->SectorCentralAngle;
        UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>
                  ((UDynamicEntryBoxBase *)this,&local_248);
        iVar17 = local_248.ArrayNum;
        iVar9 = local_248.ArrayNum;
        if (fVar3 <= fVar7 && fVar7 != fVar2) {
          iVar9 = local_248.ArrayNum + -1;
        }
        pFVar1 = local_248.AllocatorInstance.Data + (longlong)local_248.ArrayNum * 8;
        FVar19.Data = local_248.AllocatorInstance.Data;
        while( true ) {
          if (local_248.ArrayNum != iVar17) {
            local_257 = 0;
            `TCheckedPointerIterator<UDS_UserWidget_*,int,0>::operator!='::__l2::<lambda_1>::
            operator()(&local_257);
          }
          if (FVar19.Data == pFVar1) break;
          if (*(UWidget **)FVar19.Data != (UWidget *)0x0) {
            UWidget::SetRenderTransformAngle(*(UWidget **)FVar19.Data,fVar21);
            pFVar14 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
            fVar21 = fVar21 - pFVar14->SectorCentralAngle / (float)iVar9;
            if (fVar21 < 0.0) {
              fVar21 = fVar21 + fVar7;
            }
          }
          FVar19.Data = FVar19.Data + 8;
        }
      }
      if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.AllocatorInstance.Data);
      }
    }
    uVar20 = 0;
    UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>((UDynamicEntryBoxBase *)this,&local_220);
    uVar16 = (ulonglong)local_220.ArrayNum;
    local_254 = local_220.ArrayNum;
    local_200 = local_220.AllocatorInstance.Data + uVar16 * 8;
    FVar19.Data = local_220.AllocatorInstance.Data;
    uVar18 = uVar20;
    while( true ) {
      pFVar1 = local_200;
      if (local_220.ArrayNum != (uint)uVar16) {
        local_256[0] = 0;
        `TCheckedPointerIterator<UDS_UserWidget_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_256);
      }
      if (FVar19.Data == pFVar1) break;
      pUVar5 = *(UObject **)FVar19.Data;
      if (((pUVar5 != (UObject *)0x0) && (iVar17 = (int)uVar20, -1 < iVar17)) &&
         (iVar17 < (this->EntryBindingEventField).UserObjectList.ArrayNum)) {
        this_01 = *(UDS_UserObjectListItem **)
                   ((this_00->UserObjectList).AllocatorInstance.Data + uVar18);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        local_250.ObjectIndex = 0;
        local_250.ObjectSerialNumber = 0;
        local_208 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&local_250,(FObjectPtr)&local_208);
        UDS_UserObjectListItem::BindViewModels
                  (this_01,(TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_250);
        if (((this->EntryBindingEventField).UserObjectList.ArrayNum <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   (*(longlong *)((this_00->UserObjectList).AllocatorInstance.Data + uVar18) + 0x40)
                   ,this);
        if (((this->EntryBindingEventField).UserObjectList.ArrayNum <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_1e8 = OnFocusedItem;
        uStack_1e0 = 0;
        lStack_1b0 = (ulonglong)uStack_1dc << 0x20;
        local_1b8 = OnFocusedItem;
        TMulticastDelegateRegistration<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_DynamicEntryBox>
                  ((TMulticastDelegateRegistration<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
                    *)(*(longlong *)((this_00->UserObjectList).AllocatorInstance.Data + uVar18) +
                      0x40),(UDS_DynamicEntryBox *)local_1c8,(pmf_7de23257 *)this);
        if (((this->EntryBindingEventField).UserObjectList.ArrayNum <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   (*(longlong *)((this_00->UserObjectList).AllocatorInstance.Data + uVar18) + 0x60)
                   ,this);
        if (((this->EntryBindingEventField).UserObjectList.ArrayNum <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_1d0 = 0;
        local_1d8 = OnFocusLostedItem;
        lStack_1a0 = (ulonglong)uStack_1cc << 0x20;
        local_1a8 = OnFocusLostedItem;
        TMulticastDelegateRegistration<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_DynamicEntryBox>
                  ((TMulticastDelegateRegistration<void___cdecl(UDS_UserObjectListItem_*),FDefaultDelegateUserPolicy>
                    *)(*(longlong *)((this_00->UserObjectList).AllocatorInstance.Data + uVar18) +
                      0x60),(UDS_DynamicEntryBox *)(local_1c8 + 8),(pmf_7de23257 *)this);
        if (((this->EntryBindingEventField).UserObjectList.ArrayNum <= iVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        UDS_UserObjectListItem::SetListItemIndex
                  (*(UDS_UserObjectListItem **)
                    ((this_00->UserObjectList).AllocatorInstance.Data + uVar18),iVar17);
        uVar20 = (ulonglong)(iVar17 + 1);
        uVar18 = uVar18 + 8;
      }
      uVar16 = (ulonglong)local_254;
      FVar19.Data = FVar19.Data + 8;
    }
    pFVar1 = (this_00->UserObjectList).AllocatorInstance.Data;
    if (pFVar1 != pFVar1 + (longlong)(this->EntryBindingEventField).UserObjectList.ArrayNum * 8) {
      pUVar5 = *(UObject **)pFVar1;
      if (pUVar5 == (UObject *)0x0) {
        pUVar15 = UDS_LogManager::GetInst();
        if (pUVar15 != (UDS_LogManager *)0x0) {
          pUVar15 = UDS_LogManager::GetInst();
          local_198._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_198,"UDS_DynamicEntryBox::OnEntryBindingEvent",0x28,Yes);
          UDS_LogManager::PrintLog(pUVar15,1,Warning,local_198.Ptr,0xe1,L"First item is nullptr");
          if ((void *)local_198._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_198._padding_);
          }
        }
      }
      else {
        local_1f8[0] = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        FWeakObjectPtr::operator=(&(this->FocusedObjectItem).WeakPtr,(FObjectPtr)local_1f8);
        ItemSelectionChangedEvent(this,pUVar5);
      }
    }
    if (local_220.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.AllocatorInstance.Data);
    }
  }
  else {
    if ((TVar4.DebugPtr != (UClass *)0x0) &&
       (pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister(), pUVar11 != (UClass *)0x0)) {
      iVar9 = (int)pUVar11->_padding_;
      if (((int)(TVar4.DebugPtr)->_padding_ < iVar9) ||
         ((longlong *)*(undefined1 **)((TVar4.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
          &pUVar11->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        local_210 = TVar4;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
        }
        bVar8 = UDynamicEntryBoxBase::IsEntryClassValid
                          ((UDynamicEntryBoxBase *)this,(TSubclassOf<UUserWidget>)&local_210);
        if (bVar8) {
          UDynamicEntryBox::Reset((UDynamicEntryBox *)this,false);
          pSVar12 = TSharedPtr<SPanel,1>::operator->((TSharedPtr<SPanel,1> *)&this->_padding_);
          puVar10 = (undefined8 *)(**(code **)(*(longlong *)pSVar12 + 0x180))(pSVar12);
          iVar9 = (**(code **)*puVar10)(puVar10);
          if (iVar9 < iVar17) {
            uVar18 = (ulonglong)(uint)(iVar17 - iVar9);
            do {
              pUVar13 = UDynamicEntryBox::CreateEntry<UUserWidget>
                                  ((UDynamicEntryBox *)this,
                                   (TSubclassOf<UUserWidget> *)&local_238.ObjectPtr);
              if (pUVar13 != (UUserWidget *)0x0) {
                Z_Construct_UClass_UDS_UserWidget_NoRegister();
              }
              uVar18 = uVar18 - 1;
            } while (uVar18 != 0);
          }
          goto LAB_14bcb3efe;
        }
      }
    }
    UDynamicEntryBox::Reset((UDynamicEntryBox *)this,true);
  }
  return;
}

// OnFocusLostedItem @ 14bcb5840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_DynamicEntryBox::OnFocusLostedItem(UDS_DynamicEntryBox *this,UDS_UserObjectListItem *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_178 [32];
  uint uVar4;
  wchar_t *pwVar5;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1 == (UDS_UserObjectListItem *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_DynamicEntryBox::OnFocusLostedItem",0x26,Yes);
    pwVar5 = L"OnFocusLostedItem is nullptr";
    uVar4 = 0x130;
  }
  else {
    UDS_UserObjectListItem::GetOwnerWidget(param_1);
    bVar1 = TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> *)local_148,(void *)0x0);
    if (!bVar1) {
      if (this->KeepSelected != false) {
        return;
      }
      pUVar3 = FWeakObjectPtr::Get(local_148);
      bVar1 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                        ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                         &pUVar3[0x19].field_0x20);
      if (!bVar1) {
        return;
      }
      pUVar3 = FWeakObjectPtr::Get(local_148);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &pUVar3[0x19].field_0x20);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_DynamicEntryBox::OnFocusLostedItem",0x26,Yes);
    pwVar5 = L"OnFocusLostedItem widget is nullptr";
    uVar4 = 0x137;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnFocusedItem @ 14bcb5cd0

void __thiscall
UDS_DynamicEntryBox::OnFocusedItem(UDS_DynamicEntryBox *this,UDS_UserObjectListItem *param_1)

{
  UDS_UserObjectListItem *local_res10 [3];
  
  if (param_1 != (UDS_UserObjectListItem *)0x0) {
    local_res10[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->FocusedObjectItem).WeakPtr,(FObjectPtr)local_res10);
    ItemSelectionChangedEvent(this,(UObject *)param_1);
  }
  return;
}

// PostInitProperties @ 14bcbd5f0

void __thiscall UDS_DynamicEntryBox::PostInitProperties(UDS_DynamicEntryBox *this)

{
  UDS_DynamicEntryBox *local_res8 [4];
  
  UObject::PostInitProperties((UObject *)this);
  local_res8[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_DynamicEntryBox *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->OnEntrySetupComplete,(FObjectPtr)local_res8);
  return;
}

// RebuildWidget @ 14bcc0650

TSharedRef<SWidget,1> * __thiscall
UDS_DynamicEntryBox::RebuildWidget
          (UDS_DynamicEntryBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  code *pcVar1;
  EDynamicBoxType EVar2;
  bool bVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FArguments *pFVar5;
  FRadialBoxSettings *pFVar6;
  TSharedRef<SDS_DynamicEntryRadial,1> *pTVar7;
  FArguments *pFVar8;
  TSharedRef<SDS_DynamicEntryVertical,1> *pTVar9;
  FArguments *pFVar10;
  TSharedRef<SDS_DynamicEntryHorizontal,1> *pTVar11;
  T0RequiredArgs local_res10 [8];
  T0RequiredArgs local_res18 [8];
  T0RequiredArgs local_res20 [8];
  SDS_DynamicEntryRadial *local_808;
  FSharedReferencer<1> local_800;
  FLLMScope local_7f8;
  FLLMScope local_7f4;
  FLLMScope local_7f0 [2];
  FWeakObjectPtr local_7e8;
  FWeakObjectPtr local_7e0;
  FWeakObjectPtr local_7d8;
  SDS_DynamicEntryRadial *local_7d0;
  FSharedReferencer<1> local_7c8;
  SDS_DynamicEntryVertical *local_7c0;
  FSharedReferencer<1> local_7b8;
  SDS_DynamicEntryHorizontal *local_7b0;
  FSharedReferencer<1> local_7a8;
  UDS_DynamicEntryBox *local_7a0;
  FName local_798;
  FMemScope local_790;
  UDS_DynamicEntryBox *local_788;
  FName local_780;
  FMemScope local_778;
  UDS_DynamicEntryBox *local_770;
  FName local_768;
  FMemScope local_760;
  undefined8 local_758;
  FSharedReferencer<1> local_750;
  undefined8 local_748;
  FSharedReferencer<1> local_740;
  undefined8 local_738;
  FSharedReferencer<1> local_730;
  undefined8 local_728;
  FSharedReferencer<1> local_720;
  undefined8 local_718;
  FSharedReferencer<1> local_710;
  undefined8 local_708;
  FSharedReferencer<1> local_700;
  TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs> local_6f8;
  TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs> local_6e0;
  TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs> local_6c8;
  TSharedRef<SWidget,1> local_6b0;
  TSharedRef<SDS_DynamicEntryRadial,1> local_6a0;
  TSharedRef<SDS_DynamicEntryVertical,1> local_690;
  TSharedRef<SDS_DynamicEntryHorizontal,1> local_680;
  undefined1 local_670 [536];
  undefined1 local_458 [48];
  FArguments local_428;
  FArguments local_228;
  
  pTVar4 = UDynamicEntryBoxBase::RebuildWidget((UDynamicEntryBoxBase *)this,&local_6b0);
  local_800.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
  local_808 = (SDS_DynamicEntryRadial *)pTVar4->Object;
  if (local_800.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_800.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_800.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_6b0.SharedReferenceCount.ReferenceController);
  EVar2 = UDynamicEntryBoxBase::GetBoxType((UDynamicEntryBoxBase *)this);
  if (EVar2 == Horizontal) {
    local_710.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_718 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_800,&local_710);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_710.ReferenceController);
    pFVar10 = SDS_DynamicEntryHorizontal::FArguments::FArguments(&local_228);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_DynamicEntryBox *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_7d8.ObjectIndex = 0;
    local_7d8.ObjectSerialNumber = 0;
    local_770 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_DynamicEntryBox *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_7d8,(FObjectPtr)&local_770);
    (pFVar10->_WidgetObject).WeakPtr = local_7d8;
    FLLMScope::FLLMScope(local_7f0,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_768 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_760,&local_768,true);
    TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>
              (&local_6c8,"SDS_DynamicEntryHorizontal",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_DynamicEntryBox.cpp"
               ,0x186,local_res20);
    FMemScope::~FMemScope(&local_760);
    FLLMScope::~FLLMScope(local_7f0);
    local_7b0 = local_6c8._Widget.Object;
    local_7a8.ReferenceController = local_6c8._Widget.SharedReferenceCount.ReferenceController;
    if (local_6c8._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_6c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_6c8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if ((SDS_DynamicEntryHorizontal **)&this->_padding_ != &local_7b0) {
      this->_padding_ = (longlong)local_6c8._Widget.Object;
      local_7b0 = (SDS_DynamicEntryHorizontal *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_7a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7a8.ReferenceController);
    pTVar11 = TSlateDecl<SDS_DynamicEntryHorizontal,RequiredArgs::T0RequiredArgs>::operator<<=
                        (&local_6c8,&local_680,pFVar10);
    local_700.ReferenceController = (pTVar11->SharedReferenceCount).ReferenceController;
    local_808 = (SDS_DynamicEntryRadial *)pTVar11->Object;
    if (local_700.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_700.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_700.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_708 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_800,&local_700);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_700.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_680.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6c8._Widget.SharedReferenceCount.ReferenceController);
    pFVar8 = (FArguments *)&local_228;
  }
  else if (EVar2 == Vertical) {
    local_730.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_738 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_800,&local_730);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_730.ReferenceController);
    pFVar8 = SDS_DynamicEntryVertical::FArguments::FArguments(&local_428);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_DynamicEntryBox *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_7e0.ObjectIndex = 0;
    local_7e0.ObjectSerialNumber = 0;
    local_788 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_DynamicEntryBox *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_7e0,(FObjectPtr)&local_788);
    (pFVar8->_WidgetObject).WeakPtr = local_7e0;
    FLLMScope::FLLMScope(&local_7f4,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_780 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_778,&local_780,true);
    TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs>
              (&local_6e0,"SDS_DynamicEntryVertical",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_DynamicEntryBox.cpp"
               ,0x18d,local_res18);
    FMemScope::~FMemScope(&local_778);
    FLLMScope::~FLLMScope(&local_7f4);
    local_7c0 = local_6e0._Widget.Object;
    local_7b8.ReferenceController = local_6e0._Widget.SharedReferenceCount.ReferenceController;
    if (local_6e0._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_6e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_6e0._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if ((SDS_DynamicEntryVertical **)&this->_padding_ != &local_7c0) {
      this->_padding_ = (longlong)local_6e0._Widget.Object;
      local_7c0 = (SDS_DynamicEntryVertical *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_7b8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7b8.ReferenceController);
    pTVar9 = TSlateDecl<SDS_DynamicEntryVertical,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_6e0,&local_690,pFVar8);
    local_720.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_808 = (SDS_DynamicEntryRadial *)pTVar9->Object;
    if (local_720.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_720.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_720.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_728 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_800,&local_720);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_720.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_690.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6e0._Widget.SharedReferenceCount.ReferenceController);
    pFVar8 = &local_428;
  }
  else {
    if (EVar2 != Radial) goto LAB_14bcc0c86;
    local_750.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_758 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_800,&local_750);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_750.ReferenceController);
    pFVar5 = SDS_DynamicEntryRadial::FArguments::FArguments((FArguments *)local_670);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_DynamicEntryBox *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_7e8.ObjectIndex = 0;
    local_7e8.ObjectSerialNumber = 0;
    local_7a0 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_DynamicEntryBox *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&local_7e8,(FObjectPtr)&local_7a0);
    (pFVar5->_WidgetObject).WeakPtr = local_7e8;
    pFVar5->_UseAllottedWidth = true;
    pFVar6 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
    pFVar5->_StartingAngle = pFVar6->StartingAngle;
    pFVar6 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
    pFVar5->_bDistributeItemsEvenly = pFVar6->bDistributeItemsEvenly;
    pFVar6 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
    pFVar5->_AngleBetweenItems = pFVar6->AngleBetweenItems;
    pFVar6 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
    pFVar5->_SectorCentralAngle = pFVar6->SectorCentralAngle;
    FLLMScope::FLLMScope(&local_7f8,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
    local_798 = LLMTagDeclaration_UI_Slate.UniqueName;
    FMemScope::FMemScope(&local_790,&local_798,true);
    TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs>::
    TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs>
              (&local_6f8,"SDS_DynamicEntryRadial",
               "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\BaseWidget\\DS_DynamicEntryBox.cpp"
               ,0x194,local_res10);
    FMemScope::~FMemScope(&local_790);
    FLLMScope::~FLLMScope(&local_7f8);
    local_7d0 = local_6f8._Widget.Object;
    local_7c8.ReferenceController = local_6f8._Widget.SharedReferenceCount.ReferenceController;
    if (local_6f8._Widget.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_6f8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_6f8._Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if ((SDS_DynamicEntryRadial **)&this->_padding_ != &local_7d0) {
      this->_padding_ = (longlong)local_6f8._Widget.Object;
      local_7d0 = (SDS_DynamicEntryRadial *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&local_7c8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_7c8.ReferenceController);
    pTVar7 = TSlateDecl<SDS_DynamicEntryRadial,RequiredArgs::T0RequiredArgs>::operator<<=
                       (&local_6f8,&local_6a0,pFVar5);
    local_740.ReferenceController = (pTVar7->SharedReferenceCount).ReferenceController;
    local_808 = pTVar7->Object;
    if (local_740.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_740.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_740.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_748 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&local_800,&local_740);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_740.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6a0.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_6f8._Widget.SharedReferenceCount.ReferenceController);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_458);
    if ((void *)local_458._8_8_ != (void *)0x0) {
      FMemory::Free((void *)local_458._8_8_);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_458);
    DestructItems<SRadialBox::FSlot::FSlotArguments,int>
              ((FSlotArguments *)local_670._512_8_,local_670._520_4_);
    if ((FSlotArguments *)local_670._512_8_ != (FSlotArguments *)0x0) {
      FMemory::Free((void *)local_670._512_8_);
    }
    pFVar8 = (FArguments *)local_670;
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)pFVar8);
LAB_14bcc0c86:
  if (local_808 == (SDS_DynamicEntryRadial *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)local_808;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = local_800.ReferenceController
  ;
  if (local_800.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_800.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_800.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (SWidget *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TSharedRef<SWidget,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_800.ReferenceController);
  return __return_storage_ptr__;
}

// SetEntriesAngle @ 14bcc60c0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DynamicEntryBox::SetEntriesAngle(UDS_DynamicEntryBox *this)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar4;
  int iVar5;
  FRadialBoxSettings *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  float fVar9;
  undefined1 local_res8 [8];
  TArray<UDS_UserWidget_*,TSizedDefaultAllocator<32>_> local_58 [4];
  float fVar3;
  
  if (this->RadialWidgetRotate != false) {
    pFVar6 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
    fVar4 = __real_43b40000;
    fVar9 = __real_43b40000 - pFVar6->StartingAngle;
    pFVar6 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
    if (pFVar6->bDistributeItemsEvenly == false) {
      UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>((UDynamicEntryBoxBase *)this,local_58);
      iVar5 = local_58[0].ArrayNum;
      pFVar1 = local_58[0].AllocatorInstance.Data + (longlong)local_58[0].ArrayNum * 8;
      FVar7.Data = local_58[0].AllocatorInstance.Data;
      while( true ) {
        if (local_58[0].ArrayNum != iVar5) {
          `TCheckedPointerIterator<UDS_UserWidget_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar7.Data == pFVar1) break;
        if (*(UWidget **)FVar7.Data != (UWidget *)0x0) {
          UWidget::SetRenderTransformAngle(*(UWidget **)FVar7.Data,fVar9);
          pFVar6 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
          fVar9 = fVar9 - pFVar6->AngleBetweenItems;
          if (fVar9 < 0.0) {
            fVar9 = fVar9 + fVar4;
          }
        }
        FVar7.Data = FVar7.Data + 8;
      }
    }
    else {
      pFVar6 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
      fVar2 = pFVar6->SectorCentralAngle;
      fVar3 = pFVar6->SectorCentralAngle;
      UDynamicEntryBoxBase::GetTypedEntries<UDS_UserWidget>((UDynamicEntryBoxBase *)this,local_58);
      iVar5 = local_58[0].ArrayNum;
      iVar8 = local_58[0].ArrayNum;
      if (fVar3 <= fVar4 && fVar4 != fVar2) {
        iVar8 = local_58[0].ArrayNum + -1;
      }
      pFVar1 = local_58[0].AllocatorInstance.Data + (longlong)local_58[0].ArrayNum * 8;
      FVar7.Data = local_58[0].AllocatorInstance.Data;
      while( true ) {
        if (local_58[0].ArrayNum != iVar5) {
          `TCheckedPointerIterator<UDS_UserWidget_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (FVar7.Data == pFVar1) break;
        if (*(UWidget **)FVar7.Data != (UWidget *)0x0) {
          UWidget::SetRenderTransformAngle(*(UWidget **)FVar7.Data,fVar9);
          pFVar6 = UDynamicEntryBoxBase::GetRadialBoxSettings((UDynamicEntryBoxBase *)this);
          fVar9 = fVar9 - pFVar6->SectorCentralAngle / (float)iVar8;
          if (fVar9 < 0.0) {
            fVar9 = fVar9 + fVar4;
          }
        }
        FVar7.Data = FVar7.Data + 8;
      }
    }
    if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].AllocatorInstance.Data);
    }
  }
  return;
}

// SynchronizeProperties @ 14bccaef0

/* WARNING: Removing unreachable block (ram,0x000146a28528) */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_DynamicEntryBox::SynchronizeProperties(UDS_DynamicEntryBox *this)

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
  UDS_DynamicEntryBox *pUStack_6e8;
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

