// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 39

// Emplace<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_&> @ 14d89b170

FSetElementId __thiscall
TSet<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::Emplace<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_&>
          (void *this,TSharedPtr<EAudioOscilloscopeTriggerMode,1> *param_1,bool *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedReferencer<1> _Src;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  char *in_R9;
  bool bVar10;
  EAudioOscilloscopeTriggerMode *local_48;
  FSharedReferencer<1> local_40;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar3 = *(int *)((longlong)this + 0x30);
    iVar4 = *(int *)((longlong)this + 0x34) + -1;
    iVar1 = *(int *)(*(longlong *)this + 4 + (longlong)iVar3 * 0x18);
    *(int *)((longlong)this + 0x30) = iVar1;
    *(int *)((longlong)this + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,(FSparseArrayAllocationInfo *)&local_48,iVar3);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_40.ReferenceController)->_padding_ = *(longlong *)param_2;
    lVar8 = *(longlong *)(param_2 + 8);
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar8;
    (local_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar8 >> 0x20);
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[1]._padding_ = 0xffffffff;
  }
  pTVar2 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar3 = (int)local_48;
  uVar5 = (local_40.ReferenceController)->_padding_;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  bVar10 = false;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    pTVar2 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (EAudioOscilloscopeTriggerMode *)(_Src.ReferenceController)->_padding_;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar2;
    iVar4 = FindIndexByHash<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_>
                      (this,uVar6,(TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    bVar10 = iVar4 != -1;
    if (bVar10) {
      lVar8 = *(longlong *)this;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar8 + 8 + (longlong)iVar4 * 0x18));
      memmove((void *)(lVar8 + (longlong)iVar4 * 0x18),_Src.ReferenceController,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,iVar3,1);
      iVar3 = iVar4;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar6 = *(int *)((longlong)this + 0x48) - 1U & uVar6;
      *(uint *)((longlong)&_Src.ReferenceController[1]._padding_ + 4) = uVar6;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar5 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&_Src.ReferenceController[1]._padding_ = *(undefined4 *)(lVar8 + uVar5 * 4);
      *(int *)(lVar8 + uVar5 * 4) = iVar3;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Object = iVar3;
  return (FSetElementId)(int)param_1;
}

// Emplace<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&> @ 14d89b3d0

FSetElementId __thiscall
TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::Emplace<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&>
          (TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
           *this,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedReferencer<1> _Src;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  bool bVar11;
  FLoudnessMetric *local_48;
  FSharedReferencer<1> local_40;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar4 = *(int *)&(this->Elements).field_0x30;
    iVar10 = iVar10 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar4 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x18) = 0xffffffff;
    }
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,(FSparseArrayAllocationInfo *)&local_48,iVar4);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_40.ReferenceController)->_padding_ = *(longlong *)param_2;
    lVar2 = *(longlong *)(param_2 + 8);
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar2;
    (local_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[1]._padding_ = 0xffffffff;
  }
  pTVar3 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar10 = (int)local_48;
  uVar5 = (local_40.ReferenceController)->_padding_;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar6 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  bVar11 = false;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar3 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FLoudnessMetric *)(_Src.ReferenceController)->_padding_;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar3;
    iVar4 = FindIndexByHash<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                      (this,uVar6,
                       (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>
                        *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    bVar11 = iVar4 != -1;
    if (bVar11) {
      lVar2 = *(longlong *)&this->Elements;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar2 + 8 + (longlong)iVar4 * 0x18));
      memmove((void *)(lVar2 + (longlong)iVar4 * 0x18),_Src.ReferenceController,0x10);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar10,1);
      iVar10 = iVar4;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
    uVar7 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar7) {
      uVar5 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar2 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= this->HashSize)) {
      uVar6 = this->HashSize - 1U & uVar6;
      *(uint *)((longlong)&_Src.ReferenceController[1]._padding_ + 4) = uVar6;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar6;
      *(undefined4 *)&_Src.ReferenceController[1]._padding_ =
           *(undefined4 *)((longlong)FVar8 + uVar5 * 4);
      *(int *)((longlong)FVar8 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Object = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_&>_> @ 14d89b630

FSetElementId __thiscall
TSet<TTuple<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_&>_>
          (void *this,
          TPairInitializer<ITableRow_const_*_&&,TSharedPtr<EAudioOscilloscopeTriggerMode,1>_const_&>
          *param_1,bool *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  void *_Dst;
  int iVar9;
  char *in_R9;
  bool bVar10;
  FSparseArrayAllocationInfo local_48;
  
  iVar9 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar4 = *(int *)((longlong)this + 0x30);
    iVar2 = *(int *)((longlong)iVar4 * 0x20 + 4 + *(longlong *)this);
    iVar1 = *(int *)((longlong)this + 0x34) + -1;
    *(int *)((longlong)this + 0x30) = iVar2;
    *(int *)((longlong)this + 0x34) = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *(longlong *)this) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    uVar6 = puVar3[1];
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = uVar6;
    if (uVar6 != 0) {
      LOCK();
      *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar10 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) &&
     (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34))) {
    lVar8 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar8 = (longlong)this + 0x38;
    }
    iVar4 = *(int *)(lVar8 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      lVar8 = *(longlong *)this;
      do {
        if (*(ulonglong *)((longlong)iVar4 * 0x20 + lVar8) == uVar6) {
          bVar10 = iVar4 != -1;
          if (bVar10) {
            _Dst = (void *)((longlong)iVar4 * 0x20 + lVar8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized(this,local_48.Index,1);
            local_48.Index = iVar4;
          }
          break;
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + lVar8);
      } while (iVar4 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar10;
  }
  if (bVar10 == false) {
    uVar7 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar7) {
      uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)((longlong)this + 0x48))) {
      uVar5 = *(int *)((longlong)this + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar5;
      lVar8 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar8 = (longlong)this + 0x38;
      }
      uVar6 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) = *(undefined4 *)(lVar8 + uVar6 * 4);
      *(int *)(lVar8 + uVar6 * 4) = local_48.Index;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = local_48.Index;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&>_> @ 14d89b890

