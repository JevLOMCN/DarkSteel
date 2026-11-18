// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 4

// operator() @ 144398ed0

void __thiscall
UE::Private::FCreateAndCopyAttributeValues<float>::operator()
          (FCreateAndCopyAttributeValues<float> *this,FName param_1,
          TMeshAttributesRef<FVertexID,float_const_> param_2)

{
  FAttributesSetBase *this_00;
  float fVar1;
  EMeshAttributeFlags EVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar3;
  FName *pFVar4;
  code *pcVar5;
  longlong *plVar6;
  TMeshAttributeArraySet<float> *pTVar7;
  FName FVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FMeshElementContainer *pFVar12;
  FAttributesSetEntry *pFVar13;
  TMeshAttributeArraySet<float> *pTVar14;
  TMeshAttributeArrayBase<float> *this_01;
  float *pfVar15;
  FName *pFVar16;
  int iVar17;
  uint uVar18;
  FMeshAttributeArraySetBase *pFVar19;
  FName local_res10 [3];
  TMeshAttributeArraySet<float> *local_b8;
  FName local_b0;
  TElementIDs local_a8;
  FName local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_98;
  FName *local_78;
  TMeshAttributeArraySet<float> **local_70;
  TConstIterator local_68;
  
  local_res10[0] = param_1;
  bVar9 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (bVar9) {
    return;
  }
  pFVar12 = FMeshElementChannels::Get(this->TargetMesh->VertexElements,0);
  this_00 = &pFVar12->Attributes;
  pFVar16 = (FName *)(this->TargetCustomAttributeNames->AllocatorInstance).Data;
  pFVar4 = pFVar16 + this->TargetCustomAttributeNames->ArrayNum;
  for (; pFVar16 != pFVar4; pFVar16 = pFVar16 + 1) {
    if (*pFVar16 == local_res10[0]) goto LAB_144399135;
  }
  EVar2 = (param_2.ArrayPtr)->Flags;
  fVar1 = (float)param_2.ArrayPtr[2].NumElements;
  uVar11 = param_2.ArrayPtr[2].Type;
  local_b0 = local_res10[0];
  pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this_00,local_res10[0]);
  FVar8 = local_b0;
  if (pFVar13 != (FAttributesSetEntry *)0x0) {
    pFVar19 = (pFVar13->Ptr).Ptr;
    if ((pFVar19->Type == 3) && (pFVar19->Extent == 1)) {
      (**(code **)(pFVar19->_padding_ + 0x70))(pFVar19,uVar11);
      ((pFVar13->Ptr).Ptr)->Flags = EVar2;
      goto LAB_144399098;
    }
    local_a0 = local_b0;
    if (*(int *)&(pFVar12->Attributes).Map.field_0x8 !=
        *(int *)&(pFVar12->Attributes).Map.field_0x34) {
      uVar18 = ::GetTypeHash(local_b0.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)this_00,FVar8.Number + uVar18,&local_a0);
    }
  }
  iVar10 = (pFVar12->Attributes).NumElements;
  local_b8 = (TMeshAttributeArraySet<float> *)0x0;
  pTVar14 = ::operator_new(0x48);
  if (pTVar14 == (TMeshAttributeArraySet<float> *)0x0) {
    pTVar14 = (TMeshAttributeArraySet<float> *)0x0;
  }
  else {
    *(int *)&pTVar14->_padding_ = iVar10;
    *(undefined4 *)&pTVar14->_padding_ = 3;
    *(undefined4 *)((longlong)&pTVar14->_padding_ + 4) = 1;
    *(EMeshAttributeFlags *)((longlong)&pTVar14->_padding_ + 4) = EVar2;
    (pTVar14->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<float>_>)0x0;
    pTVar14->_padding_ = (longlong)&___7__TMeshAttributeArraySet_M__6B_;
    (pTVar14->ArrayForChannels).ArrayNum = 0;
    (pTVar14->ArrayForChannels).ArrayMax = 1;
    pTVar14->DefaultValue = fVar1;
    TMeshAttributeArraySet<float>::SetNumChannels(pTVar14,uVar11);
  }
  pTVar7 = local_b8;
  if (local_b8 != (TMeshAttributeArraySet<float> *)0x0) {
    plVar6 = &local_b8->_padding_;
    local_b8 = pTVar14;
    (**(code **)*plVar6)(pTVar7,1);
    pTVar14 = local_b8;
  }
  local_b8 = pTVar14;
  local_78 = &local_b0;
  local_70 = &local_b8;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,FAttributesSetEntry_&&> *)(local_res10 + 2),
             (bool *)&local_78);
  if (local_b8 != (TMeshAttributeArraySet<float> *)0x0) {
    (**(code **)local_b8->_padding_)(local_b8,1);
  }
