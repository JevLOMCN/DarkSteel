// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 8

// FNodeColorsRegistry @ 144431830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FNodeColorsRegistry * __thiscall
UE::Dataflow::FNodeColorsRegistry::FNodeColorsRegistry(FNodeColorsRegistry *this)

{
  ulonglong uVar1;
  UObject *pUVar2;
  FName FVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UClass *this_00;
  FDelegateHandle FVar8;
  longlong lVar9;
  FNodeColorsRegistry *pFVar10;
  FName *pFVar11;
  FNodeColors *pFVar12;
  byte bVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  uint uVar17;
  FName *pFVar18;
  FNameEntryId FVar19;
  uint uVar20;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  FName local_100;
  FName FStack_f8;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  FName local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FName local_98;
  FName FStack_90;
  undefined1 local_88 [32];
  uint *local_68;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  FDelegateHandle local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar19.Value = 0;
  *(undefined8 *)&this->ColorsMap = 0;
  *(undefined8 *)&(this->ColorsMap).field_0x8 = 0;
  *(undefined8 *)&(this->ColorsMap).field_0x20 = 0;
  *(undefined4 *)&(this->ColorsMap).field_0x28 = 0;
  *(undefined4 *)&(this->ColorsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColorsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ColorsMap).field_0x34 = 0;
  *(undefined8 *)&(this->ColorsMap).field_0x40 = 0;
  *(undefined4 *)&(this->ColorsMap).field_0x48 = 0;
  (this->DataflowSettingsChangedDelegateHandle).ID = 0;
  this_00 = UDataflowSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  FVar8 = TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
          ::AddRaw<UE::Dataflow::FNodeColorsRegistry>
                    ((TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
                      *)&pUVar2[6].field_0x8,(FNodeColorsRegistry *)&local_98,(pmf_8a83b43d)this);
                    /* WARNING: Load size is inaccurate */
  (this->DataflowSettingsChangedDelegateHandle).ID = *FVar8.ID;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48.ID = 0;
  local_40 = 0;
  TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
               *)local_88,
              (TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
               *)&pUVar2[1].field_0x10);
  uVar17 = local_60;
  FStack_f8.Number = 1;
  local_e0 = 0;
  uStack_e4 = 0;
  if (local_60 != 0) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar20 = *puVar14;
    local_e0 = 0;
    while (uVar20 == 0) {
      lVar9 = (longlong)(int)FVar19.Value;
      local_e0 = local_e0 + 0x20;
      FVar19.Value = FVar19.Value + 1;
      uStack_e4 = local_60;
      if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < (int)FVar19.Value)
      goto LAB_144431991;
      uVar20 = (puVar14 + 1)[lVar9];
    }
    FStack_f8.Number = -uVar20 & uVar20;
    uVar1 = (ulonglong)FStack_f8.Number * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_d0 = (int)lVar9;
    uStack_e4 = local_e0 + -1 + local_d0;
    if ((int)local_60 < (int)uStack_e4) {
      uStack_e4 = local_60;
    }
  }
LAB_144431991:
  local_100 = (FName)local_88;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar20 = local_60 & 0xffffffe0;
  iStack_d8 = local_88._8_4_ - local_54;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  FStack_f8.ComparisonIndex.Value = FVar19.Value;
  TStack_c0._padding_._0_4_ = FVar19.Value;
  TStack_c0._padding_._4_4_ = FStack_f8.Number;
  iVar16 = (int)local_60 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar13 = (byte)local_60;
  uStack_dc = uStack_e4;
  local_c8 = local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_60 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FNodeColorsRegistry *)(*pcVar5)();
    return pFVar10;
  }
  if (uVar17 != local_60) {
    puVar14 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar14 = local_68;
    }
    uVar17 = -1 << (bVar13 & 0x1f) & puVar14[iVar16];
    while (uVar17 == 0) {
      lVar9 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar17 = local_60;
      if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar16)
      goto LAB_144431a9c;
      uVar17 = (puVar14 + 1)[lVar9];
    }
    uVar1 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar17 = (int)lVar9 + -1 + uVar20;
    if ((int)local_60 < (int)uVar17) {
      uVar17 = local_60;
    }
  }
