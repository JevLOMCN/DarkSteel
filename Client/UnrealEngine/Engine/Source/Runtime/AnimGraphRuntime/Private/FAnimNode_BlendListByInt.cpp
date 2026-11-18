// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// StaticStruct @ 1463da900

UScriptStruct * __cdecl FAnimNode_BlendListByInt::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByInt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt,(UObject *)pUVar1,
                         L"AnimNode_BlendListByInt");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByInt.OuterSingleton;
}

// GetActiveChildIndex @ 1463da940

int __thiscall FAnimNode_BlendListByInt::GetActiveChildIndex(FAnimNode_BlendListByInt *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  int *piVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  iVar4 = *(int *)&this->field_0x18;
  if (CachedId_ActiveChildIndex.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ActiveChildIndex,"ActiveChildIndex");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByInt.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByInt.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt,(UObject *)pUVar6,
                           L"AnimNode_BlendListByInt");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_ActiveChildIndex,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByInt.OuterSingleton);
    CachedId_ActiveChildIndex.Id = pFVar7->Id;
    CachedId_ActiveChildIndex.Index = pFVar7->Index;
  }
  iVar5 = CachedId_ActiveChildIndex.Index;
  FVar2 = CachedId_ActiveChildIndex.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    iVar4 = (*pcVar1)();
    return iVar4;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar5;
  piVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  iVar4 = iVar4 + -1;
  if (*piVar8 < iVar4) {
    iVar4 = *piVar8;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  return iVar5;
}

// GetNodeName @ 1463daab0

FString * __thiscall
FAnimNode_BlendListByInt::GetNodeName
          (FAnimNode_BlendListByInt *this,FString *__return_storage_ptr__,FNodeDebugData *param_1)

{
  UPackage *pUVar1;
  FName local_res10;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByInt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByInt,(UObject *)pUVar1,
                         L"AnimNode_BlendListByInt");
  }
  local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByInt.OuterSingleton)->
                       _padding_;
  ::FName::ToString(&local_res10,local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s<W:%.1f%%> %s");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  return __return_storage_ptr__;
}

