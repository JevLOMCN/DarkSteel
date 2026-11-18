// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 12

// Copy @ 1418d29a0

FExpressionNode * __thiscall
Impl::FHeapDataStorage<Tests::FHugeType>::Copy
          (FHeapDataStorage<Tests::FHugeType> *this,FExpressionNode *__return_storage_ptr__)

{
  FHugeType local_418;
  
  local_418._padding_._0_4_ = 0xffffffff;
  local_418._padding_._4_1_ = *(char *)((longlong)&((this->Value).Ptr)->_padding_ + 4);
  if (local_418._padding_._4_1_ != '\0') {
    *Tests::FMoveableType::LeakCount = *Tests::FMoveableType::LeakCount + 1;
  }
  local_418._padding_ = (longlong)&___7FHugeType_Tests__6B_;
  FExpressionNode::FExpressionNode<Tests::FHugeType>(__return_storage_ptr__,&local_418);
  return __return_storage_ptr__;
}

// MoveAssign @ 1418e9110

void __thiscall
Impl::FHeapDataStorage<Tests::FHugeType>::MoveAssign
          (FHeapDataStorage<Tests::FHugeType> *this,uchar *param_1)

{
  TUniquePtr<Tests::FHugeType,TDefaultDelete<Tests::FHugeType>_> *pTVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  pTVar1 = &this->Value;
  plVar3 = (longlong *)(param_1 + 8);
  if ((TUniquePtr<Tests::FHugeType,TDefaultDelete<Tests::FHugeType>_> *)plVar3 != pTVar1) {
    puVar2 = (undefined8 *)*plVar3;
    *plVar3 = (longlong)pTVar1->Ptr;
    pTVar1->Ptr = (FHugeType *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001418e913a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}

// Reseat @ 1418f30d0

void __thiscall
Impl::FHeapDataStorage<Tests::FHugeType>::Reseat
          (FHeapDataStorage<Tests::FHugeType> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FHeapDataStorage_UFHugeType_Tests___Impl__6B_;
  *(FHugeType **)(param_1 + 8) = (this->Value).Ptr;
  (this->Value).Ptr = (FHugeType *)0x0;
  return;
}

// Copy @ 141930440

FExpressionNode * __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<char>_>::Copy
          (FHeapDataStorage<TTokenFormatSpecifier<char>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  undefined8 uVar1;
  TTokenFormatSpecifier<char> *pTVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  pTVar2 = (this->Value).Ptr;
  pcVar3 = (pTVar2->Identifier).TokenStart;
  pcVar4 = (pTVar2->Identifier).TokenEnd;
  uVar5 = *(undefined8 *)&(pTVar2->Identifier).LineNumber;
  pcVar6 = (pTVar2->EntireToken).TokenStart;
  pcVar7 = (pTVar2->EntireToken).TokenEnd;
  uVar8 = *(undefined8 *)&(pTVar2->EntireToken).LineNumber;
  uVar1 = *(undefined8 *)&pTVar2->Len;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FHeapDataStorage_U__TTokenFormatSpecifier_D___Impl__6B_;
  puVar9 = ::operator_new(0x38);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = pcVar3;
    puVar9[1] = pcVar4;
    puVar9[2] = uVar5;
    puVar9[3] = pcVar6;
    puVar9[4] = pcVar7;
    puVar9[5] = uVar8;
    puVar9[6] = uVar1;
    *(undefined8 **)(__return_storage_ptr__->InlineBytes + 8) = puVar9;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->InlineBytes[8] = '\0';
  __return_storage_ptr__->InlineBytes[9] = '\0';
  __return_storage_ptr__->InlineBytes[10] = '\0';
  __return_storage_ptr__->InlineBytes[0xb] = '\0';
  __return_storage_ptr__->InlineBytes[0xc] = '\0';
  __return_storage_ptr__->InlineBytes[0xd] = '\0';
  __return_storage_ptr__->InlineBytes[0xe] = '\0';
  __return_storage_ptr__->InlineBytes[0xf] = '\0';
  return __return_storage_ptr__;
}

// Copy @ 1419304e0

FExpressionNode * __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<char8_t>_>::Copy
          (FHeapDataStorage<TTokenFormatSpecifier<char8_t>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  undefined8 uVar1;
  TTokenFormatSpecifier<char8_t> *pTVar2;
  uchar *puVar3;
  uchar *puVar4;
  undefined8 uVar5;
  uchar *puVar6;
  uchar *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  pTVar2 = (this->Value).Ptr;
  puVar3 = (pTVar2->Identifier).TokenStart;
  puVar4 = (pTVar2->Identifier).TokenEnd;
  uVar5 = *(undefined8 *)&(pTVar2->Identifier).LineNumber;
  puVar6 = (pTVar2->EntireToken).TokenStart;
  puVar7 = (pTVar2->EntireToken).TokenEnd;
  uVar8 = *(undefined8 *)&(pTVar2->EntireToken).LineNumber;
  uVar1 = *(undefined8 *)&pTVar2->Len;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<char8_t>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FHeapDataStorage_U__TTokenFormatSpecifier__Q___Impl__6B_;
  puVar9 = ::operator_new(0x38);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = puVar3;
    puVar9[1] = puVar4;
    puVar9[2] = uVar5;
    puVar9[3] = puVar6;
    puVar9[4] = puVar7;
    puVar9[5] = uVar8;
    puVar9[6] = uVar1;
    *(undefined8 **)(__return_storage_ptr__->InlineBytes + 8) = puVar9;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->InlineBytes[8] = '\0';
  __return_storage_ptr__->InlineBytes[9] = '\0';
  __return_storage_ptr__->InlineBytes[10] = '\0';
  __return_storage_ptr__->InlineBytes[0xb] = '\0';
  __return_storage_ptr__->InlineBytes[0xc] = '\0';
  __return_storage_ptr__->InlineBytes[0xd] = '\0';
  __return_storage_ptr__->InlineBytes[0xe] = '\0';
  __return_storage_ptr__->InlineBytes[0xf] = '\0';
  return __return_storage_ptr__;
}

// Copy @ 141930580

FExpressionNode * __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<wchar_t>_>::Copy
          (FHeapDataStorage<TTokenFormatSpecifier<wchar_t>_> *this,
          FExpressionNode *__return_storage_ptr__)

{
  undefined8 uVar1;
  TTokenFormatSpecifier<wchar_t> *pTVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  pTVar2 = (this->Value).Ptr;
  pwVar3 = (pTVar2->Identifier).TokenStart;
  pwVar4 = (pTVar2->Identifier).TokenEnd;
  uVar5 = *(undefined8 *)&(pTVar2->Identifier).LineNumber;
  pwVar6 = (pTVar2->EntireToken).TokenStart;
  pwVar7 = (pTVar2->EntireToken).TokenEnd;
  uVar8 = *(undefined8 *)&(pTVar2->EntireToken).LineNumber;
  uVar1 = *(undefined8 *)&pTVar2->Len;
  __return_storage_ptr__->TypeId =
       `public:_static_struct_FGuid_const&___ptr64___cdecl_TGetExpressionNodeTypeId<TTokenFormatSpecifier<wchar_t>_>::GetTypeId(void)'
       ::__l2::Global;
  *(undefined ***)__return_storage_ptr__->InlineBytes =
       &___7__FHeapDataStorage_U__TTokenFormatSpecifier__W___Impl__6B_;
  puVar9 = ::operator_new(0x38);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = pwVar3;
    puVar9[1] = pwVar4;
    puVar9[2] = uVar5;
    puVar9[3] = pwVar6;
    puVar9[4] = pwVar7;
    puVar9[5] = uVar8;
    puVar9[6] = uVar1;
    *(undefined8 **)(__return_storage_ptr__->InlineBytes + 8) = puVar9;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->InlineBytes[8] = '\0';
  __return_storage_ptr__->InlineBytes[9] = '\0';
  __return_storage_ptr__->InlineBytes[10] = '\0';
  __return_storage_ptr__->InlineBytes[0xb] = '\0';
  __return_storage_ptr__->InlineBytes[0xc] = '\0';
  __return_storage_ptr__->InlineBytes[0xd] = '\0';
  __return_storage_ptr__->InlineBytes[0xe] = '\0';
  __return_storage_ptr__->InlineBytes[0xf] = '\0';
  return __return_storage_ptr__;
}

// MoveAssign @ 141956be0

void __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<char>_>::MoveAssign
          (FHeapDataStorage<TTokenFormatSpecifier<char>_> *this,uchar *param_1)

{
  TUniquePtr<TTokenFormatSpecifier<char>,TDefaultDelete<TTokenFormatSpecifier<char>_>_> *pTVar1;
  void *pvVar2;
  uchar *puVar3;
  
  pTVar1 = &this->Value;
  puVar3 = param_1 + 8;
  if ((TUniquePtr<TTokenFormatSpecifier<char>,TDefaultDelete<TTokenFormatSpecifier<char>_>_> *)
      puVar3 != pTVar1) {
    pvVar2 = *(void **)puVar3;
    *(TTokenFormatSpecifier<char> **)puVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TTokenFormatSpecifier<char> *)0x0;
    ::operator_delete(pvVar2,0x38);
    return;
  }
  return;
}

// MoveAssign @ 141956c10

void __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<char8_t>_>::MoveAssign
          (FHeapDataStorage<TTokenFormatSpecifier<char8_t>_> *this,uchar *param_1)

{
  TUniquePtr<TTokenFormatSpecifier<char8_t>,TDefaultDelete<TTokenFormatSpecifier<char8_t>_>_>
  *pTVar1;
  void *pvVar2;
  uchar *puVar3;
  
  pTVar1 = &this->Value;
  puVar3 = param_1 + 8;
  if ((TUniquePtr<TTokenFormatSpecifier<char8_t>,TDefaultDelete<TTokenFormatSpecifier<char8_t>_>_> *
      )puVar3 != pTVar1) {
    pvVar2 = *(void **)puVar3;
    *(TTokenFormatSpecifier<char8_t> **)puVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TTokenFormatSpecifier<char8_t> *)0x0;
    ::operator_delete(pvVar2,0x38);
    return;
  }
  return;
}

// MoveAssign @ 141956c40

void __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<wchar_t>_>::MoveAssign
          (FHeapDataStorage<TTokenFormatSpecifier<wchar_t>_> *this,uchar *param_1)

{
  TUniquePtr<TTokenFormatSpecifier<wchar_t>,TDefaultDelete<TTokenFormatSpecifier<wchar_t>_>_>
  *pTVar1;
  void *pvVar2;
  uchar *puVar3;
  
  pTVar1 = &this->Value;
  puVar3 = param_1 + 8;
  if ((TUniquePtr<TTokenFormatSpecifier<wchar_t>,TDefaultDelete<TTokenFormatSpecifier<wchar_t>_>_> *
      )puVar3 != pTVar1) {
    pvVar2 = *(void **)puVar3;
    *(TTokenFormatSpecifier<wchar_t> **)puVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (TTokenFormatSpecifier<wchar_t> *)0x0;
    ::operator_delete(pvVar2,0x38);
    return;
  }
  return;
}

// Reseat @ 141966d60

void __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<char>_>::Reseat
          (FHeapDataStorage<TTokenFormatSpecifier<char>_> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FHeapDataStorage_U__TTokenFormatSpecifier_D___Impl__6B_;
  *(TTokenFormatSpecifier<char> **)(param_1 + 8) = (this->Value).Ptr;
  (this->Value).Ptr = (TTokenFormatSpecifier<char> *)0x0;
  return;
}

// Reseat @ 141966d90

void __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<char8_t>_>::Reseat
          (FHeapDataStorage<TTokenFormatSpecifier<char8_t>_> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FHeapDataStorage_U__TTokenFormatSpecifier__Q___Impl__6B_;
  *(TTokenFormatSpecifier<char8_t> **)(param_1 + 8) = (this->Value).Ptr;
  (this->Value).Ptr = (TTokenFormatSpecifier<char8_t> *)0x0;
  return;
}

// Reseat @ 141966dc0

void __thiscall
Impl::FHeapDataStorage<TTokenFormatSpecifier<wchar_t>_>::Reseat
          (FHeapDataStorage<TTokenFormatSpecifier<wchar_t>_> *this,uchar *param_1)

{
  *(undefined ***)param_1 = &___7__FHeapDataStorage_U__TTokenFormatSpecifier__W___Impl__6B_;
  *(TTokenFormatSpecifier<wchar_t> **)(param_1 + 8) = (this->Value).Ptr;
  (this->Value).Ptr = (TTokenFormatSpecifier<wchar_t> *)0x0;
  return;
}

