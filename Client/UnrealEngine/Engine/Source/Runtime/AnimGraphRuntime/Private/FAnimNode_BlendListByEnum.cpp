// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 5

// StaticStruct @ 1463d7be0

UScriptStruct * __cdecl FAnimNode_BlendListByEnum::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum,(UObject *)pUVar1,
                         L"AnimNode_BlendListByEnum");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton;
}

// GetActiveChildIndex @ 1463d7c20

int __thiscall FAnimNode_BlendListByEnum::GetActiveChildIndex(FAnimNode_BlendListByEnum *this)

{
  byte bVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  byte *pbVar8;
  longlong *plVar9;
  ulonglong uVar10;
  FNodeDataId local_58;
  FNodeDataId local_48;
  FNodeDataId local_38;
  FNodeDataId local_2c;
  
  uVar10 = (ulonglong)_tls_index;
  if (CachedId_ActiveEnumValue.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ActiveEnumValue,"ActiveEnumValue");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum,(UObject *)pUVar6,
                           L"AnimNode_BlendListByEnum");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_38,AnimName_ActiveEnumValue,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton);
    CachedId_ActiveEnumValue.Id = pFVar7->Id;
    CachedId_ActiveEnumValue.Index = pFVar7->Index;
  }
  iVar5 = CachedId_ActiveEnumValue.Index;
  FVar3 = CachedId_ActiveEnumValue.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  local_58.Id = FVar3;
  local_58.Index = iVar5;
  pbVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_58,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  bVar1 = *pbVar8;
  if (CachedId_EnumToPoseIndex.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar10 * 8) + 0x9d4c) <
         ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_EnumToPoseIndex,"EnumToPoseIndex");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum,(UObject *)pUVar6,
                           L"AnimNode_BlendListByEnum");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_2c,AnimName_EnumToPoseIndex,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton);
    CachedId_EnumToPoseIndex.Id = pFVar7->Id;
    CachedId_EnumToPoseIndex.Index = pFVar7->Index;
  }
  iVar5 = CachedId_EnumToPoseIndex.Index;
  FVar3 = CachedId_EnumToPoseIndex.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  local_48.Id = FVar3;
  local_48.Index = iVar5;
  plVar9 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_48,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  if ((int)(uint)bVar1 < (int)plVar9[1]) {
    iVar5 = *(int *)(*plVar9 + (ulonglong)bVar1 * 4);
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}

// GetNodeName @ 1463d8070

FString * __thiscall
FAnimNode_BlendListByEnum::GetNodeName
          (FAnimNode_BlendListByEnum *this,FString *__return_storage_ptr__,FNodeDebugData *param_1)

{
  UPackage *pUVar1;
  FName local_res10;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum,(UObject *)pUVar1,
                         L"AnimNode_BlendListByEnum");
  }
  local_res10 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton)
                       ->_padding_;
  ::FName::ToString(&local_res10,local_28);
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s<W:%.1f%%> %s");
  if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  return __return_storage_ptr__;
}

// GetActiveEnumValue @ 1464472a0

uchar __thiscall FAnimNode_BlendListByEnum::GetActiveEnumValue(FAnimNode_BlendListByEnum *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  uchar uVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  uchar *puVar8;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_ActiveEnumValue.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ActiveEnumValue,"ActiveEnumValue");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum,(UObject *)pUVar6,
                           L"AnimNode_BlendListByEnum");
    }
    pFVar7 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_ActiveEnumValue,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton);
    CachedId_ActiveEnumValue.Id = pFVar7->Id;
    CachedId_ActiveEnumValue.Index = pFVar7->Index;
  }
  iVar3 = CachedId_ActiveEnumValue.Index;
  FVar2 = CachedId_ActiveEnumValue.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  puVar8 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *puVar8;
}

// GetEnumToPoseIndex @ 146449fb0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
FAnimNode_BlendListByEnum::GetEnumToPoseIndex(FAnimNode_BlendListByEnum *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_EnumToPoseIndex.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_EnumToPoseIndex,"EnumToPoseIndex");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendListByEnum,(UObject *)pUVar5,
                           L"AnimNode_BlendListByEnum");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_EnumToPoseIndex,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_BlendListByEnum.OuterSingleton);
    CachedId_EnumToPoseIndex.Id = pFVar6->Id;
    CachedId_EnumToPoseIndex.Index = pFVar6->Index;
  }
  iVar3 = CachedId_EnumToPoseIndex.Index;
  FVar2 = CachedId_EnumToPoseIndex.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pTVar7 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pTVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pTVar7;
}

