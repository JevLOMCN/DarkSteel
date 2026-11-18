// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e878830

UScriptStruct * __cdecl FAssignMaterialInterfaceToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode,
                         (UObject *)pUVar1,L"AssignMaterialInterfaceToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
         OuterSingleton;
}

// GetType @ 14e878990

FName __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::GetType
          (FAssignMaterialInterfaceToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAssignMaterialInterfaceToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e8789e0

bool __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::IsA
          (FAssignMaterialInterfaceToCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAssignMaterialInterfaceToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e878a48;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e878a48:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e878a66;
      }
    }
  }
  bVar5 = true;
LAB_14e878a66:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e878aa0

FStructOnScope * __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::NewStructOnScope
          (FAssignMaterialInterfaceToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode
                           ,(UObject *)pUVar2,L"AssignMaterialInterfaceToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e878b20

void __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::SerializeInternal
          (FAssignMaterialInterfaceToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode,
                         (UObject *)pUVar1,L"AssignMaterialInterfaceToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e878b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e878bb0

FName __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::GetDisplayName
          (FAssignMaterialInterfaceToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AssignMaterialToCollection");
  return in_RDX;
}

// GetCategory @ 14e878be0

FName __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::GetCategory
          (FAssignMaterialInterfaceToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Materials");
  return in_RDX;
}

// GetTags @ 14e878c10

FString * __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::GetTags
          (FAssignMaterialInterfaceToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e878c80

UScriptStruct * __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::TypedScriptStruct
          (FAssignMaterialInterfaceToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode,
                         (UObject *)pUVar1,L"AssignMaterialInterfaceToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAssignMaterialInterfaceToCollectionDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e878d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::Evaluate
          (FAssignMaterialInterfaceToCollectionDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  FManagedArrayCollection *pFVar7;
  FDataflowFaceSelection *pFVar8;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar9;
  TObjectPtr<UMaterialInterface> *pTVar10;
  FDataflowInput *pFVar11;
  TManagedArray<int> *pTVar12;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  void *_Src;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStackY_1e8 [32];
  int local_1a8 [2];
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_1a0;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> local_190;
  UMaterialInterface *local_180;
  FContext *local_178;
  UMaterialInterface *local_170;
  TObjectPtr<UMaterialInterface> *local_168;
  undefined4 local_160;
  undefined8 local_158;
  FConnectionReference local_150;
  TObjectPtr<UMaterialInterface> *local_138;
  undefined4 local_130;
  undefined8 local_128;
  FDataflowSelection local_120;
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_178 = param_1;
  puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar6 == &this->Collection) {
    pFVar7 = FDataflowNode::GetValue<FManagedArrayCollection>
                       ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar7);
    pFVar8 = FDataflowNode::GetValue<FDataflowFaceSelection>
                       ((FDataflowNode *)this,param_1,&this->FaceSelection);
    uVar17 = 0;
    local_120.GroupName.ComparisonIndex.Value = *(uint *)&pFVar8->field_0x0;
    local_120.GroupName.Number = *(uint *)&pFVar8->field_0x4;
    local_120.SelectionArray.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_120.SelectionArray.MaxBits = 0;
    local_120.SelectionArray.NumBits = 0;
    uVar14 = *(int *)&pFVar8->field_0x20 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar14) {
      local_120.SelectionArray.MaxBits = 0x80;
      if (0x80 < (int)uVar14) {
        local_120.SelectionArray.MaxBits = uVar14;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_120.SelectionArray,0);
    }
    local_120.SelectionArray.NumBits = *(int *)&pFVar8->field_0x20;
    if (local_120.SelectionArray.NumBits != 0) {
      _Src = *(void **)&pFVar8->field_0x18;
      if (*(void **)&pFVar8->field_0x18 == (void *)0x0) {
        _Src = &pFVar8->field_0x8;
      }
      FVar15 = (ForElementType<unsigned_int>)&local_120.SelectionArray;
      if (local_120.SelectionArray.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_120.SelectionArray.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar15,_Src,(ulonglong)(local_120.SelectionArray.NumBits + 0x1fU >> 5) << 2);
    }
    pTVar9 = FDataflowNode::
             GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                       ((FDataflowNode *)this,param_1,&this->MaterialArray);
    local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar4 = pTVar9->ArrayNum;
    pFVar1 = (pTVar9->AllocatorInstance).Data;
    local_190.ArrayNum = iVar4;
    if (iVar4 == 0) {
      local_190.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,0,&local_190.AllocatorInstance,iVar4,&local_190.ArrayMax);
      ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                (local_190.AllocatorInstance.Data,(TObjectPtr<UMaterialInterface> *)pFVar1,iVar4);
    }
    local_168 = &this->Material;
    local_160 = 0xffffffff;
    local_158 = 0;
    pTVar10 = FDataflowNode::GetValue<TObjectPtr<UMaterialInterface>_>
                        ((FDataflowNode *)this,param_1,
                         (TConnectionReference<TObjectPtr<UMaterialInterface>_> *)&local_168);
    local_180 = (pTVar10->field0_0x0).DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_180 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_180);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_180 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_180);
    }
    local_1a8[0] = AddOrMergeMaterialToArray
                             (this,&local_190,(TObjectPtr<UMaterialInterface>)&local_180);
    iVar4 = FManagedArrayCollection::NumElements(&local_f8,FGeometryCollection::FacesGroup);
    local_150.Index = -1;
    local_150.ContainerReference = (void *)0x0;
    local_150.Reference = &this->FaceSelection;
    pFVar11 = FDataflowNode::FindInput((FDataflowNode *)this,&local_150);
    if (pFVar11->Connection == (FDataflowOutput *)0x0) {
      FDataflowSelection::InitializeFromCollection(&local_120,&local_f8,true);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&MaterialIdAttributeName,"MaterialID");
      _Init_thread_footer(&::_TSS0);
    }
    if (((local_120.SelectionArray.NumBits <= iVar4) &&
        (bVar3 = FManagedArrayCollection::HasAttribute
                           (&local_f8,MaterialIdAttributeName,FGeometryCollection::FacesGroup),
        bVar3)) &&
       (pTVar12 = FManagedArrayCollection::ModifyAttribute<int>
                            (&local_f8,MaterialIdAttributeName,FGeometryCollection::FacesGroup),
       iVar4 = local_1a8[0], 0 < local_120.SelectionArray.NumBits)) {
      uVar14 = 1;
      uVar18 = uVar17;
      do {
        uVar16 = (uint)uVar17;
        if ((((int)uVar16 < 0) || (local_120.SelectionArray.NumBits <= (int)uVar16)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar15 = (ForElementType<unsigned_int>)&local_120.SelectionArray;
        if (local_120.SelectionArray.AllocatorInstance.SecondaryData !=
            (ForElementType<unsigned_int>)0x0) {
          FVar15 = local_120.SelectionArray.AllocatorInstance.SecondaryData;
        }
        uVar5 = uVar16;
        if ((int)uVar16 < 0) {
          uVar5 = uVar16 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar15 + (longlong)((int)uVar5 >> 5) * 4) & uVar14) != 0) {
          uVar5 = 0;
          if ((int)uVar16 < *(int *)&pTVar12->field_0x18) {
            uVar5 = ~uVar16 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(int *)(uVar18 + *(longlong *)&pTVar12->field_0x10) = iVar4;
        }
        uVar17 = (ulonglong)(uVar16 + 1);
        uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
        uVar18 = uVar18 + 4;
        param_1 = local_178;
      } while ((int)(uVar16 + 1) < local_120.SelectionArray.NumBits);
    }
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,param_1,&local_f8,&this->Collection);
    if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.AllocatorInstance.Data);
    }
    if (local_120.SelectionArray.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_120.SelectionArray.AllocatorInstance.SecondaryData);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  else {
    pTVar9 = &this->MaterialArray;
    puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if (((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar6 == pTVar9) ||
       (puVar6 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (int *)puVar6 == &this->MaterialIndex)) {
      pTVar13 = FDataflowNode::
                GetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                          ((FDataflowNode *)this,param_1,pTVar9);
      local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar4 = pTVar13->ArrayNum;
      pFVar1 = (pTVar13->AllocatorInstance).Data;
      local_1a0.ArrayNum = iVar4;
      if (iVar4 == 0) {
        local_1a0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar4,0,&local_1a0.AllocatorInstance,iVar4,&local_1a0.ArrayMax);
        ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                  (local_1a0.AllocatorInstance.Data,(TObjectPtr<UMaterialInterface> *)pFVar1,iVar4);
      }
      local_138 = &this->Material;
      local_130 = 0xffffffff;
      local_128 = 0;
      pTVar10 = FDataflowNode::GetValue<TObjectPtr<UMaterialInterface>_>
                          ((FDataflowNode *)this,param_1,
                           (TConnectionReference<TObjectPtr<UMaterialInterface>_> *)&local_138);
      local_170 = (pTVar10->field0_0x0).DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_170 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_170);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_170 != (UMaterialInterface *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_170);
      }
      local_1a8[0] = AddOrMergeMaterialToArray
                               (this,&local_1a0,(TObjectPtr<UMaterialInterface>)&local_170);
      FDataflowNode::
      SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_&,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_1a0,pTVar9);
      FDataflowNode::SetValue<int_const_&,int>
                ((FDataflowNode *)this,param_1,local_1a8,&this->MaterialIndex);
      if (local_1a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FAssignMaterialInterfaceToCollectionDataflowNode @ 14e910de0

FAssignMaterialInterfaceToCollectionDataflowNode * __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::FAssignMaterialInterfaceToCollectionDataflowNode
          (FAssignMaterialInterfaceToCollectionDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowFaceSelection *pFVar1;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FDataflowOutput *pFVar4;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this_00 = &this->Collection;
  this->_padding_ = (longlong)&___7FAssignMaterialInterfaceToCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->FaceSelection;
  uVar3 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar3;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  pTVar2 = &this->MaterialArray;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->MaterialArray).ArrayNum = 0;
  (this->MaterialArray).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->MaterialIndex = 0;
  this->bMergeDuplicateMaterials = false;
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
  local_68.Reference = pFVar1;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar2;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Material;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = this_00;
  local_48.Reference = this_00;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (FManagedArrayCollection *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_68.Reference = pTVar2;
  local_48.Reference = pTVar2;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference !=
      (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->MaterialIndex;
  pFVar4 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  return this;
}

// FAssignMaterialInterfaceToCollectionDataflowNode @ 14e911000

FAssignMaterialInterfaceToCollectionDataflowNode * __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::FAssignMaterialInterfaceToCollectionDataflowNode
          (FAssignMaterialInterfaceToCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FAssignMaterialInterfaceToCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  (this->MaterialArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialArray).ArrayNum = 0;
  (this->MaterialArray).ArrayMax = 0;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  this->MaterialIndex = 0;
  this->bMergeDuplicateMaterials = false;
  return this;
}

// AddOrMergeMaterialToArray @ 14e9394f0

int __thiscall
FAssignMaterialInterfaceToCollectionDataflowNode::AddOrMergeMaterialToArray
          (FAssignMaterialInterfaceToCollectionDataflowNode *this,
          TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *param_1,
          TObjectPtr<UMaterialInterface> param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 TVar1;
  FScriptContainerElement *pFVar2;
  UObject *pUVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if (this->bMergeDuplicateMaterials != false) {
    iVar6 = TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<TObjectPtr<UMaterialInterface>_const_&>
                      (param_1,(TObjectPtr<UMaterialInterface> *)param_2.field0_0x0);
    return iVar6;
  }
  TVar1.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->AllocatorInstance).Data;
  if ((TVar1.DebugPtr <= (ulonglong)param_2.field0_0x0) &&
     ((ulonglong)param_2.field0_0x0 <
      (UMaterialInterface *)(&(TVar1.DebugPtr)->_padding_ + param_1->ArrayMax))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  iVar6 = param_1->ArrayNum;
  if (iVar6 == param_1->ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  param_1->ArrayNum = iVar6 + 1;
  pUVar3 = *(UObject **)param_2.field0_0x0;
  *(UObject **)(pFVar2 + (longlong)iVar6 * 8) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  return iVar6;
}

