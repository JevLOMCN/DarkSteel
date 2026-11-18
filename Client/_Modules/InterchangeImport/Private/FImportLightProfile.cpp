// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// FImportLightProfile @ 14e707f60

FImportLightProfile * __thiscall
UE::Interchange::FImportLightProfile::FImportLightProfile
          (FImportLightProfile *this,FImportLightProfile *param_1)

{
  FImportImage::FImportImage((FImportImage *)this,(FImportImage *)param_1);
  this->_padding_ = (longlong)&___7FImportLightProfile_Interchange_UE__6B_;
  this->Brightness = param_1->Brightness;
  this->TextureMultiplier = param_1->TextureMultiplier;
  (this->SourceDataBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDataBuffer).AllocatorInstance.Data =
       (param_1->SourceDataBuffer).AllocatorInstance.Data;
  (param_1->SourceDataBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceDataBuffer).ArrayNum = (param_1->SourceDataBuffer).ArrayNum;
  (this->SourceDataBuffer).ArrayMax = (param_1->SourceDataBuffer).ArrayMax;
  (param_1->SourceDataBuffer).ArrayNum = 0;
  (param_1->SourceDataBuffer).ArrayMax = 0;
  return this;
}

