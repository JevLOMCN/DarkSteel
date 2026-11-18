// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 28

// operator= @ 14d29fdf0

TArray<FBoneTransform,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *this,
          TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *param_1)

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

// operator= @ 14d29fe90

TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_> *this,
          TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FDragonData_HitPairs *pFVar3;
  
  if (this != param_1) {
    DestructItems<FDragonData_HitPairs,int>
              ((FDragonData_HitPairs *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FDragonData_HitPairs *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x5f8,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FDragonData_HitPairs,FDragonData_HitPairs,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14d29ff30

TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *this,
          TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FDragonData_SpineFeetPair *pFVar3;
  
  if (this != param_1) {
    DestructItems<FDragonData_SpineFeetPair,int>
              ((FDragonData_SpineFeetPair *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FDragonData_SpineFeetPair *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x170,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FDragonData_SpineFeetPair,FDragonData_SpineFeetPair,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14d29ffd0

TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_> *this,
          TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FDragonData_SpineFeetPair_TRANSFORM_WSPACE *pFVar3;
  
  if (this != param_1) {
    DestructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
              ((FDragonData_SpineFeetPair_TRANSFORM_WSPACE *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FDragonData_SpineFeetPair_TRANSFORM_WSPACE *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x160,0x10,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// operator= @ 14d2a0070

TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
* __thiscall
TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::operator=(TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
            *this,TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                  *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 14d2a0110

TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *
__thiscall
TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
operator=(TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *this,TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             (param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 14d2a01b0

TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> * __thiscall
TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
          (TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  
  if (this != param_1) {
    DestructItems<TArray<bool,TSizedDefaultAllocator<32>_>,int>
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pTVar3 = (TArray<bool,TSizedDefaultAllocator<32>_> *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<TArray<bool,TSizedDefaultAllocator<32>_>,TArray<bool,TSizedDefaultAllocator<32>_>,int>
              ((this->AllocatorInstance).Data,pTVar3,iVar2);
  }
  return this;
}

// operator= @ 14d2b0a80

TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_> *this,
          TArray<FDragonData_FootData,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FDragonData_FootData *pFVar3;
  
  if (this != param_1) {
    DestructItems<FDragonData_FootData,int>
              ((FDragonData_FootData *)(this->AllocatorInstance).Data,this->ArrayNum);
    iVar2 = param_1->ArrayNum;
    piVar1 = &this->ArrayMax;
    pFVar3 = (FDragonData_FootData *)(param_1->AllocatorInstance).Data;
    this->ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
    ConstructItems<FDragonData_FootData,FDragonData_FootData,int>
              ((this->AllocatorInstance).Data,pFVar3,iVar2);
  }
  return this;
}

// CopyToEmpty<FBoneReference,int> @ 14d2b4f00

void __thiscall
TArray<FBoneReference,TSizedDefaultAllocator<32>_>::CopyToEmpty<FBoneReference,int>
          (TArray<FBoneReference,TSizedDefaultAllocator<32>_> *this,FBoneReference *param_1,
          int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 4);
  }
  return;
}

// CopyToEmpty<FDragonData_FingerData,int> @ 14d2b4f90

void __thiscall
TArray<FDragonData_FingerData,TSizedDefaultAllocator<32>_>::CopyToEmpty<FDragonData_FingerData,int>
          (TArray<FDragonData_FingerData,TSizedDefaultAllocator<32>_> *this,
          FDragonData_FingerData *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 * 0x30);
  }
  return;
}

// CopyToEmpty<FDragonData_SpineFeetPair,int> @ 14d2b5020

void __thiscall
TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::
CopyToEmpty<FDragonData_SpineFeetPair,int>
          (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *this,
          FDragonData_SpineFeetPair *param_1,int param_2,int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x170,0x10,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  ConstructItems<FDragonData_SpineFeetPair,FDragonData_SpineFeetPair,int>
            ((this->AllocatorInstance).Data,param_1,param_2);
  return;
}

// operator= @ 14d2b8a70

TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::operator=
          (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *this,
          TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (this != param_1) {
    DestructItems<FDragonData_SpineFeetPair,int>
              ((FDragonData_SpineFeetPair *)(this->AllocatorInstance).Data,this->ArrayNum);
    pFVar1 = (this->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->AllocatorInstance).Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    this->ArrayNum = param_1->ArrayNum;
    this->ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
  }
  return this;
}

// AddDefaulted @ 14d2b9110

int __thiscall
TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x5f8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  DefaultConstructItems<FDragonData_HitPairs,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x5f8,param_1);
  return iVar1;
}

// AddDefaulted @ 14d2b9180

int __thiscall
TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x160,0x10,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  DefaultConstructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
            ((this->AllocatorInstance).Data + (longlong)iVar1 * 0x160,param_1);
  return iVar1;
}

// AddDefaulted @ 14d2b91f0

int __thiscall
TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<TArray<float,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// AddDefaulted @ 14d2b9260

int __thiscall
TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::AddDefaulted(TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// AddDefaulted @ 14d2b92d0

int __thiscall
TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
AddDefaulted(TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// AddDefaulted @ 14d2b9340

int __thiscall
TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::AddDefaulted
          (TArray<TArray<bool,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x10,0,(longlong)param_1 << 4);
  return iVar1;
}

// Empty @ 14d2d4a80

void __thiscall
TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14d2d4ad0

void __thiscall
TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FDragonData_HitPairs,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FDragonData_HitPairs,int>
              ((FDragonData_HitPairs *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x5f8,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14d2d4b40

void __thiscall
TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<FDragonData_SpineFeetPair,int>
              ((FDragonData_SpineFeetPair *)(this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x170,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14d2d4bb0

void __thiscall
TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    DestructItems<FDragonData_SpineFeetPair_TRANSFORM_WSPACE,int>
              ((FDragonData_SpineFeetPair_TRANSFORM_WSPACE *)(this->AllocatorInstance).Data,
               this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x160,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14d2d4c20

void __thiscall
TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::Empty(TArray<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 14d2d4c90

void __thiscall
TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
Empty(TArray<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>,int>
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Remove @ 14d3112e0

int __thiscall
TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::Remove
          (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *this,
          FDragonData_SpineFeetPair *param_1)

{
  FDragonData_SpineFeetPair *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  
  pFVar1 = (FDragonData_SpineFeetPair *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  lVar8 = (longlong)iVar5;
  if (iVar5 == 0) {
    return 0;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  iVar13 = 0;
  if ((((*(uint *)(pFVar2 + 8) ^ (param_1->Spine_Involved).BoneIndex) & 0x7fffffff) == 0) &&
     (*(int *)(pFVar2 + 0x28) == 0)) {
    bVar14 = 0;
  }
  else {
    bVar14 = 1;
  }
  lVar9 = 0;
  iVar11 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar12 = iVar11 + 1;
    if (lVar9 < lVar8) {
      pFVar6 = pFVar2 + lVar9 * 0x170 + 0x28;
      do {
        if ((*(int *)(pFVar6 + -0x20) * 2 >> 1 == (param_1->Spine_Involved).BoneIndex) &&
           (*(int *)pFVar6 == 0)) {
          bVar7 = 0;
        }
        else {
          bVar7 = 1;
        }
        if (bVar14 != bVar7) break;
        iVar12 = iVar12 + 1;
        lVar9 = lVar9 + 1;
        pFVar6 = pFVar6 + 0x170;
      } while (lVar9 < lVar8);
    }
    iVar10 = iVar12 - iVar11;
    if (bVar14 == 0) {
      DestructItems<FDragonData_SpineFeetPair,int>
                ((FDragonData_SpineFeetPair *)(pFVar2 + (longlong)iVar11 * 0x170),iVar10);
    }
    else {
      if (iVar13 != iVar11) {
        memmove(pFVar2 + (longlong)iVar13 * 0x170,pFVar2 + (longlong)iVar11 * 0x170,
                (longlong)iVar10 * 0x170);
      }
      iVar13 = iVar13 + iVar10;
    }
    bVar14 = bVar14 ^ 1;
    iVar11 = iVar12;
    if (lVar8 <= lVar9) {
      this->ArrayNum = iVar13;
      return iVar5 - iVar13;
    }
  } while( true );
}

// RemoveAtImpl @ 14d3114e0

void __thiscall
TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FDragonData_SpineFeetPair,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FDragonData_SpineFeetPair *_Dst;
  
  _Dst = (FDragonData_SpineFeetPair *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x170);
  DestructItems<FDragonData_SpineFeetPair,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x170);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// Reset @ 14d311560

void __thiscall
TArray<FBoneTransform,TSizedDefaultAllocator<32>_>::Reset
          (TArray<FBoneTransform,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,0x10,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// SetNumUninitialized @ 14d3123a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UDragonIKPhysicsComponent_*,TSizedDefaultAllocator<32>_>::SetNumUninitialized
          (TArray<UDragonIKPhysicsComponent_*,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

