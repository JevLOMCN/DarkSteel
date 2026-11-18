// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 4

// Append<FDefaultSetAllocator> @ 142b6fd60

void __thiscall
TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
::Append<FDefaultSetAllocator>
          (TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
           *this,TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                 *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142b6fe0d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res10;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_142b6fe0d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142b6ff10;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_142b6ff10:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar2 = (FName *)(*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
    ::Emplace<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>
              ((TMapBase<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
                *)this,pFVar2,(TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_> *)(pFVar2 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
           *)param_1);
  return;
}

// Append<FDefaultSetAllocator> @ 142b6ff90

void __thiscall
TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
::Append<FDefaultSetAllocator>
          (TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
           *this,TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FName *pFVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
             *)this,((*(int *)&this->field_0x8 - *(int *)&this->field_0x34) -
                    *(int *)&param_1->field_0x34) + *(int *)&param_1->field_0x8);
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar6 = 1;
  iVar14 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142b7003d;
      uVar11 = puVar15[lVar8 + 1];
    }
    uVar6 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iVar7 = iVar14 + -1 + local_res10;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_142b7003d:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar12);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar6) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142b70140;
      uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar10;
    if ((int)uVar6 < (int)uVar11) {
      uVar11 = uVar6;
    }
  }
LAB_142b70140:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPackageDependencyData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar9 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0xf0 + *(longlong *)param_1);
    TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
    ::Emplace<FName,FPackageDependencyData>
              ((TMapBase<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
                *)this,pFVar9,(FPackageDependencyData *)(pFVar9 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
           *)param_1);
  return;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 142b776b0

void __thiscall
TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FName,FPackageDependencyData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>_>
           *this,FName param_1,TArray<FPackageDependencyData,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int iVar1;
  FPackageDependencyData *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FPackageDependencyData *pFVar6;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<FName,FPackageDependencyData>,TDefaultMapHashableKeyFuncs<FName,FPackageDependencyData,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar1 = local_38.NextIndex;
  do {
    local_38.NextIndex = iVar1;
    if (local_38.Index == -1) {
LAB_142b77837:
      if (param_3) {
        AlgoImpl::Reverse<FPackageDependencyData>
                  ((FPackageDependencyData *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      }
      return;
    }
    pFVar6 = (FPackageDependencyData *)
             (*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0xf0 + 8);
    pFVar2 = (FPackageDependencyData *)(param_2->AllocatorInstance).Data;
    if (((pFVar2 <= pFVar6) && (pFVar6 < pFVar2 + param_2->ArrayMax)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8e0,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FPackageDependencyData::FPackageDependencyData
              ((FPackageDependencyData *)
               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xe0),pFVar6);
    local_38.Index = iVar1;
    if (iVar1 == -1) goto LAB_142b77837;
    do {
      iVar1 = *(int *)((longlong)local_38.Index * 0xf0 + 0xe8 +
                      *(longlong *)&(local_38.Set)->Elements);
      if (*(FName *)((longlong)local_38.Index * 0xf0 + *(longlong *)&(local_38.Set)->Elements) ==
          local_38.Key) break;
      local_38.Index = iVar1;
    } while (iVar1 != -1);
  } while( true );
}

// MultiFindPointer<TSizedDefaultAllocator<32>_> @ 142b77860

void __thiscall
TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
::MultiFindPointer<TSizedDefaultAllocator<32>_>
          (TMultiMap<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>_>
           *this,FName param_1,
          TArray<TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_*,TSizedDefaultAllocator<32>_>
          *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  longlong local_38;
  TBaseKeyIterator<0> local_30;
  
  TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_30,
             (TSet<TTuple<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>_>,TDefaultMapHashableKeyFuncs<FName,TUniquePtr<FAssetData,TDefaultDelete<FAssetData>_>,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_30.NextIndex;
  do {
    if (local_30.Index == -1) {
LAB_142b779d7:
      if (param_3) {
        pFVar1 = (param_2->AllocatorInstance).Data;
        iVar6 = param_2->ArrayNum / 2;
        if (0 < iVar6) {
          lVar8 = 0;
          pFVar7 = pFVar1 + (longlong)(param_2->ArrayNum + -1) * 8;
          do {
            uVar2 = *(undefined8 *)(pFVar1 + lVar8 * 8);
            *(undefined8 *)(pFVar1 + lVar8 * 8) = *(undefined8 *)pFVar7;
            lVar8 = lVar8 + 1;
            *(undefined8 *)pFVar7 = uVar2;
            pFVar7 = pFVar7 + -8;
          } while (lVar8 < iVar6);
        }
      }
      return;
    }
    local_38 = *(longlong *)&(local_30.Set)->Elements + ((longlong)local_30.Index * 3 + 1) * 8;
    pFVar1 = (param_2->AllocatorInstance).Data;
    local_30.NextIndex = iVar6;
    if (((pFVar1 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_38;
    if (iVar6 == -1) goto LAB_142b779d7;
    local_30.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_30.Set)->Elements + 0x10 +
                      (longlong)local_30.Index * 0x18);
      if (*(FName *)(*(longlong *)&(local_30.Set)->Elements + (longlong)local_30.Index * 0x18) ==
          local_30.Key) break;
      local_30.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

