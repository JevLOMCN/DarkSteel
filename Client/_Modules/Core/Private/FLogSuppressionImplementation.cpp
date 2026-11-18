// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 10

// operator() @ 1417ad890

void __thiscall
`FLogSuppressionImplementation::ProcessConfigAndCommandLine'::__l35::<lambda_1>::operator()
          (void *this,FString *param_1,
          TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *param_2)

{
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FLogSuppressionInterface *pFVar4;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  bool bVar5;
  bool bVar6;
  FString local_28;
  
  bVar5 = false;
  pFVar4 = FLogSuppressionInterface::TryGet();
  if (pFVar4 == (FLogSuppressionInterface *)0x0) {
    this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
              FCoreDelegates::TSOnConfigSectionsChanged();
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,*(void **)this);
    return;
  }
  iVar3 = (param_1->Data).ArrayNum;
  if (iVar3 == GEngineIni.Data.ArrayNum) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Data).AllocatorInstance.Data,
                         (wchar_t *)GEngineIni.Data.AllocatorInstance.Data);
      bVar6 = iVar3 == 0;
      goto LAB_1417ad8ec;
    }
LAB_1417ad8f3:
    ::FString::FString(&local_28,L"Core.Log");
    iVar3 = local_28.Data.ArrayNum + -1;
    FVar1.Data = local_28.Data.AllocatorInstance.Data;
    if (local_28.Data.ArrayNum == 0) {
      iVar3 = 0;
      FVar1.Data = (FScriptContainerElement *)L"";
    }
    uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
    bVar5 = true;
    iVar3 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                      (param_2,uVar2,&local_28);
    if (iVar3 != -1) {
      bVar6 = true;
      goto LAB_1417ad94a;
    }
  }
  else {
    bVar6 = iVar3 + GEngineIni.Data.ArrayNum == 1;
LAB_1417ad8ec:
    if (bVar6) goto LAB_1417ad8f3;
  }
  bVar6 = false;
  if (!bVar5) {
    return;
  }
LAB_1417ad94a:
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar6) {
    (**(code **)((longlong)*pFVar4 + 0x10))(pFVar4);
  }
  return;
}

// ApplyGlobalChanges @ 1417b4840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLogSuppressionImplementation::ApplyGlobalChanges(FLogSuppressionImplementation *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FName FVar6;
  Type TVar7;
  Type TVar8;
  uint uVar9;
  bool bVar10;
  Type TVar11;
  uint uVar12;
  int iVar13;
  FName *pFVar14;
  longlong lVar15;
  Type TVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  bool bVar22;
  Type local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_a4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  FName local_68;
  FName local_60;
  FName FStack_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pFVar14 = ::FName::FName(&local_68,L"Global");
    FLogCategoryBase::FLogCategoryBase(&GlobalVerbosity,pFVar14,All,All);
    atexit(`GetGlobalVerbosity'::__l2::_dynamic_atexit_destructor_for__GlobalVerbosity__);
    _Init_thread_footer(&::_TSS0);
  }
  TVar8 = GlobalVerbosity.Verbosity;
  TVar7 = `private:_void___cdecl_FLogSuppressionImplementation::ApplyGlobalChanges(void)___ptr64'::
          __l2::LastGlobalVerbosity;
  puVar1 = &(this->ReverseAssociations).field_0x10;
  iVar18 = 0;
  `private:_void___cdecl_FLogSuppressionImplementation::ApplyGlobalChanges(void)___ptr64'::__l2::
  LastGlobalVerbosity = GlobalVerbosity.Verbosity;
  uVar12 = 1;
  local_res20 = (uint)(GlobalVerbosity.DebugBreakOnLog == false);
  iVar20 = 0;
  bVar22 = `private:_void___cdecl_FLogSuppressionImplementation::ApplyGlobalChanges(void)___ptr64'::
           __l2::bOldGlobalBreakValue == false;
  `private:_void___cdecl_FLogSuppressionImplementation::ApplyGlobalChanges(void)___ptr64'::__l2::
  bOldGlobalBreakValue = GlobalVerbosity.DebugBreakOnLog;
  iVar3 = *(int *)&(this->ReverseAssociations).field_0x28;
  iVar13 = iVar18;
  if (iVar3 != 0) {
    puVar21 = *(uint **)&(this->ReverseAssociations).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar17 = *puVar21;
    iVar20 = 0;
    iVar18 = 0;
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar13 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1417b494e;
      uVar17 = puVar21[lVar15 + 1];
    }
    uVar12 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uVar12 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar13 = iVar20 + -1 + (int)lVar15;
    if (iVar3 < iVar13) {
      iVar13 = iVar3;
    }
  }
LAB_1417b494e:
  uVar17 = *(uint *)&(this->ReverseAssociations).field_0x28;
  TStack_90._padding_ = CONCAT44(uVar12,iVar18);
  uVar12 = uVar17 & 0xffffffe0;
  TStack_90.CurrentBitIndex = iVar13;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar17 >> 5;
  TStack_90._28_4_ = iVar13;
  TStack_90.BaseBitIndex = iVar20;
  uStack_70 = CONCAT44(uStack_a4,
                       *(int *)&(this->ReverseAssociations).field_0x8 -
                       *(int *)&(this->ReverseAssociations).field_0x34);
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar17 < 0) || (iVar3 < (int)uVar17)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = local_res20;
  uVar4 = *(uint *)&(this->ReverseAssociations).field_0x28;
  if (uVar17 != uVar4) {
    puVar19 = *(undefined1 **)&(this->ReverseAssociations).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar18;
      uVar12 = uVar12 + 0x20;
      iVar18 = iVar18 + 1;
      uVar17 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_1417b4a61;
      uVar17 = *(uint *)(puVar19 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar17 = (int)lVar15 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar17) {
      uVar17 = uVar4;
    }
  }
