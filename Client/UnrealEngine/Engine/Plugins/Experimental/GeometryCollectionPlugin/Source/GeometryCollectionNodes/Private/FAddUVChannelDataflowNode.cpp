// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e854080

UScriptStruct * __cdecl FAddUVChannelDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddUVChannelDataflowNode,(UObject *)pUVar1,
                         L"AddUVChannelDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton;
}

// GetType @ 14e854b40

FName __thiscall FAddUVChannelDataflowNode::GetType(FAddUVChannelDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAddUVChannelDataflowNode");
  return in_RDX;
}

// IsA @ 14e854cb0

bool __thiscall FAddUVChannelDataflowNode::IsA(FAddUVChannelDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAddUVChannelDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e854d18;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e854d18:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e854d36;
      }
    }
  }
  bVar5 = true;
LAB_14e854d36:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e854d70

FStructOnScope * __thiscall
FAddUVChannelDataflowNode::NewStructOnScope(FAddUVChannelDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAddUVChannelDataflowNode,(UObject *)pUVar2,
                           L"AddUVChannelDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e854f80

void __thiscall
FAddUVChannelDataflowNode::SerializeInternal(FAddUVChannelDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddUVChannelDataflowNode,(UObject *)pUVar1,
                         L"AddUVChannelDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e854ffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e855040

FName __thiscall FAddUVChannelDataflowNode::GetDisplayName(FAddUVChannelDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AddUVChannel");
  return in_RDX;
}

// GetCategory @ 14e8550a0

FName __thiscall FAddUVChannelDataflowNode::GetCategory(FAddUVChannelDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|UV");
  return in_RDX;
}

// GetTags @ 14e855110

FString * __thiscall
FAddUVChannelDataflowNode::GetTags(FAddUVChannelDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e855140

UScriptStruct * __thiscall
FAddUVChannelDataflowNode::TypedScriptStruct(FAddUVChannelDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddUVChannelDataflowNode,(UObject *)pUVar1,
                         L"AddUVChannelDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddUVChannelDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e855200

/* WARNING: Removing unreachable block (ram,0x00014e855438) */
/* WARNING: Removing unreachable block (ram,0x00014e855446) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FAddUVChannelDataflowNode::GetRenderParametersImpl
          (FAddUVChannelDataflowNode *this,
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
  FName local_res18 [2];
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  FName local_88;
  FName FStack_80;
  FString local_78;
  FString local_68;
  FName local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  FName local_40;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar4 = ::FName::FName(local_res18,"3DView");
  ::FName::FName(&local_88,"Collection");
  ::FName::FName(&FStack_80,"UVChannel");
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 2;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,0,&local_98,2,&local_8c);
  *(FName *)local_98.Data = local_88;
  *(FName *)(local_98.Data + 8) = FStack_80;
  ::FName::FName(&local_res10,"FGeometryCollection");
  pFVar5 = ::FString::FString(&local_78,"SurfaceRender");
  ::FString::FString(&local_68,pFVar5);
  _Src.Data = local_98.Data;
  local_58 = local_res10;
  lVar8 = (longlong)local_90;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = CONCAT44(local_48._4_4_,local_90);
  if (local_90 == 0) {
    local_48 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_90,0,&local_50,local_90,(int *)((longlong)&local_48 + 4));
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
  if ((FName *)local_98.Data != (FName *)0x0) {
    FMemory::Free(local_98.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e8555d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAddUVChannelDataflowNode::Evaluate
          (FAddUVChannelDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  FManagedArrayCollection *pFVar5;
  TManagedArrayBase<UE::Math::TVector2<float>_> *this_00;
  undefined1 auStack_118 [32];
  int local_f8 [4];
  FManagedArrayCollection local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  pFVar1 = &this->Collection;
  puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FManagedArrayCollection *)puVar4 != pFVar1) &&
     (puVar4 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (int *)puVar4 != &this->UVChannel)) {
    return;
  }
  pFVar5 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1);
  FManagedArrayCollection::FManagedArrayCollection(&local_e8,pFVar5);
  iVar3 = 0;
  bVar2 = GeometryCollection::UV::HasValidUVs(&local_e8);
  if (bVar2) {
    iVar3 = GeometryCollection::UV::GetNumUVLayers(&local_e8);
  }
  local_f8[0] = iVar3;
  bVar2 = GeometryCollection::UV::SetNumUVLayers(&local_e8,iVar3 + 1);
  if (bVar2) {
    this_00 = (TManagedArrayBase<UE::Math::TVector2<float>_> *)
              FManagedArrayCollection::FindAttributeTyped<UE::Math::TVector2<float>_>
                        (&local_e8,GeometryCollection::UV::UVLayerNames[iVar3],
                         GeometryCollection::UV::VerticesGroupName);
    if (this_00 != (TManagedArrayBase<UE::Math::TVector2<float>_> *)0x0) {
      TManagedArrayBase<UE::Math::TVector2<float>_>::Fill(this_00,&this->DefaultValue);
    }
  }
  else {
    local_f8[0] = 0;
  }
  FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,&local_e8,pFVar1);
  FDataflowNode::SetValue<int_&,int>((FDataflowNode *)this,param_1,local_f8,&this->UVChannel);
  FManagedArrayCollection::~FManagedArrayCollection(&local_e8);
  return;
}

// FAddUVChannelDataflowNode @ 14e910520

FAddUVChannelDataflowNode * __thiscall
FAddUVChannelDataflowNode::FAddUVChannelDataflowNode
          (FAddUVChannelDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_58;
  FConnectionReference local_38;
  
  local_58.Reference = *(void **)param_2;
  local_58.Index = param_2->C;
  local_58._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_58);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FAddUVChannelDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  (this->DefaultValue).field0_0x0 = (TVector2<float>_u_0)0x0;
  this->UVChannel = 0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.ContainerReference = (void *)0x0;
  local_58.Index = -1;
  local_58.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_58,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_58.Reference = this_00;
  local_38.Reference = this_00;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_58.Reference = (void *)0x0;
  local_58.Index = -1;
  local_58.ContainerReference = (void *)0x0;
  local_38.Index = -1;
  local_38.ContainerReference = (void *)0x0;
  local_38.Reference = &this->UVChannel;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