FSetElementId __thiscall
TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<ITableRow_const_*_&&,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&>_>
          (TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<ITableRow_const_*_&&,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&>
                 *param_1,bool *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ForElementType<FSetElementId> FVar8;
  void *_Dst;
  int iVar9;
  int iVar10;
  char *in_R9;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar10 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar10 == 0) {
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
    iVar10 = iVar10 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x20 + lVar2) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar4);
  if (local_48.Pointer != (ulonglong *)0x0) {
    puVar3 = *(ulonglong **)(param_2 + 8);
    *(ulonglong *)local_48.Pointer = **(ulonglong **)param_2;
    *(ulonglong *)((longlong)local_48.Pointer + 8) = *puVar3;
    uVar6 = puVar3[1];
    *(ulonglong *)((longlong)local_48.Pointer + 0x10) = uVar6;
    if (uVar6 != 0) {
      LOCK();
      *(int *)(uVar6 + 8) = *(int *)(uVar6 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  uVar6 = *(ulonglong *)local_48.Pointer;
  bVar11 = false;
  uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  iVar10 = *(int *)&(this->Elements).field_0x8;
  iVar4 = *(int *)&(this->Elements).field_0x34;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((iVar10 - iVar4 != 1) && (iVar10 != iVar4)) {
    FVar8 = (this->Hash).SecondaryData;
    if (FVar8 == (ForElementType<FSetElementId>)0x0) {
      FVar8 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar10 = *(int *)((longlong)FVar8 + (ulonglong)(this->HashSize - 1U & uVar5) * 4);
    if (iVar10 != -1) {
      lVar2 = *(longlong *)&this->Elements;
      do {
        if (*(ulonglong *)((longlong)iVar10 * 0x20 + lVar2) == uVar6) {
          bVar11 = iVar10 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar10 * 0x20 + lVar2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
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
    *in_R9 = bVar11;
  }
  if (bVar11 == false) {
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
      uVar5 = this->HashSize - 1U & uVar5;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar5;
      FVar8 = (this->Hash).SecondaryData;
      if (FVar8 == (ForElementType<FSetElementId>)0x0) {
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar6 = (longlong)this->HashSize - 1U & (longlong)(int)uVar5;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar8 + uVar6 * 4);
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

// Emplace<TPairInitializer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_&,TSharedRef<ITableRow,1>_const_&>_> @ 14d89baf0

FSetElementId __thiscall
TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
          (void *this,
          TPairInitializer<TSharedPtr<EAudioOscilloscopeTriggerMode,1>_const_&,TSharedRef<ITableRow,1>_const_&>
          *param_1,bool *param_2)

{
  void *_Dst;
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSharedReferencer<1> _Src;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  char *in_R9;
  bool bVar12;
  EAudioOscilloscopeTriggerMode *local_48;
  FSharedReferencer<1> local_40;
  
  iVar11 = 1;
  if (*(int *)((longlong)this + 0x34) == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),false);
  }
  else {
    iVar5 = *(int *)((longlong)this + 0x30);
    iVar6 = *(int *)((longlong)this + 0x34) + -1;
    iVar1 = *(int *)(*(longlong *)this + 4 + (longlong)iVar5 * 0x28);
    *(int *)((longlong)this + 0x30) = iVar1;
    *(int *)((longlong)this + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*(longlong *)this + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex(this,(FSparseArrayAllocationInfo *)&local_48,iVar5);
  _Src.ReferenceController = local_40.ReferenceController;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    plVar2 = *(longlong **)param_2;
    plVar3 = *(longlong **)(param_2 + 8);
    (local_40.ReferenceController)->_padding_ = *plVar2;
    lVar10 = plVar2[1];
    (local_40.ReferenceController)->SharedReferenceCount = (atomic<int>)(int)lVar10;
    (local_40.ReferenceController)->WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar10 >> 0x20);
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    local_40.ReferenceController[1]._padding_ = *plVar3;
    lVar10 = plVar3[1];
    local_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)(int)lVar10;
    local_40.ReferenceController[1].WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar10 >> 0x20);
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[2]._padding_ = 0xffffffff;
  }
  pTVar4 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar5 = (int)local_48;
  uVar7 = (local_40.ReferenceController)->_padding_;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  bVar12 = false;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != 1) {
    pTVar4 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (EAudioOscilloscopeTriggerMode *)(_Src.ReferenceController)->_padding_;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar4;
    iVar6 = FindIndexByHash<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_>
                      (this,uVar8,(TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    bVar12 = iVar6 != -1;
    if (bVar12) {
      _Dst = (void *)(*(longlong *)this + (longlong)iVar6 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)this + 0x18 + (longlong)iVar6 * 0x28));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,iVar5,1);
      iVar5 = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar9 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
    if (3 < uVar9) {
      uVar7 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar9 < 1) || (iVar11 <= *(int *)((longlong)this + 0x48))) {
      uVar8 = *(int *)((longlong)this + 0x48) - 1U & uVar8;
      *(uint *)((longlong)&_Src.ReferenceController[2]._padding_ + 4) = uVar8;
      lVar10 = *(longlong *)((longlong)this + 0x40);
      if (*(longlong *)((longlong)this + 0x40) == 0) {
        lVar10 = (longlong)this + 0x38;
      }
      uVar7 = (longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&_Src.ReferenceController[2]._padding_ = *(undefined4 *)(lVar10 + uVar7 * 4);
      *(int *)(lVar10 + uVar7 * 4) = iVar5;
    }
    else {
      *(int *)((longlong)this + 0x48) = iVar11;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar5;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&,TSharedRef<ITableRow,1>_const_&>_> @ 14d89bd80

FSetElementId __thiscall
TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&,TSharedRef<ITableRow,1>_const_&>_>
          (TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&,TSharedRef<ITableRow,1>_const_&>
                 *param_1,bool *param_2)

{
  void *_Dst;
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
  int iVar11;
  char *in_R9;
  undefined1 *puVar12;
  int iVar13;
  bool bVar14;
  FLoudnessMetric *local_48;
  FSharedReferencer<1> local_40;
  
  iVar13 = *(int *)&(this->Elements).field_0x34;
  iVar11 = 1;
  if (iVar13 == 0) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar6 = *(int *)&(this->Elements).field_0x30;
    iVar13 = iVar13 + -1;
    lVar2 = *(longlong *)&this->Elements;
    iVar1 = *(int *)(lVar2 + 4 + (longlong)iVar6 * 0x28);
    *(int *)&(this->Elements).field_0x30 = iVar1;
    *(int *)&(this->Elements).field_0x34 = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x28) = 0xffffffff;
    }
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    lVar2 = plVar4[1];
    local_40.ReferenceController[1].SharedReferenceCount = (atomic<int>)(int)lVar2;
    local_40.ReferenceController[1].WeakReferenceCount =
         (atomic<int>)(int)((ulonglong)lVar2 >> 0x20);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)&local_40.ReferenceController[2]._padding_ = 0xffffffff;
  }
  pTVar5 = *(TReferenceControllerBase<1> **)&(local_40.ReferenceController)->SharedReferenceCount;
  iVar13 = (int)local_48;
  uVar7 = (local_40.ReferenceController)->_padding_;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar12 = &(this->Elements).field_0x8;
  uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar14 = false;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  if (*(int *)puVar12 - *(int *)&(this->Elements).field_0x34 != 1) {
    pTVar5 = *(TReferenceControllerBase<1> **)&(_Src.ReferenceController)->SharedReferenceCount;
    local_48 = (FLoudnessMetric *)(_Src.ReferenceController)->_padding_;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40.ReferenceController = pTVar5;
    iVar6 = FindIndexByHash<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                      (this,uVar8,
                       (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>
                        *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    bVar14 = iVar6 != -1;
    if (bVar14) {
      _Dst = (void *)(*(longlong *)&this->Elements + (longlong)iVar6 * 0x28);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)
                  (*(longlong *)&this->Elements + 0x18 + (longlong)iVar6 * 0x28));
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)((longlong)_Dst + 8));
      memmove(_Dst,_Src.ReferenceController,0x20);
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,iVar13,1);
      iVar13 = iVar6;
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar14;
  }
  if (bVar14 == false) {
    uVar9 = *(int *)puVar12 - *(int *)&(this->Elements).field_0x34;
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
      uVar8 = this->HashSize - 1U & uVar8;
      *(uint *)((longlong)&_Src.ReferenceController[2]._padding_ + 4) = uVar8;
      FVar10 = (this->Hash).SecondaryData;
      if (FVar10 == (ForElementType<FSetElementId>)0x0) {
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar7 = (longlong)this->HashSize - 1U & (longlong)(int)uVar8;
      *(undefined4 *)&_Src.ReferenceController[2]._padding_ =
           *(undefined4 *)((longlong)FVar10 + uVar7 * 4);
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

// Emplace<TPairInitializer<FName_const_&,UE::Math::TVector2<float>_&&>_> @ 14d89c010

FSetElementId __thiscall
TSet<TTuple<FName,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,UE::Math::TVector2<float>_&&>_>
          (TSet<TTuple<FName,UE::Math::TVector2<float>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector2<float>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,UE::Math::TVector2<float>_&&> *param_1,bool *param_2
          )

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,4,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)puVar11;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x18) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_&&>_> @ 14d89c240

FSetElementId __thiscall
TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
::Emplace<TPairInitializer<FName_const_&,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_&&>_>
          (TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_&&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  void *_Dst;
  int iVar8;
  char *in_R9;
  int iVar9;
  int iVar10;
  bool bVar11;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar10 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    lVar1 = *(longlong *)&this->Elements;
    iVar9 = *(int *)((longlong)iVar3 * 0x20 + 4 + lVar1);
    iVar8 = iVar8 + -1;
    *(int *)&(this->Elements).field_0x30 = iVar9;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x20 + lVar1) = 0xffffffff;
    }
  }
  TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    lVar1 = plVar2[1];
    *(longlong *)((longlong)local_48.Pointer + 0x10) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    *(undefined4 *)((longlong)local_48.Pointer + 0x18) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)&(this->Elements).field_0x8;
  bVar11 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar9 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)((longlong)iVar8 * 0x20 + lVar1) == *(longlong *)local_48.Pointer) {
          bVar11 = iVar8 != -1;
          if (bVar11) {
            _Dst = (void *)((longlong)iVar8 * 0x20 + lVar1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0x10));
            memmove(_Dst,local_48.Pointer,0x18);
            TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar9 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)((longlong)iVar8 * 0x20 + 0x18 + lVar1);
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
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar10 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x1c) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x18) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar9;
    }
    else {
      this->HashSize = iVar10;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar9;
  return (FSetElementId)(int)param_1;
}

// Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_> @ 14d89c490

FSetElementId __thiscall
TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
::
Emplace<TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>_>
          (TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
           *this,TPairInitializer<FName_const_&,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*_const_&>
                 *param_1,bool *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ForElementType<FSetElementId> FVar7;
  int iVar8;
  int iVar9;
  char *in_R9;
  int iVar10;
  undefined1 *puVar11;
  bool bVar12;
  FSparseArrayAllocationInfo local_48;
  
  iVar8 = *(int *)&(this->Elements).field_0x34;
  iVar9 = 1;
  if (iVar8 == 0) {
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,1,(ForAnyElementType *)this,(int *)&(this->Elements).field_0x8,
                       (int *)&(this->Elements).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Elements).field_0x10,false);
  }
  else {
    iVar3 = *(int *)&(this->Elements).field_0x30;
    iVar8 = iVar8 + -1;
    lVar1 = *(longlong *)&this->Elements;
    iVar10 = *(int *)(lVar1 + 4 + (longlong)iVar3 * 0x18);
    *(int *)&(this->Elements).field_0x30 = iVar10;
    *(int *)&(this->Elements).field_0x34 = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(lVar1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  puVar11 = &(this->Elements).field_0x8;
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_48,iVar3);
  if (local_48.Pointer != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 8);
    *(longlong *)local_48.Pointer = **(longlong **)param_2;
    *(longlong *)((longlong)local_48.Pointer + 8) = *plVar2;
    *(undefined4 *)((longlong)local_48.Pointer + 0x10) = 0xffffffff;
  }
  lVar1 = *(longlong *)local_48.Pointer;
  uVar4 = ::GetTypeHash((FNameEntryId)(uint)lVar1);
  iVar8 = *(int *)puVar11;
  bVar12 = false;
  iVar3 = *(int *)&(this->Elements).field_0x34;
  uVar4 = uVar4 + (int)((ulonglong)lVar1 >> 0x20);
  iVar10 = local_48.Index;
  if ((iVar8 - iVar3 != 1) && (iVar8 != iVar3)) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar8 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & uVar4) * 4);
    if (iVar8 != -1) {
      lVar1 = *(longlong *)&this->Elements;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar8 * 0x18) == *(longlong *)local_48.Pointer) {
          bVar12 = iVar8 != -1;
          if (bVar12) {
            memmove((void *)(lVar1 + (longlong)iVar8 * 0x18),local_48.Pointer,0x10);
            TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this,local_48.Index,1);
            iVar10 = iVar8;
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10 + (longlong)iVar8 * 0x18);
      } while (iVar8 != -1);
    }
  }
  if (in_R9 != (char *)0x0) {
    *in_R9 = bVar12;
  }
  if (bVar12 == false) {
    uVar6 = *(int *)puVar11 - *(int *)&(this->Elements).field_0x34;
    if (3 < uVar6) {
      uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar1 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar9 <= this->HashSize)) {
      uVar4 = this->HashSize - 1U & uVar4;
      *(uint *)((longlong)local_48.Pointer + 0x14) = uVar4;
      FVar7 = (this->Hash).SecondaryData;
      if (FVar7 == (ForElementType<FSetElementId>)0x0) {
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
      }
      uVar5 = (longlong)this->HashSize - 1U & (longlong)(int)uVar4;
      *(undefined4 *)((longlong)local_48.Pointer + 0x10) =
           *(undefined4 *)((longlong)FVar7 + uVar5 * 4);
      *(int *)((longlong)FVar7 + uVar5 * 4) = iVar10;
    }
    else {
      this->HashSize = iVar9;
      Rehash(this);
    }
  }
  *(int *)&param_1->Key = iVar10;
  return (FSetElementId)(int)param_1;
}

// FindIndexByHash<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_> @ 14d89c7c0

int __thiscall
TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_>
          (void *this,uint param_1,TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  EAudioOscilloscopeTriggerMode *pEVar3;
  TReferenceControllerBase<1> *pTVar4;
  EAudioOscilloscopeTriggerMode *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      pEVar3 = param_2->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar6 = (longlong)iVar1 * 0x28;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar6 + 8 + *(longlong *)this);
      pEVar5 = *(EAudioOscilloscopeTriggerMode **)(lVar6 + *(longlong *)this);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pEVar5 == pEVar3) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar6 + 0x20 + *(longlong *)this);
    }
  }
  return -1;
}

// FindIndexByHash<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_> @ 14d89c8a0

int __thiscall
TSet<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_>
          (void *this,uint param_1,TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  EAudioOscilloscopeTriggerMode *pEVar3;
  TReferenceControllerBase<1> *pTVar4;
  EAudioOscilloscopeTriggerMode *pEVar5;
  longlong lVar6;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar6 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar6 = (longlong)this + 0x38;
    }
    iVar1 = *(int *)(lVar6 + (ulonglong)(*(int *)((longlong)this + 0x48) - 1U & param_1) * 4);
    while (iVar1 != -1) {
      pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
      pEVar3 = param_2->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar6 = (longlong)iVar1 * 0x18;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar6 + 8 + *(longlong *)this);
      pEVar5 = *(EAudioOscilloscopeTriggerMode **)(lVar6 + *(longlong *)this);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (pEVar5 == pEVar3) {
        return iVar1;
      }
      iVar1 = *(int *)(lVar6 + 0x10 + *(longlong *)this);
    }
  }
  return -1;
}

// FindIndexByHash<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> @ 14d89c980

int __thiscall
TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          (TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLoudnessMetric *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLoudnessMetric *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar4 = param_2->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar1 = (longlong)iVar2 * 0x28;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pFVar6 = *(FLoudnessMetric **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar6 == pFVar4) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x20 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// FindIndexByHash<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> @ 14d89ca60

int __thiscall
TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::FindIndexByHash<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          (TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_2)

{
  longlong lVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FLoudnessMetric *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FLoudnessMetric *pFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    FVar7 = (this->Hash).SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&this->Hash;
    }
    iVar2 = *(int *)((longlong)FVar7 + (ulonglong)(this->HashSize - 1U & param_1) * 4);
    while (iVar2 != -1) {
      pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
      pFVar4 = param_2->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      lVar1 = (longlong)iVar2 * 0x18;
      pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 8 + *(longlong *)&this->Elements);
      pFVar6 = *(FLoudnessMetric **)(lVar1 + *(longlong *)&this->Elements);
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (pFVar6 == pFVar4) {
        return iVar2;
      }
      iVar2 = *(int *)(lVar1 + 0x10 + *(longlong *)&this->Elements);
    }
  }
  return -1;
}

// RemoveImpl<ITableRow_const_*> @ 14d8a2b90

