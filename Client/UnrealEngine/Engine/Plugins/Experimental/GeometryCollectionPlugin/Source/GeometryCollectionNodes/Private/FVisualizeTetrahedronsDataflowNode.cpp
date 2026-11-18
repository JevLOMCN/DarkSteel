// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionNodes
// Functions: 12

// StaticStruct @ 14e83a430

UScriptStruct * __cdecl FVisualizeTetrahedronsDataflowNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVisualizeTetrahedronsDataflowNode,
                         (UObject *)pUVar1,L"VisualizeTetrahedronsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton;
}

// GetType @ 14e83a620

FName __thiscall
FVisualizeTetrahedronsDataflowNode::GetType(FVisualizeTetrahedronsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"FVisualizeTetrahedronsDataflowNode");
  return in_RDX;
}

// IsA @ 14e83a6e0

bool __thiscall
FVisualizeTetrahedronsDataflowNode::IsA(FVisualizeTetrahedronsDataflowNode *this,FName param_1)

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
  ::FName::FName(local_res18,"FVisualizeTetrahedronsDataflowNode");
  pFVar4 = ::FName::ToString(local_res18,&local_28);
  iVar2 = (pFVar3->Data).ArrayNum;
  iVar1 = (pFVar4->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (1 < iVar2) {
      iVar2 = wcscmp((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                     (wchar_t *)(pFVar4->Data).AllocatorInstance.Data);
      bVar5 = iVar2 == 0;
      goto LAB_14e83a748;
    }
  }
  else {
    bVar5 = iVar1 + iVar2 == 1;
LAB_14e83a748:
    if (!bVar5) {
      bVar5 = FDataflowNode::IsA((FDataflowNode *)this,local_res10);
      if (!bVar5) {
        bVar5 = false;
        goto LAB_14e83a766;
      }
    }
  }
  bVar5 = true;
LAB_14e83a766:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar5;
}

// NewStructOnScope @ 14e83a7a0

FStructOnScope * __thiscall
FVisualizeTetrahedronsDataflowNode::NewStructOnScope(FVisualizeTetrahedronsDataflowNode *this)

{
  FStructOnScope *pFVar1;
  UPackage *pUVar2;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FStructOnScope *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar2 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
      Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FVisualizeTetrahedronsDataflowNode,
                           (UObject *)pUVar2,L"VisualizeTetrahedronsDataflowNode");
    }
    pFVar1 = FStructOnScope::FStructOnScope
                       (pFVar1,(UStruct *)
                               Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.
                               OuterSingleton,(uchar *)this);
    return pFVar1;
  }
  return (FStructOnScope *)0x0;
}

// SerializeInternal @ 14e83a820

void __thiscall
FVisualizeTetrahedronsDataflowNode::SerializeInternal
          (FVisualizeTetrahedronsDataflowNode *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVisualizeTetrahedronsDataflowNode,
                         (UObject *)pUVar1,L"VisualizeTetrahedronsDataflowNode");
  }
  UStruct::SerializeTaggedProperties
            ((UStruct *)
             Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton,
             param_1,(uchar *)this,
             (UStruct *)
             Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton,
             (uchar *)0x0,(UObject *)0x0);
  (**(code **)(this->_padding_ + 0x88))(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014e83a89d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x90))(this,param_1);
  return;
}

// GetDisplayName @ 14e83a8c0

FName __thiscall
FVisualizeTetrahedronsDataflowNode::GetDisplayName(FVisualizeTetrahedronsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"VisualizeTetrahedrons");
  return in_RDX;
}

// GetCategory @ 14e83a8f0

FName __thiscall
FVisualizeTetrahedronsDataflowNode::GetCategory(FVisualizeTetrahedronsDataflowNode *this)

{
  FName in_RDX;
  
  ::FName::FName((FName *)in_RDX,"Flesh|Utilities");
  return in_RDX;
}

// GetTags @ 14e83a930

