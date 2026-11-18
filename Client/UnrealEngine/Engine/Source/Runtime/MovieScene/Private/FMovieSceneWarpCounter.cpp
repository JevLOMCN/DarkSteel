// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticStruct @ 1461679e0

UScriptStruct * __cdecl FMovieSceneWarpCounter::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneWarpCounter.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneWarpCounter.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneWarpCounter,(UObject *)pUVar1,
                         L"MovieSceneWarpCounter");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneWarpCounter.OuterSingleton;
}

// FMovieSceneWarpCounter @ 1461816d0

FMovieSceneWarpCounter * __thiscall
FMovieSceneWarpCounter::FMovieSceneWarpCounter
          (FMovieSceneWarpCounter *this,FMovieSceneWarpCounter *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = param_1->_padding_;
  param_1->_padding_ = 0;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  param_1->_padding_ = 0;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  (this->WarpCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpCounts).AllocatorInstance.Data = (param_1->WarpCounts).AllocatorInstance.Data;
  (param_1->WarpCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpCounts).ArrayNum = (param_1->WarpCounts).ArrayNum;
  (this->WarpCounts).ArrayMax = (param_1->WarpCounts).ArrayMax;
  (param_1->WarpCounts).ArrayNum = 0;
  (param_1->WarpCounts).ArrayMax = 0;
  return this;
}

// FMovieSceneWarpCounter @ 146181720

FMovieSceneWarpCounter * __thiscall
FMovieSceneWarpCounter::FMovieSceneWarpCounter
          (FMovieSceneWarpCounter *this,FMovieSceneWarpCounter *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  void *_Src;
  FScriptContainerElement *_Src_00;
  
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  this->_padding_ = 0;
  iVar3 = (int)param_1->_padding_;
  _Src = (void *)param_1->_padding_;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((void *)this->_padding_,_Src,(longlong)iVar3 << 3);
  }
  pTVar2 = &this->WarpCounts;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  piVar1 = &(this->WarpCounts).ArrayMax;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->WarpCounts).ArrayNum;
  _Src_00 = (param_1->WarpCounts).AllocatorInstance.Data;
  (this->WarpCounts).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,_Src_00,(longlong)iVar3 << 2);
  }
  return this;
}

// FMovieSceneWarpCounter @ 146181810

FMovieSceneWarpCounter * __thiscall
FMovieSceneWarpCounter::FMovieSceneWarpCounter(FMovieSceneWarpCounter *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->WarpCounts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WarpCounts).ArrayNum = 0;
  (this->WarpCounts).ArrayMax = 0;
  return this;
}

// ~FMovieSceneWarpCounter @ 1461857b0

void __thiscall FMovieSceneWarpCounter::~FMovieSceneWarpCounter(FMovieSceneWarpCounter *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->WarpCounts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// operator= @ 146186c60

FMovieSceneWarpCounter * __thiscall
FMovieSceneWarpCounter::operator=(FMovieSceneWarpCounter *this,FMovieSceneWarpCounter *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    if ((void *)this->_padding_ != (void *)0x0) {
      FMemory::Free((void *)this->_padding_);
    }
    this->_padding_ = param_1->_padding_;
    param_1->_padding_ = 0;
    *(int *)&this->_padding_ = (int)param_1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&param_1->_padding_ + 4);
    param_1->_padding_ = 0;
  }
  pTVar1 = &this->WarpCounts;
  pTVar3 = &param_1->WarpCounts;
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  if (pTVar1 != pTVar3) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar3->AllocatorInstance).Data;
    (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->WarpCounts).ArrayNum = (param_1->WarpCounts).ArrayNum;
    (this->WarpCounts).ArrayMax = (param_1->WarpCounts).ArrayMax;
    (param_1->WarpCounts).ArrayNum = 0;
    (param_1->WarpCounts).ArrayMax = 0;
  }
  return this;
}

// operator= @ 146186d00

FMovieSceneWarpCounter * __thiscall
FMovieSceneWarpCounter::operator=(FMovieSceneWarpCounter *this,FMovieSceneWarpCounter *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FMovieSceneTransformBreadcrumbs::operator=
            ((FMovieSceneTransformBreadcrumbs *)this,(FMovieSceneTransformBreadcrumbs *)param_1);
  pTVar1 = &this->WarpCounts;
  if (pTVar1 != &param_1->WarpCounts) {
    iVar3 = (param_1->WarpCounts).ArrayNum;
    piVar2 = &(this->WarpCounts).ArrayMax;
    _Src = (param_1->WarpCounts).AllocatorInstance.Data;
    (this->WarpCounts).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      if (iVar3 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 2);
      }
    }
  }
  return this;
}

