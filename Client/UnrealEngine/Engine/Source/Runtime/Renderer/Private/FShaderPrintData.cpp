// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator= @ 1455779c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FShaderPrintData * __thiscall
FShaderPrintData::operator=(FShaderPrintData *this,FShaderPrintData *param_1)

{
  TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters> *pTVar1;
  TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters> this_00;
  double dVar2;
  TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters> *pTVar3;
  
  pTVar1 = &this->UniformBuffer;
  (this->Setup).bEnabled = (param_1->Setup).bEnabled;
  (this->Setup).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->Setup).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->Setup).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->Setup).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->Setup).CursorCoord.field0_0x0 = (param_1->Setup).CursorCoord.field0_0x0;
  dVar2 = (param_1->Setup).PreViewTranslation.field0_0x0._s_0.Y;
  (this->Setup).PreViewTranslation.field0_0x0._s_0.X =
       (param_1->Setup).PreViewTranslation.field0_0x0._s_0.X;
  (this->Setup).PreViewTranslation.field0_0x0._s_0.Y = dVar2;
  (this->Setup).PreViewTranslation.field0_0x0._s_0.Z =
       (param_1->Setup).PreViewTranslation.field0_0x0._s_0.Z;
  (this->Setup).DPIScale = (param_1->Setup).DPIScale;
  (this->Setup).FontSize.field0_0x0 = (param_1->Setup).FontSize.field0_0x0;
  (this->Setup).FontSpacing.field0_0x0 = (param_1->Setup).FontSpacing.field0_0x0;
  (this->Setup).MaxCharacterCount = (param_1->Setup).MaxCharacterCount;
  (this->Setup).MaxStateCount = (param_1->Setup).MaxStateCount;
  (this->Setup).MaxLineCount = (param_1->Setup).MaxLineCount;
  (this->Setup).MaxTriangleCount = (param_1->Setup).MaxTriangleCount;
  pTVar3 = &param_1->UniformBuffer;
  (this->Setup).bIsDrawLocked = (param_1->Setup).bIsDrawLocked;
  if (pTVar1 != pTVar3) {
    this_00 = *pTVar1;
    *pTVar1 = *pTVar3;
    *pTVar3 = (TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters>)0x0;
    if (this_00 != (TUniformBufferRef<ShaderPrint::FShaderPrintCommonParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  this->ShaderPrintEntryBuffer = param_1->ShaderPrintEntryBuffer;
  this->ShaderPrintStateBuffer = param_1->ShaderPrintStateBuffer;
  return this;
}

