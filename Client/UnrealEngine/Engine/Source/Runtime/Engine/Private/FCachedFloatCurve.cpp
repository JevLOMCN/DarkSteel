// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 14741f220

UScriptStruct * __cdecl FCachedFloatCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCachedFloatCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCachedFloatCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCachedFloatCurve,(UObject *)pUVar1,
                         L"CachedFloatCurve");
  }
  return Z_Registration_Info_UScriptStruct_FCachedFloatCurve.OuterSingleton;
}

// GetFloatCurve @ 147454e10

FFloatCurve * __thiscall
FCachedFloatCurve::GetFloatCurve(FCachedFloatCurve *this,UAnimSequenceBase *param_1)

{
  FRawCurveTracks *this_00;
  FFloatCurve *pFVar1;
  
  if (param_1 != (UAnimSequenceBase *)0x0) {
    this_00 = (FRawCurveTracks *)(**(code **)(param_1->_padding_ + 0x300))(param_1);
    pFVar1 = (FFloatCurve *)FRawCurveTracks::GetCurveData(this_00,this->CurveName,RCT_Float);
    return pFVar1;
  }
  return (FFloatCurve *)0x0;
}

// GetValueAtPosition @ 147464dc0

float __thiscall
FCachedFloatCurve::GetValueAtPosition
          (FCachedFloatCurve *this,UAnimSequenceBase *param_1,float *param_2)

{
  float fVar1;
  double local_68;
  undefined1 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50;
  void *local_48;
  undefined8 local_40;
  void *local_38;
  undefined8 local_30;
  undefined1 local_27;
  
  local_60 = 0;
  local_50 = 0;
  local_54 = 0;
  local_68 = (double)*param_2;
  local_5c = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  local_27 = 0;
  fVar1 = (float)(**(code **)(param_1->_padding_ + 0x2e0))(param_1,this->CurveName,&local_68,0);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return fVar1;
}

// IsValid @ 1474679f0

bool __thiscall FCachedFloatCurve::IsValid(FCachedFloatCurve *this,UAnimSequenceBase *param_1)

{
  char cVar1;
  
  if (this->CurveName != (FName)0x0) {
    cVar1 = (**(code **)(param_1->_padding_ + 0x308))(param_1,this->CurveName,0);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

