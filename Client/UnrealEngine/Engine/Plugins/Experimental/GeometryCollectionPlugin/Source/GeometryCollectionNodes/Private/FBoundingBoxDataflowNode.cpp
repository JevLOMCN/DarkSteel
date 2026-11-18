// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e88e840

UScriptStruct * __cdecl FBoundingBoxDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoundingBoxDataflowNode,(UObject *)pUVar1,
                         L"BoundingBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton;
}

// GetType @ 14e88e960

FName __thiscall FBoundingBoxDataflowNode::GetType(FBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FBoundingBoxDataflowNode");
  return in_RDX;
}

// IsA @ 14e88e990

bool __thiscall FBoundingBoxDataflowNode::IsA(FBoundingBoxDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FBoundingBoxDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e88e9f8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e88e9f8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e88ea16;
      }
    }
  }
  bVar5 = true;
LAB_14e88ea16:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e88ea50

FStructOnScope * __thiscall
FBoundingBoxDataflowNode::NewStructOnScope(FBoundingBoxDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FBoundingBoxDataflowNode,(UObject *)pUVar2,
                           L"BoundingBoxDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e88ead0

void __thiscall
FBoundingBoxDataflowNode::SerializeInternal(FBoundingBoxDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoundingBoxDataflowNode,(UObject *)pUVar1,
                         L"BoundingBoxDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e88eb4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e88eb60

FName __thiscall FBoundingBoxDataflowNode::GetDisplayName(FBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GetCollectionBoundingBox");
  return in_RDX;
}

// GetCategory @ 14e88ec40

FName __thiscall FBoundingBoxDataflowNode::GetCategory(FBoundingBoxDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Utilities|Box");
  return in_RDX;
}

// GetTags @ 14e88ed80

FString * __thiscall
FBoundingBoxDataflowNode::GetTags(FBoundingBoxDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"Collection Bounds Size Dimensions Extents Center");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e88edf0

UScriptStruct * __thiscall
FBoundingBoxDataflowNode::TypedScriptStruct(FBoundingBoxDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoundingBoxDataflowNode,(UObject *)pUVar1,
                         L"BoundingBoxDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FBoundingBoxDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e88ee30

/* WARNING: Removing unreachable block (ram,0x00014e88f057) */
/* WARNING: Removing unreachable block (ram,0x00014e88f065) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FBoundingBoxDataflowNode::GetRenderParametersImpl
          (FBoundingBoxDataflowNode *this,
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
  ::FName::FName(&local_res10,"BoundingBox");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"FBox");
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

// Evaluate @ 14e88f0b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBoundingBoxDataflowNode::Evaluate
          (FBoundingBoxDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FProperty *pFVar1;
  uint uVar2;
  undefined1 *puVar3;
  FManagedArrayCollection *pFVar4;
  FDataflowOutput *this_00;
  FTimestamp FVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  undefined1 auStackY_258 [32];
  undefined1 local_218 [8];
  TVector<double>_u_0 local_210;
  FGuid local_1f0;
  FBoundsFacade local_1d8;
  TVector<double>_u_0 local_78;
  double local_60;
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_258;
  puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((((TBox<double> *)puVar3 != &this->BoundingBox) &&
      (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TVector<double> *)puVar3 != &this->Center)) &&
     (puVar3 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (TVector<double> *)puVar3 != &this->Dimensions)) {
    return;
  }
  pFVar4 = FDataflowNode::GetValue<FManagedArrayCollection>
                     ((FDataflowNode *)this,param_1,&this->Collection);
  GeometryCollection::Facades::FBoundsFacade::FBoundsFacade(&local_1d8,pFVar4);
  GeometryCollection::Facades::FBoundsFacade::GetBoundingBoxInCollectionSpace
            (&local_1d8,(TBox<double> *)&local_78._s_0);
  local_210._8_4_ = 0xffffffff;
  local_210._s_0.Z = 0.0;
  local_210._s_0.X = (double)&this->BoundingBox;
  this_00 = FDataflowNode::FindOutput((FDataflowNode *)this,(FConnectionReference *)&local_210._s_0)
  ;
  if (this_00 == (FDataflowOutput *)0x0) {
    `FDataflowNode::SetValue<UE::Math::TBox<double>_const_&,UE::Math::TBox<double>_>'::__l7::
    <lambda_1>::operator()(local_218);
  }
  else if (this_00->_padding_ != 0) {
    FVar5 = FDataflowConnection::GetOwningNodeTimestamp((FDataflowConnection *)this_00);
    uVar2 = FDataflowConnection::GetOwningNodeValueHash((FDataflowConnection *)this_00);
    pFVar6 = FDataflowConnection::GetOwningNodeGuid((FDataflowConnection *)this_00,&local_1f0);
    pFVar1 = (FProperty *)this_00->_padding_;
    uVar7 = CityHash64((char *)&this_00->_padding_,0x10);
    UE::Dataflow::FContext::SetData<UE::Math::TBox<double>_const_&>
              (param_1,(uint)uVar7,pFVar1,(TBox<double> *)&local_78._s_0,pFVar6,uVar2,
               (FTimestamp *)FVar5.Value);
  }
  local_210._s_0.X = (local_78._s_0.X + local_60) * __real_3fe0000000000000;
  local_210._s_0.Z = (local_78._s_0.Z + local_50) * __real_3fe0000000000000;
  local_210._s_0.Y = (local_78._s_0.Y + local_58) * __real_3fe0000000000000;
  FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
            ((FDataflowNode *)this,param_1,(TVector<double> *)&local_210._s_0,&this->Center);
  local_210._s_0.X = local_60 - local_78._s_0.X;
  local_210._s_0.Y = local_58 - local_78._s_0.Y;
  local_210._s_0.Z = local_50 - local_78._s_0.Z;
  FDataflowNode::SetValue<UE::Math::TVector<double>,UE::Math::TVector<double>_>
            ((FDataflowNode *)this,param_1,(TVector<double> *)&local_210._s_0,&this->Dimensions);
  return;
}

// FBoundingBoxDataflowNode @ 14e9122a0

FBoundingBoxDataflowNode * __thiscall
FBoundingBoxDataflowNode::FBoundingBoxDataflowNode
          (FBoundingBoxDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  undefined8 uVar1;
  FDataflowOutput *pFVar2;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FBoundingBoxDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_68.Index = -1;
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.ContainerReference = (void *)0x0;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Dimensions).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Dimensions).field0_0x0._s_0.Y = (double)uVar1;
  (this->Dimensions).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_68.Reference = &this->Collection;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->BoundingBox;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Center;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Dimensions;
  pFVar2 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar2,&local_68);
  }
  return this;
}

// FBoundingBoxDataflowNode @ 14e912470

FBoundingBoxDataflowNode * __thiscall
FBoundingBoxDataflowNode::FBoundingBoxDataflowNode(FBoundingBoxDataflowNode *this)

{
  undefined8 uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FBoundingBoxDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->BoundingBox).Min.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Min.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.X = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Y = 0.0;
  (this->BoundingBox).Max.field0_0x0._s_0.Z = 0.0;
  (this->BoundingBox).IsValid = '\0';
  (this->BoundingBox).Pad[0] = '\0';
  (this->BoundingBox).Pad[1] = '\0';
  (this->BoundingBox).Pad[2] = '\0';
  (this->BoundingBox).Pad[3] = '\0';
  (this->BoundingBox).Pad[4] = '\0';
  (this->BoundingBox).Pad[5] = '\0';
  (this->BoundingBox).Pad[6] = '\0';
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Center).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Center).field0_0x0._s_0.Y = (double)uVar1;
  (this->Center).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Dimensions).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Dimensions).field0_0x0._s_0.Y = (double)uVar1;
  (this->Dimensions).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

