// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 115

// StaticClass @ 146a4b020

UClass * __cdecl UWidgetBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBlueprintLibrary",
               &Z_Registration_Info_UClass_UWidgetBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUWidgetBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidgetBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UWidgetBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintLibrary.InnerSingleton;
}

// UWidgetBlueprintLibrary @ 146a56e10

UWidgetBlueprintLibrary * __thiscall
UWidgetBlueprintLibrary::UWidgetBlueprintLibrary
          (UWidgetBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWidgetBlueprintLibrary__6B_;
  return this;
}

// UWidgetBlueprintLibrary @ 146a56e40

UWidgetBlueprintLibrary * __thiscall
UWidgetBlueprintLibrary::UWidgetBlueprintLibrary
          (UWidgetBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UWidgetBlueprintLibrary__6B_;
  return this;
}

// ~UWidgetBlueprintLibrary @ 146a58b10

void __thiscall UWidgetBlueprintLibrary::~UWidgetBlueprintLibrary(UWidgetBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UWidgetBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// CancelDragDrop @ 146a60620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::CancelDragDrop(void)

{
  FSlateApplication *this;
  
  this = FSlateApplication::Get();
  FSlateApplication::CancelDragDrop(this);
  return;
}

// CaptureJoystick @ 146a606f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::CaptureJoystick
          (FEventReply *__return_storage_ptr__,FEventReply *param_1,UWidget *param_2,bool param_3)

{
  SetUserFocus(__return_storage_ptr__,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// CaptureMouse @ 146a60710

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::CaptureMouse
          (FEventReply *__return_storage_ptr__,FEventReply *param_1,UWidget *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  FEventReply *pFVar7;
  SWidget *pSVar8;
  TSharedPtr<SWidget,1> local_18;
  
  if (param_2 != (UWidget *)0x0) {
    UWidget::GetCachedWidget(param_2,&local_18);
    if (local_18.Object != (SWidget *)0x0) {
      pSVar8 = local_18.Object;
      if ((local_18.Object == (SWidget *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), pSVar8 = local_18.Object, bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FEventReply *)(*pcVar4)();
        return pFVar7;
      }
      FVar5.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar8 == (SWidget *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FEventReply *)(*pcVar4)();
        return pFVar7;
      }
      (param_1->NativeReply).MouseCaptor.Object = pSVar8;
      if (FVar5.ReferenceController !=
          (param_1->NativeReply).MouseCaptor.WeakReferenceCount.ReferenceController) {
        if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar5.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FVar5.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (param_1->NativeReply).MouseCaptor.WeakReferenceCount.ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar3->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
        (param_1->NativeReply).MouseCaptor.WeakReferenceCount.ReferenceController =
             FVar5.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
      FReply::operator=(&param_1->NativeReply,&param_1->NativeReply);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  return __return_storage_ptr__;
}

// ClearUserFocus @ 146a60ed0

/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::ClearUserFocus
          (FEventReply *__return_storage_ptr__,FEventReply *param_1,bool param_2)

{
  FReply *pFVar1;
  
  pFVar1 = FReply::ClearUserFocus(&param_1->NativeReply,SetDirectly,param_2);
  FReply::operator=(&param_1->NativeReply,pFVar1);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  return __return_storage_ptr__;
}

// Create @ 146a67fb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UUserWidget * __cdecl
UWidgetBlueprintLibrary::Create
          (UObject *param_1,TSubclassOf<UUserWidget> param_2,APlayerController *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UUserWidget *pUVar5;
  UWorld *pUVar6;
  UObject *local_res20;
  
  lVar2 = *(longlong *)param_2.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar4 = UUserWidget::StaticClass();
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
         (local_res20 = *(UObject **)param_2.Class.field0_0x0, local_res20 != (UObject *)0x0)) {
        if (param_3 != (APlayerController *)0x0) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(local_res20);
          }
          pUVar5 = CreateWidget<UUserWidget,APlayerController_*>
                             (param_3,(TSubclassOf<UUserWidget>)&local_res20,(FName)0x0);
          return pUVar5;
        }
        if (param_1 != (UObject *)0x0) {
          pUVar4 = Z_Construct_UClass_APlayerController_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar4->_padding_)) {
            local_res20 = *(UObject **)param_2.Class.field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res20 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res20);
            }
            pUVar5 = CreateWidget<UUserWidget,APlayerController_*>
                               ((APlayerController *)param_1,(TSubclassOf<UUserWidget>)&local_res20,
                                (FName)0x0);
            return pUVar5;
          }
          pUVar4 = UUserWidget::StaticClass();
          iVar1 = (int)pUVar4->_padding_;
          if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar4->_padding_)) {
            local_res20 = *(UObject **)param_2.Class.field0_0x0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res20 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res20);
            }
            pUVar5 = CreateWidget<UUserWidget,UUserWidget_*>
                               ((UUserWidget *)param_1,(TSubclassOf<UUserWidget>)&local_res20,
                                (FName)0x0);
            return pUVar5;
          }
        }
        pUVar6 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
        if (pUVar6 != (UWorld *)0x0) {
          local_res20 = *(UObject **)param_2.Class.field0_0x0;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_res20 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_res20);
          }
          pUVar5 = CreateWidget<UUserWidget,UWorld_*>
                             (pUVar6,(TSubclassOf<UUserWidget>)&local_res20,(FName)0x0);
          return pUVar5;
        }
      }
    }
  }
  return (UUserWidget *)0x0;
}

// CreateDragDropOperation @ 146a693a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UDragDropOperation * __cdecl
UWidgetBlueprintLibrary::CreateDragDropOperation(TSubclassOf<UDragDropOperation> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  UDragDropOperation *pUVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  FName local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) && (pUVar6 = UDragDropOperation::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (lVar2 = *(longlong *)param_1.Class.field0_0x0, lVar2 != 0)) {
      pUVar6 = (UClass *)0x0;
      local_a8.ComparisonIndex.Value = 0;
      local_a8.Number = 0;
      pUVar7 = UDragDropOperation::StaticClass();
      if (pUVar7 != (UClass *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar2 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          pUVar6 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      pUVar8 = GetTransientPackage();
      FVar4 = local_a8;
      if (local_a8 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar8,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar7 = UDragDropOperation::StaticClass();
      CheckIsClassChildOf_Internal(pUVar7,pUVar6);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_98,pUVar6);
      FVar5 = local_a8;
      local_98._48_8_ = (FObjectInstancingGraph *)0x0;
      local_98._56_8_ = (UPackage *)0x0;
      local_a8.ComparisonIndex = FVar4.ComparisonIndex.Value;
      local_a8.Number = FVar4.Number;
      local_98._16_4_ = local_a8.ComparisonIndex.Value;
      local_98._20_4_ = local_a8.Number;
      local_98._24_4_ = RF_NoFlags;
      local_98._40_8_ = (UObject *)0x0;
      local_98[0x20] = false;
      local_a8 = FVar5;
      local_98._8_8_ = pUVar8;
      pUVar9 = (UDragDropOperation *)
               StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
      goto LAB_146a69510;
    }
  }
  pUVar8 = (UPackage *)GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar6 = UDragDropOperation::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar6);
  local_98._8_8_ = pUVar8;
  pUVar9 = (UDragDropOperation *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
LAB_146a69510:
  if (local_98._64_8_ != 0) {
    plVar10 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return pUVar9;
}

// DetectDrag @ 146a6adf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::DetectDrag
          (FEventReply *__return_storage_ptr__,FEventReply *param_1,UWidget *param_2,FKey *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  FKeyDetails *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  FEventReply *pFVar10;
  TSharedPtr<SWidget,1> local_48;
  FKeyDetails *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  
  if (param_2 != (UWidget *)0x0) {
    UWidget::GetCachedWidget(param_2,&local_48);
    if (local_48.Object != (SWidget *)0x0) {
      pTVar3 = (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
      FVar4 = param_3->KeyName;
      pFVar5 = (param_3->KeyDetails).Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_48.Object == (SWidget *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FEventReply *)(*pcVar7)();
          return pFVar10;
        }
      }
      FVar8.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_48.Object == (SWidget *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          pFVar10 = (FEventReply *)(*pcVar7)();
          return pFVar10;
        }
      }
      (param_1->NativeReply).DetectDragForWidget.Object = local_48.Object;
      if (FVar8.ReferenceController !=
          (param_1->NativeReply).DetectDragForWidget.WeakReferenceCount.ReferenceController) {
        if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar8.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FVar8.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar6 = (param_1->NativeReply).DetectDragForWidget.WeakReferenceCount.ReferenceController;
        if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar6->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
          }
        }
        (param_1->NativeReply).DetectDragForWidget.WeakReferenceCount.ReferenceController =
             FVar8.ReferenceController;
      }
      (param_1->NativeReply).DetectDragForMouseButton.KeyName = FVar4;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = (param_1->NativeReply).DetectDragForMouseButton.KeyDetails.Object;
      pTStack_30 = (param_1->NativeReply).DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
                   ReferenceController;
      (param_1->NativeReply).DetectDragForMouseButton.KeyDetails.Object = pFVar5;
      (param_1->NativeReply).DetectDragForMouseButton.KeyDetails.SharedReferenceCount.
      ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FReply::operator=(&param_1->NativeReply,&param_1->NativeReply);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar8.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// DetectDragIfPressed @ 146a6afa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::DetectDragIfPressed
          (FEventReply *__return_storage_ptr__,FPointerEvent *param_1,UWidget *param_2,FKey *param_3
          )

{
  FName FVar1;
  TReferenceControllerBase<1> *pTVar2;
  bool bVar3;
  FKey local_198;
  FReply local_180;
  FReply local_c8;
  
  FVar1 = (param_1->EffectingButton).KeyName;
  pTVar2 = (param_1->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar1 == param_3->KeyName) || (param_1->bIsTouchEvent != false)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (bVar3) {
    FReply::FReply(&local_180,false);
    FReply::FReply(&local_c8,&local_180);
    FReply::~FReply(&local_180);
    FReply::FReply(&local_180,true);
    FReply::operator=(&local_c8,&local_180);
    FReply::~FReply(&local_180);
    local_198.KeyName = param_3->KeyName;
    local_198.KeyDetails.Object = (param_3->KeyDetails).Object;
    local_198.KeyDetails.SharedReferenceCount.ReferenceController =
         (param_3->KeyDetails).SharedReferenceCount.ReferenceController;
    if (local_198.KeyDetails.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_198.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_198.KeyDetails.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    DetectDrag(__return_storage_ptr__,(FEventReply *)&local_c8,param_2,&local_198);
    FReply::~FReply(&local_c8);
  }
  else {
    Unhandled(__return_storage_ptr__);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->KeyDetails).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// DismissAllMenus @ 146a6b6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::DismissAllMenus(void)

{
  FSlateApplication *this;
  
  this = FSlateApplication::Get();
  FSlateApplication::DismissAllMenus(this);
  return;
}

// DrawBox @ 146a6b8b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::DrawBox
          (FPaintContext *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          USlateBrushAsset *param_4,FLinearColor *param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  undefined1 uVar4;
  FGeometry *pFVar5;
  TVector2<float>_u_0_s_0 TVar6;
  float fVar7;
  float fVar8;
  undefined1 auStackY_e8 [32];
  undefined8 local_b8;
  TTransform2<float> local_a0;
  TTransform2<float> local_88;
  TVector2<float>_u_0 local_70;
  float local_68;
  undefined8 local_64;
  undefined8 local_5c;
  float local_54 [2];
  float afStack_4c [2];
  TVector2<float>_u_0 local_44;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  param_1->MaxLayer = param_1->MaxLayer + 1;
  if (param_4 != (USlateBrushAsset *)0x0) {
    pFVar5 = param_1->AllottedGeometry;
    local_b8._0_4_ = (undefined4)(param_2->field0_0x0)._s_0.X;
    local_b8._4_4_ = (undefined4)(param_2->field0_0x0)._s_0.Y;
    dVar2 = (param_3->field0_0x0)._s_0.X;
    dVar3 = (param_3->field0_0x0)._s_0.Y;
    TVar6 = (pFVar5->AbsolutePosition).field0_0x0._s_0;
    local_a0.M.M[0][1] = TVar6.X;
    local_a0.M.M[1][0] = TVar6.Y;
    local_a0.Trans.field0_0x0 = local_b8;
    fVar1 = pFVar5->Scale;
    fVar7 = fVar1 * (float)(undefined4)local_b8 + local_a0.M.M[0][1];
    fVar8 = fVar1 * (float)local_b8._4_4_ + local_a0.M.M[1][0];
    local_a0.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_a0.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_a0.M.M[1][0] = (float)_UNK_15076b188;
    local_a0.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>(&local_88,&local_a0,&pFVar5->AccumulatedRenderTransform);
    local_70._s_0.Y = fVar8;
    local_70._s_0.X = fVar7;
    local_5c = CONCAT44((float)dVar3,(float)dVar2);
    local_3c = pFVar5->bHasRenderTransform * '\x02' | local_3c & 0xfc;
    local_64 = 0;
    local_54[0] = local_88.M.M[0][0];
    local_54[1] = local_88.M.M[0][1];
    afStack_4c[0] = local_88.M.M[1][0];
    afStack_4c[1] = local_88.M.M[1][1];
    local_44 = local_88.Trans.field0_0x0;
    local_68 = fVar1;
    FSlateDrawElement::MakeBox
              (param_1->OutDrawElements,param_1->MaxLayer,(FPaintGeometry *)&local_70._s_0,
               &param_4->Brush,None,param_5);
  }
  return;
}

// DrawLine @ 146a6c780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::DrawLine
          (FPaintContext *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          FLinearColor *param_4,bool param_5,float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FGeometry *pFVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  int iVar8;
  int iVar9;
  undefined1 auStackY_148 [32];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_e0;
  float local_d0;
  float fStack_cc;
  TVector2<float>_u_0 local_c8;
  float local_c0;
  undefined8 local_bc;
  FDeprecateSlateVector2D local_b4;
  float local_ac [2];
  float afStack_a4 [2];
  TVector2<float>_u_0 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_148;
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  param_1->MaxLayer = param_1->MaxLayer + 1;
  local_d0 = (float)dVar1;
  local_f8.Data = (FScriptContainerElement *)0x0;
  local_f0 = 0;
  fStack_cc = (float)dVar2;
  iVar8 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&local_f8,(int *)((longlong)&local_f0 + 4));
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.Y;
  iVar9 = iVar8 + 1;
  local_e8 = (float)dVar3;
  *(ulonglong *)(local_f8.Data + (longlong)iVar8 * 8) = CONCAT44(fStack_cc,local_d0);
  fStack_e4 = (float)dVar4;
  local_f0._0_4_ = iVar9;
  if (((local_f8.Data <= (FScriptContainerElement *)&local_e8) &&
      ((FScriptContainerElement *)&local_e8 < local_f8.Data + (longlong)local_f0._4_4_ * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar9 = (int)local_f0;
  if ((int)local_f0 == local_f0._4_4_) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&local_f8,(int *)((longlong)&local_f0 + 4));
  }
  _Src.Data = local_f8.Data;
  iVar8 = iVar9 + 1;
  dVar2 = dVar2 - dVar4;
  local_f0 = CONCAT44(local_f0._4_4_,iVar8);
  dVar1 = dVar1 - dVar3;
  *(ulonglong *)(local_f8.Data + (longlong)iVar9 * 8) = CONCAT44(fStack_e4,local_e8);
  if (__real_3f1a36e2e0000000 < dVar2 * dVar2 + dVar1 * dVar1) {
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = iVar8;
    if (iVar8 == 0) {
      local_e0.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar8,0,&local_e0.AllocatorInstance,iVar8,&local_e0.ArrayMax);
      memcpy(local_e0.AllocatorInstance.Data,_Src.Data,(longlong)iVar8 << 3);
    }
    pFVar5 = param_1->AllottedGeometry;
    local_b4 = pFVar5->Size;
    local_c0 = pFVar5->Scale;
    local_c8 = (pFVar5->AbsolutePosition).field0_0x0;
    local_94 = pFVar5->bHasRenderTransform * '\x02' | local_94 & 0xfc;
    local_bc = 0;
    local_ac = (pFVar5->AccumulatedRenderTransform).M.M[0];
    afStack_a4 = (pFVar5->AccumulatedRenderTransform).M.M[1];
    local_9c = (pFVar5->AccumulatedRenderTransform).Trans.field0_0x0;
    FSlateDrawElement::MakeLines
              (param_1->OutDrawElements,param_1->MaxLayer,(FPaintGeometry *)&local_c8._s_0,&local_e0
               ,None,param_4,param_5,param_6);
  }
  if (local_f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data);
  }
  return;
}

// DrawLines @ 146a6ca70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::DrawLines
          (FPaintContext *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2,
          FLinearColor *param_3,bool param_4,float param_5)

