// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e890090

UScriptStruct * __cdecl FBoundingSphereDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoundingSphereDataflowNode,(UObject *)pUVar1,
                         L"BoundingSphereDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton;
}

// GetType @ 14e8906f0

FName __thiscall FBoundingSphereDataflowNode::GetType(FBoundingSphereDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBoundingSphereDataflowNode");
  return in_RDX;
}

// IsA @ 14e890720

bool __thiscall FBoundingSphereDataflowNode::IsA(FBoundingSphereDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBoundingSphereDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e890788;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e890788:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8907a6;
      }
    }
  }
  bVar5 = true;
LAB_14e8907a6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e8907e0

FStructOnScope * __thiscall
FBoundingSphereDataflowNode::NewStructOnScope(FBoundingSphereDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBoundingSphereDataflowNode,(UObject *)pUVar2,
                           L"BoundingSphereDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e890870

void __thiscall
FBoundingSphereDataflowNode::SerializeInternal(FBoundingSphereDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoundingSphereDataflowNode,(UObject *)pUVar1,
                         L"BoundingSphereDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton
             ,param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton
             ,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8908ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e890900

FName __thiscall FBoundingSphereDataflowNode::GetDisplayName(FBoundingSphereDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BoundingSphere");
  return in_RDX;
}

// GetCategory @ 14e890930

FName __thiscall FBoundingSphereDataflowNode::GetCategory(FBoundingSphereDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Sphere");
  return in_RDX;
}

// GetTags @ 14e890960

FString * __thiscall
FBoundingSphereDataflowNode::GetTags
          (FBoundingSphereDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e890990

UScriptStruct * __thiscall
FBoundingSphereDataflowNode::TypedScriptStruct(FBoundingSphereDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoundingSphereDataflowNode,(UObject *)pUVar1,
                         L"BoundingSphereDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoundingSphereDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e890ab0

/* WARNING: Removing unreachable block (ram,0x00014e890cd7) */
/* WARNING: Removing unreachable block (ram,0x00014e890ce5) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FBoundingSphereDataflowNode::GetRenderParametersImpl
          (FBoundingSphereDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  FName *pFVar5;
  FName *pFVar6;
  FString *pFVar7;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
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
  pFVar5 = ::FName::FName(&local_res18,"3DView");
  ::FName::FName(&local_res10,"BoundingSphere");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"FSphere");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"SurfaceRender");
  ::FString::FString(&local_68,pFVar7);
  _Src.Data = local_88.Data;
  lVar10 = (longlong)local_80;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_80);
  local_58 = FVar1;
  if (local_80 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_80,0,&local_50,local_80,(int *)((longlong)&local_48 + 4));
    memcpy(local_50.Data,_Src.Data,lVar10 << 3);
  }
  local_40 = *pFVar5;
  pFVar9 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar9 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar9);
  }
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)&local_68) &&
      ((FScriptContainerElement *)&local_68 <
       pFVar9 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  iVar4 = __return_storage_ptr__->ArrayNum;
  if (iVar4 == __return_storage_ptr__->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar4 + 1;
  pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 0x30;
  *(undefined8 *)pFVar9 = 0;
  *(FScriptContainerElement **)pFVar9 = local_68.Data.AllocatorInstance.Data;
  *(int *)(pFVar9 + 8) = local_68.Data.ArrayNum;
  *(int *)(pFVar9 + 0xc) = local_68.Data.ArrayMax;
  *(FName *)(pFVar9 + 0x10) = local_58;
  *(undefined8 *)(pFVar9 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar9 + 0x18) = local_50.Data;
  *(undefined4 *)(pFVar9 + 0x20) = (undefined4)local_48;
  *(undefined4 *)(pFVar9 + 0x24) = local_48._4_4_;
  *(FName *)(pFVar9 + 0x28) = local_40;
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

// Evaluate @ 14e890de0

void __thiscall
FBoundingSphereDataflowNode::Evaluate
          (FBoundingSphereDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  TSphere<double> *pTVar1;
  FProperty *pFVar2;
  uint uVar3;
  undefined1 *puVar4;
  FDataflowInput *pFVar5;
  FManagedArrayCollection *pFVar6;
  FDataflowOutput *this_00;
  FTimestamp FVar7;
  FGuid *pFVar8;
  ulong64 uVar9;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_1d8;
  undefined8 uStack_1c0;
  FConnectionReference local_1b8;
  TSphere<double> local_1a0;
  FBoundsFacade local_178;
  
  pTVar1 = &this->BoundingSphere;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TSphere<double> *)puVar4 == pTVar1) {
    local_1b8.Index = -1;
    local_1b8.ContainerReference = (void *)0x0;
    local_1b8.Reference = &this->Collection;
    pFVar5 = FDataflowNode::FindInput((FDataflowNode *)this,&local_1b8);
    if (pFVar5->Connection == (FDataflowOutput *)0x0) {
      local_1d8._s_0.X = 0.0;
      local_1d8._s_0.Y = 0.0;
      local_1d8._s_0.Z = 0.0;
      uStack_1c0 = 0;
      FDataflowNode::SetValue<UE::Math::TSphere<double>,UE::Math::TSphere<double>_>
                ((FDataflowNode *)this,param_1,(TSphere<double> *)&local_1d8._s_0,pTVar1);
    }
    else {
      pFVar6 = FDataflowNode::GetValue<FManagedArrayCollection>
                         ((FDataflowNode *)this,param_1,&this->Collection);
      GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_178,pFVar6);
      GeometryCollection::Facades::FBoundsFacade::GetBoundingSphereInCollectionSpace
                (&local_178,&local_1a0);
      local_1d8._8_4_ = 0xffffffff;
      local_1d8._s_0.Z = 0.0;
      local_1d8._s_0.X = (double)pTVar1;
      this_00 = FDataflowNode::FindOutput
                          ((FDataflowNode *)this,(FConnectionReference *)&local_1d8._s_0);
      if (this_00 == (FDataflowOutput *)0x0) {
        `FDataflowNode::SetValue<UE::Math::TSphere<double>_const_&,UE::Math::TSphere<double>_>'::
        __l7::<lambda_1>::operator()(local_res8);
      }
      else if (this_00->_padding_ != 0) {
        FVar7 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
        uVar3 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
        pFVar8 = FDataflowConnection::GetOwningNodeGuid
                           ((FDataflowConnection *)this_00,(FGuid *)&local_1b8);
        pFVar2 = (FProperty *)this_00->_padding_;
        uVar9 = CityHash64((char *)&this_00->_padding_,0x10);
        UE::Dataflow::FContext::SetData<UE::Math::TSphere<double>_const_&>
                  (param_1,(uint)uVar9,pFVar2,&local_1a0,pFVar8,uVar3,(FTimestamp *)FVar7.Value);
      }
    }
  }
  return;
}

// FBoundingSphereDataflowNode @ 14e912530

FBoundingSphereDataflowNode * __thiscall
FBoundingSphereDataflowNode::FBoundingSphereDataflowNode
          (FBoundingSphereDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *this_00;
  FName local_res8;
  FConnectionReference local_48;
  FConnectionReference local_28;
  
  local_48.Reference = *(void **)param_2;
  local_48.Index = param_2->C;
  local_48._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_48);
  this->_padding_ = (longlong)&___7FBoundingSphereDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->BoundingSphere).Center.field0_0x0._s_0.X = 0.0;
  (this->BoundingSphere).Center.field0_0x0._s_0.Y = 0.0;
  (this->BoundingSphere).Center.field0_0x0._s_0.Z = 0.0;
  (this->BoundingSphere).W = 0.0;
  local_48.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_48,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_48.Reference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_28.Index = -1;
  local_28.ContainerReference = (void *)0x0;
  local_28.Reference = &this->BoundingSphere;
  this_00 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_28,&local_res8);
  if (local_48.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_00,&local_48);
  }
  return this;
}

