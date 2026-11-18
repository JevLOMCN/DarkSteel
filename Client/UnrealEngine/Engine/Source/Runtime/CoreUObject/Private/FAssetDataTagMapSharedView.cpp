// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// FAssetDataTagMapSharedView @ 141e83d20

FAssetDataTagMapSharedView * __thiscall
FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
          (FAssetDataTagMapSharedView *this,FAssetDataTagMapSharedView *param_1)

{
  this->field0_0x0 = param_1->field0_0x0;
  (param_1->field0_0x0).Loose = (FAssetDataTagMap *)0x0;
  return this;
}

// FAssetDataTagMapSharedView @ 141e83d40

FAssetDataTagMapSharedView * __thiscall
FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
          (FAssetDataTagMapSharedView *this,FAssetDataTagMap *param_1)

{
  FAssetDataTagMap *pFVar1;
  FAssetDataTagMap *pFVar2;
  
  pFVar2 = (FAssetDataTagMap *)0x0;
  (this->field0_0x0).Loose = (FAssetDataTagMap *)0x0;
  if ((int)param_1->_padding_ != 0) {
    pFVar1 = ::operator_new(0x18);
    if (pFVar1 != (FAssetDataTagMap *)0x0) {
      pFVar1->_padding_ = 0;
      pFVar1->_padding_ = param_1->_padding_;
      param_1->_padding_ = 0;
      *(int *)&pFVar1->_padding_ = (int)param_1->_padding_;
      *(undefined4 *)((longlong)&pFVar1->_padding_ + 4) =
           *(undefined4 *)((longlong)&param_1->_padding_ + 4);
      param_1->_padding_ = 0;
      (pFVar1->RefCount).Counter = 0;
      pFVar2 = pFVar1;
    }
    (this->field0_0x0).Loose = pFVar2;
    LOCK();
    (pFVar2->RefCount).Counter = (pFVar2->RefCount).Counter + 1;
    UNLOCK();
  }
  return this;
}

// FAssetDataTagMapSharedView @ 141e83dc0

FAssetDataTagMapSharedView * __thiscall
FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
          (FAssetDataTagMapSharedView *this,FAssetDataTagMapSharedView *param_1)

{
  FThreadSafeCounter *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  FAssetDataTagMapSharedView *pFVar5;
  
  uVar4 = (param_1->field0_0x0).Bits;
  (this->field0_0x0).Bits = uVar4;
  if ((uVar4 & 1) == 0) {
    if ((((byte)uVar4 ^ 1) & uVar4 != 0) != 0) {
      LOCK();
      *(int *)(uVar4 + 0x10) = *(int *)(uVar4 + 0x10) + 1;
      UNLOCK();
    }
    return this;
  }
  uVar4 = (uVar4 & 0xffff) >> 2;
  if (FixedTagPrivate::GStores.Data[uVar4] == (FStore *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Capacity && Data[Index] != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x180,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAssetDataTagMapSharedView *)(*pcVar2)();
      return pFVar5;
    }
  }
  LOCK();
  pFVar1 = &FixedTagPrivate::GStores.Data[uVar4]->RefCount;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  return this;
}

// FAssetDataTagMapSharedView @ 141e83e60

FAssetDataTagMapSharedView * __thiscall
FAssetDataTagMapSharedView::FAssetDataTagMapSharedView
          (FAssetDataTagMapSharedView *this,FMapHandle param_1)

{
  FThreadSafeCounter *pFVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  FAssetDataTagMapSharedView *pFVar5;
  
  (this->field0_0x0).Fixed = param_1;
  uVar4 = param_1.StoreIndex;
  if (FixedTagPrivate::GStores.Data[uVar4] == (FStore *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index < Capacity && Data[Index] != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                       ,0x180,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAssetDataTagMapSharedView *)(*pcVar2)();
      return pFVar5;
    }
  }
  LOCK();
  pFVar1 = &FixedTagPrivate::GStores.Data[uVar4]->RefCount;
  pFVar1->Counter = pFVar1->Counter + 1;
  UNLOCK();
  return this;
}

// ~FAssetDataTagMapSharedView @ 141e87860

