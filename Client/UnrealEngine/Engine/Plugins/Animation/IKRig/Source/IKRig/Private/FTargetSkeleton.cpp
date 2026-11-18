// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 6

// ~FTargetSkeleton @ 14df1c0e0

void __thiscall FTargetSkeleton::~FTargetSkeleton(FTargetSkeleton *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->IsBoneRetargeted).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InputLocalPose).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OutputGlobalPose).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FResolvedRetargetPose,int>
            ((FResolvedRetargetPose *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// GetIsBoneRetargeted @ 14df38fd0

bool __thiscall FTargetSkeleton::GetIsBoneRetargeted(FTargetSkeleton *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if (this->bIsMaskInitialized != false) {
    uVar4 = 0;
    if (param_1 < (this->IsBoneRetargeted).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    return (bool)(this->IsBoneRetargeted).AllocatorInstance.Data[param_1];
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4490890690292613645>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\IKRig\\Source\\IKRig\\Private\\Retargeter\\IKRetargetProcessor.cpp"
                     ,0x20d,"bIsMaskInitialized");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// GetRetargetedBonesMask @ 14df3edc0

TArray<bool,TSizedDefaultAllocator<32>_> * __thiscall
FTargetSkeleton::GetRetargetedBonesMask(FTargetSkeleton *this)

{
  return &this->IsBoneRetargeted;
}

// Initialize @ 14df45bb0

void __thiscall
FTargetSkeleton::Initialize
          (FTargetSkeleton *this,USkeletalMesh *param_1,ERetargetSourceOrTarget param_2,
          UIKRetargeter *param_3,FName param_4,FRetargetPoseScaleWithPivot *param_5)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool local_res8 [8];
  
  FRetargetSkeleton::Reset((FRetargetSkeleton *)this);
  (this->OutputGlobalPose).ArrayNum = 0;
  if ((this->OutputGlobalPose).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->OutputGlobalPose).AllocatorInstance,0,
               &(this->OutputGlobalPose).ArrayMax);
  }
  FRetargetSkeleton::Initialize((FRetargetSkeleton *)this,param_1,param_2,param_3,param_4,param_5);
  this->bIsMaskInitialized = false;
  local_res8[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&this->IsBoneRetargeted,local_res8,(int)this->_padding_);
  pTVar3 = FResolvedRetargetPoseSet::GetLocalRetargetPose
                     ((FResolvedRetargetPoseSet *)&this->_padding_);
  pTVar4 = &this->InputLocalPose;
  if (pTVar4 != pTVar3) {
    iVar2 = pTVar3->ArrayNum;
    piVar1 = &(this->InputLocalPose).ArrayMax;
    _Src = (pTVar3->AllocatorInstance).Data;
    (this->InputLocalPose).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar2,*piVar1,&pTVar4->AllocatorInstance,iVar2,piVar1);
      if (iVar2 != 0) {
        memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar2 * 0x60);
      }
    }
  }
  pTVar3 = FResolvedRetargetPoseSet::GetGlobalRetargetPose
                     ((FResolvedRetargetPoseSet *)&this->_padding_);
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->OutputGlobalPose,pTVar3);
  return;
}

// Reset @ 14df4efb0

void __thiscall FTargetSkeleton::Reset(FTargetSkeleton *this)

{
  FRetargetSkeleton::Reset((FRetargetSkeleton *)this);
  (this->OutputGlobalPose).ArrayNum = 0;
  if ((this->OutputGlobalPose).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&(this->OutputGlobalPose).AllocatorInstance,0,
               &(this->OutputGlobalPose).ArrayMax);
  }
  return;
}

// SetRetargetedBones @ 14df558a0

void __thiscall
FTargetSkeleton::SetRetargetedBones
          (FTargetSkeleton *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  bool local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  local_res10[0] = false;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init
            (&this->IsBoneRetargeted,local_res10,(int)this->_padding_);
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  iVar13 = 0;
  uVar6 = 1;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14df5595d;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res20 = (int)lVar8;
    iVar7 = local_res20 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14df5595d:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar9 = uVar10 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uVar6,iVar11);
  TStack_78.CurrentBitIndex = iVar7;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_78._28_4_ = iVar7;
  TStack_78.BaseBitIndex = iVar13;
  uStack_58 = CONCAT44(uStack_84,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar9 = uVar9 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14df55a60;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar9;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14df55a60:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_58) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_78.CurrentBitIndex == uVar10) &&
       (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      this->bIsMaskInitialized = true;
      return;
    }
    uVar6 = *(uint *)(*(longlong *)&param_1->Elements + (longlong)TStack_78.CurrentBitIndex * 0xc);
    uVar9 = 0;
    if ((int)uVar6 < (this->IsBoneRetargeted).ArrayNum) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) break;
    (this->IsBoneRetargeted).AllocatorInstance.Data[(int)uVar6] = (FScriptContainerElement)0x1;
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

