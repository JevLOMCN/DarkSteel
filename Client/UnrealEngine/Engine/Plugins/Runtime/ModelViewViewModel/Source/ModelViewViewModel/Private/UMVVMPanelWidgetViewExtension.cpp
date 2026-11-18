// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 12

// StaticClass @ 14a73add0

UClass * __cdecl UMVVMPanelWidgetViewExtension::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMPanelWidgetViewExtension",
               &Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.InnerSingleton,
               StaticRegisterNativesUMVVMPanelWidgetViewExtension,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMPanelWidgetViewExtension>,
               InternalVTableHelperCtorCaller<UMVVMPanelWidgetViewExtension>,local_res8,
               UMVVMViewExtension::StaticClass,UMVVMView::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.InnerSingleton;
}

// UMVVMPanelWidgetViewExtension @ 14a73fb50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMVVMPanelWidgetViewExtension * __thiscall
UMVVMPanelWidgetViewExtension::UMVVMPanelWidgetViewExtension
          (UMVVMPanelWidgetViewExtension *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMPanelWidgetViewExtension__6B_;
  (this->PanelWidget).field0_0x0.DebugPtr = (UPanelWidget *)0x0;
  (this->ClassExtension).field0_0x0.DebugPtr = (UMVVMViewPanelWidgetClassExtension *)0x0;
  return this;
}

// UMVVMPanelWidgetViewExtension @ 14a73fb90

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMVVMPanelWidgetViewExtension * __thiscall
UMVVMPanelWidgetViewExtension::UMVVMPanelWidgetViewExtension
          (UMVVMPanelWidgetViewExtension *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMVVMPanelWidgetViewExtension__6B_;
  (this->PanelWidget).field0_0x0.DebugPtr = (UPanelWidget *)0x0;
  (this->ClassExtension).field0_0x0.DebugPtr = (UMVVMViewPanelWidgetClassExtension *)0x0;
  return this;
}

// ~UMVVMPanelWidgetViewExtension @ 14a740760

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMPanelWidgetViewExtension::~UMVVMPanelWidgetViewExtension(UMVVMPanelWidgetViewExtension *this)

