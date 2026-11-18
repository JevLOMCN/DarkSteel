// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FConvexVolume @ 1447f2660

FConvexVolume * __thiscall FConvexVolume::FConvexVolume(FConvexVolume *this,FConvexVolume *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<UE::Math::TPlane<double>_> _Dst;
  ForElementType<UE::Math::TPlane<double>_> FVar3;
  ForElementType<UE::Math::TPlane<double>_> FVar4;
  
  (this->Planes).AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TPlane<double>_>)0x0;
  FVar4 = (param_1->Planes).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->Planes).ArrayNum;
  (this->Planes).ArrayNum = iVar2;
  FVar3 = (ForElementType<UE::Math::TPlane<double>_>)param_1;
  if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar3 = FVar4;
  }
  piVar1 = &(this->Planes).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 6;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,iVar2,0,(ForElementType<UE::Math::TPlane<double>_> *)this,iVar2,piVar1);
    FVar4 = (this->Planes).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<UE::Math::TPlane<double>_>)this;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      _Dst = FVar4;
    }
    memcpy((void *)_Dst,(void *)FVar3,(longlong)iVar2 << 5);
  }
  (this->PermutedPlanes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  FVar4 = (param_1->PermutedPlanes).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->PermutedPlanes).ArrayNum;
  (this->PermutedPlanes).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar4 = (ForElementType<UE::Math::TPlane<double>_>)&param_1->PermutedPlanes;
  }
  piVar1 = &(this->PermutedPlanes).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,iVar2,0,&(this->PermutedPlanes).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar3 = (ForElementType<UE::Math::TPlane<double>_>)&this->PermutedPlanes;
    }
    memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar2 << 5);
  }
  return this;
}

// operator= @ 14499f430

FConvexVolume * __thiscall FConvexVolume::operator=(FConvexVolume *this,FConvexVolume *param_1)

{
  int iVar1;
  int *piVar2;
  ForElementType<UE::Math::TPlane<double>_> _Dst;
  ForElementType<UE::Math::TPlane<double>_> FVar3;
  ForElementType<UE::Math::TPlane<double>_> FVar4;
  
  if (this != param_1) {
    FVar4 = (param_1->Planes).AllocatorInstance.SecondaryData;
    piVar2 = &(this->Planes).ArrayMax;
    iVar1 = (param_1->Planes).ArrayNum;
    (this->Planes).ArrayNum = iVar1;
    FVar3 = (ForElementType<UE::Math::TPlane<double>_>)param_1;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FVar3 = FVar4;
    }
    if ((iVar1 == 0) && (*piVar2 == 0)) {
      *piVar2 = 6;
      goto LAB_14499f50a;
    }
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,iVar1,*piVar2,(ForElementType<UE::Math::TPlane<double>_> *)this,iVar1,
               piVar2);
    FVar4 = (this->Planes).AllocatorInstance.SecondaryData;
    _Dst = (ForElementType<UE::Math::TPlane<double>_>)this;
    if (FVar4 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      _Dst = FVar4;
    }
    if (iVar1 != 0) {
      memcpy((void *)_Dst,(void *)FVar3,(longlong)iVar1 << 5);
      goto LAB_14499f50a;
    }
  }
  if (this == param_1) {
    return this;
  }
LAB_14499f50a:
  iVar1 = (param_1->PermutedPlanes).ArrayNum;
  piVar2 = &(this->PermutedPlanes).ArrayMax;
  FVar4 = (param_1->PermutedPlanes).AllocatorInstance.SecondaryData;
  (this->PermutedPlanes).ArrayNum = iVar1;
  if (FVar4 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FVar4 = (ForElementType<UE::Math::TPlane<double>_>)&param_1->PermutedPlanes;
  }
  if ((iVar1 == 0) && (*piVar2 == 0)) {
    *piVar2 = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TPlane<double>_>_>
              (0x20,0x10,iVar1,*piVar2,&(this->PermutedPlanes).AllocatorInstance,iVar1,piVar2);
    FVar3 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
    if (iVar1 != 0) {
      if (FVar3 == (ForElementType<UE::Math::TPlane<double>_>)0x0) {
        FVar3 = (ForElementType<UE::Math::TPlane<double>_>)&this->PermutedPlanes;
      }
      memcpy((void *)FVar3,(void *)FVar4,(longlong)iVar1 << 5);
    }
  }
  return this;
}

