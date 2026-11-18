// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1473c9f80

UScriptStruct * __cdecl FAnimBankSequence::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimBankSequence.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimBankSequence.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimBankSequence,(UObject *)pUVar1,
                         L"AnimBankSequence");
  }
  return Z_Registration_Info_UScriptStruct_FAnimBankSequence.OuterSingleton;
}

// ValidatePosition @ 14741bc90

void __thiscall FAnimBankSequence::ValidatePosition(FAnimBankSequence *this)

{
  UAnimSequence *pUVar1;
  float fVar2;
  
  pUVar1 = (this->Sequence).field0_0x0.DebugPtr;
  fVar2 = 0.0;
  if (pUVar1 != (UAnimSequence *)0x0) {
    fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x2c0))();
  }
  if (this->Position <= fVar2) {
    fVar2 = this->Position;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  this->Position = fVar2;
  return;
}