int __thiscall
TSet<TTuple<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::RemoveImpl<ITableRow_const_*>(void *this,uint param_1,ITableRow **param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar8 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar8 = (longlong)this + 0x38;
  }
  uVar6 = *(uint *)(lVar8 + ((longlong)*(int *)((longlong)this + 0x48) - 1U & (longlong)(int)param_1
                            ) * 4);
  if (uVar6 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    lVar8 = (longlong)(int)uVar6 * 0x20;
    if (*(ITableRow **)(lVar8 + *(longlong *)this) == *param_2) break;
    uVar6 = *(uint *)(lVar8 + *(longlong *)this + 0x18);
    if (uVar6 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)((longlong)this + 0x28))) {
    lVar9 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar9 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar9 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14d8a2c71;
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
LAB_14d8a2c71:
  lVar9 = *(longlong *)this;
  lVar5 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar5 = (longlong)this + 0x38;
  }
  puVar7 = (uint *)(lVar5 + (longlong)*(int *)(lVar9 + lVar8 + 0x1c) * 4);
  while( true ) {
    uVar1 = *puVar7;
    if ((uVar1 == 0xffffffff) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar3)) break;
    if (uVar1 == uVar6) {
      *puVar7 = *(uint *)(lVar9 + lVar8 + 0x18);
      TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this,uVar6,1);
      TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,uVar6,1);
      return 1;
    }
    puVar7 = (uint *)(*(longlong *)this + 0x18 + (longlong)(int)uVar1 * 0x20);
  }
  pcVar2 = (code *)swi(3);
  iVar4 = (*pcVar2)();
  return iVar4;
}

// RemoveImpl<ITableRow_const_*> @ 14d8a2d30

int __thiscall
TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::RemoveImpl<ITableRow_const_*>
          (TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,ITableRow **param_2)

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
    if (*(ITableRow **)(lVar8 + *(longlong *)&this->Elements) == *param_2) break;
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
         (uVar6 & 0x1f) & 1) != 0) goto LAB_14d8a2e11;
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
LAB_14d8a2e11:
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
      TSparseArray<TSparseSetElement<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// RemoveImpl<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_> @ 14d8a2ed0

int __thiscall
TSet<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::RemoveImpl<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_>
          (void *this,uint param_1,TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> *param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  EAudioOscilloscopeTriggerMode *pEVar3;
  TReferenceControllerBase<1> *pTVar4;
  EAudioOscilloscopeTriggerMode *pEVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar13 = (longlong)this + 0x38;
  }
  uVar10 = *(uint *)(lVar13 + ((longlong)*(int *)((longlong)this + 0x48) - 1U &
                              (longlong)(int)param_1) * 4);
  if (uVar10 == 0xffffffff) {
    return 0;
  }
  while( true ) {
    pTVar2 = (param_2->SharedReferenceCount).ReferenceController;
    lVar12 = *(longlong *)this;
    pEVar3 = param_2->Object;
    lVar13 = (longlong)(int)uVar10 * 0x18;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(lVar12 + 8 + lVar13);
    pEVar5 = *(EAudioOscilloscopeTriggerMode **)(lVar12 + lVar13);
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (pEVar5 == pEVar3) break;
    uVar10 = *(uint *)(lVar12 + 0x10 + lVar13);
    if (uVar10 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)((longlong)this + 0x28))) {
    lVar12 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar12 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar12 + (longlong)((int)(uVar10 + ((int)uVar10 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar10 & 0x1f) & 1) != 0) goto LAB_14d8a2ff3;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar7) {
    pcVar6 = (code *)swi(3);
    iVar8 = (*pcVar6)();
    return iVar8;
  }
LAB_14d8a2ff3:
  lVar12 = *(longlong *)this;
  lVar9 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar9 = (longlong)this + 0x38;
  }
  puVar11 = (uint *)(lVar9 + (longlong)*(int *)(lVar12 + 0x14 + lVar13) * 4);
  while( true ) {
    uVar1 = *puVar11;
    if ((uVar1 == 0xffffffff) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar7)) break;
    if (uVar1 == uVar10) {
      *puVar11 = *(uint *)(lVar12 + 0x10 + lVar13);
      TSparseArray<TSparseSetElement<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(this,uVar10,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(this,uVar10,1);
      return 1;
    }
    puVar11 = (uint *)(*(longlong *)this + (longlong)(int)uVar1 * 0x18 + 0x10);
  }
  pcVar6 = (code *)swi(3);
  iVar8 = (*pcVar6)();
  return iVar8;
}

// RemoveImpl<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_> @ 14d8a30a0

int __thiscall
TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::RemoveImpl<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
          (TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
           *this,uint param_1,
          TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_2)

{
  longlong lVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FLoudnessMetric *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FLoudnessMetric *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  uint *puVar13;
  undefined1 *puVar14;
  
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
    pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
    lVar4 = *(longlong *)&this->Elements;
    pFVar5 = param_2->Object;
    lVar1 = (longlong)(int)uVar12 * 0x18;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar4 + 8 + lVar1);
    pFVar7 = *(FLoudnessMetric **)(lVar4 + lVar1);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pFVar7 == pFVar5) break;
    uVar12 = *(uint *)(lVar4 + 0x10 + lVar1);
    if (uVar12 == 0xffffffff) {
      return 0;
    }
  }
  if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&(this->Elements).field_0x28)) {
    puVar14 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar14 + (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar12 & 0x1f) & 1) != 0) goto LAB_14d8a31c3;
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
LAB_14d8a31c3:
  FVar11 = (this->Hash).SecondaryData;
  lVar4 = *(longlong *)&this->Elements;
  if (FVar11 == (ForElementType<FSetElementId>)0x0) {
    FVar11 = (ForElementType<FSetElementId>)&this->Hash;
  }
  puVar13 = (uint *)((longlong)FVar11 + (longlong)*(int *)(lVar4 + 0x14 + lVar1) * 4);
  while( true ) {
    uVar2 = *puVar13;
    if ((uVar2 == 0xffffffff) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NextElementIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                           ,0x2b5,L"Corrupt hash"), bVar9)) break;
    if (uVar2 == uVar12) {
      *puVar13 = *(uint *)(lVar4 + 0x10 + lVar1);
      TSparseArray<TSparseSetElement<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements(&this->Elements,uVar12,1);
      TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized
                ((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this,uVar12,1);
      return 1;
    }
    puVar13 = (uint *)(*(longlong *)&this->Elements + (longlong)(int)uVar2 * 0x18 + 0x10);
  }
  pcVar8 = (code *)swi(3);
  iVar10 = (*pcVar8)();
  return iVar10;
}

// operator= @ 14d8c2c90

