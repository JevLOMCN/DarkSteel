// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// Convert @ 14e5e6f50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGLTFJsonAnimation * __thiscall
FGLTFLevelSequenceConverter::Convert
          (FGLTFLevelSequenceConverter *this,ULevel *param_1,ULevelSequence *param_2)

{
  FGLTFTaskBuilder *this_00;
  FGLTFJsonAnimation *pFVar1;
  undefined8 *local_res8;
  
  pFVar1 = FGLTFJsonBuilder::AddAnimation(*(FGLTFJsonBuilder **)&this->field_0x58);
  this_00 = *(FGLTFTaskBuilder **)&this->field_0x58;
  local_res8 = ::operator_new(0x30);
  if (local_res8 != (undefined8 *)0x0) {
    *(undefined1 *)(local_res8 + 1) = 0;
    *local_res8 = &___7FGLTFDelayedLevelSequenceTask__6B_;
    local_res8[2] = this_00;
    local_res8[3] = param_1;
    local_res8[4] = param_2;
    local_res8[5] = pFVar1;
  }
  FGLTFTaskBuilder::ScheduleSlowTask(this_00,(FGLTFDelayedTask *)&local_res8);
  return pFVar1;
}

