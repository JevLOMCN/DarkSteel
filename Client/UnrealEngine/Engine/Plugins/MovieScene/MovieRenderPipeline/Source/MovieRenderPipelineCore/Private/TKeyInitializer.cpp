// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 6

// operator<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo> @ 14dc6a680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo> *
__thiscall
TKeyInitializer<TObjectPtr<UMovieGraphConfig_const_>_&&>::
operator<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>_TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>
          (TKeyInitializer<TObjectPtr<UMovieGraphConfig_const_>_&&> *this,
          TTuple<TObjectPtr<UMovieGraphConfig_const_>,FMovieGraphEvaluationContext_VisitedNodeInfo>
          *__return_storage_ptr__)

{
  UMovieGraphConfig *pUVar1;
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
  pUVar1 = (this->Key->field0_0x0).DebugPtr;
  *(UMovieGraphConfig **)__return_storage_ptr__ = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UMovieGraphConfig *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FMovieGraphEvaluationContext_VisitedNodeInfo::FMovieGraphEvaluationContext_VisitedNodeInfo
            ((FMovieGraphEvaluationContext_VisitedNodeInfo *)&__return_storage_ptr__->field_0x8,
             (FMovieGraphEvaluationContext_VisitedNodeInfo *)local_68);
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

// operator<FName,FMovieGraphEvaluatedBranchConfig>_TTuple<FName,FMovieGraphEvaluatedBranchConfig> @ 14dc6a7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FMovieGraphEvaluatedBranchConfig> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FMovieGraphEvaluatedBranchConfig>_TTuple<FName,FMovieGraphEvaluatedBranchConfig>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FMovieGraphEvaluatedBranchConfig> *__return_storage_ptr__)

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
  TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FString,FMovieGraphEvaluatedSettingsStack>,TDefaultMapHashableKeyFuncs<FString,FMovieGraphEvaluatedSettingsStack,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FMovieGraphEvaluatedSettingsStack>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  return __return_storage_ptr__;
}

