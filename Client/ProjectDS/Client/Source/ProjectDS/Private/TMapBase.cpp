// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 280

// EmplaceByHash<FName> @ 14b51cac0

FString * __thiscall
TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
EmplaceByHash<FName>
          (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,uint param_1,FName *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  TSparseSetElement<TTuple<FName,FString>_> *pTVar5;
  longlong lVar6;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_18;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    lVar6 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar6);
    iVar1 = iVar1 + -1;
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + lVar6) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_18,iVar4);
  pTVar5 = (TSparseSetElement<TTuple<FName,FString>_> *)0x0;
  if (local_18.Pointer != (TSparseSetElement<TTuple<FName,FString>_> *)0x0) {
    *(FName *)local_18.Pointer = *param_2;
    *(undefined8 *)((longlong)local_18.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_18.Pointer + 0x10) = 0;
    *(undefined4 *)((longlong)local_18.Pointer + 0x18) = 0xffffffff;
    pTVar5 = local_18.Pointer;
  }
  local_res8[0] = local_18.Index;
  bVar3 = TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,param_1,pTVar5,local_res8,(bool *)0x0);
  lVar6 = (longlong)local_res8[0];
  if (!bVar3) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    RehashOrLink(&this->Pairs,param_1,pTVar5,local_res8[0]);
  }
  return (FString *)(*(longlong *)&(this->Pairs).Elements + 8 + lVar6 * 0x20);
}

// FindOrAddImpl<FName> @ 14b51cbf0

FString * __thiscall
TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>::
FindOrAddImpl<FName>
          (TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  FString *pFVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (FString *)(pFVar2 + 1);
          }
          break;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  pFVar3 = EmplaceByHash<FName>(this,param_1,param_2);
  return pFVar3;
}

// FindChecked @ 14b7a8c30

FDS_BuffEffectInfo * __thiscall
TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
::FindChecked(TMapBase<int,FDS_BuffEffectInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffEffectInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_BuffEffectInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_BuffEffectInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x18];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_BuffEffectInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_BuffEffectInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b7a8cd0

FDS_BuffInfo * __thiscall
TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>::
FindChecked(TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
            *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_BuffInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_BuffInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0xc];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_BuffInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_BuffInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b7a8d70

UDS_EventBase ** __thiscall
TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
::FindChecked(TMapBase<UClass_const_*,UDS_EventBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_const_*,UDS_EventBase_*,0>_>
              *this,UClass *param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDS_EventBase **ppUVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  
  uVar8 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(UClass **)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (UDS_EventBase **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (UDS_EventBase **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppUVar6 = (UDS_EventBase **)(*pcVar3)();
  return ppUVar6;
}

// FindChecked @ 14b7a8e40

FWN_AbilityInstanceHandle * __thiscall
TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
::FindChecked(TMapBase<FGameplayTag,FWN_AbilityInstanceHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FWN_AbilityInstanceHandle,0>_>
              *this,FGameplayTag *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FWN_AbilityInstanceHandle *pFVar5;
  ForElementType<FSetElementId> FVar6;
  FName *pFVar7;
  
  FVar1 = param_1->TagName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar4 = *(uint *)((longlong)FVar6 +
                     (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar4) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        pFVar7 = (FName *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar7 == param_1->TagName) {
          if (pFVar7 != (FName *)0x0) goto LAB_14b7a8edf;
          goto LAB_14b7a8eb9;
        }
        uVar4 = pFVar7[3].ComparisonIndex.Value;
      } while (uVar4 != 0xffffffff);
    }
  }
  pFVar7 = (FName *)0x0;
LAB_14b7a8eb9:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FWN_AbilityInstanceHandle *)(*pcVar2)();
    return pFVar5;
  }
LAB_14b7a8edf:
  return (FWN_AbilityInstanceHandle *)(pFVar7 + 1);
}

// FindChecked @ 14b7a8f00

TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_> *
__thiscall
TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
::FindChecked(TMapBase<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *pTVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                    *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[0xb];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
            *)(*pcVar1)();
  return pTVar4;
}

// Remove @ 14b7c1370

int __thiscall
TMapBase<int,FDS_CollideBuffDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>_>
::Remove(TMapBase<int,FDS_CollideBuffDebugInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CollideBuffDebugInfo,0>_>
         *this,int param_1)

{
  ForElementType<FSetElementId> *pFVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint *puVar11;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    pFVar1 = &(this->Pairs).Hash;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)pFVar1;
    }
    uVar8 = *(uint *)((longlong)FVar7 +
                     ((longlong)(this->Pairs).HashSize - 1U & (longlong)param_1) * 4);
    if (uVar8 != 0xffffffff) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar10 = (longlong)(int)uVar8 * 0x1c;
        if (*(int *)(lVar10 + lVar3) == param_1) {
          if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)&(this->Pairs).Elements.field_0x28)) {
            puVar9 = *(undefined1 **)&(this->Pairs).Elements.field_0x20;
            if (puVar9 == (undefined1 *)0x0) {
              puVar9 = &(this->Pairs).Elements.field_0x10;
            }
            if ((*(uint *)(puVar9 + (longlong)((int)(uVar8 + ((int)uVar8 >> 0x1f & 0x1fU)) >> 5) * 4
                          ) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_14b7c143d;
          }
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Elements.IsValidIndex(ElementIndex)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                             ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex")
          ;
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            iVar6 = (*pcVar4)();
            return iVar6;
          }
LAB_14b7c143d:
          FVar7 = (this->Pairs).Hash.SecondaryData;
          lVar10 = *(longlong *)&(this->Pairs).Elements + lVar10;
          if (FVar7 == (ForElementType<FSetElementId>)0x0) {
            FVar7 = (ForElementType<FSetElementId>)pFVar1;
          }
          puVar11 = (uint *)((longlong)FVar7 + (longlong)*(int *)(lVar10 + 0x18) * 4);
          while( true ) {
            uVar2 = *puVar11;
            if ((uVar2 == 0xffffffff) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("NextElementIndex != INDEX_NONE",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                   ,0x2b5,L"Corrupt hash"), bVar5)) break;
            if (uVar2 == uVar8) {
              *puVar11 = *(uint *)(lVar10 + 0x14);
              TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<28,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)this,uVar8,1);
              return 1;
            }
            puVar11 = (uint *)(*(longlong *)&(this->Pairs).Elements + 0x14 +
                              (longlong)(int)uVar2 * 0x1c);
          }
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        uVar8 = *(uint *)(lVar10 + 0x14 + lVar3);
      } while (uVar8 != 0xffffffff);
    }
  }
  return 0;
}

// FindOrAddImpl<unsigned___int64_const_&> @ 14b7d22b0

TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<unsigned___int64_const_&>(void *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  longlong lVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x50 + *(longlong *)this);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy> *
                   )(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(EDS_TamingState),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)this + 8 + (longlong)local_res8[0] * 0x50);
}

// FindChecked @ 14b7ea7f0

FDS_HitInfo * __thiscall
TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>::
FindChecked(TMapBase<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
            *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_HitInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_HitInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x18];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_HitInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_HitInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b7ea890

TSubclassOf<UWN_Ability> * __thiscall
TMapBase<FGameplayTag,TSubclassOf<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UWN_Ability>,0>_>
::FindChecked(TMapBase<FGameplayTag,TSubclassOf<UWN_Ability>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UWN_Ability>,0>_>
              *this,FGameplayTag *param_1)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TSubclassOf<UWN_Ability> *pTVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  
  FVar1 = param_1->TagName;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar9 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x18) == param_1->TagName) {
          if (lVar9 != 0) goto LAB_14b7ea930;
          goto LAB_14b7ea90a;
        }
        iVar6 = *(int *)(lVar9 + 0x10);
      } while (iVar6 != -1);
    }
  }
  lVar9 = 0;
LAB_14b7ea90a:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSubclassOf<UWN_Ability> *)(*pcVar3)();
    return pTVar7;
  }
LAB_14b7ea930:
  return (TSubclassOf<UWN_Ability> *)(lVar9 + 8);
}

// FindChecked @ 14b7ea960

TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_> *
__thiscall
TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
::FindChecked(TMapBase<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_> *pTVar4
  ;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
                    *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[0xb];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<int,FDS_HitInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_HitInfo,0>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindOrAddImpl<enum_EDS_MountStep_const_&> @ 14b81d8a0

TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy> *
__thiscall
TMapBase<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<enum_EDS_MountStep_const_&>(void *this,uint param_1,EDS_MountStep *param_2)

{
  undefined4 uVar1;
  EDS_MountStep *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EDS_MountStep *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EDS_MountStep *)((longlong)(int)uVar1 * 0x50 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EDS_MountStep *)0x0) {
            return (TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>
                    *)(pEVar2 + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x48);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep_const_,TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_MountStep_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EDS_MountStep_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(FDS_MountStepInfo_const_&),FDefaultTSDelegateUserPolicy> *
         )(*(longlong *)this + 8 + (longlong)local_res8[0] * 0x50);
}

// FindChecked @ 14b8303d0

TObjectPtr<UDS_DataBase> * __thiscall
TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
::FindChecked(TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_DataBase> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_DataBase> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_DataBase> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_DataBase> *)(*pcVar3)();
  return pTVar6;
}

// FindOrAddImpl<unsigned___int64_const_&> @ 14b861990

TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<unsigned___int64_const_&>
          (TMapBase<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,ulong64 *param_2)

{
  int iVar1;
  ulong64 *puVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  ulong64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        puVar2 = (ulong64 *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar2 == *param_2) {
          if (puVar2 != (ulong64 *)0x0) {
            return (TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>
                    *)(puVar2 + 1);
          }
          break;
        }
        iVar1 = (int)puVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)param_1,(bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// Find @ 14b875ab0

TObjectPtr<UChooserTable> * __thiscall
TMapBase<enum_EDS_WeaponType,TObjectPtr<UChooserTable>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,TObjectPtr<UChooserTable>,0>_>
::Find(void *this,EDS_WeaponType param_1)

{
  int iVar1;
  TObjectPtr<UChooserTable> *pTVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(EDS_WeaponType *)(*(longlong *)this + (longlong)iVar1 * 0x18) == param_1) {
          pTVar2 = (TObjectPtr<UChooserTable> *)0x0;
          if (lVar3 != 0) {
            pTVar2 = (TObjectPtr<UChooserTable> *)(lVar3 + 8);
          }
          return pTVar2;
        }
        iVar1 = *(int *)(lVar3 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return (TObjectPtr<UChooserTable> *)0x0;
}

// FindChecked @ 14b875b20

UAnimInstance ** __thiscall
TMapBase<enum_EDS_CharState,UAnimInstance_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,UAnimInstance_*,0>_>
::FindChecked(void *this,EDS_CharState param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UAnimInstance **ppUVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U &
                             (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_CharState *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (UAnimInstance **)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (UAnimInstance **)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  ppUVar4 = (UAnimInstance **)(*pcVar1)();
  return ppUVar4;
}

// FindChecked @ 14b875bd0

FDS_AnimLayerDescriptor * __thiscall
TMapBase<enum_EDS_CharState,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FDS_AnimLayerDescriptor,0>_>
::FindChecked(void *this,EDS_CharState param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_AnimLayerDescriptor *pFVar4;
  EDS_CharState *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U &
                             (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (uVar3 != (Climbing|Cooking|Casting|Mount|NPCClientControl|ComeBack|Patrol|NetSync|Move|
                  CharSwitch|Remove|Spawn|Resurrect|Dead|Transport|Warp|PlayerSkill|Interaction|
                  Abnormal_NonControl|Abnormal|AirWalk|Seal|HitAdditive|Battle|Groggy|AniCut|
                  ToggleSkill|Skill|Avoid|AutoMove|Shield|Swim)) {
      do {
        pEVar5 = (EDS_CharState *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_CharState *)0x0) {
            return (FDS_AnimLayerDescriptor *)(pEVar5 + 1);
          }
          break;
        }
        uVar3 = (undefined4)pEVar5[3];
      } while (uVar3 != (Climbing|Cooking|Casting|Mount|NPCClientControl|ComeBack|Patrol|NetSync|
                         Move|CharSwitch|Remove|Spawn|Resurrect|Dead|Transport|Warp|PlayerSkill|
                         Interaction|Abnormal_NonControl|Abnormal|AirWalk|Seal|HitAdditive|Battle|
                         Groggy|AniCut|ToggleSkill|Skill|Avoid|AutoMove|Shield|Swim));
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_AnimLayerDescriptor *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_AnimLayerDescriptor *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b875c80

FTimerHandle * __thiscall
TMapBase<enum_EDS_CharState,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharState,FTimerHandle,0>_>
::FindChecked(void *this,EDS_CharState param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTimerHandle *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U &
                             (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_CharState *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (FTimerHandle *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FTimerHandle *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FTimerHandle *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b875d30

FDS_AnimLayerDescriptor * __thiscall
TMapBase<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FDS_AnimLayerDescriptor,0>_>
::FindChecked(void *this,EDS_WeaponType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_AnimLayerDescriptor *pFVar4;
  EDS_WeaponType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_WeaponType *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_WeaponType *)0x0) {
            return (FDS_AnimLayerDescriptor *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_AnimLayerDescriptor *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_AnimLayerDescriptor *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b875dd0

FTimerHandle * __thiscall
TMapBase<enum_EDS_WeaponType,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WeaponType,FTimerHandle,0>_>
::FindChecked(void *this,EDS_WeaponType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTimerHandle *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_WeaponType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (FTimerHandle *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FTimerHandle *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FTimerHandle *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b875e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

TObjectPtr<ADS_AI_GYM_SyncActor> * __thiscall
TMapBase<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>_>
::FindChecked(TMapBase<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<ADS_AI_GYM_SyncActor>,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<ADS_AI_GYM_SyncActor> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<ADS_AI_GYM_SyncActor> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<ADS_AI_GYM_SyncActor> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<ADS_AI_GYM_SyncActor> *)(*pcVar3)();
  return pTVar6;
}

// FindOrAddImpl<FName_const_&> @ 14b8ae2e0

TQuat<double> * __thiscall
TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
           *this,uint param_1,FName *param_2)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == *param_2) {
          if (pFVar2 != (FName *)0x0) {
            return (TQuat<double> *)(pFVar2 + 2);
          }
          break;
        }
        uVar1 = pFVar2[6].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,UE::Math::TQuat<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TQuat<double> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x40 + 0x10);
}

// FindOrAddImpl<FName_const_&> @ 14b8ae390

TVector<double> * __thiscall
TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_14b8ae422;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14b8ae422:
  return (TVector<double> *)(lVar3 + 8);
}

// FindOrAddImpl<FName> @ 14b8ae440

TVector<double> * __thiscall
TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
::FindOrAddImpl<FName>
          (TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_14b8ae4d2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14b8ae4d2:
  return (TVector<double> *)(lVar3 + 8);
}

// Find @ 14b8c24d0

void ** __thiscall
TMapBase<enum_EDS_CursorShapeType,void_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CursorShapeType,void_*,0>_>
::Find(void *this,EDS_CursorShapeType param_1)

{
  int iVar1;
  void **ppvVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(EDS_CursorShapeType *)(*(longlong *)this + (longlong)iVar1 * 0x18) == param_1) {
          ppvVar2 = (void **)0x0;
          if (lVar3 != 0) {
            ppvVar2 = (void **)(lVar3 + 8);
          }
          return ppvVar2;
        }
        iVar1 = *(int *)(lVar3 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return (void **)0x0;
}

// FindChecked @ 14b8c27e0

TObjectPtr<UDS_ContentArguments> * __thiscall
TMapBase<int,TObjectPtr<UDS_ContentArguments>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>_>
::FindChecked(TMapBase<int,TObjectPtr<UDS_ContentArguments>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ContentArguments>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_ContentArguments> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_ContentArguments> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_ContentArguments> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_ContentArguments> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14b8c2880

TArray<FChainGunInstance,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FChainGunInstance,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FChainGunInstance,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<FChainGunInstance,TSizedDefaultAllocator<32>_> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FChainGunInstance,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FChainGunInstance,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14b8c2920

EDS_AbilityTagType * __thiscall
TMapBase<FGameplayTag,enum_EDS_AbilityTagType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_AbilityTagType,0>_>
::FindChecked(void *this,FGameplayTag *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  EDS_AbilityTagType *pEVar6;
  longlong lVar7;
  
  FVar1 = param_1->TagName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar7 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar7 = (longlong)this + 0x38;
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & FVar1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)this + (longlong)iVar5 * 0x14;
        if (*(FName *)(*(longlong *)this + (longlong)iVar5 * 0x14) == param_1->TagName) {
          if (lVar7 != 0) goto LAB_14b8c29c0;
          goto LAB_14b8c299a;
        }
        iVar5 = *(int *)(lVar7 + 0xc);
      } while (iVar5 != -1);
    }
  }
  lVar7 = 0;
LAB_14b8c299a:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pEVar6 = (EDS_AbilityTagType *)(*pcVar2)();
    return pEVar6;
  }
LAB_14b8c29c0:
  return (EDS_AbilityTagType *)(lVar7 + 8);
}

// FindChecked @ 14b8c29f0

EDS_StateTagType * __thiscall
TMapBase<FGameplayTag,enum_EDS_StateTagType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,enum_EDS_StateTagType,0>_>
::FindChecked(void *this,FGameplayTag *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  EDS_StateTagType *pEVar6;
  longlong lVar7;
  
  FVar1 = param_1->TagName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar7 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar7 = (longlong)this + 0x38;
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & FVar1.Number + uVar4) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)this + (longlong)iVar5 * 0x14;
        if (*(FName *)(*(longlong *)this + (longlong)iVar5 * 0x14) == param_1->TagName) {
          if (lVar7 != 0) goto LAB_14b8c2a90;
          goto LAB_14b8c2a6a;
        }
        iVar5 = *(int *)(lVar7 + 0xc);
      } while (iVar5 != -1);
    }
  }
  lVar7 = 0;
LAB_14b8c2a6a:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pEVar6 = (EDS_StateTagType *)(*pcVar2)();
    return pEVar6;
  }
LAB_14b8c2a90:
  return (EDS_StateTagType *)(lVar7 + 8);
}

// FindChecked @ 14b8c2ac0