TSet<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::operator=(void *this,
           TSet<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
           *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
  *pTVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),(int *)((longlong)this + 0x48)
             ,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Empty(this,iVar6);
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,iVar6,this,(int *)((longlong)this + 8),(int *)((longlong)this + 0xc));
  puVar1 = &(param_1->Elements).field_0x10;
  *(undefined4 *)((longlong)this + 0x30) = *(undefined4 *)&(param_1->Elements).field_0x30;
  *(undefined4 *)((longlong)this + 0x34) = *(undefined4 *)&(param_1->Elements).field_0x34;
  if ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10) !=
      (TBitArray<FDefaultBitArrayAllocator> *)puVar1) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10),
               (TBitArray<FDefaultBitArrayAllocator> *)puVar1);
  }
  iVar12 = 0;
  if (0 < iVar6) {
    uVar10 = 1;
    plVar9 = (longlong *)(*(longlong *)this + 8);
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)this;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
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
        *(undefined4 *)(plVar9 + -1) = *(undefined4 *)((longlong)plVar9 + lVar13 + -8);
        *(undefined4 *)((longlong)plVar9 + -4) = *(undefined4 *)(lVar13 + -4 + (longlong)plVar9);
      }
      else {
        plVar9[-1] = *(longlong *)((longlong)plVar9 + lVar13 + -8);
        lVar3 = *(longlong *)(lVar13 + (longlong)plVar9);
        *plVar9 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)plVar9);
        *(undefined4 *)((longlong)plVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc + (longlong)plVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar9 = plVar9 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// operator= @ 14d8c2e30

TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::operator=(TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
            *this,TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
                  *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
  *pTVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  if (this == param_1) {
    return this;
  }
  UE::Core::Private::
  CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            (&this->Hash,&this->HashSize,&param_1->Hash,param_1->HashSize);
  iVar6 = *(int *)&(param_1->Elements).field_0x8;
  lVar11 = (longlong)iVar6;
  TSparseArray<TSparseSetElement<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
    lVar13 = *(longlong *)&param_1->Elements - *(longlong *)&this->Elements;
    do {
      if ((iVar12 < 0) || (*(int *)&(param_1->Elements).field_0x28 <= iVar12)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          pTVar7 = (TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
                    *)(*pcVar4)();
          return pTVar7;
        }
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
        *(undefined4 *)(plVar9 + -1) = *(undefined4 *)((longlong)plVar9 + lVar13 + -8);
        *(undefined4 *)((longlong)plVar9 + -4) = *(undefined4 *)(lVar13 + -4 + (longlong)plVar9);
      }
      else {
        plVar9[-1] = *(longlong *)((longlong)plVar9 + lVar13 + -8);
        lVar3 = *(longlong *)(lVar13 + (longlong)plVar9);
        *plVar9 = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        *(undefined4 *)(plVar9 + 1) = *(undefined4 *)(lVar13 + 8 + (longlong)plVar9);
        *(undefined4 *)((longlong)plVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc + (longlong)plVar9);
      }
      iVar12 = iVar12 + 1;
      uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
      plVar9 = plVar9 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return this;
}

// Difference @ 14d912b00

TSet<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::Difference(void *this,
            TSet<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
            *__return_storage_ptr__,
            TSet<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
            *param_1)

{
  undefined4 uVar1;
  ForElementType<FSetElementId> FVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  TSet<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
  *pTVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  ForElementType<FSetElementId> FVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint *puVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  EAudioOscilloscopeTriggerMode *local_res8;
  TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> local_98;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  TSet<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  uVar17 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar7 = 1;
  uVar16 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar14 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  uVar19 = 0;
  local_res8 = this;
  if (uVar14 == 0) goto LAB_14d912da0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar14);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar14);
  uVar15 = 1;
  if (3 < uVar14) {
    uVar13 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar5 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar15 <= __return_storage_ptr__->HashSize))
  goto LAB_14d912da0;
  __return_storage_ptr__->HashSize = uVar15;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar15 != 0) {
    uVar14 = uVar15;
    if (uVar15 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar14 = 0;
        goto LAB_14d912bdc;
      }
    }
    else {
LAB_14d912bdc:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar14,4);
    }
    if (0 < (int)uVar15) {
      uVar18 = (ulonglong)uVar15;
      uVar13 = uVar17;
      do {
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar2;
        }
        uVar10 = uVar13 & (longlong)(int)uVar15 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)((longlong)FVar12 + uVar10 * 4) = 0xffffffff;
        uVar18 = uVar18 - 1;
      } while (uVar18 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar14 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    local_98.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98.Object._0_4_ = 0;
    local_98.Object._4_4_ = 1;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    uVar13 = uVar17;
    if (uVar14 != 0) {
      puVar20 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)local_98.SharedReferenceCount.ReferenceController;
      }
      uVar15 = *puVar20;
      uVar18 = uVar17;
      while (uVar15 == 0) {
        uStack_80 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_80;
        iVar9 = (int)uVar13;
        local_98.Object._0_4_ = iVar9 + 1;
        uVar13 = (ulonglong)(uint)local_98.Object;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)(uint)local_98.Object) goto LAB_14d912cc9;
        uVar15 = puVar20[(longlong)iVar9 + 1];
      }
      local_98.Object._4_4_ = -uVar15 & uVar15;
      uVar13 = (ulonglong)local_98.Object._4_4_ * 2 + 1;
      lVar5 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_88._4_4_ = (int)lVar5 + -1 + uStack_80;
      uVar13 = (ulonglong)local_88._4_4_;
      if ((int)uVar14 < (int)local_88._4_4_) {
LAB_14d912cc9:
        uVar13 = (ulonglong)uVar14;
        local_88._4_4_ = uVar14;
      }
    }
    local_88._0_4_ = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = local_88._4_4_;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = (uint)local_98.Object;
    TStack_60._padding_._4_4_ = local_98.Object._4_4_;
    this = local_res8;
    local_68 = __return_storage_ptr__;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)local_98.SharedReferenceCount.ReferenceController;
    if ((int)uVar13 < (int)uVar14) {
      do {
        lVar11 = (longlong)(int)uVar13;
        lVar3 = *(longlong *)&local_68->Elements;
        uVar18 = *(ulonglong *)(lVar3 + lVar11 * 0x18);
        lVar5 = lVar3 + lVar11 * 0x18;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar11 * 0x18);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar14 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar14 = (uVar14 >> 0x10 ^ uVar14) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)(lVar5 + 0x14) = uVar14;
        FVar2 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar12 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar12 = FVar2;
        }
        uVar18 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar14;
        *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)((longlong)FVar12 + uVar18 * 4);
        *(int *)((longlong)FVar12 + uVar18 * 4) = (int)uVar13;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar13 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
        this = local_res8;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_14d912da0:
  uVar1 = *(undefined4 *)((longlong)this + 0x28);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  uVar13 = uVar17;
  if (uVar1 != None) {
    uVar13 = (ulonglong)(uint)uVar1;
    pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar21 = TStack_60.Array;
    }
    uVar14 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    uVar18 = uVar17;
    uVar19 = 0;
    uVar16 = 0;
    while (uVar14 == 0) {
      iVar9 = (int)uVar17;
      uVar19 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)uVar19;
      uVar16 = iVar9 + 1;
      uVar17 = (ulonglong)uVar16;
      if ((int)((uVar1 - Rising) + ((int)(uVar1 - Rising) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_14d912e0c;
      uVar14 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar9 * 4 + 4);
    }
    uVar7 = -uVar14 & uVar14;
    uVar17 = (ulonglong)uVar7 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar8 = (uVar19 - 1) + (int)lVar5;
    if ((int)uVar1 < (int)uVar8) {
      uVar8 = uVar1;
    }
    uVar13 = (ulonglong)(uint)uVar8;
  }
