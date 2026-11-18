// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a0c20

UScriptStruct * __cdecl FStateTreeBooleanNotPropertyFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotPropertyFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotPropertyFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanNotPropertyFunction,
                         (UObject *)pUVar1,L"StateTreeBooleanNotPropertyFunction");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotPropertyFunction.OuterSingleton;
}

// GetInstanceDataType @ 14d4a0c60

UStruct * __thiscall
FStateTreeBooleanNotPropertyFunction::GetInstanceDataType
          (FStateTreeBooleanNotPropertyFunction *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData
                         ,(UObject *)pUVar1,
                         L"StateTreeBooleanNotOperationPropertyFunctionInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData
         .OuterSingleton;
}

// Execute @ 14d4a0ca0

void __thiscall
FStateTreeBooleanNotPropertyFunction::Execute
          (FStateTreeBooleanNotPropertyFunction *this,FStateTreeExecutionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  
  if ((((param_1->CurrentNodeDataHandle).Source != this->field_0x18) ||
      ((param_1->CurrentNodeDataHandle).Index != *(ushort *)&this->field_0x1a)) ||
     ((param_1->CurrentNodeDataHandle).StateHandle.Index != *(ushort *)&this->field_0x1c)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x2b7,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Memory != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x74,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(longlong *)&param_1->CurrentNodeInstanceData == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Struct != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x75,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData
                         ,(UObject *)pUVar6,
                         L"StateTreeBooleanNotOperationPropertyFunctionInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d4a0d93;
  }
  else {
LAB_14d4a0d93:
    iVar1 = (int)(
                 Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData
                 .OuterSingleton)->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &(
         Z_Registration_Info_UScriptStruct_FStateTreeBooleanNotOperationPropertyFunctionInstanceData
         .OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_14d4a0ddd;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14d4a0ddd:
  pcVar3 = *(char **)&(param_1->CurrentNodeInstanceData).field_0x8;
  pcVar3[1] = *pcVar3 == '\0';
  return;
}

