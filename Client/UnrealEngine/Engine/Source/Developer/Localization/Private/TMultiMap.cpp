// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 4

// EmplaceUnique<FString_const_&,FLocItem_const_&> @ 146b3b950

FLocItem * __thiscall
TMultiMap<FString,FLocItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>_>::
EmplaceUnique<FString_const_&,FLocItem_const_&>
          (TMultiMap<FString,FLocItem,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>_>
           *this,FString *param_1,FLocItem *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  FLocItem *pFVar6;
  undefined8 *puVar7;
  int local_res10;
  TBaseKeyIterator<0> local_48;
  
  TSet<TTuple<FString,FLocItem>,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_48,
             (TSet<TTuple<FString,FLocItem>,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<FString_const_>)param_1);
joined_r0x000146b3b986:
  iVar5 = local_48.NextIndex;
  if (local_48.Index != -1) {
    bVar4 = FLocItem::operator==
                      ((FLocItem *)
                       (*(longlong *)&(local_48.Set)->Elements + 0x10 +
                       (longlong)local_48.Index * 0x38),param_2);
    if (bVar4) {
      pFVar6 = (FLocItem *)
               (*(longlong *)&(local_48.Set)->Elements + 0x10 + (longlong)local_48.Index * 0x38);
      if (pFVar6 != (FLocItem *)0x0) {
        return pFVar6;
      }
    }
    else if (iVar5 != -1) {
      do {
        iVar1 = ((local_48.Key)->Data).ArrayNum;
        puVar7 = (undefined8 *)((longlong)iVar5 * 0x38 + *(longlong *)&(local_48.Set)->Elements);
        iVar2 = *(int *)(puVar7 + 1);
        iVar3 = *(int *)(puVar7 + 6);
        local_48.Index = iVar5;
        local_48.NextIndex = iVar3;
        if (iVar2 == iVar1) {
          if (iVar2 < 2) goto joined_r0x000146b3b986;
          iVar5 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)*puVar7,
                             (wchar_t *)((local_48.Key)->Data).AllocatorInstance.Data);
          bVar4 = iVar5 == 0;
        }
        else {
          bVar4 = iVar2 + iVar1 == 1;
        }
        if ((bVar4) || (iVar5 = iVar3, local_48.Index = iVar3, iVar3 == -1))
        goto joined_r0x000146b3b986;
      } while( true );
    }
  }
  local_48.Set = (TSet<TTuple<FString,FLocItem>,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>,FDefaultSetAllocator>
                  *)param_1;
  local_48.Key = &param_2->Text;
  TSet<TTuple<FString,FLocItem>,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,FLocItem_const_&>_>
            ((TSet<TTuple<FString,FLocItem>,TDefaultMapHashableKeyFuncs<FString,FLocItem,1>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FString_const_&,FLocItem_const_&> *)&local_res10,
             (bool *)&local_48);
  return (FLocItem *)(*(longlong *)this + (longlong)local_res10 * 0x38 + 0x10);
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 146b416f0

void __thiscall
TMultiMap<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>_>
           *this,FLocKeyPair *param_1,
          TArray<_anonymous_namespace_::FLocKeyPair,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  longlong lVar16;
  int *piVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  TBaseKeyIterator<1> local_48;
  
  TSet<TTuple<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<1>::TBaseKeyIterator<1>
            (&local_48,
             (TSet<TTuple<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<_anonymous_namespace_::FLocKeyPair_const_>)param_1);
  iVar11 = local_48.Index;
  iVar13 = local_48.NextIndex;
