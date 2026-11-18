// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FPCGAttributeAccessorMethods @ 14988c050

FPCGAttributeAccessorMethods * __thiscall
FPCGAttributeAccessorMethods::FPCGAttributeAccessorMethods
          (FPCGAttributeAccessorMethods *this,FPCGAttributeAccessorMethods *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)&this->CreateAccessorFunc = *(undefined8 *)&param_1->CreateAccessorFunc;
  *(undefined8 *)&(this->CreateAccessorFunc).field_0x28 =
       *(undefined8 *)&(param_1->CreateAccessorFunc).field_0x28;
  *(undefined8 *)&(param_1->CreateAccessorFunc).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->CreateAccessorFunc).field_0x18;
  *(undefined8 *)&(this->CreateAccessorFunc).field_0x10 =
       *(undefined8 *)&(param_1->CreateAccessorFunc).field_0x10;
  *(undefined8 *)&(this->CreateAccessorFunc).field_0x18 = uVar1;
  *(undefined8 *)&(this->CreateAccessorFunc).field_0x20 =
       *(undefined8 *)&(param_1->CreateAccessorFunc).field_0x20;
  if (*(longlong *)&this->CreateAccessorFunc != 0) {
    *(undefined8 *)&param_1->CreateAccessorFunc = 0;
  }
  *(undefined8 *)&this->CreateConstAccessorFunc = *(undefined8 *)&param_1->CreateConstAccessorFunc;
  *(undefined8 *)&(this->CreateConstAccessorFunc).field_0x28 =
       *(undefined8 *)&(param_1->CreateConstAccessorFunc).field_0x28;
  *(undefined8 *)&(param_1->CreateConstAccessorFunc).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->CreateConstAccessorFunc).field_0x18;
  *(undefined8 *)&(this->CreateConstAccessorFunc).field_0x10 =
       *(undefined8 *)&(param_1->CreateConstAccessorFunc).field_0x10;
  *(undefined8 *)&(this->CreateConstAccessorFunc).field_0x18 = uVar1;
  *(undefined8 *)&(this->CreateConstAccessorFunc).field_0x20 =
       *(undefined8 *)&(param_1->CreateConstAccessorFunc).field_0x20;
  if (*(longlong *)&this->CreateConstAccessorFunc != 0) {
    *(undefined8 *)&param_1->CreateConstAccessorFunc = 0;
  }
  *(undefined8 *)&this->CreateAccessorKeysFunc = *(undefined8 *)&param_1->CreateAccessorKeysFunc;
  *(undefined8 *)&(this->CreateAccessorKeysFunc).field_0x28 =
       *(undefined8 *)&(param_1->CreateAccessorKeysFunc).field_0x28;
  *(undefined8 *)&(param_1->CreateAccessorKeysFunc).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->CreateAccessorKeysFunc).field_0x18;
  *(undefined8 *)&(this->CreateAccessorKeysFunc).field_0x10 =
       *(undefined8 *)&(param_1->CreateAccessorKeysFunc).field_0x10;
  *(undefined8 *)&(this->CreateAccessorKeysFunc).field_0x18 = uVar1;
  *(undefined8 *)&(this->CreateAccessorKeysFunc).field_0x20 =
       *(undefined8 *)&(param_1->CreateAccessorKeysFunc).field_0x20;
  if (*(longlong *)&this->CreateAccessorKeysFunc != 0) {
    *(undefined8 *)&param_1->CreateAccessorKeysFunc = 0;
  }
  *(undefined8 *)&this->CreateConstAccessorKeysFunc =
       *(undefined8 *)&param_1->CreateConstAccessorKeysFunc;
  *(undefined8 *)&(this->CreateConstAccessorKeysFunc).field_0x28 =
       *(undefined8 *)&(param_1->CreateConstAccessorKeysFunc).field_0x28;
  *(undefined8 *)&(param_1->CreateConstAccessorKeysFunc).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->CreateConstAccessorKeysFunc).field_0x18;
  *(undefined8 *)&(this->CreateConstAccessorKeysFunc).field_0x10 =
       *(undefined8 *)&(param_1->CreateConstAccessorKeysFunc).field_0x10;
  *(undefined8 *)&(this->CreateConstAccessorKeysFunc).field_0x18 = uVar1;
  *(undefined8 *)&(this->CreateConstAccessorKeysFunc).field_0x20 =
       *(undefined8 *)&(param_1->CreateConstAccessorKeysFunc).field_0x20;
  if (*(longlong *)&this->CreateConstAccessorKeysFunc != 0) {
    *(undefined8 *)&param_1->CreateConstAccessorKeysFunc = 0;
  }
  return this;
}

// ~FPCGAttributeAccessorMethods @ 149e37130

void __thiscall
FPCGAttributeAccessorMethods::~FPCGAttributeAccessorMethods(FPCGAttributeAccessorMethods *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->CreateConstAccessorKeysFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateConstAccessorKeysFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateConstAccessorKeysFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->CreateAccessorKeysFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateAccessorKeysFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateAccessorKeysFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->CreateConstAccessorFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateConstAccessorFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateConstAccessorFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->CreateAccessorFunc != 0) {
    plVar1 = *(longlong **)&(this->CreateAccessorFunc).field_0x28;
    plVar2 = (longlong *)&(this->CreateAccessorFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x000149e371b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

