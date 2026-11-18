// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147a0d970

UScriptStruct * __cdecl FRealCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRealCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRealCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRealCurve,(UObject *)pUVar1,L"RealCurve");
  }
  return Z_Registration_Info_UScriptStruct_FRealCurve.OuterSingleton;
}

// CycleTime @ 147a3ded0

void __cdecl FRealCurve::CycleTime(float param_1,float param_2,float *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_3;
  fVar4 = param_2 - param_1;
  if (fVar1 <= param_2) {
    fVar3 = fVar1;
    if (fVar1 < param_1) {
      iVar2 = (int)ROUND((fVar1 - param_1) * (__real_40000000 / fVar4) - __real_3f000000) >> 1;
      *param_4 = iVar2;
      fVar3 = *param_3 - (float)iVar2 * fVar4;
      goto LAB_147a3df6a;
    }
  }
  else {
    iVar2 = (int)ROUND((param_2 - fVar1) * (__real_40000000 / fVar4) - __real_3f000000) >> 1;
    *param_4 = iVar2;
    fVar3 = (float)iVar2 * fVar4 + *param_3;
LAB_147a3df6a:
    *param_3 = fVar3;
  }
  if ((fVar3 != param_2) || (param_1 <= fVar1)) {
    if (fVar3 != param_1) goto LAB_147a3df8f;
  }
  else {
    *param_3 = param_1;
  }
  if (param_2 < fVar1) {
    *param_3 = param_2;
  }
LAB_147a3df8f:
  iVar2 = -*param_4;
  if (-*param_4 < 0) {
    iVar2 = *param_4;
  }
  *param_4 = iVar2;
  return;
}

// FindKey @ 147a454b0

FKeyHandle __thiscall FRealCurve::FindKey(FRealCurve *this,float param_1,float param_2)

{
  int iVar1;
  FKeyHandle FVar2;
  undefined4 *in_RDX;
  
  iVar1 = (**(code **)(this->_padding_ + 0xb8))(this,param_2);
  FVar2.Index = (uint)in_RDX;
  if (-1 < iVar1) {
    FIndexedCurve::GetKeyHandle((FIndexedCurve *)this,FVar2.Index);
    return (FKeyHandle)FVar2.Index;
  }
  *in_RDX = 0;
  return (FKeyHandle)FVar2.Index;
}

// KeyExistsAtTime @ 147a63630

bool __thiscall FRealCurve::KeyExistsAtTime(FRealCurve *this,float param_1,float param_2)

{
  byte extraout_var;
  
  (**(code **)(this->_padding_ + 0xb8))();
  return (bool)(extraout_var >> 7 ^ 1);
}

