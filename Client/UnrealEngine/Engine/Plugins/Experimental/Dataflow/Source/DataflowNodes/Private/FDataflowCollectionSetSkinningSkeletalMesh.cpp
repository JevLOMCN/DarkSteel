// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 12

// StaticStruct @ 14dab8970

UScriptStruct * __cdecl FDataflowCollectionSetSkinningSkeletalMesh::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh,
                         (UObject *)pUVar1,L"DataflowCollectionSetSkinningSkeletalMesh");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton
  ;
}

// GetType @ 14dab89b0

FName __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::GetType
          (FDataflowCollectionSetSkinningSkeletalMesh *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FDataflowCollectionSetSkinningSkeletalMesh");
  return in_RDX;
}

// IsA @ 14dab89e0

bool __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::IsA
          (FDataflowCollectionSetSkinningSkeletalMesh *this,FName param_1)

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
  ::FName::FName(local_res18,"FDataflowCollectionSetSkinningSkeletalMesh");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14dab8a48;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14dab8a48:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14dab8a66;
      }
    }
  }
  bVar5 = true;
LAB_14dab8a66:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14dab8aa0

FStructOnScope * __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::NewStructOnScope
          (FDataflowCollectionSetSkinningSkeletalMesh *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_DataflowNodes();
      Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh,
                           (UObject *)pUVar2,L"DataflowCollectionSetSkinningSkeletalMesh");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14dab8b20

void __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::SerializeInternal
          (FDataflowCollectionSetSkinningSkeletalMesh *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh,
                         (UObject *)pUVar1,L"DataflowCollectionSetSkinningSkeletalMesh");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014dab8b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14dab8bb0

FName __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::GetDisplayName
          (FDataflowCollectionSetSkinningSkeletalMesh *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"SetSkinningSkeletalMesh");
  return in_RDX;
}

// GetCategory @ 14dab8be0

FName __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::GetCategory
          (FDataflowCollectionSetSkinningSkeletalMesh *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Collection");
  return in_RDX;
}

// GetTags @ 14dab8c10

FString * __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::GetTags
          (FDataflowCollectionSetSkinningSkeletalMesh *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14dab8c40

UScriptStruct * __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::TypedScriptStruct
          (FDataflowCollectionSetSkinningSkeletalMesh *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowNodes();
    Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh,
                         (UObject *)pUVar1,L"DataflowCollectionSetSkinningSkeletalMesh");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollectionSetSkinningSkeletalMesh.OuterSingleton
  ;
}