{
  undefined1 auVar1 [16];
  FScriptContainerElement *pFVar2;
  FGeometry *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStackY_158 [32];
  ForAnyElementType local_108;
  undefined8 local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  TVector2<float>_u_0 local_c8;
  float local_c0;
  undefined8 local_bc;
  FDeprecateSlateVector2D local_b4;
  float local_ac [2];
  float afStack_a4 [2];
  TVector2<float>_u_0 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (1 < param_2->ArrayNum) {
    local_108.Data = (FScriptContainerElement *)0x0;
    local_100 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_2->ArrayNum,&local_108,0,(int *)((longlong)&local_100 + 4));
    if ((param_2->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    fStack_f4 = (float)*(double *)(pFVar2 + 8);
    local_f8 = (float)*(double *)pFVar2;
    if (((local_108.Data <= (FScriptContainerElement *)&local_f8) &&
        ((FScriptContainerElement *)&local_f8 < local_108.Data + (longlong)local_100._4_4_ * 8)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (int)local_100;
    if ((int)local_100 == local_100._4_4_) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&local_108,(int *)((longlong)&local_100 + 4));
    }
    local_100 = CONCAT44(local_100._4_4_,iVar8 + 1);
    *(ulonglong *)(local_108.Data + (longlong)iVar8 * 8) = CONCAT44(fStack_f4,local_f8);
    if ((param_2->ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar6 = __real_3f1a36e2e0000000;
    pFVar2 = (param_2->AllocatorInstance).Data;
    uVar10 = 1;
    iVar8 = param_2->ArrayNum;
    local_d8 = *(undefined8 *)pFVar2;
    uStack_d0 = *(undefined8 *)(pFVar2 + 8);
    if (1 < iVar8) {
      lVar11 = 0x10;
      uVar13 = (undefined4)uStack_d0;
      uVar14 = (undefined4)((ulonglong)uStack_d0 >> 0x20);
      uVar15 = (undefined4)local_d8;
      uVar16 = (undefined4)((ulonglong)local_d8 >> 0x20);
      do {
        uVar9 = 0;
        if ((int)uVar10 < iVar8) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        auVar1 = *(undefined1 (*) [16])((param_2->AllocatorInstance).Data + lVar11);
        dVar12 = auVar1._0_8_ - (double)CONCAT44(uVar16,uVar15);
        dVar5 = auVar1._8_8_ - (double)CONCAT44(uVar14,uVar13);
        if (dVar6 < dVar5 * dVar5 + dVar12 * dVar12) {
          uVar9 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (param_2->AllocatorInstance).Data;
          fStack_ec = (float)*(double *)(pFVar2 + lVar11 + 8);
          local_f0 = (float)*(double *)(pFVar2 + lVar11);
          if (((local_108.Data <= (FScriptContainerElement *)&local_f0) &&
              ((FScriptContainerElement *)&local_f0 < local_108.Data + (longlong)local_100._4_4_ * 8
              )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar8 = (int)local_100;
          if ((int)local_100 == local_100._4_4_) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&local_108,(int *)((longlong)&local_100 + 4));
          }
          local_100 = CONCAT44(local_100._4_4_,iVar8 + 1);
          *(ulonglong *)(local_108.Data + (longlong)iVar8 * 8) = CONCAT44(fStack_ec,local_f0);
          uVar13 = auVar1._8_4_;
          uVar14 = auVar1._12_4_;
          uVar15 = auVar1._0_4_;
          uVar16 = auVar1._4_4_;
        }
        iVar8 = param_2->ArrayNum;
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 0x10;
      } while ((int)uVar10 < iVar8);
    }
    if (1 < (int)local_100) {
      pFVar3 = param_1->AllottedGeometry;
      param_1->MaxLayer = param_1->MaxLayer + 1;
      local_e8.AllocatorInstance.Data = local_108.Data;
      local_e8.ArrayMax = local_100._4_4_;
      local_e8.ArrayNum = (int)local_100;
      local_100 = 0;
      local_108.Data = (FScriptContainerElement *)0x0;
      local_b4 = pFVar3->Size;
      local_c0 = pFVar3->Scale;
      local_c8 = (pFVar3->AbsolutePosition).field0_0x0;
      local_94 = pFVar3->bHasRenderTransform * '\x02' | local_94 & 0xfc;
      local_bc = 0;
      local_ac = (pFVar3->AccumulatedRenderTransform).M.M[0];
      afStack_a4 = (pFVar3->AccumulatedRenderTransform).M.M[1];
      local_9c = (pFVar3->AccumulatedRenderTransform).Trans.field0_0x0;
      FSlateDrawElement::MakeLines
                (param_1->OutDrawElements,param_1->MaxLayer,(FPaintGeometry *)&local_c8._s_0,
                 &local_e8,None,param_3,param_4,param_5);
    }
    if (local_108.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data);
    }
  }
  return;
}

// DrawSpline @ 146a6cf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::DrawSpline
          (FPaintContext *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5,FLinearColor *param_6,float param_7)

{
  FGeometry *pFVar1;
  FDeprecateVector2DParameter FVar2;
  FDeprecateVector2DParameter FVar3;
  FDeprecateVector2DParameter FVar4;
  FDeprecateVector2DParameter FVar5;
  undefined1 auStackY_b8 [32];
  TVector2<float>_u_0 local_48;
  float local_40;
  undefined8 local_3c;
  FDeprecateSlateVector2D local_34;
  float local_2c [2];
  float afStack_24 [2];
  TVector2<float>_u_0 local_1c;
  byte local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  param_1->MaxLayer = param_1->MaxLayer + 1;
  pFVar1 = param_1->AllottedGeometry;
  local_48 = (pFVar1->AbsolutePosition).field0_0x0;
  local_34 = pFVar1->Size;
  local_40 = pFVar1->Scale;
  local_14 = pFVar1->bHasRenderTransform * '\x02' | local_14 & 0xfc;
  FVar2._4_4_ = (float)(param_5->field0_0x0)._s_0.Y;
  FVar2._0_4_ = (float)(param_5->field0_0x0)._s_0.X;
  local_3c = 0;
  local_2c = (pFVar1->AccumulatedRenderTransform).M.M[0];
  afStack_24 = (pFVar1->AccumulatedRenderTransform).M.M[1];
  FVar5._4_4_ = (float)(param_2->field0_0x0)._s_0.Y;
  FVar5._0_4_ = (float)(param_2->field0_0x0)._s_0.X;
  local_1c = (pFVar1->AccumulatedRenderTransform).Trans.field0_0x0;
  FVar3._4_4_ = (float)(param_4->field0_0x0)._s_0.Y;
  FVar3._0_4_ = (float)(param_4->field0_0x0)._s_0.X;
  FVar4._4_4_ = (float)(param_3->field0_0x0)._s_0.Y;
  FVar4._0_4_ = (float)(param_3->field0_0x0)._s_0.X;
  FSlateDrawElement::MakeSpline
            (param_1->OutDrawElements,param_1->MaxLayer,(FPaintGeometry *)&local_48._s_0,FVar5,FVar4
             ,FVar3,FVar2,param_7,None,param_6);
  return;
}

// DrawText @ 146a6d0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::DrawText
          (FPaintContext *param_1,FString *param_2,TVector2<double> *param_3,FLinearColor *param_4)

{
  float fVar1;
  undefined1 uVar2;
  FGeometry *pFVar3;
  TVector2<float>_u_0_s_0 TVar4;
  FDeprecateSlateVector2D FVar5;
  ISlateStyle *pIVar6;
  FName *pFVar7;
  FTextBlockStyle *pFVar8;
  undefined1 auStackY_168 [32];
  undefined8 local_128;
  FName local_120;
  TTransform2<float> local_118;
  TObjectPtr<UObject_const_>_u_0 local_f8;
  UObject *local_f0;
  int local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined1 local_e2;
  UObject *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FCompositeFont *local_c8;
  TReferenceControllerBase<1> *local_c0;
  FName local_b8;
  float local_b0;
  int local_ac;
  float local_a8;
  EFontFallback local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  float local_a0;
  TTransform2<float> local_98;
  TVector2<float>_u_0 local_80;
  float local_78;
  undefined8 local_74;
  FDeprecateSlateVector2D local_6c;
  float local_64 [2];
  float afStack_5c [2];
  TVector2<float>_u_0 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  param_1->MaxLayer = param_1->MaxLayer + 1;
  pIVar6 = FUMGCoreStyle::Instance.Object;
  pFVar7 = ::FName::FName(&local_120,"NormalText");
  pFVar8 = (FTextBlockStyle *)
           (**(code **)((longlong)*pIVar6 + 0xa0))(pIVar6,FTextBlockStyle::TypeName,*pFVar7,0);
  if (pFVar8 == (FTextBlockStyle *)0x0) {
    pFVar8 = FTextBlockStyle::GetDefault();
  }
  local_f8 = (TObjectPtr<UObject_const_>_u_0)(pFVar8->Font).FontObject.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f8.DebugPtr != (UObject *)0x0))
  {
    UE::GC::MarkAsReachable(local_f8.DebugPtr);
  }
  local_f0 = (pFVar8->Font).FontMaterial.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_f0);
  }
  local_e8 = (pFVar8->Font).OutlineSettings.OutlineSize;
  local_e4 = (pFVar8->Font).OutlineSettings.bMiteredCorners;
  local_e3 = (pFVar8->Font).OutlineSettings.bSeparateFillAlpha;
  local_e2 = (pFVar8->Font).OutlineSettings.bApplyOutlineToDropShadows;
  local_e0 = (pFVar8->Font).OutlineSettings.OutlineMaterial.field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e0);
  }
  local_d8 = *(undefined8 *)&(pFVar8->Font).OutlineSettings.OutlineColor.field0_0x0;
  uStack_d0 = *(undefined8 *)((longlong)&(pFVar8->Font).OutlineSettings.OutlineColor.field0_0x0 + 8)
  ;
  local_c8 = (pFVar8->Font).CompositeFont.Object;
  local_c0 = (pFVar8->Font).CompositeFont.SharedReferenceCount.ReferenceController;
  if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_c0->SharedReferenceCount = (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_b8 = (pFVar8->Font).TypefaceFontName;
  pFVar3 = param_1->AllottedGeometry;
  local_b0 = (pFVar8->Font).Size;
  local_ac = (pFVar8->Font).LetterSpacing;
  local_a8 = (pFVar8->Font).SkewAmount;
  local_a4 = (pFVar8->Font).FontFallback;
  local_a3 = (pFVar8->Font).bForceMonospaced;
  local_a2 = (pFVar8->Font).bMaterialIsStencil;
  local_a0 = (pFVar8->Font).MonospacedWidth;
  TVar4 = (pFVar3->AbsolutePosition).field0_0x0._s_0;
  fVar1 = pFVar3->Scale;
  FVar5 = pFVar3->Size;
  local_128._0_4_ = (undefined4)(param_3->field0_0x0)._s_0.X;
  local_118.M.M[0][1] = TVar4.X;
  local_118.M.M[1][0] = TVar4.Y;
  local_128._4_4_ = (undefined4)(param_3->field0_0x0)._s_0.Y;
  local_118.Trans.field0_0x0 = local_128;
  local_120.ComparisonIndex.Value =
       (uint)((float)(undefined4)local_128 * fVar1 + local_118.M.M[0][1]);
  local_120.Number = (uint)((float)local_128._4_4_ * fVar1 + local_118.M.M[1][0]);
  local_118.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
  local_118.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
  local_118.M.M[1][0] = (float)_UNK_15076b188;
  local_118.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
  Concatenate<TTransform2<float>_>(&local_98,&local_118,&pFVar3->AccumulatedRenderTransform);
  local_80._s_0.Y = (float)local_120.Number;
  local_80._s_0.X = (float)local_120.ComparisonIndex.Value;
  local_4c = pFVar3->bHasRenderTransform * '\x02' | local_4c & 0xfc;
  local_74 = 0;
  local_64[0] = local_98.M.M[0][0];
  local_64[1] = local_98.M.M[0][1];
  afStack_5c[0] = local_98.M.M[1][0];
  afStack_5c[1] = local_98.M.M[1][1];
  local_54 = local_98.Trans.field0_0x0;
  local_78 = fVar1;
  local_6c = FVar5;
  FSlateDrawElement::MakeText
            (param_1->OutDrawElements,param_1->MaxLayer,(FPaintGeometry *)&local_80._s_0,param_2,
             (FSlateFontInfo *)&local_f8.ObjectPtr,None,param_4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
  return;
}

// DrawTextFormatted @ 146a6d370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::DrawTextFormatted
          (FPaintContext *param_1,FText *param_2,TVector2<double> *param_3,UFont *param_4,
          float param_5,FName param_6,FLinearColor *param_7)

{
  uint uVar1;
  FSlateWindowElementList *pFVar2;
  FPaintGeometry *pFVar3;
  FString *pFVar4;
  undefined1 auStackY_118 [32];
  float local_d8;
  float local_d4;
  FSlateFontInfo local_c8;
  TVector2<float>_u_0 local_68;
  undefined8 local_60;
  FLinearColor_u_0 local_58;
  ulonglong local_30;
  
  if (param_4 != (UFont *)0x0) {
    local_30 = __security_cookie.value ^ (ulonglong)auStackY_118;
    param_1->MaxLayer = param_1->MaxLayer + 1;
    local_68._s_0.X = 0.0;
    local_68._4_2_ = 0;
    local_68._6_1_ = 0;
    local_60 = 0;
    local_58 = FLinearColor::Black.field0_0x0;
    FSlateFontInfo::FSlateFontInfo
              (&local_c8,(UObject *)param_4,param_5,&param_6,(FFontOutlineSettings *)&local_68._s_0)
    ;
    local_d8 = (float)(param_3->field0_0x0)._s_0.X;
    local_d4 = (float)(param_3->field0_0x0)._s_0.Y;
    pFVar3 = FGeometry::ToOffsetPaintGeometry
                       (param_1->AllottedGeometry,(FPaintGeometry *)&local_68._s_0,
                        (FDeprecateVector2DParameter *)&local_d8);
    uVar1 = param_1->MaxLayer;
    pFVar2 = param_1->OutDrawElements;
    pFVar4 = FText::ToString(param_2);
    FSlateDrawElement::MakeText(pFVar2,uVar1,pFVar3,pFVar4,&local_c8,None,param_7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  return;
}

// EndDragDrop @ 146a70410

/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::EndDragDrop(FEventReply *__return_storage_ptr__,FEventReply *param_1)

{
  undefined1 *puVar1;
  
  (param_1->NativeReply).bEndDragDrop = 1;
  FReply::operator=(&param_1->NativeReply,&param_1->NativeReply);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  return __return_storage_ptr__;
}

// FOnGameWindowCloseButtonClickedDelegate_DelegateWrapper @ 146a71990

void __cdecl
UWidgetBlueprintLibrary::FOnGameWindowCloseButtonClickedDelegate_DelegateWrapper
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>(param_1,(void *)0x0);
  return;
}

// GetAllWidgetsOfClass @ 146a72a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::GetAllWidgetsOfClass
          (UObject *param_1,TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *param_2,
          TSubclassOf<UUserWidget> param_3,bool param_4)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  EInternalObjectFlags EVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UWorld *pUVar10;
  UWorld *pUVar11;
  longlong lVar12;
  UWidget *local_48;
  TObjectIterator<UUserWidget> local_40;
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  lVar12 = *(longlong *)param_3.Class.field0_0x0;
  if ((lVar12 != 0) && (pUVar9 = UUserWidget::StaticClass(), pUVar9 != (UClass *)0x0)) {
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar12 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((((bVar5) && (*(longlong *)param_3.Class.field0_0x0 != 0)) && (param_1 != (UObject *)0x0))
       && (pUVar10 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull),
          pUVar10 != (UWorld *)0x0)) {
      local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.ObjectArray.ArrayNum = 0;
      local_40.ObjectArray.ArrayMax = 0;
      local_40.Index = 0xffffffff;
      EVar6 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar9 = UUserWidget::StaticClass();
      GetObjectsOfClass(pUVar9,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                        EVar6 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UUserWidget>::Advance(&local_40);
        lVar12 = (longlong)local_40.Index;
        if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index)) break;
        uVar7 = 0;
        if (local_40.Index < local_40.ObjectArray.ArrayNum) {
          uVar7 = (uint)~local_40.Index >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_48 = *(UWidget **)(local_40.ObjectArray.AllocatorInstance.Data + lVar12 * 8);
        pUVar11 = (UWorld *)(**(code **)(local_48->_padding_ + 0x180))();
        if (pUVar11 == pUVar10) {
          lVar12 = *(longlong *)param_3.Class.field0_0x0;
          lVar2 = local_48->_padding_;
          if ((lVar12 != 0) && (pUVar9 = UUserWidget::StaticClass(), pUVar9 != (UClass *)0x0)) {
            iVar8 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar12 + 0x38) < iVar8) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar8 * 8) !=
                &pUVar9->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if ((bVar5) && (lVar12 = *(longlong *)param_3.Class.field0_0x0, lVar12 != 0)) {
              if ((*(int *)(lVar2 + 0x38) < *(int *)(lVar12 + 0x38)) ||
                 (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
                  != lVar12 + 0x30)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if ((bVar5) && ((!param_4 || (bVar5 = UWidget::IsInViewport(local_48), bVar5)))) {
                pFVar3 = (param_2->AllocatorInstance).Data;
                if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
                   (((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)*piVar1 * 8 &&
                    (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar5)))) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                iVar8 = param_2->ArrayNum;
                if (iVar8 == *piVar1) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x808,&param_2->AllocatorInstance,piVar1);
                }
                param_2->ArrayNum = iVar8 + 1;
                *(UWidget **)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_48;
              }
            }
          }
        }
      }
      if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetAllWidgetsWithInterface @ 146a72d20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::GetAllWidgetsWithInterface
          (UObject *param_1,TArray<UUserWidget_*,TSizedDefaultAllocator<32>_> *param_2,
          TSubclassOf<UInterface> param_3,bool param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UWorld *pUVar9;
  UWorld *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  longlong lVar13;
  UClass *pUVar14;
  UWidget *local_48;
  TObjectIterator<UUserWidget> local_40;
  
  pUVar14 = (UClass *)0x0;
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&param_2->AllocatorInstance,0,piVar1);
  }
  lVar13 = *(longlong *)param_3.Class.field0_0x0;
  if ((lVar13 != 0) &&
     (pUVar8 = Z_Construct_UClass_UInterface_NoRegister(), pUVar8 != (UClass *)0x0)) {
    iVar7 = (int)pUVar8->_padding_;
    if ((*(int *)(lVar13 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar8->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((((bVar4) && (*(longlong *)param_3.Class.field0_0x0 != 0)) && (param_1 != (UObject *)0x0))
       && (pUVar9 = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull),
          pUVar9 != (UWorld *)0x0)) {
      local_40.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_40.ObjectArray.ArrayNum = 0;
      local_40.ObjectArray.ArrayMax = 0;
      local_40.Index = 0xffffffff;
      EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar8 = UUserWidget::StaticClass();
      GetObjectsOfClass(pUVar8,&local_40.ObjectArray,true,RF_ClassDefaultObject,
                        EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UUserWidget>::Advance(&local_40);
        lVar13 = (longlong)local_40.Index;
        if ((local_40.Index < 0) || (local_40.ObjectArray.ArrayNum <= local_40.Index)) break;
        uVar6 = 0;
        if (local_40.Index < local_40.ObjectArray.ArrayNum) {
          uVar6 = (uint)~local_40.Index >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_48 = *(UWidget **)(local_40.ObjectArray.AllocatorInstance.Data + lVar13 * 8);
        pUVar10 = (UWorld *)(**(code **)(local_48->_padding_ + 0x180))();
        if (pUVar10 == pUVar9) {
          lVar13 = *(longlong *)param_3.Class.field0_0x0;
          pUVar8 = (UClass *)local_48->_padding_;
          pUVar12 = pUVar14;
          if ((lVar13 != 0) &&
             (pUVar11 = Z_Construct_UClass_UInterface_NoRegister(), pUVar11 != (UClass *)0x0)) {
            iVar7 = (int)pUVar11->_padding_;
            if ((*(int *)(lVar13 + 0x38) < iVar7) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8) !=
                &pUVar11->_padding_)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              pUVar12 = *(UClass **)param_3.Class.field0_0x0;
            }
          }
          bVar4 = UClass::ImplementsInterface(pUVar8,pUVar12);
          if ((bVar4) && ((!param_4 || (bVar4 = UWidget::IsInViewport(local_48), bVar4)))) {
            pFVar2 = (param_2->AllocatorInstance).Data;
            if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
               (((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)*piVar1 * 8 &&
                (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar4)))) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = param_2->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar7 + 1;
            *(UWidget **)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_48;
          }
        }
      }
      if (local_40.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// GetBrushResource @ 146a734a0

UObject * __cdecl UWidgetBlueprintLibrary::GetBrushResource(FSlateBrush *param_1)

{
  return (param_1->ResourceObject).field0_0x0.DebugPtr;
}

// GetBrushResourceAsMaterial @ 146a734b0

UMaterialInterface * __cdecl
UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(FSlateBrush *param_1)

{
  int iVar1;
  UMaterialInterface *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UMaterialInterface *)(param_1->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMaterialInterface *)0x0;
}

// GetBrushResourceAsTexture2D @ 146a73500

UTexture2D * __cdecl UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(FSlateBrush *param_1)

{
  int iVar1;
  UTexture2D *pUVar2;
  UClass *pUVar3;
  
  pUVar2 = (UTexture2D *)(param_1->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar2 != (UTexture2D *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UTexture2D *)0x0;
}

// GetDragDroppingContent @ 146a74b60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UDragDropOperation * __cdecl UWidgetBlueprintLibrary::GetDragDroppingContent(void)

{
  code *pcVar1;
  FDragDropOperation *pFVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  char cVar5;
  FSlateApplication *this;
  UDragDropOperation *pUVar6;
  FString *pFVar7;
  SWindow *pSVar8;
  TSharedPtr<FDragDropOperation,1> local_18;
  
  this = FSlateApplication::Get();
  FSlateApplication::GetDragDroppingContent(this,&local_18);
  if (local_18.Object != (FDragDropOperation *)0x0) {
    if ((local_18.Object == (FDragDropOperation *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UDragDropOperation *)(*pcVar1)();
      return pUVar6;
    }
    pFVar2 = local_18.Object;
    pcVar1 = *(code **)((local_18.Object)->_padding_ + 0x50);
    pFVar7 = FUMGDragDropOp::GetTypeId();
    cVar5 = (*pcVar1)(pFVar2,pFVar7);
    FVar3.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if (cVar5 != '\0') {
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_18.Object == (FDragDropOperation *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        pUVar6 = (UDragDropOperation *)(*pcVar1)();
        return pUVar6;
      }
      pSVar8 = local_18.Object[1].CursorDecoratorWindow.Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar3.ReferenceController);
      goto LAB_146a74c25;
    }
  }
  pSVar8 = (SWindow *)0x0;
LAB_146a74c25:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return (UDragDropOperation *)pSVar8;
}

// GetDynamicMaterial @ 146a74c80

UMaterialInstanceDynamic * __cdecl UWidgetBlueprintLibrary::GetDynamicMaterial(FSlateBrush *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  pUVar3 = (UMaterialInstanceDynamic *)(param_1->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      return pUVar3;
    }
    if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
      pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar2->_padding_;
      if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar2->_padding_)) {
        pUVar3 = UMaterialInstanceDynamic::Create
                           ((UMaterialInterface *)pUVar3,(UObject *)0x0,(FName)0x0);
        FSlateBrush::SetResourceObject(param_1,(UObject *)pUVar3);
        return pUVar3;
      }
    }
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetInputEventFromCharacterEvent @ 146a76ad0

/* WARNING: Enum "Type": Some values do not have unique names */

FInputEvent * __cdecl
UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent
          (FInputEvent *__return_storage_ptr__,FCharacterEvent *param_1)

{
  __return_storage_ptr__->_padding_ = (longlong)&___7FInputEvent__6B_;
  __return_storage_ptr__->ModifierKeys = *(FModifierKeysState *)&param_1->_padding_;
  __return_storage_ptr__->bIsRepeat = *(bool *)((longlong)&param_1->_padding_ + 2);
  __return_storage_ptr__->UserIndex = *(uint *)((longlong)&param_1->_padding_ + 4);
  (__return_storage_ptr__->InputDeviceId).InternalId = (int)param_1->_padding_;
  __return_storage_ptr__->EventPath = (FWidgetPath *)param_1->_padding_;
  __return_storage_ptr__->EventTimestamp = param_1->_padding_;
  return __return_storage_ptr__;
}

// GetInputEventFromKeyEvent @ 146a76b10

/* WARNING: Enum "Type": Some values do not have unique names */

FInputEvent * __cdecl
UWidgetBlueprintLibrary::GetInputEventFromKeyEvent
          (FInputEvent *__return_storage_ptr__,FKeyEvent *param_1)

{
  __return_storage_ptr__->_padding_ = (longlong)&___7FInputEvent__6B_;
  __return_storage_ptr__->ModifierKeys = *(FModifierKeysState *)&param_1->_padding_;
  __return_storage_ptr__->bIsRepeat = *(bool *)((longlong)&param_1->_padding_ + 2);
  __return_storage_ptr__->UserIndex = *(uint *)((longlong)&param_1->_padding_ + 4);
  (__return_storage_ptr__->InputDeviceId).InternalId = (int)param_1->_padding_;
  __return_storage_ptr__->EventPath = (FWidgetPath *)param_1->_padding_;
  __return_storage_ptr__->EventTimestamp = param_1->_padding_;
  return __return_storage_ptr__;
}

// GetInputEventFromNavigationEvent @ 146a76b50

/* WARNING: Enum "Type": Some values do not have unique names */

FInputEvent * __cdecl
UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent
          (FInputEvent *__return_storage_ptr__,FNavigationEvent *param_1)

{
  __return_storage_ptr__->_padding_ = (longlong)&___7FInputEvent__6B_;
  __return_storage_ptr__->ModifierKeys = *(FModifierKeysState *)&param_1->_padding_;
  __return_storage_ptr__->bIsRepeat = *(bool *)((longlong)&param_1->_padding_ + 2);
  __return_storage_ptr__->UserIndex = *(uint *)((longlong)&param_1->_padding_ + 4);
  (__return_storage_ptr__->InputDeviceId).InternalId = (int)param_1->_padding_;
  __return_storage_ptr__->EventPath = (FWidgetPath *)param_1->_padding_;
  __return_storage_ptr__->EventTimestamp = param_1->_padding_;
  return __return_storage_ptr__;
}

// GetInputEventFromPointerEvent @ 146a76b90

/* WARNING: Enum "Type": Some values do not have unique names */

FInputEvent * __cdecl
UWidgetBlueprintLibrary::GetInputEventFromPointerEvent
          (FInputEvent *__return_storage_ptr__,FPointerEvent *param_1)

{
  __return_storage_ptr__->_padding_ = (longlong)&___7FInputEvent__6B_;
  __return_storage_ptr__->ModifierKeys = *(FModifierKeysState *)&param_1->_padding_;
  __return_storage_ptr__->bIsRepeat = *(bool *)((longlong)&param_1->_padding_ + 2);
  __return_storage_ptr__->UserIndex = *(uint *)((longlong)&param_1->_padding_ + 4);
  (__return_storage_ptr__->InputDeviceId).InternalId = (int)param_1->_padding_;
  __return_storage_ptr__->EventPath = (FWidgetPath *)param_1->_padding_;
  __return_storage_ptr__->EventTimestamp = param_1->_padding_;
  return __return_storage_ptr__;
}

// GetKeyEventFromAnalogInputEvent @ 146a76cf0

FKeyEvent * __cdecl
UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent
          (FKeyEvent *__return_storage_ptr__,FAnalogInputEvent *param_1)

{
  FKeyEvent::FKeyEvent(__return_storage_ptr__,(FKeyEvent *)param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 146a782d0

UClass * __cdecl UWidgetBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWidgetBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"WidgetBlueprintLibrary",
               &Z_Registration_Info_UClass_UWidgetBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUWidgetBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UWidgetBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UWidgetBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWidgetBlueprintLibrary.InnerSingleton;
}

// GetSafeZonePadding @ 146a79220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::GetSafeZonePadding
          (UObject *param_1,TVector4<double> *param_2,TVector2<double> *param_3,
          TVector4<double> *param_4)

{
  double dVar1;
  double dVar2;
  FSlateApplication *this;
  double dVar3;
  double dVar4;
  float local_res10;
  float local_res14;
  FMargin local_28;
  TVector2<double>_u_0 local_18;
  
  UWidgetLayoutLibrary::GetViewportSize((TVector2<double> *)&local_18._s_0,param_1);
  local_28.Left = 0.0;
  local_28.Top = 0.0;
  local_28.Right = 0.0;
  local_28.Bottom = 0.0;
  this = FSlateApplication::Get();
  local_res10 = (float)local_18._s_0.X;
  local_res14 = (float)local_18._s_0.Y;
  FSlateApplicationBase::GetSafeZoneSize
            ((FSlateApplicationBase *)this,&local_28,(FDeprecateVector2DParameter *)&local_res10);
  dVar2 = (double)local_28.Bottom;
  dVar1 = (double)local_28.Top;
  dVar3 = (double)local_28.Right;
  dVar4 = (double)local_28.Left;
  (param_2->field0_0x0)._s_0.X = dVar4;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = dVar3;
  if (dVar3 <= dVar4) {
    dVar3 = dVar4;
  }
  (param_2->field0_0x0)._s_0.W = dVar2;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  (param_3->field0_0x0)._s_0.X = dVar3 / local_18._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar2 / local_18._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (param_4->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.W;
  (param_4->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  (param_4->field0_0x0)._s_0.W = dVar1;
  return;
}

// Handled @ 146a79eb0

/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl UWidgetBlueprintLibrary::Handled(FEventReply *__return_storage_ptr__)

{
  FReply local_c8;
  
  FReply::FReply(&local_c8,false);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_c8);
  FReply::~FReply(&local_c8);
  FReply::FReply(&local_c8,true);
  FReply::operator=(&__return_storage_ptr__->NativeReply,&local_c8);
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// IsDragDropping @ 146a7c170

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl UWidgetBlueprintLibrary::IsDragDropping(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  FSlateApplication *pFVar5;
  FString *pFVar6;
  FDragDropOperation *pFVar7;
  TSharedPtr<FDragDropOperation,1> local_18;
  
  pFVar5 = FSlateApplication::Get();
  bVar2 = FSlateApplication::IsDragDropping(pFVar5);
  if (bVar2) {
    pFVar5 = FSlateApplication::Get();
    FSlateApplication::GetDragDroppingContent(pFVar5,&local_18);
    if (local_18.Object != (FDragDropOperation *)0x0) {
      pFVar7 = local_18.Object;
      if ((local_18.Object == (FDragDropOperation *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), pFVar7 = local_18.Object, bVar2)) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
      pcVar1 = *(code **)(pFVar7->_padding_ + 0x50);
      pFVar6 = FUMGDragDropOp::GetTypeId();
      cVar4 = (*pcVar1)(pFVar7,pFVar6);
      if (cVar4 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        return true;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return false;
}

// LockMouse @ 146a7ce60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::LockMouse
          (FEventReply *__return_storage_ptr__,FEventReply *param_1,UWidget *param_2)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  FEventReply *pFVar8;
  SWidget *pSVar9;
  TSharedPtr<SWidget,1> local_18;
  
  if (param_2 != (UWidget *)0x0) {
    UWidget::GetCachedWidget(param_2,&local_18);
    if (local_18.Object != (SWidget *)0x0) {
      pSVar9 = local_18.Object;
      if ((local_18.Object == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), pSVar9 = local_18.Object, bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FEventReply *)(*pcVar5)();
        return pFVar8;
      }
      FVar6.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar9 == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FEventReply *)(*pcVar5)();
        return pFVar8;
      }
      (param_1->NativeReply).MouseLockWidget.Object = pSVar9;
      if (FVar6.ReferenceController !=
          (param_1->NativeReply).MouseLockWidget.WeakReferenceCount.ReferenceController) {
        if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar6.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FVar6.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = (param_1->NativeReply).MouseLockWidget.WeakReferenceCount.ReferenceController;
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar4->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
          }
        }
        (param_1->NativeReply).MouseLockWidget.WeakReferenceCount.ReferenceController =
             FVar6.ReferenceController;
      }
      (param_1->NativeReply).bShouldReleaseMouseLock = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      FReply::operator=(&param_1->NativeReply,&param_1->NativeReply);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  return __return_storage_ptr__;
}

// MakeBrushFromAsset @ 146a7cfa0

FSlateBrush * __cdecl
UWidgetBlueprintLibrary::MakeBrushFromAsset
          (FSlateBrush *__return_storage_ptr__,USlateBrushAsset *param_1)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res10 [3];
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  if (param_1 != (USlateBrushAsset *)0x0) {
    FSlateBrush::FSlateBrush(__return_storage_ptr__,&param_1->Brush);
    return __return_storage_ptr__;
  }
  local_res10[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,
                      (FDeprecateVector2DParameter *)&local_res10[0]._s_0);
  FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return __return_storage_ptr__;
}

// MakeBrushFromMaterial @ 146a7d020

FSlateBrush * __cdecl
UWidgetBlueprintLibrary::MakeBrushFromMaterial
          (FSlateBrush *__return_storage_ptr__,UMaterialInterface *param_1,int param_2,int param_3)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res10;
  undefined1 local_b8 [36];
  float local_94;
  FSharedReferencer<1> local_18;
  
  if (param_1 == (UMaterialInterface *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar1 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_b8,
                        (FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  else {
    FSlateBrush::FSlateBrush((FSlateBrush *)local_b8);
    FSlateBrush::SetResourceObject((FSlateBrush *)local_b8,(UObject *)param_1);
    pFVar1 = (FSlateBrush *)local_b8;
    local_b8._32_4_ = (undefined4)param_2;
    local_94 = (float)param_3;
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar1);
  local_b8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ReferenceController);
  return __return_storage_ptr__;
}

// MakeBrushFromTexture @ 146a7d0f0

FSlateBrush * __cdecl
UWidgetBlueprintLibrary::MakeBrushFromTexture
          (FSlateBrush *__return_storage_ptr__,UTexture2D *param_1,int param_2,int param_3)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res10;
  undefined1 local_b8 [36];
  float local_94;
  FSharedReferencer<1> local_18;
  
  if (param_1 == (UTexture2D *)0x0) {
    local_res10 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar1 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_b8,
                        (FDeprecateVector2DParameter *)&local_res10._s_0);
  }
  else {
    FSlateBrush::FSlateBrush((FSlateBrush *)local_b8);
    FSlateBrush::SetResourceObject((FSlateBrush *)local_b8,(UObject *)param_1);
    if (param_2 < 1) {
      param_2 = UTexture2D::GetSizeX(param_1);
    }
    if (param_3 < 1) {
      param_3 = UTexture2D::GetSizeY(param_1);
    }
    pFVar1 = (FSlateBrush *)local_b8;
    local_b8._32_4_ = (undefined4)param_2;
    local_94 = (float)param_3;
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar1);
  local_b8._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.ReferenceController);
  return __return_storage_ptr__;
}

