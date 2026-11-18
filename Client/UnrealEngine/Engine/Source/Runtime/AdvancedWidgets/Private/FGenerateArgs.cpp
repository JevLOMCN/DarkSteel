// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AdvancedWidgets
// Functions: 2

// FGenerateArgs @ 14d835e20

FGenerateArgs * __thiscall
UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs::FGenerateArgs
          (FGenerateArgs *this,FGenerateArgs *param_1)

{
  ForElementType<FProperty_const_*> FVar1;
  
  (this->Path).TopLevelContainer_Object.WeakPtr = (param_1->Path).TopLevelContainer_Object.WeakPtr;
  (this->Path).TopLevelContainer_ScriptStruct.WeakPtr =
       (param_1->Path).TopLevelContainer_ScriptStruct.WeakPtr;
  (this->Path).TopLevelContainer_ScriptStructData =
       (param_1->Path).TopLevelContainer_ScriptStructData;
  (this->Path).Properties.AllocatorInstance.SecondaryData = (ForElementType<FProperty_const_*>)0x0;
  if ((param_1->Path).Properties.AllocatorInstance.SecondaryData ==
      (ForElementType<FProperty_const_*>)0x0) {
    *(undefined8 *)(this->Path).Properties.AllocatorInstance.InlineData =
         *(undefined8 *)(param_1->Path).Properties.AllocatorInstance.InlineData;
  }
  FVar1 = (this->Path).Properties.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<FProperty_const_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Path).Properties.AllocatorInstance.SecondaryData =
       (param_1->Path).Properties.AllocatorInstance.SecondaryData;
  (param_1->Path).Properties.AllocatorInstance.SecondaryData =
       (ForElementType<FProperty_const_*>)0x0;
  (this->Path).Properties.ArrayNum = (param_1->Path).Properties.ArrayNum;
  (this->Path).Properties.ArrayMax = (param_1->Path).Properties.ArrayMax;
  (param_1->Path).Properties.ArrayNum = 0;
  (param_1->Path).Properties.ArrayMax = 1;
  this->NotifyHook = param_1->NotifyHook;
  this->bCanEditValue = param_1->bCanEditValue;
  return this;
}

// FGenerateArgs @ 14d835ec0

FGenerateArgs * __thiscall
UE::PropertyViewer::FPropertyValueFactory::FGenerateArgs::FGenerateArgs
          (FGenerateArgs *this,FGenerateArgs *param_1)

{
  FPropertyPath::FPropertyPath(&this->Path,&param_1->Path);
  this->NotifyHook = param_1->NotifyHook;
  this->bCanEditValue = param_1->bCanEditValue;
  return this;
}

