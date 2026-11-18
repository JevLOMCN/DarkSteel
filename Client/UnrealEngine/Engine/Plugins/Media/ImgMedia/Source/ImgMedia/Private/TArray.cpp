// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 2

// operator= @ 14ea3b680

TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> *this,
          TArray<FImgMediaViewInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FImgMediaViewInfo *pFVar3;
  
  if (this != param_1) {
    DestructItems<FImgMediaViewInfo,int>
              ((FImgMediaViewInfo *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FImgMediaViewInfo *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1a0,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FImgMediaViewInfo,FImgMediaViewInfo,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// InsertUninitializedImpl @ 14ea518e0

void __thiscall
TArray<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<int,TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

