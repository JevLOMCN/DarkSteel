// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// ~IGizmoVec2ParameterSource @ 14963de80

void __thiscall
IGizmoVec2ParameterSource::~IGizmoVec2ParameterSource(IGizmoVec2ParameterSource *this)

{
  *this = (IGizmoVec2ParameterSource)&___7IGizmoVec2ParameterSource__6B_;
  return;
}

// _getUObject @ 14966b180

UObject * __thiscall IGizmoVec2ParameterSource::_getUObject(IGizmoVec2ParameterSource *this)

{
  return (UObject *)0x0;
}

// execBeginModify @ 1496ca900

void __cdecl
IGizmoVec2ParameterSource::execBeginModify(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001496ca918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x18))();
  return;
}

// execEndModify @ 1496ca990

void __cdecl
IGizmoVec2ParameterSource::execEndModify(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001496ca9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x28))();
  return;
}

// execGetParameter @ 1496caad0

void __cdecl
IGizmoVec2ParameterSource::execGetParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x10))(param_1,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execSetParameter @ 1496cad70

void __cdecl
IGizmoVec2ParameterSource::execSetParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_18 [16];
  
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  puVar2 = local_18;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x20))(param_1,puVar2);
  return;
}