FGameplayTag * __thiscall
TMapBase<enum_EDS_AbilityTagType,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,FGameplayTag,0>_>
::FindChecked(void *this,EDS_AbilityTagType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGameplayTag *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x14;
        if (*(EDS_AbilityTagType *)(*(longlong *)this + (longlong)iVar3 * 0x14) == param_1) {
          if (lVar5 != 0) {
            return (FGameplayTag *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FGameplayTag *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FGameplayTag *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b8c2b60

FDS_HistoryData * __thiscall
TMapBase<enum_EDS_ContentsTabFrameType,FDS_HistoryData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,FDS_HistoryData,0>_>
::FindChecked(void *this,EDS_ContentsTabFrameType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ContentsTabFrameType EVar3;
  FDS_HistoryData *pFVar4;
  EDS_ContentsTabFrameType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_ContentsTabFrameType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_ContentsTabFrameType *)((longlong)(int)EVar3 * 0x298 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ContentsTabFrameType *)0x0) {
            return (FDS_HistoryData *)(pEVar5 + 2);
          }
          break;
        }
        EVar3 = pEVar5[0xa4];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_HistoryData *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_HistoryData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b8c2c10

TObjectPtr<UInputMappingContext> * __thiscall
TMapBase<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
::FindChecked(void *this,EDS_InputMappingType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UInputMappingContext> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - Action_Base & param_1) *
                             4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_InputMappingType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TObjectPtr<UInputMappingContext> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TObjectPtr<UInputMappingContext> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TObjectPtr<UInputMappingContext> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14b8c2cb0

FGameplayTag * __thiscall
TMapBase<enum_EDS_StateTagType,FGameplayTag,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StateTagType,FGameplayTag,0>_>
::FindChecked(void *this,EDS_StateTagType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FGameplayTag *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x14;
        if (*(EDS_StateTagType *)(*(longlong *)this + (longlong)iVar3 * 0x14) == param_1) {
          if (lVar5 != 0) {
            return (FGameplayTag *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FGameplayTag *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FGameplayTag *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b8c2d50

int * __thiscall
TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
::FindChecked(void *this,EDS_StatusType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_StatusType EVar3;
  int *piVar4;
  EDS_StatusType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_StatusType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Hp & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_StatusType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_StatusType *)0x0) {
            return (int *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 14b8c2df0

float * __thiscall
TMapBase<enum_EDS_StatusType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,float,0>_>
::FindChecked(void *this,EDS_StatusType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_StatusType EVar3;
  float *pfVar4;
  EDS_StatusType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_StatusType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Hp & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_StatusType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_StatusType *)0x0) {
            return (float *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (float *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pfVar4 = (float *)(*pcVar1)();
  return pfVar4;
}

// FindChecked @ 14b8c2e90

TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __thiscall
TMapBase<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,TDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>_>
::FindChecked(void *this,EDS_WindowWidget param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - Login & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x28;
        if (*(EDS_WindowWidget *)(*(longlong *)this + (longlong)iVar3 * 0x28) == param_1) {
          if (lVar5 != 0) {
            return (TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x20);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TDelegate<void___cdecl(UDS_UserWidget_*,EDS_ContentsTabFrameType,TWeakObjectPtr<UDS_ContentArguments,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14b8c2f30

EDS_ViewModelTemplateKey * __thiscall
TMapBase<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget,enum_EDS_ViewModelTemplateKey,0>_>
::FindChecked(void *this,EDS_WindowWidget param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_WindowWidget EVar3;
  EDS_ViewModelTemplateKey *pEVar4;
  EDS_WindowWidget *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_WindowWidget *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Login & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_WindowWidget *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_WindowWidget *)0x0) {
            return pEVar5 + 1;
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (EDS_ViewModelTemplateKey *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EDS_ViewModelTemplateKey *)(*pcVar1)();
  return pEVar4;
}

// Find @ 14b8ffe90

FDS_NameTagElementData * __thiscall
TMapBase<enum_EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementData,0>_>
::Find(void *this,EDS_NameTagElementType param_1)

{
  int iVar1;
  FDS_NameTagElementData *pFVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(EDS_NameTagElementType *)(*(longlong *)this + (longlong)iVar1 * 0x18) == param_1) {
          pFVar2 = (FDS_NameTagElementData *)0x0;
          if (lVar3 != 0) {
            pFVar2 = (FDS_NameTagElementData *)(lVar3 + 4);
          }
          return pFVar2;
        }
        iVar1 = *(int *)(lVar3 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return (FDS_NameTagElementData *)0x0;
}

// FindChecked @ 14b8fff00

FDS_FloatingTextData * __thiscall
TMapBase<enum_EDS_AbnormalType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_FloatingTextData,0>_>
::FindChecked(void *this,EDS_AbnormalType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_FloatingTextData *pFVar4;
  EDS_AbnormalType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_AbnormalType *)((longlong)(int)uVar3 * 0x110 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_AbnormalType *)0x0) {
            return (FDS_FloatingTextData *)(pEVar5 + 0x10);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x100);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_FloatingTextData *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_FloatingTextData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b8fffb0

FSoftObjectPath * __thiscall
TMapBase<enum_EDS_ClientResourceType,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ClientResourceType,FSoftObjectPath,0>_>
::FindChecked(void *this,EDS_ClientResourceType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FSoftObjectPath *pFVar4;
  EDS_ClientResourceType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_ClientResourceType *)((longlong)(int)uVar3 * 0x30 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ClientResourceType *)0x0) {
            return (FSoftObjectPath *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x28);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FSoftObjectPath *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FSoftObjectPath *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b900050

FDS_FloatingTextData * __thiscall
TMapBase<enum_EDS_DamageFontType,FDS_FloatingTextData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_DamageFontType,FDS_FloatingTextData,0>_>
::FindChecked(void *this,EDS_DamageFontType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_FloatingTextData *pFVar4;
  EDS_DamageFontType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_DamageFontType *)((longlong)(int)uVar3 * 0x110 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_DamageFontType *)0x0) {
            return (FDS_FloatingTextData *)(pEVar5 + 0x10);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x100);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_FloatingTextData *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_FloatingTextData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b900100

FDS_DepthOfFieldData * __thiscall
TMapBase<enum_EDS_DepthOfFieldType,FDS_DepthOfFieldData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_DepthOfFieldType,FDS_DepthOfFieldData,0>_>
::FindChecked(void *this,EDS_DepthOfFieldType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_DepthOfFieldData *pFVar4;
  EDS_DepthOfFieldType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_DepthOfFieldType *)((longlong)(int)uVar3 * 0x30 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_DepthOfFieldType *)0x0) {
            return (FDS_DepthOfFieldData *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x28);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_DepthOfFieldData *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_DepthOfFieldData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b9001a0

FDS_InputMappingData * __thiscall
TMapBase<enum_EDS_InputMappingType,FDS_InputMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,FDS_InputMappingData,0>_>
::FindChecked(void *this,EDS_InputMappingType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_InputMappingType EVar3;
  FDS_InputMappingData *pFVar4;
  EDS_InputMappingType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_InputMappingType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Action_Base & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_InputMappingType *)((longlong)(int)EVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_InputMappingType *)0x0) {
            return (FDS_InputMappingData *)(pEVar5 + 2);
          }
          break;
        }
        EVar3 = pEVar5[6];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_InputMappingData *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_InputMappingData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b900240

FDS_NameTagElementAlphaData * __thiscall
TMapBase<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData,0>_>
::FindChecked(void *this,EDS_NameTagElementType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_NameTagElementAlphaData *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_NameTagElementType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (FDS_NameTagElementAlphaData *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_NameTagElementAlphaData *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_NameTagElementAlphaData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b9002e0

FDS_NameTagElementData * __thiscall
TMapBase<enum_EDS_NameTagElementType,FDS_NameTagElementData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagElementType,FDS_NameTagElementData,0>_>
::FindChecked(void *this,EDS_NameTagElementType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_NameTagElementData *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_NameTagElementType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (FDS_NameTagElementData *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_NameTagElementData *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_NameTagElementData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b900380

FDS_NameTagData * __thiscall
TMapBase<enum_EDS_NameTagStateType,FDS_NameTagData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NameTagStateType,FDS_NameTagData,0>_>
::FindChecked(void *this,EDS_NameTagStateType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_NameTagData *pFVar4;
  EDS_NameTagStateType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_NameTagStateType *)((longlong)(int)uVar3 * 0x68 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_NameTagStateType *)0x0) {
            return (FDS_NameTagData *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x60);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_NameTagData *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_NameTagData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b900420

FDS_FloatingTextNumberData * __thiscall
TMapBase<enum_EDS_NumberFontType,FDS_FloatingTextNumberData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NumberFontType,FDS_FloatingTextNumberData,0>_>
::FindChecked(void *this,EDS_NumberFontType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_FloatingTextNumberData *pFVar4;
  EDS_NumberFontType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_NumberFontType *)((longlong)(int)uVar3 * 0x38 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_NumberFontType *)0x0) {
            return (FDS_FloatingTextNumberData *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x30);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_FloatingTextNumberData *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_FloatingTextNumberData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b9a9d00

bool * __thiscall
TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>::FindChecked
          (TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  bool *pbVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (bool *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (bool *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pbVar4 = (bool *)(*pcVar1)();
  return pbVar4;
}

// FindChecked @ 14b9a9da0

FDS_AccountInfo * __thiscall
TMapBase<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
::FindChecked(TMapBase<FDS_AccountKey,FDS_AccountInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>_>
              *this,FDS_AccountKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDS_AccountInfo *pFVar5;
  longlong lVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FDS_AccountKey,FDS_AccountInfo>,TDefaultMapHashableKeyFuncs<FDS_AccountKey,FDS_AccountInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDS_AccountKey>(&this->Pairs,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x78 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FDS_AccountInfo *)(lVar6 + 0x18);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_AccountInfo *)&DAT_00000018;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FDS_AccountInfo *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 14b9a9e30

TObjectPtr<UDS_ManagerBase> * __thiscall
TMapBase<FName,TObjectPtr<UDS_ManagerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>_>
::FindChecked(TMapBase<FName,TObjectPtr<UDS_ManagerBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TObjectPtr<UDS_ManagerBase>,0>_>
              *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TObjectPtr<UDS_ManagerBase> *pTVar7;
  ForElementType<FSetElementId> FVar8;
  
  uVar5 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_ManagerBase> *)(lVar1 + 8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x10);
      } while (iVar6 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_ManagerBase> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar7 = (TObjectPtr<UDS_ManagerBase> *)(*pcVar3)();
  return pTVar7;
}

// FindChecked @ 14b9a9ef0

TObjectPtr<UDS_GameStateBase> * __thiscall
TMapBase<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GameStateType,TObjectPtr<UDS_GameStateBase>,0>_>
::FindChecked(void *this,EDS_GameStateType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UDS_GameStateBase> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - GameStartState & param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_GameStateType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TObjectPtr<UDS_GameStateBase> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TObjectPtr<UDS_GameStateBase> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TObjectPtr<UDS_GameStateBase> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14b9a9f90

EDS_WeaponType * __thiscall
TMapBase<enum_EDS_ItemType,enum_EDS_WeaponType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,enum_EDS_WeaponType,0>_>
::FindChecked(void *this,EDS_ItemType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ItemType EVar3;
  EDS_WeaponType *pEVar4;
  EDS_ItemType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_ItemType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_ItemType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ItemType *)0x0) {
            return (EDS_WeaponType *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return &DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EDS_WeaponType *)(*pcVar1)();
  return pEVar4;
}

// FindOrAddImpl<FString_const_&> @ 14b9cfc60

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 14b9cfce0

TSharedPtr<FDS_ChatConversation,1> * __thiscall
TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TSharedPtr<FDS_ChatConversation,1> *)(lVar2 + 0x10);
}

// FindOrAddImpl<FString_const_&> @ 14b9cfd60

TWeakPtr<FDS_ChatRoomData,1> * __thiscall
TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
::FindOrAddImpl<FString_const_&>
          (TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
           *this,uint param_1,FString *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FString *local_res20;
  
  iVar1 = TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,param_1,param_2);
  if ((iVar1 == -1) ||
     (lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x28, lVar2 == 0)) {
    local_res20 = param_2;
    TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (&this->Pairs,(uint)local_res8,(TKeyInitializer<FString_const_&> *)(ulonglong)param_1,
               (bool *)&local_res20);
    lVar2 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
  }
  return (TWeakPtr<FDS_ChatRoomData,1> *)(lVar2 + 0x10);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14b9cfde0

void __thiscall
TMapBase<enum_EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (void *this,TArray<EDS_AbnormalType,TSizedDefaultAllocator<32>_> *param_1)

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
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar9 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)((longlong)this + 0x28);
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = TStack_40.Array;
    }
    uVar4 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar9;
      iVar12 = iVar12 + 0x20;
      iVar9 = iVar9 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14b9cfeb3;
      uVar4 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
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
LAB_14b9cfeb3:
  TStack_40._padding_ = CONCAT44(uVar11,iVar9);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)((longlong)this + 0x28)) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar10 = (FScriptContainerElement *)
                ((longlong)TStack_40.CurrentBitIndex * 0xe0 + *(longlong *)this);
      if (((pFVar5 <= pFVar10) && (pFVar10 < pFVar5 + *piVar1)) &&
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
                          (0x101,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar9 + 1;
      (param_1->AllocatorInstance).Data[iVar9] = *pFVar10;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14b9ea150

TWeakPtr<FDS_ChatRoomData,1> * __thiscall
TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
::Find(TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
       *this,FString *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar6;
  
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
  iVar3 = TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar2,param_1);
  if (iVar3 != -1) {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar3 * 0x28;
    pTVar6 = (TWeakPtr<FDS_ChatRoomData,1> *)0x0;
    if (lVar1 != 0) {
      pTVar6 = (TWeakPtr<FDS_ChatRoomData,1> *)(lVar1 + 0x10);
    }
    return pTVar6;
  }
  return (TWeakPtr<FDS_ChatRoomData,1> *)0x0;
}

// Find @ 14b9ea1e0

TWeakPtr<FDS_ChatRoomData,1> * __thiscall
TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
::Find(TMapBase<__int64,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TWeakPtr<FDS_ChatRoomData,1>,0>_>
       *this,long64 param_1)

{
  int iVar1;
  longlong *plVar2;
  TWeakPtr<FDS_ChatRoomData,1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar2 == param_1) {
          pTVar3 = (TWeakPtr<FDS_ChatRoomData,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar3 = (TWeakPtr<FDS_ChatRoomData,1> *)(plVar2 + 1);
          }
          return pTVar3;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TWeakPtr<FDS_ChatRoomData,1> *)0x0;
}

// FindChecked @ 14b9eac40

float * __thiscall
TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_>::FindChecked
          (TMapBase<int,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,float,0>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (float *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (float *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pfVar4 = (float *)(*pcVar1)();
  return pfVar4;
}

// FindChecked @ 14b9eace0

FDS_CastingSkillInfo * __thiscall
TMapBase<int,FDS_CastingSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>_>
::FindChecked(TMapBase<int,FDS_CastingSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CastingSkillInfo,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_CastingSkillInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x28) == param_1) {
          if (lVar1 != 0) {
            return (FDS_CastingSkillInfo *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FDS_CastingSkillInfo *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FDS_CastingSkillInfo *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14b9ead80

FDS_NormalAttackInfo * __thiscall
TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
::FindChecked(TMapBase<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_NormalAttackInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FDS_NormalAttackInfo *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FDS_NormalAttackInfo *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FDS_NormalAttackInfo *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14b9eae20

TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
* __thiscall
TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
::FindChecked(TMapBase<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
  *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
                    *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<int,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NormalAttackInfo,0>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14b9eaec0

FDS_MarkAsReadKey * __thiscall
TMapBase<FDS_MarkAsReadKey,FDS_MarkAsReadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>_>
::FindChecked(TMapBase<FDS_MarkAsReadKey,FDS_MarkAsReadKey,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>_>
              *this,FDS_MarkAsReadKey *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDS_MarkAsReadKey *pFVar5;
  longlong lVar6;
  
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FDS_MarkAsReadKey,FDS_MarkAsReadKey>,TDefaultMapHashableKeyFuncs<FDS_MarkAsReadKey,FDS_MarkAsReadKey,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FDS_MarkAsReadKey>(&this->Pairs,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (FDS_MarkAsReadKey *)(lVar6 + 0x18);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_MarkAsReadKey *)&DAT_00000018;
  }
  pcVar1 = (code *)swi(3);
  pFVar5 = (FDS_MarkAsReadKey *)(*pcVar1)();
  return pFVar5;
}

// FindChecked @ 14b9eaf50

TSubclassOf<UDS_AbilityData> * __thiscall
TMapBase<FGameplayTag,TSubclassOf<UDS_AbilityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>_>
::FindChecked(TMapBase<FGameplayTag,TSubclassOf<UDS_AbilityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSubclassOf<UDS_AbilityData>,0>_>
              *this,FGameplayTag *param_1)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TSubclassOf<UDS_AbilityData> *pTVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  
  FVar1 = param_1->TagName;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar9 = lVar2 + (longlong)iVar6 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x18) == param_1->TagName) {
          if (lVar9 != 0) goto LAB_14b9eaff0;
          goto LAB_14b9eafca;
        }
        iVar6 = *(int *)(lVar9 + 0x10);
      } while (iVar6 != -1);
    }
  }
  lVar9 = 0;
LAB_14b9eafca:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TSubclassOf<UDS_AbilityData> *)(*pcVar3)();
    return pTVar7;
  }
LAB_14b9eaff0:
  return (TSubclassOf<UDS_AbilityData> *)(lVar9 + 8);
}

// FindChecked @ 14b9eb020

FDS_AbnormalInfo * __thiscall
TMapBase<enum_EDS_AbnormalType,FDS_AbnormalInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbnormalType,FDS_AbnormalInfo,0>_>
::FindChecked(void *this,EDS_AbnormalType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_AbnormalInfo *pFVar4;
  EDS_AbnormalType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_AbnormalType *)((longlong)(int)uVar3 * 0xe0 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_AbnormalType *)0x0) {
            return (FDS_AbnormalInfo *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0xd8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_AbnormalInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_AbnormalInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b9eb0d0

float * __thiscall
TMapBase<enum_EDS_AirWalkStep,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,float,0>_>
::FindChecked(void *this,EDS_AirWalkStep param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  float *pfVar4;
  EDS_AirWalkStep *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_AirWalkStep *)((longlong)(int)uVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_AirWalkStep *)0x0) {
            return (float *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (float *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pfVar4 = (float *)(*pcVar1)();
  return pfVar4;
}

// FindChecked @ 14b9eb170

TSharedPtr<FDS_AirWalkStepInfo,1> * __thiscall
TMapBase<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,0>_>
::FindChecked(void *this,EDS_AirWalkStep param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TSharedPtr<FDS_AirWalkStepInfo,1> *pTVar4;
  EDS_AirWalkStep *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_AirWalkStep *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_AirWalkStep *)0x0) {
            return (TSharedPtr<FDS_AirWalkStepInfo,1> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<FDS_AirWalkStepInfo,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FDS_AirWalkStepInfo,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14b9eb210

TSharedPtr<FDS_AirWalkStepInfo,1> * __thiscall
TMapBase<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AirWalkStep,TSharedPtr<FDS_AirWalkStepInfo,1>,0>_>
::FindChecked(void *this,EDS_AirWalkStep param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TSharedPtr<FDS_AirWalkStepInfo,1> *pTVar4;
  EDS_AirWalkStep *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_AirWalkStep *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_AirWalkStep *)0x0) {
            return (TSharedPtr<FDS_AirWalkStepInfo,1> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TSharedPtr<FDS_AirWalkStepInfo,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FDS_AirWalkStepInfo,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14b9eb2b0

TSharedPtr<FDS_MountStepInfo,1> * __thiscall
TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
::FindChecked(void *this,EDS_MountStep param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TSharedPtr<FDS_MountStepInfo,1> *pTVar4;
  EDS_MountStep *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_MountStep *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_MountStep *)0x0) {
            return (TSharedPtr<FDS_MountStepInfo,1> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<FDS_MountStepInfo,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FDS_MountStepInfo,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14b9eb350

TSharedPtr<FDS_MountStepInfo,1> * __thiscall
TMapBase<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MountStep,TSharedPtr<FDS_MountStepInfo,1>,0>_>
::FindChecked(void *this,EDS_MountStep param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TSharedPtr<FDS_MountStepInfo,1> *pTVar4;
  EDS_MountStep *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_MountStep *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_MountStep *)0x0) {
            return (TSharedPtr<FDS_MountStepInfo,1> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TSharedPtr<FDS_MountStepInfo,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FDS_MountStepInfo,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14b9eb3f0

FDS_NormalAttackInfo * __thiscall
TMapBase<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NormalAttackDistanceType,FDS_NormalAttackInfo,0>_>
::FindChecked(void *this,EDS_NormalAttackDistanceType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_NormalAttackInfo *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - Short & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_NormalAttackDistanceType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1
           ) {
          if (lVar5 != 0) {
            return (FDS_NormalAttackInfo *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_NormalAttackInfo *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_NormalAttackInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14b9eb490

TSharedPtr<FDS_ChatUserInfo,1> * __thiscall
TMapBase<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
::FindChecked(TMapBase<__int64,TSharedPtr<FDS_ChatUserInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TSharedPtr<FDS_ChatUserInfo,1>,0>_>
              *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<FDS_ChatUserInfo,1> *pTVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar5 == param_1) {
          if (plVar5 != (longlong *)0x0) {
            return (TSharedPtr<FDS_ChatUserInfo,1> *)(plVar5 + 1);
          }
          break;
        }
        iVar3 = (int)plVar5[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<FDS_ChatUserInfo,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FDS_ChatUserInfo,1> *)(*pcVar1)();
  return pTVar4;
}

// Remove @ 14ba0df20

int __thiscall
TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
::Remove(TMapBase<FString,TSharedPtr<FDS_ChatConversation,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>_>
         *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,TSharedPtr<FDS_ChatConversation,1>_>,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FDS_ChatConversation,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

// Remove @ 14ba0df90

int __thiscall
TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
::Remove(TMapBase<FString,TWeakPtr<FDS_ChatRoomData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>_>
         *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,TWeakPtr<FDS_ChatRoomData,1>_>,TDefaultMapHashableKeyFuncs<FString,TWeakPtr<FDS_ChatRoomData,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

// Remove @ 14ba0e000

int __thiscall
TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>::
Remove(TMapBase<FString,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,__int64,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,__int64>,TDefaultMapHashableKeyFuncs<FString,__int64,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

// FindOrAddImpl<int_const_&> @ 14ba2d080

TVector<double> * __thiscall
TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x28;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x28) == *param_2) {
          if (lVar3 != 0) goto LAB_14ba2d112;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x20);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x28;
LAB_14ba2d112:
  return (TVector<double> *)(lVar3 + 8);
}

// Find @ 14ba3f460

FDS_ChattingDataCache * __thiscall
TMapBase<enum_EDS_ChattingType,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ChattingType,FDS_ChattingDataCache,0>_>
::Find(void *this,EDS_ChattingType param_1)

{
  int iVar1;
  FDS_ChattingDataCache *pFVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)this + (longlong)iVar1 * 0x28;
        if (*(EDS_ChattingType *)(*(longlong *)this + (longlong)iVar1 * 0x28) == param_1) {
          pFVar2 = (FDS_ChattingDataCache *)0x0;
          if (lVar3 != 0) {
            pFVar2 = (FDS_ChattingDataCache *)(lVar3 + 8);
          }
          return pFVar2;
        }
        iVar1 = *(int *)(lVar3 + 0x20);
      } while (iVar1 != -1);
    }
  }
  return (FDS_ChattingDataCache *)0x0;
}

// Find @ 14ba3f4d0

FDS_ChattingDataCache * __thiscall
TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
::Find(TMapBase<__int64,FDS_ChattingDataCache,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_ChattingDataCache,0>_>
       *this,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FDS_ChattingDataCache *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x28;
        if (*(longlong *)(lVar2 + (longlong)iVar3 * 0x28) == param_1) {
          pFVar4 = (FDS_ChattingDataCache *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FDS_ChattingDataCache *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return (FDS_ChattingDataCache *)0x0;
}

// FindChecked @ 14ba3f550

TVector<double> * __thiscall
TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
::FindChecked(TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TVector<double> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x28) == param_1) {
          if (lVar1 != 0) {
            return (TVector<double> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TVector<double> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TVector<double> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14ba3f5f0

FDS_CheatItemInfo * __thiscall
TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
::FindChecked(TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_CheatItemInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_CheatItemInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x12];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_CheatItemInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_CheatItemInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba3f690

FDS_CheatItemInfo * __thiscall
TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
::FindChecked(TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_CheatItemInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_CheatItemInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x12];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_CheatItemInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_CheatItemInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba3f730

FDS_CheatSlotInfo * __thiscall
TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
::FindChecked(TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_CheatSlotInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x88 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_CheatSlotInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x20];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_CheatSlotInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_CheatSlotInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba3f7e0

FDS_CheatSlotInfo * __thiscall
TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
::FindChecked(TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_CheatSlotInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x88 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_CheatSlotInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x20];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_CheatSlotInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_CheatSlotInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba3f890

FDS_CheatSlotParam * __thiscall
TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
::FindChecked(TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_CheatSlotParam *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_CheatSlotParam *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x12];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_CheatSlotParam *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_CheatSlotParam *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba3f930

FDS_ContentsFunctionData * __thiscall
TMapBase<int,FDS_ContentsFunctionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ContentsFunctionData,0>_>
::FindChecked(TMapBase<int,FDS_ContentsFunctionData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ContentsFunctionData,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_ContentsFunctionData *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x40 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_ContentsFunctionData *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0xe];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_ContentsFunctionData *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_ContentsFunctionData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba3f9d0

TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> * __thiscall
TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
::FindChecked(TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
                   (piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
           &DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
           (*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba3fa70

TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> * __thiscall
TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
::FindChecked(TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
                   (piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
           &DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
           (*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba3fb10

FDS_CharStateInfo * __thiscall
TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
::FindChecked(TMapBase<FGameplayTag,FDS_CharStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_CharStateInfo,0>_>
              *this,FGameplayTag *param_1)

{
  FName FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FDS_CharStateInfo *pFVar7;
  ForElementType<FSetElementId> FVar8;
  longlong lVar9;
  
  FVar1 = param_1->TagName;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar8 +
                    (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar5) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar9 = lVar2 + (longlong)iVar6 * 0x28;
        if (*(FName *)(lVar2 + (longlong)iVar6 * 0x28) == param_1->TagName) {
          if (lVar9 != 0) goto LAB_14ba3fbb0;
          goto LAB_14ba3fb8a;
        }
        iVar6 = *(int *)(lVar9 + 0x20);
      } while (iVar6 != -1);
    }
  }
  lVar9 = 0;
LAB_14ba3fb8a:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FDS_CharStateInfo *)(*pcVar3)();
    return pFVar7;
  }
LAB_14ba3fbb0:
  return (FDS_CharStateInfo *)(lVar9 + 8);
}

// FindChecked @ 14ba3fbe0

FDS_LocomotionStateInfo * __thiscall
TMapBase<FGameplayTag,FDS_LocomotionStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>_>
::FindChecked(TMapBase<FGameplayTag,FDS_LocomotionStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,FDS_LocomotionStateInfo,0>_>
              *this,FGameplayTag *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDS_LocomotionStateInfo *pFVar5;
  ForElementType<FSetElementId> FVar6;
  FName *pFVar7;
  
  FVar1 = param_1->TagName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar4 = *(uint *)((longlong)FVar6 +
                     (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar4) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        pFVar7 = (FName *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar7 == param_1->TagName) {
          if (pFVar7 != (FName *)0x0) goto LAB_14ba3fc7f;
          goto LAB_14ba3fc59;
        }
        uVar4 = pFVar7[3].ComparisonIndex.Value;
      } while (uVar4 != 0xffffffff);
    }
  }
  pFVar7 = (FName *)0x0;
LAB_14ba3fc59:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDS_LocomotionStateInfo *)(*pcVar2)();
    return pFVar5;
  }
LAB_14ba3fc7f:
  return (FDS_LocomotionStateInfo *)(pFVar7 + 1);
}

// FindChecked @ 14ba3fca0

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              *this,FGameplayTag *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  ForElementType<FSetElementId> FVar6;
  FName *pFVar7;
  
  FVar1 = param_1->TagName;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar4 = *(uint *)((longlong)FVar6 +
                     (ulonglong)((this->Pairs).HashSize - 1U & FVar1.Number + uVar4) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        pFVar7 = (FName *)((longlong)(int)uVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar7 == param_1->TagName) {
          if (pFVar7 != (FName *)0x0) goto LAB_14ba3fd3f;
          goto LAB_14ba3fd19;
        }
        uVar4 = pFVar7[3].ComparisonIndex.Value;
      } while (uVar4 != 0xffffffff);
    }
  }
  pFVar7 = (FName *)0x0;
LAB_14ba3fd19:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
    return pTVar5;
  }
LAB_14ba3fd3f:
  return (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar7 + 1);
}

// FindChecked @ 14ba3fd60

TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> * __thiscall
TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
::FindChecked(TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TWeakObjectPtr<UDS_MailData,FWeakObjectPtr> *)(lVar8 + 0x10);
}

// FindChecked @ 14ba3fe00

TWeakPtr<FDS_AchievementCategorySymbol,1> * __thiscall
TMapBase<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AchievementCategory,TWeakPtr<FDS_AchievementCategorySymbol,1>,0>_>
::FindChecked(void *this,EDS_AchievementCategory param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TWeakPtr<FDS_AchievementCategorySymbol,1> *pTVar4;
  EDS_AchievementCategory *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_AchievementCategory *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_AchievementCategory *)0x0) {
            return (TWeakPtr<FDS_AchievementCategorySymbol,1> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TWeakPtr<FDS_AchievementCategorySymbol,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TWeakPtr<FDS_AchievementCategorySymbol,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba3fea0

TObjectPtr<UDS_DataSetBase> * __thiscall
TMapBase<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_DataType,TObjectPtr<UDS_DataSetBase>,0>_>
::FindChecked(void *this,EDS_DataType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UDS_DataSetBase> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - Player & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_DataType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TObjectPtr<UDS_DataSetBase> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TObjectPtr<UDS_DataSetBase> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TObjectPtr<UDS_DataSetBase> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba3ff40

TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
* __thiscall
TMapBase<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
::FindChecked(void *this,EDS_PlayerSkillType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *pTVar4;
  EDS_PlayerSkillType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_PlayerSkillType *)((longlong)(int)uVar3 * 0x60 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_PlayerSkillType *)0x0) {
            return (TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
                    *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x58);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba3ffe0

FDS_SpecialBuffInfo * __thiscall
TMapBase<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>_>
::FindChecked(void *this,EDS_SpecialBuffType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_SpecialBuffInfo *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x28;
        if (*(EDS_SpecialBuffType *)(*(longlong *)this + (longlong)iVar3 * 0x28) == param_1) {
          if (lVar5 != 0) {
            return (FDS_SpecialBuffInfo *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x20);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_SpecialBuffInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_SpecialBuffInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba40080

int * __thiscall
TMapBase<enum_EDS_StatusContentsInfo,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusContentsInfo,int,0>_>
::FindChecked(void *this,EDS_StatusContentsInfo param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_StatusContentsInfo EVar3;
  int *piVar4;
  EDS_StatusContentsInfo *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_StatusContentsInfo *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_StatusContentsInfo *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_StatusContentsInfo *)0x0) {
            return (int *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 14ba40120

FDS_RelatedStatusInfo * __thiscall
TMapBase<enum_EDS_StatusType,FDS_RelatedStatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_RelatedStatusInfo,0>_>
::FindChecked(void *this,EDS_StatusType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_StatusType EVar3;
  FDS_RelatedStatusInfo *pFVar4;
  EDS_StatusType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_StatusType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Hp & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_StatusType *)((longlong)(int)EVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_StatusType *)0x0) {
            return (FDS_RelatedStatusInfo *)(pEVar5 + 2);
          }
          break;
        }
        EVar3 = pEVar5[6];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_RelatedStatusInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_RelatedStatusInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba401c0

FDS_StatusInfo * __thiscall
TMapBase<enum_EDS_StatusType,FDS_StatusInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,FDS_StatusInfo,0>_>
::FindChecked(void *this,EDS_StatusType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_StatusType EVar3;
  FDS_StatusInfo *pFVar4;
  EDS_StatusType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_StatusType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Hp & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_StatusType *)((longlong)(int)EVar3 * 0x100 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_StatusType *)0x0) {
            return (FDS_StatusInfo *)(pEVar5 + 2);
          }
          break;
        }
        EVar3 = pEVar5[0x3e];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_StatusInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_StatusInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba40260

float * __thiscall
TMapBase<enum_EDS_SwimStep,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,float,0>_>
::FindChecked(void *this,EDS_SwimStep param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  float *pfVar4;
  EDS_SwimStep *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_SwimStep *)((longlong)(int)uVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_SwimStep *)0x0) {
            return (float *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (float *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pfVar4 = (float *)(*pcVar1)();
  return pfVar4;
}

// FindChecked @ 14ba40300

TSharedPtr<FDS_SwimStepInfo,1> * __thiscall
TMapBase<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,0>_>
::FindChecked(void *this,EDS_SwimStep param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TSharedPtr<FDS_SwimStepInfo,1> *pTVar4;
  EDS_SwimStep *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_SwimStep *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_SwimStep *)0x0) {
            return (TSharedPtr<FDS_SwimStepInfo,1> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<FDS_SwimStepInfo,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FDS_SwimStepInfo,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba403a0

TSharedPtr<FDS_SwimStepInfo,1> * __thiscall
TMapBase<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep,TSharedPtr<FDS_SwimStepInfo,1>,0>_>
::FindChecked(void *this,EDS_SwimStep param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TSharedPtr<FDS_SwimStepInfo,1> *pTVar4;
  EDS_SwimStep *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_SwimStep *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_SwimStep *)0x0) {
            return (TSharedPtr<FDS_SwimStepInfo,1> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TSharedPtr<FDS_SwimStepInfo,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FDS_SwimStepInfo,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba40440

FDS_TimeInfo * __thiscall
TMapBase<enum_EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>_>
::FindChecked(void *this,EDS_TimeType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_TimeInfo *pFVar4;
  EDS_TimeType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_TimeType *)((longlong)(int)uVar3 * 0x30 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_TimeType *)0x0) {
            return (FDS_TimeInfo *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x28);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_TimeInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_TimeInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba404e0

FDS_TimeInfo * __thiscall
TMapBase<enum_EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>_>
::FindChecked(void *this,EDS_TimeType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_TimeInfo *pFVar4;
  EDS_TimeType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_TimeType *)((longlong)(int)uVar3 * 0x30 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_TimeType *)0x0) {
            return (FDS_TimeInfo *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x28);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_TimeInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_TimeInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba40580

FDS_TeamGroupInfo * __thiscall
TMapBase<enum_TeamType::ItemCase,FDS_TeamGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,FDS_TeamGroupInfo,0>_>
::FindChecked(void *this,ItemCase param_1)

{
  code *pcVar1;
  bool bVar2;
  ItemCase IVar3;
  FDS_TeamGroupInfo *pFVar4;
  ItemCase *pIVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    IVar3 = *(ItemCase *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - kNeutral & param_1) * 4);
    if (IVar3 != ~ITEM_NOT_SET) {
      do {
        pIVar5 = (ItemCase *)((longlong)(int)IVar3 * 0x68 + *(longlong *)this);
        if (*pIVar5 == param_1) {
          if (pIVar5 != (ItemCase *)0x0) {
            return (FDS_TeamGroupInfo *)(pIVar5 + 2);
          }
          break;
        }
        IVar3 = pIVar5[0x18];
      } while (IVar3 != ~ITEM_NOT_SET);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_TeamGroupInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_TeamGroupInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba40620

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,ItemCase param_1)

{
  code *pcVar1;
  bool bVar2;
  ItemCase IVar3;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar4;
  ItemCase *pIVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    IVar3 = *(ItemCase *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - kNeutral & param_1) * 4);
    if (IVar3 != ~ITEM_NOT_SET) {
      do {
        pIVar5 = (ItemCase *)((longlong)(int)IVar3 * 0x20 + *(longlong *)this);
        if (*pIVar5 == param_1) {
          if (pIVar5 != (ItemCase *)0x0) {
            return (TArray<__int64,TSizedDefaultAllocator<32>_> *)(pIVar5 + 2);
          }
          break;
        }
        IVar3 = pIVar5[6];
      } while (IVar3 != ~ITEM_NOT_SET);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<__int64,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba406c0

TArray<__int64,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_TeamType::ItemCase,TArray<__int64,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,ItemCase param_1)

{
  code *pcVar1;
  bool bVar2;
  ItemCase IVar3;
  TArray<__int64,TSizedDefaultAllocator<32>_> *pTVar4;
  ItemCase *pIVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    IVar3 = *(ItemCase *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - kNeutral & param_1) * 4);
    if (IVar3 != ~ITEM_NOT_SET) {
      do {
        pIVar5 = (ItemCase *)((longlong)(int)IVar3 * 0x20 + *(longlong *)this);
        if (*pIVar5 == param_1) {
          if (pIVar5 != (ItemCase *)0x0) {
            return (TArray<__int64,TSizedDefaultAllocator<32>_> *)(pIVar5 + 2);
          }
          break;
        }
        IVar3 = pIVar5[6];
      } while (IVar3 != ~ITEM_NOT_SET);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TArray<__int64,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<__int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba40760

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
              *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar5 == param_1) {
          if (plVar5 != (longlong *)0x0) {
            return (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(plVar5 + 1);
          }
          break;
        }
        iVar3 = (int)plVar5[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba40810

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
              *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar5 == param_1) {
          if (plVar5 != (longlong *)0x0) {
            return (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(plVar5 + 1);
          }
          break;
        }
        iVar3 = (int)plVar5[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14ba408c0

ulong64 * __thiscall
TMapBase<__int64,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>_>
::FindChecked(TMapBase<__int64,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>_>
              *this,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ulong64 *puVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (ulong64 *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (ulong64 *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  puVar6 = (ulong64 *)(*pcVar3)();
  return puVar6;
}

// FindChecked @ 14ba40970

FDS_BreachDetailInfo * __thiscall
TMapBase<unsigned___int64,FDS_BreachDetailInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>_>
::FindChecked(TMapBase<unsigned___int64,FDS_BreachDetailInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_BreachDetailInfo,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_BreachDetailInfo *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x58 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FDS_BreachDetailInfo *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_BreachDetailInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_BreachDetailInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14ba40a20

FDS_PlayerSkillTargetInfo * __thiscall
TMapBase<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
::FindChecked(TMapBase<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_PlayerSkillTargetInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x48;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x48) == param_1) {
          if (lVar1 != 0) {
            return (FDS_PlayerSkillTargetInfo *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x40);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FDS_PlayerSkillTargetInfo *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FDS_PlayerSkillTargetInfo *)(*pcVar3)();
  return pFVar6;
}

// Remove @ 14ba65680

int __thiscall
TMapBase<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>_>
::Remove(TMapBase<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>_>
         *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

// Remove @ 14ba656f0

int __thiscall
TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
::Remove(TMapBase<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>_>
         *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = (param_1->Data).ArrayNum;
    if (iVar2 == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar3 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar4);
    iVar2 = TSet<TTuple<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>_>,TDefaultMapHashableKeyFuncs<FString,TWeakObjectPtr<UDS_MailData,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FString>(&this->Pairs,uVar1,param_1);
    return iVar2;
  }
  return 0;
}

// FindOrAddImpl<int_const_&> @ 14ba8a0c0

FDS_CooltimeData * __thiscall
TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_14ba8a152;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,UDS_ItemDataSet::FDS_CooltimeData>,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_14ba8a152:
  return (FDS_CooltimeData *)(lVar3 + 4);
}

// FindOrAddImpl<enum_EDS_InventoryType_const_&> @ 14ba8a170

int * __thiscall
TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
::FindOrAddImpl<enum_EDS_InventoryType_const_&>(void *this,uint param_1,EDS_InventoryType *param_2)

{
  undefined4 uVar1;
  EDS_InventoryType *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EDS_InventoryType *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EDS_InventoryType *)((longlong)(int)uVar1 * 0x10 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EDS_InventoryType *)0x0) {
            return (int *)(pEVar2 + 4);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 8);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EDS_InventoryType,int>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_InventoryType_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EDS_InventoryType_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (int *)(*(longlong *)this + (longlong)local_res8[0] * 0x10 + 4);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14ba8a220

void __thiscall
TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
           *this,TArray<FDS_NPCGimmickInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar13 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_1->ArrayMax;
  iVar11 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar13,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar13 = 1;
  iVar14 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar15;
    while (uVar4 == 0) {
      lVar10 = (longlong)iVar11;
      iVar14 = iVar14 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ba8a302;
      uVar4 = puVar15[lVar10 + 1];
    }
    uVar13 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar13 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar14;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_14ba8a302:
  TStack_40._padding_ = CONCAT44(uVar13,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar14;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar12 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 4 +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar5 <= pFVar12) && (pFVar12 < pFVar5 + (longlong)*piVar1 * 0x14)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar11 + 1;
      uVar8 = *(undefined8 *)(pFVar12 + 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      pFVar5 = pFVar6 + (longlong)iVar11 * 0x14;
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar12;
      *(undefined8 *)(pFVar5 + 8) = uVar8;
      *(undefined4 *)(pFVar6 + (longlong)iVar11 * 0x14 + 0x10) = *(undefined4 *)(pFVar12 + 0x10);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindChecked @ 14baa0150

TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> * __thiscall
TMapBase<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
::FindChecked(TMapBase<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14baa01f0

FDS_CampSeatInfo * __thiscall
TMapBase<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
::FindChecked(TMapBase<int,FDS_CampSeatInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CampSeatInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_CampSeatInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_CampSeatInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0xc];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_CampSeatInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_CampSeatInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14baa0290

FDS_CooltimeData * __thiscall
TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
::FindChecked(TMapBase<int,UDS_ItemDataSet::FDS_CooltimeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDS_ItemDataSet::FDS_CooltimeData,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_CooltimeData *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (FDS_CooltimeData *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FDS_CooltimeData *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FDS_CooltimeData *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14baa0330

FDS_NPCGimmickInfo * __thiscall
TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
::FindChecked(TMapBase<int,FDS_NPCGimmickInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCGimmickInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_NPCGimmickInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_NPCGimmickInfo *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_NPCGimmickInfo *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_NPCGimmickInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14baa03d0

FDS_NPCShopGoodsInfo * __thiscall
TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
::FindChecked(TMapBase<int,FDS_NPCShopGoodsInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_NPCShopGoodsInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_NPCShopGoodsInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x60 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_NPCShopGoodsInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x16];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_NPCShopGoodsInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_NPCShopGoodsInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14baa0470

FDS_ShopBuyLimitTable * __thiscall
TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
::FindChecked(TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_ShopBuyLimitTable *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_ShopBuyLimitTable *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_ShopBuyLimitTable *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_ShopBuyLimitTable *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14baa0510

TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14baa05b0

EDS_ContentsFunctionType * __thiscall
TMapBase<int,enum_EDS_ContentsFunctionType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_EDS_ContentsFunctionType,0>_>
::FindChecked(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EDS_ContentsFunctionType *pEVar4;
  int *piVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)this);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (EDS_ContentsFunctionType *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (EDS_ContentsFunctionType *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EDS_ContentsFunctionType *)(*pcVar1)();
  return pEVar4;
}

// FindChecked @ 14baa0650

TObjectPtr<ADS_BuildingActor> * __thiscall
TMapBase<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,0>_>
::FindChecked(TMapBase<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,0>_>
              *this,TIntVector3<int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<ADS_BuildingActor> *pTVar5;
  longlong lVar6;
  
  uVar3 = FCrc::MemCrc_DEPRECATED(param_1,0xc,0);
  iVar4 = TSet<TTuple<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>_>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector3<int>,TObjectPtr<ADS_BuildingActor>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<UE::Math::TIntVector3<int>_>(&this->Pairs,uVar3,param_1);
  if ((iVar4 != -1) &&
     (lVar6 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar6 != 0)) {
    return (TObjectPtr<ADS_BuildingActor> *)(lVar6 + 0x10);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TObjectPtr<ADS_BuildingActor> *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar5 = (TObjectPtr<ADS_BuildingActor> *)(*pcVar1)();
  return pTVar5;
}

// FindChecked @ 14baa06e0

bool * __thiscall
TMapBase<enum_ECCS_AIInputType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_ECCS_AIInputType,bool,0>_>
::FindChecked(void *this,ECCS_AIInputType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  bool *pbVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0xc;
        if (*(ECCS_AIInputType *)(*(longlong *)this + (longlong)iVar3 * 0xc) == param_1) {
          if (lVar5 != 0) {
            return (bool *)(lVar5 + 1);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 4);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (bool *)&DAT_00000001;
  }
  pcVar1 = (code *)swi(3);
  pbVar4 = (bool *)(*pcVar1)();
  return pbVar4;
}

// FindChecked @ 14baa0780

TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> * __thiscall
TMapBase<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr>,0>_>
::FindChecked(void *this,EDS_CommonPopupContext param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x14;
        if (*(EDS_CommonPopupContext *)(*(longlong *)this + (longlong)iVar3 * 0x14) == param_1) {
          if (lVar5 != 0) {
            return (TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TWeakObjectPtr<UDS_ModelBase,FWeakObjectPtr> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14baa0820

long64 * __thiscall
TMapBase<enum_EDS_EquipSlotType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType,__int64,0>_>
::FindChecked(void *this,EDS_EquipSlotType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 *plVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_EquipSlotType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (long64 *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (long64 *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  plVar4 = (long64 *)(*pcVar1)();
  return plVar4;
}

// FindChecked @ 14baa08c0

int * __thiscall
TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
::FindChecked(void *this,EDS_InventoryType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  EDS_InventoryType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_InventoryType *)((longlong)(int)uVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_InventoryType *)0x0) {
            return (int *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 14baa0960

int * __thiscall
TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
::FindChecked(void *this,EDS_InventoryType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  EDS_InventoryType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_InventoryType *)((longlong)(int)uVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_InventoryType *)0x0) {
            return (int *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 14baa0a00

bool * __thiscall
TMapBase<enum_EDS_InventoryType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,bool,0>_>
::FindChecked(void *this,EDS_InventoryType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  bool *pbVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0xc;
        if (*(EDS_InventoryType *)(*(longlong *)this + (longlong)iVar3 * 0xc) == param_1) {
          if (lVar5 != 0) {
            return (bool *)(lVar5 + 1);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 4);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (bool *)&DAT_00000001;
  }
  pcVar1 = (code *)swi(3);
  pbVar4 = (bool *)(*pcVar1)();
  return pbVar4;
}

// FindChecked @ 14baa0aa0

TWeakPtr<FDS_ItemTypeSymbolData,1> * __thiscall
TMapBase<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,TWeakPtr<FDS_ItemTypeSymbolData,1>,0>_>
::FindChecked(void *this,EDS_ItemType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ItemType EVar3;
  TWeakPtr<FDS_ItemTypeSymbolData,1> *pTVar4;
  EDS_ItemType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_ItemType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_ItemType *)((longlong)(int)EVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ItemType *)0x0) {
            return (TWeakPtr<FDS_ItemTypeSymbolData,1> *)(pEVar5 + 2);
          }
          break;
        }
        EVar3 = pEVar5[6];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TWeakPtr<FDS_ItemTypeSymbolData,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TWeakPtr<FDS_ItemTypeSymbolData,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14baa0b40

long64 * __thiscall
TMapBase<enum_EDS_StatusType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,__int64,0>_>
::FindChecked(void *this,EDS_StatusType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 *plVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - Hp & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_StatusType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (long64 *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (long64 *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  plVar4 = (long64 *)(*pcVar1)();
  return plVar4;
}

// FindChecked @ 14baa0be0

int * __thiscall
TMapBase<enum_EDS_StuffState,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StuffState,int,0>_>
::FindChecked(void *this,EDS_StuffState param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  EDS_StuffState *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_StuffState *)((longlong)(int)uVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_StuffState *)0x0) {
            return (int *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 14baa0c80

FDS_OpenContentTotalMenuEvent * __thiscall
TMapBase<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TotalMenuId,FDS_OpenContentTotalMenuEvent,0>_>
::FindChecked(void *this,EDS_TotalMenuId param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_TotalMenuId EVar3;
  FDS_OpenContentTotalMenuEvent *pFVar4;
  EDS_TotalMenuId *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_TotalMenuId *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_TotalMenuId *)((longlong)(int)EVar3 * 0x30 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_TotalMenuId *)0x0) {
            return (FDS_OpenContentTotalMenuEvent *)(pEVar5 + 2);
          }
          break;
        }
        EVar3 = pEVar5[10];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_OpenContentTotalMenuEvent *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_OpenContentTotalMenuEvent *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14baa0d20

TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WaitCompleteType,TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,EDS_WaitCompleteType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar4;
  EDS_WaitCompleteType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_WaitCompleteType *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_WaitCompleteType *)0x0) {
            return (TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
                    *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<TWeakObjectPtr<UDS_WaitCompleteData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14baa0dc0

TObjectPtr<UDS_GuildMemberData> * __thiscall
TMapBase<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
::FindChecked(TMapBase<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
              *this,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_GuildMemberData> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_GuildMemberData> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_GuildMemberData> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_GuildMemberData> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14baa0e70

TObjectPtr<UDS_DataSetContainer> * __thiscall
TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
::FindChecked(TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_DataSetContainer> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_DataSetContainer> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_DataSetContainer> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_DataSetContainer> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14baa0f20

TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> * __thiscall
TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
::FindChecked(TMapBase<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr>,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TWeakObjectPtr<UDS_NPCBubbleTalkAbilityData,FWeakObjectPtr> *)(*pcVar3)();
  return pTVar6;
}

// Remove @ 14bac7000

int __thiscall
TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
::Remove(TMapBase<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>_>
         *this,ulong64 param_1)

{
  longlong lVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar3 +
                    ((longlong)((int)(param_1 >> 0x20) * 0x17 + (int)param_1) &
                    (longlong)(this->Pairs).HashSize - 1U) * 4);
    iVar4 = 0;
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      while (*(ulong64 *)(lVar1 + (longlong)iVar2 * 0x18) != param_1) {
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
        if (iVar2 == -1) {
          return 0;
        }
      }
      TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataSetContainer>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataSetContainer>,0>,FDefaultSetAllocator>
      ::RemoveByIndex(&this->Pairs,iVar2);
      iVar4 = 1;
    }
  }
  return iVar4;
}

// Emplace<int_const_&,FDS_ProjectileSkillAttackInfo_&> @ 14bae2530

FDS_ProjectileSkillAttackInfo * __thiscall
TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
::Emplace<int_const_&,FDS_ProjectileSkillAttackInfo_&>
          (TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
           *this,int *param_1,FDS_ProjectileSkillAttackInfo *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  void *_Dst;
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x90);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x90) = 0xffffffff;
    }
  }
  TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,FDS_ProjectileSkillAttackInfo>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    FDS_ProjectileSkillAttackInfo::FDS_ProjectileSkillAttackInfo
              ((FDS_ProjectileSkillAttackInfo *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x88) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar2 = *(uint *)local_28.Pointer;
  if ((iVar6 - iVar4 != 1) && (iVar6 != iVar4)) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & uVar2) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar6 * 0x90) == uVar2) {
          if (iVar6 != -1) {
            _Dst = (void *)((longlong)iVar6 * 0x90 + lVar3);
            if (*(void **)((longlong)_Dst + 0x70) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x70));
            }
            if (*(void **)((longlong)_Dst + 0x60) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x60));
            }
            memmove(_Dst,local_28.Pointer,0x88);
            TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            local_28.Index = iVar6;
          }
          if (iVar6 != -1) goto LAB_14bae26d4;
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x88 + (longlong)iVar6 * 0x90);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar2,local_28.Pointer,local_28.Index);
LAB_14bae26d4:
  return (FDS_ProjectileSkillAttackInfo *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_28.Index * 0x90);
}

// Emplace<int_const_&,FDS_ProjectileSkillAttackInfo_const_&> @ 14bae2710

FDS_ProjectileSkillAttackInfo * __thiscall
TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
::Emplace<int_const_&,FDS_ProjectileSkillAttackInfo_const_&>
          (TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
           *this,int *param_1,FDS_ProjectileSkillAttackInfo *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  int iVar6;
  void *_Dst;
  FSparseArrayAllocationInfo local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x90,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar3 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)(lVar3 + 4 + (longlong)iVar4 * 0x90);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar1 * 0x90) = 0xffffffff;
    }
  }
  TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar4);
  if (local_28.Pointer != (TSparseSetElement<TTuple<int,FDS_ProjectileSkillAttackInfo>_> *)0x0) {
    *(int *)local_28.Pointer = *param_1;
    FDS_ProjectileSkillAttackInfo::FDS_ProjectileSkillAttackInfo
              ((FDS_ProjectileSkillAttackInfo *)((longlong)local_28.Pointer + 8),param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x88) = 0xffffffff;
  }
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x8;
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x34;
  uVar2 = *(uint *)local_28.Pointer;
  if ((iVar6 - iVar4 != 1) && (iVar6 != iVar4)) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar6 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & uVar2) * 4);
    if (iVar6 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        if (*(uint *)(lVar3 + (longlong)iVar6 * 0x90) == uVar2) {
          if (iVar6 != -1) {
            _Dst = (void *)((longlong)iVar6 * 0x90 + lVar3);
            if (*(void **)((longlong)_Dst + 0x70) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x70));
            }
            if (*(void **)((longlong)_Dst + 0x60) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)_Dst + 0x60));
            }
            memmove(_Dst,local_28.Pointer,0x88);
            TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<144,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_28.Index,1);
            local_28.Index = iVar6;
          }
          if (iVar6 != -1) goto LAB_14bae28b4;
          break;
        }
        iVar6 = *(int *)(lVar3 + 0x88 + (longlong)iVar6 * 0x90);
      } while (iVar6 != -1);
    }
  }
  TSet<TTuple<int,FDS_ProjectileSkillAttackInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>,FDefaultSetAllocator>
  ::RehashOrLink(&this->Pairs,uVar2,local_28.Pointer,local_28.Index);
