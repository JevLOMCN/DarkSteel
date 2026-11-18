// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// TRecompositionResult<double> @ 14689bdd0

TRecompositionResult<double> * __thiscall
UE::MovieScene::TRecompositionResult<double>::TRecompositionResult<double>
          (TRecompositionResult<double> *this,double *param_1,int param_2)

{
  ForElementType<double> FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<double> FVar5;
  TRecompositionResult<double> *pTVar6;
  
  (this->Values).AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
  (this->Values).ArrayNum = 0;
  (this->Values).ArrayMax = 1;
  do {
    param_2 = param_2 + -1;
    if (param_2 < 0) {
      return this;
    }
    FVar1 = (this->Values).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<double>)this;
    if (FVar1 != (ForElementType<double>)0x0) {
      FVar5 = FVar1;
    }
    if ((ulonglong)FVar5 <= param_1) {
      FVar5 = (ForElementType<double>)this;
      if (FVar1 != (ForElementType<double>)0x0) {
        FVar5 = FVar1;
      }
      if ((param_1 < (double *)((longlong)FVar5 + (longlong)(this->Values).ArrayMax * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TRecompositionResult<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    iVar4 = (this->Values).ArrayNum;
    if (iVar4 == (this->Values).ArrayMax) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<double>_>
                        (0x808,(ForElementType<double> *)this,&(this->Values).ArrayMax);
    }
    (this->Values).ArrayNum = iVar4 + 1;
    FVar1 = (this->Values).AllocatorInstance.SecondaryData;
    FVar5 = (ForElementType<double>)this;
    if (FVar1 != (ForElementType<double>)0x0) {
      FVar5 = FVar1;
    }
    *(double *)((longlong)FVar5 + (longlong)iVar4 * 8) = *param_1;
  } while( true );
}

// operator= @ 1468a1280

TRecompositionResult<double> * __thiscall
UE::MovieScene::TRecompositionResult<double>::operator=
          (TRecompositionResult<double> *this,TRecompositionResult<double> *param_1)

{
  ForElementType<double> FVar1;
  
  if (this != param_1) {
    if ((param_1->Values).AllocatorInstance.SecondaryData == (ForElementType<double>)0x0) {
      *(undefined8 *)(this->Values).AllocatorInstance.InlineData =
           *(undefined8 *)(param_1->Values).AllocatorInstance.InlineData;
    }
    FVar1 = (this->Values).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<double>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->Values).AllocatorInstance.SecondaryData =
         (param_1->Values).AllocatorInstance.SecondaryData;
    (param_1->Values).AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
    (this->Values).ArrayNum = (param_1->Values).ArrayNum;
    (this->Values).ArrayMax = (param_1->Values).ArrayMax;
    (param_1->Values).ArrayNum = 0;
    (param_1->Values).ArrayMax = 1;
  }
  return this;
}

