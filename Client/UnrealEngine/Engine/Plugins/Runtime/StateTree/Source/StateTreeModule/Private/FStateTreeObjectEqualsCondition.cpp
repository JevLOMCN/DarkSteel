// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d49eca0

UScriptStruct * __cdecl FStateTreeObjectEqualsCondition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsCondition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsCondition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectEqualsCondition,(UObject *)pUVar1
                         ,L"StateTreeObjectEqualsCondition");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsCondition.OuterSingleton;
}

// GetInstanceDataType @ 14d49ecf0

UStruct * __thiscall
FStateTreeObjectEqualsCondition::GetInstanceDataType(FStateTreeObjectEqualsCondition *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData,
                         (UObject *)pUVar1,L"StateTreeObjectEqualsConditionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.
         OuterSingleton;
}

// TestCondition @ 14d49ed30

bool __thiscall
FStateTreeObjectEqualsCondition::TestCondition
          (FStateTreeObjectEqualsCondition *this,FStateTreeExecutionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UPackage *pUVar7;
  
  if ((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
      ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
     ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
      *(ushort *)((longlong)&this->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x2b7,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if (*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if (*(longlong *)&param_1->CurrentNodeInstanceData == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  lVar2 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar7 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData,
                         (UObject *)pUVar7,L"StateTreeObjectEqualsConditionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.OuterSingleton
        != (UScriptStruct *)0x0) goto LAB_14d49ee2b;
  }
  else {
LAB_14d49ee2b:
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeObjectEqualsConditionInstanceData.
         OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14d49ee75;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
LAB_14d49ee75:
  plVar3 = *(longlong **)&(param_1->CurrentNodeInstanceData).field_0x8;
  return (bool)(*plVar3 == plVar3[1] ^ this->bInvert);
}

