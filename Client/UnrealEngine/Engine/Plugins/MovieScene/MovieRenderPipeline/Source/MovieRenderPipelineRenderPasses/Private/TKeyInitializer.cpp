// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 2

// operator<UE::Math::TIntPoint<int>,FSceneViewStateReference>_TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference> @ 14ddbbc90

TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference> * __thiscall
TKeyInitializer<UE::Math::TIntPoint<int>_&&>::
operator<UE::Math::TIntPoint<int>,FSceneViewStateReference>_TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference>
          (TKeyInitializer<UE::Math::TIntPoint<int>_&&> *this,
          TTuple<UE::Math::TIntPoint<int>,FSceneViewStateReference> *__return_storage_ptr__)

{
  FSceneViewStateReference local_40;
  
  local_40._padding_ = (longlong)&___7FSceneViewStateReference__6B_;
  local_40.GlobalListLink._padding_ = 0;
  local_40.Reference = (FSceneViewStateInterface *)0x0;
  local_40.GlobalListLink._padding_ = 0;
  local_40.ShareOriginTarget = (FSceneViewStateReference *)0x0;
  local_40.ShareOriginRefCount = 0;
  *(TIntPoint<int>_u_0 *)__return_storage_ptr__ = this->Key->field0_0x0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined ***)&__return_storage_ptr__->field_0x8 = &___7FSceneViewStateReference__6B_;
  *(FSceneViewStateReference **)&__return_storage_ptr__->field_0x28 =
       local_40.GlobalListLink.Element;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  FSceneViewStateReference::~FSceneViewStateReference(&local_40);
  return __return_storage_ptr__;
}

// operator<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename> @ 14ddbbd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename> *
__thiscall
TKeyInitializer<FString_const_&>::
operator<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>_TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_138 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  void *local_58;
  undefined4 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  memset(local_f8,0,200);
  local_f8._0_8_ = (FMovieGraphRenderDataIdentifier *)0x0;
  local_f8._8_4_ = 0;
  local_f8._12_4_ = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  UMovieGraphImageSequenceOutputNode_MultiLayerEXR::FEXROutputConfigForFilename::
  FEXROutputConfigForFilename
            ((FEXROutputConfigForFilename *)&__return_storage_ptr__->field_0x10,
             (FEXROutputConfigForFilename *)local_f8);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98,0,local_98._8_4_);
  iVar1 = SUB84(local_98._8_8_,4);
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e8,0,local_e8._8_4_);
  iVar1 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  DestructItems<FMovieGraphRenderDataIdentifier,int>
            ((FMovieGraphRenderDataIdentifier *)local_f8._0_8_,local_f8._8_4_);
  if ((FMovieGraphRenderDataIdentifier *)local_f8._0_8_ != (FMovieGraphRenderDataIdentifier *)0x0) {
    FMemory::Free((void *)local_f8._0_8_);
  }
  return __return_storage_ptr__;
}

