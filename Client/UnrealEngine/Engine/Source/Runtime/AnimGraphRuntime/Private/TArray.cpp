// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 29

// AddUniqueImpl<FCompactPoseBoneIndex_const_&> @ 1463f16c0

int __thiscall
TArray<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::AddUniqueImpl<FCompactPoseBoneIndex_const_&>
          (TArray<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *this,FCompactPoseBoneIndex *param_1
          )

{
  FCompactPoseBoneIndex *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCompactPoseBoneIndex *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar5 = pFVar1;
    do {
      if (*pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 1;
    } while (pFVar5 != pFVar1 + this->ArrayNum);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<FCompactPoseBoneIndex>_>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar1[iVar4] = *param_1;
  return iVar4;
}

// CopyToEmpty<FAnimPhysShape,int> @ 1463f3950

void __thiscall
TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_>::CopyToEmpty<FAnimPhysShape,int>
          (TArray<FAnimPhysShape,TSizedDefaultAllocator<32>_> *this,FAnimPhysShape *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x40,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FAnimPhysShape,FAnimPhysShape,int>((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 146409950

TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 5);
    }
  }
  return this;
}

// operator= @ 1464099f0

TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> * __thiscall
TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_>::operator=
          (TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *this,
          TArray<UE::Math::TTransform<double>,TMemStackAllocator<0>_> *param_1)

{
  int iVar1;
  TTransform<double> *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::
    ReallocForCopy<0,TMemStackAllocator<0>::ForElementType<UE::Math::TTransform<double>_>_>
              (0x60,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x60);
    }
  }
  return this;
}

// operator= @ 146409a90

TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *this,
          TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 146409b30

TArray<FAnimPhysPlanarLimit,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FAnimPhysPlanarLimit,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FAnimPhysPlanarLimit,TSizedDefaultAllocator<32>_> *this,
          TArray<FAnimPhysPlanarLimit,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x70,0x10,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x70);
    }
  }
  return this;
}

// operator= @ 146409bd0

TArray<FBlendBoneByChannelEntry,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FBlendBoneByChannelEntry,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FBlendBoneByChannelEntry,TSizedDefaultAllocator<32>_> *this,
          TArray<FBlendBoneByChannelEntry,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x24,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x24);
    }
  }
  return this;
}

// operator= @ 146409c70

TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *this,
          TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FBlendSampleData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FBlendSampleData,int>
              ((FBlendSampleData *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FBlendSampleData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FBlendSampleData,FBlendSampleData,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 146409d10

TArray<FBoneReference,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FBoneReference,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *this,
          TArray<FBoneReference,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 146409db0

TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
    }
  }
  return this;
}

// operator= @ 146409e50

TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::operator=
          (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *this,
          TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 146409ef0

TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *this,
          TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 146409f90

TArray<USkeletalMeshComponent::FPendingRadialForces,TSizedDefaultAllocator<32>_> * __thiscall
TArray<USkeletalMeshComponent::FPendingRadialForces,TSizedDefaultAllocator<32>_>::operator=
          (TArray<USkeletalMeshComponent::FPendingRadialForces,TSizedDefaultAllocator<32>_> *this,
          TArray<USkeletalMeshComponent::FPendingRadialForces,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 * 0x30);
    }
  }
  return this;
}

// operator= @ 14640a030

TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_> *this,
          TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
    }
  }
  return this;
}

// operator= @ 14640a0d0

TArray<FPoseLink,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FPoseLink,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FPoseLink,TSizedDefaultAllocator<32>_> *this,
          TArray<FPoseLink,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    _Src = (param_1->AllocatorInstance).Data;
    iVar1 = param_1->ArrayNum;
    this->ArrayNum = iVar1;
    if ((iVar1 == 0) && (this->ArrayMax == 0)) {
      this->ArrayMax = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar1,this->ArrayMax,&this->AllocatorInstance,iVar1,&this->ArrayMax);
    if (iVar1 != 0) {
      memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar1 << 4);
    }
  }
  return this;
}

// operator= @ 14640a170

TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=(TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *this,TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// AddDefaulted @ 146414d50

int __thiscall
TArray<FName,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FName,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// AddZeroed @ 1464151f0

int __thiscall
TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x18,0,(longlong)param_1 * 0x18);
  return iVar1;
}

