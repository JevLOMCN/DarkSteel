// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// EmplaceUnique<FName,FName> @ 1426efdf0

FName * __thiscall
TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_>::
EmplaceUnique<FName,FName>
          (TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_>
           *this,FName *param_1,FName *param_2)

{
  longlong lVar1;
  FName *pFVar2;
  FName FVar3;
  longlong lVar4;
  int local_res10;
  TBaseKeyIterator<0> local_28;
  
  FVar3 = *param_2;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
  TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
              *)this,*param_1);
  if (local_28.Index != -1) {
    lVar4 = *(longlong *)&(local_28.Set)->Elements;
    do {
      lVar1 = (longlong)local_28.Index * 3 + 1;
      pFVar2 = (FName *)(lVar4 + lVar1 * 8);
      if (*(FName *)(lVar4 + lVar1 * 8) == FVar3) {
        if (pFVar2 != (FName *)0x0) {
          return pFVar2;
        }
        break;
      }
      local_28.Index = local_28.NextIndex;
      if (local_28.NextIndex == -1) break;
      do {
        local_28.NextIndex = *(int *)(lVar4 + 0x10 + (longlong)local_28.Index * 0x18);
        if (*(FName *)(lVar4 + (longlong)local_28.Index * 0x18) == local_28.Key) break;
        local_28.Index = local_28.NextIndex;
      } while (local_28.NextIndex != -1);
    } while (local_28.Index != -1);
  }
  local_28.Set = (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
                  *)param_1;
  local_28.Key = (FName)param_2;
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<FName_&&,FName_&&>_>
            ((TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_&&,FName_&&> *)&local_res10,(bool *)&local_28);
  return (FName *)(*(longlong *)this + (longlong)local_res10 * 0x18 + 8);
}

// MultiFind<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> @ 1426f2d80

void __thiscall
TMultiMap<FTabId,FLayoutExtender::FExtendedTab,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>_>
::MultiFind<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          (TMultiMap<FTabId,FLayoutExtender::FExtendedTab,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>_>
           *this,FTabId *param_1,
          TArray<FLayoutExtender::FExtendedTab,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3)

{
  uchar uVar1;
  undefined4 uVar2;
  ForElementType<FLayoutExtender::FExtendedTab> FVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ForElementType<FLayoutExtender::FExtendedTab> FVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 *puVar16;
  ForElementType<FLayoutExtender::FExtendedTab> FVar17;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<FTabId,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<FTabId,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FTabId,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FTabId_const_>)param_1);
  iVar12 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
