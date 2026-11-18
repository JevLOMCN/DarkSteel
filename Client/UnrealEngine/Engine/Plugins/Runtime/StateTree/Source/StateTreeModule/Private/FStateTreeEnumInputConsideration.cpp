// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// StaticStruct @ 14d4a2ae0

UScriptStruct * __cdecl FStateTreeEnumInputConsideration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsideration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsideration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEnumInputConsideration,
                         (UObject *)pUVar1,L"StateTreeEnumInputConsideration");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsideration.OuterSingleton;
}

// GetInstanceDataType @ 14d4a2b40

UStruct * __thiscall
FStateTreeEnumInputConsideration::GetInstanceDataType(FStateTreeEnumInputConsideration *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData,
                         (UObject *)pUVar1,L"StateTreeEnumInputConsiderationInstanceData");
  }
  return (UStruct *)
         Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData.
         OuterSingleton;
}

// GetScore @ 14d4a2b80

float __thiscall
FStateTreeEnumInputConsideration::GetScore
          (FStateTreeEnumInputConsideration *this,FStateTreeExecutionContext *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPackage *pUVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  
  if (((((param_1->CurrentNodeDataHandle).Source != (EStateTreeDataSourceType)this->_padding_) ||
       ((param_1->CurrentNodeDataHandle).Index != *(ushort *)((longlong)&this->_padding_ + 2))) ||
      ((param_1->CurrentNodeDataHandle).StateHandle.Index !=
       *(ushort *)((longlong)&this->_padding_ + 4))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentNodeDataHandle == Node.InstanceDataHandle",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeExecutionContext.h"
                         ,0x2b7,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  if ((*(longlong *)&(param_1->CurrentNodeInstanceData).field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x74,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  if ((*(longlong *)&param_1->CurrentNodeInstanceData == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                         ,0x75,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
  lVar9 = *(longlong *)&param_1->CurrentNodeInstanceData;
  if (Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData,
                         (UObject *)pUVar6,L"StateTreeEnumInputConsiderationInstanceData");
    if (Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData.
        OuterSingleton != (UScriptStruct *)0x0) goto LAB_14d4a2c7b;
  }
  else {
LAB_14d4a2c7b:
    iVar7 = (int)(Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData.
                 OuterSingleton)->_padding_;
    if ((*(int *)(lVar9 + 0x38) < iVar7) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FStateTreeEnumInputConsiderationInstanceData.
         OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_14d4a2cc5;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(T::StaticStruct())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\PropertyBindingUtils\\Source\\PropertyBindingUtils\\Public\\PropertyBindingDataView.h"
                     ,0x76,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    fVar10 = (float)(*pcVar3)();
    return fVar10;
  }
LAB_14d4a2cc5:
  uVar8 = 0;
  iVar7 = (this->EnumValueScorePairs).Data.ArrayNum;
  if (0 < iVar7) {
    uVar1 = **(uint **)&(param_1->CurrentNodeInstanceData).field_0x8;
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar10 = (float)(*pcVar3)();
        return fVar10;
      }
      pFVar2 = (this->EnumValueScorePairs).Data.AllocatorInstance.Data;
      if ((ulonglong)uVar1 == *(ulonglong *)(pFVar2 + lVar9)) {
        return *(float *)(pFVar2 + lVar9 + 8);
      }
      iVar7 = (this->EnumValueScorePairs).Data.ArrayNum;
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while ((int)uVar8 < iVar7);
  }
  return 0.0;
}

