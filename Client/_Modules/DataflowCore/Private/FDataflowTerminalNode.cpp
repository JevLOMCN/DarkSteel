// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 7

// StaticStruct @ 1443ece60

UScriptStruct * __cdecl FDataflowTerminalNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowTerminalNode.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FDataflowTerminalNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTerminalNode,(UObject *)pUVar1,
                         L"DataflowTerminalNode");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowTerminalNode.OuterSingleton;
}

// IsA @ 1443ed030

bool __thiscall FDataflowTerminalNode::IsA(FDataflowTerminalNode *this,FName param_1)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  FString *pFVar4;
  bool bVar5;
  FName local_res10;
  FName local_res18 [2];
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pFVar3 = ::FName::ToString(&local_res10,&local_18);
  ::FName::FName(local_res18,"FDataflowTerminalNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443ed098;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443ed098:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443ed0b6;
      }
    }
  }
  bVar5 = true;
LAB_1443ed0b6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetTerminalAsset @ 1443ed1c0

TObjectPtr<UObject> __thiscall FDataflowTerminalNode::GetTerminalAsset(FDataflowTerminalNode *this)

{
  TObjectPtr<UObject>_u_0 in_RDX;
  
  *(undefined8 *)in_RDX.DebugPtr = 0;
  return (TObjectPtr<UObject>)in_RDX;
}

// SetAssetValue @ 1443ed1f0

void __thiscall
FDataflowTerminalNode::SetAssetValue
          (FDataflowTerminalNode *this,TObjectPtr<UObject> param_1,FContext *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2532872304715628598>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowTerminalNode.h"
                     ,0x36,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Evaluate @ 1443ed240

void __thiscall FDataflowTerminalNode::Evaluate(FDataflowTerminalNode *this,FContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2532872304715628604>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Public\\Dataflow\\DataflowTerminalNode.h"
                     ,0x3c,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Evaluate @ 1443ed280

void __thiscall
FDataflowTerminalNode::Evaluate
          (FDataflowTerminalNode *this,FContext *param_1,FDataflowOutput *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001443ed283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x160))();
  return;
}

// ~FDataflowTerminalNode @ 144433a90

void __thiscall FDataflowTerminalNode::~FDataflowTerminalNode(FDataflowTerminalNode *this)

{
  *(undefined ***)this = &___7FDataflowTerminalNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