void __thiscall
FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(FAssetDataTagMapSharedView *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  FAssetDataTagMap *pFVar3;
  code *pcVar4;
  ushort uVar5;
  bool bVar6;
  
  if ((*(byte *)&this->field0_0x0 & 1) != 0) {
    uVar5 = *(ushort *)&this->field0_0x0 >> 2;
    if (FixedTagPrivate::GStores.Data[uVar5] == (FStore *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FixedTagPrivate::FStore::Release(FixedTagPrivate::GStores.Data[uVar5]);
    return;
  }
  if ((((byte)*(ushort *)&this->field0_0x0 ^ 1) &
      (this->field0_0x0).Loose != (FAssetDataTagMap *)0x0) != 0) {
    LOCK();
    pFVar1 = &((this->field0_0x0).Loose)->RefCount;
    iVar2 = pFVar1->Counter;
    pFVar1->Counter = pFVar1->Counter + -1;
    UNLOCK();
    if ((iVar2 == 1) && (pFVar3 = (this->field0_0x0).Loose, pFVar3 != (FAssetDataTagMap *)0x0)) {
      DestructItems<TTuple<FName,FString>,int>
                ((TTuple<FName,FString> *)pFVar3->_padding_,(int)pFVar3->_padding_);
      if ((void *)pFVar3->_padding_ != (void *)0x0) {
        FMemory::Free((void *)pFVar3->_padding_);
      }
      ::operator_delete(pFVar3,0x18);
      return;
    }
  }
  return;
}

// operator= @ 141e886e0

FAssetDataTagMapSharedView * __thiscall
FAssetDataTagMapSharedView::operator=
          (FAssetDataTagMapSharedView *this,FAssetDataTagMapSharedView *param_1)

{
  FAssetDataTagMapSharedView_u_0 FVar1;
  FAssetDataTagMapSharedView_u_0 local_res8 [4];
  
  FVar1 = param_1->field0_0x0;
  (param_1->field0_0x0).Loose = (FAssetDataTagMap *)0x0;
  local_res8[0].Fixed = *(FMapHandle *)&this->field0_0x0;
  this->field0_0x0 = FVar1;
  ~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)&local_res8[0].Fixed);
  return this;
}

// operator= @ 141e88720

FAssetDataTagMapSharedView * __thiscall
FAssetDataTagMapSharedView::operator=
          (FAssetDataTagMapSharedView *this,FAssetDataTagMapSharedView *param_1)

{
  FThreadSafeCounter *pFVar1;
  FAssetDataTagMapSharedView_u_0 FVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  FAssetDataTagMapSharedView *pFVar6;
  FAssetDataTagMapSharedView_u_0 local_res8;
  
  FVar2.Fixed = (FMapHandle)(param_1->field0_0x0).Bits;
  if ((FVar2.Bits & 1) == 0) {
    if ((((byte)FVar2.Bits ^ 1) & FVar2.Loose != (FAssetDataTagMap *)0x0) != 0) {
      LOCK();
      ((FVar2.Loose)->RefCount).Counter = ((FVar2.Loose)->RefCount).Counter + 1;
      UNLOCK();
    }
  }
  else {
    uVar5 = (FVar2.Bits & 0xffff) >> 2;
    if (FixedTagPrivate::GStores.Data[uVar5] == (FStore *)0x0) {
      local_res8.Fixed = FVar2.Fixed;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < Capacity && Data[Index] != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\AssetRegistry\\AssetDataTagMap.cpp"
                         ,0x180,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FAssetDataTagMapSharedView *)(*pcVar3)();
        return pFVar6;
      }
    }
    LOCK();
    pFVar1 = &FixedTagPrivate::GStores.Data[uVar5]->RefCount;
    pFVar1->Counter = pFVar1->Counter + 1;
    UNLOCK();
  }
  local_res8.Fixed = *(FMapHandle *)&this->field0_0x0;
  (this->field0_0x0).Bits = (ulong64)FVar2;
  ~FAssetDataTagMapSharedView((FAssetDataTagMapSharedView *)&local_res8.Fixed);
  return this;
}

// CopyMap @ 141e93cc0

/* WARNING: Removing unreachable block (ram,0x000141e93e26) */

FAssetDataTagMap * __thiscall
FAssetDataTagMapSharedView::CopyMap
          (FAssetDataTagMapSharedView *this,FAssetDataTagMap *__return_storage_ptr__)

