// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 8

// StaticStruct @ 14e10aa80

UScriptStruct * __cdecl FOptimusNodeGraphAction_DuplicateNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode,
                         (UObject *)pUVar1,L"OptimusNodeGraphAction_DuplicateNode");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNodeGraphAction_DuplicateNode.OuterSingleton;
}

// Do @ 14e10ab50

bool __thiscall
FOptimusNodeGraphAction_DuplicateNode::Do
          (FOptimusNodeGraphAction_DuplicateNode *this,IOptimusPathResolver *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  undefined4 uVar3;
  ForAnyElementType FVar4;
  longlong *plVar5;
  UOptimusNodeGraph *this_00;
  UClass *pUVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  undefined8 *puVar9;
  UOptimusNode *this_01;
  FString *pFVar10;
  UClass *pUVar11;
  bool bVar12;
  size_t sVar13;
  ForAnyElementType local_178;
  int local_170;
  int local_16c;
  ForAnyElementType local_168;
  int local_160;
  int local_15c;
  FOptimusNodeGraphAction_DuplicateNode *local_158;
  FString local_150;
  FArchiveState local_138;
  undefined8 local_a8;
  ForAnyElementType *local_a0;
  undefined8 local_98;
  undefined1 local_88 [48];
  code *local_58 [5];
  undefined8 *local_30;
  
  plVar5 = (longlong *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->SourceNodePath);
  local_178.Data = (FScriptContainerElement *)0x0;
  local_170 = 0;
  local_16c = 0;
  if (plVar5 == (longlong *)0x0) {
    if ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_178 != &this->CachedNodeData) {
      local_170 = (this->CachedNodeData).ArrayNum;
      sVar13 = (size_t)local_170;
      _Src = (this->CachedNodeData).AllocatorInstance.Data;
      if (local_170 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,local_170,0,&local_178,local_170,&local_16c);
        memcpy(local_178.Data,_Src,sVar13);
      }
    }
  }
  else {
    local_138._padding_ = 0;
    local_138.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_138.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_138.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_138.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_138._40_8_ = 0;
    local_138.ArSerializingDefaults = 0;
    local_138.ArPortFlags = 0;
    local_138.ArMaxSerializeSize = 0;
    local_138.ArUEVer.FileVersionUE4 = 0;
    local_138.ArUEVer.FileVersionUE5 = 0;
    local_138.ArLicenseeUEVer = 0;
    local_138.ArEngineVer.Major = 0;
    local_138.ArEngineVer.Minor = 0;
    local_138.ArEngineVer.Patch = 0;
    local_138.ArEngineVer._6_2_ = 0;
    local_138.ArEngineVer.Changelist = 0;
    local_138.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_138.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_138.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_138.SerializedProperty = (FProperty *)0x0;
    local_138.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_138.bCustomVersionsAreReset = false;
    local_138._129_7_ = 0;
    local_138.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_138);
    local_a8 = 0;
    local_138._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_a0 = &local_178;
    local_98 = 0;
    FArchiveState::SetIsSaving(&local_138,true);
    (**(code **)(local_138._padding_ + 0x108))(&local_138,0);
    local_138._padding_ = (longlong)&___7FMemoryWriter__6B_;
    (**(code **)(*plVar5 + 800))(plVar5,&local_138);
    FArchive::~FArchive((FArchive *)&local_138);
  }
  iVar2 = local_170;
  FVar4.Data = local_178.Data;
  local_168.Data = (FScriptContainerElement *)0x0;
  local_160 = local_170;
  if (local_170 == 0) {
    local_15c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_170,0,&local_168,local_170,&local_15c);
    memcpy(local_168.Data,FVar4.Data,(longlong)iVar2);
  }
  local_158 = this;
  this_00 = (UOptimusNodeGraph *)(**(code **)((longlong)*param_1 + 0x18))(param_1,&this->GraphPath);
  if ((this_00 != (UOptimusNodeGraph *)0x0) &&
     (pUVar6 = Optimus::FindObjectInPackageOrGlobal<UClass>(&this->NodeClassPath),
     pUVar6 != (UClass *)0x0)) {
    pUVar7 = UOptimusNode_ConstantValueGeneratorClass::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(pUVar6->_padding_ + 0x38) < iVar2) ||
       (pUVar11 = pUVar6,
       (longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar2 * 8)
       != &pUVar7->_padding_)) {
      pUVar11 = (UClass *)0x0;
    }
    if (pUVar11 != (UClass *)0x0) {
      local_88._0_8_ = pUVar11[1]._padding_;
      local_88._8_8_ = pUVar11[1]._padding_;
      FSoftObjectPath::FSoftObjectPath
                ((FSoftObjectPath *)(local_88 + 0x10),(FSoftObjectPath *)&pUVar11[1]._padding_);
      pUVar8 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_00);
      pUVar6 = UOptimusNode_ConstantValueGeneratorClass::GetClassForType
                         (pUVar8,(FOptimusDataTypeRef *)local_88);
    }
    local_58[0] = (code *)0x0;
    puVar9 = FMemory::Malloc(0x20,8);
    FVar4.Data = local_168.Data;
    puVar9[1] = 0;
    *puVar9 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FOptimusNodeGraphAction_DuplicateNode::Do'::`2'::<lambda_1>,0,1>
               ::_vftable_;
    pFVar1 = (ForAnyElementType *)(puVar9 + 1);
    sVar13 = (size_t)local_160;
    *(int *)(puVar9 + 2) = local_160;
    local_30 = puVar9;
    if (local_160 == 0) {
      *(int *)((longlong)puVar9 + 0x14) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_160,0,pFVar1,local_160,(int *)((longlong)puVar9 + 0x14));
      memcpy(pFVar1->Data,FVar4.Data,sVar13);
    }
    puVar9[3] = local_158;
    if (pFVar1 != (ForAnyElementType *)0x0) {
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FOptimusNodeGraphAction_DuplicateNode::Do'::__l2::<lambda_1>,bool,UOptimusNode_*>
                    ::Call;
    }
    this_01 = UOptimusNodeGraph::CreateNodeDirect
                        (this_00,pUVar6,this->NodeName,
                         (TFunction<bool___cdecl(UOptimusNode_*)> *)local_58);
    if (this_01 != (UOptimusNode *)0x0) {
      (**(code **)(this_01->_padding_ + 0xf0))(this_01,0);
      uVar3 = *(undefined4 *)((longlong)&this_01->_padding_ + 4);
      (this->NodeName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&this_01->_padding_;
      (this->NodeName).Number = uVar3;
      pFVar10 = UOptimusNode::GetNodePath(this_01,&local_150);
      ::FString::operator=(&this->NodePath,pFVar10);
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
      bVar12 = true;
      goto LAB_14e10ae9d;
    }
  }
  bVar12 = false;