LAB_144399098:
  pTVar3 = this->TargetCustomAttributeNames;
  pFVar4 = (FName *)(pTVar3->AllocatorInstance).Data;
  if (((pFVar4 <= local_res10) && (local_res10 < pFVar4 + pTVar3->ArrayMax)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = pTVar3->ArrayNum;
  if (iVar10 == pTVar3->ArrayMax) {
    iVar10 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
  }
  pTVar3->ArrayNum = iVar10 + 1;
  *(FName *)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_res10[0];
LAB_144399135:
  pFVar13 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this_00,local_res10[0]);
  if (((pFVar13 == (FAttributesSetEntry *)0x0) ||
      (pTVar14 = (TMeshAttributeArraySet<float> *)(pFVar13->Ptr).Ptr,
      *(uint *)&pTVar14->_padding_ != 3)) || (*(uint *)((longlong)&pTVar14->_padding_ + 4) != 1)) {
    pTVar14 = (TMeshAttributeArraySet<float> *)0x0;
  }
  local_a8.Array = &FMeshElementChannels::Get(this->SourceMesh->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_a8,(TConstIterator *)&local_98);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_a8,&local_68);
  while( true ) {
    if ((local_98.CurrentBitIndex == local_68.Iterator.CurrentBitIndex) &&
       (local_98.Array == local_68.Iterator.Array)) {
      return;
    }
    iVar10 = this->TargetVertexIndexOffset;
    iVar17 = -1;
    if (local_98.CurrentBitIndex < (local_98.Array)->NumBits) {
      iVar17 = local_98.CurrentBitIndex;
    }
    if (((int)param_2.ArrayPtr[2].Type < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) break;
    pFVar19 = param_2.ArrayPtr + 1;
    if ((FMeshAttributeArraySetBase *)param_2.ArrayPtr[2]._padding_ !=
        (FMeshAttributeArraySetBase *)0x0) {
      pFVar19 = (FMeshAttributeArraySetBase *)param_2.ArrayPtr[2]._padding_;
    }
    uVar18 = iVar17 * pFVar19->NumElements;
    uVar11 = 0;
    if ((int)uVar18 < (int)pFVar19->Type) {
      uVar11 = ~uVar18 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    fVar1 = *(float *)(pFVar19->_padding_ + (longlong)(int)uVar18 * 4);
    this_01 = TMeshAttributeArraySet<float>::GetArrayForChannel(pTVar14,0);
    pfVar15 = TMeshAttributeArrayBase<float>::GetElementBase(this_01,iVar10 + iVar17);
    *pfVar15 = fVar1;
    local_98.UnvisitedBitMask = local_98.UnvisitedBitMask & ~local_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_98);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// operator() @ 1443992c0

void __thiscall
UE::Private::FCreateAndCopyAttributeValues<UE::Math::TVector2<float>_>::operator()
          (FCreateAndCopyAttributeValues<UE::Math::TVector2<float>_> *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TVector2<float>_const_> param_2)

{
  FAttributesSetBase *this_00;
  EMeshAttributeFlags EVar1;
  uint uVar2;
  TVector2<float>_u_0 TVar3;
  FMeshAttributeArraySetBase *pFVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  FName *pFVar6;
  TVector2<float>_u_0_s_0 TVar7;
  code *pcVar8;
  longlong *plVar9;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar10;
  FName FVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FMeshElementContainer *pFVar15;
  FAttributesSetEntry *pFVar16;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *pTVar17;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar18;
  TVector2<float>_u_0_s_0 *pTVar19;
  TVector2<float>_u_0 *pTVar20;
  FName *pFVar21;
  int iVar22;
  FName local_res10 [2];
  int local_res20;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> *local_a8;
  FName local_a0;
  TElementIDs local_98;
  FName local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  FName *local_68;
  TMeshAttributeArraySet<UE::Math::TVector2<float>_> **local_60;
  TConstIterator local_58;
  
  local_res10[0] = param_1;
  bVar12 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (bVar12) {
    return;
  }
  pFVar15 = FMeshElementChannels::Get(this->TargetMesh->VertexElements,0);
  this_00 = &pFVar15->Attributes;
  pFVar21 = (FName *)(this->TargetCustomAttributeNames->AllocatorInstance).Data;
  pFVar6 = pFVar21 + this->TargetCustomAttributeNames->ArrayNum;
  for (; pFVar21 != pFVar6; pFVar21 = pFVar21 + 1) {
    if (*pFVar21 == local_res10[0]) goto LAB_144399514;
  }
  EVar1 = (param_2.ArrayPtr)->Flags;
  TVar3 = *(TVector2<float>_u_0 *)&param_2.ArrayPtr[2].NumElements;
  uVar2 = param_2.ArrayPtr[2].Type;
  local_a0 = local_res10[0];
  pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this_00,local_res10[0]);
  FVar11 = local_a0;
  if (pFVar16 != (FAttributesSetEntry *)0x0) {
    pFVar4 = (pFVar16->Ptr).Ptr;
    if ((pFVar4->Type == 2) && (pFVar4->Extent == 1)) {
      (**(code **)(pFVar4->_padding_ + 0x70))(pFVar4,uVar2);
      ((pFVar16->Ptr).Ptr)->Flags = EVar1;
      goto LAB_144399477;
    }
    local_90 = local_a0;
    if (*(int *)&(pFVar15->Attributes).Map.field_0x8 !=
        *(int *)&(pFVar15->Attributes).Map.field_0x34) {
      uVar13 = ::GetTypeHash(local_a0.ComparisonIndex.Value);
      TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
                           *)this_00,FVar11.Number + uVar13,&local_90);
    }
  }
  local_res20 = (pFVar15->Attributes).NumElements;
  local_a8 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  pTVar17 = ::operator_new(0x48);
  if (pTVar17 == (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    pTVar17 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  else {
    *(undefined4 *)&pTVar17->_padding_ = 2;
    *(undefined4 *)((longlong)&pTVar17->_padding_ + 4) = 1;
    *(int *)&pTVar17->_padding_ = local_res20;
    pTVar17->_padding_ = (longlong)&___7__TMeshAttributeArraySet_U__TVector2_M_Math_UE____6B_;
    (pTVar17->ArrayForChannels).AllocatorInstance.SecondaryData =
         (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0;
    *(EMeshAttributeFlags *)((longlong)&pTVar17->_padding_ + 4) = EVar1;
    (pTVar17->ArrayForChannels).ArrayNum = 0;
    (pTVar17->ArrayForChannels).ArrayMax = 1;
    (pTVar17->DefaultValue).field0_0x0 = TVar3;
    TMeshAttributeArraySet<UE::Math::TVector2<float>_>::SetNumChannels(pTVar17,uVar2);
  }
  pTVar10 = local_a8;
  if (local_a8 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    plVar9 = &local_a8->_padding_;
    local_a8 = pTVar17;
    (**(code **)*plVar9)(pTVar10,1);
    pTVar17 = local_a8;
  }
  local_a8 = pTVar17;
  local_68 = &local_a0;
  local_60 = &local_a8;
  TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FAttributesSetEntry_&&>_>
            ((TSet<TTuple<FName,FAttributesSetEntry>,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>,FDefaultSetAllocator>
              *)this_00,(TPairInitializer<FName_const_&,FAttributesSetEntry_&&> *)&local_res20,
             (bool *)&local_68);
  if (local_a8 != (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0) {
    (**(code **)local_a8->_padding_)(local_a8,1);
  }
LAB_144399477:
  pTVar5 = this->TargetCustomAttributeNames;
  pFVar6 = (FName *)(pTVar5->AllocatorInstance).Data;
  if (((pFVar6 <= local_res10) && (local_res10 < pFVar6 + pTVar5->ArrayMax)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar14 = pTVar5->ArrayNum;
  if (iVar14 == pTVar5->ArrayMax) {
    iVar14 = Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&pTVar5->AllocatorInstance,&pTVar5->ArrayMax);
  }
  pTVar5->ArrayNum = iVar14 + 1;
  *(FName *)((pTVar5->AllocatorInstance).Data + (longlong)iVar14 * 8) = local_res10[0];
LAB_144399514:
  pFVar16 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
            ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                    *)this_00,local_res10[0]);
  if (((pFVar16 == (FAttributesSetEntry *)0x0) ||
      (pTVar17 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)(pFVar16->Ptr).Ptr,
      *(uint *)&pTVar17->_padding_ != 2)) || (*(uint *)((longlong)&pTVar17->_padding_ + 4) != 1)) {
    pTVar17 = (TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)0x0;
  }
  local_98.Array = &FMeshElementChannels::Get(this->SourceMesh->VertexElements,0)->BitArray;
  TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_98,(TConstIterator *)&local_88);
  TMeshElementContainer<FVertexID>::TElementIDs::end(&local_98,&local_58);
  while ((local_88.CurrentBitIndex != local_58.Iterator.CurrentBitIndex ||
         (local_88.Array != local_58.Iterator.Array))) {
    iVar14 = this->TargetVertexIndexOffset;
    iVar22 = -1;
    if (local_88.CurrentBitIndex < (local_88.Array)->NumBits) {
      iVar22 = local_88.CurrentBitIndex;
    }
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel
                        ((TMeshAttributeArraySet<UE::Math::TVector2<float>_> *)param_2.ArrayPtr,0);
    pTVar19 = (TVector2<float>_u_0_s_0 *)
              TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase(pTVar18,iVar22);
    TVar7 = *pTVar19;
    pTVar18 = TMeshAttributeArraySet<UE::Math::TVector2<float>_>::GetArrayForChannel(pTVar17,0);
    pTVar20 = &TMeshAttributeArrayBase<UE::Math::TVector2<float>_>::GetElementBase
                         (pTVar18,iVar14 + iVar22)->field0_0x0;
    pTVar20->_s_0 = TVar7;
    local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
  }
  return;
}

