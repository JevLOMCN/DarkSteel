// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 37

// Emplace<HKL___*_const_&> @ 1423bbee0

FSetElementId __thiscall
TSet<HKL___*,DefaultKeyFuncs<HKL___*,0>,FDefaultSetAllocator>::Emplace<HKL___*_const_&>
          (TSet<HKL___*,DefaultKeyFuncs<HKL___*,0>,FDefaultSetAllocator> *this,HKL__ **param_1,
          bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) = uVar5;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<FInputDeviceId_const_&> @ 1423bc100

FSetElementId __thiscall
TSet<FInputDeviceId,DefaultKeyFuncs<FInputDeviceId,0>,FDefaultSetAllocator>::
Emplace<FInputDeviceId_const_&>
          (TSet<FInputDeviceId,DefaultKeyFuncs<FInputDeviceId,0>,FDefaultSetAllocator> *this,
          FInputDeviceId *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  uint uVar10;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0xc);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer != (TSparseSetElement<FInputDeviceId> *)0x0) {
    *(undefined4 *)local_38.Pointer = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
  }
  uVar10 = *(uint *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,uVar10,local_38.Pointer,local_res8,in_R9);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar10 = this->HashSize - 1U & uVar10;
      *(uint *)((longlong)local_38.Pointer + 8) = uVar10;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar10;
      *(undefined4 *)((longlong)local_38.Pointer + 4) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4)
      ;
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  param_1->InternalId = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<FWindowsUIABaseProvider_*> @ 1423bc290

FSetElementId __thiscall
TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>::
Emplace<FWindowsUIABaseProvider_*>
          (TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
           *this,FWindowsUIABaseProvider **param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  undefined1 *puVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = *(int *)&(this->Elements).field_0x34;
  iVar8 = 1;
  if (iVar9 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar3 * 0x10);
    iVar9 = iVar9 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x10) = 0xffffffff;
    }
  }
  puVar10 = &(this->Elements).field_0x8;
  TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (ulonglong *)0x0) {
    *(ulonglong *)local_48.Pointer = *(ulonglong *)param_2;
    *(undefined4 *)((longlong)local_48.Pointer + 8) = 0xffffffff;
  }
  uVar5 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar4 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  iVar9 = *(int *)puVar10;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if ((iVar9 - iVar3 != 1) && (iVar9 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar9 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar9 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) == uVar5) {
          bVar11 = iVar9 != -1;
          if (bVar11) {
            *(ulonglong *)(*(longlong *)&this->Elements + (longlong)iVar9 * 0x10) = uVar5;
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar9;
          }
          break;
        }
        iVar9 = *(int *)(*(longlong *)&this->Elements + 8 + (longlong)iVar9 * 0x10);
      } while (iVar9 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)puVar10 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0xc) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 8) = *(undefined4 *)((longlong)FVar7 + uVar5 * 4)
      ;
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar8;
      Rehash(this);
    }
  }
  *(int *)param_1 = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TKeyInitializer<TWeakPtr<ITextInputMethodContext,1>_&&>_> @ 1423bc4b0

