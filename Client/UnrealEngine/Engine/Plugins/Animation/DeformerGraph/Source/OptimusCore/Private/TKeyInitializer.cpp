// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 8

// operator<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo> @ 14e120450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_&&>::
operator<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>
          (TKeyInitializer<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>_&&> *this,
          TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>
          *__return_storage_ptr__)

{
  FWeakObjectPtr FVar1;
  int iVar2;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  FOptimusDataInterfacePropertyOverrideInfo::FOptimusDataInterfacePropertyOverrideInfo
            ((FOptimusDataInterfacePropertyOverrideInfo *)&__return_storage_ptr__->field_0x8,
             (FOptimusDataInterfacePropertyOverrideInfo *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>_TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_> @ 14e120570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>
* __thiscall
TKeyInitializer<FOptimusInstancedNode_const_&>::
operator<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>_TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>
          (TKeyInitializer<FOptimusInstancedNode_const_&> *this,
          TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>_>
          *__return_storage_ptr__)

{
  FOptimusInstancedNode *pFVar1;
  int iVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pFVar1 = this->Key;
  local_40 = 0;
  local_30 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  *(UOptimusNode **)__return_storage_ptr__ = (pFVar1->RoutedNode).Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            ((FOptimusPinTraversalContext *)&__return_storage_ptr__->field_0x8,
             &(pFVar1->RoutedNode).TraversalContext);
  *(int *)&__return_storage_ptr__->field_0x38 = pFVar1->LoopIndex;
  TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
  ::
  TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
            ((TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
              *)&__return_storage_ptr__->field_0x40,
             (TMap<UOptimusNodePin_const_*,FOptimus_KernelConnection,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,FOptimus_KernelConnection,0>_>
              *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
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

// operator<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_> @ 14e1206a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<FOptimusInstancedNode_const_&>::
operator<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>
          (TKeyInitializer<FOptimusInstancedNode_const_&> *this,
          TTuple<FOptimusInstancedNode,TMap<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>_>_>
          *__return_storage_ptr__)

{
  FOptimusInstancedNode *pFVar1;
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
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  pFVar1 = this->Key;
  local_40.InlineData[0] = '\0';
  local_40.InlineData[1] = '\0';
  local_40.InlineData[2] = '\0';
  local_40.InlineData[3] = '\0';
  local_40._padding_ = 0;
  local_30 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(UOptimusNode **)__return_storage_ptr__ = (pFVar1->RoutedNode).Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            ((FOptimusPinTraversalContext *)&__return_storage_ptr__->field_0x8,
             &(pFVar1->RoutedNode).TraversalContext);
  *(int *)&__return_storage_ptr__->field_0x38 = pFVar1->LoopIndex;
  TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x40,
             (TSet<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UOptimusNodePin_const_*,TArray<FOptimus_KernelConnection,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
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

// operator<FOptimusInstancedPin,FOptimusInstancedPin>_TTuple<FOptimusInstancedPin,FOptimusInstancedPin> @ 14e1207e0

TTuple<FOptimusInstancedPin,FOptimusInstancedPin> * __thiscall
TKeyInitializer<FOptimusInstancedPin_const_&>::
operator<FOptimusInstancedPin,FOptimusInstancedPin>_TTuple<FOptimusInstancedPin,FOptimusInstancedPin>
          (TKeyInitializer<FOptimusInstancedPin_const_&> *this,
          TTuple<FOptimusInstancedPin,FOptimusInstancedPin> *__return_storage_ptr__)

{
  FOptimusInstancedPin *pFVar1;
  
  pFVar1 = this->Key;
  *(UOptimusNode **)__return_storage_ptr__ = (pFVar1->InstancedNode).RoutedNode.Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            ((FOptimusPinTraversalContext *)&__return_storage_ptr__->field_0x8,
             &(pFVar1->InstancedNode).RoutedNode.TraversalContext);
  *(int *)&__return_storage_ptr__->field_0x38 = (pFVar1->InstancedNode).LoopIndex;
  *(UOptimusNodePin **)&__return_storage_ptr__->field_0x40 = pFVar1->Pin;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = 0;
  if (*(void **)&__return_storage_ptr__->field_0x70 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x70);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x78 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x7c = 4;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = 0;
  return __return_storage_ptr__;
}

// operator<FOptimusRoutedConstNode,FOptimusRoutedConstNode>_TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode> @ 14e120880

TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode> * __thiscall
TKeyInitializer<FOptimusRoutedConstNode_const_&>::
operator<FOptimusRoutedConstNode,FOptimusRoutedConstNode>_TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode>
          (TKeyInitializer<FOptimusRoutedConstNode_const_&> *this,
          TTuple<FOptimusRoutedConstNode,FOptimusRoutedConstNode> *__return_storage_ptr__)

{
  FOptimusRoutedConstNode *pFVar1;
  
  pFVar1 = this->Key;
  *(UOptimusNode **)__return_storage_ptr__ = pFVar1->Node;
  FOptimusPinTraversalContext::FOptimusPinTraversalContext
            ((FOptimusPinTraversalContext *)&__return_storage_ptr__->field_0x8,
             &pFVar1->TraversalContext);
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  if (*(void **)&__return_storage_ptr__->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x60);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x68 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x6c = 4;
  return __return_storage_ptr__;
}

// operator<FOptimusValueIdentifier,FOptimusValueDescription>_TTuple<FOptimusValueIdentifier,FOptimusValueDescription> @ 14e120910

TTuple<FOptimusValueIdentifier,FOptimusValueDescription> * __thiscall
TKeyInitializer<FOptimusValueIdentifier_const_&>::
operator<FOptimusValueIdentifier,FOptimusValueDescription>_TTuple<FOptimusValueIdentifier,FOptimusValueDescription>
          (TKeyInitializer<FOptimusValueIdentifier_const_&> *this,
          TTuple<FOptimusValueIdentifier,FOptimusValueDescription> *__return_storage_ptr__)

{
  FOptimusValueIdentifier *pFVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  undefined1 local_78 [32];
  FUtf8String local_58;
  ulonglong local_48;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_40;
  uchar *local_38;
  ForAnyElementType FStack_30;
  undefined8 local_28;
  ForAnyElementType FStack_20;
  undefined8 local_18;
  
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  local_78._8_8_ = 0;
  local_48 = 0;
  TStack_40.DebugPtr = (UScriptStruct *)0x0;
  local_78._24_8_ = 0;
  local_38 = (uchar *)0x0;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  local_78._16_8_ = 0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  FUtf8String::Reset(&local_58,0);
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  local_78._8_8_ = 0;
  local_78._24_8_ = 0;
  local_78._16_8_ = 0;
  FUtf8String::Reset(&local_58,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  local_48 = local_48 & 0xffffffffffffff00;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&TStack_40.ObjectPtr);
  pFVar1 = this->Key;
  FStack_30.Data = (FScriptContainerElement *)0x0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  uVar2 = *(undefined3 *)&pFVar1->field_0x1;
  FVar3.Value = (pFVar1->Name).ComparisonIndex.Value;
  __return_storage_ptr__->field_0x0 = pFVar1->Type;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar3.Value;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar1->Name).Number;
  FOptimusValueDescription::FOptimusValueDescription
            ((FOptimusValueDescription *)&__return_storage_ptr__->field_0x10,
             (FOptimusValueDescription *)local_78);
  DestructItems<FArrayShaderValue,int>((FArrayShaderValue *)FStack_20.Data,(int)local_18);
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  if (FStack_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_30.Data);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&TStack_40.ObjectPtr);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_> @ 14e120b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
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
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_> @ 14e120c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<enum_EOptimusDeformerExecutionPhase_const_&>::
operator<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<enum_EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>
          (void *this,
          TTuple<EOptimusDeformerExecutionPhase,TMap<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>_>_>
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
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<FGuid,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<FGuid,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

