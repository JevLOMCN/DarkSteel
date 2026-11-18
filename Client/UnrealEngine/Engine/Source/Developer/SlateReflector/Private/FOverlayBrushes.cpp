// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 1

// FOverlayBrushes @ 142e0a920

FOverlayBrushes * __thiscall
NavigationSimulationOverlay::FOverlayBrushes::FOverlayBrushes(FOverlayBrushes *this)

{
  float fVar1;
  code *pcVar2;
  FSlateStyleSet *pFVar3;
  bool bVar4;
  ISlateStyle *pIVar5;
  FSlateBrush *pFVar6;
  FOverlayBrushes *pFVar7;
  
  pIVar5 = FAppStyle::Get();
  pFVar6 = (FSlateBrush *)(**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,FocusRectangleBrush,0,0);
  this->FocusBrush = pFVar6;
  pFVar6 = (FSlateBrush *)(**(code **)((longlong)*pIVar5 + 0x50))(pIVar5,DebugBorderBrush,0,0);
  this->DebugBrush = pFVar6;
  if (FWidgetReflectorStyle::StyleInstance.Object == (FSlateStyleSet *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar7 = (FOverlayBrushes *)(*pcVar2)();
      return pFVar7;
    }
  }
  pFVar3 = FWidgetReflectorStyle::StyleInstance.Object;
  pFVar6 = (FSlateBrush *)
           (**(code **)((FWidgetReflectorStyle::StyleInstance.Object)->_padding_ + 0x50))
                     (FWidgetReflectorStyle::StyleInstance.Object,SymbolsLeftArrow,0,0);
  this->LeftArrowBrush = pFVar6;
  pFVar6 = (FSlateBrush *)(**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,SymbolsRightArrow,0,0);
  this->RightArrowBrush = pFVar6;
  pFVar6 = (FSlateBrush *)(**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,SymbolsUpArrow,0,0);
  this->UpArrowBrush = pFVar6;
  pFVar6 = (FSlateBrush *)(**(code **)(pFVar3->_padding_ + 0x50))(pFVar3,SymbolsDownArrow,0,0);
  this->DownArrowBrush = pFVar6;
  fVar1 = *(float *)&(this->UpArrowBrush->ImageSize).field_0x4;
  (this->ArrowSize).field0_0x0._s_0.X = (double)*(float *)&this->UpArrowBrush->ImageSize;
  (this->ArrowSize).field0_0x0._s_0.Y = (double)fVar1;
  return this;
}

