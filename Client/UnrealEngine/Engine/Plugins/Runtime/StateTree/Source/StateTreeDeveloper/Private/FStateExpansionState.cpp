// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 1

// FStateExpansionState @ 14d70d050

FStateExpansionState * __thiscall
UE::StateTree::SCompactTreeView::FStateExpansionState::FStateExpansionState
          (FStateExpansionState *this,FStateExpansionState *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  undefined1 *_Src;
  
  *(undefined8 *)&(this->CollapsedStates).Elements = 0;
  *(undefined8 *)&(this->CollapsedStates).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CollapsedStates).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CollapsedStates).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CollapsedStates).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CollapsedStates).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CollapsedStates).Elements.field_0x34 = 0;
  (this->CollapsedStates).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CollapsedStates).HashSize = 0;
  if (this != param_1) {
    *(undefined8 *)&(this->CollapsedStates).Elements =
         *(undefined8 *)&(param_1->CollapsedStates).Elements;
    *(undefined8 *)&(param_1->CollapsedStates).Elements = 0;
    *(undefined4 *)&(this->CollapsedStates).Elements.field_0x8 =
         *(undefined4 *)&(param_1->CollapsedStates).Elements.field_0x8;
    *(undefined4 *)&(this->CollapsedStates).Elements.field_0xc =
         *(undefined4 *)&(param_1->CollapsedStates).Elements.field_0xc;
    *(undefined8 *)&(param_1->CollapsedStates).Elements.field_0x8 = 0;
    _Src = &(param_1->CollapsedStates).Elements.field_0x10;
    _Dst = &(this->CollapsedStates).Elements.field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->CollapsedStates).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->CollapsedStates).Elements.field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->CollapsedStates).Elements.field_0x20 =
           *(undefined8 *)&(param_1->CollapsedStates).Elements.field_0x20;
      *(undefined8 *)&(param_1->CollapsedStates).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->CollapsedStates).Elements.field_0x28 =
           *(undefined4 *)&(param_1->CollapsedStates).Elements.field_0x28;
      *(undefined4 *)&(this->CollapsedStates).Elements.field_0x2c =
           *(undefined4 *)&(param_1->CollapsedStates).Elements.field_0x2c;
      *(undefined8 *)&(param_1->CollapsedStates).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->CollapsedStates).Elements.field_0x30 =
         *(undefined4 *)&(param_1->CollapsedStates).Elements.field_0x30;
    *(undefined4 *)&(this->CollapsedStates).Elements.field_0x34 =
         *(undefined4 *)&(param_1->CollapsedStates).Elements.field_0x34;
    *(undefined4 *)&(param_1->CollapsedStates).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->CollapsedStates).Elements.field_0x34 = 0;
  }
  if ((param_1->CollapsedStates).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->CollapsedStates).Hash.InlineData =
         *(undefined4 *)(param_1->CollapsedStates).Hash.InlineData;
  }
  FVar2 = (this->CollapsedStates).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->CollapsedStates).Hash.SecondaryData = (param_1->CollapsedStates).Hash.SecondaryData;
  (param_1->CollapsedStates).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CollapsedStates).HashSize = (param_1->CollapsedStates).HashSize;
  (param_1->CollapsedStates).HashSize = 0;
  return this;
}

