// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 9

// Emplace<FString_const_&,UE::Math::TVector<double>_> @ 148b88b80

TVector<double> * __thiscall
TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
::Emplace<FString_const_&,UE::Math::TVector<double>_>
          (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
           *this,FString *param_1,TVector<double> *param_2)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_> *pTVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar9 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar9 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  pTVar8 = (TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    *(double *)((longlong)local_28.Pointer + 0x10) = (param_2->field0_0x0)._s_0.X;
    *(double *)((longlong)local_28.Pointer + 0x18) = dVar2;
    *(double *)((longlong)local_28.Pointer + 0x20) = (param_2->field0_0x0)._s_0.Z;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar6 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar8;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar3 = TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,pTVar8,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,pTVar8,local_res8[0]);
  }
  return (TVector<double> *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar9 * 0x30);
}

// Emplace<FString_const_&,FStructSerializerBuiltinTestStruct> @ 148b88ce0

FStructSerializerBuiltinTestStruct * __thiscall
TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
::Emplace<FString_const_&,FStructSerializerBuiltinTestStruct>
          (TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
           *this,FString *param_1,FStructSerializerBuiltinTestStruct *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf0,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0xf0 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xf0 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_> *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_> *)0x0) {
    ::FString::FString(local_28.Pointer,param_1);
    FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
              ((FStructSerializerBuiltinTestStruct *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0xe0) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FStructSerializerBuiltinTestStruct *)
         (*(longlong *)&(this->Pairs).Elements + lVar7 * 0xf0 + 0x10);
}

// Emplace<FString,UE::Math::TVector<double>_> @ 148b89710

TVector<double> * __thiscall
TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
::Emplace<FString,UE::Math::TVector<double>_>
          (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
           *this,FString *param_1,TVector<double> *param_2)

{
  int iVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_> *pTVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x30,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar9 + 4 + (longlong)iVar4 * 0x30);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar9 + (longlong)iVar1 * 0x30) = 0xffffffff;
    }
  }
  TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<48,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  pTVar8 = (TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,UE::Math::TVector<double>_>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    *(double *)((longlong)local_28.Pointer + 0x10) = (param_2->field0_0x0)._s_0.X;
    *(double *)((longlong)local_28.Pointer + 0x18) = dVar2;
    *(double *)((longlong)local_28.Pointer + 0x20) = (param_2->field0_0x0)._s_0.Z;
    *(undefined4 *)((longlong)local_28.Pointer + 0x28) = 0xffffffff;
    pTVar8 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar6 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar8;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar3 = TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar5,pTVar8,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar5,pTVar8,local_res8[0]);
  }
  return (TVector<double> *)(*(longlong *)&(this->Pairs).Elements + 0x10 + lVar9 * 0x30);
}

// Emplace<FString,FStructSerializerBuiltinTestStruct> @ 148b89880

FStructSerializerBuiltinTestStruct * __thiscall
TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
::Emplace<FString,FStructSerializerBuiltinTestStruct>
          (TMapBase<FString,FStructSerializerBuiltinTestStruct,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>_>
           *this,FString *param_1,FStructSerializerBuiltinTestStruct *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xf0,0x10,1,(ForAnyElementType *)this,
                       (int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0xf0 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0xf0 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<240,16,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar7 = (TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_> *)0x0;
  if (local_28.Pointer !=
      (TSparseSetElement<TTuple<FString,FStructSerializerBuiltinTestStruct>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    FStructSerializerBuiltinTestStruct::FStructSerializerBuiltinTestStruct
              ((FStructSerializerBuiltinTestStruct *)((longlong)local_28.Pointer + 0x10),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0xe0) = 0xffffffff;
    pTVar7 = local_28.Pointer;
  }
  local_res8[0] = local_28.Index;
  iVar5 = *(int *)&pTVar7->field_0x8 + -1;
  if (*(int *)&pTVar7->field_0x8 == 0) {
    pwVar6 = L"";
    iVar5 = 0;
  }
  else {
    pwVar6 = *(wchar_t **)pTVar7;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,pwVar6);
  bVar2 = TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FStructSerializerBuiltinTestStruct>,TDefaultMapHashableKeyFuncs<FString,FStructSerializerBuiltinTestStruct,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar7,local_res8[0]);
  }
  return (FStructSerializerBuiltinTestStruct *)
         (*(longlong *)&(this->Pairs).Elements + lVar8 * 0xf0 + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 148b8a7e0

void __thiscall
TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>::
GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
           *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_148b8a8b3;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar11 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_148b8a8b3:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x20 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar9 = param_1->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_1->AllocatorInstance).Data + (longlong)iVar9 * 4) =
           *(undefined4 *)pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 148b8aa30