// NoResourceBrush @ 146a814a0

FSlateBrush * __cdecl UWidgetBlueprintLibrary::NoResourceBrush(FSlateBrush *__return_storage_ptr__)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res8 [4];
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  local_res8[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_b8,
                      (FDeprecateVector2DParameter *)&local_res8[0]._s_0);
  FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar1);
  local_b8[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  return __return_storage_ptr__;
}

// ReleaseJoystickCapture @ 146a8def0

/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::ReleaseJoystickCapture
          (FEventReply *__return_storage_ptr__,FEventReply *param_1,bool param_2)

{
  FReply *pFVar1;
  
  pFVar1 = FReply::ClearUserFocus(&param_1->NativeReply,SetDirectly,param_2);
  FReply::operator=(&param_1->NativeReply,pFVar1);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  return __return_storage_ptr__;
}

// ReleaseMouseCapture @ 146a8e100

/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::ReleaseMouseCapture
          (FEventReply *__return_storage_ptr__,FEventReply *param_1)

{
  TWeakPtr<SWidget,1> *pTVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  atomic<int> aVar5;
  TReferenceControllerBase<1> *pTVar6;
  undefined8 local_18 [2];
  
  pTVar1 = &(param_1->NativeReply).MouseCaptor;
  if (pTVar1 != (TWeakPtr<SWidget,1> *)local_18) {
    pTVar6 = (param_1->NativeReply).MouseCaptor.WeakReferenceCount.ReferenceController;
    pTVar1->Object = (SWidget *)0x0;
    (param_1->NativeReply).MouseCaptor.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar6->WeakReferenceCount;
      aVar5 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar5 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
  }
  puVar4 = &(param_1->NativeReply).field_0xb4;
  (param_1->NativeReply).bReleaseMouseCapture = 1;
  (param_1->NativeReply).bUseHighPrecisionMouse = 0;
  FReply::operator=(&param_1->NativeReply,&param_1->NativeReply);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  return __return_storage_ptr__;
}

// RestorePreviousWindowTitleBarState @ 146a91660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState(void)

{
  int iVar1;
  longlong lVar2;
  UGameViewportClient *pUVar3;
  IGameLayerManager *pIVar4;
  atomic<int> aVar5;
  UEngine *pUVar6;
  atomic<int> aVar7;
  UClass *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  pUVar6 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar8 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = pUVar6->_padding_;
    iVar1 = (int)pUVar8->_padding_;
    if (((iVar1 <= *(int *)(lVar2 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar8->_padding_)) &&
       (pUVar3 = (pUVar6->GameViewport).field0_0x0.DebugPtr, pUVar3 != (UGameViewportClient *)0x0))
    {
      pTVar9 = (pUVar3->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar9->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146a916c4;
          }
          LOCK();
          aVar7 = pTVar9->SharedReferenceCount;
          bVar10 = aVar5 == aVar7;
          if (bVar10) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar10);
        pIVar4 = (pUVar3->GameLayerManagerPtr).Object;
        if (pIVar4 != (IGameLayerManager *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x80))();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
          return;
        }
      }
LAB_146a916c4:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      return;
    }
  }
  return;
}

// SetBrushResourceToMaterial @ 146a92910

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::SetBrushResourceToMaterial
          (FSlateBrush *param_1,UMaterialInterface *param_2)

