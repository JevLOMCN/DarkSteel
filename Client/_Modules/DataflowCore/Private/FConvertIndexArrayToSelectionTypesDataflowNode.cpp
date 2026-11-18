// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 12

// StaticStruct @ 1443e6070

UScriptStruct * __cdecl FConvertIndexArrayToSelectionTypesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode,
                           (UObject *)pUVar1,L"ConvertIndexArrayToSelectionTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
         OuterSingleton;
}

// GetType @ 1443e60b0

FName __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::GetType
          (FConvertIndexArrayToSelectionTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FConvertIndexArrayToSelectionTypesDataflowNode");
  return in_RDX;
}

// IsA @ 1443e60e0

bool __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::IsA
          (FConvertIndexArrayToSelectionTypesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FConvertIndexArrayToSelectionTypesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_1443e6148;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_1443e6148:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_1443e6166;
      }
    }
  }
  bVar5 = true;
LAB_1443e6166:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 1443e61a0

FStructOnScope * __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::NewStructOnScope
          (FConvertIndexArrayToSelectionTypesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowCore();
      Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode,
                           (UObject *)pUVar2,L"ConvertIndexArrayToSelectionTypesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 1443e6220

void __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::SerializeInternal
          (FConvertIndexArrayToSelectionTypesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode,
                           (UObject *)pUVar1,L"ConvertIndexArrayToSelectionTypesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001443e629d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 1443e62b0

FName __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::GetDisplayName
          (FConvertIndexArrayToSelectionTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"ConvertIndexArrayToSelection");
  return in_RDX;
}

// GetCategory @ 1443e62e0

FName __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::GetCategory
          (FConvertIndexArrayToSelectionTypesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Convert");
  return in_RDX;
}

// GetTags @ 1443e6310

FString * __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::GetTags
          (FConvertIndexArrayToSelectionTypesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 1443e6340

UScriptStruct * __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::TypedScriptStruct
          (FConvertIndexArrayToSelectionTypesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowCore();
    Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.OuterSingleton
         = GetStaticStruct(Z_Construct_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode,
                           (UObject *)pUVar1,L"ConvertIndexArrayToSelectionTypesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FConvertIndexArrayToSelectionTypesDataflowNode.
         OuterSingleton;
}

// GetRenderParametersImpl @ 1443e6380

/* WARNING: Removing unreachable block (ram,0x0001443e65a8) */
/* WARNING: Removing unreachable block (ram,0x0001443e65b6) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::GetRenderParametersImpl
          (FConvertIndexArrayToSelectionTypesDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  FName *pFVar4;
  FString *pFVar5;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = ::FName::FName(&local_res20,"3DView");
  ::FName::FName(&local_res10,"Collection");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  ::FName::FName(&local_res18,"FGeometryCollection");
  pFVar5 = ::FString::FString(&local_78,"SurfaceRender");
  ::FString::FString(&local_68,pFVar5);
  _Src.Data = local_88.Data;
  local_58 = local_res18;
  lVar8 = (longlong)local_80;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_80);
  if (local_80 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_80,0,&local_50,local_80,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar8 << 3);
  }
  local_40 = *pFVar4;
  pFVar7 = (pFVar5->Data).AllocatorInstance.Data;
  if (pFVar7 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar7);
  }
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar7 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar7 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar6;
  }
  iVar3 = __return_storage_ptr__->ArrayNum;
  if (iVar3 == __return_storage_ptr__->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar3 + 1;
  pFVar7 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x30;
  *(undefined8 *)pFVar7 = 0;
  *(FScriptContainerElement **)pFVar7 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar7 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar7 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar7 + 0x10) = local_58;
  *(undefined8 *)(pFVar7 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar7 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar7 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar7 + 0x28) = local_40;
  local_48 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 1443e65f0

void __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::Evaluate
          (FConvertIndexArrayToSelectionTypesDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FDataflowSelectionTypes *pFVar1;
  FDataflowOutput *pFVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  undefined1 *puVar4;
  FDataflowInput *pFVar5;
  FManagedArrayCollection *pFVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FDataflowNode *local_res8;
  FConvertIndexArrayToSelectionTypesDataflowNode *local_res18 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  FConnectionReference local_58;
  
  pFVar1 = &this->Out;
  pFVar6 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  local_58.Reference = pFVar6;
  if ((FDataflowSelectionTypes *)puVar4 == pFVar1) {
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
    pFVar2 = pFVar5->Connection;
    if (pFVar2 == (FDataflowOutput *)0x0) {
      ::FString::FString((FString *)&local_58,
                         L"Indices cannot be converted to a valid selection without a connected Collection"
                        );
      local_res18[0] = this;
      if ((param_1->DataLock).Ptr == (FWindowsRecursiveMutex *)0x0) {
        bVar3 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                          ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                           &param_1->OnContextHasWarning);
        if (bVar3) {
          TMulticastDelegate<void___cdecl(FDataflowNode_const_*,FDataflowOutput_const_*,FString_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&param_1->OnContextHasWarning,(FDataflowNode *)this,(FDataflowOutput *)0x0,
                      (FString *)&local_58);
        }
        TSet<FDataflowNode_const_*,DefaultKeyFuncs<FDataflowNode_const_*,0>,FDefaultSetAllocator>::
        Emplace<FDataflowNode_const_*_const_&>
                  (&param_1->NodesWithWarning,&local_res8,(bool *)local_res18);
      }
      if (local_58.Reference != (FManagedArrayCollection *)0x0) {
        FMemory::Free(local_58.Reference);
      }
    }
    local_58.Index = -1;
    local_58.ContainerReference = (void *)0x0;
    local_58.Reference = pFVar6;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
    pFVar6 = FDataflowInput::GetValue<FManagedArrayCollection>(pFVar5,param_1,pFVar6);
    if (pFVar2 == (FDataflowOutput *)0x0) {
      local_58.Reference = (FScriptContainerElement *)0x0;
      local_58.Index = 0;
      local_58._12_4_ = 0;
      UE::Private::DataflowConvertNodesLocal::SetMatchingSelection
                ((TArray<int,TSizedDefaultAllocator<32>_> *)&local_58,pFVar6,param_1,param_2,pFVar1,
                 (FDataflowNode *)this);
      FVar8.Data = local_58.Reference;
    }
    else {
      local_58.Index = -1;
      local_58.ContainerReference = (void *)0x0;
      local_58.Reference = &this->In;
      pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_58);
      pTVar7 = FDataflowInput::GetValue<TArray<int,TSizedDefaultAllocator<32>_>_>
                         (pFVar5,param_1,&this->In);
      local_68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.ArrayNum = pTVar7->ArrayNum;
      lVar9 = (longlong)local_68.ArrayNum;
      _Src = (pTVar7->AllocatorInstance).Data;
      if (local_68.ArrayNum == 0) {
        local_68.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_68.ArrayNum,0,&local_68.AllocatorInstance,local_68.ArrayNum,
                   &local_68.ArrayMax);
        memcpy(local_68.AllocatorInstance.Data,_Src,lVar9 << 2);
      }
      UE::Private::DataflowConvertNodesLocal::SetMatchingSelection
                (&local_68,pFVar6,param_1,param_2,pFVar1,(FDataflowNode *)this);
      FVar8.Data = local_68.AllocatorInstance.Data;
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
  else {
    puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((FManagedArrayCollection *)puVar4 == pFVar6) {
      local_58.Index = -1;
      local_58.ContainerReference = (void *)0x0;
      FDataflowNode::SafeForwardInput<FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,&local_58,pFVar6);
      return;
    }
  }
  return;
}

// FConvertIndexArrayToSelectionTypesDataflowNode @ 14442a340

FConvertIndexArrayToSelectionTypesDataflowNode * __thiscall
FConvertIndexArrayToSelectionTypesDataflowNode::FConvertIndexArrayToSelectionTypesDataflowNode
          (FConvertIndexArrayToSelectionTypesDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowSelectionTypes *pFVar1;
  code *pcVar2;
  bool bVar3;
  FDataflowOutput *pFVar4;
  FConvertIndexArrayToSelectionTypesDataflowNode *pFVar5;
  FName local_res8;
  FName local_res18;
  FName local_res20;
  FName local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  FConnectionReference local_b8;
  FConnectionReference local_a0;
  FConnectionReference local_88;
  FConnectionReference local_70;
  FConnectionReference local_58;
  FGuid local_38;
  
  local_38.A = param_2->A;
  local_38.B = param_2->B;
  local_38.C = param_2->C;
  local_38.D = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,&local_38);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FConvertIndexArrayToSelectionTypesDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->Out;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (pFVar1->Value).GroupName.ComparisonIndex = 0;
  (pFVar1->Value).GroupName.Number = 0;
  (this->In).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->In).ArrayNum = 0;
  (this->In).ArrayMax = 0;
  (this->Out).Value.SelectionArray.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->Out).Value.SelectionArray.NumBits = 0;
  (this->Out).Value.SelectionArray.MaxBits = 0x80;
  local_b8.Index = -1;
  local_b8.ContainerReference = (void *)0x0;
  local_b8.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_b8,&local_res8);
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  local_a0.Index = -1;
  local_a0.ContainerReference = (void *)0x0;
  local_a0.Reference = &this->In;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_a0,&local_res18);
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  local_70.Index = -1;
  local_70.ContainerReference = (void *)0x0;
  local_88.Index = -1;
  local_88.ContainerReference = (void *)0x0;
  local_88.Reference = this_00;
  local_70.Reference = this_00;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_88,&local_res20);
  if (this_00 != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_70);
  }
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_c0 = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_58.Reference = pFVar1;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_58,&local_d8);
  if (pFVar4->_padding_ == 0) {
    pFVar4->_padding_ =
         (longlong)
         &`public:_static_struct_IDataflowTypePolicy*___ptr64___cdecl_TDataflowMultiTypePolicy<FDataflowTransformSelection,FDataflowVertexSelection,FDataflowFaceSelection,FDataflowGeometrySelection,FDataflowMaterialSelection,FDataflowCurveSelection>::GetInterface(void)'
          ::__l2::Instance;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1810835547174732029>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Dataflow\\Core\\Private\\Dataflow\\DataflowConnection.cpp"
                       ,0xfd,"TypePolicy == nullptr");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FConvertIndexArrayToSelectionTypesDataflowNode *)(*pcVar2)();
      return pFVar5;
    }
  }
  return this;
}