FSetElementId __thiscall
TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
::Emplace<TKeyInitializer<TWeakPtr<ITextInputMethodContext,1>_&&>_>
          (TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
           *this,TKeyInitializer<TWeakPtr<ITextInputMethodContext,1>_&&> *param_1,bool *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  ulonglong uVar9;
  uint uVar10;
  int *piVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  FWeakReferencer<1> _Src;
  char *in_R9;
  int iVar14;
  bool bVar15;
  ITextInputMethodContext *local_68;
  FWeakReferencer<1> local_60;
  
  iVar14 = *(int *)&(this->Elements).field_0x34;
  iVar13 = 1;
  if (iVar14 == 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar8 = *(int *)&(this->Elements).field_0x30;
    iVar14 = iVar14 + -1;
    lVar4 = *(longlong *)&this->Elements;
    iVar3 = *(int *)((longlong)iVar8 * 0x38 + 4 + lVar4);
    *(int *)&(this->Elements).field_0x30 = iVar3;
    *(int *)&(this->Elements).field_0x34 = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)((longlong)iVar3 * 0x38 + lVar4) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_68,iVar8);
  if (local_60.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    _Src.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    plVar5 = *(longlong **)param_2;
    (local_60.ReferenceController)->_padding_ = *plVar5;
    lVar4 = plVar5[1];
    (local_60.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar4;
    (local_60.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar4 >> 0x20);
    plVar5[1] = 0;
    *plVar5 = 0;
    local_60.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    local_60.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    local_60.ReferenceController[2]._padding_ = 0;
    local_60.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
    local_60.ReferenceController[1]._padding_ = 0;
    *(undefined4 *)&local_60.ReferenceController[3]._padding_ = 0xffffffff;
    _Src.ReferenceController = local_60.ReferenceController;
  }
  plVar5 = *(longlong **)&(_Src.ReferenceController)->SharedReferenceCount;
  iVar14 = (int)local_68;
  uVar9 = (_Src.ReferenceController)->_padding_;
  if (plVar5 == (longlong *)0x0) {
    piVar11 = (int *)&DAT_0000000c;
  }
  else {
    piVar11 = (int *)((longlong)plVar5 + 0xc);
    LOCK();
    *piVar11 = *piVar11 + 1;
    UNLOCK();
  }
  uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar8 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar8 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  bVar15 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar6 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_68 = (ITextInputMethodContext *)(_Src.ReferenceController)->_padding_;
    local_60.ReferenceController = pTVar6;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      iVar8 = FindIndexByHash<TWeakPtr<ITextInputMethodContext_const_,1>_>
                        (this,uVar7,(TWeakPtr<ITextInputMethodContext_const_,1> *)&local_68);
    }
    else {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
      iVar8 = FindIndexByHash<TWeakPtr<ITextInputMethodContext_const_,1>_>
                        (this,uVar7,(TWeakPtr<ITextInputMethodContext_const_,1> *)&local_68);
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    bVar15 = iVar8 != -1;
    if (bVar15) {
      _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar8 * 0x38);
      if (*(longlong **)((longlong)_Dst + 0x18) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)_Dst + 0x18) + 0x10))();
      }
      plVar5 = *(longlong **)((longlong)_Dst + 8);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar11 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar11;
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
      memmove(_Dst,_Src.ReferenceController,0x30);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar14,1);
      iVar14 = iVar8;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar15;
  }
  if (bVar15 == false) {
    uVar10 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar10) {
      uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar13 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)&_Src.ReferenceController[3]._padding_ + 4) = uVar7;
      FVar12 = (this->Hash).SecondaryData;
      if (FVar12 == (ForElementType<FSetElementId>)0x0) {
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar9 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)&_Src.ReferenceController[3]._padding_ =
           *(undefined4 *)((longlong)FVar12 + uVar9 * 4);
      *(int *)((longlong)FVar12 + uVar9 * 4) = iVar14;
    }
    else {
      this->HashSize = iVar13;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar14;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_&&,FString_&&>_> @ 1423bc790

FSetElementId __thiscall
TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>::
Emplace<TPairInitializer<int_&&,FString_&&>_>
          (TSet<TTuple<int,FString>,TDefaultMapHashableKeyFuncs<int,FString,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_&&,FString_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *in_R9;
  void *_Dst;
  uint *_Src;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer == (uint *)0x0) {
    _Src = (uint *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    ((uint *)((longlong)local_48.Pointer + 8))[0] = 0;
    ((uint *)((longlong)local_48.Pointer + 8))[1] = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *puVar3 = 0;
    *(uint *)((longlong)local_48.Pointer + 0x10) = *(uint *)(puVar3 + 1);
    *(uint *)((longlong)local_48.Pointer + 0x14) = *(uint *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(uint *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar11 = *_Src;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar11) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar10 * 0x20 + lVar2) == uVar11) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
            pvVar4 = *(void **)((longlong)_Dst + 8);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar2);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar11 = this->HashSize - 1U & uVar11;
      _Src[7] = uVar11;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      _Src[6] = *(uint *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_> @ 1423bc9e0

FSetElementId __thiscall
TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<unsigned_int_&&,FString_&&>_>
          (TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
           *this,TPairInitializer<unsigned_int_&&,FString_&&> *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *in_R9;
  void *_Dst;
  uint *_Src;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar5 * 0x20 + 4 + lVar2);
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar5);
  if (local_48.Pointer == (uint *)0x0) {
    _Src = (uint *)0x0;
  }
  else {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    ((uint *)((longlong)local_48.Pointer + 8))[0] = 0;
    ((uint *)((longlong)local_48.Pointer + 8))[1] = 0;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    *puVar3 = 0;
    *(uint *)((longlong)local_48.Pointer + 0x10) = *(uint *)(puVar3 + 1);
    *(uint *)((longlong)local_48.Pointer + 0x14) = *(uint *)((longlong)puVar3 + 0xc);
    puVar3[1] = 0;
    *(uint *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
    _Src = local_48.Pointer;
  }
  iVar10 = *(int *)&(this->Elements).field_0x8;
  bVar12 = false;
  iVar5 = *(int *)&(this->Elements).field_0x34;
  uVar11 = *_Src;
  if ((iVar10 - iVar5 != 1) && (iVar10 != iVar5)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar11) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar10 * 0x20 + lVar2) == uVar11) {
          bVar12 = iVar10 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
            pvVar4 = *(void **)((longlong)_Dst + 8);
            if (pvVar4 != (void *)0x0) {
              FMemory::Free(pvVar4);
            }
            memmove(_Dst,_Src,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar10;
          }
          break;
        }
        iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar2);
      } while (iVar10 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar11 = this->HashSize - 1U & uVar11;
      _Src[7] = uVar11;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar11;
      _Src[6] = *(uint *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_> @ 1423bcc30

FSetElementId __thiscall
TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,unsigned_long_&&>_>
          (void *this,TPairInitializer<EAccessibleWidgetType_&&,unsigned_long_&&> *param_1,
          bool *param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar10 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,4,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar6 = *(int *)((longlong)this + 0x30);
    iVar3 = *(int *)(*(longlong *)this + 4 + (longlong)iVar6 * 0x10);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar3;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TTuple<EAccessibleWidgetType,unsigned_long>_> *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 8);
    *(undefined1 *)local_38.Pointer = **(undefined1 **)param_2;
    *(undefined4 *)((longlong)local_38.Pointer + 4) = *puVar4;
    *(undefined4 *)((longlong)local_38.Pointer + 8) = 0xffffffff;
  }
  bVar2 = *(byte *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  bVar5 = TryReplaceExisting(this,(uint)bVar2,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar8 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar8) {
      uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar10 <= *(int *)((longlong)this + 0x48))) {
      uVar8 = *(int *)((longlong)this + 0x48) - 1U & (uint)bVar2;
      *(uint *)((longlong)local_38.Pointer + 0xc) = uVar8;
      lVar9 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar9 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar8;
      *(undefined4 *)((longlong)local_38.Pointer + 8) = *(undefined4 *)(lVar9 + uVar7 * 4);
      *(int *)(lVar9 + uVar7 * 4) = local_res8[0];
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_> @ 1423bcdd0

FSetElementId __thiscall
TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<enum_EAccessibleWidgetType_&&,FText_&&>_>
          (void *this,TPairInitializer<EAccessibleWidgetType_&&,FText_&&> *param_1,bool *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  FText *pFVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  char *in_R9;
  void *_Dst;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar11 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar7 = *(int *)((longlong)this + 0x30);
    iVar4 = *(int *)((longlong)iVar7 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar4;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar4 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar7);
  if (local_48.Pointer != (byte *)0x0) {
    pFVar5 = *(FText **)(param_2 + 8);
    *(byte *)local_48.Pointer = **(byte **)param_2;
    FText::FText((FText *)((longlong)local_48.Pointer + 8),pFVar5);
    pbVar2 = (byte *)((longlong)local_48.Pointer + 0x18);
    pbVar2[0] = 0xff;
    pbVar2[1] = 0xff;
    pbVar2[2] = 0xff;
    pbVar2[3] = 0xff;
  }
  bVar12 = false;
  bVar3 = *(byte *)local_48.Pointer;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar10 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar10 = (longlong)this + 0x38;
    }
    iVar7 = *(int *)(lVar10 + ((ulonglong)(*(int *)((longlong)this + 0x48) - 1) & (ulonglong)bVar3)
                              * 4);
    if (iVar7 != -1) {
      lVar10 = *(longlong *)this;
      do {
        if (*(byte *)((longlong)iVar7 * 0x20 + lVar10) == bVar3) {
          bVar12 = iVar7 != -1;
          if (bVar12) {
            _Dst = (void *)((longlong)iVar7 * 0x20 + lVar10);
            plVar6 = *(longlong **)((longlong)_Dst + 8);
            if (plVar6 != (longlong *)0x0) {
              (**(code **)(*plVar6 + 0x10))();
            }
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_48.Index,1);
            local_48.Index = iVar7;
          }
          break;
        }
        iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar10);
      } while (iVar7 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar9 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)((longlong)this + 0x48))) {
      uVar9 = (uint)bVar3 & *(int *)((longlong)this + 0x48) - 1U;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar9;
      lVar10 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar10 = (longlong)this + 0x38;
      }
      uVar8 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (ulonglong)uVar9;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) = *(undefined4 *)(lVar10 + uVar8 * 4);
      *(int *)(lVar10 + uVar8 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<int_const_&,TSharedRef<FGenericAccessibleUser,1>_const_&>_> @ 1423bd000

FSetElementId __thiscall
TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<int_const_&,TSharedRef<FGenericAccessibleUser,1>_const_&>_>
          (TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<int_const_&,TSharedRef<FGenericAccessibleUser,1>_const_&> *param_1
          ,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  uint uVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar4 * 0x20 + 4 + lVar2);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (uint *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 8);
    *(uint *)local_48.Pointer = **(uint **)param_2;
    *(undefined8 *)((longlong)local_48.Pointer + 8) = *puVar3;
    lVar2 = puVar3[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar9 = *(uint *)local_48.Pointer;
  if ((iVar8 - iVar4 != 1) && (iVar8 != iVar4)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar9) * 4);
    if (iVar8 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(uint *)((longlong)iVar8 * 0x20 + lVar2) == uVar9) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            local_48.Index = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar2);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar6 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar9 = this->HashSize - 1U & uVar9;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar9;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar9;
      *(uint *)((longlong)local_48.Pointer + 0x18) = *(uint *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = local_48.Index;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TSharedRef<IAccessibleWidget,1>_const_&,FWindowsUIAWidgetProvider_*_&&>_> @ 1423bd240

FSetElementId __thiscall
TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<TSharedRef<IAccessibleWidget,1>_const_&,FWindowsUIAWidgetProvider_*_&&>_>
          (TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TSharedRef<IAccessibleWidget,1>_const_&,FWindowsUIAWidgetProvider_*_&&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  TReferenceControllerBase<1> *pTVar5;
  FSharedReferencer<1> _Src;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  void *_Dst;
  int iVar11;
  atomic<int> aVar12;
  char *in_R9;
  int iVar13;
  bool bVar14;
  IAccessibleWidget *local_48;
  FSharedReferencer<1> local_40;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar13 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)((longlong)iVar6 * 0x20 + 4 + lVar2);
    iVar13 = iVar13 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar6);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    plVar3 = *(longlong **)param_2;
    plVar4 = *(longlong **)(param_2 + 8);
    (local_40.ReferenceController)->_padding_ = *plVar3;
    lVar2 = plVar3[1];
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar2;
    (local_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    local_40.ReferenceController[1]._padding_ = *plVar4;
    local_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)0xffffffff;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar13 = (int)local_48;
  uVar7 = (local_40.ReferenceController)->_padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar14 = false;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar5 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (IAccessibleWidget *)(_Src.ReferenceController)->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar5;
    iVar6 = FindIndexByHash<TSharedRef<IAccessibleWidget_const_,1>_>
                      (this,uVar8,(TSharedRef<IAccessibleWidget_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar14 = iVar6 != -1;
    if (bVar14) {
      _Dst = (void *)((longlong)iVar6 * 0x20 + *(longlong *)&this->Elements);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x18);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar13,1);
      iVar13 = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= this->HashSize)) {
      aVar12 = (atomic<int>)(this->HashSize - 1U & uVar8);
      _Src.ReferenceController[1].WeakReferenceCount = aVar12;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)aVar12;
      _Src.ReferenceController[1].SharedReferenceCount =
           *(atomic<int> *)((longlong)FVar10 + uVar7 * 4);
      *(int *)((longlong)FVar10 + uVar7 * 4) = iVar13;
    }
    else {
      this->HashSize = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar13;
  return (FSetElementId)(int)param_1;
}

