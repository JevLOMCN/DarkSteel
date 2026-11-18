// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 5

// StaticStruct @ 14dadcec0

UScriptStruct * __cdecl FMovieSceneChaosCacheParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneChaosCacheParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FMovieSceneChaosCacheParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneChaosCacheParams,(UObject *)pUVar1,
                         L"MovieSceneChaosCacheParams");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneChaosCacheParams.OuterSingleton;
}

// FMovieSceneChaosCacheParams @ 14dae6fa0

FMovieSceneChaosCacheParams * __thiscall
FMovieSceneChaosCacheParams::FMovieSceneChaosCacheParams
          (FMovieSceneChaosCacheParams *this,FMovieSceneChaosCacheParams *param_1)

{
  UChaosCacheCollection *pUVar1;
  longlong lVar2;
  longlong lVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneBaseCacheParams__6B_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  lVar2 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  lVar3 = param_1->_padding_;
  this->_padding_ = (longlong)&___7FMovieSceneChaosCacheParams__6B_;
  *(uint *)&this->_padding_ = (uint)this->_padding_ ^ ((uint)lVar2 ^ (uint)lVar3) & 1;
  pUVar1 = (param_1->CacheCollection).field0_0x0.DebugPtr;
  (this->CacheCollection).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UChaosCacheCollection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  return this;
}

// FMovieSceneChaosCacheParams @ 14dae7010

FMovieSceneChaosCacheParams * __thiscall
FMovieSceneChaosCacheParams::FMovieSceneChaosCacheParams(FMovieSceneChaosCacheParams *this)

{
  FMovieSceneBaseCacheParams::FMovieSceneBaseCacheParams((FMovieSceneBaseCacheParams *)this);
  this->_padding_ = (longlong)&___7FMovieSceneChaosCacheParams__6B_;
  (this->CacheCollection).field0_0x0.DebugPtr = (UChaosCacheCollection *)0x0;
  return this;
}

// ~FMovieSceneChaosCacheParams @ 14dae8a30

void __thiscall
FMovieSceneChaosCacheParams::~FMovieSceneChaosCacheParams(FMovieSceneChaosCacheParams *this)

{
  this->_padding_ = (longlong)&___7FMovieSceneBaseCacheParams__6B_;
  return;
}

// GetSequenceLength @ 14daf88e0

float __thiscall FMovieSceneChaosCacheParams::GetSequenceLength(FMovieSceneChaosCacheParams *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  UChaosCacheCollection *pUVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  undefined1 auStackX_8 [8];
  
  pUVar4 = (this->CacheCollection).field0_0x0.DebugPtr;
  if (pUVar4 != (UChaosCacheCollection *)0x0) {
    pFVar6 = (pUVar4->Caches).AllocatorInstance.Data;
    iVar2 = (pUVar4->Caches).ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    fVar5 = 0.0;
    while( true ) {
      fVar7 = fVar5;
      if ((pUVar4->Caches).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UChaosCache>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (pFVar6 == pFVar1) break;
      lVar3 = *(longlong *)pFVar6;
      pFVar6 = pFVar6 + 8;
      fVar5 = *(float *)(lVar3 + 0x28);
      if (*(float *)(lVar3 + 0x28) <= fVar7) {
        fVar5 = fVar7;
      }
    }
    return fVar7;
  }
  return 0.0;
}

