// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 13

// StaticStruct @ 14e865340

UScriptStruct * __cdecl FCreateGeometryCollectionFromSourcesDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode,
                         (UObject *)pUVar1,L"CreateGeometryCollectionFromSourcesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
         OuterSingleton;
}

// GetType @ 14e8655d0

FName __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::GetType
          (FCreateGeometryCollectionFromSourcesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCreateGeometryCollectionFromSourcesDataflowNode");
  return in_RDX;
}

// IsA @ 14e865600

bool __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::IsA
          (FCreateGeometryCollectionFromSourcesDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCreateGeometryCollectionFromSourcesDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e865668;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e865668:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e865686;
      }
    }
  }
  bVar5 = true;
LAB_14e865686:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e865700

FStructOnScope * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::NewStructOnScope
          (FCreateGeometryCollectionFromSourcesDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode
                           ,(UObject *)pUVar2,L"CreateGeometryCollectionFromSourcesDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e865790

void __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::SerializeInternal
          (FCreateGeometryCollectionFromSourcesDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode,
                         (UObject *)pUVar1,L"CreateGeometryCollectionFromSourcesDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86580d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e865820

FName __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::GetDisplayName
          (FCreateGeometryCollectionFromSourcesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CreateGeometryCollectionFromSources");
  return in_RDX;
}

// GetCategory @ 14e865a20

FName __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::GetCategory
          (FCreateGeometryCollectionFromSourcesDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e865a50

FString * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::GetTags
          (FCreateGeometryCollectionFromSourcesDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e865a80

UScriptStruct * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::TypedScriptStruct
          (FCreateGeometryCollectionFromSourcesDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode,
                         (UObject *)pUVar1,L"CreateGeometryCollectionFromSourcesDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode.
         OuterSingleton;
}

// Evaluate @ 14e865bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::Evaluate
          (FCreateGeometryCollectionFromSourcesDataflowNode *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  TObjectPtr<UStaticMesh_const_>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  FDataflowInput *this_00;
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *pTVar10;
  TObjectPtr<UStaticMesh_const_>_u_0 TVar11;
  UClass *pUVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  ForAnyElementType this_01;
  longlong lVar15;
  TObjectPtr<UStaticMesh_const_>_u_0 *pTVar16;
  FManagedArrayCollection *pFVar17;
  FGeometryCollectionSource *this_02;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  undefined1 auStackY_718 [32];
  undefined1 local_6c8 [8];
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> local_6c0;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_6b0;
  uint local_6a0;
  TObjectPtr<UStaticMesh_const_>_u_0 local_698;
  ForAnyElementType FStack_690;
  undefined8 local_688;
  undefined4 local_680;
  ForAnyElementType local_678;
  undefined8 local_670;
  longlong local_668;
  undefined8 local_660;
  TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> local_658;
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *local_648;
  FCreateGeometryCollectionFromSourcesDataflowNode *local_640;
  FContext *local_638;
  FManagedArrayCollection *local_630;
  FConnectionReference local_628;
  FLinearColor_u_0 local_608;
  FCollectionInstancedMeshFacade local_5f8;
  FCollectionHierarchyFacade local_5b8;
  FGeometryCollection local_508;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_718;
  pFVar17 = &this->Collection;
  local_640 = this;
  local_638 = param_1;
  local_630 = pFVar17;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((FManagedArrayCollection *)puVar9 != pFVar17) &&
       (puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_> *)puVar9 != &this->Materials)) &&
      (puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar9 !=
      &this->MaterialInstances)) &&
     ((puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)puVar9 !=
      &this->InstancedMeshes &&
      (bVar3 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<5163137966440186170>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionAssetNodes.cpp"
                          ,0x13a,
                          "Out->IsA(&Collection) || Out->IsA(&Materials) || Out->IsA(&MaterialInstances) || Out->IsA(&InstancedMeshes)"
                         ), bVar3)))) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_628.Reference = &this->Sources;
  local_628.Index = -1;
  local_628.ContainerReference = (void *)0x0;
  this_00 = FDataflowNode::FindInput((FDataflowNode *)this,&local_628);
  pTVar10 = FDataflowInput::GetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
                      (this_00,param_1,local_628.Reference);
  local_608 = FLinearColor::White.field0_0x0;
  local_648 = pTVar10;
  FGeometryCollection::FGeometryCollection
            (&local_508,(FGeometryCollectionDefaults *)&local_608._s_0);
  local_6b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6b0.ArrayNum = 0;
  local_6b0.ArrayMax = 0;
  local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6c0.ArrayNum = 0;
  local_6c0.ArrayMax = 0;
  GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
            (&local_5f8,(FManagedArrayCollection *)&local_508);
  GeometryCollection::Facades::FCollectionInstancedMeshFacade::DefineSchema(&local_5f8);
  iVar4 = pTVar10->ArrayNum;
  local_6a0 = 0;
  if (0 < iVar4) {
    local_668 = 0;
    do {
      lVar15 = local_668;
      uVar19 = local_6a0;
      uVar5 = 0;
      if ((int)local_6a0 < iVar4) {
        uVar5 = ~local_6a0 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_02 = (FGeometryCollectionSource *)((pTVar10->AllocatorInstance).Data + lVar15);
      iVar4 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)&local_508,FTransformCollection::TransformGroup)
      ;
      iVar8 = local_6b0.ArrayNum;
      uVar13 = (ulonglong)local_6b0.ArrayNum;
      pFVar18 = local_6b0.AllocatorInstance.Data + uVar13 * 8;
      FVar14.Data = local_6b0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar13 != iVar8) {
          local_6c8[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_6c8);
          uVar13 = local_6b0._8_8_ & 0xffffffff;
        }
        if (FVar14.Data == pFVar18) break;
        FVar14.Data = FVar14.Data + 8;
      }
      FGeometryCollectionEngineConversion::AppendGeometryCollectionSource
                (this_02,&local_508,&local_6b0,false);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FVar14.Data = local_6b0.AllocatorInstance.Data, TVar11.DebugPtr = (UStaticMesh *)0x0,
         iVar8 = local_6b0.ArrayNum, 0 < local_6b0.ArrayNum)) {
        do {
          if (*(UObject **)FVar14.Data != (UObject *)0x0) {
            UE::GC::MarkAsReachable(*(UObject **)FVar14.Data);
            iVar8 = local_6b0.ArrayNum;
          }
          TVar11._0_4_ = TVar11._0_4_ + 1;
          TVar11._4_4_ = 0;
          FVar14.Data = FVar14.Data + 8;
        } while ((int)TVar11._0_4_ < iVar8);
      }
      local_688 = 0;
      local_680 = 0;
      local_678.Data = (FScriptContainerElement *)0x0;
      local_698.DebugPtr = (UStaticMesh *)0x0;
      FStack_690.Data = (FScriptContainerElement *)0x0;
      local_670 = 0;
      TVar11.DebugPtr =
           (UStaticMesh *)
           FSoftObjectPath::TryLoad((FSoftObjectPath *)this_02,(FUObjectSerializeContext *)0x0);
      if (TVar11.DebugPtr == (UStaticMesh *)0x0) {
LAB_14e865e80:
        TVar11.DebugPtr = (UStaticMesh *)0x0;
      }
      else {
        pUVar12 = Z_Construct_UClass_UStaticMesh_NoRegister();
        iVar8 = (int)pUVar12->_padding_;
        if ((*(int *)((TVar11.DebugPtr)->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar11.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar12->_padding_)) goto LAB_14e865e80;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar11.DebugPtr != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar11.DebugPtr);
      }
      local_698 = TVar11;
      if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&FStack_690 !=
          &this_02->SourceMaterial) {
        iVar8 = (this_02->SourceMaterial).ArrayNum;
        pFVar18 = (this_02->SourceMaterial).AllocatorInstance.Data;
        local_688 = CONCAT44(local_688._4_4_,iVar8);
        if ((iVar8 == 0) && (local_688._4_4_ == 0)) {
          local_688 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar8,local_688._4_4_,&FStack_690,iVar8,(int *)((longlong)&local_688 + 4));
          ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                    (FStack_690.Data,(TObjectPtr<UMaterialInterface> *)pFVar18,iVar8);
        }
      }
      lVar15 = local_670;
      uVar5 = local_670._4_4_;
      local_680 = 0;
      local_670 = (ulonglong)local_670._4_4_ << 0x20;
      if ((lVar15 < 0) && (uVar5 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_678,0,(int *)((longlong)&local_670 + 4));
      }
      FVar14.Data = local_6c0.AllocatorInstance.Data;
      pTVar16 = (TObjectPtr<UStaticMesh_const_>_u_0 *)
                (local_6c0.AllocatorInstance.Data + (longlong)local_6c0.ArrayNum * 0x30);
      this_01.Data = local_6c0.AllocatorInstance.Data;
      if ((TObjectPtr<UStaticMesh_const_>_u_0 *)local_6c0.AllocatorInstance.Data != pTVar16) {
        do {
          bVar3 = FGeometryCollectionAutoInstanceMesh::operator==
                            ((FGeometryCollectionAutoInstanceMesh *)this_01.Data,
                             (FGeometryCollectionAutoInstanceMesh *)&local_698.ObjectPtr);
          if (bVar3) {
            lVar15 = ((longlong)this_01.Data - (longlong)FVar14.Data) / 6 +
                     ((longlong)this_01.Data - (longlong)FVar14.Data >> 0x3f);
            uVar5 = (int)(lVar15 >> 3) - (int)(lVar15 >> 0x3f);
            if (uVar5 != 0xffffffff) goto LAB_14e866117;
            break;
          }
          this_01.Data = this_01.Data + 0x30;
        } while ((TObjectPtr<UStaticMesh_const_>_u_0 *)this_01.Data != pTVar16);
      }
      uVar5 = local_6c0.ArrayNum;
      if ((local_6c0.AllocatorInstance.Data <= &local_698) &&
         (&local_698 <
          (TObjectPtr<UStaticMesh_const_>_u_0 *)
          (local_6c0.AllocatorInstance.Data + (longlong)local_6c0.ArrayMax * 0x30))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = local_6c0.ArrayNum;
      }
      if (uVar5 == local_6c0.ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_6c0.AllocatorInstance,&local_6c0.ArrayMax);
      }
      local_6c0.ArrayNum = uVar5 + 1;
      pTVar16 = (TObjectPtr<UStaticMesh_const_>_u_0 *)
                (local_6c0.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30);
      pTVar16->DebugPtr = (UStaticMesh *)local_698;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_698.DebugPtr != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_698.DebugPtr);
      }
      FVar14.Data = FStack_690.Data;
      pTVar1 = pTVar16 + 1;
      pTVar1->DebugPtr = (UStaticMesh *)0x0;
      iVar8 = (int)local_688;
      *(int *)(pTVar16 + 2) = (int)local_688;
      if ((int)local_688 == 0) {
        *(int *)((longlong)pTVar16 + 0x14) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(int)local_688,0,(ForAnyElementType *)&pTVar1->ObjectPtr,(int)local_688,
                   (int *)((longlong)pTVar16 + 0x14));
        ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                  ((FScriptContainerElement *)pTVar1->DebugPtr,
                   (TObjectPtr<UMaterialInterface> *)FVar14.Data,iVar8);
      }
      FVar14.Data = local_678.Data;
      pTVar1 = pTVar16 + 4;
      *(undefined4 *)(pTVar16 + 3) = local_680;
      pTVar1->DebugPtr = (UStaticMesh *)0x0;
      lVar15 = (longlong)(int)local_670;
      *(int *)(pTVar16 + 5) = (int)local_670;
      if ((int)local_670 == 0) {
        *(int *)((longlong)pTVar16 + 0x2c) = 0;
        uVar19 = local_6a0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_670,0,(ForAnyElementType *)&pTVar1->ObjectPtr,(int)local_670,
                   (int *)((longlong)pTVar16 + 0x2c));
        memcpy((FScriptContainerElement *)pTVar1->DebugPtr,FVar14.Data,lVar15 << 2);
        uVar19 = local_6a0;
      }