LAB_144431a9c:
  do {
    FVar3 = local_c8;
    if (*(int *)((longlong)local_c8 + 8) - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    if (((TStack_c0.CurrentBitIndex == uVar17) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (FVar3 == (FName)local_88)) {
      local_40 = 0;
      if ((void *)local_48.ID != (void *)0x0) {
        FMemory::Free((void *)local_48.ID);
      }
      iVar16 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar16 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
      }
      local_58 = 0xffffffff;
      local_54 = 0;
      local_60 = 0;
      if (0x80 < local_5c) {
        local_5c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
      }
      if (local_68 != (uint *)0x0) {
        FMemory::Free(local_68);
      }
      if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_88._0_8_);
      }
      return this;
    }
    pFVar18 = (FName *)((longlong)TStack_c0.CurrentBitIndex * 0x30 + *(longlong *)FVar3);
    local_98 = pFVar18[1];
    FStack_90 = pFVar18[2];
    FVar3 = *pFVar18;
    local_100 = pFVar18[3];
    FStack_f8 = pFVar18[4];
    uVar20 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
    uVar20 = uVar20 + FVar3.Number;
    if (*(int *)&(this->ColorsMap).field_0x8 != *(int *)&(this->ColorsMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->ColorsMap).field_0x40;
      puVar15 = &(this->ColorsMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar15 = puVar4;
      }
      uVar7 = *(uint *)(puVar15 +
                       (ulonglong)(*(int *)&(this->ColorsMap).field_0x48 - 1U & uVar20) * 4);
      if (uVar7 != 0xffffffff) {
        do {
          pFVar11 = (FName *)((longlong)(int)uVar7 * 0x30 + *(longlong *)&this->ColorsMap);
          if (*pFVar11 == *pFVar18) {
            if (pFVar11 != (FName *)0x0) {
              pFVar12 = (FNodeColors *)(pFVar11 + 1);
              goto LAB_144431b68;
            }
            break;
          }
          uVar7 = pFVar11[5].ComparisonIndex.Value;
        } while (uVar7 != 0xffffffff);
      }
    }
    pFVar12 = TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
              ::EmplaceByHash<FName_const_&>
                        ((TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
                          *)this,uVar20,pFVar18);
LAB_144431b68:
    *(FName *)&(pFVar12->NodeTitleColor).field0_0x0 = local_98;
    *(FName *)((longlong)&(pFVar12->NodeTitleColor).field0_0x0 + 8) = FStack_90;
    *(FName *)&(pFVar12->NodeBodyTintColor).field0_0x0 = local_100;
    *(FName *)((longlong)&(pFVar12->NodeBodyTintColor).field0_0x0 + 8) = FStack_f8;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// ~FNodeColorsRegistry @ 144433c20

void __thiscall UE::Dataflow::FNodeColorsRegistry::~FNodeColorsRegistry(FNodeColorsRegistry *this)