LAB_14bae28b4:
  return (FDS_ProjectileSkillAttackInfo *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_28.Index * 0x90);
}

// FindOrAddImpl<int_const_&> @ 14bae6e40

FDS_ScriptBlockingWallInfo * __thiscall
TMapBase<int,FDS_ScriptBlockingWallInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,FDS_ScriptBlockingWallInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x14;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x14) == *param_2) {
          if (lVar3 != 0) goto LAB_14bae6ed2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0xc);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,FDS_ScriptBlockingWallInfo>,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x14;
LAB_14bae6ed2:
  return (FDS_ScriptBlockingWallInfo *)(lVar3 + 4);
}

// FindOrAddImpl<enum_server_msg::ServerMessages::ServerMessageCase_const_&> @ 14bae6ef0

TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<enum_server_msg::ServerMessages::ServerMessageCase_const_&>
          (void *this,uint param_1,ServerMessageCase *param_2)

{
  ServerMessageCase SVar1;
  ServerMessageCase *pSVar2;
  longlong lVar3;
  int local_res8 [6];
  ServerMessageCase *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    SVar1 = *(ServerMessageCase *)
             (lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (SVar1 != ~SERVERMESSAGE_NOT_SET) {
      do {
        pSVar2 = (ServerMessageCase *)((longlong)(int)SVar1 * 0x20 + *(longlong *)this);
        if (*pSVar2 == *param_2) {
          if (pSVar2 != (ServerMessageCase *)0x0) {
            return (TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_> *)(pSVar2 + 2);
          }
          break;
        }
        SVar1 = pSVar2[6];
      } while (SVar1 != ~SERVERMESSAGE_NOT_SET);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<enum_server_msg::ServerMessages::ServerMessageCase,TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_server_msg::ServerMessages::ServerMessageCase_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<server_msg::ServerMessages::ServerMessageCase_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TArray<FDS_RecieveInfoCond,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)this + (longlong)local_res8[0] * 0x20 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14bae6fa0

void __thiscall
TMapBase<enum_EDS_NotificationType,FDS_NotificationData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_NotificationType,FDS_NotificationData,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (void *this,TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FDS_NotificationData *pFVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  FDS_NotificationData *pFVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<FDS_NotificationData,int>
            ((FDS_NotificationData *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)((longlong)this + 0x28);
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = TStack_40.Array;
    }
    uVar4 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar4 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14bae7080;
      uVar4 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar8 * 4 + 4);
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
LAB_14bae7080:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar5 = (FDS_NotificationData *)(param_1->AllocatorInstance).Data;
      pFVar11 = (FDS_NotificationData *)
                (*(longlong *)this + 8 + (longlong)TStack_40.CurrentBitIndex * 0x68);
      if (((pFVar5 <= pFVar11) && (pFVar11 < pFVar5 + *piVar1)) &&
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
                           (0x858,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      FDS_NotificationData::FDS_NotificationData
                ((FDS_NotificationData *)
                 ((param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x58),pFVar11);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14bb08370

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
::Find(void *this,EDS_QuestType param_1)

{
  undefined4 uVar1;
  EDS_QuestType *pEVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar4 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar4 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar4 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EDS_QuestType *)((longlong)(int)uVar1 * 0x20 + *(longlong *)this);
        if (*pEVar2 == param_1) {
          pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          if (pEVar2 != (EDS_QuestType *)0x0) {
            pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pEVar2 + 8);
          }
          return pTVar3;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x18);
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
}

// FindChecked @ 14bb08580

FWN_PhasingVolumeInfo ** __thiscall
TMapBase<int,FWN_PhasingVolumeInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>_>
::FindChecked(TMapBase<int,FWN_PhasingVolumeInfo_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FWN_PhasingVolumeInfo_*,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FWN_PhasingVolumeInfo **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FWN_PhasingVolumeInfo **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FWN_PhasingVolumeInfo **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FWN_PhasingVolumeInfo **)(*pcVar3)();
  return ppFVar6;
}

// FindChecked @ 14bb08620

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TObjectPtr<UNiagaraSystem> * __thiscall
TMapBase<int,TObjectPtr<UNiagaraSystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>_>
::FindChecked(TMapBase<int,TObjectPtr<UNiagaraSystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UNiagaraSystem>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UNiagaraSystem> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UNiagaraSystem> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UNiagaraSystem> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UNiagaraSystem> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bb086c0

TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> * __thiscall
TMapBase<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>_>
::FindChecked(TMapBase<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TWeakObjectPtr<AWN_PhasingVolume,FWeakObjectPtr> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bb08760

FDS_ProjectileSkillAttackInfo * __thiscall
TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
::FindChecked(TMapBase<int,FDS_ProjectileSkillAttackInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ProjectileSkillAttackInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_ProjectileSkillAttackInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_ProjectileSkillAttackInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x22];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_ProjectileSkillAttackInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_ProjectileSkillAttackInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb08810

FDS_QuestPhasingInfo * __thiscall
TMapBase<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
::FindChecked(TMapBase<int,FDS_QuestPhasingInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_QuestPhasingInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_QuestPhasingInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_QuestPhasingInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x18];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_QuestPhasingInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_QuestPhasingInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb088b0

FDS_ScriptBlockingWallInfo * __thiscall
TMapBase<int,FDS_ScriptBlockingWallInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>_>
::FindChecked(TMapBase<int,FDS_ScriptBlockingWallInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ScriptBlockingWallInfo,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_ScriptBlockingWallInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (FDS_ScriptBlockingWallInfo *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FDS_ScriptBlockingWallInfo *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FDS_ScriptBlockingWallInfo *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14bb08950

FDS_EffectList * __thiscall
TMapBase<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>_>
::FindChecked(TMapBase<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>_>
              *this,TWeakObjectPtr<AActor_const_,FWeakObjectPtr> param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_EffectList *pFVar4;
  longlong lVar5;
  FWeakObjectPtr local_res8;
  
  local_res8 = param_1.WeakPtr;
  iVar3 = TSet<TTuple<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,FDS_EffectList,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<AActor_const_,FWeakObjectPtr>_>
                    (&this->Pairs,param_1.WeakPtr.ObjectIndex ^ param_1.WeakPtr.ObjectSerialNumber,
                     (TWeakObjectPtr<AActor_const_,FWeakObjectPtr> *)&local_res8);
  if ((iVar3 != -1) &&
     (lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar5 != 0)) {
    return (FDS_EffectList *)(lVar5 + 8);
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_EffectList *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_EffectList *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb089e0

TObjectPtr<ADS_QuestCoordinate> * __thiscall
TMapBase<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
::FindChecked(TMapBase<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FDS_QuestCoordinate_Key,TObjectPtr<ADS_QuestCoordinate>,0>_>
              *this,FDS_QuestCoordinate_Key *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  TObjectPtr<ADS_QuestCoordinate> *pTVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  uVar2 = param_1->QuestObjectiveID;
  uVar10 = param_1->QuestID - uVar2 ^ uVar2 >> 0xd;
  uVar7 = (-0x61c88647 - uVar10) - uVar2 ^ uVar10 << 8;
  uVar9 = (uVar2 - uVar10) - uVar7 ^ uVar7 >> 0xd;
  uVar10 = (uVar10 - uVar9) - uVar7 ^ uVar9 >> 0xc;
  uVar7 = (uVar7 - uVar10) - uVar9 ^ uVar10 << 0x10;
  uVar9 = (uVar9 - uVar7) - uVar10 ^ uVar7 >> 5;
  uVar10 = (uVar10 - uVar9) - uVar7 ^ uVar9 >> 3;
  uVar7 = (uVar7 - uVar10) - uVar9 ^ uVar10 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar8 = (this->Pairs).Hash.SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar11 = *(int *)((longlong)FVar8 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U & ((uVar9 - uVar7) - uVar10 ^ uVar7 >> 0xf)) * 4);
    if (iVar11 != -1) {
      lVar3 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar3 + (longlong)iVar11 * 0x18;
        if (((*(int *)(lVar3 + (longlong)iVar11 * 0x18) == param_1->QuestID) &&
            (*(int *)(lVar1 + 4) != 0)) && (uVar2 != 0)) {
          if ((iVar11 != -1) && (lVar1 != 0)) {
            return (TObjectPtr<ADS_QuestCoordinate> *)(lVar1 + 8);
          }
          break;
        }
        iVar11 = *(int *)(lVar1 + 0x10);
      } while (iVar11 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar5) {
    return (TObjectPtr<ADS_QuestCoordinate> *)&DAT_00000008;
  }
  pcVar4 = (code *)swi(3);
  pTVar6 = (TObjectPtr<ADS_QuestCoordinate> *)(*pcVar4)();
  return pTVar6;
}

// FindChecked @ 14bb08b20

TObjectPtr<UCurveFloat> * __thiscall
TMapBase<FString,TObjectPtr<UCurveFloat>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>_>
::FindChecked(TMapBase<FString,TObjectPtr<UCurveFloat>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TObjectPtr<UCurveFloat> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,TObjectPtr<UCurveFloat>_>,TDefaultMapHashableKeyFuncs<FString,TObjectPtr<UCurveFloat>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x20 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TObjectPtr<UCurveFloat> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TObjectPtr<UCurveFloat> *)(lVar8 + 0x10);
}

// FindChecked @ 14bb08bc0

TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_AbilityTagType,TArray<enum_EDS_MountStep,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,EDS_AbilityTagType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *pTVar4;
  EDS_AbilityTagType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_AbilityTagType *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_AbilityTagType *)0x0) {
            return (TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<EDS_MountStep,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bb08c60

bool * __thiscall
TMapBase<enum_EDS_ContentsTabFrameType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,bool,0>_>
::FindChecked(void *this,EDS_ContentsTabFrameType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ContentsTabFrameType EVar3;
  bool *pbVar4;
  EDS_ContentsTabFrameType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_ContentsTabFrameType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_ContentsTabFrameType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ContentsTabFrameType *)0x0) {
            return (bool *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (bool *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pbVar4 = (bool *)(*pcVar1)();
  return pbVar4;
}

// FindChecked @ 14bb08d00

bool * __thiscall
TMapBase<enum_EDS_ContentsTabFrameType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ContentsTabFrameType,bool,0>_>
::FindChecked(void *this,EDS_ContentsTabFrameType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ContentsTabFrameType EVar3;
  bool *pbVar4;
  EDS_ContentsTabFrameType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_ContentsTabFrameType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_ContentsTabFrameType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ContentsTabFrameType *)0x0) {
            return (bool *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (bool *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pbVar4 = (bool *)(*pcVar1)();
  return pbVar4;
}

// FindChecked @ 14bb08da0

TArray<unsigned___int64,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityType,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,EDS_EntityType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar4;
  EDS_EntityType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_EntityType *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_EntityType *)0x0) {
            return (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bb08e40

TObjectPtr<UDS_GameOptionData> * __thiscall
TMapBase<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GameOptionType,TObjectPtr<UDS_GameOptionData>,0>_>
::FindChecked(void *this,EDS_GameOptionType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UDS_GameOptionData> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_GameOptionType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TObjectPtr<UDS_GameOptionData> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TObjectPtr<UDS_GameOptionData> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TObjectPtr<UDS_GameOptionData> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bb08ee0

FDS_ItemDetailInfoData * __thiscall
TMapBase<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemDetailInfoType,FDS_ItemDetailInfoData,0>_>
::FindChecked(void *this,EDS_ItemDetailInfoType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_ItemDetailInfoData *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x24;
        if (*(EDS_ItemDetailInfoType *)(*(longlong *)this + (longlong)iVar3 * 0x24) == param_1) {
          if (lVar5 != 0) {
            return (FDS_ItemDetailInfoData *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x1c);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_ItemDetailInfoData *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_ItemDetailInfoData *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb08f80

EDS_ContentsTabFrameType * __thiscall
TMapBase<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemType,enum_EDS_ContentsTabFrameType,0>_>
::FindChecked(void *this,EDS_ItemType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ItemType EVar3;
  EDS_ContentsTabFrameType *pEVar4;
  EDS_ItemType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_ItemType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) + ~None & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_ItemType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ItemType *)0x0) {
            return pEVar5 + 1;
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (EDS_ContentsTabFrameType *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EDS_ContentsTabFrameType *)(*pcVar1)();
  return pEVar4;
}

// FindChecked @ 14bb09020

int * __thiscall
TMapBase<enum_EDS_QuestConditionType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestConditionType,int,0>_>
::FindChecked(void *this,EDS_QuestConditionType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_QuestConditionType EVar3;
  int *piVar4;
  EDS_QuestConditionType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_QuestConditionType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - AbleComplete & param_1) * 4);
    if (EVar3 != ~Objective) {
      do {
        pEVar5 = (EDS_QuestConditionType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_QuestConditionType *)0x0) {
            return (int *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~Objective);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 14bb090c0

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
TMapBase<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_QuestType,TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>,0>_>
::FindChecked(void *this,EDS_QuestType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar4;
  EDS_QuestType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_QuestType *)((longlong)(int)uVar3 * 0x60 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_QuestType *)0x0) {
            return (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   (pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x58);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
           &DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)(*pcVar1)()
  ;
  return pTVar4;
}

// FindChecked @ 14bb09160

RaidPartyInfo * __thiscall
TMapBase<__int64,ds_proto::RaidPartyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>_>
::FindChecked(TMapBase<__int64,ds_proto::RaidPartyInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,ds_proto::RaidPartyInfo,0>_>
              *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  RaidPartyInfo *pRVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x68 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar5 == param_1) {
          if (plVar5 != (longlong *)0x0) {
            return (RaidPartyInfo *)(plVar5 + 1);
          }
          break;
        }
        iVar3 = (int)plVar5[0xc];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (RaidPartyInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pRVar4 = (RaidPartyInfo *)(*pcVar1)();
  return pRVar4;
}

// FindChecked @ 14bb09210

TWeakObjectPtr<AActor,FWeakObjectPtr> * __thiscall
TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
::FindChecked(TMapBase<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TWeakObjectPtr<AActor,FWeakObjectPtr>,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TWeakObjectPtr<AActor,FWeakObjectPtr> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TWeakObjectPtr<AActor,FWeakObjectPtr> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bb092c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

FDS_ProjectileSkillInfo * __thiscall
TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
::FindChecked(TMapBase<unsigned___int64,FDS_ProjectileSkillInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_ProjectileSkillInfo,0>_>
              *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_ProjectileSkillInfo *pFVar4;
  ulong64 *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      do {
        puVar5 = (ulong64 *)((longlong)iVar3 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*puVar5 == param_1) {
          if (puVar5 != (ulong64 *)0x0) {
            return (FDS_ProjectileSkillInfo *)(puVar5 + 1);
          }
          break;
        }
        iVar3 = (int)puVar5[0x11];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_ProjectileSkillInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_ProjectileSkillInfo *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<int_const_&> @ 14bb487a0

TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[6];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TArray<FDS_WorldBossStateInfo,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x20 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14bb48850

void __thiscall
TMapBase<enum_EDS_CoolDownType,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,FTimerHandle,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (void *this,TArray<FTimerHandle,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar11 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
  }
  piVar1 = &param_1->ArrayMax;
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)((longlong)this + 0x28);
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = TStack_40.Array;
    }
    uVar5 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14bb48923;
      uVar5 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14bb48923:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)((longlong)this + 0x28)) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)this + ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 14bb61ca0

double * __thiscall
TMapBase<enum_EDS_CoolDownType,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CoolDownType,double,0>_>
::Find(void *this,EDS_CoolDownType param_1)

{
  int iVar1;
  double *pdVar2;
  longlong lVar3;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - ItemPotionHp & param_1) *
                             4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(EDS_CoolDownType *)(*(longlong *)this + (longlong)iVar1 * 0x18) == param_1) {
          pdVar2 = (double *)0x0;
          if (lVar3 != 0) {
            pdVar2 = (double *)(lVar3 + 8);
          }
          return pdVar2;
        }
        iVar1 = *(int *)(lVar3 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return (double *)0x0;
}

// FindChecked @ 14bb61d10

UDataTable ** __thiscall
TMapBase<int,UDataTable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDataTable_*,0>_>::
FindChecked(TMapBase<int,UDataTable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UDataTable_*,0>_>
            *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UDataTable **ppUVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (UDataTable **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (UDataTable **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppUVar6 = (UDataTable **)(*pcVar3)();
  return ppUVar6;
}

// FindChecked @ 14bb61db0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

TObjectPtr<UDS_ViewerCharacterInfo> * __thiscall
TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
::FindChecked(TMapBase<int,TObjectPtr<UDS_ViewerCharacterInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_ViewerCharacterInfo>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_ViewerCharacterInfo> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_ViewerCharacterInfo> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_ViewerCharacterInfo> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_ViewerCharacterInfo> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bb61e50

TObjectPtr<UDS_WindowGroupInfo> * __thiscall
TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
::FindChecked(TMapBase<int,TObjectPtr<UDS_WindowGroupInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowGroupInfo>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_WindowGroupInfo> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_WindowGroupInfo> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_WindowGroupInfo> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_WindowGroupInfo> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bb61ef0

TObjectPtr<UDS_WindowInfo> * __thiscall
TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
::FindChecked(TMapBase<int,TObjectPtr<UDS_WindowInfo>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_WindowInfo>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_WindowInfo> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_WindowInfo> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_WindowInfo> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_WindowInfo> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bb61f90

TTransform<double> * __thiscall
TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
::FindChecked(TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTransform<double> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TTransform<double> *)(piVar5 + 4);
          }
          break;
        }
        iVar3 = piVar5[0x1c];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TTransform<double> *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TTransform<double> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bb62030

TTransform<double> * __thiscall
TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
::FindChecked(TMapBase<int,UE::Math::TTransform<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TTransform<double>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTransform<double> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x80 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TTransform<double> *)(piVar5 + 4);
          }
          break;
        }
        iVar3 = piVar5[0x1c];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TTransform<double> *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TTransform<double> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bb620d0

FDS_ShopBuyLimitTable * __thiscall
TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
::FindChecked(TMapBase<int,FDS_ShopBuyLimitTable,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ShopBuyLimitTable,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_ShopBuyLimitTable *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_ShopBuyLimitTable *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_ShopBuyLimitTable *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_ShopBuyLimitTable *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb62170

FDS_ViewerSetting_CamInfo * __thiscall
TMapBase<int,FDS_ViewerSetting_CamInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ViewerSetting_CamInfo,0>_>
::FindChecked(TMapBase<int,FDS_ViewerSetting_CamInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_ViewerSetting_CamInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_ViewerSetting_CamInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x90 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_ViewerSetting_CamInfo *)(piVar5 + 4);
          }
          break;
        }
        iVar3 = piVar5[0x20];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_ViewerSetting_CamInfo *)&DAT_00000010;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_ViewerSetting_CamInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb62220

FDS_WorldBossInfo * __thiscall
TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
::FindChecked(TMapBase<int,FDS_WorldBossInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_WorldBossInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_WorldBossInfo *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_WorldBossInfo *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_WorldBossInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb622c0

FDS_WorldBossStateInfo * __thiscall
TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
::FindChecked(TMapBase<int,FDS_WorldBossStateInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldBossStateInfo,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FDS_WorldBossStateInfo *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x28;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x28) == param_1) {
          if (lVar1 != 0) {
            return (FDS_WorldBossStateInfo *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x20);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FDS_WorldBossStateInfo *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pFVar6 = (FDS_WorldBossStateInfo *)(*pcVar3)();
  return pFVar6;
}

// FindChecked @ 14bb62360

FSoftObjectPath * __thiscall
TMapBase<int,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FSoftObjectPath,0>_>
::FindChecked(TMapBase<int,FSoftObjectPath,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FSoftObjectPath,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FSoftObjectPath *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FSoftObjectPath *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FSoftObjectPath *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FSoftObjectPath *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb62400

TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FDS_NpcSpawnTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bb624a0

TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FDS_WarpDeviceIconData,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bb62540

FDateTime * __thiscall
TMapBase<TTuple<__int64,enum_EDS_MessageType>,FDateTime,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<__int64,enum_EDS_MessageType>,FDateTime,0>_>
::FindChecked(void *this,TTuple<__int64,EDS_MessageType> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FDateTime *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  lVar1 = *(longlong *)param_1;
  uVar7 = (int)((ulonglong)lVar1 >> 0x20) * 0x17 + (int)lVar1;
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U &
                             ((byte)param_1->field_0x8 + 0x9e3779b9 + uVar7 * 0x40 + (uVar7 >> 2) ^
                             uVar7)) * 4);
    if (iVar8 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar8 * 0x20 + *(longlong *)this);
        if ((*plVar6 == lVar1) && (*(byte *)(plVar6 + 1) == param_1->field_0x8)) {
          if ((iVar8 != -1) && (plVar6 != (longlong *)0x0)) {
            return (FDateTime *)(plVar6 + 2);
          }
          break;
        }
        iVar8 = (int)plVar6[3];
      } while (iVar8 != -1);
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar3) {
    return (FDateTime *)&DAT_00000010;
  }
  pcVar2 = (code *)swi(3);
  pFVar4 = (FDateTime *)(*pcVar2)();
  return pFVar4;
}

// FindChecked @ 14bb62620

long64 * __thiscall
TMapBase<enum_EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>_>
::FindChecked(void *this,EDS_MessageArgsType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 *plVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - DisconnectReason & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_MessageArgsType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (long64 *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (long64 *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  plVar4 = (long64 *)(*pcVar1)();
  return plVar4;
}

// FindChecked @ 14bb626c0

FDS_UIMessageInfo * __thiscall
TMapBase<enum_EDS_MessageType,FDS_UIMessageInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageType,FDS_UIMessageInfo,0>_>
::FindChecked(void *this,EDS_MessageType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_UIMessageInfo *pFVar4;
  EDS_MessageType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_MessageType *)((longlong)(int)uVar3 * 0xe0 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_MessageType *)0x0) {
            return (FDS_UIMessageInfo *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0xd8);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_UIMessageInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_UIMessageInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb62770

TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageType,TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,EDS_MessageType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  EDS_MessageType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_MessageType *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_MessageType *)0x0) {
            return (TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FDS_UIMessageInfo,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bb62810

UDataTable ** __thiscall
TMapBase<enum_EDS_TableType,UDataTable_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TableType,UDataTable_*,0>_>
::FindChecked(void *this,EDS_TableType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UDataTable **ppUVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - AccelWaitComplete & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_TableType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (UDataTable **)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (UDataTable **)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  ppUVar4 = (UDataTable **)(*pcVar1)();
  return ppUVar4;
}

// FindChecked @ 14bb628b0

FDS_WindowLayerGroupInfo * __thiscall
TMapBase<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WindowLayerGroupType,FDS_WindowLayerGroupInfo,0>_>
::FindChecked(void *this,EDS_WindowLayerGroupType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_WindowLayerGroupInfo *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x28;
        if (*(EDS_WindowLayerGroupType *)(*(longlong *)this + (longlong)iVar3 * 0x28) == param_1) {
          if (lVar5 != 0) {
            return (FDS_WindowLayerGroupInfo *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x20);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_WindowLayerGroupInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_WindowLayerGroupInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb62950

FDS_WorldBossNotiMessageInfo * __thiscall
TMapBase<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossNotifyType,FDS_WorldBossNotiMessageInfo,0>_>
::FindChecked(void *this,EDS_WorldBossNotifyType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_WorldBossNotiMessageInfo *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_WorldBossNotifyType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (FDS_WorldBossNotiMessageInfo *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_WorldBossNotiMessageInfo *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_WorldBossNotiMessageInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bb629f0

TObjectPtr<UDS_TimeCoolDown> * __thiscall
TMapBase<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,0>_>
::FindChecked(TMapBase<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_TimeCoolDown>,0>_>
              *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_TimeCoolDown> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(ulong64 *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_TimeCoolDown> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_TimeCoolDown> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_TimeCoolDown> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bb62aa0

EDS_QuestActorState * __thiscall
TMapBase<unsigned___int64,enum_EDS_QuestActorState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,enum_EDS_QuestActorState,0>_>
::FindChecked(void *this,ulong64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EDS_QuestActorState *pEVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U &
                             (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(ulong64 *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (EDS_QuestActorState *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (EDS_QuestActorState *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EDS_QuestActorState *)(*pcVar1)();
  return pEVar4;
}

// Emplace<wchar_t_const_(&)[2],int_&> @ 14bb9de20

FStringFormatArg * __thiscall
TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
::Emplace<wchar_t_const_(&)[2],int_&>
          (TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
           *this,wchar_t (*param_1) [2],int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString(local_28.Pointer,*param_1);
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)((longlong)local_28.Pointer + 0x10),*param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
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
  bVar2 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FStringFormatArg *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 0x10);
}

// Emplace<wchar_t_const_(&)[2],double_&> @ 14bb9df70

FStringFormatArg * __thiscall
TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
::Emplace<wchar_t_const_(&)[2],double_&>
          (TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
           *this,wchar_t (*param_1) [2],double *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString(local_28.Pointer,*param_1);
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)((longlong)local_28.Pointer + 0x10),*param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
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
  bVar2 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FStringFormatArg *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 0x10);
}

// Emplace<wchar_t_const_(&)[2],wchar_t_const_*_&> @ 14bb9e0c0

FStringFormatArg * __thiscall
TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
::Emplace<wchar_t_const_(&)[2],wchar_t_const_*_&>
          (TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
           *this,wchar_t (*param_1) [2],wchar_t **param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar7);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar7) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString(local_28.Pointer,*param_1);
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)((longlong)local_28.Pointer + 0x10),*param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
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
  bVar2 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FStringFormatArg *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x38 + 0x10);
}

// Emplace<wchar_t_const_(&)[2],FString_&> @ 14bb9e210

FStringFormatArg * __thiscall
TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
::Emplace<wchar_t_const_(&)[2],FString_&>
          (TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
           *this,wchar_t (*param_1) [2],FString *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  FString local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  pTVar9 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    ::FString::FString(local_38.Pointer,*param_1);
    pFVar5 = ::FString::FString(&local_28,param_2);
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)((longlong)local_38.Pointer + 0x10),pFVar5);
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
    pTVar9 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  iVar6 = *(int *)&pTVar9->field_0x8 + -1;
  if (*(int *)&pTVar9->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar9;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar2 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar9,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar9,local_res8[0]);
  }
  return (FStringFormatArg *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x38 + 0x10);
}

// FindOrAddImpl<enum_EDS_SoundType_const_&> @ 14bb9f780

FDS_SoundVolumeInfo * __thiscall
TMapBase<enum_EDS_SoundType,FDS_SoundVolumeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SoundType,FDS_SoundVolumeInfo,0>_>
::FindOrAddImpl<enum_EDS_SoundType_const_&>(void *this,uint param_1,EDS_SoundType *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  EDS_SoundType *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x14;
        if (*(EDS_SoundType *)(*(longlong *)this + (longlong)iVar1 * 0x14) == *param_2) {
          if (lVar2 != 0) goto LAB_14bb9f812;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EDS_SoundType,FDS_SoundVolumeInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_SoundType,FDS_SoundVolumeInfo,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_SoundType_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EDS_SoundType_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x14;
LAB_14bb9f812:
  return (FDS_SoundVolumeInfo *)(lVar2 + 4);
}

// FindChecked @ 14bbba400

bool * __thiscall
TMapBase<enum_EDS_CharDetailState,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CharDetailState,bool,0>_>
::FindChecked(void *this,EDS_CharDetailState param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_CharDetailState EVar3;
  bool *pbVar4;
  EDS_CharDetailState *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_CharDetailState *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Swim & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_CharDetailState *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_CharDetailState *)0x0) {
            return (bool *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (bool *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pbVar4 = (bool *)(*pcVar1)();
  return pbVar4;
}

// FindChecked @ 14bbba4a0

TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> * __thiscall
TMapBase<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SyncRecvType,TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr>,0>_>
::FindChecked(void *this,EDS_SyncRecvType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - RecvMoveBaseProcess & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x14;
        if (*(EDS_SyncRecvType *)(*(longlong *)this + (longlong)iVar3 * 0x14) == param_1) {
          if (lVar5 != 0) {
            return (TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TWeakObjectPtr<UDS_RecvProcessBase,FWeakObjectPtr> *)(*pcVar1)();
  return pTVar4;
}

// Emplace<FString,int_&> @ 14bbe8c70

FStringFormatArg * __thiscall
TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
::Emplace<FString,int_&>
          (TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
           *this,FString *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar7;
  longlong lVar8;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar5 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar5 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar5 = iVar5 + -1;
    lVar8 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar8);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar8) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar3);
  pTVar7 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  if (local_28.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    *(undefined8 *)local_28.Pointer = 0;
    *(FScriptContainerElement **)local_28.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_28.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_28.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)((longlong)local_28.Pointer + 0x10),*param_2);
    *(undefined4 *)((longlong)local_28.Pointer + 0x30) = 0xffffffff;
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
  bVar2 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar7,local_res8,(bool *)0x0);
  lVar8 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar7,local_res8[0]);
  }
  return (FStringFormatArg *)(*(longlong *)&(this->Pairs).Elements + lVar8 * 0x38 + 0x10);
}

// Emplace<FString,FString_const_&> @ 14bbe8de0

FStringFormatArg * __thiscall
TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
::Emplace<FString,FString_const_&>
          (TMapBase<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
           *this,FString *param_1,FString *param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FString *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  TSparseSetElement<TTuple<FString,FStringFormatArg>_> *pTVar8;
  longlong lVar9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  FString local_28;
  
  iVar6 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar6 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar6 = iVar6 + -1;
    lVar9 = *(longlong *)&(this->Pairs).Elements;
    iVar1 = *(int *)((longlong)iVar3 * 0x38 + 4 + lVar9);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar1;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x38 + lVar9) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar3);
  pTVar8 = (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0;
  if (local_38.Pointer != (TSparseSetElement<TTuple<FString,FStringFormatArg>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = 0;
    *(FScriptContainerElement **)local_38.Pointer = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)local_38.Pointer + 8) = (param_1->Data).ArrayNum;
    *(int *)((longlong)local_38.Pointer + 0xc) = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    pFVar5 = ::FString::FString(&local_28,param_2);
    FStringFormatArg::FStringFormatArg
              ((FStringFormatArg *)((longlong)local_38.Pointer + 0x10),pFVar5);
    *(undefined4 *)((longlong)local_38.Pointer + 0x30) = 0xffffffff;
    pTVar8 = local_38.Pointer;
  }
  local_res8[0] = local_38.Index;
  iVar6 = *(int *)&pTVar8->field_0x8 + -1;
  if (*(int *)&pTVar8->field_0x8 == 0) {
    pwVar7 = L"";
    iVar6 = 0;
  }
  else {
    pwVar7 = *(wchar_t **)pTVar8;
  }
  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  bVar2 = TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar4,pTVar8,local_res8,(bool *)0x0);
  lVar9 = (longlong)local_res8[0];
  if (!bVar2) {
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar4,pTVar8,local_res8[0]);
  }
  return (FStringFormatArg *)(*(longlong *)&(this->Pairs).Elements + lVar9 * 0x38 + 0x10);
}

