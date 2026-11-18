// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Flush @ 1418daaa0

void __thiscall FOutputDeviceArchiveWrapper::Flush(FOutputDeviceArchiveWrapper *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001418daaa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this->LogAr + 0x208))();
  return;
}

// Serialize @ 1418f53b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOutputDeviceArchiveWrapper::Serialize
          (FOutputDeviceArchiveWrapper *this,wchar_t *param_1,Type param_2,FName *param_3)

{
  if (param_2 != SetColor) {
    FOutputDeviceHelper::FormatCastAndSerializeLine
              (this->LogAr,param_1,param_2,param_3,__real_bff0000000000000,true,
               *(bool *)((longlong)&this->_padding_ + 1));
  }
  return;
}