// AddZeroed @ 146415270

int __thiscall
TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<FPerBoneBlendWeight,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// Insert @ 14645aab0

int __thiscall
TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *this,
          FCompactPoseBoneIndex *param_1,int param_2)

{
  FCompactPoseBoneIndex *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (FCompactPoseBoneIndex *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 4;
  memmove(pFVar5 + 4,pFVar5,(longlong)(iVar4 - param_2) << 2);
  *(FCompactPoseBoneIndex *)((this->AllocatorInstance).Data + (longlong)param_2 * 4) = *param_1;
  return param_2;
}

// RemoveAt @ 146463f30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FScriptContainerElement *_Dst;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 146464010

void __thiscall
TArray<FCompactPose,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::RemoveAtImpl
          (TArray<FCompactPose,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,int param_2)

{
  void *_Dst;
  ForElementType<FCompactPose> FVar1;
  int iVar2;
  ForElementType<FCompactPose> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FCompactPose>)this;
  if (FVar1 != (ForElementType<FCompactPose>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (void *)((longlong)FVar3 + (longlong)param_1 * 0x18);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_2 * 0x18),(longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 146464080

void __thiscall
TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FFieldContextIndex,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  FScriptContainerElement *_Dst;
  int iVar1;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 8,(longlong)iVar1 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 1464640d0

void __thiscall
TArray<FInputBlendPose,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FInputBlendPose,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<FInputBlendPose,int>((FInputBlendPose *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 146464150

void __thiscall
TArray<UE::Anim::FStackAttributeContainer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtImpl(TArray<UE::Anim::FStackAttributeContainer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
               *this,int param_1,int param_2)

{
  ForElementType<UE::Anim::FStackAttributeContainer> FVar1;
  int iVar2;
  FStackAttributeContainer *_Dst;
  ForElementType<UE::Anim::FStackAttributeContainer> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<UE::Anim::FStackAttributeContainer>)this;
  if (FVar1 != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (FStackAttributeContainer *)((longlong)param_1 * 0x40 + (longlong)FVar3);
  DestructItems<UE::Anim::FStackAttributeContainer,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 6);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 146469c30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<float> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<float> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<float>)0x0) {
      this = (TArray<float,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<float>)this;
        if (FVar2 != (ForElementType<float>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 146469d80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FBlendedCurve,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FBlendedCurve,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<FBlendedCurve> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  ForElementType<FBlendedCurve> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve>_>
                      (0x20,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FBlendedCurve>)0x0) {
      this = (TArray<FBlendedCurve,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar2
      ;
    }
    DefaultConstructItems<FBlendedCurve,int>
              ((void *)((longlong)iVar5 * 0x20 + (longlong)this),param_1 - iVar6);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FBlendedCurve>)this;
        if (FVar2 != (ForElementType<FBlendedCurve>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x20 + (longlong)FVar7);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar8 * 0x20 + (longlong)_Dst),(longlong)iVar6 << 5);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FBlendedCurve>_>
                    (0x20,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 146469ef0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FCompactPose,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FCompactPose,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<FCompactPose> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompactPose>_>
                      (0x18,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<FCompactPose>)0x0) {
      this = (TArray<FCompactPose,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_> *)FVar3;
    }
    DefaultConstructItems<FCompactPose,int>
              ((void *)((longlong)this + (longlong)iVar6 * 0x18),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<FCompactPose>_>
                  (0x18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14646a030

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::Anim::FStackAttributeContainer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::SetNum(TArray<UE::Anim::FStackAttributeContainer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
         *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Anim::FStackAttributeContainer> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar6 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FStackAttributeContainer>_>
                      (0x40,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar3 = (this->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<UE::Anim::FStackAttributeContainer>)0x0) {
      this = (TArray<UE::Anim::FStackAttributeContainer,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
              *)FVar3;
    }
    DefaultConstructItems<UE::Anim::FStackAttributeContainer,int>
              ((void *)((longlong)iVar6 * 0x40 + (longlong)this),param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar7 = iVar2 - param_1;
      if (((int)(uVar7 | param_1) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((uVar7 != 0) && (RemoveAtImpl(this,param_1,uVar7), param_2 == Default)) {
        UE::Core::Private::
        ReallocShrink<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Anim::FStackAttributeContainer>_>
                  (0x40,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

