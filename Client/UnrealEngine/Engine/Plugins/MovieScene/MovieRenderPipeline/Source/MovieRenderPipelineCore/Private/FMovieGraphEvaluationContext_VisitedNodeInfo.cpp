// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 2

// StaticStruct @ 14dc684c0

UScriptStruct * __cdecl FMovieGraphEvaluationContext_VisitedNodeInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieRenderPipelineCore();
    Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo,
                         (UObject *)pUVar1,L"MovieGraphEvaluationContext_VisitedNodeInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMovieGraphEvaluationContext_VisitedNodeInfo.
         OuterSingleton;
}

// FMovieGraphEvaluationContext_VisitedNodeInfo @ 14dc72500

FMovieGraphEvaluationContext_VisitedNodeInfo * __thiscall
FMovieGraphEvaluationContext_VisitedNodeInfo::FMovieGraphEvaluationContext_VisitedNodeInfo
          (FMovieGraphEvaluationContext_VisitedNodeInfo *this,
          FMovieGraphEvaluationContext_VisitedNodeInfo *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  undefined1 *_Src;
  
  *(undefined8 *)&(this->VisitedNodes).Elements = 0;
  *(undefined8 *)&(this->VisitedNodes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VisitedNodes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->VisitedNodes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VisitedNodes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VisitedNodes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VisitedNodes).Elements.field_0x34 = 0;
  (this->VisitedNodes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedNodes).HashSize = 0;
  if (this != param_1) {
    *(undefined8 *)&(this->VisitedNodes).Elements = *(undefined8 *)&(param_1->VisitedNodes).Elements
    ;
    *(undefined8 *)&(param_1->VisitedNodes).Elements = 0;
    *(undefined4 *)&(this->VisitedNodes).Elements.field_0x8 =
         *(undefined4 *)&(param_1->VisitedNodes).Elements.field_0x8;
    *(undefined4 *)&(this->VisitedNodes).Elements.field_0xc =
         *(undefined4 *)&(param_1->VisitedNodes).Elements.field_0xc;
    *(undefined8 *)&(param_1->VisitedNodes).Elements.field_0x8 = 0;
    _Src = &(param_1->VisitedNodes).Elements.field_0x10;
    _Dst = &(this->VisitedNodes).Elements.field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->VisitedNodes).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->VisitedNodes).Elements.field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->VisitedNodes).Elements.field_0x20 =
           *(undefined8 *)&(param_1->VisitedNodes).Elements.field_0x20;
      *(undefined8 *)&(param_1->VisitedNodes).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->VisitedNodes).Elements.field_0x28 =
           *(undefined4 *)&(param_1->VisitedNodes).Elements.field_0x28;
      *(undefined4 *)&(this->VisitedNodes).Elements.field_0x2c =
           *(undefined4 *)&(param_1->VisitedNodes).Elements.field_0x2c;
      *(undefined8 *)&(param_1->VisitedNodes).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->VisitedNodes).Elements.field_0x30 =
         *(undefined4 *)&(param_1->VisitedNodes).Elements.field_0x30;
    *(undefined4 *)&(this->VisitedNodes).Elements.field_0x34 =
         *(undefined4 *)&(param_1->VisitedNodes).Elements.field_0x34;
    *(undefined4 *)&(param_1->VisitedNodes).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->VisitedNodes).Elements.field_0x34 = 0;
  }
  if ((param_1->VisitedNodes).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->VisitedNodes).Hash.InlineData =
         *(undefined4 *)(param_1->VisitedNodes).Hash.InlineData;
  }
  FVar2 = (this->VisitedNodes).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->VisitedNodes).Hash.SecondaryData = (param_1->VisitedNodes).Hash.SecondaryData;
  (param_1->VisitedNodes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VisitedNodes).HashSize = (param_1->VisitedNodes).HashSize;
  (param_1->VisitedNodes).HashSize = 0;
  return this;
}