{
  void *pvVar1;
  bool bVar2;
  UClass *pUVar3;
  
  bVar2 = UObjectInitialized();
  if (bVar2) {
    pUVar3 = UDataflowSettings::StaticClass();
    if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar3 = UDataflowSettings::StaticClass();
      if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar3);
      }
      TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
      ::Remove((TMulticastDelegateRegistration<void___cdecl(TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>_const_&),FDefaultDelegateUserPolicy>
                *)&(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr[6].field_0x8,
               (FDelegateHandle)(this->DataflowSettingsChangedDelegateHandle).ID);
    }
  }
  *(undefined4 *)&(this->ColorsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColorsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Get @ 14444a250

FNodeColorsRegistry * __cdecl UE::Dataflow::FNodeColorsRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FNodeColorsRegistry *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FNodeColorsRegistry((FNodeColorsRegistry *)
                        &`private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::Singleton);
    DAT_15507c220 =
         &`private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FNodeColorsRegistry *)DAT_15507c220 == (FNodeColorsRegistry *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNodeColorsRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return (FNodeColorsRegistry *)DAT_15507c220;
}

// GetNodeBodyTintColor @ 14444bba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall
UE::Dataflow::FNodeColorsRegistry::GetNodeBodyTintColor
          (FNodeColorsRegistry *this,FLinearColor *__return_storage_ptr__,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName *pFVar6;
  TTuple<FName,FNodeColors> *pTVar7;
  FLinearColor *pFVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ForAnyElementType FVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FName local_res8;
  FName local_res18;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  FVar1 = *param_1;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->ColorsMap).field_0x8 != *(int *)&(this->ColorsMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ColorsMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ColorsMap).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->ColorsMap).field_0x48 - 1U & FVar1.Number + uVar4) *
                              4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->ColorsMap + (longlong)iVar5 * 0x30) == FVar1) {
          pTVar7 = TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                           *)this,*param_1);
          if ((pTVar7 == (TTuple<FName,FNodeColors> *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FLinearColor *)(*pcVar2)();
            return pFVar8;
          }
          uVar12 = *(undefined8 *)&pTVar7->field_0x18;
          uVar13 = *(undefined8 *)&pTVar7->field_0x20;
          goto LAB_14444bdb6;
        }
        iVar5 = *(int *)(*(longlong *)&this->ColorsMap + 0x28 + (longlong)iVar5 * 0x30);
      } while (iVar5 != -1);
    }
  }
  ::FName::ToString(param_1,&local_48);
  iVar5 = ::FString::Find(&local_48,L"|",1,IgnoreCase,FromStart,-1);
  while (iVar5 != -1) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::FString(&local_28,L"|");
    bVar3 = ::FString::Split(&local_48,&local_28,&local_58,&local_38,IgnoreCase,FromEnd);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar11.Data = local_58.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_res8,(wchar_t *)FVar11.Data);
      FVar1 = *pFVar6;
      uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      if (*(int *)&(this->ColorsMap).field_0x8 != *(int *)&(this->ColorsMap).field_0x34) {
        puVar9 = *(undefined1 **)&(this->ColorsMap).field_0x40;
        puVar10 = &(this->ColorsMap).field_0x38;
        if (puVar9 != (undefined1 *)0x0) {
          puVar10 = puVar9;
        }
        iVar5 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&(this->ColorsMap).field_0x48 - 1U & FVar1.Number + uVar4) * 4);
        if (iVar5 != -1) {
          do {
            if (*(FName *)(*(longlong *)&this->ColorsMap + (longlong)iVar5 * 0x30) == FVar1) {
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_58.Data.ArrayNum != 0) {
                FVar11.Data = local_58.Data.AllocatorInstance.Data;
              }
              pFVar6 = ::FName::FName(&local_res18,(wchar_t *)FVar11.Data);
              pTVar7 = TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                               *)this,*pFVar6);
              if ((pTVar7 == (TTuple<FName,FNodeColors> *)0x0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x27b,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                pFVar8 = (FLinearColor *)(*pcVar2)();
                return pFVar8;
              }
              uVar12 = *(undefined8 *)&pTVar7->field_0x20;
              *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
                   *(undefined8 *)&pTVar7->field_0x18;
              *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar12;
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return __return_storage_ptr__;
              }
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
              return __return_storage_ptr__;
            }
            iVar5 = *(int *)(*(longlong *)&this->ColorsMap + 0x28 + (longlong)iVar5 * 0x30);
          } while (iVar5 != -1);
        }
      }
      iVar5 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar5 = ::FString::Find(&local_48,L"|",1,IgnoreCase,FromStart,-1);
  }
  uVar12 = ___xmm_3f800000000000000000000000000000;
  uVar13 = _UNK_150689648;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    uVar12 = ___xmm_3f800000000000000000000000000000;
    uVar13 = _UNK_150689648;
  }
LAB_14444bdb6:
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar12;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar13;
  return __return_storage_ptr__;
}