// Emplace<TWeakPtr<FGenericWindow,1>_> @ 1423bd4a0

FSetElementId __thiscall
TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
::Emplace<TWeakPtr<FGenericWindow,1>_>
          (TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
           *this,TWeakPtr<FGenericWindow,1> *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int *piVar10;
  ForElementType<FSetElementId> FVar11;
  int iVar12;
  bool *in_R9;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar12 = 1;
  if (iVar1 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar6 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar6);
  if (local_38.Pointer != (TSparseSetElement<TWeakPtr<FGenericWindow,1>_> *)0x0) {
    *(undefined8 *)local_38.Pointer = *(undefined8 *)param_2;
    *(undefined8 *)((longlong)local_38.Pointer + 8) = *(undefined8 *)(param_2 + 8);
    param_2[8] = false;
    param_2[9] = false;
    param_2[10] = false;
    param_2[0xb] = false;
    param_2[0xc] = false;
    param_2[0xd] = false;
    param_2[0xe] = false;
    param_2[0xf] = false;
    param_2[0] = false;
    param_2[1] = false;
    param_2[2] = false;
    param_2[3] = false;
    param_2[4] = false;
    param_2[5] = false;
    param_2[6] = false;
    param_2[7] = false;
    *(undefined4 *)((longlong)local_38.Pointer + 0x10) = 0xffffffff;
  }
  plVar4 = *(longlong **)((longlong)local_38.Pointer + 8);
  uVar8 = *(ulonglong *)local_38.Pointer;
  local_res8[0] = local_38.Index;
  if (plVar4 == (longlong *)0x0) {
    piVar10 = (int *)&DAT_0000000c;
  }
  else {
    piVar10 = (int *)((longlong)plVar4 + 0xc);
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  uVar7 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    iVar1 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  bVar5 = TryReplaceExisting(this,uVar7,local_38.Pointer,local_res8,in_R9);
  if (!bVar5) {
    uVar9 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar9) {
      uVar8 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar12 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & uVar7;
      *(uint *)((longlong)local_38.Pointer + 0x14) = uVar7;
      FVar11 = (this->Hash).SecondaryData;
      if (FVar11 == (ForElementType<FSetElementId>)0x0) {
        FVar11 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar8 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar11 + uVar8 * 4);
      *(int *)((longlong)FVar11 + uVar8 * 4) = local_res8[0];
    }
    else {
      this->HashSize = iVar12;
      Rehash(this);
    }
  }
  *(int *)&param_1->Object = local_res8[0];
  return (FSetElementId)(int)param_1;
}

// EmplaceByHash<TKeyInitializer<FInputDeviceId_const_&>_> @ 1423bd680

FSetElementId __thiscall
TSet<TTuple<FInputDeviceId,FPlatformInputDeviceState>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>,FDefaultSetAllocator>
::EmplaceByHash<TKeyInitializer<FInputDeviceId_const_&>_>
          (TSet<TTuple<FInputDeviceId,FPlatformInputDeviceState>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>,FDefaultSetAllocator>
           *this,uint param_1,TKeyInitializer<FInputDeviceId_const_&> *param_2,bool *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 in_register_00000014;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  int local_res8 [2];
  bool *in_stack_00000028;
  FSparseArrayAllocationInfo local_38;
  
  iVar1 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x14,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Elements).field_0x30;
    iVar1 = iVar1 + -1;
    lVar3 = *(longlong *)&this->Elements;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar5 * 0x14);
    *(int *)&(this->Elements).field_0x30 = iVar2;
    *(int *)&(this->Elements).field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x14) = 0xffffffff;
    }
  }
  TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<20,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_38,iVar5);
  if (local_38.Pointer !=
      (TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_> *)0x0) {
    local_res8[1] = 0;
    *(undefined4 *)local_38.Pointer = **(undefined4 **)param_3;
    *(undefined8 *)((longlong)local_38.Pointer + 4) = 0xffffffff;
    *(undefined4 *)((longlong)local_38.Pointer + 0xc) = 0xffffffff;
  }
  local_res8[0] = local_38.Index;
  bVar4 = TryReplaceExisting(this,(uint)param_2,local_38.Pointer,local_res8,in_stack_00000028);
  if (!bVar4) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar3 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar3 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar7 = this->HashSize - 1U & (uint)param_2;
      *(uint *)((longlong)local_38.Pointer + 0x10) = uVar7;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar7;
      *(undefined4 *)((longlong)local_38.Pointer + 0xc) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
      *(int *)((longlong)FVar8 + uVar6 * 4) = local_res8[0];
      goto LAB_1423bd7dc;
    }
    this->HashSize = iVar9;
    Rehash(this);
  }
LAB_1423bd7dc:
  *(int *)CONCAT44(in_register_00000014,param_1) = local_res8[0];
  return (FSetElementId)param_1;
}

// FindIndexByHash<TSharedRef<IAccessibleWidget_const_,1>_> @ 1423bd840

int __thiscall
TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedRef<IAccessibleWidget_const_,1>_>
          (TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<IAccessibleWidget_const_,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  IAccessibleWidget *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  IAccessibleWidget *pIVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      pIVar3 = param_2->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar6 = (longlong)iVar1 * 0x20;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar6 + 8 + *(longlong *)&this->Elements);
      pIVar5 = *(IAccessibleWidget **)(lVar6 + *(longlong *)&this->Elements);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pIVar5 == pIVar3) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar6 + 0x18 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<TWeakPtr<ITextInputMethodContext_const_,1>_> @ 1423bd910

