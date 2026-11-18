// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowCore
// Functions: 9

// FPinSettingsRegistry @ 144431d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FPinSettingsRegistry * __thiscall
UE::Dataflow::FPinSettingsRegistry::FPinSettingsRegistry(FPinSettingsRegistry *this)

{
  FName *pFVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  float fVar4;
  UObject *pUVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  code *pcVar9;
  longlong *plVar10;
  bool bVar11;
  UClass *this_00;
  FDelegateHandle FVar12;
  longlong lVar13;
  FPinSettingsRegistry *pFVar14;
  FPinSettings *pFVar15;
  byte bVar16;
  uint *puVar17;
  undefined1 *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [8];
  longlong *local_100;
  int iStack_f8;
  uint uStack_f4;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  int local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  longlong *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
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
  iVar21 = 0;
  *(undefined8 *)&this->SettingsMap = 0;
  *(undefined8 *)&(this->SettingsMap).field_0x8 = 0;
  *(undefined8 *)&(this->SettingsMap).field_0x20 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x28 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SettingsMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SettingsMap).field_0x34 = 0;
  *(undefined8 *)&(this->SettingsMap).field_0x40 = 0;
  *(undefined4 *)&(this->SettingsMap).field_0x48 = 0;
  (this->DataflowSettingsChangedDelegateHandle).ID = 0;
  this_00 = UDataflowSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar5 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  FVar12 = TMulticastDelegateRegistration<void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
           ::AddRaw<UE::Dataflow::FPinSettingsRegistry>
                     ((TMulticastDelegateRegistration<void___cdecl(TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>_const_&),FDefaultDelegateUserPolicy>
                       *)(pUVar5 + 7),(FPinSettingsRegistry *)local_98,(pmf_a39961ab)this);
                    /* WARNING: Load size is inaccurate */
  (this->DataflowSettingsChangedDelegateHandle).ID = *FVar12.ID;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (uint *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48.ID = 0;
  local_40 = 0;
  TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
               *)local_88,
              (TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
               *)&pUVar5[3].field_0x10);
  uVar20 = local_60;
  uStack_f4 = 1;
  local_e0 = 0;
  uStack_e4 = 0;
  if (local_60 != 0) {
    puVar17 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar17 = local_68;
    }
    uVar22 = *puVar17;
    local_e0 = 0;
    while (uVar22 == 0) {
      lVar13 = (longlong)iVar21;
      local_e0 = local_e0 + 0x20;
      iVar21 = iVar21 + 1;
      uStack_e4 = local_60;
      if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar21)
      goto LAB_144431ec1;
      uVar22 = (puVar17 + 1)[lVar13];
    }
    uStack_f4 = -uVar22 & uVar22;
    uVar2 = (ulonglong)uStack_f4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_d0 = (int)lVar13;
    uStack_e4 = local_e0 + -1 + local_d0;
    if ((int)local_60 < (int)uStack_e4) {
      uStack_e4 = local_60;
    }
  }
