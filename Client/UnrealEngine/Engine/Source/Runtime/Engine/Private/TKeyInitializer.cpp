// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 69

// operator<AActor_const_*,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>_>_TTuple<AActor_const_*,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>_> @ 147366d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<AActor_const_*,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>_>
* __thiscall
TKeyInitializer<AActor_const_*_&&>::
operator<AActor_const_*,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>_>_TTuple<AActor_const_*,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>_>
          (TKeyInitializer<AActor_const_*_&&> *this,
          TTuple<AActor_const_*,TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>_>
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
  *(AActor **)__return_storage_ptr__ = *this->Key;
  TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
  ::
  TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
            ((TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<UObject_const_*,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_const_*,int,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>_TTuple<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_> @ 147424c40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>
* __thiscall
TKeyInitializer<UClass_*_const_&>::
operator<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>_TTuple<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>
          (TKeyInitializer<UClass_*_const_&> *this,
          TTuple<UClass_*,TMap<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_188 [32];
  undefined1 local_158 [256];
  ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_> local_58;
  int local_50;
  int local_4c;
  TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_48;
  undefined8 uStack_30;
  uchar local_28 [8];
  ForElementType<FSetElementId> local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_188;
  memset(local_158,0,0x100);
  local_4c = 4;
  local_48.AllocatorInstance.InlineData[0] = '\0';
  local_48.AllocatorInstance.InlineData[1] = '\0';
  local_48.AllocatorInstance.InlineData[2] = '\0';
  local_48.AllocatorInstance.InlineData[3] = '\0';
  local_48.AllocatorInstance._padding_ = 0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_18 = 0;
  local_58 = (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>)0x0;
  local_50 = 0;
  local_48.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_48.NumBits = ___xmm_00000000ffffffff0000002000000000;
  local_48.MaxBits = _UNK_150631d74;
  uStack_30 = _UNK_150631d78;
  local_20 = (ForElementType<FSetElementId>)0x0;
  *(UClass **)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
  ::
  TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
            ((TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>,TInlineSetAllocator<4,TSparseSetAllocator<TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,2,8,4>_>_>
              *)local_158);
  local_18 = local_18 & 0xffffffff00000000;
  if (local_20 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_20);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FAnimNode_LinkedAnimLayer_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_>,TInlineSparseArrayAllocator<4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,TSizedDefaultAllocator<32>_>_>_>
                     *)local_158,0,local_50);
  local_50 = 0;
  if (local_4c != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>_>
              (0x40,8,0,(ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_> *)
                        local_158,0,&local_4c);
  }
  iVar1 = local_48.MaxBits;
  uStack_30 = 0xffffffff;
  local_48._16_8_ = (ulonglong)(uint)local_48.MaxBits << 0x20;
  if (0x20 < (uint)iVar1) {
    local_48.NumBits = 0;
    local_48.MaxBits = 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Realloc(&local_48,0);
  }
  if (local_48.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
  }
  if (local_58 != (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>_>)0x0) {
    FMemory::Free((void *)local_58);
  }
  return __return_storage_ptr__;
}

// operator<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>_TTuple<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_> @ 147424d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>_TTuple<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
          *__return_storage_ptr__)

{
  uint uVar1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> local_28;
  
  local_28._padding_ = 0;
  local_28.InvocationList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.InvocationList._8_8_ = ___xmm_00000000000000020000000000000000;
  local_28._24_8_ = _UNK_150631d48;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 2;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::operator=
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &__return_storage_ptr__->field_0x8,&local_28);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
             local_28.InvocationList.AllocatorInstance.Data,local_28.InvocationList.ArrayNum);
  if ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)
      local_28.InvocationList.AllocatorInstance.Data !=
      (TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)0x0) {
    FMemory::Free(local_28.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&local_28);
  return __return_storage_ptr__;
}

// operator<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose> @ 1474a2640

TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose> *
__thiscall
TKeyInitializer<FAnimNode_SaveCachedPose_const_*_const_&>::
operator<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>_TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>
          (TKeyInitializer<FAnimNode_SaveCachedPose_const_*_const_&> *this,
          TTuple<FAnimNode_SaveCachedPose_const_*,UE::Anim::FCachedPoseThreadContext::FCachedPose>
          *__return_storage_ptr__)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 local_88 [56];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_50;
  undefined8 local_48;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_40;
  undefined8 local_38;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_30;
  undefined8 local_28;
  void *local_20;
  undefined8 local_18;
  
  local_88._41_4_ = 0;
  local_88._45_2_ = 0;
  local_88[0x2f] = 0;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_88._32_8_ = 0;
  local_88[0x28] = 0;
  local_48 = 0;
  local_40 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
  local_38 = 0;
  local_30 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
              *)0x0;
  local_28 = 0;
  local_20 = (void *)0x0;
  local_18 = 0;
  local_88._16_8_ = 0;
  local_88._24_8_ = 0;
  local_88._48_8_ = 0;
  pTStack_50 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  *(FAnimNode_SaveCachedPose **)__return_storage_ptr__ = *this->Key;
  UE::Anim::FCachedPoseThreadContext::FCachedPose::FCachedPose
            ((FCachedPose *)&__return_storage_ptr__->field_0x8,(FCachedPose *)local_88);
  if (local_20 != (void *)0x0) {
    FMemory::Free(local_20);
  }
  pTVar3 = local_30;
  DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
            (local_30,(int)local_28);
  if (pTVar3 != (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    FMemory::Free(pTVar3);
  }
  pTVar2 = local_40;
  DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
            (local_40,(int)local_38);
  if (pTVar2 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar2);
  }
  pTVar1 = pTStack_50;
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_50,(int)local_48);
  if (pTVar1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(pTVar1);
  }
  return __return_storage_ptr__;
}

// operator<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_> @ 1474a2740

TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TArray<UE::Anim::FMessageStack::FMessageEntry,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FAnimNode_Base *pFVar2;
  UScriptStruct *pUVar3;
  IGraphMessage *pIVar4;
  uint uVar5;
  FMessageEntry *pFVar6;
  undefined8 *puVar7;
  longlong lVar8;
  FMessageEntry local_118 [8];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar5 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x108 = 0;
  lVar8 = 2;
  pFVar6 = local_118;
  puVar7 = (undefined8 *)&__return_storage_ptr__->field_0x8;
  do {
    pTVar1 = (pFVar6->Message).SharedReferenceCount.ReferenceController;
    pFVar2 = (pFVar6->NodeInfo).Node;
    pUVar3 = (pFVar6->NodeInfo).NodeStruct;
    *puVar7 = (pFVar6->Message).Object;
    puVar7[1] = pTVar1;
    pIVar4 = pFVar6[1].Message.Object;
    pTVar1 = pFVar6[1].Message.SharedReferenceCount.ReferenceController;
    puVar7[2] = pFVar2;
    puVar7[3] = pUVar3;
    pFVar2 = pFVar6[1].NodeInfo.Node;
    pUVar3 = pFVar6[1].NodeInfo.NodeStruct;
    puVar7[4] = pIVar4;
    puVar7[5] = pTVar1;
    pIVar4 = pFVar6[2].Message.Object;
    pTVar1 = pFVar6[2].Message.SharedReferenceCount.ReferenceController;
    puVar7[6] = pFVar2;
    puVar7[7] = pUVar3;
    pFVar2 = pFVar6[2].NodeInfo.Node;
    pUVar3 = pFVar6[2].NodeInfo.NodeStruct;
    puVar7[8] = pIVar4;
    puVar7[9] = pTVar1;
    pIVar4 = pFVar6[3].Message.Object;
    pTVar1 = pFVar6[3].Message.SharedReferenceCount.ReferenceController;
    puVar7[10] = pFVar2;
    puVar7[0xb] = pUVar3;
    pFVar2 = pFVar6[3].NodeInfo.Node;
    pUVar3 = pFVar6[3].NodeInfo.NodeStruct;
    puVar7[0xc] = pIVar4;
    puVar7[0xd] = pTVar1;
    puVar7[0xe] = pFVar2;
    puVar7[0xf] = pUVar3;
    lVar8 = lVar8 + -1;
    pFVar6 = pFVar6 + 4;
    puVar7 = puVar7 + 0x10;
  } while (lVar8 != 0);
  if (*(void **)&__return_storage_ptr__->field_0x108 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x108);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x108 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x110 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x114 = 8;
  local_18 = 0;
  local_10 = 0;
  local_c = 8;
  DestructItems<UE::Anim::FMessageStack::FMessageEntry,int>(local_118,0);
  return __return_storage_ptr__;
}

// operator<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 1474a2840

TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TArray<UE::Anim::FMessageStack::FNodeInfo,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  uint uVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uStack_40;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uStack_30;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uStack_20;
  if (*(void **)&__return_storage_ptr__->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x48);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x54 = 4;
  return __return_storage_ptr__;
}

// operator<FName,FAnimGroupInstance>_TTuple<FName,FAnimGroupInstance> @ 147522550

TTuple<FName,FAnimGroupInstance> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FAnimGroupInstance>_TTuple<FName,FAnimGroupInstance>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FAnimGroupInstance> *__return_storage_ptr__)

{
  uint uVar1;
  
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0xffffffff;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  __return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(TArray<FName,TSizedDefaultAllocator<32>_> **)&__return_storage_ptr__->field_0x70 =
       &FMarkerTickContext::DefaultMarkerNames;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x5c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x64 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x6c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = 0;
  DestructItems<FAnimTickRecord,int>((FAnimTickRecord *)0x0,0);
  return __return_storage_ptr__;
}

// operator<FName,FCurveMetaData>_TTuple<FName,FCurveMetaData> @ 14758f9a0

TTuple<FName,FCurveMetaData> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FCurveMetaData>_TTuple<FName,FCurveMetaData>
          (TKeyInitializer<FName_const_&> *this,TTuple<FName,FCurveMetaData> *__return_storage_ptr__
          )