// operator<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>_TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_> @ 14dc9eb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<UMovieGraphFileOutputNode_*_const_&>::
operator<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>_TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<UMovieGraphFileOutputNode_*_const_&> *this,
          TTuple<UMovieGraphFileOutputNode_*,TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>_>
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
  *(UMovieGraphFileOutputNode **)__return_storage_ptr__ = *this->Key;
  TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
  ::
  TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
            ((TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<FMovieGraphRenderDataIdentifier,DefaultKeyFuncs<FMovieGraphRenderDataIdentifier,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FMovieGraphRenderDataIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<FMovieGraphRenderDataIdentifier>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData> @ 14dc9ee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData> * __thiscall
TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>::
operator<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>_TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
          (TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *this,
          TTuple<FMovieGraphRenderDataIdentifier,FMovieGraphRenderLayerOutputData>
          *__return_storage_ptr__)

{
  FMovieGraphRenderDataIdentifier *pFVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  void *local_48;
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pFVar1 = this->Key;
  local_a8._0_8_ = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_40 = 0;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  local_38._0_4_ = 0;
  local_38._4_4_ = 0;
  local_a8._8_4_ = 0;
  local_a8._12_4_ = 0;
  local_a8._16_8_ = (FScriptContainerElement *)0x0;
  local_a8._24_4_ = 0;
  local_a8._28_4_ = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  uVar3 = (pFVar1->RootBranchName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->RootBranchName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x8,&pFVar1->LayerName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,&pFVar1->RendererName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x28,&pFVar1->SubResourceName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x38,&pFVar1->CameraName);
  FMovieGraphRenderLayerOutputData::FMovieGraphRenderLayerOutputData
            ((FMovieGraphRenderLayerOutputData *)&__return_storage_ptr__->field_0x48,
             (FMovieGraphRenderLayerOutputData *)local_a8);
  local_40 = local_40 & 0xffffffff00000000;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FSoftClassPath,FMovieGraphStringArray>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
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
  DestructItems<FString,int>((FString *)local_a8._16_8_,local_a8._24_4_);
  if ((FScriptContainerElement *)local_a8._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._16_8_);
  }
  DestructItems<FString,int>((FString *)local_a8._0_8_,local_a8._8_4_);
  if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_a8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>_TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams> @ 14dcfa120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams> *
__thiscall
TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&>::
operator<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>_TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>
          (TKeyInitializer<FMovieGraphRenderDataIdentifier_const_&> *this,
          TTuple<FMovieGraphRenderDataIdentifier,UMovieGraphCommandLineEncoderNode::FEncoderParams>
          *__return_storage_ptr__)

{
  FMovieGraphRenderDataIdentifier *pFVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [24];
  undefined8 uStack_100;
  void *local_f8;
  undefined4 local_f0;
  uint local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  void *local_d8;
  ulonglong local_d0;
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  FWeakObjectPtr local_78;
  FName local_70;
  ForAnyElementType local_68;
  undefined8 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_148;
  pFVar1 = this->Key;
  local_118._0_8_ = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_118._16_8_ = 0;
  uStack_100 = 0;
  local_d0 = 0;
  local_c8._16_8_ = 0;
  uStack_b0 = 0;
  local_90 = 0;
  local_80 = 0;
  local_118._8_8_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  local_ec = 0x80;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_d8 = (void *)0x0;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_78.ObjectIndex = 0;
  local_78.ObjectSerialNumber = 0;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60._0_4_ = 0;
  local_60._4_4_ = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30._0_4_ = 0;
  local_30._4_4_ = 0;
  uVar3 = (pFVar1->RootBranchName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->RootBranchName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x8,&pFVar1->LayerName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x18,&pFVar1->RendererName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x28,&pFVar1->SubResourceName);
  ::FString::FString((FString *)&__return_storage_ptr__->field_0x38,&pFVar1->CameraName);
  UMovieGraphCommandLineEncoderNode::FEncoderParams::FEncoderParams
            ((FEncoderParams *)&__return_storage_ptr__->field_0x48,(FEncoderParams *)local_118);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  local_80 = local_80 & 0xffffffff00000000;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar2 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
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
  local_d0 = local_d0 & 0xffffffff00000000;
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_118,0,local_118._8_4_);
  iVar2 = SUB84(local_118._8_8_,4);
  local_118._8_8_ = local_118._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_118,0,(int *)(local_118 + 0xc));
  }
  local_e8 = 0xffffffff;
  local_e4 = 0;
  local_f0 = 0;
  if (0x80 < local_ec) {
    local_ec = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_118 + 0x10),0);
  }
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if ((FScriptContainerElement *)local_118._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_118._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>_TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams> @ 14dcfa3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams> * __thiscall
TKeyInitializer<FMoviePipelinePassIdentifier_&&>::
operator<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>_TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
          (TKeyInitializer<FMoviePipelinePassIdentifier_&&> *this,
          TTuple<FMoviePipelinePassIdentifier,UMoviePipelineCommandLineEncoder::FEncoderParams>
          *__return_storage_ptr__)

{
  FMoviePipelinePassIdentifier *pFVar1;
  int iVar2;
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
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  ForElementType<FSetElementId> local_50;
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar1 = this->Key;
  *(undefined8 *)__return_storage_ptr__ = 0;
  local_a0.InlineData[0] = '\0';
  local_a0.InlineData[1] = '\0';
  local_a0.InlineData[2] = '\0';
  local_a0.InlineData[3] = '\0';
  local_a0._padding_ = 0;
  local_d8._16_8_ = 0;
  uStack_c0 = 0;
  local_90 = 0;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  local_50.InlineData[0] = '\0';
  local_50.InlineData[1] = '\0';
  local_50.InlineData[2] = '\0';
  local_50.InlineData[3] = '\0';
  local_50._padding_ = 0;
  local_40 = 0;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = 0xffffffff;
  local_a4 = 0;
  local_a0.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_50.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_38 = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Name).Data.AllocatorInstance.Data;
  (pFVar1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Name).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Name).Data.ArrayMax;
  (pFVar1->Name).Data.ArrayNum = 0;
  (pFVar1->Name).Data.ArrayMax = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(FScriptContainerElement **)&__return_storage_ptr__->field_0x10 =
       (pFVar1->CameraName).Data.AllocatorInstance.Data;
  (pFVar1->CameraName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x18 = (pFVar1->CameraName).Data.ArrayNum;
  *(int *)&__return_storage_ptr__->field_0x1c = (pFVar1->CameraName).Data.ArrayMax;
  (pFVar1->CameraName).Data.ArrayNum = 0;
  (pFVar1->CameraName).Data.ArrayMax = 0;
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x20,
             (TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
              *)local_d8);
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x70,
             (TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_88);
  *(undefined8 *)&__return_storage_ptr__->field_0xc0 = local_38;
  local_40 = local_40 & 0xffffffff00000000;
  if (local_50.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
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
  local_90 = local_90 & 0xffffffff00000000;
  if (local_a0.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a0.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_d8,0,local_d8._8_4_);
  iVar2 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
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

