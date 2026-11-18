// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 15

// ~FOnlineServicesRegistry @ 14ec23cf0

void __thiscall
UE::Online::FOnlineServicesRegistry::~FOnlineServicesRegistry(FOnlineServicesRegistry *this)

{
  undefined1 *puVar1;
  TMap<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
  *this_00;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  void *pvVar5;
  code *pcVar6;
  TMap<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 *puVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  int iVar20;
  uint *puVar21;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_11c;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  TMap<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
  *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  iVar4 = *(int *)&(this->NamedServiceInstances).field_0x28;
  puVar1 = &(this->NamedServiceInstances).field_0x10;
  iVar17 = 0;
  this_00 = &this->NamedServiceInstances;
  iVar20 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&(this->NamedServiceInstances).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar16 = *puVar21;
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar17;
      iVar20 = iVar20 + 0x20;
      iVar17 = iVar17 + 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ec23da0;
      uVar16 = puVar21[lVar12 + 1];
    }
    uVar9 = -uVar16 & uVar16;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar10 = local_res20 + -1 + iVar20;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_14ec23da0:
  uVar16 = *(uint *)&(this->NamedServiceInstances).field_0x28;
  uVar14 = uVar16 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uVar9,iVar17);
  TStack_90.CurrentBitIndex = iVar10;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar16 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = iVar20;
  uStack_70 = CONCAT44(uStack_11c,
                       *(int *)&(this->NamedServiceInstances).field_0x8 -
                       *(int *)&(this->NamedServiceInstances).field_0x34);
  local_98 = this_00;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar4 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->NamedServiceInstances).field_0x28;
  if (uVar16 != uVar9) {
    puVar18 = *(undefined1 **)&(this->NamedServiceInstances).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar17;
      uVar14 = uVar14 + 0x20;
      iVar17 = iVar17 + 1;
      uVar16 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14ec23eb0;
      uVar16 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar9 < (int)uVar16) {
      uVar16 = uVar9;
    }
  }
LAB_14ec23eb0:
  do {
    pTVar7 = local_98;
    if (*(int *)&local_98->field_0x8 - *(int *)&local_98->field_0x34 != (int)uStack_70) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_90.CurrentBitIndex == uVar16) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == this_00))
    {
      *(undefined4 *)&(this->NamedServiceInstances).field_0x48 = 0;
      pvVar5 = *(void **)&(this->NamedServiceInstances).field_0x40;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this_00);
      *(undefined4 *)&(this->ServicesFactories).field_0x48 = 0;
      pvVar5 = *(void **)&(this->ServicesFactories).field_0x40;
      if (pvVar5 != (void *)0x0) {
        FMemory::Free(pvVar5);
      }
      TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineServicesRegistry::FFactoryAndPriority>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineServicesRegistry::FFactoryAndPriority>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (this);
      return;
    }
    iVar20 = 0;
    iVar17 = 0;
    lVar12 = (longlong)TStack_90.CurrentBitIndex * 0x60 + *(longlong *)pTVar7;
    uVar9 = 1;
    iVar4 = *(int *)(lVar12 + 0x30);
    pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar12 + 0x18);
    iVar11 = 0;
    if (iVar4 != 0) {
      pTVar19 = pTVar2;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28);
      }
      uVar14 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar20;
        iVar17 = iVar17 + 0x20;
        iVar20 = iVar20 + 1;
        iVar11 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14ec23f6d;
        uVar14 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar9 = -uVar14 & uVar14;
      uVar3 = (ulonglong)uVar9 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar11 = iVar17 + -1 + (int)lVar13;
      if (iVar4 < iVar11) {
        iVar11 = iVar4;
      }
    }
LAB_14ec23f6d:
    uVar14 = *(uint *)(lVar12 + 0x30);
    uVar15 = uVar14 & 0xffffffe0;
    TStack_c0._padding_ = CONCAT44(uVar9,iVar20);
    TStack_c0.CurrentBitIndex = iVar11;
    TStack_c0.UnvisitedBitMask = 0xffffffff;
    iVar20 = (int)uVar14 >> 5;
    TStack_c0._28_4_ = iVar10;
    TStack_c0.BaseBitIndex = iVar17;
    uStack_a0 = CONCAT44(uStack_cc,*(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0x3c));
    TStack_c0.Array = pTVar2;
    if ((((int)uVar14 < 0) || (iVar4 < (int)uVar14)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar9 = *(uint *)(lVar12 + 0x30);
    if (uVar14 != uVar9) {
      pTVar19 = pTVar2;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28);
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar20 * 4);
      while (uVar14 == 0) {
        lVar13 = (longlong)iVar20;
        uVar15 = uVar15 + 0x20;
        iVar20 = iVar20 + 1;
        uVar14 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_14ec24070;
        uVar14 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar14 = (int)lVar13 + -1 + uVar15;
      if ((int)uVar9 < (int)uVar14) {
        uVar14 = uVar9;
      }
    }
LAB_14ec24070:
    while( true ) {
      if (*(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0x3c) != (int)uStack_a0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_c0.CurrentBitIndex == uVar14) && (TStack_c0.Array == pTVar2)) break;
      (**(code **)(**(longlong **)
                     (*(longlong *)(lVar12 + 8) + 0x10 + (longlong)TStack_c0.CurrentBitIndex * 0x28)
                  + 0x10))();
      TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  } while( true );
}

