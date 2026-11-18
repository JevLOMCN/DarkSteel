// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 4

// StaticStruct @ 14241e5f0

UScriptStruct * __cdecl FMargin::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMargin.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FMargin.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMargin,(UObject *)pUVar1,L"Margin");
  }
  return Z_Registration_Info_UScriptStruct_FMargin.OuterSingleton;
}

// FMargin @ 1425444f0

FMargin * __thiscall FMargin::FMargin(FMargin *this,float param_1)

{
  this->Left = param_1;
  this->Top = param_1;
  this->Right = param_1;
  this->Bottom = param_1;
  return this;
}

// FMargin @ 142544510

FMargin * __thiscall FMargin::FMargin(FMargin *this,float param_1,float param_2)

{
  this->Left = param_1;
  this->Top = param_2;
  this->Right = param_1;
  this->Bottom = param_2;
  return this;
}

// FMargin @ 142544530

FMargin * __thiscall
FMargin::FMargin(FMargin *this,double param_1,double param_2,double param_3,double param_4)

{
  this->Left = (float)param_1;
  this->Top = (float)param_2;
  this->Bottom = (float)param_4;
  this->Right = (float)param_3;
  return this;
}

