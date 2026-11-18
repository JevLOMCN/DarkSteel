// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ReinterpretCast<UE::MovieScene::FIntermediate3DTransform> @ 1465fee20

TArrayView<UE::MovieScene::FIntermediate3DTransform,int> * __thiscall
UE::MovieScene::FPropertyComponentArrayView::
ReinterpretCast<UE::MovieScene::FIntermediate3DTransform>
          (FPropertyComponentArrayView *this,
          TArrayView<UE::MovieScene::FIntermediate3DTransform,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::MovieScene::FIntermediate3DTransform,int> *pTVar4;
  
  if (this->DataSizeof != 0x48) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("sizeof(T) == DataSizeof",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\IMovieScenePropertyComponentHandler.h"
                       ,0x74,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::MovieScene::FIntermediate3DTransform,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->DataPtr = this->Data;
  iVar1 = this->ArrayNum;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<UE::MovieScene::FIntermediate3DTransform,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