joined_r0x000146b41725:
  if (iVar11 != -1) {
    piVar17 = &param_2->ArrayMax;
    pFVar18 = (param_2->AllocatorInstance).Data;
    pFVar20 = (FScriptContainerElement *)
              (*(longlong *)&(local_48.Set)->Elements + 0x30 + (longlong)iVar11 * 0x68);
    if (((pFVar18 <= pFVar20) && (pFVar20 < pFVar18 + (longlong)*piVar17 * 0x30)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar11 = param_2->ArrayNum;
    if (iVar11 == *piVar17) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,&param_2->AllocatorInstance,piVar17);
    }
    param_2->ArrayNum = iVar11 + 1;
    pFVar18 = (param_2->AllocatorInstance).Data + (longlong)iVar11 * 0x30;
    ::FString::FString((FString *)pFVar18,(FString *)pFVar20);
    *(undefined4 *)
     &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar18[0x10].field_0x0)->AllocatorInstance)
      .Data = *(undefined4 *)
               &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar20[0x10].field_0x0)->
                AllocatorInstance).Data;
    ::FString::FString((FString *)(pFVar18 + 0x18),(FString *)(pFVar20 + 0x18));
    *(int *)&pFVar18[0x28].field_0x0 = *(int *)&pFVar20[0x28].field_0x0;
    if (iVar13 != -1) {
      lVar16 = *(longlong *)&(local_48.Set)->Elements;
      uVar1 = ((local_48.Key)->First).Hash;
      iVar11 = iVar13;
      do {
        lVar19 = (longlong)iVar11 * 0x68;
        iVar13 = *(int *)(lVar19 + 0x60 + lVar16);
        if (*(uint *)(lVar19 + 0x10 + lVar16) == uVar1) {
          if (((local_48.Key)->First).Str.Data.ArrayNum == 0) {
            pwVar15 = L"";
          }
          else {
            pwVar15 = (wchar_t *)((local_48.Key)->First).Str.Data.AllocatorInstance.Data;
          }
          if (*(int *)(lVar19 + 8 + lVar16) == 0) {
            pwVar14 = L"";
          }
          else {
            pwVar14 = *(wchar_t **)(lVar19 + lVar16);
          }
          local_48.Index = iVar11;
          local_48.NextIndex = iVar13;
          iVar12 = wcscmp(pwVar14,pwVar15);
          if ((iVar12 == 0) && (*(uint *)(lVar19 + 0x28 + lVar16) == ((local_48.Key)->Second).Hash))
          {
            if (((local_48.Key)->Second).Str.Data.ArrayNum == 0) {
              pwVar15 = L"";
            }
            else {
              pwVar15 = (wchar_t *)((local_48.Key)->Second).Str.Data.AllocatorInstance.Data;
            }
            if (*(int *)(lVar19 + 0x20 + lVar16) == 0) {
              pwVar14 = L"";
            }
            else {
              pwVar14 = *(wchar_t **)(lVar19 + 0x18 + lVar16);
            }
            iVar12 = wcscmp(pwVar14,pwVar15);
            if (iVar12 == 0) goto joined_r0x000146b41725;
          }
        }
        iVar11 = iVar13;
        if (iVar13 == -1) break;
      } while( true );
    }
  }
  if (param_3) {
    pFVar18 = (param_2->AllocatorInstance).Data;
    iVar13 = param_2->ArrayNum / 2;
    lVar16 = (longlong)iVar13;
    if (0 < iVar13) {
      pFVar20 = pFVar18 + (longlong)(param_2->ArrayNum + -1) * 0x30;
      do {
        uVar3 = *(undefined8 *)(pFVar20 + 8);
        uVar4 = *(undefined8 *)pFVar18;
        uVar5 = *(undefined8 *)(pFVar18 + 8);
        uVar6 = *(undefined8 *)(pFVar18 + 0x10);
        uVar7 = *(undefined8 *)(pFVar18 + 0x18);
        uVar8 = *(undefined8 *)(pFVar18 + 0x20);
        uVar9 = *(undefined8 *)(pFVar18 + 0x28);
        *(undefined8 *)pFVar18 = *(undefined8 *)pFVar20;
        *(undefined8 *)(pFVar18 + 8) = uVar3;
        uVar3 = *(undefined8 *)(pFVar20 + 0x18);
        *(undefined8 *)(pFVar18 + 0x10) = *(undefined8 *)(pFVar20 + 0x10);
        *(undefined8 *)(pFVar18 + 0x18) = uVar3;
        uVar3 = *(undefined8 *)(pFVar20 + 0x28);
        *(undefined8 *)(pFVar18 + 0x20) = *(undefined8 *)(pFVar20 + 0x20);
        *(undefined8 *)(pFVar18 + 0x28) = uVar3;
        *(undefined8 *)pFVar20 = uVar4;
        *(undefined8 *)(pFVar20 + 8) = uVar5;
        *(undefined8 *)(pFVar20 + 0x10) = uVar6;
        *(undefined8 *)(pFVar20 + 0x18) = uVar7;
        *(undefined8 *)(pFVar20 + 0x20) = uVar8;
        *(undefined8 *)(pFVar20 + 0x28) = uVar9;
        lVar16 = lVar16 + -1;
        pFVar20 = pFVar20 + -0x30;
        pFVar18 = pFVar18 + 0x30;
      } while (lVar16 != 0);
    }
  }
  return;
}