LAB_1417b4a61:
  do {
    if (*(int *)&(this->ReverseAssociations).field_0x8 -
        *(int *)&(this->ReverseAssociations).field_0x34 != (int)uStack_70) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FLogCategoryBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_90.CurrentBitIndex == uVar17) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    pFVar14 = (FName *)(*(longlong *)&this->ReverseAssociations +
                       (longlong)TStack_90.CurrentBitIndex * 0x18);
    local_60 = *pFVar14;
    FVar6 = pFVar14[1];
    TVar16 = *(Type *)FVar6;
    if (TVar8 < TVar7) {
      bVar10 = GlobalVerbosity.Verbosity < TVar16;
      TVar11 = GlobalVerbosity.Verbosity;
LAB_1417b4ae7:
      if (bVar10) {
        TVar16 = TVar11;
      }
    }
    else if (TVar7 < TVar8) {
      if (TVar16 < GlobalVerbosity.Verbosity) {
        TVar16 = GlobalVerbosity.Verbosity;
      }
      TVar11 = *(Type *)((longlong)FVar6 + 3);
      bVar10 = TVar11 < TVar16;
      goto LAB_1417b4ae7;
    }
    FStack_58 = FVar6;
    if (TVar16 != NoLogging) {
      local_res10[0] = TVar16;
      TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
      ::Emplace<FName_const_&,unsigned_char>
                ((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                  *)&this->ToggleAssociations,&local_60,local_res10);
    }
    *(Type *)FVar6 = TVar16;
    if (uVar9 != bVar22) {
      *(bool *)((longlong)FVar6 + 1) = GlobalVerbosity.DebugBreakOnLog;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// AssociateSuppress @ 1417b51d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLogSuppressionImplementation::AssociateSuppress
          (FLogSuppressionImplementation *this,FLogCategoryBase *param_1)

{
  TArray<FLogCategoryBase_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FLogCategoryBase_*> FVar6;
  FLogCategoryBase *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_1 == (FLogCategoryBase *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Destination",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\LogSuppressionInterface.cpp"
                       ,0x1b1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (this->bInitialized != false) {
    AssociateSuppressImpl(this,local_res10[0]);
    return;
  }
  FVar6 = (this->PendingAssociations).AllocatorInstance.SecondaryData;
  pTVar1 = &this->PendingAssociations;
  if (FVar6 == (ForElementType<FLogCategoryBase_*>)0x0) {
    FVar6 = (ForElementType<FLogCategoryBase_*>)pTVar1;
  }
  if (((ulonglong)FVar6 <= local_res10) &&
     (local_res10 <
      (FLogCategoryBase **)((longlong)FVar6 + (longlong)(this->PendingAssociations).ArrayMax * 8)))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->PendingAssociations).ArrayNum;
  piVar2 = &(this->PendingAssociations).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FLogCategoryBase_*>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->PendingAssociations).ArrayNum = iVar5 + 1;
  FVar6 = (this->PendingAssociations).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FLogCategoryBase_*>)0x0) {
    FVar6 = (ForElementType<FLogCategoryBase_*>)pTVar1;
  }
  *(FLogCategoryBase **)((longlong)FVar6 + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// AssociateSuppressImpl @ 1417b5300

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLogSuppressionImplementation::AssociateSuppressImpl
          (FLogSuppressionImplementation *this,FLogCategoryBase *param_1)

{
  longlong lVar1;
  bool bVar2;
  TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
  *pTVar3;
  bool bVar4;
  int iVar5;
  TPairInitializer<FName_const_&,FLogCategoryBase_*_const_&> local_res8;
  FName local_res18;
  TBaseKeyIterator<0> local_68;
  undefined1 local_50 [24];
  
  local_res18 = param_1->CategoryName;
  bVar2 = false;
  local_res8.Value = (FLogCategoryBase **)param_1;
  TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
  ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
            (&local_68,
             (TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
              *)&this->ReverseAssociations,local_res18);
  pTVar3 = local_68.Set;
  local_50._0_8_ = local_68.Set;
  local_50._8_4_ = local_68.Key.ComparisonIndex.Value;
  local_50._12_4_ = local_68.Key.Number;
  if (local_68.Index != -1) {
    bVar2 = true;
    iVar5 = local_68.NextIndex;
    do {
      lVar1 = (longlong)local_68.Index * 0x18;
      if ((*(FLogCategoryBase **)(lVar1 + 8 + *(longlong *)&pTVar3->Elements) ==
           (FLogCategoryBase *)local_res8.Value) && (bVar4 = IsReloadActive(), !bVar4)) {
        ::FName::ToString(&local_res18,(FString *)&local_68);
        UE::Logging::Private::BasicFatalLog
                  (&`private:_void___cdecl_FLogSuppressionImplementation::AssociateSuppressImpl(FLogCategoryBase*___ptr64)___ptr64'
                    ::__l11::LOG_Static,(FLogCategoryBase *)&LogHAL);
        if (local_68.Set !=
            (TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
             *)0x0) {
          FMemory::Free(local_68.Set);
        }
      }
      if (*(Type *)(*(longlong *)(*(longlong *)&pTVar3->Elements + 8 + lVar1) + 3) !=
          *(Type *)((longlong)local_res8.Value + 3)) {
        ::FName::ToString(&local_res18,(FString *)local_50);
        UE::Logging::Private::BasicFatalLog
                  (&`private:_void___cdecl_FLogSuppressionImplementation::AssociateSuppressImpl(FLogCategoryBase*___ptr64)___ptr64'
                    ::__l32::LOG_Static,(FLogCategoryBase *)&LogHAL);
        if ((TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
             *)local_50._0_8_ !=
            (TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
             *)0x0) {
          FMemory::Free((void *)local_50._0_8_);
        }
      }
      *(Type *)local_res8.Value = **(Type **)(*(longlong *)&pTVar3->Elements + 8 + lVar1);
      *(bool *)((longlong)local_res8.Value + 1) =
           *(bool *)(*(longlong *)(*(longlong *)&pTVar3->Elements + 8 + lVar1) + 1);
      *(uchar *)((longlong)local_res8.Value + 2) =
           *(uchar *)(*(longlong *)(*(longlong *)&pTVar3->Elements + 8 + lVar1) + 2);
      if (iVar5 == -1) break;
      local_68.Index = iVar5;
      do {
        iVar5 = *(int *)(*(longlong *)&pTVar3->Elements + 0x10 + (longlong)local_68.Index * 0x18);
        if (*(FName *)(*(longlong *)&pTVar3->Elements + (longlong)local_68.Index * 0x18) ==
            local_68.Key) break;
        local_68.Index = iVar5;
      } while (iVar5 != -1);
    } while (local_68.Index != -1);
  }
  local_68.Set = (TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
                  *)&local_res18;
  local_68.Key = (FName)&local_res8.Value;
  TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,FLogCategoryBase_*_const_&>_>
            ((TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
              *)&this->ReverseAssociations,&local_res8,(bool *)&local_68);
  if (!bVar2) {
    SetupSuppress(this,(FLogCategoryBase *)local_res8.Value,local_res18);
  }
  return;
}

// DisassociateSuppress @ 1417c4530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLogSuppressionImplementation::DisassociateSuppress
          (FLogSuppressionImplementation *this,FLogCategoryBase *param_1)

{
  TArray<FLogCategoryBase_*,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  ForElementType<FLogCategoryBase_*> FVar5;
  int iVar6;
  uint uVar7;
  ForElementType<FLogCategoryBase_*> FVar8;
  int iVar9;
  uint uVar10;
  TBaseKeyIterator<0> local_28;
  
  FVar5 = (this->PendingAssociations).AllocatorInstance.SecondaryData;
  pTVar1 = &this->PendingAssociations;
  iVar9 = (this->PendingAssociations).ArrayNum;
  if (FVar5 == (ForElementType<FLogCategoryBase_*>)0x0) {
    FVar5 = (ForElementType<FLogCategoryBase_*>)pTVar1;
  }
  FVar8 = (ForElementType<FLogCategoryBase_*>)((longlong)FVar5 + (longlong)iVar9 * 8);
  do {
    if (FVar8 == FVar5) goto LAB_1417c4582;
    FVar8 = (ForElementType<FLogCategoryBase_*>)((longlong)FVar8 + -8);
  } while (*(FLogCategoryBase **)FVar8 != param_1);
  uVar7 = (uint)((longlong)FVar8 - (longlong)FVar5 >> 3);
  if (uVar7 == 0xffffffff) {
LAB_1417c4582:
    iVar9 = 0;
    TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
    ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
              (&local_28,
               (TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
                *)&this->ReverseAssociations,param_1->CategoryName);
    if (local_28.Index != -1) {
      do {
        iVar6 = local_28.NextIndex;
        if (*(FLogCategoryBase **)
             (*(longlong *)&(local_28.Set)->Elements + 8 + (longlong)local_28.Index * 0x18) ==
            param_1) {
          TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
          ::RemoveByIndex(local_28.Set,local_28.Index);
          iVar9 = iVar9 + 1;
        }
        local_28.Index = iVar6;
        if (iVar6 == -1) break;
        do {
          local_28.NextIndex =
               *(int *)(*(longlong *)&(local_28.Set)->Elements + 0x10 + (longlong)iVar6 * 0x18);
          local_28.Index = iVar6;
          if (*(FName *)(*(longlong *)&(local_28.Set)->Elements + (longlong)iVar6 * 0x18) ==
              local_28.Key) break;
          local_28.Index = local_28.NextIndex;
          iVar6 = local_28.NextIndex;
        } while (local_28.NextIndex != -1);
      } while (local_28.Index != -1);
      if (iVar9 == 1) {
        return;
      }
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReverseAssociations.Remove(Destination->GetCategoryName(), Destination) == 1"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\LogSuppressionInterface.cpp"
                       ,0x1e6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar10 = 0;
    if ((int)uVar7 < iVar9) {
      uVar10 = ~uVar7 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar5 = (this->PendingAssociations).AllocatorInstance.SecondaryData;
    if (FVar5 == (ForElementType<FLogCategoryBase_*>)0x0) {
      FVar5 = (ForElementType<FLogCategoryBase_*>)pTVar1;
    }
    _Dst = (void *)((longlong)FVar5 + (longlong)(int)uVar7 * 8);
    iVar9 = (this->PendingAssociations).ArrayNum + ~uVar7;
    if (iVar9 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar9 << 3);
    }
    piVar2 = &(this->PendingAssociations).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FLogCategoryBase_*>_>
              (8,8,&pTVar1->AllocatorInstance,(this->PendingAssociations).ArrayNum,
               &(this->PendingAssociations).ArrayMax);
  }
  return;
}

// Exec_Runtime @ 1417cad10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001417cb15d) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FLogSuppressionImplementation::Exec_Runtime
          (FLogSuppressionImplementation *this,UWorld *param_1,wchar_t *param_2,
          FOutputDevice *param_3)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement FVar5;
  code *pcVar6;
  FName FVar7;
  ForAnyElementType _Src;
  int *piVar8;
  bool bVar9;
  undefined1 uVar10;
  Type TVar11;
  uint uVar12;
  size_t sVar13;
  TTuple<FName,unsigned_char> *pTVar14;
  FNameEntryId FVar15;
  longlong lVar16;
  uint uVar17;
  FName _Str;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  undefined1 auStackY_308 [32];
  undefined1 local_2b8;
  undefined1 local_2b7;
  uchar local_2b6;
  FIdentityFunctor local_2b5 [5];
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  int *local_2a0;
  undefined1 local_298 [8];
  FLogCategoryPtrs local_290;
  wchar_t *local_278;
  ulonglong local_270;
  int *local_268;
  uint uStack_260;
  uint uStack_25c;
  undefined1 *local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  uint local_248;
  undefined4 uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  FOutputDevice *local_238;
  FString local_230;
  undefined1 local_220 [16];
  FString local_210;
  FLogSuppressionImplementation *local_200;
  FLogSuppressionImplementation *local_1f8;
  FName local_1f0;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  FName local_1d8;
  FName FStack_1d0;
  int local_1c8;
  FName local_1c0;
  FName FStack_1b8;
  int *local_1b0;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 *local_1a0;
  undefined4 uStack_198;
  uint uStack_194;
  uint local_190;
  uint uStack_18c;
  int iStack_188;
  undefined4 uStack_184;
  int *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  undefined8 uStack_158;
  int *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  int *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  FString local_f0 [2];
  undefined4 local_c4;
  undefined4 local_a4;
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_308;
  local_278 = param_2;
  local_238 = param_3;
  local_1f8 = this;
  bVar9 = FParse::Command(&local_278,L"LOG",true);
  if (bVar9) {
    bVar9 = FParse::Command(&local_278,L"LIST",true);
    if (bVar9) {
      local_2b0.Data = (FScriptContainerElement *)0x0;
      local_2a8 = 0;
      FParse::Token((FString *)local_220,&local_278,false);
      puVar1 = &(this->ReverseAssociations).field_0x8;
      uVar19 = *(uint *)&(this->ReverseAssociations).field_0x20;
      piVar25 = &(this->PendingAssociations).ArrayNum;
      uStack_260 = 0;
      local_270 = 1;
      uVar20 = 0;
      uStack_25c = 1;
      uStack_24c = uStack_260;
      local_248 = uVar20;
      if (uVar19 != 0) {
        puVar22 = *(uint **)&(this->ReverseAssociations).field_0x18;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar1;
        }
        uStack_25c = *puVar22;
        local_248 = 0;
        uStack_260 = 0;
        while (uStack_25c == 0) {
          lVar16 = (longlong)(int)uStack_260;
          local_248 = local_248 + 0x20;
          uStack_260 = uStack_260 + 1;
          uStack_25c = 1;
          uStack_24c = uVar19;
          if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_260)
          goto LAB_1417cae3f;
          uStack_25c = puVar22[lVar16 + 1];
        }
        uStack_25c = -uStack_25c & uStack_25c;
        uVar3 = (ulonglong)uStack_25c * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1e8 = (int)lVar16;
        uStack_24c = (local_248 - 1) + local_1e8;
        if ((int)uVar19 < (int)uStack_24c) {
          uStack_24c = uVar19;
        }
      }
LAB_1417cae3f:
      uVar17 = *(uint *)&(this->ReverseAssociations).field_0x20;
      uStack_244 = local_a4;
      iStack_240 = *(int *)&this->ReverseAssociations -
                   *(int *)&(this->ReverseAssociations).field_0x2c;
      uStack_250 = 0xffffffff;
      uVar24 = uVar17 & 0xffffffe0;
      TStack_178._padding_ = CONCAT44(uStack_25c,uStack_260);
      TStack_178.CurrentBitIndex = uStack_24c;
      TStack_178.UnvisitedBitMask = 0xffffffff;
      iVar18 = (int)uVar17 >> 5;
      TStack_178._28_4_ = local_a4;
      TStack_178.BaseBitIndex = local_248;
      uStack_158 = CONCAT44(uStack_23c,iStack_240);
      local_2a0 = piVar25;
      local_268 = piVar25;
      local_258 = puVar1;
      local_180 = piVar25;
      TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar17 < 0) || ((int)uVar19 < (int)uVar17)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      uVar19 = *(uint *)&(this->ReverseAssociations).field_0x20;
      if (uVar17 != uVar19) {
        puVar21 = *(undefined1 **)&(this->ReverseAssociations).field_0x18;
        if (puVar21 == (undefined1 *)0x0) {
          puVar21 = puVar1;
        }
        uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar18 * 4);
        while (uVar17 == 0) {
          lVar16 = (longlong)iVar18;
          uVar24 = uVar24 + 0x20;
          iVar18 = iVar18 + 1;
          uVar17 = uVar19;
          if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_1417caf50;
          uVar17 = *(uint *)(puVar21 + lVar16 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1e4 = (int)lVar16;
        uVar17 = (uVar24 - 1) + local_1e4;
        if ((int)uVar19 < (int)uVar17) {
          uVar17 = uVar19;
        }
      }
LAB_1417caf50:
      do {
        piVar8 = local_180;
        if (local_180[2] - local_180[0xd] != (int)uStack_158) {
          local_2b8 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FLogCategoryBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b8);
        }
        if (((TStack_178.CurrentBitIndex == uVar17) &&
            (TStack_178.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (piVar8 == piVar25)) {
          AlgoImpl::
          IntroSortInternal<_anonymous_namespace_::FLogCategoryPtrs,int,FIdentityFunctor,TDereferenceWrapper<_anonymous_namespace_::FLogCategoryPtrs,TLess<void>_>_>
                    ((FLogCategoryPtrs *)local_2b0.Data,(int)local_2a8,local_2b5[0],
                     (TLess<void> *)local_2b5);
          for (uVar19 = 0; (-1 < (int)uVar19 && ((int)uVar19 < (int)local_2a8)); uVar19 = uVar19 + 1
              ) {
            uVar24 = ~uVar19 >> 0x1f;
            uVar17 = uVar20;
            if ((int)uVar19 < (int)local_2a8) {
              uVar17 = uVar24;
            }
            if (uVar17 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
            }
            uVar17 = uVar20;
            if ((int)uVar19 < (int)local_2a8) {
              uVar17 = uVar24;
            }
            iVar18 = (int)local_2a8;
            if (uVar17 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                uVar10 = (*pcVar6)();
                return (bool)uVar10;
              }
              iVar18 = (int)local_2a8;
            }
            local_2a0 = (int *)::ToString((Type)local_2b0.Data[(longlong)(int)uVar19 * 0x18 + 0x10])
            ;
            uVar17 = 0;
            if ((int)uVar19 < iVar18) {
              uVar17 = uVar24;
            }
            if ((uVar17 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar10 = (*pcVar6)();
              return (bool)uVar10;
            }
            FOutputDevice::LogfImpl(local_238,L"%-40s  %-12s  %s");
          }
          if ((FName)local_220._0_8_ != (FName)0x0) {
            FMemory::Free((void *)local_220._0_8_);
          }
          DestructItems<_anonymous_namespace_::FLogCategoryPtrs,int>
                    ((FLogCategoryPtrs *)local_2b0.Data,(int)local_2a8);
          local_230.Data.AllocatorInstance.Data = local_2b0.Data;
          goto LAB_1417cba8a;
        }
        pFVar2 = (FName *)(*(longlong *)piVar8 + (longlong)TStack_178.CurrentBitIndex * 0x18);
        local_1d8 = *pFVar2;
        FVar7 = pFVar2[1];
        FStack_1d0 = FVar7;
        ::FName::ToString(&local_1d8,&local_210);
        FVar15.Value = (uint)local_220._8_8_;
        uVar19 = FVar15.Value - 1;
        if (FVar15.Value == 0) {
          uVar19 = uVar20;
        }
        if (uVar19 == 0) {
LAB_1417cb012:
          _Src.Data = local_210.Data.AllocatorInstance.Data;
          FVar4 = *(FScriptContainerElement *)((longlong)FVar7 + 1);
          FVar5 = *(FScriptContainerElement *)FVar7;
          local_290.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar18 = local_210.Data.ArrayNum;
          local_290.Name.Data.ArrayNum = iVar18;
          if (iVar18 == 0) {
            local_290.Name.Data._8_8_ = local_210.Data._8_8_ & 0xffffffff;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar18,0,(ForAnyElementType *)&local_290,iVar18,
                       &local_290.Name.Data.ArrayMax);
            memcpy(local_290.Name.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar18 * 2);
          }
          local_290.Verbosity = (Type)FVar5;
          local_290.Postfix = (bool)FVar4;
          if (((local_2b0.Data <= &local_290) &&
              (&local_290 < (FLogCategoryPtrs *)(local_2b0.Data + (longlong)local_2a8._4_4_ * 0x18))
              ) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          iVar18 = (int)local_2a8;
          if ((int)local_2a8 == local_2a8._4_4_) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_2b0,(int *)((longlong)&local_2a8 + 4));
          }
          lVar16 = (longlong)iVar18;
          local_2a8 = CONCAT44(local_2a8._4_4_,iVar18 + 1);
          *(undefined8 *)&local_2b0.Data[lVar16 * 0x18].field_0x0 = 0;
          *(FScriptContainerElement **)&local_2b0.Data[lVar16 * 0x18].field_0x0 =
               local_290.Name.Data.AllocatorInstance.Data;
          *(int *)(local_2b0.Data + lVar16 * 0x18 + 8) = local_290.Name.Data.ArrayNum;
          *(int *)(local_2b0.Data + lVar16 * 0x18 + 0xc) = local_290.Name.Data.ArrayMax;
          local_2b0.Data[lVar16 * 0x18 + 0x10] = (FScriptContainerElement)local_290.Verbosity;
          local_2b0.Data[lVar16 * 0x18 + 0x11] = (FScriptContainerElement)local_290.Postfix;
          local_290.Name.Data.ArrayNum = 0;
          local_290.Name.Data.ArrayMax = 0;
          local_290.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          piVar25 = local_2a0;
        }
        else if (FVar15.Value == 0) {
          _Str = (FName)L"";
LAB_1417cafe2:
          sVar13 = wcslen((wchar_t *)_Str);
          iVar18 = ::FString::Find(&local_210,(wchar_t *)_Str,(int)sVar13,(Type)local_270,FromStart,
                                   -1);
          if (iVar18 != -1) goto LAB_1417cb012;
        }
        else {
          _Str = (FName)local_220._0_8_;
          if ((FName)local_220._0_8_ != (FName)0x0) goto LAB_1417cafe2;
        }
        if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data.AllocatorInstance.Data);
        }
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
      } while( true );
    }
    if (*local_278 != L'.') {
      ::FString::FString(&local_230,local_278);
      ::FString::TrimStartInline(&local_230);
      uVar20 = 0;
      uVar17 = 0;
      uVar19 = 0;
      uVar24 = local_230.Data.ArrayNum - 1;
      if (local_230.Data.ArrayNum == 0) {
        uVar24 = uVar19;
      }
      if (uVar24 == 0) {
        FOutputDevice::Log(param_3,L"------- Log conventions");
        FOutputDevice::Log(param_3,
                           L"[cat]   = a category for the command to operate on, or \'global\' for all categories."
                          );
        FOutputDevice::Log(param_3,
                           L"[level] = verbosity level, one of: none, error, warning, display, log, verbose, all, default"
                          );
        FOutputDevice::Log(param_3,
                           L"At boot time, compiled in default is overridden by ini files setting, which is overridden by command line"
                          );
        FOutputDevice::Log(param_3,L"------- Log console command usage");
        FOutputDevice::Log(param_3,L"Log list            - list all log categories");
        FOutputDevice::Log(param_3,
                           L"Log list [string]   - list all log categories containing a substring");
        FOutputDevice::Log(param_3,
                           L"Log reset           - reset all log categories to their boot-time default"
                          );
        FOutputDevice::Log(param_3,L"Log [cat]           - toggle the display of the category [cat]"
                          );
        FOutputDevice::Log(param_3,L"Log [cat] off       - disable display of the category [cat]");
        FOutputDevice::Log(param_3,L"Log [cat] on        - resume display of the category [cat]");
        FOutputDevice::Log(param_3,
                           L"Log [cat] only      - enables [cat] and disables all other categories")
        ;
        FOutputDevice::Log(param_3,
                           L"Log [cat] [level]   - set the verbosity level of the category [cat]");
        FOutputDevice::Log(param_3,
                           L"Log [cat] break     - toggle the debug break on display of the category [cat]"
                          );
        FOutputDevice::Log(param_3,L"------- Log command line");
        FOutputDevice::Log(param_3,
                           L"-LogCmds=\"[arguments],[arguments]...\"           - applies a list of console commands at boot time"
                          );
        FOutputDevice::Log(param_3,
                           L"-LogCmds=\"foo verbose, bar off\"         - turns on the foo category and turns off the bar category"
                          );
        FOutputDevice::Log(param_3,L"------- Environment variables");
        FOutputDevice::Log(param_3,
                           L"Any command line option can be set via the environment variable UE-CmdLineArgs"
                          );
        FOutputDevice::Log(param_3,L"set UE-CmdLineArgs=\"-LogCmds=foo verbose breakon, bar off\"");
        FOutputDevice::Log(param_3,L"------- Config file");
        FOutputDevice::Log(param_3,L"[Core.Log]");
        FOutputDevice::Log(param_3,L"global=[default verbosity for things not listed later]");
        FOutputDevice::Log(param_3,L"[cat]=[level]");
        FOutputDevice::Log(param_3,L"foo=verbose break");
      }
      else {
        local_200 = (FLogSuppressionImplementation *)&this[-1].bInitialized;
        bVar9 = ProcessLogOnly(local_200,&local_230,param_3);
        if (!bVar9) {
          local_98.Elements._0_8_ = 0;
          local_98.Elements._8_8_ = 0;
          local_98.Elements._32_8_ = 0;
          local_98.Elements._40_4_ = 0;
          local_98.Elements._44_4_ = 0x80;
          local_98.Elements._48_4_ = 0xffffffff;
          local_98.Elements._52_4_ = 0;
          local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
          local_98.HashSize = 0;
          TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
          ::Reserve(&local_98,
                    *(int *)&this->ReverseAssociations -
                    *(int *)&(this->ReverseAssociations).field_0x2c);
          puVar1 = &(this->ReverseAssociations).field_0x8;
          uVar24 = *(uint *)&(this->ReverseAssociations).field_0x20;
          local_2a0 = &(this->PendingAssociations).ArrayNum;
          local_270 = 1;
          uStack_25c = 1;
          uStack_24c = uVar19;
          if (uVar24 != 0) {
            puVar22 = *(uint **)&(this->ReverseAssociations).field_0x18;
            if (puVar22 == (uint *)0x0) {
              puVar22 = (uint *)puVar1;
            }
            uStack_25c = *puVar22;
            uVar19 = uVar17;
            while (uStack_25c == 0) {
              lVar16 = (longlong)(int)uVar20;
              uVar19 = uVar19 + 0x20;
              uVar20 = uVar20 + 1;
              uStack_25c = 1;
              uStack_24c = uVar24;
              if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
              goto LAB_1417cb47f;
              uStack_25c = puVar22[lVar16 + 1];
            }
            uStack_25c = -uStack_25c & uStack_25c;
            uVar3 = (ulonglong)uStack_25c * 2 + 1;
            lVar16 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            local_1e0 = (int)lVar16;
            uStack_24c = local_1e0 + -1 + uVar19;
            if ((int)uVar24 < (int)uStack_24c) {
              uStack_24c = uVar24;
            }
          }
LAB_1417cb47f:
          uVar12 = *(uint *)&(this->ReverseAssociations).field_0x20;
          uStack_244 = local_c4;
          iStack_240 = *(int *)&this->ReverseAssociations -
                       *(int *)&(this->ReverseAssociations).field_0x2c;
          uVar23 = uVar12 & 0xffffffe0;
          TStack_148._padding_ = CONCAT44(uStack_25c,uVar20);
          uStack_250 = 0xffffffff;
          TStack_148.CurrentBitIndex = uStack_24c;
          TStack_148.UnvisitedBitMask = 0xffffffff;
          iVar18 = (int)uVar12 >> 5;
          TStack_148._28_4_ = local_c4;
          TStack_148.BaseBitIndex = uVar19;
          uStack_128 = CONCAT44(uStack_23c,iStack_240);
          local_248 = uVar19;
          local_268 = local_2a0;
          uStack_260 = uVar20;
          local_258 = puVar1;
          local_150 = local_2a0;
          TStack_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar12 < 0) || ((int)uVar24 < (int)uVar12)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          piVar25 = local_2a0;
          uVar19 = *(uint *)&(this->ReverseAssociations).field_0x20;
          if (uVar12 != uVar19) {
            puVar21 = *(undefined1 **)&(this->ReverseAssociations).field_0x18;
            if (puVar21 == (undefined1 *)0x0) {
              puVar21 = puVar1;
            }
            uVar20 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar18 * 4);
            while (uVar20 == 0) {
              lVar16 = (longlong)iVar18;
              uVar23 = uVar23 + 0x20;
              iVar18 = iVar18 + 1;
              uVar12 = uVar19;
              if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
              goto LAB_1417cb5a0;
              uVar20 = *(uint *)(puVar21 + lVar16 * 4 + 4);
            }
            uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar16 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            local_1dc = (int)lVar16;
            uVar12 = local_1dc + -1 + uVar23;
            if ((int)uVar19 < (int)uVar12) {
              uVar12 = uVar19;
            }
          }
LAB_1417cb5a0:
          while( true ) {
            piVar8 = local_150;
            if (local_150[2] - local_150[0xd] != (int)uStack_128) {
              local_2b7 = 0;
              `TSparseArray<TSparseSetElement<TTuple<FName,FLogCategoryBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2b7);
            }
            if (((TStack_148.CurrentBitIndex == uVar12) &&
                (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               (piVar8 == piVar25)) break;
            pFVar2 = (FName *)(*(longlong *)piVar8 + (longlong)TStack_148.CurrentBitIndex * 0x18);
            local_1c0 = *pFVar2;
            FStack_1b8 = pFVar2[1];
            local_2b6 = *(uchar *)FStack_1b8;
            TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
            ::Emplace<FName_const_&,unsigned_char>
                      ((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                        *)&local_98,&local_1c0,&local_2b6);
            TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
          }
          ProcessCmdString(local_200,&local_230,false);
          uVar19 = *(uint *)&(this->ReverseAssociations).field_0x20;
          uStack_194 = uVar17;
          local_190 = uVar17;
          if (uVar19 != 0) {
            puVar22 = *(uint **)&(this->ReverseAssociations).field_0x18;
            if (puVar22 == (uint *)0x0) {
              puVar22 = (uint *)puVar1;
            }
            uVar20 = *puVar22;
            while (uVar20 == 0) {
              lVar16 = (longlong)(int)uVar17;
              local_190 = local_190 + 0x20;
              uVar17 = uVar17 + 1;
              uStack_194 = uVar19;
              if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
              goto LAB_1417cb6c0;
              uVar20 = puVar22[lVar16 + 1];
            }
            local_270 = (ulonglong)(-uVar20 & uVar20);
            uVar3 = local_270 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            local_1c8 = (int)lVar16;
            uStack_194 = (local_190 - 1) + local_1c8;
            if ((int)uVar19 < (int)uStack_194) {
              uStack_194 = uVar19;
            }
          }
LAB_1417cb6c0:
          uStack_1a4 = (undefined4)local_270;
          uStack_18c = uStack_24c;
          iStack_188 = *(int *)&local_1f8->ReverseAssociations -
                       *(int *)&(local_1f8->ReverseAssociations).field_0x2c;
          uVar20 = *(uint *)&(local_1f8->ReverseAssociations).field_0x20;
          local_1b0 = piVar25;
          uVar24 = uVar20 & 0xffffffe0;
          uStack_198 = 0xffffffff;
          TStack_118._padding_ = CONCAT44(uStack_1a4,uVar17);
          TStack_118.CurrentBitIndex = uStack_194;
          TStack_118.UnvisitedBitMask = 0xffffffff;
          local_120 = piVar25;
          iVar18 = (int)uVar20 >> 5;
          TStack_118._28_4_ = uStack_24c;
          TStack_118.BaseBitIndex = local_190;
          uStack_f8 = CONCAT44(uStack_184,iStack_188);
          uStack_1a8 = uVar17;
          local_1a0 = puVar1;
          TStack_118.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if ((((int)uVar20 < 0) || ((int)uVar19 < (int)uVar20)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x7af,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar10 = (*pcVar6)();
            return (bool)uVar10;
          }
          uVar19 = *(uint *)&(this->ReverseAssociations).field_0x20;
          if (uVar20 != uVar19) {
            puVar21 = *(undefined1 **)&(this->ReverseAssociations).field_0x18;
            if (puVar21 == (undefined1 *)0x0) {
              puVar21 = puVar1;
            }
            uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar18 * 4);
            while (uVar20 == 0) {
              lVar16 = (longlong)iVar18;
              uVar24 = uVar24 + 0x20;
              iVar18 = iVar18 + 1;
              uVar20 = uVar19;
              if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
              goto LAB_1417cb7e2;
              uVar20 = *(uint *)(puVar21 + lVar16 * 4 + 4);
            }
            uVar3 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
            lVar16 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            uVar20 = (int)lVar16 + -1 + uVar24;
            if ((int)uVar19 < (int)uVar20) {
              uVar20 = uVar19;
            }
          }
LAB_1417cb7e2:
          while( true ) {
            piVar8 = local_120;
            if (local_120[2] - local_120[0xd] != (int)uStack_f8) {
              `TSparseArray<TSparseSetElement<TTuple<FName,FLogCategoryBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_298);
            }
            if (((TStack_118.CurrentBitIndex == uVar20) &&
                (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
               (piVar8 == piVar25)) break;
            pFVar2 = (FName *)(*(longlong *)piVar8 + (longlong)TStack_118.CurrentBitIndex * 0x18);
            local_220._0_8_ = *pFVar2;
            local_220._8_8_ = pFVar2[1];
            local_1f0 = (FName)local_220._0_8_;
            local_1d8 = (FName)local_220._0_8_;
            FStack_1d0 = (FName)local_220._8_8_;
            pTVar14 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                      ::Find(&local_98,(FName)local_220._0_8_);
            TVar11 = NoLogging;
            if (pTVar14 != (TTuple<FName,unsigned_char> *)0x0) {
              TVar11 = pTVar14->field_0x8;
            }
            if (*(Type *)local_220._8_8_ != TVar11) {
              ::ToString(*(Type *)local_220._8_8_);
              ::FName::ToString(&local_1f0,local_f0);
              FOutputDevice::LogfImpl(local_238,L"%-40s  %-12s  %s");
              if (local_f0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0[0].Data.AllocatorInstance.Data);
              }
            }
            TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
          }
          local_98.HashSize = 0;
          if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_98.Hash.SecondaryData);
          }
          TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<TTuple<FName,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_98.Elements);
        }
      }