int __thiscall
TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
::FindIndexByHash<TWeakPtr<ITextInputMethodContext_const_,1>_>
          (TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
           *this,uint param_1,TWeakPtr<ITextInputMethodContext_const_,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  ForElementType<FSetElementId> FVar7;
  longlong lVar8;
  TWeakPtr<ITextInputMethodContext_const_,1> local_38;
  TWeakPtr<ITextInputMethodContext_const_,1> local_28;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar3 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar3 != -1) {
      pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
      local_38.Object = param_2->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
        UNLOCK();
      }
      lVar8 = (longlong)iVar3 * 0x38;
      pTVar5 = *(TReferenceControllerBase<1> **)(*(longlong *)&this->Elements + 8 + lVar8);
      local_28.Object = *(ITextInputMethodContext **)(*(longlong *)&this->Elements + lVar8);
      local_38.WeakReferenceCount.ReferenceController = pTVar4;
      local_28.WeakReferenceCount.ReferenceController = pTVar5;
      if (pTVar5 == (TReferenceControllerBase<1> *)0x0) {
        bVar6 = TWeakPtr<ITextInputMethodContext_const_,1>::
                UEOpEquals<ITextInputMethodContext_const_>(&local_28,&local_38);
      }
      else {
        LOCK();
        pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
        UNLOCK();
        bVar6 = TWeakPtr<ITextInputMethodContext_const_,1>::
                UEOpEquals<ITextInputMethodContext_const_>(&local_28,&local_38);
        LOCK();
        paVar1 = &pTVar5->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
        }
      }
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &pTVar4->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
        }
      }
      if (bVar6 != false) {
        return iVar3;
      }
      iVar3 = *(int *)(lVar8 + 0x30 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<int> @ 1423bfe50

int __thiscall
TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
::RemoveImpl<int>(TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
                  *this,uint param_1,int *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar6 = *(uint *)((longlong)FVar5 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(int *)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)&this->Elements + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)&(this->Elements).field_0x28)) {
    puVar9 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_1423bff31;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
LAB_1423bff31:
  FVar5 = (this->Hash).SecondaryData;
  lVar8 = *(longlong *)&this->Elements + lVar8;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar7 = (uint *)((longlong)FVar5 + (longlong)*(int *)(lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<TSharedRef<IAccessibleWidget_const_,1>_> @ 1423bfff0

int __thiscall
TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
::RemoveImpl<TSharedRef<IAccessibleWidget_const_,1>_>
          (TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
           *this,uint param_1,TSharedRef<IAccessibleWidget_const_,1> *param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  IAccessibleWidget *pIVar4;
  TReferenceControllerBase<1> *pTVar5;
  IAccessibleWidget *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  
  FVar10 = (this->Hash).SecondaryData;
  if (FVar10 == (ForElementType<FSetElementId>)0x0) {
    FVar10 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar11 = *(uint *)((longlong)FVar10 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4
                    );
  if (uVar11 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    lVar3 = *(longlong *)&this->Elements;
    pIVar4 = param_2->Object;
    lVar14 = (longlong)(int)uVar11 * 0x20;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar14);
    pIVar6 = *(IAccessibleWidget **)(lVar3 + lVar14);
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pIVar6 == pIVar4) break;
    uVar11 = *(uint *)(lVar3 + 0x18 + lVar14);
    if (uVar11 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&(this->Elements).field_0x28)) {
    puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar13 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar11 & 0x1f) & 1) != 0) goto LAB_1423c010b;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
LAB_1423c010b:
  FVar10 = (this->Hash).SecondaryData;
  lVar3 = *(longlong *)&this->Elements;
  if (FVar10 == (ForElementType<FSetElementId>)0x0) {
    FVar10 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar12 = (uint *)((longlong)FVar10 + (longlong)*(int *)(lVar3 + 0x1c + lVar14) * 4);
  while( true ) {
    uVar1 = *puVar12;
    if ((uVar1 == 0xffffffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar8)) break;
    if (uVar1 == uVar11) {
      *puVar12 = *(uint *)(lVar3 + 0x18 + lVar14);
      TSparseArray<TSparseSetElement<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar11,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar11,1);
      return 1;
    }
    puVar12 = (uint *)(*(longlong *)&this->Elements + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar7 = (code *)swi(3);
  iVar9 = (*pcVar7)();
  return iVar9;
}

// RemoveImpl<TWeakPtr<FGenericWindow_const_,1>_> @ 1423c01b0

int __thiscall
TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
::RemoveImpl<TWeakPtr<FGenericWindow_const_,1>_>
          (TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TWeakPtr<FGenericWindow_const_,1> *param_2)

{
  atomic<int> *paVar1;
  longlong lVar2;
  atomic<int> aVar3;
  uint uVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  TWeakPtr<FGenericWindow_const_,1> local_48;
  TWeakPtr<FGenericWindow_const_,1> local_38;
  
  FVar11 = (this->Hash).SecondaryData;
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar12 = *(uint *)((longlong)FVar11 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4
                    );
  if (uVar12 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pTVar5 = (param_2->WeakReferenceCount).ReferenceController;
    lVar6 = *(longlong *)&this->Elements;
    local_48.Object = param_2->Object;
    lVar2 = (longlong)(int)uVar12 * 0x18;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = *(TReferenceControllerBase<1> **)(lVar6 + 8 + lVar2);
    local_38.Object = *(FGenericWindow **)(lVar6 + lVar2);
    local_48.WeakReferenceCount.ReferenceController = pTVar5;
    local_38.WeakReferenceCount.ReferenceController = pTVar7;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar9 = TWeakPtr<FGenericWindow_const_,1>::UEOpEquals<FGenericWindow_const_>
                        (&local_38,&local_48);
    }
    else {
      LOCK();
      pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
      UNLOCK();
      bVar9 = TWeakPtr<FGenericWindow_const_,1>::UEOpEquals<FGenericWindow_const_>
                        (&local_38,&local_48);
      LOCK();
      paVar1 = &pTVar7->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
      }
    }
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    if (bVar9 != false) break;
    uVar12 = *(uint *)(lVar6 + 0x10 + lVar2);
    if (uVar12 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&(this->Elements).field_0x28)) {
    if ((*(int *)&(this->Elements).field_0x28 <= (int)uVar12) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      iVar10 = (*pcVar8)();
      return iVar10;
    }
    puVar14 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar14 + (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar12 & 0x1f) & 1) != 0) goto LAB_1423c0368;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar9) {
    pcVar8 = (code *)swi(3);
    iVar10 = (*pcVar8)();
    return iVar10;
  }
LAB_1423c0368:
  FVar11 = (this->Hash).SecondaryData;
  lVar6 = *(longlong *)&this->Elements;
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar13 = (uint *)((longlong)FVar11 + (longlong)*(int *)(lVar6 + 0x14 + lVar2) * 4);
  while( true ) {
    uVar4 = *puVar13;
    if ((uVar4 == 0xffffffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar9)) break;
    if (uVar4 == uVar12) {
      *puVar13 = *(uint *)(lVar6 + 0x10 + lVar2);
      TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar12,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar12,1);
      return 1;
    }
    puVar13 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar4 * 0x18 + 0x10);
  }
  pcVar8 = (code *)swi(3);
  iVar10 = (*pcVar8)();
  return iVar10;
}

// RemoveImpl<TWeakPtr<ITextInputMethodContext_const_,1>_> @ 1423c0410

