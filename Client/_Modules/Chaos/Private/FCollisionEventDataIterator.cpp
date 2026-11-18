// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// FCollisionEventDataIterator @ 143f450a0

FCollisionEventDataIterator * __thiscall
Chaos::FCollisionEventDataIterator::FCollisionEventDataIterator
          (FCollisionEventDataIterator *this,TArrayView<IPhysicsProxyBase_const_*,int> *param_1,
          FCollisionEventData *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  IPhysicsProxyBase **ppIVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  FCollisionEventDataIterator *pFVar8;
  
  this->ProxyIndex = -1;
  this->ProxyCollisionIndex = -1;
  this->ProxyCollisionIndices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  ppIVar6 = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  uVar3 = *(undefined4 *)&param_1->field_0xc;
  this->CollisionEventData = param_2;
  this->ProxyIndex = 0;
  this->ProxyCollisionIndex = 0;
  (this->Proxies).DataPtr = ppIVar6;
  (this->Proxies).ArrayNum = iVar1;
  *(undefined4 *)&(this->Proxies).field_0xc = uVar3;
  if (0 < (this->Proxies).ArrayNum) {
    ppIVar6 = TArrayView<IPhysicsProxyBase_const_*,int>::operator[](&this->Proxies,0);
    pTVar7 = TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                     *)&(this->CollisionEventData->PhysicsProxyToCollisionIndices).
                        PhysicsProxyToIndicesMap,*ppIVar6);
    this->ProxyCollisionIndices = pTVar7;
  }
  if ((this->Proxies).ArrayNum <= this->ProxyIndex) {
    return this;
  }
  do {
    pTVar7 = this->ProxyCollisionIndices;
    if (pTVar7 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_143f4515c:
      uVar5 = 0xfffffffe;
    }
    else {
      iVar1 = this->ProxyCollisionIndex;
      if (pTVar7->ArrayNum <= iVar1) goto LAB_143f4515c;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar8 = (FCollisionEventDataIterator *)(*pcVar2)();
        return pFVar8;
      }
      uVar5 = *(uint *)((pTVar7->AllocatorInstance).Data + (longlong)iVar1 * 4);
      uVar5 = uVar5 >> 0x1f | uVar5 * 2;
    }
    if ((-1 < (int)uVar5) || (Next(this), (this->Proxies).ArrayNum <= this->ProxyIndex)) {
      return this;
    }
  } while( true );
}

// GetCurrentCollidingDataIndex @ 143f6cf00

FCollidingDataIndex __thiscall
Chaos::FCollisionEventDataIterator::GetCurrentCollidingDataIndex(FCollisionEventDataIterator *this)

{
  int iVar1;
  uint uVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  FCollidingDataIndex FVar6;
  uint *in_RDX;
  
  if ((this->ProxyIndex < (this->Proxies).ArrayNum) &&
     (pTVar3 = this->ProxyCollisionIndices, pTVar3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0
     )) {
    iVar1 = this->ProxyCollisionIndex;
    if (iVar1 < pTVar3->ArrayNum) {
      if (iVar1 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          FVar6 = (FCollidingDataIndex)(*pcVar4)();
          return FVar6;
        }
      }
      uVar2 = *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar1 * 4);
      *in_RDX = uVar2 >> 0x1f | uVar2 * 2;
      return SUB84(in_RDX,0);
    }
  }
  *in_RDX = 0xfffffffe;
  return SUB84(in_RDX,0);
}

// GetCurrentProxy @ 143f6cfb0

IPhysicsProxyBase * __thiscall
Chaos::FCollisionEventDataIterator::GetCurrentProxy(FCollisionEventDataIterator *this)

{
  IPhysicsProxyBase **ppIVar1;
  
  if (this->ProxyIndex < (this->Proxies).ArrayNum) {
    ppIVar1 = TArrayView<IPhysicsProxyBase_const_*,int>::operator[](&this->Proxies,this->ProxyIndex)
    ;
    return *ppIVar1;
  }
  return (IPhysicsProxyBase *)0x0;
}

// Next @ 143f70d70

void __thiscall Chaos::FCollisionEventDataIterator::Next(FCollisionEventDataIterator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  
  iVar1 = (this->Proxies).ArrayNum;
  if (this->ProxyIndex < iVar1) {
    iVar4 = this->ProxyCollisionIndex + 1;
    this->ProxyCollisionIndex = iVar4;
    if ((this->ProxyCollisionIndices == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) ||
       (this->ProxyCollisionIndices->ArrayNum <= iVar4)) {
      this->ProxyCollisionIndex = 0;
      this->ProxyCollisionIndices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      if (iVar1 <= this->ProxyIndex) goto LAB_143f70e1b;
      do {
        pTVar6 = this->ProxyCollisionIndices;
        if (pTVar6 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_143f70e1b:
          uVar5 = 0xfffffffe;
        }
        else {
          iVar1 = this->ProxyCollisionIndex;
          if (pTVar6->ArrayNum <= iVar1) goto LAB_143f70e1b;
          if ((iVar1 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar5 = *(uint *)((pTVar6->AllocatorInstance).Data + (longlong)iVar1 * 4);
          uVar5 = uVar5 >> 0x1f | uVar5 * 2;
        }
        if (-1 < (int)uVar5) {
          return;
        }
        iVar1 = (this->Proxies).ArrayNum;
        iVar4 = this->ProxyIndex + 1;
        this->ProxyIndex = iVar4;
        if (iVar4 < iVar1) {
          if ((iVar4 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar6 = TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                   ::Find((TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                           *)&(this->CollisionEventData->PhysicsProxyToCollisionIndices).
                              PhysicsProxyToIndicesMap,(this->Proxies).DataPtr[iVar4]);
          this->ProxyCollisionIndices = pTVar6;
          if ((pTVar6 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) && (pTVar6->ArrayNum == 0))
          {
            this->ProxyCollisionIndices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          }
        }
      } while (this->ProxyIndex < (this->Proxies).ArrayNum);
    }
  }
  return;
}

// Reset @ 143f734a0

void __thiscall Chaos::FCollisionEventDataIterator::Reset(FCollisionEventDataIterator *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IPhysicsProxyBase **ppIVar5;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar6;
  
  this->ProxyIndex = 0;
  this->ProxyCollisionIndex = 0;
  this->ProxyCollisionIndices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  if (0 < (this->Proxies).ArrayNum) {
    ppIVar5 = TArrayView<IPhysicsProxyBase_const_*,int>::operator[](&this->Proxies,0);
    pTVar6 = TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
             ::Find((TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                     *)&(this->CollisionEventData->PhysicsProxyToCollisionIndices).
                        PhysicsProxyToIndicesMap,*ppIVar5);
    this->ProxyCollisionIndices = pTVar6;
  }
  if (this->ProxyIndex < (this->Proxies).ArrayNum) {
    do {
      pTVar6 = this->ProxyCollisionIndices;
      if (pTVar6 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
LAB_143f7354b:
        uVar4 = 0xfffffffe;
      }
      else {
        iVar1 = this->ProxyCollisionIndex;
        if (pTVar6->ArrayNum <= iVar1) goto LAB_143f7354b;
        if ((iVar1 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar4 = *(uint *)((pTVar6->AllocatorInstance).Data + (longlong)iVar1 * 4);
        uVar4 = uVar4 >> 0x1f | uVar4 * 2;
      }
    } while (((int)uVar4 < 0) && (Next(this), this->ProxyIndex < (this->Proxies).ArrayNum));
  }
  return;
}

