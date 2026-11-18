// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d49e890

UScriptStruct * __cdecl FStateTreeObjectIsValidCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsValidCondition,
                         (UObject *)pUVar1,L"StateTreeObjectIsValidCondition");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d49e8d0

UStruct * __thiscall
FStateTreeObjectIsValidCondition::GetInstanceDataType(FStateTreeObjectIsValidCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData,
                         (UObject *)pUVar1,L"StateTreeObjectIsValidConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.
         OuterSingleton;
}

// TestCondition @ 14d49e910

bool __thiscall
FStateTreeObjectIsValidCondition::TestCondition
          (FStateTreeObjectIsValidCondition *this,FStateTreeExecutionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  
  if ((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
      ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
     ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
      *(ushort *)((longlong)&this->_padding_ + 4))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x2b7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (*(longlong *)&param_1->CurrentNodeInstanceData == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar2 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData,
                         (UObject *)pUVar6,L"StateTreeObjectIsValidConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d49ea0b;
  }
  else {
LAB_14d49ea0b:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeObjectIsValidConditionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d49ea55;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_14d49ea55:
  lVar2 = **(longlong **)&(param_1->CurrentNodeInstanceData).field_0x8;
  if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)) {
    return (bool)(this->bInvert ^ 1);
  }
  return this->bInvert;
}

