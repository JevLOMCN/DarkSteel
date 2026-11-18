// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 11

// StaticStruct @ 1462eb090

UScriptStruct * __cdecl FGetPhysicsSolversDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode,(UObject *)pUVar1,
                         L"GetPhysicsSolversDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton;
}

// GetType @ 1462eb110

FName __thiscall FGetPhysicsSolversDataflowNode::GetType(FGetPhysicsSolversDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FGetPhysicsSolversDataflowNode");
  return in_RDX;
}

// IsA @ 1462eb140

bool __thiscall
FGetPhysicsSolversDataflowNode::IsA(FGetPhysicsSolversDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FGetPhysicsSolversDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1462eb1a8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1462eb1a8:
    if (!bVar5) {
      bVar5 = FDataflowInvalidNode::IsA((FDataflowInvalidNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1462eb1c6;
      }
    }
  }
  bVar5 = true;
LAB_1462eb1c6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1462eb200

FStructOnScope * __thiscall
FGetPhysicsSolversDataflowNode::NewStructOnScope(FGetPhysicsSolversDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowSimulation();
      Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode,
                           (UObject *)pUVar2,L"GetPhysicsSolversDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1462eb280

void __thiscall
FGetPhysicsSolversDataflowNode::SerializeInternal
          (FGetPhysicsSolversDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode,(UObject *)pUVar1,
                         L"GetPhysicsSolversDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton,param_1
             ,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001462eb2fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1462eb310

FName __thiscall
FGetPhysicsSolversDataflowNode::GetDisplayName(FGetPhysicsSolversDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetPhysicsSolvers");
  return in_RDX;
}

// GetCategory @ 1462eb340

FName __thiscall FGetPhysicsSolversDataflowNode::GetCategory(FGetPhysicsSolversDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Physics|Solver");
  return in_RDX;
}

// GetTags @ 1462eb370

FString * __thiscall
FGetPhysicsSolversDataflowNode::GetTags
          (FGetPhysicsSolversDataflowNode *this,FString *__return_storage_ptr__)

{
  StaticTags(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1462eb390

UScriptStruct * __thiscall
FGetPhysicsSolversDataflowNode::TypedScriptStruct(FGetPhysicsSolversDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGetPhysicsSolversDataflowNode,(UObject *)pUVar1,
                         L"GetPhysicsSolversDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FGetPhysicsSolversDataflowNode.OuterSingleton;
}

// EvaluateSimulation @ 1462eb5e0

void __thiscall
FGetPhysicsSolversDataflowNode::EvaluateSimulation
          (FGetPhysicsSolversDataflowNode *this,
          TSimulationContext<UE::Dataflow::FContextSingle> *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 local_res8 [8];
  FName local_res20;
  undefined8 local_68;
  TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_> local_60;
  TArray<FDataflowSimulationProxy_*,TSizedDefaultAllocator<32>_> local_50;
  FString local_40;
  
  iVar7 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowPhysicsSolverProxy,(UObject *)pUVar6,
                         L"DataflowPhysicsSolverProxy");
  }
  local_res20 = (FName)(Z_Registration_Info_UScriptStruct_FDataflowPhysicsSolverProxy.OuterSingleton
                       )->_padding_;
  ::FName::ToString(&local_res20,&local_40);
  UE::Dataflow::TSimulationContext<UE::Dataflow::FContextSingle>::GetSimulationProxies
            (param_1,&local_40,&this->SimulationGroups,&local_50);
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  iVar3 = local_50.ArrayNum;
  uVar8 = (ulonglong)local_50.ArrayNum;
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  pFVar1 = local_50.AllocatorInstance.Data + uVar8 * 8;
  FVar9.Data = local_50.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FDataflowSimulationProxy_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      iVar7 = local_60.ArrayNum;
    }
    if (FVar9.Data == pFVar1) break;
    local_68 = *(undefined8 *)FVar9.Data;
    iVar5 = iVar7;
    if ((local_60.AllocatorInstance.Data <= (FScriptContainerElement *)&local_68) &&
       ((FScriptContainerElement *)&local_68 <
        local_60.AllocatorInstance.Data + (longlong)local_60.ArrayMax * 8)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = local_60.ArrayNum;
    }
    if (iVar5 == local_60.ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_60.AllocatorInstance,&local_60.ArrayMax);
    }
    iVar7 = iVar5 + 1;
    local_60.ArrayNum = iVar7;
    FVar9.Data = FVar9.Data + 8;
    *(undefined8 *)(local_60.AllocatorInstance.Data + (longlong)iVar5 * 8) = local_68;
    uVar8 = local_50._8_8_ & 0xffffffff;
  }
  FDataflowNode::
  SetValue<TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_&,TArray<FDataflowSimulationProperty,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,(FContext *)param_1,&local_60,&this->PhysicsSolvers);
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// StaticTags @ 1462fe060

FString * __cdecl FGetPhysicsSolversDataflowNode::StaticTags(FString *__return_storage_ptr__)

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

