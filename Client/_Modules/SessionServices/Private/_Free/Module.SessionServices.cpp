// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SessionServices
// Functions: 66

// `dynamic_initializer_for_'ModuleRegistrantSessionServices'' @ 141168470

void __cdecl _dynamic_initializer_for__ModuleRegistrantSessionServices__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SessionServices";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SessionServices",0xf);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSessionServicesModule>::InitializeModule);
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 148ce867c

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FSessionServicesModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FSessionServicesModule::_vector_deleting_destructor__adjustor_8__
          (FSessionServicesModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSessionServicesModule *)&this[-1].TraceController.SharedReferenceCount,
                      param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148ce9260

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionManager,SharedPointerInternals::DefaultDeleter<FSessionManager>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSessionManager,SharedPointerInternals::DefaultDeleter<FSessionManager>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ce92c0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionService,SharedPointerInternals::DefaultDeleter<FSessionService>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSessionService,SharedPointerInternals::DefaultDeleter<FSessionService>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ce9300

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSessionServicesModule::_scalar_deleting_destructor_(FSessionServicesModule *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TraceController).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionService).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SessionManager).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->MessageBusPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  this->_padding_ = (longlong)IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ce9390

void * __thiscall
ISessionServicesModule::_scalar_deleting_destructor_(ISessionServicesModule *this,uint param_1)