// MultiFind<TSizedDefaultAllocator<32>_> @ 146b419d0

void __thiscall
TMultiMap<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>,1>_>
::MultiFind<TSizedDefaultAllocator<32>_>
          (TMultiMap<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLocKey,TSharedRef<FLocTextConflicts::FConflict,1>,1>_>
           *this,FLocKey *param_1,
          TArray<TSharedRef<FLocTextConflicts::FConflict,1>,TSizedDefaultAllocator<32>_> *param_2,
          bool param_3)

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
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 *puVar16;
  
  if (*(int *)&this->field_0x48 != 0) {
    uVar1 = param_1->Hash;
    puVar16 = *(undefined1 **)&this->field_0x40;
    if (*(undefined1 **)&this->field_0x40 == (undefined1 *)0x0) {
      puVar16 = &this->field_0x38;
    }
    iVar9 = *(int *)(puVar16 + ((longlong)*(int *)&this->field_0x48 - 1U & (longlong)(int)uVar1) * 4
                    );
    iVar8 = iVar9;
    if (iVar9 == -1) {
LAB_146b41a98:
      if (iVar8 != -1) {
LAB_146b41ab0:
        pFVar15 = (FScriptContainerElement *)(*(longlong *)this + (longlong)iVar8 * 0x30 + 0x18);
        pFVar12 = (param_2->AllocatorInstance).Data;
        if (((pFVar12 <= pFVar15) && (pFVar15 < pFVar12 + (longlong)param_2->ArrayMax * 0x10)) &&
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
        iVar8 = param_2->ArrayNum;
        if (iVar8 == param_2->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar8 + 1;
        pFVar12 = (param_2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar12 = *(undefined8 *)pFVar15;
        lVar14 = *(longlong *)(pFVar15 + 8);
        *(longlong *)(pFVar12 + 8) = lVar14;
        if (lVar14 != 0) {
          LOCK();
          *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
          UNLOCK();
        }
        if (iVar9 != -1) {
          uVar1 = param_1->Hash;
          lVar14 = *(longlong *)this;
          iVar8 = iVar9;
          do {
            lVar10 = (longlong)iVar8;
            iVar9 = *(int *)(lVar14 + 0x28 + lVar10 * 0x30);
            if (*(uint *)(lVar14 + 0x10 + lVar10 * 0x30) == uVar1) {
              if ((param_1->Str).Data.ArrayNum == 0) {
                pwVar13 = L"";
              }
              else {
                pwVar13 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
              }
              if (*(int *)(lVar14 + 8 + lVar10 * 0x30) == 0) {
                pwVar11 = L"";
              }
              else {
                pwVar11 = *(wchar_t **)(lVar14 + lVar10 * 0x30);
              }
              iVar7 = wcscmp(pwVar11,pwVar13);
              if (iVar7 == 0) goto LAB_146b41bdd;
            }
            iVar8 = iVar9;
            if (iVar9 == -1) break;
          } while( true );
        }
      }
    }
    else {
      lVar14 = *(longlong *)this;
      do {
        lVar10 = (longlong)iVar8;
        iVar9 = *(int *)(lVar14 + 0x28 + lVar10 * 0x30);
        if (*(uint *)(lVar14 + 0x10 + lVar10 * 0x30) == uVar1) {
          if ((param_1->Str).Data.ArrayNum == 0) {
            pwVar13 = L"";
          }
          else {
            pwVar13 = (wchar_t *)(param_1->Str).Data.AllocatorInstance.Data;
          }
          if (*(int *)(lVar14 + 8 + lVar10 * 0x30) == 0) {
            pwVar11 = L"";
          }
          else {
            pwVar11 = *(wchar_t **)(lVar14 + lVar10 * 0x30);
          }
          iVar7 = wcscmp(pwVar11,pwVar13);
          if (iVar7 == 0) goto LAB_146b41a98;
        }
        iVar8 = iVar9;
      } while (iVar9 != -1);
    }
  }
LAB_146b41c0f:
  if (param_3) {
    pFVar12 = (param_2->AllocatorInstance).Data;
    iVar9 = param_2->ArrayNum / 2;
    lVar14 = (longlong)iVar9;
    if (0 < iVar9) {
      pFVar15 = pFVar12 + (longlong)(param_2->ArrayNum + -1) * 0x10;
      do {
        uVar3 = *(undefined8 *)(pFVar15 + 8);
        uVar4 = *(undefined8 *)pFVar12;
        uVar5 = *(undefined8 *)(pFVar12 + 8);
        *(undefined8 *)pFVar12 = *(undefined8 *)pFVar15;
        *(undefined8 *)(pFVar12 + 8) = uVar3;
        pFVar12 = pFVar12 + 0x10;
        *(undefined8 *)pFVar15 = uVar4;
        *(undefined8 *)(pFVar15 + 8) = uVar5;
        lVar14 = lVar14 + -1;
        pFVar15 = pFVar15 + -0x10;
      } while (lVar14 != 0);
    }
  }
  return;
LAB_146b41bdd:
  if (iVar8 == -1) goto LAB_146b41c0f;
  goto LAB_146b41ab0;
}

// FindPair @ 146b5fd60

/* WARNING: Type propagation algorithm not settling */

FLocKeyPair * __thiscall
TMultiMap<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>_>
::FindPair(TMultiMap<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>_>
           *this,FLocKeyPair *param_1,FLocKeyPair *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  int iVar9;
  TBaseKeyIterator<0> local_48;
  
  TSet<TTuple<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<`anonymous_namespace'::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_48,
             (TSet<TTuple<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair>,TDefaultMapHashableKeyFuncs<_anonymous_namespace_::FLocKeyPair,A0xc0d83ff9::FLocKeyPair,1>,FDefaultSetAllocator>
              *)this,(TRetainedRef<_anonymous_namespace_::FLocKeyPair_const_>)param_1);
  if (local_48.Index == -1) {
    return (FLocKeyPair *)0x0;
  }
  uVar1 = (param_2->First).Hash;
  lVar3 = *(longlong *)&(local_48.Set)->Elements;
  iVar4 = local_48.Index;
  iVar9 = local_48.NextIndex;
LAB_146b5fdc0:
  lVar8 = (longlong)iVar4 * 0x68 + lVar3;
  if (*(uint *)(lVar8 + 0x40) == uVar1) {
    if ((param_2->First).Str.Data.ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(param_2->First).Str.Data.AllocatorInstance.Data;
    }
    if (*(int *)(lVar8 + 0x38) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)(lVar8 + 0x30);
    }
    iVar4 = wcscmp(pwVar6,pwVar7);
    if ((iVar4 == 0) && (*(uint *)(lVar8 + 0x58) == (param_2->Second).Hash)) {
      if ((param_2->Second).Str.Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(param_2->Second).Str.Data.AllocatorInstance.Data;
      }
      if (*(int *)(lVar8 + 0x50) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)(lVar8 + 0x48);
      }
      iVar4 = wcscmp(pwVar6,pwVar7);
      if (iVar4 == 0) {
        return (FLocKeyPair *)(lVar8 + 0x30);
      }
    }
  }
  if (iVar9 == -1) {
    return (FLocKeyPair *)0x0;
  }
  uVar2 = ((local_48.Key)->First).Hash;
  iVar4 = iVar9;
  do {
    lVar8 = (longlong)iVar4 * 0x68;
    iVar9 = *(int *)(lVar8 + 0x60 + lVar3);
    if (*(uint *)(lVar8 + 0x10 + lVar3) == uVar2) {
      if (((local_48.Key)->First).Str.Data.ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)((local_48.Key)->First).Str.Data.AllocatorInstance.Data;
      }
      if (*(int *)(lVar8 + 8 + lVar3) == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = *(wchar_t **)(lVar8 + lVar3);
      }
      iVar5 = wcscmp(pwVar6,pwVar7);
      if ((iVar5 == 0) && (*(uint *)(lVar8 + 0x28 + lVar3) == ((local_48.Key)->Second).Hash)) {
        if (((local_48.Key)->Second).Str.Data.ArrayNum == 0) {
          pwVar7 = L"";
        }
        else {
          pwVar7 = (wchar_t *)((local_48.Key)->Second).Str.Data.AllocatorInstance.Data;
        }
        if (*(int *)(lVar8 + 0x20 + lVar3) == 0) {
          pwVar6 = L"";
        }
        else {
          pwVar6 = *(wchar_t **)(lVar8 + 0x18 + lVar3);
        }
        iVar5 = wcscmp(pwVar6,pwVar7);
        if (iVar5 == 0) break;
      }
    }
    iVar4 = iVar9;
    if (iVar9 == -1) {
      return (FLocKeyPair *)0x0;
    }
  } while( true );
  if (iVar4 == -1) {
    return (FLocKeyPair *)0x0;
  }
  goto LAB_146b5fdc0;
}

