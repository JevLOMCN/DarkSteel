// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 2

// ~FScratchMemory @ 14ca09050

void __thiscall FGeometryCacheSceneProxy::FScratchMemory::~FScratchMemory(FScratchMemory *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->InterpolatedMotionVectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpolatedColors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpolatedUVs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpolatedTangentZ).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpolatedTangentX).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InterpolatedPositions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Prepare @ 14ca27eb0

void __thiscall
FGeometryCacheSceneProxy::FScratchMemory::Prepare(FScratchMemory *this,int param_1,bool param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *pTVar3;
  int *piVar4;
  
  piVar1 = &(this->InterpolatedPositions).ArrayMax;
  (this->InterpolatedPositions).ArrayNum = 0;
  if ((this->InterpolatedPositions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar2 = &(this->InterpolatedTangentX).ArrayMax;
  (this->InterpolatedTangentX).ArrayNum = 0;
  if ((this->InterpolatedTangentX).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->InterpolatedTangentX).AllocatorInstance,0,piVar2);
  }
  (this->InterpolatedTangentZ).ArrayNum = 0;
  if ((this->InterpolatedTangentZ).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->InterpolatedTangentZ).AllocatorInstance,0,
               &(this->InterpolatedTangentZ).ArrayMax);
  }
  (this->InterpolatedUVs).ArrayNum = 0;
  if ((this->InterpolatedUVs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->InterpolatedUVs).AllocatorInstance,0,&(this->InterpolatedUVs).ArrayMax)
    ;
  }
  (this->InterpolatedColors).ArrayNum = 0;
  if ((this->InterpolatedColors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->InterpolatedColors).AllocatorInstance,0,
               &(this->InterpolatedColors).ArrayMax);
  }
  pTVar3 = &this->InterpolatedMotionVectors;
  piVar4 = &(this->InterpolatedMotionVectors).ArrayMax;
  (this->InterpolatedMotionVectors).ArrayNum = 0;
  if ((this->InterpolatedMotionVectors).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&pTVar3->AllocatorInstance,0,piVar4);
  }
  if (-1 < param_1) {
    if (*piVar1 < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,(ForAnyElementType *)this,(this->InterpolatedPositions).ArrayNum,
                 piVar1);
    }
    if (*piVar2 < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->InterpolatedTangentX).AllocatorInstance,
                 (this->InterpolatedTangentX).ArrayNum,piVar2);
    }
    if ((this->InterpolatedTangentZ).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->InterpolatedTangentZ).AllocatorInstance,
                 (this->InterpolatedTangentZ).ArrayNum,&(this->InterpolatedTangentZ).ArrayMax);
    }
    if ((this->InterpolatedUVs).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&(this->InterpolatedUVs).AllocatorInstance,
                 (this->InterpolatedUVs).ArrayNum,&(this->InterpolatedUVs).ArrayMax);
    }
    if ((this->InterpolatedColors).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&(this->InterpolatedColors).AllocatorInstance,
                 (this->InterpolatedColors).ArrayNum,&(this->InterpolatedColors).ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,param_1,(ForAnyElementType *)this,&(this->InterpolatedPositions).ArrayNum,
               piVar1);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&(this->InterpolatedTangentX).AllocatorInstance,
               &(this->InterpolatedTangentX).ArrayNum,piVar2);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&(this->InterpolatedTangentZ).AllocatorInstance,
               &(this->InterpolatedTangentZ).ArrayNum,&(this->InterpolatedTangentZ).ArrayMax);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1,&(this->InterpolatedUVs).AllocatorInstance,
               &(this->InterpolatedUVs).ArrayNum,&(this->InterpolatedUVs).ArrayMax);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&(this->InterpolatedColors).AllocatorInstance,
               &(this->InterpolatedColors).ArrayNum,&(this->InterpolatedColors).ArrayMax);
    if (param_2) {
      piVar1 = &(this->InterpolatedMotionVectors).ArrayNum;
      if (*piVar4 < param_1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,param_1,&pTVar3->AllocatorInstance,*piVar1,piVar4);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,param_1,&pTVar3->AllocatorInstance,piVar1,piVar4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

