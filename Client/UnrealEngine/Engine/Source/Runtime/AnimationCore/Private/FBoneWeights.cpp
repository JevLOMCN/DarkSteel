// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 4

// FBoneWeights @ 14237e610

FBoneWeights * __thiscall
UE::AnimationCore::FBoneWeights::FBoneWeights(FBoneWeights *this,FBoneWeights *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar3;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  
  (this->BoneWeights).AllocatorInstance.SecondaryData =
       (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
  FVar3 = (param_1->BoneWeights).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->BoneWeights).ArrayNum;
  (this->BoneWeights).ArrayNum = iVar2;
  if (FVar3 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    param_1 = (FBoneWeights *)FVar3;
  }
  piVar1 = &(this->BoneWeights).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 0xc;
    return this;
  }
  Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
            (4,2,iVar2,0,(ForElementType<UE::AnimationCore::FBoneWeight> *)this,iVar2,piVar1);
  FVar3 = (this->BoneWeights).AllocatorInstance.SecondaryData;
  _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)this;
  if (FVar3 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    _Dst = FVar3;
  }
  memcpy((void *)_Dst,param_1,(longlong)iVar2 << 2);
  return this;
}

// operator[] @ 14237eea0

FBoneWeight * __thiscall UE::AnimationCore::FBoneWeights::operator[](FBoneWeights *this,int param_1)

{
  ForElementType<UE::AnimationCore::FBoneWeight> FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBoneWeight *pFVar5;
  
  uVar4 = 0;
  if (param_1 < (this->BoneWeights).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FBoneWeight *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar1 = (this->BoneWeights).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    this = (FBoneWeights *)FVar1;
  }
  return (FBoneWeight *)((longlong)this + (longlong)param_1 * 4);
}

// Blend @ 1423808f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBoneWeights * __cdecl
UE::AnimationCore::FBoneWeights::Blend
          (FBoneWeights *__return_storage_ptr__,FBoneWeights *param_1,FBoneWeights *param_2,
          FBoneWeights *param_3,float param_4,float param_5,float param_6,
          FBoneWeightsSettings *param_7)

{
  int *piVar1;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> _Dst;
  ForElementType<UE::AnimationCore::FBoneWeight> _Src;
  longlong lVar3;
  undefined1 auStackY_128 [32];
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_e8;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_e0;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_d8;
  FBoneWeightsSettings local_d0;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_b8;
  TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if ((float)((uint)(param_5 + param_6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77
     ) {
    FBoneWeights(__return_storage_ptr__,param_1);
  }
  else {
    local_d8.Container = &local_78;
    local_d0.MaxWeightCount = (param_2->BoneWeights).ArrayNum + (param_3->BoneWeights).ArrayNum;
    if (local_d0.MaxWeightCount < 1) {
      local_d0.MaxWeightCount = 1;
    }
    local_d0.WeightThreshold = 1;
    local_d0.DefaultBoneIndex = 0;
    local_d0.bHasDefaultBoneIndex = false;
    local_d0.bBlendZeroInfluence = true;
    local_d0.NormalizeType = None;
    local_78.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0xc;
    local_e8.Container = &param_3->BoneWeights;
    local_e0.Container = &param_2->BoneWeights;
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::
    Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_d8,&local_e0,&local_e8,param_6 / (param_5 + param_6),&local_d0);
    local_e8.Container = &local_b8;
    local_b8.AllocatorInstance.SecondaryData = (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    local_e0.Container = &local_78;
    local_b8.ArrayNum = 0;
    local_b8.ArrayMax = 0xc;
    local_d8.Container = &param_1->BoneWeights;
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::
    Blend<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>,TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
              (&local_e8,&local_e0,&local_d8,param_4,param_7);
    lVar3 = (longlong)local_b8.ArrayNum;
    piVar1 = &(__return_storage_ptr__->BoneWeights).ArrayMax;
    (__return_storage_ptr__->BoneWeights).AllocatorInstance.SecondaryData =
         (ForElementType<UE::AnimationCore::FBoneWeight>)0x0;
    _Src = (ForElementType<UE::AnimationCore::FBoneWeight>)&local_b8;
    if (local_b8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      _Src = local_b8.AllocatorInstance.SecondaryData;
    }
    (__return_storage_ptr__->BoneWeights).ArrayNum = local_b8.ArrayNum;
    if (local_b8.ArrayNum == 0) {
      *piVar1 = 0xc;
    }
    else {
      Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::AnimationCore::FBoneWeight>_>
                (4,2,local_b8.ArrayNum,0,
                 (ForElementType<UE::AnimationCore::FBoneWeight> *)__return_storage_ptr__,
                 local_b8.ArrayNum,piVar1);
      FVar2 = (__return_storage_ptr__->BoneWeights).AllocatorInstance.SecondaryData;
      _Dst = (ForElementType<UE::AnimationCore::FBoneWeight>)__return_storage_ptr__;
      if (FVar2 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
        _Dst = FVar2;
      }
      memcpy((void *)_Dst,(void *)_Src,lVar3 << 2);
    }
    if (local_b8.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
    }
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
  }
  return __return_storage_ptr__;
}

// RemoveBoneWeight @ 142384c10

bool __thiscall
UE::AnimationCore::FBoneWeights::RemoveBoneWeight
          (FBoneWeights *this,ushort param_1,FBoneWeightsSettings *param_2)

{
  int iVar1;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar2;
  ForElementType<UE::AnimationCore::FBoneWeight> FVar3;
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  local_res8 [4];
  
  FVar2 = (this->BoneWeights).AllocatorInstance.SecondaryData;
  FVar3 = (ForElementType<UE::AnimationCore::FBoneWeight>)this;
  if (FVar2 != (ForElementType<UE::AnimationCore::FBoneWeight>)0x0) {
    FVar3 = FVar2;
  }
  FVar2 = FVar3;
  while( true ) {
    if (FVar2 == (ForElementType<UE::AnimationCore::FBoneWeight>)
                 ((longlong)FVar3 + (longlong)(this->BoneWeights).ArrayNum * 4)) {
      return false;
    }
    if (param_1 == *(ushort *)FVar2) break;
    FVar2 = (ForElementType<UE::AnimationCore::FBoneWeight>)((longlong)FVar2 + 4);
  }
  iVar1 = (int)((longlong)FVar2 - (longlong)FVar3 >> 2);
  if (iVar1 == -1) {
    return false;
  }
  local_res8[0].Container = &this->BoneWeights;
  TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>
  ::Remove(&this->BoneWeights,iVar1);
  TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
  ::CullWeights(local_res8,param_2);
  if (param_2->NormalizeType == Always) {
    TBoneWeights<UE::AnimationCore::FBoneWeights::TArrayAdapter<TArray<UE::AnimationCore::FBoneWeight,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>_>_>_>
    ::NormalizeWeights(local_res8,Always);
  }
  return true;
}