FString * __thiscall
FVisualizeTetrahedronsDataflowNode::GetTags
          (FVisualizeTetrahedronsDataflowNode *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,"");
  return __return_storage_ptr__;
}

// TypedScriptStruct @ 14e83a990

UScriptStruct * __thiscall
FVisualizeTetrahedronsDataflowNode::TypedScriptStruct(FVisualizeTetrahedronsDataflowNode *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCollectionNodes();
    Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVisualizeTetrahedronsDataflowNode,
                         (UObject *)pUVar1,L"VisualizeTetrahedronsDataflowNode");
  }
  return Z_Registration_Info_UScriptStruct_FVisualizeTetrahedronsDataflowNode.OuterSingleton;
}

// GetRenderParametersImpl @ 14e83ab20

/* WARNING: Removing unreachable block (ram,0x00014e83ad61) */
/* WARNING: Removing unreachable block (ram,0x00014e83af81) */
/* WARNING: Removing unreachable block (ram,0x00014e83ad70) */
/* WARNING: Removing unreachable block (ram,0x00014e83af8f) */

TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> * __thiscall
FVisualizeTetrahedronsDataflowNode::GetRenderParametersImpl
          (FVisualizeTetrahedronsDataflowNode *this,
          TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FName FVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FString *pFVar7;
  TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *pTVar8;
  FName *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_f8;
  FName local_e8;
  ForAnyElementType local_e0;
  undefined8 local_d8;
  FName local_d0;
  FString local_c8;
  FName local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  FName local_a0;
  ForAnyElementType local_98;
  int local_90;
  int local_8c;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FName local_78;
  FName local_70;
  FName local_68;
  FString local_60;
  FString local_50;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  pFVar6 = ::FName::FName(&local_78,"3DView");
  ::FName::FName(&local_res10,"Collection");
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_98,1,&local_8c);
  *(FName *)local_98.Data = local_res10;
  ::FName::FName(&local_res18,"FGeometryCollection");
  pFVar7 = ::FString::FString(&local_60,"TetrahedronRender");
  ::FString::FString(&local_f8,pFVar7);
  FVar3.Data = local_98.Data;
  local_e8 = local_res18;
  lVar11 = (longlong)local_90;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = CONCAT44(local_d8._4_4_,local_90);
  if (local_90 == 0) {
    local_d8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_90,0,&local_e0,local_90,(int *)((longlong)&local_d8 + 4));
    memcpy(local_e0.Data,FVar3.Data,lVar11 << 3);
  }
  local_d0 = *pFVar6;
  pFVar10 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar10 <= (FScriptContainerElement *)&local_f8) &&
      ((FScriptContainerElement *)&local_f8 <
       pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x30;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_f8.Data.AllocatorInstance.Data;
  *(int *)(pFVar10 + 8) = local_f8.Data.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_f8.Data.ArrayMax;
  *(FName *)(pFVar10 + 0x10) = local_e8;
  *(undefined8 *)(pFVar10 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar10 + 0x18) = local_e0.Data;
  *(undefined4 *)(pFVar10 + 0x20) = (undefined4)local_d8;
  *(undefined4 *)(pFVar10 + 0x24) = local_d8._4_4_;
  *(FName *)(pFVar10 + 0x28) = local_d0;
  local_d8 = 0;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_f8.Data.ArrayNum = 0;
  local_f8.Data.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_98.Data != (FName *)0x0) {
    FMemory::Free(local_98.Data);
  }
  pFVar6 = ::FName::FName(&local_70,"3DView");
  ::FName::FName(&local_res20,"Vertices");
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,1,0,&local_88,1,&local_7c);
  *(FName *)local_88.Data = local_res20;
  pFVar9 = ::FName::FName(&local_68,"TArray<FVector>");
  FVar1 = *pFVar9;
  pFVar7 = ::FString::FString(&local_50,"PointsRender");
  ::FString::FString(&local_c8,pFVar7);
  FVar3.Data = local_88.Data;
  lVar11 = (longlong)local_80;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = CONCAT44(local_a8._4_4_,local_80);
  local_b8 = FVar1;
  if (local_80 == 0) {
    local_a8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,local_80,0,&local_b0,local_80,(int *)((longlong)&local_a8 + 4));
    memcpy(local_b0.Data,FVar3.Data,lVar11 << 3);
  }
  local_a0 = *pFVar6;
  pFVar10 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar10 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar10);
  }
  pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar10 <= (FScriptContainerElement *)&local_c8) &&
      ((FScriptContainerElement *)&local_c8 <
       pFVar10 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    pTVar8 = (TArray<UE::Dataflow::FRenderingParameter,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar8;
  }
  iVar5 = __return_storage_ptr__->ArrayNum;
  if (iVar5 == __return_storage_ptr__->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
  }
  __return_storage_ptr__->ArrayNum = iVar5 + 1;
  pFVar10 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x30;
  *(undefined8 *)pFVar10 = 0;
  *(FScriptContainerElement **)pFVar10 = local_c8.Data.AllocatorInstance.Data;
  *(int *)(pFVar10 + 8) = local_c8.Data.ArrayNum;
  *(int *)(pFVar10 + 0xc) = local_c8.Data.ArrayMax;
  *(FName *)(pFVar10 + 0x10) = local_b8;
  *(undefined8 *)(pFVar10 + 0x18) = 0;
  *(FScriptContainerElement **)(pFVar10 + 0x18) = local_b0.Data;
  *(undefined4 *)(pFVar10 + 0x20) = (undefined4)local_a8;
  *(undefined4 *)(pFVar10 + 0x24) = local_a8._4_4_;
  *(FName *)(pFVar10 + 0x28) = local_a0;
  local_a8 = 0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if ((FName *)local_88.Data != (FName *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14e83b1c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FVisualizeTetrahedronsDataflowNode::Evaluate
          (FVisualizeTetrahedronsDataflowNode *this,FContext *param_1,FDataflowOutput *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  FName FVar13;
  TManagedArray<int> *pTVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  FDataflowInput *pFVar21;
  FManagedArrayCollection *pFVar22;
  FName *pFVar23;
  TManagedArray<UE::Math::TVector<float>_> *pTVar24;
  TManagedArray<int> *pTVar25;
  uint uVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
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
  TManagedArray<int> *local_3b8;
  longlong local_3b0;
  TManagedArray<int> *local_3a8;
  TManagedArray<UE::Math::TVector<float>_> *local_3a0;
  longlong local_398;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_390;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_380;
  TManagedArray<int> *local_370;
  FVisualizeTetrahedronsDataflowNode *local_368;
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
  pFVar22 = &this->Collection;
  local_368 = this;
  local_360 = param_1;
  puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((FManagedArrayCollection *)puVar20 == pFVar22) {
    local_358.ContainerReference = (void *)0x0;
    local_358.Index = -1;
    local_358.Reference = pFVar22;
    pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_358);
    if (pFVar21->Connection == (FDataflowOutput *)0x0) {
      FDataflowNode::SetValue<FManagedArrayCollection_const_&,FManagedArrayCollection>
                ((FDataflowNode *)this,param_1,local_358.Reference,pFVar22);
    }
    else {
      local_340.Index = -1;
      local_340.ContainerReference = (void *)0x0;
      local_340.Reference = pFVar22;
      FDataflowNode::ForwardInput((FDataflowNode *)this,param_1,&local_358,&local_340);
    }
  }
  else {
    puVar20 = (undefined1 *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
    if ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)puVar20 == &this->Vertices)
    {
      local_328.ContainerReference = (void *)0x0;
      local_328.Index = -1;
      local_328.Reference = pFVar22;
      pFVar21 = FDataflowNode::FindInput((FDataflowNode *)this,&local_328);
      if (pFVar21->Connection != (FDataflowOutput *)0x0) {
        pFVar22 = FDataflowNode::GetValue<FManagedArrayCollection>
                            ((FDataflowNode *)this,param_1,pFVar22);
        FManagedArrayCollection::FManagedArrayCollection(&local_198,pFVar22);
        FVar13 = FGeometryCollection::VerticesGroup;
        pFVar23 = ::FName::FName(&local_310,"Vertex");
        bVar15 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar23,FVar13);
        FVar13 = FTransformCollection::TransformGroup;
        if (bVar15) {
          pFVar23 = ::FName::FName(&local_308,"TransformToGeometryIndex");
          bVar15 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar23,FVar13);
          FVar13 = FGeometryCollection::GeometryGroup;
          if (bVar15) {
            pFVar23 = ::FName::FName(&local_300,"VertexStart");
            bVar15 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar23,FVar13);
            FVar13 = FGeometryCollection::GeometryGroup;
            if (bVar15) {
              pFVar23 = ::FName::FName(&local_2f8,"VertexCount");
              bVar15 = FManagedArrayCollection::HasAttribute(&local_198,*pFVar23,FVar13);
              if (bVar15) {
                GeometryCollection::Facades::FCollectionTransformFacade::FCollectionTransformFacade
                          (&local_288,&local_198);
                bVar15 = GeometryCollection::Facades::FCollectionTransformFacade::IsValid
                                   (&local_288);
                if (bVar15) {
                  GeometryCollection::Facades::FCollectionTransformFacade::
                  ComputeCollectionSpaceTransforms(&local_288,&local_390);
                  FVar13 = FGeometryCollection::VerticesGroup;
                  pFVar23 = ::FName::FName(&local_2f0,"Vertex");
                  pTVar24 = FManagedArrayCollection::GetAttribute<UE::Math::TVector<float>_>
                                      (&local_198,*pFVar23,FVar13);
                  FVar13 = FTransformCollection::TransformGroup;
                  local_3a0 = pTVar24;
                  pFVar23 = ::FName::FName(&local_2e8,"TransformToGeometryIndex");
                  local_370 = FManagedArrayCollection::GetAttribute<int>(&local_198,*pFVar23,FVar13)
                  ;
                  FVar13 = FGeometryCollection::GeometryGroup;
                  pFVar23 = ::FName::FName(&local_2e0,"VertexStart");
                  pTVar25 = FManagedArrayCollection::GetAttribute<int>(&local_198,*pFVar23,FVar13);
                  FVar13 = FGeometryCollection::GeometryGroup;
                  local_3b8 = pTVar25;
                  pFVar23 = ::FName::FName(local_2d8,"VertexCount");
                  local_3a8 = FManagedArrayCollection::GetAttribute<int>(&local_198,*pFVar23,FVar13)
                  ;
                  local_3d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_3d0.ArrayNum = 0;
                  local_3d0.ArrayMax = 0;
                  iVar16 = (**(code **)(*(longlong *)pTVar24 + 0x60))(pTVar24);
                  UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x18,8,iVar16,&local_3d0.AllocatorInstance,&local_3d0.ArrayNum,
                             &local_3d0.ArrayMax);
                  local_3d8 = 0;
                  if (0 < local_390.ArrayNum) {
                    local_3b0 = 0;
                    local_398 = 0;
                    do {
                      lVar31 = local_398;
                      lVar28 = local_3b0;
                      uVar17 = 0;
                      if ((int)local_3d8 < local_390.ArrayNum) {
                        uVar17 = ~local_3d8 >> 0x1f;
                      }
                      if ((uVar17 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      pTVar14 = local_370;
                      pFVar1 = local_390.AllocatorInstance.Data + lVar31 + 0x50;
                      uVar42 = *(undefined4 *)pFVar1;
                      uVar51 = *(undefined4 *)(pFVar1 + 4);
                      uVar49 = *(undefined4 *)(pFVar1 + 8);
                      uVar50 = *(undefined4 *)(pFVar1 + 0xc);
                      auVar2 = *(undefined1 (*) [16])(local_390.AllocatorInstance.Data + lVar31);
                      auVar52 = *(undefined1 (*) [16])
                                 (local_390.AllocatorInstance.Data + lVar31 + 0x10);
                      dVar8 = *(double *)(local_390.AllocatorInstance.Data + lVar31 + 0x20);
                      dVar9 = *(double *)(local_390.AllocatorInstance.Data + lVar31 + 0x20 + 8);
                      dVar10 = *(double *)(local_390.AllocatorInstance.Data + lVar31 + 0x30);
                      dVar11 = *(double *)(local_390.AllocatorInstance.Data + lVar31 + 0x40);
                      dVar12 = *(double *)(local_390.AllocatorInstance.Data + lVar31 + 0x40 + 8);
                      uVar18 = 0;
                      uVar17 = uVar18;
                      if ((int)local_3d8 < *(int *)&local_370->field_0x18) {
                        uVar17 = ~local_3d8 >> 0x1f;
                      }
                      local_2c8 = uVar42;
                      uStack_2c4 = uVar51;
                      uStack_2c0 = uVar49;
                      uStack_2bc = uVar50;
                      if ((uVar17 == 0) &&
                         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar15)) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      uVar17 = *(uint *)(lVar28 + *(longlong *)&pTVar14->field_0x10);
                      if ((-1 < (int)uVar17) && ((int)uVar17 < *(int *)&pTVar25->field_0x18)) {
                        uVar26 = uVar18;
                        if ((int)uVar17 < *(int *)&pTVar25->field_0x18) {
                          uVar26 = ~uVar17 >> 0x1f;
                        }
                        if ((uVar26 == 0) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar15)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        iVar16 = *(int *)(*(longlong *)&local_3b8->field_0x10 +
                                         (longlong)(int)uVar17 * 4);
                        uVar27 = (ulonglong)iVar16;
                        uVar26 = uVar18;
                        if ((int)uVar17 < *(int *)&local_3a8->field_0x18) {
                          uVar26 = ~uVar17 >> 0x1f;
                        }
                        if ((uVar26 == 0) &&
                           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar15)) {
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        iVar19 = *(int *)(*(longlong *)&local_3a8->field_0x10 +
                                         (longlong)(int)uVar17 * 4) + iVar16;
                        lVar28 = local_3b0;
                        pTVar25 = local_3b8;
                        if (iVar16 < iVar19) {
                          lVar30 = uVar27 * 0x18;
                          lVar29 = uVar27 * 0xc;
                          dVar6 = auVar52._8_8_;
                          dVar5 = auVar52._0_8_;
                          dVar7 = auVar2._8_8_;
                          auVar52 = blendpd(auVar2,auVar52,2);
                          do {
                            uVar26 = (uint)uVar27;
                            uVar17 = uVar18;
                            if ((int)uVar26 < *(int *)&local_3a0->field_0x18) {
                              uVar17 = ~uVar26 >> 0x1f;
                            }
                            if ((uVar17 == 0) &&
                               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            lVar28 = *(longlong *)&local_3a0->field_0x10;
                            uVar17 = 0;
                            if ((int)uVar26 < local_3d0.ArrayNum) {
                              uVar17 = ~uVar26 >> 0x1f;
                            }
                            dVar32 = (double)*(float *)(lVar28 + 4 + lVar29);
                            local_2a8 = (double)*(float *)(lVar28 + 8 + lVar29);
                            dVar46 = dVar11 * (double)*(float *)(lVar28 + lVar29);
                            dVar47 = dVar12 * dVar32;
                            local_2b8._8_4_ = SUB84(dVar32,0);
                            local_2b8._0_8_ = (double)*(float *)(lVar28 + lVar29);
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
                            auVar44._0_8_ = auVar43._8_8_ * auVar2._0_8_ - dVar7 * dVar46;
                            auVar44._8_8_ = dVar32 * dVar7 - dVar5 * dVar47;
                            auVar35._0_8_ = auVar34._0_8_ * dVar5 - auVar52._0_8_ * dVar32;
                            auVar35._8_8_ = auVar34._8_8_ * dVar6 - auVar52._8_8_ * dVar40;
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
                            auVar39._0_8_ = auVar38._8_8_ * auVar2._0_8_ - dVar40 * dVar7;
                            auVar39._8_8_ = auVar45._0_8_ * dVar7 - dVar41 * dVar5;
                            auVar37._0_8_ = auVar34._0_8_ * dVar5 - auVar45._0_8_ * auVar52._0_8_;
                            auVar37._8_8_ = auVar34._8_8_ * dVar6 - auVar45._8_8_ * auVar52._8_8_;
                            auVar34 = blendpd(auVar39,auVar37,2);
                            dVar40 = dVar6 * dVar40 + dVar46 + auVar39._8_8_ + dVar8;
                            dVar41 = dVar6 * dVar41 + dVar47 + auVar37._0_8_ + dVar9;
                            uVar42 = SUB84(dVar41,0);
                            uVar51 = (undefined4)((ulonglong)dVar41 >> 0x20);
                            local_2a0._8_4_ = uVar42;
                            local_2a0._0_8_ = dVar40;
                            local_2a0._12_4_ = uVar51;
                            dVar32 = dVar6 * auVar45._0_8_ + dVar32 + auVar34._0_8_ + dVar10;
                            local_290 = dVar32;
                            if ((uVar17 == 0) &&
                               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar15)) {
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            uVar27 = (ulonglong)(uVar26 + 1);
                            lVar29 = lVar29 + 0xc;
                            auVar4._8_4_ = uVar42;
                            auVar4._0_8_ = dVar40;
                            auVar4._12_4_ = uVar51;
                            *(undefined1 (*) [16])(local_3d0.AllocatorInstance.Data + lVar30) =
                                 auVar4;
                            *(double *)(local_3d0.AllocatorInstance.Data + lVar30 + 0x10) = dVar32;
                            lVar30 = lVar30 + 0x18;
                            lVar28 = local_3b0;
                            pTVar25 = local_3b8;
                            lVar31 = local_398;
                            uVar42 = local_2c8;
                            uVar51 = uStack_2c4;
                            uVar49 = uStack_2c0;
                            uVar50 = uStack_2bc;
                          } while ((int)(uVar26 + 1) < iVar19);
                        }
                      }
                      local_3d8 = local_3d8 + 1;
                      local_398 = lVar31 + 0x60;
                      local_3b0 = lVar28 + 4;
                      this = local_368;
                      param_1 = local_360;
                    } while ((int)local_3d8 < local_390.ArrayNum);
                  }
                  FDataflowNode::
                  SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                            ((FDataflowNode *)this,param_1,&local_3d0,&this->Vertices);
                  if (local_3d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_3d0.AllocatorInstance.Data);
                  }
                  if (local_390.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_390.AllocatorInstance.Data);
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
      local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_380.ArrayNum = 0;
      local_380.ArrayMax = 0;
      FDataflowNode::
      SetValue<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                ((FDataflowNode *)this,param_1,&local_380,&this->Vertices);
      if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_380.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// FVisualizeTetrahedronsDataflowNode @ 14e931d80

FVisualizeTetrahedronsDataflowNode * __thiscall
FVisualizeTetrahedronsDataflowNode::FVisualizeTetrahedronsDataflowNode
          (FVisualizeTetrahedronsDataflowNode *this,FNodeParameters *param_1,FGuid *param_2)

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
  this->_padding_ = (longlong)&___7FVisualizeTetrahedronsDataflowNode__6B_;
  FManagedArrayCollection::FManagedArrayCollection(this_00);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Vertices).ArrayNum = 0;
  (this->Vertices).ArrayMax = 0;
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
  local_38.Reference = &this->Vertices;
  pFVar1 = FDataflowNode::RegisterOutputConnectionInternal
                     ((FDataflowNode *)this,&local_38,&local_res8);
  if (local_58.Reference != (void *)0x0) {
    FDataflowOutput::SetPassthroughInput(pFVar1,&local_58);
  }
  return this;
}

