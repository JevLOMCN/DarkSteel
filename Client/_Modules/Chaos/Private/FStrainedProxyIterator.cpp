// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// operator== @ 143e000b0

bool __thiscall
Chaos::FStrainedProxyIterator::operator==
          (FStrainedProxyIterator *this,FStrainedProxyIterator *param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = this->ProxyAndRoots->ArrayNum;
  if (iVar1 == param_1->ProxyAndRoots->ArrayNum) {
    bVar2 = CompareItems<Chaos::FStrainedProxyAndRoot,int>
                      ((FStrainedProxyAndRoot *)(this->ProxyAndRoots->AllocatorInstance).Data,
                       (FStrainedProxyAndRoot *)(param_1->ProxyAndRoots->AllocatorInstance).Data,
                       iVar1);
    if ((bVar2) && (this->Index == param_1->Index)) {
      return true;
    }
  }
  return false;
}

// operator* @ 143e00210

FStrainedProxyModifier * __thiscall
Chaos::FStrainedProxyIterator::operator*
          (FStrainedProxyIterator *this,FStrainedProxyModifier *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  uint uVar3;
  TArray<Chaos::FStrainedProxyAndRoot,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar7;
  bool bVar8;
  FStrainedProxyModifier *pFVar9;
  uint uVar10;
  
  uVar3 = this->Index;
  pTVar4 = this->ProxyAndRoots;
  uVar10 = 0;
  if ((int)uVar3 < pTVar4->ArrayNum) {
    uVar10 = ~uVar3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FStrainedProxyModifier *)(*pcVar6)();
    return pFVar9;
  }
  pFVar1 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x18;
  lVar5 = *(longlong *)pFVar1;
  lVar2 = *(longlong *)(pFVar1 + 0x10);
  __return_storage_ptr__->RigidClustering = this->RigidClustering;
  pTVar7 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)(pFVar1 + 8);
  (__return_storage_ptr__->ProxyAndRoot).Proxy = *(FGeometryCollectionPhysicsProxy **)pFVar1;
  (__return_storage_ptr__->ProxyAndRoot).ParticleHandle = pTVar7;
  *(longlong *)&(__return_storage_ptr__->ProxyAndRoot).bPartialDestruction = lVar2;
  if ((lVar5 != 0) && (*(int *)(lVar5 + 0x1c) == 2)) {
    uVar3 = *(uint *)(lVar5 + 0x180);
    if (uVar3 != 0xffffffff) {
      if ((*(longlong *)(lVar5 + 0x58) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FStrainedProxyModifier *)(*pcVar6)();
        return pFVar9;
      }
      lVar2 = *(longlong *)(lVar5 + 0x58);
      uVar10 = 0;
      if ((int)uVar3 < *(int *)(lVar2 + 0x148)) {
        uVar10 = ~uVar3 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FStrainedProxyModifier *)(*pcVar6)();
        return pFVar9;
      }
      __return_storage_ptr__->RestChildren =
           (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
           ((longlong)(int)uVar3 * 0x50 + *(longlong *)(lVar2 + 0x140));
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->RestChildren =
       (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  return __return_storage_ptr__;
}

// operator++ @ 143e00390

FStrainedProxyIterator * __thiscall
Chaos::FStrainedProxyIterator::operator++(FStrainedProxyIterator *this)

{
  this->Index = this->Index + 1;
  return this;
}

