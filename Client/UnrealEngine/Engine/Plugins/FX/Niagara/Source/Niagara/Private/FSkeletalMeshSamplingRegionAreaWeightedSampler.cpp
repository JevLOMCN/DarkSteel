// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FSkeletalMeshSamplingRegionAreaWeightedSampler @ 149212d10

FSkeletalMeshSamplingRegionAreaWeightedSampler * __thiscall
FSkeletalMeshSamplingRegionAreaWeightedSampler::FSkeletalMeshSamplingRegionAreaWeightedSampler
          (FSkeletalMeshSamplingRegionAreaWeightedSampler *this)

{
  FWeightedRandomSampler::FWeightedRandomSampler((FWeightedRandomSampler *)this);
  this->Owner = (FNDISkeletalMesh_InstanceData *)0x0;
  this->_padding_ = (longlong)&___7FSkeletalMeshSamplingRegionAreaWeightedSampler__6B_;
  return this;
}

// GetWeights @ 14923c230

float __thiscall
FSkeletalMeshSamplingRegionAreaWeightedSampler::GetWeights
          (FSkeletalMeshSamplingRegionAreaWeightedSampler *this,
          TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FNDISkeletalMesh_InstanceData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  USkeletalMesh *this_00;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float local_48 [8];
  
  if ((this->Owner == (FNDISkeletalMesh_InstanceData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                         ,0xdf,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar14 = (float)(*pcVar5)();
    return fVar14;
  }
  this_00 = (USkeletalMesh *)FWeakObjectPtr::Get(&(this->Owner->SkeletalMesh).WeakPtr);
  fVar14 = 0.0;
  if (this_00 == (USkeletalMesh *)0x0) {
    param_1->ArrayNum = 0;
    iVar2 = param_1->ArrayMax;
  }
  else {
    cVar7 = (**(code **)(this_00->_padding_ + 0x440))(this_00,this->Owner->CachedLODIdx);
    if ((cVar7 == '\0') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("SkelMesh->IsValidLODIndex(Owner->GetLODIndex())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceSkeletalMesh.cpp"
                           ,0xe8,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      fVar14 = (float)(*pcVar5)();
      return fVar14;
    }
    piVar1 = &param_1->ArrayMax;
    iVar2 = (this->Owner->SamplingRegionIndices).ArrayNum;
    if (1 < iVar2) {
      USkeletalMesh::WaitUntilAsyncPropertyReleased(this_00,SamplingInfo,ReadOnly);
      uVar11 = 0;
      param_1->ArrayNum = 0;
      if (*piVar1 != iVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,iVar2,&param_1->AllocatorInstance,0,piVar1);
      }
      uVar13 = uVar11;
      if (iVar2 < 1) {
        return 0.0;
      }
      while( true ) {
        pFVar3 = this->Owner;
        uVar12 = (uint)uVar13;
        uVar8 = 0;
        if ((int)uVar12 < (pFVar3->SamplingRegionIndices).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar14 = (float)(*pcVar5)();
          return fVar14;
        }
        uVar8 = *(uint *)((pFVar3->SamplingRegionIndices).AllocatorInstance.Data + uVar11 * 4);
        uVar9 = 0;
        if ((int)uVar8 < (this_00->SamplingInfo).BuiltData.RegionBuiltData.ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) break;
        local_48[0] = *(float *)((this_00->SamplingInfo).BuiltData.RegionBuiltData.AllocatorInstance
                                 .Data + (longlong)(int)uVar8 * 0x78 + 0x58);
        pFVar4 = (param_1->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_48) &&
            ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)*piVar1 * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          fVar14 = (float)(*pcVar5)();
          return fVar14;
        }
        iVar10 = param_1->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar10 + 1;
        uVar11 = uVar11 + 1;
        *(float *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_48[0];
        fVar14 = fVar14 + local_48[0];
        uVar13 = (ulonglong)(uVar12 + 1);
        if ((longlong)iVar2 <= (longlong)uVar11) {
          return fVar14;
        }
      }
      pcVar5 = (code *)swi(3);
      fVar14 = (float)(*pcVar5)();
      return fVar14;
    }
    param_1->ArrayNum = 0;
    iVar2 = *piVar1;
  }
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  return 0.0;
}

// Init @ 14923f200

void __thiscall
FSkeletalMeshSamplingRegionAreaWeightedSampler::Init
          (FSkeletalMeshSamplingRegionAreaWeightedSampler *this,
          FNDISkeletalMesh_InstanceData *param_1)

{
  this->Owner = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014923f207. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x10))();
  return;
}