{
  uint uVar1;
  bool bVar2;
  FCurveMetaData *pFVar3;
  FCurveMetaData local_28;
  
  pFVar3 = FCurveMetaData::FCurveMetaData(&local_28);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x8 =
       (pFVar3->LinkedBones).AllocatorInstance.Data;
  (pFVar3->LinkedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x10 = (pFVar3->LinkedBones).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x14 = (pFVar3->LinkedBones).ArrayMax;
  (pFVar3->LinkedBones).ArrayNum = 0;
  (pFVar3->LinkedBones).ArrayMax = 0;
  __return_storage_ptr__->field_0x18 = pFVar3->MaxLOD;
  bVar2 = (pFVar3->Type).bMorphtarget;
  __return_storage_ptr__->field_0x19 = (pFVar3->Type).bMaterial;
  __return_storage_ptr__->field_0x1a = bVar2;
  if (local_28.LinkedBones.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.LinkedBones.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FName,FPrimaryAssetData>_TTuple<FName,FPrimaryAssetData> @ 14758fa20

TTuple<FName,FPrimaryAssetData> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FPrimaryAssetData>_TTuple<FName,FPrimaryAssetData>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FPrimaryAssetData> *__return_storage_ptr__)

{
  uint uVar1;
  FUtf8String local_60 [5];
  
  local_60[0].Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60[0].Data.ArrayNum = 0;
  local_60[0].Data.ArrayMax = 0;
  FUtf8String::Reset(local_60,0);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x20 =
       local_60[0].Data.AllocatorInstance.Data;
  *(int *)&__return_storage_ptr__->field_0x28 = local_60[0].Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x2c = local_60[0].Data.ArrayMax;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x58 = 0;
  __return_storage_ptr__->field_0x5a = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x68 = 0;
  __return_storage_ptr__->field_0x6a = 0;
  return __return_storage_ptr__;
}

// operator<FName,FRuntimeSkinWeightProfileData>_TTuple<FName,FRuntimeSkinWeightProfileData> @ 14758fbb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FRuntimeSkinWeightProfileData> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FRuntimeSkinWeightProfileData>_TTuple<FName,FRuntimeSkinWeightProfileData>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FRuntimeSkinWeightProfileData> *__return_storage_ptr__)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [32];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_68.MaxBits = 0x80;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_2c._0_4_ = 0;
  local_2c._4_1_ = '\0';
  local_2c._5_1_ = false;
  local_2c._6_2_ = 0;
  local_24 = 0;
  local_68.AllocatorInstance.InlineData[0] = '\0';
  local_68.AllocatorInstance.InlineData[1] = '\0';
  local_68.AllocatorInstance.InlineData[2] = '\0';
  local_68.AllocatorInstance.InlineData[3] = '\0';
  local_68.AllocatorInstance.InlineData[4] = '\0';
  local_68.AllocatorInstance.InlineData[5] = '\0';
  local_68.AllocatorInstance.InlineData[6] = '\0';
  local_68.AllocatorInstance.InlineData[7] = '\0';
  local_68.AllocatorInstance.InlineData[8] = '\0';
  local_68.AllocatorInstance.InlineData[9] = '\0';
  local_68.AllocatorInstance.InlineData[10] = '\0';
  local_68.AllocatorInstance.InlineData[0xb] = '\0';
  local_68.AllocatorInstance.InlineData[0xc] = '\0';
  local_68.AllocatorInstance.InlineData[0xd] = '\0';
  local_68.AllocatorInstance.InlineData[0xe] = '\0';
  local_68.AllocatorInstance.InlineData[0xf] = '\0';
  local_98._8_4_ = 0;
  local_98._12_4_ = 0;
  local_98._16_8_ = (FScriptContainerElement *)0x0;
  local_98._24_4_ = 0;
  local_98._28_4_ = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FRuntimeSkinWeightProfileData::FRuntimeSkinWeightProfileData
            ((FRuntimeSkinWeightProfileData *)&__return_storage_ptr__->field_0x8,
             (FRuntimeSkinWeightProfileData *)local_98);
  local_30 = 0;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if ((FScriptContainerElement *)local_98._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._16_8_);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,FSmartNameMapping>_TTuple<FName,FSmartNameMapping> @ 14758fd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014758fe3b) */
/* WARNING: Removing unreachable block (ram,0x00014758fe49) */

TTuple<FName,FSmartNameMapping> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FSmartNameMapping>_TTuple<FName,FSmartNameMapping>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FSmartNameMapping> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_b8 [32];
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x28,
             (TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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
  DestructItems<FCurveMetaData,int>((FCurveMetaData *)0x0,0);
  return __return_storage_ptr__;
}

// operator<unsigned_int,Audio::FAudioStats>_TTuple<unsigned_int,Audio::FAudioStats> @ 147608500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<unsigned_int,Audio::FAudioStats> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,Audio::FAudioStats>_TTuple<unsigned_int,Audio::FAudioStats>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,Audio::FAudioStats> *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  undefined8 uStack_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 local_70;
  ForElementType<FSetElementId> FStack_68;
  ulonglong uStack_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  ForAnyElementType local_40;
  undefined8 local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_a8[0] = '\0';
  local_a8[1] = Name;
  local_a0.Data = (FScriptContainerElement *)0x0;
  uStack_98 = 0;
  local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  FStack_68.InlineData[0] = '\0';
  FStack_68.InlineData[1] = '\0';
  FStack_68.InlineData[2] = '\0';
  FStack_68.InlineData[3] = '\0';
  FStack_68._padding_ = 0;
  FStack_68.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_90.AllocatorInstance.InlineData[0] = '\0';
  local_90.AllocatorInstance.InlineData[1] = '\0';
  local_90.AllocatorInstance.InlineData[2] = '\0';
  local_90.AllocatorInstance.InlineData[3] = '\0';
  local_90.AllocatorInstance.InlineData[4] = '\0';
  local_90.AllocatorInstance.InlineData[5] = '\0';
  local_90.AllocatorInstance.InlineData[6] = '\0';
  local_90.AllocatorInstance.InlineData[7] = '\0';
  local_90.AllocatorInstance.InlineData[8] = '\0';
  local_90.AllocatorInstance.InlineData[9] = '\0';
  local_90.AllocatorInstance.InlineData[10] = '\0';
  local_90.AllocatorInstance.InlineData[0xb] = '\0';
  local_90.AllocatorInstance.InlineData[0xc] = '\0';
  local_90.AllocatorInstance.InlineData[0xd] = '\0';
  local_90.AllocatorInstance.InlineData[0xe] = '\0';
  local_90.AllocatorInstance.InlineData[0xf] = '\0';
  uStack_58 = 0;
  local_90._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_70 = _UNK_150631d98;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  *(uint *)__return_storage_ptr__ = *this->Key;
  Audio::FAudioStats::FAudioStats
            ((FAudioStats *)&__return_storage_ptr__->field_0x8,(FAudioStats *)local_a8);
  DestructItems<Audio::FAudioStats::FStatSoundMix,int>((FStatSoundMix *)local_30.Data,(int)local_28)
  ;
  if ((FStatSoundMix *)local_30.Data != (FStatSoundMix *)0x0) {
    FMemory::Free(local_30.Data);
  }
  DestructItems<Audio::FAudioStats::FStatSoundInfo,int>
            ((FStatSoundInfo *)local_40.Data,(int)local_38);
  if ((FStatSoundInfo *)local_40.Data != (FStatSoundInfo *)0x0) {
    FMemory::Free(local_40.Data);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  uStack_58 = uStack_58 & 0xffffffff00000000;
  if (FStack_68.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_68.SecondaryData);
  }
  uVar1 = uStack_98 >> 0x20;
  uStack_98 = uStack_98 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&local_a0,0,(int *)((longlong)&uStack_98 + 4));
  }
  iVar2 = local_90.MaxBits;
  local_70 = 0xffffffff;
  local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    local_90.NumBits = 0;
    local_90.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
  }
  if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
  }
  if (local_a0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data);
  }
  return __return_storage_ptr__;
}

// operator<unsigned_int,Audio::FAudioStats_AudioThread>_TTuple<unsigned_int,Audio::FAudioStats_AudioThread> @ 147608680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<unsigned_int,Audio::FAudioStats_AudioThread> * __thiscall
TKeyInitializer<unsigned_int_const_&>::
operator<unsigned_int,Audio::FAudioStats_AudioThread>_TTuple<unsigned_int,Audio::FAudioStats_AudioThread>
          (TKeyInitializer<unsigned_int_const_&> *this,
          TTuple<unsigned_int,Audio::FAudioStats_AudioThread> *__return_storage_ptr__)

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
  *(uint *)__return_storage_ptr__ = *this->Key;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>_TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_> @ 147608880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>
* __thiscall
TKeyInitializer<USoundMix_*_const_&>::
operator<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>_TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>
          (TKeyInitializer<USoundMix_*_const_&> *this,
          TTuple<USoundMix_*,TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>_>
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
  *(USoundMix **)__return_storage_ptr__ = *this->Key;
  TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
  ::
  TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
            ((TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<USoundClass_*,FSoundMixClassOverride,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<int,FExternalMorphSetWeights>_TTuple<int,FExternalMorphSetWeights> @ 14791c5f0

TTuple<int,FExternalMorphSetWeights> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,FExternalMorphSetWeights>_TTuple<int,FExternalMorphSetWeights>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,FExternalMorphSetWeights> *__return_storage_ptr__)

{
  FName local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  ::FName::FName(&local_28,L"Unknown ExternalMorphSetWeights");
  *(int *)__return_storage_ptr__ = *this->Key;
  *(uint *)&__return_storage_ptr__->field_0x8 = local_28.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = local_28.Number;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x24 = 0x3a83126f;
  return __return_storage_ptr__;
}

// operator<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_> @ 147a11950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FNetworkGUID_const_&>::
operator<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FNetworkGUID_const_&> *this,
          TTuple<FNetworkGUID,TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>_>
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
  *(FNetworkGUID_u_0 *)__return_storage_ptr__ = this->Key->field0_0x0;
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>::
  TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
            ((TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<FObjectReplicator_*,DefaultKeyFuncs<FObjectReplicator_*,0>,FDefaultSetAllocator>
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

// operator<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> @ 147aaae80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FName_&&>::
operator<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FName_&&> *this,
          TTuple<FName,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>
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
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
            ((TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FString,FRollbackNetStartupActorInfo>_TTuple<FString,FRollbackNetStartupActorInfo> @ 147aaafb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,FRollbackNetStartupActorInfo> * __thiscall
TKeyInitializer<FString_&&>::
operator<FString,FRollbackNetStartupActorInfo>_TTuple<FString,FRollbackNetStartupActorInfo>
          (TKeyInitializer<FString_&&> *this,
          TTuple<FString,FRollbackNetStartupActorInfo> *__return_storage_ptr__)

{
  FString *pFVar1;
  undefined1 auStackY_128 [32];
  undefined1 local_f8 [112];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  void *local_48;
  undefined4 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  memset(local_f8,0,0xd0);
  pFVar1 = this->Key;
  local_5c = 0x80;
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  FRollbackNetStartupActorInfo::FRollbackNetStartupActorInfo
            ((FRollbackNetStartupActorInfo *)&__return_storage_ptr__->field_0x10,
             (FRollbackNetStartupActorInfo *)local_f8);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_40 = 0;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FRepState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FRepState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  local_88._8_4_ = 0;
  if (local_88._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_f8._104_8_);
  return __return_storage_ptr__;
}

// operator<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData>_TTuple<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData> @ 147bab550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData> * __thiscall
TKeyInitializer<FPlatformUserId_const_&>::
operator<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData>_TTuple<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData>
          (TKeyInitializer<FPlatformUserId_const_&> *this,
          TTuple<FPlatformUserId,UInputDeviceSubsystem::FLatestInputDeviceData>
          *__return_storage_ptr__)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [8];
  ForAnyElementType FStack_70;
  undefined8 local_68;
  TBitArray<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  undefined8 local_38;
  void *pvStack_30;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78._0_4_ = -1;
  local_78._4_4_ = 0;
  TStack_60.AllocatorInstance.InlineData[0] = '\0';
  TStack_60.AllocatorInstance.InlineData[1] = '\0';
  TStack_60.AllocatorInstance.InlineData[2] = '\0';
  TStack_60.AllocatorInstance.InlineData[3] = '\0';
  TStack_60.AllocatorInstance.InlineData[4] = '\0';
  TStack_60.AllocatorInstance.InlineData[5] = '\0';
  TStack_60.AllocatorInstance.InlineData[6] = '\0';
  TStack_60.AllocatorInstance.InlineData[7] = '\0';
  FStack_70.Data = (FScriptContainerElement *)0x0;
  TStack_60.AllocatorInstance.InlineData[8] = '\0';
  TStack_60.AllocatorInstance.InlineData[9] = '\0';
  TStack_60.AllocatorInstance.InlineData[10] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xb] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xc] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xd] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xe] = '\0';
  TStack_60.AllocatorInstance.InlineData[0xf] = '\0';
  local_68 = 0;
  local_38 = 0;
  TStack_60.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  TStack_60._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  pvStack_30 = (void *)0x0;
  local_28 = 0;
  *(int *)__return_storage_ptr__ = this->Key->InternalId;
  UInputDeviceSubsystem::FLatestInputDeviceData::FLatestInputDeviceData
            ((FLatestInputDeviceData *)&__return_storage_ptr__->field_0x8,
             (FLatestInputDeviceData *)local_78);
  local_28 = local_28 & 0xffffffff00000000;
  if (pvStack_30 != (void *)0x0) {
    FMemory::Free(pvStack_30);
  }
  uVar1 = local_68 >> 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&FStack_70,0,(int *)((longlong)&local_68 + 4));
  }
  iVar2 = TStack_60.MaxBits;
  uStack_40 = 0xffffffff;
  TStack_60._24_8_ = (ulonglong)(uint)TStack_60.MaxBits << 0x20;
  if (0x80 < (uint)iVar2) {
    TStack_60.NumBits = 0;
    TStack_60.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&TStack_60,0);
  }
  if (TStack_60.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)TStack_60.AllocatorInstance.SecondaryData);
  }
  if (FStack_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_70.Data);
  }
  return __return_storage_ptr__;
}

