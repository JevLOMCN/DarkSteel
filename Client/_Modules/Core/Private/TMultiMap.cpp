// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 20

// EmplaceUnique<FName_const_&,IModularFeature_*_const_&> @ 14150b100

IModularFeature ** __thiscall
TMultiMap<FName,IModularFeature_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>_>
::EmplaceUnique<FName_const_&,IModularFeature_*_const_&>
          (TMultiMap<FName,IModularFeature_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>_>
           *this,FName *param_1,IModularFeature **param_2)

{
  longlong lVar1;
  IModularFeature **ppIVar2;
  IModularFeature *pIVar3;
  longlong lVar4;
  int local_res10;
  TBaseKeyIterator<0> local_28;
  
  pIVar3 = *param_2;
  TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
              *)this,*param_1);
  if (local_28.Index != -1) {
    lVar4 = *(longlong *)&(local_28.Set)->Elements;
    do {
      lVar1 = (longlong)local_28.Index * 3 + 1;
      ppIVar2 = (IModularFeature **)(lVar4 + lVar1 * 8);
      if (*(IModularFeature **)(lVar4 + lVar1 * 8) == pIVar3) {
        if (ppIVar2 != (IModularFeature **)0x0) {
          return ppIVar2;
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
  local_28.Set = (TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
                  *)param_1;
  local_28.Key = (FName)param_2;
  TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,IModularFeature_*_const_&>_>
            ((TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,IModularFeature_*_const_&> *)&local_res10,
             (bool *)&local_28);
  return (IModularFeature **)(*(longlong *)this + (longlong)local_res10 * 0x18 + 8);
}

// RemoveSingle @ 1415e4ff0

int __thiscall
TMultiMap<FName,IModularFeature_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>_>
::RemoveSingle(TMultiMap<FName,IModularFeature_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>_>
               *this,FName param_1,IModularFeature *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FSetElementId> FVar6;
  uint *puVar7;
  ForElementType<unsigned_int> FVar8;
  TBaseKeyIterator<0> local_28;
  
  TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<FName,IModularFeature_*>,TDefaultMapHashableKeyFuncs<FName,IModularFeature_*,1>,FDefaultSetAllocator>
              *)this,param_1);
  if (local_28.Index == 0xffffffff) {
    return 0;
  }
  lVar2 = *(longlong *)&(local_28.Set)->Elements;
  while (iVar5 = local_28.Index,
        *(IModularFeature **)(lVar2 + 8 + (longlong)local_28.Index * 0x18) != param_2) {
    local_28.Index = local_28.NextIndex;
    if (local_28.NextIndex == 0xffffffff) {
      return 0;
    }
    do {
      local_28.NextIndex = *(uint *)(lVar2 + 0x10 + (longlong)local_28.Index * 0x18);
      if (*(FName *)(lVar2 + (longlong)local_28.Index * 0x18) == local_28.Key) break;
      local_28.Index = local_28.NextIndex;
    } while (local_28.NextIndex != 0xffffffff);
    if (local_28.Index == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < local_28.Index) && (local_28.Index < *(int *)&((local_28.Set)->Elements).field_0x28)) {
    FVar8 = *(ForElementType<unsigned_int> *)&((local_28.Set)->Elements).field_0x20;
    if (FVar8 == (ForElementType<unsigned_int>)0x0) {
      FVar8 = (ForElementType<unsigned_int>)&((local_28.Set)->Elements).field_0x10;
    }
    if ((*(uint *)((longlong)FVar8 +
                  (longlong)((int)(local_28.Index + (local_28.Index >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (local_28.Index & 0x1fU) & 1) != 0) goto LAB_1415e50f0;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
LAB_1415e50f0:
  lVar2 = *(longlong *)&(local_28.Set)->Elements + (longlong)iVar5 * 0x18;
  FVar6 = ((local_28.Set)->Hash).SecondaryData;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&(local_28.Set)->Hash;
  }
  puVar7 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar2 + 0x14) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar4)) break;
    if (uVar1 == iVar5) {
      *puVar7 = *(uint *)(lVar2 + 0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_28.Set,iVar5,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&(local_28.Set)->Elements + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar3 = (code *)swi(3);
  iVar5 = (*pcVar3)();
  return iVar5;
}

// MultiFindPointer<TSizedDefaultAllocator<32>_> @ 141613e20

void __thiscall
TMultiMap<FString,TTuple<FString,enum_EConsoleVariableFlags>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TTuple<FString,enum_EConsoleVariableFlags>,1>_>
::MultiFindPointer<TSizedDefaultAllocator<32>_>
          (void *this,FString *param_1,
          TArray<TTuple<FString,EConsoleVariableFlags>_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  bool bVar13;
  longlong local_48 [2];
  
  iVar8 = 0;
  if (*(int *)((longlong)this + 0x48) != 0) {
    iVar6 = (param_1->Data).ArrayNum;
    if (iVar6 == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar8 = iVar6 + -1;
    }
    uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,pwVar10);
    lVar12 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar12 = (longlong)this + 0x38;
    }
    iVar8 = *(int *)(lVar12 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar5
                              ) * 4);
    iVar6 = iVar8;
    if (iVar8 != -1) {
      lVar12 = *(longlong *)this;
      iVar1 = (param_1->Data).ArrayNum;
      do {
        lVar9 = (longlong)iVar6;
        iVar7 = *(int *)(lVar12 + 8 + lVar9 * 0x30);
        iVar8 = *(int *)(lVar12 + 0x28 + lVar9 * 0x30);
        if (iVar7 == iVar1) {
          if (iVar7 < 2) break;
          iVar7 = StricmpImpl<wchar_t,wchar_t>
                            (*(wchar_t **)(lVar12 + lVar9 * 0x30),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar13 = iVar7 == 0;
        }
        else {
          bVar13 = iVar7 + iVar1 == 1;
        }
        if ((bVar13) || (iVar6 = iVar8, iVar8 == -1)) break;
      } while( true );
    }
    if (iVar6 != -1) {
LAB_141613f10:
      local_48[0] = (longlong)iVar6 * 0x30 + *(longlong *)this + 0x10;
      pFVar2 = (param_2->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < pFVar2 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = param_2->ArrayNum;
      if (iVar6 == param_2->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_48[0];
      if (iVar8 != -1) {
        lVar12 = *(longlong *)this;
        iVar1 = (param_1->Data).ArrayNum;
        iVar6 = iVar8;
        do {
          lVar9 = (longlong)iVar6;
          iVar7 = *(int *)(lVar12 + 8 + lVar9 * 0x30);
          iVar8 = *(int *)(lVar12 + 0x28 + lVar9 * 0x30);
          if (iVar7 == iVar1) {
            if (iVar7 < 2) goto LAB_141614020;
            iVar7 = StricmpImpl<wchar_t,wchar_t>
                              (*(wchar_t **)(lVar12 + lVar9 * 0x30),
                               (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar13 = iVar7 == 0;
          }
          else {
            bVar13 = iVar7 + iVar1 == 1;
          }
          if ((bVar13) || (iVar6 = iVar8, iVar8 == -1)) goto LAB_141614020;
        } while( true );
      }
    }
  }
LAB_141614043:
  lVar12 = 0;
  if (param_3) {
    pFVar2 = (param_2->AllocatorInstance).Data;
    iVar8 = param_2->ArrayNum / 2;
    if (0 < iVar8) {
      pFVar11 = pFVar2 + (longlong)(param_2->ArrayNum + -1) * 8;
      do {
        uVar3 = *(undefined8 *)(pFVar2 + lVar12 * 8);
        *(undefined8 *)(pFVar2 + lVar12 * 8) = *(undefined8 *)pFVar11;
        lVar12 = lVar12 + 1;
        *(undefined8 *)pFVar11 = uVar3;
        pFVar11 = pFVar11 + -8;
      } while (lVar12 < iVar8);
    }
  }
  return;
LAB_141614020:
  if (iVar6 == -1) goto LAB_141614043;
  goto LAB_141613f10;
}

// MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 1416d1260

void __thiscall
TMultiMap<FLocKey,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>_>
::MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TMultiMap<FLocKey,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>_>
           *this,FLocKey *param_1,
          TArray<TSharedRef<FArchiveEntry,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<TSharedRef<FArchiveEntry,1>_> FVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  ForElementType<TSharedRef<FArchiveEntry,1>_> FVar16;
  ForElementType<TSharedRef<FArchiveEntry,1>_> FVar17;
  undefined1 *puVar18;
  
  if (*(int *)&this->field_0x48 != 0) {
    uVar1 = param_1->Hash;
    puVar18 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar18 = &this->field_0x38;
    }
    iVar9 = *(int *)(puVar18 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar1) * 4
                    );
    iVar8 = iVar9;
    if (iVar9 == -1) {
LAB_1416d132b:
      if (iVar8 != -1) {
LAB_1416d1340:
        FVar17 = (param_2->AllocatorInstance).SecondaryData;
        FVar16 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)
                 (*(longlong *)this + 0x18 + (longlong)iVar8 * 0x30);
        FVar11 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)param_2;
        if (FVar17 != (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0) {
          FVar11 = FVar17;
        }
        if ((ulonglong)FVar11 <= (ulonglong)FVar16) {
          FVar11 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)param_2;
          if (FVar17 != (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0) {
            FVar11 = FVar17;
          }
          if (((ulonglong)FVar16 <
               (ulonglong)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar11)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FArchiveEntry,1>_>_>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        FVar17 = (param_2->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)param_2;
        if (FVar17 != (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0) {
          FVar11 = FVar17;
        }
        *(undefined8 *)((longlong)FVar11 + (longlong)iVar8 * 0x10) = *(undefined8 *)FVar16;
        lVar15 = *(longlong *)((longlong)FVar16 + 8);
        *(longlong *)((uchar *)((longlong)FVar11 + 8) + (longlong)iVar8 * 0x10) = lVar15;
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
          UNLOCK();
        }
        if (iVar9 != -1) {
          lVar15 = *(longlong *)this;
          uVar1 = param_1->Hash;
          iVar8 = iVar9;
          do {
            lVar10 = (longlong)iVar8;
            iVar9 = *(int *)(lVar15 + 0x28 + lVar10 * 0x30);
            if (*(uint *)(lVar15 + 0x10 + lVar10 * 0x30) == uVar1) {
              if ((param_1->Str).Data.ArrayNum == 0) {
                pwVar14 = L"";
              }
              else {
                pwVar14 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
              }
              if (*(int *)(lVar15 + 8 + lVar10 * 0x30) == 0) {
                pwVar12 = L"";
              }
              else {
                pwVar12 = *(wchar_t **)(lVar15 + lVar10 * 0x30);
              }
              iVar7 = wcscmp(pwVar12,pwVar14);
              if (iVar7 == 0) goto LAB_1416d148f;
            }
            iVar8 = iVar9;
            if (iVar9 == -1) break;
          } while( true );
        }
      }
    }
    else {
      lVar15 = *(longlong *)this;
      do {
        lVar10 = (longlong)iVar8;
        iVar9 = *(int *)(lVar15 + 0x28 + lVar10 * 0x30);
        if (*(uint *)(lVar15 + 0x10 + lVar10 * 0x30) == uVar1) {
          if ((param_1->Str).Data.ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
          }
          if (*(int *)(lVar15 + 8 + lVar10 * 0x30) == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = *(wchar_t **)(lVar15 + lVar10 * 0x30);
          }
          iVar7 = wcscmp(pwVar12,pwVar14);
          if (iVar7 == 0) goto LAB_1416d132b;
        }
        iVar8 = iVar9;
      } while (iVar9 != -1);
    }
  }
LAB_1416d14bc:
  if (param_3) {
    FVar11 = (param_2->AllocatorInstance).SecondaryData;
    FVar17 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)param_2;
    if (FVar11 != (ForElementType<TSharedRef<FArchiveEntry,1>_>)0x0) {
      FVar17 = FVar11;
    }
    iVar9 = param_2->ArrayNum / 2;
    lVar15 = (longlong)iVar9;
    if (0 < iVar9) {
      puVar13 = (undefined8 *)((longlong)(param_2->ArrayNum + -1) * 0x10 + (longlong)FVar17);
      do {
        uVar3 = puVar13[1];
        uVar4 = *(undefined8 *)FVar17;
        uVar5 = *(undefined8 *)((longlong)FVar17 + 8);
        *(undefined8 *)FVar17 = *puVar13;
        *(undefined8 *)((longlong)FVar17 + 8) = uVar3;
        FVar17 = (ForElementType<TSharedRef<FArchiveEntry,1>_>)((longlong)FVar17 + 0x10);
        *puVar13 = uVar4;
        puVar13[1] = uVar5;
        lVar15 = lVar15 + -1;
        puVar13 = puVar13 + -2;
      } while (lVar15 != 0);
    }
  }
  return;
LAB_1416d148f:
  if (iVar8 == -1) goto LAB_1416d14bc;
  goto LAB_1416d1340;
}

// MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 1416d1530

void __thiscall
TMultiMap<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
::MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TMultiMap<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
           *this,FLocKey *param_1,
          TArray<TSharedRef<FManifestEntry,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar16;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar17;
  undefined1 *puVar18;
  
  if (*(int *)&this->field_0x48 != 0) {
    uVar1 = param_1->Hash;
    puVar18 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar18 = &this->field_0x38;
    }
    iVar9 = *(int *)(puVar18 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar1) * 4
                    );
    iVar8 = iVar9;
    if (iVar9 == -1) {
LAB_1416d15fb:
      if (iVar8 != -1) {
LAB_1416d1610:
        FVar17 = (param_2->AllocatorInstance).SecondaryData;
        FVar16 = (ForElementType<TSharedRef<FManifestEntry,1>_>)
                 (*(longlong *)this + 0x18 + (longlong)iVar8 * 0x30);
        FVar11 = (ForElementType<TSharedRef<FManifestEntry,1>_>)param_2;
        if (FVar17 != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
          FVar11 = FVar17;
        }
        if ((ulonglong)FVar11 <= (ulonglong)FVar16) {
          FVar11 = (ForElementType<TSharedRef<FManifestEntry,1>_>)param_2;
          if (FVar17 != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
            FVar11 = FVar17;
          }
          if (((ulonglong)FVar16 <
               (ulonglong)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar11)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FManifestEntry,1>_>_>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        FVar17 = (param_2->AllocatorInstance).SecondaryData;
        FVar11 = (ForElementType<TSharedRef<FManifestEntry,1>_>)param_2;
        if (FVar17 != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
          FVar11 = FVar17;
        }
        *(undefined8 *)((longlong)FVar11 + (longlong)iVar8 * 0x10) = *(undefined8 *)FVar16;
        lVar15 = *(longlong *)((longlong)FVar16 + 8);
        *(longlong *)((uchar *)((longlong)FVar11 + 8) + (longlong)iVar8 * 0x10) = lVar15;
        if (lVar15 != 0) {
          LOCK();
          *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
          UNLOCK();
        }
        if (iVar9 != -1) {
          lVar15 = *(longlong *)this;
          uVar1 = param_1->Hash;
          iVar8 = iVar9;
          do {
            lVar10 = (longlong)iVar8;
            iVar9 = *(int *)(lVar15 + 0x28 + lVar10 * 0x30);
            if (*(uint *)(lVar15 + 0x10 + lVar10 * 0x30) == uVar1) {
              if ((param_1->Str).Data.ArrayNum == 0) {
                pwVar14 = L"";
              }
              else {
                pwVar14 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
              }
              if (*(int *)(lVar15 + 8 + lVar10 * 0x30) == 0) {
                pwVar12 = L"";
              }
              else {
                pwVar12 = *(wchar_t **)(lVar15 + lVar10 * 0x30);
              }
              iVar7 = wcscmp(pwVar12,pwVar14);
              if (iVar7 == 0) goto LAB_1416d175f;
            }
            iVar8 = iVar9;
            if (iVar9 == -1) break;
          } while( true );
        }
      }
    }
    else {
      lVar15 = *(longlong *)this;
      do {
        lVar10 = (longlong)iVar8;
        iVar9 = *(int *)(lVar15 + 0x28 + lVar10 * 0x30);
        if (*(uint *)(lVar15 + 0x10 + lVar10 * 0x30) == uVar1) {
          if ((param_1->Str).Data.ArrayNum == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
          }
          if (*(int *)(lVar15 + 8 + lVar10 * 0x30) == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = *(wchar_t **)(lVar15 + lVar10 * 0x30);
          }
          iVar7 = wcscmp(pwVar12,pwVar14);
          if (iVar7 == 0) goto LAB_1416d15fb;
        }
        iVar8 = iVar9;
      } while (iVar9 != -1);
    }
  }
LAB_1416d178c:
  if (param_3) {
    FVar11 = (param_2->AllocatorInstance).SecondaryData;
    FVar17 = (ForElementType<TSharedRef<FManifestEntry,1>_>)param_2;
    if (FVar11 != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
      FVar17 = FVar11;
    }
    iVar9 = param_2->ArrayNum / 2;
    lVar15 = (longlong)iVar9;
    if (0 < iVar9) {
      puVar13 = (undefined8 *)((longlong)(param_2->ArrayNum + -1) * 0x10 + (longlong)FVar17);
      do {
        uVar3 = puVar13[1];
        uVar4 = *(undefined8 *)FVar17;
        uVar5 = *(undefined8 *)((longlong)FVar17 + 8);
        *(undefined8 *)FVar17 = *puVar13;
        *(undefined8 *)((longlong)FVar17 + 8) = uVar3;
        FVar17 = (ForElementType<TSharedRef<FManifestEntry,1>_>)((longlong)FVar17 + 0x10);
        *puVar13 = uVar4;
        puVar13[1] = uVar5;
        lVar15 = lVar15 + -1;
        puVar13 = puVar13 + -2;
      } while (lVar15 != 0);
    }
  }
  return;
LAB_1416d175f:
  if (iVar8 == -1) goto LAB_1416d178c;
  goto LAB_1416d1610;
}

// MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 1416d1800

void __thiscall
TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
::MultiFind<TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
           *this,FString *param_1,
          TArray<TSharedRef<FManifestEntry,1>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3)

{
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar11;
  wchar_t *pwVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 *puVar15;
  ForElementType<TSharedRef<FManifestEntry,1>_> FVar16;
  int iVar17;
  bool bVar18;
  
  iVar9 = *(int *)&this->field_0x48;
  if (iVar9 != 0) {
    iVar7 = (param_1->Data).ArrayNum;
    if (iVar7 == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    puVar15 = *(undefined1 **)&this->field_0x40;
    uVar6 = FCrc::StrCrc32<wchar_t>(pwVar12,0);
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &this->field_0x38;
    }
    iVar9 = *(int *)(puVar15 + ((longlong)(int)uVar6 & (longlong)iVar9 - 1U) * 4);
    iVar17 = iVar9;
    if (iVar9 != -1) {
      lVar14 = *(longlong *)this;
      do {
        lVar10 = (longlong)iVar17;
        iVar8 = *(int *)(lVar14 + 8 + lVar10 * 0x28);
        iVar9 = *(int *)(lVar14 + 0x20 + lVar10 * 0x28);
        if (iVar8 == iVar7) {
          if (iVar8 < 2) break;
          iVar8 = wcscmp(*(wchar_t **)(lVar14 + lVar10 * 0x28),
                         (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar18 = iVar8 == 0;
        }
        else {
          bVar18 = iVar8 + iVar7 == 1;
        }
        if ((bVar18) || (iVar17 = iVar9, iVar9 == -1)) break;
      } while( true );
    }
    if (iVar17 != -1) {
LAB_1416d18d0:
      FVar1 = (param_2->AllocatorInstance).SecondaryData;
      FVar16 = (ForElementType<TSharedRef<FManifestEntry,1>_>)
               (*(longlong *)this + ((longlong)iVar17 * 5 + 2) * 8);
      FVar11 = (ForElementType<TSharedRef<FManifestEntry,1>_>)param_2;
      if (FVar1 != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
        FVar11 = FVar1;
      }
      if ((ulonglong)FVar11 <= (ulonglong)FVar16) {
        FVar11 = (ForElementType<TSharedRef<FManifestEntry,1>_>)param_2;
        if (FVar1 != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
          FVar11 = FVar1;
        }
        if (((ulonglong)FVar16 < (ulonglong)((longlong)param_2->ArrayMax * 0x10 + (longlong)FVar11))
           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar18)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FManifestEntry,1>_>_>
                          (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      FVar1 = (param_2->AllocatorInstance).SecondaryData;
      FVar11 = (ForElementType<TSharedRef<FManifestEntry,1>_>)param_2;
      if (FVar1 != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
        FVar11 = FVar1;
      }
      *(undefined8 *)((longlong)FVar11 + (longlong)iVar7 * 0x10) = *(undefined8 *)FVar16;
      lVar14 = *(longlong *)((longlong)FVar16 + 8);
      *(longlong *)((uchar *)((longlong)FVar11 + 8) + (longlong)iVar7 * 0x10) = lVar14;
      if (lVar14 != 0) {
        LOCK();
        *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
        UNLOCK();
      }
      if (iVar9 != -1) {
        lVar14 = *(longlong *)this;
        iVar7 = (param_1->Data).ArrayNum;
        iVar17 = iVar9;
        do {
          lVar10 = (longlong)iVar17;
          iVar8 = *(int *)(lVar14 + 8 + lVar10 * 0x28);
          iVar9 = *(int *)(lVar14 + 0x20 + lVar10 * 0x28);
          if (iVar8 == iVar7) {
            if (iVar8 < 2) goto LAB_1416d1a00;
            iVar8 = wcscmp(*(wchar_t **)(lVar14 + lVar10 * 0x28),
                           (wchar_t *)(param_1->Data).AllocatorInstance.Data);
            bVar18 = iVar8 == 0;
          }
          else {
            bVar18 = iVar8 + iVar7 == 1;
          }
          if ((bVar18) || (iVar17 = iVar9, iVar9 == -1)) goto LAB_1416d1a00;
        } while( true );
      }
    }
  }
LAB_1416d1a20:
  if (param_3) {
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    FVar16 = (ForElementType<TSharedRef<FManifestEntry,1>_>)param_2;
    if (FVar1 != (ForElementType<TSharedRef<FManifestEntry,1>_>)0x0) {
      FVar16 = FVar1;
    }
    iVar9 = param_2->ArrayNum / 2;
    lVar14 = (longlong)iVar9;
    if (0 < iVar9) {
      puVar13 = (undefined8 *)((longlong)(param_2->ArrayNum + -1) * 0x10 + (longlong)FVar16);
      do {
        uVar3 = puVar13[1];
        uVar4 = *(undefined8 *)FVar16;
        uVar5 = *(undefined8 *)((longlong)FVar16 + 8);
        *(undefined8 *)FVar16 = *puVar13;
        *(undefined8 *)((longlong)FVar16 + 8) = uVar3;
        FVar16 = (ForElementType<TSharedRef<FManifestEntry,1>_>)((longlong)FVar16 + 0x10);
        *puVar13 = uVar4;
        puVar13[1] = uVar5;
        lVar14 = lVar14 + -1;
        puVar13 = puVar13 + -2;
      } while (lVar14 != 0);
    }
  }
  return;
LAB_1416d1a00:
  if (iVar17 == -1) goto LAB_1416d1a20;
  goto LAB_1416d18d0;
}

// RemoveSingle @ 14170c570

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TMultiMap<FLocKey,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>_>
::RemoveSingle(TMultiMap<FLocKey,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FArchiveEntry,1>,1>_>
               *this,FLocKey *param_1,TSharedRef<FArchiveEntry,1> *param_2)

{
  FArchiveEntry *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined1 *puVar9;
  uint uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  
  if (*(int *)&this->field_0x48 == 0) {
    return 0;
  }
  puVar9 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar9 = &this->field_0x38;
  }
  uVar10 = param_1->Hash;
  uVar13 = *(uint *)(puVar9 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar10) * 4
                    );
  uVar15 = uVar13;
  if (uVar13 == 0xffffffff) {
LAB_14170c644:
    if (uVar15 != 0xffffffff) {
      pFVar1 = param_2->Object;
      lVar12 = *(longlong *)this;
LAB_14170c651:
      if (*(FArchiveEntry **)(lVar12 + 0x18 + (longlong)(int)uVar15 * 0x30) == pFVar1) {
        uVar10 = (int)uVar15 >> 0x1f;
        if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)&this->field_0x28)) {
          if ((*(int *)&this->field_0x28 <= (int)uVar15) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          puVar9 = *(undefined1 **)&this->field_0x20;
          if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
            puVar9 = &this->field_0x10;
          }
          if ((*(uint *)(puVar9 + (longlong)((int)(uVar15 + (uVar10 & 0x1f)) >> 5) * 4) >>
               (uVar15 & 0x1f) & 1) != 0) goto LAB_14170c752;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
LAB_14170c752:
        lVar12 = (longlong)(int)uVar15 * 0x30 + *(longlong *)this;
        puVar9 = *(undefined1 **)&this->field_0x40;
        if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
          puVar9 = &this->field_0x38;
        }
        puVar14 = (uint *)(puVar9 + (longlong)*(int *)(lVar12 + 0x2c) * 4);
        while( true ) {
          uVar13 = *puVar14;
          if ((uVar13 == 0xffffffff) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          if (uVar13 == uVar15) break;
          puVar14 = (uint *)(*(longlong *)this + 0x28 + (longlong)(int)uVar13 * 0x30);
        }
        *puVar14 = *(uint *)(lVar12 + 0x28);
        TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this,uVar15,1);
        lVar12 = *(longlong *)this;
        bVar3 = (byte)uVar15 & 0x1f;
        uVar13 = 1 << bVar3 | 1U >> 0x20 - bVar3;
        if ((((int)uVar15 < 0) || (*(int *)&this->field_0x28 <= (int)uVar15)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        puVar9 = *(undefined1 **)&this->field_0x20;
        if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
          puVar9 = &this->field_0x10;
        }
        if (((*(uint *)(puVar9 + (longlong)((int)(uVar15 + (uVar10 & 0x1f)) >> 5) * 4) & uVar13) ==
             0) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("AllocationFlags[Index]",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                       ,0xc5,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (*(int *)&this->field_0x34 != 0) {
          *(uint *)(lVar12 + (longlong)*(int *)&this->field_0x30 * 0x30) = uVar15;
        }
        uVar6 = 0xffffffff;
        *(undefined4 *)(lVar12 + (longlong)(int)uVar15 * 0x30) = 0xffffffff;
        if (0 < *(int *)&this->field_0x34) {
          uVar6 = *(undefined4 *)&this->field_0x30;
        }
        *(undefined4 *)(lVar12 + 4 + (longlong)(int)uVar15 * 0x30) = uVar6;
        *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
        *(uint *)&this->field_0x30 = uVar15;
        if ((((int)uVar15 < 0) || (*(int *)&this->field_0x28 <= (int)uVar15)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        puVar9 = *(undefined1 **)&this->field_0x20;
        if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
          puVar9 = &this->field_0x10;
        }
        *(uint *)(puVar9 + (longlong)((int)(uVar15 + (uVar10 & 0x1f)) >> 5) * 4) =
             *(uint *)(puVar9 + (longlong)((int)(uVar15 + (uVar10 & 0x1f)) >> 5) * 4) & ~uVar13;
        return 1;
      }
      uVar15 = uVar13;
      if (uVar13 != 0xffffffff) {
        do {
          lVar7 = (longlong)(int)uVar15;
          uVar13 = *(uint *)(lVar12 + 0x28 + lVar7 * 0x30);
          if (*(uint *)(lVar12 + 0x10 + lVar7 * 0x30) == uVar10) {
            if ((param_1->Str).Data.ArrayNum == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
            }
            if (*(int *)(lVar12 + 8 + lVar7 * 0x30) == 0) {
              pwVar8 = L"";
            }
            else {
              pwVar8 = *(wchar_t **)(lVar12 + lVar7 * 0x30);
            }
            iVar5 = wcscmp(pwVar8,pwVar11);
            if (iVar5 == 0) goto LAB_14170c6c1;
          }
          uVar15 = uVar13;
          if (uVar13 == 0xffffffff) {
            return 0;
          }
        } while( true );
      }
    }
  }
  else {
    lVar12 = *(longlong *)this;
    do {
      lVar7 = (longlong)(int)uVar15;
      uVar13 = *(uint *)(lVar12 + 0x28 + lVar7 * 0x30);
      if (*(uint *)(lVar12 + 0x10 + lVar7 * 0x30) == uVar10) {
        if ((param_1->Str).Data.ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
        }
        if (*(int *)(lVar12 + 8 + lVar7 * 0x30) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(lVar12 + lVar7 * 0x30);
        }
        iVar5 = wcscmp(pwVar8,pwVar11);
        if (iVar5 == 0) goto LAB_14170c644;
      }
      uVar15 = uVar13;
    } while (uVar13 != 0xffffffff);
  }
  return 0;
LAB_14170c6c1:
  if (uVar15 == 0xffffffff) {
    return 0;
  }
  goto LAB_14170c651;
}

// RemoveSingle @ 14170c910

/* WARNING: Type propagation algorithm not settling */

int __thiscall
TMultiMap<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
::RemoveSingle(TMultiMap<FLocKey,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FManifestEntry,1>,1>_>
               *this,FLocKey *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  FManifestEntry *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined1 *puVar9;
  uint uVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  
  if (*(int *)&this->field_0x48 == 0) {
    return 0;
  }
  puVar9 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar9 = &this->field_0x38;
  }
  uVar10 = param_1->Hash;
  uVar13 = *(uint *)(puVar9 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar10) * 4
                    );
  uVar15 = uVar13;
  if (uVar13 == 0xffffffff) {
LAB_14170c9e4:
    if (uVar15 != 0xffffffff) {
      pFVar1 = param_2->Object;
      lVar12 = *(longlong *)this;
LAB_14170c9f1:
      if (*(FManifestEntry **)(lVar12 + 0x18 + (longlong)(int)uVar15 * 0x30) == pFVar1) {
        uVar10 = (int)uVar15 >> 0x1f;
        if ((-1 < (int)uVar15) && ((int)uVar15 < *(int *)&this->field_0x28)) {
          if ((*(int *)&this->field_0x28 <= (int)uVar15) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5c6,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          puVar9 = *(undefined1 **)&this->field_0x20;
          if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
            puVar9 = &this->field_0x10;
          }
          if ((*(uint *)(puVar9 + (longlong)((int)(uVar15 + (uVar10 & 0x1f)) >> 5) * 4) >>
               (uVar15 & 0x1f) & 1) != 0) goto LAB_14170caf2;
        }
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
LAB_14170caf2:
        lVar12 = (longlong)(int)uVar15 * 0x30 + *(longlong *)this;
        puVar9 = *(undefined1 **)&this->field_0x40;
        if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
          puVar9 = &this->field_0x38;
        }
        puVar14 = (uint *)(puVar9 + (longlong)*(int *)(lVar12 + 0x2c) * 4);
        while( true ) {
          uVar13 = *puVar14;
          if ((uVar13 == 0xffffffff) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar4)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          if (uVar13 == uVar15) break;
          puVar14 = (uint *)(*(longlong *)this + 0x28 + (longlong)(int)uVar13 * 0x30);
        }
        *puVar14 = *(uint *)(lVar12 + 0x28);
        TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FLocKey,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)this,uVar15,1);
        lVar12 = *(longlong *)this;
        bVar3 = (byte)uVar15 & 0x1f;
        uVar13 = 1 << bVar3 | 1U >> 0x20 - bVar3;
        if ((((int)uVar15 < 0) || (*(int *)&this->field_0x28 <= (int)uVar15)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        puVar9 = *(undefined1 **)&this->field_0x20;
        if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
          puVar9 = &this->field_0x10;
        }
        if (((*(uint *)(puVar9 + (longlong)((int)(uVar15 + (uVar10 & 0x1f)) >> 5) * 4) & uVar13) ==
             0) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("AllocationFlags[Index]",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                       ,0xc5,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        if (*(int *)&this->field_0x34 != 0) {
          *(uint *)(lVar12 + (longlong)*(int *)&this->field_0x30 * 0x30) = uVar15;
        }
        uVar6 = 0xffffffff;
        *(undefined4 *)(lVar12 + (longlong)(int)uVar15 * 0x30) = 0xffffffff;
        if (0 < *(int *)&this->field_0x34) {
          uVar6 = *(undefined4 *)&this->field_0x30;
        }
        *(undefined4 *)(lVar12 + 4 + (longlong)(int)uVar15 * 0x30) = uVar6;
        *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
        *(uint *)&this->field_0x30 = uVar15;
        if ((((int)uVar15 < 0) || (*(int *)&this->field_0x28 <= (int)uVar15)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
        puVar9 = *(undefined1 **)&this->field_0x20;
        if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
          puVar9 = &this->field_0x10;
        }
        *(uint *)(puVar9 + (longlong)((int)(uVar15 + (uVar10 & 0x1f)) >> 5) * 4) =
             *(uint *)(puVar9 + (longlong)((int)(uVar15 + (uVar10 & 0x1f)) >> 5) * 4) & ~uVar13;
        return 1;
      }
      uVar15 = uVar13;
      if (uVar13 != 0xffffffff) {
        do {
          lVar7 = (longlong)(int)uVar15;
          uVar13 = *(uint *)(lVar12 + 0x28 + lVar7 * 0x30);
          if (*(uint *)(lVar12 + 0x10 + lVar7 * 0x30) == uVar10) {
            if ((param_1->Str).Data.ArrayNum == 0) {
              pwVar11 = L"";
            }
            else {
              pwVar11 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
            }
            if (*(int *)(lVar12 + 8 + lVar7 * 0x30) == 0) {
              pwVar8 = L"";
            }
            else {
              pwVar8 = *(wchar_t **)(lVar12 + lVar7 * 0x30);
            }
            iVar5 = wcscmp(pwVar8,pwVar11);
            if (iVar5 == 0) goto LAB_14170ca61;
          }
          uVar15 = uVar13;
          if (uVar13 == 0xffffffff) {
            return 0;
          }
        } while( true );
      }
    }
  }
  else {
    lVar12 = *(longlong *)this;
    do {
      lVar7 = (longlong)(int)uVar15;
      uVar13 = *(uint *)(lVar12 + 0x28 + lVar7 * 0x30);
      if (*(uint *)(lVar12 + 0x10 + lVar7 * 0x30) == uVar10) {
        if ((param_1->Str).Data.ArrayNum == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
        }
        if (*(int *)(lVar12 + 8 + lVar7 * 0x30) == 0) {
          pwVar8 = L"";
        }
        else {
          pwVar8 = *(wchar_t **)(lVar12 + lVar7 * 0x30);
        }
        iVar5 = wcscmp(pwVar8,pwVar11);
        if (iVar5 == 0) goto LAB_14170c9e4;
      }
      uVar15 = uVar13;
    } while (uVar13 != 0xffffffff);
  }
  return 0;
LAB_14170ca61:
  if (uVar15 == 0xffffffff) {
    return 0;
  }
  goto LAB_14170c9f1;
}

// RemoveSingle @ 14170ccb0

int __thiscall
TMultiMap<FString,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>_>
::RemoveSingle(TMultiMap<FString,TSharedRef<FArchiveEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FArchiveEntry,1>_>_>
               *this,FString *param_1,TSharedRef<FArchiveEntry,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  FArchiveEntry *pFVar4;
  code *pcVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  
  iVar8 = *(int *)&this->field_0x48;
  if (iVar8 == 0) {
    return 0;
  }
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  puVar12 = *(undefined1 **)&this->field_0x40;
  uVar7 = FCrc::StrCrc32<wchar_t>(pwVar11,0);
  if (puVar12 == (undefined1 *)0x0) {
    puVar12 = &this->field_0x38;
  }
  uVar7 = *(uint *)(puVar12 + ((longlong)(int)uVar7 & (longlong)iVar8 - 1U) * 4);
  uVar14 = uVar7;
  if (uVar7 != 0xffffffff) {
    lVar3 = *(longlong *)this;
    do {
      lVar10 = (longlong)(int)uVar14;
      iVar8 = *(int *)(lVar3 + 8 + lVar10 * 0x28);
      uVar7 = *(uint *)(lVar3 + 0x20 + lVar10 * 0x28);
      if (iVar8 == iVar2) {
        if (iVar8 < 2) break;
        iVar8 = wcscmp(*(wchar_t **)(lVar3 + lVar10 * 0x28),
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar15 = iVar8 == 0;
      }
      else {
        bVar15 = iVar8 + iVar2 == 1;
      }
      if ((bVar15) || (uVar14 = uVar7, uVar7 == 0xffffffff)) break;
    } while( true );
  }
  if (uVar14 == 0xffffffff) {
    return 0;
  }
  pFVar4 = param_2->Object;
  lVar3 = *(longlong *)this;
LAB_14170cd80:
  lVar10 = (longlong)(int)uVar14 * 0x28;
  if (*(FArchiveEntry **)(lVar10 + 0x10 + lVar3) != pFVar4) {
    uVar14 = uVar7;
    if (uVar7 == 0xffffffff) {
      return 0;
    }
    do {
      lVar10 = (longlong)(int)uVar14;
      iVar8 = *(int *)(lVar3 + 8 + lVar10 * 0x28);
      uVar7 = *(uint *)(lVar3 + 0x20 + lVar10 * 0x28);
      if (iVar8 == iVar2) {
        if (iVar8 < 2) goto LAB_14170cdde;
        iVar8 = wcscmp(*(wchar_t **)(lVar3 + lVar10 * 0x28),
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar15 = iVar8 == 0;
      }
      else {
        bVar15 = iVar8 + iVar2 == 1;
      }
      if ((bVar15) || (uVar14 = uVar7, uVar7 == 0xffffffff)) goto LAB_14170cdde;
    } while( true );
  }
  if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)&this->field_0x28)) {
    if ((*(int *)&this->field_0x28 <= (int)uVar14) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    puVar12 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar12 = &this->field_0x10;
    }
    if ((*(uint *)(puVar12 + (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar14 & 0x1f) & 1) != 0) goto LAB_14170ce8e;
  }
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar15) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
LAB_14170ce8e:
  lVar3 = *(longlong *)this;
  puVar12 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar12 = &this->field_0x38;
  }
  puVar13 = (uint *)(puVar12 + (longlong)*(int *)(lVar3 + 0x24 + lVar10) * 4);
  while( true ) {
    uVar7 = *puVar13;
    if ((uVar7 == 0xffffffff) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar15)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    if (uVar7 == uVar14) break;
    puVar13 = (uint *)(*(longlong *)this + (longlong)(int)uVar7 * 0x28 + 0x20);
  }
  *puVar13 = *(uint *)(lVar3 + 0x20 + lVar10);
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FArchiveEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,uVar14,1);
  lVar3 = *(longlong *)this;
  bVar6 = (byte)uVar14 & 0x1f;
  uVar7 = 1 << bVar6 | 1U >> 0x20 - bVar6;
  if ((((int)uVar14 < 0) || (*(int *)&this->field_0x28 <= (int)uVar14)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  lVar1 = (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  puVar12 = *(undefined1 **)&this->field_0x20;
  if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &this->field_0x10;
  }
  if (((*(uint *)(puVar12 + lVar1) & uVar7) == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocationFlags[Index]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                          ,0xc5,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  if (*(int *)&this->field_0x34 != 0) {
    *(uint *)(lVar3 + (longlong)*(int *)&this->field_0x30 * 0x28) = uVar14;
  }
  uVar9 = 0xffffffff;
  *(undefined4 *)(lVar10 + lVar3) = 0xffffffff;
  if (0 < *(int *)&this->field_0x34) {
    uVar9 = *(undefined4 *)&this->field_0x30;
  }
  *(undefined4 *)(lVar10 + 4 + lVar3) = uVar9;
  *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
  *(uint *)&this->field_0x30 = uVar14;
  if ((((int)uVar14 < 0) || (*(int *)&this->field_0x28 <= (int)uVar14)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  puVar12 = *(undefined1 **)&this->field_0x20;
  if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &this->field_0x10;
  }
  *(uint *)(puVar12 + lVar1) = *(uint *)(puVar12 + lVar1) & ~uVar7;
  return 1;
LAB_14170cdde:
  if (uVar14 == 0xffffffff) {
    return 0;
  }
  goto LAB_14170cd80;
}

// RemoveSingle @ 14170d040

int __thiscall
TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
::RemoveSingle(TMultiMap<FString,TSharedRef<FManifestEntry,1>,FDefaultSetAllocator,FLocKeyMultiMapFuncs<TSharedRef<FManifestEntry,1>_>_>
               *this,FString *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  FManifestEntry *pFVar4;
  code *pcVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  
  iVar8 = *(int *)&this->field_0x48;
  if (iVar8 == 0) {
    return 0;
  }
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  puVar12 = *(undefined1 **)&this->field_0x40;
  uVar7 = FCrc::StrCrc32<wchar_t>(pwVar11,0);
  if (puVar12 == (undefined1 *)0x0) {
    puVar12 = &this->field_0x38;
  }
  uVar7 = *(uint *)(puVar12 + ((longlong)(int)uVar7 & (longlong)iVar8 - 1U) * 4);
  uVar14 = uVar7;
  if (uVar7 != 0xffffffff) {
    lVar3 = *(longlong *)this;
    do {
      lVar10 = (longlong)(int)uVar14;
      iVar8 = *(int *)(lVar3 + 8 + lVar10 * 0x28);
      uVar7 = *(uint *)(lVar3 + 0x20 + lVar10 * 0x28);
      if (iVar8 == iVar2) {
        if (iVar8 < 2) break;
        iVar8 = wcscmp(*(wchar_t **)(lVar3 + lVar10 * 0x28),
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar15 = iVar8 == 0;
      }
      else {
        bVar15 = iVar8 + iVar2 == 1;
      }
      if ((bVar15) || (uVar14 = uVar7, uVar7 == 0xffffffff)) break;
    } while( true );
  }
  if (uVar14 == 0xffffffff) {
    return 0;
  }
  pFVar4 = param_2->Object;
  lVar3 = *(longlong *)this;
LAB_14170d110:
  lVar10 = (longlong)(int)uVar14 * 0x28;
  if (*(FManifestEntry **)(lVar10 + 0x10 + lVar3) != pFVar4) {
    uVar14 = uVar7;
    if (uVar7 == 0xffffffff) {
      return 0;
    }
    do {
      lVar10 = (longlong)(int)uVar14;
      iVar8 = *(int *)(lVar3 + 8 + lVar10 * 0x28);
      uVar7 = *(uint *)(lVar3 + 0x20 + lVar10 * 0x28);
      if (iVar8 == iVar2) {
        if (iVar8 < 2) goto LAB_14170d16e;
        iVar8 = wcscmp(*(wchar_t **)(lVar3 + lVar10 * 0x28),
                       (wchar_t *)(param_1->Data).AllocatorInstance.Data);
        bVar15 = iVar8 == 0;
      }
      else {
        bVar15 = iVar8 + iVar2 == 1;
      }
      if ((bVar15) || (uVar14 = uVar7, uVar7 == 0xffffffff)) goto LAB_14170d16e;
    } while( true );
  }
  if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)&this->field_0x28)) {
    if ((*(int *)&this->field_0x28 <= (int)uVar14) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L""), bVar15)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    puVar12 = *(undefined1 **)&this->field_0x20;
    if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
      puVar12 = &this->field_0x10;
    }
    if ((*(uint *)(puVar12 + (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar14 & 0x1f) & 1) != 0) goto LAB_14170d21e;
  }
  bVar15 = ::FDebug::CheckVerifyFailedImpl2
                     ("Elements.IsValidIndex(ElementIndex)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                      ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar15) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
LAB_14170d21e:
  lVar3 = *(longlong *)this;
  puVar12 = *(undefined1 **)&this->field_0x40;
  if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
    puVar12 = &this->field_0x38;
  }
  puVar13 = (uint *)(puVar12 + (longlong)*(int *)(lVar3 + 0x24 + lVar10) * 4);
  while( true ) {
    uVar7 = *puVar13;
    if ((uVar7 == 0xffffffff) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("NextElementIndex != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                            ,0x2b5,L"Corrupt hash"), bVar15)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    if (uVar7 == uVar14) break;
    puVar13 = (uint *)(*(longlong *)this + (longlong)(int)uVar7 * 0x28 + 0x20);
  }
  *puVar13 = *(uint *)(lVar3 + 0x20 + lVar10);
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedRef<FManifestEntry,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,uVar14,1);
  lVar3 = *(longlong *)this;
  bVar6 = (byte)uVar14 & 0x1f;
  uVar7 = 1 << bVar6 | 1U >> 0x20 - bVar6;
  if ((((int)uVar14 < 0) || (*(int *)&this->field_0x28 <= (int)uVar14)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  lVar1 = (longlong)((int)(uVar14 + ((int)uVar14 >> 0x1f & 0x1fU)) >> 5) * 4;
  puVar12 = *(undefined1 **)&this->field_0x20;
  if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &this->field_0x10;
  }
  if (((*(uint *)(puVar12 + lVar1) & uVar7) == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("AllocationFlags[Index]",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                          ,0xc5,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  if (*(int *)&this->field_0x34 != 0) {
    *(uint *)(lVar3 + (longlong)*(int *)&this->field_0x30 * 0x28) = uVar14;
  }
  uVar9 = 0xffffffff;
  *(undefined4 *)(lVar10 + lVar3) = 0xffffffff;
  if (0 < *(int *)&this->field_0x34) {
    uVar9 = *(undefined4 *)&this->field_0x30;
  }
  *(undefined4 *)(lVar10 + 4 + lVar3) = uVar9;
  *(int *)&this->field_0x34 = *(int *)&this->field_0x34 + 1;
  *(uint *)&this->field_0x30 = uVar14;
  if ((((int)uVar14 < 0) || (*(int *)&this->field_0x28 <= (int)uVar14)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index>=0 && Index<NumBits",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x5be,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    iVar8 = (*pcVar5)();
    return iVar8;
  }
  puVar12 = *(undefined1 **)&this->field_0x20;
  if (*(undefined1 **)&this->field_0x20 == (undefined1 *)0x0) {
    puVar12 = &this->field_0x10;
  }
  *(uint *)(puVar12 + lVar1) = *(uint *)(puVar12 + lVar1) & ~uVar7;
  return 1;
LAB_14170d16e:
  if (uVar14 == 0xffffffff) {
    return 0;
  }
  goto LAB_14170d110;
}

// Append<FDefaultSetAllocator> @ 141845da0

void __thiscall
TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::Append<FDefaultSetAllocator>
          (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
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
  
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
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
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141845e4d;
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
LAB_141845e4d:
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
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_141845f50;
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
LAB_141845f50:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar2 = (FName *)(*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
    ::Emplace<FName_const_&,FConfigValue_const_&>
              ((TMapBase<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                *)this,pFVar2,(FConfigValue *)(pFVar2 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 14184fcd0

void __thiscall
TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,FName param_1,TArray<FConfigValue,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  TBaseKeyIterator<1> local_48;
  
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_48,
             (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar8 = local_48.NextIndex;
  do {
    if (local_48.Index == -1) {
LAB_14184fe77:
      if (param_3) {
        pFVar9 = (param_2->AllocatorInstance).Data;
        iVar8 = param_2->ArrayNum / 2;
        lVar11 = (longlong)iVar8;
        if (0 < iVar8) {
          pFVar10 = pFVar9 + (longlong)(param_2->ArrayNum + -1) * 0x18;
          do {
            uVar1 = *(undefined8 *)(pFVar9 + 0x10);
            uVar3 = *(undefined8 *)(pFVar10 + 8);
            uVar4 = *(undefined8 *)pFVar9;
            uVar5 = *(undefined8 *)(pFVar9 + 8);
            *(undefined8 *)pFVar9 = *(undefined8 *)pFVar10;
            *(undefined8 *)(pFVar9 + 8) = uVar3;
            *(undefined8 *)(pFVar9 + 0x10) = *(undefined8 *)(pFVar10 + 0x10);
            *(undefined8 *)pFVar10 = uVar4;
            *(undefined8 *)(pFVar10 + 8) = uVar5;
            *(undefined8 *)(pFVar10 + 0x10) = uVar1;
            lVar11 = lVar11 + -1;
            pFVar9 = pFVar9 + 0x18;
            pFVar10 = pFVar10 + -0x18;
          } while (lVar11 != 0);
        }
      }
      return;
    }
    pFVar10 = (param_2->AllocatorInstance).Data;
    pFVar9 = (FScriptContainerElement *)
             (*(longlong *)&(local_48.Set)->Elements + ((longlong)local_48.Index * 5 + 1) * 8);
    local_48.NextIndex = iVar8;
    if (((pFVar10 <= pFVar9) && (pFVar9 < pFVar10 + (longlong)param_2->ArrayMax * 0x18)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x18;
    ::FString::FString((FString *)pFVar10,(FString *)pFVar9);
    *(undefined4 *)
     &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar10[0x10].field_0x0)->AllocatorInstance)
      .Data = *(undefined4 *)
               &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar9[0x10].field_0x0)->
                AllocatorInstance).Data;
    pFVar10[0x14].field_0x0 = pFVar9[0x14].field_0x0;
    pFVar10[0x15].field_0x0 = pFVar9[0x15].field_0x0;
    if (iVar8 == -1) goto LAB_14184fe77;
    local_48.Index = iVar8;
    do {
      iVar8 = *(int *)(*(longlong *)&(local_48.Set)->Elements + 0x20 +
                      (longlong)local_48.Index * 0x28);
      if (*(FName *)(*(longlong *)&(local_48.Set)->Elements + (longlong)local_48.Index * 0x28) ==
          local_48.Key) break;
      local_48.Index = iVar8;
    } while (iVar8 != -1);
  } while( true );
}

// MultiFindPointer<TSizedDefaultAllocator<32>_> @ 141850230

void __thiscall
TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::MultiFindPointer<TSizedDefaultAllocator<32>_>
          (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,FName param_1,TArray<FConfigValue_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

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
  
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_30,
             (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_30.NextIndex;
  do {
    if (local_30.Index == -1) {
LAB_1418503a7:
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
    local_38 = *(longlong *)&(local_30.Set)->Elements + ((longlong)local_30.Index * 5 + 1) * 8;
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
    if (iVar6 == -1) goto LAB_1418503a7;
    local_30.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_30.Set)->Elements + 0x20 +
                      (longlong)local_30.Index * 0x28);
      if (*(FName *)(*(longlong *)&(local_30.Set)->Elements + (longlong)local_30.Index * 0x28) ==
          local_30.Key) break;
      local_30.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

// MultiFindPointer<TSizedDefaultAllocator<32>_> @ 141850410

void __thiscall
TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::MultiFindPointer<TSizedDefaultAllocator<32>_>
          (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,FName param_1,TArray<FConfigValue_const_*,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

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
  TBaseKeyIterator<1> local_30;
  
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_30,
             (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_30.NextIndex;
  do {
    if (local_30.Index == -1) {
LAB_141850587:
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
    local_38 = *(longlong *)&(local_30.Set)->Elements + ((longlong)local_30.Index * 5 + 1) * 8;
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
    if (iVar6 == -1) goto LAB_141850587;
    local_30.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_30.Set)->Elements + 0x20 +
                      (longlong)local_30.Index * 0x28);
      if (*(FName *)(*(longlong *)&(local_30.Set)->Elements + (longlong)local_30.Index * 0x28) ==
          local_30.Key) break;
      local_30.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

// MultiFindPointer<TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_> @ 1418505f0

void __thiscall
TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::MultiFindPointer<TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
          (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,FName param_1,
          TArray<FConfigValue_const_*,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
          *param_2,bool param_3)

{
  ForElementType<FConfigValue_const_*> FVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FConfigValue_const_*> FVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong local_38;
  TBaseKeyIterator<1> local_30;
  
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_30,
             (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_30.NextIndex;
  do {
    if (local_30.Index == -1) {
LAB_141850797:
      if (param_3) {
        FVar1 = (param_2->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FConfigValue_const_*>)param_2;
        if (FVar1 != (ForElementType<FConfigValue_const_*>)0x0) {
          FVar7 = FVar1;
        }
        iVar6 = param_2->ArrayNum / 2;
        if (0 < iVar6) {
          lVar8 = 0;
          puVar9 = (undefined8 *)((longlong)FVar7 + (longlong)(param_2->ArrayNum + -1) * 8);
          do {
            uVar2 = *(undefined8 *)((longlong)FVar7 + lVar8 * 8);
            *(undefined8 *)((longlong)FVar7 + lVar8 * 8) = *puVar9;
            lVar8 = lVar8 + 1;
            *puVar9 = uVar2;
            puVar9 = puVar9 + -1;
          } while (lVar8 < iVar6);
        }
      }
      return;
    }
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    local_38 = *(longlong *)&(local_30.Set)->Elements + ((longlong)local_30.Index * 5 + 1) * 8;
    FVar7 = (ForElementType<FConfigValue_const_*>)param_2;
    if (FVar1 != (ForElementType<FConfigValue_const_*>)0x0) {
      FVar7 = FVar1;
    }
    local_30.NextIndex = iVar6;
    if ((ulonglong)FVar7 <= &local_38) {
      FVar7 = (ForElementType<FConfigValue_const_*>)param_2;
      if (FVar1 != (ForElementType<FConfigValue_const_*>)0x0) {
        FVar7 = FVar1;
      }
      if ((&local_38 < (longlong *)((longlong)FVar7 + (longlong)param_2->ArrayMax * 8)) &&
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
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<FConfigValue_const_*>_>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    FVar1 = (param_2->AllocatorInstance).SecondaryData;
    FVar7 = (ForElementType<FConfigValue_const_*>)param_2;
    if (FVar1 != (ForElementType<FConfigValue_const_*>)0x0) {
      FVar7 = FVar1;
    }
    *(longlong *)((longlong)FVar7 + (longlong)iVar5 * 8) = local_38;
    if (iVar6 == -1) goto LAB_141850797;
    local_30.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_30.Set)->Elements + 0x20 +
                      (longlong)local_30.Index * 0x28);
      if (*(FName *)(*(longlong *)&(local_30.Set)->Elements + (longlong)local_30.Index * 0x28) ==
          local_30.Key) break;
      local_30.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

// TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_> @ 141853400

TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
* __thiscall
TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::
TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
          (TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
                 *param_1)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  if (this != param_1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&this->field_0x38,(int *)&this->field_0x48,
               (ForElementType<FSetElementId> *)&param_1->field_0x38,*(int *)&param_1->field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this,(TSparseArray<TSparseSetElement<TTuple<FName,FConfigValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)param_1);
  }
  return this;
}

// FindPair @ 14186eb60

FConfigValue * __thiscall
TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
::FindPair(TMultiMap<FName,FConfigValue,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>_>
           *this,FName param_1,FConfigValue *param_2)

{
  int iVar1;
  longlong lVar2;
  TBaseKeyIterator<0> local_28;
  
  TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_28,
             (TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
              *)this,param_1);
  if (local_28.Index != -1) {
    lVar2 = *(longlong *)&(local_28.Set)->Elements;
    do {
      if (*(uint *)(lVar2 + 0x18 + (longlong)local_28.Index * 0x28) == param_2->SavedValueHash) {
        return (FConfigValue *)(lVar2 + (longlong)local_28.Index * 0x28 + 8);
      }
      if (local_28.NextIndex == -1) {
        return (FConfigValue *)0x0;
      }
      do {
        iVar1 = *(int *)(lVar2 + 0x20 + (longlong)local_28.NextIndex * 0x28);
        local_28.Index = local_28.NextIndex;
        if (*(FName *)(lVar2 + (longlong)local_28.NextIndex * 0x28) == local_28.Key) break;
        local_28.Index = iVar1;
        local_28.NextIndex = iVar1;
      } while (iVar1 != -1);
      local_28.NextIndex = iVar1;
    } while (local_28.Index != -1);
  }
  return (FConfigValue *)0x0;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 1419c92e0

void __thiscall
TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_>::
MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FName,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FName,1>_>
           *this,FName param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  TBaseKeyIterator<1> local_38;
  
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>::
  TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_38,
             (TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,1>,FDefaultSetAllocator>
              *)this,param_1);
  iVar6 = local_38.NextIndex;
  do {
    if (local_38.Index == -1) {
LAB_1419c945c:
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
    pFVar1 = (FScriptContainerElement *)
             (*(longlong *)&(local_38.Set)->Elements + ((longlong)local_38.Index * 3 + 1) * 8);
    pFVar7 = (param_2->AllocatorInstance).Data;
    local_38.NextIndex = iVar6;
    if (((pFVar7 <= pFVar1) && (pFVar1 < pFVar7 + (longlong)param_2->ArrayMax * 8)) &&
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
                        (0x408,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar5 + 1;
    *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1
    ;
    if (iVar6 == -1) goto LAB_1419c945c;
    local_38.Index = iVar6;
    do {
      iVar6 = *(int *)(*(longlong *)&(local_38.Set)->Elements + 0x10 +
                      (longlong)local_38.Index * 0x18);
      if (*(FName *)(*(longlong *)&(local_38.Set)->Elements + (longlong)local_38.Index * 0x18) ==
          local_38.Key) break;
      local_38.Index = iVar6;
    } while (iVar6 != -1);
  } while( true );
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 141a52970

void __thiscall
TMultiMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>_>::
MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FGuid,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>_>
           *this,FGuid *param_1,TArray<FGuid,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  uint *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  TBaseKeyIterator<1> local_58;
  
  TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>,FDefaultSetAllocator>::
  TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_58,
             (TSet<TTuple<FGuid,FGuid>,TDefaultMapHashableKeyFuncs<FGuid,FGuid,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FGuid_const_>)param_1);
  if (local_58.Index != 0xffffffff) {
    piVar1 = &param_2->ArrayMax;
    do {
      uVar13 = local_58.NextIndex;
      pTVar7 = local_58.Set;
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)&(local_58.Set)->Elements + ((longlong)local_58.Index * 5 + 2) * 8);
      pFVar10 = (param_2->AllocatorInstance).Data;
      if (((pFVar10 <= pFVar11) && (pFVar11 < pFVar10 + (longlong)*piVar1 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = param_2->ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar9 + 1;
      uVar4 = *(undefined8 *)(pFVar11 + 8);
      pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
      *(undefined8 *)pFVar10 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar10 + 8) = uVar4;
      if (uVar13 == 0xffffffff) break;
      do {
        puVar2 = (uint *)(*(longlong *)&pTVar7->Elements + (longlong)(int)uVar13 * 0x28);
        local_58.NextIndex = puVar2[8];
        local_58.Index = uVar13;
        if ((((local_58.Key)->B == puVar2[1] &&
             (local_58.Key)->C ==
             *(uint *)(*(longlong *)&pTVar7->Elements + 8 + (longlong)(int)uVar13 * 0x28)) &&
            (local_58.Key)->D == puVar2[3]) && (local_58.Key)->A == *puVar2) break;
        local_58.Index = local_58.NextIndex;
        uVar13 = local_58.NextIndex;
      } while (local_58.NextIndex != 0xffffffff);
    } while (local_58.Index != 0xffffffff);
  }
  if (param_3) {
    pFVar11 = (param_2->AllocatorInstance).Data;
    iVar9 = param_2->ArrayNum / 2;
    lVar12 = (longlong)iVar9;
    if (0 < iVar9) {
      pFVar10 = pFVar11 + (longlong)(param_2->ArrayNum + -1) * 0x10;
      do {
        uVar4 = *(undefined8 *)(pFVar10 + 8);
        uVar5 = *(undefined8 *)pFVar11;
        uVar6 = *(undefined8 *)(pFVar11 + 8);
        *(undefined8 *)pFVar11 = *(undefined8 *)pFVar10;
        *(undefined8 *)(pFVar11 + 8) = uVar4;
        pFVar11 = pFVar11 + 0x10;
        *(undefined8 *)pFVar10 = uVar5;
        *(undefined8 *)(pFVar10 + 8) = uVar6;
        lVar12 = lVar12 + -1;
        pFVar10 = pFVar10 + -0x10;
      } while (lVar12 != 0);
    }
  }
  return;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 141afafa0

void __thiscall
TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_>::
MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,1>_> *this,
          int param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 *puVar10;
  
  if (*(int *)&this->field_0x48 != 0) {
    puVar10 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar10 = &this->field_0x38;
    }
    iVar7 = *(int *)(puVar10 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)param_1) * 4);
    iVar6 = iVar7;
    if (iVar7 != -1) {
      do {
        iVar7 = *(int *)(*(longlong *)this + 8 + (longlong)iVar6 * 0x10);
        if (*(int *)(*(longlong *)this + (longlong)iVar6 * 0x10) == param_1) break;
        iVar6 = iVar7;
      } while (iVar7 != -1);
    }
    if (iVar6 != -1) {
      piVar1 = &param_2->ArrayMax;
      while( true ) {
        pFVar9 = (FScriptContainerElement *)(*(longlong *)this + 4 + (longlong)iVar6 * 0x10);
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= pFVar9) && (pFVar9 < pFVar3 + (longlong)*piVar1 * 4)) &&
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
        iVar6 = param_2->ArrayNum;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             *(undefined4 *)pFVar9;
        if (iVar7 == -1) break;
        iVar6 = iVar7;
        while (iVar7 = *(int *)(*(longlong *)this + 8 + (longlong)iVar6 * 0x10),
              *(int *)(*(longlong *)this + (longlong)iVar6 * 0x10) != param_1) {
          iVar6 = iVar7;
          if (iVar7 == -1) goto LAB_141afb13f;
        }
      }
    }
  }
LAB_141afb13f:
  if (param_3) {
    pFVar3 = (param_2->AllocatorInstance).Data;
    iVar7 = param_2->ArrayNum / 2;
    if (0 < iVar7) {
      lVar8 = 0;
      pFVar9 = pFVar3 + (longlong)(param_2->ArrayNum + -1) * 4;
      do {
        uVar2 = *(undefined4 *)(pFVar3 + lVar8 * 4);
        *(undefined4 *)(pFVar3 + lVar8 * 4) = *(undefined4 *)pFVar9;
        lVar8 = lVar8 + 1;
        *(undefined4 *)pFVar9 = uVar2;
        pFVar9 = pFVar9 + -4;
      } while (lVar8 < iVar7);
    }
  }
  return;
}

