// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 6

// ~IGizmoFloatParameterSource @ 149689380

void __thiscall
IGizmoFloatParameterSource::~IGizmoFloatParameterSource(IGizmoFloatParameterSource *this)

{
  *this = (IGizmoFloatParameterSource)&___7IGizmoFloatParameterSource__6B_;
  return;
}

// _getUObject @ 1496ca740

UObject * __thiscall IGizmoFloatParameterSource::_getUObject(IGizmoFloatParameterSource *this)

{
  return (UObject *)0x0;
}

// execBeginModify @ 1496ca8d0

void __cdecl
IGizmoFloatParameterSource::execBeginModify(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001496ca8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x18))();
  return;
}

// execEndModify @ 1496ca960

void __cdecl
IGizmoFloatParameterSource::execEndModify(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001496ca978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x28))();
  return;
}

// execGetParameter @ 1496caa90

void __cdecl
IGizmoFloatParameterSource::execGetParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x10))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execSetParameter @ 1496cace0

void __cdecl
IGizmoFloatParameterSource::execSetParameter(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x20))(param_1,local_res8[0]);
  return;
}