// Evaluate @ 14dab8d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::Evaluate
          (FDataflowCollectionSetSkinningSkeletalMesh *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FManagedArrayCollection *pFVar1;
  TObjectPtr<USkeletalMesh>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined1 *puVar8;
  FDataflowInput *pFVar9;
  FManagedArrayCollection *pFVar10;
  TObjectPtr<USkeletalMesh> *pTVar11;
  FDataflowGeometrySelection *pFVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  void *_Src;
  uint uVar15;
  undefined1 auStack_2c8 [32];
  TObjectPtr<USkeletalMesh>_u_0 local_2a8;
  FConnectionReference local_2a0;
  FConnectionReference local_288;
  FConnectionReference local_270;
  FVertexBoneWeightsFacade local_258;
  FDataflowSelection local_128;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  pFVar1 = &this->Collection;
  puVar8 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar8 == pFVar1) {
    uVar15 = 0;
    local_2a0.ContainerReference = (void *)0x0;
    local_2a0.Index = -1;
    local_2a0.Reference = pFVar1;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_2a0);
    pFVar10 = FDataflowInput::GetValue<FManagedArrayCollection>(pFVar9,param_1,local_2a0.Reference);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar10);
    GeometryCollection::Facades::FVertexBoneWeightsFacade::FVertexBoneWeightsFacade
              (&local_258,&local_f8,false);
    GeometryCollection::Facades::FVertexBoneWeightsFacade::DefineSchema(&local_258);
    local_288.Reference = &this->SkeletalMesh;
    local_288.Index = -1;
    local_288.ContainerReference = (void *)0x0;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_288);
    pTVar11 = FDataflowInput::GetValue<TObjectPtr<USkeletalMesh>_>
                        (pFVar9,param_1,local_288.Reference);
    TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar11->field0_0x0).DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar2.DebugPtr != (USkeletalMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    local_270.Reference = &this->GeometrySelection;
    local_270.Index = -1;
    local_270.ContainerReference = (void *)0x0;
    pFVar9 = FDataflowNode::FindInput((FDataflowNode *)this,&local_270);
    pFVar12 = FDataflowInput::GetValue<FDataflowGeometrySelection>
                        (pFVar9,param_1,local_270.Reference);
    local_128.GroupName.ComparisonIndex.Value = *(uint *)&pFVar12->field_0x0;
    local_128.GroupName.Number = *(uint *)&pFVar12->field_0x4;
    local_128.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_128.SelectionArray.MaxBits = 0;
    local_128.SelectionArray.NumBits = 0;
    uVar13 = *(int *)&pFVar12->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar13) {
      local_128.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar13) {
        local_128.SelectionArray.MaxBits = uVar13;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_128.SelectionArray,0);
    }
    local_128.SelectionArray.NumBits = *(int *)&pFVar12->field_0x20;
    if (local_128.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar12->field_0x18;
      if (*(void **)&pFVar12->field_0x18 == (void *)0x0) {
        _Src = &pFVar12->field_0x8;
      }
      FVar14 = (ForElementType<unsigned_int>)&local_128.SelectionArray;
      if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_128.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar14,_Src,(ulonglong)(local_128.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    bVar4 = FDataflowSelection::IsValidForCollection(&local_128,&local_f8);
    bVar5 = GeometryCollection::Facades::FVertexBoneWeightsFacade::IsValid(&local_258);
    if ((bVar5) && (TVar2.DebugPtr != (USkeletalMesh *)0x0)) {
      cVar6 = (**(code **)((TVar2.DebugPtr)->_padding_ + 0x440))(TVar2.DebugPtr,this->LODIndex);
      if (cVar6 != '\0') {
        iVar7 = FManagedArrayCollection::NumElements
                          (local_258.ConstCollection,FGeometryCollection::GeometryGroup);
        if (0 < iVar7) {
          do {
            if (bVar4) {
              if (((int)uVar15 < 0) || (local_128.SelectionArray.NumBits <= (int)uVar15)) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L"");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              FVar14 = (ForElementType<unsigned_int>)&local_128.SelectionArray;
              if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar14 = local_128.SelectionArray.AllocatorInstance.SecondaryData;
              }
              uVar13 = uVar15;
              if ((int)uVar15 < 0) {
                uVar13 = uVar15 + 0x1f;
              }
              if ((*(uint *)((longlong)FVar14 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar15 & 0x1f)
                  & 1) != 0) goto LAB_14dab9039;
            }
            else {
LAB_14dab9039:
              iVar7 = this->LODIndex;
              local_2a8.ObjectPtr.field0_0x0 = TVar2.ObjectPtr.field0_0x0;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
              }
              GeometryCollection::Facades::FVertexBoneWeightsFacade::ModifyGeometryBinding
                        (&local_258,uVar15,(TObjectPtr<UObject> *)&local_2a8.ObjectPtr,iVar7);
            }
            uVar15 = uVar15 + 1;
            iVar7 = FManagedArrayCollection::NumElements
                              (local_258.ConstCollection,FGeometryCollection::GeometryGroup);
          } while ((int)uVar15 < iVar7);
        }
      }
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,pFVar1);
    if (local_128.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_128.SelectionArray.AllocatorInstance.SecondaryData);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FDataflowCollectionSetSkinningSkeletalMesh @ 14dacd2b0

FDataflowCollectionSetSkinningSkeletalMesh * __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::FDataflowCollectionSetSkinningSkeletalMesh
          (FDataflowCollectionSetSkinningSkeletalMesh *this,FNodeParameters *param_1,FGuid *param_2)

{
  byte *pbVar1;
  FManagedArrayCollection *this_00;
  FDataflowGeometrySelection *pFVar2;
  uint uVar3;
  FDataflowInput *pFVar4;
  FDataflowOutput *this_01;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FDataflowCollectionSetSkinningSkeletalMesh__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar2 = &this->GeometrySelection;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->LODIndex = 0;
  uVar3 = FDataflowGeometrySelection::GeometryGroupName.Number;
  *(uint *)&pFVar2->field_0x0 = FDataflowGeometrySelection::GeometryGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar2->field_0x4 = uVar3;
  *(undefined8 *)&(this->GeometrySelection).field_0x18 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x24 = 0x80;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->SkeletalMesh;
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
  local_68.Reference = &this->LODIndex;
  pFVar4 = FDataflowNode::RegisterInputConnectionInternal
                     ((FDataflowNode *)this,&local_68,&local_res8);
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  pbVar1 = (byte *)((longlong)&pFVar4->_padding_ + 5);
  *pbVar1 = *pbVar1 | 0xc;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  this_01 = FDataflowNode::RegisterOutputConnectionInternal
                      ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(this_01,&local_68);
  }
  return this;
}

// FDataflowCollectionSetSkinningSkeletalMesh @ 14dacd430

FDataflowCollectionSetSkinningSkeletalMesh * __thiscall
FDataflowCollectionSetSkinningSkeletalMesh::FDataflowCollectionSetSkinningSkeletalMesh
          (FDataflowCollectionSetSkinningSkeletalMesh *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FDataflowCollectionSetSkinningSkeletalMesh__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->SkeletalMesh).field0_0x0.DebugPtr = (USkeletalMesh *)0x0;
  this->LODIndex = 0;
  uVar1 = FDataflowGeometrySelection::GeometryGroupName.Number;
  *(uint *)&(this->GeometrySelection).field_0x0 =
       FDataflowGeometrySelection::GeometryGroupName.ComparisonIndex.Value;
  *(uint *)&(this->GeometrySelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->GeometrySelection).field_0x18 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySelection).field_0x24 = 0x80;
  return this;
}

