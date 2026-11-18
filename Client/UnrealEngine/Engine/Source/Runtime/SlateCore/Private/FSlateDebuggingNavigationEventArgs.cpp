// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FSlateDebuggingNavigationEventArgs @ 14242d510

/* WARNING: Enum "Type": Some values do not have unique names */

FSlateDebuggingNavigationEventArgs * __thiscall
FSlateDebuggingNavigationEventArgs::FSlateDebuggingNavigationEventArgs
          (FSlateDebuggingNavigationEventArgs *this,FNavigationEvent *param_1,
          FNavigationReply *param_2,FWidgetPath *param_3,TSharedPtr<SWidget,1> *param_4,
          ESlateDebuggingNavigationMethod param_5)

{
  this->DestinationWidget = param_4;
  this->NavigationMethod = param_5;
  this->NavigationEvent = param_1;
  this->NavigationReply = param_2;
  this->NavigationSource = param_3;
  return this;
}

// ToText @ 142453f90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FSlateDebuggingNavigationEventArgs::ToText
          (FSlateDebuggingNavigationEventArgs *this,FText *__return_storage_ptr__)

{
  int iVar1;
  FWidgetPath *this_00;
  TReferenceControllerBase<1> *pTVar2;
  SWidget *pSVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FText *pFVar7;
  FString *pFVar8;
  UPackage *pUVar9;
  FTextFormat *pFVar10;
  uint uVar11;
  ForElementType<FArrangedWidget> FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_118 [8];
  FText local_110;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  FText local_90;
  FText local_80;
  FString local_70;
  FString local_60;
  FTextFormat local_50 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&NavEventFormat,L"SlateDebugger",L"NavEventFormat",
                 L"Navigation User({4}) Source({0}:{1}) | {5} | {2} -> {3}");
      atexit(`FSlateDebuggingNavigationEventArgs::ToText'::__l2::
             _dynamic_atexit_destructor_for__NavEventFormat__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  this_00 = this->NavigationSource;
  bVar5 = FWidgetPath::IsValid(this_00);
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\WidgetPath.h"
                       ,0xac,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar1 = (this_00->Widgets).Array.ArrayNum;
  uVar11 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar11 < iVar1) {
    uVar6 = ~uVar11 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar4)();
      return pFVar7;
    }
  }
  FVar12 = (this_00->Widgets).Array.AllocatorInstance.SecondaryData;
  if (FVar12 == (ForElementType<FArrangedWidget>)0x0) {
    FVar12 = (ForElementType<FArrangedWidget>)&(this_00->Widgets).Array;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)
            ((uchar *)((longlong)FVar12 + 0x40) + (longlong)(int)uVar11 * 0x48);
  pSVar3 = *(SWidget **)((uchar *)((longlong)FVar12 + 0x38) + (longlong)(int)uVar11 * 0x48);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar8 = FReflectionMetaData::GetWidgetDebugInfo(&local_70,pSVar3);
  FText::FromString(&local_d0,pFVar8);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pFVar8 = FReflectionMetaData::GetWidgetDebugInfo(&local_60,this->DestinationWidget->Object);
  FText::FromString(&local_e0,pFVar8);
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (Z_Registration_Info_UEnum_EUINavigation.OuterSingleton == (UEnum *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_EUINavigation.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_EUINavigation,(UObject *)pUVar9,L"EUINavigation")
    ;
  }
  UEnum::GetDisplayNameTextByValue
            (Z_Registration_Info_UEnum_EUINavigation.OuterSingleton,&local_f0,
             (ulonglong)this->NavigationEvent->NavigationType);
  if (Z_Registration_Info_UEnum_ENavigationGenesis.OuterSingleton == (UEnum *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_ENavigationGenesis.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_ENavigationGenesis,(UObject *)pUVar9,
                       L"ENavigationGenesis");
  }
  UEnum::GetDisplayNameTextByValue
            (Z_Registration_Info_UEnum_ENavigationGenesis.OuterSingleton,&local_100,
             (ulonglong)this->NavigationEvent->NavigationGenesis);
  if (Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod.OuterSingleton == (UEnum *)0x0) {
    pUVar9 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_SlateCore_ESlateDebuggingNavigationMethod,(UObject *)pUVar9
                       ,L"ESlateDebuggingNavigationMethod");
  }
  UEnum::GetDisplayNameTextByValue
            (Z_Registration_Info_UEnum_ESlateDebuggingNavigationMethod.OuterSingleton,&local_110,
             (ulonglong)this->NavigationMethod);
  local_c0.TextData.Reference = local_110.TextData.Reference;
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 8))
              (local_110.TextData.Reference,local_res8);
  }
  local_c0.Flags = local_110.Flags;
  uVar6 = *(uint *)((longlong)&this->NavigationEvent->_padding_ + 4);
  local_b0.TextData.Reference = local_e0.TextData.Reference;
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 8))
              (local_e0.TextData.Reference,local_res10);
  }
  local_b0.Flags = local_e0.Flags;
  local_a0.TextData.Reference = local_d0.TextData.Reference;
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 8))
              (local_d0.TextData.Reference,local_res18);
  }
  local_a0.Flags = local_d0.Flags;
  local_90.TextData.Reference = local_f0.TextData.Reference;
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 8))
              (local_f0.TextData.Reference,local_res20);
  }
  local_90.Flags = local_f0.Flags;
  local_80.TextData.Reference = local_100.TextData.Reference;
  if (local_100.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.TextData.Reference + 8))
              (local_100.TextData.Reference,local_118);
  }
  local_80.Flags = local_100.Flags;
  pFVar10 = FTextFormat::FTextFormat(local_50,&NavEventFormat,Default);
  FText::Format<FText,FText,FText,FText,unsigned_int,FText>
            (__return_storage_ptr__,pFVar10,&local_80,&local_90,&local_a0,&local_b0,uVar6,&local_c0)
  ;
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  if (local_100.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
  }
  if (local_f0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
  }
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