LAB_1426f2f85:
      if (param_3) {
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)param_2;
        if (FVar3 != (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
          FVar13 = FVar3;
        }
        iVar12 = param_2->ArrayNum / 2;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          puVar16 = (undefined8 *)((longlong)FVar13 + (longlong)(param_2->ArrayNum + -1) * 0x24);
          do {
            uVar2 = *(undefined4 *)((longlong)FVar13 + 0x20);
            uVar5 = puVar16[1];
            uVar6 = *(undefined8 *)FVar13;
            uVar7 = *(undefined8 *)((longlong)FVar13 + 8);
            uVar8 = *(undefined8 *)((longlong)FVar13 + 0x10);
            uVar9 = *(undefined8 *)((longlong)FVar13 + 0x18);
            *(undefined8 *)FVar13 = *puVar16;
            *(undefined8 *)((longlong)FVar13 + 8) = uVar5;
            uVar5 = puVar16[3];
            *(undefined8 *)((longlong)FVar13 + 0x10) = puVar16[2];
            *(undefined8 *)((longlong)FVar13 + 0x18) = uVar5;
            *(undefined4 *)((longlong)FVar13 + 0x20) = *(undefined4 *)(puVar16 + 4);
            *puVar16 = uVar6;
            puVar16[1] = uVar7;
            puVar16[2] = uVar8;
            puVar16[3] = uVar9;
            *(undefined4 *)(puVar16 + 4) = uVar2;
            lVar14 = lVar14 + -1;
            puVar16 = (undefined8 *)((longlong)puVar16 + -0x24);
            FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)((longlong)FVar13 + 0x24);
          } while (lVar14 != 0);
        }
      }
      return;
    }
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    FVar17 = (ForElementType<FLayoutExtender::FExtendedTab>)
             (*(longlong *)&(local_38.Set)->Elements + 0x10 + (longlong)local_38.Index * 0x3c);
    FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)param_2;
    if (FVar3 != (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
      FVar13 = FVar3;
    }
    local_38.NextIndex = iVar12;
    if ((ulonglong)FVar13 <= (ulonglong)FVar17) {
      FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)param_2;
      if (FVar3 != (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
        FVar13 = FVar3;
      }
      if (((ulonglong)FVar17 < (ulonglong)((longlong)FVar13 + (longlong)param_2->ArrayMax * 0x24))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar11 = param_2->ArrayNum;
    if (iVar11 == param_2->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FLayoutExtender::FExtendedTab>_>
                         (0x424,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar11 + 1;
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    lVar14 = (longlong)iVar11;
    FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)param_2;
    if (FVar3 != (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
      FVar13 = FVar3;
    }
    *(undefined4 *)((longlong)FVar13 + lVar14 * 0x24) = *(undefined4 *)FVar17;
    uVar5 = *(undefined8 *)((longlong)FVar17 + 0xc);
    *(undefined8 *)((uchar *)((longlong)FVar13 + 4) + lVar14 * 0x24) =
         *(undefined8 *)((longlong)FVar17 + 4);
    *(undefined8 *)((uchar *)((longlong)FVar13 + 4) + lVar14 * 0x24 + 8) = uVar5;
    *(undefined4 *)((uchar *)((longlong)FVar13 + 0x14) + lVar14 * 0x24) =
         *(undefined4 *)((longlong)FVar17 + 0x14);
    ((uchar *)((longlong)FVar13 + 0x18))[lVar14 * 0x24] = *(uchar *)((longlong)FVar17 + 0x18);
    *(undefined4 *)((uchar *)((longlong)FVar13 + 0x1c) + lVar14 * 0x24) =
         *(undefined4 *)((longlong)FVar17 + 0x1c);
    uVar1 = *(uchar *)((longlong)FVar17 + 0x20);
    ((uchar *)((longlong)FVar13 + 0x22))[lVar14 * 0x24] = '\0';
    ((uchar *)((longlong)FVar13 + 0x20))[lVar14 * 0x24] = uVar1;
    uVar1 = *(uchar *)((longlong)FVar17 + 0x22);
    ((uchar *)((longlong)FVar13 + 0x22))[lVar14 * 0x24] = uVar1;
    if (uVar1 != '\0') {
      ((uchar *)((longlong)FVar13 + 0x21))[lVar14 * 0x24] = *(uchar *)((longlong)FVar17 + 0x21);
    }
    if (iVar12 == -1) goto LAB_1426f2f85;
    lVar14 = *(longlong *)&(local_38.Set)->Elements;
    local_38.Index = iVar12;
    do {
      lVar15 = (longlong)local_38.Index * 0x3c;
      iVar12 = *(int *)(lVar15 + 0x34 + lVar14);
      if ((*(FName *)(lVar15 + lVar14) == (local_38.Key)->TabType) &&
         (((iVar11 = *(int *)(lVar15 + 8 + lVar14), iVar11 == -1 ||
           ((local_38.Key)->InstanceId == -1)) || (iVar11 == (local_38.Key)->InstanceId)))) break;
      local_38.Index = iVar12;
    } while (iVar12 != -1);
  } while( true );
}

// MultiFind<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> @ 1426f3010

void __thiscall
TMultiMap<FName,FLayoutExtender::FExtendedTab,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedTab,1>_>
::MultiFind<TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          (TMultiMap<FName,FLayoutExtender::FExtendedTab,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedTab,1>_>
           *this,FName param_1,
          TArray<FLayoutExtender::FExtendedTab,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3)

{
  uchar uVar1;
  undefined4 uVar2;
  ForElementType<FLayoutExtender::FExtendedTab> FVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  ForElementType<FLayoutExtender::FExtendedTab> FVar13;
  longlong lVar14;
  undefined8 *puVar15;
  ForElementType<FLayoutExtender::FExtendedTab> FVar16;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<FName,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<FName,FLayoutExtender::FExtendedTab>,TDefaultMapHashableKeyFuncs<FName,FLayoutExtender::FExtendedTab,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar12 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
LAB_1426f31fc:
      if (param_3) {
        FVar3 = (param_2->AllocatorInstance).SecondaryData;
        FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)param_2;
        if (FVar3 != (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
          FVar13 = FVar3;
        }
        iVar12 = param_2->ArrayNum / 2;
        lVar14 = (longlong)iVar12;
        if (0 < iVar12) {
          puVar15 = (undefined8 *)((longlong)FVar13 + (longlong)(param_2->ArrayNum + -1) * 0x24);
          do {
            uVar2 = *(undefined4 *)((longlong)FVar13 + 0x20);
            uVar5 = puVar15[1];
            uVar6 = *(undefined8 *)FVar13;
            uVar7 = *(undefined8 *)((longlong)FVar13 + 8);
            uVar8 = *(undefined8 *)((longlong)FVar13 + 0x10);
            uVar9 = *(undefined8 *)((longlong)FVar13 + 0x18);
            *(undefined8 *)FVar13 = *puVar15;
            *(undefined8 *)((longlong)FVar13 + 8) = uVar5;
            uVar5 = puVar15[3];
            *(undefined8 *)((longlong)FVar13 + 0x10) = puVar15[2];
            *(undefined8 *)((longlong)FVar13 + 0x18) = uVar5;
            *(undefined4 *)((longlong)FVar13 + 0x20) = *(undefined4 *)(puVar15 + 4);
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
            puVar15[2] = uVar8;
            puVar15[3] = uVar9;
            *(undefined4 *)(puVar15 + 4) = uVar2;
            lVar14 = lVar14 + -1;
            puVar15 = (undefined8 *)((longlong)puVar15 + -0x24);
            FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)((longlong)FVar13 + 0x24);
          } while (lVar14 != 0);
        }
      }
      return;
    }
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    FVar16 = (ForElementType<FLayoutExtender::FExtendedTab>)
             (*(longlong *)&(local_38.Set)->Elements + 8 + (longlong)local_38.Index * 0x34);
    FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)param_2;
    if (FVar3 != (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
      FVar13 = FVar3;
    }
    local_38.NextIndex = iVar12;
    if ((ulonglong)FVar13 <= (ulonglong)FVar16) {
      FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)param_2;
      if (FVar3 != (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
        FVar13 = FVar3;
      }
      if (((ulonglong)FVar16 < (ulonglong)((longlong)FVar13 + (longlong)param_2->ArrayMax * 0x24))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar11 = param_2->ArrayNum;
    if (iVar11 == param_2->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FLayoutExtender::FExtendedTab>_>
                         (0x424,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar11 + 1;
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    lVar14 = (longlong)iVar11;
    FVar13 = (ForElementType<FLayoutExtender::FExtendedTab>)param_2;
    if (FVar3 != (ForElementType<FLayoutExtender::FExtendedTab>)0x0) {
      FVar13 = FVar3;
    }
    *(undefined4 *)((longlong)FVar13 + lVar14 * 0x24) = *(undefined4 *)FVar16;
    uVar5 = *(undefined8 *)((longlong)FVar16 + 0xc);
    *(undefined8 *)((uchar *)((longlong)FVar13 + 4) + lVar14 * 0x24) =
         *(undefined8 *)((longlong)FVar16 + 4);
    *(undefined8 *)((uchar *)((longlong)FVar13 + 4) + lVar14 * 0x24 + 8) = uVar5;
    *(undefined4 *)((uchar *)((longlong)FVar13 + 0x14) + lVar14 * 0x24) =
         *(undefined4 *)((longlong)FVar16 + 0x14);
    ((uchar *)((longlong)FVar13 + 0x18))[lVar14 * 0x24] = *(uchar *)((longlong)FVar16 + 0x18);
    *(undefined4 *)((uchar *)((longlong)FVar13 + 0x1c) + lVar14 * 0x24) =
         *(undefined4 *)((longlong)FVar16 + 0x1c);
    uVar1 = *(uchar *)((longlong)FVar16 + 0x20);
    ((uchar *)((longlong)FVar13 + 0x22))[lVar14 * 0x24] = '\0';
    ((uchar *)((longlong)FVar13 + 0x20))[lVar14 * 0x24] = uVar1;
    uVar1 = *(uchar *)((longlong)FVar16 + 0x22);
    ((uchar *)((longlong)FVar13 + 0x22))[lVar14 * 0x24] = uVar1;
    if (uVar1 != '\0') {
      ((uchar *)((longlong)FVar13 + 0x21))[lVar14 * 0x24] = *(uchar *)((longlong)FVar16 + 0x21);
    }
    if (iVar12 == -1) goto LAB_1426f31fc;
    local_38.Index = iVar12;
    do {
      iVar12 = *(int *)((longlong)local_38.Index * 0x34 + 0x2c +
                       *(longlong *)&(local_38.Set)->Elements);
      if (*(FName *)((longlong)local_38.Index * 0x34 + *(longlong *)&(local_38.Set)->Elements) ==
          local_38.Key) break;
      local_38.Index = iVar12;
    } while (iVar12 != -1);
  } while( true );
}

