// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 14749e3f0

UScriptStruct * __cdecl FAnimNode_StateResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult,(UObject *)pUVar1,
                         L"AnimNode_StateResult");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton;
}

// GetStateEntryFunction @ 1474df5d0

FAnimNodeFunctionRef * __thiscall
FAnimNode_StateResult::GetStateEntryFunction(FAnimNode_StateResult *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_StateEntryFunction.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_StateEntryFunction,"StateEntryFunction");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult,(UObject *)pUVar5,
                           L"AnimNode_StateResult");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_StateEntryFunction,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton);
    CachedId_StateEntryFunction.Id = pFVar6->Id;
    CachedId_StateEntryFunction.Index = pFVar6->Index;
  }
  iVar3 = CachedId_StateEntryFunction.Index;
  FVar2 = CachedId_StateEntryFunction.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAnimNodeFunctionRef *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pFVar7;
}

// GetStateExitFunction @ 1474df720

FAnimNodeFunctionRef * __thiscall
FAnimNode_StateResult::GetStateExitFunction(FAnimNode_StateResult *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_StateExitFunction.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_StateExitFunction,"StateExitFunction");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult,(UObject *)pUVar5,
                           L"AnimNode_StateResult");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_StateExitFunction,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton);
    CachedId_StateExitFunction.Id = pFVar6->Id;
    CachedId_StateExitFunction.Index = pFVar6->Index;
  }
  iVar3 = CachedId_StateExitFunction.Index;
  FVar2 = CachedId_StateExitFunction.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAnimNodeFunctionRef *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pFVar7;
}

// GetStateFullyBlendedInFunction @ 1474df870

FAnimNodeFunctionRef * __thiscall
FAnimNode_StateResult::GetStateFullyBlendedInFunction(FAnimNode_StateResult *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_StateFullyBlendedInFunction.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_StateFullyBlendedInFunction,"StateFullyBlendedInFunction");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult,(UObject *)pUVar5,
                           L"AnimNode_StateResult");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_StateFullyBlendedInFunction,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton);
    CachedId_StateFullyBlendedInFunction.Id = pFVar6->Id;
    CachedId_StateFullyBlendedInFunction.Index = pFVar6->Index;
  }
  iVar3 = CachedId_StateFullyBlendedInFunction.Index;
  FVar2 = CachedId_StateFullyBlendedInFunction.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAnimNodeFunctionRef *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pFVar7;
}

// GetStateFullyBlendedOutFunction @ 1474df9c0

FAnimNodeFunctionRef * __thiscall
FAnimNode_StateResult::GetStateFullyBlendedOutFunction(FAnimNode_StateResult *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  FAnimNodeFunctionRef *pFVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_StateFullyBlendedOutFunction.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_StateFullyBlendedOutFunction,"StateFullyBlendedOutFunction");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult,(UObject *)pUVar5,
                           L"AnimNode_StateResult");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_StateFullyBlendedOutFunction,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton);
    CachedId_StateFullyBlendedOutFunction.Id = pFVar6->Id;
    CachedId_StateFullyBlendedOutFunction.Index = pFVar6->Index;
  }
  iVar3 = CachedId_StateFullyBlendedOutFunction.Index;
  FVar2 = CachedId_StateFullyBlendedOutFunction.Id;
  if ((*(longlong *)&this->field_0x8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x3e1,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar7 = (FAnimNodeFunctionRef *)(*pcVar1)();
    return pFVar7;
  }
  local_28.Id = FVar2;
  local_28.Index = iVar3;
  pFVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return pFVar7;
}

// GetStateIndex @ 1474dfc90

int __thiscall FAnimNode_StateResult::GetStateIndex(FAnimNode_StateResult *this)

{
  code *pcVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  FNodeDataId *pFVar6;
  int *piVar7;
  FNodeDataId local_28;
  FNodeDataId local_18;
  
  if (CachedId_StateIndex.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_StateIndex,"StateIndex");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_StateResult,(UObject *)pUVar5,
                           L"AnimNode_StateResult");
    }
    pFVar6 = UE::Anim::FNodeDataId::FNodeDataId
                       (&local_18,AnimName_StateIndex,(FAnimNode_Base *)this,
                        Z_Registration_Info_UScriptStruct_FAnimNode_StateResult.OuterSingleton);
    CachedId_StateIndex.Id = pFVar6->Id;
    CachedId_StateIndex.Index = pFVar6->Index;
  }
  iVar4 = CachedId_StateIndex.Index;
  FVar2 = CachedId_StateIndex.Id;
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
  local_28.Index = iVar4;
  piVar7 = FAnimNodeData::GetData
                     (*(FAnimNodeData **)&this->field_0x8,&local_28,(FAnimNode_Base *)this,
                      (UObject *)0x0);
  return *piVar7;
}

// SerializeFromMismatchedTag @ 1474f8140

bool __thiscall
FAnimNode_StateResult::SerializeFromMismatchedTag
          (FAnimNode_StateResult *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  bool bVar1;
  UPackage *pUVar2;
  FPropertyTypeName local_res10 [6];
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 uStack_10;
  uint uStack_c;
  
  local_res10[0].Index = (param_1->TypeName).Index;
  if (Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Root,(UObject *)pUVar2,L"AnimNode_Root"
                        );
  }
  bVar1 = UE::FPropertyTypeName::IsStruct
                    (local_res10,
                     (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton)->
                            _padding_);
  if (bVar1) {
    uStack_10 = 0xffffffff;
    local_20 = 0;
    local_28 = &___7FAnimNode_Root__6B_;
    local_18 = 0;
    uStack_c = uStack_c & 0xffffff00;
    if (Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Root,(UObject *)pUVar2,
                           L"AnimNode_Root");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FAnimNode_Root.OuterSingleton,param_2,&local_28,
               (void *)0x0);
    *(undefined8 *)&this->field_0x8 = local_20;
    *(undefined8 *)&this->field_0x10 = local_18;
    *(ulonglong *)&this->field_0x18 = CONCAT44(uStack_c,uStack_10);
    return true;
  }
  return false;
}