{
  this->_padding_ = (longlong)&___7UMVVMViewExtension__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// BP_SetItems @ 14a742cd0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMVVMPanelWidgetViewExtension::BP_SetItems
          (UMVVMPanelWidgetViewExtension *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FName FVar3;
  UPanelWidget *this_00;
  ITextData *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  Type TVar8;
  uint uVar9;
  TArray<UPanelSlot_*,TSizedDefaultAllocator<32>_> *pTVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  UMVVMView *pUVar13;
  longlong lVar14;
  FText *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FText *pFVar18;
  FTextFormat *pFVar19;
  UUserWidget *pUVar20;
  longlong lVar21;
  int iVar22;
  FName FVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar28;
  UObject *pUVar29;
  Type TVar30;
  FName FVar31;
  undefined1 local_res18 [8];
  longlong local_res20;
  ForAnyElementType local_388;
  int local_380;
  int iStack_37c;
  FName local_378;
  undefined8 local_370;
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_368;
  FName local_358;
  TObjectPtr<UPanelSlot>_u_0 local_350;
  UUserWidget *pUStack_348;
  TObjectPtr<UPanelSlot>_u_0 local_340;
  TObjectPtr<UWidget>_u_0 TStack_338;
  UClass *local_330;
  UObject *local_328;
  FName local_320;
  FName local_318;
  FName local_310;
  UClass *local_308;
  UObject *local_300;
  FName local_2f8;
  UObject *local_2f0;
  FName local_2e8;
  UObject *local_2e0;
  longlong local_2d8;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  UObject *local_2a0;
  void *local_298;
  FTextFormat local_290;
  FText local_280;
  FString local_270;
  TObjectPtr<UPanelSlot>_u_0 *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  FFormatArgumentValue local_248;
  undefined4 local_228;
  FText local_218;
  TSharedRef<FTokenizedMessage,1> local_208;
  FText local_1f8;
  FText local_1e8;
  TSharedRef<FTokenizedMessage,1> local_1d8;
  FText local_1c8;
  FText local_1b8;
  TSharedRef<FTokenizedMessage,1> local_1a8;
  FText local_198;
  TArrayView<TTuple<UPanelSlot_*,UWidget_*>,int> local_188;
  FMessageLog local_178;
  FMessageLog local_140;
  FMessageLog local_108;
  FText local_d0;
  FText local_c0;
  FTextFormat local_b0;
  FText local_a0;
  FTextFormat local_90;
  FText local_80;
  FTextFormat local_70;
  FText local_60 [2];
  UObject *pUVar27;
  
  this_00 = (this->PanelWidget).field0_0x0.DebugPtr;
  if ((this_00 != (UPanelWidget *)0x0) &&
     ((this->ClassExtension).field0_0x0.DebugPtr != (UMVVMViewPanelWidgetClassExtension *)0x0)) {
    local_378.ComparisonIndex.Value = 0;
    local_378.Number = 0;
    local_370 = 0;
    pTVar10 = UPanelWidget::GetSlots(this_00);
    pFVar28 = (pTVar10->AllocatorInstance).Data;
    iVar22 = pTVar10->ArrayNum;
    pFVar1 = pFVar28 + (longlong)iVar22 * 8;
    while( true ) {
      if (pTVar10->ArrayNum != iVar22) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<UPanelSlot_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar28 == pFVar1) break;
      lVar24 = *(longlong *)pFVar28;
      if (*(longlong *)(lVar24 + 0x30) != 0) {
        pUVar11 = Z_Construct_UClass_UUserWidget_NoRegister();
        bVar6 = FObjectPtr::IsA((FObjectPtr *)(lVar24 + 0x30),pUVar11);
        if ((bVar6) && (pUVar20 = *(UUserWidget **)(lVar24 + 0x30), pUVar20 != (UUserWidget *)0x0))
        {
          pUVar11 = (((this->ClassExtension).field0_0x0.DebugPtr)->EntryWidgetClass).Class.
                    field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) {
            if (pUVar11 != (UClass *)0x0) goto LAB_14a742dc2;
LAB_14a742df0:
            pUVar11 = (UClass *)0x0;
          }
          else {
            if (pUVar11 == (UClass *)0x0) goto LAB_14a742df0;
            UE::GC::MarkAsReachable((UObject *)pUVar11);
LAB_14a742dc2:
            pUVar12 = Z_Construct_UClass_UUserWidget_NoRegister();
            if (pUVar12 == (UClass *)0x0) goto LAB_14a742df0;
            iVar7 = (int)pUVar12->_padding_;
            if (((int)pUVar11->_padding_ < iVar7) ||
               ((longlong *)*(undefined1 **)(pUVar11->_padding_ + (longlong)iVar7 * 8) !=
                &pUVar12->_padding_)) {
              bVar6 = false;
            }
            else {
              bVar6 = true;
            }
            if (!bVar6) goto LAB_14a742df0;
          }
          if (((((UClass *)pUVar20->_padding_ == pUVar11) &&
               (pUVar13 = UUserWidget::GetExtension<UMVVMView>(pUVar20), pUVar13 != (UMVVMView *)0x0
               )) && (UMVVMView::GetViewModel
                                (pUVar13,(TScriptInterface<INotifyFieldValueChanged> *)&local_2e0,
                                 ((this->ClassExtension).field0_0x0.DebugPtr)->EntryViewModelName),
                     pUVar27 = local_2e0, local_2e0 != (UObject *)0x0)) &&
             (*(UClass **)&local_2e0->field_0x10 ==
              (((this->ClassExtension).field0_0x0.DebugPtr)->EntryViewModelClass).field0_0x0.
              DebugPtr)) {
            iVar7 = (int)local_370;
            if ((int)local_370 == local_370._4_4_) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,(ForAnyElementType *)&local_378,
                                 (int *)((longlong)&local_370 + 4));
            }
            lVar14 = (longlong)iVar7;
            local_370 = CONCAT44(local_370._4_4_,iVar7 + 1);
            *(longlong *)((longlong)local_378 + lVar14 * 0x18) = lVar24;
            ((longlong *)((longlong)local_378 + 8))[lVar14 * 3] = (longlong)pUVar27;
            plVar2 = (longlong *)((longlong)local_378 + lVar14 * 0x18);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar27);
            }
            plVar2[2] = local_2d8;
          }
        }
      }
      pFVar28 = pFVar28 + 8;
    }
    local_330 = (((this->ClassExtension).field0_0x0.DebugPtr)->EntryViewModelClass).field0_0x0.
                DebugPtr;
    if ((this->_padding_ & 0x10) == 0) {
      lVar24 = this->_padding_;
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6008347913514647573>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Extensions\\MVVMViewClassExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar24 = 0;
    }
    pUVar27 = (UObject *)0x0;
    if ((*(uint *)(lVar24 + 8) & 0x10) == 0) {
      pUVar29 = *(UObject **)(lVar24 + 0x20);
    }
    else {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1637797074370035733>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                         ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
      pUVar29 = pUVar27;
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_388.Data = (FScriptContainerElement *)0x0;
    local_380 = 0;
    iStack_37c = 0;
    uVar26 = 0;
    iVar22 = param_1->ArrayNum;
    if (0 < iVar22) {
      local_res20 = 0;
      do {
        lVar24 = local_res20;
        uVar25 = (uint)pUVar27;
        TVar30 = Int;
        TVar8 = TVar30;
        if ((int)uVar25 < iVar22) {
          TVar8 = ~uVar25 >> 0x1f;
        }
        if ((TVar8 == Int) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pUVar11 = local_330;
        pUVar27 = *(UObject **)((param_1->AllocatorInstance).Data + lVar24);
        if (pUVar27 == (UObject *)0x0) {
          FMessageLog::FMessageLog((FMessageLog *)&local_108,&UE::MVVM::FMessageLog::LogName);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar29);
          }
          local_108.UserWidget.WeakPtr.ObjectIndex = 0;
          local_108.UserWidget.WeakPtr.ObjectSerialNumber = 0;
          local_2f0 = pUVar29;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar29 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar29);
          }
          FWeakObjectPtr::operator=(&local_108.UserWidget.WeakPtr,(FObjectPtr)&local_2f0);
          local_2e8 = (FName)((this->PanelWidget).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_2e8,&local_270);
          pFVar15 = FText::FromString(local_60,&local_270);
          pFVar16 = FText::AsLocalizable_Advanced_LocText
                              (&local_198,L"MVVMViewPanelWidgetExtension",
                               L"SetPanelWidgetItemsViewmodelNullObject",
                               L"The item at index {0} passed as an entry of widget {1} is null. An entry widget won\'t be generated for this item."
                              );
          pFVar19 = FTextFormat::FTextFormat(&local_70,pFVar16,Default);
          local_248.field1_0x8 = (FFormatArgumentValue_u_8)(longlong)(int)uVar25;
          local_228 = 4;
          local_248.Type = TVar30;
          local_248.TextValue.field0_0x0.TypedValue.TextData.Reference =
               (TRefCountPtr<ITextData>)(ITextData *)0x0;
          local_248.TextValue.field0_0x0.TypedValue.Flags = TVar30;
          FText::FText(&local_218,pFVar15);
          if ((local_218.TextData.Reference == (ITextData *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsSet()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                 ,0xbd,
                                 L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          local_368.ArrayNum = 2;
          local_368.AllocatorInstance.Data = (FScriptContainerElement *)(ITextData *)0x0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_368.AllocatorInstance,2,&local_368.ArrayMax);
          ConstructItems<FFormatArgumentValue,FFormatArgumentValue,int>
                    (local_368.AllocatorInstance.Data,&local_248,2);
          local_290.TextFormatData.Object = (pFVar19->TextFormatData).Object;
          local_290.TextFormatData.SharedReferenceCount.ReferenceController =
               (pFVar19->TextFormatData).SharedReferenceCount.ReferenceController;
          if (local_290.TextFormatData.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_290.TextFormatData.SharedReferenceCount.ReferenceController)->
            SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_290.TextFormatData.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          FText::Format(&local_280,&local_290,&local_368);
          DestructItems<FFormatArgumentValue,int>
                    ((FFormatArgumentValue *)local_368.AllocatorInstance.Data,local_368.ArrayNum);
          if ((FFormatArgumentValue *)local_368.AllocatorInstance.Data !=
              (FFormatArgumentValue *)0x0) {
            FMemory::Free(local_368.AllocatorInstance.Data);
          }
          if (local_218.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_218.TextData.Reference + 0x10))();
          }
          if (local_248.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)
                         *(ITextData *)local_248.TextValue.field0_0x0.TypedValue.TextData.Reference
                        + 0x10))();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((pFVar19->TextFormatData).SharedReferenceCount.ReferenceController);
          pIVar4 = (pFVar15->TextData).Reference;
          if (pIVar4 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar4 + 0x10))();
          }
          UE::MVVM::FMessageLog::Message(&local_108,&local_1a8,Warning,&local_280);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a8.SharedReferenceCount.ReferenceController);
          if (local_280.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
          }
          if (local_198.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
          }
          if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_270.Data.AllocatorInstance.Data);
          }
          FMessageLog::~FMessageLog((FMessageLog *)&local_108);
          lVar24 = local_res20;
        }
        else {
          for (FVar31 = local_378;
              FVar31 != (FName)((longlong)local_378 + (longlong)(int)local_370 * 0x18);
              FVar31 = (FName)((longlong)FVar31 + 0x18)) {
            if (*(UObject **)((longlong)FVar31 + 8) == pUVar27) goto LAB_14a742fe2;
          }
          FVar31.ComparisonIndex.Value = 0;
          FVar31.Number = 0;
LAB_14a742fe2:
          if ((pUVar29 != (UObject *)0x0) && (*(UClass **)&pUVar27->field_0x10 != local_330)) {
            FMessageLog::FMessageLog((FMessageLog *)&local_178,&UE::MVVM::FMessageLog::LogName);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar29);
            }
            local_178.UserWidget.WeakPtr.ObjectIndex = 0;
            local_178.UserWidget.WeakPtr.ObjectSerialNumber = 0;
            local_328 = pUVar29;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar29);
            }
            FWeakObjectPtr::operator=(&local_178.UserWidget.WeakPtr,(FObjectPtr)&local_328);
            local_320 = (FName)pUVar11->_padding_;
            ::FName::ToString(&local_320,&local_2b0);
            pFVar15 = FText::FromString(&local_d0,&local_2b0);
            local_318 = (FName)((this->PanelWidget).field0_0x0.DebugPtr)->_padding_;
            ::FName::ToString(&local_318,&local_2c0);
            pFVar16 = FText::FromString(&local_80,&local_2c0);
            local_310.ComparisonIndex.Value = *(uint *)&pUVar27->field_0x18;
            local_310.Number = *(uint *)&pUVar27->field_0x1c;
            ::FName::ToString(&local_310,&local_2d0);
            pFVar17 = FText::FromString(&local_c0,&local_2d0);
            pFVar18 = FText::AsLocalizable_Advanced_LocText
                                (&local_1e8,L"MVVMViewPanelWidgetExtension",
                                 L"SetPanelWidgetItemsViewmodelTypeMismatch",
                                 L"The item {0} passed as an entry of widget {1} is not a viewmodel of the selected type {2}."
                                );
            pFVar19 = FTextFormat::FTextFormat(&local_b0,pFVar18,Default);
            pFVar15 = FText::Format<FText,FText,FText>(&local_1f8,pFVar19,pFVar17,pFVar16,pFVar15);
            UE::MVVM::FMessageLog::Message(&local_178,&local_208,Warning,pFVar15);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_208.SharedReferenceCount.ReferenceController);
            if (local_1f8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
            }
            if (local_1e8.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
            }
            if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
            }
            if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
            }
            if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
            }
            FMessageLog::~FMessageLog((FMessageLog *)&local_178);
            lVar24 = local_res20;
            uVar25 = uVar26;
          }
          if (FVar31 == (FName)0x0) {
            local_308 = (((this->ClassExtension).field0_0x0.DebugPtr)->EntryWidgetClass).Class.
                        field0_0x0.DebugPtr;
            local_358 = FVar31;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_308 != (UClass *)0x0)
               ) {
              UE::GC::MarkAsReachable((UObject *)local_308);
            }
            pUVar20 = UUserWidget::CreateWidgetInstance
                                ((UWidget *)(this->PanelWidget).field0_0x0.DebugPtr,
                                 (TSubclassOf<UUserWidget>)&local_308,local_358);
            if (pUVar20 == (UUserWidget *)0x0) {
              bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_4727765940622589876>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Private\\Extensions\\MVVMViewPanelWidgetExtension.cpp"
                                 ,0x4c,"EntryWidget");
              if (bVar6) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              pUVar13 = UUserWidget::GetExtension<UMVVMView>(pUVar20);
              if (pUVar13 != (UMVVMView *)0x0) {
                pUVar11 = *(UClass **)&pUVar27->field_0x10;
                if (pUVar11 != (UClass *)0x0) {
                  pUVar12 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
                  bVar6 = UClass::ImplementsInterface(pUVar11,pUVar12);
                  if (bVar6) {
                    if (UE::GC::GIsIncrementalReachabilityPending != false) {
                      UE::GC::MarkAsReachable(pUVar27);
                    }
                    local_2a0 = pUVar27;
                    pUVar11 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
                    local_298 = UObjectBaseUtility::GetInterfaceAddress
                                          ((UObjectBaseUtility *)pUVar27,pUVar11);
                    UMVVMView::SetViewModel
                              (pUVar13,((this->ClassExtension).field0_0x0.DebugPtr)->
                                       EntryViewModelName,
                               (TScriptInterface<INotifyFieldValueChanged> *)&local_2a0);
                    goto LAB_14a7433ae;
                  }
                }
                if (pUVar29 != (UObject *)0x0) {
                  FMessageLog::FMessageLog
                            ((FMessageLog *)&local_140,&UE::MVVM::FMessageLog::LogName);
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar29);
                  }
                  local_300 = pUVar29;
                  local_140.UserWidget.WeakPtr = (FWeakObjectPtr)FVar31;
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(pUVar29);
                  }
                  FWeakObjectPtr::operator=(&local_140.UserWidget.WeakPtr,(FObjectPtr)&local_300);
                  local_2f8 = ((this->ClassExtension).field0_0x0.DebugPtr)->WidgetName;
                  pFVar15 = FText::FromName(&local_a0,&local_2f8);
                  pFVar16 = FText::AsLocalizable_Advanced_LocText
                                      (&local_1b8,L"MVVMViewPanelWidgetExtension",
                                       L"SetViewModelOnEntryWidgetFailNotViewModel",
                                       L"Trying to set an object that is not a viewmodel on entries of panel-type widget \'{0}\'. If you do not wish to set viewmodels on the entries of this widget, please remove the corresonding Viewmodel extension from it."
                                      );
                  pFVar19 = FTextFormat::FTextFormat(&local_90,pFVar16,Default);
                  pFVar15 = FText::Format<FText>(&local_1c8,pFVar19,pFVar15);
                  UE::MVVM::FMessageLog::Message(&local_140,&local_1d8,Error,pFVar15);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_1d8.SharedReferenceCount.ReferenceController)
                  ;
                  if (local_1c8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1c8.TextData.Reference + 0x10))();
                  }
                  if (local_1b8.TextData.Reference != (ITextData *)0x0) {
                    (**(code **)((longlong)*local_1b8.TextData.Reference + 0x10))();
                  }
                  FMessageLog::~FMessageLog((FMessageLog *)&local_140);
                }
              }
            }
