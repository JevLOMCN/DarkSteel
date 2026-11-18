// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 3

// AddMotionBase @ 14df76f40

void __thiscall FFBIKLinkData::AddMotionBase(FFBIKLinkData *this,FMotionBase *param_1)

{
  int *piVar1;
  TArray<FMotionBase,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  FMotionBase *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  uVar4 = *(undefined8 *)&(param_1->BaseAxis).field0_0x0;
  uVar11 = (uint)uVar4 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = (uint)((ulonglong)uVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
        (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000) ||
      (uVar4 = *(undefined8 *)((longlong)&(param_1->BaseAxis).field0_0x0 + 8),
      uVar11 = (uint)uVar4 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar12 = (uint)((ulonglong)uVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
      (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000)) ||
     (uVar4 = *(undefined8 *)((longlong)&(param_1->BaseAxis).field0_0x0 + 0x10),
     uVar11 = (uint)uVar4 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar12 = (uint)((ulonglong)uVar4 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar12,uVar11) &&
     (double)CONCAT44(uVar12,uVar11) != __real_3f1a36e2e0000000)) {
    pTVar2 = &this->MotionBaseAxes;
    pFVar5 = (FMotionBase *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->MotionBaseAxes).ArrayMax)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar10 = (this->MotionBaseAxes).ArrayNum;
    piVar1 = &(this->MotionBaseAxes).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->MotionBaseAxes).ArrayNum = iVar10 + 1;
    dVar8 = (param_1->BaseAxis).field0_0x0._s_0.Y;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    pFVar3 = pFVar6 + (longlong)iVar10 * 0x20;
    *(double *)pFVar3 = (param_1->BaseAxis).field0_0x0._s_0.X;
    *(double *)(pFVar3 + 8) = dVar8;
    uVar4 = *(undefined8 *)&param_1->LinearStiffness;
    pFVar6 = pFVar6 + (longlong)iVar10 * 0x20 + 0x10;
    *(double *)pFVar6 = (param_1->BaseAxis).field0_0x0._s_0.Z;
    *(undefined8 *)(pFVar6 + 8) = uVar4;
  }
  return;
}

// GetMotionBase @ 14df7fba0

FMotionBase * __thiscall FFBIKLinkData::GetMotionBase(FFBIKLinkData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FMotionBase *pFVar4;
  
  if ((param_1 < 0) || ((this->MotionBaseAxes).ArrayNum <= param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("MotionBaseAxes.IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                       ,0xd2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMotionBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->MotionBaseAxes).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FMotionBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FMotionBase *)((this->MotionBaseAxes).AllocatorInstance.Data + (longlong)param_1 * 0x20);
}

// GetRotationAxis @ 14df7fc80

TVector<double> * __thiscall FFBIKLinkData::GetRotationAxis(FFBIKLinkData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TVector<double> *pTVar4;
  
  if ((-1 < param_1) && (param_1 < (this->MotionBaseAxes).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->MotionBaseAxes).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TVector<double> *)(*pcVar1)();
        return pTVar4;
      }
    }
    return (TVector<double> *)
           ((this->MotionBaseAxes).AllocatorInstance.Data + (longlong)param_1 * 0x20);
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2320688628096827165>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Public\\FBIKConstraint.h"
                     ,0xe3,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TVector<double> *)(*pcVar1)();
    return pTVar4;
  }
  return &UE::Math::TVector<double>::ForwardVector;
}

