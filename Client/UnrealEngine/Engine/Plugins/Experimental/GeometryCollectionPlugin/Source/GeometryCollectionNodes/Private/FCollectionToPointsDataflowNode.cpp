// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e843030

UScriptStruct * __cdecl FCollectionToPointsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToPointsDataflowNode,(UObject *)pUVar1
                         ,L"CollectionToPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton;
}

// GetType @ 14e843310

FName __thiscall FCollectionToPointsDataflowNode::GetType(FCollectionToPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FCollectionToPointsDataflowNode");
  return in_RDX;
}

// IsA @ 14e843380

bool __thiscall
FCollectionToPointsDataflowNode::IsA(FCollectionToPointsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FCollectionToPointsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e8433e8;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e8433e8:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e843406;
      }
    }
  }
  bVar5 = true;
LAB_14e843406:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e843440

FStructOnScope * __thiscall
FCollectionToPointsDataflowNode::NewStructOnScope(FCollectionToPointsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToPointsDataflowNode,
                           (UObject *)pUVar2,L"CollectionToPointsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e843540

void __thiscall
FCollectionToPointsDataflowNode::SerializeInternal
          (FCollectionToPointsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToPointsDataflowNode,(UObject *)pUVar1
                         ,L"CollectionToPointsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e8435bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e8435d0

FName __thiscall
FCollectionToPointsDataflowNode::GetDisplayName(FCollectionToPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"CollectionToPoints");
  return in_RDX;
}

// GetCategory @ 14e843640

FName __thiscall FCollectionToPointsDataflowNode::GetCategory(FCollectionToPointsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"GeometryCollection|Utilities");
  return in_RDX;
}

// GetTags @ 14e843670

