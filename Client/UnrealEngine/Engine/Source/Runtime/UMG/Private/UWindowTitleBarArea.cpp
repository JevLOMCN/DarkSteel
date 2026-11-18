// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 28

// GetbWindowButtonsEnabled_WrapperImpl @ 146a45fb0

void __cdecl UWindowTitleBarArea::GetbWindowButtonsEnabled_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c8);
  return;
}

// SetbWindowButtonsEnabled_WrapperImpl @ 146a45fd0

void __cdecl UWindowTitleBarArea::SetbWindowButtonsEnabled_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TAttribute<EVisibility> TStack_28;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1c8) = cVar1;
  lVar2 = *(longlong *)((longlong)param_1 + 0x1d0);
  if (lVar2 == 0) {
    return;
  }
  if (*(longlong *)(lVar2 + 0x2d0) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TStack_28.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (cVar1 != '\0') {
    TStack_28.Value.Value.Value = EVisibility::Visible.Value.Value;
  }
  TStack_28.Getter._16_8_ = 0;
  TStack_28.bIsSet = true;
  TStack_28.Getter._0_8_ = 0;
  TStack_28.Getter._8_8_ = 0;
  SPanel::SetVisibility(*(SPanel **)(lVar2 + 0x2d0),&TStack_28);
  return;
}

// GetbDoubleClickTogglesFullscreen_WrapperImpl @ 146a45ff0

void __cdecl
UWindowTitleBarArea::GetbDoubleClickTogglesFullscreen_WrapperImpl(void *param_1,void *param_2)

{
  *(undefined1 *)param_2 = *(undefined1 *)((longlong)param_1 + 0x1c9);
  return;
}

// SetbDoubleClickTogglesFullscreen_WrapperImpl @ 146a46000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWindowTitleBarArea::SetbDoubleClickTogglesFullscreen_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  FSlateApplication *pFVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FDelegateHandle FVar5;
  void *local_res8 [2];
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  cVar1 = *(char *)param_2;
  *(char *)((longlong)param_1 + 0x1c9) = cVar1;
  if (cVar1 != '\0') {
    pFVar2 = FSlateApplication::Get();
    uStack_80 = 0;
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_88 = HandleWindowAction;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBV__TSharedRef_VFGenericWindow___00__W4Type_EWindowAction___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar4 = FDelegateHandle::GenerateNewID();
      puVar3[2] = uVar4;
      *puVar3 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUWindowTitleBarArea____A6A_NAEBV__TSharedRef_VFGenericWindow___00__W4Type_EWindowAction___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      puVar3[3] = 0;
      local_res8[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar3 + 3),(FObjectPtr)local_res8);
      puVar3[4] = local_88;
      puVar3[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    FVar5 = FSlateApplication::RegisterOnWindowActionNotification
                      (pFVar2,(TDelegate<bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,EWindowAction::Type),FDefaultDelegateUserPolicy>
                               *)(local_res8 + 1));
    *(undefined8 *)((longlong)param_1 + 0x1e0) = *(undefined8 *)FVar5.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
    return;
  }
  if (*(longlong *)((longlong)param_1 + 0x1e0) != 0) {
    pFVar2 = FSlateApplication::Get();
    FSlateApplication::UnregisterOnWindowActionNotification
              (pFVar2,(FDelegateHandle)*(ulong64 *)((longlong)param_1 + 0x1e0));
    *(undefined8 *)((longlong)param_1 + 0x1e0) = 0;
  }
  return;
}

// StaticClass @ 146a461e0

UClass * __cdecl UWindowTitleBarArea::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWindowTitleBarArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WindowTitleBarArea",
               &Z_Registration_Info_UClass_UWindowTitleBarArea.InnerSingleton,
               StaticRegisterNativesUWindowTitleBarArea,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWindowTitleBarArea>,
               InternalVTableHelperCtorCaller<UWindowTitleBarArea>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindowTitleBarArea.InnerSingleton;
}

// UWindowTitleBarArea @ 146a57ca0

/* WARNING: Enum "Type": Some values do not have unique names */

UWindowTitleBarArea * __thiscall
UWindowTitleBarArea::UWindowTitleBarArea(UWindowTitleBarArea *this,FVTableHelper *param_1)