LAB_14e866117:
      uVar6 = 0;
      if ((int)uVar5 < local_6c0.ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(int *)(local_6c0.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x18) =
           *(int *)(local_6c0.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x18) + 1;
      uVar6 = 0;
      if ((int)uVar5 < local_6c0.ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar18 = local_6c0.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x20;
      if (((TArray<float,TSizedDefaultAllocator<32>_> *)pFVar18 == &this_02->InstanceCustomData) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar8 = (this_02->InstanceCustomData).ArrayNum;
      if (iVar8 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar8,(ForAnyElementType *)pFVar18,(int *)(pFVar18 + 8),
                           (int *)(pFVar18 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar18 + (longlong)iVar7 * 4,(this_02->InstanceCustomData).AllocatorInstance.Data,
               (longlong)iVar8 << 2);
      }
      iVar8 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)&local_508,FTransformCollection::TransformGroup)
      ;
      for (; iVar4 < iVar8; iVar4 = iVar4 + 1) {
        GeometryCollection::Facades::FCollectionInstancedMeshFacade::SetIndex
                  (&local_5f8,iVar4,uVar5);
      }
      if (local_678.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_678.Data);
      }
      if (FStack_690.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_690.Data);
      }
      local_6a0 = uVar19 + 1;
      local_668 = local_668 + 0xb0;
      iVar4 = local_648->ArrayNum;
      pTVar10 = local_648;
      this = local_640;
      pFVar17 = local_630;
      param_1 = local_638;
    } while ((int)local_6a0 < iVar4);
  }
  FGeometryCollection::ReindexMaterials(&local_508);
  GeometryCollection::Facades::FCollectionInstancedMeshFacade::GetNumIndices(&local_5f8);
  bVar3 = FGeometryCollectionClusteringUtility::ContainsMultipleRootBones(&local_508);
  if (bVar3) {
    local_660 = 0;
    FGeometryCollectionClusteringUtility::ClusterAllBonesUnderNewRoot(&local_508,(FName)0x0,true);
  }
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
            (&local_5b8,(FManagedArrayCollection *)&local_508);
  Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_5b8);
  local_658.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_658.ArrayNum = 0;
  local_658.ArrayMax = 0;
  FGeometryCollectionEngineConversion::GetMaterialsFromInstances
            ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&local_6b0,
             &local_658);
  FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)&local_508,pFVar17);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterial>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_658,&this->Materials);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,
             (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&local_6b0,
             &this->MaterialInstances);
  FDataflowNode::
  SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_6c0,&this->InstancedMeshes);
  if (local_658.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_658.AllocatorInstance.Data);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)local_6c0.AllocatorInstance.Data,
             local_6c0.ArrayNum);
  if ((TObjectPtr<UStaticMesh_const_>_u_0 *)local_6c0.AllocatorInstance.Data !=
      (TObjectPtr<UStaticMesh_const_>_u_0 *)0x0) {
    FMemory::Free(local_6c0.AllocatorInstance.Data);
  }
  if (local_6b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.AllocatorInstance.Data);
  }
  FGeometryCollection::~FGeometryCollection(&local_508);
  return;
}