FString * __thiscall
FCollectionToPointsDataflowNode::GetTags
          (FCollectionToPointsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e843750

UScriptStruct * __thiscall
FCollectionToPointsDataflowNode::TypedScriptStruct(FCollectionToPointsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollectionToPointsDataflowNode,(UObject *)pUVar1
                         ,L"CollectionToPointsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FCollectionToPointsDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e843810

/* WARNING: Removing unreachable block (ram,0x00014e843a37) */
/* WARNING: Removing unreachable block (ram,0x00014e843a45) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FCollectionToPointsDataflowNode::GetRenderParametersImpl
          (FCollectionToPointsDataflowNode *this,
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
  ::FName::FName(&local_res10,"Points");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res10;
  pFVar6 = ::FName::FName(&local_res20,"TArray<FVector>");
  FVar1 = *pFVar6;
  pFVar7 = ::FString::FString(&local_78,"PointsRender");
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

// Evaluate @ 14e844010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FCollectionToPointsDataflowNode::Evaluate
          (FCollectionToPointsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  FName FVar14;
  TManagedArray<int> *pTVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  FDataflowInput *pFVar22;
  FManagedArrayCollection *pFVar23;
  FName *pFVar24;
  TManagedArray<UE::Math::TVector<float>_> *pTVar25;
  TManagedArray<int> *pTVar26;
  TManagedArray<int> *pTVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  longlong lVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar41;
  undefined4 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auVar52 [16];
  undefined1 auStackY_408 [32];
  uint local_3d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_3d0;
  TManagedArray<UE::Math::TVector<float>_> *local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  TManagedArray<int> *local_3a0;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_398;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_388;
  TManagedArray<int> *local_378;
  TManagedArray<int> *local_370;
  FCollectionToPointsDataflowNode *local_368;
  FContext *local_360;
  FConnectionReference local_358;
  FConnectionReference local_340;
  FConnectionReference local_328;
  FName local_310;
  FName local_308;
  FName local_300;
  FName local_2f8;
  FName local_2f0;
  FName local_2e8;
  FName local_2e0;
  FName local_2d8 [2];
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined1 local_2b8 [16];
  double local_2a8;
  undefined1 local_2a0 [16];
  double local_290;
  FCollectionTransformFacade local_288;
  FManagedArrayCollection local_198;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_408;
  pFVar23 = &this->Collection;
  local_368 = this;
  local_360 = param_1;
  puVar21 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar21 == pFVar23) {
    local_358.ContainerReference = (void *)0x0;
    local_358.Index = -1;
    local_358.Reference = pFVar23;
    pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_358);
    if (pFVar22->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,local_358.Reference,pFVar23);
    }
    else {
      local_340.Index = -1;
      local_340.ContainerReference = (void *)0x0;
      local_340.Reference = pFVar23;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_358,&local_340);
    }
  }
  else {
    puVar21 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar21 == &this->Points) {
      local_328.ContainerReference = (void *)0x0;
      local_328.Index = -1;
      local_328.Reference = pFVar23;
      pFVar22 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
      if (pFVar22->Connection != (FDataflowOutput *)0x0) {
        pFVar23 = FDataflowNode::GetValue<FManagedArrayCollection>
                            ((FDataflowNode *)this,param_1,pFVar23);
        FManagedArrayCollection::FManagedArrayCollection(&local_198,pFVar23);
        FVar14 = FGeometryCollection::VerticesGroup;
        pFVar24 = ::FName::FName(&local_310,"Vertex");
        bVar16 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar24,FVar14);
        FVar14 = FTransformCollection::TransformGroup;
        if (bVar16) {
          pFVar24 = ::FName::FName(&local_308,"TransformToGeometryIndex");
          bVar16 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar24,FVar14);
          FVar14 = FGeometryCollection::GeometryGroup;
          if (bVar16) {
            pFVar24 = ::FName::FName(&local_300,"VertexStart");
            bVar16 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar24,FVar14);
            FVar14 = FGeometryCollection::GeometryGroup;
            if (bVar16) {
              pFVar24 = ::FName::FName(&local_2f8,"VertexCount");
              bVar16 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar24,FVar14);
              if (bVar16) {
                GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
                          (&local_288,&local_198);
                bVar16 = GeometryCollection::Facades::FCollectionTransformFacade::IsValid
                                   (&local_288);
                if (bVar16) {
                  GeometryCollection::Facades::FCollectionTransformFacade::
                  ComputeCollectionSpaceTransforms(&local_288,&local_398);
                  FVar14 = FGeometryCollection::VerticesGroup;
                  pFVar24 = ::FName::FName(&local_2f0,"Vertex");
                  pTVar25 = FManagedArrayCollection::GetAttribute<UE::Math::TVector<float>_>
                                      (&local_198,*pFVar24,FVar14);
                  FVar14 = FTransformCollection::TransformGroup;
                  local_3b8 = pTVar25;
                  pFVar24 = ::FName::FName(&local_2e8,"TransformToGeometryIndex");
                  local_378 = FManagedArrayCollection::GetAttribute<int>(&local_198,*pFVar24,FVar14)
                  ;
                  FVar14 = FGeometryCollection::GeometryGroup;
                  pFVar24 = ::FName::FName(&local_2e0,"VertexStart");
                  pTVar26 = FManagedArrayCollection::GetAttribute<int>(&local_198,*pFVar24,FVar14);
                  FVar14 = FGeometryCollection::GeometryGroup;
                  local_3a0 = pTVar26;
                  pFVar24 = ::FName::FName(local_2d8,"VertexCount");
                  pTVar27 = FManagedArrayCollection::GetAttribute<int>(&local_198,*pFVar24,FVar14);
                  local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3d0.ArrayNum = 0;
                  local_3d0.ArrayMax = 0;
                  local_370 = pTVar27;
                  iVar17 = (**(code **)(*(longlong *)pTVar25 + 0x60))(pTVar25);
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,iVar17,&local_3d0.AllocatorInstance,&local_3d0.ArrayNum,
                             &local_3d0.ArrayMax);
                  local_3d8 = 0;
                  if (0 < local_398.ArrayNum) {
                    local_3a8 = 0;
                    local_3b0 = 0;
                    do {
                      lVar31 = local_3a8;
                      lVar30 = local_3b0;
                      uVar18 = 0;
                      if ((int)local_3d8 < local_398.ArrayNum) {
                        uVar18 = ~local_3d8 >> 0x1f;
                      }
                      if ((uVar18 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      pTVar15 = local_378;
                      pFVar1 = local_398.AllocatorInstance.Data + lVar30 + 0x50;
                      uVar42 = *(undefined4 *)pFVar1;
                      uVar51 = *(undefined4 *)(pFVar1 + 4);
                      uVar49 = *(undefined4 *)(pFVar1 + 8);
                      uVar50 = *(undefined4 *)(pFVar1 + 0xc);
                      auVar2 = *(undefined1 (*) [16])(local_398.AllocatorInstance.Data + lVar30);
                      auVar52 = *(undefined1 (*) [16])
                                 (local_398.AllocatorInstance.Data + lVar30 + 0x10);
                      dVar9 = *(double *)(local_398.AllocatorInstance.Data + lVar30 + 0x20);
                      dVar10 = *(double *)(local_398.AllocatorInstance.Data + lVar30 + 0x20 + 8);
                      dVar11 = *(double *)(local_398.AllocatorInstance.Data + lVar30 + 0x30);
                      dVar12 = *(double *)(local_398.AllocatorInstance.Data + lVar30 + 0x40);
                      dVar13 = *(double *)(local_398.AllocatorInstance.Data + lVar30 + 0x40 + 8);
                      uVar19 = 0;
                      uVar18 = uVar19;
                      if ((int)local_3d8 < *(int *)&local_378->field_0x18) {
                        uVar18 = ~local_3d8 >> 0x1f;
                      }
                      local_2c8 = uVar42;
                      uStack_2c4 = uVar51;
                      uStack_2c0 = uVar49;
                      uStack_2bc = uVar50;
                      if ((uVar18 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      uVar18 = *(uint *)(lVar31 + *(longlong *)&pTVar15->field_0x10);
                      uVar28 = uVar19;
                      if ((int)uVar18 < *(int *)&pTVar26->field_0x18) {
                        uVar28 = ~uVar18 >> 0x1f;
                      }
                      if ((uVar28 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      iVar17 = *(int *)(*(longlong *)&local_3a0->field_0x10 +
                                       (longlong)(int)uVar18 * 4);
                      uVar29 = (ulonglong)iVar17;
                      uVar28 = uVar19;
                      if ((int)uVar18 < *(int *)&pTVar27->field_0x18) {
                        uVar28 = ~uVar18 >> 0x1f;
                      }
                      if ((uVar28 == 0) &&
                         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar16)) {
                        pcVar4 = (code *)swi(3);
                        (*pcVar4)();
                        return;
                      }
                      iVar20 = *(int *)(*(longlong *)&pTVar27->field_0x10 +
                                       (longlong)(int)uVar18 * 4) + iVar17;
                      if (iVar17 < iVar20) {
                        lVar31 = uVar29 * 0x18;
                        lVar30 = uVar29 * 0xc;
                        dVar7 = auVar52._8_8_;
                        dVar6 = auVar52._0_8_;
                        dVar8 = auVar2._8_8_;
                        auVar52 = blendpd(auVar2,auVar52,2);
                        do {
                          uVar28 = (uint)uVar29;
                          uVar18 = uVar19;
                          if ((int)uVar28 < *(int *)&local_3b8->field_0x18) {
                            uVar18 = ~uVar28 >> 0x1f;
                          }
                          if ((uVar18 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          lVar3 = *(longlong *)&local_3b8->field_0x10;
                          uVar18 = 0;
                          if ((int)uVar28 < local_3d0.ArrayNum) {
                            uVar18 = ~uVar28 >> 0x1f;
                          }
                          dVar32 = (double)*(float *)(lVar30 + 4 + lVar3);
                          local_2a8 = (double)*(float *)(lVar30 + 8 + lVar3);
                          dVar46 = dVar12 * (double)*(float *)(lVar30 + lVar3);
                          dVar47 = dVar13 * dVar32;
                          local_2b8._8_4_ = SUB84(dVar32,0);
                          local_2b8._0_8_ = (double)*(float *)(lVar30 + lVar3);
                          local_2b8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
                          auVar43._8_4_ = SUB84(dVar47,0);
                          auVar43._0_8_ = dVar46;
                          uVar48 = (undefined4)((ulonglong)dVar47 >> 0x20);
                          auVar43._12_4_ = uVar48;
                          auVar33._8_4_ = SUB84(dVar47,0);
                          auVar33._0_8_ = dVar46;
                          auVar33._12_4_ = uVar48;
                          dVar32 = local_2a8 * (double)CONCAT44(uVar51,uVar42);
                          dVar40 = (double)CONCAT44(uVar50,uVar49) * 0.0;
                          auVar34._8_4_ = SUB84(dVar40,0);
                          auVar34._0_8_ = dVar32;
                          auVar34._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
                          auVar34 = blendpd(auVar33,auVar34,2);
                          auVar44._0_8_ = auVar43._8_8_ * auVar2._0_8_ - dVar8 * dVar46;
                          auVar44._8_8_ = dVar32 * dVar8 - dVar6 * dVar47;
                          auVar35._0_8_ = auVar34._0_8_ * dVar6 - auVar52._0_8_ * dVar32;
                          auVar35._8_8_ = auVar34._8_8_ * dVar7 - auVar52._8_8_ * dVar40;
                          auVar34 = blendpd(auVar44,auVar35,2);
                          dVar40 = auVar44._8_8_ + auVar44._8_8_;
                          dVar41 = auVar35._0_8_ + auVar35._0_8_;
                          auVar45._0_8_ = auVar34._0_8_ + auVar34._0_8_;
                          auVar45._8_8_ = auVar34._8_8_ + auVar34._8_8_;
                          auVar38._8_4_ = SUB84(dVar41,0);
                          auVar38._0_8_ = dVar40;
                          uVar42 = (undefined4)((ulonglong)dVar41 >> 0x20);
                          auVar38._12_4_ = uVar42;
                          auVar36._8_4_ = SUB84(dVar41,0);
                          auVar36._0_8_ = dVar40;
                          auVar36._12_4_ = uVar42;
                          auVar34 = blendpd(auVar36,auVar45,2);
                          auVar39._0_8_ = auVar38._8_8_ * auVar2._0_8_ - dVar40 * dVar8;
                          auVar39._8_8_ = auVar45._0_8_ * dVar8 - dVar41 * dVar6;
                          auVar37._0_8_ = auVar34._0_8_ * dVar6 - auVar45._0_8_ * auVar52._0_8_;
                          auVar37._8_8_ = auVar34._8_8_ * dVar7 - auVar45._8_8_ * auVar52._8_8_;
                          auVar34 = blendpd(auVar39,auVar37,2);
                          dVar40 = dVar7 * dVar40 + dVar46 + auVar39._8_8_ + dVar9;
                          dVar41 = dVar7 * dVar41 + dVar47 + auVar37._0_8_ + dVar10;
                          uVar42 = SUB84(dVar41,0);
                          uVar51 = (undefined4)((ulonglong)dVar41 >> 0x20);
                          local_2a0._8_4_ = uVar42;
                          local_2a0._0_8_ = dVar40;
                          local_2a0._12_4_ = uVar51;
                          dVar32 = dVar7 * auVar45._0_8_ + dVar32 + auVar34._0_8_ + dVar11;
                          local_290 = dVar32;
                          if ((uVar18 == 0) &&
                             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar16)) {
                            pcVar4 = (code *)swi(3);
                            (*pcVar4)();
                            return;
                          }
                          uVar29 = (ulonglong)(uVar28 + 1);
                          lVar30 = lVar30 + 0xc;
                          auVar5._8_4_ = uVar42;
                          auVar5._0_8_ = dVar40;
                          auVar5._12_4_ = uVar51;
                          *(undefined1 (*) [16])(local_3d0.AllocatorInstance.Data + lVar31) = auVar5
                          ;
                          *(double *)(local_3d0.AllocatorInstance.Data + lVar31 + 0x10) = dVar32;
                          lVar31 = lVar31 + 0x18;
                          pTVar27 = local_370;
                          uVar42 = local_2c8;
                          uVar51 = uStack_2c4;
                          uVar49 = uStack_2c0;
                          uVar50 = uStack_2bc;
                        } while ((int)(uVar28 + 1) < iVar20);
                      }
                      local_3d8 = local_3d8 + 1;
                      local_3b0 = local_3b0 + 0x60;
                      local_3a8 = local_3a8 + 4;
                      this = local_368;
                      pTVar26 = local_3a0;
                    } while ((int)local_3d8 < local_398.ArrayNum);
                  }
                  FDataflowNode::
                  SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                            ((FDataflowNode *)this,local_360,&local_3d0,&this->Points);
                  if (local_3d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3d0.AllocatorInstance.Data);
                  }
                  if (local_398.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_398.AllocatorInstance.Data);
                  }
                  FManagedArrayCollection::~FManagedArrayCollection(&local_198);
                  return;
                }
              }
            }
          }
        }
        FManagedArrayCollection::~FManagedArrayCollection(&local_198);
      }
      local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_388.ArrayNum = 0;
      local_388.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_388,&this->Points);
      if (local_388.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_388.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FCollectionToPointsDataflowNode @ 14e9167b0

FCollectionToPointsDataflowNode * __thiscall
FCollectionToPointsDataflowNode::FCollectionToPointsDataflowNode
          (FCollectionToPointsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FCollectionToPointsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
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
  local_38.Reference = &this->Points;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