LAB_144431ec1:
  local_100 = (longlong *)local_88;
  local_f0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  uVar22 = local_60 & 0xffffffe0;
  iStack_d8 = local_88._8_4_ - local_54;
  uStack_e8 = 0xffffffff;
  TStack_c0.CurrentBitIndex = uStack_e4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_f4,iVar21);
  iVar19 = (int)local_60 >> 5;
  TStack_c0._28_4_ = uStack_e4;
  TStack_c0.BaseBitIndex = local_e0;
  uStack_a0 = CONCAT44(uStack_d4,iStack_d8);
  bVar16 = (byte)local_60;
  iStack_f8 = iVar21;
  uStack_dc = uStack_e4;
  local_c8 = local_100;
  TStack_c0.Array = local_f0;
  if (((int)local_60 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    pFVar14 = (FPinSettingsRegistry *)(*pcVar9)();
    return pFVar14;
  }
  if (uVar20 != local_60) {
    puVar17 = (uint *)(local_88 + 0x10);
    if (local_68 != (uint *)0x0) {
      puVar17 = local_68;
    }
    uVar20 = -1 << (bVar16 & 0x1f) & puVar17[iVar19];
    while (uVar20 == 0) {
      lVar13 = (longlong)iVar19;
      uVar22 = uVar22 + 0x20;
      iVar19 = iVar19 + 1;
      uVar20 = local_60;
      if ((int)(((int)(local_60 - 1) >> 0x1f & 0x1fU) + (local_60 - 1)) >> 5 < iVar19)
      goto LAB_144431fcc;
      uVar20 = (puVar17 + 1)[lVar13];
    }
    uVar2 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar20 = (int)lVar13 + -1 + uVar22;
    if ((int)local_60 < (int)uVar20) {
      uVar20 = local_60;
    }
  }
LAB_144431fcc:
  do {
    plVar10 = local_c8;
    if ((int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34) != (int)uStack_a0) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_108);
    }
    lVar13 = (longlong)TStack_c0.CurrentBitIndex;
    if (((TStack_c0.CurrentBitIndex == uVar20) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar10 == (longlong *)local_88)) {
      local_40 = 0;
      if ((void *)local_48.ID != (void *)0x0) {
        FMemory::Free((void *)local_48.ID);
      }
      iVar21 = SUB84(local_88._8_8_,4);
      local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
      if (iVar21 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x24,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
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
    lVar6 = *plVar10;
    puVar3 = (undefined8 *)(lVar6 + 8 + lVar13 * 0x24);
    local_98._0_8_ = *puVar3;
    local_98._8_8_ = puVar3[1];
    uVar7 = *(undefined8 *)(lVar6 + lVar13 * 0x24);
    pFVar1 = (FName *)(lVar6 + lVar13 * 0x24);
    fVar4 = (float)pFVar1[3].ComparisonIndex.Value;
    uVar22 = ::GetTypeHash((FNameEntryId)(uint)uVar7);
    uVar22 = uVar22 + (int)((ulonglong)uVar7 >> 0x20);
    if (*(int *)&(this->SettingsMap).field_0x8 != *(int *)&(this->SettingsMap).field_0x34) {
      puVar8 = *(undefined1 **)&(this->SettingsMap).field_0x40;
      puVar18 = &(this->SettingsMap).field_0x38;
      if (puVar8 != (undefined1 *)0x0) {
        puVar18 = puVar8;
      }
      iVar21 = *(int *)(puVar18 +
                       (ulonglong)(*(int *)&(this->SettingsMap).field_0x48 - 1U & uVar22) * 4);
      if (iVar21 != -1) {
        do {
          lVar13 = *(longlong *)&this->SettingsMap + (longlong)iVar21 * 0x24;
          if (*(FName *)(*(longlong *)&this->SettingsMap + (longlong)iVar21 * 0x24) == *pFVar1) {
            if (lVar13 != 0) {
              pFVar15 = (FPinSettings *)(lVar13 + 8);
              goto LAB_144432096;
            }
            break;
          }
          iVar21 = *(int *)(lVar13 + 0x1c);
        } while (iVar21 != -1);
      }
    }
    pFVar15 = TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
              ::EmplaceByHash<FName_const_&>
                        ((TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
                          *)this,uVar22,pFVar1);
LAB_144432096:
    *(undefined8 *)&(pFVar15->PinColor).field0_0x0 = local_98._0_8_;
    *(undefined8 *)((longlong)&(pFVar15->PinColor).field0_0x0 + 8) = local_98._8_8_;
    pFVar15->WireThickness = fVar4;
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// ~FPinSettingsRegistry @ 144433d80

void __thiscall
UE::Dataflow::FPinSettingsRegistry::~FPinSettingsRegistry(FPinSettingsRegistry *this)

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
  *(undefined4 *)&(this->SettingsMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SettingsMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// Get @ 14444a310

FPinSettingsRegistry * __cdecl UE::Dataflow::FPinSettingsRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FPinSettingsRegistry *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    FPinSettingsRegistry
              ((FPinSettingsRegistry *)
               &`private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                ::__l2::Singleton);
    DAT_15507c1b8 =
         &`private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FPinSettingsRegistry *)DAT_15507c1b8 == (FPinSettingsRegistry *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPinSettingsRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return (FPinSettingsRegistry *)DAT_15507c1b8;
}

// GetPinColor @ 14444cbc0

FLinearColor * __thiscall
UE::Dataflow::FPinSettingsRegistry::GetPinColor
          (FPinSettingsRegistry *this,FLinearColor *__return_storage_ptr__,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  TTuple<FName,FPinSettings> *pTVar7;
  FLinearColor *pFVar8;
  undefined1 *puVar9;
  
  FVar1 = *param_1;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->SettingsMap).field_0x8 != *(int *)&(this->SettingsMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->SettingsMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SettingsMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->SettingsMap).field_0x48 - 1U & FVar1.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->SettingsMap + (longlong)iVar6 * 0x24) == FVar1) {
          pTVar7 = TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
                           *)this,*param_1);
          if ((pTVar7 == (TTuple<FName,FPinSettings> *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pFVar8 = (FLinearColor *)(*pcVar2)();
            return pFVar8;
          }
          uVar3 = *(undefined8 *)&pTVar7->field_0x10;
          *(undefined8 *)&__return_storage_ptr__->field0_0x0 = *(undefined8 *)&pTVar7->field_0x8;
          *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar3;
          return __return_storage_ptr__;
        }
        iVar6 = *(int *)(*(longlong *)&this->SettingsMap + 0x1c + (longlong)iVar6 * 0x24);
      } while (iVar6 != -1);
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  (__return_storage_ptr__->field0_0x0)._s_0.B = 0.0;
  return __return_storage_ptr__;
}

