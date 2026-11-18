// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 2

// FSetOperatorOrdinalsAndSort @ 14ad3c8a0

FSetOperatorOrdinalsAndSort * __thiscall
Metasound::DynamicGraph::FSetOperatorOrdinalsAndSort::FSetOperatorOrdinalsAndSort
          (FSetOperatorOrdinalsAndSort *this,
          TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
          *param_1)

{
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *pTVar1;
  undefined1 *_Dst;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7FSetOperatorOrdinalsAndSort_DynamicGraph_Metasound__6B_;
  pTVar1 = &this->Ordinals;
  *(undefined8 *)pTVar1 = 0;
  *(undefined8 *)&(this->Ordinals).field_0x8 = 0;
  *(undefined8 *)&(this->Ordinals).field_0x20 = 0;
  *(undefined4 *)&(this->Ordinals).field_0x28 = 0;
  *(undefined4 *)&(this->Ordinals).field_0x2c = 0x80;
  *(undefined4 *)&(this->Ordinals).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Ordinals).field_0x34 = 0;
  *(undefined8 *)&(this->Ordinals).field_0x40 = 0;
  *(undefined4 *)&(this->Ordinals).field_0x48 = 0;
  if (pTVar1 != param_1) {
    *(undefined8 *)pTVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)&(this->Ordinals).field_0x8 = *(undefined4 *)&param_1->field_0x8;
    *(undefined4 *)&(this->Ordinals).field_0xc = *(undefined4 *)&param_1->field_0xc;
    *(undefined8 *)&param_1->field_0x8 = 0;
    _Dst = &(this->Ordinals).field_0x10;
    if (_Dst != &param_1->field_0x10) {
      if (*(longlong *)&param_1->field_0x20 == 0) {
        memmove(_Dst,&param_1->field_0x10,0x10);
      }
      pvVar2 = *(void **)&(this->Ordinals).field_0x20;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      *(undefined8 *)&(this->Ordinals).field_0x20 = *(undefined8 *)&param_1->field_0x20;
      *(undefined8 *)&param_1->field_0x20 = 0;
      *(undefined4 *)&(this->Ordinals).field_0x28 = *(undefined4 *)&param_1->field_0x28;
      *(undefined4 *)&(this->Ordinals).field_0x2c = *(undefined4 *)&param_1->field_0x2c;
      *(undefined8 *)&param_1->field_0x28 = 0;
    }
    *(undefined4 *)&(this->Ordinals).field_0x30 = *(undefined4 *)&param_1->field_0x30;
    *(undefined4 *)&(this->Ordinals).field_0x34 = *(undefined4 *)&param_1->field_0x34;
    *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
    *(undefined4 *)&param_1->field_0x34 = 0;
  }
  if (*(longlong *)&param_1->field_0x40 == 0) {
    *(undefined4 *)&(this->Ordinals).field_0x38 = *(undefined4 *)&param_1->field_0x38;
  }
  pvVar2 = *(void **)&(this->Ordinals).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined8 *)&(this->Ordinals).field_0x40 = *(undefined8 *)&param_1->field_0x40;
  *(undefined8 *)&param_1->field_0x40 = 0;
  *(undefined4 *)&(this->Ordinals).field_0x48 = *(undefined4 *)&param_1->field_0x48;
  *(undefined4 *)&param_1->field_0x48 = 0;
  if (*(void **)&param_1->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x40);
  }
  *(undefined4 *)&param_1->field_0x8 = 0;
  if (*(int *)&param_1->field_0xc != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)param_1,0,(int *)&param_1->field_0xc);
  }
  *(undefined4 *)&param_1->field_0x34 = 0;
  *(undefined4 *)&param_1->field_0x30 = 0xffffffff;
  *(undefined4 *)&param_1->field_0x28 = 0;
  if ((*(int *)&param_1->field_0x2c < 0) || (0x80 < *(int *)&param_1->field_0x2c)) {
    *(undefined4 *)&param_1->field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&param_1->field_0x10,0);
  }
  if (*(void **)&param_1->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&param_1->field_0x20);
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return this;
}

// Transform @ 14ad684d0

EDynamicOperatorTransformQueueAction __thiscall
Metasound::DynamicGraph::FSetOperatorOrdinalsAndSort::Transform
          (FSetOperatorOrdinalsAndSort *this,FDynamicGraphOperatorData *param_1)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  ulong64 *puVar4;
  TMap<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
  *this_00;
  ulong64 *puVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  bVar2 = 0 < GCycleStatsShouldEmitNamedEvents;
  if (bVar2) {
    FGenericPlatformMisc::BeginNamedEvent
              (&FColor::Green,"Metasound::DynamicOperator::SetOperatorOrdinalsAndSort");
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId269,"Metasound::DynamicOperator::SetOperatorOrdinalsAndSort"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Private\\MetasoundDynamicOperator.cpp"
               ,0x10d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId269);
  }
  iVar1 = (int)param_1->_padding_;
  this_00 = &this->Ordinals;
  puVar4 = (ulong64 *)param_1->_padding_;
  puVar5 = puVar4 + (longlong)iVar1 * 0xf;
  while( true ) {
    if ((int)param_1->_padding_ != iVar1) {
      `TCheckedPointerIterator<TTuple<unsigned___int64,Metasound::DirectedGraphAlgo::FGraphOperatorData::FOperatorInfo>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar4 == puVar5) break;
    piVar3 = TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
             ::Find((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                     *)this_00,*puVar4);
    if (piVar3 == (int *)0x0) {
      *(undefined4 *)(puVar4 + 1) = 0x7fffffff;
      puVar4 = puVar4 + 0xf;
    }
    else {
      *(int *)(puVar4 + 1) = *piVar3;
      puVar4 = puVar4 + 0xf;
    }
  }
  DynamicGraphAlgoPrivate::SetOrdinalsAndSortTable<Metasound::DynamicGraph::FExecuteEntry>
            (this_00,&param_1->ExecuteTable);
  DynamicGraphAlgoPrivate::SetOrdinalsAndSortTable<Metasound::DynamicGraph::FPostExecuteEntry>
            (this_00,&param_1->PostExecuteTable);
  DynamicGraphAlgoPrivate::SetOrdinalsAndSortTable<Metasound::DynamicGraph::FResetEntry>
            (this_00,&param_1->ResetTable);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  return Continue;
}