void __thiscall
TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
           *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<FString,int>((FString *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_148b8ab10;
      uVar4 = puVar13[lVar8 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar8 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_148b8ab10:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0x30 + *(longlong *)&(this->Pairs).Elements);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + (longlong)*piVar1 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      ::FString::FString((FString *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10),
                         (FString *)pFVar11);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 148ba7dd0

TVector<float> * __thiscall
TMapBase<FString,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>_>
::Find(TMapBase<FString,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TVector<float> *pTVar6;
  
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,pwVar5);
  iVar3 = TSet<TTuple<FString,UE::Math::TVector<float>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<float>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TVector<float> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TVector<float> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TVector<float> *)0x0;
}

// OrderIndependentCompareEqual @ 148ba9210

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>::
OrderIndependentCompareEqual
          (TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
           *this,TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_>
                 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  ForElementType<FSetElementId> FVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  bool bVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<int,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FString,0>_> *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 !=
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    return false;
  }
  puVar13 = (uint *)0x0;
  uVar2 = *(uint *)&(this->Pairs).Elements.field_0x28;
  uStack_48 = 0;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uStack_44 = 1;
  puVar10 = puVar13;
  local_30 = uStack_48;
  if (uVar2 != 0) {
    puVar7 = *(uint **)&(this->Pairs).Elements.field_0x20;
    puVar10 = (uint *)(ulonglong)uVar2;
    if (puVar7 == (uint *)0x0) {
      puVar7 = (uint *)TStack_70.Array;
    }
    uVar5 = *puVar7;
    puVar8 = puVar13;
    puVar12 = puVar13;
    local_30 = 0;
    uStack_48 = 0;
    while (uVar5 == 0) {
      iVar6 = (int)puVar8;
      local_30 = (int)puVar12 + 0x20;
      puVar12 = (uint *)(ulonglong)local_30;
      uStack_48 = iVar6 + 1;
      puVar8 = (uint *)(ulonglong)uStack_48;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_48)
      goto LAB_148ba92cb;
      uVar5 = puVar7[(longlong)iVar6 + 1];
    }
    uStack_44 = -uVar5 & uVar5;
    uVar1 = (ulonglong)uStack_44 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar5 = (local_30 - 1) + (int)lVar4;
    if ((int)uVar2 < (int)uVar5) {
      uVar5 = uVar2;
    }
    puVar10 = (uint *)(ulonglong)uVar5;
  }