// operator() @ 144399610

void __thiscall
UE::Private::FCreateAndCopyAttributeValues<UE::Math::TVector4<float>_>::operator()
          (FCreateAndCopyAttributeValues<UE::Math::TVector4<float>_> *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TVector4<float>_const_> param_2)

{
  undefined8 *puVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FMeshElementContainer *pFVar10;
  FAttributesSetEntry *pFVar11;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *this_00;
  TVector4<float> *pTVar12;
  FName *pFVar13;
  TMeshAttributeArraySet<UE::Math::TVector4<float>_> *this_01;
  int iVar14;
  uint uVar15;
  FMeshAttributeArraySetBase *pFVar16;
  FName local_res10;
  TElementIDs local_res20;
  undefined1 local_98 [16];
  undefined8 local_88;
  longlong lStack_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  TConstIterator local_58;
  
  local_res10 = param_1;
  bVar7 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar7) {
    pFVar10 = FMeshElementChannels::Get(this->TargetMesh->VertexElements,0);
    pFVar13 = (FName *)(this->TargetCustomAttributeNames->AllocatorInstance).Data;
    pFVar3 = pFVar13 + this->TargetCustomAttributeNames->ArrayNum;
    for (; pFVar13 != pFVar3; pFVar13 = pFVar13 + 1) {
      if (*pFVar13 == local_res10) goto LAB_144399772;
    }
    local_88._0_4_ = param_2.ArrayPtr[2].NumElements;
    local_88._4_4_ = param_2.ArrayPtr[2].Flags;
    lStack_80 = param_2.ArrayPtr[3]._padding_;
    FAttributesSetBase::RegisterAttribute<UE::Math::TVector4<float>,0>
              (&pFVar10->Attributes,(FName)local_98,local_res10.ComparisonIndex.Value.Value,
               (TVector4<float> *)(ulonglong)param_2.ArrayPtr[2].Type,(EMeshAttributeFlags)&local_88
              );
    pTVar2 = this->TargetCustomAttributeNames;
    pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= &local_res10) && (&local_res10 < pFVar3 + pTVar2->ArrayMax)) &&
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
    iVar8 = pTVar2->ArrayNum;
    if (iVar8 == pTVar2->ArrayMax) {
      iVar8 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar8 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_res10;
LAB_144399772:
    pFVar11 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
              ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                      *)&pFVar10->Attributes,local_res10);
    if (((pFVar11 == (FAttributesSetEntry *)0x0) ||
        (this_01 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)(pFVar11->Ptr).Ptr,
        *(uint *)&this_01->_padding_ != 0)) || (*(uint *)((longlong)&this_01->_padding_ + 4) != 1))
    {
      this_01 = (TMeshAttributeArraySet<UE::Math::TVector4<float>_> *)0x0;
    }
    local_res20.Array = &FMeshElementChannels::Get(this->SourceMesh->VertexElements,0)->BitArray;
    TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_res20,(TConstIterator *)&local_78);
    TMeshElementContainer<FVertexID>::TElementIDs::end(&local_res20,&local_58);
    while ((local_78.CurrentBitIndex != local_58.Iterator.CurrentBitIndex ||
           (local_78.Array != local_58.Iterator.Array))) {
      iVar8 = this->TargetVertexIndexOffset;
      iVar14 = -1;
      if (local_78.CurrentBitIndex < (local_78.Array)->NumBits) {
        iVar14 = local_78.CurrentBitIndex;
      }
      if (((int)param_2.ArrayPtr[2].Type < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = param_2.ArrayPtr + 1;
      if ((FMeshAttributeArraySetBase *)param_2.ArrayPtr[2]._padding_ !=
          (FMeshAttributeArraySetBase *)0x0) {
        pFVar16 = (FMeshAttributeArraySetBase *)param_2.ArrayPtr[2]._padding_;
      }
      uVar15 = iVar14 * pFVar16->NumElements;
      uVar9 = 0;
      if ((int)uVar15 < (int)pFVar16->Type) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar1 = (undefined8 *)(pFVar16->_padding_ + (longlong)(int)uVar15 * 0x10);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      this_00 = TMeshAttributeArraySet<UE::Math::TVector4<float>_>::GetArrayForChannel(this_01,0);
      pTVar12 = TMeshAttributeArrayBase<UE::Math::TVector4<float>_>::GetElementBase
                          (this_00,iVar8 + iVar14);
      *(undefined8 *)&pTVar12->field0_0x0 = uVar5;
      *(undefined8 *)((longlong)&pTVar12->field0_0x0 + 8) = uVar6;
      local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
    }
  }
  return;
}

