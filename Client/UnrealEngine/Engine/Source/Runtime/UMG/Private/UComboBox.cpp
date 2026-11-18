// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// StaticClass @ 146962cc0

UClass * __cdecl UComboBox::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ComboBox",&Z_Registration_Info_UClass_UComboBox.InnerSingleton,
               StaticRegisterNativesUComboBox,0x840,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UComboBox>,InternalVTableHelperCtorCaller<UComboBox>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboBox.InnerSingleton;
}

// UComboBox @ 146988ee0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UComboBox * __thiscall UComboBox::UComboBox(UComboBox *this,FVTableHelper *param_1)

{
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  *(undefined8 *)&this->OnGenerateWidgetEvent = 0;
  *(undefined8 *)&(this->OnGenerateWidgetEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnGenerateWidgetEvent).field_0x10 = 0;
  (this->MyComboBox).Object = (SComboBox<UObject_*> *)0x0;
  (this->MyComboBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UComboBox @ 146988f60

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UComboBox * __thiscall UComboBox::UComboBox(UComboBox *this,FObjectInitializer *param_1)

{
  FDefaultStyleCache *pFVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  FScrollBarStyle::FScrollBarStyle(&this->ScrollBarStyle);
  (this->Items).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Items).ArrayNum = 0;
  (this->Items).ArrayMax = 0;
  *(undefined8 *)&this->OnGenerateWidgetEvent = 0;
  *(undefined8 *)&(this->OnGenerateWidgetEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnGenerateWidgetEvent).field_0x10 = 0;
  (this->MyComboBox).Object = (SComboBox<UObject_*> *)0x0;
  (this->MyComboBox).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsFocusable = true;
  pFVar1 = UE::Slate::Private::FDefaultStyleCache::Get();
  FScrollBarStyle::operator=(&this->ScrollBarStyle,&(pFVar1->Runtime).ScrollBarStyle);
  return this;
}

// ~UComboBox @ 146992810

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UComboBox::~UComboBox(UComboBox *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MyComboBox).SharedReferenceCount.ReferenceController);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGenerateWidgetEvent);
  pFVar1 = (this->Items).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FScrollBarStyle::~FScrollBarStyle(&this->ScrollBarStyle);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// GetPrivateStaticClass @ 1469d3a30

UClass * __cdecl UComboBox::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UComboBox.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"ComboBox",&Z_Registration_Info_UClass_UComboBox.InnerSingleton,
               StaticRegisterNativesUComboBox,0x840,0x10,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UComboBox>,InternalVTableHelperCtorCaller<UComboBox>,local_res8,
               UWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UComboBox.InnerSingleton;
}

