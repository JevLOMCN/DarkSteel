// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e89af70

UScriptStruct * __cdecl FAddMaterialToCollectionDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode,
                         (UObject *)pUVar1,L"AddMaterialToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton;
}

// GetType @ 14e89b140

FName __thiscall
FAddMaterialToCollectionDataflowNode::GetType(FAddMaterialToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FAddMaterialToCollectionDataflowNode");
  return in_RDX;
}

// IsA @ 14e89b2c0

bool __thiscall
FAddMaterialToCollectionDataflowNode::IsA(FAddMaterialToCollectionDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FAddMaterialToCollectionDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e89b328;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e89b328:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e89b346;
      }
    }
  }
  bVar5 = true;
LAB_14e89b346:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e89b390

FStructOnScope * __thiscall
FAddMaterialToCollectionDataflowNode::NewStructOnScope(FAddMaterialToCollectionDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode,
                           (UObject *)pUVar2,L"AddMaterialToCollectionDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e89b4c0

void __thiscall
FAddMaterialToCollectionDataflowNode::SerializeInternal
          (FAddMaterialToCollectionDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode,
                         (UObject *)pUVar1,L"AddMaterialToCollectionDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e89b53d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e89b590

FName __thiscall
FAddMaterialToCollectionDataflowNode::GetDisplayName(FAddMaterialToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"AddMaterialToCollection");
  return in_RDX;
}

// GetCategory @ 14e89b5c0

FName __thiscall
FAddMaterialToCollectionDataflowNode::GetCategory(FAddMaterialToCollectionDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Materials");
  return in_RDX;
}

// GetTags @ 14e89b630

FString * __thiscall
FAddMaterialToCollectionDataflowNode::GetTags
          (FAddMaterialToCollectionDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e89b660

UScriptStruct * __thiscall
FAddMaterialToCollectionDataflowNode::TypedScriptStruct(FAddMaterialToCollectionDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAddMaterialToCollectionDataflowNode,
                         (UObject *)pUVar1,L"AddMaterialToCollectionDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FAddMaterialToCollectionDataflowNode.OuterSingleton;
}

// Evaluate @ 14e89b800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAddMaterialToCollectionDataflowNode::Evaluate
          (FAddMaterialToCollectionDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  FName FVar5;
  TManagedArray<int> *pTVar6;
  bool bVar7;
  uint uVar8;
  undefined1 *puVar9;
  FManagedArrayCollection *pFVar10;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar11;
  FDataflowSelection *pFVar12;
  TObjectPtr<UMaterial> *pTVar13;
  FName *pFVar14;
  TManagedArray<bool> *pTVar15;
  uint uVar16;
  longlong lVar17;
  TManagedArray<bool> *pTVar18;
  uint uVar19;
  ForElementType<unsigned_int> FVar20;
  longlong lVar21;
  undefined1 auStackY_1b8 [32];
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> local_168;
  int local_158;
  TObjectPtr<UMaterial>_u_0 local_150;
  TObjectPtr<UMaterial>_u_0 local_148;
  TManagedArray<int> *local_140;
  FDataflowSelection *local_138;
  FAddMaterialToCollectionDataflowNode *local_130;
  TManagedArray<bool> *local_128;
  FContext *local_120;
  FName local_118;
  FName local_110;
  FName local_108 [2];
  FManagedArrayCollection local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_130 = this;
  local_120 = param_1;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((FManagedArrayCollection *)puVar9 == &this->Collection) ||
     (puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
     (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)puVar9 == &this->Materials)) {
    pFVar10 = FDataflowNode::GetValue<FManagedArrayCollection>
                        ((FDataflowNode *)this,param_1,&this->Collection);
    FManagedArrayCollection::FManagedArrayCollection(&local_f8,pFVar10);
    pTVar11 = FDataflowNode::GetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
                        ((FDataflowNode *)this,param_1,&this->Materials);
    local_168.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = pTVar11->ArrayNum;
    pFVar2 = (pTVar11->AllocatorInstance).Data;
    local_168.ArrayNum = iVar1;
    if (iVar1 == 0) {
      local_168.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar1,0,&local_168.AllocatorInstance,iVar1,&local_168.ArrayMax);
      ConstructItems<TObjectPtr<UMaterial>,TObjectPtr<UMaterial>,int>
                (local_168.AllocatorInstance.Data,(TObjectPtr<UMaterial> *)pFVar2,iVar1);
    }
    pFVar12 = (FDataflowSelection *)
              FDataflowNode::GetValue<FDataflowFaceSelection>
                        ((FDataflowNode *)this,param_1,&this->FaceSelection);
    local_138 = pFVar12;
    pTVar13 = FDataflowNode::GetValue<TObjectPtr<UMaterial>_>
                        ((FDataflowNode *)this,param_1,&this->OutsideMaterial);
    local_150.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar13->field0_0x0).DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_150.DebugPtr != (UMaterial *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_150.DebugPtr);
    }
    pTVar13 = FDataflowNode::GetValue<TObjectPtr<UMaterial>_>
                        ((FDataflowNode *)this,param_1,&this->InsideMaterial);
    local_148.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar13->field0_0x0).DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_148.DebugPtr != (UMaterial *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_148.DebugPtr);
    }
    FVar5 = FGeometryCollection::FacesGroup;
    pFVar14 = ::FName::FName(&local_118,"Internal");
    bVar7 = FManagedArrayCollection::HasAttribute(&local_f8,*pFVar14,FVar5);
    FVar5 = FGeometryCollection::FacesGroup;
    if ((bVar7) &&
       ((this->bAssignOutsideMaterial != false || (this->bAssignInsideMaterial != false)))) {
      pFVar14 = ::FName::FName(&local_110,"MaterialID");
      local_140 = FManagedArrayCollection::ModifyAttribute<int>(&local_f8,*pFVar14,FVar5);
      FVar5 = FGeometryCollection::FacesGroup;
      pFVar14 = ::FName::FName(local_108,"Internal");
      pTVar15 = FManagedArrayCollection::GetAttribute<bool>(&local_f8,*pFVar14,FVar5);
      pTVar18 = pTVar15;
      local_128 = pTVar15;
      if (this->bAssignOutsideMaterial != false) {
        if (((local_168.AllocatorInstance.Data <= &local_150) &&
            (&local_150 <
             (TObjectPtr<UMaterial>_u_0 *)
             (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 8))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_158 = local_168.ArrayNum;
        if (local_168.ArrayNum == local_168.ArrayMax) {
          local_168.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_168.AllocatorInstance,&local_168.ArrayMax);
        }
        iVar1 = local_168.ArrayNum + 1;
        ((TObjectPtr<UMaterial>_u_0 *)
        (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 8))->DebugPtr =
             (UMaterial *)local_150;
        local_158 = local_168.ArrayNum;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_150.DebugPtr != (UMaterial *)0x0)) {
          local_168.ArrayNum = iVar1;
          UE::GC::MarkAsReachable((UObject *)local_150.DebugPtr);
          iVar1 = local_168.ArrayNum;
        }
        local_168.ArrayNum = iVar1;
        pTVar6 = local_140;
        iVar1 = local_158;
        uVar16 = 0;
        if (0 < (pFVar12->SelectionArray).NumBits) {
          uVar19 = 1;
          lVar17 = 0;
          do {
            if ((((int)uVar16 < 0) || (*(int *)&pTVar15->field_0x28 <= (int)uVar16)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            puVar9 = &pTVar15->field_0x10;
            if (*(undefined1 **)&pTVar15->field_0x20 != (undefined1 *)0x0) {
              puVar9 = *(undefined1 **)&pTVar15->field_0x20;
            }
            uVar8 = uVar16;
            if ((int)uVar16 < 0) {
              uVar8 = uVar16 + 0x1f;
            }
            if (((*(uint *)(puVar9 + (longlong)((int)uVar8 >> 5) * 4) & uVar19) == 0) &&
               (bVar7 = FDataflowSelection::IsSelected(pFVar12,uVar16), bVar7)) {
              uVar8 = 0;
              if ((int)uVar16 < *(int *)&pTVar6->field_0x18) {
                uVar8 = ~uVar16 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(int *)(lVar17 + *(longlong *)&pTVar6->field_0x10) = iVar1;
            }
            uVar16 = uVar16 + 1;
            uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
            lVar17 = lVar17 + 4;
            pTVar18 = local_128;
            this = local_130;
          } while ((int)uVar16 < (pFVar12->SelectionArray).NumBits);
        }
      }
      uVar16 = 1;
      if (this->bAssignInsideMaterial != false) {
        if (((local_168.AllocatorInstance.Data <= &local_148) &&
            (&local_148 <
             (TObjectPtr<UMaterial>_u_0 *)
             (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayMax * 8))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_158 = local_168.ArrayNum;
        if (local_168.ArrayNum == local_168.ArrayMax) {
          local_168.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_168.AllocatorInstance,&local_168.ArrayMax);
        }
        iVar1 = local_168.ArrayNum + 1;
        ((TObjectPtr<UMaterial>_u_0 *)
        (local_168.AllocatorInstance.Data + (longlong)local_168.ArrayNum * 8))->DebugPtr =
             (UMaterial *)local_148;
        local_158 = local_168.ArrayNum;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_148.DebugPtr != (UMaterial *)0x0)) {
          local_168.ArrayNum = iVar1;
          UE::GC::MarkAsReachable((UObject *)local_148.DebugPtr);
          iVar1 = local_168.ArrayNum;
        }
        local_168.ArrayNum = iVar1;
        iVar1 = local_158;
        uVar19 = 0;
        if (0 < (pFVar12->SelectionArray).NumBits) {
          lVar17 = 0;
          do {
            if ((((int)uVar19 < 0) || (*(int *)&pTVar18->field_0x28 <= (int)uVar19)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5c6,L""), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar12 = local_138;
            puVar9 = &pTVar18->field_0x10;
            if (*(undefined1 **)&pTVar18->field_0x20 != (undefined1 *)0x0) {
              puVar9 = *(undefined1 **)&pTVar18->field_0x20;
            }
            lVar21 = (longlong)((int)(uVar19 + ((int)uVar19 >> 0x1f & 0x1fU)) >> 5);
            if ((*(uint *)(puVar9 + lVar21 * 4) & uVar16) != 0) {
              FVar20 = (ForElementType<unsigned_int>)&local_138->SelectionArray;
              if ((((int)uVar19 < 0) || ((local_138->SelectionArray).NumBits <= (int)uVar19)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5c6,L""), bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pTVar6 = local_140;
              FVar3 = (pFVar12->SelectionArray).AllocatorInstance.SecondaryData;
              if (FVar3 != (ForElementType<unsigned_int>)0x0) {
                FVar20 = FVar3;
              }
              if ((*(uint *)((longlong)FVar20 + lVar21 * 4) & uVar16) != 0) {
                uVar8 = 0;
                if ((int)uVar19 < *(int *)&local_140->field_0x18) {
                  uVar8 = ~uVar19 >> 0x1f;
                }
                if ((uVar8 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                *(int *)(lVar17 + *(longlong *)&pTVar6->field_0x10) = iVar1;
              }
            }
            uVar19 = uVar19 + 1;
            uVar16 = uVar16 << 1 | (uint)((int)uVar16 < 0);
            lVar17 = lVar17 + 4;
            this = local_130;
          } while ((int)uVar19 < (local_138->SelectionArray).NumBits);
        }
      }
    }
    FDataflowNode::
    SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
              ((FDataflowNode *)this,local_120,&local_168,&this->Materials);
    FDataflowNode::SetValue<FManagedArrayCollection,FManagedArrayCollection>
              ((FDataflowNode *)this,local_120,&local_f8,&this->Collection);
    if ((TObjectPtr<UMaterial>_u_0 *)local_168.AllocatorInstance.Data !=
        (TObjectPtr<UMaterial>_u_0 *)0x0) {
      FMemory::Free(local_168.AllocatorInstance.Data);
    }
    FManagedArrayCollection::~FManagedArrayCollection(&local_f8);
  }
  return;
}

// FAddMaterialToCollectionDataflowNode @ 14e90fea0

FAddMaterialToCollectionDataflowNode * __thiscall
FAddMaterialToCollectionDataflowNode::FAddMaterialToCollectionDataflowNode
          (FAddMaterialToCollectionDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

{
  FManagedArrayCollection *this_00;
  FDataflowFaceSelection *pFVar1;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *pTVar2;
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
  this->_padding_ = (longlong)&___7FAddMaterialToCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  pFVar1 = &this->FaceSelection;
  uVar3 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&pFVar1->field_0x0 = FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&pFVar1->field_0x4 = uVar3;
  pTVar2 = &this->Materials;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->OutsideMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->InsideMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  this->bAssignOutsideMaterial = true;
  this->bAssignInsideMaterial = false;
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
  local_68.Reference = pTVar2;
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
  local_68.Reference = &this->OutsideMaterial;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->InsideMaterial;
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
  if (local_68.Reference != (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar4,&local_68);
  }
  return this;
}

// FAddMaterialToCollectionDataflowNode @ 14e9100a0

FAddMaterialToCollectionDataflowNode * __thiscall
FAddMaterialToCollectionDataflowNode::FAddMaterialToCollectionDataflowNode
          (FAddMaterialToCollectionDataflowNode *this)

{
  uint uVar1;
  
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FAddMaterialToCollectionDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  uVar1 = FDataflowFaceSelection::FacesGroupName.Number;
  *(uint *)&(this->FaceSelection).field_0x0 =
       FDataflowFaceSelection::FacesGroupName.ComparisonIndex.Value;
  *(uint *)&(this->FaceSelection).field_0x4 = uVar1;
  *(undefined8 *)&(this->FaceSelection).field_0x18 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x20 = 0;
  *(undefined4 *)&(this->FaceSelection).field_0x24 = 0x80;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->OutsideMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  (this->InsideMaterial).field0_0x0.DebugPtr = (UMaterial *)0x0;
  this->bAssignOutsideMaterial = true;
  this->bAssignInsideMaterial = false;
  return this;
}