LAB_1417cba8a:
      if ((FLogCategoryPtrs *)local_230.Data.AllocatorInstance.Data != (FLogCategoryPtrs *)0x0) {
        FMemory::Free(local_230.Data.AllocatorInstance.Data);
      }
      return true;
    }
  }
  return false;
}

// ProcessCmdString @ 1417eb520

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLogSuppressionImplementation::ProcessCmdString
          (FLogSuppressionImplementation *this,FString *param_1,bool param_2)

{
  TMap<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
  *this_00;
  uint *puVar1;
  FLogCategoryBase *this_01;
  code *pcVar2;
  wchar_t (*pawVar3) [5];
  void *pvVar4;
  TMultiMap<FName,FLogCategoryBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>_>
  *pTVar5;
  TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FNameEntryId FVar10;
  FString *pFVar11;
  size_t sVar12;
  undefined4 extraout_var;
  TTuple<FName,unsigned_char> *pTVar13;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  FName FVar14;
  Type *pTVar15;
  Type *pTVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  FName FVar20;
  FName FVar21;
  uint uVar22;
  undefined1 *puVar23;
  wchar_t *pwVar24;
  int *piVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  int iVar29;
  FScriptContainerElement *pFVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined1 *puVar33;
  uint *puVar34;
  Type TVar35;
  undefined1 *puVar36;
  TMultiMap<FName,FLogCategoryBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>_>
  *pTVar37;
  Type local_res10 [8];
  char local_res18;
  Type local_res20 [8];
  undefined1 local_1c8;
  Type local_1c7;
  Type local_1c6;
  FName local_1c0;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1a8;
  FString local_198;
  uint local_188;
  FName local_180;
  TArray<FString,TSizedDefaultAllocator<32>_> local_178 [2];
  undefined8 local_158;
  FString local_150;
  undefined1 local_140 [4];
  int local_13c;
  int local_138;
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  undefined1 local_128 [4];
  undefined1 local_124 [4];
  TMultiMap<FName,FLogCategoryBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>_>
  *local_120;
  int iStack_118;
  uint uStack_114;
  undefined1 *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  TMultiMap<FName,FLogCategoryBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>_>
  *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  TBaseKeyIterator<0> local_c0;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  piVar25 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  local_res18 = param_2;
  if ((*piVar25 <
       `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                    ::__l2::NAME_BootGlobal,L"BootGlobal");
    _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((*piVar25 <
       `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
       ::__l2::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                           ::__l2::_thread_safe_static_guard_1__),
     `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
     ::__l2::_thread_safe_static_guard_1__ == -1)) {
    ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                    ::__l2::NAME_Reset,L"Reset");
    _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                         ::__l2::_thread_safe_static_guard_1__);
  }
  local_198.Data.ArrayNum = (param_1->Data).ArrayNum;
  lVar26 = (longlong)local_198.Data.ArrayNum;
  pFVar30 = (param_1->Data).AllocatorInstance.Data;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_198.Data.ArrayNum == 0) {
    local_198.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_198.Data.ArrayNum,0,(ForAnyElementType *)&local_198,local_198.Data.ArrayNum
               ,&local_198.Data.ArrayMax);
    memcpy(local_198.Data.AllocatorInstance.Data,pFVar30,lVar26 * 2);
  }
  pFVar11 = ::FString::TrimStart(&local_198,&local_88);
  pFVar11 = ::FString::TrimQuotes(pFVar11,&local_98,(bool *)0x0);
  pFVar11 = ::FString::TrimStart(pFVar11,&local_a8);
  if (&local_198 != pFVar11) {
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_198.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = (pFVar11->Data).ArrayNum;
    local_198.Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  local_178[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178[0].ArrayNum = 0;
  local_178[0].ArrayMax = 0;
  ::FString::ParseIntoArray(&local_198,local_178,L",",true);
  local_188 = 0;
  if (0 < local_178[0].ArrayNum) {
    do {
      uVar22 = local_188;
      pTVar16 = (Type *)0x0;
      uVar8 = 0;
      uVar28 = uVar8;
      if ((int)local_188 < local_178[0].ArrayNum) {
        uVar28 = ~local_188 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      ::FString::TrimStart
                ((FString *)(local_178[0].AllocatorInstance.Data + (longlong)(int)uVar22 * 0x10),
                 &local_150);
      pawVar3 = `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                ::__l4::LogString;
      uVar22 = uVar8;
      if (`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
          ::__l4::LogString != (wchar_t (*) [5])0x0) {
        sVar12 = wcslen(*`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                         ::__l4::LogString);
        uVar22 = (uint)sVar12;
      }
      bVar7 = ::FString::StartsWith(&local_150,*pawVar3,uVar22,IgnoreCase);
      if (bVar7) {
        iVar9 = local_150.Data.ArrayNum;
        uVar22 = iVar9 - 5;
        if (iVar9 == 0) {
          uVar22 = 0xfffffffc;
        }
        pTVar15 = (Type *)(ulonglong)(iVar9 - 1);
        if (iVar9 == 0) {
          pTVar15 = pTVar16;
        }
        uVar32 = (uint)pTVar15;
        uVar28 = uVar32;
        if ((int)uVar22 < (int)uVar32) {
          uVar28 = uVar22;
        }
        if (0 < (int)uVar28) {
          uVar8 = uVar28;
        }
        ::FString::RemoveAt(&local_150,0,uVar32 - uVar8,No);
      }
      local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.ArrayNum = 0;
      local_1a8.ArrayMax = 0;
      ::FString::ParseIntoArrayWS(&local_150,&local_1a8,(wchar_t *)0x0,true);
      if (local_1a8.ArrayNum < 1) {
        DestructItems<FString,int>((FString *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
        if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.AllocatorInstance.Data);
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
      else {
        if (*(int *)(local_1a8.AllocatorInstance.Data + 8) == 0) {
          pwVar24 = L"";
        }
        else {
          pwVar24 = *(wchar_t **)local_1a8.AllocatorInstance.Data;
        }
        ::FName::FName(&local_1c0,pwVar24);
        FVar20 = local_1c0;
        FVar10 = FNameEntryId::FromValidEName((EName)local_140);
        FVar14.Number = 0;
        FVar14.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar10.Value);
        if ((FVar20 == FVar14) && (param_2 != false)) {
          local_1c0 = `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                      ::__l2::NAME_BootGlobal;
LAB_1417eb8c6:
          FVar14 = local_1c0;
          local_1b0 = 0;
          local_1b8.Data = (FScriptContainerElement *)0x0;
          local_res10[0] = NoLogging;
          uVar22 = ::GetTypeHash(local_1c0.ComparisonIndex.Value);
          FVar20 = `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                   ::__l2::NAME_BootGlobal;
          if (*(int *)&(this->BootAssociations).field_0x8 !=
              *(int *)&(this->BootAssociations).field_0x34) {
            puVar36 = *(undefined1 **)&(this->BootAssociations).field_0x40;
            puVar23 = &(this->BootAssociations).field_0x38;
            if (puVar36 != (undefined1 *)0x0) {
              puVar23 = puVar36;
            }
            iVar9 = *(int *)(puVar23 +
                            (ulonglong)
                            (*(int *)&(this->BootAssociations).field_0x48 - 1U &
                            FVar14.Number + uVar22) * 4);
            if (iVar9 != -1) {
              do {
                lVar26 = *(longlong *)&this->BootAssociations + (longlong)iVar9 * 0x14;
                if (*(FName *)(*(longlong *)&this->BootAssociations + (longlong)iVar9 * 0x14) ==
                    FVar14) {
                  pTVar15 = (Type *)(lVar26 + 8);
                  if (lVar26 == 0) {
                    pTVar15 = pTVar16;
                  }
                  if (pTVar15 != (Type *)0x0) goto LAB_1417eb9e4;
                  break;
                }
                iVar9 = *(int *)(lVar26 + 0xc);
              } while (iVar9 != -1);
            }
          }
          uVar22 = ::GetTypeHash(`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                 ::__l2::NAME_BootGlobal.ComparisonIndex.Value);
          if (*(int *)&(this->BootAssociations).field_0x8 !=
              *(int *)&(this->BootAssociations).field_0x34) {
            puVar36 = *(undefined1 **)&(this->BootAssociations).field_0x40;
            puVar23 = &(this->BootAssociations).field_0x38;
            if (puVar36 != (undefined1 *)0x0) {
              puVar23 = puVar36;
            }
            iVar9 = *(int *)(puVar23 +
                            (ulonglong)
                            (*(int *)&(this->BootAssociations).field_0x48 - 1U &
                            FVar20.Number + uVar22) * 4);
            if (iVar9 != -1) {
              do {
                lVar26 = *(longlong *)&this->BootAssociations + (longlong)iVar9 * 0x14;
                if (*(FName *)(*(longlong *)&this->BootAssociations + (longlong)iVar9 * 0x14) ==
                    FVar20) {
                  pTVar15 = (Type *)(lVar26 + 8);
                  if (lVar26 == 0) {
                    pTVar15 = pTVar16;
                  }
                  if (pTVar15 != (Type *)0x0) {
LAB_1417eb9e4:
                    local_res10[0] = *pTVar15;
                  }
                  break;
                }
                iVar9 = *(int *)(lVar26 + 0xc);
              } while (iVar9 != -1);
            }
          }
        }
        else {
          local_1b8.Data = (FScriptContainerElement *)0x0;
          local_1b0 = 0;
          local_res10[0] = NoLogging;
          if (param_2 != false) goto LAB_1417eb8c6;
          TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
          ::TBaseKeyIterator<0>::TBaseKeyIterator<0>
                    (&local_c0,
                     (TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
                      *)&this->ReverseAssociations,local_1c0);
          FVar20 = local_c0.Key;
          pTVar6 = local_c0.Set;
          local_158 = CONCAT44(local_c0.NextIndex,local_c0.Index);
          iVar29 = local_c0.Index;
          iVar9 = local_c0.NextIndex;
          while (iVar29 != -1) {
            pTVar16 = *(Type **)((longlong)iVar29 * 0x18 + 8 + *(longlong *)&pTVar6->Elements);
            local_res10[0] = -(pTVar16[1] != NoLogging) & BreakOnLog | *pTVar16;
            pFVar30 = (FScriptContainerElement *)
                      (*(longlong *)&pTVar6->Elements + 8 + (longlong)iVar29 * 0x18);
            if (((local_1b8.Data <= pFVar30) &&
                (local_1b0._4_4_ = (int)((ulonglong)local_1b0 >> 0x20),
                lVar26 = (longlong)local_1b0._4_4_, pFVar30 < local_1b8.Data + lVar26 * 8)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar29 = (int)local_1b0;
            if ((int)local_1b0 == local_1b0._4_4_) {
              iVar29 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&local_1b8,(int *)((longlong)&local_1b0 + 4));
            }
            local_158 = CONCAT44(local_158._4_4_,iVar9);
            local_1b0 = CONCAT44(local_1b0._4_4_,iVar29 + 1);
            *(longlong *)(local_1b8.Data + (longlong)iVar29 * 8) = *(longlong *)pFVar30;
            param_2 = (bool)local_res18;
            if (iVar9 == -1) break;
            iVar29 = iVar9;
            do {
              iVar9 = *(int *)(*(longlong *)&pTVar6->Elements + 0x10 + (longlong)iVar29 * 0x18);
              if (*(FName *)(*(longlong *)&pTVar6->Elements + (longlong)iVar29 * 0x18) == FVar20)
              break;
              iVar29 = iVar9;
            } while (iVar9 != -1);
            local_158 = CONCAT44(iVar9,iVar29);
          }
        }
        pvVar4 = ThreadLocalStoragePointer;
        pTVar37 = &this->ReverseAssociations;
        TVar35 = local_res10[0] & VerbosityMask;
        local_1c6 = TVar35;
        if (local_1a8.ArrayNum == 1) {
          if (param_2 == false) {
            if (local_1c0 ==
                `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                ::__l2::NAME_Reset) {
              puVar36 = &(this->ReverseAssociations).field_0x10;
              iStack_118 = 0;
              local_100 = 0;
              iVar9 = *(int *)&(this->ReverseAssociations).field_0x28;
              uStack_114 = 1;
              iStack_104 = 0;
              if (iVar9 != 0) {
                puVar1 = *(uint **)&(this->ReverseAssociations).field_0x20;
                puVar34 = (uint *)puVar36;
                if (puVar1 != (uint *)0x0) {
                  puVar34 = puVar1;
                }
                uVar22 = *puVar34;
                while (uVar22 == 0) {
                  lVar26 = (longlong)iStack_118;
                  local_100 = local_100 + 0x20;
                  iStack_118 = iStack_118 + 1;
                  iStack_104 = iVar9;
                  if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118)
                  goto LAB_1417ebc2d;
                  uVar22 = puVar34[lVar26 + 1];
                }
                uStack_114 = -uVar22 & uVar22;
                uVar27 = (ulonglong)uStack_114 * 2 + 1;
                lVar26 = 0x3f;
                if (uVar27 != 0) {
                  for (; uVar27 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                  }
                }
                local_13c = (int)lVar26;
                iStack_104 = local_100 + -1 + local_13c;
                if (iVar9 < iStack_104) {
                  iStack_104 = iVar9;
                }
              }
LAB_1417ebc2d:
              uStack_fc = local_4c;
              uVar22 = *(uint *)&(this->ReverseAssociations).field_0x28;
              iStack_f8 = *(int *)&(this->ReverseAssociations).field_0x8 -
                          *(int *)&(this->ReverseAssociations).field_0x34;
              uVar28 = uVar22 & 0xffffffe0;
              TStack_e8._padding_ = CONCAT44(uStack_114,iStack_118);
              uStack_108 = 0xffffffff;
              TStack_e8.CurrentBitIndex = iStack_104;
              TStack_e8.UnvisitedBitMask = 0xffffffff;
              iVar29 = (int)uVar22 >> 5;
              TStack_e8._28_4_ = local_4c;
              TStack_e8.BaseBitIndex = local_100;
              uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
              local_120 = pTVar37;
              local_110 = puVar36;
              local_f0 = pTVar37;
              TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar36;
              if ((((int)uVar22 < 0) || (iVar9 < (int)uVar22)) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x7af,L""), bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar8 = *(uint *)&(this->ReverseAssociations).field_0x28;
              if (uVar22 != uVar8) {
                puVar23 = *(undefined1 **)&(this->ReverseAssociations).field_0x20;
                puVar33 = puVar36;
                if (puVar23 != (undefined1 *)0x0) {
                  puVar33 = puVar23;
                }
                uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar33 + (longlong)iVar29 * 4);
                while (uVar22 == 0) {
                  lVar26 = (longlong)iVar29;
                  uVar28 = uVar28 + 0x20;
                  iVar29 = iVar29 + 1;
                  uVar22 = uVar8;
                  if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar29)
                  goto LAB_1417ebd50;
                  uVar22 = *(uint *)(puVar33 + lVar26 * 4 + 4);
                }
                uVar27 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
                lVar26 = 0x3f;
                if (uVar27 != 0) {
                  for (; uVar27 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                  }
                }
                local_138 = (int)lVar26;
                uVar22 = local_138 + -1 + uVar28;
                if ((int)uVar8 < (int)uVar22) {
                  uVar22 = uVar8;
                }
              }
LAB_1417ebd50:
              while( true ) {
                pTVar5 = local_f0;
                if (*(int *)&local_f0->field_0x8 - *(int *)&local_f0->field_0x34 != (int)uStack_c8)
                {
                  local_1c8 = 0;
                  `TSparseArray<TSparseSetElement<TTuple<FName,FLogCategoryBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
                }
                if (((TStack_e8.CurrentBitIndex == uVar22) &&
                    (TStack_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar36)) &&
                   (pTVar5 == pTVar37)) break;
                this_01 = *(FLogCategoryBase **)
                           (*(longlong *)pTVar5 + 8 + (longlong)TStack_e8.CurrentBitIndex * 0x18);
                FLogCategoryBase::SetVerbosity(this_01,this_01->DefaultVerbosity);
                if (this_01->Verbosity != NoLogging) {
                  local_1c7 = this_01->Verbosity;
                  TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                  ::Emplace<FName_const_&,unsigned_char>
                            ((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                              *)&this->ToggleAssociations,&local_1c0,&local_1c7);
                }
                TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
              }
            }
            else if (TVar35 == NoLogging) {
              pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                        ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                                *)&this->ToggleAssociations,local_1c0);
              pTVar16 = &pTVar13->field_0x8;
              if (pTVar13 == (TTuple<FName,unsigned_char> *)0x0) {
                pTVar16 = (Type *)0x0;
              }
              if ((pTVar16 == (Type *)0x0) || (*pTVar16 == NoLogging)) {
                local_res10[0] = local_res10[0] | All;
              }
              else {
                local_res10[0] = local_res10[0] | *pTVar16;
              }
            }
            else {
              local_res10[0] = local_res10[0] & ~VerbosityMask;
            }
          }
        }
        else {
          uVar22 = 1;
          if (1 < local_1a8.ArrayNum) {
            lVar26 = 0x10;
            do {
              uVar28 = 0;
              if ((int)uVar22 < local_1a8.ArrayNum) {
                uVar28 = ~uVar22 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              if (*(int *)(local_1a8.AllocatorInstance.Data + lVar26 + 8) == 0) {
                pwVar24 = L"";
              }
              else {
                pwVar24 = *(wchar_t **)(local_1a8.AllocatorInstance.Data + lVar26);
              }
              ::FName::FName(&local_180,pwVar24);
              piVar25 = (int *)(*(longlong *)((longlong)pvVar4 + (ulonglong)_tls_index * 8) + 0x9d4c
                               );
              if ((*piVar25 <
                   `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                   ::__l62::_thread_safe_static_guard_3__) &&
                 (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                       ::__l62::_thread_safe_static_guard_3__),
                 `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                 ::__l62::_thread_safe_static_guard_3__ == -1)) {
                ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                ::__l62::NAME_Verbose,L"Verbose");
                _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                     ::__l62::_thread_safe_static_guard_3__);
              }
              if ((*piVar25 <
                   `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                   ::__l62::_thread_safe_static_guard_4__) &&
                 (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                       ::__l62::_thread_safe_static_guard_4__),
                 `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                 ::__l62::_thread_safe_static_guard_4__ == -1)) {
                ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                ::__l62::NAME_VeryVerbose,L"VeryVerbose");
                _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                     ::__l62::_thread_safe_static_guard_4__);
              }
              if ((*piVar25 <
                   `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                   ::__l62::_thread_safe_static_guard_5__) &&
                 (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                       ::__l62::_thread_safe_static_guard_5__),
                 `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                 ::__l62::_thread_safe_static_guard_5__ == -1)) {
                ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                ::__l62::NAME_On,L"On");
                _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                     ::__l62::_thread_safe_static_guard_5__);
              }
              if ((*piVar25 <
                   `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                   ::__l62::_thread_safe_static_guard_6__) &&
                 (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                       ::__l62::_thread_safe_static_guard_6__),
                 `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                 ::__l62::_thread_safe_static_guard_6__ == -1)) {
                ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                ::__l62::NAME_Off,L"Off");
                _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                     ::__l62::_thread_safe_static_guard_6__);
              }
              if ((*piVar25 <
                   `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                   ::__l62::_thread_safe_static_guard_7__) &&
                 (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                       ::__l62::_thread_safe_static_guard_7__),
                 `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                 ::__l62::_thread_safe_static_guard_7__ == -1)) {
                ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                ::__l62::NAME_Break,L"Break");
                _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                     ::__l62::_thread_safe_static_guard_7__);
              }
              if ((*piVar25 <
                   `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                   ::__l62::_thread_safe_static_guard_8__) &&
                 (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                       ::__l62::_thread_safe_static_guard_8__),
                 `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                 ::__l62::_thread_safe_static_guard_8__ == -1)) {
                ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                ::__l62::NAME_Fatal,L"Fatal");
                _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                     ::__l62::_thread_safe_static_guard_8__);
              }
              if ((*piVar25 <
                   `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                   ::__l62::_thread_safe_static_guard_9__) &&
                 (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                       ::__l62::_thread_safe_static_guard_9__),
                 `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                 ::__l62::_thread_safe_static_guard_9__ == -1)) {
                ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                ::__l62::NAME_Log,L"Log");
                _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                     ::__l62::_thread_safe_static_guard_9__);
              }
              if ((*piVar25 <
                   `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                   ::__l62::_thread_safe_static_guard_10__) &&
                 (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                       ::__l62::_thread_safe_static_guard_10__),
                 `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                 ::__l62::_thread_safe_static_guard_10__ == -1)) {
                ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                ::__l62::NAME_Display,L"Display");
                _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                                     ::__l62::_thread_safe_static_guard_10__);
              }
              FVar20 = local_180;
              if (local_180 == (FName)0x0) {
                local_res10[0] = local_res10[0] & ~(NumVerbosity|Verbose) | Fatal;
              }
              else if (local_180 ==
                       `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                       ::__l62::NAME_Fatal) {
                local_res10[0] = local_res10[0] & ~(NumVerbosity|Verbose) | Fatal;
              }
              else {
                FVar10 = FNameEntryId::FromValidEName((EName)local_134);
                FVar14 = local_180;
                FVar17.Number = 0;
                FVar17.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar10.Value);
                if (FVar20 == FVar17) {
                  local_res10[0] = local_res10[0] & ~(NumVerbosity|Log) | Error;
                }
                else {
                  FVar10 = FNameEntryId::FromValidEName((EName)local_130);
                  FVar20 = local_180;
                  FVar18.Number = 0;
                  FVar18.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar10.Value);
                  if (FVar14 == FVar18) {
                    local_res10[0] = local_res10[0] & ~(NumVerbosity|Display) | Warning;
                  }
                  else if (local_180 ==
                           `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                           ::__l62::NAME_Log) {
                    local_res10[0] = local_res10[0] & ~(NumVerbosity|Error) | Log;
                  }
                  else if (local_180 ==
                           `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                           ::__l62::NAME_Display) {
                    local_res10[0] = local_res10[0] & ~(NumVerbosity|Warning) | Display;
                  }
                  else if (local_180 ==
                           `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                           ::__l62::NAME_Verbose) {
                    local_res10[0] = local_res10[0] & ~(NumVerbosity|Fatal) | Verbose;
                  }
                  else if ((local_180 ==
                            `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                            ::__l62::NAME_VeryVerbose) ||
                          (FVar10 = FNameEntryId::FromValidEName((EName)local_12c),
                          FVar14 = local_180, FVar19.Number = 0,
                          FVar19.ComparisonIndex.Value =
                               *(uint *)CONCAT44(extraout_var_02,FVar10.Value), FVar20 == FVar19)) {
                    local_res10[0] = local_res10[0] & ~NumVerbosity;
LAB_1417ec2f8:
                    local_res10[0] = local_res10[0] | All;
                  }
                  else {
                    FVar10 = FNameEntryId::FromValidEName((EName)local_128);
                    FVar20.Number = 0;
                    FVar20.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar10.Value);
                    if (FVar14 == FVar20) {
                      if (((int)local_1b0 != 0) && (param_2 == false)) {
                        if (((int)local_1b0 < 1) &&
                           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                              ("(Index >= 0) & (Index < ArrayNum)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x447,
                                               L"Array index out of bounds: %lld into an array of size %lld"
                                              ), bVar7)) {
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        local_res10[0] = *(Type *)(*(longlong *)local_1b8.Data + 2);
                      }
                    }
                    else if (local_180 ==
                             `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                             ::__l62::NAME_Off) {
                      local_res10[0] = local_res10[0] & ~(NumVerbosity|Verbose) | Fatal;
                    }
                    else if (local_180 ==
                             `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                             ::__l62::NAME_On) {
                      local_res10[0] = local_res10[0] & ~VerbosityMask;
                      pTVar13 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                                ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                                        *)&this->ToggleAssociations,local_1c0);
                      pTVar16 = &pTVar13->field_0x8;
                      if (pTVar13 == (TTuple<FName,unsigned_char> *)0x0) {
                        pTVar16 = (Type *)0x0;
                      }
                      if ((pTVar16 == (Type *)0x0) || (*pTVar16 == NoLogging)) goto LAB_1417ec2f8;
                      local_res10[0] = *pTVar16 | local_res10[0];
                    }
                    else if (local_180 ==
                             `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                             ::__l62::NAME_Break) {
                      local_res10[0] = local_res10[0] ^ BreakOnLog;
                    }
                  }
                }
              }
              uVar22 = uVar22 + 1;
              lVar26 = lVar26 + 0x10;
              TVar35 = local_1c6;
            } while ((int)uVar22 < local_1a8.ArrayNum);
          }
        }
        param_2 = (bool)local_res18;
        uVar27 = 0;
        iVar9 = local_1a8.ArrayNum;
        if (local_1c0 !=
            `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
            ::__l2::NAME_Reset) {
          if (local_res18 == '\0') {
            uVar31 = uVar27;
            if (0 < (int)local_1b0) {
              do {
                uVar28 = (uint)uVar27;
                uVar22 = 0;
                if ((int)uVar28 < (int)local_1b0) {
                  uVar22 = ~uVar28 >> 0x1f;
                }
                if ((uVar22 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                FLogCategoryBase::SetVerbosity
                          (*(FLogCategoryBase **)(local_1b8.Data + uVar31),local_res10[0]);
                uVar27 = (ulonglong)(uVar28 + 1);
                uVar31 = uVar31 + 8;
              } while ((int)(uVar28 + 1) < (int)local_1b0);
            }
            FVar20 = local_1c0;
            FVar10 = FNameEntryId::FromValidEName((EName)local_124);
            FVar21.Number = 0;
            FVar21.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_04,FVar10.Value);
            if (FVar20 == FVar21) {
              ApplyGlobalChanges(this);
            }
          }
          else {
            if (local_1c0 ==
                `private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                ::__l2::NAME_BootGlobal) {
              this_00 = &this->BootAssociations;
              bVar7 = 1 < *(int *)&(this->BootAssociations).field_0x48;
              if (!bVar7) {
                TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::UnhashElements((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                                  *)this_00);
              }
              *(undefined4 *)&(this->BootAssociations).field_0x8 = 0;
              if (*(int *)&(this->BootAssociations).field_0xc != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x14,4,0,(ForAnyElementType *)this_00,0,
                           (int *)&(this->BootAssociations).field_0xc);
              }
              *(undefined4 *)&(this->BootAssociations).field_0x30 = 0xffffffff;
              *(undefined4 *)&(this->BootAssociations).field_0x34 = 0;
              iVar9 = *(int *)&(this->BootAssociations).field_0x2c;
              *(undefined4 *)&(this->BootAssociations).field_0x28 = 0;
              if ((iVar9 < 0) || (0x80 < iVar9)) {
                *(undefined4 *)&(this->BootAssociations).field_0x2c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)
                           &(this->BootAssociations).field_0x10,0);
              }
              if (bVar7) {
                *(undefined4 *)&(this->BootAssociations).field_0x48 = 1;
                TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::Rehash((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                          *)this_00);
              }
            }
            TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
            ::Emplace<FName_const_&,unsigned_char_const_&>
                      ((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                        *)&this->BootAssociations,&local_1c0,local_res10);
          }
          local_res20[0] = local_res10[0] & VerbosityMask;
          if ((((local_res20[0] != NoLogging) &&
               (TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                ::Emplace<FName_const_&,unsigned_char_const_&>
                          ((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                            *)&this->ToggleAssociations,&local_1c0,local_res20), TVar35 < Verbose))
              && (Log < local_res20[0])) && (4 < (byte)LogHAL._0_1_)) {
            ::ToString(local_res20[0]);
            ::FName::ToString(&local_1c0,local_78);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`private:_void___cdecl_FLogSuppressionImplementation::ProcessCmdString(FString_const&___ptr64,bool)___ptr64'
                        ::M::LOG_Static,(FLogCategoryBase *)&LogHAL);
            if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
            }
          }
          iVar9 = local_1a8.ArrayNum;
        }
        if (local_1b8.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data);
          iVar9 = local_1a8.ArrayNum;
        }
        DestructItems<FString,int>((FString *)local_1a8.AllocatorInstance.Data,iVar9);
        if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.AllocatorInstance.Data);
        }
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
      }
      local_188 = local_188 + 1;
    } while ((int)local_188 < local_178[0].ArrayNum);
  }
  DestructItems<FString,int>((FString *)local_178[0].AllocatorInstance.Data,local_178[0].ArrayNum);
  if (local_178[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178[0].AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessConfigAndCommandLine @ 1417ecd30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FLogSuppressionImplementation::ProcessConfigAndCommandLine(FLogSuppressionImplementation *this)

{
  int *piVar1;
  TMultiMap<FName,FLogCategoryBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>_>
  *pTVar2;
  ForElementType<FLogCategoryBase_*> FVar3;
  Type TVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FLogCategoryBase *this_00;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FConfigSection *pFVar13;
  FString *pFVar14;
  wchar_t *pwVar15;
  size_t sVar16;
  TTuple<FName,unsigned_char> *pTVar17;
  TMulticastDelegate<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
  *this_01;
  longlong lVar18;
  ForAnyElementType FVar19;
  ForAnyElementType FVar20;
  Type *pTVar21;
  ForElementType<FLogCategoryBase_*> FVar22;
  uint uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong *plVar26;
  int iVar27;
  int iVar28;
  Type *pTVar29;
  uint local_res8 [2];
  Type local_res10 [8];
  int local_res18;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FConfigSection *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  longlong *local_148;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  FName local_108;
  FLogSuppressionImplementation *local_100;
  FConfigSection *local_f8;
  int iStack_f0;
  uint uStack_ec;
  longlong *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  FString local_c8;
  FString local_b8;
  <lambda_1> local_a8;
  FString local_a0;
  FString local_90;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
  *pTStack_58;
  
  bVar8 = false;
  bVar9 = false;
  local_res8[0] = 0;
  TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
             *)&this->ReverseAssociations,(this->PendingAssociations).ArrayNum);
  FVar22 = (this->PendingAssociations).AllocatorInstance.SecondaryData;
  iVar28 = (this->PendingAssociations).ArrayNum;
  if (FVar22 == (ForElementType<FLogCategoryBase_*>)0x0) {
    FVar22 = (ForElementType<FLogCategoryBase_*>)&this->PendingAssociations;
  }
  FVar3 = (ForElementType<FLogCategoryBase_*>)((longlong)FVar22 + (longlong)iVar28 * 8);
  while( true ) {
    if ((this->PendingAssociations).ArrayNum != iVar28) {
      local_res8[0] = local_res8[0] & 0xffffff00;
      `TCheckedPointerIterator<FLogCategoryBase_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar22 == FVar3) break;
    AssociateSuppressImpl(this,*(FLogCategoryBase **)FVar22);
    FVar22 = (ForElementType<FLogCategoryBase_*>)((longlong)FVar22 + 8);
  }
  iVar28 = 0;
  iVar25 = 0;
  piVar1 = &(this->PendingAssociations).ArrayMax;
  (this->PendingAssociations).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<256,32,TSizedDefaultAllocator<32>_>::ForElementType<FLogCategoryBase_*>_>
              (8,8,0,&(this->PendingAssociations).AllocatorInstance,0,piVar1);
  }
  pFVar13 = FConfigCacheIni::GetSection(GConfig,L"Core.Log",false,&GEngineIni);
  iVar27 = 1;
  if (pFVar13 != (FConfigSection *)0x0) {
    local_e8 = &pFVar13->_padding_;
    iVar5 = (int)pFVar13->_padding_;
    iVar10 = iVar28;
    uStack_ec = 1;
    if (iVar5 != 0) {
      plVar26 = (longlong *)pFVar13->_padding_;
      if ((longlong *)pFVar13->_padding_ == (longlong *)0x0) {
        plVar26 = local_e8;
      }
      uStack_ec = (uint)*plVar26;
      while (uStack_ec == 0) {
        lVar18 = (longlong)iVar25;
        iVar28 = iVar28 + 0x20;
        iVar25 = iVar25 + 1;
        iVar10 = iVar5;
        uStack_ec = 1;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar25) goto LAB_1417ecea4;
        uStack_ec = *(uint *)((longlong)plVar26 + lVar18 * 4 + 4);
      }
      uStack_ec = ~(uStack_ec - 1) & uStack_ec;
      uVar24 = (ulonglong)uStack_ec * 2 + 1;
      lVar18 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      local_res18 = (int)lVar18;
      iVar10 = iVar28 + -1 + local_res18;
      if (iVar5 < iVar10) {
        iVar10 = iVar5;
      }
    }
LAB_1417ecea4:
    iStack_dc = iVar10;
    local_f8 = pFVar13;
    iStack_f0 = iVar25;
    uStack_e0 = 0xffffffff;
    local_d8 = iVar28;
    iStack_d4 = iVar10;
    local_178 = pFVar13;
    TStack_170._padding_ = CONCAT44(uStack_ec,iVar25);
    TStack_170.BaseBitIndex = iVar28;
    TStack_170._28_4_ = iVar10;
    TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e8;
    TStack_170.UnvisitedBitMask = 0xffffffff;
    TStack_170.CurrentBitIndex = iVar10;
    if (iVar10 < iVar5) {
      do {
        pFVar13 = local_178;
        lVar18 = (longlong)iVar10 * 5 + 1;
        pFVar14 = (FString *)(local_178->_padding_ + lVar18 * 8);
        if (*(char *)(local_178->_padding_ + 0x15 + lVar18 * 8) == '\0') {
          iVar28 = (pFVar14->Data).ArrayNum;
          pFVar6 = (pFVar14->Data).AllocatorInstance.Data;
          bVar9 = true;
          local_1c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c8.Data.ArrayNum = iVar28;
          if (iVar28 == 0) {
            local_1c8.Data.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar28,0,(ForAnyElementType *)&local_1c8,iVar28,&local_1c8.Data.ArrayMax)
            ;
            memcpy(local_1c8.Data.AllocatorInstance.Data,pFVar6,(longlong)iVar28 * 2);
          }
          pFVar14 = &local_1c8;
        }
        else {
          bVar8 = true;
          pFVar14 = FConfigValue::ExpandValue(&local_a0,pFVar14);
        }
        local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1b8.Data.ArrayNum = (pFVar14->Data).ArrayNum;
        lVar18 = (longlong)local_1b8.Data.ArrayNum;
        pFVar6 = (pFVar14->Data).AllocatorInstance.Data;
        if (local_1b8.Data.ArrayNum == 0) {
          local_1b8.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_1b8.Data.ArrayNum,0,(ForAnyElementType *)&local_1b8,
                     local_1b8.Data.ArrayNum,&local_1b8.Data.ArrayMax);
          memcpy(local_1b8.Data.AllocatorInstance.Data,pFVar6,lVar18 * 2);
        }
        if ((bVar9) &&
           (bVar9 = false, local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
        }
        if ((bVar8) &&
           (bVar8 = false, local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0))
        {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        pFVar14 = ::FName::ToString((FName *)(pFVar13->_padding_ + (longlong)iVar10 * 0x28),
                                    &local_90);
        ::FString::ConcatFC(&local_b8,pFVar14,L" ");
        ::FString::ConcatFF(&local_c8,&local_b8,&local_1b8);
        ProcessCmdString(this,&local_c8,true);
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
        iVar10 = TStack_170.CurrentBitIndex;
      } while (TStack_170.CurrentBitIndex < (int)*(longlong *)&(TStack_170.Array)->NumBits);
    }
  }
  pTVar29 = (Type *)0x0;
  pwVar15 = FCommandLine::Get();
  ::FString::FString(&local_1d8,pwVar15);
  ::FString::FString(&local_1e8,L"-LogCmds=");
  uVar11 = ::FString::Find(&local_1d8,L"-EnvAfterHere",0xd,IgnoreCase,FromStart,-1);
  if (uVar11 == 0xffffffff) goto LAB_1417ed2a0;
  ::FString::RightChop(&local_1d8,&local_188,uVar11);
  while( true ) {
    local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar20.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    local_1a8.Data.ArrayNum = 0;
    local_1a8.Data.ArrayMax = 0;
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_188.Data.ArrayNum != 0) {
      FVar19.Data = local_188.Data.AllocatorInstance.Data;
    }
    bVar9 = FParse::Value((wchar_t *)FVar19.Data,(wchar_t *)FVar20.Data,&local_1a8,false,
                          (wchar_t **)0x0);
    if (!bVar9) break;
    ProcessCmdString(this,&local_1a8,true);
    if (local_1e8.Data.ArrayNum == 0) {
      pwVar15 = L"";
LAB_1417ed1a6:
      sVar16 = wcslen(pwVar15);
      iVar28 = ::FString::Find(&local_188,pwVar15,(int)sVar16,IgnoreCase,FromStart,-1);
      if (iVar28 < 0) goto LAB_1417ed1d3;
    }
    else {
      pwVar15 = (wchar_t *)local_1e8.Data.AllocatorInstance.Data;
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1417ed1a6;
      iVar28 = -1;
LAB_1417ed1d3:
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5560090324384087529>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\LogSuppressionInterface.cpp"
                         ,0x217,"Index >= 0");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iVar28 == -1) break;
    iVar25 = local_1e8.Data.ArrayNum + -1 + iVar28;
    if (local_1e8.Data.ArrayNum == 0) {
      iVar25 = iVar28;
    }
    ::FString::RemoveAt(&local_188,0,iVar25,No);
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (uVar11 != 0x7fffffff) {
    uVar23 = local_1d8.Data.ArrayNum - 1;
    if (local_1d8.Data.ArrayNum == 0) {
      uVar23 = 0;
    }
    uVar12 = uVar23;
    if ((int)uVar11 < (int)uVar23) {
      uVar12 = uVar11;
    }
    pTVar21 = pTVar29;
    if (0 < (int)uVar12) {
      pTVar21 = (Type *)(ulonglong)uVar12;
    }
    ::FString::RemoveAt(&local_1d8,(int)pTVar21,uVar23 - (int)pTVar21,No);
  }
  ::FString::RemoveAt(&local_1d8,0,0,No);
  while( true ) {
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
LAB_1417ed2a0:
    local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1e8.Data.ArrayNum != 0) {
      FVar20.Data = local_1e8.Data.AllocatorInstance.Data;
    }
    local_198.Data.ArrayNum = 0;
    local_198.Data.ArrayMax = 0;
    FVar19.Data = (FScriptContainerElement *)L"";
    if (local_1d8.Data.ArrayNum != 0) {
      FVar19.Data = local_1d8.Data.AllocatorInstance.Data;
    }
    bVar9 = FParse::Value((wchar_t *)FVar19.Data,(wchar_t *)FVar20.Data,&local_198,false,
                          (wchar_t **)0x0);
    if (!bVar9) break;
    ProcessCmdString(this,&local_198,true);
    if (local_1e8.Data.ArrayNum == 0) {
      pwVar15 = L"";
LAB_1417ed318:
      sVar16 = wcslen(pwVar15);
      iVar28 = ::FString::Find(&local_1d8,pwVar15,(int)sVar16,IgnoreCase,FromStart,-1);
      if (iVar28 < 0) goto LAB_1417ed346;
    }
    else {
      pwVar15 = (wchar_t *)local_1e8.Data.AllocatorInstance.Data;
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_1417ed318;
      iVar28 = -1;
LAB_1417ed346:
      bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5560090324384087509>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Logging\\LogSuppressionInterface.cpp"
                         ,0x22b,"Index >= 0");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iVar28 == -1) break;
    iVar25 = local_1e8.Data.ArrayNum + -1 + iVar28;
    if (local_1e8.Data.ArrayNum == 0) {
      iVar25 = iVar28;
    }
    ::FString::RemoveAt(&local_1d8,0,iVar25,No);
    local_188.Data.AllocatorInstance.Data = local_198.Data.AllocatorInstance.Data;
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pTVar2 = &this->ReverseAssociations;
  TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_80,
             (TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
              *)pTVar2);
  local_110 = 0;
  stack0xfffffffffffffec8 = local_80._16_16_;
  local_148 = (longlong *)local_80._0_8_;
  auStack_140._0_8_ = local_80._8_8_;
  local_128 = local_60;
  pTStack_120 = pTStack_58;
  uVar24 = local_80._24_8_ >> 0x20;
  local_118 = (TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
               *)pTVar2;
  if ((int)local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
    plVar26 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar11 = local_80._28_4_;
    do {
      this_00 = *(FLogCategoryBase **)(*local_148 + 8 + (longlong)(int)uVar24 * 0x18);
      local_108 = *(FName *)(*local_148 + (longlong)(int)uVar11 * 0x18);
      pTVar17 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                        *)&this->BootAssociations,local_108);
      pTVar21 = &pTVar17->field_0x8;
      if (pTVar17 == (TTuple<FName,unsigned_char> *)0x0) {
        pTVar21 = pTVar29;
      }
      if (pTVar21 == (Type *)0x0) {
        if ((*(int *)(*plVar26 + 0x9d4c) <
             `private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
             ::__l7::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
                                 ::__l7::_thread_safe_static_guard_0__),
           `private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
           ::__l7::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
                          ::__l7::NAME_BootGlobal,L"BootGlobal");
          _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
                               ::__l7::_thread_safe_static_guard_0__);
        }
        pTVar17 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                  ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                          *)&this->BootAssociations,
                         `private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
                         ::__l7::NAME_BootGlobal);
        pTVar21 = &pTVar17->field_0x8;
        if (pTVar17 == (TTuple<FName,unsigned_char> *)0x0) {
          pTVar21 = pTVar29;
        }
        if (pTVar21 != (Type *)0x0) goto LAB_1417ed4a4;
      }
      else {
LAB_1417ed4a4:
        TVar4 = *pTVar21;
        this_00->DefaultVerbosity = TVar4;
        FLogCategoryBase::SetVerbosity(this_00,TVar4);
      }
      if (this_00->Verbosity != NoLogging) {
        local_res10[0] = this_00->Verbosity;
        TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
        ::Emplace<FName_const_&,unsigned_char>
                  ((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                    *)&this->ToggleAssociations,&local_108,local_res10);
      }
      uStack_130 = uStack_130 & ~auStack_140._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
      uVar24 = (ulonglong)uStack_12c;
      uVar11 = uStack_12c;
    } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
    if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
      uVar11 = *(int *)&(local_118->Elements).field_0x8 - *(int *)&(local_118->Elements).field_0x34;
      if (3 < uVar11) {
        uVar24 = (ulonglong)((uVar11 >> 1) + 7) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar27 = 1 << ((byte)lVar18 & 0x1f);
      }
      if (((0 < (int)uVar11) && (local_118->HashSize < iVar27)) || (iVar27 < local_118->HashSize)) {
        local_118->HashSize = iVar27;
        TSet<TTuple<FName,FLogCategoryBase_*>,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>,FDefaultSetAllocator>
        ::Rehash(local_118);
      }
    }
  }
  if (this->bInitialized == false) {
    this_01 = FCoreDelegates::TSOnConfigSectionsChanged();
    local_100 = this;
    TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
    ::AddLambda<_FLogSuppressionImplementation::ProcessConfigAndCommandLine_::__l35::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
                *)this_01,&local_a8);
  }
  this->bInitialized = true;
  if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
  }
  return;
}

