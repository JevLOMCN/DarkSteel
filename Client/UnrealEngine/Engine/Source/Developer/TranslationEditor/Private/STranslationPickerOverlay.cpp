// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 1

// OnPaint @ 146bb7660

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
STranslationPickerOverlay::OnPaint
          (STranslationPickerOverlay *this,FPaintArgs *param_1,FGeometry *param_2,
          FSlateRect *param_3,FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,
          bool param_7)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ISlateStyle *pIVar6;
  FSlateBrush *pFVar7;
  uint uVar8;
  FLinearColor_u_0 local_18;
  
  if (!TranslationPickerManager::bDrawBoxes) {
    return param_5;
  }
  uVar3 = SCompoundWidget::OnPaint
                    ((SCompoundWidget *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                    );
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&DebugBorderBrush,L"Debug.Border");
    _Init_thread_footer(&::_TSS0);
  }
  pIVar6 = FAppStyle::Get();
  pFVar7 = (FSlateBrush *)(**(code **)((longlong)*pIVar6 + 0x50))(pIVar6,DebugBorderBrush,0,0);
  uVar8 = 0;
  local_18 = FLinearColor::Yellow.field0_0x0;
  if (0 < TranslationPickerManager::PickedTexts.ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar8 < TranslationPickerManager::PickedTexts.ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      FSlateDrawElement::MakeBox
                (param_4,uVar3,
                 (FPaintGeometry *)
                 (TranslationPickerManager::PickedTexts.AllocatorInstance.Data +
                 ((longlong)(int)uVar8 * 9 + 2) * 8),pFVar7,None,(FLinearColor *)&local_18._s_0);
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < TranslationPickerManager::PickedTexts.ArrayNum);
  }
  return uVar3;
}