LAB_14a7433ae:
            local_350 = (((this->ClassExtension).field0_0x0.DebugPtr)->SlotTemplate).field0_0x0;
            pUStack_348 = pUVar20;
            if (((local_388.Data <= &local_350) &&
                (&local_350 <
                 (TObjectPtr<UPanelSlot>_u_0 *)(local_388.Data + (longlong)iStack_37c * 0x10))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (local_380 == iStack_37c) {
              local_380 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_388,&iStack_37c);
            }
            *(TObjectPtr<UPanelSlot>_u_0 *)(local_388.Data + (longlong)local_380 * 0x10) = local_350
            ;
            ((TObjectPtr<UPanelSlot>_u_0 *)(local_388.Data + (longlong)local_380 * 0x10))[1].
            DebugPtr = (UPanelSlot *)pUStack_348;
            lVar24 = local_res20;
            uVar25 = uVar26;
            local_380 = local_380 + 1;
          }
          else {
            local_340.DebugPtr = *(UPanelSlot **)FVar31;
            TStack_338 = ((local_340.DebugPtr)->Content).field0_0x0;
            if (((local_388.Data <= &local_340) &&
                (&local_340 <
                 (TObjectPtr<UPanelSlot>_u_0 *)(local_388.Data + (longlong)iStack_37c * 0x10))) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (local_380 == iStack_37c) {
              local_380 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&local_388,&iStack_37c);
            }
            lVar14 = (longlong)local_380;
            local_380 = local_380 + 1;
            ((TObjectPtr<UPanelSlot>_u_0 *)(local_388.Data + lVar14 * 0x10))->DebugPtr =
                 (UPanelSlot *)local_340;
            ((TObjectPtr<UPanelSlot>_u_0 *)(local_388.Data + lVar14 * 0x10))[1] =
                 (TObjectPtr<UPanelSlot>_u_0)TStack_338;
            FVar3 = (FName)((longlong)local_378 + (longlong)(int)local_370 * 0x18);
            if (local_378 != FVar3) {
              FVar23 = local_378;
              do {
                if (*(longlong *)FVar23 == *(longlong *)FVar31) {
                  if (*(longlong *)((longlong)FVar23 + 8) == 0) {
                    lVar14 = 0;
                  }
                  else {
                    lVar14 = *(longlong *)((longlong)FVar23 + 0x10);
                  }
                  if (*(longlong *)((longlong)FVar31 + 8) == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = *(longlong *)((longlong)FVar31 + 0x10);
                  }
                  if ((lVar14 == lVar21) &&
                     (*(longlong *)((longlong)FVar23 + 8) == *(longlong *)((longlong)FVar31 + 8))) {
                    lVar24 = ((longlong)FVar23 - (longlong)local_378) / 6 +
                             ((longlong)FVar23 - (longlong)local_378 >> 0x3f);
                    uVar26 = (int)(lVar24 >> 2) - (int)(lVar24 >> 0x3f);
                    lVar24 = local_res20;
                    if (uVar26 != 0xffffffff) {
                      uVar9 = 0;
                      if ((int)(uVar26 + 1) <= (int)local_370) {
                        uVar9 = ~uVar26 >> 0x1f;
                      }
                      if ((uVar9 == 0) &&
                         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                             ,
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x458,
                                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                            ), bVar6)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      iVar22 = ((int)local_370 - uVar26) + -1;
                      if (1 < iVar22) {
                        iVar22 = 1;
                      }
                      if (iVar22 != 0) {
                        memmove((longlong *)((longlong)local_378 + (longlong)(int)uVar26 * 0x18),
                                (longlong *)
                                ((longlong)local_378 + (longlong)((int)local_370 - iVar22) * 0x18),
                                (longlong)iVar22 * 0x18);
                      }
                      iVar22 = (int)local_370 + -1;
                      local_370 = CONCAT44(local_370._4_4_,iVar22);
                      UE::Core::Private::
                      ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x18,8,(ForAnyElementType *)&local_378,iVar22,
                                 (int *)((longlong)&local_370 + 4));
                      lVar24 = local_res20;
                    }
                    break;
                  }
                }
                FVar23 = (FName)((longlong)FVar23 + 0x18);
              } while (FVar23 != FVar3);
            }
          }
        }
        uVar26 = uVar25 + 1;
        pUVar27 = (UObject *)(ulonglong)uVar26;
        local_res20 = lVar24 + 8;
        iVar22 = param_1->ArrayNum;
      } while ((int)uVar26 < iVar22);
    }
    iVar22 = local_380;
    local_258 = (TObjectPtr<UPanelSlot>_u_0 *)local_388.Data;
    if ((local_380 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iStack_250 = iVar22;
    local_188._12_4_ = uStack_24c;
    local_188.ArrayNum = iVar22;
    local_188.DataPtr = (TTuple<UPanelSlot_*,UWidget_*> *)local_258;
    ReplaceAllSlots(this,&local_188);
    if ((TObjectPtr<UPanelSlot>_u_0 *)local_388.Data != (TObjectPtr<UPanelSlot>_u_0 *)0x0) {
      FMemory::Free(local_388.Data);
    }
    if (local_378 != (FName)0x0) {
      FMemory::Free((void *)local_378);
    }
  }
  return;
}

