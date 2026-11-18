// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 1

// FArguments @ 146b2d950

FArguments * __thiscall SLocalizationServiceProgress::FArguments::FArguments(FArguments *this)

{
  FSlateBaseNamedArgs::FSlateBaseNamedArgs((FSlateBaseNamedArgs *)this);
  FText::FText(&(this->_Text).Value);
  (this->_Text).bIsSet = false;
  *(undefined8 *)&(this->_Text).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->_Text).Getter = 0;
  *(undefined8 *)&(this->_Text).Getter.field_0x8 = 0;
  *(undefined8 *)&this->_OnCancelled = 0;
  *(undefined8 *)&(this->_OnCancelled).field_0x8 = 0;
  *(undefined4 *)&(this->_OnCancelled).field_0x10 = 0;
  return this;
}