// operator<FName,FGPUSkinCacheVisualizationData::FModeRecord>_TTuple<FName,FGPUSkinCacheVisualizationData::FModeRecord> @ 147caebd0

/* WARNING: Removing unreachable block (ram,0x000147caec9c) */

TTuple<FName,FGPUSkinCacheVisualizationData::FModeRecord> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FGPUSkinCacheVisualizationData::FModeRecord>_TTuple<FName,FGPUSkinCacheVisualizationData::FModeRecord>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FGPUSkinCacheVisualizationData::FModeRecord> *__return_storage_ptr__)

{
  uint uVar1;
  FText local_30;
  FText local_20;
  undefined8 local_10;
  
  local_10 = 0;
  local_30.TextData.Reference = (ITextData *)0x0;
  local_30.Flags = 0;
  local_30._12_4_ = 0;
  local_20.TextData.Reference = (ITextData *)0x0;
  local_20.Flags = 0;
  local_20._12_4_ = 0;
  FText::FText(&local_30);
  FText::FText(&local_20);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  FText::FText((FText *)&__return_storage_ptr__->field_0x20,&local_30);
  FText::FText((FText *)&__return_storage_ptr__->field_0x30,&local_20);
  __return_storage_ptr__->field_0x40 = (undefined1)local_10;
  if (local_20.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
  }
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// operator<FName,FGroomVisualizationData::FModeRecord>_TTuple<FName,FGroomVisualizationData::FModeRecord> @ 147caecc0

TTuple<FName,FGroomVisualizationData::FModeRecord> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FGroomVisualizationData::FModeRecord>_TTuple<FName,FGroomVisualizationData::FModeRecord>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FGroomVisualizationData::FModeRecord> *__return_storage_ptr__)

{
  uint uVar1;
  FModeRecord local_48;
  
  local_48.Mode = None;
  local_48.DefaultComposited = false;
  local_48._58_6_ = 0;
  local_48.ModeString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ModeString.Data.ArrayNum = 0;
  local_48.ModeString.Data.ArrayMax = 0;
  local_48.ModeText.TextData.Reference = (ITextData *)0x0;
  local_48.ModeText.Flags = 0;
  local_48.ModeText._12_4_ = 0;
  local_48.ModeName.ComparisonIndex.Value = 0;
  local_48.ModeName.Number = 0;
  local_48.ModeDesc.TextData.Reference = (ITextData *)0x0;
  local_48.ModeDesc.Flags = 0;
  local_48.ModeDesc._12_4_ = 0;
  FText::FText(&local_48.ModeText);
  FText::FText(&local_48.ModeDesc);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FGroomVisualizationData::FModeRecord::FModeRecord
            ((FModeRecord *)&__return_storage_ptr__->field_0x8,&local_48);
  if (local_48.ModeDesc.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.ModeDesc.TextData.Reference + 0x10))();
  }
  if (local_48.ModeText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.ModeText.TextData.Reference + 0x10))();
  }
  if (local_48.ModeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.ModeString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FGuid,FLightComponentMapBuildData>_TTuple<FGuid,FLightComponentMapBuildData> @ 147e905c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FGuid,FLightComponentMapBuildData> * __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,FLightComponentMapBuildData>_TTuple<FGuid,FLightComponentMapBuildData>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,FLightComponentMapBuildData> *__return_storage_ptr__)

{
  FGuid *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_e8 [32];
  FLightComponentMapBuildData local_c8;
  ulonglong local_18;
  
  local_c8.DepthMap.WorldToLight.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  local_c8.DepthMap.WorldToLight.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar1 = this->Key;
  local_c8.DepthMap.WorldToLight.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  local_c8.DepthMap.WorldToLight.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  local_c8.DepthMap.WorldToLight.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  local_c8.DepthMap.WorldToLight.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  local_c8.DepthMap.WorldToLight.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  local_c8.DepthMap.WorldToLight.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  local_c8.DepthMap.WorldToLight.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  local_c8.DepthMap.WorldToLight.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  local_c8.DepthMap.WorldToLight.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  local_c8.DepthMap.WorldToLight.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  local_c8.ShadowMapChannel = -1;
  local_c8.DepthMap.WorldToLight.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  local_c8.DepthMap.WorldToLight.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  uVar2 = pFVar1->B;
  uVar3 = pFVar1->C;
  uVar4 = pFVar1->D;
  local_c8.DepthMap.ShadowMapSizeX = 0;
  local_c8.DepthMap.ShadowMapSizeY = 0;
  local_c8.DepthMap.WorldToLight.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  local_c8.DepthMap.WorldToLight.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
  local_c8.DepthMap.DepthSamples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.DepthMap.DepthSamples.ArrayNum = 0;
  local_c8.DepthMap.DepthSamples.ArrayMax = 0;
  FLightComponentMapBuildData::FLightComponentMapBuildData
            ((FLightComponentMapBuildData *)&__return_storage_ptr__->field_0x10,&local_c8);
  FLightComponentMapBuildData::~FLightComponentMapBuildData(&local_c8);
  return __return_storage_ptr__;
}

// operator<FName,FLumenVisualizationData::FModeRecord>_TTuple<FName,FLumenVisualizationData::FModeRecord> @ 147e90720

TTuple<FName,FLumenVisualizationData::FModeRecord> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FLumenVisualizationData::FModeRecord>_TTuple<FName,FLumenVisualizationData::FModeRecord>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FLumenVisualizationData::FModeRecord> *__return_storage_ptr__)

