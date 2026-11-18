// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 1

// HandleMessage @ 14d058610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRawMessageCatchall<FLiveLinkMessageBusSource>::HandleMessage
          (TRawMessageCatchall<FLiveLinkMessageBusSource> *this,
          TSharedRef<IMessageContext,1> *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014d058618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->Func)(this->Handler);
  return;
}

