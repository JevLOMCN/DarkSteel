// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 2

// SetupScalarParameter @ 14e6fc500

bool __cdecl
UE::Interchange::Materials::Private::FMaterialNodesHelper::SetupScalarParameter
          (UInterchangeBaseNodeContainer *param_1,UInterchangeShaderGraphNode *param_2,
          FString *param_3,float *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  UInterchangeShaderNode *this;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_48);
  local_68.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  local_58.DataPtr = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  local_68._12_4_ = uStack_7c;
  local_68.Size = iVar5;
  iVar1 = (param_3->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iVar5;
  this = UInterchangeShaderNode::Create(param_1,&local_58,&local_68);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this == (UInterchangeShaderNode *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7583691499066359825>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialNodesHelper.cpp"
                       ,0x11,"ExpressionNode");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = false;
  }
  else {
    pFVar6 = ::FName::ToString(&Standard::Nodes::ScalarParameter::Attributes::DefaultValue,&local_38
                              );
    UInterchangeShaderNode::AddFloatInput(this,pFVar6,param_4,true);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar6 = ::FName::ToString(&Standard::Nodes::ScalarParameter::Name,&local_28);
    UInterchangeShaderNode::SetCustomShaderType(this,pFVar6);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this,&local_18);
    UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput
              ((UInterchangeBaseNode *)param_2,param_3,pFVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  return bVar3;
}

// SetupVectorParameter @ 14e6fc890

bool __cdecl
UE::Interchange::Materials::Private::FMaterialNodesHelper::SetupVectorParameter
          (UInterchangeBaseNodeContainer *param_1,UInterchangeShaderGraphNode *param_2,
          FString *param_3,FLinearColor *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString *pFVar6;
  UInterchangeShaderNode *this;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_48);
  local_68.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  iVar1 = (pFVar6->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  local_58.DataPtr = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
  local_68._12_4_ = uStack_7c;
  local_68.Size = iVar5;
  iVar1 = (param_3->Data).ArrayNum;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  local_58._12_4_ = uStack_6c;
  local_58.Size = iVar5;
  this = UInterchangeShaderNode::Create(param_1,&local_58,&local_68);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (this == (UInterchangeShaderNode *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7583691499066359843>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Import\\Private\\Material\\InterchangeMaterialNodesHelper.cpp"
                       ,0x23,"ExpressionNode");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    bVar3 = false;
  }
  else {
    pFVar6 = ::FName::ToString(&Standard::Nodes::VectorParameter::Attributes::DefaultValue,&local_38
                              );
    UInterchangeShaderNode::AddLinearColorInput(this,pFVar6,param_4,true);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar6 = ::FName::ToString(&Standard::Nodes::VectorParameter::Name,&local_28);
    UInterchangeShaderNode::SetCustomShaderType(this,pFVar6);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this,&local_18);
    UInterchangeShaderPortsAPI::ConnectDefaultOuputToInput
              ((UInterchangeBaseNode *)param_2,param_3,pFVar6);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    bVar3 = true;
  }
  return bVar3;
}

