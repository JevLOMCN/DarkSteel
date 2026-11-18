// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// FTextAttributeFormatted @ 142c988c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextAttributeFormatted * __thiscall
UE::Editor::DataStorage::FTextAttributeFormatted::FTextAttributeFormatted
          (FTextAttributeFormatted *this,FTextFormat *param_1,ulong64 param_2,ICoreProvider *param_3
          )

{
  TReferenceControllerBase<1> *pTVar1;
  
  *(undefined8 *)&this->NamedProperties = 0;
  *(undefined8 *)&(this->NamedProperties).field_0x8 = 0;
  *(undefined8 *)&(this->NamedProperties).field_0x20 = 0;
  *(undefined4 *)&(this->NamedProperties).field_0x28 = 0;
  *(undefined4 *)&(this->NamedProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedProperties).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamedProperties).field_0x34 = 0;
  *(undefined8 *)&(this->NamedProperties).field_0x40 = 0;
  *(undefined4 *)&(this->NamedProperties).field_0x48 = 0;
  (this->Format).TextFormatData.Object = (param_1->TextFormatData).Object;
  pTVar1 = (param_1->TextFormatData).SharedReferenceCount.ReferenceController;
  (this->Format).TextFormatData.SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->TargetRow = param_2;
  this->DataStorage = param_3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->TextFormatData).SharedReferenceCount.ReferenceController);
  return this;
}

// operator_TAttribute<FText> @ 142c9c7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TAttribute<FText> * __thiscall
UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>
          (FTextAttributeFormatted *this,TAttribute<FText> *__return_storage_ptr__)

{
  ulong64 uVar1;
  ICoreProvider *pIVar2;
  TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *pTVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  ForAnyElementType local_c0;
  int local_b8;
  FDestructionSentinel local_b0;
  undefined1 local_98 [16];
  TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
  local_88;
  ICoreProvider *local_38;
  ulong64 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_98._0_8_ = (this->Format).TextFormatData.Object;
  uVar1 = this->TargetRow;
  pIVar2 = this->DataStorage;
  local_98._8_8_ = (this->Format).TextFormatData.SharedReferenceCount.ReferenceController;
  if ((TReferenceControllerBase<1> *)local_98._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_98._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_98._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
              *)(local_98 + 0x10),
             (TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
              *)this);
  local_38 = pIVar2;
  local_30 = uVar1;
  pTVar3 = CreateLambda<TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy>::__V::XZ::_UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>_::__l2::<lambda_1>,XZ::_UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>_::__l2::__QEAV<lambda_1>::AV0_*_const_volatile,____>
                     ((TDelegate<FText___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8,
                      (<lambda_1> *)local_98);
  FText::FText(&__return_storage_ptr__->Value);
  __return_storage_ptr__->bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&__return_storage_ptr__->Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)pTVar3);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)&local_b0);
  if ((local_b8 != 0) && (local_c0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_c0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_c0,0,0,0x10);
    local_b8 = 0;
  }
  if (local_b0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_b0.Accessor,&local_b0);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_98 + 0x10));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_98._8_8_);
  return __return_storage_ptr__;
}