{
  UMaterialInterface *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FSlateResourceHandle *pFVar5;
  FSlateResourceHandle FStack_18;
  
  bVar3 = IsThreadSafeForSlateRendering();
  if (((bVar3) && (param_2 != (UMaterialInterface *)0x0)) &&
     (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0)) {
    if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBaseApplication.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                           ,0x22a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)((((FSlateApplicationBase::CurrentBaseApplication.Object)->Renderer).Object)
                         ->_padding_ + 0x90))();
    if (cVar4 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3437263933306568508>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\SlateBrush.cpp"
                         ,0xc4,
                         "!IsThreadSafeForSlateRendering() || CanRenderResourceObject(InResourceObject)"
                        );
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (UMaterialInterface *)(param_1->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UMaterialInterface *)0x0) {
    bVar3 = param_2 == (UMaterialInterface *)0x0;
  }
  else {
    bVar3 = pUVar1 == param_2;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (param_1->ResourceObject).field0_0x0.DebugPtr = (UObject *)param_2;
    pFVar5 = FSlateResourceHandle::FSlateResourceHandle(&FStack_18);
    if (&param_1->ResourceHandle != pFVar5) {
      (param_1->ResourceHandle).Data.Object = (pFVar5->Data).Object;
      (pFVar5->Data).Object = (FSlateSharedHandleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->ResourceHandle).Data.SharedReferenceCount,
                 &(pFVar5->Data).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_18.Data.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetBrushResourceToTexture @ 146a92920

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::SetBrushResourceToTexture(FSlateBrush *param_1,UTexture2D *param_2)

{
  UTexture2D *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  FSlateResourceHandle *pFVar5;
  FSlateResourceHandle FStack_18;
  
  bVar3 = IsThreadSafeForSlateRendering();
  if (((bVar3) && (param_2 != (UTexture2D *)0x0)) &&
     (FSlateApplicationBase::CurrentBaseApplication.Object != (FSlateApplicationBase *)0x0)) {
    if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CurrentBaseApplication.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Application\\SlateApplicationBase.h"
                           ,0x22a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((FSlateApplicationBase::CurrentBaseApplication.Object == (FSlateApplicationBase *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = (**(code **)((((FSlateApplicationBase::CurrentBaseApplication.Object)->Renderer).Object)
                         ->_padding_ + 0x90))();
    if (cVar4 == '\0') {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3437263933306568508>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Private\\Styling\\SlateBrush.cpp"
                         ,0xc4,
                         "!IsThreadSafeForSlateRendering() || CanRenderResourceObject(InResourceObject)"
                        );
      if (!bVar3) {
        return;
      }
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar1 = (UTexture2D *)(param_1->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar1 == (UTexture2D *)0x0) {
    bVar3 = param_2 == (UTexture2D *)0x0;
  }
  else {
    bVar3 = pUVar1 == param_2;
  }
  if (!bVar3) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (param_1->ResourceObject).field0_0x0.DebugPtr = (UObject *)param_2;
    pFVar5 = FSlateResourceHandle::FSlateResourceHandle(&FStack_18);
    if (&param_1->ResourceHandle != pFVar5) {
      (param_1->ResourceHandle).Data.Object = (pFVar5->Data).Object;
      (pFVar5->Data).Object = (FSlateSharedHandleData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->ResourceHandle).Data.SharedReferenceCount,
                 &(pFVar5->Data).SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_18.Data.SharedReferenceCount.ReferenceController);
  }
  return;
}

// SetColorVisionDeficiencyType @ 146a92c00

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::SetColorVisionDeficiencyType
          (EColorVisionDeficiency param_1,float param_2,bool param_3,bool param_4)

{
  FSlateRenderer *pFVar1;
  FSlateApplicationBase *pFVar2;
  
  pFVar2 = FSlateApplicationBase::Get();
  if (__real_3f800000 <= param_2) {
    param_2 = __real_3f800000;
  }
  pFVar1 = (pFVar2->Renderer).Object;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  (**(code **)(pFVar1->_padding_ + 0x60))
            (pFVar1,param_1,(int)(param_2 * __real_41200000),param_3,param_4);
  return;
}

// SetFocusToGameViewport @ 146a93880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::SetFocusToGameViewport(void)

{
  FSlateApplication *this;
  
  this = FSlateApplication::Get();
  FSlateApplication::SetAllUserFocusToGameViewport(this,SetDirectly);
  return;
}

// SetHardwareCursor @ 146a939d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl
UWidgetBlueprintLibrary::SetHardwareCursor
          (UObject *param_1,Type param_2,FName param_3,TVector2<double> *param_4)

{
  bool bVar1;
  UWorld *this;
  UGameViewportClient *this_00;
  TVector2<double>_u_0 local_18;
  
  this = UEngine::GetWorldFromContextObject(GEngine,param_1,LogAndReturnNull);
  if (((this != (UWorld *)0x0) && (bVar1 = UWorld::IsGameWorld(this), bVar1)) &&
     (this_00 = UWorld::GetGameViewport(this), this_00 != (UGameViewportClient *)0x0)) {
    local_18._s_0.X = (param_4->field0_0x0)._s_0.X;
    local_18._s_0.Y = (param_4->field0_0x0)._s_0.Y;
    bVar1 = UGameViewportClient::SetHardwareCursor
                      (this_00,param_2,param_3,(TVector2<double> *)&local_18._s_0);
    return bVar1;
  }
  return false;
}

// SetInputMode_GameAndUIEx @ 146a93c10

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx
          (APlayerController *param_1,UWidget *param_2,EMouseLockMode param_3,bool param_4,
          bool param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedReferencer<1> FVar2;
  TSharedRef<SWidget,1> *pTVar3;
  TSharedRef<SWidget,1> local_38;
  FInputModeGameAndUI local_28;
  
  if (param_1 != (APlayerController *)0x0) {
    FInputModeGameAndUI::FInputModeGameAndUI(&local_28);
    local_28.MouseLockMode = param_3;
    local_28.bHideCursorDuringCapture = param_4;
    if (param_2 != (UWidget *)0x0) {
      pTVar3 = UWidget::TakeWidget(param_2,&local_38);
      FVar2.ReferenceController = local_28.WidgetToFocus.SharedReferenceCount.ReferenceController;
      pTVar1 = (pTVar3->SharedReferenceCount).ReferenceController;
      local_28.WidgetToFocus.Object = pTVar3->Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28.WidgetToFocus.SharedReferenceCount.ReferenceController = pTVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar2.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    (**(code **)(param_1->_padding_ + 0xd68))(param_1,&local_28);
    if (param_5) {
      (**(code **)(param_1->_padding_ + 0xdb0))(param_1);
    }
    FInputModeGameAndUI::~FInputModeGameAndUI(&local_28);
  }
  return;
}

// SetInputMode_GameOnly @ 146a93d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::SetInputMode_GameOnly(APlayerController *param_1,bool param_2)

{
  FInputModeGameOnly local_18;
  
  if (param_1 != (APlayerController *)0x0) {
    FInputModeGameOnly::FInputModeGameOnly(&local_18);
    (**(code **)(param_1->_padding_ + 0xd68))(param_1,&local_18);
    if (param_2) {
      (**(code **)(param_1->_padding_ + 0xdb0))(param_1);
    }
    FInputModeGameOnly::~FInputModeGameOnly(&local_18);
  }
  return;
}

// SetInputMode_UIOnlyEx @ 146a93d60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx
          (APlayerController *param_1,UWidget *param_2,EMouseLockMode param_3,bool param_4)

{
  TSharedRef<SWidget,1> *pTVar1;
  TSharedPtr<SWidget,1> local_48;
  TSharedRef<SWidget,1> local_38;
  FInputModeUIOnly local_28;
  
  if (param_1 != (APlayerController *)0x0) {
    FInputModeUIOnly::FInputModeUIOnly(&local_28);
    FInputModeUIOnly::SetLockMouseToViewportBehavior(&local_28,param_3);
    if (param_2 != (UWidget *)0x0) {
      pTVar1 = UWidget::TakeWidget(param_2,&local_38);
      local_48.Object = pTVar1->Object;
      local_48.SharedReferenceCount.ReferenceController =
           (pTVar1->SharedReferenceCount).ReferenceController;
      if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FInputModeUIOnly::SetWidgetToFocus(&local_28,&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
    }
    (**(code **)(param_1->_padding_ + 0xd68))(param_1,&local_28);
    if (param_4) {
      (**(code **)(param_1->_padding_ + 0xdb0))(param_1);
    }
    FInputModeUIOnly::~FInputModeUIOnly(&local_28);
  }
  return;
}

// SetMousePosition @ 146a93ee0

/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::SetMousePosition
          (FEventReply *__return_storage_ptr__,FEventReply *param_1,TVector2<double> *param_2)

{
  FReply *pFVar1;
  TIntPoint<int>_u_0 local_res8;
  
  local_res8._s_0.X = (int)(param_2->field0_0x0)._s_0.X;
  local_res8._s_0.Y = (int)(param_2->field0_0x0)._s_0.Y;
  pFVar1 = FReply::SetMousePos(&param_1->NativeReply,(TIntPoint<int> *)&local_res8._s_0);
  FReply::operator=(&param_1->NativeReply,pFVar1);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  return __return_storage_ptr__;
}

// SetUserFocus @ 146a94ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::SetUserFocus
          (FEventReply *__return_storage_ptr__,FEventReply *param_1,UWidget *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FEventReply *pFVar3;
  FReply *pFVar4;
  TSharedPtr<SWidget,1> local_28;
  TSharedRef<SWidget,1> local_18;
  
  if (param_2 != (UWidget *)0x0) {
    UWidget::GetCachedWidget(param_2,&local_28);
    if (local_28.Object != (SWidget *)0x0) {
      if (local_28.Object == (SWidget *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FEventReply *)(*pcVar1)();
          return pFVar3;
        }
      }
      local_18.Object = local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_28.Object == (SWidget *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FEventReply *)(*pcVar1)();
          return pFVar3;
        }
      }
      pFVar4 = FReply::SetUserFocus(&param_1->NativeReply,&local_18,SetDirectly,param_3);
      FReply::operator=(&param_1->NativeReply,pFVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  return __return_storage_ptr__;
}

// SetWindowTitleBarCloseButtonActive @ 146a95710

void __cdecl UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool param_1)

{
  SWindowTitleBarArea::bIsCloseButtonActive = param_1;
  return;
}

// SetWindowTitleBarOnCloseClickedDelegate @ 146a95720

void __cdecl
UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate
          (FOnGameWindowCloseButtonClickedDelegate *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  undefined1 local_48 [16];
  int local_38;
  FDestructionSentinel local_30;
  undefined1 *local_18;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FReadAccessScope *)&local_30);
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&param_1->field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_30);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnGameWindowCloseButtonClicked,(FWriteAccessScope *)local_48);
  OnGameWindowCloseButtonClicked._8_8_ = uVar1;
  OnGameWindowCloseButtonClicked._16_8_ = uVar2;
  if (local_38._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_48._8_8_,(FDestructionSentinel *)local_48);
  }
  local_48._0_8_ = (atomic<unsigned___int64>)0x0;
  local_48._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_38 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = local_48 + 8;
  puVar3 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)(local_48 + 8));
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar3[3] = OnGameWindowCloseButtonClickedSimpleDelegate;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&SWindowTitleBarArea::OnCloseButtonClicked,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_38 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_48._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_48._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_48 + 8),0,0,0x10);
    local_38 = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if ((FMRSWRecursiveAccessDetector *)local_48._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_48._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)param_1);
  return;
}

// SetWindowTitleBarState @ 146a958a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::SetWindowTitleBarState
          (UWidget *param_1,EWindowTitleBarMode param_2,bool param_3,bool param_4,bool param_5)

{
  int iVar1;
  longlong lVar2;
  UGameViewportClient *pUVar3;
  IGameLayerManager *pIVar4;
  code *pcVar5;
  atomic<int> aVar6;
  UEngine *pUVar7;
  atomic<int> aVar8;
  UClass *pUVar9;
  TSharedPtr<SWidget,1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  undefined8 local_50;
  TReferenceControllerBase<1> *pTStack_48;
  TSharedPtr<SWidget,1> local_40;
  
  pUVar7 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar9 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = pUVar7->_padding_;
    iVar1 = (int)pUVar9->_padding_;
    if (((iVar1 <= *(int *)(lVar2 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar9->_padding_)) &&
       (pUVar3 = (pUVar7->GameViewport).field0_0x0.DebugPtr, pUVar3 != (UGameViewportClient *)0x0))
    {
      pTVar11 = (pUVar3->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        aVar6 = pTVar11->SharedReferenceCount;
        do {
          if (aVar6 == (atomic<int>)0x0) {
            pTVar11 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146a95940;
          }
          LOCK();
          aVar8 = pTVar11->SharedReferenceCount;
          bVar12 = aVar6 == aVar8;
          if (bVar12) {
            pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar6 + 1);
            aVar8 = aVar6;
          }
          UNLOCK();
          aVar6 = aVar8;
        } while (!bVar12);
        pIVar4 = (pUVar3->GameLayerManagerPtr).Object;
        if (pIVar4 != (IGameLayerManager *)0x0) {
          pcVar5 = *(code **)((longlong)*pIVar4 + 0x78);
          if (param_1 == (UWidget *)0x0) {
            local_50 = 0;
            pTStack_48 = (TReferenceControllerBase<1> *)0x0;
            (*pcVar5)(pIVar4,&local_50,param_2,param_3,param_4,param_5);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_48);
          }
          else {
            pTVar10 = UWidget::GetCachedWidget(param_1,&local_40);
            (*pcVar5)(pIVar4,pTVar10,param_2,param_3,param_4,param_5);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_40.SharedReferenceCount.ReferenceController);
          }
        }
      }
LAB_146a95940:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    }
  }
  return;
}

// StaticRegisterNativesUWidgetBlueprintLibrary @ 146a968d0

void __cdecl UWidgetBlueprintLibrary::StaticRegisterNativesUWidgetBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x36;
  local_18.DataPtr = Z_Construct_UClass_UWidgetBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Unhandled @ 146a99de0

/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl UWidgetBlueprintLibrary::Unhandled(FEventReply *__return_storage_ptr__)

{
  FReply local_c8;
  
  FReply::FReply(&local_c8,false);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&local_c8);
  FReply::~FReply(&local_c8);
  FReply::FReply(&local_c8,false);
  FReply::operator=(&__return_storage_ptr__->NativeReply,&local_c8);
  FReply::~FReply(&local_c8);
  return __return_storage_ptr__;
}

// UnlockMouse @ 146a99e50

/* WARNING: Enum "Type": Some values do not have unique names */

FEventReply * __cdecl
UWidgetBlueprintLibrary::UnlockMouse(FEventReply *__return_storage_ptr__,FEventReply *param_1)

{
  TWeakPtr<SWidget,1> *pTVar1;
  atomic<int> *paVar2;
  undefined1 *puVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 local_18 [2];
  
  (param_1->NativeReply).bShouldReleaseMouseLock = 1;
  pTVar1 = &(param_1->NativeReply).MouseLockWidget;
  if (pTVar1 != (TWeakPtr<SWidget,1> *)local_18) {
    pTVar5 = (param_1->NativeReply).MouseLockWidget.WeakReferenceCount.ReferenceController;
    pTVar1->Object = (SWidget *)0x0;
    (param_1->NativeReply).MouseLockWidget.WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar2 = &pTVar5->WeakReferenceCount;
      aVar4 = *paVar2;
      *paVar2 = (atomic<int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
  }
  FReply::operator=(&param_1->NativeReply,&param_1->NativeReply);
  FReply::FReply(&__return_storage_ptr__->NativeReply,&param_1->NativeReply);
  return __return_storage_ptr__;
}

// execCancelDragDrop @ 146a9dfe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execCancelDragDrop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSlateApplication *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FSlateApplication::Get();
  FSlateApplication::CancelDragDrop(this);
  return;
}

// execCaptureJoystick @ 146a9e030

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execCaptureJoystick(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  FReply *this;
  bool bVar5;
  int local_res10 [2];
  UWidget *local_res18 [2];
  TSharedPtr<SWidget,1> local_278;
  TSharedRef<SWidget,1> local_268;
  FReply local_258;
  FReply local_198;
  FReply local_e0;
  
  FReply::FReply(&local_198,false);
  FReply::FReply(&local_258,&local_198);
  FReply::~FReply(&local_198);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  local_res18[0] = (UWidget *)0x0;
  this = &local_258;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UWidget *)0x0) {
    UWidget::GetCachedWidget(local_res18[0],&local_278);
    if (local_278.Object != (SWidget *)0x0) {
      if (local_278.Object == (SWidget *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_268.Object = local_278.Object;
      local_268.SharedReferenceCount.ReferenceController =
           local_278.SharedReferenceCount.ReferenceController;
      if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_278.Object == (SWidget *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = FReply::SetUserFocus(this,&local_268,SetDirectly,bVar5);
      FReply::operator=(this,pFVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(&local_e0,this);
  FReply::operator=(param_3,&local_e0);
  FReply::~FReply(&local_e0);
  FReply::~FReply(&local_258);
  return;
}

// execCaptureMouse @ 146a9e290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execCaptureMouse(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  SWidget *pSVar8;
  FReply *this;
  UWidget *local_res10;
  TSharedPtr<SWidget,1> local_248;
  FReply local_238;
  FReply local_178;
  FReply local_c0;
  
  FReply::FReply(&local_178,false);
  FReply::FReply(&local_238,&local_178);
  FReply::~FReply(&local_178);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  local_res10 = (UWidget *)0x0;
  this = &local_238;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UWidget *)0x0) {
    UWidget::GetCachedWidget(local_res10,&local_248);
    if (local_248.Object != (SWidget *)0x0) {
      pSVar8 = local_248.Object;
      if ((local_248.Object == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), pSVar8 = local_248.Object, bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.ReferenceController = local_248.SharedReferenceCount.ReferenceController;
      if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar8 == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->MouseCaptor).Object = pSVar8;
      if (FVar6.ReferenceController != (this->MouseCaptor).WeakReferenceCount.ReferenceController) {
        if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar6.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FVar6.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = (this->MouseCaptor).WeakReferenceCount.ReferenceController;
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
        (this->MouseCaptor).WeakReferenceCount.ReferenceController = FVar6.ReferenceController;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      FReply::operator=(this,this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(&local_c0,this);
  FReply::operator=(param_3,&local_c0);
  FReply::~FReply(&local_c0);
  FReply::~FReply(&local_238);
  return;
}

// execClearUserFocus @ 146a9e4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execClearUserFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FReply *pFVar2;
  FReply *this;
  int local_res10 [2];
  FReply local_188;
  FReply local_c8;
  
  FReply::FReply(&local_188,false);
  FReply::FReply(&local_c8,&local_188);
  FReply::~FReply(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res10[0] = 0;
  this = &local_c8;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FReply::ClearUserFocus(this,SetDirectly,local_res10[0] != 0);
  FReply::operator=(this,pFVar2);
  FReply::FReply(&local_188,this);
  FReply::operator=(param_3,&local_188);
  FReply::~FReply(&local_188);
  FReply::~FReply(&local_c8);
  return;
}

// execCreate @ 146a9e710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execCreate(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  bool bVar4;
  APlayerController *pAVar5;
  APlayerController *pAVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  UUserWidget *pUVar9;
  UWorld *pUVar10;
  APlayerController *local_res10;
  APlayerController *local_res18;
  UObject *local_res20;
  UObject *local_30;
  
  local_res10 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = (APlayerController *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  pUVar7 = local_res20;
  pAVar6 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (local_res20 == (UObject *)0x0)) {
    if (local_res20 == (UObject *)0x0) goto LAB_146a9e9c9;
  }
  else {
    UE::GC::MarkAsReachable(local_res20);
  }
  pAVar5 = local_res10;
  pUVar8 = UUserWidget::StaticClass();
  if (pUVar8 != (UClass *)0x0) {
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)&pUVar7[1].field_0x10 < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)&pUVar7[1].field_0x8 + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      if (pAVar6 != (APlayerController *)0x0) {
        local_30 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        pUVar9 = CreateWidget<UUserWidget,APlayerController_*>
                           (pAVar6,(TSubclassOf<UUserWidget>)&local_30,(FName)0x0);
        *(UUserWidget **)param_3 = pUVar9;
        return;
      }
      if (pAVar5 != (APlayerController *)0x0) {
        pUVar8 = Z_Construct_UClass_APlayerController_NoRegister();
        iVar2 = (int)pUVar8->_padding_;
        if ((iVar2 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar8->_padding_)) {
          local_30 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          pUVar9 = CreateWidget<UUserWidget,APlayerController_*>
                             (pAVar5,(TSubclassOf<UUserWidget>)&local_30,(FName)0x0);
          *(UUserWidget **)param_3 = pUVar9;
          return;
        }
        pUVar8 = UUserWidget::StaticClass();
        iVar2 = (int)pUVar8->_padding_;
        if ((iVar2 <= *(int *)(pAVar5->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar8->_padding_)) {
          local_30 = pUVar7;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar7);
          }
          pUVar9 = CreateWidget<UUserWidget,UUserWidget_*>
                             ((UUserWidget *)pAVar5,(TSubclassOf<UUserWidget>)&local_30,(FName)0x0);
          *(UUserWidget **)param_3 = pUVar9;
          return;
        }
      }
      pUVar10 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)pAVar5,LogAndReturnNull);
      if (pUVar10 != (UWorld *)0x0) {
        local_30 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar7);
        }
        pUVar9 = CreateWidget<UUserWidget,UWorld_*>
                           (pUVar10,(TSubclassOf<UUserWidget>)&local_30,(FName)0x0);
        *(UUserWidget **)param_3 = pUVar9;
        return;
      }
    }
  }