// GetPinWireThickness @ 14444cea0

float __thiscall
UE::Dataflow::FPinSettingsRegistry::GetPinWireThickness(FPinSettingsRegistry *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TTuple<FName,FPinSettings> *pTVar6;
  undefined1 *puVar7;
  float fVar8;
  
  FVar1 = *param_1;
  uVar4 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->SettingsMap).field_0x8 != *(int *)&(this->SettingsMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->SettingsMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->SettingsMap).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->SettingsMap).field_0x48 - 1U & FVar1.Number + uVar4)
                              * 4);
    if (iVar5 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->SettingsMap + (longlong)iVar5 * 0x24) == FVar1) {
          pTVar6 = TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
                   ::Find((TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
                           *)this,*param_1);
          if (pTVar6 == (TTuple<FName,FPinSettings> *)0x0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Pair != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                               ,0x27b,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              fVar8 = (float)(*pcVar2)();
              return fVar8;
            }
          }
          return *(float *)&pTVar6->field_0x18;
        }
        iVar5 = *(int *)(*(longlong *)&this->SettingsMap + 0x1c + (longlong)iVar5 * 0x24);
      } while (iVar5 != -1);
    }
  }
  return __real_3f800000;
}

// IsPinTypeRegistered @ 144451710

bool __thiscall
UE::Dataflow::FPinSettingsRegistry::IsPinTypeRegistered(FPinSettingsRegistry *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->SettingsMap).field_0x8 != *(int *)&(this->SettingsMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->SettingsMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SettingsMap).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SettingsMap).field_0x48 - 1U & FVar1.Number + uVar2)
                              * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->SettingsMap + (longlong)iVar3 * 0x24) == FVar1) {
          return true;
        }
        iVar3 = *(int *)(*(longlong *)&this->SettingsMap + 0x1c + (longlong)iVar3 * 0x24);
      } while (iVar3 != -1);
    }
  }
  return false;
}

// PinSettingsChangedInSettings @ 144452cf0

void __thiscall
UE::Dataflow::FPinSettingsRegistry::PinSettingsChangedInSettings
          (FPinSettingsRegistry *this,
          TMap<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
          *param_1)

{
  undefined1 *puVar1;
  FName *pFVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  float fVar6;
  longlong lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FPinSettings *pFVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  uint *puVar22;
  undefined1 local_res10 [8];
  int local_res18;
  undefined8 uStack_90;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar5 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar19 = 0;
  uVar13 = 1;
  iVar21 = 0;
  iVar14 = 0;
  if (iVar5 != 0) {
    puVar22 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar22 = (uint *)puVar1;
    }
    uVar18 = *puVar22;
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar19;
      iVar21 = iVar21 + 0x20;
      iVar19 = iVar19 + 1;
      iVar14 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_144452d8d;
      uVar18 = puVar22[lVar16 + 1];
    }
    uVar13 = -uVar18 & uVar18;
    uVar3 = (ulonglong)uVar13 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_res18 = (int)lVar16;
    iVar14 = local_res18 + -1 + iVar21;
    if (iVar5 < iVar14) {
      iVar14 = iVar5;
    }
  }