// FindOrAddImpl<FName_const_&> @ 14bbe93f0

FTimerHandle * __thiscall
TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
::FindOrAddImpl<FName_const_&>
          (TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
           *this,uint param_1,FName *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  FName *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(FName *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14bbe9482;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<FName,FTimerHandle>,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FName_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14bbe9482:
  return (FTimerHandle *)(lVar3 + 8);
}

// FindOrAddImpl<enum_EDS_InventoryType_const_&> @ 14bbe94a0

DS_ItemInventoryMoveQuantityData * __thiscall
TMapBase<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
::FindOrAddImpl<enum_EDS_InventoryType_const_&>(void *this,uint param_1,EDS_InventoryType *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [6];
  EDS_InventoryType *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x14;
        if (*(EDS_InventoryType *)(*(longlong *)this + (longlong)iVar1 * 0x14) == *param_2) {
          if (lVar2 != 0) goto LAB_14bbe9532;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData>,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_InventoryType_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EDS_InventoryType_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x14;
LAB_14bbe9532:
  return (DS_ItemInventoryMoveQuantityData *)(lVar2 + 4);
}

// Find @ 14bbf7870

FTimerHandle * __thiscall
TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
::Find(TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FTimerHandle *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pFVar5 = (FTimerHandle *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FTimerHandle *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FTimerHandle *)0x0;
}

// FindChecked @ 14bbf7910

DS_ItemInventoryMoveQuantityData * __thiscall
TMapBase<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,DS_ItemInventoryMoveQuantityData,0>_>
::FindChecked(void *this,EDS_InventoryType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  DS_ItemInventoryMoveQuantityData *pDVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x14;
        if (*(EDS_InventoryType *)(*(longlong *)this + (longlong)iVar3 * 0x14) == param_1) {
          if (lVar5 != 0) {
            return (DS_ItemInventoryMoveQuantityData *)(lVar5 + 4);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (DS_ItemInventoryMoveQuantityData *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pDVar4 = (DS_ItemInventoryMoveQuantityData *)(*pcVar1)();
  return pDVar4;
}

// Remove @ 14bc0d750

int __thiscall
TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
::Remove(TMapBase<FName,FTimerHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>_>
         *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,FTimerHandle>,TDefaultMapHashableKeyFuncs<FName,FTimerHandle,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>(&this->Pairs,local_res10.Number + uVar1,&local_res8);
    return iVar2;
  }
  return 0;
}

// FindChecked @ 14bc3da00

TObjectPtr<UDS_CameraStateBase> * __thiscall
TMapBase<int,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>_>
::FindChecked(TMapBase<int,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_CameraStateBase>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_CameraStateBase> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_CameraStateBase> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_CameraStateBase> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_CameraStateBase> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bc3daa0

TObjectPtr<UDS_CameraStateBase> * __thiscall
TMapBase<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CameraStateType,TObjectPtr<UDS_CameraStateBase>,0>_>
::FindChecked(void *this,EDS_CameraStateType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UDS_CameraStateBase> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_CameraStateType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TObjectPtr<UDS_CameraStateBase> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TObjectPtr<UDS_CameraStateBase> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TObjectPtr<UDS_CameraStateBase> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bc3db40

FDS_EntityMaterialInfo * __thiscall
TMapBase<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,FDS_EntityMaterialInfo,0>_>
::FindChecked(void *this,EDS_EntityMaterialType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_EntityMaterialType EVar3;
  FDS_EntityMaterialInfo *pFVar4;
  EDS_EntityMaterialType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_EntityMaterialType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Default & param_1) * 4);
    if (EVar3 != ~Abnormal_Lapidification) {
      do {
        pEVar5 = (EDS_EntityMaterialType *)((longlong)(int)EVar3 * 0x50 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_EntityMaterialType *)0x0) {
            return (FDS_EntityMaterialInfo *)(pEVar5 + 2);
          }
          break;
        }
        EVar3 = pEVar5[0x12];
      } while (EVar3 != ~Abnormal_Lapidification);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_EntityMaterialInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_EntityMaterialInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bc3dbe0

bool * __thiscall
TMapBase<enum_EDS_EntityMaterialType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EntityMaterialType,bool,0>_>
::FindChecked(void *this,EDS_EntityMaterialType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_EntityMaterialType EVar3;
  bool *pbVar4;
  EDS_EntityMaterialType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_EntityMaterialType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Default & param_1) * 4);
    if (EVar3 != ~Abnormal_Lapidification) {
      do {
        pEVar5 = (EDS_EntityMaterialType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_EntityMaterialType *)0x0) {
            return (bool *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~Abnormal_Lapidification);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (bool *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pbVar4 = (bool *)(*pcVar1)();
  return pbVar4;
}

// FindChecked @ 14bc3dc80

float * __thiscall
TMapBase<enum_EDS_GlobalAnimRateScaleType,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GlobalAnimRateScaleType,float,0>_>
::FindChecked(void *this,EDS_GlobalAnimRateScaleType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_GlobalAnimRateScaleType EVar3;
  float *pfVar4;
  EDS_GlobalAnimRateScaleType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_GlobalAnimRateScaleType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - ImpactEffect & param_1) * 4);
    if (EVar3 != ~Abnormal_Lapidification) {
      do {
        pEVar5 = (EDS_GlobalAnimRateScaleType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_GlobalAnimRateScaleType *)0x0) {
            return (float *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~Abnormal_Lapidification);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (float *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pfVar4 = (float *)(*pcVar1)();
  return pfVar4;
}

// FindChecked @ 14bc3dd20

bool * __thiscall
TMapBase<enum_EDS_InteractionType,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionType,bool,0>_>
::FindChecked(void *this,EDS_InteractionType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_InteractionType EVar3;
  bool *pbVar4;
  EDS_InteractionType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_InteractionType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Icon & param_1) * 4);
    if (EVar3 != ~Prepare) {
      do {
        pEVar5 = (EDS_InteractionType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_InteractionType *)0x0) {
            return (bool *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~Prepare);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (bool *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pbVar4 = (bool *)(*pcVar1)();
  return pbVar4;
}

// FindChecked @ 14bc3ddc0

TObjectPtr<UDS_TriggerComponent> * __thiscall
TMapBase<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>_>
::FindChecked(void *this,EDS_TriggerType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UDS_TriggerComponent> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_TriggerType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TObjectPtr<UDS_TriggerComponent> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TObjectPtr<UDS_TriggerComponent> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TObjectPtr<UDS_TriggerComponent> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bc9e180

TWeakObjectPtr<USphereComponent,FWeakObjectPtr> * __thiscall
TMapBase<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>_>
::FindChecked(TMapBase<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TWeakObjectPtr<USphereComponent,FWeakObjectPtr>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x14;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x14) == param_1) {
          if (lVar1 != 0) {
            return (TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)(lVar1 + 4);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)&DAT_00000004;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TWeakObjectPtr<USphereComponent,FWeakObjectPtr> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bc9e220

TVector2<double> * __thiscall
TMapBase<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
::FindChecked(TMapBase<FString,UE::Math::TVector2<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TVector2<double> *pTVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,UE::Math::TVector2<double>_>,TDefaultMapHashableKeyFuncs<FString,UE::Math::TVector2<double>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar4 * 0x28, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector2<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return (TVector2<double> *)(lVar8 + 0x10);
}

// FindOrAddImpl<int_const_&> @ 14bcd9350

TObjectPtr<UObject> * __thiscall
TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
           *this,uint param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar2 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar3 = lVar1 + (longlong)iVar2 * 0x18;
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x18) == *param_2) {
          if (lVar3 != 0) goto LAB_14bcd93e2;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x10);
      } while (iVar2 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x18;
LAB_14bcd93e2:
  return (TObjectPtr<UObject> *)(lVar3 + 8);
}

// GenerateKeyArray<TSizedDefaultAllocator<32>_> @ 14bcd9570

void __thiscall
TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
::GenerateKeyArray<TSizedDefaultAllocator<32>_>
          (TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
           *this,TArray<__int64,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
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
  iVar10 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar11,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar11 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar13;
    while (uVar5 == 0) {
      lVar9 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14bcd9643;
      uVar5 = puVar13[lVar9 + 1];
    }
    uVar11 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar9 + -1 + iVar12;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14bcd9643:
  TStack_40._padding_ = CONCAT44(uVar11,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements + (longlong)TStack_40.CurrentBitIndex * 0x18);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) =
           *(undefined8 *)pFVar2;
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 14bcd97c0

void __thiscall
TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
           *this,TArray<TObjectPtr<UDS_M_ItemGem_GemSocket>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  UObject *pUVar7;
  code *pcVar8;
  bool bVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar12 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar11 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar4 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar12 = 1;
  iVar13 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)TStack_40.Array;
    }
    uVar5 = *puVar14;
    while (uVar5 == 0) {
      lVar10 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      TStack_40.CurrentBitIndex = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14bcd9893;
      uVar5 = puVar14[lVar10 + 1];
    }
    uVar12 = -uVar5 & uVar5;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar10 + -1 + iVar13;
    if (iVar4 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar4;
    }
  }
LAB_14bcd9893:
  TStack_40._padding_ = CONCAT44(uVar12,iVar11);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar13;
  if (TStack_40.CurrentBitIndex < *(int *)&(this->Pairs).Elements.field_0x28) {
    do {
      pFVar2 = (FScriptContainerElement *)
               (*(longlong *)&(this->Pairs).Elements +
               ((longlong)TStack_40.CurrentBitIndex * 3 + 1) * 8);
      pFVar6 = (param_1->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = param_1->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_1->AllocatorInstance,piVar1);
      }
      pFVar6 = (param_1->AllocatorInstance).Data;
      param_1->ArrayNum = iVar11 + 1;
      pUVar7 = *(UObject **)pFVar2;
      *(UObject **)(pFVar6 + (longlong)iVar11 * 8) = pUVar7;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar7);
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// FindChecked @ 14bcf2610

FDS_MaterialSlotInfo * __thiscall
TMapBase<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
::FindChecked(TMapBase<int,FDS_MaterialSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_MaterialSlotInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_MaterialSlotInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x1c + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_MaterialSlotInfo *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[5];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_MaterialSlotInfo *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_MaterialSlotInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bcf26b0

FDS_RequiredMaterialInfo * __thiscall
TMapBase<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
::FindChecked(TMapBase<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_RequiredMaterialInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_RequiredMaterialInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_RequiredMaterialInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_RequiredMaterialInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bcf2750

FDS_RequiredMaterialInfo * __thiscall
TMapBase<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
::FindChecked(TMapBase<int,FDS_RequiredMaterialInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_RequiredMaterialInfo,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_RequiredMaterialInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_RequiredMaterialInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[10];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_RequiredMaterialInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_RequiredMaterialInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bcf27f0

EDS_ItemFilterState * __thiscall
TMapBase<int,enum_EDS_ItemFilterState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_EDS_ItemFilterState,0>_>
::FindChecked(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EDS_ItemFilterState *pEVar4;
  int *piVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)this);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (EDS_ItemFilterState *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (EDS_ItemFilterState *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EDS_ItemFilterState *)(*pcVar1)();
  return pEVar4;
}

// FindChecked @ 14bcf2890

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<FName,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
              *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  FName *pFVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar3 = *(uint *)((longlong)FVar5 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pFVar6 = (FName *)((longlong)(int)uVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar6 == param_1) {
          if (pFVar6 != (FName *)0x0) {
            return (TArray<FString,TSizedDefaultAllocator<32>_> *)(pFVar6 + 1);
          }
          break;
        }
        uVar3 = pFVar6[3].ComparisonIndex.Value;
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FString,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bcf2950

FDS_ButtonImageDatas * __thiscall
TMapBase<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonImageDatas,0>_>
::FindChecked(void *this,EDS_ButtonStateType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_ButtonStateType EVar3;
  FDS_ButtonImageDatas *pFVar4;
  EDS_ButtonStateType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_ButtonStateType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Normal & param_1) * 4);
    if (EVar3 != ~Void) {
      do {
        pEVar5 = (EDS_ButtonStateType *)((longlong)(int)EVar3 * 0x50 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ButtonStateType *)0x0) {
            return (FDS_ButtonImageDatas *)(pEVar5 + 2);
          }
          break;
        }
        EVar3 = pEVar5[0x12];
      } while (EVar3 != ~Void);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_ButtonImageDatas *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_ButtonImageDatas *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bcf29f0

FDS_ButtonTextDatas * __thiscall
TMapBase<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ButtonStateType,FDS_ButtonTextDatas,0>_>
::FindChecked(void *this,EDS_ButtonStateType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_ButtonTextDatas *pFVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)(*(int *)((longlong)this + 0x48) - Normal & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_ButtonStateType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (FDS_ButtonTextDatas *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_ButtonTextDatas *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_ButtonTextDatas *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bcf2a90

FLinearColor * __thiscall
TMapBase<enum_EDS_ChatFontColorType,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ChatFontColorType,FLinearColor,0>_>
::FindChecked(void *this,EDS_ChatFontColorType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FLinearColor *pFVar4;
  EDS_ChatFontColorType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_ChatFontColorType *)((longlong)(int)uVar3 * 0x1c + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ChatFontColorType *)0x0) {
            return (FLinearColor *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x14);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FLinearColor *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FLinearColor *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bcf2b30

FLinearColor * __thiscall
TMapBase<enum_EDS_ChatSystemFontColorType,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ChatSystemFontColorType,FLinearColor,0>_>
::FindChecked(void *this,EDS_ChatSystemFontColorType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FLinearColor *pFVar4;
  EDS_ChatSystemFontColorType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_ChatSystemFontColorType *)((longlong)(int)uVar3 * 0x1c + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_ChatSystemFontColorType *)0x0) {
            return (FLinearColor *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x14);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FLinearColor *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FLinearColor *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bcf2bd0

TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
* __thiscall
TMapBase<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>,0>_>
::FindChecked(void *this,EDS_CommonPopupContext param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x28;
        if (*(EDS_CommonPopupContext *)(*(longlong *)this + (longlong)iVar3 * 0x28) == param_1) {
          if (lVar5 != 0) {
            return (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                    *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x20);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
            *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bcf2c70

TSharedPtr<FDS_ViewModelContext,1> * __thiscall
TMapBase<enum_EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_CommonPopupContext,TSharedPtr<FDS_ViewModelContext,1>,0>_>
::FindChecked(void *this,EDS_CommonPopupContext param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TSharedPtr<FDS_ViewModelContext,1> *pTVar4;
  EDS_CommonPopupContext *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_CommonPopupContext *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_CommonPopupContext *)0x0) {
            return (TSharedPtr<FDS_ViewModelContext,1> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<FDS_ViewModelContext,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FDS_ViewModelContext,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bcf2d10

UEnum ** __thiscall
TMapBase<enum_EDS_FilterState,UEnum_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,UEnum_*,0>_>
::FindChecked(void *this,EDS_FilterState param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UEnum **ppUVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_FilterState *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (UEnum **)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (UEnum **)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  ppUVar4 = (UEnum **)(*pcVar1)();
  return ppUVar4;
}

// FindChecked @ 14bcf2db0

TObjectPtr<UDS_M_FilterSlot> * __thiscall
TMapBase<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_FilterState,TObjectPtr<UDS_M_FilterSlot>,0>_>
::FindChecked(void *this,EDS_FilterState param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UDS_M_FilterSlot> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_FilterState *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TObjectPtr<UDS_M_FilterSlot> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TObjectPtr<UDS_M_FilterSlot> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TObjectPtr<UDS_M_FilterSlot> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bcf2e50

TObjectPtr<UDS_ObjectPool> * __thiscall
TMapBase<enum_EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TObjectPtr<UDS_ObjectPool>,0>_>
::FindChecked(void *this,EDS_ItemSlotStateType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UDS_ObjectPool> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_ItemSlotStateType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TObjectPtr<UDS_ObjectPool> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TObjectPtr<UDS_ObjectPool> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TObjectPtr<UDS_ObjectPool> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bcf2ef0

TObjectPtr<UDS_M_CommonAsset> * __thiscall
TMapBase<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyExchangeIndex,TObjectPtr<UDS_M_CommonAsset>,0>_>
::FindChecked(void *this,EDS_MoneyExchangeIndex param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UDS_M_CommonAsset> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_MoneyExchangeIndex *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TObjectPtr<UDS_M_CommonAsset> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TObjectPtr<UDS_M_CommonAsset> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TObjectPtr<UDS_M_CommonAsset> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bcf2f90

TObjectPtr<UDS_QuantityData> * __thiscall
TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
::FindChecked(TMapBase<__int64,TObjectPtr<UDS_QuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_QuantityData>,0>_>
              *this,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_QuantityData> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_QuantityData> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_QuantityData> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_QuantityData> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bcf3040

FDS_MaterialSlotInfoArray * __thiscall
TMapBase<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
::FindChecked(TMapBase<__int64,FDS_MaterialSlotInfoArray,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,FDS_MaterialSlotInfoArray,0>_>
              *this,long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_MaterialSlotInfoArray *pFVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar3 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar5 == param_1) {
          if (plVar5 != (longlong *)0x0) {
            return (FDS_MaterialSlotInfoArray *)(plVar5 + 1);
          }
          break;
        }
        iVar3 = (int)plVar5[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_MaterialSlotInfoArray *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_MaterialSlotInfoArray *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> @ 14bd39a50

TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x50;
      if (bVar2) {
        if (lVar3 != 0) {
          return (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)
                 (lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x48);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8.ObjectIndex * 0x50);
}

// FindOrAddImpl<__int64_const_&> @ 14bd39b40

TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<__int64_const_&>
          (TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,long64 *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  long64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_> @ 14bd39bf0

TSubclassOf<UDS_M_ItemImplBase> * __thiscall
TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
::FindOrAddImpl<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>
          (void *this,uint param_1,EDS_ItemSlotStateType *param_2,
          TSubclassOf<UDS_M_ItemImplBase> *param_3)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  EDS_ItemSlotStateType *local_18;
  TSubclassOf<UDS_M_ItemImplBase> *local_10;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar2 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar2 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar2 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar2 = *(longlong *)this + (longlong)iVar1 * 0x18;
        if (*(EDS_ItemSlotStateType *)(*(longlong *)this + (longlong)iVar1 * 0x18) == *param_2) {
          if (lVar2 != 0) goto LAB_14bd39c97;
          break;
        }
        iVar1 = *(int *)(lVar2 + 0x10);
      } while (iVar1 != -1);
    }
  }
  local_18 = param_2;
  local_10 = param_3;
  TSet<TTuple<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>,FDefaultSetAllocator>
  ::
  EmplaceByHash<TPairInitializer<enum_EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&>_>
            (this,(uint)local_res8,
             (TPairInitializer<EDS_ItemSlotStateType_&&,TSubclassOf<UDS_M_ItemImplBase>_&&> *)
             (ulonglong)param_1,(bool *)&local_18);
  lVar2 = *(longlong *)this + (longlong)local_res8[0] * 0x18;
LAB_14bd39c97:
  return (TSubclassOf<UDS_M_ItemImplBase> *)(lVar2 + 8);
}

// FindChecked @ 14bd59f10

TObjectPtr<UObject> * __thiscall
TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
::FindChecked(TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UObject> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UObject> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UObject> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UObject> *)(*pcVar3)();
  return pTVar6;
}

// FindChecked @ 14bd59fb0

TSharedPtr<FSlateBrush,1> * __thiscall
TMapBase<int,TSharedPtr<FSlateBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FSlateBrush,1>,0>_>
::FindChecked(TMapBase<int,TSharedPtr<FSlateBrush,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TSharedPtr<FSlateBrush,1>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<FSlateBrush,1> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TSharedPtr<FSlateBrush,1> *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<FSlateBrush,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FSlateBrush,1> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bd5a050

TSubclassOf<UDS_M_ItemImplBase> * __thiscall
TMapBase<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemSlotStateType,TSubclassOf<UDS_M_ItemImplBase>,0>_>
::FindChecked(void *this,EDS_ItemSlotStateType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSubclassOf<UDS_M_ItemImplBase> *pTVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_ItemSlotStateType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (TSubclassOf<UDS_M_ItemImplBase> *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSubclassOf<UDS_M_ItemImplBase> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSubclassOf<UDS_M_ItemImplBase> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bd5a0f0

int * __thiscall
TMapBase<enum_EDS_StatusType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusType,int,0>_>
::FindChecked(void *this,EDS_StatusType param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_StatusType EVar3;
  int *piVar4;
  EDS_StatusType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    EVar3 = *(EDS_StatusType *)
             (lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - Hp & param_1) * 4);
    if (EVar3 != ~None) {
      do {
        pEVar5 = (EDS_StatusType *)((longlong)(int)EVar3 * 0x10 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_StatusType *)0x0) {
            return (int *)(pEVar5 + 1);
          }
          break;
        }
        EVar3 = pEVar5[2];
      } while (EVar3 != ~None);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 14bd5a190

TObjectPtr<UDS_InventoryQuantityData> * __thiscall
TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
::FindChecked(TMapBase<__int64,TObjectPtr<UDS_InventoryQuantityData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_InventoryQuantityData>,0>_>
              *this,long64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TObjectPtr<UDS_InventoryQuantityData> *pTVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U &
                    (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(longlong *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (TObjectPtr<UDS_InventoryQuantityData> *)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (TObjectPtr<UDS_InventoryQuantityData> *)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TObjectPtr<UDS_InventoryQuantityData> *)(*pcVar3)();
  return pTVar6;
}

// FindOrAddImpl<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&> @ 14bd9f760

TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&>
          (TMapBase<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr> *local_res20;
  
  iVar1 = TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_>
                    (&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)(lVar2 + 8);
  }
  local_res20 = param_2;
  TSet<TTuple<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<TWeakObjectPtr<UDS_ChattingData,FWeakObjectPtr>_const_&> *)
             (ulonglong)param_1,(bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> @ 14bd9f800

TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x50;
      if (bVar2) {
        if (lVar3 != 0) {
          return (TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x48);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8.ObjectIndex * 0x50);
}

// FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> @ 14bd9f8f0

TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x50;
      if (bVar2) {
        if (lVar3 != 0) {
          return (TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>
                  *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x48);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(int,FDS_Text_const_&),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8.ObjectIndex * 0x50);
}

// FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> @ 14bd9f9e0

TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
          (TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  ForElementType<FSetElementId> FVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar4 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)
                     ((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar1 * 0x50;
      if (bVar2) {
        if (lVar3 != 0) {
          return (TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy> *)
                 (lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x48);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
            (&this->Pairs,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(int,bool),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8.ObjectIndex * 0x50);
}

// FindOrAddImpl<enum_EDS_EquipSlotType_const_&> @ 14bd9fad0

TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<enum_EDS_EquipSlotType_const_&>(void *this,uint param_1,EDS_EquipSlotType *param_2)

{
  EDS_EquipSlotType EVar1;
  EDS_EquipSlotType *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EDS_EquipSlotType *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    EVar1 = *(EDS_EquipSlotType *)
             (lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (EVar1 != ~None) {
      do {
        pEVar2 = (EDS_EquipSlotType *)((longlong)(int)EVar1 * 0x50 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EDS_EquipSlotType *)0x0) {
            return (TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *)
                   (pEVar2 + 2);
          }
          break;
        }
        EVar1 = pEVar2[0x12];
      } while (EVar1 != ~None);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_EquipSlotType_const_,TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_EquipSlotType_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EDS_EquipSlotType_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(__int64),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)this + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<enum_EDS_ViewModelTemplateKey_const_&> @ 14bd9fb80

TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<enum_EDS_ViewModelTemplateKey_const_&>
          (void *this,uint param_1,EDS_ViewModelTemplateKey *param_2)

{
  EDS_ViewModelTemplateKey EVar1;
  EDS_ViewModelTemplateKey *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EDS_ViewModelTemplateKey *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    EVar1 = *(EDS_ViewModelTemplateKey *)
             (lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (EVar1 != ~None) {
      do {
        pEVar2 = (EDS_ViewModelTemplateKey *)((longlong)(int)EVar1 * 0x50 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EDS_ViewModelTemplateKey *)0x0) {
            return (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)
                   (pEVar2 + 2);
          }
          break;
        }
        EVar1 = pEVar2[0x12];
      } while (EVar1 != ~None);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ViewModelTemplateKey_const_,TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_ViewModelTemplateKey_const_&>_>
            (this,(uint)local_res8,
             (TKeyInitializer<EDS_ViewModelTemplateKey_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(int,int),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)this + 8 + (longlong)local_res8[0] * 0x50);
}

// FindChecked @ 14bdc21e0

long64 * __thiscall
TMapBase<enum_EDS_MoneyType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MoneyType,__int64,0>_>
::FindChecked(void *this,EDS_MoneyType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 *plVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_MoneyType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (long64 *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (long64 *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  plVar4 = (long64 *)(*pcVar1)();
  return plVar4;
}

// FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> @ 14be04cb0

TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>
          (void *this,uint param_1,TWeakObjectPtr<UObject,FWeakObjectPtr> *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    while (iVar1 != -1) {
      local_res8 = param_2->WeakPtr;
      local_res20 = *(FWeakObjectPtr *)((longlong)iVar1 * 0x50 + *(longlong *)this);
      bVar2 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                        ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_res20,
                         (TWeakObjectPtr<UObject,FWeakObjectPtr> *)&local_res8);
      lVar3 = *(longlong *)this + (longlong)iVar1 * 0x50;
      if (bVar2) {
        if (lVar3 != 0) {
          return (TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>
                  *)(lVar3 + 8);
        }
        break;
      }
      iVar1 = *(int *)(lVar3 + 0x48);
    }
  }
  local_res20 = (FWeakObjectPtr)param_2;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TMulticastDelegate<void___cdecl(enum_EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&>_>
            (this,(uint)&local_res8,
             (TKeyInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(EDS_TabErrorType,int,int),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)this + 8 + (longlong)local_res8.ObjectIndex * 0x50);
}

// FindOrAddImpl<enum_EDS_ItemBasketType_const_&> @ 14be04da0

TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<enum_EDS_ItemBasketType_const_&>
          (void *this,uint param_1,EDS_ItemBasketType *param_2)

{
  EDS_ItemBasketType EVar1;
  EDS_ItemBasketType *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EDS_ItemBasketType *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    EVar1 = *(EDS_ItemBasketType *)
             (lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (EVar1 != ~None) {
      do {
        pEVar2 = (EDS_ItemBasketType *)((longlong)(int)EVar1 * 0x50 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EDS_ItemBasketType *)0x0) {
            return (TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
                   (pEVar2 + 2);
          }
          break;
        }
        EVar1 = pEVar2[0x12];
      } while (EVar1 != ~None);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_ItemBasketType_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_ItemBasketType_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EDS_ItemBasketType_const_&> *)(ulonglong)param_1
             ,(bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)this + 8 + (longlong)local_res8[0] * 0x50);
}

// FindChecked @ 14be1fc90

TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StatusCategoryType,TArray<enum_EDS_StatusType,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,EDS_StatusCategoryType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *pTVar4;
  EDS_StatusCategoryType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_StatusCategoryType *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_StatusCategoryType *)0x0) {
            return (TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<EDS_StatusType,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14be88da0

TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_KeyRemoveType,TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(void *this,EDS_KeyRemoveType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *pTVar4;
  EDS_KeyRemoveType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_KeyRemoveType *)((longlong)(int)uVar3 * 0x20 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_KeyRemoveType *)0x0) {
            return (TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x18);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<EDS_KeyActionType,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindOrAddImpl<enum_EDS_KeyActionType_const_&> @ 14bece170

TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
* __thiscall
TMapBase<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<enum_EDS_KeyActionType_const_&>(void *this,uint param_1,EDS_KeyActionType *param_2)

{
  EDS_KeyActionType EVar1;
  EDS_KeyActionType *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EDS_KeyActionType *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    EVar1 = *(EDS_KeyActionType *)
             (lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (EVar1 != ~None) {
      do {
        pEVar2 = (EDS_KeyActionType *)((longlong)(int)EVar1 * 0x50 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EDS_KeyActionType *)0x0) {
            return (TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
                    *)(pEVar2 + 2);
          }
          break;
        }
        EVar1 = pEVar2[0x12];
      } while (EVar1 != ~None);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EDS_KeyActionType_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
          *)(*(longlong *)this + 8 + (longlong)local_res8[0] * 0x50);
}

// FindChecked @ 14beec400

FDS_HistoryData * __thiscall
TMapBase<enum_EDS_InteractionFunctionType,FDS_HistoryData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InteractionFunctionType,FDS_HistoryData,0>_>
::FindChecked(void *this,EDS_InteractionFunctionType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_HistoryData *pFVar4;
  EDS_InteractionFunctionType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_InteractionFunctionType *)((longlong)(int)uVar3 * 0x298 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_InteractionFunctionType *)0x0) {
            return (FDS_HistoryData *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x290);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_HistoryData *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_HistoryData *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<int_const_&> @ 14bf33de0

TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
                   (piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x12];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<enum_EDS_SwimStep_const_&> @ 14bf33e90

TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<enum_EDS_SwimStep_const_&>(void *this,uint param_1,EDS_SwimStep *param_2)

{
  undefined4 uVar1;
  EDS_SwimStep *pEVar2;
  longlong lVar3;
  int local_res8 [6];
  EDS_SwimStep *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    uVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar2 = (EDS_SwimStep *)((longlong)(int)uVar1 * 0x50 + *(longlong *)this);
        if (*pEVar2 == *param_2) {
          if (pEVar2 != (EDS_SwimStep *)0x0) {
            return (TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>
                    *)(pEVar2 + 8);
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar2 + 0x48);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<enum_EDS_SwimStep_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<EDS_SwimStep_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)this + 8 + (longlong)local_res8[0] * 0x50);
}

// FindChecked @ 14bf569d0

EDS_SortingType * __thiscall
TMapBase<int,enum_EDS_SortingType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,enum_EDS_SortingType,0>_>
::FindChecked(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  EDS_SortingType *pEVar4;
  int *piVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)this);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (EDS_SortingType *)(piVar5 + 1);
          }
          break;
        }
        iVar3 = piVar5[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return &DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pEVar4 = (EDS_SortingType *)(*pcVar1)();
  return pEVar4;
}

// FindOrAddImpl<int_const_&> @ 14bf91590

TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
                   (piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x12];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindChecked @ 14bfaa920

FDS_CheatSlotParam * __thiscall
TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
::FindChecked(TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_CheatSlotParam *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_CheatSlotParam *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0x12];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (FDS_CheatSlotParam *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_CheatSlotParam *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14bfaa9c0

TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> * __thiscall
TMapBase<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
::FindChecked(TMapBase<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_>,0>_>
              *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)
                   (piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[6];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TArray<FDS_GameOptionBaseTableRow_const_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
  return pTVar4;
}

// FindChecked @ 14bfaaa60

long64 * __thiscall
TMapBase<enum_EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_MessageArgsType,__int64,0>_>
::FindChecked(void *this,EDS_MessageArgsType param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 *plVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - DisconnectReason & param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x18;
        if (*(EDS_MessageArgsType *)(*(longlong *)this + (longlong)iVar3 * 0x18) == param_1) {
          if (lVar5 != 0) {
            return (long64 *)(lVar5 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (long64 *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  plVar4 = (long64 *)(*pcVar1)();
  return plVar4;
}

// FindOrAddImpl<int_const_&> @ 14bff7a20

TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
                   (piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x12];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(int),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<int_const_&> @ 14bff7ad0

TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
* __thiscall
TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x12];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<int_const_&> @ 14bff7b80

TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<int_const_&>(void *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar3 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar3 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x50 + *(longlong *)this);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x12];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(enum_EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (this,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(EDS_WorldMapZoomStep),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)this + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<__int64_const_&> @ 14bff7c30

TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<__int64_const_&>
          (TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,long64 *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  long64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(float),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<__int64_const_&> @ 14bff7ce0

TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
* __thiscall
TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<__int64_const_&>
          (TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,long64 *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  long64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindChecked @ 14c019e60

FDS_WorldInfo * __thiscall
TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>::
FindChecked(TMapBase<int,FDS_WorldInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_WorldInfo,0>_>
            *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FDS_WorldInfo *pFVar4;
  int *piVar5;
  ForElementType<FSetElementId> FVar6;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar6 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar5 = (int *)((longlong)iVar3 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar5 == param_1) {
          if (piVar5 != (int *)0x0) {
            return (FDS_WorldInfo *)(piVar5 + 2);
          }
          break;
        }
        iVar3 = piVar5[0xc];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_WorldInfo *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_WorldInfo *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14c019f00

FDS_Text * __thiscall
TMapBase<enum_EDS_WorldBossSpawnStatus,FDS_Text,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_WorldBossSpawnStatus,FDS_Text,0>_>
::FindChecked(void *this,EDS_WorldBossSpawnStatus param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FDS_Text *pFVar4;
  EDS_WorldBossSpawnStatus *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_WorldBossSpawnStatus *)((longlong)(int)uVar3 * 0x60 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_WorldBossSpawnStatus *)0x0) {
            return (FDS_Text *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x58);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_Text *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FDS_Text *)(*pcVar1)();
  return pFVar4;
}

// FindOrAddImpl<int_const_&> @ 14c05f040

TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy> *
__thiscall
TMapBase<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                    *)(piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x12];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<int_const_&> @ 14c05f0f0

TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<int_const_&>
          (TMapBase<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  int *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        piVar2 = (int *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar2 == *param_2) {
          if (piVar2 != (int *)0x0) {
            return (TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy> *)
                   (piVar2 + 2);
          }
          break;
        }
        iVar1 = piVar2[0x12];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<int_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<int_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(bool,int,int),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<UObject_*_const_&> @ 14c05f1a0

TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<UObject_*_const_&>
          (TMapBase<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,UObject **param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  UObject **local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if ((UObject *)*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<UObject_*,TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UObject_*_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<UObject_*_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(UObject_*),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<__int64_const_&> @ 14c05f250

TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy> *
__thiscall
TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<__int64_const_&>
          (TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,long64 *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  long64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
                    *)(plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(float,UE::Math::TVector2<double>),FDefaultTSDelegateUserPolicy>
          *)(*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindOrAddImpl<__int64_const_&> @ 14c05f300

TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy> * __thiscall
TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>_>
::FindOrAddImpl<__int64_const_&>
          (TMapBase<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>_>
           *this,uint param_1,long64 *param_2)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [6];
  long64 *local_res20;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x50 + *(longlong *)&(this->Pairs).Elements);
        if (*plVar2 == *param_2) {
          if (plVar2 != (longlong *)0x0) {
            return (TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy> *)
                   (plVar2 + 1);
          }
          break;
        }
        iVar1 = (int)plVar2[9];
      } while (iVar1 != -1);
    }
  }
  local_res20 = param_2;
  TSet<TTuple<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<__int64_const_,TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<__int64_const_&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<__int64_const_&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (TMulticastDelegate<void___cdecl(FString),FDefaultTSDelegateUserPolicy> *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x50);
}

// FindChecked @ 14c084920

FDS_MapCellData * __thiscall
TMapBase<UE::Math::TIntPoint<int>,FDS_MapCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>_>
::FindChecked(TMapBase<UE::Math::TIntPoint<int>,FDS_MapCellData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapCellData,0>_>
              *this,TIntPoint<int> param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_MapCellData *pFVar3;
  uint uVar4;
  undefined8 *puVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  uVar10 = param_1.field0_0x0._4_4_;
  uVar8 = param_1.field0_0x0._0_4_ - uVar10 ^ uVar10 >> 0xd;
  uVar6 = (-0x61c88647 - uVar8) - uVar10 ^ uVar8 << 8;
  uVar4 = (uVar10 - uVar8) - uVar6 ^ uVar6 >> 0xd;
  uVar8 = (uVar8 - uVar4) - uVar6 ^ uVar4 >> 0xc;
  uVar6 = (uVar6 - uVar8) - uVar4 ^ uVar8 << 0x10;
  uVar4 = (uVar4 - uVar6) - uVar8 ^ uVar6 >> 5;
  uVar8 = (uVar8 - uVar4) - uVar6 ^ uVar4 >> 3;
  uVar6 = (uVar6 - uVar8) - uVar4 ^ uVar8 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & ((uVar4 - uVar6) - uVar8 ^ uVar6 >> 0xf)) * 4);
    if (iVar9 != -1) {
      do {
        puVar5 = (undefined8 *)((longlong)iVar9 * 0x38 + *(longlong *)&(this->Pairs).Elements);
        if (((int)*puVar5 == param_1.field0_0x0._0_4_) &&
           ((uint)((ulonglong)*puVar5 >> 0x20) == uVar10)) {
          if ((iVar9 != -1) && (puVar5 != (undefined8 *)0x0)) {
            return (FDS_MapCellData *)(puVar5 + 1);
          }
          break;
        }
        iVar9 = *(int *)(puVar5 + 6);
      } while (iVar9 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FDS_MapCellData *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pFVar3 = (FDS_MapCellData *)(*pcVar1)();
  return pFVar3;
}

// FindChecked @ 14c084a70

FDS_MapImageData * __thiscall
TMapBase<UE::Math::TIntPoint<int>,FDS_MapImageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>_>
::FindChecked(TMapBase<UE::Math::TIntPoint<int>,FDS_MapImageData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Math::TIntPoint<int>,FDS_MapImageData,0>_>
              *this,TIntPoint<int> param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  FDS_MapImageData *pFVar6;
  uint uVar7;
  uint uVar8;
  ForElementType<FSetElementId> FVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar12 = param_1.field0_0x0._4_4_;
  uVar10 = param_1.field0_0x0._0_4_ - uVar12 ^ uVar12 >> 0xd;
  uVar8 = (-0x61c88647 - uVar10) - uVar12 ^ uVar10 << 8;
  uVar7 = (uVar12 - uVar10) - uVar8 ^ uVar8 >> 0xd;
  uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 0xc;
  uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 << 0x10;
  uVar7 = (uVar7 - uVar8) - uVar10 ^ uVar8 >> 5;
  uVar10 = (uVar10 - uVar7) - uVar8 ^ uVar7 >> 3;
  uVar8 = (uVar8 - uVar10) - uVar7 ^ uVar10 << 10;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar9 = (this->Pairs).Hash.SecondaryData;
    if (FVar9 == (ForElementType<FSetElementId>)0x0) {
      FVar9 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar11 = *(int *)((longlong)FVar9 +
                     (ulonglong)
                     ((this->Pairs).HashSize - 1U & ((uVar7 - uVar8) - uVar10 ^ uVar8 >> 0xf)) * 4);
    if (iVar11 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        uVar3 = *(undefined8 *)(lVar2 + (longlong)iVar11 * 0x28);
        lVar1 = lVar2 + (longlong)iVar11 * 0x28;
        if (((int)uVar3 == param_1.field0_0x0._0_4_) && ((uint)((ulonglong)uVar3 >> 0x20) == uVar12)
           ) {
          if ((iVar11 != -1) && (lVar1 != 0)) {
            return (FDS_MapImageData *)(lVar1 + 8);
          }
          break;
        }
        iVar11 = *(int *)(lVar1 + 0x20);
      } while (iVar11 != -1);
    }
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar5) {
    return (FDS_MapImageData *)&DAT_00000008;
  }
  pcVar4 = (code *)swi(3);
  pFVar6 = (FDS_MapImageData *)(*pcVar4)();
  return pFVar6;
}

// FindChecked @ 14c084bc0

FLinearColor * __thiscall
TMapBase<enum_EDS_GradeType,FLinearColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_GradeType,FLinearColor,0>_>
::FindChecked(void *this,EDS_GradeType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  FLinearColor *pFVar4;
  EDS_GradeType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_GradeType *)((longlong)(int)uVar3 * 0x1c + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_GradeType *)0x0) {
            return (FLinearColor *)(pEVar5 + 4);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x14);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (FLinearColor *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FLinearColor *)(*pcVar1)();
  return pFVar4;
}

// FindChecked @ 14c084c60

TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
* __thiscall
TMapBase<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
::FindChecked(void *this,EDS_PlayerSkillType param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *pTVar4;
  EDS_PlayerSkillType *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    uVar3 = *(int *)(lVar6 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)param_1)
                             * 4);
    if (uVar3 != 0xffffffff) {
      do {
        pEVar5 = (EDS_PlayerSkillType *)((longlong)(int)uVar3 * 0x60 + *(longlong *)this);
        if (*pEVar5 == param_1) {
          if (pEVar5 != (EDS_PlayerSkillType *)0x0) {
            return (TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
                    *)(pEVar5 + 8);
          }
          break;
        }
        uVar3 = *(undefined4 *)(pEVar5 + 0x58);
      } while (uVar3 != 0xffffffff);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
            *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
            *)(*pcVar1)();
  return pTVar4;
}