{
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyWindowTitleBarArea).Object = (SWindowTitleBarArea *)0x0;
  (this->MyWindowTitleBarArea).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WindowActionNotificationHandle).ID = 0;
  return this;
}

// UWindowTitleBarArea @ 146a57cf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UWindowTitleBarArea * __thiscall
UWindowTitleBarArea::UWindowTitleBarArea(UWindowTitleBarArea *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UContentWidget::UContentWidget((UContentWidget *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0xfe;
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  (this->MyWindowTitleBarArea).Object = (SWindowTitleBarArea *)0x0;
  (this->MyWindowTitleBarArea).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->WindowActionNotificationHandle).ID = 0;
  UWidget::SetVisibilityInternal((UWidget *)this,Visible);
  this->bDoubleClickTogglesFullscreen = false;
  return this;
}

// ~UWindowTitleBarArea @ 146a58d80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWindowTitleBarArea::~UWindowTitleBarArea(UWindowTitleBarArea *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyWindowTitleBarArea).SharedReferenceCount.ReferenceController);
  UContentWidget::~UContentWidget((UContentWidget *)this);
  return;
}

// GetPrivateStaticClass @ 146a78690

UClass * __cdecl UWindowTitleBarArea::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWindowTitleBarArea.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WindowTitleBarArea",
               &Z_Registration_Info_UClass_UWindowTitleBarArea.InnerSingleton,
               StaticRegisterNativesUWindowTitleBarArea,0x1e8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWindowTitleBarArea>,
               InternalVTableHelperCtorCaller<UWindowTitleBarArea>,local_res8,
               UContentWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindowTitleBarArea.InnerSingleton;
}

// GetSlotClass @ 146a793f0

/* WARNING: Enum "Type": Some values do not have unique names */

UClass * __thiscall UWindowTitleBarArea::GetSlotClass(UWindowTitleBarArea *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WindowTitleBarAreaSlot",
               &Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton,
               UWindowTitleBarAreaSlot::StaticRegisterNativesUWindowTitleBarAreaSlot,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UWindowTitleBarAreaSlot>
               ,InternalVTableHelperCtorCaller<UWindowTitleBarAreaSlot>,aFStackX_8,
               UPanelSlot::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWindowTitleBarAreaSlot.InnerSingleton;
}

// HandleWindowAction @ 146a79d90

