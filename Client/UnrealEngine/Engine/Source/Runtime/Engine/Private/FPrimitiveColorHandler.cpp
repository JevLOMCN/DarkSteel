// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FPrimitiveColorHandler @ 14737c4f0

FPrimitiveColorHandler * __thiscall
FActorPrimitiveColorHandler::FPrimitiveColorHandler::FPrimitiveColorHandler
          (FPrimitiveColorHandler *this,FPrimitiveColorHandler *param_1)

{
  ITextData *pIVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  this->HandlerName = param_1->HandlerName;
  (this->HandlerText).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->HandlerText).TextData.Reference;
  (this->HandlerText).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->HandlerText).Flags = (param_1->HandlerText).Flags;
  (this->HandlerToolTipText).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->HandlerToolTipText).TextData.Reference;
  (this->HandlerToolTipText).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->HandlerToolTipText).Flags = (param_1->HandlerToolTipText).Flags;
  this->bAvailalbleInEditor = param_1->bAvailalbleInEditor;
  lVar2 = *(longlong *)&param_1->GetColorFunc;
  *(longlong *)&this->GetColorFunc = lVar2;
  *(undefined8 *)&(this->GetColorFunc).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)&(param_1->GetColorFunc).field_0x28;
    puVar4 = (undefined8 *)&(param_1->GetColorFunc).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    (**(code **)*puVar4)();
  }
  lVar2 = *(longlong *)&param_1->ActivateFunc;
  *(longlong *)&this->ActivateFunc = lVar2;
  *(undefined8 *)&(this->ActivateFunc).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)&(param_1->ActivateFunc).field_0x28;
    puVar4 = (undefined8 *)&(param_1->ActivateFunc).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    (**(code **)*puVar4)();
  }
  lVar2 = *(longlong *)&param_1->DeactivateFunc;
  *(longlong *)&this->DeactivateFunc = lVar2;
  *(undefined8 *)&(this->DeactivateFunc).field_0x28 = 0;
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)&(param_1->DeactivateFunc).field_0x28;
    puVar4 = (undefined8 *)&(param_1->DeactivateFunc).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    (**(code **)*puVar4)();
  }
  return this;
}

// ~FPrimitiveColorHandler @ 14737d970

void __thiscall
FActorPrimitiveColorHandler::FPrimitiveColorHandler::~FPrimitiveColorHandler
          (FPrimitiveColorHandler *this)

{
  longlong *plVar1;
  ITextData *pIVar2;
  longlong *plVar3;
  
  if (*(longlong *)&this->DeactivateFunc != 0) {
    plVar1 = *(longlong **)&(this->DeactivateFunc).field_0x28;
    plVar3 = (longlong *)&(this->DeactivateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->ActivateFunc != 0) {
    plVar1 = *(longlong **)&(this->ActivateFunc).field_0x28;
    plVar3 = (longlong *)&(this->ActivateFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)&this->GetColorFunc != 0) {
    plVar1 = *(longlong **)&(this->GetColorFunc).field_0x28;
    plVar3 = (longlong *)&(this->GetColorFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pIVar2 = (this->HandlerToolTipText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  pIVar2 = (this->HandlerText).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014737d9f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar2 + 0x10))();
    return;
  }
  return;
}

