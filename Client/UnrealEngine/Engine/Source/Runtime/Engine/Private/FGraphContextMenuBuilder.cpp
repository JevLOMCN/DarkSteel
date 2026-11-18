// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FGraphContextMenuBuilder @ 147b39d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FGraphContextMenuBuilder * __thiscall
FGraphContextMenuBuilder::FGraphContextMenuBuilder(FGraphContextMenuBuilder *this,UEdGraph *param_1)

{
  UPackage *pUVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  longlong *plVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SelectedObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedObjects).ArrayNum = 0;
  (this->SelectedObjects).ArrayMax = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGraphContextMenuBuilder__6B_;
  this->CurrentGraph = param_1;
  pUVar1 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UEdGraph::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  this->_padding_ = (longlong)pUVar3;
  return this;
}