LAB_144452d8d:
  uVar18 = *(uint *)&param_1->field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  uStack_90 = CONCAT44(uVar13,iVar19);
  TStack_60.CurrentBitIndex = iVar14;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = uStack_90;
  iVar19 = (int)uVar18 >> 5;
  TStack_60._28_4_ = iVar14;
  TStack_60.BaseBitIndex = iVar21;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar13 = *(uint *)&param_1->field_0x28;
  if (uVar18 != uVar13) {
    puVar20 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar16 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_144452e90;
      uVar18 = *(uint *)(puVar20 + lVar16 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar18 = (int)lVar16 + -1 + uVar17;
    if ((int)uVar13 < (int)uVar18) {
      uVar18 = uVar13;
    }
  }
LAB_144452e90:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FPinSettings>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar16 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar18) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar7 = *(longlong *)param_1;
    puVar4 = (undefined8 *)(lVar7 + 8 + lVar16 * 0x24);
    uVar10 = *puVar4;
    uVar11 = puVar4[1];
    uVar8 = *(undefined8 *)(lVar7 + lVar16 * 0x24);
    pFVar2 = (FName *)(lVar7 + lVar16 * 0x24);
    fVar6 = (float)pFVar2[3].ComparisonIndex.Value;
    uVar13 = ::GetTypeHash((FNameEntryId)(uint)uVar8);
    pFVar15 = TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
                          *)this,uVar13 + (int)((ulonglong)uVar8 >> 0x20),pFVar2);
    *(undefined8 *)&(pFVar15->PinColor).field0_0x0 = uVar10;
    *(undefined8 *)((longlong)&(pFVar15->PinColor).field0_0x0 + 8) = uVar11;
    pFVar15->WireThickness = fVar6;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// RegisterPinSettings @ 14445a7f0

void __thiscall
UE::Dataflow::FPinSettingsRegistry::RegisterPinSettings
          (FPinSettingsRegistry *this,FName *param_1,FPinSettings *param_2)

{
  FName FVar1;
  UObject *pUVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UClass *this_00;
  TTuple<FName,FPinSettings> *pTVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  FVar1 = *param_1;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&(this->SettingsMap).field_0x8 != *(int *)&(this->SettingsMap).field_0x34) {
    puVar8 = *(undefined1 **)&(this->SettingsMap).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->SettingsMap).field_0x38;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)
                              (*(int *)&(this->SettingsMap).field_0x48 - 1U & FVar1.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this->SettingsMap + (longlong)iVar6 * 0x24) == FVar1)
        goto LAB_14445a873;
        iVar6 = *(int *)(*(longlong *)&this->SettingsMap + 0x1c + (longlong)iVar6 * 0x24);
      } while (iVar6 != -1);
    }
  }
  TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
  ::Emplace<FName_const_&,FPinSettings_const_&>
            ((TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
              *)this,param_1,param_2);
LAB_14445a873:
  this_00 = UDataflowSettings::StaticClass();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  FVar1 = *param_1;
  pUVar2 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  puVar8 = &pUVar2[3].field_0x10;
  uVar5 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)&pUVar2[3].field_0x18 != *(int *)&pUVar2[4].field_0x1c) {
    puVar9 = *(undefined1 **)(pUVar2 + 5);
    if (*(undefined1 **)(pUVar2 + 5) == (undefined1 *)0x0) {
      puVar9 = &pUVar2[4].field_0x20;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)(*(int *)&pUVar2[5].field_0x8 - 1U & FVar1.Number + uVar5)
                              * 4);
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)puVar8 + (longlong)iVar6 * 0x24) == FVar1) goto LAB_14445a903;
        iVar6 = *(int *)(*(longlong *)puVar8 + 0x1c + (longlong)iVar6 * 0x24);
      } while (iVar6 != -1);
    }
  }
  TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
  ::Emplace<FName_const_&,FPinSettings_const_&>
            ((TMapBase<FName,FPinSettings,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>_>
              *)puVar8,param_1,param_2);
LAB_14445a903:
  pTVar7 = TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,FPinSettings>,TDefaultMapHashableKeyFuncs<FName,FPinSettings,0>,FDefaultSetAllocator>
                   *)puVar8,*param_1);
  if (pTVar7 == (TTuple<FName,FPinSettings> *)0x0) {
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

// TearDown @ 144466af0

void __cdecl UE::Dataflow::FPinSettingsRegistry::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_15507c1b8 = 0;
      atexit(`TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::Reset
            ((TLazySingleton<UE::Dataflow::FPinSettingsRegistry> *)
             &`private:_static_class_TLazySingleton<class_UE::Dataflow::FPinSettingsRegistry>&___ptr64___cdecl_TLazySingleton<UE::Dataflow::FPinSettingsRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
              ::__l2::Singleton);
  return;
}