{
  longlong *plVar1;
  int iVar2;
  FAssetDataTagMap *pFVar3;
  bool bVar4;
  bool bVar5;
  <lambda_1> *p<Var6;
  TTuple<FName,FString> *pTVar7;
  <lambda_1> *p<Var8;
  FAssetDataTagMapSharedView *pFVar9;
  longlong *plVar10;
  uint uVar11;
  undefined4 local_res8 [2];
  <lambda_1> *local_res18;
  FValueHandle local_res20;
  FString local_88;
  <lambda_1> local_78;
  undefined8 local_68;
  <lambda_1> local_58;
  undefined4 local_48;
  
  local_res8[0] = 0;
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    pFVar3 = (this->field0_0x0).Loose;
    pTVar7 = (TTuple<FName,FString> *)0x0;
    if (pFVar3 == (FAssetDataTagMap *)0x0) {
      p<Var8 = &local_78;
      local_78.__this = (FAssetDataTagMapSharedView *)0x0;
      bVar5 = false;
      bVar4 = true;
      local_68 = 0;
    }
    else {
      local_58.Fn = (<lambda_1> *)0x0;
      iVar2 = (int)pFVar3->_padding_;
      pTVar7 = (TTuple<FName,FString> *)pFVar3->_padding_;
      local_58.__this = (FAssetDataTagMapSharedView *)CONCAT44(local_58.__this._4_4_,iVar2);
      if (iVar2 == 0) {
        local_58.__this = (FAssetDataTagMapSharedView *)0x0;
        p<Var8 = &local_58;
        local_48 = 0;
        bVar5 = true;
        bVar4 = false;
        pTVar7 = (TTuple<FName,FString> *)0x0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar2,0,(ForAnyElementType *)&local_58,iVar2,
                   (int *)((longlong)&local_58.__this + 4));
        ConstructItems<TTuple<FName,FString>,TTuple<FName,FString>,int>(local_58.Fn,pTVar7,iVar2);
        p<Var8 = &local_58;
        bVar5 = true;
        bVar4 = false;
        local_48 = 0;
        pTVar7 = (TTuple<FName,FString> *)local_58.Fn;
      }
    }
    __return_storage_ptr__->_padding_ = (longlong)pTVar7;
    p<Var8->Fn = (<lambda_1> *)0x0;
    p<Var6 = local_78.Fn;
    *(undefined4 *)&__return_storage_ptr__->_padding_ = *(undefined4 *)&p<Var8->__this;
    *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
         *(undefined4 *)((longlong)&p<Var8->__this + 4);
    p<Var8->__this = (FAssetDataTagMapSharedView *)0x0;
    (__return_storage_ptr__->RefCount).Counter = 0;
    if (bVar4) {
      DestructItems<TTuple<FName,FString>,int>
                ((TTuple<FName,FString> *)local_78.Fn,(int)local_78.__this);
      if ((TTuple<FName,FString> *)p<Var6 != (TTuple<FName,FString> *)0x0) {
        FMemory::Free(p<Var6);
      }
    }
    if (!bVar5) {
      return __return_storage_ptr__;
    }
    goto LAB_141e93f61;
  }
  local_58.Fn = (<lambda_1> *)0x0;
  local_58.__this = (FAssetDataTagMapSharedView *)0x0;
  local_48 = 0;
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    if ((this->field0_0x0).Loose != (FAssetDataTagMap *)0x0) {
      uVar11 = (uint)((this->field0_0x0).Loose)->_padding_;
      goto LAB_141e93d09;
    }
  }
  else {
    uVar11 = (uint)(this->field0_0x0).Fixed.Num;
LAB_141e93d09:
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (0 < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar11,(ForAnyElementType *)&local_58,0,
                 (int *)((longlong)&local_58.__this + 4));
    }
  }
  local_res18 = &local_58;
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    pFVar3 = (this->field0_0x0).Loose;
    if (pFVar3 != (FAssetDataTagMap *)0x0) {
      plVar10 = (longlong *)pFVar3->_padding_;
      iVar2 = (int)pFVar3->_padding_;
      pFVar9 = (FAssetDataTagMapSharedView *)(plVar10 + 1);
      plVar1 = plVar10 + (longlong)iVar2 * 3;
      while( true ) {
        if ((int)pFVar3->_padding_ != iVar2) {
          `TCheckedPointerIterator<TTuple<FName,FString>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        p<Var8 = local_res18;
        if (plVar10 == plVar1) break;
        local_78.Fn = (<lambda_1> *)*plVar10;
        local_res20.StoreIndex = (uint)((ulonglong)pFVar9 >> 0x20) & 0x7fffffff;
        local_res20.Id = SUB84(pFVar9,0);
        local_78.__this = pFVar9;
        FixedTagPrivate::FValueHandle::AsString<1>(&local_res20,&local_88);
        pTVar7 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::
                 AllocateMemoryForEmplace<FName_const_&>
                           ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                            p<Var8,(FName *)&local_78);
        *(<lambda_1> **)pTVar7 = local_78.Fn;
        *(undefined8 *)&pTVar7->field_0x8 = 0;
        *(FScriptContainerElement **)&pTVar7->field_0x8 = local_88.Data.AllocatorInstance.Data;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)&pTVar7->field_0x10 = local_88.Data.ArrayNum;
        *(int *)&pTVar7->field_0x14 = local_88.Data.ArrayMax;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        plVar10 = plVar10 + 3;
        pFVar9 = pFVar9 + 3;
      }
    }
  }
  else {
    local_78.Fn = (<lambda_1> *)&local_res18;
    local_78.__this = this;
    FixedTagPrivate::FMapHandle::
    ForEachPair<_FAssetDataTagMapSharedView::ForEach<_FAssetDataTagMapSharedView::CopyMap_::__l5::<lambda_1>_>_::__l5::<lambda_1>_>
              ((FMapHandle *)this,&local_78);
  }
  __return_storage_ptr__->_padding_ = (longlong)local_58.Fn;
  *(int *)&__return_storage_ptr__->_padding_ = (int)local_58.__this;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = local_58.__this._4_4_;
  local_58.__this = (FAssetDataTagMapSharedView *)0x0;
  local_58.Fn = (<lambda_1> *)0x0;
  (__return_storage_ptr__->RefCount).Counter = 0;
  local_58.__this._0_4_ = 0;
LAB_141e93f61:
  DestructItems<TTuple<FName,FString>,int>
            ((TTuple<FName,FString> *)local_58.Fn,(int)local_58.__this);
  if ((TTuple<FName,FString> *)local_58.Fn != (TTuple<FName,FString> *)0x0) {
    FMemory::Free(local_58.Fn);
  }
  return __return_storage_ptr__;
}

// FindTag @ 141e9dda0

FAssetTagValueRef __thiscall
FAssetDataTagMapSharedView::FindTag(FAssetDataTagMapSharedView *this,FName param_1)

{
  FNumberedPair *pFVar1;
  FName *pFVar2;
  FString *pFVar3;
  ulonglong uVar4;
  FValueId *pFVar5;
  FName in_R8;
  TArrayView<FixedTagPrivate::FNumberedPair_const_,int> local_18;
  
  if ((*(byte *)&this->field0_0x0 & 1) == 0) {
    if ((this->field0_0x0).Loose != (FAssetDataTagMap *)0x0) {
      pFVar3 = TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess>::Find
                         ((TSortedMap<FName,FString,TSizedDefaultAllocator<32>,FNameFastLess> *)
                          (this->field0_0x0).Loose,in_R8);
      *(FString **)param_1 = pFVar3;
      return (FAssetTagValueRef)param_1;
    }
    *(undefined8 *)param_1 = 0;
    return (FAssetTagValueRef)param_1;
  }
  if ((*(byte *)&this->field0_0x0 & 2) == 0) {
    FixedTagPrivate::FMapHandle::GetNumberedView((FMapHandle *)this,&local_18);
    pFVar1 = local_18.DataPtr + local_18.ArrayNum;
    if (local_18.DataPtr != pFVar1) {
LAB_141e9ddf0:
      if (in_R8 != (local_18.DataPtr)->Key) goto code_r0x000141e9ddf5;
      pFVar5 = &(local_18.DataPtr)->Value;
LAB_141e9de53:
      if (pFVar5 != (FValueId *)0x0) {
        uVar4 = ((ulonglong)*(ushort *)&this->field0_0x0 & 0xfffffffffffffffc | 0xfffffffe00000000)
                << 0x1e | (ulonglong)*(uint *)&pFVar5->field_0x0;
        goto LAB_141e9de00;
      }
    }
  }
  else if (in_R8.Number == 0) {
    FixedTagPrivate::FMapHandle::GetNumberlessView
              ((FMapHandle *)this,
               (TArrayView<FixedTagPrivate::FNumberlessPair_const_,int> *)&local_18);
    pFVar2 = &(local_18.DataPtr)->Key;
    for (; local_18.DataPtr != (FNumberedPair *)(pFVar2 + local_18.ArrayNum);
        local_18.DataPtr = (FNumberedPair *)&(local_18.DataPtr)->Value) {
      if (in_R8.ComparisonIndex.Value.Value == ((local_18.DataPtr)->Key).ComparisonIndex.Value) {
        pFVar5 = (FValueId *)&((local_18.DataPtr)->Key).Number;
        goto LAB_141e9de53;
      }
    }
  }
LAB_141e9ddfe:
  uVar4 = 0;
LAB_141e9de00:
  *(ulonglong *)param_1 = uVar4;
  return (FAssetTagValueRef)param_1;
code_r0x000141e9ddf5:
  local_18.DataPtr = local_18.DataPtr + 1;
  if (local_18.DataPtr == pFVar1) goto LAB_141e9ddfe;
  goto LAB_141e9ddf0;
}

// Shrink @ 141ebca00

void __thiscall FAssetDataTagMapSharedView::Shrink(FAssetDataTagMapSharedView *this)

{
  int *piVar1;
  int iVar2;
  FAssetDataTagMap *pFVar3;
  
  pFVar3 = (this->field0_0x0).Loose;
  if ((((byte)pFVar3 ^ 1) & pFVar3 != (FAssetDataTagMap *)0x0) != 0) {
    iVar2 = (int)pFVar3->_padding_;
    piVar1 = (int *)((longlong)&pFVar3->_padding_ + 4);
    if (*piVar1 != iVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar2,(ForAnyElementType *)pFVar3,iVar2,piVar1);
    }
  }
  return;
}

