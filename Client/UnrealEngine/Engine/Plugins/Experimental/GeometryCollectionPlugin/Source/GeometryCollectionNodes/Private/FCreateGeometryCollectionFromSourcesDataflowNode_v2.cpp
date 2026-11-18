// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 14

// StaticStruct @ 14e868390

UScriptStruct * __cdecl FCreateGeometryCollectionFromSourcesDataflowNode_v2::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2
                         ,(UObject *)pUVar1,L"CreateGeometryCollectionFromSourcesDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
         OuterSingleton;
}

// GetType @ 14e868730

FName __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::GetType
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCreateGeometryCollectionFromSourcesDataflowNode_v2");
  return in_RDX;
}

// IsA @ 14e868760

bool __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::IsA
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this,FName param_1)

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
  ::FName::FName(local_res18,"FCreateGeometryCollectionFromSourcesDataflowNode_v2");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8687c8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8687c8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e8687e6;
      }
    }
  }
  bVar5 = true;
LAB_14e8687e6:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e868820

FStructOnScope * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::NewStructOnScope
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
        OuterSingleton == (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
      OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2
                           ,(UObject *)pUVar2,L"CreateGeometryCollectionFromSourcesDataflowNode_v2")
      ;
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2
                               .OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e8688a0

void __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::SerializeInternal
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2
                         ,(UObject *)pUVar1,L"CreateGeometryCollectionFromSourcesDataflowNode_v2");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
             OuterSingleton,param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
             OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e86891d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e868930

FName __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::GetDisplayName
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CreateGeometryCollectionFromSources");
  return in_RDX;
}

// GetCategory @ 14e868960

FName __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::GetCategory
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Asset");
  return in_RDX;
}

// GetTags @ 14e8689d0

FString * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::GetTags
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this,FString *__return_storage_ptr__
          )

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e868bf0

UScriptStruct * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::TypedScriptStruct
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2
                         ,(UObject *)pUVar1,L"CreateGeometryCollectionFromSourcesDataflowNode_v2");
  }
  return Z_Registration_Info_UScriptStruct_FCreateGeometryCollectionFromSourcesDataflowNode_v2.
         OuterSingleton;
}