{
  *this = (ISessionServicesModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// DestructItems<FTraceStatus::FChannelPreset,int> @ 148cea640

void __cdecl DestructItems<FTraceStatus::FChannelPreset,int>(FChannelPreset *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    pFVar1 = (param_1->ChannelList).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}

// DestructItems<TSharedPtr<FSessionLogMessage,1>,int> @ 148cea690

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
DestructItems<TSharedPtr<FSessionLogMessage,1>,int>
          (TSharedPtr<FSessionLogMessage,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<ISessionInfo,1>,int> @ 148cea6d0

void __cdecl
DestructItems<TSharedPtr<ISessionInfo,1>,int>(TSharedPtr<ISessionInfo,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<ISessionInstanceInfo,1>,int> @ 148cea710

void __cdecl
DestructItems<TSharedPtr<ISessionInstanceInfo,1>,int>
          (TSharedPtr<ISessionInstanceInfo,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FilterByPredicate<`FTraceController::OnNotification'::__l8::<lambda_1>_> @ 148ceb350

TMap<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
* __thiscall
TMapBase<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
::FilterByPredicate<_FTraceController::OnNotification_::__l8::<lambda_1>_>
          (TMapBase<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
           *this,TMap<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
                 *__return_storage_ptr__,<lambda_1> param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  TMapBase<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  ulong64 uVar11;
  TMap<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
  *pTVar12;
  undefined1 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  uint *puVar25;
  ulonglong local_res10;
  uint local_128;
  uint uStack_124;
  uint uStack_114;
  uint uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_dc;
  TPairInitializer<FGuid_const_&,FMessageAddress_const_&> local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  TMapBase<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_44;
  
  uVar18 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uVar16 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_res10 = 1;
  uVar19 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  uVar22 = 0;
  if (uVar19 == 0) goto LAB_148ceb5d8;
  if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar19);
  }
  TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar19);
  uVar20 = 1;
  if (3 < uVar19) {
    uVar15 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar20 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((*(int *)&__return_storage_ptr__->field_0x48 != 0) &&
     ((int)uVar20 <= *(int *)&__return_storage_ptr__->field_0x48)) goto LAB_148ceb5d8;
  *(uint *)&__return_storage_ptr__->field_0x48 = uVar20;
  if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
  }
  if (uVar20 != 0) {
    uVar19 = uVar20;
    if (uVar20 < 2) {
      if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
        uVar19 = 0;
        goto LAB_148ceb438;
      }
    }
    else {
LAB_148ceb438:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar19,4);
    }
    if (0 < (int)uVar20) {
      uVar23 = (ulonglong)uVar20;
      uVar15 = uVar18;
      do {
        puVar13 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar10 = uVar15 & (longlong)(int)uVar20 - 1U;
        uVar15 = uVar15 + 1;
        *(undefined4 *)(puVar13 + uVar10 * 4) = 0xffffffff;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
  }
  if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
    uVar19 = *(uint *)&__return_storage_ptr__->field_0x28;
    local_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&__return_storage_ptr__->field_0x10;
    local_128 = 0;
    uStack_124 = (uint)local_res10;
    uStack_114 = 0;
    uStack_110 = 0;
    uVar15 = uVar18;
    if (uVar19 != 0) {
      puVar25 = *(uint **)&__return_storage_ptr__->field_0x20;
      if (*(uint **)&__return_storage_ptr__->field_0x20 == (uint *)0x0) {
        puVar25 = (uint *)local_c0.Array;
      }
      uVar20 = *puVar25;
      uVar23 = uVar18;
      while (uVar20 == 0) {
        uStack_110 = (int)uVar23 + 0x20;
        uVar23 = (ulonglong)uStack_110;
        iVar21 = (int)uVar15;
        local_128 = iVar21 + 1;
        uVar15 = (ulonglong)local_128;
        if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_128)
        goto LAB_148ceb530;
        uVar20 = puVar25[(longlong)iVar21 + 1];
      }
      uStack_124 = -uVar20 & uVar20;
      uVar15 = (ulonglong)uStack_124 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uStack_114 = (int)lVar14 + -1 + uStack_110;
      uVar15 = (ulonglong)uStack_114;
      if ((int)uVar19 < (int)uStack_114) {
LAB_148ceb530:
        uVar15 = (ulonglong)uVar19;
        uStack_114 = uVar19;
      }
    }
    local_c0._padding_ = CONCAT44(uStack_124,local_128);
    local_c0.CurrentBitIndex = uStack_114;
    local_c0.UnvisitedBitMask = 0xffffffff;
    local_c0._28_4_ = uStack_10c;
    local_c0.BaseBitIndex = uStack_110;
    local_d0.Value = (FMessageAddress *)__return_storage_ptr__;
    if ((int)uVar15 < (int)uVar19) {
      do {
        pcVar1 = (char *)(*(longlong *)local_d0.Value + (longlong)(int)uVar15 * 0x28);
        uVar11 = CityHash64(pcVar1,0x10);
        uVar19 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & (uint)uVar11;
        *(uint *)(pcVar1 + 0x24) = uVar19;
        puVar13 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        uVar23 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar19;
        *(undefined4 *)(pcVar1 + 0x20) = *(undefined4 *)(puVar13 + uVar23 * 4);
        *(int *)(puVar13 + uVar23 * 4) = (int)uVar15;
        local_c0.UnvisitedBitMask = local_c0.UnvisitedBitMask & ~local_c0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c0);
        uVar15 = (ulonglong)(uint)local_c0.CurrentBitIndex;
      } while (local_c0.CurrentBitIndex < (local_c0.Array)->NumBits);
    }
  }
LAB_148ceb5d8:
  uVar19 = *(uint *)&(this->Pairs).Elements.field_0x28;
  puVar13 = &(this->Pairs).Elements.field_0x10;
  uVar20 = uVar22;
  if (uVar19 != 0) {
    puVar25 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)puVar13;
    }
    uVar20 = *puVar25;
    uVar15 = uVar18;
    uVar22 = 0;
    uVar16 = 0;
    while (uVar20 == 0) {
      iVar21 = (int)uVar18;
      uVar22 = (int)uVar15 + 0x20;
      uVar15 = (ulonglong)uVar22;
      uVar16 = iVar21 + 1;
      uVar18 = (ulonglong)uVar16;
      uVar20 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_148ceb64f;
      uVar20 = puVar25[(longlong)iVar21 + 1];
    }
    local_res10 = (ulonglong)(-uVar20 & uVar20);
    uVar18 = local_res10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar20 = (uVar22 - 1) + (int)lVar14;
    if ((int)uVar19 < (int)uVar20) {
      uVar20 = uVar19;
    }
  }
LAB_148ceb64f:
  uVar9 = *(uint *)&(this->Pairs).Elements.field_0x28;
  uVar17 = uVar9 & 0xffffffe0;
  TStack_98._padding_ = CONCAT44((int)local_res10,uVar16);
  TStack_98.CurrentBitIndex = uVar20;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar21 = (int)uVar9 >> 5;
  TStack_98._28_4_ = local_44;
  TStack_98.BaseBitIndex = uVar22;
  uStack_78 = CONCAT44(uStack_dc,
                       *(int *)&(this->Pairs).Elements.field_0x8 -
                       *(int *)&(this->Pairs).Elements.field_0x34);
  local_a0 = this;
  TStack_98.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar13;
  if ((((int)uVar9 < 0) || ((int)uVar19 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    pTVar12 = (TMap<FGuid,FMessageAddress,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>_>
               *)(*pcVar6)();
    return pTVar12;
  }
  uVar22 = *(uint *)&(this->Pairs).Elements.field_0x28;
  if (uVar9 != uVar22) {
    puVar24 = *(undefined1 **)&(this->Pairs).Elements.field_0x20;
    if (puVar24 == (undefined1 *)0x0) {
      puVar24 = puVar13;
    }
    uVar16 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar24 + (longlong)iVar21 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar21;
      uVar17 = uVar17 + 0x20;
      iVar21 = iVar21 + 1;
      uVar9 = uVar22;
      if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_148ceb760;
      uVar16 = *(uint *)(puVar24 + lVar14 * 4 + 4);
    }
    uVar18 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar9 = (int)lVar14 + -1 + uVar17;
    if ((int)uVar22 < (int)uVar9) {
      uVar9 = uVar22;
    }
  }
LAB_148ceb760:
  while( true ) {
    pTVar7 = local_a0;
    if (*(int *)&(local_a0->Pairs).Elements.field_0x8 -
        *(int *)&(local_a0->Pairs).Elements.field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    lVar14 = (longlong)TStack_98.CurrentBitIndex;
    if (((TStack_98.CurrentBitIndex == uVar9) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) && (pTVar7 == this))
    break;
    lVar3 = *(longlong *)&(pTVar7->Pairs).Elements;
    uVar4 = *(undefined8 *)(lVar3 + 0x18 + lVar14 * 0x28);
    lVar2 = lVar3 + lVar14 * 0x28;
    uVar5 = *(undefined8 *)(lVar3 + 0x10 + lVar14 * 0x28);
    if ((((uint)((ulonglong)uVar4 >> 0x20) != ((param_1.Event)->RegistrationAddress).UniqueId.D ||
         (uint)((ulonglong)uVar5 >> 0x20) != ((param_1.Event)->RegistrationAddress).UniqueId.B) ||
        (uint)uVar4 != ((param_1.Event)->RegistrationAddress).UniqueId.C) ||
        (uint)uVar5 != ((param_1.Event)->RegistrationAddress).UniqueId.A) {
      local_68 = lVar2 + 0x10;
      local_70 = lVar2;
      TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_const_&,FMessageAddress_const_&>_>
                ((TSet<TTuple<FGuid,FMessageAddress>,TDefaultMapHashableKeyFuncs<FGuid,FMessageAddress,0>,FDefaultSetAllocator>
                  *)__return_storage_ptr__,&local_d0,(bool *)&local_70);
    }
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
  return __return_storage_ptr__;
}

// ResolveChannelNames<TStringView<wchar_t>_> @ 148cebe80

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __cdecl
ResolveChannelNames<TStringView<wchar_t>_>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<TStringView<wchar_t>_const_,int> *param_1,
          TMap<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  FScriptContainerElement *pFVar4;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar5;
  TStringView<wchar_t> *pTVar6;
  TStringView<wchar_t> *pTVar7;
  ForAnyElementType local_28;
  int local_20;
  int iStack_1c;
  TStringView<wchar_t> local_18;
  
  pTVar6 = param_1->DataPtr;
  local_28.Data = (FScriptContainerElement *)0x0;
  pTVar7 = pTVar6 + param_1->ArrayNum;
  local_20 = 0;
  iStack_1c = local_20;
  do {
    if (pTVar6 == pTVar7) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_28.Data;
      __return_storage_ptr__->ArrayNum = local_20;
      __return_storage_ptr__->ArrayMax = iStack_1c;
      return __return_storage_ptr__;
    }
    local_18.DataPtr = pTVar6->DataPtr;
    local_18.Size = pTVar6->Size;
    local_18._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
    uVar3 = HashName(&local_18);
    pFVar4 = (FScriptContainerElement *)
             TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
             ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                     *)param_2,uVar3);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      if (((local_28.Data <= pFVar4) && (pFVar4 < local_28.Data + (longlong)iStack_1c * 4)) &&
         (bVar2 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar5;
      }
      if (local_20 == iStack_1c) {
        local_20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_28,&iStack_1c);
      }
      *(uint *)(local_28.Data + (longlong)local_20 * 4) = *(uint *)pFVar4;
      local_20 = local_20 + 1;
    }
    pTVar6 = pTVar6 + 1;
  } while( true );
}

// ResolveChannelNames<FString> @ 148cebfe0

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __cdecl
ResolveChannelNames<FString>
          (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FString_const_,int> *param_1,
          TMap<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
          *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  FScriptContainerElement *pFVar5;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar6;
  FString *pFVar7;
  FString *pFVar8;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FScriptContainerElement *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TStringView<wchar_t> local_28;
  
  pFVar7 = param_1->DataPtr;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  pFVar8 = pFVar7 + param_1->ArrayNum;
  local_3c = 0;
  do {
    if (pFVar7 == pFVar8) {
      (__return_storage_ptr__->AllocatorInstance).Data = local_48.Data;
      __return_storage_ptr__->ArrayNum = local_40;
      __return_storage_ptr__->ArrayMax = local_3c;
      return __return_storage_ptr__;
    }
    local_38 = (pFVar7->Data).AllocatorInstance.Data;
    iVar1 = (pFVar7->Data).ArrayNum;
    iStack_30 = iVar1 + -1;
    if (iVar1 == 0) {
      iStack_30 = 0;
    }
    local_28._12_4_ = uStack_2c;
    local_28.Size = iStack_30;
    local_28.DataPtr = (wchar_t *)local_38;
    uVar4 = HashName(&local_28);
    pFVar5 = (FScriptContainerElement *)
             TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
             ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                     *)param_2,uVar4);
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      if (((local_48.Data <= pFVar5) && (pFVar5 < local_48.Data + (longlong)local_3c * 4)) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar6;
      }
      if (local_40 == local_3c) {
        local_40 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_48,&local_3c);
      }
      *(uint *)(local_48.Data + (longlong)local_40 * 4) = *(uint *)pFVar5;
      local_40 = local_40 + 1;
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// get<1,TTuple<unsigned_int,FTraceStatus::FChannel>_&> @ 148cec2a0

FChannel * __cdecl
get<1,TTuple<unsigned_int,FTraceStatus::FChannel>_&>
          (TTuple<unsigned_int,FTraceStatus::FChannel> *param_1)

{
  return (FChannel *)&param_1->field_0x8;
}

// get<0,TTuple<unsigned_int,FTraceStatus::FChannel>_&> @ 148cec2b0

uint * __cdecl
get<0,TTuple<unsigned_int,FTraceStatus::FChannel>_&>
          (TTuple<unsigned_int,FTraceStatus::FChannel> *param_1)

{
  return (uint *)param_1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 148ceef80

/* WARNING: Enum "Type": Some values do not have unique names */
/* [thunk]:public: virtual void * __ptr64 __cdecl FSessionService::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FSessionService::_vector_deleting_destructor__adjustor_16__(FSessionService *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FSessionService *)&this[-1].MessageEndpoint.SharedReferenceCount,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 148ceef90

void * __thiscall
IBaseDelegateInstance<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ceefc0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ceeff0

void * __thiscall
IBaseDelegateInstance<void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (IBaseDelegateInstance<void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef020

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FSessionManager,bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FSessionManager,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef050

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseRawMethodDelegateInstance<0,FTraceController,void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FTraceController,void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef080

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FSessionInfo,1,void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef0e0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseSPMethodDelegateInstance<0,FSessionManager,1,void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->UserObject).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef140

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(FMessageBusNotification_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef170

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<ISessionInfo,1>_const_&,TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef1a0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(TSharedRef<ISessionInstanceInfo,1>_const_&,TSharedRef<FSessionLogMessage,1>_const_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef1d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FEngineServicePong,FSessionManager>::_scalar_deleting_destructor_
          (TRawMessageHandler<FEngineServicePong,FSessionManager> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef210

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>::_scalar_deleting_destructor_
          (TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef250

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef290

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef2d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FSessionServicePing,FSessionService>::_scalar_deleting_destructor_
          (TRawMessageHandler<FSessionServicePing,FSessionService> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef310

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FSessionServicePong,FSessionManager>::_scalar_deleting_destructor_
          (TRawMessageHandler<FSessionServicePong,FSessionManager> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef350

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlChannelsDesc,FTraceController> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef390

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlChannelsStatus,FTraceController> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlDiscovery,FTraceController>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlDiscovery,FTraceController> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef410

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlSettings,FTraceController>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlSettings,FTraceController> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef450

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
TRawMessageHandler<FTraceControlStatus,FTraceController>::_scalar_deleting_destructor_
          (TRawMessageHandler<FTraceControlStatus,FTraceController> *this,uint param_1)

{
  this->_padding_ = (longlong)&___7IMessageHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef490

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionLogMessage,SharedPointerInternals::DefaultDeleter<FSessionLogMessage>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSessionLogMessage,SharedPointerInternals::DefaultDeleter<FSessionLogMessage>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef4d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServicePong,FSessionManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServicePong,FSessionManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FEngineServicePong,FSessionManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FEngineServicePong,FSessionManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef510

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLog,FSessionInstanceInfo>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef550

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLogSubscribe,FSessionService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef590

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServiceLogUnsubscribe,FSessionService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServicePing,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServicePing,FSessionService>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServicePing,FSessionService>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServicePing,FSessionService>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef610

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServicePong,FSessionManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServicePong,FSessionManager>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FSessionServicePong,FSessionManager>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FSessionServicePong,FSessionManager>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef650

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsDesc,FTraceController>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef690

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlChannelsStatus,FTraceController>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef6d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlDiscovery,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlDiscovery,FTraceController>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlDiscovery,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlDiscovery,FTraceController>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef710

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSettings,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSettings,FTraceController>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlSettings,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlSettings,FTraceController>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef750

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStatus,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStatus,FTraceController>_>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<TRawMessageHandler<FTraceControlStatus,FTraceController>,SharedPointerInternals::DefaultDeleter<TRawMessageHandler<FTraceControlStatus,FTraceController>_>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef790

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionInfo,SharedPointerInternals::DefaultDeleter<FSessionInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSessionInfo,SharedPointerInternals::DefaultDeleter<FSessionInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef7d0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FSessionInstanceInfo,SharedPointerInternals::DefaultDeleter<FSessionInstanceInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FSessionInstanceInfo,SharedPointerInternals::DefaultDeleter<FSessionInstanceInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef810

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FTraceController,SharedPointerInternals::DefaultDeleter<FTraceController>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FTraceController,SharedPointerInternals::DefaultDeleter<FTraceController>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef850

void * __thiscall FSessionInfo::_scalar_deleting_destructor_(FSessionInfo *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LogReceivedEvent).field_0x8,*(int *)&(this->LogReceivedEvent).field_0x10);
  pvVar5 = *(void **)&(this->LogReceivedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LogReceivedEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InstanceDiscoveredEvent).field_0x8,
             *(int *)&(this->InstanceDiscoveredEvent).field_0x10);
  pvVar5 = *(void **)&(this->InstanceDiscoveredEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InstanceDiscoveredEvent);
  pFVar6 = (this->SessionOwner).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->SessionName).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pTVar7 = (this->MessageBusPtr).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  *(undefined4 *)&(this->Instances).field_0x48 = 0;
  pvVar5 = *(void **)&(this->Instances).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FSessionInstanceInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Instances);
  this->_padding_ = (longlong)&___7ISessionInfo__6B_;
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cef990

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FSessionInstanceInfo::_scalar_deleting_destructor_(FSessionInstanceInfo *this,uint param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong *plVar8;
  
  this->_padding_ = (longlong)&___7FSessionInstanceInfo__6B_;
  FMessageEndpoint::SafeRelease(&this->MessageEndpoint);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LogReceivedEvent).field_0x8,*(int *)&(this->LogReceivedEvent).field_0x10);
  pvVar5 = *(void **)&(this->LogReceivedEvent).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LogReceivedEvent);
  pFVar6 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pTVar7 = (this->Owner).WeakReferenceCount.ReferenceController;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar7->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<FSessionLogMessage,1>,int>
            ((TSharedPtr<FSessionLogMessage,1> *)(this->LogMessages).AllocatorInstance.Data,
             (this->LogMessages).ArrayNum);
  pFVar6 = (this->LogMessages).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->InstanceType).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->InstanceName).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->DeviceName).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->CurrentLevel).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->BuildDate).Data.AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  this->_padding_ = (longlong)&___7ISessionInstanceInfo__6B_;
  plVar8 = (longlong *)this->_padding_;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar8 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar8 + 8))(plVar8,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x118);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cefaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FSessionManager::_scalar_deleting_destructor_(FSessionManager *this,uint param_1)

{
  ~FSessionManager(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1a0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cefb30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FSessionService::_scalar_deleting_destructor_(FSessionService *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  FOutputDeviceRedirector *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->_padding_ = (longlong)&_vftable__for__FOutputDevice__;
  this->_padding_ = (longlong)&_vftable__for__ISessionService__;
  bVar5 = IsRunning((FSessionService *)&this->_padding_);
  if (bVar5) {
    this_00 = GetGlobalLogSingleton();
    FOutputDeviceRedirector::RemoveOutputDevice(this_00,(FOutputDevice *)this);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->MessageEndpoint != (TSharedPtr<FMessageEndpoint,1> *)&local_18) {
      (this->MessageEndpoint).Object = (FMessageEndpoint *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->MessageEndpoint).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->MessageBusPtr).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LogSubscribersLock);
  pFVar4 = (this->LogSubscribers).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7ISessionService__6B_;
  FOutputDevice::~FOutputDevice((FOutputDevice *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cefc30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FTraceController::_scalar_deleting_destructor_(FTraceController *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  BOOLEAN BVar5;
  bool bVar6;
  void *pvVar7;
  
  this->_padding_ = (longlong)&___7FTraceController__6B_;
  *(undefined4 *)&(this->InstanceToAddress).field_0x48 = 0;
  pvVar7 = *(void **)&(this->InstanceToAddress).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,FMessageAddress>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->InstanceToAddress);
  *(undefined4 *)&(this->Instances).field_0x48 = 0;
  pvVar7 = *(void **)&(this->Instances).field_0x40;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FTraceController::FTracingInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FTraceController::FTracingInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMessageAddress,FTraceController::FTracingInstance>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Instances);
  BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  if (BVar5 == '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pvVar7 = (void *)(*pcVar4)();
      return pvVar7;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->InstancesLock);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->StatusReceivedEvent).field_0x8,*(int *)&(this->StatusReceivedEvent).field_0x10
            );
  pvVar7 = *(void **)&(this->StatusReceivedEvent).field_0x8;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StatusReceivedEvent);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  pTVar3 = (this->MessageBus).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x100);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cefd60

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FTraceControllerCommands::_scalar_deleting_destructor_(FTraceControllerCommands *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FTraceControllerCommands__6B_;
  *(undefined4 *)&(this->SettableChannels).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SettableChannels).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SettableChannels);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MessageEndpoint).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7ITraceControllerCommands__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cefde0

void * __thiscall ISessionInfo::_scalar_deleting_destructor_(ISessionInfo *this,uint param_1)

{
  *this = (ISessionInfo)&___7ISessionInfo__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cefe20

void * __thiscall
ISessionInstanceInfo::_scalar_deleting_destructor_(ISessionInstanceInfo *this,uint param_1)

{
  *this = (ISessionInstanceInfo)&___7ISessionInstanceInfo__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cefe60

void * __thiscall ISessionManager::_scalar_deleting_destructor_(ISessionManager *this,uint param_1)

{
  *this = (ISessionManager)&___7ISessionManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cefea0

void * __thiscall ISessionService::_scalar_deleting_destructor_(ISessionService *this,uint param_1)

{
  *this = (ISessionService)&___7ISessionService__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148cefee0

void * __thiscall
ITraceController::_scalar_deleting_destructor_(ITraceController *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 148ceff10

void * __thiscall
ITraceControllerCommands::_scalar_deleting_destructor_(ITraceControllerCommands *this,uint param_1)

{
  *this = (ITraceControllerCommands)&___7ITraceControllerCommands__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// HashName @ 148cf4450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl HashName(TStringView<wchar_t> *param_1)

{
  wchar_t wVar1;
  void *pvVar2;
  FXxHash64 FVar3;
  wchar_t *pwVar4;
  int iVar5;
  ulong64 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int iStack_b0;
  TStringBuilderBase<wchar_t> local_a8;
  wchar_t local_88 [48];
  ulonglong local_28 [4];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_a8.bIsDynamic = false;
  local_a8.bIsExternal = false;
  local_a8.Base = local_88;
  local_a8.CurPos = local_88;
  local_a8.End = (wchar_t *)local_28;
  iVar5 = param_1->Size;
  if (0 < iVar5) {
    pwVar4 = param_1->DataPtr;
    if (pwVar4[(longlong)iVar5 + -1] == L's') {
      if (iVar5 + -1 < iVar5) {
        iVar5 = iVar5 + -1;
      }
      iVar10 = 0;
      if (0 < iVar5) {
        iVar10 = iVar5;
      }
      local_b8._0_4_ = SUB84(pwVar4,0);
      local_b8._4_4_ = (undefined4)((ulonglong)pwVar4 >> 0x20);
      uVar8 = (undefined4)local_b8;
      uVar9 = local_b8._4_4_;
      local_b8 = pwVar4;
      iStack_b0 = iVar10;
      goto LAB_148cf44d8;
    }
  }
  uVar8 = *(undefined4 *)&param_1->DataPtr;
  uVar9 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iVar10 = param_1->Size;
LAB_148cf44d8:
  uVar6 = (ulong64)iVar10;
  if (local_28 < local_88 + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_a8,uVar6);
  }
  if (iVar10 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(local_a8.CurPos,(void *)CONCAT44(uVar9,uVar8),uVar6 * 2)
    ;
    local_a8.CurPos = (wchar_t *)((longlong)pvVar2 + uVar6 * 2);
  }
  wVar1 = *local_a8.Base;
  pwVar4 = local_a8.Base;
  for (lVar7 = (longlong)(int)((longlong)local_a8.CurPos - (longlong)local_a8.Base >> 1);
      (wVar1 != L'\0' && (lVar7 != 0)); lVar7 = lVar7 + -1) {
    *pwVar4 = *pwVar4 - (-(ushort)((ushort)*pwVar4 - 0x61 < 0x1a) & 0x20);
    pwVar4 = pwVar4 + 1;
    wVar1 = *pwVar4;
  }
  FVar3 = FXxHash64::HashBuffer
                    (local_a8.Base,
                     (longlong)(int)((longlong)local_a8.CurPos - (longlong)local_a8.Base >> 1) * 2);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_a8);
  return FVar3.Hash;
}

// IMPLEMENT_MODULE_SessionServices @ 148cfb920

void __cdecl IMPLEMENT_MODULE_SessionServices(void)

{
  return;
}