// ProcessLogOnly @ 1417ee550

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLogSuppressionImplementation::ProcessLogOnly
          (FLogSuppressionImplementation *this,FString *param_1,FOutputDevice *param_2)

{
  undefined1 *puVar1;
  TMultiMap<FName,FLogCategoryBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TMultiMap<FName,FLogCategoryBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>_>
  *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  FName *pFVar10;
  FString *pFVar11;
  Type TVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 local_res20 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_148;
  FName local_138;
  FName FStack_130;
  int local_128;
  int local_124;
  FName local_120;
  TMultiMap<FName,FLogCategoryBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>_>
  *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TMultiMap<FName,FLogCategoryBase_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FLogCategoryBase_*,1>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FString local_b8;
  FString local_a8;
  FName local_98;
  FString local_90;
  FName local_80;
  FName FStack_78;
  FString local_70 [2];
  undefined4 local_44;
  
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  ::FString::ParseIntoArrayWS(param_1,&local_148,(wchar_t *)0x0,true);
  if (1 < local_148.ArrayNum) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__),
       `private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__ == -1)) {
      ::FName::FName(&`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                      ::__l2::NAME_Only,L"only");
      _Init_thread_footer(&`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
    if ((local_148.ArrayNum < 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    iVar19 = 0;
    if (*(int *)(local_148.AllocatorInstance.Data + 0x18) == 0) {
      pwVar14 = L"";
    }
    else {
      pwVar14 = *(wchar_t **)(local_148.AllocatorInstance.Data + 0x10);
    }
    pFVar10 = ::FName::FName(&local_98,pwVar14);
    if (`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
        ::__l2::NAME_Only == *pFVar10) {
      if ((local_148.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if (*(int *)(local_148.AllocatorInstance.Data + 8) == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = *(wchar_t **)local_148.AllocatorInstance.Data;
      }
      ::FName::FName(&local_120,pwVar14);
      piVar16 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
      ;
      if ((*piVar16 <
           `private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_1__) &&
         (_Init_thread_header(&`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_1__),
         `private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_1__ == -1)) {
        ::FString::FString(&`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                            ::__l2::OffString," off");
        atexit(`FLogSuppressionImplementation::ProcessLogOnly'::__l2::
               _dynamic_atexit_destructor_for__OffString__);
        _Init_thread_footer(&`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_1__);
      }
      if ((*piVar16 <
           `private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
           ::__l2::_thread_safe_static_guard_2__) &&
         (_Init_thread_header(&`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                               ::__l2::_thread_safe_static_guard_2__),
         `private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
         ::__l2::_thread_safe_static_guard_2__ == -1)) {
        ::FString::FString(&`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                            ::__l2::OnString," Verbose");
        atexit(`FLogSuppressionImplementation::ProcessLogOnly'::__l2::
               _dynamic_atexit_destructor_for__OnString__);
        _Init_thread_footer(&`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                             ::__l2::_thread_safe_static_guard_2__);
      }
      puVar1 = &(this->ReverseAssociations).field_0x10;
      iVar4 = *(int *)&(this->ReverseAssociations).field_0x28;
      pTVar2 = &this->ReverseAssociations;
      local_f8 = 0;
      iStack_fc = local_f8;
      uStack_10c = 1;
      if (iVar4 != 0) {
        puVar21 = *(uint **)&(this->ReverseAssociations).field_0x20;
        if (puVar21 == (uint *)0x0) {
          puVar21 = (uint *)puVar1;
        }
        uVar18 = *puVar21;
        local_f8 = 0;
        iVar19 = 0;
        while (uVar18 == 0) {
          lVar13 = (longlong)iVar19;
          local_f8 = local_f8 + 0x20;
          iVar19 = iVar19 + 1;
          iStack_fc = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_1417ee7fe;
          uVar18 = puVar21[lVar13 + 1];
        }
        uStack_10c = -uVar18 & uVar18;
        uVar3 = (ulonglong)uStack_10c * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_128 = (int)lVar13;
        iStack_fc = local_f8 + -1 + local_128;
        if (iVar4 < iStack_fc) {
          iStack_fc = iVar4;
        }
      }
LAB_1417ee7fe:
      uVar18 = *(uint *)&(this->ReverseAssociations).field_0x28;
      uStack_f4 = local_44;
      uVar17 = uVar18 & 0xffffffe0;
      iStack_f0 = *(int *)&(this->ReverseAssociations).field_0x8 -
                  *(int *)&(this->ReverseAssociations).field_0x34;
      uStack_100 = 0xffffffff;
      TStack_e0._padding_ = CONCAT44(uStack_10c,iVar19);
      TStack_e0.CurrentBitIndex = iStack_fc;
      TStack_e0.UnvisitedBitMask = 0xffffffff;
      iVar15 = (int)uVar18 >> 5;
      TStack_e0._28_4_ = local_44;
      TStack_e0.BaseBitIndex = local_f8;
      uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
      local_118 = pTVar2;
      iStack_110 = iVar19;
      local_108 = puVar1;
      local_e8 = pTVar2;
      TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar18 < 0) || (iVar4 < (int)uVar18)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uVar5 = *(uint *)&(this->ReverseAssociations).field_0x28;
      if (uVar18 != uVar5) {
        puVar20 = *(undefined1 **)&(this->ReverseAssociations).field_0x20;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = puVar1;
        }
        uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
        while (uVar18 == 0) {
          lVar13 = (longlong)iVar15;
          uVar17 = uVar17 + 0x20;
          iVar15 = iVar15 + 1;
          uVar18 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
          goto LAB_1417ee920;
          uVar18 = *(uint *)(puVar20 + lVar13 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_124 = (int)lVar13;
        uVar18 = local_124 + -1 + uVar17;
        if ((int)uVar5 < (int)uVar18) {
          uVar18 = uVar5;
        }
      }
LAB_1417ee920:
      while( true ) {
        pTVar7 = local_e8;
        if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
          local_res20[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,FLogCategoryBase_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (((TStack_e0.CurrentBitIndex == uVar18) &&
            (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar7 == pTVar2)) break;
        pFVar10 = (FName *)(*(longlong *)pTVar7 + (longlong)TStack_e0.CurrentBitIndex * 0x18);
        local_138 = *pFVar10;
        FStack_130 = pFVar10[1];
        local_80 = local_138;
        FStack_78 = FStack_130;
        if (local_138 == local_120) {
          pFVar11 = ::FName::ToString(&local_138,&local_90);
          ::FString::ConcatFF(&local_b8,pFVar11,
                              &`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                               ::__l2::OnString);
          ProcessCmdString(this,&local_b8,false);
          if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          }
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (FStack_78 == (FName)0x0) {
            TVar12 = Verbose;
          }
          else {
            TVar12 = *(Type *)FStack_78;
          }
          ::ToString(TVar12);
          if ((local_148.ArrayNum < 1) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          FOutputDevice::LogfImpl(param_2,L"%s is now %s");
        }
        else {
          pFVar11 = ::FName::ToString(&local_138,local_70);
          ::FString::ConcatFF(&local_a8,pFVar11,
                              &`private:_bool___cdecl_FLogSuppressionImplementation::ProcessLogOnly(FString_const&___ptr64,FOutputDevice&___ptr64)___ptr64'
                               ::__l2::OffString);
          ProcessCmdString(this,&local_a8,false);
          if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a8.Data.AllocatorInstance.Data);
          }
          if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
          }
        }
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      }
      FOutputDevice::Log(param_2,L"Disabling other logs finished");
      bVar8 = true;
      goto LAB_1417eeade;
    }
  }
  bVar8 = false;