LAB_148ba92cb:
  uStack_34 = (uint)puVar10;
  TStack_70._padding_ = CONCAT44(uStack_44,uStack_48);
  uStack_38 = 0xffffffff;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iStack_2c = TStack_70.CurrentBitIndex;
  TStack_70._28_4_ = TStack_70.CurrentBitIndex;
  TStack_70.BaseBitIndex = local_30;
  local_50 = this;
  local_40 = (undefined1 *)TStack_70.Array;
  TStack_70.CurrentBitIndex = uStack_34;
  if ((int)uStack_34 < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      lVar4 = *(longlong *)&(this->Pairs).Elements;
      uVar2 = *(uint *)((longlong)(int)puVar10 * 0x20 + lVar4);
      if (*(int *)&(param_1->Pairs).Elements.field_0x8 ==
          *(int *)&(param_1->Pairs).Elements.field_0x34) {
        return false;
      }
      FVar3 = (param_1->Pairs).Hash.SecondaryData;
      FVar9 = (ForElementType<FSetElementId>)&(param_1->Pairs).Hash;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FVar9 = FVar3;
      }
      uVar5 = *(uint *)((longlong)FVar9 + (ulonglong)((param_1->Pairs).HashSize - 1U & uVar2) * 4);
      if (uVar5 == 0xffffffff) {
        return false;
      }
      while (puVar7 = (uint *)((longlong)(int)uVar5 * 0x20 + *(longlong *)&(param_1->Pairs).Elements
                              ), *puVar7 != uVar2) {
        uVar5 = puVar7[6];
        if (uVar5 == 0xffffffff) {
          return false;
        }
      }
      puVar8 = puVar7 + 2;
      if (puVar7 == (uint *)0x0) {
        puVar8 = puVar13;
      }
      if (puVar8 == (uint *)0x0) {
        return false;
      }
      uVar2 = puVar8[2];
      lVar11 = (longlong)(int)puVar10 * 0x20;
      uVar5 = *(uint *)(lVar11 + 0x10 + lVar4);
      if (uVar2 == uVar5) {
        if (1 < (int)uVar2) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)puVar8,*(wchar_t **)(lVar11 + 8 + lVar4));
          bVar14 = iVar6 == 0;
          goto LAB_148ba93df;
        }
      }
      else {
        bVar14 = uVar2 + uVar5 == 1;
LAB_148ba93df:
        if (!bVar14) {
          return false;
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      puVar10 = (uint *)(ulonglong)(uint)TStack_70.CurrentBitIndex;
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  return true;
}

// OrderIndependentCompareEqual @ 148ba9430

bool __thiscall
TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
::OrderIndependentCompareEqual
          (TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
           *this,TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
                 *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  TTuple<FString,UE::Math::TVector<double>_> *pTVar6;
  double *pdVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  TMapBase<FString,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>_>
  *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined1 *local_40;
  undefined4 uStack_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34 ==
      *(int *)&(param_1->Pairs).Elements.field_0x8 - *(int *)&(param_1->Pairs).Elements.field_0x34)
  {
    pdVar13 = (double *)0x0;
    uVar2 = *(uint *)&(this->Pairs).Elements.field_0x28;
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
    uStack_48 = 0;
    uStack_44 = 1;
    pdVar7 = pdVar13;
    local_30 = uStack_48;
    if (uVar2 != 0) {
      puVar8 = *(uint **)&(this->Pairs).Elements.field_0x20;
      pdVar7 = (double *)(ulonglong)uVar2;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)TStack_70.Array;
      }
      uVar5 = *puVar8;
      pdVar11 = pdVar13;
      pdVar12 = pdVar13;
      local_30 = 0;
      uStack_48 = 0;
      while (uVar5 == 0) {
        iVar10 = (int)pdVar11;
        local_30 = (int)pdVar12 + 0x20;
        pdVar12 = (double *)(ulonglong)local_30;
        uStack_48 = iVar10 + 1;
        pdVar11 = (double *)(ulonglong)uStack_48;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_48)
        goto LAB_148ba94ea;
        uVar5 = puVar8[(longlong)iVar10 + 1];
      }
      uStack_44 = -uVar5 & uVar5;
      uVar1 = (ulonglong)uStack_44 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar5 = (local_30 - 1) + (int)lVar9;
      if ((int)uVar2 < (int)uVar5) {
        uVar5 = uVar2;
      }
      pdVar7 = (double *)(ulonglong)uVar5;
    }
LAB_148ba94ea:
    uStack_38 = 0xffffffff;
    uStack_34 = (uint)pdVar7;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iStack_2c = TStack_70.CurrentBitIndex;
    TStack_70._28_4_ = TStack_70.CurrentBitIndex;
    TStack_70.BaseBitIndex = local_30;
    local_50 = this;
    local_40 = (undefined1 *)TStack_70.Array;
    TStack_70._padding_._0_4_ = uStack_48;
    TStack_70._padding_._4_4_ = uStack_44;
    TStack_70.CurrentBitIndex = uStack_34;
    if ((int)uStack_34 < *(int *)&(this->Pairs).Elements.field_0x28) {
      do {
        lVar9 = (longlong)(int)pdVar7 * 0x30;
        pTVar6 = TSet<TTuple<FString,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                 ::Find(&param_1->Pairs,(FString *)(*(longlong *)&(this->Pairs).Elements + lVar9));
        pdVar7 = (double *)&pTVar6->field_0x10;
        if (pTVar6 == (TTuple<FString,UE::Math::TVector<double>_> *)0x0) {
          pdVar7 = pdVar13;
        }
        if ((((pdVar7 == (double *)0x0) ||
             (lVar3 = *(longlong *)&(this->Pairs).Elements,
             *(double *)(lVar3 + 0x10 + lVar9) != *pdVar7)) ||
            (*(double *)(lVar3 + 0x18 + lVar9) != pdVar7[1])) ||
           (*(double *)(lVar3 + 0x20 + lVar9) != pdVar7[2])) goto LAB_148ba95cf;
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
        pdVar7 = (double *)(ulonglong)(uint)TStack_70.CurrentBitIndex;
      } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
    }
    bVar4 = true;
  }
  else {
LAB_148ba95cf:
    bVar4 = false;
  }
  return bVar4;
}

