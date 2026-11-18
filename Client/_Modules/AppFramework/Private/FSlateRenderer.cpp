// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// GetFontMeasureService @ 1430c8d90

/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

TSharedRef<FSlateFontMeasure,1> * __thiscall
FSlateRenderer::GetFontMeasureService
          (FSlateRenderer *this,TSharedRef<FSlateFontMeasure,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<FSlateFontMeasure,1> *pTVar3;
  
  if ((this->SlateFontServices).Object == (FSlateFontServices *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<FSlateFontMeasure,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  FSlateFontServices::GetFontMeasureService((this->SlateFontServices).Object,__return_storage_ptr__)
  ;
  return __return_storage_ptr__;
}