LAB_14d912e0c:
  uStack_7c = (uint)uVar13;
  local_98.SharedReferenceCount.ReferenceController._4_4_ = uVar7;
  local_98.SharedReferenceCount.ReferenceController._0_4_ = uVar16;
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = (longlong)local_98.SharedReferenceCount.ReferenceController;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = uVar19;
  local_78 = uVar19;
  uStack_74 = uStack_7c;
  local_68 = this;
  TStack_60.CurrentBitIndex = uStack_7c;
  local_88 = TStack_60.Array;
  if ((int)uStack_7c < (int)uVar1) {
    do {
      pTVar6 = local_68;
      lVar5 = (longlong)(int)uVar13 * 0x18;
      pTVar4 = *(TReferenceControllerBase<1> **)(lVar5 + 8 + *(undefined8 *)local_68);
      local_98.Object = *(EAudioOscilloscopeTriggerMode **)(lVar5 + *(undefined8 *)local_68);
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar19 = ((uint)((ulonglong)local_98.Object >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_98.Object >> 4)) * -0x7a143595;
      uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
      local_98.SharedReferenceCount.ReferenceController = pTVar4;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      iVar9 = FindIndexByHash<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_>
                        (param_1,uVar19 >> 0x10 ^ uVar19,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      if (iVar9 == -1) {
        Emplace<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_const_&>
                  (__return_storage_ptr__,(TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)&local_res8
                   ,(bool *)(*(undefined8 *)pTVar6 + lVar5));
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar13 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Difference @ 14d912f50

TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
* __thiscall
TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::Difference(TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
             *this,TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
                   *__return_storage_ptr__,
            TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
            *param_1)

{
  ForElementType<FSetElementId> FVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  FLoudnessMetric *pFVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ForElementType<FSetElementId> FVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  FLoudnessMetric *local_res8;
  TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> local_98;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  FLoudnessMetric *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  uVar15 = 0;
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  uVar6 = 1;
  uVar14 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  uVar12 = *(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34;
  uVar17 = 0;
  local_res8 = (FLoudnessMetric *)this;
  if (uVar12 == 0) goto LAB_14d9131f0;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar12);
  }
  TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<24,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)__return_storage_ptr__,uVar12);
  uVar13 = 1;
  if (3 < uVar12) {
    uVar11 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar4 & 0x1f);
  }
  if ((__return_storage_ptr__->HashSize != 0) && ((int)uVar13 <= __return_storage_ptr__->HashSize))
  goto LAB_14d9131f0;
  __return_storage_ptr__->HashSize = uVar13;
  if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,0,4);
  }
  if (uVar13 != 0) {
    uVar12 = uVar13;
    if (uVar13 < 2) {
      if ((__return_storage_ptr__->Hash).SecondaryData != (ForElementType<FSetElementId>)0x0) {
        uVar12 = 0;
        goto LAB_14d91302c;
      }
    }
    else {
LAB_14d91302c:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(__return_storage_ptr__->Hash).SecondaryData,0,uVar12,4);
    }
    if (0 < (int)uVar13) {
      uVar16 = (ulonglong)uVar13;
      uVar11 = uVar15;
      do {
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar1;
        }
        uVar8 = uVar11 & (longlong)(int)uVar13 - 1U;
        uVar11 = uVar11 + 1;
        *(undefined4 *)((longlong)FVar10 + uVar8 * 4) = 0xffffffff;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  if (__return_storage_ptr__->HashSize != 0) {
    uVar12 = *(uint *)&(__return_storage_ptr__->Elements).field_0x28;
    local_98.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)&(__return_storage_ptr__->Elements).field_0x10;
    local_98.Object._0_4_ = 0;
    local_98.Object._4_4_ = 1;
    local_88._4_4_ = 0;
    uStack_80 = 0;
    uVar11 = uVar15;
    if (uVar12 != 0) {
      puVar18 = *(uint **)&(__return_storage_ptr__->Elements).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)local_98.SharedReferenceCount.ReferenceController;
      }
      uVar13 = *puVar18;
      uVar16 = uVar15;
      while (uVar13 == 0) {
        uStack_80 = (int)uVar16 + 0x20;
        uVar16 = (ulonglong)uStack_80;
        iVar7 = (int)uVar11;
        local_98.Object._0_4_ = iVar7 + 1;
        uVar11 = (ulonglong)(uint)local_98.Object;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 <
            (int)(uint)local_98.Object) goto LAB_14d913119;
        uVar13 = puVar18[(longlong)iVar7 + 1];
      }
      local_98.Object._4_4_ = -uVar13 & uVar13;
      uVar11 = (ulonglong)local_98.Object._4_4_ * 2 + 1;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_88._4_4_ = (int)lVar4 + -1 + uStack_80;
      uVar11 = (ulonglong)local_88._4_4_;
      if ((int)uVar12 < (int)local_88._4_4_) {
LAB_14d913119:
        uVar11 = (ulonglong)uVar12;
        local_88._4_4_ = uVar12;
      }
    }
    local_88._0_4_ = 0xffffffff;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60.CurrentBitIndex = local_88._4_4_;
    TStack_60._28_4_ = uStack_7c;
    TStack_60.BaseBitIndex = uStack_80;
    TStack_60._padding_._0_4_ = (uint)local_98.Object;
    TStack_60._padding_._4_4_ = local_98.Object._4_4_;
    this = (TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
            *)local_res8;
    local_68 = (FLoudnessMetric *)__return_storage_ptr__;
    TStack_60.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)local_98.SharedReferenceCount.ReferenceController;
    if ((int)uVar11 < (int)uVar12) {
      do {
        lVar9 = (longlong)(int)uVar11;
        lVar2 = *(longlong *)&local_68->Name;
        uVar16 = *(ulonglong *)(lVar2 + lVar9 * 0x18);
        lVar4 = lVar2 + lVar9 * 0x18;
        pTVar3 = *(TReferenceControllerBase<1> **)(lVar2 + 8 + lVar9 * 0x18);
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar12 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
        uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        uVar12 = (uVar12 >> 0x10 ^ uVar12) & __return_storage_ptr__->HashSize - 1U;
        *(uint *)(lVar4 + 0x14) = uVar12;
        FVar1 = (__return_storage_ptr__->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&__return_storage_ptr__->Hash;
        if (FVar1 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar1;
        }
        uVar16 = (longlong)__return_storage_ptr__->HashSize - 1U & (longlong)(int)uVar12;
        *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)((longlong)FVar10 + uVar16 * 4);
        *(int *)((longlong)FVar10 + uVar16 * 4) = (int)uVar11;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
        uVar11 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
        this = (TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
                *)local_res8;
      } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
    }
  }
LAB_14d9131f0:
  uVar12 = *(uint *)&(((FLoudnessMetric *)this)->Value).Getter;
  TStack_60.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(((FLoudnessMetric *)this)->DisplayName).Flags;
  uVar11 = uVar15;
  if (uVar12 != 0) {
    puVar18 = *(uint **)&(((FLoudnessMetric *)this)->Value).bIsSet;
    uVar11 = (ulonglong)uVar12;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)TStack_60.Array;
    }
    uVar13 = *puVar18;
    uVar16 = uVar15;
    uVar17 = 0;
    uVar14 = 0;
    while (uVar13 == 0) {
      iVar7 = (int)uVar15;
      uVar17 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)uVar17;
      uVar14 = iVar7 + 1;
      uVar15 = (ulonglong)uVar14;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14d91325c;
      uVar13 = puVar18[(longlong)iVar7 + 1];
    }
    uVar6 = -uVar13 & uVar13;
    uVar15 = (ulonglong)uVar6 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar13 = (uVar17 - 1) + (int)lVar4;
    if ((int)uVar12 < (int)uVar13) {
      uVar13 = uVar12;
    }
    uVar11 = (ulonglong)uVar13;
  }
