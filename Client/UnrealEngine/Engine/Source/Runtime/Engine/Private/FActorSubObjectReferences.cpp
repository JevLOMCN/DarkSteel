// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// CountBytes @ 1480261a0

void __thiscall
FNetworkObjectList::FActorSubObjectReferences::CountBytes
          (FActorSubObjectReferences *this,FArchive *param_1)

{
  longlong lVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(this->ActiveSubObjectChannelReferences).Elements.field_0x8
                     * 0x28,
             (longlong)*(int *)&(this->ActiveSubObjectChannelReferences).Elements.field_0xc * 0x28);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)
                     (*(int *)&(this->ActiveSubObjectChannelReferences).Elements.field_0x28 + 0x1fU
                     >> 5) << 2,
             (ulonglong)
             (*(int *)&(this->ActiveSubObjectChannelReferences).Elements.field_0x2c + 0x1fU >> 5) <<
             2);
  lVar1 = (longlong)(this->ActiveSubObjectChannelReferences).HashSize << 2;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00014802622c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->InvalidSubObjectChannelReferences).ArrayNum << 5,
             (longlong)(this->InvalidSubObjectChannelReferences).ArrayMax << 5);
  return;
}