int __thiscall
TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
::RemoveImpl<TWeakPtr<ITextInputMethodContext_const_,1>_>
          (TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
           *this,uint param_1,TWeakPtr<ITextInputMethodContext_const_,1> *param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  TWeakPtr<ITextInputMethodContext_const_,1> local_48;
  TWeakPtr<ITextInputMethodContext_const_,1> local_38;
  
  FVar10 = (this->Hash).SecondaryData;
  if (FVar10 == (ForElementType<FSetElementId>)0x0) {
    FVar10 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar11 = *(uint *)((longlong)FVar10 + ((longlong)this->HashSize - 1U & (longlong)(int)param_1) * 4
                    );
  if (uVar11 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pTVar4 = (param_2->WeakReferenceCount).ReferenceController;
    lVar5 = *(longlong *)&this->Elements;
    lVar14 = (longlong)(int)uVar11 * 0x38;
    local_48.Object = param_2->Object;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar5 + 8 + lVar14);
    local_38.Object = *(ITextInputMethodContext **)(lVar5 + lVar14);
    local_48.WeakReferenceCount.ReferenceController = pTVar4;
    local_38.WeakReferenceCount.ReferenceController = pTVar6;
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      bVar8 = TWeakPtr<ITextInputMethodContext_const_,1>::UEOpEquals<ITextInputMethodContext_const_>
                        (&local_38,&local_48);
    }
    else {
      LOCK();
      pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
      UNLOCK();
      bVar8 = TWeakPtr<ITextInputMethodContext_const_,1>::UEOpEquals<ITextInputMethodContext_const_>
                        (&local_38,&local_48);
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
    if (bVar8 != false) break;
    uVar11 = *(uint *)(lVar5 + 0x30 + lVar14);
    if (uVar11 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&(this->Elements).field_0x28)) {
    if ((*(int *)&(this->Elements).field_0x28 <= (int)uVar11) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    puVar13 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar13 + (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar11 & 0x1f) & 1) != 0) goto LAB_1423c05c0;
  }
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
LAB_1423c05c0:
  FVar10 = (this->Hash).SecondaryData;
  lVar5 = *(longlong *)&this->Elements;
  if (FVar10 == (ForElementType<FSetElementId>)0x0) {
    FVar10 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar12 = (uint *)((longlong)FVar10 + (longlong)*(int *)(lVar5 + 0x34 + lVar14) * 4);
  while( true ) {
    uVar3 = *puVar12;
    if ((uVar3 == 0xffffffff) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar8)) break;
    if (uVar3 == uVar11) {
      *puVar12 = *(uint *)(lVar5 + 0x30 + lVar14);
      TSparseArray<TSparseSetElement<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar11,1);
      TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<56,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar11,1);
      return 1;
    }
    puVar12 = (uint *)(*(longlong *)&this->Elements + 0x30 + (longlong)(int)uVar3 * 0x38);
  }
  pcVar7 = (code *)swi(3);
  iVar9 = (*pcVar7)();
  return iVar9;
}

// operator= @ 1423c7c20

TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
::operator=(TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
            *this,TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
  *pTVar7;
  ForElementType<FSetElementId> _Dst;
  undefined1 *puVar8;
  ForElementType<FSetElementId> _Src;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  
  if (this == param_1) {
    return this;
  }
  uVar10 = param_1->HashSize;
  uVar13 = uVar10;
  if (uVar10 < 2) {
    if ((this->Hash).SecondaryData == (ForElementType<FSetElementId>)0x0) goto LAB_1423c7c81;
    uVar13 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&(this->Hash).SecondaryData,0,uVar13,4);
LAB_1423c7c81:
  _Src = (param_1->Hash).SecondaryData;
  _Dst = (this->Hash).SecondaryData;
  if (uVar10 != 0) {
    if (_Src == (ForElementType<FSetElementId>)0x0) {
      _Src = (ForElementType<FSetElementId>)&param_1->Hash;
    }
    if (_Dst == (ForElementType<FSetElementId>)0x0) {
      _Dst = (ForElementType<FSetElementId>)&this->Hash;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)(int)uVar10 << 2);
  }
  this->HashSize = uVar10;
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TWeakPtr<FGenericWindow,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(&this->Elements,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar6,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
             (int *)&(this->Elements).field_0xc);
  puVar2 = &(this->Elements).field_0x10;
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)&(this->Elements).field_0x30 = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)&(this->Elements).field_0x34 = *(undefined4 *)&(param_1->Elements).field_0x34;
  if (puVar2 != puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)puVar2,
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    plVar9 = (longlong *)(*(longlong *)&this->Elements + 8);
    lVar14 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if (((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
                  *)(*pcVar4)();
        return pTVar7;
      }
      puVar2 = *(undefined1 **)&(param_1->Elements).field_0x20;
      puVar8 = puVar1;
      if (puVar2 != (undefined1 *)0x0) {
        puVar8 = puVar2;
      }
      iVar6 = iVar12;
      if (iVar12 < 0) {
        iVar6 = iVar12 + 0x1f;
      }
      if ((*(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) & uVar10) == 0) {
        *(undefined4 *)(plVar9 + -1) = *(undefined4 *)((longlong)plVar9 + lVar14 + -8);
        *(undefined4 *)((longlong)plVar9 + -4) = *(undefined4 *)(lVar14 + -4 + (longlong)plVar9);
      }
      else {
        plVar9[-1] = *(longlong *)((longlong)plVar9 + lVar14 + -8);
        lVar3 = *(longlong *)(lVar14 + (longlong)plVar9);
        *plVar9 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(lVar14 + 8 + (longlong)plVar9);
        *(undefined4 *)((longlong)plVar9 + 0xc) = *(undefined4 *)(lVar14 + 0xc + (longlong)plVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar9 = plVar9 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Find @ 1423dc240

TTuple<unsigned_int,FString> * __thiscall
TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
::Find(TSet<TTuple<unsigned_int,FString>,TDefaultMapHashableKeyFuncs<unsigned_int,FString,0>,FDefaultSetAllocator>
       *this,uint param_1)

{
  int iVar1;
  TTuple<unsigned_int,FString> *pTVar2;
  ForElementType<FSetElementId> FVar3;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar3 = (this->Hash).SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        pTVar2 = (TTuple<unsigned_int,FString> *)
                 ((longlong)iVar1 * 0x20 + *(longlong *)&this->Elements);
        if (*(uint *)pTVar2 == param_1) {
          return pTVar2;
        }
        iVar1 = *(int *)(pTVar2 + 1);
      } while (iVar1 != -1);
    }
  }
  return (TTuple<unsigned_int,FString> *)0x0;
}

// Rehash @ 1423feee0

void __thiscall
TSet<HKL___*,DefaultKeyFuncs<HKL___*,0>,FDefaultSetAllocator>::Rehash
          (TSet<HKL___*,DefaultKeyFuncs<HKL___*,0>,FDefaultSetAllocator> *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1423fefbc;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1423fefbc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1423ff0a0

void __thiscall
TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>::
Rehash(TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
       *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  ulonglong *puVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_30.Array;
      }
      uVar4 = *puVar9;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar5 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1423ff17c;
        uVar4 = puVar9[lVar5 + 1];
      }
      uStack_54 = -uVar4 & uVar4;
      uVar6 = (ulonglong)uStack_54 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_44 = (int)lVar5 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1423ff17c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (ulonglong *)
                 ((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0xc) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 1) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1423ff260

