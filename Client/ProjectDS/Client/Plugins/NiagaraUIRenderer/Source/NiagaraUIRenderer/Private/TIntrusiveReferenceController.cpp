// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 2

// TIntrusiveReferenceController<SNiagaraUISystemWidget,1><> @ 14d28e4d0

TIntrusiveReferenceController<SNiagaraUISystemWidget,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNiagaraUISystemWidget,1>::
TIntrusiveReferenceController<SNiagaraUISystemWidget,1><>
          (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *this)

{
  TTypeCompatibleBytes<SNiagaraUISystemWidget> *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *pTVar4;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  
  *(undefined4 *)&this->_padding_ = 1;
  this_00 = &this->ObjectStorage;
  this->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VSNiagaraUISystemWidget___00_SharedPointerInternals__6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  memset(this_00,0,0x378);
  SLeafWidget::SLeafWidget((SLeafWidget *)this_00);
  (this->ObjectStorage).Pad[0x220] = '\0';
  (this->ObjectStorage).Pad[0x221] = '\0';
  *(undefined ***)((this->ObjectStorage).Pad + 0x218) = &___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)((this->ObjectStorage).Pad + 0x218));
  (this->ObjectStorage).Pad[0x318] = '\0';
  (this->ObjectStorage).Pad[0x319] = '\0';
  (this->ObjectStorage).Pad[0x31a] = '\0';
  (this->ObjectStorage).Pad[0x31b] = '\0';
  (this->ObjectStorage).Pad[0x31c] = '\0';
  (this->ObjectStorage).Pad[0x31d] = '\0';
  (this->ObjectStorage).Pad[0x31e] = '\0';
  (this->ObjectStorage).Pad[799] = '\0';
  pTVar4 = (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)
           ((this->ObjectStorage).Pad + 0x350);
  (this->ObjectStorage).Pad[800] = '\0';
  (this->ObjectStorage).Pad[0x321] = '\0';
  (this->ObjectStorage).Pad[0x322] = '\0';
  (this->ObjectStorage).Pad[0x323] = '\0';
  (this->ObjectStorage).Pad[0x324] = '\x03';
  (this->ObjectStorage).Pad[0x325] = '\0';
  (this->ObjectStorage).Pad[0x326] = '\0';
  (this->ObjectStorage).Pad[0x327] = '\0';
  *(undefined ***)this_00->Pad = &SNiagaraUISystemWidget::_vftable__for__SLeafWidget__;
  *(undefined ***)((this->ObjectStorage).Pad + 0x218) =
       &SNiagaraUISystemWidget::_vftable__for__FGCObject__;
  (this->ObjectStorage).Pad[0x328] = '\0';
  (this->ObjectStorage).Pad[0x329] = '\0';
  (this->ObjectStorage).Pad[0x32a] = '\0';
  (this->ObjectStorage).Pad[0x32b] = '\0';
  (this->ObjectStorage).Pad[0x32c] = '\0';
  (this->ObjectStorage).Pad[0x32d] = '\0';
  (this->ObjectStorage).Pad[0x32e] = '\0';
  (this->ObjectStorage).Pad[0x32f] = '\0';
  (this->ObjectStorage).Pad[0x330] = '\0';
  (this->ObjectStorage).Pad[0x331] = '\0';
  (this->ObjectStorage).Pad[0x332] = '\0';
  (this->ObjectStorage).Pad[0x333] = '\0';
  (this->ObjectStorage).Pad[0x334] = '\0';
  (this->ObjectStorage).Pad[0x335] = '\0';
  (this->ObjectStorage).Pad[0x336] = '\0';
  (this->ObjectStorage).Pad[0x337] = '\0';
  (this->ObjectStorage).Pad[0x338] = '\0';
  (this->ObjectStorage).Pad[0x339] = '\0';
  (this->ObjectStorage).Pad[0x33a] = '\0';
  (this->ObjectStorage).Pad[0x33b] = '\0';
  (this->ObjectStorage).Pad[0x33c] = '\0';
  (this->ObjectStorage).Pad[0x33d] = '\0';
  (this->ObjectStorage).Pad[0x33e] = '\0';
  (this->ObjectStorage).Pad[0x33f] = '\0';
  (this->ObjectStorage).Pad[0x340] = '\0';
  (this->ObjectStorage).Pad[0x341] = '\0';
  (this->ObjectStorage).Pad[0x342] = '\0';
  (this->ObjectStorage).Pad[0x343] = '\0';
  (this->ObjectStorage).Pad[0x344] = '\0';
  (this->ObjectStorage).Pad[0x345] = '\0';
  (this->ObjectStorage).Pad[0x346] = '\0';
  (this->ObjectStorage).Pad[0x347] = '\0';
  (this->ObjectStorage).Pad[0x348] = '\x01';
  (this->ObjectStorage).Pad[0x349] = '\0';
  (this->ObjectStorage).Pad[0x34a] = '\0';
  (this->ObjectStorage).Pad[0x34b] = '\0';
  (this->ObjectStorage).Pad[0x34c] = '\0';
  (this->ObjectStorage).Pad[0x34d] = '\0';
  (this->ObjectStorage).Pad[0x34e] = 0x80;
  (this->ObjectStorage).Pad[0x34f] = '?';
  pTVar4->_padding_ = 0;
  (this->ObjectStorage).Pad[0x358] = '\0';
  (this->ObjectStorage).Pad[0x359] = '\0';
  (this->ObjectStorage).Pad[0x35a] = '\0';
  (this->ObjectStorage).Pad[0x35b] = '\0';
  (this->ObjectStorage).Pad[0x35c] = '\0';
  (this->ObjectStorage).Pad[0x35d] = '\0';
  (this->ObjectStorage).Pad[0x35e] = '\0';
  (this->ObjectStorage).Pad[0x35f] = '\0';
  iVar3 = _finite(0.0);
  if (iVar3 != 0) {
    iVar3 = _finite(*(double *)((this->ObjectStorage).Pad + 0x358));
    if (iVar3 != 0) goto LAB_14d28e5cc;
  }
  local_res8[0] = 0;
  `SlateAttributePrivate::
  TSlateAttributeBase<SWidget,UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,0>
  ::VerifyNan'::__l17::<lambda_1>::operator()(local_res8);
LAB_14d28e5cc:
  if ((pTVar4 < this_00) || (this + 1 <= pTVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar4,(SWidget *)this_00);
  if (!bVar2) {
    local_res10[0] = 0;
    `SlateAttributePrivate::
    TSlateMemberAttribute<UE::Math::TVector2<double>,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SNiagaraUISystemWidget,void>'::__l2::<lambda_1>::operator()
              (local_res10);
  }
  pTVar4 = (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)
           ((this->ObjectStorage).Pad + 0x360);
  pTVar4->_padding_ = 0x3f800000;
  (this->ObjectStorage).Pad[0x368] = '\0';
  (this->ObjectStorage).Pad[0x369] = '\0';
  (this->ObjectStorage).Pad[0x36a] = 0x80;
  (this->ObjectStorage).Pad[0x36b] = '?';
  (this->ObjectStorage).Pad[0x36c] = '\0';
  (this->ObjectStorage).Pad[0x36d] = '\0';
  (this->ObjectStorage).Pad[0x36e] = 0x80;
  (this->ObjectStorage).Pad[0x36f] = '?';
  (this->ObjectStorage).Pad[0x370] = '\0';
  if ((pTVar4 < this_00) || (this + 1 <= pTVar4)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(UPTRINT)&Self >= (UPTRINT)&Widget && (UPTRINT)&Self < (UPTRINT)&Widget + sizeof(WidgetType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Types\\Attributes\\SlateAttributeMember.inl"
                       ,0x15,
                       L"Use TAttribute or TSlateManagedAttribute instead. See SlateAttribute.h for more info."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  bVar2 = SlateAttributePrivate::FSlateAttributeImpl::ProtectedIsImplemented
                    ((FSlateAttributeImpl *)pTVar4,(SWidget *)this_00);
  if (!bVar2) {
    `SlateAttributePrivate::
    TSlateMemberAttribute<FSlateColor,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>_>
    ::VerifyAttributeAddress<SNiagaraUISystemWidget,void>'::__l2::<lambda_1>::operator()
              (local_res18);
  }
  return this;
}

// DestroyObject @ 14d297550

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<SNiagaraUISystemWidget,1>::DestroyObject
          (TIntrusiveReferenceController<SNiagaraUISystemWidget,1> *this)

{
  SNiagaraUISystemWidget::~SNiagaraUISystemWidget((SNiagaraUISystemWidget *)&this->ObjectStorage);
  return;
}