// HandleGenerateWidget @ 1469db490

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UComboBox::HandleGenerateWidget
          (UComboBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__,UObject *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  FArguments *pFVar3;
  FText *pFVar4;
  TSharedRef<STextBlock,1> *pTVar5;
  undefined4 local_res8 [2];
  FName local_res20;
  FDestructionSentinel local_628;
  FText local_610;
  bool local_600;
  undefined1 local_5f8 [8];
  ForAnyElementType FStack_5f0;
  ulonglong local_5e8;
  FName local_5e0;
  FString local_5d8;
  TSharedRef<STextBlock,1> local_5c8;
  FText local_5b8;
  FText local_5a8;
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs> local_598;
  FArguments local_580;
  
  local_res8[0] = 0;
  bVar2 = TScriptDelegate<FNotThreadSafeDelegateMode>::IsBound
                    ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidgetEvent);
  if (bVar2) {
    local_628.Accessor = (FMRSWRecursiveAccessDetector *)0x0;
    local_628._0_8_ = param_1;
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnGenerateWidgetEvent,
               &local_628);
    if ((UWidget *)local_628.Accessor != (UWidget *)0x0) {
      UWidget::TakeWidget((UWidget *)local_628.Accessor,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  pFVar3 = STextBlock::FArguments::FArguments(&local_580);
  bVar2 = param_1 == (UObject *)0x0;
  if (bVar2) {
    pFVar4 = FText::AsLocalizable_Advanced_LocText(&local_5b8,L"UMG",L"null",L"null");
  }
  else {
    local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res20.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res20,&local_5d8);
    pFVar4 = FText::FromString(&local_5a8,&local_5d8);
  }
  FText::FText(&local_610,pFVar4);
  local_600 = true;
  local_5e8 = 0;
  local_5f8 = (undefined1  [8])0x0;
  FStack_5f0.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar3->_Text).Value,&local_610);
  (pFVar3->_Text).bIsSet = local_600;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar3->_Text).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_5f8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_5f8,
             (FWriteAccessScope *)&local_628);
  if (((int)local_5e8 != 0) && (FStack_5f0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_5f0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_5f0,0,0,0x10);
    local_5e8 = local_5e8 & 0xffffffff00000000;
  }
  if (local_628.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_628.Accessor,&local_628);
  }
  if (FStack_5f0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_5f0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_5f8);
  if (local_610.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_610.TextData.Reference + 0x10))();
  }
  FLLMScope::FLLMScope
            ((FLLMScope *)&local_res20,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true
            );
  local_5e0 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope((FMemScope *)&local_628,&local_5e0,true);
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>
            (&local_598,"STextBlock",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBox.cpp"
             ,0x38,(T0RequiredArgs *)local_res8);
  FMemScope::~FMemScope((FMemScope *)&local_628);
  FLLMScope::~FLLMScope((FLLMScope *)&local_res20);
  pTVar5 = TSlateDecl<STextBlock,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_598,&local_5c8,pFVar3);
  __return_storage_ptr__->Object = (SWidget *)pTVar5->Object;
  pTVar1 = (pTVar5->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_5c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_598._Widget.SharedReferenceCount.ReferenceController);
  if ((bVar2) && (local_5b8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_5b8.TextData.Reference + 0x10))();
  }
  if ((!bVar2) && (local_5a8.TextData.Reference != (ITextData *)0x0)) {
    (**(code **)((longlong)*local_5a8.TextData.Reference + 0x10))();
  }
  if ((!bVar2) && (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
  }
  STextBlock::FArguments::~FArguments(&local_580);
  return __return_storage_ptr__;
}