// GetPrivateStaticClass @ 14a7539b0

UClass * __cdecl UMVVMPanelWidgetViewExtension::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMPanelWidgetViewExtension",
               &Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.InnerSingleton,
               StaticRegisterNativesUMVVMPanelWidgetViewExtension,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMPanelWidgetViewExtension>,
               InternalVTableHelperCtorCaller<UMVVMPanelWidgetViewExtension>,local_res8,
               UMVVMViewExtension::StaticClass,UMVVMView::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMPanelWidgetViewExtension.InnerSingleton;
}

// GetUserWidget @ 14a7549f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UUserWidget * __thiscall
UMVVMPanelWidgetViewExtension::GetUserWidget(UMVVMPanelWidgetViewExtension *this)

{
  code *pcVar1;
  bool bVar2;
  UUserWidget *pUVar3;
  longlong lVar4;
  
  if ((this->_padding_ & 0x10) == 0) {
    lVar4 = this->_padding_;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6008347913514647573>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\ModelViewViewModel\\Source\\ModelViewViewModel\\Public\\Extensions\\MVVMViewClassExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UUserWidget *)(*pcVar1)();
      return pUVar3;
    }
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) & 0x10) != 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1637797074370035733>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Public\\Extensions\\UserWidgetExtension.h"
                       ,0x15,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UUserWidget *)(*pcVar1)();
      return pUVar3;
    }
    return (UUserWidget *)0x0;
  }
  return *(UUserWidget **)(lVar4 + 0x20);
}