LAB_1417eeade:
  DestructItems<FString,int>((FString *)local_148.AllocatorInstance.Data,local_148.ArrayNum);
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  return bVar8;
}

// SetupSuppress @ 1417fe520

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLogSuppressionImplementation::SetupSuppress
          (FLogSuppressionImplementation *this,FLogCategoryBase *param_1,FName param_2)

{
  Type TVar1;
  TTuple<FName,unsigned_char> *pTVar2;
  Type *pTVar3;
  Type local_res8 [8];
  FName local_res18 [2];
  
  local_res18[0] = param_2;
  pTVar2 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                   *)&this->BootAssociations,param_2);
  pTVar3 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,unsigned_char> *)0x0) {
    pTVar3 = (Type *)0x0;
  }
  if (pTVar3 == (Type *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
        ::__l7::_thread_safe_static_guard_0__) {
      _Init_thread_header(&`private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
                           ::__l7::_thread_safe_static_guard_0__);
      if (`private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
          ::__l7::_thread_safe_static_guard_0__ == -1) {
        ::FName::FName(&`private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
                        ::__l7::NAME_BootGlobal,L"BootGlobal");
        _Init_thread_footer(&`private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
                             ::__l7::_thread_safe_static_guard_0__);
      }
    }
    pTVar2 = TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
                     *)&this->BootAssociations,
                    `private:_void___cdecl_FLogSuppressionImplementation::SetupSuppress(FLogCategoryBase*___ptr64,FName)___ptr64'
                    ::__l7::NAME_BootGlobal);
    pTVar3 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<FName,unsigned_char> *)0x0) {
      pTVar3 = (Type *)0x0;
    }
    if (pTVar3 == (Type *)0x0) goto LAB_1417fe5ac;
  }
  TVar1 = *pTVar3;
  param_1->DefaultVerbosity = TVar1;
  FLogCategoryBase::SetVerbosity(param_1,TVar1);
LAB_1417fe5ac:
  local_res8[0] = param_1->Verbosity;
  if (local_res8[0] != NoLogging) {
    TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
    ::Emplace<FName_const_&,unsigned_char>
              ((TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
                *)&this->ToggleAssociations,local_res18,local_res8);
  }
  return;
}