// ~FConvexVolume @ 144a5ad10

void __thiscall FConvexVolume::~FConvexVolume(FConvexVolume *this)

{
  ForElementType<UE::Math::TPlane<double>_> FVar1;
  
  FVar1 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->Planes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar1);
    return;
  }
  return;
}

// FConvexVolume @ 145609410

FConvexVolume * __thiscall FConvexVolume::FConvexVolume(FConvexVolume *this,FConvexVolume *param_1)

{
  ForElementType<UE::Math::TPlane<double>_> FVar1;
  
  (this->Planes).AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TPlane<double>_>)0x0;
  if ((param_1->Planes).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    memmove(this,param_1,0xc0);
  }
  FVar1 = (this->Planes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->Planes).AllocatorInstance.SecondaryData = (param_1->Planes).AllocatorInstance.SecondaryData
  ;
  (param_1->Planes).AllocatorInstance.SecondaryData = (ForElementType<UE::Math::TPlane<double>_>)0x0
  ;
  (this->Planes).ArrayNum = (param_1->Planes).ArrayNum;
  (this->Planes).ArrayMax = (param_1->Planes).ArrayMax;
  (param_1->Planes).ArrayNum = 0;
  (param_1->Planes).ArrayMax = 6;
  (this->PermutedPlanes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  if ((param_1->PermutedPlanes).AllocatorInstance.SecondaryData ==
      (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    memmove(&this->PermutedPlanes,&param_1->PermutedPlanes,0x100);
  }
  FVar1 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  (this->PermutedPlanes).AllocatorInstance.SecondaryData =
       (param_1->PermutedPlanes).AllocatorInstance.SecondaryData;
  (param_1->PermutedPlanes).AllocatorInstance.SecondaryData =
       (ForElementType<UE::Math::TPlane<double>_>)0x0;
  (this->PermutedPlanes).ArrayNum = (param_1->PermutedPlanes).ArrayNum;
  (this->PermutedPlanes).ArrayMax = (param_1->PermutedPlanes).ArrayMax;
  (param_1->PermutedPlanes).ArrayNum = 0;
  (param_1->PermutedPlanes).ArrayMax = 8;
  return this;
}

// operator= @ 14560b850

FConvexVolume * __thiscall FConvexVolume::operator=(FConvexVolume *this,FConvexVolume *param_1)

{
  ForElementType<UE::Math::TPlane<double>_> FVar1;
  
  if (this != param_1) {
    if ((param_1->Planes).AllocatorInstance.SecondaryData ==
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      memmove(this,param_1,0xc0);
    }
    FVar1 = (this->Planes).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->Planes).AllocatorInstance.SecondaryData =
         (param_1->Planes).AllocatorInstance.SecondaryData;
    (param_1->Planes).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    (this->Planes).ArrayNum = (param_1->Planes).ArrayNum;
    (this->Planes).ArrayMax = (param_1->Planes).ArrayMax;
    (param_1->Planes).ArrayNum = 0;
    (param_1->Planes).ArrayMax = 6;
  }
  if (&this->PermutedPlanes != &param_1->PermutedPlanes) {
    if ((param_1->PermutedPlanes).AllocatorInstance.SecondaryData ==
        (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      memmove(&this->PermutedPlanes,&param_1->PermutedPlanes,0x100);
    }
    FVar1 = (this->PermutedPlanes).AllocatorInstance.SecondaryData;
    if (FVar1 != (ForElementType<UE::Math::TPlane<double>_>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    (this->PermutedPlanes).AllocatorInstance.SecondaryData =
         (param_1->PermutedPlanes).AllocatorInstance.SecondaryData;
    (param_1->PermutedPlanes).AllocatorInstance.SecondaryData =
         (ForElementType<UE::Math::TPlane<double>_>)0x0;
    (this->PermutedPlanes).ArrayNum = (param_1->PermutedPlanes).ArrayNum;
    (this->PermutedPlanes).ArrayMax = (param_1->PermutedPlanes).ArrayMax;
    (param_1->PermutedPlanes).ArrayNum = 0;
    (param_1->PermutedPlanes).ArrayMax = 8;
  }
  return this;
}

