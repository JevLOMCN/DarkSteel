// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 2

// Get @ 142874a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FSlateColor * __thiscall
SlateAttributePrivate::
TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
::Get(TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
      *this)

{
  code *pcVar1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  FSlateColor *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  
  pTVar5 = (this->Owner).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar5->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_142874a30;
      }
      LOCK();
      aVar3 = pTVar5->SharedReferenceCount;
      bVar6 = aVar2 == aVar3;
      if (bVar6) {
        pTVar5->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar6);
    if ((this->Owner).Object != (SWidget *)0x0) {
      pFVar4 = (FSlateColor *)this->Attribute;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      return pFVar4;
    }
  }
LAB_142874a30:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                     ,0x86,
                     L"It is an error to call GetValue() on an unset TSlateMemberAttributeRef. Please either check IsValid() or use Get(DefaultValue) instead."
                    );
  if (bVar6) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FSlateColor *)(*pcVar1)();
    return pFVar4;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_struct_FSlateColor_const&___ptr64___cdecl_SlateAttributePrivate::TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>::Get(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_struct_FSlateColor_const&___ptr64___cdecl_SlateAttributePrivate::TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>::Get(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_struct_FSlateColor_const&___ptr64___cdecl_SlateAttributePrivate::TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>::Get(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    `public:_struct_FSlateColor_const&___ptr64___cdecl_SlateAttributePrivate::TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>::Get(void)const___ptr64'
    ::__l2::Tmp.SpecifiedColor.field0_0x0 =
         (FLinearColor_u_0)(FLinearColor_u_0)___xmm_3f8000003f800000000000003f800000;
    `public:_struct_FSlateColor_const&___ptr64___cdecl_SlateAttributePrivate::TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>::Get(void)const___ptr64'
    ::__l2::Tmp.ColorUseRule = UseColor_Specified;
    _Init_thread_footer(&`public:_struct_FSlateColor_const&___ptr64___cdecl_SlateAttributePrivate::TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>::Get(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    return &`public:_struct_FSlateColor_const&___ptr64___cdecl_SlateAttributePrivate::TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>::Get(void)const___ptr64'
            ::__l2::Tmp;
  }
  return &`public:_struct_FSlateColor_const&___ptr64___cdecl_SlateAttributePrivate::TSlateMemberAttributeRef<SWidget::TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>::Get(void)const___ptr64'
          ::__l2::Tmp;
}

// ToAttribute @ 142a101a0

TAttribute<EVisibility> * __thiscall
SlateAttributePrivate::
TSlateMemberAttributeRef<SWidget::TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
::ToAttribute(TSlateMemberAttributeRef<SWidget::TSlateAttribute<EVisibility,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_>_>
              *this,TAttribute<EVisibility> *__return_storage_ptr__)

{
  TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  SWidget *pSVar1;
  FSlateAttributeImpl *this_01;
  atomic<int> aVar2;
  atomic<int> aVar3;
  ISlateAttributeGetter *pIVar4;
  SWidget *pSVar5;
  SWidget *pSVar6;
  bool bVar7;
  
  pSVar1 = (SWidget *)(this->Owner).WeakReferenceCount.ReferenceController;
  pSVar5 = (SWidget *)0x0;
  if (pSVar1 != (SWidget *)0x0) {
    aVar2 = *(atomic<int> *)&pSVar1->_padding_;
    do {
      pSVar6 = pSVar5;
      if (aVar2 == (atomic<int>)0x0) goto LAB_142a101e5;
      LOCK();
      aVar3 = *(atomic<int> *)&pSVar1->_padding_;
      bVar7 = aVar2 == aVar3;
      if (bVar7) {
        *(atomic<int> *)&pSVar1->_padding_ = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar7);
    pSVar5 = (this->Owner).Object;
  }
  this_00 = &__return_storage_ptr__->Getter;
  pSVar6 = pSVar1;
  if (pSVar5 == (SWidget *)0x0) {
LAB_142a101e5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pSVar6);
    __return_storage_ptr__->Value = (TEnumAsByte<EVisibility::Private>)0x19;
    __return_storage_ptr__->bIsSet = false;
    *(undefined8 *)&__return_storage_ptr__->Getter = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
    *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
  }
  else {
    this_01 = (FSlateAttributeImpl *)this->Attribute;
    pIVar4 = FSlateAttributeImpl::ProtectedFindGetter(this_01,pSVar5,Member);
    if (pIVar4 == (ISlateAttributeGetter *)0x0) {
      (__return_storage_ptr__->Value).Value.Value = (uchar)*this_01;
      __return_storage_ptr__->bIsSet = true;
      *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x14 = 0;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar1);
    }
    else {
      __return_storage_ptr__->Value = (TEnumAsByte<EVisibility::Private>)0x19;
      __return_storage_ptr__->bIsSet = true;
      *(undefined8 *)this_00 = 0;
      *(undefined8 *)&(__return_storage_ptr__->Getter).field_0x8 = 0;
      *(undefined4 *)&(__return_storage_ptr__->Getter).field_0x10 = 0;
      TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy>::
      CopyFrom<FDefaultDelegateUserPolicy>
                (this_00,(TDelegate<EVisibility___cdecl(void),FDefaultDelegateUserPolicy> *)
                         (pIVar4 + 1));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pSVar1);
    }
  }
  return __return_storage_ptr__;
}

