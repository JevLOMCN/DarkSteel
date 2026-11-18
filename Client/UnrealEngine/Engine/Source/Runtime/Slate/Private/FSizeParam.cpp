// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// FSizeParam @ 1427b40e0

FSizeParam * __thiscall FSizeParam::FSizeParam(FSizeParam *this,FSizeParam *param_1)

{
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  
  this->SizeRule = param_1->SizeRule;
  (this->Value).Value = (param_1->Value).Value;
  (this->Value).bIsSet = (param_1->Value).bIsSet;
  pTVar1 = &(this->Value).Getter;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Value).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->Value).Getter.field_0x10 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->Value).Getter);
  pTVar1 = &(this->ShrinkValue).Getter;
  (this->ShrinkValue).Value = (param_1->ShrinkValue).Value;
  (this->ShrinkValue).bIsSet = (param_1->ShrinkValue).bIsSet;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->ShrinkValue).Getter.field_0x8 = 0;
  *(undefined4 *)&(this->ShrinkValue).Getter.field_0x10 = 0;
  TDelegate<float___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (pTVar1,&(param_1->ShrinkValue).Getter);
  return this;
}

// FSizeParam @ 142844d60

FSizeParam * __thiscall FSizeParam::FSizeParam(FSizeParam *this,FSizeParam *param_1)

{
  this->SizeRule = param_1->SizeRule;
  (this->Value).Value = (param_1->Value).Value;
  (this->Value).bIsSet = (param_1->Value).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Value).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->Value).Getter);
  (this->ShrinkValue).Value = (param_1->ShrinkValue).Value;
  (this->ShrinkValue).bIsSet = (param_1->ShrinkValue).bIsSet;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ShrinkValue).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->ShrinkValue).Getter);
  return this;
}

