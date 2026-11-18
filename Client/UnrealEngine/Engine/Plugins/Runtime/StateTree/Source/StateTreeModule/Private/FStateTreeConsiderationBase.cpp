// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 4

// StaticStruct @ 14d4a1570

UScriptStruct * __cdecl FStateTreeConsiderationBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeConsiderationBase,(UObject *)pUVar1,
                         L"StateTreeConsiderationBase");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeConsiderationBase.OuterSingleton;
}

// GetScore @ 14d4a15f0

float __thiscall
FStateTreeConsiderationBase::GetScore
          (FStateTreeConsiderationBase *this,FStateTreeExecutionContext *param_1)

{
  return 0.0;
}

// FStateTreeConsiderationBase @ 14d4b16d0

FStateTreeConsiderationBase * __thiscall
FStateTreeConsiderationBase::FStateTreeConsiderationBase(FStateTreeConsiderationBase *this)

{
  this->_padding_ = (longlong)&___7FStateTreeNodeBase__6B_;
  this->_padding_ = 0;
  *(ushort *)&this->_padding_ = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)&this->_padding_ + 2) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)&this->_padding_ + 4) = FStateTreeIndex16::Invalid.Value;
  *(ushort *)((longlong)&this->_padding_ + 6) = FStateTreeIndex16::Invalid.Value;
  *(undefined4 *)&this->_padding_ = FStateTreeDataHandle::Invalid._0_4_;
  *(ushort *)((longlong)&this->_padding_ + 4) = FStateTreeDataHandle::Invalid.StateHandle.Index;
  this->_padding_ = (longlong)&___7FStateTreeConsiderationBase__6B_;
  this->Operand = And;
  this->DeltaIndent = '\0';
  return this;
}

// GetNormalizedScore @ 14d4bea50

float __thiscall
FStateTreeConsiderationBase::GetNormalizedScore
          (FStateTreeConsiderationBase *this,FStateTreeExecutionContext *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0x28))();
  if (__real_3f800000 <= fVar1) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