{
  uint uVar1;
  FModeRecord local_58;
  
  local_58.ModeString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ModeString.Data.ArrayNum = 0;
  local_58.ModeString.Data.ArrayMax = 0;
  local_58.ModeName.ComparisonIndex.Value = 0;
  local_58.ModeName.Number = 0;
  local_58.ModeText.TextData.Reference = (ITextData *)0x0;
  local_58.ModeText.Flags = 0;
  local_58.ModeText._12_4_ = 0;
  local_58.ModeDesc.TextData.Reference = (ITextData *)0x0;
  local_58.ModeDesc.Flags = 0;
  local_58.ModeDesc._12_4_ = 0;
  local_58.ModeType = Overview;
  local_58._57_3_ = 0;
  local_58.ModeID = 0;
  local_58.DefaultComposited = false;
  local_58._65_7_ = 0;
  FText::FText(&local_58.ModeText);
  FText::FText(&local_58.ModeDesc);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FLumenVisualizationData::FModeRecord::FModeRecord
            ((FModeRecord *)&__return_storage_ptr__->field_0x8,&local_58);
  if (local_58.ModeDesc.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeDesc.TextData.Reference + 0x10))();
  }
  if (local_58.ModeText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeText.TextData.Reference + 0x10))();
  }
  if (local_58.ModeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ModeString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>_TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue> @ 147f924e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue> * __thiscall
TKeyInitializer<FUniformParameterOverrides::FNumericParameterKey_const_&>::
operator<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>_TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>
          (TKeyInitializer<FUniformParameterOverrides::FNumericParameterKey_const_&> *this,
          TTuple<FUniformParameterOverrides::FNumericParameterKey,UE::Shader::FValue>
          *__return_storage_ptr__)

{
  FNumericParameterKey *pFVar1;
  undefined8 uVar2;
  FNameEntryId FVar3;
  undefined1 auStack_d8 [32];
  FValue local_b8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pFVar1 = this->Key;
  local_b8.Type._17_7_ = 0;
  local_b8.Component.AllocatorInstance.InlineData[0] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[1] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[2] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[3] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[4] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[5] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[6] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[7] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[8] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[9] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[10] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0xb] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0xc] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0xd] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0xe] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0xf] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x10] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x11] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x12] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x13] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x14] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x15] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x16] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x17] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x18] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x19] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x1a] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x1b] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x1c] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x1d] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x1e] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x1f] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x20] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x21] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x22] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x23] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x24] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x25] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x26] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x27] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x28] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x29] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x2a] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x2b] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x2c] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x2d] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x2e] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x2f] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x30] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x31] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x32] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x33] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x34] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x35] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x36] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x37] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x38] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x39] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x3a] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x3b] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x3c] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x3d] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x3e] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x3f] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x40] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x41] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x42] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x43] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x44] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x45] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x46] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x47] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x48] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x79] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x7a] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x7b] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x7c] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x49] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x4a] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x4b] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x4c] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x4d] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x4e] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x4f] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x50] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x51] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x52] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x53] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x54] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x55] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x56] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x57] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x58] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x7d] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x7e] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x59] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x5a] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x5b] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x5c] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x5d] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x5e] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x5f] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x60] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x61] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x62] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[99] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[100] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x65] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x66] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x67] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x68] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x7f] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x69] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x6a] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x6b] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x6c] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x6d] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x6e] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x6f] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x70] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x71] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x72] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x73] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x74] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x75] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x76] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x77] = '\0';
  local_b8.Component.AllocatorInstance.InlineData[0x78] = '\0';
  local_b8.Type.StructType = (FStructType *)0x0;
  FVar3.Value = (pFVar1->ParameterInfo).Name.DisplayIndex.Value;
  uVar2 = *(undefined8 *)&(pFVar1->ParameterInfo).Name.Number;
  local_b8.Type.ObjectType.ComparisonIndex.Value = 0;
  local_b8.Type.ObjectType.Number = 0;
  local_b8.Type.ValueType = Void;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->ParameterInfo).Name.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar3.Value;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = uVar2;
  local_b8.Component.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Shader::FValueComponent>)0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 =
       *(undefined8 *)&(pFVar1->ParameterInfo).Association;
  local_b8.Component.ArrayNum = 0;
  local_b8.Component.ArrayMax = 0x10;
  UE::Shader::FValue::FValue((FValue *)&__return_storage_ptr__->field_0x18,&local_b8);
  if (local_b8.Component.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::Shader::FValueComponent>)0x0) {
    FMemory::Free((void *)local_b8.Component.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_> @ 147f925b0

TTuple<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_> *
__thiscall
TKeyInitializer<FPlaneKey_&&>::
operator<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<FPlaneKey_&&> *this,
          TTuple<FPlaneKey,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  FPlaneKey *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar1 = this->Key;
  iVar2 = pFVar1->Y;
  iVar3 = pFVar1->Z;
  iVar4 = pFVar1->W;
  *(int *)&__return_storage_ptr__->field_0x0 = pFVar1->X;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar2;
  *(int *)&__return_storage_ptr__->field_0x8 = iVar3;
  *(int *)&__return_storage_ptr__->field_0xc = iVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uStack_40;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_30;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uStack_20;
  if (*(void **)&__return_storage_ptr__->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x50);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 0x10;
  return __return_storage_ptr__;
}

// operator<FName,FNaniteVisualizationData::FModeRecord>_TTuple<FName,FNaniteVisualizationData::FModeRecord> @ 147f92630

TTuple<FName,FNaniteVisualizationData::FModeRecord> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FNaniteVisualizationData::FModeRecord>_TTuple<FName,FNaniteVisualizationData::FModeRecord>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FNaniteVisualizationData::FModeRecord> *__return_storage_ptr__)

{
  uint uVar1;
  FModeRecord local_68;
  
  local_68.ModeString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.ModeString.Data.ArrayNum = 0;
  local_68.ModeString.Data.ArrayMax = 0;
  local_68.ModeText.TextData.Reference = (ITextData *)0x0;
  local_68.ModeText.Flags = 0;
  local_68.ModeText._12_4_ = 0;
  local_68.ModeName.ComparisonIndex.Value = 0;
  local_68.ModeName.Number = 0;
  local_68.ModeDesc.TextData.Reference = (ITextData *)0x0;
  local_68.ModeDesc.Flags = 0;
  local_68.ModeDesc._12_4_ = 0;
  local_68.ModeType = Overview;
  local_68._57_3_ = 0;
  local_68.ModeID = 0;
  local_68.DefaultComposited = false;
  local_68.bDrawLegend = false;
  local_68._66_6_ = 0;
  local_68.LegendEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.LegendEntries.ArrayNum = 0;
  local_68.LegendEntries.ArrayMax = 0;
  FText::FText(&local_68.ModeText);
  FText::FText(&local_68.ModeDesc);
  local_68.LegendEntries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.LegendEntries.ArrayNum = 0;
  local_68.LegendEntries.ArrayMax = 0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FNaniteVisualizationData::FModeRecord::FModeRecord
            ((FModeRecord *)&__return_storage_ptr__->field_0x8,&local_68);
  DestructItems<FVisualizationDataLegendEntry,int>
            ((FVisualizationDataLegendEntry *)local_68.LegendEntries.AllocatorInstance.Data,
             local_68.LegendEntries.ArrayNum);
  if ((FVisualizationDataLegendEntry *)local_68.LegendEntries.AllocatorInstance.Data !=
      (FVisualizationDataLegendEntry *)0x0) {
    FMemory::Free(local_68.LegendEntries.AllocatorInstance.Data);
  }
  if (local_68.ModeDesc.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.ModeDesc.TextData.Reference + 0x10))();
  }
  if (local_68.ModeText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.ModeText.TextData.Reference + 0x10))();
  }
  if (local_68.ModeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.ModeString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_> @ 147f92710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
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
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  Move<TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
            ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)local_68);
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

