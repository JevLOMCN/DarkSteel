// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1475163a0

UScriptStruct * __cdecl FBlendSample::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlendSample.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBlendSample.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendSample,(UObject *)pUVar1,L"BlendSample");
  }
  return Z_Registration_Info_UScriptStruct_FBlendSample.OuterSingleton;
}

// GetSamplePlayLength @ 147560320

float __thiscall FBlendSample::GetSamplePlayLength(FBlendSample *this)

{
  UAnimSequence *pUVar1;
  int *piVar2;
  float fVar3;
  undefined1 local_res8 [32];
  
  pUVar1 = (this->Animation).field0_0x0.DebugPtr;
  if (pUVar1 == (UAnimSequence *)0x0) {
    return 0.0;
  }
  if (this->bUseSingleFrameForBlending != false) {
    piVar2 = (int *)(**(code **)(pUVar1->_padding_ + 0x318))(pUVar1,local_res8);
    return (float)piVar2[1] / (float)*piVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x000147560366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar3 = (float)(**(code **)(pUVar1->_padding_ + 0x2c0))();
  return fVar3;
}

