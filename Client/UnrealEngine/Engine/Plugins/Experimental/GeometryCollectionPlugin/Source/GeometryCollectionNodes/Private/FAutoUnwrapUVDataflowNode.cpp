// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e8577c0

UScriptStruct * __cdecl FAutoUnwrapUVDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutoUnwrapUVDataflowNode,(UObject *)pUVar1,
                         L"AutoUnwrapUVDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton;
}

// GetType @ 14e858cd0

FName __thiscall FAutoUnwrapUVDataflowNode::GetType(FAutoUnwrapUVDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAutoUnwrapUVDataflowNode");
  return in_RDX;
}

// IsA @ 14e858d40

bool __thiscall FAutoUnwrapUVDataflowNode::IsA(FAutoUnwrapUVDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAutoUnwrapUVDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e858da8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e858da8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e858dc6;
      }
    }
  }
  bVar5 = true;
LAB_14e858dc6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e858e00

FStructOnScope * __thiscall
FAutoUnwrapUVDataflowNode::NewStructOnScope(FAutoUnwrapUVDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAutoUnwrapUVDataflowNode,(UObject *)pUVar2,
                           L"AutoUnwrapUVDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e858e80

void __thiscall
FAutoUnwrapUVDataflowNode::SerializeInternal(FAutoUnwrapUVDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutoUnwrapUVDataflowNode,(UObject *)pUVar1,
                         L"AutoUnwrapUVDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e858efd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e858ff0

FName __thiscall FAutoUnwrapUVDataflowNode::GetDisplayName(FAutoUnwrapUVDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AutoUnwrapUV");
  return in_RDX;
}

// GetCategory @ 14e859020

FName __thiscall FAutoUnwrapUVDataflowNode::GetCategory(FAutoUnwrapUVDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|UV");
  return in_RDX;
}

// GetTags @ 14e8592d0

FString * __thiscall
FAutoUnwrapUVDataflowNode::GetTags(FAutoUnwrapUVDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e859340

UScriptStruct * __thiscall
FAutoUnwrapUVDataflowNode::TypedScriptStruct(FAutoUnwrapUVDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutoUnwrapUVDataflowNode,(UObject *)pUVar1,
                         L"AutoUnwrapUVDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAutoUnwrapUVDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e859550

/* WARNING: Removing unreachable block (ram,0x00014e859788) */
/* WARNING: Removing unreachable block (ram,0x00014e859796) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FAutoUnwrapUVDataflowNode::GetRenderParametersImpl
          (FAutoUnwrapUVDataflowNode *this,
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

// Evaluate @ 14e859860

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FAutoUnwrapUVDataflowNode::Evaluate
          (FAutoUnwrapUVDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  undefined1 *puVar7;
  FDataflowInput *pFVar8;
  FManagedArrayCollection *this_00;
  int *piVar9;
  FGeometryCollection *pFVar10;
  FDataflowSelection *this_01;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  TArray<bool,TSizedDefaultAllocator<32>_> local_138;
  FConnectionReference local_128;
  FConnectionReference local_110;
  FConnectionReference local_f8;
  FConnectionReference local_e0;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  uint uStack_ac;
  FConnectionReference local_a8;
  FConnectionReference local_90;
  FConnectionReference local_78;
  TArrayView<bool,int> local_58;
  TArrayView<int,int> local_48;
  
  piVar9 = &this->UVChannel;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((int *)puVar7 == piVar9) {
    local_128.ContainerReference = (void *)0x0;
    local_128.Index = -1;
    local_128.Reference = piVar9;
    pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_128);
    if (pFVar8->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::SetValue<int_const_&,int>
                ((FDataflowNode *)this,param_1,local_128.Reference,piVar9);
      return;
    }
    local_a8.Index = -1;
    local_a8.ContainerReference = (void *)0x0;
    local_a8.Reference = piVar9;
    FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_128,&local_a8);
    return;
  }
  pFVar1 = &this->Collection;
  puVar7 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar7 == pFVar1) {
    this_00 = FDataflowNode::GetValue<FManagedArrayCollection>((FDataflowNode *)this,param_1,pFVar1)
    ;
    iVar6 = FManagedArrayCollection::NumElements(this_00,FGeometryCollection::FacesGroup);
    uVar12 = 0;
    if (iVar6 == 0) {
      local_110.Index = -1;
      local_110.ContainerReference = (void *)0x0;
      local_110.Reference = pFVar1;
      pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_110);
      if (pFVar8->Connection == (FDataflowOutput *)0x0) {
        FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                  ((FDataflowNode *)this,param_1,local_110.Reference,pFVar1);
      }
      else {
        local_90.Index = -1;
        local_90.ContainerReference = (void *)0x0;
        local_90.Reference = pFVar1;
        FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_110,&local_90);
      }
    }
    else {
      local_f8.Index = -1;
      local_f8.ContainerReference = (void *)0x0;
      local_f8.Reference = piVar9;
      pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_f8);
      piVar9 = FDataflowInput::GetValue<int>(pFVar8,param_1,local_f8.Reference);
      local_e0.Index = -1;
      local_e0.ContainerReference = (void *)0x0;
      iVar6 = *piVar9;
      local_e0.Reference = &this->GutterSize;
      pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_e0);
      piVar9 = FDataflowInput::GetValue<int>(pFVar8,param_1,local_e0.Reference);
      iVar14 = *piVar9;
      if (iVar14 < 1) {
        iVar14 = 1;
      }
      pFVar10 = FManagedArrayCollection::NewCopy<FGeometryCollection>(this_00);
      if ((pFVar10 == (FGeometryCollection *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GeomCollection.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionUVNodes.cpp"
                             ,0xae,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_78.Index = -1;
      local_78.ContainerReference = (void *)0x0;
      local_78.Reference = &this->FaceSelection;
      pFVar8 = FDataflowNode::FindInput((FDataflowNode *)this,&local_78);
      if (pFVar8->Connection == (FDataflowOutput *)0x0) {
        local_b8 = 0;
        uStack_b0 = 0;
        local_48._8_8_ = (ulonglong)uStack_ac << 0x20;
        local_48.DataPtr = (int *)0x0;
        UE::PlanarCut::UVLayout
                  (iVar6,pFVar10,0x200,(float)iVar14,AllFaces,&local_48,true,(FProgressCancel *)0x0)
        ;
      }
      else {
        this_01 = (FDataflowSelection *)
                  FDataflowNode::GetValue<FDataflowFaceSelection>
                            ((FDataflowNode *)this,param_1,&this->FaceSelection);
        iVar2 = (this_01->SelectionArray).NumBits;
        if (0 < iVar2) {
          local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_138.ArrayNum = 0;
          local_138.ArrayMax = 0;
          TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_138,iVar2,Default);
          uVar15 = uVar12;
          if (0 < (this_01->SelectionArray).NumBits) {
            do {
              uVar13 = (uint)uVar12;
              FVar5 = (FScriptContainerElement)FDataflowSelection::IsSelected(this_01,uVar13);
              uVar11 = 0;
              if ((int)uVar13 < local_138.ArrayNum) {
                uVar11 = ~uVar13 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar12 = (ulonglong)(uVar13 + 1);
              local_138.AllocatorInstance.Data[uVar15] = FVar5;
              uVar15 = uVar15 + 1;
            } while ((int)(uVar13 + 1) < (this_01->SelectionArray).NumBits);
          }
          iVar2 = local_138.ArrayNum;
          local_c8 = local_138.AllocatorInstance.Data;
          if ((local_138.ArrayNum < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iStack_c0 = iVar2;
          local_58._12_4_ = uStack_bc;
          local_58.ArrayNum = iVar2;
          local_58.DataPtr = (bool *)local_c8;
          UE::PlanarCut::UVLayout
                    (iVar6,pFVar10,0x200,(float)iVar14,&local_58,true,(FProgressCancel *)0x0);
          if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_138.AllocatorInstance.Data);
          }
        }
      }
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)pFVar10,&this->Collection)
      ;
      if (pFVar10 != (FGeometryCollection *)0x0) {
        (**(code **)pFVar10->_padding_)(pFVar10,1);
      }
    }
  }
  return;
}

// FAutoUnwrapUVDataflowNode @ 14e9114f0

FAutoUnwrapUVDataflowNode * __thiscall
FAutoUnwrapUVDataflowNode::FAutoUnwrapUVDataflowNode
          (FAutoUnwrapUVDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowFaceSelection *pFVar2;
  int *piVar3;
  uint uVar4;
  FDataflowInput *pFVar5;
  FDataflowOutput *pFVar6;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FAutoUnwrapUVDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar2 = &this->FaceSelection;
  uVar4 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar2->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar4;
  piVar3 = &this->UVChannel;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  *piVar3 = 0;
  this->GutterSize = 1;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pFVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = piVar3;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->GutterSize;
  pFVar5 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar5->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = piVar3;
  local_48.Reference = piVar3;
  pFVar6 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (int *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar6,&local_68);
  }
  return this;
}