// Evaluate @ 14e868d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::Evaluate
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this,FContext *param_1,
          FDataflowOutput *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  FDataflowInput *pFVar10;
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> *pTVar11;
  TObjectPtr<UStaticMesh_const_>_u_0 TVar12;
  UClass *pUVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  ForAnyElementType this_00;
  TObjectPtr<UStaticMesh_const_>_u_0 *pTVar16;
  TObjectPtr<UStaticMesh_const_>_u_0 TVar17;
  longlong lVar18;
  TObjectPtr<UStaticMesh_const_>_u_0 *pTVar19;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar20;
  FManagedArrayCollection *pFVar21;
  FGeometryCollectionSource *pFVar22;
  FScriptContainerElement *pFVar23;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *pTVar24;
  undefined1 auStackY_7d8 [32];
  undefined1 local_788;
  undefined1 local_787 [7];
  TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> local_780;
  TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_> local_770;
  TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> local_760;
  TObjectPtr<UStaticMesh_const_>_u_0 local_750;
  ForAnyElementType FStack_748;
  undefined8 local_740;
  undefined4 local_738;
  ForAnyElementType local_730;
  int local_728;
  int local_724;
  uint local_720;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_718;
  FGeometryCollectionSource *local_708;
  longlong local_700;
  undefined8 local_6f8;
  FName local_6f0;
  TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *local_6e8;
  FCreateGeometryCollectionFromSourcesDataflowNode_v2 *local_6e0;
  FContext *local_6d8;
  FManagedArrayCollection *local_6d0;
  FConnectionReference local_6c8;
  FString local_6b0;
  FConnectionReference local_6a0;
  FLinearColor_u_0 local_688;
  FCollectionInstancedMeshFacade local_678;
  FCollectionHierarchyFacade local_638;
  TObjectPtr<UStaticMesh>_u_0 local_588 [2];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  ForAnyElementType local_518;
  undefined8 local_510;
  FGeometryCollection local_508;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_7d8;
  pFVar21 = &this->Collection;
  local_6e0 = this;
  local_6d8 = param_1;
  local_6d0 = pFVar21;
  puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if (((((FManagedArrayCollection *)puVar9 != pFVar21) &&
       (puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
       (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)puVar9 !=
       &this->Materials)) &&
      (puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_> *)puVar9 !=
      &this->InstancedMeshes)) &&
     ((puVar9 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2),
      (TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_> *)puVar9 != &this->RootProxyMeshes
      && (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5163137966440186260>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\GeometryCollectionPlugin\\Source\\GeometryCollectionNodes\\Private\\Dataflow\\GeometryCollectionAssetNodes.cpp"
                             ,0x194,
                             "Out->IsA(&Collection) || Out->IsA(&Materials) || Out->IsA(&InstancedMeshes) || Out->IsA(&RootProxyMeshes)"
                            ), bVar2)))) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_770.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_770.ArrayNum = 0;
  local_770.ArrayMax = 0;
  local_6a0.ContainerReference = (void *)0x0;
  local_6a0.Index = -1;
  local_6a0.Reference = &this->Sources;
  pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6a0);
  if (pFVar10->Connection == (FDataflowOutput *)0x0) {
    pcVar1 = *(code **)(param_1->_padding_ + 0x18);
    ::FName::FName(&local_6f0,"TEngineContext");
    cVar3 = (*pcVar1)(param_1,local_6f0);
    if (((cVar3 != '\0') && (param_1 != (FContext *)0x0)) && (param_1[1]._padding_ != 0)) {
      pUVar13 = Z_Construct_UClass_UGeometryCollection_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)(param_1 + 1),pUVar13);
      if ((bVar2) && (param_1[1]._padding_ != 0)) {
        local_788 = 0;
        `FCreateGeometryCollectionFromSourcesDataflowNode_v2::Evaluate'::__l13::<lambda_1>::
        operator()(&local_788);
      }
    }
  }
  else {
    local_6c8.Index = -1;
    local_6c8.ContainerReference = (void *)0x0;
    local_6c8.Reference = &this->Sources;
    pFVar10 = FDataflowNode::FindInput((FDataflowNode *)this,&local_6c8);
    pTVar11 = FDataflowInput::
              GetValue<TArray<FGeometryCollectionSource,TSizedDefaultAllocator<32>_>_>
                        (pFVar10,param_1,local_6c8.Reference);
    if (&local_770 != pTVar11) {
      DestructItems<FGeometryCollectionSource,int>
                ((FGeometryCollectionSource *)local_770.AllocatorInstance.Data,local_770.ArrayNum);
      iVar4 = pTVar11->ArrayNum;
      pFVar22 = (FGeometryCollectionSource *)(pTVar11->AllocatorInstance).Data;
      local_770.ArrayNum = iVar4;
      if ((iVar4 == 0) && (local_770.ArrayMax == 0)) {
        local_770.ArrayNum = 0;
        local_770.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xb0,0x10,iVar4,local_770.ArrayMax,&local_770.AllocatorInstance,iVar4,
                   &local_770.ArrayMax);
        ConstructItems<FGeometryCollectionSource,FGeometryCollectionSource,int>
                  (local_770.AllocatorInstance.Data,pFVar22,iVar4);
      }
    }
  }
  if (local_770.ArrayNum == 0) {
    ::FString::FString(&local_6b0,
                       L"Geometry source array is empty, this will result in an empty collection");
    UE::Dataflow::FContext::Warning(param_1,&local_6b0,(FDataflowNode *)this,param_2);
    if (local_6b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6b0.Data.AllocatorInstance.Data);
    }
  }
  local_688 = FLinearColor::White.field0_0x0;
  FGeometryCollection::FGeometryCollection
            (&local_508,(FGeometryCollectionDefaults *)&local_688._s_0);
  local_718.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_718.ArrayNum = 0;
  local_718.ArrayMax = 0;
  local_780.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_780.ArrayNum = 0;
  local_780.ArrayMax = 0;
  local_760.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_760.ArrayNum = 0;
  local_760.ArrayMax = 0;
  GeometryCollection::Facades::FCollectionInstancedMeshFacade::FCollectionInstancedMeshFacade
            (&local_678,(FManagedArrayCollection *)&local_508);
  GeometryCollection::Facades::FCollectionInstancedMeshFacade::DefineSchema(&local_678);
  local_720 = 0;
  if (0 < local_770.ArrayNum) {
    local_700 = 0;
    do {
      lVar18 = local_700;
      uVar5 = 0;
      if ((int)local_720 < local_770.ArrayNum) {
        uVar5 = ~local_720 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar22 = (FGeometryCollectionSource *)(local_770.AllocatorInstance.Data + lVar18);
      local_708 = pFVar22;
      iVar4 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)&local_508,FTransformCollection::TransformGroup)
      ;
      iVar8 = local_718.ArrayNum;
      uVar14 = (ulonglong)local_718.ArrayNum;
      pFVar23 = local_718.AllocatorInstance.Data + uVar14 * 8;
      FVar15.Data = local_718.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar14 != iVar8) {
          local_787[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_787);
          uVar14 = local_718._8_8_ & 0xffffffff;
        }
        if (FVar15.Data == pFVar23) break;
        FVar15.Data = FVar15.Data + 8;
      }
      FGeometryCollectionEngineConversion::AppendGeometryCollectionSource
                (pFVar22,&local_508,&local_718,false);
      TVar17.DebugPtr = (UStaticMesh *)0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (FVar15.Data = local_718.AllocatorInstance.Data, TVar12.DebugPtr = TVar17.DebugPtr,
         iVar8 = local_718.ArrayNum, 0 < local_718.ArrayNum)) {
        do {
          if (*(UObject **)FVar15.Data != (UObject *)0x0) {
            UE::GC::MarkAsReachable(*(UObject **)FVar15.Data);
            iVar8 = local_718.ArrayNum;
          }
          TVar12._0_4_ = TVar12._0_4_ + 1;
          TVar12._4_4_ = 0;
          FVar15.Data = FVar15.Data + 8;
        } while ((int)TVar12._0_4_ < iVar8);
      }
      TVar12.DebugPtr =
           (UStaticMesh *)
           FSoftObjectPath::TryLoad((FSoftObjectPath *)pFVar22,(FUObjectSerializeContext *)0x0);
      if (TVar12.DebugPtr == (UStaticMesh *)0x0) {
LAB_14e86912c:
        TVar12.DebugPtr = TVar17.DebugPtr;
      }
      else {
        pUVar13 = Z_Construct_UClass_UStaticMesh_NoRegister();
        iVar8 = (int)pUVar13->_padding_;
        if ((*(int *)((TVar12.DebugPtr)->_padding_ + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)((TVar12.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar13->_padding_)) goto LAB_14e86912c;
      }
      local_740 = 0;
      local_750.DebugPtr = (UStaticMesh *)0x0;
      FStack_748.Data = (FScriptContainerElement *)0x0;
      local_724 = 0;
      local_738 = 0;
      local_730.Data = (FScriptContainerElement *)0x0;
      local_728 = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar17.DebugPtr = (UStaticMesh *)0x0, TVar12.DebugPtr != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
        TVar17.DebugPtr = (UStaticMesh *)(local_740 >> 0x20);
      }
      pTVar24 = &pFVar22->SourceMaterial;
      local_750 = TVar12;
      local_6e8 = pTVar24;
      if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&FStack_748 !=
          pTVar24) {
        iVar8 = (pFVar22->SourceMaterial).ArrayNum;
        pFVar23 = (pTVar24->AllocatorInstance).Data;
        local_740 = CONCAT44(local_740._4_4_,iVar8);
        if ((iVar8 == 0) && (TVar17._0_4_ == 0)) {
          local_740 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar8,TVar17._0_4_,&FStack_748,iVar8,(int *)((longlong)&local_740 + 4));
          ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                    (FStack_748.Data,(TObjectPtr<UMaterialInterface> *)pFVar23,iVar8);
        }
      }
      local_738 = 0;
      local_728 = 0;
      if ((local_724 < 0) && (local_724 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_730,0,&local_724);
      }
      FVar15.Data = local_780.AllocatorInstance.Data;
      pTVar19 = (TObjectPtr<UStaticMesh_const_>_u_0 *)
                (local_780.AllocatorInstance.Data + (longlong)local_780.ArrayNum * 0x30);
      this_00.Data = local_780.AllocatorInstance.Data;
      if ((TObjectPtr<UStaticMesh_const_>_u_0 *)local_780.AllocatorInstance.Data != pTVar19) {
        do {
          bVar2 = FGeometryCollectionAutoInstanceMesh::operator==
                            ((FGeometryCollectionAutoInstanceMesh *)this_00.Data,
                             (FGeometryCollectionAutoInstanceMesh *)&local_750.ObjectPtr);
          if (bVar2) {
            lVar18 = ((longlong)this_00.Data - (longlong)FVar15.Data) / 6 +
                     ((longlong)this_00.Data - (longlong)FVar15.Data >> 0x3f);
            uVar5 = (int)(lVar18 >> 3) - (int)(lVar18 >> 0x3f);
            if (uVar5 != 0xffffffff) goto LAB_14e8693df;
            break;
          }
          this_00.Data = this_00.Data + 0x30;
        } while ((TObjectPtr<UStaticMesh_const_>_u_0 *)this_00.Data != pTVar19);
      }
      uVar5 = local_780.ArrayNum;
      if ((local_780.AllocatorInstance.Data <= &local_750) &&
         (&local_750 <
          (TObjectPtr<UStaticMesh_const_>_u_0 *)
          (local_780.AllocatorInstance.Data + (longlong)local_780.ArrayMax * 0x30))) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar5 = local_780.ArrayNum;
      }
      if (uVar5 == local_780.ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_780.AllocatorInstance,&local_780.ArrayMax);
      }
      local_780.ArrayNum = uVar5 + 1;
      pTVar19 = (TObjectPtr<UStaticMesh_const_>_u_0 *)
                (local_780.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30);
      pTVar19->DebugPtr = (UStaticMesh *)local_750;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_750.DebugPtr != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_750.DebugPtr);
      }
      FVar15.Data = FStack_748.Data;
      pTVar16 = pTVar19 + 1;
      pTVar16->DebugPtr = (UStaticMesh *)0x0;
      iVar8 = (int)local_740;
      *(int *)(pTVar19 + 2) = (int)local_740;
      if ((int)local_740 == 0) {
        *(int *)((longlong)pTVar19 + 0x14) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(int)local_740,0,(ForAnyElementType *)&pTVar16->ObjectPtr,(int)local_740,
                   (int *)((longlong)pTVar19 + 0x14));
        ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                  ((FScriptContainerElement *)pTVar16->DebugPtr,
                   (TObjectPtr<UMaterialInterface> *)FVar15.Data,iVar8);
      }
      FVar15.Data = local_730.Data;
      pTVar16 = pTVar19 + 4;
      *(undefined4 *)(pTVar19 + 3) = local_738;
      pTVar16->DebugPtr = (UStaticMesh *)0x0;
      lVar18 = (longlong)local_728;
      *(int *)(pTVar19 + 5) = local_728;
      if (local_728 == 0) {
        *(int *)((longlong)pTVar19 + 0x2c) = 0;
        pTVar24 = local_6e8;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_728,0,(ForAnyElementType *)&pTVar16->ObjectPtr,local_728,
                   (int *)((longlong)pTVar19 + 0x2c));
        memcpy((FScriptContainerElement *)pTVar16->DebugPtr,FVar15.Data,lVar18 << 2);
        pTVar24 = local_6e8;
      }
LAB_14e8693df:
      uVar6 = 0;
      if ((int)uVar5 < local_780.ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(int *)(local_780.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x18) =
           *(int *)(local_780.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x18) + 1;
      uVar6 = 0;
      if ((int)uVar5 < local_780.ArrayNum) {
        uVar6 = ~uVar5 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar22 = local_708;
      pFVar23 = local_780.AllocatorInstance.Data + (longlong)(int)uVar5 * 0x30 + 0x20;
      pTVar20 = &local_708->InstanceCustomData;
      if (((TArray<float,TSizedDefaultAllocator<32>_> *)pFVar23 == pTVar20) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = (pFVar22->InstanceCustomData).ArrayNum;
      if (iVar8 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar8,(ForAnyElementType *)pFVar23,(int *)(pFVar23 + 8),
                           (int *)(pFVar23 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar23 + (longlong)iVar7 * 4,(pTVar20->AllocatorInstance).Data,(longlong)iVar8 << 2
              );
      }
      iVar8 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)&local_508,FTransformCollection::TransformGroup)
      ;
      for (; iVar4 < iVar8; iVar4 = iVar4 + 1) {
        GeometryCollection::Facades::FCollectionInstancedMeshFacade::SetIndex
                  (&local_678,iVar4,uVar5);
      }
      local_588[0].DebugPtr = (UStaticMesh *)0x0;
      local_518.Data = (FScriptContainerElement *)0x0;
      local_510 = 0;
      local_578._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_578._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_578._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_568._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_568._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_568._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_558._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_558._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_558._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_548._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_548._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_548._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_538._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_538._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_538._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_528._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_528._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_528._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      iVar4 = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (iVar4 = 0, TVar12.DebugPtr != (UStaticMesh *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar12.DebugPtr);
        iVar4 = local_510._4_4_;
      }
      local_578 = *(undefined1 (*) [16])(local_708->LocalTransform).Rotation.XY.m128d_f64;
      local_568 = *(undefined1 (*) [16])(local_708->LocalTransform).Rotation.ZW.m128d_f64;
      local_558 = *(undefined1 (*) [16])(local_708->LocalTransform).Translation.XY.m128d_f64;
      local_548 = *(undefined1 (*) [16])(local_708->LocalTransform).Translation.ZW.m128d_f64;
      local_538 = *(undefined1 (*) [16])(local_708->LocalTransform).Scale3D.XY.m128d_f64;
      local_528 = *(undefined1 (*) [16])(local_708->LocalTransform).Scale3D.ZW.m128d_f64;
      local_588[0].DebugPtr = TVar12.DebugPtr;
      if ((TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&local_518 !=
          pTVar24) {
        iVar8 = pTVar24->ArrayNum;
        pFVar23 = (pTVar24->AllocatorInstance).Data;
        local_510 = CONCAT44(local_510._4_4_,iVar8);
        if ((iVar8 == 0) && (iVar4 == 0)) {
          local_510 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar8,iVar4,&local_518,iVar8,(int *)((longlong)&local_510 + 4));
          ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                    (local_518.Data,(TObjectPtr<UMaterialInterface> *)pFVar23,iVar8);
        }
      }
      if (((local_760.AllocatorInstance.Data <= local_588) &&
          (local_588 <
           (TObjectPtr<UStaticMesh>_u_0 *)
           (local_760.AllocatorInstance.Data + (longlong)local_760.ArrayMax * 0x80))) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = local_760.ArrayNum;
      if (local_760.ArrayNum == local_760.ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1080,&local_760.AllocatorInstance,&local_760.ArrayMax);
      }
      pTVar19 = (TObjectPtr<UStaticMesh_const_>_u_0 *)
                (local_760.AllocatorInstance.Data + (longlong)iVar4 * 0x80);
      local_760.ArrayNum = iVar4 + 1;
      pTVar19->DebugPtr = (UStaticMesh *)local_588[0];
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_588[0] != (TObjectPtr<UStaticMesh>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_588[0]);
      }
      FVar15.Data = local_518.Data;
      pTVar19[2] = (TObjectPtr<UStaticMesh_const_>_u_0)local_578._0_8_;
      pTVar19[3] = (TObjectPtr<UStaticMesh_const_>_u_0)local_578._8_8_;
      pTVar19[4] = (TObjectPtr<UStaticMesh_const_>_u_0)local_568._0_8_;
      pTVar19[5] = (TObjectPtr<UStaticMesh_const_>_u_0)local_568._8_8_;
      pTVar19[6] = (TObjectPtr<UStaticMesh_const_>_u_0)local_558._0_8_;
      pTVar19[7] = (TObjectPtr<UStaticMesh_const_>_u_0)local_558._8_8_;
      pTVar19[8] = (TObjectPtr<UStaticMesh_const_>_u_0)local_548._0_8_;
      pTVar19[9] = (TObjectPtr<UStaticMesh_const_>_u_0)local_548._8_8_;
      pTVar19[10] = (TObjectPtr<UStaticMesh_const_>_u_0)local_538._0_8_;
      pTVar19[0xb] = (TObjectPtr<UStaticMesh_const_>_u_0)local_538._8_8_;
      pTVar19[0xc] = (TObjectPtr<UStaticMesh_const_>_u_0)local_528._0_8_;
      pTVar19[0xd] = (TObjectPtr<UStaticMesh_const_>_u_0)local_528._8_8_;
      pTVar16 = pTVar19 + 0xe;
      pTVar16->DebugPtr = (UStaticMesh *)0x0;
      iVar4 = (int)local_510;
      *(int *)(pTVar19 + 0xf) = (int)local_510;
      if ((int)local_510 == 0) {
        *(int *)((longlong)pTVar19 + 0x7c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(int)local_510,0,(ForAnyElementType *)&pTVar16->ObjectPtr,(int)local_510,
                   (int *)((longlong)pTVar19 + 0x7c));
        ConstructItems<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,int>
                  ((FScriptContainerElement *)pTVar16->DebugPtr,
                   (TObjectPtr<UMaterialInterface> *)FVar15.Data,iVar4);
      }
      if (local_518.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Data);
      }
      if (local_730.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_730.Data);
      }
      if (FStack_748.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_748.Data);
      }
      local_720 = local_720 + 1;
      local_700 = local_700 + 0xb0;
      pFVar21 = local_6d0;
      this = local_6e0;
      param_1 = local_6d8;
    } while ((int)local_720 < local_770.ArrayNum);
  }
  FGeometryCollection::ReindexMaterials(&local_508);
  bVar2 = FGeometryCollectionClusteringUtility::ContainsMultipleRootBones(&local_508);
  if (bVar2) {
    local_6f8 = 0;
    FGeometryCollectionClusteringUtility::ClusterAllBonesUnderNewRoot(&local_508,(FName)0x0,true);
  }
  Chaos::Facades::FCollectionHierarchyFacade::FCollectionHierarchyFacade
            (&local_638,(FManagedArrayCollection *)&local_508);
  Chaos::Facades::FCollectionHierarchyFacade::GenerateLevelAttribute(&local_638);
  FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
            ((FDataflowNode *)this,param_1,(FManagedArrayCollection *)&local_508,pFVar21);
  FDataflowNode::
  SetValue<TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>,TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,
             (TArray<TObjectPtr<UMaterialInterface>,TSizedDefaultAllocator<32>_> *)&local_718,
             &this->Materials);
  FDataflowNode::
  SetValue<TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>,TArray<FGeometryCollectionAutoInstanceMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_780,&this->InstancedMeshes);
  FDataflowNode::
  SetValue<TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>,TArray<FDataflowRootProxyMesh,TSizedDefaultAllocator<32>_>_>
            ((FDataflowNode *)this,param_1,&local_760,&this->RootProxyMeshes);
  DestructItems<FDataflowRootProxyMesh,int>
            ((FDataflowRootProxyMesh *)local_760.AllocatorInstance.Data,local_760.ArrayNum);
  if ((TObjectPtr<UStaticMesh>_u_0 *)local_760.AllocatorInstance.Data !=
      (TObjectPtr<UStaticMesh>_u_0 *)0x0) {
    FMemory::Free(local_760.AllocatorInstance.Data);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)local_780.AllocatorInstance.Data,
             local_780.ArrayNum);
  if ((TObjectPtr<UStaticMesh_const_>_u_0 *)local_780.AllocatorInstance.Data !=
      (TObjectPtr<UStaticMesh_const_>_u_0 *)0x0) {
    FMemory::Free(local_780.AllocatorInstance.Data);
  }
  if (local_718.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_718.AllocatorInstance.Data);
  }
  FGeometryCollection::~FGeometryCollection(&local_508);
  DestructItems<FGeometryCollectionSource,int>
            ((FGeometryCollectionSource *)local_770.AllocatorInstance.Data,local_770.ArrayNum);
  if ((FGeometryCollectionSource *)local_770.AllocatorInstance.Data !=
      (FGeometryCollectionSource *)0x0) {
    FMemory::Free(local_770.AllocatorInstance.Data);
  }
  return;
}

// FCreateGeometryCollectionFromSourcesDataflowNode_v2 @ 14e91a670

FCreateGeometryCollectionFromSourcesDataflowNode_v2 * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::
FCreateGeometryCollectionFromSourcesDataflowNode_v2
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this,FNodeParameters *param_1,
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
  this->_padding_ = (longlong)&___7FCreateGeometryCollectionFromSourcesDataflowNode_v2__6B_;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
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
  local_48.Reference = &this->InstancedMeshes;
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
  local_48.Reference = &this->RootProxyMeshes;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_48,&local_res8);
  if (local_68.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_68);
  }
  return this;
}

// FCreateGeometryCollectionFromSourcesDataflowNode_v2 @ 14e91a860

FCreateGeometryCollectionFromSourcesDataflowNode_v2 * __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::
FCreateGeometryCollectionFromSourcesDataflowNode_v2
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this)

{
  FDataflowNode::FDataflowNode((FDataflowNode *)this);
  this->_padding_ = (longlong)&___7FCreateGeometryCollectionFromSourcesDataflowNode_v2__6B_;
  (this->Sources).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Sources).ArrayNum = 0;
  (this->Sources).ArrayMax = 0;
  FManagedArrayCollection::FManagedArrayCollection(&this->Collection);
  (this->Materials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Materials).ArrayNum = 0;
  (this->Materials).ArrayMax = 0;
  (this->InstancedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InstancedMeshes).ArrayNum = 0;
  (this->InstancedMeshes).ArrayMax = 0;
  (this->RootProxyMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RootProxyMeshes).ArrayNum = 0;
  (this->RootProxyMeshes).ArrayMax = 0;
  return this;
}

// ~FCreateGeometryCollectionFromSourcesDataflowNode_v2 @ 14e933260

void __thiscall
FCreateGeometryCollectionFromSourcesDataflowNode_v2::
~FCreateGeometryCollectionFromSourcesDataflowNode_v2
          (FCreateGeometryCollectionFromSourcesDataflowNode_v2 *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FDataflowRootProxyMesh,int>
            ((FDataflowRootProxyMesh *)(this->RootProxyMeshes).AllocatorInstance.Data,
             (this->RootProxyMeshes).ArrayNum);
  pFVar1 = (this->RootProxyMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FGeometryCollectionAutoInstanceMesh,int>
            ((FGeometryCollectionAutoInstanceMesh *)(this->InstancedMeshes).AllocatorInstance.Data,
             (this->InstancedMeshes).ArrayNum);
  pFVar1 = (this->InstancedMeshes).AllocatorInstance.Data;
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

// operator() @ 15059b510

bool __thiscall
`FCreateGeometryCollectionFromSourcesDataflowNode_v2::Evaluate'::__l13::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5163137966440186277>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5163137966440186277>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

