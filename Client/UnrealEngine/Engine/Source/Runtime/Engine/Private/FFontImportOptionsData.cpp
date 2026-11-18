// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 14727b350

UScriptStruct * __cdecl FFontImportOptionsData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFontImportOptionsData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FFontImportOptionsData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFontImportOptionsData,(UObject *)pUVar1,
                         L"FontImportOptionsData");
  }
  return Z_Registration_Info_UScriptStruct_FFontImportOptionsData.OuterSingleton;
}

// FFontImportOptionsData @ 14727f530

FFontImportOptionsData * __thiscall
FFontImportOptionsData::FFontImportOptionsData(FFontImportOptionsData *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  ::FString::FString(&this->FontName,"Arial");
  this->bCreatePrintableOnly = 0;
  this->bIncludeASCIIRange = 1;
  this->bEnableDropShadow = 0;
  this->bEnableLegacyMode = 0;
  puVar2 = &this->field_0x14;
  this->bEnableAntialiasing = 1;
  this->bAlphaOnly = 0;
  this->bEnableUnderline = 0;
  this->bEnableItalic = 0;
  this->bEnableBold = 0;
  this->bUseDistanceFieldAlpha = 0;
  (this->Chars).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Chars).Data.ArrayNum = 0;
  (this->Chars).Data.ArrayMax = 0;
  (this->UnicodeRange).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UnicodeRange).Data.ArrayNum = 0;
  (this->UnicodeRange).Data.ArrayMax = 0;
  (this->CharsFilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharsFilePath).Data.ArrayNum = 0;
  (this->CharsFilePath).Data.ArrayMax = 0;
  (this->CharsFileWildcard).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharsFileWildcard).Data.ArrayNum = 0;
  (this->CharsFileWildcard).Data.ArrayMax = 0;
  this->ExtendBoxBottom = 0;
  this->ExtendBoxRight = 0;
  this->ExtendBoxLeft = 0;
  this->Kerning = 0;
  this->Height = 16.0;
  (this->CharacterSet).Value = '\0';
  (this->ForegroundColor).field0_0x0._s_0.R = 1.0;
  (this->ForegroundColor).field0_0x0._s_0.G = 1.0;
  (this->ForegroundColor).field0_0x0._s_0.B = 1.0;
  (this->ForegroundColor).field0_0x0._s_0.A = 1.0;
  this->TexturePageWidth = 0x100;
  this->TexturePageMaxHeight = 0x100;
  this->XPadding = 1;
  this->YPadding = 1;
  this->ExtendBoxTop = 0;
  this->DistanceFieldScaleFactor = 0x10;
  this->DistanceFieldScanRadiusScale = 1.0;
  return this;
}