// RebuildWidget @ 1469f9ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TSharedRef<SWidget,1> * __thiscall
UComboBox::RebuildWidget(UComboBox *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  byte *pbVar1;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  SComboBox<UObject_*> *pSVar5;
  longlong lVar6;
  code *pcVar7;
  FSharedReferencer<1> FVar8;
  bool bVar9;
  char cVar10;
  byte bVar11;
  TSharedRef<SWidget,1> *pTVar12;
  ulonglong uVar13;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar14;
  FArguments *pFVar15;
  undefined8 *puVar16;
  ulong64 uVar17;
  int iVar18;
  ForAnyElementType FVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  ForElementType<unsigned_int> FVar27;
  undefined1 auStackY_548 [32];
  T0RequiredArgs local_518 [4];
  FLLMScope local_514;
  undefined1 local_510 [8];
  FDelegateAllocation local_508;
  uint local_4f8;
  uint uStack_4f4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4f0;
  undefined4 local_4e8;
  uint uStack_4e4;
  uint uStack_4e0;
  undefined4 uStack_4dc;
  TSlateDecl<SComboBox<UObject_*>,RequiredArgs::T0RequiredArgs> local_4d8;
  FName local_4b8;
  undefined4 uStack_4b0;
  int iStack_4ac;
  SComboBox<UObject_*> *local_4a8;
  FSharedReferencer<1> local_4a0;
  undefined4 local_498;
  int local_494;
  UObject *local_490;
  UComboBox *local_488;
  FMemScope local_480;
  undefined8 local_478;
  FSharedReferencer<1> FStack_470;
  longlong *local_468;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_460;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_440;
  FDestructionSentinel local_430;
  FDestructionSentinel local_418;
  FDelegateAllocation *local_400;
  undefined1 local_3f8 [576];
  undefined1 local_1b8 [48];
  undefined1 local_188 [48];
  FSharedReferencer<1> local_158;
  undefined1 local_150 [24];
  undefined1 local_138 [24];
  undefined1 local_120 [32];
  FSharedReferencer<1> local_100;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  uint local_6c;
  int local_68;
  int local_64;
  FScriptContainerElement local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_548;
  this_00 = &this->Items;
  uVar3 = (this->Items).ArrayNum;
  pFVar21 = (this_00->AllocatorInstance).Data;
  if (((int)uVar3 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar12;
  }
  uVar20 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar3);
    }
    TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98,uVar3);
    uVar22 = 1;
    if (3 < uVar3) {
      uVar24 = (ulonglong)((uVar3 >> 1) + 7) * 2 + 1;
      lVar6 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      local_498 = (undefined4)lVar6;
      uVar22 = 1 << ((byte)lVar6 & 0x1f);
    }
    if ((local_50 == 0) || ((int)local_50 < (int)uVar22)) {
      local_50 = uVar22;
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
      }
      if (uVar22 != 0) {
        uVar23 = uVar22;
        if (uVar22 < 2) {
          if (local_58.Data != (FScriptContainerElement *)0x0) {
            uVar23 = 0;
            goto LAB_1469f9df5;
          }
        }
        else {
LAB_1469f9df5:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar23,4)
          ;
        }
        if (0 < (int)uVar22) {
          uVar25 = (ulonglong)uVar22;
          uVar24 = uVar20;
          do {
            FVar19.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar19.Data = local_58.Data;
            }
            uVar13 = uVar24 & (longlong)(int)uVar22 - 1U;
            uVar24 = uVar24 + 1;
            *(undefined4 *)(FVar19.Data + uVar13 * 4) = 0xffffffff;
            uVar25 = uVar25 - 1;
          } while (uVar25 != 0);
        }
      }
      if (local_50 != 0) {
        pTStack_4f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
        local_4f8 = 0;
        uStack_4f4 = 1;
        uStack_4e4 = 0;
        uStack_4e0 = 0;
        if (local_70 != 0) {
          FVar27 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
          if (local_78 != (ForElementType<unsigned_int>)0x0) {
            FVar27 = local_78;
          }
          uVar22 = *(uint *)FVar27;
          uVar24 = uVar20;
          while (uVar22 == 0) {
            uStack_4e0 = (int)uVar24 + 0x20;
            uVar24 = (ulonglong)uStack_4e0;
            iVar18 = (int)uVar20;
            local_4f8 = iVar18 + 1;
            uVar20 = (ulonglong)local_4f8;
            if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_4f8)
            goto LAB_1469f9f13;
            uVar22 = ((uint *)((longlong)FVar27 + 4))[iVar18];
          }
          uStack_4f4 = -uVar22 & uVar22;
          uVar20 = (ulonglong)uStack_4f4 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          local_494 = (int)lVar6;
          uStack_4e4 = local_494 + -1 + uStack_4e0;
          uVar20 = (ulonglong)uStack_4e4;
          if ((int)local_70 < (int)uStack_4e4) {
LAB_1469f9f13:
            uVar20 = (ulonglong)local_70;
            uStack_4e4 = local_70;
          }
        }
        local_4e8 = 0xffffffff;
        local_468 = (longlong *)local_98;
        local_460._padding_ = CONCAT44(uStack_4f4,local_4f8);
        local_460.CurrentBitIndex = uStack_4e4;
        local_460.UnvisitedBitMask = 0xffffffff;
        local_460._28_4_ = uStack_4dc;
        local_460.BaseBitIndex = uStack_4e0;
        local_460.Array = pTStack_4f0;
        if ((int)uVar20 < (int)local_70) {
          do {
            puVar26 = (ulonglong *)((longlong)(int)uVar20 * 0x10 + *local_468);
            uVar22 = ((uint)(*puVar26 >> 0x14) & 0xffff ^ (uint)(*puVar26 >> 4)) * -0x7a143595;
            uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
            uVar22 = (uVar22 >> 0x10 ^ uVar22) & local_50 - 1;
            *(uint *)((longlong)puVar26 + 0xc) = uVar22;
            FVar19.Data = local_60;
            if (local_58.Data != (FScriptContainerElement *)0x0) {
              FVar19.Data = local_58.Data;
            }
            uVar24 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar22;
            *(undefined4 *)(puVar26 + 1) = *(undefined4 *)(FVar19.Data + uVar24 * 4);
            *(int *)(FVar19.Data + uVar24 * 4) = (int)uVar20;
            local_460.UnvisitedBitMask = local_460.UnvisitedBitMask & ~local_460._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_460);
            uVar20 = (ulonglong)(uint)local_460.CurrentBitIndex;
          } while (local_460.CurrentBitIndex < (local_460.Array)->NumBits);
        }
      }
    }
  }
  pFVar2 = pFVar21 + (longlong)(int)uVar3 * 8;
  for (; pFVar21 != pFVar2; pFVar21 = pFVar21 + 8) {
    TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Emplace<UObject_*_const_&>
              ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_98,
               &local_490,(bool *)pFVar21);
  }
  pTVar14 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Array
                      ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_98
                       ,&local_440);
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::CopyToEmpty<UObject_*,int>
            (this_00,(UObject **)(pTVar14->AllocatorInstance).Data,pTVar14->ArrayNum,
             (this->Items).ArrayMax);
  if (local_440.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_440.AllocatorInstance.Data);
  }
  pFVar15 = SComboBox<UObject_*>::FArguments::FArguments((FArguments *)local_3f8);
  local_478 = 0;
  FStack_470.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pFVar15->_OptionsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0;
  pFVar15->_OptionsSource_ObservableArrayPointer = (TObservableArray<UObject_*> *)0x0;
  if (&pFVar15->_OptionsSource_SharedObservableArray !=
      (TSharedPtr<UE::Slate::Containers::TObservableArray<UObject_*>,1> *)&local_478) {
    (pFVar15->_OptionsSource_SharedObservableArray).Object = (TObservableArray<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar15->_OptionsSource_SharedObservableArray).SharedReferenceCount,&FStack_470);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_470.ReferenceController);
  pFVar15->_OptionsSource_ArrayPointer = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)this_00;
  local_4b8 = (FName)HandleGenerateWidget;
  iStack_4ac = local_440.ArrayMax;
  uStack_4b0 = 0;
  local_510 = (undefined1  [8])0x0;
  local_508.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_508.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_510,
             (FWriteAccessScope *)&local_418);
  local_400 = &local_508;
  puVar16 = UE::Core::Private::DelegateAllocate(0x30,&local_508);
  if (puVar16 != (undefined8 *)0x0) {
    *puVar16 = &
               ___7__TCommonDelegateInstanceState___A6A_AV__TSharedRef_VSWidget___00__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar17 = FDelegateHandle::GenerateNewID();
    puVar16[2] = uVar17;
    *puVar16 = &
               ___7__TBaseUObjectMethodDelegateInstance__00__CBVUComboBox____A6A_AV__TSharedRef_VSWidget___00__PEAVUObject___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UComboBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar16[3] = 0;
    local_488 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UComboBox *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar16 + 3),(FObjectPtr)&local_488);
    *(FName *)(puVar16 + 4) = local_4b8;
    puVar16[5] = CONCAT44(iStack_4ac,uStack_4b0);
  }
  if (local_418.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_418.Accessor,&local_418);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pFVar15->_OnGenerateWidget,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_510);
  pFVar15->_IsFocusable = this->bIsFocusable;
  pFVar15->_ScrollBarStyle = &this->ScrollBarStyle;
  FLLMScope::FLLMScope(&local_514,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_4b8 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_480,&local_4b8,true);
  TSlateDecl<SComboBox<UObject_*>,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SComboBox<UObject_*>,RequiredArgs::T0RequiredArgs>
            (&local_4d8,"SComboBox<UObject*>",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\UMG\\Private\\Components\\ComboBox.cpp"
             ,0x21,local_518);
  FMemScope::~FMemScope(&local_480);
  FLLMScope::~FLLMScope(&local_514);
  pSVar5 = local_4d8._Widget.Object;
  if ((local_4d8._Widget.Object == (SComboBox<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar12;
  }
  SWidget::SWidgetConstruct((SWidget *)local_4d8._Widget.Object,(FSlateBaseNamedArgs *)pFVar15);
  SComboBox<UObject_*>::Construct(local_4d8._Widget.Object,pFVar15);
  if ((local_4d8._Widget.Object == (SComboBox<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar12;
  }
  if (((local_4d8._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar10 = (**(code **)((local_4d8._Widget.Object)->_padding_ + 0x228))(local_4d8._Widget.Object);
    bVar11 = 0;
    if (cVar10 == '\0') goto LAB_1469fa289;
  }
  bVar11 = 0x20;
LAB_1469fa289:
  *(byte *)&(local_4d8._Widget.Object)->_padding_ =
       (byte)(local_4d8._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_4d8._Widget.Object)->_padding_ =
       (byte)(local_4d8._Widget.Object)->_padding_ | bVar11;
  if ((local_4d8._Widget.Object == (SComboBox<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar12;
  }
  pbVar1 = (byte *)((longlong)&(local_4d8._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if ((local_4d8._Widget.Object == (SComboBox<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar12;
  }
  FVar8.ReferenceController = local_4d8._Widget.SharedReferenceCount.ReferenceController;
  local_4d8._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_4d8._Widget.Object = (SComboBox<UObject_*> *)0x0;
  if ((pSVar5 == (SComboBox<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar12;
  }
  local_4a8 = pSVar5;
  local_4a0.ReferenceController = FVar8.ReferenceController;
  if (FVar8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar8.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar8.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->MyComboBox != (TSharedPtr<SComboBox<UObject_*>,1> *)&local_4a8) {
    (this->MyComboBox).Object = pSVar5;
    local_4a8 = (SComboBox<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyComboBox).SharedReferenceCount,&local_4a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_4a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar8.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_510,
             (FWriteAccessScope *)&local_430);
  if ((local_508.DelegateSize != 0) &&
     (local_508.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_508.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_508,0,0,0x10);
    local_508.DelegateSize = 0;
  }
  if (local_430.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_430.Accessor,&local_430);
  }
  if (local_508.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_508.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_510);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_120);
  if ((void *)local_120._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_120._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_120);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_138);
  if ((void *)local_138._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_138._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_138);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_150);
  if ((void *)local_150._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_150._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_188);
  if ((void *)local_188._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_188._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_188);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_1b8);
  if ((void *)local_1b8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_1b8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_1b8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_3f8._512_8_);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_3f8);
  if (((this->MyComboBox).Object == (SComboBox<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar12;
  }
  pTVar4 = (this->MyComboBox).SharedReferenceCount.ReferenceController;
  pSVar5 = (this->MyComboBox).Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pSVar5 == (SComboBox<UObject_*> *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TSharedRef<SWidget,1> *)(*pcVar7)();
    return pTVar12;
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar5;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_50 = 0;
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  iVar18 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar18 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = -1;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 146a0a190

void __thiscall UComboBox::ReleaseSlateResources(UComboBox *this,bool param_1)

{
  undefined8 local_18;
  FSharedReferencer<1> aFStack_10 [2];
  
  local_18 = 0;
  aFStack_10[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->MyComboBox != (TSharedPtr<SComboBox<UObject_*>,1> *)&local_18) {
    (this->MyComboBox).Object = (SComboBox<UObject_*> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MyComboBox).SharedReferenceCount,aFStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_10[0].ReferenceController);
  return;
}

// StaticRegisterNativesUComboBox @ 146a1e650

void __cdecl UComboBox::StaticRegisterNativesUComboBox(void)

{
  return;
}

