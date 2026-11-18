// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a1cd0

UScriptStruct * __cdecl FStateTreeBlueprintConsiderationWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeBlueprintConsiderationWrapper.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeBlueprintConsiderationWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeBlueprintConsiderationWrapper,
                         (UObject *)pUVar1,L"StateTreeBlueprintConsiderationWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeBlueprintConsiderationWrapper.OuterSingleton;
}

// GetInstanceDataType @ 14d4a1de0

UStruct * __thiscall
FStateTreeBlueprintConsiderationWrapper::GetInstanceDataType
          (FStateTreeBlueprintConsiderationWrapper *this)

{
  int iVar1;
  UClass *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->ConsiderationClass).Class.field0_0x0.DebugPtr;
  if (pUVar2 != (UClass *)0x0) {
    pUVar4 = UStateTreeConsiderationBlueprintBase::StaticClass();
    if (pUVar4 != (UClass *)0x0) {
      iVar1 = (int)pUVar4->_padding_;
      if (((int)pUVar2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        return (UStruct *)(this->ConsiderationClass).Class.field0_0x0.DebugPtr;
      }
    }
  }
  return (UStruct *)0x0;
}

// GetScore @ 14d4a1e50

float __thiscall
FStateTreeBlueprintConsiderationWrapper::GetScore
          (FStateTreeBlueprintConsiderationWrapper *this,FStateTreeExecutionContext *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  float fVar7;
  
  if ((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
      ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
     ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
      *(ushort *)((longlong)&this->_padding_ + 4))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                       ,0x2a6,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
  }
  if ((*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 != 0) &&
     (*(longlong *)&param_1->CurrentNodeInstanceData == 0)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Memory || (Memory && Struct)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x60,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
  }
  lVar2 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (lVar2 != 0) {
    pUVar6 = UStateTreeConsiderationBlueprintBase::StaticClass();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) goto LAB_14d4a1f43;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Struct || Struct->IsChildOf(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                       ,0x61,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
  }
LAB_14d4a1f43:
  plVar3 = *(longlong **)&(param_1->CurrentNodeInstanceData).field_0x8;
  if (plVar3 == (longlong *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Consideration",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Private\\Blueprint\\StateTreeConsiderationBlueprintBase.cpp"
                       ,0x55,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar7 = (float)(*pcVar4)();
      return fVar7;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014d4a1f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar7 = (float)(**(code **)(*plVar3 + 0x2b0))(plVar3,param_1);
  return fVar7;
}

