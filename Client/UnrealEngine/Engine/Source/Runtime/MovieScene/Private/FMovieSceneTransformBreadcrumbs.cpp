// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// operator= @ 14609aea0

FMovieSceneTransformBreadcrumbs * __thiscall
FMovieSceneTransformBreadcrumbs::operator=
          (FMovieSceneTransformBreadcrumbs *this,FMovieSceneTransformBreadcrumbs *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Breadcrumbs).ArrayMax;
    piVar1 = &(this->Breadcrumbs).ArrayMax;
    _Src = (param_1->Breadcrumbs).AllocatorInstance.Data;
    iVar3 = (param_1->Breadcrumbs).ArrayNum;
    (this->Breadcrumbs).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((this->Breadcrumbs).AllocatorInstance.Data,_Src,(longlong)iVar3 << 3);
      }
    }
  }
  this->Mode = param_1->Mode;
  return this;
}

// StaticStruct @ 146166db0

UScriptStruct * __cdecl FMovieSceneTransformBreadcrumbs::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTransformBreadcrumbs.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTransformBreadcrumbs.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTransformBreadcrumbs,(UObject *)pUVar1
                         ,L"MovieSceneTransformBreadcrumbs");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTransformBreadcrumbs.OuterSingleton;
}

// operator_TArrayView<FFrameTime_const_,int> @ 1461877d0

TArrayView<FFrameTime_const_,int> * __thiscall
FMovieSceneTransformBreadcrumbs::operator_TArrayView<FFrameTime_const_,int>
          (FMovieSceneTransformBreadcrumbs *this,
          TArrayView<FFrameTime_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FFrameTime_const_,int> *pTVar4;
  
  iVar1 = (this->Breadcrumbs).ArrayNum;
  __return_storage_ptr__->DataPtr = (FFrameTime *)(this->Breadcrumbs).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FFrameTime_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// AddBreadcrumb @ 14618cb60

void __thiscall
FMovieSceneTransformBreadcrumbs::AddBreadcrumb
          (FMovieSceneTransformBreadcrumbs *this,FFrameTime *param_1)

{
  int *piVar1;
  FFrameTime *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = (FFrameTime *)(this->Breadcrumbs).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (this->Breadcrumbs).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Breadcrumbs).ArrayNum;
  piVar1 = &(this->Breadcrumbs).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,piVar1);
  }
  (this->Breadcrumbs).ArrayNum = iVar5 + 1;
  *(FFrameTime *)((this->Breadcrumbs).AllocatorInstance.Data + (longlong)iVar5 * 8) = *param_1;
  return;
}