LAB_14d91325c:
  uStack_7c = (uint)uVar11;
  local_98.SharedReferenceCount.ReferenceController._4_4_ = uVar6;
  local_98.SharedReferenceCount.ReferenceController._0_4_ = uVar14;
  uStack_80 = 0xffffffff;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._padding_ = (longlong)local_98.SharedReferenceCount.ReferenceController;
  TStack_60._28_4_ = uStack_7c;
  TStack_60.BaseBitIndex = uVar17;
  local_78 = uVar17;
  uStack_74 = uStack_7c;
  local_68 = (FLoudnessMetric *)this;
  TStack_60.CurrentBitIndex = uStack_7c;
  local_88 = (uint *)TStack_60.Array;
  if ((int)uStack_7c < (int)uVar12) {
    do {
      pFVar5 = local_68;
      lVar4 = (longlong)(int)uVar11 * 0x18;
      pTVar3 = *(TReferenceControllerBase<1> **)(lVar4 + 8 + *(longlong *)&local_68->Name);
      local_98.Object = *(FLoudnessMetric **)(lVar4 + *(longlong *)&local_68->Name);
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      uVar17 = ((uint)((ulonglong)local_98.Object >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_98.Object >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      local_98.SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      iVar7 = FindIndexByHash<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                        (param_1,uVar17 >> 0x10 ^ uVar17,&local_98);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if (iVar7 == -1) {
        Emplace<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_const_&>
                  (__return_storage_ptr__,
                   (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
                   &local_res8,(bool *)(*(longlong *)&pFVar5->Name + lVar4));
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      uVar11 = (ulonglong)(uint)TStack_60.CurrentBitIndex;
    } while (TStack_60.CurrentBitIndex < (TStack_60.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// Find @ 14d925160

TSharedPtr<EAudioOscilloscopeTriggerMode,1> * __thiscall
TSet<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::Find(void *this,TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> *param_1)

{
  EAudioOscilloscopeTriggerMode *pEVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  pEVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar5 = ((uint)((ulonglong)pEVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pEVar1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar4 = FindIndexByHash<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_>
                    (this,uVar5 >> 0x10 ^ uVar5,param_1);
  if (iVar4 != -1) {
    lVar3 = *(longlong *)this;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)(lVar3 + (longlong)iVar4 * 0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (TSharedPtr<EAudioOscilloscopeTriggerMode,1> *)0x0;
}

// Find @ 14d925210

TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> * __thiscall
TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::Find(TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
       *this,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_1)

{
  FLoudnessMetric *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar5 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  iVar4 = FindIndexByHash<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                    (this,uVar5 >> 0x10 ^ uVar5,param_1);
  if (iVar4 != -1) {
    lVar3 = *(longlong *)&this->Elements;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)
           (lVar3 + (longlong)iVar4 * 0x18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *)0x0;
}

// Rehash @ 14d962880

void __thiscall
TSet<TTuple<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ForElementType<FSetElementId> *pFVar6;
  ulonglong *puVar7;
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
      uVar3 = *(uint *)(pTVar8->AllocatorInstance).InlineData;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar3 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar4 = (longlong)local_58;
        local_58 = local_58 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d96295c;
        uVar3 = *(uint *)((pTVar8->AllocatorInstance).InlineData + lVar4 * 4 + 4);
      }
      uStack_54 = -uVar3 & uVar3;
      uVar5 = (ulonglong)uStack_54 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iStack_44 = (int)lVar4 + -1 + iStack_40;
      if (iVar2 < iStack_44) {
LAB_14d96295c:
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
        puVar7 = (ulonglong *)((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)this);
        uVar3 = ((uint)(*puVar7 >> 0x14) & 0xffff ^ (uint)(*puVar7 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar3 = (uVar3 >> 0x10 ^ uVar3) & *piVar1 - 1U;
        *(uint *)((longlong)puVar7 + 0x1c) = uVar3;
        pFVar6 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar6 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar5 = (longlong)*piVar1 - 1U & (longlong)(int)uVar3;
        *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(pFVar6->InlineData + uVar5 * 4);
        *(int *)(pFVar6->InlineData + uVar5 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d962a40

void __thiscall
TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
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
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14d962b1c;
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
LAB_14d962b1c:
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
                 ((longlong)local_30.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar4 = ((uint)(*puVar8 >> 0x14) & 0xffff ^ (uint)(*puVar8 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        uVar4 = (uVar4 >> 0x10 ^ uVar4) & *piVar1 - 1U;
        *(uint *)((longlong)puVar8 + 0x1c) = uVar4;
        FVar3 = (this->Hash).SecondaryData;
        FVar7 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar7 = FVar3;
        }
        uVar6 = (longlong)*piVar1 - 1U & (longlong)(int)uVar4;
        *(undefined4 *)(puVar8 + 3) = *(undefined4 *)((longlong)FVar7 + uVar6 * 4);
        *(int *)((longlong)FVar7 + uVar6 * 4) = local_30.CurrentBitIndex;
        local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d962c00

void __thiscall
TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> *pFVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = local_40.Array;
      }
      uVar8 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar8 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d962cd7;
        uVar8 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar6 * 4 + 4);
      }
      uStack_64 = -uVar8 & uVar8;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14d962cd7:
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
        lVar5 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)this;
        uVar7 = *(ulonglong *)(lVar3 + lVar5 * 0x28);
        lVar6 = lVar3 + lVar5 * 0x28;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar5 * 0x28);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & *piVar1 - 1U;
        *(uint *)(lVar6 + 0x24) = uVar8;
        pFVar9 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar9 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar6 + 0x20) = *(undefined4 *)(pFVar9->InlineData + uVar7 * 4);
        *(int *)(pFVar9->InlineData + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d962de0

void __thiscall
TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar9 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d962eb7;
        uVar9 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14d962eb7:
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
        lVar6 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        uVar8 = *(ulonglong *)(lVar3 + lVar6 * 0x28);
        lVar7 = lVar3 + lVar6 * 0x28;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar6 * 0x28);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & *piVar1 - 1U;
        *(uint *)(lVar7 + 0x24) = uVar9;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar7 + 0x20) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d962fc0

void __thiscall
TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*>,TDefaultMapHashableKeyFuncs<FName,AudioWidgets::FAudioAnalyzerRackUnitTypeInfo_const_*,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  uint *puVar9;
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
      puVar9 = *(uint **)&(this->Elements).field_0x20;
      if (puVar9 == (uint *)0x0) {
        puVar9 = (uint *)local_40.Array;
      }
      uVar5 = *puVar9;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d963097;
        uVar5 = puVar9[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14d963097:
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
        uVar3 = *(undefined8 *)
                 (*(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18);
        lVar6 = *(longlong *)&this->Elements + (longlong)local_40.CurrentBitIndex * 0x18;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)(lVar6 + 0x14) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d963170

void __thiscall
TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ForElementType<FSetElementId> FVar8;
  undefined8 *puVar9;
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
      uVar5 = *puVar10;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d963247;
        uVar5 = puVar10[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14d963247:
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
        puVar9 = (undefined8 *)
                 ((longlong)local_40.CurrentBitIndex * 0x20 + *(longlong *)&this->Elements);
        uVar3 = *puVar9;
        uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
        uVar5 = *piVar1 - 1U & uVar5 + (int)((ulonglong)uVar3 >> 0x20);
        *(uint *)((longlong)puVar9 + 0x1c) = uVar5;
        FVar4 = (this->Hash).SecondaryData;
        FVar8 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar8 = FVar4;
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar5;
        *(undefined4 *)(puVar9 + 3) = *(undefined4 *)((longlong)FVar8 + uVar7 * 4);
        *(int *)((longlong)FVar8 + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d963310

void __thiscall
TSet<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::Rehash(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ForElementType<FSetElementId> *pFVar9;
  TBitArray<FDefaultBitArrayAllocator> *pTVar10;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  piVar1 = (int *)((longlong)this + 0x48);
  UE::Core::Private::
  Rehash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
            ((ForElementType<FSetElementId> *)((longlong)this + 0x38),
             *(int *)((longlong)this + 0x48));
  if (*piVar1 != 0) {
    iVar2 = *(int *)((longlong)this + 0x28);
    local_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
    local_68 = 0;
    uStack_64 = 1;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar2 != 0) {
      pTVar10 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar10 = local_40.Array;
      }
      uVar8 = *(uint *)(pTVar10->AllocatorInstance).InlineData;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar8 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar6 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d9633e7;
        uVar8 = *(uint *)((pTVar10->AllocatorInstance).InlineData + lVar6 * 4 + 4);
      }
      uStack_64 = -uVar8 & uVar8;
      uVar7 = (ulonglong)uStack_64 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_54 = (int)lVar6 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14d9633e7:
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
        lVar5 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)this;
        uVar7 = *(ulonglong *)(lVar3 + lVar5 * 0x18);
        lVar6 = lVar3 + lVar5 * 0x18;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar5 * 0x18);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar8 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar8 = (uVar8 >> 0x10 ^ uVar8) & *piVar1 - 1U;
        *(uint *)(lVar6 + 0x14) = uVar8;
        pFVar9 = (ForElementType<FSetElementId> *)((longlong)this + 0x38);
        if (*(ForElementType<FSetElementId> **)((longlong)this + 0x40) !=
            (ForElementType<FSetElementId> *)0x0) {
          pFVar9 = *(ForElementType<FSetElementId> **)((longlong)this + 0x40);
        }
        uVar7 = (longlong)*piVar1 - 1U & (longlong)(int)uVar8;
        *(undefined4 *)(lVar6 + 0x10) = *(undefined4 *)(pFVar9->InlineData + uVar7 * 4);
        *(int *)(pFVar9->InlineData + uVar7 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Rehash @ 14d9634f0

void __thiscall
TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::Rehash(TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
         *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint *puVar11;
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
      puVar11 = *(uint **)&(this->Elements).field_0x20;
      if (puVar11 == (uint *)0x0) {
        puVar11 = (uint *)local_40.Array;
      }
      uVar9 = *puVar11;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar9 == 0) {
        iStack_50 = iStack_50 + 0x20;
        lVar7 = (longlong)local_68;
        local_68 = local_68 + 1;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_68) goto LAB_14d9635c7;
        uVar9 = puVar11[lVar7 + 1];
      }
      uStack_64 = -uVar9 & uVar9;
      uVar8 = (ulonglong)uStack_64 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iStack_54 = (int)lVar7 + -1 + iStack_50;
      if (iVar2 < iStack_54) {
LAB_14d9635c7:
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
        lVar6 = (longlong)local_40.CurrentBitIndex;
        lVar3 = *(longlong *)&this->Elements;
        uVar8 = *(ulonglong *)(lVar3 + lVar6 * 0x18);
        lVar7 = lVar3 + lVar6 * 0x18;
        pTVar4 = *(TReferenceControllerBase<1> **)(lVar3 + 8 + lVar6 * 0x18);
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar9 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        uVar9 = (uVar9 >> 0x10 ^ uVar9) & *piVar1 - 1U;
        *(uint *)(lVar7 + 0x14) = uVar9;
        FVar5 = (this->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&this->Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar5;
        }
        uVar8 = (longlong)*piVar1 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)(lVar7 + 0x10) = *(undefined4 *)((longlong)FVar10 + uVar8 * 4);
        *(int *)((longlong)FVar10 + uVar8 * 4) = iVar2;
        local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (local_40.CurrentBitIndex < (local_40.Array)->NumBits);
    }
  }
  return;
}

// Remove @ 14d963d40

int __thiscall
TSet<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::Remove(void *this,TSharedPtr<EAudioOscilloscopeTriggerMode_const_,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  EAudioOscilloscopeTriggerMode *pEVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pEVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = ((uint)((ulonglong)pEVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pEVar2 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    iVar3 = RemoveImpl<TSharedPtr<enum_EAudioOscilloscopeTriggerMode_const_,1>_>
                      (this,uVar4 >> 0x10 ^ uVar4,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return iVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return 0;
}

// Remove @ 14d963de0

int __thiscall
TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::Remove(TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
         *this,TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1> *param_1
        )

{
  TReferenceControllerBase<1> *pTVar1;
  FLoudnessMetric *pFVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar2 = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    uVar4 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    iVar3 = RemoveImpl<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>
                      (this,uVar4 >> 0x10 ^ uVar4,param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return iVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return 0;
}

// RemoveByIndex @ 14d963f00

void __thiscall
TSet<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::RemoveByIndex(void *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  
  if ((-1 < param_1) && (param_1 < *(int *)((longlong)this + 0x28))) {
    lVar5 = *(longlong *)((longlong)this + 0x20);
    if (*(longlong *)((longlong)this + 0x20) == 0) {
      lVar5 = (longlong)this + 0x10;
    }
    if ((*(uint *)(lVar5 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14d963f72;
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
LAB_14d963f72:
  lVar5 = *(longlong *)this + (longlong)param_1 * 0x28;
  lVar4 = *(longlong *)((longlong)this + 0x40);
  if (*(longlong *)((longlong)this + 0x40) == 0) {
    lVar4 = (longlong)this + 0x38;
  }
  piVar6 = (int *)(lVar4 + (longlong)*(int *)(lVar5 + 0x24) * 4);
  while( true ) {
    iVar1 = *piVar6;
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
    piVar6 = (int *)(*(longlong *)this + (longlong)iVar1 * 0x28 + 0x20);
  }
  *piVar6 = *(int *)(lVar5 + 0x20);
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(this,param_1,1);
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized(this,param_1,1);
  return;
}

// RemoveByIndex @ 14d964020

void __thiscall
TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
::RemoveByIndex(TSet<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
                *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ForElementType<FSetElementId> FVar5;
  undefined1 *puVar6;
  int *piVar7;
  
  if ((-1 < param_1) && (param_1 < *(int *)&(this->Elements).field_0x28)) {
    puVar6 = *(undefined1 **)&(this->Elements).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->Elements).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14d964092;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Elements.IsValidIndex(ElementIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                     ,0x2ab,L"Invalid ElementIndex passed to UE_TSPARSE_SET::RemoveByIndex");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14d964092:
  lVar1 = *(longlong *)&this->Elements + (longlong)param_1 * 0x28;
  FVar5 = (this->Hash).SecondaryData;
  if (FVar5 == (ForElementType<FSetElementId>)0x0) {
    FVar5 = (ForElementType<FSetElementId>)&this->Hash;
  }
  piVar7 = (int *)((longlong)FVar5 + (longlong)*(int *)(lVar1 + 0x24) * 4);
  while( true ) {
    iVar2 = *piVar7;
    if (iVar2 == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NextElementIndex != INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseSet.h.inl"
                         ,0x2b5,L"Corrupt hash");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iVar2 == param_1) break;
    piVar7 = (int *)(*(longlong *)&this->Elements + (longlong)iVar2 * 0x28 + 0x20);
  }
  *piVar7 = *(int *)(lVar1 + 0x20);
  TSparseArray<TSparseSetElement<TTuple<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,TSharedRef<ITableRow,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements(&this->Elements,param_1,1);
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::RemoveAtUninitialized
            ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this,param_1,1);
  return;
}

// Reset @ 14d964550

void __thiscall
TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
::Reset(TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
        *this)

{
  if (*(int *)&(this->Elements).field_0x8 != *(int *)&(this->Elements).field_0x34) {
    UnhashElements(this);
    TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements(&this->Elements,0,*(int *)&(this->Elements).field_0x8);
    *(undefined4 *)&(this->Elements).field_0x8 = 0;
    if (*(int *)&(this->Elements).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->Elements).field_0xc);
    }
    *(undefined4 *)&(this->Elements).field_0x34 = 0;
    *(undefined4 *)&(this->Elements).field_0x28 = 0;
    *(undefined4 *)&(this->Elements).field_0x30 = 0xffffffff;
  }
  return;
}

// UnhashElements @ 14d9778b0

void __thiscall
TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d9779ab;
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
LAB_14d9779ab:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d977aa0;
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
LAB_14d977aa0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedRef<AudioWidgets::IAudioAnalyzerRackUnit,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// UnhashElements @ 14d977b40

void __thiscall
TSet<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,DefaultKeyFuncs<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>,0>,FDefaultSetAllocator>
::UnhashElements(void *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  void *pvVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  TBitArray<FDefaultBitArrayAllocator> *pTVar11;
  uint uVar12;
  undefined1 local_res8 [8];
  int local_res10;
  void *local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  iVar3 = *(int *)((longlong)this + 0x48);
  local_res18 = *(void **)((longlong)this + 0x40);
  if (*(void **)((longlong)this + 0x40) == (void *)0x0) {
    local_res18 = (void *)((longlong)this + 0x38);
  }
  local_40 = *(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34);
  if ((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2 <= local_40) {
    memset(local_res18,0xff,(longlong)iVar3 << 2);
    return;
  }
  iVar3 = *(int *)((longlong)this + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = *(uint *)(pTVar11->AllocatorInstance).InlineData;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d977c3b;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
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
LAB_14d977c3b:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)((longlong)this + 0x28);
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  iVar10 = (int)uVar9 >> 5;
  uVar12 = uVar9 & 0xffffffe0;
  local_60.Array = pTVar1;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pvVar6 = local_res18;
  uVar4 = *(uint *)((longlong)this + 0x28);
  if (uVar9 != uVar4) {
    pTVar11 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar11 = pTVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) &
            *(uint *)((pTVar11->AllocatorInstance).InlineData + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar8 = (longlong)iVar10;
      uVar12 = uVar12 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d977d30;
      uVar9 = *(uint *)((pTVar11->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar9 = (int)lVar8 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_14d977d30:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != local_40) {
      `TSparseArray<TSparseSetElement<TSharedPtr<enum_EAudioOscilloscopeTriggerMode,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) && (local_60.Array == pTVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)pvVar6 +
     (longlong)*(int *)(*(longlong *)this + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4) =
         0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// UnhashElements @ 14d977dd0

void __thiscall
TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
::UnhashElements(TSet<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,DefaultKeyFuncs<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>,0>,FDefaultSetAllocator>
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
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14d977ecb;
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
LAB_14d977ecb:
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
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14d977fc0;
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
LAB_14d977fc0:
  while( true ) {
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 != local_40) {
      `TSparseArray<TSparseSetElement<TSharedRef<AudioWidgets::FLoudnessMeterWidgetView::FLoudnessMetric_const_,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    *(undefined4 *)
     ((longlong)FVar6 +
     (longlong)
     *(int *)(*(longlong *)&this->Elements + 0x14 + (longlong)local_60.CurrentBitIndex * 0x18) * 4)
         = 0xffffffff;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