/* WARNING: Removing unreachable block (ram,0x000146a79e94) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UWindowTitleBarArea::HandleWindowAction
          (UWindowTitleBarArea *this,TSharedRef<FGenericWindow,1> *param_1,Type param_2)

{
  int *piVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar8;
  FString local_18;
  
  pUVar3 = GEngine;
  if ((GEngine == (UEngine *)0x0) || (1 < param_2 - Maximize)) {
    return false;
  }
  pTVar8 = &GEngine->DeferredCommands;
  ::FString::FString(&local_18,L"TOGGLE_FULLSCREEN");
  pFVar7 = (pTVar8->AllocatorInstance).Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_18) &&
     (((FScriptContainerElement *)&local_18 <
       pFVar7 + (longlong)(pUVar3->DeferredCommands).ArrayMax * 0x10 &&
      (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar4)))) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  iVar6 = (pUVar3->DeferredCommands).ArrayNum;
  piVar1 = &(pUVar3->DeferredCommands).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar8->AllocatorInstance,piVar1);
  }
  (pUVar3->DeferredCommands).ArrayNum = iVar6 + 1;
  pFVar7 = (pTVar8->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_18.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_18.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_18.Data.ArrayMax;
  return true;
}

// IsDoubleClickTogglesFullscreen @ 146a7c160

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWindowTitleBarArea::IsDoubleClickTogglesFullscreen(UWindowTitleBarArea *this)

{
  return this->bDoubleClickTogglesFullscreen;
}

// IsWindowButtonsEnabled @ 146a7c810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UWindowTitleBarArea::IsWindowButtonsEnabled(UWindowTitleBarArea *this)

{
  return this->bWindowButtonsEnabled;
}

// OnSlotAdded @ 146a86700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UWindowTitleBarArea::OnSlotAdded(UWindowTitleBarArea *this,UPanelSlot *param_1)

{
  int iVar1;
  UClass *pUVar2;
  TSharedRef<SWindowTitleBarArea,1> *pTVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  TSharedRef<SWindowTitleBarArea,1> local_28;
  FString local_18;
  
  if ((this->MyWindowTitleBarArea).Object != (SWindowTitleBarArea *)0x0) {
    if (param_1 == (UPanelSlot *)0x0) {
      pFVar4 = GetTypeName<UWindowTitleBarAreaSlot>((FString *)&local_28);
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = UWindowTitleBarAreaSlot::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pFVar4 = GetTypeName<UWindowTitleBarAreaSlot>((FString *)&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UPanelSlot>(&local_18,param_1);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    pTVar3 = TSharedPtr<SWindowTitleBarArea,1>::ToSharedRef(&this->MyWindowTitleBarArea,&local_28);
    UWindowTitleBarAreaSlot::BuildSlot((UWindowTitleBarAreaSlot *)param_1,pTVar3);
  }
  return;
}

// OnSlotRemoved @ 146a86a00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UWindowTitleBarArea::OnSlotRemoved(UWindowTitleBarArea *this,UPanelSlot *param_1)

{
  SWindowTitleBarArea *this_00;
  
  this_00 = (this->MyWindowTitleBarArea).Object;
  if (this_00 != (SWindowTitleBarArea *)0x0) {
    SWindowTitleBarArea::SetContent(this_00,&SNullWidget::NullWidget);
    return;
  }
  return;
}

// PostLoad @ 146a8a280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UWindowTitleBarArea::PostLoad(UWindowTitleBarArea *this)

{
  UWidget *pUVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPanelSlot *pUVar6;
  UClass *pUVar7;
  UPanelSlot *pUVar8;
  longlong *plVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  UPanelWidget::PostLoad((UPanelWidget *)this);
  iVar5 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if ((0 < iVar5) &&
     (pUVar6 = UContentWidget::GetContentSlot((UContentWidget *)this), pUVar6 != (UPanelSlot *)0x0))
  {
    pUVar7 = UWindowTitleBarAreaSlot::StaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar5 * 8)
        != &pUVar7->_padding_)) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar7 = UWindowTitleBarAreaSlot::StaticClass();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar7);
      local_98._8_8_ = this;
      pUVar6 = (UPanelSlot *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      if (local_98._64_8_ != 0) {
        plVar9 = (longlong *)(local_98 + 0x50);
        if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_98._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
      pUVar8 = UContentWidget::GetContentSlot((UContentWidget *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar1 = (pUVar8->Content).field0_0x0.DebugPtr, pUVar1 != (UWidget *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar1);
      }
      pUVar1 = (pUVar8->Content).field0_0x0.DebugPtr;
      (pUVar6->Content).field0_0x0.DebugPtr = pUVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      (pUVar1->Slot).field0_0x0.DebugPtr = pUVar6;
      iVar5 = (int)this->_padding_;
      if (iVar5 < 1) {
        local_a8 = 0;
        local_a0 = (longlong)iVar5;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar2 = (undefined8 *)this->_padding_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      *puVar2 = pUVar6;
    }
  }
  return;
}

// RebuildWidget @ 146a8c790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UWindowTitleBarArea::RebuildWidget
          (UWindowTitleBarArea *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  SWindowTitleBarArea *pSVar2;
  UGameViewportClient *pUVar3;
  code *pcVar4;
  SWindow *pSVar5;
  atomic<int> aVar6;
  TConsoleVariableData<bool> *pTVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  atomic<int> aVar13;
  FArguments *pFVar14;
  TSharedRef<SWidget,1> *pTVar15;
  FSlateApplication *pFVar16;
  undefined8 *puVar17;
  ulong64 uVar18;
  FDelegateHandle FVar19;
  UWindowTitleBarAreaSlot *pUVar20;
  UClass *pUVar21;
  TSharedRef<SWindowTitleBarArea,1> *pTVar22;
  UWindowTitleBarAreaSlot *pUVar23;
  UWindowTitleBarAreaSlot *pUVar24;
  bool bVar25;
  bool bVar26;
  TReferenceControllerBase<1> *pTVar27;
  undefined4 local_res8;
  undefined4 uStackX_c;
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  uint uStack_38c;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_388;
  FDelegateAllocation local_380;
  SWindow *local_370;
  TReferenceControllerBase<1> *pTStack_368;
  undefined1 local_360 [8];
  FDelegateAllocation local_358;
  SWindowTitleBarArea *local_348;
  FSharedReferencer<1> local_340;
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs> local_338;
  UWindowTitleBarArea *local_320;
  UWindowTitleBarArea *local_318;
  FDestructionSentinel local_310;
  FDestructionSentinel local_2f8;
  FDelegateAllocation *local_2e0;
  FDestructionSentinel local_2d8;
  FDelegateAllocation *local_2c0;
  undefined1 local_2b8 [24];
  undefined1 local_2a0 [536];
  undefined1 local_88 [32];
  FSharedReferencer<1> local_68;
  undefined1 local_60 [32];
  
  pUVar24 = (UWindowTitleBarAreaSlot *)0x0;
  local_res8 = 0;
  pFVar14 = SWindowTitleBarArea::FArguments::FArguments((FArguments *)local_2a0);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SWindowTitleBarArea,RequiredArgs::T0RequiredArgs>
            (&local_338,"SWindowTitleBarArea",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\WindowTitleBarArea.cpp"
             ,0x36,(T0RequiredArgs *)&local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pSVar2 = local_338._Widget.Object;
  if ((local_338._Widget.Object == (SWindowTitleBarArea *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar15;
  }
  SWidget::SWidgetConstruct((SWidget *)local_338._Widget.Object,(FSlateBaseNamedArgs *)pFVar14);
  SWindowTitleBarArea::Construct(local_338._Widget.Object,pFVar14);
  if ((local_338._Widget.Object == (SWindowTitleBarArea *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar15;
  }
  if (((local_338._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_338._Widget.Object)->_padding_ + 0x228))(local_338._Widget.Object);
    bVar11 = 0;
    if (cVar10 != '\0') goto LAB_146a8c8e1;
  }
  else {
LAB_146a8c8e1:
    bVar11 = 0x20;
  }
  FVar8.ReferenceController = local_338._Widget.SharedReferenceCount.ReferenceController;
  *(byte *)&(local_338._Widget.Object)->_padding_ =
       (byte)(local_338._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_338._Widget.Object)->_padding_ =
       (byte)(local_338._Widget.Object)->_padding_ | bVar11;
  pbVar1 = (byte *)((longlong)&(local_338._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  local_338._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_338._Widget.Object = (SWindowTitleBarArea *)0x0;
  if ((pSVar2 == (SWindowTitleBarArea *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar15;
  }
  local_348 = pSVar2;
  local_340.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyWindowTitleBarArea != (TSharedPtr<SWindowTitleBarArea,1> *)&local_348) {
    (this->MyWindowTitleBarArea).Object = pSVar2;
    local_348 = (SWindowTitleBarArea *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyWindowTitleBarArea).SharedReferenceCount,&local_340);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_340.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_60);
  if ((void *)local_60._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_60);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_88);
  if ((void *)local_88._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_88);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_2a0);
  if (this->bDoubleClickTogglesFullscreen == false) {
    if ((this->WindowActionNotificationHandle).ID != 0) {
      pFVar16 = FSlateApplication::Get();
      FSlateApplication::UnregisterOnWindowActionNotification
                (pFVar16,(FDelegateHandle)(this->WindowActionNotificationHandle).ID);
      (this->WindowActionNotificationHandle).ID = 0;
    }
  }
  else {
    pFVar16 = FSlateApplication::Get();
    local_388.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_380.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_380.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_388,(FWriteAccessScope *)&local_2f8);
    local_2e0 = &local_380;
    puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_380);
    if (puVar17 != (undefined8 *)0x0) {
      *puVar17 = &
                 ___7__TCommonDelegateInstanceState___A6A_NAEBV__TSharedRef_VFGenericWindow___00__W4Type_EWindowAction___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar18 = FDelegateHandle::GenerateNewID();
      puVar17[2] = uVar18;
      *puVar17 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUWindowTitleBarArea____A6A_NAEBV__TSharedRef_VFGenericWindow___00__W4Type_EWindowAction___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar17[3] = 0;
      local_320 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_320);
      puVar17[4] = HandleWindowAction;
      puVar17[5] = (ulonglong)uStack_38c << 0x20;
    }
    if (local_2f8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2f8.Accessor,&local_2f8);
    }
    FVar19 = FSlateApplication::RegisterOnWindowActionNotification
                       (pFVar16,(TDelegate<bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,EWindowAction::Type),FDefaultDelegateUserPolicy>
                                 *)local_2b8);
                    /* WARNING: Load size is inaccurate */
    (this->WindowActionNotificationHandle).ID = *FVar19.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_388,(FWriteAccessScope *)&local_310);
    if ((local_380.DelegateSize != 0) &&
       (local_380.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_380.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_380,0,0,0x10);
      local_380.DelegateSize = 0;
    }
    if (local_310.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_310.Accessor,&local_310);
    }
    if (local_380.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_380.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_388.AccessDetector);
  }
  if (((this->MyWindowTitleBarArea).Object == (SWindowTitleBarArea *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar15;
  }
  pSVar2 = (this->MyWindowTitleBarArea).Object;
  local_360 = (undefined1  [8])0x0;
  local_358.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_358.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_360,
             (FWriteAccessScope *)&local_2d8);
  local_2c0 = &local_358;
  puVar17 = UE::Core::Private::DelegateAllocate(0x30,&local_358);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar18 = FDelegateHandle::GenerateNewID();
    puVar17[2] = uVar18;
    *puVar17 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUWindowTitleBarArea____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar17[3] = 0;
    local_318 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar17 + 3),(FObjectPtr)&local_318);
    puVar17[4] = RequestToggleFullscreen;
    puVar17[5] = (ulonglong)uStack_38c << 0x20;
  }
  if (local_2d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&pSVar2->RequestToggleFullscreen,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_360);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_360);
  if (local_358.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_358.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_360);
  iVar12 = UPanelWidget::GetChildrenCount((UPanelWidget *)this);
  if (0 < iVar12) {
    pUVar20 = (UWindowTitleBarAreaSlot *)UContentWidget::GetContentSlot((UContentWidget *)this);
    if (pUVar20 == (UWindowTitleBarAreaSlot *)0x0) {
LAB_146a8ccdb:
      pUVar20 = pUVar24;
    }
    else {
      pUVar21 = UWindowTitleBarAreaSlot::StaticClass();
      iVar12 = (int)pUVar21->_padding_;
      if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar12) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
          &pUVar21->_padding_)) goto LAB_146a8ccdb;
    }
    pTVar22 = TSharedPtr<SWindowTitleBarArea,1>::ToSharedRef
                        (&this->MyWindowTitleBarArea,
                         (TSharedRef<SWindowTitleBarArea,1> *)(local_2b8 + 8));
    UWindowTitleBarAreaSlot::BuildSlot(pUVar20,pTVar22);
  }
  if ((GEngine == (UEngine *)0x0) ||
     (pUVar3 = (GEngine->GameViewport).field0_0x0.DebugPtr, pUVar3 == (UGameViewportClient *)0x0)) {
    pUVar20 = (UWindowTitleBarAreaSlot *)CONCAT44(uStackX_c,local_res8);
    bVar9 = false;
  }
  else {
    pUVar23 = (UWindowTitleBarAreaSlot *)(pUVar3->Window).WeakReferenceCount.ReferenceController;
    bVar25 = true;
    pUVar20 = pUVar23;
    bVar9 = bVar25;
    if (pUVar23 != (UWindowTitleBarAreaSlot *)0x0) {
      aVar6 = *(atomic<int> *)&pUVar23->_padding_;
      do {
        pUVar20 = pUVar24;
        if (aVar6 == (atomic<int>)0x0) goto LAB_146a8cd59;
        LOCK();
        aVar13 = *(atomic<int> *)&pUVar23->_padding_;
        bVar26 = aVar6 == aVar13;
        if (bVar26) {
          *(atomic<int> *)&pUVar23->_padding_ = (atomic<int>)((int)aVar6 + 1);
          aVar13 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar13;
      } while (!bVar26);
      pUVar20 = pUVar23;
      bVar9 = true;
      if ((pUVar3->Window).Object != (SWindow *)0x0) {
        bVar9 = true;
        goto LAB_146a8cd5c;
      }
    }
  }
LAB_146a8cd59:
  bVar25 = bVar9;
  bVar9 = false;
  pUVar23 = pUVar20;
LAB_146a8cd5c:
  if (bVar25) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pUVar23);
  }
  if (bVar9) {
    if (((this->MyWindowTitleBarArea).Object == (SWindowTitleBarArea *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar15;
    }
    pSVar2 = (this->MyWindowTitleBarArea).Object;
    pUVar3 = (GEngine->GameViewport).field0_0x0.DebugPtr;
    pTVar27 = (pUVar3->Window).WeakReferenceCount.ReferenceController;
    if (pTVar27 == (TReferenceControllerBase<1> *)0x0) {
      local_370 = (SWindow *)0x0;
    }
    else {
      aVar6 = pTVar27->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          local_370 = (SWindow *)0x0;
          pTVar27 = (TReferenceControllerBase<1> *)0x0;
          goto LAB_146a8ce08;
        }
        LOCK();
        aVar13 = pTVar27->SharedReferenceCount;
        bVar9 = aVar6 == aVar13;
        if (bVar9) {
          pTVar27->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
          aVar13 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar13;
      } while (!bVar9);
      local_370 = (pUVar3->Window).Object;
      LOCK();
      pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_146a8ce08:
    pSVar5 = (pSVar2->GameWindow).Object;
    pTStack_368 = (pSVar2->GameWindow).SharedReferenceCount.ReferenceController;
    (pSVar2->GameWindow).Object = local_370;
    (pSVar2->GameWindow).SharedReferenceCount.ReferenceController = pTVar27;
    local_370 = pSVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_368)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  }
  if (((this->MyWindowTitleBarArea).Object == (SWindowTitleBarArea *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar15;
  }
  pTVar7 = UE::UMG::Private::CVarForceWindowButtonsHidden.Ref;
  pSVar2 = (this->MyWindowTitleBarArea).Object;
  bVar9 = IsInParallelGameThread();
  if ((bVar9) ||
     (bVar9 = IsInGameThread(), pUVar20 = (UWindowTitleBarAreaSlot *)&DAT_00000001, bVar9)) {
    pUVar20 = pUVar24;
  }
  if (*(bool *)((longlong)&pUVar20->_padding_ + (longlong)pTVar7->ShadowedValue) == false) {
    bVar9 = this->bWindowButtonsEnabled;
  }
  else {
    bVar9 = false;
  }
  SWindowTitleBarArea::SetWindowButtonsVisibility(pSVar2,bVar9);
  if (((this->MyWindowTitleBarArea).Object == (SWindowTitleBarArea *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar15;
  }
  pSVar2 = (this->MyWindowTitleBarArea).Object;
  pTVar27 = (this->MyWindowTitleBarArea).SharedReferenceCount.ReferenceController;
  if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar2 == (SWindowTitleBarArea *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pTVar15 = (TSharedRef<SWidget,1> *)(*pcVar4)();
    return pTVar15;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar27;
  if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a8ebb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWindowTitleBarArea::ReleaseSlateResources(UWindowTitleBarArea *this,bool param_1)

{
  FSlateApplication *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UPanelWidget::ReleaseSlateResources((UPanelWidget *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyWindowTitleBarArea != (TSharedPtr<SWindowTitleBarArea,1> *)&local_18) {
    (this->MyWindowTitleBarArea).Object = (SWindowTitleBarArea *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyWindowTitleBarArea).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  if ((this->WindowActionNotificationHandle).ID != 0) {
    this_00 = FSlateApplication::Get();
    FSlateApplication::UnregisterOnWindowActionNotification
              (this_00,(FDelegateHandle)(this->WindowActionNotificationHandle).ID);
    (this->WindowActionNotificationHandle).ID = 0;
  }
  return;
}

// RequestToggleFullscreen @ 146a90b20

/* WARNING: Removing unreachable block (ram,0x000146a90c17) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UWindowTitleBarArea::RequestToggleFullscreen(UWindowTitleBarArea *this)

{
  int *piVar1;
  code *pcVar2;
  UEngine *pUVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  FString local_18;
  
  pUVar3 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pTVar7 = &GEngine->DeferredCommands;
    ::FString::FString(&local_18,L"TOGGLE_FULLSCREEN");
    pFVar6 = (pTVar7->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_18) &&
        ((FScriptContainerElement *)&local_18 <
         pFVar6 + (longlong)(pUVar3->DeferredCommands).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar5 = (pUVar3->DeferredCommands).ArrayNum;
    piVar1 = &(pUVar3->DeferredCommands).ArrayMax;
    if (iVar5 == *piVar1) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar7->AllocatorInstance,piVar1);
    }
    (pUVar3->DeferredCommands).ArrayNum = iVar5 + 1;
    pFVar6 = (pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
    *(undefined8 *)pFVar6 = 0;
    *(FScriptContainerElement **)pFVar6 = local_18.Data.AllocatorInstance.Data;
    *(int *)(pFVar6 + 8) = local_18.Data.ArrayNum;
    *(int *)(pFVar6 + 0xc) = local_18.Data.ArrayMax;
  }
  return;
}

// SetDoubleClickTogglesFullscreen @ 146a933e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWindowTitleBarArea::SetDoubleClickTogglesFullscreen(UWindowTitleBarArea *this,bool param_1)

{
  FSlateApplication *pFVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  FDelegateHandle FVar4;
  UWindowTitleBarArea *local_res8;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  bool local_78;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  this->bDoubleClickTogglesFullscreen = param_1;
  if (param_1) {
    pFVar1 = FSlateApplication::Get();
    uStack_80 = 0;
    local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_88 = HandleWindowAction;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_60.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    local_38 = &local_60;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6A_NAEBV__TSharedRef_VFGenericWindow___00__W4Type_EWindowAction___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUWindowTitleBarArea____A6A_NAEBV__TSharedRef_VFGenericWindow___00__W4Type_EWindowAction___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
      puVar2[4] = local_88;
      puVar2[5] = CONCAT44(uStack_7c,uStack_80);
    }
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
    FVar4 = FSlateApplication::RegisterOnWindowActionNotification
                      (pFVar1,(TDelegate<bool___cdecl(TSharedRef<FGenericWindow,1>_const_&,EWindowAction::Type),FDefaultDelegateUserPolicy>
                               *)&stack0x00000018);
                    /* WARNING: Load size is inaccurate */
    (this->WindowActionNotificationHandle).ID = *FVar4.ID;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_88);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_60,0,0,0x10);
      local_60.DelegateSize = 0;
    }
    if (local_78 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_7c,uStack_80),
                 (FDestructionSentinel *)&local_88);
    }
    if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_60.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
    return;
  }
  if ((this->WindowActionNotificationHandle).ID != 0) {
    pFVar1 = FSlateApplication::Get();
    FSlateApplication::UnregisterOnWindowActionNotification
              (pFVar1,(FDelegateHandle)(this->WindowActionNotificationHandle).ID);
    (this->WindowActionNotificationHandle).ID = 0;
  }
  return;
}

// SetHorizontalAlignment @ 146a93a90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWindowTitleBarArea::SetHorizontalAlignment(UWindowTitleBarArea *this,EHorizontalAlignment param_1)

{
  undefined1 *puVar1;
  SWindowTitleBarArea *pSVar2;
  FSingleWidgetChildrenWithBasicLayoutSlot *pFVar3;
  
  pSVar2 = (this->MyWindowTitleBarArea).Object;
  if (pSVar2 == (SWindowTitleBarArea *)0x0) {
    return;
  }
  puVar1 = &(pSVar2->ChildSlot).field_0x50;
  if (*(EHorizontalAlignment *)&(pSVar2->ChildSlot).field_0x50 != param_1) {
    *(EHorizontalAlignment *)puVar1 = param_1;
    pFVar3 = &pSVar2->ChildSlot;
    if (puVar1 == (undefined1 *)0x0) {
      pFVar3 = (FSingleWidgetChildrenWithBasicLayoutSlot *)0x0;
    }
    FSlotBase::Invalidate((FSlotBase *)&pFVar3->field_0x20,Layout);
    return;
  }
  return;
}

// SetPadding @ 146a94530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWindowTitleBarArea::SetPadding(UWindowTitleBarArea *this,FMargin *param_1)

{
  SWindowTitleBarArea *this_00;
  TAttribute<FMargin> local_38;
  
  this_00 = (this->MyWindowTitleBarArea).Object;
  if (this_00 != (SWindowTitleBarArea *)0x0) {
    local_38.Value.Left = param_1->Left;
    local_38.Value.Top = param_1->Top;
    local_38.Value.Right = param_1->Right;
    local_38.Value.Bottom = param_1->Bottom;
    local_38.bIsSet = true;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SWindowTitleBarArea::SetPadding(this_00,&local_38);
  }
  return;
}

// SetVerticalAlignment @ 146a95130

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UWindowTitleBarArea::SetVerticalAlignment(UWindowTitleBarArea *this,EVerticalAlignment param_1)

{
  SWindowTitleBarArea *pSVar1;
  FSingleWidgetChildrenWithBasicLayoutSlot *pFVar2;
  
  pSVar1 = (this->MyWindowTitleBarArea).Object;
  if (pSVar1 == (SWindowTitleBarArea *)0x0) {
    return;
  }
  if (*(EVerticalAlignment *)&(pSVar1->ChildSlot).field_0x54 != param_1) {
    *(EVerticalAlignment *)&(pSVar1->ChildSlot).field_0x54 = param_1;
    pFVar2 = &pSVar1->ChildSlot;
    if (pSVar1 == (SWindowTitleBarArea *)0xfffffffffffffd98) {
      pFVar2 = (FSingleWidgetChildrenWithBasicLayoutSlot *)0x0;
    }
    FSlotBase::Invalidate((FSlotBase *)&pFVar2->field_0x20,Layout);
    return;
  }
  return;
}

// SetWindowButtonsEnabled @ 146a95630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWindowTitleBarArea::SetWindowButtonsEnabled(UWindowTitleBarArea *this,bool param_1)

{
  SWindowTitleBarArea *pSVar1;
  code *pcVar2;
  bool bVar3;
  TAttribute<EVisibility> TStack_28;
  
  this->bWindowButtonsEnabled = param_1;
  pSVar1 = (this->MyWindowTitleBarArea).Object;
  if (pSVar1 == (SWindowTitleBarArea *)0x0) {
    return;
  }
  if ((pSVar1->WindowButtonsBox).Object == (SVerticalBox *)0x0) {
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
  TStack_28.Value.Value.Value = EVisibility::Collapsed.Value.Value;
  if (param_1) {
    TStack_28.Value.Value.Value = EVisibility::Visible.Value.Value;
  }
  TStack_28.Getter._16_8_ = 0;
  TStack_28.bIsSet = true;
  TStack_28.Getter._0_8_ = 0;
  TStack_28.Getter._8_8_ = 0;
  SPanel::SetVisibility((SPanel *)(pSVar1->WindowButtonsBox).Object,&TStack_28);
  return;
}

// StaticRegisterNativesUWindowTitleBarArea @ 146a96a10

void __cdecl UWindowTitleBarArea::StaticRegisterNativesUWindowTitleBarArea(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UWindowTitleBarArea_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execSetHorizontalAlignment @ 146aa8900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWindowTitleBarArea::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SWindowTitleBarArea **)&param_1[0xb].field_0x18 != (SWindowTitleBarArea *)0x0) {
    SWindowTitleBarArea::SetHAlign
              (*(SWindowTitleBarArea **)&param_1[0xb].field_0x18,(uint)local_res8[0]);
  }
  return;
}

