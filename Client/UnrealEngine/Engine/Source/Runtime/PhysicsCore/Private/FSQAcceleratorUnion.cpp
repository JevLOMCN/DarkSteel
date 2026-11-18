// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 5

// AddSQAccelerator @ 1441a6290

void __thiscall
FSQAcceleratorUnion::AddSQAccelerator(FSQAcceleratorUnion *this,ISQAccelerator *param_1)

{
  ISQAccelerator *local_res10 [3];
  
  local_res10[0] = param_1;
  TArray<ISQAccelerator_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<ISQAccelerator_*_const_&>
            (&this->Accelerators,local_res10);
  return;
}

// Overlap @ 1441b3090

void __thiscall
FSQAcceleratorUnion::Overlap
          (FSQAcceleratorUnion *this,FImplicitObject *param_1,TTransform<double> *param_2,
          FSQHitBuffer<ChaosInterface::FOverlapHit> *param_3,FChaosQueryFilterData *param_4,
          ICollisionQueryFilterCallbackBase *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Accelerators).AllocatorInstance.Data;
  iVar2 = (this->Accelerators).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Accelerators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ISQAccelerator_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x18))
              (*(longlong **)pFVar3,param_1,param_2,param_3,param_4,param_5);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// Raycast @ 1441b3e20

void __thiscall
FSQAcceleratorUnion::Raycast
          (FSQAcceleratorUnion *this,TVector<double> *param_1,TVector<double> *param_2,float param_3
          ,FSQHitBuffer<ChaosInterface::FRaycastHit> *param_4,EHitFlags param_5,
          FChaosQueryFilterData *param_6,ICollisionQueryFilterCallbackBase *param_7)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Accelerators).AllocatorInstance.Data;
  iVar2 = (this->Accelerators).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Accelerators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ISQAccelerator_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 8))
              (*(longlong **)pFVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// RemoveSQAccelerator @ 1441b48c0

void __thiscall
FSQAcceleratorUnion::RemoveSQAccelerator(FSQAcceleratorUnion *this,ISQAccelerator *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  
  iVar6 = (this->Accelerators).ArrayNum;
  pFVar3 = (this->Accelerators).AllocatorInstance.Data;
  pFVar9 = pFVar3;
  if (pFVar3 != pFVar3 + (longlong)iVar6 * 8) {
    while (*(ISQAccelerator **)pFVar9 != param_1) {
      pFVar9 = pFVar9 + 8;
      if (pFVar9 == pFVar3 + (longlong)iVar6 * 8) {
        return;
      }
    }
    uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
    if (uVar8 != 0xffffffff) {
      uVar7 = 0;
      if ((int)(uVar8 + 1) <= iVar6) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar2 = (this->Accelerators).ArrayNum;
      pFVar3 = (this->Accelerators).AllocatorInstance.Data;
      iVar6 = iVar2 + ~uVar8;
      if (1 < iVar6) {
        iVar6 = 1;
      }
      if (iVar6 != 0) {
        memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                (longlong)iVar6 << 3);
      }
      piVar1 = &(this->Accelerators).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&(this->Accelerators).AllocatorInstance,(this->Accelerators).ArrayNum,
                 &(this->Accelerators).ArrayMax);
    }
  }
  return;
}

// Sweep @ 1441bc030

void __thiscall
FSQAcceleratorUnion::Sweep
          (FSQAcceleratorUnion *this,FImplicitObject *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,float param_4,FSQHitBuffer<ChaosInterface::FSweepHit> *param_5,
          EHitFlags param_6,FChaosQueryFilterData *param_7,
          ICollisionQueryFilterCallbackBase *param_8)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Accelerators).AllocatorInstance.Data;
  iVar2 = (this->Accelerators).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->Accelerators).ArrayNum != iVar2) {
      `TCheckedPointerIterator<ISQAccelerator_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x10))
              (*(longlong **)pFVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    pFVar3 = pFVar3 + 8;
  }
  return;
}