void __thiscall
TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1423ff33c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1423ff33c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        puVar8 = (uint *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar7 = *piVar1 - 1U & *puVar8;
        puVar8[7] = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        puVar8[6] = *(uint *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1423ff3f0

void __thiscall
TSet<TTuple<FInputDeviceId,FPlatformInputDeviceState>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FInputDeviceId,FPlatformInputDeviceState>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1423ff4cc;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1423ff4cc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0x14;
        *(uint *)(lVar4 + 0x10) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 0xc) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1423ff590

void __thiscall
TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*>,TDefaultMapHashableKeyFuncs<TSharedRef<IAccessibleWidget,1>,FWindowsUIAWidgetProvider_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  ulonglong *puVar9;
  uint *puVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      puVar10 = *(uint **)&(this->Elements).field_0x20;
      if (puVar10 == (uint *)0x0) {
        puVar10 = (uint *)local_40.Array;
      }
      uVar7 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar5 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_1423ff667;
        uVar7 = puVar10[lVar5 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      uVar6 = (ulonglong)uStack_64 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iStack_54 = (int)lVar5 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_1423ff667:
        iStack_54 = iVar2;
      }
    }
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    if (iStack_54 < iVar2) {
      do {
        iVar2 = local_40.CurrentBitIndex;
        puVar9 = (ulonglong *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        pTVar3 = (TReferenceControllerBase<1> *)puVar9[1];
        uVar6 = *puVar9;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar7 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uVar7 = (uVar7 >> 0x10 ^ uVar7) & *piVar1 - 1U;
        *(uint *)((longlong)puVar9 + 0x1c) = uVar7;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
        *(int *)((longlong)FVar8 + uVar6 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1423ff770

void __thiscall
TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext>,TDefaultMapHashableKeyFuncs<TWeakPtr<ITextInputMethodContext,1>,FWindowsTextInputMethodSystem::FInternalContext,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  ForElementType<FSetElementId> FVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int *piVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong *puVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = *(uint **)&(this->Elements).field_0x20;
      if (puVar12 == (uint *)0x0) {
        puVar12 = (uint *)local_40.Array;
      }
      uVar6 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar6 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_1423ff847;
        uVar6 = puVar12[lVar7 + 1];
      }
      uStack_64 = -uVar6 & uVar6;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar3 < iStack_54) {
LAB_1423ff847:
        iStack_54 = iVar3;
      }
    }
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        puVar11 = (ulonglong *)
                  (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x38);
        plVar4 = (longlong *)puVar11[1];
        uVar8 = *puVar11;
        if (plVar4 == (longlong *)0x0) {
          piVar9 = (int *)&DAT_0000000c;
        }
        else {
          piVar9 = (int *)((longlong)plVar4 + 0xc);
          LOCK();
          *piVar9 = *piVar9 + 1;
          UNLOCK();
        }
        uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          iVar2 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar4 + 8))(plVar4,1);
          }
        }
        uVar6 = *piVar1 - 1U & (uVar6 >> 0x10 ^ uVar6);
        *(uint *)((longlong)puVar11 + 0x34) = uVar6;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar6;
        *(undefined4 *)(puVar11 + 6) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1423ff960

void __thiscall
TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  byte *pbVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1423ffa3c;
        uVar6 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1423ffa3c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        pbVar7 = (byte *)((longlong)local_30.CurrentBitIndex * 0x10 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & (uint)*pbVar7;
        *(uint *)(pbVar7 + 0xc) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(pbVar7 + 8) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1423ffaf0

void __thiscall
TSet<TTuple<enum_EAccessibleWidgetType,FText>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,FText,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ForElementType<FSetElementId> *pFVar5;
  uint uVar6;
  byte *pbVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar8 = local_30.Array;
      }
      uVar6 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar6 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar3 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1423ffbcc;
        uVar6 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar3 * 4 + 4);
      }
      uStack_54 = -uVar6 & uVar6;
      uVar4 = (ulonglong)uStack_54 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iStack_44 = (int)lVar3 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1423ffbcc:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        pbVar7 = (byte *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)this);
        uVar6 = *piVar1 - 1U & (uint)*pbVar7;
        *(uint *)(pbVar7 + 0x1c) = uVar6;
        pFVar5 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar5 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar4 = (longlong)*piVar1 - 1U & (ulonglong)uVar6;
        *(undefined4 *)(pbVar7 + 0x18) = *(undefined4 *)(pFVar5->InlineData + uVar4 * 4);
        *(int *)(pFVar5->InlineData + uVar4 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1423ffc80

void __thiscall
TSet<FInputDeviceId,DefaultKeyFuncs<FInputDeviceId,0>,FDefaultSetAllocator>::Rehash
          (TSet<FInputDeviceId,DefaultKeyFuncs<FInputDeviceId,0>,FDefaultSetAllocator> *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar2 = *(int *)&(this->Elements).field_0x28;
    local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar2 != 0) {
      puVar8 = *(uint **)&(this->Elements).field_0x20;
      if (puVar8 == (uint *)0x0) {
        puVar8 = (uint *)local_30.Array;
      }
      uVar7 = *puVar8;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar7 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_1423ffd5c;
        uVar7 = puVar8[lVar4 + 1];
      }
      uStack_54 = -uVar7 & uVar7;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_1423ffd5c:
        iStack_44 = iVar2;
      }
    }
    local_30._padding_._0_4_ = local_58;
    local_30._padding_._4_4_ = uStack_54;
    local_30.UnvisitedBitMask = 0xffffffff;
    local_30.CurrentBitIndex = iStack_44;
    local_30._28_4_ = uStack_3c;
    local_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar2) {
      do {
        uVar7 = *piVar1 - 1U &
                *(uint *)(*(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0xc);
        lVar4 = *(longlong *)&this->Elements + (longlong)local_30.CurrentBitIndex * 0xc;
        *(uint *)(lVar4 + 8) = uVar7;
        FVar3 = (this->Hash).SecondaryData;
        FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar6 = FVar3;
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar4 + 4) = *(undefined4 *)((longlong)FVar6 + uVar5 * 4);
        *(int *)((longlong)FVar6 + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 1423ffe20

void __thiscall
TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int *piVar11;
  ForElementType<FSetElementId> FVar12;
  uint *puVar13;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = &this->HashSize;
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,this->HashSize);
  if (*piVar1 != 0) {
    iVar3 = *(int *)&(this->Elements).field_0x28;
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10;
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar13 = *(uint **)&(this->Elements).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)local_40.Array;
      }
      uVar7 = *puVar13;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar7 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar9 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_1423ffef7;
        uVar7 = puVar13[lVar9 + 1];
      }
      uStack_64 = -uVar7 & uVar7;
      uVar10 = (ulonglong)uStack_64 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iStack_54 = (int)lVar9 + -1 + iStack_50;
      if (iVar3 < iStack_54) {
LAB_1423ffef7:
        iStack_54 = iVar3;
      }
    }
    local_40.UnvisitedBitMask = 0xffffffff;
    local_40.CurrentBitIndex = iStack_54;
    local_40._28_4_ = uStack_4c;
    local_40.BaseBitIndex = iStack_50;
    local_40._padding_._0_4_ = local_68;
    local_40._padding_._4_4_ = uStack_64;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = local_40.CurrentBitIndex;
        lVar8 = (longlong)local_40.CurrentBitIndex;
        lVar4 = *(longlong *)&this->Elements;
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8 * 0x18);
        lVar9 = lVar4 + lVar8 * 0x18;
        uVar10 = *(ulonglong *)(lVar4 + lVar8 * 0x18);
        if (plVar5 == (longlong *)0x0) {
          piVar11 = (int *)&DAT_0000000c;
        }
        else {
          piVar11 = (int *)((longlong)plVar5 + 0xc);
          LOCK();
          *piVar11 = *piVar11 + 1;
          UNLOCK();
        }
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          iVar2 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        uVar7 = *piVar1 - 1U & (uVar7 >> 0x10 ^ uVar7);
        *(uint *)(lVar9 + 0x14) = uVar7;
        FVar6 = (this->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar6;
        }
        uVar10 = (longlong)*piVar1 - 1U & (longlong)(int)uVar7;
        *(undefined4 *)(lVar9 + 0x10) = *(undefined4 *)((longlong)FVar12 + uVar10 * 4);
        *(int *)((longlong)FVar12 + uVar10 * 4) = iVar3;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Remove @ 1424006f0

