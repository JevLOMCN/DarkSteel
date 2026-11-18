// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14727be50

UScriptStruct * __cdecl FBoundsCacheElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoundsCacheElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBoundsCacheElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoundsCacheElement,(UObject *)pUVar1,
                         L"BoundsCacheElement");
  }
  return Z_Registration_Info_UScriptStruct_FBoundsCacheElement.OuterSingleton;
}

// FBoundsCacheElement @ 147cc2f90

FBoundsCacheElement * __thiscall FBoundsCacheElement::FBoundsCacheElement(FBoundsCacheElement *this)

{
  this->bIsValid = false;
  this->Hash = 0;
  (this->Value).Origin.field0_0x0._s_0.X = 0.0;
  (this->Value).Origin.field0_0x0._s_0.Y = 0.0;
  (this->Value).Origin.field0_0x0._s_0.Z = 0.0;
  (this->Value).BoxExtent.field0_0x0._s_0.X = 0.0;
  (this->Value).BoxExtent.field0_0x0._s_0.Y = 0.0;
  (this->Value).BoxExtent.field0_0x0._s_0.Z = 0.0;
  (this->Value).SphereRadius = 0.0;
  return this;
}

// GetHash @ 147d05aa0

uint __cdecl FBoundsCacheElement::GetHash(TTransform<double> *param_1,TBox<double> *param_2)

{
  ulong64 uVar1;
  double local_58;
  double dStack_50;
  double local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  local_58 = (param_1->Translation).XY.m128d_f64[0];
  dStack_50 = (param_1->Translation).XY.m128d_f64[1];
  local_48 = (param_1->Translation).ZW.m128d_f64[0];
  local_18 = (param_1->Rotation).ZW.m128d_f64[0];
  dStack_10 = (param_1->Rotation).ZW.m128d_f64[1];
  local_28 = (param_1->Rotation).XY.m128d_f64[0];
  dStack_20 = (param_1->Rotation).XY.m128d_f64[1];
  local_40 = (param_1->Scale3D).XY.m128d_f64[0];
  dStack_38 = (param_1->Scale3D).XY.m128d_f64[1];
  local_30 = (param_1->Scale3D).ZW.m128d_f64[0];
  uVar1 = CityHash64WithSeed((char *)&local_58,0x18,0);
  uVar1 = CityHash64WithSeed((char *)&local_28,0x20,uVar1);
  uVar1 = CityHash64WithSeed((char *)&local_40,0x18,uVar1);
  uVar1 = CityHash64WithSeed((char *)param_2,0x18,uVar1);
  uVar1 = CityHash64WithSeed((char *)&param_2->Max,0x18,uVar1);
  return (uint)uVar1 ^ (uint)(uVar1 >> 0x20);
}

