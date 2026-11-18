// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 3

// GetValue @ 142db28a0

FMargin * __thiscall TOptional<FMargin>::GetValue(TOptional<FMargin> *this)

{
  code *pcVar1;
  bool bVar2;
  FMargin *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMargin *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 142db28f0

FSlateBrush * __thiscall TOptional<FSlateBrush>::GetValue(TOptional<FSlateBrush> *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateBrush *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateBrush *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// GetValue @ 142db2940

FSlateColor * __thiscall TOptional<FSlateColor>::GetValue(TOptional<FSlateColor> *this)

{
  code *pcVar1;
  bool bVar2;
  FSlateColor *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSlateColor *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

