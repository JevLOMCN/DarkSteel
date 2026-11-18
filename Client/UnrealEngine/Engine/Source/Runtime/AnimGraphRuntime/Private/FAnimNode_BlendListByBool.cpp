// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 7

// StaticStruct @ 1463d68b0

UScriptStruct * __cdecl FAnimNode_BlendListByBool::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool,(UObject *)pUVar1,
                         L"AnimNode_BlendListByBool");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton;
}

// GetActiveChildIndex @ 1463d6940

int __thiscall FAnimNode_BlendListByBool::GetActiveChildIndex(FAnimNode_BlendListByBool *this)

{
  bool bVar1;
  
  bVar1 = GetActiveValue(this);
  return bVar1 ^ 1;
}

// GetNodeName @ 1463d69a0

FString * __thiscall
FAnimNode_BlendListByBool::GetNodeName
          (FAnimNode_BlendListByBool *this,FString *__return_storage_ptr__,FNodeDebugData *param_1)

{
  UPackage *pUVar1;
  FName local_res10;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool,(UObject *)pUVar1,
                         L"AnimNode_BlendListByBool");
  }
  local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton)
                       ->_padding_;
  ::FName::ToString(&local_res10,local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s<W:%.1f%%> %s");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  return __return_storage_ptr__;
}

// GetBlendProfile @ 1463d6a90

UBlendProfile * __thiscall
FAnimNode_BlendListByBool::GetBlendProfile(FAnimNode_BlendListByBool *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  UBlendProfile *pUVar7;
  char *pcVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  FNodeDataId local_68;
  FNodeDataId local_58;
  FNodeDataId local_48;
  FNodeDataId local_38;
  FNodeDataId local_2c;
  FNodeDataId local_20 [2];
  
  uVar10 = (ulonglong)_tls_index;
  if (CachedId_bUseSeperateBlendProfileForFalse.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bUseSeperateBlendProfileForFalse,"bUseSeperateBlendProfileForFalse");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool,(UObject *)pUVar5,
                           L"AnimNode_BlendListByBool");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_38,AnimName_bUseSeperateBlendProfileForFalse,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton);
    CachedId_bUseSeperateBlendProfileForFalse.Id = pFVar6->Id;
    CachedId_bUseSeperateBlendProfileForFalse.Index = pFVar6->Index;
  }
  iVar3 = CachedId_bUseSeperateBlendProfileForFalse.Index;
  FVar2 = CachedId_bUseSeperateBlendProfileForFalse.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UBlendProfile *)(*pcVar1)();
    return pUVar7;
  }
  local_68.Id = FVar2;
  local_68.Index = iVar3;
  pcVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_68,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if ((*pcVar8 == '\0') || (bVar4 = GetActiveValue(this), bVar4)) {
    if (CachedId_BlendProfile.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) <
           ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_BlendProfile,"BlendProfile");
        _Init_thread_footer(&::_TSS1);
      }
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListBase,(UObject *)pUVar5,
                             L"AnimNode_BlendListBase");
      }
      pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                         (local_20,AnimName_BlendProfile,(FAnimNode_Base *)this,
                          Z_Registration_Info_UScriptStruct_FAnimNode_BlendListBase.OuterSingleton);
      CachedId_BlendProfile.Id = pFVar6->Id;
      CachedId_BlendProfile.Index = pFVar6->Index;
    }
    iVar3 = CachedId_BlendProfile.Index;
    FVar2 = CachedId_BlendProfile.Id;
    if ((*(longlong *)&this->field_0x8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodeData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                           ,0x3e1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UBlendProfile *)(*pcVar1)();
      return pUVar7;
    }
    pFVar6 = &local_48;
    local_48.Id = FVar2;
    local_48.Index = iVar3;
  }
  else {
    if (CachedId_BlendProfileForFalse.Index == -1) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) <
           ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        ::FName::FName(&AnimName_BlendProfileForFalse,"BlendProfileForFalse");
        _Init_thread_footer(&::_TSS1);
      }
      if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool,(UObject *)pUVar5,
                             L"AnimNode_BlendListByBool");
      }
      pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                         (&local_2c,AnimName_BlendProfileForFalse,(FAnimNode_Base *)this,
                          Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton
                         );
      CachedId_BlendProfileForFalse.Id = pFVar6->Id;
      CachedId_BlendProfileForFalse.Index = pFVar6->Index;
    }
    iVar3 = CachedId_BlendProfileForFalse.Index;
    FVar2 = CachedId_BlendProfileForFalse.Id;
    if ((*(longlong *)&this->field_0x8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NodeData",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                           ,0x3e1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      pUVar7 = (UBlendProfile *)(*pcVar1)();
      return pUVar7;
    }
    pFVar6 = &local_58;
    local_58.Id = FVar2;
    local_58.Index = iVar3;
  }
  puVar9 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,pFVar6,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (UBlendProfile *)*puVar9;
}

// GetActiveValue @ 1464473f0

bool __thiscall FAnimNode_BlendListByBool::GetActiveValue(FAnimNode_BlendListByBool *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bActiveValue.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bActiveValue,"bActiveValue");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool,(UObject *)pUVar6,
                           L"AnimNode_BlendListByBool");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bActiveValue,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton);
    CachedId_bActiveValue.Id = pFVar7->Id;
    CachedId_bActiveValue.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bActiveValue.Index;
  FVar2 = CachedId_bActiveValue.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

// GetBlendProfileForFalse @ 146447bc0

UBlendProfile * __thiscall
FAnimNode_BlendListByBool::GetBlendProfileForFalse(FAnimNode_BlendListByBool *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  UBlendProfile *pUVar7;
  undefined8 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_BlendProfileForFalse.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_BlendProfileForFalse,"BlendProfileForFalse");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool,(UObject *)pUVar5,
                           L"AnimNode_BlendListByBool");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_BlendProfileForFalse,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton);
    CachedId_BlendProfileForFalse.Id = pFVar6->Id;
    CachedId_BlendProfileForFalse.Index = pFVar6->Index;
  }
  iVar3 = CachedId_BlendProfileForFalse.Index;
  FVar2 = CachedId_BlendProfileForFalse.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pUVar7 = (UBlendProfile *)(*pcVar1)();
    return pUVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (UBlendProfile *)*puVar8;
}

// GetUseSeperateBlendProfiles @ 146450570

bool __thiscall
FAnimNode_BlendListByBool::GetUseSeperateBlendProfiles(FAnimNode_BlendListByBool *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined1 *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_bUseSeperateBlendProfileForFalse.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_bUseSeperateBlendProfileForFalse,"bUseSeperateBlendProfileForFalse");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByBool,(UObject *)pUVar6,
                           L"AnimNode_BlendListByBool");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_bUseSeperateBlendProfileForFalse,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByBool.OuterSingleton);
    CachedId_bUseSeperateBlendProfileForFalse.Id = pFVar7->Id;
    CachedId_bUseSeperateBlendProfileForFalse.Index = pFVar7->Index;
  }
  iVar3 = CachedId_bUseSeperateBlendProfileForFalse.Index;
  FVar2 = CachedId_bUseSeperateBlendProfileForFalse.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return (bool)*puVar8;
}

