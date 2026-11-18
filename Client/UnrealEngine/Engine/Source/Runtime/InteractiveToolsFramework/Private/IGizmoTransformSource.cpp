// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 4

// ~IGizmoTransformSource @ 1496893c0

void __thiscall IGizmoTransformSource::~IGizmoTransformSource(IGizmoTransformSource *this)

{
  *this = (IGizmoTransformSource)&___7IGizmoTransformSource__6B_;
  return;
}

// _getUObject @ 1496ca760

UObject * __thiscall IGizmoTransformSource::_getUObject(IGizmoTransformSource *this)

{
  return (UObject *)0x0;
}

// execGetTransform @ 1496cac10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl IGizmoTransformSource::execGetTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_78);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  *(undefined8 *)((longlong)param_3 + 0x18) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)((longlong)param_3 + 0x20) = puVar2[4];
  *(undefined8 *)((longlong)param_3 + 0x28) = uVar1;
  uVar1 = puVar2[7];
  *(undefined8 *)((longlong)param_3 + 0x30) = puVar2[6];
  *(undefined8 *)((longlong)param_3 + 0x38) = uVar1;
  uVar1 = puVar2[9];
  *(undefined8 *)((longlong)param_3 + 0x40) = puVar2[8];
  *(undefined8 *)((longlong)param_3 + 0x48) = uVar1;
  uVar1 = puVar2[0xb];
  *(undefined8 *)((longlong)param_3 + 0x50) = puVar2[10];
  *(undefined8 *)((longlong)param_3 + 0x58) = uVar1;
  return;
}

// execSetTransform @ 1496cae10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl IGizmoTransformSource::execSetTransform(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double *pdVar14;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined1 local_58 [16];
  double local_48;
  double dStack_40;
  undefined1 local_38 [16];
  double local_28;
  double dStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar8 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[3];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[0];
  fVar6 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar9 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar12 = GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar7 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar10 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar13 = GlobalVectorConstants::Float1110.m128_f32[3];
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_78 = (double)fVar2;
  dStack_70 = (double)fVar5;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  local_68 = (double)fVar8;
  dStack_60 = (double)fVar11;
  local_48 = (double)fVar9;
  dStack_40 = (double)fVar12;
  local_58._8_4_ = SUB84((double)fVar6,0);
  local_58._0_8_ = (double)fVar3;
  local_58._12_4_ = (int)((ulonglong)(double)fVar6 >> 0x20);
  local_28 = (double)fVar10;
  dStack_20 = (double)fVar13;
  local_38._8_4_ = SUB84((double)fVar7,0);
  local_38._0_8_ = (double)fVar4;
  local_38._12_4_ = (int)((ulonglong)(double)fVar7 >> 0x20);
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pdVar14 = &local_78;
  if ((double *)param_2->MostRecentPropertyAddress != (double *)0x0) {
    pdVar14 = (double *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x18))(param_1,pdVar14);
  return;
}