int __thiscall
TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>::
Remove(TSet<FWindowsUIABaseProvider_*,DefaultKeyFuncs<FWindowsUIABaseProvider_*,0>,FDefaultSetAllocator>
       *this,FWindowsUIABaseProvider *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  undefined1 *puVar8;
  uint *puVar9;
  
  if (*(int *)&(this->Elements).field_0x8 == *(int *)&(this->Elements).field_0x34) {
    return 0;
  }
  FVar6 = (this->Hash).SecondaryData;
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (FVar6 == (ForElementType<FSetElementId>)0x0) {
    FVar6 = (ForElementType<FSetElementId>)&this->Hash;
  }
  uVar5 = *(uint *)((longlong)FVar6 +
                   (((ulonglong)(uVar5 >> 0x10) ^ (longlong)(int)uVar5) &
                   (longlong)this->HashSize - 1U) * 4);
  if (uVar5 != 0xffffffff) {
    do {
      lVar7 = (longlong)(int)uVar5 * 0x10;
      if (*(FWindowsUIABaseProvider **)(lVar7 + *(longlong *)&this->Elements) == param_1) {
        if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)&(this->Elements).field_0x28)) {
          puVar8 = *(undefined1 **)&(this->Elements).field_0x20;
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &(this->Elements).field_0x10;
          }
          if ((*(uint *)(puVar8 + (longlong)((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x1fU)) >> 5) * 4)
               >> (uVar5 & 0x1f) & 1) != 0) goto LAB_1424007f8;
        }
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Elements.IsValidIndex(ElementIndex)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
LAB_1424007f8:
        FVar6 = (this->Hash).SecondaryData;
        lVar7 = *(longlong *)&this->Elements + lVar7;
        if (FVar6 == (ForElementType<FSetElementId>)0x0) {
          FVar6 = (ForElementType<FSetElementId>)&this->Hash;
        }
        puVar9 = (uint *)((longlong)FVar6 + (longlong)*(int *)(lVar7 + 0xc) * 4);
        while( true ) {
          uVar1 = *puVar9;
          if ((uVar1 == 0xffffffff) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("NextElementIndex != INDEX_NONE",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                                 ,0x2b5,L"Corrupt hash"), bVar3)) break;
          if (uVar1 == uVar5) {
            *puVar9 = *(uint *)(lVar7 + 8);
            TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,uVar5,1);
            return 1;
          }
          puVar9 = (uint *)(*(longlong *)&this->Elements + 8 + (longlong)(int)uVar1 * 0x10);
        }
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      uVar5 = *(uint *)(lVar7 + *(longlong *)&this->Elements + 8);
    } while (uVar5 != 0xffffffff);
  }
  return 0;
}

// RemoveByIndex @ 142400920

void __thiscall
TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
RemoveByIndex(TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
              *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_142400992;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_142400992:
  FVar4 = (this->Hash).SecondaryData;
  lVar5 = (longlong)param_1 * 0x20 + *(longlong *)&this->Elements;
  if (FVar4 == (ForElementType<FSetElementId>)0x0) {
    FVar4 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar4 + (longlong)*(int *)(lVar5 + 0x1c) * 4);
  while( true ) {
    iVar1 = *piVar7;
    if (iVar1 == -1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iVar1 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + 0x18 + (longlong)iVar1 * 0x20);
  }
  *piVar7 = *(int *)(lVar5 + 0x18);
  TSparseArray<TSparseSetElement<TTuple<FString,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// TryReplaceExisting @ 14240a3e0

bool __thiscall
TSet<TTuple<FInputDeviceId,FPlatformInputDeviceState>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TTuple<FInputDeviceId,FPlatformInputDeviceState>,TDefaultMapHashableKeyFuncs<FInputDeviceId,FPlatformInputDeviceState,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSparseSetElement<TTuple<FInputDeviceId,FPlatformInputDeviceState>_> *param_2,int *param_3
          ,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar4 != 1) && (iVar13 != iVar4)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar5 + (longlong)iVar13 * 0x14) == *(int *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            memmove((void *)(lVar5 + (longlong)iVar13 * 0x14),param_2,0xc);
            iVar4 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            puVar1 = &(this->Elements).field_0x10;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar3) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0x14) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0x14);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar3) = *(uint *)(puVar11 + lVar3) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar5 + 0xc + (longlong)iVar13 * 0x14);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14240a610