// Initialize @ 14a7559f0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMPanelWidgetViewExtension::Initialize
          (UMVVMPanelWidgetViewExtension *this,UMVVMViewPanelWidgetClassExtension *param_1,
          UPanelWidget *param_2)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UMVVMViewPanelWidgetClassExtension *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->ClassExtension).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UPanelWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->PanelWidget).field0_0x0.DebugPtr = param_2;
  return;
}

// ReplaceAllSlots @ 14a75df60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMVVMPanelWidgetViewExtension::ReplaceAllSlots
          (UMVVMPanelWidgetViewExtension *this,
          TArrayView<TTuple<UPanelSlot_*,UWidget_*>,int> *param_1)

{
  UPanelWidget *pUVar1;
  UPanelSlot *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TArray<UPanelSlot_*,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  pUVar1 = (this->PanelWidget).field0_0x0.DebugPtr;
  if ((pUVar1 != (UPanelWidget *)0x0) &&
     ((this->ClassExtension).field0_0x0.DebugPtr != (UMVVMViewPanelWidgetClassExtension *)0x0)) {
    pTVar7 = UPanelWidget::GetSlots(pUVar1);
    uVar6 = param_1->ArrayNum;
    uVar11 = 0;
    uVar10 = pTVar7->ArrayNum;
    uVar5 = uVar6;
    if ((int)uVar10 < (int)uVar6) {
      uVar5 = uVar10;
    }
    lVar8 = (longlong)(int)uVar5;
    uVar9 = uVar6;
    if (0 < (int)uVar5) {
      lVar12 = 0;
      do {
        UPanelWidget::RemoveChildAt((this->PanelWidget).field0_0x0.DebugPtr,uVar11);
        pUVar1 = (this->PanelWidget).field0_0x0.DebugPtr;
        uVar5 = 0;
        if ((int)uVar11 < (int)uVar9) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = param_1->ArrayNum;
        pUVar2 = *(UPanelSlot **)(&param_1->DataPtr->field_0x0 + lVar12);
        uVar5 = 0;
        if ((int)uVar11 < (int)uVar9) {
          uVar5 = ~uVar11 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UPanelWidget::InsertChildAt
                  (pUVar1,uVar11,*(UWidget **)(&param_1->DataPtr->field_0x8 + lVar12),pUVar2);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0x10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((int)uVar6 < (int)uVar10) {
      while (uVar10 = uVar10 - 1, (int)uVar6 <= (int)uVar10) {
        UPanelWidget::RemoveChildAt((this->PanelWidget).field0_0x0.DebugPtr,uVar10);
      }
    }
    else if (((int)uVar10 < (int)uVar6) && (lVar8 = (longlong)(int)uVar10, lVar8 < (int)uVar6)) {
      lVar12 = lVar8 << 4;
      lVar8 = (int)uVar6 - lVar8;
      do {
        pUVar1 = (this->PanelWidget).field0_0x0.DebugPtr;
        uVar6 = 0;
        if ((int)uVar10 < (int)uVar9) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = param_1->ArrayNum;
        pUVar2 = *(UPanelSlot **)(&param_1->DataPtr->field_0x0 + lVar12);
        uVar6 = 0;
        if ((int)uVar10 < (int)uVar9) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UPanelWidget::AddChild(pUVar1,*(UWidget **)(&param_1->DataPtr->field_0x8 + lVar12),pUVar2);
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 0x10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  return;
}

// SetViewModelOnEntryWidget @ 14a75fd50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

void __thiscall
UMVVMPanelWidgetViewExtension::SetViewModelOnEntryWidget
          (UMVVMPanelWidgetViewExtension *this,UUserWidget *param_1,UObject *param_2,
          UUserWidget *param_3)

{
  bool bVar1;
  UMVVMView *this_00;
  UClass *pUVar2;
  UClass *pUVar3;
  FText *pFVar4;
  FText *pFVar5;
  FTextFormat *pFVar6;
  FName local_res10;
  TSharedRef<FTokenizedMessage,1> local_a8;
  FText local_98;
  FText local_88;
  FMessageLog local_78;
  FText local_40;
  FTextFormat local_30;
  
  if ((param_1 != (UUserWidget *)0x0) &&
     (this_00 = UUserWidget::GetExtension<UMVVMView>(param_1), this_00 != (UMVVMView *)0x0)) {
    pUVar3 = *(UClass **)&param_2->field_0x10;
    if (pUVar3 != (UClass *)0x0) {
      pUVar2 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
      bVar1 = UClass::ImplementsInterface(pUVar3,pUVar2);
      if (bVar1) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(param_2);
        }
        local_a8.Object = (FTokenizedMessage *)param_2;
        pUVar3 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
        local_a8.SharedReferenceCount.ReferenceController =
             UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_2,pUVar3);
        UMVVMView::SetViewModel
                  (this_00,((this->ClassExtension).field0_0x0.DebugPtr)->EntryViewModelName,
                   (TScriptInterface<INotifyFieldValueChanged> *)&local_a8);
        return;
      }
    }
    if (param_3 != (UUserWidget *)0x0) {
      FMessageLog::FMessageLog((FMessageLog *)&local_78,&UE::MVVM::FMessageLog::LogName);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      local_78.UserWidget.WeakPtr.ObjectIndex = 0;
      local_78.UserWidget.WeakPtr.ObjectSerialNumber = 0;
      local_res10 = (FName)param_3;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_3);
      }
      FWeakObjectPtr::operator=(&local_78.UserWidget.WeakPtr,(FObjectPtr)&local_res10);
      local_res10 = ((this->ClassExtension).field0_0x0.DebugPtr)->WidgetName;
      pFVar4 = FText::FromName(&local_40,&local_res10);
      pFVar5 = FText::AsLocalizable_Advanced_LocText
                         (&local_88,L"MVVMViewPanelWidgetExtension",
                          L"SetViewModelOnEntryWidgetFailNotViewModel",
                          L"Trying to set an object that is not a viewmodel on entries of panel-type widget \'{0}\'. If you do not wish to set viewmodels on the entries of this widget, please remove the corresonding Viewmodel extension from it."
                         );
      pFVar6 = FTextFormat::FTextFormat(&local_30,pFVar5,Default);
      pFVar4 = FText::Format<FText>(&local_98,pFVar6,pFVar4);
      UE::MVVM::FMessageLog::Message(&local_78,&local_a8,Error,pFVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if (local_98.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      }
      if (local_88.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88.TextData.Reference + 0x10))();
      }
      FMessageLog::~FMessageLog((FMessageLog *)&local_78);
    }
  }
  return;
}

// StaticRegisterNativesUMVVMPanelWidgetViewExtension @ 14a760110

void __cdecl UMVVMPanelWidgetViewExtension::StaticRegisterNativesUMVVMPanelWidgetViewExtension(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UMVVMPanelWidgetViewExtension_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBP_SetItems @ 14a769280

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMVVMPanelWidgetViewExtension::execBP_SetItems(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  BP_SetItems((UMVVMPanelWidgetViewExtension *)param_1,pTVar2);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

