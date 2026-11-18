// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticStruct @ 14e10aff0

UScriptStruct * __cdecl FOptimusNodeGraphAction_RemoveNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_RemoveNode,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_RemoveNode");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_RemoveNode.OuterSingleton;
}

// Do @ 14e10b030

bool __thiscall
FOptimusNodeGraphAction_RemoveNode::Do
          (FOptimusNodeGraphAction_RemoveNode *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  UOptimusNodeGraph *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UOptimusNode *pUVar5;
  UClass *pUVar6;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  
  pUVar5 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1);
  if (pUVar5 != (UOptimusNode *)0x0) {
    this_00 = (UOptimusNodeGraph *)pUVar5->_padding_;
    if (this_00 != (UOptimusNodeGraph *)0x0) {
      pUVar6 = UOptimusNodeGraph::StaticClass();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        local_b8._padding_ = 0;
        local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_b8._40_8_ = 0;
        local_b8.ArSerializingDefaults = 0;
        local_b8.ArPortFlags = 0;
        local_b8.ArMaxSerializeSize = 0;
        local_b8.ArUEVer.FileVersionUE4 = 0;
        local_b8.ArUEVer.FileVersionUE5 = 0;
        local_b8.ArLicenseeUEVer = 0;
        local_b8.ArEngineVer.Major = 0;
        local_b8.ArEngineVer.Minor = 0;
        local_b8.ArEngineVer.Patch = 0;
        local_b8.ArEngineVer._6_2_ = 0;
        local_b8.ArEngineVer.Changelist = 0;
        local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_b8.SerializedProperty = (FProperty *)0x0;
        local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_b8.bCustomVersionsAreReset = false;
        local_b8._129_7_ = 0;
        local_b8.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_b8);
        local_28 = 0;
        local_b8._padding_ =
             (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
        local_20 = &this->NodeData;
        local_18 = 0;
        FArchiveState::SetIsSaving(&local_b8,true);
        (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
        local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
        (**(code **)(pUVar5->_padding_ + 800))(pUVar5,&local_b8);
        bVar3 = UOptimusNodeGraph::RemoveNodeDirect(this_00,pUVar5,true);
        FArchive::~FArchive((FArchive *)&local_b8);
        return bVar3;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563408872>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x1e8,"Graph");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// Undo @ 14e10b1d0

bool __thiscall
FOptimusNodeGraphAction_RemoveNode::Undo
          (FOptimusNodeGraphAction_RemoveNode *this,IOptimusPathResolver *param_1)

{
  UOptimusNodeGraph *this_00;
  UClass *pUVar1;
  UOptimusNode *pUVar2;
  code *local_38 [2];
  undefined **local_28;
  FOptimusNodeGraphAction_RemoveNode *local_20;
  undefined8 local_10;
  
  this_00 = (UOptimusNodeGraph *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if (this_00 != (UOptimusNodeGraph *)0x0) {
    pUVar1 = Optimus::FindObjectInPackageOrGlobal<UClass>(&this->NodeClassPath);
    if (pUVar1 != (UClass *)0x0) {
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FOptimusNodeGraphAction_RemoveNode::Undo'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
      local_10 = 0;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOptimusNodeGraphAction_RemoveNode::Undo'::__l2::<lambda_1>,bool,UOptimusNode_*>
                    ::Call;
      local_20 = this;
      pUVar2 = UOptimusNodeGraph::CreateNodeDirect
                         (this_00,pUVar1,this->NodeName,
                          (TFunction<bool___cdecl(UOptimusNode_*)> *)local_38);
      return pUVar2 != (UOptimusNode *)0x0;
    }
  }
  return false;
}

// FOptimusNodeGraphAction_RemoveNode @ 14e154f60

FOptimusNodeGraphAction_RemoveNode * __thiscall
FOptimusNodeGraphAction_RemoveNode::FOptimusNodeGraphAction_RemoveNode
          (FOptimusNodeGraphAction_RemoveNode *this,UOptimusNode *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  bool bVar7;
  FOptimusNodeGraphAction_RemoveNode *pFVar8;
  FString *pFVar9;
  UClass *pUVar10;
  undefined8 *puVar11;
  FString *pFVar12;
  longlong lVar13;
  FString local_48;
  void *local_38 [2];
  FString local_28;
  
  pFVar12 = &this->NodePath;
  this->_padding_ = 0;
  pFVar1 = &this->GraphPath;
  this->_padding_ = 0;
  pFVar2 = &this->NodeClassPath;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_RemoveNode__6B_;
  (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphPath).Data.ArrayNum = 0;
  (this->GraphPath).Data.ArrayMax = 0;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeClassPath).Data.ArrayNum = 0;
  (this->NodeClassPath).Data.ArrayMax = 0;
  (this->NodeName).ComparisonIndex = 0;
  (this->NodeName).Number = 0;
  (this->NodeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeData).ArrayNum = 0;
  (this->NodeData).ArrayMax = 0;
  if (param_1 == (UOptimusNode *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563408847>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x1cf,"InNode != nullptr");
    if (!bVar7) {
      return this;
    }
    pcVar5 = (code *)swi(3);
    pFVar8 = (FOptimusNodeGraphAction_RemoveNode *)(*pcVar5)();
    return pFVar8;
  }
  pFVar9 = UOptimusNode::GetNodePath(param_1,&local_48);
  if (pFVar12 != pFVar9) {
    pFVar4 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar12->Data).AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
    (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodePath).Data.ArrayNum = (pFVar9->Data).ArrayNum;
    (this->NodePath).Data.ArrayMax = (pFVar9->Data).ArrayMax;
    (pFVar9->Data).ArrayNum = 0;
    (pFVar9->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  lVar13 = param_1->_padding_;
  if (lVar13 != 0) {
    pUVar10 = UOptimusNodeGraph::StaticClass();
    iVar3 = (int)pUVar10->_padding_;
    if ((iVar3 <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar3 * 8)
        == &pUVar10->_padding_)) goto LAB_14e15507d;
  }
  lVar13 = 0;
LAB_14e15507d:
  puVar11 = (undefined8 *)(**(code **)(*(longlong *)(lVar13 + 0x28) + 0x20))(lVar13 + 0x28,local_38)
  ;
  if (pFVar1 != (FString *)puVar11) {
    pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*puVar11;
    *puVar11 = 0;
    (this->GraphPath).Data.ArrayNum = *(int *)(puVar11 + 1);
    (this->GraphPath).Data.ArrayMax = *(int *)((longlong)puVar11 + 0xc);
    puVar11[1] = 0;
  }
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  uVar6 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->NodeName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->NodeName).Number = uVar6;
  pFVar12 = UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)param_1->_padding_,&local_28,(UObject *)0x0);
  if (pFVar2 != pFVar12) {
    pFVar4 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pFVar2->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
    (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->NodeClassPath).Data.ArrayNum = (pFVar12->Data).ArrayNum;
    (this->NodeClassPath).Data.ArrayMax = (pFVar12->Data).ArrayMax;
    (pFVar12->Data).ArrayNum = 0;
    (pFVar12->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  FOptimusAction::SetTitlef<>
            ((FOptimusAction *)this,(TCheckedFormatStringPrivate<wchar_t>)0x152e078e0);
  return this;
}

// ~FOptimusNodeGraphAction_RemoveNode @ 14e161980

void __thiscall
FOptimusNodeGraphAction_RemoveNode::~FOptimusNodeGraphAction_RemoveNode
          (FOptimusNodeGraphAction_RemoveNode *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->NodeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NodeClassPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NodePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FOptimusAction__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// operator() @ 14e167d30

bool __thiscall
`FOptimusNodeGraphAction_RemoveNode::Undo'::__l2::<lambda_1>::operator()
          (void *this,UOptimusNode *param_1)

{
  longlong lVar1;
  FArchiveState local_b8;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  lVar1 = *(longlong *)this;
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_18 = 0x7fffffffffffffff;
  local_20 = lVar1 + 0x50;
  FArchiveState::SetIsLoading(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  (**(code **)(param_1->_padding_ + 0x328))(param_1,&local_b8);
  FArchive::~FArchive((FArchive *)&local_b8);
  return true;
}

