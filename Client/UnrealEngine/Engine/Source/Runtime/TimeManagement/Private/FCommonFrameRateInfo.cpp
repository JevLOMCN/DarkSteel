// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 2

// FCommonFrameRateInfo @ 14603f320

FCommonFrameRateInfo * __thiscall
FCommonFrameRateInfo::FCommonFrameRateInfo(FCommonFrameRateInfo *this,FCommonFrameRateInfo *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  this->FrameRate = param_1->FrameRate;
  (this->DisplayName).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->DisplayName).TextData.Reference;
  (this->DisplayName).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->DisplayName).Flags = (param_1->DisplayName).Flags;
  (this->Description).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->Description).TextData.Reference;
  (this->Description).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Description).Flags = (param_1->Description).Flags;
  return this;
}

// ~FCommonFrameRateInfo @ 146040410

void __thiscall FCommonFrameRateInfo::~FCommonFrameRateInfo(FCommonFrameRateInfo *this)

{
  ITextData *pIVar1;
  
  pIVar1 = (this->Description).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pIVar1 = (this->DisplayName).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146040439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x10))();
    return;
  }
  return;
}