// FCreateGeometryCollectionFromSourcesDataflowNode @ 14e91a400

FCreateGeometryCollectionFromSourcesDataflowNode * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::FCreateGeometryCollectionFromSourcesDataflowNode
          (FCreateGeometryCollectionFromSourcesDataflowNode *this,FNodeParameters *param_1,
          FGuid *param_2)

{
  FDataflowOutput *pFVar1;
  FName local_res8;
  FConnectionReference local_68;
  FConnectionReference local_48;
  
  local_68.Reference = *(void **)param_2;
  local_68.Index = param_2->C;
  local_68._12_4_ = param_2->D;
  FDataflowNode::FDataflowNode((FDataflowNode *)this,param_1,(FGuid *)&local_68);
  this->_padding_ = (longlong)&___7FCreateGeometryCollectionFromSourcesDataflowNode__6B_;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->MaterialInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstances).ArrayNum = 0;
  (this->MaterialInstances).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_68.Reference = &this->Sources;
  FDataflowNode::RegisterInputConnectionInternal((FDataflowNode *)this,&local_68,&local_res8);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Collection;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->Materials;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->MaterialInstances;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  local_68.Reference = (void *)0x0;
  local_68.Index = -1;
  local_68.ContainerReference = (void *)0x0;
  local_48.Index = -1;
  local_48.ContainerReference = (void *)0x0;
  local_48.Reference = &this->InstancedMeshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FCreateGeometryCollectionFromSourcesDataflowNode @ 14e91a5f0

FCreateGeometryCollectionFromSourcesDataflowNode * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::FCreateGeometryCollectionFromSourcesDataflowNode
          (FCreateGeometryCollectionFromSourcesDataflowNode *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCreateGeometryCollectionFromSourcesDataflowNode__6B_;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->MaterialInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MaterialInstances).ArrayNum = 0;
  (this->MaterialInstances).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  return this;
}

// ~FCreateGeometryCollectionFromSourcesDataflowNode @ 14e9331d0

void __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode::~FCreateGeometryCollectionFromSourcesDataflowNode
          (FCreateGeometryCollectionFromSourcesDataflowNode *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)(this->InstancedMeshes).AllocatorInstance.Data,
             (this->InstancedMeshes).ArrayNum);
  pFVar1 = (this->InstancedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialInstances).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Materials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FManagedArrayCollection::~FManagedArrayCollection(&this->Collection);
  DestructItems<FGeometryCollectionSource,int>
            ((FGeometryCollectionSource *)(this->Sources).AllocatorInstance.Data,
             (this->Sources).ArrayNum);
  pFVar1 = (this->Sources).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDataflowNode::~FDataflowNode((FDataflowNode *)this);
  return;
}

