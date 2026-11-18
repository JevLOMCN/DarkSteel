// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// ProcessRequest @ 143325a60

bool __thiscall BuildPatchServices::FFakeHttpRequest::ProcessRequest(FFakeHttpRequest *this)

{
  undefined1 uVar1;
  
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
                    /* WARNING: Could not recover jumptable at 0x000143325a73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->FakeHttpModule->_padding_ + 0x18))(this->FakeHttpModule,this);
  return (bool)uVar1;
}