// GetNodeTitleColor @ 14444beb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall
UE::Dataflow::FNodeColorsRegistry::GetNodeTitleColor
          (FNodeColorsRegistry *this,FLinearColor *__return_storage_ptr__,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FName *pFVar6;
  TTuple<FName,FNodeColors> *pTVar7;
  FLinearColor *pFVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  ForAnyElementType FVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FName local_res8;
  FName local_res18;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  FVar1 = *param_1;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->ColorsMap).field_0x8 != *(int *)&(this->ColorsMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ColorsMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ColorsMap).field_0x38;
    }
    iVar5 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->ColorsMap).field_0x48 - 1U & FVar1.Number + uVar4) *
                              4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->ColorsMap + (longlong)iVar5 * 0x30) == FVar1) {
          pTVar7 = TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                           *)this,*param_1);
          if ((pTVar7 == (TTuple<FName,FNodeColors> *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FLinearColor *)(*pcVar2)();
            return pFVar8;
          }
          uVar12 = *(undefined8 *)&pTVar7->field_0x8;
          uVar13 = *(undefined8 *)&pTVar7->field_0x10;
          goto LAB_14444c0c6;
        }
        iVar5 = *(int *)(*(longlong *)&this->ColorsMap + 0x28 + (longlong)iVar5 * 0x30);
      } while (iVar5 != -1);
    }
  }
  ::FName::ToString(param_1,&local_48);
  iVar5 = ::FString::Find(&local_48,L"|",1,IgnoreCase,FromStart,-1);
  while (iVar5 != -1) {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::FString(&local_28,L"|");
    bVar3 = ::FString::Split(&local_48,&local_28,&local_58,&local_38,IgnoreCase,FromEnd);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      FVar11.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar11.Data = local_58.Data.AllocatorInstance.Data;
      }
      pFVar6 = ::FName::FName(&local_res8,(wchar_t *)FVar11.Data);
      FVar1 = *pFVar6;
      uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
      if (*(int *)&(this->ColorsMap).field_0x8 != *(int *)&(this->ColorsMap).field_0x34) {
        puVar9 = *(undefined1 **)&(this->ColorsMap).field_0x40;
        puVar10 = &(this->ColorsMap).field_0x38;
        if (puVar9 != (undefined1 *)0x0) {
          puVar10 = puVar9;
        }
        iVar5 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&(this->ColorsMap).field_0x48 - 1U & FVar1.Number + uVar4) * 4);
        if (iVar5 != -1) {
          do {
            if (*(FName *)(*(longlong *)&this->ColorsMap + (longlong)iVar5 * 0x30) == FVar1) {
              FVar11.Data = (FScriptContainerElement *)L"";
              if (local_58.Data.ArrayNum != 0) {
                FVar11.Data = local_58.Data.AllocatorInstance.Data;
              }
              pFVar6 = ::FName::FName(&local_res18,(wchar_t *)FVar11.Data);
              pTVar7 = TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                       ::Find((TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                               *)this,*pFVar6);
              if ((pTVar7 == (TTuple<FName,FNodeColors> *)0x0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Pair != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                     ,0x27b,L""), bVar3)) {
                pcVar2 = (code *)swi(3);
                pFVar8 = (FLinearColor *)(*pcVar2)();
                return pFVar8;
              }
              uVar12 = *(undefined8 *)&pTVar7->field_0x10;
              *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar7->field_0x8
              ;
              *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar12;
              if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_38.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
                return __return_storage_ptr__;
              }
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
              return __return_storage_ptr__;
            }
            iVar5 = *(int *)(*(longlong *)&this->ColorsMap + 0x28 + (longlong)iVar5 * 0x30);
          } while (iVar5 != -1);
        }
      }
      iVar5 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar5 = 0;
      }
      ::FString::AssignRange(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar5);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    iVar5 = ::FString::Find(&local_48,L"|",1,IgnoreCase,FromStart,-1);
  }
  uVar12 = ___xmm_3f800000000000000000000000000000;
  uVar13 = _UNK_150689648;
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
    uVar12 = ___xmm_3f800000000000000000000000000000;
    uVar13 = _UNK_150689648;
  }
LAB_14444c0c6:
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = uVar12;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar13;
  return __return_storage_ptr__;
}

// NodeColorsChangedInSettings @ 1444524b0

void __thiscall
UE::Dataflow::FNodeColorsRegistry::NodeColorsChangedInSettings
          (FNodeColorsRegistry *this,
          TMap<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FNodeColors *pFVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  FName *pFVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  undefined1 local_res10 [8];
  int local_res18;
  undefined8 uStack_90;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar18 = 0;
  uVar11 = 1;
  iVar20 = 0;
  iVar12 = 0;
  if (iVar3 != 0) {
    puVar21 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar16 = *puVar21;
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar12 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_14445254d;
      uVar16 = puVar21[lVar14 + 1];
    }
    uVar11 = -uVar16 & uVar16;
    uVar2 = (ulonglong)uVar11 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iVar12 = local_res18 + -1 + iVar20;
    if (iVar3 < iVar12) {
      iVar12 = iVar3;
    }
  }