// operator() @ 142c9d7c0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
_??_::XZ::QEBA::XZ::`UE::Editor::DataStorage::FTextAttributeFormatted::operator_TAttribute<FText>'::
__l2::<lambda_1>::operator()(void *this,FText *__return_storage_ptr__)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FText *pFVar7;
  UObject *pUVar8;
  void *pvVar9;
  TTuple<FString,FFormatArgumentValue> *pTVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  FString *pFVar15;
  uint uVar16;
  int iVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  undefined1 local_res8 [8];
  FText *local_res10;
  int local_res18;
  int local_res20;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_148
  ;
  FWeakObjectPtr local_138;
  FWeakObjectPtr local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  FText local_118;
  longlong *local_108;
  int iStack_100;
  uint uStack_fc;
  TBitArray<FDefaultBitArrayAllocator> *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [8];
  UObject *local_d0;
  FName local_c8;
  <lambda_2> local_c0;
  longlong *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  UObject *local_88;
  FScriptContainerElement *local_80;
  FWeakObjectPtr *local_78;
  TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>
  *local_70;
  FTextFormat local_68;
  FString local_58;
  
  uVar16 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44);
  local_148.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Pairs.ArrayNum = 0;
  local_148.Pairs.ArrayMax = 0;
  local_res10 = __return_storage_ptr__;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  iVar17 = 0;
  if (0 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar16,(ForAnyElementType *)&local_148,0,&local_148.Pairs.ArrayMax);
  }
  iVar2 = *(int *)((longlong)this + 0x38);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x20);
  local_108 = (longlong *)((longlong)this + 0x10);
  uStack_fc = 1;
  local_e8 = 0;
  iStack_ec = local_e8;
  if (iVar2 != 0) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    local_e8 = 0;
    iVar17 = 0;
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar17;
      local_e8 = local_e8 + 0x20;
      iVar17 = iVar17 + 1;
      iStack_ec = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_142c9d8b1;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uStack_fc = -uVar16 & uVar16;
    uVar13 = (ulonglong)uStack_fc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_ec = local_e8 + -1 + local_res18;
    if (iVar2 < iStack_ec) {
      iStack_ec = iVar2;
    }
  }
LAB_142c9d8b1:
  uVar16 = *(uint *)((longlong)this + 0x38);
  uVar14 = uVar16 & 0xffffffe0;
  iStack_e0 = *(int *)((longlong)this + 0x18) - *(int *)((longlong)this + 0x44);
  uStack_f0 = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_fc,iVar17);
  TStack_b0.CurrentBitIndex = iStack_ec;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar16 >> 5;
  TStack_b0._28_4_ = iStack_ec;
  TStack_b0.BaseBitIndex = local_e8;
  uStack_90 = CONCAT44(uStack_dc,iStack_e0);
  iStack_100 = iVar17;
  local_f8 = pTVar1;
  iStack_e4 = iStack_ec;
  local_b8 = local_108;
  TStack_b0.Array = pTVar1;
  if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FText *)(*pcVar5)();
    return pFVar7;
  }
  uVar3 = *(uint *)((longlong)this + 0x38);
  if (uVar16 != uVar3) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x30) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = pTVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar18->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar12;
      uVar14 = uVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar16 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142c9d9b1;
      uVar16 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar16 = local_res20 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar16) {
      uVar16 = uVar3;
    }
  }
LAB_142c9d9b1:
  do {
    plVar4 = local_b8;
    if ((int)local_b8[1] - *(int *)((longlong)local_b8 + 0x34) != (int)uStack_90) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar7 = local_res10;
    if (((TStack_b0.CurrentBitIndex == uVar16) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x20))) &&
       (plVar4 == (longlong *)((longlong)this + 0x10))) {
      local_68.TextFormatData.Object = *(FTextFormatData **)this;
      local_68.TextFormatData.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)((longlong)this + 8);
      if (local_68.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FText::Format(local_res10,&local_68,&local_148);
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_148.Pairs.AllocatorInstance.Data,
                 local_148.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_148.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_148.Pairs.AllocatorInstance.Data);
      }
      return pFVar7;
    }
    pFVar15 = (FString *)((longlong)TStack_b0.CurrentBitIndex * 0xb0 + *plVar4);
    uVar13 = (ulonglong)*(byte *)&pFVar15[5].Data.AllocatorInstance.Data;
    if ((2 < uVar13) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0x12f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FText *)(*pcVar5)();
      return pFVar7;
    }
    if (*(char *)((longlong)
                  &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TEmptyProperty<class_FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>::IsSame(unsigned___int64)'
                   ::__l2::bIsSameType + uVar13) == '\0') {
      local_138 = *(FWeakObjectPtr *)(pFVar15 + 6);
      if (pFVar15[9].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        plVar4 = *(longlong **)((longlong)this + 0x60);
        pcVar5 = *(code **)(*plVar4 + 0x128);
        local_88 = FWeakObjectPtr::Get(&local_138);
        local_80 = pFVar15[9].Data.AllocatorInstance.Data;
        local_d0 = (UObject *)(*pcVar5)(plVar4,&local_88);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_d0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_d0);
        }
        FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_d0);
      }
      bVar6 = FWeakObjectPtr::IsValid(&local_138);
      if (!bVar6) goto LAB_142c9dd01;
      plVar4 = *(longlong **)((longlong)this + 0x60);
      pcVar5 = *(code **)(*plVar4 + 0xf0);
      pUVar8 = FWeakObjectPtr::Get(&local_138);
      pvVar9 = (void *)(*pcVar5)(plVar4,*(undefined8 *)((longlong)this + 0x68),pUVar8);
      if (pvVar9 == (void *)0x0) goto LAB_142c9dd01;
      local_130 = *(FWeakObjectPtr *)(pFVar15 + 6);
      bVar6 = FWeakObjectPtr::IsValid(&local_130);
      if ((!bVar6) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Type.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementAttributeBindingProperty.h"
                             ,0xe4,
                             L"Nullptr pointer provided to Type while trying to retrieve a property value."
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar5)();
        return pFVar7;
      }
      uVar13 = (ulonglong)*(byte *)&pFVar15[5].Data.AllocatorInstance.Data;
      if ((2 < uVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x12f,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar5)();
        return pFVar7;
      }
      if (*(char *)((longlong)
                    &`public:_static_bool___cdecl_UE::Core::Private::TIsType<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TEmptyProperty<class_FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>::IsSame(unsigned___int64)'
                     ::__l2::bIsSameType + uVar13) != '\0') {
        pUVar8 = FWeakObjectPtr::Get(&local_130);
        local_c8.ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
        local_c8.Number = *(uint *)&pUVar8->field_0x1c;
        ::FName::ToString(&local_c8,&local_58);
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsBound()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TypedElementFramework\\Public\\Elements\\Framework\\TypedElementAttributeBindingProperty.h"
                           ,0xe6,
                           L"Attempting to retrieve the value of object type (%s) from a property that wasn\'t bound."
                          );
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          pFVar7 = (FText *)(*pcVar5)();
          return pFVar7;
        }
      }
      bVar6 = TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>::
              UEOpEquals<UScriptStruct_const_,bool>
                        ((TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_130,
                         (TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)(pFVar15 + 6));
      if (!bVar6) {
        local_78 = &local_130;
        local_70 = (TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>
                    *)(pFVar15 + 1);
        ::`UE::Editor::DataStorage::Private::TProperty<FText>::Get'::__l2::<lambda_1>::operator()
                  (&local_78);
      }
      local_c0.Object = pvVar9;
      pFVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`public:_class_FText&___ptr64___cdecl_UE::Editor::DataStorage::Private::TProperty<FText>::Get(void*___ptr64,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)const___ptr64'::`2'::<lambda_2>,0,1,2,0,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const&___ptr64>(unsigned___int64,`public:_class_FText&___ptr64___cdecl_UE::Editor::DataStorage::Private::TProperty<FText>::Get(void*___ptr64,TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>)const___ptr64'::`2'::<lambda_2>&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>_const&___ptr64)'
                 ::__l2::Invokers[*(byte *)&pFVar15[5].Data.AllocatorInstance.Data])
                         (&local_c0,
                          (TVariant<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>
                           *)(pFVar15 + 1));
      local_128 = 4;
      local_118.TextData.Reference = (pFVar7->TextData).Reference;
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 8))
                  (local_118.TextData.Reference,local_d8);
      }
      local_118.Flags = pFVar7->Flags;
      if ((local_118.TextData.Reference == (ITextData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0xbd,
                             L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar7 = (FText *)(*pcVar5)();
        return pFVar7;
      }
      pTVar10 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                ::AllocateMemoryForEmplace<FString_const_&>(&local_148,pFVar15);
      ::FString::FString((FString *)pTVar10,pFVar15);
      *(undefined4 *)&pTVar10->field_0x10 = local_128;
      *(ulonglong *)&pTVar10->field_0x18 = CONCAT44(uStack_11c,local_120);
      *(ulonglong *)&pTVar10->field_0x18 = CONCAT44(uStack_11c,local_120);
      *(undefined4 *)&pTVar10->field_0x18 = local_120;
      *(ulonglong *)&pTVar10->field_0x18 = CONCAT44(uStack_11c,local_120);
      *(undefined8 *)&pTVar10->field_0x20 = 0;
      *(undefined4 *)&pTVar10->field_0x28 = 0;
      if ((local_118.TextData.Reference != (ITextData *)0x0) &&
         (FText::FText((FText *)&pTVar10->field_0x20,&local_118),
         local_118.TextData.Reference != (ITextData *)0x0)) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
    }
    else {
LAB_142c9dd01:
      pTVar10 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                ::AllocateMemoryForEmplace<FString_const_&>(&local_148,pFVar15);
      ::FString::FString((FString *)pTVar10,pFVar15);
      FFormatArgumentValue::FFormatArgumentValue
                ((FFormatArgumentValue *)&pTVar10->field_0x10,(FFormatArgumentValue *)(pFVar15 + 7))
      ;
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// Arg @ 142ca6650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FTextAttributeFormatted * __thiscall
UE::Editor::DataStorage::FTextAttributeFormatted::Arg
          (FTextAttributeFormatted *this,FString *param_1,FFormatArgumentValue *param_2)

{
  TOptional<FText> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FTextAttributeFormatted *pFVar5;
  ulonglong uVar6;
  undefined1 auStack_108 [32];
  TPairInitializer<FString_&&,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo_&&>
  local_e8;
  FString *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_88;
  undefined8 uStack_80;
  FWeakObjectPtr local_78;
  undefined8 uStack_70;
  Type local_68;
  FFormatArgumentValue_u_8 local_60;
  FText local_58;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  uStack_70 = 0;
  local_e8.Value = (FPropertyInfo *)0x0;
  FWeakObjectPtr::operator=(&local_78,(FObjectPtr)&local_e8.Value);
  pTVar1 = &param_2->TextValue;
  local_60 = param_2->field1_0x8;
  local_68 = param_2->Type;
  local_58.TextData.Reference = (ITextData *)0x0;
  local_58.Flags = 0;
  if ((pTVar1->field0_0x0).TypedValue.TextData.Reference != (ITextData *)0x0) {
    FText::FText(&local_58,(FText *)pTVar1);
  }
  local_d0 = &local_c8;
  local_48 = 0;
  local_d8 = param_1;
  TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FString_&&,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo_&&>_>
            ((TSet<TTuple<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo>,TDefaultMapHashableKeyFuncs<FString,UE::Editor::DataStorage::FTextAttributeFormatted::FPropertyInfo,0>,FDefaultSetAllocator>
              *)this,&local_e8,(bool *)&local_d8);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  uVar6 = local_88 & 0xff;
  if (2 < (byte)local_88) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FTextAttributeFormatted *)(*pcVar3)();
      return pFVar5;
    }
  }
  if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6] !=
      Core::Private::TDestructorCaller<UE::Editor::DataStorage::Private::TEmptyProperty<FText>_>::
      Destruct) {
    (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Editor::DataStorage::Private::TEmptyProperty<FText>,UE::Editor::DataStorage::Private::TDirectProperty<FText>,UE::Editor::DataStorage::Private::TConvertibleProperty<FText>_>::Destruct(unsigned___int64,void*___ptr64)'
                ::__l2::Destructors)[uVar6])(&local_c8);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong **)&pTVar1->field0_0x0 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&pTVar1->field0_0x0 + 0x10))();
  }
  return this;
}

