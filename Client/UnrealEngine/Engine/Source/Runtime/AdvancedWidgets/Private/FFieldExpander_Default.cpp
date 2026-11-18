// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 3

// CanExpandObject @ 14d843500

TOptional<UClass_const_*> * __thiscall
UE::PropertyViewer::FFieldExpander_Default::CanExpandObject
          (FFieldExpander_Default *this,TOptional<UClass_const_*> *__return_storage_ptr__,
          FObjectPropertyBase *param_1,UObject *param_2)

{
  if (((this->ExpandObject & RequireValidInstance) != None) && (param_2 == (UObject *)0x0)) {
    __return_storage_ptr__->bIsSet = false;
    return __return_storage_ptr__;
  }
  if (((this->ExpandObject & UseInstanceClass) != None) && (param_2 != (UObject *)0x0)) {
    __return_storage_ptr__->TypedValue = *(UClass **)&param_2->field_0x10;
    __return_storage_ptr__->bIsSet = true;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->TypedValue = (UClass *)(param_1->PropertyClass).field0_0x0;
  __return_storage_ptr__->bIsSet = true;
  return __return_storage_ptr__;
}

// CanExpandScriptStruct @ 14d843550

bool __thiscall
UE::PropertyViewer::FFieldExpander_Default::CanExpandScriptStruct
          (FFieldExpander_Default *this,FStructProperty *param_1)

{
  return this->bExpandScriptStruct;
}

// GetExpandedFunction @ 14d867390

TOptional<UStruct_const_*> * __thiscall
UE::PropertyViewer::FFieldExpander_Default::GetExpandedFunction
          (FFieldExpander_Default *this,TOptional<UStruct_const_*> *__return_storage_ptr__,
          UFunction *param_1)

{
  FProperty *pFVar1;
  
  if (param_1 != (UFunction *)0x0) {
    if (this->ExpandFunction == FunctionProperties) {
      __return_storage_ptr__->bIsSet = true;
      __return_storage_ptr__->TypedValue = (UStruct *)param_1;
      return __return_storage_ptr__;
    }
    if (this->ExpandFunction == FunctionReturnProperty) {
      pFVar1 = UFunction::GetReturnProperty(param_1);
      if ((pFVar1 != (FProperty *)0x0) && ((*(uint *)(pFVar1->_padding_ + 0x18) >> 0x1a & 1) != 0))
      {
        __return_storage_ptr__->TypedValue = (UStruct *)pFVar1[1]._padding_;
        __return_storage_ptr__->bIsSet = true;
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

