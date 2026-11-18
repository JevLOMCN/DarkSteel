// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 1

// FMeshAttributesHelper @ 144392b00

FMeshAttributesHelper * __thiscall
`FSkeletalMeshOperations::FixVertexInstanceStructure'::__l2::FMeshAttributesHelper::
FMeshAttributesHelper(void *this,FMeshDescription *param_1,FMeshDescription *param_2)

{
  int *piVar1;
  FName *pFVar2;
  uint uVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  FMeshElementContainer *pFVar8;
  FAttributesSetEntry *pFVar9;
  FName FVar10;
  FMeshAttributeArraySetBase *pFVar11;
  FMeshAttributesHelper *pFVar12;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar13;
  TAttributesSet<FSourceGeometryPartID> *pTVar14;
  int iVar15;
  ForAnyElementType *pFVar16;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  ForAnyElementType *pFVar20;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined8 local_res20;
  FMeshAttributeArraySetBase *local_c8;
  FMeshAttributeArraySetBase *local_c0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_b8;
  FMeshAttributeArraySetBase *local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  FScriptContainerElement *local_98;
  FMeshDescription *local_90;
  FSkeletalMeshAttributesShared local_88;
  undefined1 local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_50;
  
  FSkeletalMeshAttributes::FSkeletalMeshAttributes(this,param_1);
  *(undefined4 *)((longlong)this + 0x90) = 1;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined4 *)((longlong)this + 0xbc) = 0;
  *(undefined4 *)((longlong)this + 0xcc) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  *(undefined8 *)((longlong)this + 0x48) = 0;
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x58) = 0;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined8 *)((longlong)this + 0x68) = 0;
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  *(undefined8 *)((longlong)this + 0x80) = 0;
  *(undefined8 *)((longlong)this + 0x88) = 0;
  *(undefined8 *)((longlong)this + 0xa0) = 0;
  *(undefined8 *)((longlong)this + 0xa8) = 0;
  *(undefined8 *)((longlong)this + 0xb0) = 0;
  *(undefined4 *)((longlong)this + 0xb8) = 0;
  *(undefined8 *)((longlong)this + 0xc0) = 0;
  *(undefined4 *)((longlong)this + 200) = 0;
  if (param_2 != (FMeshDescription *)0x0) {
    (**(code **)(*(longlong *)this + 8))(this,0);
    local_90 = param_2;
    FSkeletalMeshAttributesShared::FSkeletalMeshAttributesShared(&local_88,param_2);
    pFVar8 = FMeshElementChannels::Get(local_90->PolygonElements,0);
    pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&pFVar8->Attributes,MeshAttribute::Polygon::ObjectName);
    if ((((pFVar9 != (FAttributesSetEntry *)0x0) &&
         (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type == 6)) && (pFVar11->Extent == 1)) &&
       (pFVar11 != (FMeshAttributeArraySetBase *)0x0)) {
      FStaticMeshAttributes::RegisterPolygonObjectNameAttribute(this);
    }
    if (local_88.SourceGeometryPartElementsShared != (FMeshElementChannels *)0x0) {
      FSkeletalMeshAttributes::RegisterSourceGeometryPartsAttributes(this);
    }
    FSkeletalMeshAttributesShared::GetMorphTargetNames(&local_88,&local_b8);
    iVar15 = local_b8.ArrayNum;
    pFVar2 = (FName *)(local_b8.AllocatorInstance.Data + (longlong)iVar15 * 8);
    FVar18.Data = local_b8.AllocatorInstance.Data;
    while( true ) {
      if (local_b8.ArrayNum != iVar15) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if ((FName *)FVar18.Data == pFVar2) break;
      pFVar8 = FMeshElementChannels::Get((local_88.MeshDescriptionShared)->VertexInstanceElements,0)
      ;
      FVar10 = FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName((FName)local_70);
      bVar6 = FAttributesSetBase::HasAttribute(&pFVar8->Attributes,*(FName *)FVar10);
      FSkeletalMeshAttributes::RegisterMorphTargetAttribute(this,*(FName *)FVar18.Data,bVar6);
      FVar18.Data = FVar18.Data + 8;
    }
    if ((FName *)local_b8.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_b8.AllocatorInstance.Data);
    }
  }
  pFVar20 = (ForAnyElementType *)((longlong)this + 0xc0);
  pTVar17 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)this + 0xa0);
  pFVar16 = (ForAnyElementType *)((longlong)this + 0xb0);
  pFVar8 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x80),0);
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar8->Attributes,MeshAttribute::PolygonGroup::ImportedMaterialSlotName);
  if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 6))
     || (pFVar11->Extent != 1)) {
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x38) = pFVar11;
  pFVar8 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x50),0);
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar8->Attributes,MeshAttribute::Vertex::Position);
  if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 1))
     || (pFVar11->Extent != 1)) {
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x40) = pFVar11;
  local_res20 = 0;
  pFVar8 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x50),0);
  FVar10 = FSkeletalMeshAttributesShared::CreateSkinWeightAttributeName((FName)local_68);
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar8->Attributes,*(FName *)FVar10);
  if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 4))
     || (pFVar11->Extent != 0)) {
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x48) = pFVar11;
  pFVar8 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x58),0);
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar8->Attributes,MeshAttribute::VertexInstance::Normal);
  if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 1))
     || (pFVar11->Extent != 1)) {
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x50) = pFVar11;
  pFVar8 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x58),0);
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar8->Attributes,MeshAttribute::VertexInstance::Tangent);
  if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 1))
     || (pFVar11->Extent != 1)) {
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x58) = pFVar11;
  pFVar8 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x58),0);
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar8->Attributes,MeshAttribute::VertexInstance::BinormalSign);
  if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 3))
     || (pFVar11->Extent != 1)) {
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x60) = pFVar11;
  pFVar8 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x58),0);
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar8->Attributes,MeshAttribute::VertexInstance::Color);
  if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 0))
     || (pFVar11->Extent != 1)) {
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x68) = pFVar11;
  pFVar8 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x58),0);
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar8->Attributes,MeshAttribute::VertexInstance::TextureCoordinate);
  if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 2))
     || (pFVar11->Extent != 1)) {
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x70) = pFVar11;
  pFVar8 = FMeshElementChannels::Get
                     (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x78),0);
  pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
           ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                   *)&pFVar8->Attributes,MeshAttribute::Polygon::ObjectName);
  if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 6))
     || (pFVar11->Extent != 1)) {
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x78) = pFVar11;
  if (*(longlong *)((longlong)this + 0x18) == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8382464667758362990>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                       ,0x16e,"HasSourceGeometryParts()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FMeshAttributesHelper *)(*pcVar4)();
      return pFVar12;
    }
LAB_144392f35:
    pFVar11 = (FMeshAttributeArraySetBase *)0x0;
  }
  else {
    pTVar14 = FSkeletalMeshAttributes::SourceGeometryPartAttributes(this);
    pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)pTVar14,MeshAttribute::SourceGeometryPart::Name);
    if (((pFVar9 == (FAttributesSetEntry *)0x0) || (pFVar11 = (pFVar9->Ptr).Ptr, pFVar11->Type != 6)
        ) || (pFVar11->Extent != 1)) goto LAB_144392f35;
  }
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x80) = pFVar11;
  if (*(longlong *)((longlong)this + 0x18) == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8382464667758362999>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SkeletalMeshDescription\\Private\\SkeletalMeshAttributes.cpp"
                       ,0x177,"HasSourceGeometryParts()");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FMeshAttributesHelper *)(*pcVar4)();
      return pFVar12;
    }
  }
  else {
    pTVar14 = FSkeletalMeshAttributes::SourceGeometryPartAttributes(this);
    pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)pTVar14,MeshAttribute::SourceGeometryPart::VertexOffsetAndCount);
    if ((pFVar9 != (FAttributesSetEntry *)0x0) &&
       (local_a8 = (pFVar9->Ptr).Ptr, local_a8->Type == 4)) {
      uStack_a0 = local_a8->Extent;
      goto LAB_144392f7e;
    }
  }
  local_a8 = (FMeshAttributeArraySetBase *)0x0;
  uStack_a0 = 1;
LAB_144392f7e:
  *(FMeshAttributeArraySetBase **)((longlong)this + 0x88) = local_a8;
  *(ulonglong *)((longlong)this + 0x90) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined4 *)((longlong)this + 0x98) =
       *(undefined4 *)(*(longlong *)((longlong)this + 0x70) + 0x38);
  pTVar13 = FSkeletalMeshAttributesShared::GetMorphTargetNames
                      ((FSkeletalMeshAttributesShared *)((longlong)this + 0x10),&local_50);
  if (pTVar17 != pTVar13) {
    pFVar19 = (pTVar17->AllocatorInstance).Data;
    if (pFVar19 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar19);
    }
    (pTVar17->AllocatorInstance).Data = (pTVar13->AllocatorInstance).Data;
    (pTVar13->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)this + 0xa8) = pTVar13->ArrayNum;
    *(int *)((longlong)this + 0xac) = pTVar13->ArrayMax;
    pTVar13->ArrayNum = 0;
    pTVar13->ArrayMax = 0;
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  uVar3 = *(uint *)((longlong)this + 0xa8);
  *(uint *)((longlong)this + 0x9c) = uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (*(int *)((longlong)this + 0xbc) < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,pFVar16,*(int *)((longlong)this + 0xb8),(int *)((longlong)this + 0xbc));
  }
  uVar3 = *(uint *)((longlong)this + 0x9c);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  if (*(int *)((longlong)this + 0xcc) < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar3,pFVar20,*(int *)((longlong)this + 200),(int *)((longlong)this + 0xcc));
  }
  pFVar19 = (pTVar17->AllocatorInstance).Data;
  iVar15 = *(int *)((longlong)this + 0xa8);
  local_98 = pFVar19 + (longlong)iVar15 * 8;
  while( true ) {
    pFVar5 = local_98;
    if (*(int *)((longlong)this + 0xa8) != iVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar19 == pFVar5) {
      return this;
    }
    pFVar8 = FMeshElementChannels::Get
                       (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x50),0);
    FVar10 = FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName((FName)local_60);
    pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&pFVar8->Attributes,*(FName *)FVar10);
    if (((pFVar9 == (FAttributesSetEntry *)0x0) ||
        (local_c8 = (pFVar9->Ptr).Ptr, local_c8->Type != 1)) || (local_c8->Extent != 1)) {
      local_c8 = (FMeshAttributeArraySetBase *)0x0;
    }
    if (((pFVar16->Data <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 <
         pFVar16->Data + (longlong)*(int *)((longlong)this + 0xbc) * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FMeshAttributesHelper *)(*pcVar4)();
      return pFVar12;
    }
    iVar7 = *(int *)((longlong)this + 0xb8);
    if (iVar7 == *(int *)((longlong)this + 0xbc)) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar16,(int *)((longlong)this + 0xbc));
    }
    *(int *)((longlong)this + 0xb8) = iVar7 + 1;
    *(FMeshAttributeArraySetBase **)(pFVar16->Data + (longlong)iVar7 * 8) = local_c8;
    pFVar8 = FMeshElementChannels::Get
                       (*(FMeshElementChannels **)(*(longlong *)((longlong)this + 8) + 0x58),0);
    FVar10 = FSkeletalMeshAttributesShared::CreateMorphTargetAttributeName((FName)local_58);
    pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&pFVar8->Attributes,*(FName *)FVar10);
    if (((pFVar9 == (FAttributesSetEntry *)0x0) ||
        (local_c0 = (pFVar9->Ptr).Ptr, local_c0->Type != 1)) || (local_c0->Extent != 1)) {
      local_c0 = (FMeshAttributeArraySetBase *)0x0;
    }
    piVar1 = (int *)((longlong)this + 0xcc);
    if (((pFVar20->Data <= (FScriptContainerElement *)&local_c0) &&
        ((FScriptContainerElement *)&local_c0 < pFVar20->Data + (longlong)*piVar1 * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) break;
    iVar7 = *(int *)((longlong)this + 200);
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar20,piVar1);
    }
    *(int *)((longlong)this + 200) = iVar7 + 1;
    pFVar19 = pFVar19 + 8;
    *(FMeshAttributeArraySetBase **)(pFVar20->Data + (longlong)iVar7 * 8) = local_c0;
  }
  pcVar4 = (code *)swi(3);
  pFVar12 = (FMeshAttributesHelper *)(*pcVar4)();
  return pFVar12;
}

