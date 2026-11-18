// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e895680

UScriptStruct * __cdecl FExpandBoundingSphereDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExpandBoundingSphereDataflowNode,
                         (UObject *)pUVar1,L"ExpandBoundingSphereDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton;
}

// GetType @ 14e895710

FName __thiscall FExpandBoundingSphereDataflowNode::GetType(FExpandBoundingSphereDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FExpandBoundingSphereDataflowNode");
  return in_RDX;
}

// IsA @ 14e895950

bool __thiscall
FExpandBoundingSphereDataflowNode::IsA(FExpandBoundingSphereDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FExpandBoundingSphereDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8959b8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8959b8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8959d6;
      }
    }
  }
  bVar5 = true;
LAB_14e8959d6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e895a50

FStructOnScope * __thiscall
FExpandBoundingSphereDataflowNode::NewStructOnScope(FExpandBoundingSphereDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FExpandBoundingSphereDataflowNode,
                           (UObject *)pUVar2,L"ExpandBoundingSphereDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e895b00

void __thiscall
FExpandBoundingSphereDataflowNode::SerializeInternal
          (FExpandBoundingSphereDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExpandBoundingSphereDataflowNode,
                         (UObject *)pUVar1,L"ExpandBoundingSphereDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e895b7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e895b90

FName __thiscall
FExpandBoundingSphereDataflowNode::GetDisplayName(FExpandBoundingSphereDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"BreakBoundingSphere");
  return in_RDX;
}

// GetCategory @ 14e895bc0

FName __thiscall
FExpandBoundingSphereDataflowNode::GetCategory(FExpandBoundingSphereDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Sphere");
  return in_RDX;
}

// GetTags @ 14e895bf0

FString * __thiscall
FExpandBoundingSphereDataflowNode::GetTags
          (FExpandBoundingSphereDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Expand Radius Center Volume");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e895c60

UScriptStruct * __thiscall
FExpandBoundingSphereDataflowNode::TypedScriptStruct(FExpandBoundingSphereDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FExpandBoundingSphereDataflowNode,
                         (UObject *)pUVar1,L"ExpandBoundingSphereDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FExpandBoundingSphereDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e895ca0

/* WARNING: Removing unreachable block (ram,0x00014e895ec7) */
/* WARNING: Removing unreachable block (ram,0x00014e895ed5) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FExpandBoundingSphereDataflowNode::GetRenderParametersImpl
          (FExpandBoundingSphereDataflowNode *this,
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
  ::FName::FName(&local_res10,"Center");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"FVector");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"PointRender");
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

// Evaluate @ 14e895fb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FExpandBoundingSphereDataflowNode::Evaluate
          (FExpandBoundingSphereDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  double dVar1;
  TSphere<double> *pTVar2;
  undefined1 *puVar3;
  float *pfVar4;
  float local_res8 [2];
  TVector<double>_u_0 local_38;
  double dStack_20;
  
  pTVar2 = FDataflowNode::GetValue<UE::Math::TSphere<double>_>
                     ((FDataflowNode *)this,param_1,&this->BoundingSphere);
  local_38._0_4_ = *(undefined4 *)&(pTVar2->Center).field0_0x0;
  local_38._4_4_ = *(undefined4 *)((longlong)&(pTVar2->Center).field0_0x0 + 4);
  local_38._8_4_ = *(undefined4 *)((longlong)&(pTVar2->Center).field0_0x0 + 8);
  local_38._12_4_ = *(undefined4 *)((longlong)&(pTVar2->Center).field0_0x0 + 0xc);
  local_38._s_0.Z = (pTVar2->Center).field0_0x0._s_0.Z;
  dVar1 = pTVar2->W;
  dStack_20 = dVar1;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((TVector<double> *)puVar3 == &this->Center) {
    FDataflowNode::SetValue<UE::Math::TVector<double>_&,UE::Math::TVector<double>_>
              ((FDataflowNode *)this,param_1,(TVector<double> *)&local_38._s_0,&this->Center);
  }
  else {
    pfVar4 = &this->Radius;
    puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((float *)puVar3 != pfVar4) {
      pfVar4 = &this->Volume;
      puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
      if ((float *)puVar3 != pfVar4) {
        return;
      }
      dVar1 = dVar1 * dVar1 * dVar1 * ___real_4010c15240000000;
    }
    local_res8[0] = (float)dVar1;
    FDataflowNode::SetValue<float,float>((FDataflowNode *)this,param_1,local_res8,pfVar4);
  }
  return;
}

// FExpandBoundingSphereDataflowNode @ 14e91c4b0

FExpandBoundingSphereDataflowNode * __thiscall
FExpandBoundingSphereDataflowNode::FExpandBoundingSphereDataflowNode
          (FExpandBoundingSphereDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  local_58.Index = -1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  this->_padding_ = (longlong)&___7FExpandBoundingSphereDataflowNode__6B_;
  local_58.Reference = &this->BoundingSphere;
  (this->Center).field0_0x0._s_0.X = 0.0;
  (((TSphere<double> *)local_58.Reference)->Center).field0_0x0._s_0.X = 0.0;
  (this->BoundingSphere).Center.field0_0x0._s_0.Y = 0.0;
  (this->BoundingSphere).Center.field0_0x0._s_0.Z = 0.0;
  (this->BoundingSphere).W = 0.0;
  (this->Center).field0_0x0._s_0.Y = 0.0;
  (this->Center).field0_0x0._s_0.Z = 0.0;
  this->Radius = 0.0;
  this->Volume = 0.0;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Center;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Radius;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->Volume;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

