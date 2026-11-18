// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// FMoviePipelineShotOutputData @ 14dd09d90

FMoviePipelineShotOutputData * __thiscall
FMoviePipelineShotOutputData::FMoviePipelineShotOutputData
          (FMoviePipelineShotOutputData *this,FMoviePipelineShotOutputData *param_1)

{
  TMap<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData,0>_>
  *this_00;
  undefined1 *puVar1;
  
  this_00 = &this->RenderPassData;
  (this->Shot).WeakPtr = (param_1->Shot).WeakPtr;
  puVar1 = &(this->RenderPassData).field_0x48;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->RenderPassData).field_0x8 = 0;
  *(undefined8 *)&(this->RenderPassData).field_0x20 = 0;
  *(undefined4 *)&(this->RenderPassData).field_0x28 = 0;
  *(undefined4 *)&(this->RenderPassData).field_0x2c = 0x80;
  *(undefined4 *)&(this->RenderPassData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RenderPassData).field_0x34 = 0;
  *(undefined8 *)&(this->RenderPassData).field_0x40 = 0;
  *(undefined4 *)puVar1 = 0;
  if (this_00 != &param_1->RenderPassData) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->RenderPassData).field_0x38,(int *)puVar1,
               (ForElementType<FSetElementId> *)&(param_1->RenderPassData).field_0x38,
               *(int *)&(param_1->RenderPassData).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)this_00,
                (TSparseArray<TSparseSetElement<TTuple<FMoviePipelinePassIdentifier,FMoviePipelineRenderPassOutputData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->RenderPassData);
  }
  return this;
}

// StaticStruct @ 14dd5d1d0

UScriptStruct * __cdecl FMoviePipelineShotOutputData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMoviePipelineShotOutputData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMoviePipelineShotOutputData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMoviePipelineShotOutputData,(UObject *)pUVar1,
                         L"MoviePipelineShotOutputData");
  }
  return Z_Registration_Info_UScriptStruct_FMoviePipelineShotOutputData.OuterSingleton;
}

