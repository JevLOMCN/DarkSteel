// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// FColorPickerArgs @ 14305c100

FColorPickerArgs * __thiscall FColorPickerArgs::FColorPickerArgs(FColorPickerArgs *this)

{
  longlong lVar1;
  FLinearColor *pFVar2;
  FLinearColor *pFVar3;
  float local_38 [2];
  TSharedPtr<SWidget,1> *local_30;
  TAttribute<float> *local_28;
  TSharedPtr<SWidget,1> *local_20;
  
  this->bIsModal = false;
  local_30 = &this->ParentWidget;
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1>(local_30,(FNullTag *)0x0);
  this->bUseAlpha = false;
  this->bOnlyRefreshOnMouseUp = false;
  this->bOnlyRefreshOnOk = false;
  this->bExpandAdvancedSection = true;
  this->bOpenAsMenu = false;
  this->bClampValue = false;
  local_28 = &this->DisplayGamma;
  local_38[0] = __real_400ccccd;
  TAttribute<float>::TAttribute<float>(local_28,local_38);
  TOptional<bool>::TOptional<bool>(&this->sRGBOverride);
  this->ColorArray = (TArray<FColor_*,TSizedDefaultAllocator<32>_> *)0x0;
  this->LinearColorArray = (TArray<FLinearColor_*,TSizedDefaultAllocator<32>_> *)0x0;
  this->ColorChannelsArray = (TArray<FColorChannels,TSizedDefaultAllocator<32>_> *)0x0;
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->OnColorCommitted);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->PreColorCommitted);
  TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->OnColorPickerWindowClosed);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->OnColorPickerCancelled);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->OnInteractivePickBegin);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->OnInteractivePickEnd);
  pFVar2 = &FLinearColor::White;
  pFVar3 = &this->InitialColorOverride;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pFVar3->field0_0x0 = *(undefined1 *)&pFVar2->field0_0x0;
    pFVar2 = (FLinearColor *)((longlong)&pFVar2->field0_0x0 + 1);
    pFVar3 = (FLinearColor *)((longlong)&pFVar3->field0_0x0 + 1);
  }
  pFVar2 = &FLinearColor::White;
  pFVar3 = &this->InitialColor;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)&pFVar3->field0_0x0 = *(undefined1 *)&pFVar2->field0_0x0;
    pFVar2 = (FLinearColor *)((longlong)&pFVar2->field0_0x0 + 1);
    pFVar3 = (FLinearColor *)((longlong)&pFVar3->field0_0x0 + 1);
  }
  local_20 = &this->OptionalOwningDetailsView;
  TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1>(local_20,(FNullTag *)0x0);
  return this;
}

// ~FColorPickerArgs @ 143061990

void __thiscall FColorPickerArgs::~FColorPickerArgs(FColorPickerArgs *this)

{
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&this->OptionalOwningDetailsView);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->OnInteractivePickEnd);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>(&this->OnInteractivePickBegin);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->OnColorPickerCancelled);
  TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(TSharedRef<SWindow,1>_const_&),FDefaultDelegateUserPolicy>
            (&this->OnColorPickerWindowClosed);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->PreColorCommitted);
  TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>::
  ~TDelegate<void___cdecl(FLinearColor),FDefaultDelegateUserPolicy>(&this->OnColorCommitted);
  TAttribute<float>::~TAttribute<float>(&this->DisplayGamma);
  TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&this->ParentWidget);
  return;
}