// execSetPadding @ 146aa9900

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWindowTitleBarArea::execSetPadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FMargin local_58;
  FMargin local_48;
  TAttribute<FMargin> local_38;
  
  local_58.Left = 0.0;
  local_58.Top = 0.0;
  local_58.Right = 0.0;
  local_58.Bottom = 0.0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_48.Left = local_58.Left;
  local_48.Top = local_58.Top;
  local_48.Right = local_58.Right;
  local_48.Bottom = local_58.Bottom;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SWindowTitleBarArea **)&param_1[0xb].field_0x18 != (SWindowTitleBarArea *)0x0) {
    local_38.bIsSet = true;
    local_38.Value.Left = local_58.Left;
    local_38.Value.Top = local_58.Top;
    local_38.Value.Right = local_58.Right;
    local_38.Value.Bottom = local_58.Bottom;
    local_38.Getter._16_8_ = 0;
    local_38.Getter._0_8_ = 0;
    local_38.Getter._8_8_ = 0;
    SWindowTitleBarArea::SetPadding(*(SWindowTitleBarArea **)&param_1[0xb].field_0x18,&local_38);
  }
  return;
}

// execSetVerticalAlignment @ 146aaa560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWindowTitleBarArea::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(SWindowTitleBarArea **)&param_1[0xb].field_0x18 != (SWindowTitleBarArea *)0x0) {
    SWindowTitleBarArea::SetVAlign
              (*(SWindowTitleBarArea **)&param_1[0xb].field_0x18,(uint)local_res8[0]);
  }
  return;
}

