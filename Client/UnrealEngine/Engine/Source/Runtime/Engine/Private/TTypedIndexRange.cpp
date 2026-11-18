// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_><UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>_&> @ 1474a24b0

TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> * __thiscall
UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_>::
TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_><UE::Anim::TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>_&>
          (TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> *this,
          TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> *pTVar4;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  iVar1 = *(int *)&param_1->field_0x8;
  if (-1 < iVar1) {
    *(int *)&this->field_0x8 = iVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> *)(*pcVar2)();
    return pTVar4;
  }
  *(int *)&this->field_0x8 = iVar1;
  return this;
}