// ClearDefaultServiceOverride @ 14ec257a0

void __thiscall
UE::Online::FOnlineServicesRegistry::ClearDefaultServiceOverride(FOnlineServicesRegistry *this)

{
  this->DefaultServiceOverride = Default;
  return;
}

// CreateServices @ 14ec267e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::Online::IOnlineServices,1> * __thiscall
UE::Online::FOnlineServicesRegistry::CreateServices
          (FOnlineServicesRegistry *this,
          TSharedPtr<UE::Online::IOnlineServices,1> *__return_storage_ptr__,EOnlineServices param_1,
          FName param_2,FName param_3)

{
  code *pcVar1;
  EOnlineServices EVar2;
  bool bVar3;
  undefined4 uVar4;
  TSharedPtr<UE::Online::IOnlineServices,1> *pTVar5;
  EOnlineServices *pEVar6;
  EOnlineServices *pEVar7;
  undefined1 *puVar8;
  FName local_res20;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res20 = param_2;
  EVar2 = ResolveServiceName(this,param_1);
  bVar3 = TEMP_ShouldUseEpicModularPlugins();
  if (((bVar3) && (EVar2 == Epic)) &&
     (bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3595723504697212742>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesInterface\\Private\\Online\\OnlineServicesRegistry.cpp"
                         ,0xba,"!(TEMP_ShouldUseEpicModularPlugins() && bIsMonolithicPlugin)"),
     bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedPtr<UE::Online::IOnlineServices,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = (IOnlineServices *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (*(int *)&(this->ServicesFactories).field_0x8 != *(int *)&(this->ServicesFactories).field_0x34)
  {
    puVar8 = *(undefined1 **)&(this->ServicesFactories).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ServicesFactories).field_0x38;
    }
    uVar4 = *(undefined4 *)
             (puVar8 + ((ulonglong)(*(int *)&(this->ServicesFactories).field_0x48 - 1) &
                       (ulonglong)EVar2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        pEVar7 = (EOnlineServices *)
                 ((longlong)(int)uVar4 * 0x20 + *(longlong *)&this->ServicesFactories);
        if (*pEVar7 == EVar2) {
          pEVar6 = pEVar7 + 8;
          if (pEVar7 == (EOnlineServices *)0x0) {
            pEVar6 = (EOnlineServices *)0x0;
          }
          if (pEVar6 == (EOnlineServices *)0x0) {
            return __return_storage_ptr__;
          }
          pTVar5 = (TSharedPtr<UE::Online::IOnlineServices,1> *)
                   (**(code **)(**(longlong **)pEVar6 + 8))
                             (*(longlong **)pEVar6,local_68,local_res20,param_3);
          if (__return_storage_ptr__ != pTVar5) {
            __return_storage_ptr__->Object = pTVar5->Object;
            pTVar5->Object = (IOnlineServices *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&__return_storage_ptr__->SharedReferenceCount,&pTVar5->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60);
          if (__return_storage_ptr__->Object != (IOnlineServices *)0x0) {
            if (5 < (byte)LogOnlineServices._0_1_) {
              ::FName::ToString(&param_3,&local_48);
              ::FName::ToString(&local_res20,&local_58);
              Online::LexToString(EVar2);
              Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
              if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_48.Data.AllocatorInstance.Data);
              }
            }
            if ((__return_storage_ptr__->Object == (IOnlineServices *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              pTVar5 = (TSharedPtr<UE::Online::IOnlineServices,1> *)(*pcVar1)();
              return pTVar5;
            }
            (**(code **)(*(longlong *)__return_storage_ptr__->Object + 8))();
            return __return_storage_ptr__;
          }
          if ((byte)LogOnlineServices._0_1_ < 6) {
            return __return_storage_ptr__;
          }
          ::FName::ToString(&param_3,&local_28);
          ::FName::ToString(&local_res20,&local_38);
          Online::LexToString(EVar2);
          Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
        uVar4 = *(undefined4 *)(pEVar7 + 0x18);
      } while (uVar4 != 0xffffffff);
    }
  }
  return __return_storage_ptr__;
}

// DestroyAllNamedServicesInstances @ 14ec26ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Online::FOnlineServicesRegistry::DestroyAllNamedServicesInstances
          (FOnlineServicesRegistry *this,EOnlineServices param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  EOnlineServices EVar4;
  bool bVar5;
  EOnlineServices EVar6;
  uint uVar7;
  int iVar8;
  TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
  *pTVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  EVar4 = ResolveServiceName(this,param_1);
  pTVar9 = TMapBase<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
           ::Find(&this->NamedServiceInstances,EVar4);
  if (pTVar9 != (TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
                 *)0x0) {
    iVar11 = *(int *)&pTVar9->field_0x28;
    iVar15 = 0;
    uVar7 = 1;
    puVar12 = &pTVar9->field_0x10;
    iVar17 = 0;
    iVar8 = 0;
    if (iVar11 != 0) {
      puVar18 = *(uint **)&pTVar9->field_0x20;
      if (*(uint **)&pTVar9->field_0x20 == (uint *)0x0) {
        puVar18 = (uint *)puVar12;
      }
      uVar14 = *puVar18;
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar15;
        iVar17 = iVar17 + 0x20;
        iVar15 = iVar15 + 1;
        iVar8 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14ec26b9d;
        uVar14 = puVar18[lVar10 + 1];
      }
      uVar7 = -uVar14 & uVar14;
      uVar1 = (ulonglong)uVar7 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_res20 = (int)lVar10;
      iVar8 = iVar17 + -1 + local_res20;
      if (iVar11 < iVar8) {
        iVar8 = iVar11;
      }
    }
LAB_14ec26b9d:
    uVar14 = *(uint *)&pTVar9->field_0x28;
    uVar13 = uVar14 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar15);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar14 >> 5;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar17;
    uStack_40 = CONCAT44(uStack_6c,*(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34);
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar12;
    if ((((int)uVar14 < 0) || (iVar11 < (int)uVar14)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar7 = *(uint *)&pTVar9->field_0x28;
    if (uVar14 != uVar7) {
      puVar16 = *(undefined1 **)&pTVar9->field_0x20;
      if (*(undefined1 **)&pTVar9->field_0x20 == (undefined1 *)0x0) {
        puVar16 = puVar12;
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar15;
        uVar13 = uVar13 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14ec26cb0;
        uVar14 = *(uint *)(puVar16 + lVar10 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar14 = (int)lVar10 + -1 + uVar13;
      if ((int)uVar7 < (int)uVar14) {
        uVar14 = uVar7;
      }
    }
LAB_14ec26cb0:
    while( true ) {
      if (*(int *)&pTVar9->field_0x8 - *(int *)&pTVar9->field_0x34 != (int)uStack_40) {
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_60.CurrentBitIndex == uVar14) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar12)) break;
      lVar10 = *(longlong *)pTVar9 + (longlong)TStack_60.CurrentBitIndex * 0x28;
      (**(code **)(**(longlong **)
                     (*(longlong *)pTVar9 + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x28) +
                  0x10))();
      if ((1 < (byte)LogOnlineServices._0_1_) &&
         ((lVar2 = *(longlong *)(lVar10 + 0x18), lVar2 == 0 || (*(int *)(lVar2 + 8) != 1)))) {
        EVar6 = (**(code **)(**(longlong **)(lVar10 + 0x10) + 0x98))();
        Online::LexToString(EVar6);
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    if (*(int *)&(this->NamedServiceInstances).field_0x8 !=
        *(int *)&(this->NamedServiceInstances).field_0x34) {
      puVar12 = *(undefined1 **)&(this->NamedServiceInstances).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->NamedServiceInstances).field_0x38;
      }
      iVar11 = *(int *)(puVar12 +
                       ((longlong)*(int *)&(this->NamedServiceInstances).field_0x48 - 1U &
                       (ulonglong)EVar4) * 4);
      if (iVar11 != -1) {
        while (*(EOnlineServices *)
                ((longlong)iVar11 * 0x60 + *(longlong *)&this->NamedServiceInstances) != EVar4) {
          iVar11 = *(int *)((longlong)iVar11 * 0x60 + 0x58 +
                           *(longlong *)&this->NamedServiceInstances);
          if (iVar11 == -1) {
            return;
          }
        }
        TSet<TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(&this->NamedServiceInstances,iVar11);
      }
    }
  }
  return;
}

// DestroyAllServicesInstancesWithName @ 14ec26df0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Online::FOnlineServicesRegistry::DestroyAllServicesInstancesWithName
          (FOnlineServicesRegistry *this,FName param_1)

{
  longlong *plVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined8 uVar3;
  EOnlineServices EVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
  *pTVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TMap<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
  *local_a8;
  char local_a0;
  char cStack_9f;
  longlong *local_98;
  undefined1 auStack_90 [16];
  uint uStack_80;
  uint uStack_7c;
  longlong local_78;
  TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
  *pTStack_70;
  TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
  *local_68;
  undefined2 local_60;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  TSet<TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (local_58,(TSet<TTuple<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>,TDefaultMapHashableKeyFuncs<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>,FDefaultSetAllocator>
                       *)&this->NamedServiceInstances);
  uVar3 = local_58._0_8_;
  local_a0 = '\0';
  cStack_9f = '\0';
  stack0xffffffffffffff38 = local_58._16_16_;
  auStack_d0._0_8_ = local_58._8_8_;
  local_b8 = local_38;
  pTStack_b0 = pTStack_30;
  uVar6 = local_58._24_8_ >> 0x20;
  if ((int)local_58._28_4_ < *(int *)(local_58._16_8_ + 0x18)) {
    iVar11 = 1;
    uVar10 = local_58._28_4_;
    local_a8 = &this->NamedServiceInstances;
    do {
      pTVar8 = (TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
                *)(*(longlong *)uVar3 + 8 + (longlong)(int)uVar6 * 0x60);
      TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator((TIterator *)local_58,pTVar8);
      local_60 = 0;
      stack0xffffffffffffff78 = local_58._16_16_;
      local_98 = (longlong *)local_58._0_8_;
      auStack_90._0_8_ = local_58._8_8_;
      local_78 = local_38;
      pTStack_70 = pTStack_30;
      uVar6 = local_58._24_8_ >> 0x20;
      local_68 = pTVar8;
      if (local_58._28_4_ < *(int *)(local_58._16_8_ + 0x18)) {
        do {
          lVar7 = *local_98;
          iVar5 = (int)uVar6;
          if (*(FName *)(lVar7 + (longlong)iVar5 * 0x28) == param_1) {
            plVar1 = *(longlong **)(lVar7 + 0x10 + (longlong)iVar5 * 0x28);
            pTVar2 = *(TReferenceControllerBase<1> **)(lVar7 + 0x18 + (longlong)iVar5 * 0x28);
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            (**(code **)(*plVar1 + 0x10))(plVar1);
            TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(pTStack_70,iVar5);
            local_60 = CONCAT11(local_60._1_1_,1);
            if ((1 < (byte)LogOnlineServices._0_1_) &&
               ((pTVar2 == (TReferenceControllerBase<1> *)0x0 ||
                (pTVar2->SharedReferenceCount != (atomic<int>)0x1)))) {
              EVar4 = (**(code **)(*plVar1 + 0x98))(plVar1);
              Online::LexToString(EVar4);
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
          }
          uStack_80 = uStack_80 & ~auStack_90._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_90);
          uVar6 = (ulonglong)uStack_7c;
        } while ((int)uStack_7c < *(int *)(auStack_90._8_8_ + 0x18));
        if (((char)local_60 != '\0') && (local_60._1_1_ != '\0')) {
          uVar9 = *(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34
          ;
          if (uVar9 < 4) {
            iVar5 = 1;
          }
          else {
            uVar6 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
            lVar7 = 0x3f;
            if (uVar6 != 0) {
              for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar5 = 1 << ((byte)lVar7 & 0x1f);
          }
          if (((0 < (int)uVar9) && (local_68->HashSize < iVar5)) || (iVar5 < local_68->HashSize)) {
            local_68->HashSize = iVar5;
            TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
            ::Rehash(local_68);
          }
        }
      }
      lVar7 = (longlong)(int)uVar10 * 0x60 + *(longlong *)uVar3;
      if (*(int *)(lVar7 + 0x10) == *(int *)(lVar7 + 0x3c)) {
        TSet<TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_b0,uVar10);
        local_a0 = '\x01';
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar6 = (ulonglong)uStack_bc;
      uVar10 = uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if ((local_a0 != '\0') && (cStack_9f != '\0')) {
      uVar10 = *(int *)(&local_a8->field_0x0 + 8) - *(int *)(&local_a8->field_0x0 + 0x34);
      if (3 < uVar10) {
        uVar6 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar11 = 1 << ((byte)lVar7 & 0x1f);
      }
      if (((0 < (int)uVar10) && (*(int *)&local_a8->field_0x48 < iVar11)) ||
         (iVar11 < *(int *)&local_a8->field_0x48)) {
        *(int *)&local_a8->field_0x48 = iVar11;
        TSet<TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  return;
}

// DestroyNamedServicesInstance @ 14ec27d40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Online::FOnlineServicesRegistry::DestroyNamedServicesInstance
          (FOnlineServicesRegistry *this,EOnlineServices param_1,FName param_2,FName param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  EOnlineServices EVar3;
  uint uVar4;
  uint uVar5;
  TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
  *this_00;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar6;
  TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
  *this_01;
  longlong lVar7;
  int iVar8;
  ForElementType<FSetElementId> FVar9;
  EOnlineServices local_res10 [8];
  FName local_res18;
  FName local_28;
  FName local_20;
  
  local_res10[0] = param_1;
  local_res18 = param_2;
  local_res10[0] = ResolveServiceName(this,param_1);
  this_00 = TMapBase<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
            ::FindOrAddImpl<enum_UE::Online::EOnlineServices_const_&>
                      (&this->NamedServiceInstances,(uint)local_res10[0],local_res10);
  local_28 = param_2;
  local_20 = param_3;
  pTVar6 = TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
           ::Find((TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
                   *)this_00,(TTuple<FName,FName> *)&local_28);
  if (pTVar6 != (TSharedRef<UE::Online::IOnlineServices,1> *)0x0) {
    (**(code **)(*(longlong *)pTVar6->Object + 0x10))();
    if ((1 < (byte)LogOnlineServices._0_1_) &&
       ((pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController,
        pTVar1 == (TReferenceControllerBase<1> *)0x0 ||
        (pTVar1->SharedReferenceCount != (atomic<int>)0x1)))) {
      EVar3 = (**(code **)(*(longlong *)pTVar6->Object + 0x98))();
      Online::LexToString(EVar3);
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOnlineServices);
    }
    this_01 = (TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
               *)TMapBase<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
                 ::FindOrAddImpl<enum_UE::Online::EOnlineServices_const_&>
                           (&this->NamedServiceInstances,(uint)local_res10[0],local_res10);
    if (*(int *)&(this_01->Elements).field_0x8 != *(int *)&(this_01->Elements).field_0x34) {
      uVar4 = ::GetTypeHash(param_2.ComparisonIndex.Value);
      uVar4 = local_res18.Number + uVar4;
      uVar5 = ::GetTypeHash(param_3.ComparisonIndex.Value);
      FVar9 = (this_01->Hash).SecondaryData;
      if (FVar9 == (ForElementType<FSetElementId>)0x0) {
        FVar9 = (ForElementType<FSetElementId>)&this_01->Hash;
      }
      iVar8 = *(int *)((longlong)FVar9 +
                      ((longlong)this_01->HashSize - 1U &
                      (longlong)
                      (int)(param_3.Number + uVar4 * 0x40 + (uVar4 >> 2) + uVar5 + 0x9e3779b9 ^
                           uVar4)) * 4);
      if (iVar8 != -1) {
        lVar2 = *(longlong *)&this_01->Elements;
        do {
          lVar7 = (longlong)iVar8;
          if ((*(FName *)(lVar2 + lVar7 * 0x28) == param_2) &&
             (*(FName *)(lVar2 + 8 + lVar7 * 0x28) == param_3)) {
            TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
            ::RemoveByIndex(this_01,iVar8);
            return;
          }
          iVar8 = *(int *)(lVar2 + 0x20 + lVar7 * 0x28);
        } while (iVar8 != -1);
      }
    }
  }
  return;
}

// Get @ 14ec288d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FOnlineServicesRegistry * __cdecl UE::Online::FOnlineServicesRegistry::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FOnlineServicesRegistry *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    DAT_1553aced0 = 0xff;
    _Singleton = 0;
    _DAT_1553ace38 = 0;
    _DAT_1553ace50 = 0;
    _DAT_1553ace70 = 0;
    _DAT_1553ace78 = 0;
    _DAT_1553ace80 = 0;
    _DAT_1553ace88 = 0;
    _DAT_1553acea0 = 0;
    _DAT_1553acec0 = 0;
    _DAT_1553acec8 = 0;
    DAT_1553aced8 =
         &`private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    _DAT_1553ace58 = ___xmm_00000000ffffffff0000008000000000;
    uRam00000001553ace60 = _UNK_150631d98;
    _DAT_1553acea8 = ___xmm_00000000ffffffff0000008000000000;
    uRam00000001553aceb0 = _UNK_150631d98;
    atexit(`TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if (((FOnlineServicesRegistry *)DAT_1553aced8 == (FOnlineServicesRegistry *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FOnlineServicesRegistry *)(*pcVar1)();
    return pFVar3;
  }
  return (FOnlineServicesRegistry *)DAT_1553aced8;
}

// GetAllServicesInstances @ 14ec289e0

void __thiscall
UE::Online::FOnlineServicesRegistry::GetAllServicesInstances
          (FOnlineServicesRegistry *this,
          TArray<TSharedRef<UE::Online::IOnlineServices,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined1 *puVar1;
  TMap<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
  *pTVar2;
  TBitArray<FDefaultBitArrayAllocator> *pTVar3;
  ulonglong uVar4;
  code *pcVar5;
  TMap<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  int iVar16;
  undefined1 *puVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_10c;
  undefined4 uStack_bc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TMap<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  undefined4 local_3c;
  
  iVar11 = *(int *)&(this->NamedServiceInstances).field_0x28;
  puVar1 = &(this->NamedServiceInstances).field_0x10;
  iVar16 = 0;
  pTVar2 = &this->NamedServiceInstances;
  iVar19 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar11 != 0) {
    puVar20 = *(uint **)&(this->NamedServiceInstances).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar15 = *puVar20;
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      iVar19 = iVar19 + 0x20;
      iVar16 = iVar16 + 1;
      iVar9 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ec28a90;
      uVar15 = puVar20[lVar12 + 1];
    }
    uVar8 = -uVar15 & uVar15;
    uVar4 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar9 = (int)lVar12 + -1 + iVar19;
    if (iVar11 < iVar9) {
      iVar9 = iVar11;
    }
  }
LAB_14ec28a90:
  uVar15 = *(uint *)&(this->NamedServiceInstances).field_0x28;
  uVar21 = uVar15 & 0xffffffe0;
  TStack_80._padding_ = CONCAT44(uVar8,iVar16);
  TStack_80.CurrentBitIndex = iVar9;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar15 >> 5;
  TStack_80._28_4_ = local_3c;
  TStack_80.BaseBitIndex = iVar19;
  uStack_60 = CONCAT44(uStack_10c,
                       *(int *)&(this->NamedServiceInstances).field_0x8 -
                       *(int *)&(this->NamedServiceInstances).field_0x34);
  local_res20 = uVar15;
  local_88 = pTVar2;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar11 < (int)uVar15)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->NamedServiceInstances).field_0x28;
  if (uVar15 != uVar8) {
    puVar17 = *(undefined1 **)&(this->NamedServiceInstances).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar16 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar16;
      uVar21 = uVar21 + 0x20;
      iVar16 = iVar16 + 1;
      uVar15 = uVar8;
      local_res20 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ec28bc0;
      uVar15 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar15 = (int)lVar12 + -1 + uVar21;
    local_res20 = uVar15;
    if ((int)uVar8 < (int)uVar15) {
      uVar15 = uVar8;
      local_res20 = uVar8;
    }
  }
LAB_14ec28bc0:
  do {
    pTVar6 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_80.CurrentBitIndex == uVar15) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    {
      return;
    }
    iVar16 = 0;
    iVar19 = 0;
    lVar12 = (longlong)TStack_80.CurrentBitIndex * 0x60 + *(longlong *)pTVar6;
    uVar8 = 1;
    iVar11 = *(int *)(lVar12 + 0x30);
    pTVar3 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar12 + 0x18);
    iVar10 = 0;
    if (iVar11 != 0) {
      pTVar18 = pTVar3;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28);
      }
      uVar15 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar16;
        iVar19 = iVar19 + 0x20;
        iVar16 = iVar16 + 1;
        iVar10 = iVar11;
        if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ec28c8e;
        uVar15 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar8 = -uVar15 & uVar15;
      uVar4 = (ulonglong)uVar8 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar10 = iVar19 + -1 + (int)lVar13;
      if (iVar11 < iVar10) {
        iVar10 = iVar11;
      }
    }
LAB_14ec28c8e:
    uVar15 = *(uint *)(lVar12 + 0x30);
    uVar21 = uVar15 & 0xffffffe0;
    TStack_b0._padding_ = CONCAT44(uVar8,iVar16);
    TStack_b0.CurrentBitIndex = iVar10;
    TStack_b0.UnvisitedBitMask = 0xffffffff;
    iVar16 = (int)uVar15 >> 5;
    TStack_b0._28_4_ = iVar9;
    TStack_b0.BaseBitIndex = iVar19;
    uStack_90 = CONCAT44(uStack_bc,*(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0x3c));
    TStack_b0.Array = pTVar3;
    if ((((int)uVar15 < 0) || (iVar11 < (int)uVar15)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar8 = *(uint *)(lVar12 + 0x30);
    if (uVar15 != uVar8) {
      pTVar18 = pTVar3;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar12 + 0x28);
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) &
               *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
      while (uVar15 == 0) {
        lVar13 = (longlong)iVar16;
        uVar21 = uVar21 + 0x20;
        iVar16 = iVar16 + 1;
        uVar15 = uVar8;
        if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_14ec28da0;
        uVar15 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar13 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar15 = (int)lVar13 + -1 + uVar21;
      if ((int)uVar8 < (int)uVar15) {
        uVar15 = uVar8;
      }
    }
LAB_14ec28da0:
    while( true ) {
      if (*(int *)(lVar12 + 0x10) - *(int *)(lVar12 + 0x3c) != (int)uStack_90) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((TStack_b0.CurrentBitIndex == uVar15) && (TStack_b0.Array == pTVar3)) break;
      lVar13 = *(longlong *)(lVar12 + 8) + (longlong)TStack_b0.CurrentBitIndex * 0x28;
      iVar11 = param_1->ArrayNum;
      if (iVar11 == param_1->ArrayMax) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar11 + 1;
      pFVar14 = (param_1->AllocatorInstance).Data + (longlong)iVar11 * 0x10;
      *(undefined8 *)pFVar14 = *(undefined8 *)(lVar13 + 0x10);
      lVar13 = *(longlong *)(lVar13 + 0x18);
      *(longlong *)(pFVar14 + 8) = lVar13;
      if (lVar13 != 0) {
        LOCK();
        *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
        UNLOCK();
      }
      TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    uVar15 = local_res20;
  } while( true );
}

// GetNamedServicesInstance @ 14ec294d0

TSharedPtr<UE::Online::IOnlineServices,1> * __thiscall
UE::Online::FOnlineServicesRegistry::GetNamedServicesInstance
          (FOnlineServicesRegistry *this,
          TSharedPtr<UE::Online::IOnlineServices,1> *__return_storage_ptr__,EOnlineServices param_1,
          FName param_2,FName param_3)

{
  IOnlineServices *pIVar1;
  code *pcVar2;
  bool bVar3;
  TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
  *this_00;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar4;
  TSharedPtr<UE::Online::IOnlineServices,1> *pTVar5;
  TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
  *this_01;
  FSharedReferencer<1> FVar6;
  TPairInitializer<TTuple<FName,FName>_&&,TSharedRef<UE::Online::IOnlineServices,1>_&&> local_res10;
  TSharedPtr<UE::Online::IOnlineServices,1> local_a8;
  IOnlineServices *local_98;
  TReferenceControllerBase<1> *local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FName *local_68;
  IOnlineServices **local_60;
  TSharedRef<UE::Online::IOnlineServices,1> local_58;
  TSharedPtr<UE::Online::IOnlineServices,1> local_48;
  
  local_res10.Value._0_1_ = param_1;
  local_res10.Value._0_1_ = ResolveServiceName(this,param_1);
  __return_storage_ptr__->Object = (IOnlineServices *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if ((EOnlineServices)local_res10.Value < None) {
    this_00 = TMapBase<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
              ::FindOrAddImpl<enum_UE::Online::EOnlineServices_const_&>
                        (&this->NamedServiceInstances,(uint)(EOnlineServices)local_res10.Value,
                         (EOnlineServices *)&local_res10.Value);
    local_80 = param_3;
    local_88 = param_2;
    pTVar4 = TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
             ::Find((TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
                     *)this_00,(TTuple<FName,FName> *)&local_88);
    if (pTVar4 == (TSharedRef<UE::Online::IOnlineServices,1> *)0x0) {
      pTVar5 = CreateServices(this,&local_48,(EOnlineServices)local_res10.Value,param_2,param_3);
      if (__return_storage_ptr__ != pTVar5) {
        __return_storage_ptr__->Object = pTVar5->Object;
        pTVar5->Object = (IOnlineServices *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&pTVar5->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      if (__return_storage_ptr__->Object == (IOnlineServices *)0x0) {
        return __return_storage_ptr__;
      }
      this_01 = (TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
                 *)TMapBase<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
                   ::FindOrAddImpl<enum_UE::Online::EOnlineServices_const_&>
                             (&this->NamedServiceInstances,(uint)(EOnlineServices)local_res10.Value,
                              (EOnlineServices *)&local_res10.Value);
      if ((__return_storage_ptr__->Object == (IOnlineServices *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<UE::Online::IOnlineServices,1> *)(*pcVar2)();
        return pTVar5;
      }
      local_90 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
      local_98 = __return_storage_ptr__->Object;
      if (local_90 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_90->SharedReferenceCount = (atomic<int>)((int)local_90->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_98 == (IOnlineServices *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<UE::Online::IOnlineServices,1> *)(*pcVar2)();
        return pTVar5;
      }
      local_68 = &local_78;
      local_60 = &local_98;
      local_70 = param_3;
      local_78 = param_2;
      TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TTuple<FName,FName>_&&,TSharedRef<UE::Online::IOnlineServices,1>_&&>_>
                (this_01,&local_res10,(bool *)&local_68);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_90);
      if ((__return_storage_ptr__->Object == (IOnlineServices *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<UE::Online::IOnlineServices,1> *)(*pcVar2)();
        return pTVar5;
      }
      FVar6.ReferenceController = (__return_storage_ptr__->SharedReferenceCount).ReferenceController
      ;
      pIVar1 = __return_storage_ptr__->Object;
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar6.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pIVar1 == (IOnlineServices *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedPtr<UE::Online::IOnlineServices,1> *)(*pcVar2)();
        return pTVar5;
      }
      if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FVar6.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_58.Object = pIVar1;
      local_58.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
      Broadcast<IBaseDelegateInstance<void___cdecl(TSharedRef<UE::Online::IOnlineServices,1>),FDefaultDelegateUserPolicy>,TSharedRef<UE::Online::IOnlineServices,1>_>
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&OnOnlineServicesCreated,
                 &local_58);
    }
    else {
      local_a8.SharedReferenceCount.ReferenceController =
           (pTVar4->SharedReferenceCount).ReferenceController;
      local_a8.Object = pTVar4->Object;
      if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar6.ReferenceController = local_a8.SharedReferenceCount.ReferenceController;
      if (__return_storage_ptr__ != &local_a8) {
        __return_storage_ptr__->Object = local_a8.Object;
        local_a8.Object = (IOnlineServices *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&__return_storage_ptr__->SharedReferenceCount,&local_a8.SharedReferenceCount);
        FVar6.ReferenceController = local_a8.SharedReferenceCount.ReferenceController;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar6.ReferenceController);
  }
  return __return_storage_ptr__;
}

// IsLoaded @ 14ec2a2e0

bool __thiscall
UE::Online::FOnlineServicesRegistry::IsLoaded
          (FOnlineServicesRegistry *this,EOnlineServices param_1,FName param_2,FName param_3)

{
  EOnlineServices EVar1;
  TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
  *this_00;
  TSharedRef<UE::Online::IOnlineServices,1> *pTVar2;
  FName local_18;
  FName local_10;
  
  EVar1 = ResolveServiceName(this,param_1);
  this_00 = TMapBase<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>,0>_>
            ::Find(&this->NamedServiceInstances,EVar1);
  if (this_00 !=
      (TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
       *)0x0) {
    local_18 = param_2;
    local_10 = param_3;
    pTVar2 = TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
             ::Find((TMapBase<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>
                     *)this_00,(TTuple<FName,FName> *)&local_18);
    return pTVar2 != (TSharedRef<UE::Online::IOnlineServices,1> *)0x0;
  }
  return false;
}

// RegisterServicesFactory @ 14ec34a90

void __thiscall
UE::Online::FOnlineServicesRegistry::RegisterServicesFactory
          (FOnlineServicesRegistry *this,EOnlineServices param_1,
          TUniquePtr<UE::Online::IOnlineServicesFactory,TDefaultDelete<UE::Online::IOnlineServicesFactory>_>
          *param_2,int param_3)

{
  undefined4 uVar1;
  EOnlineServices *pEVar2;
  EOnlineServices *pEVar3;
  undefined1 *puVar4;
  TPairInitializer<UE::Online::EOnlineServices_const_&,UE::Online::FOnlineServicesRegistry::FFactoryAndPriority_&&>
  local_res8;
  IOnlineServicesFactory *local_28;
  int local_20;
  FFactoryAndPriority **local_18;
  IOnlineServicesFactory **local_10;
  
  local_res8.Value._0_1_ = param_1;
  local_res8.Value._0_1_ = ResolveServiceName(this,param_1);
  if (*(int *)&(this->ServicesFactories).field_0x8 != *(int *)&(this->ServicesFactories).field_0x34)
  {
    puVar4 = *(undefined1 **)&(this->ServicesFactories).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ServicesFactories).field_0x38;
    }
    uVar1 = *(undefined4 *)
             (puVar4 + ((ulonglong)(*(int *)&(this->ServicesFactories).field_0x48 - 1) &
                       (ulonglong)(EOnlineServices)local_res8.Value) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pEVar3 = (EOnlineServices *)
                 ((longlong)(int)uVar1 * 0x20 + *(longlong *)&this->ServicesFactories);
        if (*pEVar3 == (EOnlineServices)local_res8.Value) {
          pEVar2 = pEVar3 + 8;
          if (pEVar3 == (EOnlineServices *)0x0) {
            pEVar2 = (EOnlineServices *)0x0;
          }
          if ((pEVar2 != (EOnlineServices *)0x0) && (param_3 <= (int)*(undefined4 *)(pEVar2 + 8))) {
            return;
          }
          break;
        }
        uVar1 = *(undefined4 *)(pEVar3 + 0x18);
      } while (uVar1 != 0xffffffff);
    }
  }
  local_28 = param_2->Ptr;
  local_18 = &local_res8.Value;
  param_2->Ptr = (IOnlineServicesFactory *)0x0;
  local_10 = &local_28;
  local_20 = param_3;
  TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineServicesRegistry::FFactoryAndPriority>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineServicesRegistry::FFactoryAndPriority,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<enum_UE::Online::EOnlineServices_const_&,UE::Online::FOnlineServicesRegistry::FFactoryAndPriority_&&>_>
            (this,&local_res8,(bool *)&local_18);
  if (local_28 != (IOnlineServicesFactory *)0x0) {
    (**(code **)*local_28)(local_28,1);
  }
  return;
}

// ResolveServiceName @ 14ec37060

EOnlineServices __thiscall
UE::Online::FOnlineServicesRegistry::ResolveServiceName
          (FOnlineServicesRegistry *this,EOnlineServices param_1)

{
  bool bVar1;
  ForAnyElementType FVar2;
  wchar_t *pwVar3;
  EOnlineServices local_res10 [24];
  FString local_18;
  
  if (param_1 == Default) {
    if (this->DefaultServiceOverride != Default) {
      return this->DefaultServiceOverride;
    }
    pwVar3 = L"DefaultServices";
  }
  else {
    if (param_1 != Platform) {
      return param_1;
    }
    pwVar3 = L"PlatformServices";
  }
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  local_res10[0] = param_1;
  bVar1 = FConfigCacheIni::GetString(GConfig,L"OnlineServices",pwVar3,&local_18,&GEngineIni);
  if (bVar1) {
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar2.Data = local_18.Data.AllocatorInstance.Data;
    }
    Online::LexFromString(local_res10,(wchar_t *)FVar2.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return local_res10[0];
}

// SetDefaultServiceOverride @ 14ec37eb0

void __thiscall
UE::Online::FOnlineServicesRegistry::SetDefaultServiceOverride
          (FOnlineServicesRegistry *this,EOnlineServices param_1)

{
  this->DefaultServiceOverride = param_1;
  return;
}

// TearDown @ 14ec37ed0

void __cdecl UE::Online::FOnlineServicesRegistry::TearDown(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_1553aced8 = (FOnlineServicesRegistry *)0x0;
      atexit(`TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_UE::Online::FOnlineServicesRegistry>&___ptr64___cdecl_TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  if (DAT_1553aced8 != (FOnlineServicesRegistry *)0x0) {
    ~FOnlineServicesRegistry(DAT_1553aced8);
    DAT_1553aced8 = (FOnlineServicesRegistry *)0x0;
  }
  return;
}

// UnregisterServicesFactory @ 14ec398e0

void __thiscall
UE::Online::FOnlineServicesRegistry::UnregisterServicesFactory
          (FOnlineServicesRegistry *this,EOnlineServices param_1,int param_2)

{
  EOnlineServices EVar1;
  undefined4 uVar2;
  EOnlineServices *pEVar3;
  EOnlineServices *pEVar4;
  undefined1 *puVar5;
  EOnlineServices local_res10 [8];
  
  EVar1 = ResolveServiceName(this,param_1);
  if (*(int *)&(this->ServicesFactories).field_0x8 != *(int *)&(this->ServicesFactories).field_0x34)
  {
    puVar5 = *(undefined1 **)&(this->ServicesFactories).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->ServicesFactories).field_0x38;
    }
    uVar2 = *(undefined4 *)
             (puVar5 + ((ulonglong)(*(int *)&(this->ServicesFactories).field_0x48 - 1) &
                       (ulonglong)EVar1) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        pEVar4 = (EOnlineServices *)
                 ((longlong)(int)uVar2 * 0x20 + *(longlong *)&this->ServicesFactories);
        if (*pEVar4 == EVar1) {
          pEVar3 = pEVar4 + 8;
          if (pEVar4 == (EOnlineServices *)0x0) {
            pEVar3 = (EOnlineServices *)0x0;
          }
          if ((pEVar3 != (EOnlineServices *)0x0) && (*(undefined4 *)(pEVar3 + 8) == param_2)) {
            local_res10[0] = EVar1;
            TSet<TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineServicesRegistry::FFactoryAndPriority>,TDefaultMapHashableKeyFuncs<enum_UE::Online::EOnlineServices,UE::Online::FOnlineServicesRegistry::FFactoryAndPriority,0>,FDefaultSetAllocator>
            ::RemoveImpl<enum_UE::Online::EOnlineServices>(this,(uint)EVar1,local_res10);
          }
          break;
        }
        uVar2 = *(undefined4 *)(pEVar4 + 0x18);
      } while (uVar2 != 0xffffffff);
    }
  }
  DestroyAllNamedServicesInstances(this,EVar1);
  return;
}