LAB_14e10ae9d:
  if (local_168.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  return bVar12;
}

// Undo @ 14e10af00

bool __thiscall
FOptimusNodeGraphAction_DuplicateNode::Undo
          (FOptimusNodeGraphAction_DuplicateNode *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  UOptimusNodeGraph *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UOptimusNode *pUVar5;
  UClass *pUVar6;
  
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
        bVar3 = UOptimusNodeGraph::RemoveNodeDirect(this_00,pUVar5,true);
        return bVar3;
      }
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563408832>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x1c0,"Graph");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return false;
}

// <lambda_1> @ 14e14bb50

<lambda_1> * __thiscall
`FOptimusNodeGraphAction_DuplicateNode::Do'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->NodeData).ArrayNum;
  _Src = (param_1->NodeData).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
    memcpy(*(void **)this,_Src,(longlong)iVar1);
  }
  *(FOptimusNodeGraphAction_DuplicateNode **)((longlong)this + 0x10) = param_1->__this;
  return this;
}

// FOptimusNodeGraphAction_DuplicateNode @ 14e1547b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FOptimusNodeGraphAction_DuplicateNode * __thiscall
FOptimusNodeGraphAction_DuplicateNode::FOptimusNodeGraphAction_DuplicateNode
          (FOptimusNodeGraphAction_DuplicateNode *this,FString *param_1,UOptimusNode *param_2,
          FName param_3,TFunction<bool___cdecl(UOptimusNode_*)> *param_4)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FOptimusNodeGraphAction_DuplicateNode *pFVar5;
  FString *pFVar6;
  FString *pFVar7;
  longlong *plVar8;
  undefined1 auStackY_158 [32];
  FString local_120;
  FString local_110;
  FArchiveState local_f8;
  undefined8 local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar1 = &this->NodeClassPath;
  pFVar7 = &this->SourceNodePath;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusNodeGraphAction_DuplicateNode__6B_;
  (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceNodePath).Data.ArrayNum = 0;
  (this->SourceNodePath).Data.ArrayMax = 0;
  (this->GraphPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GraphPath).Data.ArrayNum = 0;
  (this->GraphPath).Data.ArrayMax = 0;
  (this->NodeName).ComparisonIndex = 0;
  (this->NodeName).Number = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodeClassPath).Data.ArrayNum = 0;
  (this->NodeClassPath).Data.ArrayMax = 0;
  *(undefined8 *)&this->ConfigureNodeFunc = 0;
  *(undefined8 *)&(this->ConfigureNodeFunc).field_0x28 = 0;
  (this->CachedNodeData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedNodeData).ArrayNum = 0;
  (this->CachedNodeData).ArrayMax = 0;
  (this->NodePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NodePath).Data.ArrayNum = 0;
  (this->NodePath).Data.ArrayMax = 0;
  if (param_2 == (UOptimusNode *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5689001813563408734>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeGraphActions.cpp"
                       ,0x15e,"InSourceNode != nullptr");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FOptimusNodeGraphAction_DuplicateNode *)(*pcVar3)();
      return pFVar5;
    }
  }
  else {
    pFVar6 = UOptimusNode::GetNodePath(param_2,&local_120);
    if (pFVar7 != pFVar6) {
      pFVar2 = (pFVar7->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar7->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->SourceNodePath).Data.ArrayNum = (pFVar6->Data).ArrayNum;
      (this->SourceNodePath).Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data.AllocatorInstance.Data);
    }
    ::FString::operator=(&this->GraphPath,param_1);
    this->NodeName = param_3;
    pFVar7 = UObjectBaseUtility::GetPathName
                       ((UObjectBaseUtility *)param_2->_padding_,&local_110,(UObject *)0x0);
    if (pFVar1 != pFVar7) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->NodeClassPath).Data.ArrayNum = (pFVar7->Data).ArrayNum;
      (this->NodeClassPath).Data.ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    TFunction<bool___cdecl(UOptimusNode_*)>::operator=(&this->ConfigureNodeFunc,param_4);
    local_f8._padding_ = 0;
    local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_f8._40_8_ = 0;
    local_f8.ArSerializingDefaults = 0;
    local_f8.ArPortFlags = 0;
    local_f8.ArMaxSerializeSize = 0;
    local_f8.ArUEVer.FileVersionUE4 = 0;
    local_f8.ArUEVer.FileVersionUE5 = 0;
    local_f8.ArLicenseeUEVer = 0;
    local_f8.ArEngineVer.Major = 0;
    local_f8.ArEngineVer.Minor = 0;
    local_f8.ArEngineVer.Patch = 0;
    local_f8.ArEngineVer._6_2_ = 0;
    local_f8.ArEngineVer.Changelist = 0;
    local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_f8.SerializedProperty = (FProperty *)0x0;
    local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_f8.bCustomVersionsAreReset = false;
    local_f8._129_7_ = 0;
    local_f8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_f8);
    local_68 = 0;
    local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_60 = &this->CachedNodeData;
    local_58 = 0;
    FArchiveState::SetIsSaving(&local_f8,true);
    (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
    local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
    (**(code **)(param_2->_padding_ + 800))(param_2,&local_f8);
    FArchive::~FArchive((FArchive *)&local_f8);
  }
  if (*(longlong *)param_4 != 0) {
    plVar8 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return this;
}

// ~FOptimusNodeGraphAction_DuplicateNode @ 14e161830

void __thiscall
FOptimusNodeGraphAction_DuplicateNode::~FOptimusNodeGraphAction_DuplicateNode
          (FOptimusNodeGraphAction_DuplicateNode *this)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pFVar1 = (this->NodePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedNodeData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if (*(longlong *)&this->ConfigureNodeFunc != 0) {
    plVar2 = *(longlong **)&(this->ConfigureNodeFunc).field_0x28;
    plVar3 = (longlong *)&(this->ConfigureNodeFunc).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar1 = (this->NodeClassPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GraphPath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SourceNodePath).Data.AllocatorInstance.Data;
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

// operator() @ 14e167100

bool __thiscall
`FOptimusNodeGraphAction_DuplicateNode::Do'::__l2::<lambda_1>::operator()
          (void *this,UOptimusNode *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  UOptimusNode *local_res8;
  FArchiveState local_b8;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
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
  local_20 = this;
  FArchiveState::SetIsLoading(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  (**(code **)(param_1->_padding_ + 0x328))(param_1,&local_b8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  if (*(void **)(lVar1 + 0x50) == (void *)0x0) {
    uVar3 = 1;
  }
  else {
    local_res8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x50));
    pcVar2 = *(code **)(lVar1 + 0x50);
    plVar5 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x78) != (longlong *)0x0) {
      plVar5 = *(longlong **)(lVar1 + 0x78);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    uVar3 = (*pcVar2)(uVar4,&local_res8);
  }
  FArchive::~FArchive((FArchive *)&local_b8);
  return (bool)uVar3;
}

// GetNode @ 14e1cac00

UOptimusNode * __thiscall
FOptimusNodeGraphAction_DuplicateNode::GetNode
          (FOptimusNodeGraphAction_DuplicateNode *this,IOptimusPathResolver *param_1)

{
  UOptimusNode *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e1cac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UOptimusNode *)(**(code **)((longlong)*param_1 + 0x20))(param_1,&this->NodePath);
  return pUVar1;
}

