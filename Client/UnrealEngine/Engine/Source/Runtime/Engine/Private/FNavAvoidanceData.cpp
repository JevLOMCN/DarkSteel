// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147364950

UScriptStruct * __cdecl FNavAvoidanceData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNavAvoidanceData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNavAvoidanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNavAvoidanceData,(UObject *)pUVar1,
                         L"NavAvoidanceData");
  }
  return Z_Registration_Info_UScriptStruct_FNavAvoidanceData.OuterSingleton;
}

// FNavAvoidanceData @ 14737aa30

FNavAvoidanceData * __thiscall
FNavAvoidanceData::FNavAvoidanceData
          (FNavAvoidanceData *this,UAvoidanceManager *param_1,IRVOAvoidanceInterface *param_2)

{
  float fVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  double *pdVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 local_88 [24];
  undefined1 local_70 [88];
  
  fVar8 = (float)(**(code **)((longlong)*param_2 + 0x48))(param_2);
  iVar3 = (**(code **)((longlong)*param_2 + 0x80))(param_2);
  iVar4 = (**(code **)((longlong)*param_2 + 0x70))(param_2);
  iVar5 = (**(code **)((longlong)*param_2 + 0x60))(param_2);
  fVar9 = (float)(**(code **)((longlong)*param_2 + 0x28))(param_2);
  pdVar6 = (double *)(**(code **)((longlong)*param_2 + 0x50))(param_2,local_88);
  fVar10 = (float)(**(code **)((longlong)*param_2 + 0x40))(param_2);
  fVar11 = (float)(**(code **)((longlong)*param_2 + 0x38))(param_2);
  pdVar7 = (double *)(**(code **)((longlong)*param_2 + 0x30))(param_2,local_70);
  if (__real_3f800000 <= fVar9) {
    fVar9 = __real_3f800000;
  }
  dVar2 = pdVar7[1];
  (this->Center).field0_0x0._s_0.X = *pdVar7;
  (this->Center).field0_0x0._s_0.Y = dVar2;
  (this->Center).field0_0x0._s_0.Z = pdVar7[2];
  dVar2 = pdVar6[1];
  (this->Velocity).field0_0x0._s_0.X = *pdVar6;
  (this->Velocity).field0_0x0._s_0.Y = dVar2;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  (this->Velocity).field0_0x0._s_0.Z = pdVar6[2];
  fVar1 = param_1->ArtificialRadiusExpansion;
  this->GroupMask = iVar5;
  this->GroupsToAvoid = iVar4;
  this->Radius = fVar11 * fVar1;
  this->Weight = fVar9;
  this->HalfHeight = fVar10;
  this->GroupsToIgnore = iVar3;
  this->OverrideWeightTime = 0.0;
  this->RemainingTimeToLive = param_1->DefaultTimeToLive;
  this->TestRadius2D = fVar8;
  (this->Velocity).field0_0x0._s_0.Z = 0.0;
  return this;
}

// Init @ 1473a47e0

void __thiscall
FNavAvoidanceData::Init
          (FNavAvoidanceData *this,UAvoidanceManager *param_1,TVector<double> *param_2,float param_3
          ,float param_4,TVector<double> *param_5,float param_6,int param_7,int param_8,int param_9,
          float param_10)

{
  float fVar1;
  double dVar2;
  
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  (this->Center).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Center).field0_0x0._s_0.Y = dVar2;
  (this->Center).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  dVar2 = (param_5->field0_0x0)._s_0.Y;
  (this->Velocity).field0_0x0._s_0.X = (param_5->field0_0x0)._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = dVar2;
  (this->Velocity).field0_0x0._s_0.Z = (param_5->field0_0x0)._s_0.Z;
  fVar1 = param_1->ArtificialRadiusExpansion;
  this->GroupMask = param_7;
  if (__real_3f800000 <= param_6) {
    param_6 = __real_3f800000;
  }
  this->HalfHeight = param_4;
  this->GroupsToAvoid = param_8;
  this->Radius = param_3 * fVar1;
  if (param_6 <= 0.0) {
    param_6 = 0.0;
  }
  this->GroupsToIgnore = param_9;
  this->OverrideWeightTime = 0.0;
  this->Weight = param_6;
  fVar1 = param_1->DefaultTimeToLive;
  this->TestRadius2D = param_10;
  this->RemainingTimeToLive = fVar1;
  (this->Velocity).field0_0x0._s_0.Z = 0.0;
  return;
}

