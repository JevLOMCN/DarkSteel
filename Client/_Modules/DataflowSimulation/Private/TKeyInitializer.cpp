// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 3

// operator<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData> @ 1462ee940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData> * __thiscall
TKeyInitializer<TObjectPtr<UDataflow>_const_&>::
operator<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>_TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>
          (TKeyInitializer<TObjectPtr<UDataflow>_const_&> *this,
          TTuple<TObjectPtr<UDataflow>,UE::Dataflow::Private::FDataflowSimulationData>
          *__return_storage_ptr__)

{
  UDataflow *pUVar1;
  int iVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  ulonglong local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_40.InlineData[0] = '\0';
  local_40.InlineData[1] = '\0';
  local_40.InlineData[2] = '\0';
  local_40.InlineData[3] = '\0';
  local_40._padding_ = 0;
  local_30 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_28 = 0;
  uStack_20 = 0;
  pUVar1 = (this->Key->field0_0x0).DebugPtr;
  *(UDataflow **)__return_storage_ptr__ = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UDataflow *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  TSet<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)local_78);
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = uStack_20;
  uStack_20 = 0;
  local_28 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_> @ 1462eeab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FString_const_&>::
operator<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>_TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_3c = 0x80;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
  ::
  TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
            ((TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<FDataflowSimulationProxy_*,DefaultKeyFuncs<FDataflowSimulationProxy_*,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_> @ 1462eebd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FString_&&>::
operator<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>_TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FString_&&> *this,
          TTuple<FString,TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FString *pFVar1;
  int iVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar1 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
  ::
  TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
            ((TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<IDataflowSimulationInterface_*,DefaultKeyFuncs<IDataflowSimulationInterface_*,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