// operator() @ 144399940

void __thiscall
UE::Private::FCreateAndCopyAttributeValues<UE::Math::TVector<float>_>::operator()
          (FCreateAndCopyAttributeValues<UE::Math::TVector<float>_> *this,FName param_1,
          TMeshAttributesRef<FVertexID,UE::Math::TVector<float>_const_> param_2)

{
  float fVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMeshElementContainer *pFVar7;
  FName *pFVar8;
  FAttributesSetEntry *pFVar9;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar10;
  TVector<float> *pTVar11;
  TMeshAttributeArraySet<UE::Math::TVector<float>_> *this_00;
  int iVar12;
  FName local_res10 [2];
  TElementIDs local_res20;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined4 local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_80;
  TConstIterator local_60;
  
  local_res10[0] = param_1;
  bVar5 = FSkeletalMeshAttributes::IsReservedAttributeName(param_1);
  if (!bVar5) {
    pFVar7 = FMeshElementChannels::Get(this->TargetMesh->VertexElements,0);
    pFVar8 = (FName *)(this->TargetCustomAttributeNames->AllocatorInstance).Data;
    pFVar3 = pFVar8 + this->TargetCustomAttributeNames->ArrayNum;
    for (; pFVar8 != pFVar3; pFVar8 = pFVar8 + 1) {
      if (*pFVar8 == local_res10[0]) goto LAB_144399a98;
    }
    local_88 = (undefined4)param_2.ArrayPtr[3]._padding_;
    local_90._0_4_ = param_2.ArrayPtr[2].NumElements;
    local_90._4_4_ = param_2.ArrayPtr[2].Flags;
    FAttributesSetBase::RegisterAttribute<UE::Math::TVector<float>,0>
              (&pFVar7->Attributes,(FName)local_98,local_res10[0].ComparisonIndex.Value.Value,
               (TVector<float> *)(ulonglong)param_2.ArrayPtr[2].Type,(EMeshAttributeFlags)&local_90)
    ;
    pTVar2 = this->TargetCustomAttributeNames;
    pFVar3 = (FName *)(pTVar2->AllocatorInstance).Data;
    if (((pFVar3 <= local_res10) && (local_res10 < pFVar3 + pTVar2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = pTVar2->ArrayNum;
    if (iVar6 == pTVar2->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar2->AllocatorInstance,&pTVar2->ArrayMax);
    }
    pTVar2->ArrayNum = iVar6 + 1;
    *(FName *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0];
LAB_144399a98:
    pFVar9 = TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
             ::Find((TMapBase<FName,FAttributesSetEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FAttributesSetEntry,0>_>
                     *)&pFVar7->Attributes,local_res10[0]);
    if (((pFVar9 == (FAttributesSetEntry *)0x0) ||
        (this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)(pFVar9->Ptr).Ptr,
        *(uint *)&this_00->_padding_ != 1)) || (*(uint *)((longlong)&this_00->_padding_ + 4) != 1))
    {
      this_00 = (TMeshAttributeArraySet<UE::Math::TVector<float>_> *)0x0;
    }
    local_res20.Array = &FMeshElementChannels::Get(this->SourceMesh->VertexElements,0)->BitArray;
    TMeshElementContainer<FVertexID>::TElementIDs::begin(&local_res20,(TConstIterator *)&local_80);
    TMeshElementContainer<FVertexID>::TElementIDs::end(&local_res20,&local_60);
    while ((local_80.CurrentBitIndex != local_60.Iterator.CurrentBitIndex ||
           (local_80.Array != local_60.Iterator.Array))) {
      iVar6 = this->TargetVertexIndexOffset;
      iVar12 = -1;
      if (local_80.CurrentBitIndex < (local_80.Array)->NumBits) {
        iVar12 = local_80.CurrentBitIndex;
      }
      pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel
                          ((TMeshAttributeArraySet<UE::Math::TVector<float>_> *)param_2.ArrayPtr,0);
      pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase(pTVar10,iVar12);
      local_res20.Array = *(TBitArray<FDefaultBitArrayAllocator> **)&pTVar11->field0_0x0;
      fVar1 = (pTVar11->field0_0x0)._s_0.Z;
      pTVar10 = TMeshAttributeArraySet<UE::Math::TVector<float>_>::GetArrayForChannel(this_00,0);
      pTVar11 = TMeshAttributeArrayBase<UE::Math::TVector<float>_>::GetElementBase
                          (pTVar10,iVar6 + iVar12);
      *(TBitArray<FDefaultBitArrayAllocator> **)&pTVar11->field0_0x0 = local_res20.Array;
      (pTVar11->field0_0x0)._s_0.Z = fVar1;
      local_80.UnvisitedBitMask = local_80.UnvisitedBitMask & ~local_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_80);
    }
  }
  return;
}