LAB_14445254d:
  uVar16 = *(uint *)&param_1->field_0x28;
  uVar15 = uVar16 & 0xffffffe0;
  uStack_90 = CONCAT44(uVar11,iVar18);
  TStack_60.CurrentBitIndex = iVar12;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  iVar18 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iVar12;
  TStack_60.BaseBitIndex = iVar20;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar11 = *(uint *)&param_1->field_0x28;
  if (uVar16 != uVar11) {
    puVar19 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      uVar16 = uVar11;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_144452650;
      uVar16 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar11 < (int)uVar16) {
      uVar16 = uVar11;
    }
  }
LAB_144452650:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FNodeColors>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_60.CurrentBitIndex == uVar16) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar17 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)param_1);
    FVar6 = pFVar17[1];
    FVar7 = pFVar17[2];
    FVar4 = *pFVar17;
    FVar8 = pFVar17[3];
    FVar9 = pFVar17[4];
    uVar11 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
    pFVar13 = TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
                          *)this,uVar11 + FVar4.Number,pFVar17);
    *(FName *)&(pFVar13->NodeTitleColor).field0_0x0 = FVar6;
    *(FName *)((longlong)&(pFVar13->NodeTitleColor).field0_0x0 + 8) = FVar7;
    *(FName *)&(pFVar13->NodeBodyTintColor).field0_0x0 = FVar8;
    *(FName *)((longlong)&(pFVar13->NodeBodyTintColor).field0_0x0 + 8) = FVar9;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RegisterNodeColors @ 144459830

void __thiscall
UE::Dataflow::FNodeColorsRegistry::RegisterNodeColors
          (FNodeColorsRegistry *this,FName *param_1,FNodeColors *param_2)

{
  FName FVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *this_00;
  TTuple<FName,FNodeColors> *pTVar7;
  undefined1 *puVar8;
  
  FVar1 = *param_1;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->ColorsMap).field_0x8 != *(int *)&(this->ColorsMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->ColorsMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ColorsMap).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->ColorsMap).field_0x48 - 1U & FVar1.Number + uVar5) *
                              4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->ColorsMap + (longlong)iVar6 * 0x30) == FVar1)
        goto LAB_1444598b6;
        iVar6 = *(int *)(*(longlong *)&this->ColorsMap + 0x28 + (longlong)iVar6 * 0x30);
      } while (iVar6 != -1);
    }
  }
  TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
  ::Emplace<FName_const_&,FNodeColors_const_&>
            ((TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
              *)this,param_1,param_2);
LAB_1444598b6:
  this_00 = UDataflowSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FVar1 = *param_1;
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&pUVar2[1].field_0x18 != *(int *)&pUVar2[2].field_0x1c) {
    puVar8 = *(undefined1 **)(pUVar2 + 3);
    if (*(undefined1 **)(pUVar2 + 3) == (undefined1 *)0x0) {
      puVar8 = &pUVar2[2].field_0x20;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)(*(int *)&pUVar2[3].field_0x8 - 1U & FVar1.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&pUVar2[1].field_0x10 + (longlong)iVar6 * 0x30) == FVar1)
        goto LAB_144459947;
        iVar6 = *(int *)(*(longlong *)&pUVar2[1].field_0x10 + 0x28 + (longlong)iVar6 * 0x30);
      } while (iVar6 != -1);
    }
  }
  TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
  ::Emplace<FName_const_&,FNodeColors_const_&>
            ((TMapBase<FName,FNodeColors,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>_>
              *)&pUVar2[1].field_0x10,param_1,param_2);
LAB_144459947:
  pTVar7 = TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FNodeColors>,TDefaultMapHashableKeyFuncs<FName,FNodeColors,0>,FDefaultSetAllocator>
                   *)&pUVar2[1].field_0x10,*param_1);
  if (pTVar7 == (TTuple<FName,FNodeColors> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// TearDown @ 144466a70

void __cdecl UE::Dataflow::FNodeColorsRegistry::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_15507c220 = 0;
      atexit(`TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::Reset
            ((TLazySingleton<UE::Dataflow::FNodeColorsRegistry> *)
             &`private:_static_class_TLazySingleton<class_UE::Dataflow::FNodeColorsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FNodeColorsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

