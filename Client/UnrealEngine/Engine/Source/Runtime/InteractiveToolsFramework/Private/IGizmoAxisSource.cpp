// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 9

// ~IGizmoAxisSource @ 14963de40

void __thiscall IGizmoAxisSource::~IGizmoAxisSource(IGizmoAxisSource *this)

{
  *this = (IGizmoAxisSource)&___7IGizmoAxisSource__6B_;
  return;
}

// GetTangentVectors @ 1496588a0

void __thiscall
IGizmoAxisSource::GetTangentVectors
          (IGizmoAxisSource *this,TVector<double> *param_1,TVector<double> *param_2)

{
  return;
}

// HasTangentVectors @ 149658e20

bool __thiscall IGizmoAxisSource::HasTangentVectors(IGizmoAxisSource *this)

{
  return false;
}

// _getUObject @ 14966b160

UObject * __thiscall IGizmoAxisSource::_getUObject(IGizmoAxisSource *this)

{
  return (UObject *)0x0;
}

// GetAxisFrame @ 1496a0370

void __thiscall
IGizmoAxisSource::GetAxisFrame
          (IGizmoAxisSource *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined1 local_28 [32];
  
  puVar5 = (undefined4 *)(**(code **)((longlong)*this + 0x18))(this,local_28);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *(undefined4 *)&param_1->field0_0x0 = *puVar5;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 4) = uVar1;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 8) = uVar2;
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc) = uVar3;
  (param_1->field0_0x0)._s_0.Z = *(double *)(puVar5 + 4);
  cVar4 = (**(code **)((longlong)*this + 0x20))(this);
  if (cVar4 == '\0') {
    GizmoMath::MakeNormalPlaneBasis(param_1,param_2,param_3);
  }
  else {
    (**(code **)((longlong)*this + 0x28))(this);
  }
  return;
}

// execGetDirection @ 1496ca9f0

void __cdecl IGizmoAxisSource::execGetDirection(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x18))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetOrigin @ 1496caa40

void __cdecl IGizmoAxisSource::execGetOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetTangentVectors @ 1496cab10

void __cdecl IGizmoAxisSource::execGetTangentVectors(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  uchar local_38 [24];
  uchar local_20 [24];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar3 = param_2->MostRecentPropertyAddress;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  puVar2 = local_38;
  if (puVar3 != (uchar *)0x0) {
    puVar2 = puVar3;
  }
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_20);
  }
  puVar3 = local_20;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x28))(param_1,puVar2,puVar3);
  return;
}

// execHasTangentVectors @ 1496caca0

void __cdecl IGizmoAxisSource::execHasTangentVectors(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x20))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

