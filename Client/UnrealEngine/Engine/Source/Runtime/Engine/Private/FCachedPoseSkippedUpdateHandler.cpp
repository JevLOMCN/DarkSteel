// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FCachedPoseSkippedUpdateHandler @ 1474b2eb0

FCachedPoseSkippedUpdateHandler * __thiscall
UE::Anim::FCachedPoseSkippedUpdateHandler::FCachedPoseSkippedUpdateHandler
          (FCachedPoseSkippedUpdateHandler *this,
          TUniqueFunction<void___cdecl(TArrayView<UE::Anim::FMessageStack_const_,int>)> *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FCachedPoseSkippedUpdateHandler_Anim_UE__6B_;
  *(undefined8 *)&this->Function = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Function).field_0x28 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  uVar1 = *(undefined4 *)&param_1->field_0x14;
  uVar2 = *(undefined4 *)&param_1->field_0x18;
  uVar3 = *(undefined4 *)&param_1->field_0x1c;
  *(undefined4 *)&(this->Function).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  *(undefined4 *)&(this->Function).field_0x14 = uVar1;
  *(undefined4 *)&(this->Function).field_0x18 = uVar2;
  *(undefined4 *)&(this->Function).field_0x1c = uVar3;
  *(undefined8 *)&(this->Function).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  if (*(longlong *)&this->Function != 0) {
    *(undefined8 *)param_1 = 0;
    return this;
  }
  if (*(longlong *)param_1 != 0) {
    plVar4 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return this;
}

// GetTypeName @ 1474e0430

FName __thiscall
UE::Anim::FCachedPoseSkippedUpdateHandler::GetTypeName(FCachedPoseSkippedUpdateHandler *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

