// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 13

// StaticStruct @ 1462ebde0

UScriptStruct * __cdecl FFilterSimulationProxiesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode,
                         (UObject *)pUVar1,L"FilterSimulationProxiesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton;
}

// GetType @ 1462ebe20

FName __thiscall
FFilterSimulationProxiesDataflowNode::GetType(FFilterSimulationProxiesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FFilterSimulationProxiesDataflowNode");
  return in_RDX;
}

// IsA @ 1462ebe50

bool __thiscall
FFilterSimulationProxiesDataflowNode::IsA(FFilterSimulationProxiesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FFilterSimulationProxiesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462ebeb8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462ebeb8:
    if (!bVar5) {
      bVar5 = FDataflowSimulationNode::IsA((FDataflowSimulationNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462ebed6;
      }
    }
  }
  bVar5 = true;
LAB_1462ebed6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462ebf10

FStructOnScope * __thiscall
FFilterSimulationProxiesDataflowNode::NewStructOnScope(FFilterSimulationProxiesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowSimulation();
      Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode,
                           (UObject *)pUVar2,L"FilterSimulationProxiesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462ebf90

void __thiscall
FFilterSimulationProxiesDataflowNode::SerializeInternal
          (FFilterSimulationProxiesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode,
                         (UObject *)pUVar1,L"FilterSimulationProxiesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462ec00d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462ec020

FName __thiscall
FFilterSimulationProxiesDataflowNode::GetDisplayName(FFilterSimulationProxiesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FilterSimulationProxies");
  return in_RDX;
}

// GetCategory @ 1462ec050

FName __thiscall
FFilterSimulationProxiesDataflowNode::GetCategory(FFilterSimulationProxiesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Physics|Proxy");
  return in_RDX;
}

// GetTags @ 1462ec080

FString * __thiscall
FFilterSimulationProxiesDataflowNode::GetTags
          (FFilterSimulationProxiesDataflowNode *this,FString *__return_storage_ptr__)

{
  StaticTags(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462ec0a0

UScriptStruct * __thiscall
FFilterSimulationProxiesDataflowNode::TypedScriptStruct(FFilterSimulationProxiesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilterSimulationProxiesDataflowNode,
                         (UObject *)pUVar1,L"FilterSimulationProxiesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FFilterSimulationProxiesDataflowNode.OuterSingleton;
}

// EvaluateSimulation @ 1462ec0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FFilterSimulationProxiesDataflowNode::EvaluateSimulation
          (FFilterSimulationProxiesDataflowNode *this,
          TSimulationContext<UE::Dataflow::FContextSingle> *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *pTVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  undefined1 auStackY_d8 [32];
  undefined1 local_88 [8];
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> local_80;
  ForAnyElementType local_70;
  int local_68;
  int local_64;
  undefined8 local_60;
  TBitArray<FDefaultBitArrayAllocator> local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pTVar6 = FDataflowNode::GetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
                     ((FDataflowNode *)this,(FContext *)param_1,&this->SimulationProxies);
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = pTVar6->ArrayNum;
  lVar7 = (longlong)local_68;
  pFVar1 = (pTVar6->AllocatorInstance).Data;
  if (local_68 == 0) {
    local_64 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_68,0,&local_70,local_68,&local_64);
    memcpy(local_70.Data,pFVar1,lVar7 << 3);
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  if (local_68 != 0) {
    local_58.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_58.NumBits = 0;
    local_58.MaxBits = 0x80;
    UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::BuildGroupBits
              (param_1,&this->SimulationGroups,&local_58);
    iVar3 = local_68;
    pFVar1 = local_70.Data + (longlong)local_68 * 8;
    FVar8.Data = local_70.Data;
    while( true ) {
      if (local_68 != iVar3) {
        local_88[0] = 0;
        `TCheckedPointerIterator<FDataflowSimulationProperty_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_88);
      }
      if (FVar8.Data == pFVar1) break;
      if ((*(FDataflowSimulationProxy **)FVar8.Data != (FDataflowSimulationProxy *)0x0) &&
         (bVar4 = FDataflowSimulationProxy::HasGroupBit
                            (*(FDataflowSimulationProxy **)FVar8.Data,&local_58), bVar4)) {
        local_60 = *(undefined8 *)FVar8.Data;
        if ((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_60) &&
           (((FScriptContainerElement *)&local_60 <
             local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 8 &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)))) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = local_80.ArrayNum;
        if (local_80.ArrayNum == local_80.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_80.AllocatorInstance,&local_80.ArrayMax);
        }
        local_80.ArrayNum = iVar5 + 1;
        *(undefined8 *)(local_80.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_60;
      }
      FVar8.Data = FVar8.Data + 8;
    }
    if (local_58.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_58.AllocatorInstance.SecondaryData);
    }
  }
  FDataflowNode::
  SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,(FContext *)param_1,&local_80,&this->FilteredProxies);
  if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.AllocatorInstance.Data);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// FFilterSimulationProxiesDataflowNode @ 1462f22c0

FFilterSimulationProxiesDataflowNode * __thiscall
FFilterSimulationProxiesDataflowNode::FFilterSimulationProxiesDataflowNode
          (FFilterSimulationProxiesDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  local_48.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  this->_padding_ = (longlong)&___7FFilterSimulationProxiesDataflowNode__6B_;
  local_48.Reference = &this->SimulationProxies;
  (this->FilteredProxies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (((TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> *)local_48.Reference)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->SimulationProxies).ArrayNum = 0;
  (this->SimulationProxies).ArrayMax = 0;
  (this->FilteredProxies).ArrayNum = 0;
  (this->FilteredProxies).ArrayMax = 0;
  (this->SimulationGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationGroups).ArrayNum = 0;
  (this->SimulationGroups).ArrayMax = 0;
  local_48.ContainerReference = (void *)0x0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->FilteredProxies;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

// ~FFilterSimulationProxiesDataflowNode @ 1462f2e40

void __thiscall
FFilterSimulationProxiesDataflowNode::~FFilterSimulationProxiesDataflowNode
          (FFilterSimulationProxiesDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FString,int>
            ((FString *)(this->SimulationGroups).AllocatorInstance.Data,
             (this->SimulationGroups).ArrayNum);
  pFVar1 = (this->SimulationGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FilteredProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimulationProxies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FDataflowSimulationNode__6B_;
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

// StaticTags @ 1462fdfd0

FString * __cdecl FFilterSimulationProxiesDataflowNode::StaticTags(FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType _Src;
  int iVar2;
  longlong lVar3;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar2 = UDataflow::SimulationTag.Data.ArrayNum;
  _Src = UDataflow::SimulationTag.Data.AllocatorInstance;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  lVar3 = (longlong)UDataflow::SimulationTag.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = UDataflow::SimulationTag.Data.ArrayNum;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src.Data,lVar3 * 2);
  return __return_storage_ptr__;
}