LAB_146a9e9c9:
  *(undefined8 *)param_3 = 0;
  return;
}

// execCreateDragDropOperation @ 146a9e9f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execCreateDragDropOperation(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UDragDropOperation *pUVar2;
  UObject *local_res10;
  UObject *local_res18;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  pUVar2 = CreateDragDropOperation((TSubclassOf<UDragDropOperation>)&local_res18);
  *(UDragDropOperation **)param_3 = pUVar2;
  return;
}

// execDetectDrag @ 146a9eaa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execDetectDrag(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  FSharedReferencer<1> FVar5;
  FName FVar6;
  FKeyDetails *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  bool bVar9;
  atomic<int> *paVar10;
  FReply *this;
  UWidget *local_res10;
  TSharedPtr<SWidget,1> local_298;
  FName local_288;
  FKeyDetails *local_280;
  TReferenceControllerBase<1> *pTStack_278;
  FKeyDetails *local_270;
  TReferenceControllerBase<1> *pTStack_268;
  FReply local_258;
  FReply local_198;
  FReply local_e0;
  
  FReply::FReply(&local_198,false);
  FReply::FReply(&local_258,&local_198);
  FReply::~FReply(&local_198);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  local_res10 = (UWidget *)0x0;
  this = &local_258;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_288.ComparisonIndex.Value = 0;
  local_288.Number = 0;
  local_280 = (FKeyDetails *)0x0;
  pTStack_278 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_288,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_288);
  }
  pTVar8 = pTStack_278;
  pFVar7 = local_280;
  FVar6 = local_288;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_278 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar10 = &pTStack_278->SharedReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  if (local_res10 != (UWidget *)0x0) {
    UWidget::GetCachedWidget(local_res10,&local_298);
    if (local_298.Object != (SWidget *)0x0) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
      if (local_298.Object == (SWidget *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      FVar5.ReferenceController = local_298.SharedReferenceCount.ReferenceController;
      if (local_298.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_298.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_298.Object == (SWidget *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (this->DetectDragForWidget).Object = local_298.Object;
      if (FVar5.ReferenceController !=
          (this->DetectDragForWidget).WeakReferenceCount.ReferenceController) {
        if (FVar5.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar5.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FVar5.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar3 = (this->DetectDragForWidget).WeakReferenceCount.ReferenceController;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar10 = &pTVar3->WeakReferenceCount;
          aVar1 = *paVar10;
          *paVar10 = (atomic<int>)((int)*paVar10 + -1);
          UNLOCK();
          if (aVar1 == (atomic<int>)0x1) {
            (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
          }
        }
        (this->DetectDragForWidget).WeakReferenceCount.ReferenceController =
             FVar5.ReferenceController;
      }
      (this->DetectDragForMouseButton).KeyName = FVar6;
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_270 = (this->DetectDragForMouseButton).KeyDetails.Object;
      pTStack_268 = (this->DetectDragForMouseButton).KeyDetails.SharedReferenceCount.
                    ReferenceController;
      (this->DetectDragForMouseButton).KeyDetails.Object = pFVar7;
      (this->DetectDragForMouseButton).KeyDetails.SharedReferenceCount.ReferenceController = pTVar8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_268);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      FReply::operator=(this,this);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar5.ReferenceController);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_298.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(&local_e0,this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  FReply::operator=(param_3,&local_e0);
  FReply::~FReply(&local_e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_278);
  FReply::~FReply(&local_258);
  return;
}

// execDetectDragIfPressed @ 146a9eda0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execDetectDragIfPressed(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> aVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FName FVar4;
  code *pcVar5;
  UWidget *this;
  FSharedReferencer<1> FVar6;
  FName FVar7;
  FKeyDetails *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FSharedReferencer<1> FVar10;
  bool bVar11;
  FReply *this_00;
  FPointerEvent *pFVar12;
  atomic<int> *paVar13;
  UWidget *local_res10;
  TSharedPtr<SWidget,1> local_538;
  FName local_528;
  FKeyDetails *local_520;
  TReferenceControllerBase<1> *pTStack_518;
  FReply local_508;
  FPointerEvent local_448;
  FReply local_3c8;
  FReply local_310;
  FReply local_258;
  FReply local_1a0;
  FReply local_e8;
  
  FPointerEvent::FPointerEvent(&local_448);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_448,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_448);
  }
  local_res10 = (UWidget *)0x0;
  pFVar12 = &local_448;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar12 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_528.ComparisonIndex.Value = 0;
  local_528.Number = 0;
  local_520 = (FKeyDetails *)0x0;
  pTStack_518 = (TReferenceControllerBase<1> *)0x0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_528,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_528);
  }
  pTVar9 = pTStack_518;
  pFVar8 = local_520;
  FVar7 = local_528;
  this = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (pTStack_518 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_518->SharedReferenceCount = (atomic<int>)((int)pTStack_518->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (pFVar12->EffectingButton).KeyDetails.SharedReferenceCount.ReferenceController;
  FVar4 = (pFVar12->EffectingButton).KeyName;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((FVar4 == local_528) || (pFVar12->bIsTouchEvent != false)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (bVar11) {
    FReply::FReply(&local_310,false);
    FReply::FReply(&local_508,&local_310);
    FReply::~FReply(&local_310);
    FReply::FReply(&local_258,true);
    FReply::operator=(&local_508,&local_258);
    FReply::~FReply(&local_258);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      paVar13 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar13 = &pTVar9->SharedReferenceCount;
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    if (this != (UWidget *)0x0) {
      UWidget::GetCachedWidget(this,&local_538);
      if (local_538.Object != (SWidget *)0x0) {
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar13 = (atomic<int>)((int)*paVar13 + 1);
          UNLOCK();
        }
        if (local_538.Object == (SWidget *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L"");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        FVar6.ReferenceController = local_538.SharedReferenceCount.ReferenceController;
        if (local_538.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_538.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if (local_538.Object == (SWidget *)0x0) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L"");
          if (bVar11) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_508.DetectDragForWidget.Object = local_538.Object;
        if (FVar6.ReferenceController !=
            local_508.DetectDragForWidget.WeakReferenceCount.ReferenceController) {
          if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar6.ReferenceController)->WeakReferenceCount =
                 (atomic<int>)((int)(FVar6.ReferenceController)->WeakReferenceCount + 1);
            UNLOCK();
          }
          if (local_508.DetectDragForWidget.WeakReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            paVar13 = &(local_508.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                       WeakReferenceCount;
            aVar1 = *paVar13;
            *paVar13 = (atomic<int>)((int)*paVar13 + -1);
            UNLOCK();
            if (aVar1 == (atomic<int>)0x1) {
              (**(code **)((local_508.DetectDragForWidget.WeakReferenceCount.ReferenceController)->
                           _padding_ + 8))
                        (local_508.DetectDragForWidget.WeakReferenceCount.ReferenceController,1);
            }
          }
          local_508.DetectDragForWidget.WeakReferenceCount.ReferenceController =
               FVar6.ReferenceController;
        }
        FVar10.ReferenceController =
             local_508.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.ReferenceController;
        local_508.DetectDragForMouseButton.KeyName = FVar7;
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_508.DetectDragForMouseButton.KeyDetails.Object = pFVar8;
        local_508.DetectDragForMouseButton.KeyDetails.SharedReferenceCount.ReferenceController =
             pTVar9;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar10.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        FReply::operator=(&local_508,&local_508);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar6.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_538.SharedReferenceCount.ReferenceController);
    }
    FReply::FReply(&local_3c8,&local_508);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    this_00 = &local_508;
  }
  else {
    FReply::FReply(&local_1a0,false);
    FReply::FReply(&local_3c8,&local_1a0);
    FReply::~FReply(&local_1a0);
    FReply::FReply(&local_e8,false);
    FReply::operator=(&local_3c8,&local_e8);
    this_00 = &local_e8;
  }
  FReply::~FReply(this_00);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  FReply::operator=(param_3,&local_3c8);
  FReply::~FReply(&local_3c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_518);
  FPointerEvent::~FPointerEvent(&local_448);
  return;
}

// execDismissAllMenus @ 146a9f180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execDismissAllMenus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSlateApplication *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FSlateApplication::Get();
  FSlateApplication::DismissAllMenus(this);
  return;
}

// execDrawBox @ 146a9f330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execDrawBox(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  undefined1 uVar2;
  FProperty *pFVar3;
  FGeometry *pFVar4;
  TVector2<float>_u_0_s_0 TVar5;
  longlong lVar6;
  FPaintContext *pFVar7;
  undefined1 auStackY_158 [32];
  undefined8 local_128;
  longlong local_120;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  TTransform2<float> local_108;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  FLinearColor_u_0 local_b8;
  TTransform2<float> local_a8;
  FPaintContext local_90;
  TVector2<float>_u_0 local_60;
  float local_58;
  undefined8 local_54;
  undefined8 local_4c;
  float local_44 [2];
  float afStack_3c [2];
  TVector2<float>_u_0 local_34;
  byte local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FPaintContext::FPaintContext(&local_90);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  pFVar7 = &local_90;
  if ((FPaintContext *)param_2->MostRecentPropertyAddress != (FPaintContext *)0x0) {
    pFVar7 = (FPaintContext *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_120 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_120);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  lVar6 = local_120;
  local_b8._0_8_ = local_e8;
  local_b8._8_8_ = uStack_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar7->MaxLayer = pFVar7->MaxLayer + 1;
  if (local_120 != 0) {
    pFVar4 = pFVar7->AllottedGeometry;
    TVar5 = (pFVar4->AbsolutePosition).field0_0x0._s_0;
    local_108.M.M[0][1] = TVar5.X;
    local_108.M.M[1][0] = TVar5.Y;
    fVar1 = pFVar4->Scale;
    local_128._4_4_ = (float)dStack_c0;
    local_128._0_4_ = (float)local_c8;
    local_110 = (float)local_d8;
    local_108.Trans.field0_0x0 = local_128;
    fStack_10c = (float)dStack_d0;
    fStack_114 = fVar1 * (float)dStack_c0 + local_108.M.M[1][0];
    local_118 = fVar1 * (float)local_c8 + local_108.M.M[0][1];
    local_108.M.M[0][0] = (float)___xmm_3f80000000000000000000003f800000;
    local_108.M.M[0][1] = (float)((ulonglong)___xmm_3f80000000000000000000003f800000 >> 0x20);
    local_108.M.M[1][0] = (float)_UNK_15076b188;
    local_108.M.M[1][1] = (float)((ulonglong)_UNK_15076b188 >> 0x20);
    Concatenate<TTransform2<float>_>(&local_a8,&local_108,&pFVar4->AccumulatedRenderTransform);
    local_60._s_0.Y = fStack_114;
    local_60._s_0.X = local_118;
    local_4c = CONCAT44(fStack_10c,local_110);
    local_2c = pFVar4->bHasRenderTransform * '\x02' | local_2c & 0xfc;
    local_54 = 0;
    local_34 = local_a8.Trans.field0_0x0;
    local_44[0] = local_a8.M.M[0][0];
    local_44[1] = local_a8.M.M[0][1];
    afStack_3c[0] = local_a8.M.M[1][0];
    afStack_3c[1] = local_a8.M.M[1][1];
    local_58 = fVar1;
    FSlateDrawElement::MakeBox
              (pFVar7->OutDrawElements,pFVar7->MaxLayer,(FPaintGeometry *)&local_60._s_0,
               (FSlateBrush *)(lVar6 + 0x30),None,(FLinearColor *)&local_b8._s_0);
  }
  return;
}