// operator<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> @ 147f92860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FString_const_&>::
operator<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>_TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
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
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x10,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>_TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_> @ 148009040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>
* __thiscall
TKeyInitializer<FObjectKey_&&>::
operator<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>_TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>
          (TKeyInitializer<FObjectKey_&&> *this,
          TTuple<FObjectKey,TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>_>
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
  iVar1 = this->Key->ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x0 = this->Key->ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar1;
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
  ::
  TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
            ((TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
              *)&__return_storage_ptr__->field_0x8,
             (TMap<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TWeakObjectPtr<UObject,FWeakObjectPtr>,0>_>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_> @ 148009160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>
* __thiscall
TKeyInitializer<TObjectKey<UNetConnection>_&&>::
operator<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>_TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>
          (TKeyInitializer<TObjectKey<UNetConnection>_&&> *this,
          TTuple<TObjectKey<UNetConnection>,TMap<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>_>_>
          *__return_storage_ptr__)

{
  FObjectKey FVar1;
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
  FVar1 = this->Key->ObjectKey;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_> @ 148009340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_> *
__thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>_TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>_>
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
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>::
  TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator>
            ((TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<TSharedPtr<FNetworkObjectInfo,1>,FNetworkObjectKeyFuncs,FDefaultSetAllocator> *)
             local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TSharedPtr<FNetworkObjectInfo,1>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_> @ 148009470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_> *
__thiscall
TKeyInitializer<FNetworkGUID_const_&>::
operator<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>_TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FNetworkGUID_const_&> *this,
          TTuple<FNetworkGUID,TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>_>
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
  *(FNetworkGUID_u_0 *)__return_storage_ptr__ = this->Key->field0_0x0;
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::
  TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>
            ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)local_68);
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

// operator<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_TTuple<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_> @ 148077810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<IPrimitiveComponent_*_const_&>::
operator<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_TTuple<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<IPrimitiveComponent_*_const_&> *this,
          TTuple<IPrimitiveComponent_*,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>
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
  *(IPrimitiveComponent **)__return_storage_ptr__ = *this->Key;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
            ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
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

// operator<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_> @ 148077930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&>::
operator<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>_TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>_const_&> *this
          ,TTuple<TWeakObjectPtr<UNetworkMetricsBaseListener,FWeakObjectPtr>,TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>_>
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
  FVar1 = this->Key->WeakPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,enum_UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
            (&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,DefaultKeyFuncs<TTuple<FName,UNetworkMetricsDatabase::EMetricType>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_> @ 148077a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<TObjectKey<UMaterialInterface>_&&>::
operator<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<TObjectKey<UMaterialInterface>_&&> *this,
          TTuple<TObjectKey<UMaterialInterface>,TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FObjectKey FVar1;
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
  FVar1 = this->Key->ObjectKey;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>::
  TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator>
            ((TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<UTexture_*,DefaultKeyFuncs<UTexture_*,0>,FDefaultSetAllocator> *)local_68);
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

// operator<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_> @ 148077b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<TObjectKey<UMaterialInterface>_&&>::
operator<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<TObjectKey<UMaterialInterface>_&&> *this,
          TTuple<TObjectKey<UMaterialInterface>,TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FObjectKey FVar1;
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
  FVar1 = this->Key->ObjectKey;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>::
  TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
            ((TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<UTextureCollection_*,DefaultKeyFuncs<UTextureCollection_*,0>,FDefaultSetAllocator>
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

// operator<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_> @ 148077c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<TObjectKey<USkinnedAsset>_&&>::
operator<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<TObjectKey<USkinnedAsset>_&&> *this,
          TTuple<TObjectKey<USkinnedAsset>,TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FObjectKey FVar1;
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
  FVar1 = this->Key->ObjectKey;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>::
  TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
            ((TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<USkinnedMeshComponent_*,DefaultKeyFuncs<USkinnedMeshComponent_*,0>,FDefaultSetAllocator>
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

// operator<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_> @ 148077db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<TObjectKey<UStaticMesh>_&&>::
operator<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<TObjectKey<UStaticMesh>_&&> *this,
          TTuple<TObjectKey<UStaticMesh>,TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FObjectKey FVar1;
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
  FVar1 = this->Key->ObjectKey;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>::
  TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
            ((TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<IStaticMeshComponent_*,DefaultKeyFuncs<IStaticMeshComponent_*,0>,FDefaultSetAllocator>
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

// operator<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_> @ 148077ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<TObjectKey<UTexture>_&&>::
operator<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<TObjectKey<UTexture>_&&> *this,
          TTuple<TObjectKey<UTexture>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FObjectKey FVar1;
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
  FVar1 = this->Key->ObjectKey;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
            ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
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

// operator<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_> @ 148077ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<TObjectKey<UTextureCollection>_&&>::
operator<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<TObjectKey<UTextureCollection>_&&> *this,
          TTuple<TObjectKey<UTextureCollection>,TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FObjectKey FVar1;
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
  FVar1 = this->Key->ObjectKey;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>::
  TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
            ((TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<UMaterialInterface_*,DefaultKeyFuncs<UMaterialInterface_*,0>,FDefaultSetAllocator>
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

// operator<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_> @ 148078110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<TObjectKey<UTransformProviderData>_&&>::
operator<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>_TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<TObjectKey<UTransformProviderData>_&&> *this,
          TTuple<TObjectKey<UTransformProviderData>,TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FObjectKey FVar1;
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
  FVar1 = this->Key->ObjectKey;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
  ::
  TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
            ((TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<UInstancedSkinnedMeshComponent_*,DefaultKeyFuncs<UInstancedSkinnedMeshComponent_*,0>,FDefaultSetAllocator>
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

// operator<FName,FODSCThread::FODSCShaderMapData>_TTuple<FName,FODSCThread::FODSCShaderMapData> @ 148078230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FODSCThread::FODSCShaderMapData> * __thiscall
TKeyInitializer<FName_&&>::
operator<FName,FODSCThread::FODSCShaderMapData>_TTuple<FName,FODSCThread::FODSCShaderMapData>
          (TKeyInitializer<FName_&&> *this,
          TTuple<FName,FODSCThread::FODSCShaderMapData> *__return_storage_ptr__)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [16];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  ulonglong local_30;
  FName local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_68.MaxBits = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_40.InlineData[0] = '\0';
  local_40.InlineData[1] = '\0';
  local_40.InlineData[2] = '\0';
  local_40.InlineData[3] = '\0';
  local_40._padding_ = 0;
  local_30 = 0;
  local_68.AllocatorInstance.InlineData[0] = '\0';
  local_68.AllocatorInstance.InlineData[1] = '\0';
  local_68.AllocatorInstance.InlineData[2] = '\0';
  local_68.AllocatorInstance.InlineData[3] = '\0';
  local_68.AllocatorInstance.InlineData[4] = '\0';
  local_68.AllocatorInstance.InlineData[5] = '\0';
  local_68.AllocatorInstance.InlineData[6] = '\0';
  local_68.AllocatorInstance.InlineData[7] = '\0';
  local_68.AllocatorInstance.InlineData[8] = '\0';
  local_68.AllocatorInstance.InlineData[9] = '\0';
  local_68.AllocatorInstance.InlineData[10] = '\0';
  local_68.AllocatorInstance.InlineData[0xb] = '\0';
  local_68.AllocatorInstance.InlineData[0xc] = '\0';
  local_68.AllocatorInstance.InlineData[0xd] = '\0';
  local_68.AllocatorInstance.InlineData[0xe] = '\0';
  local_68.AllocatorInstance.InlineData[0xf] = '\0';
  local_88._8_4_ = 0;
  local_88._12_4_ = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FODSCThread::FODSCShaderMapData::FODSCShaderMapData
            ((FODSCShaderMapData *)&__return_storage_ptr__->field_0x8,(FODSCShaderMapData *)local_88
            );
  local_30 = local_30 & 0xffffffff00000000;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  DestructItems<TRefCountPtr<FMaterialShaderMap>,int>
            ((TRefCountPtr<FMaterialShaderMap> *)local_88._0_8_,local_88._8_4_);
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,FODSCThread::FODSCShaderMapData>_TTuple<FName,FODSCThread::FODSCShaderMapData> @ 148078380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FODSCThread::FODSCShaderMapData> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FODSCThread::FODSCShaderMapData>_TTuple<FName,FODSCThread::FODSCShaderMapData>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FODSCThread::FODSCShaderMapData> *__return_storage_ptr__)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [16];
  ForAnyElementType local_78;
  undefined8 local_70;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  ulonglong local_30;
  FName local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_68.MaxBits = 0x80;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_40.InlineData[0] = '\0';
  local_40.InlineData[1] = '\0';
  local_40.InlineData[2] = '\0';
  local_40.InlineData[3] = '\0';
  local_40._padding_ = 0;
  local_30 = 0;
  local_68.AllocatorInstance.InlineData[0] = '\0';
  local_68.AllocatorInstance.InlineData[1] = '\0';
  local_68.AllocatorInstance.InlineData[2] = '\0';
  local_68.AllocatorInstance.InlineData[3] = '\0';
  local_68.AllocatorInstance.InlineData[4] = '\0';
  local_68.AllocatorInstance.InlineData[5] = '\0';
  local_68.AllocatorInstance.InlineData[6] = '\0';
  local_68.AllocatorInstance.InlineData[7] = '\0';
  local_68.AllocatorInstance.InlineData[8] = '\0';
  local_68.AllocatorInstance.InlineData[9] = '\0';
  local_68.AllocatorInstance.InlineData[10] = '\0';
  local_68.AllocatorInstance.InlineData[0xb] = '\0';
  local_68.AllocatorInstance.InlineData[0xc] = '\0';
  local_68.AllocatorInstance.InlineData[0xd] = '\0';
  local_68.AllocatorInstance.InlineData[0xe] = '\0';
  local_68.AllocatorInstance.InlineData[0xf] = '\0';
  local_88._8_4_ = 0;
  local_88._12_4_ = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  local_68.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_68.NumBits = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FODSCThread::FODSCShaderMapData::FODSCShaderMapData
            ((FODSCShaderMapData *)&__return_storage_ptr__->field_0x8,(FODSCShaderMapData *)local_88
            );
  local_30 = local_30 & 0xffffffff00000000;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  uVar2 = local_70 >> 0x20;
  local_70 = local_70 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&local_78,0,(int *)((longlong)&local_70 + 4));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_68.NumBits = 0;
  if (0x80 < (uint)local_68.MaxBits) {
    local_68.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
  }
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  DestructItems<TRefCountPtr<FMaterialShaderMap>,int>
            ((TRefCountPtr<FMaterialShaderMap> *)local_88._0_8_,local_88._8_4_);
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>_TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_> @ 1482304a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&>::
operator<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>_TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*_const_&> *this,
          TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>_>
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
  *(TGeometryParticleHandleImp<double,3,1> **)__return_storage_ptr__ = *this->Key;
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
            ((TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*,0>,FDefaultSetAllocator>
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

// operator<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>_TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_> @ 1482305c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>
* __thiscall
TKeyInitializer<UClusterUnionComponent::FMappedComponentKey_const_&>::
operator<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>_TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>
          (TKeyInitializer<UClusterUnionComponent::FMappedComponentKey_const_&> *this,
          TTuple<UClusterUnionComponent::FMappedComponentKey,TSortedMap<int,UClusterUnionComponent::FMappedBoneData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>,TLess<int_const_>_>_>
          *__return_storage_ptr__)

{
  FObjectKey FVar1;
  UPrimitiveComponent *pUVar2;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  memset(&local_b8,0,0xb0);
  FVar1 = (this->Key->ComponentKey).ObjectKey;
  pUVar2 = this->Key->ComponentPtr;
  *(int *)&__return_storage_ptr__->field_0x0 = FVar1.ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = FVar1.ObjectSerialNumber;
  *(UPrimitiveComponent **)&__return_storage_ptr__->field_0x8 = pUVar2;
  *(undefined8 *)&__return_storage_ptr__->field_0xa0 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_b8;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_b0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = local_a8;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uStack_a0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_98;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_90;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = local_88;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uStack_80;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = local_78;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = uStack_70;
  *(undefined8 *)&__return_storage_ptr__->field_0x60 = local_68;
  *(undefined8 *)&__return_storage_ptr__->field_0x68 = uStack_60;
  *(undefined8 *)&__return_storage_ptr__->field_0x70 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x78 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x80 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x88 = uStack_40;
  *(undefined8 *)&__return_storage_ptr__->field_0x90 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x98 = uStack_30;
  if (*(void **)&__return_storage_ptr__->field_0xa0 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0xa0);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0xa0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xb0 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0xb4 = 1;
  return __return_storage_ptr__;
}

// operator<FBodyInstance_*,FPhysTarget>_TTuple<FBodyInstance_*,FPhysTarget> @ 1482cfe60

TTuple<FBodyInstance_*,FPhysTarget> * __thiscall
TKeyInitializer<FBodyInstance_*_const_&>::
operator<FBodyInstance_*,FPhysTarget>_TTuple<FBodyInstance_*,FPhysTarget>
          (TKeyInitializer<FBodyInstance_*_const_&> *this,
          TTuple<FBodyInstance_*,FPhysTarget> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FPhysTarget local_138;
  
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[0];
  uVar4 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  uVar5 = (undefined4)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_138.Forces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Forces.ArrayNum = 0;
  local_138.Forces.ArrayMax = 0;
  local_138.Torques.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Torques.ArrayNum = 0;
  local_138.Torques.ArrayMax = 0;
  local_138.RadialForces.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.KinematicTarget.TargetTM.Rotation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_138.KinematicTarget.TargetTM.Rotation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_138.RadialForces.ArrayNum = 0;
  local_138.RadialForces.ArrayMax = 0;
  local_138.CustomPhysics.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.CustomPhysics.ArrayNum = 0;
  local_138.CustomPhysics.ArrayMax = 0;
  local_138.KinematicTarget.BodyInstance = (FBodyInstance *)0x0;
  local_138.bKinematicTarget = false;
  local_138.KinematicTarget.TargetTM.Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_138.KinematicTarget.TargetTM.Translation.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_138.KinematicTarget.TargetTM.Translation.ZW.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_138.KinematicTarget.TargetTM.Translation.ZW.m128d_f64[1] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  local_138.KinematicTarget.TargetTM.Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_138.KinematicTarget.TargetTM.Scale3D.XY.m128d_f64[1] =
       (double)GlobalVectorConstants::Float1110.m128_f32[1];
  *(FBodyInstance **)__return_storage_ptr__ = *this->Key;
  local_138.KinematicTarget.TargetTM.Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  local_138.KinematicTarget.TargetTM.Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  local_138.KinematicTarget.TargetTM.Rotation.XY.m128d_f64[1]._0_4_ = uVar4;
  local_138.KinematicTarget.TargetTM.Rotation.XY.m128d_f64[0] = (double)fVar1;
  local_138.KinematicTarget.TargetTM.Rotation.XY.m128d_f64[1]._4_4_ = uVar5;
  local_138.KinematicTarget.OriginalTM.Rotation.XY.m128d_f64[1]._0_4_ = uVar4;
  local_138.KinematicTarget.OriginalTM.Rotation.XY.m128d_f64[0] = (double)fVar1;
  local_138.KinematicTarget.OriginalTM.Rotation.XY.m128d_f64[1]._4_4_ = uVar5;
  local_138.KinematicTarget.OriginalTM.Rotation.ZW.m128d_f64[0] =
       local_138.KinematicTarget.TargetTM.Rotation.ZW.m128d_f64[0];
  local_138.KinematicTarget.OriginalTM.Rotation.ZW.m128d_f64[1] =
       local_138.KinematicTarget.TargetTM.Rotation.ZW.m128d_f64[1];
  local_138.KinematicTarget.OriginalTM.Translation.XY.m128d_f64[0] =
       local_138.KinematicTarget.TargetTM.Translation.XY.m128d_f64[0];
  local_138.KinematicTarget.OriginalTM.Translation.XY.m128d_f64[1] =
       local_138.KinematicTarget.TargetTM.Translation.XY.m128d_f64[1];
  local_138.KinematicTarget.OriginalTM.Translation.ZW.m128d_f64[0] =
       local_138.KinematicTarget.TargetTM.Translation.ZW.m128d_f64[0];
  local_138.KinematicTarget.OriginalTM.Translation.ZW.m128d_f64[1] =
       local_138.KinematicTarget.TargetTM.Translation.ZW.m128d_f64[1];
  local_138.KinematicTarget.OriginalTM.Scale3D.XY.m128d_f64[0] =
       local_138.KinematicTarget.TargetTM.Scale3D.XY.m128d_f64[0];
  local_138.KinematicTarget.OriginalTM.Scale3D.XY.m128d_f64[1] =
       local_138.KinematicTarget.TargetTM.Scale3D.XY.m128d_f64[1];
  local_138.KinematicTarget.OriginalTM.Scale3D.ZW.m128d_f64[0] =
       local_138.KinematicTarget.TargetTM.Scale3D.ZW.m128d_f64[0];
  local_138.KinematicTarget.OriginalTM.Scale3D.ZW.m128d_f64[1] =
       local_138.KinematicTarget.TargetTM.Scale3D.ZW.m128d_f64[1];
  FPhysTarget::FPhysTarget((FPhysTarget *)&__return_storage_ptr__->field_0x10,&local_138);
  if (local_138.CustomPhysics.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.CustomPhysics.AllocatorInstance.Data);
  }
  if (local_138.RadialForces.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.RadialForces.AllocatorInstance.Data);
  }
  if (local_138.Torques.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Torques.AllocatorInstance.Data);
  }
  if (local_138.Forces.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Forces.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_> @ 1483d06c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<UStreamableRenderAsset_*_&&>::
operator<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<UStreamableRenderAsset_*_&&> *this,
          TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>
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
  *(UStreamableRenderAsset **)__return_storage_ptr__ = *this->Key;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
            ((TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
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

// operator<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_> @ 1483d07e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<UStreamableRenderAsset_*_const_&>::
operator<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>_TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<UStreamableRenderAsset_*_const_&> *this,
          TTuple<UStreamableRenderAsset_*,TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>_>
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
  *(UStreamableRenderAsset **)__return_storage_ptr__ = *this->Key;
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
  ::
  TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
            ((TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<UPrimitiveComponent_const_*,DefaultKeyFuncs<UPrimitiveComponent_const_*,0>,FDefaultSetAllocator>
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

// operator<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> @ 1483d0900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>_TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FGuid *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
  uVar3 = pFVar1->B;
  uVar4 = pFVar1->C;
  uVar5 = pFVar1->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>
            ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x10,
             (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FName,FRayTracingVisualizationData::FModeRecord>_TTuple<FName,FRayTracingVisualizationData::FModeRecord> @ 1483d0b70

TTuple<FName,FRayTracingVisualizationData::FModeRecord> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FRayTracingVisualizationData::FModeRecord>_TTuple<FName,FRayTracingVisualizationData::FModeRecord>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FRayTracingVisualizationData::FModeRecord> *__return_storage_ptr__)

{
  uint uVar1;
  FModeRecord local_58;
  
  local_58.ModeString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ModeString.Data.ArrayNum = 0;
  local_58.ModeString.Data.ArrayMax = 0;
  local_58.ModeName.ComparisonIndex.Value = 0;
  local_58.ModeName.Number = 0;
  local_58.ModeText.TextData.Reference = (ITextData *)0x0;
  local_58.ModeText.Flags = 0;
  local_58.ModeText._12_4_ = 0;
  local_58.ModeDesc.TextData.Reference = (ITextData *)0x0;
  local_58.ModeDesc.Flags = 0;
  local_58.ModeDesc._12_4_ = 0;
  local_58.ModeType = Overview;
  local_58._57_3_ = 0;
  local_58.ModeID = 0;
  local_58.bTonemapped = false;
  local_58.bHiddenInEditor = false;
  local_58._66_6_ = 0;
  FText::FText(&local_58.ModeText);
  FText::FText(&local_58.ModeDesc);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FRayTracingVisualizationData::FModeRecord::FModeRecord
            ((FModeRecord *)&__return_storage_ptr__->field_0x8,&local_58);
  if (local_58.ModeDesc.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeDesc.TextData.Reference + 0x10))();
  }
  if (local_58.ModeText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeText.TextData.Reference + 0x10))();
  }
  if (local_58.ModeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ModeString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_> @ 1484a61c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>
* __thiscall
TKeyInitializer<int_&&>::
operator<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>_TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>
          (TKeyInitializer<int_&&> *this,
          TTuple<int,TMap<int,FGuidReferences,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>_>_>
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
  *(int *)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
            ((TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<int,FGuidReferences>,TDefaultMapHashableKeyFuncs<int,FGuidReferences,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,FGuidReferences>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe0,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<int,FShaderMapCompileResults>_TTuple<int,FShaderMapCompileResults> @ 148505820

TTuple<int,FShaderMapCompileResults> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,FShaderMapCompileResults>_TTuple<int,FShaderMapCompileResults>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,FShaderMapCompileResults> *__return_storage_ptr__)

{
  double dVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  dVar1 = (double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  *(int *)__return_storage_ptr__ = *this->Key;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x18 = 0;
  dVar1 = dVar1 + __real_4170000000000000;
  *(undefined2 *)&__return_storage_ptr__->field_0x1c = 1;
  __return_storage_ptr__->field_0x28 = 0;
  *(double *)&__return_storage_ptr__->field_0x20 = dVar1;
  DestructItems<TRefCountPtr<FShaderCommonCompileJob>,int>
            ((TRefCountPtr<FShaderCommonCompileJob> *)0x0,0);
  return __return_storage_ptr__;
}

// operator<FName,FSubstrateVisualizationData::FModeRecord>_TTuple<FName,FSubstrateVisualizationData::FModeRecord> @ 1487f1e30

TTuple<FName,FSubstrateVisualizationData::FModeRecord> * __thiscall
TKeyInitializer<FName_&>::
operator<FName,FSubstrateVisualizationData::FModeRecord>_TTuple<FName,FSubstrateVisualizationData::FModeRecord>
          (TKeyInitializer<FName_&> *this,
          TTuple<FName,FSubstrateVisualizationData::FModeRecord> *__return_storage_ptr__)

{
  uint uVar1;
  FModeRecord local_58;
  
  local_58.UnavailableReason.Flags = 0;
  local_58.UnavailableReason._12_4_ = 0;
  local_58.ModeString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ModeString.Data.ArrayNum = 0;
  local_58.ModeString.Data.ArrayMax = 0;
  local_58.ModeText.TextData.Reference = (ITextData *)0x0;
  local_58.ModeText.Flags = 0;
  local_58.ModeText._12_4_ = 0;
  local_58.ModeName.ComparisonIndex.Value = 0;
  local_58.ModeName.Number = 0;
  local_58.ModeDesc.TextData.Reference = (ITextData *)0x0;
  local_58.ModeDesc.Flags = 0;
  local_58.ModeDesc._12_4_ = 0;
  local_58.ViewMode = None;
  local_58.bDefaultComposited = false;
  local_58.bAvailableCommand = false;
  local_58._59_5_ = 0;
  local_58.UnavailableReason.TextData.Reference = (ITextData *)0x0;
  FText::FText(&local_58.ModeText);
  FText::FText(&local_58.ModeDesc);
  FText::FText(&local_58.UnavailableReason);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FSubstrateVisualizationData::FModeRecord::FModeRecord
            ((FModeRecord *)&__return_storage_ptr__->field_0x8,&local_58);
  if (local_58.UnavailableReason.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.UnavailableReason.TextData.Reference + 0x10))();
  }
  if (local_58.ModeDesc.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeDesc.TextData.Reference + 0x10))();
  }
  if (local_58.ModeText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeText.TextData.Reference + 0x10))();
  }
  if (local_58.ModeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ModeString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<FName,FSubstrateVisualizationData::FModeRecord>_TTuple<FName,FSubstrateVisualizationData::FModeRecord> @ 1487f1f00

TTuple<FName,FSubstrateVisualizationData::FModeRecord> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FSubstrateVisualizationData::FModeRecord>_TTuple<FName,FSubstrateVisualizationData::FModeRecord>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FSubstrateVisualizationData::FModeRecord> *__return_storage_ptr__)

{
  uint uVar1;
  FModeRecord local_58;
  
  local_58.UnavailableReason.Flags = 0;
  local_58.UnavailableReason._12_4_ = 0;
  local_58.ModeString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ModeString.Data.ArrayNum = 0;
  local_58.ModeString.Data.ArrayMax = 0;
  local_58.ModeText.TextData.Reference = (ITextData *)0x0;
  local_58.ModeText.Flags = 0;
  local_58.ModeText._12_4_ = 0;
  local_58.ModeName.ComparisonIndex.Value = 0;
  local_58.ModeName.Number = 0;
  local_58.ModeDesc.TextData.Reference = (ITextData *)0x0;
  local_58.ModeDesc.Flags = 0;
  local_58.ModeDesc._12_4_ = 0;
  local_58.ViewMode = None;
  local_58.bDefaultComposited = false;
  local_58.bAvailableCommand = false;
  local_58._59_5_ = 0;
  local_58.UnavailableReason.TextData.Reference = (ITextData *)0x0;
  FText::FText(&local_58.ModeText);
  FText::FText(&local_58.ModeDesc);
  FText::FText(&local_58.UnavailableReason);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FSubstrateVisualizationData::FModeRecord::FModeRecord
            ((FModeRecord *)&__return_storage_ptr__->field_0x8,&local_58);
  if (local_58.UnavailableReason.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.UnavailableReason.TextData.Reference + 0x10))();
  }
  if (local_58.ModeDesc.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeDesc.TextData.Reference + 0x10))();
  }
  if (local_58.ModeText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeText.TextData.Reference + 0x10))();
  }
  if (local_58.ModeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ModeString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>_TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_> @ 1488a4800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_> *
__thiscall
TKeyInitializer<void_const_*_const_&>::
operator<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>_TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<void_const_*_const_&> *this,
          TTuple<void_const_*,TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>_>
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
  *(void **)__return_storage_ptr__ = *this->Key;
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>::
  TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator>
            ((TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FTimerHandle,DefaultKeyFuncs<FTimerHandle,0>,FDefaultSetAllocator> *)local_68);
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

// operator<FKey,FKeyState>_TTuple<FKey,FKeyState> @ 1488f1640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FKey,FKeyState> * __thiscall
TKeyInitializer<FKey_const_&>::operator<FKey,FKeyState>_TTuple<FKey,FKeyState>
          (TKeyInitializer<FKey_const_&> *this,TTuple<FKey,FKeyState> *__return_storage_ptr__)

{
  double *pdVar1;
  FKey *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  uint uVar4;
  longlong lVar5;
  TVector<double>_u_0 *pTVar6;
  longlong lVar7;
  double *pdVar8;
  undefined1 auStack_138 [32];
  TVector<double>_u_0 local_118;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  byte local_e4;
  undefined1 local_e3;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_a0 [12];
  TVector<double>_u_0 local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_138;
  pFVar2 = this->Key;
  local_e4 = local_e4 & 0x80;
  local_40._s_0.X = 0.0;
  local_118._s_0.X = 0.0;
  local_118._s_0.Y = 0.0;
  local_118._s_0.Z = 0.0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_e3 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0[0] = 0.0;
  local_a0[1] = 0.0;
  local_a0[2] = 0.0;
  local_a0[3] = 0.0;
  local_a0[4] = 0.0;
  local_a0[5] = 0.0;
  local_a0[6] = 0.0;
  local_a0[7] = 0.0;
  local_a0[8] = 0.0;
  local_a0[9] = 0.0;
  local_a0[10] = 0.0;
  local_a0[0xb] = 0.0;
  local_40._s_0.Y = 0.0;
  local_40._s_0.Z = 0.0;
  uVar4 = (pFVar2->KeyName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar2->KeyName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar4;
  *(FKeyDetails **)&__return_storage_ptr__->field_0x8 = (pFVar2->KeyDetails).Object;
  pTVar3 = (pFVar2->KeyDetails).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x10 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  FKeyState::FKeyState
            ((FKeyState *)&__return_storage_ptr__->field_0x18,(FKeyState *)&local_118._s_0);
  lVar5 = 5;
  pTVar6 = &local_40;
  lVar7 = 5;
  do {
    pdVar8 = pTVar6->XYZ + -2;
    pTVar6 = (TVector<double>_u_0 *)(pTVar6->XYZ + -2);
    lVar7 = lVar7 + -1;
    if ((void *)*pdVar8 != (void *)0x0) {
      FMemory::Free((void *)*pdVar8);
    }
  } while (lVar7 != 0);
  pdVar8 = local_a0 + 2;
  do {
    pdVar1 = pdVar8 + -2;
    pdVar8 = pdVar8 + -2;
    lVar5 = lVar5 + -1;
    if ((void *)*pdVar1 != (void *)0x0) {
      FMemory::Free((void *)*pdVar1);
    }
  } while (lVar5 != 0);
  return __return_storage_ptr__;
}

// operator<FName,UPlayerInput::FActionKeyDetails>_TTuple<FName,UPlayerInput::FActionKeyDetails> @ 1488f17a0

/* WARNING: Removing unreachable block (ram,0x0001488f1874) */

TTuple<FName,UPlayerInput::FActionKeyDetails> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,UPlayerInput::FActionKeyDetails>_TTuple<FName,UPlayerInput::FActionKeyDetails>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,UPlayerInput::FActionKeyDetails> *__return_storage_ptr__)

{
  uint uVar1;
  FInputChord local_28;
  
  local_28.Key.KeyName.ComparisonIndex.Value = 0;
  local_28.Key.KeyName.Number = 0;
  local_28.Key.KeyDetails.Object = (FKeyDetails *)0x0;
  local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_28._24_8_ = 0;
  FInputChord::FInputChord(&local_28);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x14 = 0;
  *(uint *)&__return_storage_ptr__->field_0x18 = local_28.Key.KeyName.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x1c = local_28.Key.KeyName.Number;
  *(FKeyDetails **)&__return_storage_ptr__->field_0x20 = local_28.Key.KeyDetails.Object;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x28 =
       local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController;
  uVar1 = (*(uint *)&__return_storage_ptr__->field_0x30 ^ local_28.bShift) & 1 ^
          *(uint *)&__return_storage_ptr__->field_0x30;
  local_28.Key.KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_28.Key.KeyDetails.Object = (FKeyDetails *)0x0;
  uVar1 = (uVar1 ^ local_28._24_4_) & 2 ^ uVar1;
  uVar1 = (uVar1 ^ local_28._24_4_) & 4 ^ uVar1;
  *(uint *)&__return_storage_ptr__->field_0x30 = (uVar1 ^ local_28._24_4_) & 8 ^ uVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  DestructItems<FInputActionKeyMapping,int>((FInputActionKeyMapping *)0x0,0);
  return __return_storage_ptr__;
}

// operator<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_> @ 14899f0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<UWorld_const_*_const_&>::
operator<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>
          (TKeyInitializer<UWorld_const_*_const_&> *this,
          TTuple<UWorld_const_*,TMap<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>_>_>
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
  *(UWorld **)__return_storage_ptr__ = *this->Key;
  TSet<TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// operator<FObjectKey,FVisualLogEntry>_TTuple<FObjectKey,FVisualLogEntry> @ 14899f210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FObjectKey,FVisualLogEntry> * __thiscall
TKeyInitializer<FObjectKey_&&>::
operator<FObjectKey,FVisualLogEntry>_TTuple<FObjectKey,FVisualLogEntry>
          (TKeyInitializer<FObjectKey_&&> *this,
          TTuple<FObjectKey,FVisualLogEntry> *__return_storage_ptr__)

{
  int iVar1;
  ForAnyElementType FVar2;
  FVisualLogEntry local_98;
  
  local_98.Location.field0_0x0._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_98._40_8_ = 0;
  local_98.TimeStamp = ___xmm_bff0000000000000bff0000000000000;
  local_98.WorldTimeStamp = _UNK_15076c718;
  local_98.Events.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Events.ArrayNum = 0;
  local_98.Events.ArrayMax = 0;
  local_98.LogLines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.LogLines.ArrayNum = 0;
  local_98.LogLines.ArrayMax = 0;
  local_98.Status.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Status.ArrayNum = 0;
  local_98.Status.ArrayMax = 0;
  local_98.ElementsToDraw.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ElementsToDraw.ArrayNum = 0;
  local_98.ElementsToDraw.ArrayMax = 0;
  local_98.HistogramSamples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.HistogramSamples.ArrayNum = 0;
  local_98.HistogramSamples.ArrayMax = 0;
  local_98.DataBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.DataBlocks.ArrayNum = 0;
  local_98.DataBlocks.ArrayMax = 0;
  local_98.Location.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_98.Location.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  iVar1 = this->Key->ObjectSerialNumber;
  *(int *)&__return_storage_ptr__->field_0x0 = this->Key->ObjectIndex;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar1;
  FVisualLogEntry::FVisualLogEntry((FVisualLogEntry *)&__return_storage_ptr__->field_0x8,&local_98);
  FVar2.Data = local_98.DataBlocks.AllocatorInstance.Data;
  DestructItems<FVisualLogDataBlock,int>
            ((FVisualLogDataBlock *)local_98.DataBlocks.AllocatorInstance.Data,
             local_98.DataBlocks.ArrayNum);
  if ((FVisualLogDataBlock *)FVar2.Data != (FVisualLogDataBlock *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_98.HistogramSamples.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.HistogramSamples.AllocatorInstance.Data);
  }
  FVar2.Data = local_98.ElementsToDraw.AllocatorInstance.Data;
  DestructItems<FVisualLogShapeElement,int>
            ((FVisualLogShapeElement *)local_98.ElementsToDraw.AllocatorInstance.Data,
             local_98.ElementsToDraw.ArrayNum);
  if ((FVisualLogShapeElement *)FVar2.Data != (FVisualLogShapeElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_98.Status.AllocatorInstance.Data;
  DestructItems<FVisualLogStatusCategory,int>
            ((FVisualLogStatusCategory *)local_98.Status.AllocatorInstance.Data,
             local_98.Status.ArrayNum);
  if ((FVisualLogStatusCategory *)FVar2.Data != (FVisualLogStatusCategory *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_98.LogLines.AllocatorInstance.Data;
  DestructItems<FVisualLogLine,int>
            ((FVisualLogLine *)local_98.LogLines.AllocatorInstance.Data,local_98.LogLines.ArrayNum);
  if ((FVisualLogLine *)FVar2.Data != (FVisualLogLine *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_98.Events.AllocatorInstance.Data;
  DestructItems<FVisualLogEvent,int>
            ((FVisualLogEvent *)local_98.Events.AllocatorInstance.Data,local_98.Events.ArrayNum);
  if ((FVisualLogEvent *)FVar2.Data != (FVisualLogEvent *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

// operator<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_> @ 14899f360

TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>
* __thiscall
TKeyInitializer<UObject_const_*_&>::
operator<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>_TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>
          (TKeyInitializer<UObject_const_*_&> *this,
          TTuple<FObjectKey,TArray<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  UObject *pUVar1;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  
  pUVar1 = *this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  if (pUVar1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = pUVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    *(int *)__return_storage_ptr__ = local_res8.ObjectIndex;
    *(int *)&__return_storage_ptr__->field_0x4 = local_res8.ObjectSerialNumber;
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// operator<FName,FVirtualShadowMapVisualizationData::FModeRecord>_TTuple<FName,FVirtualShadowMapVisualizationData::FModeRecord> @ 14899f3f0

TTuple<FName,FVirtualShadowMapVisualizationData::FModeRecord> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FVirtualShadowMapVisualizationData::FModeRecord>_TTuple<FName,FVirtualShadowMapVisualizationData::FModeRecord>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FVirtualShadowMapVisualizationData::FModeRecord> *__return_storage_ptr__)

{
  uint uVar1;
  FModeRecord local_58;
  
  local_58.ModeString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ModeString.Data.ArrayNum = 0;
  local_58.ModeString.Data.ArrayMax = 0;
  local_58.ModeName.ComparisonIndex.Value = 0;
  local_58.ModeName.Number = 0;
  local_58.ModeText.TextData.Reference = (ITextData *)0x0;
  local_58.ModeText.Flags = 0;
  local_58.ModeText._12_4_ = 0;
  local_58.ModeDesc.TextData.Reference = (ITextData *)0x0;
  local_58.ModeDesc.Flags = 0;
  local_58.ModeDesc._12_4_ = 0;
  local_58.ModeType = Standard;
  local_58._57_3_ = 0;
  local_58.ModeID = 0;
  local_58.ViewModeIndex = VMI_BrushWireframe;
  local_58._68_4_ = 0;
  FText::FText(&local_58.ModeText);
  FText::FText(&local_58.ModeDesc);
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FVirtualShadowMapVisualizationData::FModeRecord::FModeRecord
            ((FModeRecord *)&__return_storage_ptr__->field_0x8,&local_58);
  if (local_58.ModeDesc.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeDesc.TextData.Reference + 0x10))();
  }
  if (local_58.ModeText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.ModeText.TextData.Reference + 0x10))();
  }
  if (local_58.ModeString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ModeString.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// operator<int,FFastArraySerializerGuidReferences>_TTuple<int,FFastArraySerializerGuidReferences> @ 148a2c170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,FFastArraySerializerGuidReferences> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,FFastArraySerializerGuidReferences>_TTuple<int,FFastArraySerializerGuidReferences>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,FFastArraySerializerGuidReferences> *__return_storage_ptr__)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [24];
  undefined8 uStack_c0;
  void *local_b8;
  undefined4 local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_a0;
  ulonglong local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_50;
  ulonglong local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_ac = 0x80;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_a0.InlineData[0] = '\0';
  local_a0.InlineData[1] = '\0';
  local_a0.InlineData[2] = '\0';
  local_a0.InlineData[3] = '\0';
  local_a0._padding_ = 0;
  local_90 = 0;
  local_50.InlineData[0] = '\0';
  local_50.InlineData[1] = '\0';
  local_50.InlineData[2] = '\0';
  local_50.InlineData[3] = '\0';
  local_50._padding_ = 0;
  local_40 = 0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  local_d8._16_8_ = 0;
  uStack_c0 = 0;
  local_78.AllocatorInstance.InlineData[0] = '\0';
  local_78.AllocatorInstance.InlineData[1] = '\0';
  local_78.AllocatorInstance.InlineData[2] = '\0';
  local_78.AllocatorInstance.InlineData[3] = '\0';
  local_78.AllocatorInstance.InlineData[4] = '\0';
  local_78.AllocatorInstance.InlineData[5] = '\0';
  local_78.AllocatorInstance.InlineData[6] = '\0';
  local_78.AllocatorInstance.InlineData[7] = '\0';
  local_78.AllocatorInstance.InlineData[8] = '\0';
  local_78.AllocatorInstance.InlineData[9] = '\0';
  local_78.AllocatorInstance.InlineData[10] = '\0';
  local_78.AllocatorInstance.InlineData[0xb] = '\0';
  local_78.AllocatorInstance.InlineData[0xc] = '\0';
  local_78.AllocatorInstance.InlineData[0xd] = '\0';
  local_78.AllocatorInstance.InlineData[0xe] = '\0';
  local_78.AllocatorInstance.InlineData[0xf] = '\0';
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_a0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  *(int *)__return_storage_ptr__ = *this->Key;
  FFastArraySerializerGuidReferences::FFastArraySerializerGuidReferences
            ((FFastArraySerializerGuidReferences *)&__return_storage_ptr__->field_0x8,
             (FFastArraySerializerGuidReferences *)local_d8);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  local_40 = local_40 & 0xffffffff00000000;
  if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  uVar2 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  local_90 = local_90 & 0xffffffff00000000;
  if (local_a0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a0.SecondaryData);
  }
  iVar1 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_b0 = 0;
  if (0x80 < local_ac) {
    local_ac = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers> @ 148a2c360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
* __thiscall
TKeyInitializer<TObjectPtr<UExternalDataLayerAsset_const_>_&&>::
operator<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>_TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
          (TKeyInitializer<TObjectPtr<UExternalDataLayerAsset_const_>_&&> *this,
          TTuple<TObjectPtr<UExternalDataLayerAsset_const_>,UExternalDataLayerEngineSubsystem::FRegisteredExternalDataLayers>
          *__return_storage_ptr__)

{
  UExternalDataLayerAsset *pUVar1;
  int iVar2;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  ForElementType<FSetElementId> local_88;
  int local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  memset(local_c8,0,0xa8);
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (ForElementType<FSetElementId>)0x0;
  local_30 = 0;
  local_28 = 1;
  pUVar1 = (this->Key->field0_0x0).DebugPtr;
  *(UExternalDataLayerAsset **)__return_storage_ptr__ = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UExternalDataLayerAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>
            ((TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *)local_c8);
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>::
  TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator>
            ((TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x58,
             (TSet<FObjectKey,DefaultKeyFuncs<FObjectKey,0>,FDefaultSetAllocator> *)local_78);
  __return_storage_ptr__->field_0xa8 = local_28;
  local_30 = 0;
  if (local_38 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
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
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  local_c8._8_4_ = 0;
  if (local_c8._12_4_ != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>_TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState> @ 148a75620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState> * __thiscall
TKeyInitializer<ULevel_*_const_&>::
operator<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>_TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>
          (TKeyInitializer<ULevel_*_const_&> *this,
          TTuple<ULevel_*,UWorldPartitionHLODRuntimeSubsystem::FHLODLevelState>
          *__return_storage_ptr__)

{
  int iVar1;
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
  *(ULevel **)__return_storage_ptr__ = *this->Key;
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
  ::
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
            ((TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
              *)local_78);
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = local_28;
  local_30 = local_30 & 0xffffffff00000000;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
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

// operator<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>_TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_> @ 148a75760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>_TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FGuid *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
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
  uVar3 = pFVar1->B;
  uVar4 = pFVar1->C;
  uVar5 = pFVar1->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
  ::
  TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
            ((TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<IWorldPartitionHLODObject_*,DefaultKeyFuncs<IWorldPartitionHLODObject_*,0>,FDefaultSetAllocator>
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

// operator<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_> @ 148ae4a70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FSoftObjectPath_&&>::
operator<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>_TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FSoftObjectPath_&&> *this,
          TTuple<FSoftObjectPath,TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FSoftObjectPath *pFVar1;
  int iVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
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
  uVar3 = (pFVar1->AssetPath).PackageName.Number;
  FVar4.Value = (pFVar1->AssetPath).AssetName.ComparisonIndex.Value;
  uVar5 = (pFVar1->AssetPath).AssetName.Number;
  *(uint *)&__return_storage_ptr__->field_0x0 =
       (pFVar1->AssetPath).PackageName.ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = FVar4.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x10 =
       (pFVar1->SubPathString).Data.AllocatorInstance.Data;
  (pFVar1->SubPathString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x18 = (pFVar1->SubPathString).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x1c = (pFVar1->SubPathString).Data.ArrayMax;
  (pFVar1->SubPathString).Data.ArrayNum = 0;
  (pFVar1->SubPathString).Data.ArrayMax = 0;
  TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
  ::
  TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
            ((TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x20,
             (TSet<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<UWorldPartitionLevelStreamingDynamic,FWeakObjectPtr>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<UClass_*,UE::FItem>_TTuple<UClass_*,UE::FItem> @ 148b06950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UClass_*,UE::FItem> * __thiscall
TKeyInitializer<UClass_*_const_&>::operator<UClass_*,UE::FItem>_TTuple<UClass_*,UE::FItem>
          (TKeyInitializer<UClass_*_const_&> *this,
          TTuple<UClass_*,UE::FItem> *__return_storage_ptr__)

{
  undefined1 auStack_158 [32];
  FItem local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_138.Class = (UClass *)0x0;
  local_138.Count = 0;
  local_138.Num = 0;
  local_138.Max = 0;
  FResourceSizeEx::FResourceSizeEx(&local_138.TrueResourceSize);
  *(UClass **)__return_storage_ptr__ = *this->Key;
  UE::FItem::FItem((FItem *)&__return_storage_ptr__->field_0x8,&local_138);
  FResourceSizeEx::~FResourceSizeEx(&local_138.TrueResourceSize);
  return __return_storage_ptr__;
}

// operator<UObject_*,FHierarchyNode>_TTuple<UObject_*,FHierarchyNode> @ 148b069e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<UObject_*,FHierarchyNode> * __thiscall
TKeyInitializer<UObject_*_&&>::operator<UObject_*,FHierarchyNode>_TTuple<UObject_*,FHierarchyNode>
          (TKeyInitializer<UObject_*_&&> *this,
          TTuple<UObject_*,FHierarchyNode> *__return_storage_ptr__)

{
  ulonglong uVar1;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [16];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  long64 local_38;
  long64 lStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_e8._0_8_ = (UObject *)0x0;
  local_e8._8_8_ = (UObject *)0x0;
  local_38 = ___xmm_ffffffffffffffffffffffffffffffff;
  lStack_30 = _UNK_15060db28;
  local_d0 = 0;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_28._0_4_ = -1;
  local_28._4_4_ = -1;
  *(UObject **)__return_storage_ptr__ = *this->Key;
  FHierarchyNode::FHierarchyNode
            ((FHierarchyNode *)&__return_storage_ptr__->field_0x8,(FHierarchyNode *)local_e8);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  uVar1 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  uVar1 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return __return_storage_ptr__;
}

// operator<UObject_*,FHierarchyNode>_TTuple<UObject_*,FHierarchyNode> @ 148b06bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<UObject_*,FHierarchyNode> * __thiscall
TKeyInitializer<UObject_*_const_&>::
operator<UObject_*,FHierarchyNode>_TTuple<UObject_*,FHierarchyNode>
          (TKeyInitializer<UObject_*_const_&> *this,
          TTuple<UObject_*,FHierarchyNode> *__return_storage_ptr__)

{
  ulonglong uVar1;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [16];
  ForAnyElementType local_d8;
  undefined8 local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_a8;
  undefined4 local_a4;
  ForElementType<FSetElementId> local_98;
  int local_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  long64 local_38;
  long64 lStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d8.Data = (FScriptContainerElement *)0x0;
  local_e8._0_8_ = (UObject *)0x0;
  local_e8._8_8_ = (UObject *)0x0;
  local_38 = ___xmm_ffffffffffffffffffffffffffffffff;
  lStack_30 = _UNK_15060db28;
  local_d0 = 0;
  local_c8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_98 = (ForElementType<FSetElementId>)0x0;
  local_90 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  local_78.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_78.NumBits = 0;
  local_78.MaxBits = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_28._0_4_ = -1;
  local_28._4_4_ = -1;
  *(UObject **)__return_storage_ptr__ = *this->Key;
  FHierarchyNode::FHierarchyNode
            ((FHierarchyNode *)&__return_storage_ptr__->field_0x8,(FHierarchyNode *)local_e8);
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  uVar1 = local_80 >> 0x20;
  local_80 = local_80 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_88,0,(int *)((longlong)&local_80 + 4));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_78.NumBits = 0;
  if (0x80 < (uint)local_78.MaxBits) {
    local_78.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_78,0);
  }
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  local_90 = 0;
  if (local_98 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98);
  }
  uVar1 = local_d0 >> 0x20;
  local_d0 = local_d0 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
  }
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_c8.NumBits = 0;
  if (0x80 < (uint)local_c8.MaxBits) {
    local_c8.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c8,0);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if (local_d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data);
  }
  return __return_storage_ptr__;
}