bool __thiscall
TSet<TTuple<enum_EAccessibleWidgetType,unsigned_long>,TDefaultMapHashableKeyFuncs<enum_EAccessibleWidgetType,unsigned_long,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (void *this,uint param_1,
          TSparseSetElement<TTuple<EAccessibleWidgetType,unsigned_long>_> *param_2,int *param_3,
          bool *param_4)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  
  bVar13 = false;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar9 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar9 = (longlong)this + 0x38;
    }
    iVar10 = *(int *)(lVar9 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    if (iVar10 != -1) {
      lVar9 = *(longlong *)this;
      do {
        if (*(char *)(lVar9 + (longlong)iVar10 * 0x10) == *(char *)param_2) {
          bVar13 = iVar10 != -1;
          if (bVar13) {
            *(undefined8 *)(lVar9 + (longlong)iVar10 * 0x10) = *(undefined8 *)param_2;
            iVar3 = *param_3;
            lVar9 = *(longlong *)this;
            bVar5 = (byte)iVar3 & 0x1f;
            uVar12 = 1 << bVar5 | 1U >> 0x20 - bVar5;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar2 = (longlong)((int)(iVar3 + (iVar3 >> 0x1f & 0x1fU)) >> 5) * 4;
            lVar11 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar11 = (longlong)this + 0x10;
            }
            if (((*(uint *)(lVar11 + lVar2) & uVar12) == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            if (*(int *)((longlong)this + 0x34) != 0) {
              *(int *)(lVar9 + (longlong)*(int *)((longlong)this + 0x30) * 0x10) = iVar3;
            }
            uVar8 = 0xffffffff;
            *(undefined4 *)(lVar9 + (longlong)iVar3 * 0x10) = 0xffffffff;
            if (0 < *(int *)((longlong)this + 0x34)) {
              uVar8 = *(undefined4 *)((longlong)this + 0x30);
            }
            *(undefined4 *)(lVar9 + 4 + (longlong)iVar3 * 0x10) = uVar8;
            *(int *)((longlong)this + 0x34) = *(int *)((longlong)this + 0x34) + 1;
            *(int *)((longlong)this + 0x30) = iVar3;
            if (((iVar3 < 0) || (*(int *)((longlong)this + 0x28) <= iVar3)) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar6)) {
              pcVar4 = (code *)swi(3);
              uVar7 = (*pcVar4)();
              return (bool)uVar7;
            }
            lVar9 = *(longlong *)((longlong)this + 0x20);
            if (*(longlong *)((longlong)this + 0x20) == 0) {
              lVar9 = (longlong)this + 0x10;
            }
            puVar1 = (uint *)(lVar9 + lVar2);
            *puVar1 = *puVar1 & ~uVar12;
            *param_3 = iVar10;
          }
          break;
        }
        iVar10 = *(int *)(lVar9 + 8 + (longlong)iVar10 * 0x10);
      } while (iVar10 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar13;
  }
  return bVar13;
}

// TryReplaceExisting @ 14240a820

bool __thiscall
TSet<FInputDeviceId,DefaultKeyFuncs<FInputDeviceId,0>,FDefaultSetAllocator>::TryReplaceExisting
          (TSet<FInputDeviceId,DefaultKeyFuncs<FInputDeviceId,0>,FDefaultSetAllocator> *this,
          uint param_1,TSparseSetElement<FInputDeviceId> *param_2,int *param_3,bool *param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  ForElementType<FSetElementId> FVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  
  iVar13 = *(int *)&(this->Elements).field_0x8;
  bVar15 = false;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  if ((iVar13 - iVar4 != 1) && (iVar13 != iVar4)) {
    FVar12 = (this->Hash).SecondaryData;
    if (FVar12 == (ForElementType<FSetElementId>)0x0) {
      FVar12 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar13 = *(int *)((longlong)FVar12 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    if (iVar13 != -1) {
      lVar5 = *(longlong *)&this->Elements;
      do {
        if (*(int *)(lVar5 + (longlong)iVar13 * 0xc) == *(int *)param_2) {
          bVar15 = iVar13 != -1;
          if (bVar15) {
            puVar1 = &(this->Elements).field_0x10;
            *(undefined4 *)(lVar5 + (longlong)iVar13 * 0xc) = *(undefined4 *)param_2;
            iVar4 = *param_3;
            lVar5 = *(longlong *)&this->Elements;
            bVar7 = (byte)iVar4 & 0x1f;
            uVar14 = 1 << bVar7 | 1U >> 0x20 - bVar7;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            lVar3 = (longlong)((int)(iVar4 + (iVar4 >> 0x1f & 0x1fU)) >> 5) * 4;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            if (((*(uint *)(puVar11 + lVar3) & uVar14) == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("AllocationFlags[Index]",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                   ,0xc5,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            if (*(int *)&(this->Elements).field_0x34 != 0) {
              *(int *)(lVar5 + (longlong)*(int *)&(this->Elements).field_0x30 * 0xc) = iVar4;
            }
            puVar2 = (undefined4 *)(lVar5 + (longlong)iVar4 * 0xc);
            uVar10 = 0xffffffff;
            *puVar2 = 0xffffffff;
            if (0 < *(int *)&(this->Elements).field_0x34) {
              uVar10 = *(undefined4 *)&(this->Elements).field_0x30;
            }
            puVar2[1] = uVar10;
            puVar11 = &(this->Elements).field_0x34;
            *(int *)puVar11 = *(int *)puVar11 + 1;
            *(int *)&(this->Elements).field_0x30 = iVar4;
            if (((iVar4 < 0) || (*(int *)&(this->Elements).field_0x28 <= iVar4)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              uVar9 = (*pcVar6)();
              return (bool)uVar9;
            }
            puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = puVar1;
            }
            *(uint *)(puVar11 + lVar3) = *(uint *)(puVar11 + lVar3) & ~uVar14;
            *param_3 = iVar13;
          }
          break;
        }
        iVar13 = *(int *)(lVar5 + 4 + (longlong)iVar13 * 0xc);
      } while (iVar13 != -1);
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// TryReplaceExisting @ 14240aa40

bool __thiscall
TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
::TryReplaceExisting
          (TSet<TWeakPtr<FGenericWindow,1>,DefaultKeyFuncs<TWeakPtr<FGenericWindow,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,TSparseSetElement<TWeakPtr<FGenericWindow,1>_> *param_2,int *param_3,
          bool *param_4)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FGenericWindow *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  longlong *plVar9;
  FGenericWindow *pFVar10;
  FWeakReferencer<1> FVar11;
  FWeakReferencer<1> FVar12;
  ForElementType<FSetElementId> FVar13;
  int iVar14;
  bool bVar15;
  TWeakPtr<FGenericWindow_const_,1> local_48;
  TWeakPtr<FGenericWindow_const_,1> local_38;
  
  bVar15 = false;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar5 = *(TReferenceControllerBase<1> **)&param_2->field_0x8;
    pFVar6 = *(FGenericWindow **)param_2;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar10 = local_48.Object;
    FVar11.ReferenceController = local_48.WeakReferenceCount.ReferenceController;
    if (*(int *)&(this->Elements).field_0x8 == *(int *)&(this->Elements).field_0x34) {
      iVar14 = -1;
    }
    else {
      FVar13 = (this->Hash).SecondaryData;
      if (FVar13 == (ForElementType<FSetElementId>)0x0) {
        FVar13 = (ForElementType<FSetElementId>)&this->Hash;
      }
      FVar12.ReferenceController = pTVar5;
      for (iVar4 = *(int *)((longlong)FVar13 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
          local_48.Object = pFVar6,
          local_48.WeakReferenceCount.ReferenceController = FVar12.ReferenceController, iVar14 = -1,
          iVar4 != -1;
          iVar4 = *(int *)(*(longlong *)&this->Elements + 0x10 + (longlong)iVar4 * 0x18)) {
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
          UNLOCK();
        }
        pTVar7 = *(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 8 + (longlong)iVar4 * 0x18);
        local_38.Object =
             *(FGenericWindow **)(*(longlong *)&this->Elements + (longlong)iVar4 * 0x18);
        local_38.WeakReferenceCount.ReferenceController = pTVar7;
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
          bVar15 = TWeakPtr<FGenericWindow_const_,1>::UEOpEquals<FGenericWindow_const_>
                             (&local_38,&local_48);
        }
        else {
          LOCK();
          pTVar7->WeakReferenceCount = (atomic<int>)((int)pTVar7->WeakReferenceCount + 1);
          UNLOCK();
          bVar15 = TWeakPtr<FGenericWindow_const_,1>::UEOpEquals<FGenericWindow_const_>
                             (&local_38,&local_48);
          LOCK();
          paVar1 = &pTVar7->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
          }
        }
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &pTVar5->WeakReferenceCount;
          aVar3 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar3 == (atomic<int>)0x1) {
            (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
          }
        }
        iVar14 = iVar4;
        pFVar10 = local_48.Object;
        FVar11.ReferenceController = local_48.WeakReferenceCount.ReferenceController;
        if (bVar15 != false) break;
        FVar12.ReferenceController = local_48.WeakReferenceCount.ReferenceController;
        pFVar6 = local_48.Object;
      }
    }
    local_48.WeakReferenceCount.ReferenceController = FVar11.ReferenceController;
    local_48.Object = pFVar10;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar5->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
      }
    }
    bVar15 = iVar14 != -1;
    if (bVar15) {
      lVar8 = *(longlong *)&this->Elements;
      plVar9 = *(longlong **)(lVar8 + 8 + (longlong)iVar14 * 0x18);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar4 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      memmove((void *)(lVar8 + (longlong)iVar14 * 0x18),param_2,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,*param_3,1);
      *param_3 = iVar14;
    }
  }
  if (param_4 != (bool *)0x0) {
    *param_4 = bVar15;
  }
  return bVar15;
}

// UnhashElements @ 14240ad90

void __thiscall
TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>,TDefaultMapHashableKeyFuncs<int,TSharedRef<FGenericAccessibleUser,1>,0>,FDefaultSetAllocator>
                 *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  ForElementType<FSetElementId> FVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  ForElementType<FSetElementId> local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  local_res18 = (this->Hash).SecondaryData;
  iVar3 = this->HashSize;
  if (local_res18 == (ForElementType<FSetElementId>)0x0) {
    local_res18 = (ForElementType<FSetElementId>)&this->Hash;
  }
  local_40 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset((void *)local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)&(this->Elements).field_0x28;
  puVar1 = &(this->Elements).field_0x10;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->Elements).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar9 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14240ae8b;
      uVar9 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14240ae8b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Elements).field_0x28;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar13 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_res18;
  uVar4 = *(uint *)&(this->Elements).field_0x28;
  if (uVar9 != uVar4) {
    puVar11 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar13 = uVar13 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14240af80;
      uVar9 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14240af80:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TSharedRef<FGenericAccessibleUser,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)((longlong)local_60.CurrentBitIndex * 0x20 + 0x1c + *(longlong *)&this->Elements) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