// execDrawLine @ 146a9f620

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execDrawLine(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPaintContext *pFVar2;
  bool bVar3;
  int local_res10 [2];
  float local_res20 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  FLinearColor_u_0 local_78;
  TVector2<double>_u_0 local_68;
  TVector2<double>_u_0 local_58;
  FPaintContext local_48;
  
  FPaintContext::FPaintContext(&local_48);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  pFVar2 = &local_48;
  if ((FPaintContext *)param_2->MostRecentPropertyAddress != (FPaintContext *)0x0) {
    pFVar2 = (FPaintContext *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_68._s_0.X = local_98;
  local_68._s_0.Y = dStack_90;
  local_78._0_8_ = local_a8;
  local_78._8_8_ = uStack_a0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_58._s_0.X = local_88;
  local_58._s_0.Y = dStack_80;
  DrawLine(pFVar2,(TVector2<double> *)&local_58._s_0,(TVector2<double> *)&local_68._s_0,
           (FLinearColor *)&local_78._s_0,bVar3,local_res20[0]);
  return;
}

// execDrawLines @ 146a9f830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execDrawLines(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FPaintContext *pFVar3;
  bool bVar4;
  int local_res10 [4];
  float local_res20 [2];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  FLinearColor_u_0 local_68;
  FPaintContext local_58;
  
  FPaintContext::FPaintContext(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.ArrayNum = 0;
  local_88.ArrayMax = 0;
  pFVar3 = &local_58;
  if ((FPaintContext *)param_2->MostRecentPropertyAddress != (FPaintContext *)0x0) {
    pFVar3 = (FPaintContext *)param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pTVar2 = &local_88;
  if ((TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
      param_2->MostRecentPropertyAddress !=
      (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar4 = local_res10[0] != 0;
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_68._0_8_ = local_78;
  local_68._8_8_ = uStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DrawLines(pFVar3,pTVar2,(FLinearColor *)&local_68._s_0,bVar4,local_res20[0]);
  if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.AllocatorInstance.Data);
  }
  return;
}

// execDrawSpline @ 146a9fa10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execDrawSpline(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FGeometry *pFVar2;
  FDeprecateVector2DParameter FVar3;
  FDeprecateVector2DParameter FVar4;
  FDeprecateVector2DParameter FVar5;
  FDeprecateVector2DParameter FVar6;
  FPaintContext *pFVar7;
  undefined1 auStackY_158 [32];
  float local_108 [2];
  float local_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  FLinearColor_u_0 local_88;
  FPaintContext local_78;
  TVector2<float>_u_0 local_48;
  float local_40;
  undefined8 local_3c;
  FDeprecateSlateVector2D local_34;
  float local_2c [2];
  float afStack_24 [2];
  TVector2<float>_u_0 local_1c;
  byte local_14;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FPaintContext::FPaintContext(&local_78);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pFVar7 = &local_78;
  if ((FPaintContext *)param_2->MostRecentPropertyAddress != (FPaintContext *)0x0) {
    pFVar7 = (FPaintContext *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_a8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  local_108[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_108,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_108);
  }
  local_88._0_8_ = local_d8;
  local_88._8_8_ = uStack_d0;
  local_100 = (float)local_c8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = pFVar7->AllottedGeometry;
  pFVar7->MaxLayer = pFVar7->MaxLayer + 1;
  fStack_fc = (float)dStack_c0;
  local_f8 = (float)local_b8;
  fStack_f4 = (float)dStack_b0;
  local_f0 = (float)local_a8;
  fStack_ec = (float)dStack_a0;
  local_e8 = (float)local_98;
  fStack_e4 = (float)dStack_90;
  FVar6._4_4_ = fStack_e4;
  FVar6._0_4_ = local_e8;
  local_48 = (pFVar2->AbsolutePosition).field0_0x0;
  local_34 = pFVar2->Size;
  local_14 = pFVar2->bHasRenderTransform * '\x02' | local_14 & 0xfc;
  local_40 = pFVar2->Scale;
  FVar3._4_4_ = fStack_fc;
  FVar3._0_4_ = local_100;
  FVar4._4_4_ = fStack_f4;
  FVar4._0_4_ = local_f8;
  local_3c = 0;
  FVar5._4_4_ = fStack_ec;
  FVar5._0_4_ = local_f0;
  local_2c = (pFVar2->AccumulatedRenderTransform).M.M[0];
  afStack_24 = (pFVar2->AccumulatedRenderTransform).M.M[1];
  local_1c = (pFVar2->AccumulatedRenderTransform).Trans.field0_0x0;
  FSlateDrawElement::MakeSpline
            (pFVar7->OutDrawElements,pFVar7->MaxLayer,(FPaintGeometry *)&local_48._s_0,FVar6,FVar5,
             FVar4,FVar3,local_108[0],None,(FLinearColor *)&local_88._s_0);
  return;
}

// execDrawText @ 146a9fd60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execDrawText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPaintContext *pFVar2;
  FString local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  FLinearColor_u_0 local_58;
  TVector2<double>_u_0 local_48;
  FPaintContext local_38;
  
  FPaintContext::FPaintContext(&local_38);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  pFVar2 = &local_38;
  if ((FPaintContext *)param_2->MostRecentPropertyAddress != (FPaintContext *)0x0) {
    pFVar2 = (FPaintContext *)param_2->MostRecentPropertyAddress;
  }
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_58._0_8_ = local_78;
  local_58._8_8_ = uStack_70;
  local_48._s_0.X = local_68;
  local_48._s_0.Y = dStack_60;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DrawText(pFVar2,&local_88,(TVector2<double> *)&local_48._s_0,(FLinearColor *)&local_58._s_0);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// execDrawTextFormatted @ 146a9fef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execDrawTextFormatted(UObject *param_1,FFrame *param_2,void *param_3)

{
  uint uVar1;
  FProperty *pFVar2;
  FSlateWindowElementList *pFVar3;
  FPaintGeometry *pFVar4;
  FString *pFVar5;
  FPaintContext *pFVar6;
  FText *this;
  undefined1 auStackY_1a8 [32];
  float local_168 [2];
  FName local_160;
  UObject *local_158;
  float local_150;
  float local_14c;
  FText local_148;
  FName local_138 [2];
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  double local_118;
  double dStack_110;
  FLinearColor_u_0 local_108;
  FPaintContext local_f8;
  FSlateFontInfo local_c8;
  TVector2<float>_u_0 local_68;
  undefined8 local_60;
  FLinearColor_u_0 local_58;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  FPaintContext::FPaintContext(&local_f8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_f8);
  }
  pFVar6 = &local_f8;
  if ((FPaintContext *)param_2->MostRecentPropertyAddress != (FPaintContext *)0x0) {
    pFVar6 = (FPaintContext *)param_2->MostRecentPropertyAddress;
  }
  FText::FText(&local_148);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  this = &local_148;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    this = (FText *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_118,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_118);
  }
  local_158 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_168[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_160,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_160);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_138[0] = local_160;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_108._s_0.R = local_128;
  local_108._s_0.G = fStack_124;
  local_108._s_0.B = fStack_120;
  local_108._s_0.A = fStack_11c;
  if (local_158 != (UObject *)0x0) {
    pFVar6->MaxLayer = pFVar6->MaxLayer + 1;
    local_68._s_0.X = 0.0;
    local_68._4_2_ = 0;
    local_58 = FLinearColor::Black.field0_0x0;
    local_68._6_1_ = 0;
    local_60 = 0;
    FSlateFontInfo::FSlateFontInfo
              (&local_c8,local_158,local_168[0],local_138,(FFontOutlineSettings *)&local_68._s_0);
    local_150 = (float)local_118;
    local_14c = (float)dStack_110;
    pFVar4 = FGeometry::ToOffsetPaintGeometry
                       (pFVar6->AllottedGeometry,(FPaintGeometry *)&local_68._s_0,
                        (FDeprecateVector2DParameter *)&local_150);
    uVar1 = pFVar6->MaxLayer;
    pFVar3 = pFVar6->OutDrawElements;
    pFVar5 = FText::ToString(this);
    FSlateDrawElement::MakeText
              (pFVar3,uVar1,pFVar4,pFVar5,&local_c8,None,(FLinearColor *)&local_108._s_0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
  }
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  return;
}

// execEndDragDrop @ 146aa02e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execEndDragDrop(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FReply *this;
  FReply local_188;
  FReply local_c8;
  
  FReply::FReply(&local_188,false);
  FReply::FReply(&local_c8,&local_188);
  FReply::~FReply(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  this = &local_c8;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this->bEndDragDrop = 1;
  FReply::operator=(this,this);
  FReply::FReply(&local_188,this);
  FReply::operator=(param_3,&local_188);
  FReply::~FReply(&local_188);
  FReply::~FReply(&local_c8);
  return;
}

// execGetAllWidgetsOfClass @ 146aa09d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execGetAllWidgetsOfClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  FField **ppFVar3;
  int iVar4;
  FProperty *pFVar5;
  code *pcVar6;
  UObject *pUVar7;
  UObject *pUVar8;
  bool bVar9;
  EInternalObjectFlags EVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  UWorld *pUVar14;
  UWorld *pUVar15;
  longlong lVar16;
  ForAnyElementType *pFVar17;
  bool bVar18;
  int local_res10 [4];
  UObject *local_res20;
  UWidget *local_78;
  UObject *local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TObjectIterator<UUserWidget> local_58;
  
  local_70 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar3 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20 = (UObject *)0x0;
  pFVar17 = &local_68;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar17 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar5 = (FProperty *)*ppFVar3;
    *ppFVar3 = (FField *)pFVar5->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar5);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar7 = local_res20;
  bVar18 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  pUVar8 = local_70;
  piVar1 = (int *)((longlong)&pFVar17[1].Data + 4);
  *(undefined4 *)&pFVar17[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar17,0,piVar1);
  }
  if ((pUVar7 != (UObject *)0x0) && (pUVar13 = UUserWidget::StaticClass(), pUVar13 != (UClass *)0x0)
     ) {
    iVar12 = (int)pUVar13->_padding_;
    puVar2 = &pUVar7[1].field_0x8;
    if ((*(int *)&pUVar7[1].field_0x10 < iVar12) ||
       ((longlong *)*(undefined1 **)(*(longlong *)puVar2 + (longlong)iVar12 * 8) !=
        &pUVar13->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (((bVar9) && (pUVar8 != (UObject *)0x0)) &&
       (pUVar14 = UEngine::GetWorldFromContextObject(GEngine,pUVar8,LogAndReturnNull),
       pUVar14 != (UWorld *)0x0)) {
      local_58.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ObjectArray.ArrayNum = 0;
      local_58.ObjectArray.ArrayMax = 0;
      local_58.Index = 0xffffffff;
      EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar13 = UUserWidget::StaticClass();
      GetObjectsOfClass(pUVar13,&local_58.ObjectArray,true,RF_ClassDefaultObject,
                        EVar10 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UUserWidget>::Advance(&local_58);
        lVar16 = (longlong)local_58.Index;
        if ((local_58.Index < 0) || (local_58.ObjectArray.ArrayNum <= local_58.Index)) break;
        uVar11 = 0;
        if (local_58.Index < local_58.ObjectArray.ArrayNum) {
          uVar11 = (uint)~local_58.Index >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_78 = *(UWidget **)(local_58.ObjectArray.AllocatorInstance.Data + lVar16 * 8);
        pUVar15 = (UWorld *)(**(code **)(local_78->_padding_ + 0x180))();
        if (pUVar15 == pUVar14) {
          lVar16 = local_78->_padding_;
          pUVar13 = UUserWidget::StaticClass();
          if (pUVar13 != (UClass *)0x0) {
            iVar12 = *(int *)&pUVar7[1].field_0x10;
            iVar4 = (int)pUVar13->_padding_;
            if ((iVar12 < iVar4) ||
               ((longlong *)*(undefined1 **)(*(longlong *)puVar2 + (longlong)iVar4 * 8) !=
                &pUVar13->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              if ((*(int *)(lVar16 + 0x38) < iVar12) ||
                 (*(undefined1 **)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar12 * 8) != puVar2))
              {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              if ((bVar9) && ((bVar18 || (bVar9 = UWidget::IsInViewport(local_78), bVar9)))) {
                if ((pFVar17->Data <= (FScriptContainerElement *)&local_78) &&
                   (((FScriptContainerElement *)&local_78 < pFVar17->Data + (longlong)*piVar1 * 8 &&
                    (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar9)))) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                iVar12 = *(int *)&pFVar17[1].Data;
                if (iVar12 == *piVar1) {
                  iVar12 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,pFVar17,piVar1);
                }
                *(int *)&pFVar17[1].Data = iVar12 + 1;
                *(UWidget **)(pFVar17->Data + (longlong)iVar12 * 8) = local_78;
              }
            }
          }
        }
      }
      if (local_58.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetAllWidgetsWithInterface @ 146aa0df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execGetAllWidgetsWithInterface
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int *piVar1;
  FField **ppFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  bool bVar7;
  EInternalObjectFlags EVar8;
  uint uVar9;
  int iVar10;
  UClass *pUVar11;
  UWorld *pUVar12;
  UWorld *pUVar13;
  UClass *pUVar14;
  ForAnyElementType *pFVar15;
  longlong lVar16;
  bool bVar17;
  int local_res10 [4];
  UClass *local_res20;
  UWidget *local_78;
  UObject *local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  TObjectIterator<UUserWidget> local_58;
  
  local_70 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar2 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20 = (UClass *)0x0;
  pFVar15 = &local_68;
  if ((ForAnyElementType *)param_2->MostRecentPropertyAddress != (ForAnyElementType *)0x0) {
    pFVar15 = (ForAnyElementType *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar2;
    *ppFVar2 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar5 = local_res20;
  bVar17 = local_res10[0] == 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res20);
  }
  pUVar6 = local_70;
  piVar1 = (int *)((longlong)&pFVar15[1].Data + 4);
  *(undefined4 *)&pFVar15[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar15,0,piVar1);
  }
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar11 = Z_Construct_UClass_UInterface_NoRegister(), pUVar11 != (UClass *)0x0)) {
    iVar10 = (int)pUVar11->_padding_;
    if (((int)pUVar5->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar11->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (((bVar7) && (pUVar6 != (UObject *)0x0)) &&
       (pUVar12 = UEngine::GetWorldFromContextObject(GEngine,pUVar6,LogAndReturnNull),
       pUVar12 != (UWorld *)0x0)) {
      local_58.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.ObjectArray.ArrayNum = 0;
      local_58.ObjectArray.ArrayMax = 0;
      local_58.Index = 0xffffffff;
      EVar8 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar11 = UUserWidget::StaticClass();
      GetObjectsOfClass(pUVar11,&local_58.ObjectArray,true,RF_ClassDefaultObject,
                        EVar8 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<UUserWidget>::Advance(&local_58);
        lVar16 = (longlong)local_58.Index;
        if ((local_58.Index < 0) || (local_58.ObjectArray.ArrayNum <= local_58.Index)) break;
        uVar9 = 0;
        if (local_58.Index < local_58.ObjectArray.ArrayNum) {
          uVar9 = (uint)~local_58.Index >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78 = *(UWidget **)(local_58.ObjectArray.AllocatorInstance.Data + lVar16 * 8);
        pUVar13 = (UWorld *)(**(code **)(local_78->_padding_ + 0x180))();
        if (pUVar13 == pUVar12) {
          pUVar11 = (UClass *)local_78->_padding_;
          pUVar14 = Z_Construct_UClass_UInterface_NoRegister();
          if (pUVar14 == (UClass *)0x0) {
LAB_146aa10cf:
            pUVar14 = (UClass *)0x0;
          }
          else {
            iVar10 = (int)pUVar14->_padding_;
            if (((int)pUVar5->_padding_ < iVar10) ||
               ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar10 * 8) !=
                &pUVar14->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            pUVar14 = pUVar5;
            if (!bVar7) goto LAB_146aa10cf;
          }
          bVar7 = UClass::ImplementsInterface(pUVar11,pUVar14);
          if ((bVar7) && ((bVar17 || (bVar7 = UWidget::IsInViewport(local_78), bVar7)))) {
            if ((pFVar15->Data <= (FScriptContainerElement *)&local_78) &&
               (((FScriptContainerElement *)&local_78 < pFVar15->Data + (longlong)*piVar1 * 8 &&
                (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)))) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = *(int *)&pFVar15[1].Data;
            if (iVar10 == *piVar1) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,pFVar15,piVar1);
            }
            *(int *)&pFVar15[1].Data = iVar10 + 1;
            *(UWidget **)(pFVar15->Data + (longlong)iVar10 * 8) = local_78;
          }
        }
      }
      if (local_58.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.ObjectArray.AllocatorInstance.Data);
      }
    }
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  return;
}

// execGetBrushResource @ 146aa13f0

void __cdecl
UWidgetBlueprintLibrary::execGetBrushResource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *pFVar2;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar2 = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    pFVar2 = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(TObjectPtr<UObject>_u_0 *)param_3 = (pFVar2->ResourceObject).field0_0x0;
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetBrushResourceAsMaterial @ 146aa14b0

void __cdecl
UWidgetBlueprintLibrary::execGetBrushResourceAsMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  FSlateBrush *pFVar4;
  UObject *pUVar5;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar4 = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    pFVar4 = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = (pFVar4->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146aa1564;
  }
  pUVar5 = (UObject *)0x0;
LAB_146aa1564:
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  *(UObject **)param_3 = pUVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetBrushResourceAsTexture2D @ 146aa15a0

void __cdecl
UWidgetBlueprintLibrary::execGetBrushResourceAsTexture2D
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  FSlateBrush *pFVar4;
  UObject *pUVar5;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  pFVar4 = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    pFVar4 = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar5 = (pFVar4->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_146aa1654;
  }
  pUVar5 = (UObject *)0x0;
LAB_146aa1654:
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  *(UObject **)param_3 = pUVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetDragDroppingContent @ 146aa1710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execGetDragDroppingContent(UObject *param_1,FFrame *param_2,void *param_3)

{
  SWindow *pSVar1;
  code *pcVar2;
  FDragDropOperation *pFVar3;
  FSharedReferencer<1> FVar4;
  bool bVar5;
  char cVar6;
  FSlateApplication *this;
  FString *pFVar7;
  TSharedPtr<FDragDropOperation,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FSlateApplication::Get();
  FSlateApplication::GetDragDroppingContent(this,&local_18);
  if (local_18.Object != (FDragDropOperation *)0x0) {
    if ((local_18.Object == (FDragDropOperation *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar3 = local_18.Object;
    pcVar2 = *(code **)((local_18.Object)->_padding_ + 0x50);
    pFVar7 = FUMGDragDropOp::GetTypeId();
    cVar6 = (*pcVar2)(pFVar3,pFVar7);
    FVar4.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if (cVar6 != '\0') {
      if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_18.Object == (FDragDropOperation *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pSVar1 = local_18.Object[1].CursorDecoratorWindow.Object;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar4.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      *(SWindow **)param_3 = pSVar1;
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetDynamicMaterial @ 146aa18b0

void __cdecl
UWidgetBlueprintLibrary::execGetDynamicMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  FSlateBrush *this;
  FSlateBrush local_c8;
  
  FSlateBrush::FSlateBrush(&local_c8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  this = &local_c8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = (UMaterialInstanceDynamic *)(this->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar4 != (UMaterialInstanceDynamic *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_146aa19b5;
    if (pUVar4 != (UMaterialInstanceDynamic *)0x0) {
      pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        pUVar4 = UMaterialInstanceDynamic::Create
                           ((UMaterialInterface *)pUVar4,(UObject *)0x0,(FName)0x0);
        FSlateBrush::SetResourceObject(this,(UObject *)pUVar4);
        goto LAB_146aa19b5;
      }
    }
  }
  pUVar4 = (UMaterialInstanceDynamic *)0x0;
LAB_146aa19b5:
  local_c8._padding_ = (longlong)&___7FSlateBrush__6B_;
  *(UMaterialInstanceDynamic **)param_3 = pUVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execGetInputEventFromCharacterEvent @ 146aa1c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execGetInputEventFromCharacterEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCharacterEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_68;
  FCharacterEvent local_40;
  
  local_40._padding_._0_2_ = local_res10.s.LowPart._0_2_ & 0xfe00;
  local_40._padding_._2_1_ = 0;
  local_40._12_8_ = 0;
  local_40._padding_ = 0;
  QueryPerformanceCounter(&local_res10);
  local_40._padding_ = (longlong)&___7FCharacterEvent__6B_;
  local_40.Character = L'\0';
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  pFVar2 = &local_40;
  if ((FCharacterEvent *)param_2->MostRecentPropertyAddress != (FCharacterEvent *)0x0) {
    pFVar2 = (FCharacterEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.ModifierKeys = *(FModifierKeysState *)&pFVar2->_padding_;
  local_68.bIsRepeat = *(bool *)((longlong)&pFVar2->_padding_ + 2);
  local_68.UserIndex = *(uint *)((longlong)&pFVar2->_padding_ + 4);
  local_68.EventPath = (FWidgetPath *)pFVar2->_padding_;
  local_68._padding_ = (longlong)&___7FInputEvent__6B_;
  local_68.InputDeviceId.InternalId = (int)pFVar2->_padding_;
  local_68.EventTimestamp = pFVar2->_padding_;
  *(FModifierKeysState *)((longlong)param_3 + 8) = local_68.ModifierKeys;
  *(bool *)((longlong)param_3 + 10) = local_68.bIsRepeat;
  *(uint *)((longlong)param_3 + 0xc) = local_68.UserIndex;
  *(int *)((longlong)param_3 + 0x10) = local_68.InputDeviceId.InternalId;
  *(FWidgetPath **)((longlong)param_3 + 0x18) = local_68.EventPath;
  *(ulong64 *)((longlong)param_3 + 0x20) = local_68.EventTimestamp;
  FInputEvent::~FInputEvent(&local_68);
  FCharacterEvent::~FCharacterEvent(&local_40);
  return;
}

// execGetInputEventFromKeyEvent @ 146aa1d50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execGetInputEventFromKeyEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FKeyEvent *pFVar2;
  FInputEvent local_88;
  FKeyEvent local_58;
  
  FKeyEvent::FKeyEvent(&local_58);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  pFVar2 = &local_58;
  if ((FKeyEvent *)param_2->MostRecentPropertyAddress != (FKeyEvent *)0x0) {
    pFVar2 = (FKeyEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_88.ModifierKeys = *(FModifierKeysState *)&pFVar2->_padding_;
  local_88.bIsRepeat = *(bool *)((longlong)&pFVar2->_padding_ + 2);
  local_88.UserIndex = *(uint *)((longlong)&pFVar2->_padding_ + 4);
  local_88.EventPath = (FWidgetPath *)pFVar2->_padding_;
  local_88._padding_ = (longlong)&___7FInputEvent__6B_;
  local_88.InputDeviceId.InternalId = (int)pFVar2->_padding_;
  local_88.EventTimestamp = pFVar2->_padding_;
  *(FModifierKeysState *)((longlong)param_3 + 8) = local_88.ModifierKeys;
  *(bool *)((longlong)param_3 + 10) = local_88.bIsRepeat;
  *(uint *)((longlong)param_3 + 0xc) = local_88.UserIndex;
  *(int *)((longlong)param_3 + 0x10) = local_88.InputDeviceId.InternalId;
  *(FWidgetPath **)((longlong)param_3 + 0x18) = local_88.EventPath;
  *(ulong64 *)((longlong)param_3 + 0x20) = local_88.EventTimestamp;
  FInputEvent::~FInputEvent(&local_88);
  FKeyEvent::~FKeyEvent(&local_58);
  return;
}

// execGetInputEventFromNavigationEvent @ 146aa1e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execGetInputEventFromNavigationEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FInputEvent *pFVar2;
  LARGE_INTEGER local_res10;
  FInputEvent local_68;
  FInputEvent local_40;
  undefined2 local_18;
  
  local_40.bIsRepeat = false;
  local_40.ModifierKeys.bAreCapsLocked = 0;
  local_40.ModifierKeys.bIsRightCommandDown = 0;
  local_40.ModifierKeys.bIsLeftCommandDown = 0;
  local_40.ModifierKeys.bIsRightAltDown = 0;
  local_40.ModifierKeys.bIsLeftAltDown = 0;
  local_40.ModifierKeys.bIsRightControlDown = 0;
  local_40.ModifierKeys.bIsLeftControlDown = 0;
  local_40.ModifierKeys.bIsRightShiftDown = 0;
  local_40.ModifierKeys.bIsLeftShiftDown = 0;
  local_40.InputDeviceId.InternalId = -1;
  local_40.UserIndex = 0;
  local_40.EventPath = (FWidgetPath *)0x0;
  QueryPerformanceCounter(&local_res10);
  local_40.EventTimestamp = (ulong64)local_res10;
  local_40._padding_ = (longlong)&___7FNavigationEvent__6B_;
  local_18 = 0x207;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_40,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_40);
  }
  pFVar2 = &local_40;
  if ((FInputEvent *)param_2->MostRecentPropertyAddress != (FInputEvent *)0x0) {
    pFVar2 = (FInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_68.ModifierKeys = pFVar2->ModifierKeys;
  local_68.bIsRepeat = pFVar2->bIsRepeat;
  local_68.UserIndex = pFVar2->UserIndex;
  local_68.EventPath = pFVar2->EventPath;
  local_68._padding_ = (longlong)&___7FInputEvent__6B_;
  local_68.InputDeviceId.InternalId = (pFVar2->InputDeviceId).InternalId;
  local_68.EventTimestamp = pFVar2->EventTimestamp;
  *(FModifierKeysState *)((longlong)param_3 + 8) = local_68.ModifierKeys;
  *(bool *)((longlong)param_3 + 10) = local_68.bIsRepeat;
  *(uint *)((longlong)param_3 + 0xc) = local_68.UserIndex;
  *(int *)((longlong)param_3 + 0x10) = local_68.InputDeviceId.InternalId;
  *(FWidgetPath **)((longlong)param_3 + 0x18) = local_68.EventPath;
  *(ulong64 *)((longlong)param_3 + 0x20) = local_68.EventTimestamp;
  FInputEvent::~FInputEvent(&local_68);
  FInputEvent::~FInputEvent(&local_40);
  return;
}

// execGetInputEventFromPointerEvent @ 146aa1fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execGetInputEventFromPointerEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FPointerEvent *pFVar2;
  FInputEvent local_b8;
  FPointerEvent local_88;
  
  FPointerEvent::FPointerEvent(&local_88);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_88,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_88);
  }
  pFVar2 = &local_88;
  if ((FPointerEvent *)param_2->MostRecentPropertyAddress != (FPointerEvent *)0x0) {
    pFVar2 = (FPointerEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_b8.ModifierKeys = *(FModifierKeysState *)&pFVar2->_padding_;
  local_b8.bIsRepeat = *(bool *)((longlong)&pFVar2->_padding_ + 2);
  local_b8.UserIndex = *(uint *)((longlong)&pFVar2->_padding_ + 4);
  local_b8.EventPath = (FWidgetPath *)pFVar2->_padding_;
  local_b8._padding_ = (longlong)&___7FInputEvent__6B_;
  local_b8.InputDeviceId.InternalId = (int)pFVar2->_padding_;
  local_b8.EventTimestamp = pFVar2->_padding_;
  *(FModifierKeysState *)((longlong)param_3 + 8) = local_b8.ModifierKeys;
  *(bool *)((longlong)param_3 + 10) = local_b8.bIsRepeat;
  *(uint *)((longlong)param_3 + 0xc) = local_b8.UserIndex;
  *(int *)((longlong)param_3 + 0x10) = local_b8.InputDeviceId.InternalId;
  *(FWidgetPath **)((longlong)param_3 + 0x18) = local_b8.EventPath;
  *(ulong64 *)((longlong)param_3 + 0x20) = local_b8.EventTimestamp;
  FInputEvent::~FInputEvent(&local_b8);
  FPointerEvent::~FPointerEvent(&local_88);
  return;
}

// execGetKeyEventFromAnalogInputEvent @ 146aa20f0

void __cdecl
UWidgetBlueprintLibrary::execGetKeyEventFromAnalogInputEvent
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FAnalogInputEvent *pFVar3;
  FModifierKeysState local_res10 [4];
  FKeyEvent local_c8;
  FKey local_80;
  FAnalogInputEvent local_68;
  
  INSERT(local_res10[0],0,8,1);
  INSERT(local_res10[0],0,7,1);
  INSERT(local_res10[0],0,6,1);
  INSERT(local_res10[0],0,5,1);
  INSERT(local_res10[0],0,4,1);
  INSERT(local_res10[0],0,3,1);
  INSERT(local_res10[0],0,2,1);
  INSERT(local_res10[0],0,1,1);
  INSERT(local_res10[0],0,0,1);
  local_80.KeyName.ComparisonIndex.Value = 0;
  local_80.KeyName.Number = 0;
  local_80.KeyDetails.Object = (FKeyDetails *)0x0;
  local_80.KeyDetails.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FKeyEvent::FKeyEvent((FKeyEvent *)&local_68,&local_80,local_res10,0,false,0,0);
  local_68.AnalogValue = 0.0;
  local_68._padding_ = (longlong)&___7FAnalogInputEvent__6B_;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_c8._padding_ = (longlong)&___7FKeyEvent__6B_;
  pFVar3 = &local_68;
  if ((FAnalogInputEvent *)param_2->MostRecentPropertyAddress != (FAnalogInputEvent *)0x0) {
    pFVar3 = (FAnalogInputEvent *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar3->_padding_;
  local_c8._padding_._0_2_ = (undefined2)pFVar3->_padding_;
  local_c8._padding_._2_1_ = *(undefined1 *)((longlong)&pFVar3->_padding_ + 2);
  local_c8._padding_ = pFVar3->_padding_;
  local_c8._padding_ = pFVar3->_padding_;
  local_c8.Key.KeyName = (FName)pFVar3->_padding_;
  local_c8.Key.KeyDetails.Object = (FKeyDetails *)pFVar3->_padding_;
  local_c8._padding_._4_4_ = *(undefined4 *)((longlong)&pFVar3->_padding_ + 4);
  local_c8._padding_._0_4_ = (undefined4)pFVar3->_padding_;
  if (local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_c8.CharacterCode = (uint)pFVar3->_padding_;
  local_c8.KeyCode = *(uint *)((longlong)&pFVar3->_padding_ + 4);
  *(undefined2 *)((longlong)param_3 + 8) = (undefined2)local_c8._padding_;
  *(undefined1 *)((longlong)param_3 + 10) = local_c8._padding_._2_1_;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_c8._padding_._4_4_;
  *(undefined4 *)((longlong)param_3 + 0x10) = (undefined4)local_c8._padding_;
  *(longlong *)((longlong)param_3 + 0x18) = local_c8._padding_;
  *(longlong *)((longlong)param_3 + 0x20) = local_c8._padding_;
  *(FName *)((longlong)param_3 + 0x28) = local_c8.Key.KeyName;
  if (local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)param_3 + 0x38);
  *(FKeyDetails **)((longlong)param_3 + 0x30) = local_c8.Key.KeyDetails.Object;
  *(TReferenceControllerBase<1> **)((longlong)param_3 + 0x38) =
       local_c8.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(uint *)((longlong)param_3 + 0x40) = local_c8.CharacterCode;
  *(uint *)((longlong)param_3 + 0x44) = local_c8.KeyCode;
  FKeyEvent::~FKeyEvent(&local_c8);
  FAnalogInputEvent::~FAnalogInputEvent(&local_68);
  return;
}

// execGetSafeZonePadding @ 146aa2870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execGetSafeZonePadding(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  double dVar2;
  FSlateApplication *this;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UObject *local_res10 [2];
  float local_res20;
  float local_res24;
  FMargin local_98;
  TVector2<double>_u_0 local_88;
  double local_78 [2];
  double local_68 [3];
  undefined8 uStack_50;
  double local_48 [3];
  undefined8 uStack_30;
  
  local_res10[0] = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_68[0] = 0.0;
  local_68[1] = 0.0;
  local_68[2] = (double)___xmm_3ff00000000000000000000000000000;
  uStack_50 = _UNK_15061cbc8;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  pdVar4 = local_68;
  if (pdVar5 != (double *)0x0) {
    pdVar4 = pdVar5;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  local_48[2] = (double)___xmm_3ff00000000000000000000000000000;
  uStack_30 = _UNK_15061cbc8;
  pdVar5 = local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar5 = (double *)param_2->MostRecentPropertyAddress;
  }
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  pdVar3 = local_48;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar3 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  UWidgetLayoutLibrary::GetViewportSize((TVector2<double> *)&local_88._s_0,local_res10[0]);
  local_98.Left = 0.0;
  local_98.Top = 0.0;
  local_98.Right = 0.0;
  local_98.Bottom = 0.0;
  this = FSlateApplication::Get();
  local_res20 = (float)local_88._s_0.X;
  local_res24 = (float)local_88._s_0.Y;
  FSlateApplicationBase::GetSafeZoneSize
            ((FSlateApplicationBase *)this,&local_98,(FDeprecateVector2DParameter *)&local_res20);
  dVar6 = (double)local_98.Bottom;
  dVar2 = (double)local_98.Top;
  dVar7 = (double)local_98.Right;
  dVar8 = (double)local_98.Left;
  *pdVar4 = dVar8;
  pdVar4[1] = dVar2;
  pdVar4[2] = dVar7;
  if (dVar7 <= dVar8) {
    dVar7 = dVar8;
  }
  pdVar4[3] = dVar6;
  if (dVar6 <= dVar2) {
    dVar6 = dVar2;
  }
  *pdVar5 = dVar7 / local_88._s_0.X;
  pdVar5[1] = dVar6 / local_88._s_0.Y;
  dVar2 = pdVar4[1];
  *pdVar3 = *pdVar4;
  pdVar3[1] = dVar2;
  dVar2 = pdVar4[3];
  pdVar3[2] = pdVar4[2];
  pdVar3[3] = dVar2;
  return;
}

// execHandled @ 146aa2d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execHandled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FReply local_178;
  FReply local_c0;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FReply::FReply(&local_178,false);
  FReply::FReply(&local_c0,&local_178);
  FReply::~FReply(&local_178);
  FReply::FReply(&local_178,true);
  FReply::operator=(&local_c0,&local_178);
  FReply::~FReply(&local_178);
  FReply::operator=(param_3,&local_c0);
  FReply::~FReply(&local_c0);
  return;
}

// execIsDragDropping @ 146aa3000

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execIsDragDropping(UObject *param_1,FFrame *param_2,void *param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  FSlateApplication *pFVar4;
  FString *pFVar5;
  FDragDropOperation *pFVar6;
  TSharedPtr<FDragDropOperation,1> local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FSlateApplication::Get();
  bVar2 = FSlateApplication::IsDragDropping(pFVar4);
  if (bVar2) {
    pFVar4 = FSlateApplication::Get();
    FSlateApplication::GetDragDroppingContent(pFVar4,&local_18);
    if (local_18.Object != (FDragDropOperation *)0x0) {
      pFVar6 = local_18.Object;
      if ((local_18.Object == (FDragDropOperation *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), pFVar6 = local_18.Object, bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = *(code **)(pFVar6->_padding_ + 0x50);
      pFVar5 = FUMGDragDropOp::GetTypeId();
      cVar3 = (*pcVar1)(pFVar6,pFVar5);
      if (cVar3 != '\0') {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_18.SharedReferenceCount.ReferenceController);
        *(undefined1 *)param_3 = 1;
        return;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execLockMouse @ 146aa3a90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execLockMouse(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FSharedReferencer<1> FVar6;
  bool bVar7;
  SWidget *pSVar8;
  FReply *this;
  UWidget *local_res10;
  TSharedPtr<SWidget,1> local_248;
  FReply local_238;
  FReply local_178;
  FReply local_c0;
  
  FReply::FReply(&local_178,false);
  FReply::FReply(&local_238,&local_178);
  FReply::~FReply(&local_178);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  local_res10 = (UWidget *)0x0;
  this = &local_238;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 != (UWidget *)0x0) {
    UWidget::GetCachedWidget(local_res10,&local_248);
    if (local_248.Object != (SWidget *)0x0) {
      pSVar8 = local_248.Object;
      if ((local_248.Object == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), pSVar8 = local_248.Object, bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar6.ReferenceController = local_248.SharedReferenceCount.ReferenceController;
      if (local_248.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_248.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pSVar8 == (SWidget *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->MouseLockWidget).Object = pSVar8;
      if (FVar6.ReferenceController !=
          (this->MouseLockWidget).WeakReferenceCount.ReferenceController) {
        if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar6.ReferenceController)->WeakReferenceCount =
               (atomic<int>)((int)(FVar6.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar4 = (this->MouseLockWidget).WeakReferenceCount.ReferenceController;
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
        (this->MouseLockWidget).WeakReferenceCount.ReferenceController = FVar6.ReferenceController;
      }
      this->bShouldReleaseMouseLock = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      FReply::operator=(this,this);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(&local_c0,this);
  FReply::operator=(param_3,&local_c0);
  FReply::~FReply(&local_c0);
  FReply::~FReply(&local_238);
  return;
}

// execMakeBrushFromAsset @ 146aa3cd0

void __cdecl
UWidgetBlueprintLibrary::execMakeBrushFromAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *pFVar2;
  longlong local_res10;
  TVector2<float>_u_0 local_res20;
  FSlateBrush local_168;
  undefined **local_b8 [20];
  TReferenceControllerBase<1> *local_18;
  
  local_res10 = 0;
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
  if (local_res10 == 0) {
    local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar2 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_b8,
                        (FDeprecateVector2DParameter *)&local_res20._s_0);
    FSlateBrush::FSlateBrush(&local_168,pFVar2);
    local_b8[0] = &___7FSlateBrush__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
  }
  else {
    FSlateBrush::FSlateBrush(&local_168,(FSlateBrush *)(local_res10 + 0x30));
  }
  FSlateBrush::operator=(param_3,&local_168);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execMakeBrushFromMaterial @ 146aa3df0

void __cdecl
UWidgetBlueprintLibrary::execMakeBrushFromMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int iVar2;
  int iVar3;
  UObject *pUVar4;
  FSlateBrush *pFVar5;
  int local_res10 [2];
  int local_res20 [2];
  UObject *local_188;
  TVector2<float>_u_0 local_180;
  undefined1 local_178 [36];
  float local_154;
  FSharedReferencer<1> local_d8;
  FSlateBrush local_c8;
  
  local_188 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_188;
  iVar3 = local_res20[0];
  iVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_188 == (UObject *)0x0) {
    local_180 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar5 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_178,(FDeprecateVector2DParameter *)&local_180._s_0
                       );
  }
  else {
    FSlateBrush::FSlateBrush((FSlateBrush *)local_178);
    FSlateBrush::SetResourceObject((FSlateBrush *)local_178,pUVar4);
    pFVar5 = (FSlateBrush *)local_178;
    local_178._32_4_ = (undefined4)iVar3;
    local_154 = (float)iVar2;
  }
  FSlateBrush::FSlateBrush(&local_c8,pFVar5);
  local_178._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ReferenceController);
  FSlateBrush::operator=(param_3,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execMakeBrushFromTexture @ 146aa3fb0

void __cdecl
UWidgetBlueprintLibrary::execMakeBrushFromTexture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UTexture2D *this;
  int iVar2;
  int iVar3;
  FSlateBrush *pFVar4;
  int local_res10 [2];
  int local_res20 [2];
  UTexture2D *local_188;
  TVector2<float>_u_0 local_180;
  undefined1 local_178 [36];
  float local_154;
  FSharedReferencer<1> local_d8;
  FSlateBrush local_c8;
  
  local_188 = (UTexture2D *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_188,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_188);
  }
  local_res20[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_188;
  iVar2 = local_res20[0];
  iVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_188 == (UTexture2D *)0x0) {
    local_180 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    pFVar4 = (FSlateBrush *)
             FSlateNoResource::FSlateNoResource
                       ((FSlateNoResource *)local_178,(FDeprecateVector2DParameter *)&local_180._s_0
                       );
  }
  else {
    FSlateBrush::FSlateBrush((FSlateBrush *)local_178);
    FSlateBrush::SetResourceObject((FSlateBrush *)local_178,(UObject *)this);
    if (iVar2 < 1) {
      iVar2 = UTexture2D::GetSizeX(this);
    }
    if (iVar3 < 1) {
      iVar3 = UTexture2D::GetSizeY(this);
    }
    pFVar4 = (FSlateBrush *)local_178;
    local_178._32_4_ = (undefined4)iVar2;
    local_154 = (float)iVar3;
  }
  FSlateBrush::FSlateBrush(&local_c8,pFVar4);
  local_178._0_8_ = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.ReferenceController);
  FSlateBrush::operator=(param_3,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execNoResourceBrush @ 146aa4190

void __cdecl
UWidgetBlueprintLibrary::execNoResourceBrush(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSlateBrush *pFVar1;
  TVector2<float>_u_0 local_res10 [3];
  undefined **local_168 [20];
  TReferenceControllerBase<1> *local_c8;
  FSlateBrush local_b8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10[0] = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar1 = (FSlateBrush *)
           FSlateNoResource::FSlateNoResource
                     ((FSlateNoResource *)local_168,
                      (FDeprecateVector2DParameter *)&local_res10[0]._s_0);
  FSlateBrush::FSlateBrush(&local_b8,pFVar1);
  local_168[0] = &___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
  FSlateBrush::operator=(param_3,&local_b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execReleaseJoystickCapture @ 146aa5fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execReleaseJoystickCapture(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FReply *pFVar2;
  FReply *this;
  int local_res10 [2];
  FReply local_188;
  FReply local_c8;
  
  FReply::FReply(&local_188,false);
  FReply::FReply(&local_c8,&local_188);
  FReply::~FReply(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  local_res10[0] = 0;
  this = &local_c8;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar2 = FReply::ClearUserFocus(this,SetDirectly,local_res10[0] != 0);
  FReply::operator=(this,pFVar2);
  FReply::FReply(&local_188,this);
  FReply::operator=(param_3,&local_188);
  FReply::~FReply(&local_188);
  FReply::~FReply(&local_c8);
  return;
}

// execReleaseMouseCapture @ 146aa6200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execReleaseMouseCapture(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FReply *this;
  undefined8 local_198 [2];
  FReply local_188;
  FReply local_c8;
  
  FReply::FReply(&local_188,false);
  FReply::FReply(&local_c8,&local_188);
  FReply::~FReply(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  this = &local_c8;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (&this->MouseCaptor != (TWeakPtr<SWidget,1> *)local_198) {
    pTVar4 = (this->MouseCaptor).WeakReferenceCount.ReferenceController;
    (this->MouseCaptor).Object = (SWidget *)0x0;
    (this->MouseCaptor).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
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
  this->bReleaseMouseCapture = 1;
  this->bUseHighPrecisionMouse = 0;
  FReply::operator=(this,this);
  FReply::FReply(&local_188,this);
  FReply::operator=(param_3,&local_188);
  FReply::~FReply(&local_188);
  FReply::~FReply(&local_c8);
  return;
}

// execRestorePreviousWindowTitleBarState @ 146aa6750

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execRestorePreviousWindowTitleBarState
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  longlong lVar2;
  UGameViewportClient *pUVar3;
  IGameLayerManager *pIVar4;
  atomic<int> aVar5;
  UEngine *pUVar6;
  atomic<int> aVar7;
  UClass *pUVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar6 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar8 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = pUVar6->_padding_;
    iVar1 = (int)pUVar8->_padding_;
    if (((iVar1 <= *(int *)(lVar2 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar8->_padding_)) &&
       (pUVar3 = (pUVar6->GameViewport).field0_0x0.DebugPtr, pUVar3 != (UGameViewportClient *)0x0))
    {
      pTVar9 = (pUVar3->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        aVar5 = pTVar9->SharedReferenceCount;
        do {
          if (aVar5 == (atomic<int>)0x0) {
            pTVar9 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146aa67d0;
          }
          LOCK();
          aVar7 = pTVar9->SharedReferenceCount;
          bVar10 = aVar5 == aVar7;
          if (bVar10) {
            pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
            aVar7 = aVar5;
          }
          UNLOCK();
          aVar5 = aVar7;
        } while (!bVar10);
        pIVar4 = (pUVar3->GameLayerManagerPtr).Object;
        if (pIVar4 != (IGameLayerManager *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x80))();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
          return;
        }
      }
LAB_146aa67d0:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      return;
    }
  }
  return;
}

// execSetBrushResourceToMaterial @ 146aa7870

void __cdecl
UWidgetBlueprintLibrary::execSetBrushResourceToMaterial
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  UObject *local_res10;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res10 = (UObject *)0x0;
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
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
  FSlateBrush::SetResourceObject(this,local_res10);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execSetBrushResourceToTexture @ 146aa7980

void __cdecl
UWidgetBlueprintLibrary::execSetBrushResourceToTexture
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateBrush *this;
  UObject *local_res10;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_b8);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b8);
  }
  local_res10 = (UObject *)0x0;
  this = &local_b8;
  if ((FSlateBrush *)param_2->MostRecentPropertyAddress != (FSlateBrush *)0x0) {
    this = (FSlateBrush *)param_2->MostRecentPropertyAddress;
  }
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
  FSlateBrush::SetResourceObject(this,local_res10);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execSetColorVisionDeficiencyType @ 146aa7b20

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execSetColorVisionDeficiencyType
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FSlateRenderer *pFVar2;
  undefined1 uVar3;
  FSlateApplicationBase *pFVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  undefined1 local_res10 [16];
  int local_res20 [2];
  int local_48;
  float local_44 [11];
  
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_44[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_44,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_44);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar5 = local_res20[0] != 0;
  local_48 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  uVar3 = local_res10[0];
  bVar6 = local_48 != 0;
  fVar7 = local_44[0];
  if (__real_3f800000 <= local_44[0]) {
    fVar7 = __real_3f800000;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  pFVar4 = FSlateApplicationBase::Get();
  pFVar2 = (pFVar4->Renderer).Object;
  (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,uVar3,(int)(fVar7 * __real_41200000),bVar5,bVar6);
  return;
}

// execSetFocusToGameViewport @ 146aa8540

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execSetFocusToGameViewport(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSlateApplication *this;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = FSlateApplication::Get();
  FSlateApplication::SetAllUserFocusToGameViewport(this,SetDirectly);
  return;
}

// execSetHardwareCursor @ 146aa8690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execSetHardwareCursor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  bool bVar3;
  UWorld *this;
  UGameViewportClient *this_00;
  Type TVar4;
  byte local_res10 [8];
  FName local_res18;
  UObject *local_res20;
  double local_48;
  double dStack_40;
  TVector2<double>_u_0 local_38 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  FVar2 = local_res18;
  TVar4 = (Type)local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = UEngine::GetWorldFromContextObject(GEngine,local_res20,LogAndReturnNull);
  if (((this != (UWorld *)0x0) && (bVar3 = UWorld::IsGameWorld(this), bVar3)) &&
     (this_00 = UWorld::GetGameViewport(this), this_00 != (UGameViewportClient *)0x0)) {
    local_38[0]._s_0.X = local_48;
    local_38[0]._s_0.Y = dStack_40;
    bVar3 = UGameViewportClient::SetHardwareCursor
                      (this_00,TVar4,FVar2,(TVector2<double> *)&local_38[0]._s_0);
    *(bool *)param_3 = bVar3;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execSetInputMode_GameAndUIEx @ 146aa8d90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execSetInputMode_GameAndUIEx
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  EMouseLockMode EVar4;
  UWidget *this;
  longlong *plVar5;
  FSharedReferencer<1> FVar6;
  TSharedRef<SWidget,1> *pTVar7;
  bool bVar8;
  bool bVar9;
  EMouseLockMode local_res10 [16];
  int local_res20 [2];
  int local_78 [2];
  UWidget *local_70;
  longlong *local_68;
  TSharedRef<SWidget,1> local_60;
  FInputModeGameAndUI local_50;
  
  local_68 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_70 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_70,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_70);
  }
  local_res10[0] = DoNotLock;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  bVar8 = local_res20[0] != 0;
  local_78[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  plVar5 = local_68;
  this = local_70;
  EVar4 = local_res10[0];
  bVar9 = local_78[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_68 != (longlong *)0x0) {
    FInputModeGameAndUI::FInputModeGameAndUI(&local_50);
    local_50.MouseLockMode = EVar4;
    local_50.bHideCursorDuringCapture = bVar8;
    if (this != (UWidget *)0x0) {
      pTVar7 = UWidget::TakeWidget(this,&local_60);
      FVar6.ReferenceController = local_50.WidgetToFocus.SharedReferenceCount.ReferenceController;
      pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
      local_50.WidgetToFocus.Object = pTVar7->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_50.WidgetToFocus.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar6.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
    }
    (**(code **)(*plVar5 + 0xd68))(plVar5,&local_50);
    if (bVar9) {
      (**(code **)(*plVar5 + 0xdb0))(plVar5);
    }
    FInputModeGameAndUI::~FInputModeGameAndUI(&local_50);
  }
  return;
}

// execSetInputMode_GameOnly @ 146aa8f90

void __cdecl
UWidgetBlueprintLibrary::execSetInputMode_GameOnly(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  bool bVar3;
  int local_res10 [2];
  longlong *local_res20;
  FInputModeGameOnly local_18;
  
  local_res20 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  plVar2 = local_res20;
  bVar3 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (longlong *)0x0) {
    FInputModeGameOnly::FInputModeGameOnly(&local_18);
    (**(code **)(*plVar2 + 0xd68))(plVar2,&local_18);
    if (bVar3) {
      (**(code **)(*plVar2 + 0xdb0))(plVar2);
    }
    FInputModeGameOnly::~FInputModeGameOnly(&local_18);
  }
  return;
}

// execSetInputMode_UIOnlyEx @ 146aa90a0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execSetInputMode_UIOnlyEx(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  EMouseLockMode EVar2;
  UWidget *this;
  longlong *plVar3;
  TSharedRef<SWidget,1> *pTVar4;
  bool bVar5;
  EMouseLockMode local_res10 [8];
  int local_res20 [2];
  UWidget *local_68;
  longlong *local_60;
  TSharedPtr<SWidget,1> local_58;
  TSharedRef<SWidget,1> local_48;
  FInputModeUIOnly local_38;
  
  local_60 = (longlong *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_68 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = DoNotLock;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  plVar3 = local_60;
  this = local_68;
  EVar2 = local_res10[0];
  bVar5 = local_res20[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_60 != (longlong *)0x0) {
    FInputModeUIOnly::FInputModeUIOnly(&local_38);
    FInputModeUIOnly::SetLockMouseToViewportBehavior(&local_38,EVar2);
    if (this != (UWidget *)0x0) {
      pTVar4 = UWidget::TakeWidget(this,&local_48);
      local_58.Object = pTVar4->Object;
      local_58.SharedReferenceCount.ReferenceController =
           (pTVar4->SharedReferenceCount).ReferenceController;
      if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FInputModeUIOnly::SetWidgetToFocus(&local_38,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    (**(code **)(*plVar3 + 0xd68))(plVar3,&local_38);
    if (bVar5) {
      (**(code **)(*plVar3 + 0xdb0))(plVar3);
    }
    FInputModeUIOnly::~FInputModeUIOnly(&local_38);
  }
  return;
}

// execSetMousePosition @ 146aa9300

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execSetMousePosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FReply *pFVar2;
  FReply *this;
  TIntPoint<int>_u_0 local_res10;
  double local_198;
  double local_190;
  FReply local_188;
  FReply local_c8;
  
  FReply::FReply(&local_188,false);
  FReply::FReply(&local_c8,&local_188);
  FReply::~FReply(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  this = &local_c8;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  local_res10._s_0.X = (int)local_198;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10._s_0.Y = (int)local_190;
  pFVar2 = FReply::SetMousePos(this,(TIntPoint<int> *)&local_res10._s_0);
  FReply::operator=(this,pFVar2);
  FReply::FReply(&local_188,this);
  FReply::operator=(param_3,&local_188);
  FReply::~FReply(&local_188);
  FReply::~FReply(&local_c8);
  return;
}

// execSetUserFocus @ 146aaa260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execSetUserFocus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FReply *pFVar4;
  FReply *this;
  bool bVar5;
  int local_res10 [2];
  UWidget *local_res18 [2];
  TSharedPtr<SWidget,1> local_278;
  TSharedRef<SWidget,1> local_268;
  FReply local_258;
  FReply local_198;
  FReply local_e0;
  
  FReply::FReply(&local_198,false);
  FReply::FReply(&local_258,&local_198);
  FReply::~FReply(&local_198);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_258);
  }
  local_res18[0] = (UWidget *)0x0;
  this = &local_258;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar5 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18[0] != (UWidget *)0x0) {
    UWidget::GetCachedWidget(local_res18[0],&local_278);
    if (local_278.Object != (SWidget *)0x0) {
      if (local_278.Object == (SWidget *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_268.Object = local_278.Object;
      local_268.SharedReferenceCount.ReferenceController =
           local_278.SharedReferenceCount.ReferenceController;
      if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_278.Object == (SWidget *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pFVar4 = FReply::SetUserFocus(this,&local_268,SetDirectly,bVar5);
      FReply::operator=(this,pFVar4);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_278.SharedReferenceCount.ReferenceController);
  }
  FReply::FReply(&local_e0,this);
  FReply::operator=(param_3,&local_e0);
  FReply::~FReply(&local_e0);
  FReply::~FReply(&local_258);
  return;
}

// execSetWindowTitleBarCloseButtonActive @ 146aaa8e0

void __cdecl
UWidgetBlueprintLibrary::execSetWindowTitleBarCloseButtonActive
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [6];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SWindowTitleBarArea::bIsCloseButtonActive = local_res10[0] != 0;
  return;
}

// execSetWindowTitleBarOnCloseClickedDelegate @ 146aaa960

void __cdecl
UWidgetBlueprintLibrary::execSetWindowTitleBarOnCloseClickedDelegate
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TVar2;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  undefined1 local_78 [16];
  int local_68;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_60;
  undefined8 local_58;
  undefined8 local_50;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28 [4];
  
  local_60.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_58 = 0;
  local_50 = 0;
  FDelegateProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  local_28[0].AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_60,(FReadAccessScope *)&local_48);
  local_28[1].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_58;
  local_28[2].AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_50;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (local_28,(FReadAccessScope *)&local_48);
  TVar3.AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_28[2];
  TVar2.AccessDetector.State =
       (FMRSWRecursiveAccessDetector)(FMRSWRecursiveAccessDetector)local_28[1];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &OnGameWindowCloseButtonClicked,(FWriteAccessScope *)local_78);
  OnGameWindowCloseButtonClicked._8_8_ = TVar2.AccessDetector.State;
  OnGameWindowCloseButtonClicked._16_8_ = TVar3.AccessDetector.State;
  if (local_68._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_78._8_8_,(FDestructionSentinel *)local_78);
  }
  local_78._0_8_ = (atomic<unsigned___int64>)0x0;
  local_78._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_68 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  local_30 = local_78 + 8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x20,(FDelegateAllocation *)(local_78 + 8));
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    puVar4[3] = OnGameWindowCloseButtonClickedSimpleDelegate;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&SWindowTitleBarArea::OnCloseButtonClicked,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_78);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_78,
             (FWriteAccessScope *)&local_48);
  if ((local_68 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_78._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_78._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_78 + 8),0,0,0x10);
    local_68 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if ((FMRSWRecursiveAccessDetector *)local_78._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_78._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_78);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28[0].AccessDetector);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_60.AccessDetector);
  return;
}

// execSetWindowTitleBarState @ 146aaab70

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

void __cdecl
UWidgetBlueprintLibrary::execSetWindowTitleBarState(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  longlong lVar4;
  UGameViewportClient *pUVar5;
  IGameLayerManager *pIVar6;
  code *pcVar7;
  atomic<int> aVar8;
  UEngine *pUVar9;
  undefined1 uVar10;
  UWidget *this;
  atomic<int> aVar11;
  UClass *pUVar12;
  TSharedPtr<SWidget,1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined1 local_res10 [16];
  undefined1 local_res20;
  int local_78;
  int local_74;
  int local_70 [2];
  UWidget *local_68;
  undefined8 local_60;
  TReferenceControllerBase<1> *pTStack_58;
  TSharedPtr<SWidget,1> local_50;
  
  local_68 = (UWidget *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res10[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_res20 = local_78 != 0;
  local_74 = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_74,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_74);
  }
  bVar15 = local_74 != 0;
  local_70[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_70,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_70);
  }
  this = local_68;
  uVar10 = local_res10[0];
  bVar16 = local_70[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar9 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar12 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar4 = pUVar9->_padding_;
    iVar2 = (int)pUVar12->_padding_;
    if (((iVar2 <= *(int *)(lVar4 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar12->_padding_)) &&
       (pUVar5 = (pUVar9->GameViewport).field0_0x0.DebugPtr, pUVar5 != (UGameViewportClient *)0x0))
    {
      pTVar14 = (pUVar5->GameLayerManagerPtr).WeakReferenceCount.ReferenceController;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        aVar8 = pTVar14->SharedReferenceCount;
        do {
          if (aVar8 == (atomic<int>)0x0) {
            pTVar14 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_146aaad30;
          }
          LOCK();
          aVar11 = pTVar14->SharedReferenceCount;
          bVar17 = aVar8 == aVar11;
          if (bVar17) {
            pTVar14->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar11 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar11;
        } while (!bVar17);
        pIVar6 = (pUVar5->GameLayerManagerPtr).Object;
        if (pIVar6 != (IGameLayerManager *)0x0) {
          pcVar7 = *(code **)((longlong)*pIVar6 + 0x78);
          if (this == (UWidget *)0x0) {
            local_60 = 0;
            pTStack_58 = (TReferenceControllerBase<1> *)0x0;
            (*pcVar7)(pIVar6,&local_60,uVar10,local_res20,bVar15,bVar16);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_58);
          }
          else {
            pTVar13 = UWidget::GetCachedWidget(this,&local_50);
            (*pcVar7)(pIVar6,pTVar13,uVar10,local_res20,bVar15,bVar16);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_50.SharedReferenceCount.ReferenceController);
          }
        }
      }
LAB_146aaad30:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
    }
  }
  return;
}

// execUnhandled @ 146aabab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UWidgetBlueprintLibrary::execUnhandled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FReply local_178;
  FReply local_c0;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FReply::FReply(&local_178,false);
  FReply::FReply(&local_c0,&local_178);
  FReply::~FReply(&local_178);
  FReply::FReply(&local_178,false);
  FReply::operator=(&local_c0,&local_178);
  FReply::~FReply(&local_178);
  FReply::operator=(param_3,&local_c0);
  FReply::~FReply(&local_c0);
  return;
}

// execUnlockMouse @ 146aabb50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UWidgetBlueprintLibrary::execUnlockMouse(UObject *param_1,FFrame *param_2,void *param_3)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FProperty *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FReply *this;
  undefined8 local_198 [2];
  FReply local_188;
  FReply local_c8;
  
  FReply::FReply(&local_188,false);
  FReply::FReply(&local_c8,&local_188);
  FReply::~FReply(&local_188);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  this = &local_c8;
  if ((FReply *)param_2->MostRecentPropertyAddress != (FReply *)0x0) {
    this = (FReply *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this->bShouldReleaseMouseLock = 1;
  if (&this->MouseLockWidget != (TWeakPtr<SWidget,1> *)local_198) {
    pTVar4 = (this->MouseLockWidget).WeakReferenceCount.ReferenceController;
    (this->MouseLockWidget).Object = (SWidget *)0x0;
    (this->MouseLockWidget).WeakReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
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
  FReply::operator=(this,this);
  FReply::FReply(&local_188,this);
  FReply::operator=(param_3,&local_188);
  FReply::~FReply(&local_188);
  FReply::~FReply(&local_c8);
  return;
}

