// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PBIK
// Functions: 30

// StaticStruct @ 14ded4620

UScriptStruct * __cdecl FPBIKSolver::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPBIKSolver.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PBIK();
    Z_Registration_Info_UScriptStruct_FPBIKSolver.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPBIKSolver,(UObject *)pUVar1,L"PBIKSolver");
  }
  return Z_Registration_Info_UScriptStruct_FPBIKSolver.OuterSingleton;
}

// ~FPBIKSolver @ 14ded68f0

void __thiscall FPBIKSolver::~FPBIKSolver(FPBIKSolver *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<PBIK::FEffector,int>
            ((FEffector *)(this->Effectors).AllocatorInstance.Data,(this->Effectors).ArrayNum);
  pFVar1 = (this->Effectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<PBIK::FConstraint,1>,int>
            ((TSharedPtr<PBIK::FConstraint,1> *)(this->Constraints).AllocatorInstance.Data,
             (this->Constraints).ArrayNum);
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Bodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<PBIK::FBone,int>
            ((FBone *)(this->Bones).AllocatorInstance.Data,(this->Bones).ArrayNum);
  pFVar1 = (this->Bones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14ded6a20

void __thiscall
`FPBIKSolver::SolveConstraints'::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  undefined1 local_res10 [8];
  
  lVar9 = *(longlong *)this;
  iVar1 = *(int *)(lVar9 + 0x30);
  plVar7 = *(longlong **)(lVar9 + 0x28);
  plVar8 = plVar7 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)(lVar9 + 0x30) != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<PBIK::FConstraint,1>,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res10);
    }
    if (plVar7 == plVar8) break;
    if ((*plVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (*(code *)**(undefined8 **)*plVar7)((undefined8 *)*plVar7,*(undefined8 *)((longlong)this + 8));
    plVar7 = plVar7 + 2;
  }
  if ((param_1 == param_2 + -1) && (uVar6 = *(int *)(*(longlong *)this + 0x30) - 1, -1 < (int)uVar6)
     ) {
    lVar9 = (longlong)(int)uVar6 << 4;
    do {
      lVar2 = *(longlong *)this;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)(lVar2 + 0x30)) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)(lVar2 + 0x28);
      if ((*(longlong *)(lVar9 + lVar2) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (**(code **)(**(longlong **)(lVar9 + lVar2) + 0x10))();
      lVar9 = lVar9 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0xc) == '\0') {
    uVar6 = *(int *)(*(longlong *)this + 0x30) - 1;
    fVar10 = (__real_40000000 / (float)param_2) * (float)(param_1 + 1);
    if (__real_3f800000 <= fVar10) {
      fVar10 = __real_3f800000;
    }
    if (-1 < (int)uVar6) {
      lVar9 = (longlong)(int)uVar6 << 4;
      do {
        lVar2 = *(longlong *)this;
        uVar5 = 0;
        if ((int)uVar6 < *(int *)(lVar2 + 0x30)) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar2 = *(longlong *)(lVar2 + 0x28);
        if ((*(longlong *)(lVar9 + lVar2) == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        plVar7 = *(longlong **)(lVar9 + lVar2);
        (**(code **)(*plVar7 + 8))(plVar7,fVar10);
        lVar9 = lVar9 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
  }
  return;
}

// operator() @ 14ded6c80

void __thiscall `FPBIKSolver::SolveConstraints'::__l2::<lambda_3>::operator()(void *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined1 local_res8 [8];
  
  iVar11 = 0;
  iVar12 = **(int **)((longlong)this + 0x10);
  if (0 < iVar12) {
    do {
      plVar2 = *(longlong **)((longlong)this + 8);
      lVar10 = *plVar2;
      iVar1 = *(int *)(lVar10 + 0x30);
      plVar8 = *(longlong **)(lVar10 + 0x28);
      plVar9 = plVar8 + (longlong)iVar1 * 2;
      while( true ) {
        if (*(int *)(lVar10 + 0x30) != iVar1) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<PBIK::FConstraint,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (plVar8 == plVar9) break;
        if ((*plVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (*(code *)**(undefined8 **)*plVar8)((undefined8 *)*plVar8,plVar2[1]);
        plVar8 = plVar8 + 2;
      }
      if ((iVar11 == iVar12 + -1) && (uVar7 = *(int *)(*plVar2 + 0x30) - 1, -1 < (int)uVar7)) {
        lVar10 = (longlong)(int)uVar7 << 4;
        do {
          lVar3 = *plVar2;
          uVar6 = 0;
          if ((int)uVar7 < *(int *)(lVar3 + 0x30)) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar3 = *(longlong *)(lVar3 + 0x28);
          if ((*(longlong *)(lVar10 + lVar3) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(**(longlong **)(lVar10 + lVar3) + 0x10))();
          lVar10 = lVar10 + -0x10;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      if ((*(char *)(plVar2[1] + 0xc) == '\0') &&
         (uVar7 = *(int *)(*plVar2 + 0x30) - 1, -1 < (int)uVar7)) {
        lVar10 = (longlong)(int)uVar7 << 4;
        do {
          lVar3 = *plVar2;
          uVar6 = 0;
          if ((int)uVar7 < *(int *)(lVar3 + 0x30)) {
            uVar6 = ~uVar7 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar3 = *(longlong *)(lVar3 + 0x28);
          if ((*(longlong *)(lVar10 + lVar3) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          (**(code **)(**(longlong **)(lVar10 + lVar3) + 8))();
          lVar10 = lVar10 + -0x10;
          uVar7 = uVar7 - 1;
        } while (-1 < (int)uVar7);
      }
      iVar11 = iVar11 + 1;
      iVar12 = **(int **)((longlong)this + 0x10);
    } while (iVar11 < iVar12);
  }
  return;
}

// AddBodyForBone @ 14ded7050

void __thiscall FPBIKSolver::AddBodyForBone(FPBIKSolver *this,FBone *param_1)

{
  TArray<PBIK::FRigidBody,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  iVar3 = (this->Bodies).ArrayNum;
  pTVar1 = &this->Bodies;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  pFVar5 = pFVar4 + (longlong)iVar3 * 0x110;
  while( true ) {
    if ((this->Bodies).ArrayNum != iVar3) {
      `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(FBone **)pFVar4 == param_1) {
      return;
    }
    pFVar4 = pFVar4 + 0x110;
  }
  iVar3 = (this->Bodies).ArrayNum;
  piVar2 = &(this->Bodies).ArrayMax;
  if (iVar3 == *piVar2) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x110,0x10,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Bodies).ArrayNum = iVar3 + 1;
  PBIK::FRigidBody::FRigidBody
            ((FRigidBody *)((pTVar1->AllocatorInstance).Data + (longlong)iVar3 * 0x110),param_1);
  return;
}

// AddBone @ 14ded7100

int __thiscall
FPBIKSolver::AddBone
          (FPBIKSolver *this,FName param_1,int param_2,TVector<double> *param_3,
          TQuat<double> *param_4,bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  
  iVar5 = (this->Bones).ArrayNum;
  piVar1 = &(this->Bones).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10f0,&(this->Bones).AllocatorInstance,piVar1);
  }
  (this->Bones).ArrayNum = iVar5 + 1;
  lVar6 = (longlong)iVar5 * 0xf0;
  pFVar2 = (this->Bones).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar6 + 200) = 0;
  *(undefined8 *)(pFVar2 + lVar6 + 0xd0) = 0;
  *(undefined8 *)(pFVar2 + lVar6 + 0xdc) = 0;
  *(undefined8 *)(pFVar2 + lVar6 + 0xb8) = 0;
  *(undefined8 *)(pFVar2 + lVar6 + 0xc0) = 0;
  *(FName *)(pFVar2 + lVar6) = param_1;
  *(int *)(pFVar2 + lVar6 + 8) = param_2;
  *(undefined4 *)(pFVar2 + lVar6 + 0xd8) = 0xffffffff;
  dVar3 = (param_3->field0_0x0)._s_0.Y;
  *(double *)(pFVar2 + lVar6 + 0x10) = (param_3->field0_0x0)._s_0.X;
  *(double *)(pFVar2 + lVar6 + 0x10 + 8) = dVar3;
  *(double *)(pFVar2 + lVar6 + 0x20) = (param_3->field0_0x0)._s_0.Z;
  dVar3 = param_4->Y;
  *(double *)(pFVar2 + lVar6 + 0x30) = param_4->X;
  *(double *)(pFVar2 + lVar6 + 0x30 + 8) = dVar3;
  dVar3 = param_4->Z;
  dVar4 = param_4->W;
  pFVar2[lVar6 + 0xdc] = (FScriptContainerElement)param_5;
  *(double *)(pFVar2 + lVar6 + 0x40) = dVar3;
  *(double *)(pFVar2 + lVar6 + 0x40 + 8) = dVar4;
  return iVar5;
}

// AddEffector @ 14ded71f0

int __thiscall FPBIKSolver::AddEffector(FPBIKSolver *this,FName param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FName FVar4;
  uint uVar5;
  longlong lVar6;
  FName *pFVar7;
  FName *pFVar8;
  undefined1 local_res8 [8];
  
  iVar2 = (this->Bones).ArrayNum;
  pFVar8 = (FName *)(this->Bones).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar2 * 0x1e;
  while( true ) {
    if ((this->Bones).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar8 == pFVar7) break;
    if (*pFVar8 == param_1) {
      uVar5 = (this->Effectors).ArrayNum;
      piVar1 = &(this->Effectors).ArrayMax;
      if (uVar5 == *piVar1) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x110,0x10,&(this->Effectors).AllocatorInstance,piVar1);
      }
      (this->Effectors).ArrayNum = uVar5 + 1;
      lVar6 = (longlong)(int)uVar5 * 0x110;
      pFVar3 = (this->Effectors).AllocatorInstance.Data;
      *(undefined4 *)(pFVar3 + lVar6 + 0xc0) = 0x3f800000;
      *(undefined4 *)(pFVar3 + lVar6 + 0xc4) = 0x3f800000;
      *(undefined8 *)(pFVar3 + lVar6 + 200) = 0x3f800000;
      *(undefined4 *)(pFVar3 + lVar6 + 0xd0) = 0x3f800000;
      *(undefined4 *)(pFVar3 + lVar6 + 0xd4) = 0x3f800000;
      *(undefined8 *)(pFVar3 + lVar6 + 0xe8) = 0;
      *(undefined4 *)(pFVar3 + lVar6 + 0xf0) = 0xffffffff;
      *(undefined8 *)(pFVar3 + lVar6 + 0xf8) = 0;
      *(undefined8 *)(pFVar3 + lVar6 + 0x100) = 0;
      *(FName **)(pFVar3 + lVar6 + 0xd8) = pFVar8;
      FVar4 = pFVar8[3];
      *(FName *)(pFVar3 + lVar6 + 0x80) = pFVar8[2];
      ((FName *)(pFVar3 + lVar6 + 0x80))[1] = FVar4;
      *(FName *)(pFVar3 + lVar6 + 0x90) = pFVar8[4];
      FVar4 = pFVar8[7];
      *(FName *)(pFVar3 + lVar6 + 0xa0) = pFVar8[6];
      ((FName *)(pFVar3 + lVar6 + 0xa0))[1] = FVar4;
      FVar4 = pFVar8[9];
      *(FName *)(pFVar3 + lVar6 + 0xb0) = pFVar8[8];
      ((FName *)(pFVar3 + lVar6 + 0xb0))[1] = FVar4;
      pFVar8[0x1b].ComparisonIndex.Value = uVar5;
      return uVar5;
    }
    pFVar8 = pFVar8 + 0x1e;
  }
  return -1;
}

// ApplyPreferredAngles @ 14ded7af0

void __thiscall FPBIKSolver::ApplyPreferredAngles(FPBIKSolver *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FEffector *this_00;
  FEffector *pFVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Effectors).ArrayNum;
  this_00 = (FEffector *)(this->Effectors).AllocatorInstance.Data;
  pFVar9 = this_00 + iVar1;
  while( true ) {
    if ((this->Effectors).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    uVar5 = __real_3f800000;
    if (this_00 == pFVar9) break;
    PBIK::FEffector::ApplyPreferredAngles(this_00);
    this_00 = this_00 + 1;
  }
  uVar8 = (this->Constraints).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar10 = (longlong)(int)uVar8 << 4;
    do {
      uVar7 = 0;
      if ((int)uVar8 < (this->Constraints).ArrayNum) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Constraints).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar2 + lVar10) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)(pFVar2 + lVar10);
      (**(code **)(*plVar3 + 8))(plVar3,uVar5);
      lVar10 = lVar10 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// ApplyPullChainAlpha @ 14ded7c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FPBIKSolver::ApplyPullChainAlpha(FPBIKSolver *this,float param_1)

{
  double dVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  uint uVar40;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar41;
  double dVar42;
  uint uVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 local_res18 [8];
  float local_res20;
  TQuat<double> local_1f8;
  double local_1d8;
  uint local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  TVector<double>_u_0 local_1a8;
  double local_190;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_170;
  TVector<double>_u_0 local_158;
  double local_140;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  
  fVar9 = __real_3f800000;
  fVar8 = __real_322bcc77;
  if (__real_322bcc77 < (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    pFVar15 = (this->Effectors).AllocatorInstance.Data;
    local_1d0 = (this->Effectors).ArrayNum;
    uVar12 = (ulonglong)(int)local_1d0;
    pFVar16 = pFVar15 + uVar12 * 0x110;
    uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar35 = (undefined4)__real_3ff0000000000000;
    uVar36 = __real_3ff0000000000000._4_4_;
    while( true ) {
      if ((this->Effectors).ArrayNum != (int)uVar12) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar15 == pFVar16) break;
      dVar1 = *(double *)(pFVar15 + 0xe8);
      if (((dVar1 != 0.0) &&
          (fVar8 < *(float *)(pFVar15 + 0x108) || fVar8 == *(float *)(pFVar15 + 0x108))) &&
         (fVar8 < *(float *)(pFVar15 + 0xd0) || fVar8 == *(float *)(pFVar15 + 0xd0))) {
        local_138._s_0.X = *(double *)((longlong)dVar1 + 0xe0);
        local_138._s_0.Y = *(double *)((longlong)dVar1 + 0xe8);
        local_138._s_0.Z = *(double *)((longlong)dVar1 + 0xf0);
        UE::Math::TQuat<double>::RotateVector
                  ((TQuat<double> *)((longlong)dVar1 + 0x80),(TVector<double> *)&local_170._s_0,
                   (TVector<double> *)&local_138._s_0);
        dVar42 = local_170._s_0.X + *(double *)((longlong)dVar1 + 0x68);
        dVar38 = local_170._s_0.Y + *(double *)((longlong)dVar1 + 0x70);
        dVar29 = local_170._s_0.Z + *(double *)((longlong)dVar1 + 0x78);
        pdVar2 = *(double **)((longlong)dVar1 + 0x58);
        if (pdVar2 != (double *)0x0) {
          dVar42 = dVar42 + (*pdVar2 - pdVar2[8]);
          dVar38 = dVar38 + (pdVar2[1] - pdVar2[9]);
          dVar29 = dVar29 + (pdVar2[2] - pdVar2[10]);
        }
        dVar37 = *(double *)(pFVar15 + 0xe0);
        lVar13 = *(longlong *)((longlong)dVar37 + 0x58);
        local_118._s_0.X = *(double *)((longlong)dVar37 + 0x68);
        local_118._s_0.Y = *(double *)((longlong)dVar37 + 0x70);
        local_118._s_0.Z = *(double *)((longlong)dVar37 + 0x78);
        local_1c0 = dVar42;
        local_1b8 = dVar38;
        local_1b0 = dVar29;
        UE::Math::TQuat<double>::RotateVector
                  ((TQuat<double> *)(lVar13 + 0x80),(TVector<double> *)&local_158._s_0,
                   (TVector<double> *)&local_118._s_0);
        dVar37 = (local_158._s_0.X + *(double *)(lVar13 + 0x68)) - dVar42;
        dVar41 = (local_158._s_0.Y + *(double *)(lVar13 + 0x70)) - dVar38;
        dVar44 = (local_158._s_0.Z + *(double *)(lVar13 + 0x78)) - dVar29;
        auVar49._0_8_ = dVar37 * dVar37;
        auVar49._8_8_ = 0;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = dVar41 * dVar41 + auVar49._0_8_ + dVar44 * dVar44;
        auVar20 = sqrtpd(auVar49,auVar20);
        fVar28 = (float)auVar20._0_8_;
        local_1d8 = (double)CONCAT44(local_1d8._4_4_,fVar28);
        if (fVar28 <= fVar8) {
          local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          dVar34 = (double)(fVar9 / fVar28);
          local_188._s_0.X = dVar34 * dVar37;
          local_188._s_0.Y = dVar34 * dVar41;
          local_188._s_0.Z = dVar34 * dVar44;
        }
        dVar37 = *(double *)pFVar15 - dVar42;
        dVar41 = *(double *)(pFVar15 + 8) - dVar38;
        dVar44 = *(double *)(pFVar15 + 0x10) - dVar29;
        auVar21._0_8_ = dVar37 * dVar37;
        auVar21._8_8_ = 0;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = dVar41 * dVar41 + auVar21._0_8_ + dVar44 * dVar44;
        auVar20 = sqrtpd(auVar21,auVar5);
        local_res20 = (float)auVar20._0_8_;
        if (local_res20 <= fVar8) {
          local_1a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          dVar34 = (double)(fVar9 / local_res20);
          local_1a8._s_0.X = dVar34 * dVar37;
          local_1a8._s_0.Y = dVar34 * dVar41;
          local_1a8._s_0.Z = dVar34 * dVar44;
        }
        UE::Math::TQuat<double>::FindBetweenNormals
                  (&local_1f8,(TVector<double> *)&local_188._s_0,(TVector<double> *)&local_1a8._s_0)
        ;
        auVar39._0_8_ = (double)(*(float *)(pFVar15 + 200) * *(float *)(pFVar15 + 0xd0) * param_1);
        auVar39._8_8_ = 0;
        uVar40 = (uint)((ulonglong)auVar39._0_8_ >> 0x20);
        dVar37 = auVar39._0_8_;
        if (local_1f8.W * UE::Math::TQuat<double>::Identity.W +
            local_1f8.Z * UE::Math::TQuat<double>::Identity.Z +
            local_1f8.Y * UE::Math::TQuat<double>::Identity.Y +
            local_1f8.X * UE::Math::TQuat<double>::Identity.X < __real_0000000000000000) {
          uVar35 = (undefined4)__real_bff0000000000000;
          uVar36 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
          dVar37 = (double)CONCAT44(uVar40 ^ __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(auVar39._0_8_,0) ^
                                    (uint)__xmm_80000000000000008000000000000000);
        }
        dVar37 = (double)CONCAT44(uVar36,uVar35) - dVar37;
        uVar14 = 0;
        auVar22._8_4_ = SUB84(auVar39._0_8_,0);
        auVar22._0_8_ = auVar39._0_8_;
        auVar22._12_4_ = uVar40;
        dVar41 = dVar37 * UE::Math::TQuat<double>::Identity.X + auVar39._0_8_ * local_1f8.X;
        dVar44 = dVar37 * UE::Math::TQuat<double>::Identity.Y + auVar22._8_8_ * local_1f8.Y;
        dVar45 = dVar37 * UE::Math::TQuat<double>::Identity.Z + local_1f8.Z * auVar39._0_8_;
        dVar46 = dVar37 * UE::Math::TQuat<double>::Identity.W + local_1f8.W * auVar39._0_8_;
        auVar23._8_4_ = SUB84(dVar44,0);
        auVar23._0_8_ = dVar41;
        auVar23._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        auVar30._8_4_ = SUB84(dVar46,0);
        auVar30._0_8_ = dVar45;
        auVar30._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        dVar37 = dVar45 * dVar45 + dVar41 * dVar41;
        dVar34 = auVar30._8_8_ * dVar46 + auVar23._8_8_ * dVar44;
        auVar24._8_4_ = SUB84(dVar34,0);
        auVar24._0_8_ = dVar37;
        auVar24._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
        auVar25._0_8_ = auVar24._8_8_ + dVar37;
        auVar25._8_8_ = dVar37 + dVar34;
        auVar20 = sqrtpd(auVar39,auVar25);
        local_140 = __real_3e45798ee0000000;
        auVar49 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
        uVar18 = -(ulonglong)(__real_3e45798ee0000000 <= auVar25._0_8_);
        uVar19 = -(ulonglong)(__real_3e45798ee0000000 <= auVar25._8_8_);
        uVar40 = (uint)(uVar18 >> 0x20);
        uVar43 = (uint)(uVar19 >> 0x20);
        auVar50._0_8_ = uVar18 & (ulonglong)(auVar49._0_8_ * dVar41);
        uVar12 = uVar19 & (ulonglong)(auVar49._8_8_ * dVar44);
        auVar50._8_4_ = (undefined4)uVar12;
        auVar50._12_4_ = (undefined4)(uVar12 >> 0x20);
        auVar31._0_4_ =
             ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar31._4_4_ =
             ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar31._8_4_ =
             ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar31._12_4_ =
             ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar51 = auVar50 | auVar31;
        auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar20);
        auVar52._0_4_ =
             ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar52._4_4_ =
             ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar52._8_4_ =
             ~(uint)uVar19 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar52._12_4_ =
             ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        local_1f8.X = auVar51._0_8_;
        auVar32._0_8_ = (ulonglong)(auVar20._0_8_ * dVar45) & uVar18;
        uVar19 = (ulonglong)(auVar20._8_8_ * dVar46) & uVar19;
        auVar32._8_4_ = (undefined4)uVar19;
        auVar32._12_4_ = (undefined4)(uVar19 >> 0x20);
        auVar53 = auVar52 | auVar32;
        local_1f8.Y = auVar51._8_8_;
        local_1f8.W = auVar53._8_8_;
        dVar37 = (double)(local_res20 - local_1d8._0_4_);
        local_1f8.Z = auVar53._0_8_;
        lVar13 = *(longlong *)((longlong)*(double *)(pFVar15 + 0xd8) + 0xc0);
        local_1c8 = dVar37 * local_1a8._s_0.X * auVar39._0_8_;
        local_1d8 = dVar37 * local_1a8._s_0.Y * auVar39._0_8_;
        local_190 = dVar37 * local_1a8._s_0.Z * auVar39._0_8_;
        local_res20 = fVar9 / *(float *)(pFVar15 + 0x108);
        uVar35 = (undefined4)__real_3ff0000000000000;
        uVar36 = __real_3ff0000000000000._4_4_;
        if (lVar13 != 0) {
          lVar17 = 0;
          dVar41 = local_1f8.Y;
          dVar37 = local_1f8.W;
          do {
            lVar3 = *(longlong *)(lVar13 + 0xb8);
            if (((*(char *)(lVar3 + 0x104) == '\0') && (fVar8 < *(float *)(lVar3 + 0xf8))) &&
               (fVar8 < (float)((uint)(*(float *)(lVar3 + 0xc) - fVar9) & uVar11))) {
              dVar45 = auVar51._0_8_;
              dVar38 = *(double *)(lVar3 + 0x70) - dVar38;
              dVar29 = *(double *)(lVar3 + 0x78) - dVar29;
              dVar42 = *(double *)(lVar3 + 0x68) - dVar42;
              dVar34 = auVar53._0_8_;
              dVar44 = dVar41 * dVar29 - dVar34 * dVar38;
              dVar38 = dVar45 * dVar38 - dVar42 * dVar41;
              dVar44 = dVar44 + dVar44;
              dVar42 = dVar42 * dVar34 - dVar45 * dVar29;
              dVar38 = dVar38 + dVar38;
              dVar42 = dVar42 + dVar42;
              *(double *)(lVar3 + 0x68) =
                   (dVar41 * dVar38 - dVar34 * dVar42) + dVar37 * dVar44 + *(double *)(lVar3 + 0x68)
              ;
              *(double *)(lVar3 + 0x70) =
                   (dVar34 * dVar44 - dVar45 * dVar38) + dVar37 * dVar42 + *(double *)(lVar3 + 0x70)
              ;
              *(double *)(lVar3 + 0x78) =
                   (dVar45 * dVar42 - dVar41 * dVar44) + dVar37 * dVar38 + *(double *)(lVar3 + 0x78)
              ;
              uVar11 = 0;
              if ((int)uVar14 < *(int *)(pFVar15 + 0x100)) {
                uVar11 = ~uVar14 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
              lVar3 = *(longlong *)(lVar13 + 0xb8);
              dVar38 = (double)(fVar9 - local_res20 *
                                        *(float *)(lVar17 + (longlong)*(double *)(pFVar15 + 0xf8)));
              *(double *)(lVar3 + 0x68) = local_1c8 * dVar38 + *(double *)(lVar3 + 0x68);
              *(double *)(lVar3 + 0x70) = local_1d8 * dVar38 + *(double *)(lVar3 + 0x70);
              *(double *)(lVar3 + 0x78) = local_190 * dVar38 + *(double *)(lVar3 + 0x78);
              auVar53._8_8_ = 0;
              auVar53._0_8_ = local_1f8.Z;
              auVar51._8_8_ = 0;
              auVar51._0_8_ = local_1f8.X;
              dVar41 = local_1f8.Y;
              dVar37 = local_1f8.W;
            }
            lVar3 = *(longlong *)(lVar13 + 0xb8);
            if (((*(char *)(lVar3 + 0x104) == '\0') && (fVar8 < *(float *)(lVar3 + 0xf8))) &&
               (fVar8 < (float)((uint)(*(float *)(lVar3 + 8) - fVar9) & uVar11))) {
              dVar29 = *(double *)(lVar3 + 0x90);
              dVar37 = *(double *)(lVar3 + 0x98);
              dVar41 = *(double *)(lVar3 + 0x80);
              dVar44 = *(double *)(lVar3 + 0x88);
              auVar26._8_4_ = SUB84(local_1f8.W,0);
              auVar26._0_8_ = local_1f8.W;
              auVar26._12_4_ = (int)((ulonglong)local_1f8.W >> 0x20);
              auVar33._8_4_ = SUB84(local_1f8.Y,0);
              auVar33._0_8_ = local_1f8.Y;
              auVar33._12_4_ = (int)((ulonglong)local_1f8.Y >> 0x20);
              auVar27._8_4_ = SUB84(local_1f8.Z,0);
              auVar27._0_8_ = local_1f8.Z;
              auVar27._12_4_ = (int)((ulonglong)local_1f8.Z >> 0x20);
              dVar38 = local_1f8.X * dVar37 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                       local_1f8.W * dVar41 +
                       local_1f8.Y * dVar29 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                       local_1f8.Z * dVar44 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              dVar42 = local_1f8.X * dVar29 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                       auVar26._8_8_ * dVar44 +
                       auVar33._8_8_ * dVar37 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                       auVar27._8_8_ * dVar41 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              uVar35 = SUB84(dVar42,0);
              uVar36 = (undefined4)((ulonglong)dVar42 >> 0x20);
              dVar42 = local_1f8.X * dVar44 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                       local_1f8.W * dVar29 +
                       local_1f8.Y * dVar41 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                       local_1f8.Z * dVar37 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
              dVar29 = local_1f8.X * dVar41 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                       local_1f8.W * dVar37 +
                       local_1f8.Y * dVar44 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                       local_1f8.Z * dVar29 *
                       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
              uVar47 = SUB84(dVar29,0);
              uVar48 = (undefined4)((ulonglong)dVar29 >> 0x20);
              auVar6._8_4_ = uVar35;
              auVar6._0_8_ = dVar38;
              auVar6._12_4_ = uVar36;
              *(undefined1 (*) [16])(lVar3 + 0x80) = auVar6;
              auVar7._8_4_ = uVar47;
              auVar7._0_8_ = dVar42;
              auVar7._12_4_ = uVar48;
              *(undefined1 (*) [16])(lVar3 + 0x90) = auVar7;
              auVar53._8_8_ = 0;
              auVar53._0_8_ = local_1f8.Z;
              auVar51._8_8_ = 0;
              auVar51._0_8_ = local_1f8.X;
              local_f8._8_4_ = uVar35;
              local_f8._0_8_ = dVar38;
              local_f8._12_4_ = uVar36;
              local_e8._8_4_ = uVar47;
              local_e8._0_8_ = dVar42;
              local_e8._12_4_ = uVar48;
              dVar37 = local_1f8.W;
              dVar41 = local_1f8.Y;
            }
            uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
            uVar35 = (undefined4)__real_3ff0000000000000;
            uVar36 = __real_3ff0000000000000._4_4_;
            if (*(double *)(lVar13 + 0xb8) == dVar1) break;
            lVar13 = *(longlong *)(lVar13 + 0xc0);
            uVar14 = uVar14 + 1;
            lVar17 = lVar17 + 4;
            dVar42 = local_1c0;
            dVar38 = local_1b8;
            dVar29 = local_1b0;
          } while (lVar13 != 0);
        }
      }
      uVar12 = (ulonglong)local_1d0;
      pFVar15 = pFVar15 + 0x110;
    }
  }
  return;
}

// ApplyRootPrePull @ 14ded8680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FPBIKSolver::ApplyRootPrePull
          (FPBIKSolver *this,EPBIKRootBehavior param_1,FRootPrePullSettings *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FRigidBody *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [12];
  ulonglong uVar15;
  double dVar16;
  undefined8 uVar17;
  int iVar18;
  bool bVar19;
  ForElementType<UE::Math::TVector<double>_> FVar20;
  TVector<double> *pTVar21;
  longlong lVar22;
  ForElementType<UE::Math::TVector<double>_> FVar23;
  FScriptContainerElement *pFVar24;
  ForElementType<UE::Math::TVector<double>_> FVar25;
  FScriptContainerElement *pFVar26;
  ForElementType<UE::Math::TVector<double>_> FVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  double dVar30;
  undefined1 auVar32 [16];
  double dVar31;
  double dVar37;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar47;
  undefined1 auVar46 [16];
  uint uVar48;
  uint uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStackY_488 [32];
  undefined1 local_438;
  undefined1 local_437 [15];
  undefined1 local_428 [24];
  double dStack_410;
  double local_408;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3c8;
  double dStack_3c0;
  undefined1 local_3b8 [16];
  TVector<double>_u_0 local_3a8;
  TVector<double>_u_0 local_390;
  TArrayView<UE::Math::TVector<double>,int> local_378;
  TArrayView<UE::Math::TVector<double>,int> local_368;
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  TVector<double>_u_0 local_338;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  TVector<double> local_2b8;
  TQuat<double> local_298;
  ForElementType<UE::Math::TVector<double>_> local_278;
  int local_1b0;
  int local_1ac;
  ForElementType<UE::Math::TVector<double>_> local_1a8;
  int local_e0;
  int local_dc;
  ulonglong local_d8;
  
  if (param_1 == PrePull) {
    local_d8 = __security_cookie.value ^ (ulonglong)auStackY_488;
    uVar48 = (this->Effectors).ArrayNum;
    local_1ac = 8;
    local_278.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
    local_1b0 = 0;
    local_1a8.SecondaryData = (ForElementType<UE::Math::TVector<double>_>)0x0;
    local_e0 = 0;
    local_dc = 8;
    if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
    }
    if (8 < (int)uVar48) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                (0x18,8,uVar48,&local_278,0,&local_1ac);
    }
    uVar48 = (this->Effectors).ArrayNum;
    if ((int)uVar48 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar48);
    }
    if (local_dc < (int)uVar48) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                (0x18,8,uVar48,&local_1a8,local_e0,&local_dc);
    }
    FVar23 = (ForElementType<UE::Math::TVector<double>_>)(this->Effectors).AllocatorInstance.Data;
    iVar4 = (this->Effectors).ArrayNum;
    FVar25 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar23 + 0x40);
    FVar27 = (ForElementType<UE::Math::TVector<double>_>)
             ((longlong)iVar4 * 0x110 + (longlong)FVar23);
    while( true ) {
      if ((this->Effectors).ArrayNum != iVar4) {
        local_438 = 0;
        `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_438);
      }
      iVar18 = local_e0;
      if (FVar23 == FVar27) break;
      FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_278;
      if (local_278.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar20 = local_278.SecondaryData;
      }
      if ((ulonglong)FVar20 <= (ulonglong)FVar25) {
        FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_278;
        if (local_278.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar20 = local_278.SecondaryData;
        }
        if (((ulonglong)FVar25 < (ulonglong)((longlong)FVar20 + (longlong)local_1ac * 0x18)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (local_1b0 == local_1ac) {
        local_1b0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                              (0x818,&local_278,&local_1ac);
      }
      lVar22 = (longlong)local_1b0;
      FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_278;
      if (local_278.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar20 = local_278.SecondaryData;
      }
      local_1b0 = local_1b0 + 1;
      uVar17 = *(undefined8 *)((longlong)FVar25 + 8);
      pFVar24 = (FScriptContainerElement *)((longlong)FVar20 + lVar22 * 0x18);
      *(undefined8 *)pFVar24 = *(undefined8 *)FVar25;
      *(undefined8 *)(pFVar24 + 8) = uVar17;
      *(undefined8 *)((FScriptContainerElement *)((longlong)FVar20 + 0x10) + lVar22 * 0x18) =
           *(undefined8 *)((longlong)FVar25 + 0x10);
      FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_1a8;
      if (local_1a8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar20 = local_1a8.SecondaryData;
      }
      if ((ulonglong)FVar20 <= (ulonglong)FVar23) {
        FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_1a8;
        if (local_1a8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
          FVar20 = local_1a8.SecondaryData;
        }
        if (((ulonglong)FVar23 < (ulonglong)((longlong)FVar20 + (longlong)local_dc * 0x18)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (local_e0 == local_dc) {
        local_e0 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Math::TVector<double>_>_>
                             (0x818,&local_1a8,&local_dc);
      }
      uVar17 = *(undefined8 *)((longlong)FVar23 + 8);
      FVar20 = (ForElementType<UE::Math::TVector<double>_>)&local_1a8;
      if (local_1a8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
        FVar20 = local_1a8.SecondaryData;
      }
      lVar22 = (longlong)local_e0;
      pFVar24 = (FScriptContainerElement *)((longlong)FVar20 + lVar22 * 0x18);
      local_e0 = local_e0 + 1;
      *(undefined8 *)pFVar24 = *(undefined8 *)FVar23;
      *(undefined8 *)(pFVar24 + 8) = uVar17;
      pFVar24 = (FScriptContainerElement *)((longlong)FVar23 + 0x10);
      FVar23 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar23 + 0x110);
      *(undefined8 *)((FScriptContainerElement *)((longlong)FVar20 + 0x10) + lVar22 * 0x18) =
           *(undefined8 *)pFVar24;
      FVar25 = (ForElementType<UE::Math::TVector<double>_>)((longlong)FVar25 + 0x110);
    }
    local_378.DataPtr = (TVector<double> *)&local_1a8;
    if (local_1a8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      local_378.DataPtr = (TVector<double> *)local_1a8.SecondaryData;
    }
    local_390._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_3a8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_390._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_390._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_3a8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_3a8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if ((local_e0 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar4 = local_1b0;
    local_378.ArrayNum = iVar18;
    local_368.DataPtr = (TVector<double> *)&local_278;
    if (local_278.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      local_368.DataPtr = (TVector<double> *)local_278.SecondaryData;
    }
    if ((local_1b0 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_368.ArrayNum = iVar4;
    GetRotationFromDeformedPoints
              (&local_298,&local_368,&local_378,(TVector<double> *)&local_390._s_0,
               (TVector<double> *)&local_3a8._s_0);
    fVar1 = param_2->PositionAlphaX;
    dVar11 = local_3a8._s_0.X - local_390._s_0.X;
    dVar12 = local_3a8._s_0.Y - local_390._s_0.Y;
    dVar13 = local_3a8._s_0.Z - local_390._s_0.Z;
    dVar30 = (double)param_2->PositionAlpha;
    fVar2 = param_2->PositionAlphaY;
    fVar3 = param_2->PositionAlphaZ;
    pTVar21 = UE::Math::TQuat<double>::Euler(&local_298,&local_2b8);
    local_338._s_0.Z = (double)param_2->RotationAlphaZ * (pTVar21->field0_0x0)._s_0.Z;
    local_338._s_0.Y = (double)param_2->RotationAlphaY * (pTVar21->field0_0x0)._s_0.Y;
    local_338._s_0.X = (double)param_2->RotationAlphaX * (pTVar21->field0_0x0)._s_0.X;
    UE::Math::TQuat<double>::MakeFromEuler
              ((TQuat<double> *)local_428,(TVector<double> *)&local_338._s_0);
    auVar40._0_8_ = (double)param_2->RotationAlpha;
    auVar40._8_8_ = 0;
    if (dStack_410 * UE::Math::TQuat<double>::Identity.W +
        (double)local_428._16_8_ * UE::Math::TQuat<double>::Identity.Z +
        (double)local_428._8_8_ * UE::Math::TQuat<double>::Identity.Y +
        (double)local_428._0_8_ * UE::Math::TQuat<double>::Identity.X < 0.0) {
      uVar38 = (undefined4)__real_bff0000000000000;
      uVar39 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      dVar44 = (double)CONCAT44((uint)((ulonglong)auVar40._0_8_ >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(auVar40._0_8_,0) ^
                                (uint)__xmm_80000000000000008000000000000000);
    }
    else {
      uVar38 = (undefined4)__real_3ff0000000000000;
      uVar39 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      dVar44 = auVar40._0_8_;
    }
    dVar44 = (double)CONCAT44(uVar39,uVar38) - dVar44;
    auVar45._8_4_ = SUB84(dVar44,0);
    auVar45._0_8_ = dVar44;
    auVar45._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    dVar43 = dVar44 * UE::Math::TQuat<double>::Identity.X + (double)local_428._0_8_ * auVar40._0_8_;
    dVar47 = auVar45._8_8_ * UE::Math::TQuat<double>::Identity.Y +
             (double)local_428._8_8_ * auVar40._0_8_;
    dVar9 = (double)local_428._16_8_ * auVar40._0_8_ + dVar44 * UE::Math::TQuat<double>::Identity.Z;
    dVar10 = dStack_410 * auVar40._0_8_ + dVar44 * UE::Math::TQuat<double>::Identity.W;
    auVar32._8_4_ = SUB84(dVar10,0);
    auVar32._0_8_ = dVar9;
    auVar32._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    dVar31 = dVar9 * dVar9 + dVar43 * dVar43;
    dVar37 = auVar32._8_8_ * dVar10 + dVar47 * dVar47;
    dVar44 = dVar37 + dVar31;
    dVar31 = dVar31 + dVar37;
    auVar50._8_4_ = SUB84(dVar31,0);
    auVar50._0_8_ = dVar44;
    auVar50._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    auVar40 = sqrtpd(auVar40,auVar50);
    uVar28 = -(ulonglong)(__real_3e45798ee0000000 <= dVar44);
    uVar29 = -(ulonglong)(__real_3e45798ee0000000 <= dVar31);
    auVar50 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar40);
    uVar48 = (uint)(uVar28 >> 0x20);
    uVar49 = (uint)(uVar29 >> 0x20);
    auVar33._0_4_ = ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
    auVar33._4_4_ =
         ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
    auVar33._8_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar33._12_4_ =
         ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    auVar51._0_8_ = uVar28 & (ulonglong)(auVar50._0_8_ * dVar43);
    uVar15 = uVar29 & (ulonglong)(auVar50._8_8_ * dVar47);
    auVar51._8_4_ = (undefined4)uVar15;
    auVar51._12_4_ = (undefined4)(uVar15 >> 0x20);
    auVar51 = auVar51 | auVar33;
    auVar46._0_4_ = ~(uint)uVar28 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
    auVar46._4_4_ =
         ~uVar48 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
    auVar46._8_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    auVar46._12_4_ =
         ~uVar49 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar40);
    auVar34._0_8_ = (ulonglong)(auVar40._0_8_ * dVar9) & uVar28;
    uVar29 = (ulonglong)(auVar40._8_8_ * dVar10) & uVar29;
    auVar34._8_4_ = (undefined4)uVar29;
    auVar34._12_4_ = (undefined4)(uVar29 >> 0x20);
    register0x00001300 = auVar46 | auVar34;
    auVar14._4_8_ = auVar34._8_8_;
    auVar14._0_4_ = auVar51._4_4_;
    auVar35._0_8_ = auVar14._0_8_ << 0x20;
    auVar35._8_4_ = auVar51._8_4_;
    auVar35._12_4_ = auVar51._12_4_;
    local_428._8_8_ = auVar35._8_8_;
    pFVar5 = this->SolverRoot->Body;
    dVar47 = local_428._24_8_;
    local_2c8 = *(undefined1 (*) [16])&(pFVar5->Position).field0_0x0;
    local_408 = *(double *)((longlong)&(pFVar5->Position).field0_0x0 + 0x10);
    dVar9 = (pFVar5->Rotation).X;
    dVar10 = (pFVar5->Rotation).Y;
    dVar37 = (pFVar5->Rotation).Z;
    dVar43 = (pFVar5->Rotation).W;
    dVar44 = dVar9 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar31 = dVar10 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar39 = (undefined4)((ulonglong)dVar31 >> 0x20);
    local_3f8 = dVar37 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dStack_3f0 = dVar43 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_348._8_4_ = SUB84(dVar31,0);
    local_348._0_8_ = dVar44;
    local_348._12_4_ = uVar39;
    local_3e8 = local_2c8._0_8_ + dVar11 * (double)fVar1 * dVar30;
    local_318._8_4_ = local_2c8._8_4_;
    local_318._0_8_ = local_2c8._8_8_;
    local_318._12_4_ = local_2c8._12_4_;
    local_3e0 = local_2c8._8_8_ + dVar12 * (double)fVar2 * dVar30;
    uVar54 = SUB84(local_408,0);
    uVar55 = (undefined4)((ulonglong)local_408 >> 0x20);
    local_3d8 = local_408 + dVar13 * (double)fVar3 * dVar30;
    iVar4 = (this->Bodies).ArrayNum;
    pFVar24 = (this->Bodies).AllocatorInstance.Data;
    local_428._0_8_ = auVar51._0_8_;
    auVar52._8_4_ = auVar51._0_4_;
    auVar52._0_8_ = local_428._0_8_;
    auVar52._12_4_ = auVar51._4_4_;
    dVar11 = local_428._16_8_;
    local_2e8 = (double)local_428._0_8_ * dVar43 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar9 * dVar47 +
                dVar37 * (double)local_428._8_8_ *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                dVar11 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dStack_2e0 = auVar52._8_8_ * dVar37 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar10 * dVar47 +
                 dVar43 * (double)local_428._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar12 = (double)local_428._0_8_ * dVar9 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar43 * dVar47 +
             dVar10 * (double)local_428._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar11 * dVar37 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    uVar38 = (undefined4)((ulonglong)dVar12 >> 0x20);
    pFVar26 = pFVar24 + (longlong)iVar4 * 0x110;
    local_358._8_4_ = SUB84(dStack_3f0,0);
    local_358._0_8_ = dStack_3f0;
    local_358._12_4_ = (int)((ulonglong)dStack_3f0 >> 0x20);
    local_2d8._8_4_ = SUB84(dVar12,0);
    local_2d8._0_8_ = dVar12;
    local_2d8._12_4_ = uVar38;
    local_308._8_4_ = SUB84(dStack_2e0,0);
    local_308._0_8_ = dStack_2e0;
    local_308._12_4_ = (int)((ulonglong)dStack_2e0 >> 0x20);
    local_2f8._8_4_ = SUB84(dVar12,0);
    local_2f8._0_8_ =
         (double)local_428._0_8_ * dVar10 *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar37 * dVar47 +
         dVar9 * (double)local_428._8_8_ *
         GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar11 * dVar43 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_2f8._12_4_ = uVar38;
    local_3b8._8_4_ = SUB84(dVar31,0);
    local_3b8._0_8_ = dVar31;
    local_3b8._12_4_ = uVar39;
    uVar38 = local_2c8._0_4_;
    uVar39 = local_2c8._4_4_;
    dVar11 = dVar31;
    while( true ) {
      uVar56 = (undefined4)((ulonglong)dVar31 >> 0x20);
      if ((this->Bodies).ArrayNum != iVar4) {
        `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_437);
        dVar11 = (double)local_3b8._0_8_;
      }
      if (pFVar24 == pFVar26) break;
      dVar47 = *(double *)(pFVar24 + 0x90);
      dVar16 = *(double *)(pFVar24 + 0x98);
      auVar41._8_4_ = SUB84(dVar31,0);
      auVar41._0_8_ = dVar44;
      auVar41._12_4_ = uVar56;
      auVar40 = *(undefined1 (*) [16])(pFVar24 + 0x80);
      dVar12 = *(double *)(pFVar24 + 0x78) - (double)CONCAT44(uVar55,uVar54);
      dVar13 = *(double *)(pFVar24 + 0x70) - (double)local_318._0_8_;
      dVar10 = *(double *)(pFVar24 + 0x68) - (double)CONCAT44(uVar39,uVar38);
      dVar42 = auVar41._8_8_;
      dVar9 = dVar12 * dVar11 - dVar13 * local_3f8;
      dVar30 = local_3f8 * dVar10 - dVar12 * dVar44;
      dVar9 = dVar9 + dVar9;
      auVar36._8_4_ = SUB84(dVar31,0);
      auVar36._0_8_ = dVar42;
      auVar36._12_4_ = uVar56;
      dVar30 = dVar30 + dVar30;
      dVar11 = dVar13 * dVar44 - dVar11 * dVar10;
      dVar53 = auVar40._8_8_;
      dVar11 = dVar11 + dVar11;
      auVar7._8_4_ = auVar40._0_4_;
      auVar7._0_8_ = dVar53;
      auVar7._12_4_ = auVar40._4_4_;
      dStack_3c0 = auVar7._8_8_;
      dVar37 = dVar16 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               auVar40._0_8_ * dStack_3f0 +
               dVar42 * dVar47 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar53 * local_3f8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar43 = dVar47 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               dVar53 * dStack_3f0 +
               auVar36._8_8_ * dVar16 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
               dStack_3c0 * local_3f8 *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_3c8 = dVar53 * dVar44 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                  + dStack_3f0 * dVar47 +
                  auVar40._0_8_ * dVar42 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                  dVar16 * local_3f8 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dStack_3c0 = dStack_3c0 * dVar44 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                   dStack_3f0 * dVar16 +
                   dVar53 * dVar31 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                   + dVar47 * local_3f8 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar12 = (dVar30 * (double)local_348._0_8_ - dVar9 * (double)local_3b8._0_8_) +
               dVar11 * (double)local_358._0_8_ + dVar12;
      dVar31 = (dVar9 * local_3f8 - dVar11 * (double)local_348._0_8_) +
               dVar30 * (double)local_358._0_8_ + dVar13;
      dVar13 = (dVar11 * (double)local_3b8._0_8_ - dVar30 * local_3f8) +
               dVar9 * (double)local_358._0_8_ + dVar10;
      dVar11 = dVar12 * (double)local_308._0_8_ - dVar31 * (double)local_2f8._0_8_;
      dVar11 = dVar11 + dVar11;
      dVar44 = dVar13 * (double)local_2f8._0_8_ - dVar12 * local_2e8;
      dVar30 = dVar31 * local_2e8 - dVar13 * (double)local_308._0_8_;
      dVar44 = dVar44 + dVar44;
      dVar30 = dVar30 + dVar30;
      *(double *)(pFVar24 + 0x68) =
           (dVar30 * (double)local_308._0_8_ - dVar44 * (double)local_2f8._0_8_) + dVar13 +
           dVar11 * (double)local_2d8._0_8_ + local_3e8;
      *(double *)(pFVar24 + 0x70) =
           (dVar11 * (double)local_2f8._0_8_ - dVar30 * local_2e8) + dVar31 +
           dVar44 * (double)local_2d8._0_8_ + local_3e0;
      *(double *)(pFVar24 + 0x78) =
           (dVar44 * local_2e8 - dVar11 * (double)local_308._0_8_) + dVar12 +
           dVar30 * (double)local_2d8._0_8_ + local_3d8;
      uVar54 = SUB84(local_408,0);
      uVar55 = (undefined4)((ulonglong)local_408 >> 0x20);
      dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar30 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar44 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar9 = local_2e8 * local_3c8 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar43 * (double)local_2f8._8_8_ +
              dStack_3c0 * dStack_2e0 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
              (double)local_2f8._0_8_ * dVar37 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar13 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar31 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      auVar8._8_4_ = SUB84(dVar9,0);
      auVar8._0_8_ = local_2e8 * dStack_3c0 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                     dVar37 * (double)local_2f8._8_8_ +
                     local_3c8 * dStack_2e0 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                     (double)local_2f8._0_8_ * dVar43 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(pFVar24 + 0x80) = auVar8;
      *(double *)(pFVar24 + 0x90) =
           local_2e8 * dVar43 * dVar11 + local_3c8 * (double)local_2f8._8_8_ +
           dVar37 * dStack_2e0 * dVar12 + (double)local_2f8._0_8_ * dStack_3c0 * dVar13;
      *(double *)(pFVar24 + 0x98) =
           local_2e8 * dVar37 * dVar30 + dStack_3c0 * (double)local_2f8._8_8_ +
           dVar43 * dStack_2e0 * dVar44 + (double)local_2f8._0_8_ * local_3c8 * dVar31;
      pFVar24 = pFVar24 + 0x110;
      uVar38 = local_2c8._0_4_;
      uVar39 = local_2c8._4_4_;
      dVar44 = (double)local_348._0_8_;
      dVar31 = (double)local_348._8_8_;
      dVar11 = (double)local_3b8._0_8_;
    }
    if (local_1a8.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FMemory::Free((void *)local_1a8.SecondaryData);
    }
    if (local_278.SecondaryData != (ForElementType<UE::Math::TVector<double>_>)0x0) {
      FMemory::Free((void *)local_278.SecondaryData);
    }
  }
  return;
}

// GetBoneGlobalTransform @ 14deda380

void __thiscall
FPBIKSolver::GetBoneGlobalTransform(FPBIKSolver *this,int param_1,TTransform<double> *param_2)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  
  if ((param_1 < 0) || ((this->Bones).ArrayNum <= param_1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Bones.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\PBIK\\Private\\Core\\PBIKSolver.cpp"
                       ,1000,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar7 = 0;
  if (param_1 < (this->Bones).ArrayNum) {
    uVar7 = (uint)~param_1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Bones).AllocatorInstance.Data;
  lVar8 = (longlong)param_1 * 0xf0;
  dVar4 = *(double *)(pFVar2 + lVar8 + 0x10 + 8);
  dVar1 = *(double *)(pFVar2 + lVar8 + 0x20);
  (param_2->Translation).XY.m128d_f64[0] = *(double *)(pFVar2 + lVar8 + 0x10);
  (param_2->Translation).XY.m128d_f64[1] = dVar4;
  (param_2->Translation).ZW.m128d_f64[0] = dVar1;
  (param_2->Translation).ZW.m128d_f64[1] = 0.0;
  dVar1 = *(double *)(pFVar2 + lVar8 + 0x30 + 8);
  dVar4 = *(double *)(pFVar2 + lVar8 + 0x40);
  dVar5 = *(double *)(pFVar2 + lVar8 + 0x40 + 8);
  (param_2->Rotation).XY.m128d_f64[0] = *(double *)(pFVar2 + lVar8 + 0x30);
  (param_2->Rotation).XY.m128d_f64[1] = dVar1;
  (param_2->Rotation).ZW.m128d_f64[0] = dVar4;
  (param_2->Rotation).ZW.m128d_f64[1] = dVar5;
  dVar4 = *(double *)(pFVar2 + lVar8 + 0x50 + 8);
  dVar1 = *(double *)(pFVar2 + lVar8 + 0x60);
  (param_2->Scale3D).XY.m128d_f64[0] = *(double *)(pFVar2 + lVar8 + 0x50);
  (param_2->Scale3D).XY.m128d_f64[1] = dVar4;
  (param_2->Scale3D).ZW.m128d_f64[0] = dVar1;
  (param_2->Scale3D).ZW.m128d_f64[1] = 0.0;
  return;
}

// GetBoneIndex @ 14deda470

int __thiscall FPBIKSolver::GetBoneIndex(FPBIKSolver *this,FName param_1)

{
  FName *pFVar1;
  longlong lVar2;
  FName *pFVar3;
  
  pFVar1 = (FName *)(this->Bones).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (longlong)(this->Bones).ArrayNum * 0x1e) {
      return -1;
    }
    if (*pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 0x1e;
  }
  lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816((longlong)pFVar3 - (longlong)pFVar1),8) +
          ((longlong)pFVar3 - (longlong)pFVar1);
  return (int)(lVar2 >> 7) - (int)(lVar2 >> 0x3f);
}

// GetBoneSettings @ 14deda4d0

FBoneSettings * __thiscall FPBIKSolver::GetBoneSettings(FPBIKSolver *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBoneSettings *pFVar4;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  
  if (this->bReadyToSimulate == false) {
    local_res8[0] = 0;
    bVar2 = `FPBIKSolver::GetBoneSettings'::__l3::<lambda_1>::operator()(local_res8);
    if (!bVar2) {
      return (FBoneSettings *)0x0;
    }
  }
  if ((param_1 < 0) || ((this->Bones).ArrayNum <= param_1)) {
    local_res18[0] = 0;
    bVar2 = `FPBIKSolver::GetBoneSettings'::__l6::<lambda_2>::operator()(local_res18);
    if (!bVar2) {
      return (FBoneSettings *)0x0;
    }
  }
  uVar3 = 0;
  if (param_1 < (this->Bones).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FBoneSettings *)(*pcVar1)();
    return pFVar4;
  }
  if (*(longlong *)((this->Bones).AllocatorInstance.Data + (longlong)param_1 * 0xf0 + 0xb8) == 0) {
    return (FBoneSettings *)0x0;
  }
  uVar3 = 0;
  if (param_1 < (this->Bones).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FBoneSettings *)(*pcVar1)();
    return pFVar4;
  }
  return (FBoneSettings *)
         (*(longlong *)((this->Bones).AllocatorInstance.Data + (longlong)param_1 * 0xf0 + 0xb8) + 8)
  ;
}

// GetDebugDraw @ 14deda680

FDebugDraw * __thiscall FPBIKSolver::GetDebugDraw(FPBIKSolver *this)

{
  (this->DebugDraw).Solver = this;
  return &this->DebugDraw;
}

// GetRotationFromDeformedPoints @ 14deda8c0

TQuat<double> * __cdecl
FPBIKSolver::GetRotationFromDeformedPoints
          (TQuat<double> *__return_storage_ptr__,TArrayView<UE::Math::TVector<double>,int> *param_1,
          TArrayView<UE::Math::TVector<double>,int> *param_2,TVector<double> *param_3,
          TVector<double> *param_4)

{
  code *pcVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  bool bVar5;
  TQuat<double> *pTVar6;
  TVector<double> *pTVar7;
  int iVar8;
  TVector<double> *pTVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 extraout_XMM0 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar22;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar39;
  double dVar40;
  uint uVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  double local_res10;
  double local_res18;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 local_198 [32];
  double local_178;
  undefined1 local_108 [208];
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InInitialPoints.Num() == InCurrentPoints.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\PBIK\\Private\\Core\\PBIKSolver.cpp"
                         ,0x407,L""), bVar5)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TQuat<double> *)(*pcVar1)();
    return pTVar6;
  }
  if (param_1->ArrayNum < 2) {
    pTVar9 = &UE::Math::TVector<double>::ZeroVector;
    if (param_1->ArrayNum == 1) {
      pTVar7 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_1,0);
    }
    else {
      pTVar7 = &UE::Math::TVector<double>::ZeroVector;
    }
    dVar46 = (pTVar7->field0_0x0)._s_0.Y;
    (param_3->field0_0x0)._s_0.X = (pTVar7->field0_0x0)._s_0.X;
    (param_3->field0_0x0)._s_0.Y = dVar46;
    (param_3->field0_0x0)._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    if (param_2->ArrayNum == 1) {
      pTVar9 = TArrayView<UE::Math::TVector<double>,int>::operator[](param_2,0);
    }
    dVar46 = (pTVar9->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.X = (pTVar9->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar46;
    (param_4->field0_0x0)._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
    dVar27 = UE::Math::TQuat<double>::Identity.W;
    dVar22 = UE::Math::TQuat<double>::Identity.Z;
    dVar46 = UE::Math::TQuat<double>::Identity.Y;
    __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
    __return_storage_ptr__->Y = dVar46;
    __return_storage_ptr__->Z = dVar22;
    __return_storage_ptr__->W = dVar27;
  }
  else {
    dVar46 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    uVar12 = 0;
    (param_3->field0_0x0)._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    (param_3->field0_0x0)._s_0.Y = dVar46;
    (param_3->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar46 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                              UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    (param_4->field0_0x0)._s_0.X =
         (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                          UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    (param_4->field0_0x0)._s_0.Y = dVar46;
    (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    iVar8 = param_1->ArrayNum;
    uVar10 = uVar12;
    uVar15 = uVar12;
    if (0 < iVar8) {
      do {
        uVar13 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar13 < iVar8) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TQuat<double> *)(*pcVar1)();
          return pTVar6;
        }
        pTVar9 = param_1->DataPtr;
        (param_3->field0_0x0)._s_0.X =
             (param_3->field0_0x0)._s_0.X + *(double *)((longlong)&pTVar9->field0_0x0 + uVar10);
        (param_3->field0_0x0)._s_0.Y =
             *(double *)((longlong)&pTVar9->field0_0x0 + uVar10 + 8) + (param_3->field0_0x0)._s_0.Y;
        (param_3->field0_0x0)._s_0.Z =
             *(double *)((longlong)&pTVar9->field0_0x0 + uVar10 + 0x10) +
             (param_3->field0_0x0)._s_0.Z;
        uVar11 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          pTVar6 = (TQuat<double> *)(*pcVar1)();
          return pTVar6;
        }
        pTVar9 = param_2->DataPtr;
        (param_4->field0_0x0)._s_0.X =
             *(double *)((longlong)&pTVar9->field0_0x0 + uVar10) + (param_4->field0_0x0)._s_0.X;
        (param_4->field0_0x0)._s_0.Y =
             *(double *)((longlong)&pTVar9->field0_0x0 + uVar10 + 8) + (param_4->field0_0x0)._s_0.Y;
        (param_4->field0_0x0)._s_0.Z =
             *(double *)((longlong)&pTVar9->field0_0x0 + uVar10 + 0x10) +
             (param_4->field0_0x0)._s_0.Z;
        iVar8 = param_1->ArrayNum;
        uVar10 = uVar10 + 0x18;
        uVar15 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < iVar8);
    }
    dVar22 = __real_3e45798ee0000000;
    dVar46 = __real_3ff0000000000000;
    uVar52 = SUB84(__real_3ff0000000000000,0);
    uVar53 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    dVar27 = (double)(__real_3f800000 / (float)iVar8);
    (param_3->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X * dVar27;
    (param_3->field0_0x0)._s_0.Y = (param_3->field0_0x0)._s_0.Y * dVar27;
    (param_3->field0_0x0)._s_0.Z = dVar27 * (param_3->field0_0x0)._s_0.Z;
    (param_4->field0_0x0)._s_0.X = (param_4->field0_0x0)._s_0.X * dVar27;
    (param_4->field0_0x0)._s_0.Y = (param_4->field0_0x0)._s_0.Y * dVar27;
    (param_4->field0_0x0)._s_0.Z = dVar27 * (param_4->field0_0x0)._s_0.Z;
    iVar8 = param_1->ArrayNum;
    uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar37 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    if (iVar8 < 1) {
      local_1c8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_res18 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_res10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1c0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_1a8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1b8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_1a0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    }
    else {
      local_1a8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_1a0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_1c8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_res18 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                     UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      local_res10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_1c0 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_1b8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                   UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      local_1b0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar10 = uVar12;
      uVar15 = uVar12;
      uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      do {
        uVar13 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar13 < iVar8) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            pTVar6 = (TQuat<double> *)(*pcVar1)();
            return pTVar6;
          }
          uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar37 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          dVar22 = __real_3e45798ee0000000;
          uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        pTVar9 = param_1->DataPtr;
        dVar29 = *(double *)((longlong)&pTVar9->field0_0x0 + uVar10) - (param_3->field0_0x0)._s_0.X;
        dVar44 = *(double *)((longlong)&pTVar9->field0_0x0 + uVar10 + 8) -
                 (param_3->field0_0x0)._s_0.Y;
        dVar27 = *(double *)((longlong)&pTVar9->field0_0x0 + uVar10 + 0x10) -
                 (param_3->field0_0x0)._s_0.Z;
        dVar28 = dVar44 * dVar44 + dVar29 * dVar29 + dVar27 * dVar27;
        if (dVar28 != dVar46) {
          if (dVar22 <= dVar28) {
            dVar22 = dVar46 / SQRT(dVar28);
            dVar29 = dVar29 * dVar22;
            dVar44 = dVar44 * dVar22;
            dVar27 = dVar27 * dVar22;
          }
          else {
            auVar4._4_4_ = uVar50;
            auVar4._0_4_ = uVar39;
            auVar4._8_4_ = uVar51;
            dVar27 = (double)CONCAT44(uVar37,uVar34);
            dVar44 = auVar4._4_8_;
            dVar29 = (double)CONCAT44(uVar39,uVar38);
          }
        }
        uVar11 = 0;
        if ((int)uVar13 < param_2->ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar5) {
            pcVar1 = (code *)swi(3);
            pTVar6 = (TQuat<double> *)(*pcVar1)();
            return pTVar6;
          }
          uVar34 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
          uVar37 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
          uVar38 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
          uVar39 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
          uVar50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
          uVar51 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
        }
        pTVar9 = param_2->DataPtr;
        dVar22 = *(double *)((longlong)&pTVar9->field0_0x0 + uVar10) - (param_4->field0_0x0)._s_0.X;
        dVar40 = *(double *)((longlong)&pTVar9->field0_0x0 + uVar10 + 8) -
                 (param_4->field0_0x0)._s_0.Y;
        dVar42 = *(double *)((longlong)&pTVar9->field0_0x0 + uVar10 + 0x10) -
                 (param_4->field0_0x0)._s_0.Z;
        dVar28 = dVar40 * dVar40 + dVar22 * dVar22 + dVar42 * dVar42;
        if (dVar28 != dVar46) {
          if (__real_3e45798ee0000000 <= dVar28) {
            dVar28 = dVar46 / SQRT(dVar28);
            dVar22 = dVar22 * dVar28;
            dVar40 = dVar40 * dVar28;
            dVar42 = dVar42 * dVar28;
          }
          else {
            dVar40 = (double)CONCAT44(uVar51,uVar50);
            dVar42 = (double)CONCAT44(uVar37,uVar34);
            dVar22 = (double)CONCAT44(uVar39,uVar38);
          }
        }
        iVar8 = param_1->ArrayNum;
        uVar15 = (ulonglong)(uVar13 + 1);
        uVar10 = uVar10 + 0x18;
        local_1c8 = local_1c8 + dVar40 * dVar29;
        local_178 = local_178 + dVar42 * dVar29;
        local_res18 = local_res18 + dVar22 * dVar29;
        local_1c0 = local_1c0 + dVar40 * dVar44;
        local_1a8 = local_1a8 + dVar22 * dVar44;
        local_res10 = local_res10 + dVar42 * dVar44;
        local_1b8 = local_1b8 + dVar40 * dVar27;
        local_1a0 = local_1a0 + dVar22 * dVar27;
        local_1b0 = local_1b0 + dVar42 * dVar27;
        dVar22 = __real_3e45798ee0000000;
      } while ((int)(uVar13 + 1) < iVar8);
    }
    uVar34 = SUB84(UE::Math::TQuat<double>::Identity.Z,0);
    uVar37 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Z >> 0x20);
    uVar38 = SUB84(UE::Math::TQuat<double>::Identity.W,0);
    uVar39 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.W >> 0x20);
    auVar48._8_8_ = 0;
    auVar48._0_8_ = UE::Math::TQuat<double>::Identity.X;
    uVar50 = SUB84(UE::Math::TQuat<double>::Identity.Y,0);
    uVar51 = (undefined4)((ulonglong)UE::Math::TQuat<double>::Identity.Y >> 0x20);
    local_198._8_8_ = UE::Math::TQuat<double>::Identity.W;
    local_198._0_8_ = UE::Math::TQuat<double>::Identity.Z;
    local_108._8_8_ = UE::Math::TQuat<double>::Identity.Y;
    local_108._0_8_ = UE::Math::TQuat<double>::Identity.X;
    while( true ) {
      dVar27 = auVar48._0_8_;
      dVar29 = (double)CONCAT44(uVar37,uVar34) * __real_4000000000000000;
      dVar21 = (double)CONCAT44(uVar51,uVar50) * __real_4000000000000000;
      dVar45 = dVar27 * dVar27 * __real_4000000000000000;
      dVar22 = (double)CONCAT44(uVar39,uVar38) * dVar27 * __real_4000000000000000;
      dVar40 = (double)CONCAT44(uVar39,uVar38) * dVar21;
      dVar43 = (double)CONCAT44(uVar51,uVar50) * dVar21;
      dVar46 = (double)CONCAT44(uVar37,uVar34) * dVar29;
      dVar44 = (double)CONCAT44(uVar39,uVar38) * dVar29;
      dVar42 = (double)CONCAT44(uVar51,uVar50) * dVar29;
      dVar28 = dVar40 + dVar29 * dVar27;
      dVar40 = dVar29 * dVar27 - dVar40;
      dVar29 = dVar27 * dVar21 - dVar44;
      dVar44 = dVar44 + dVar27 * dVar21;
      dVar21 = (double)CONCAT44(uVar53,uVar52) - (dVar46 + dVar43);
      dVar46 = __real_3ff0000000000000 - (dVar46 + dVar45);
      dVar27 = dVar42 - dVar22;
      dVar22 = dVar22 + dVar42;
      dVar45 = __real_3ff0000000000000 - (dVar43 + dVar45);
      dVar42 = dVar45 * local_1b0 + dVar28 * local_1a0 + dVar27 * local_1b8 +
               dVar22 * local_res10 + dVar29 * local_1a8 +
               dVar46 * local_1c0 + dVar40 * local_178 + dVar44 * local_1c8 + dVar21 * local_res18;
      dVar42 = __real_3ff0000000000000 /
               ((double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
               __real_3e45798ee0000000);
      dVar43 = ((dVar44 * local_178 - dVar40 * local_1c8) +
                (dVar46 * local_res10 - dVar22 * local_1c0) +
               (dVar27 * local_1b0 - dVar45 * local_1b8)) * dVar42;
      dVar22 = ((dVar40 * local_res18 - dVar21 * local_178) +
                (dVar22 * local_1a8 - dVar29 * local_res10) +
               (dVar45 * local_1a0 - dVar28 * local_1b0)) * dVar42;
      dVar42 = ((dVar21 * local_1c8 - dVar44 * local_res18) +
                (dVar29 * local_1c0 - dVar46 * local_1a8) +
               (dVar28 * local_1b8 - dVar27 * local_1a0)) * dVar42;
      fVar33 = (float)SQRT(dVar22 * dVar22 + dVar43 * dVar43 + dVar42 * dVar42);
      if (fVar33 < __real_322bcc77) break;
      dVar46 = __real_3ff0000000000000 / (double)fVar33;
      __libm_sse2_sincos_();
      dVar27 = extraout_XMM0._0_8_;
      dVar21 = dVar43 * dVar46 * dVar27;
      dVar29 = dVar42 * dVar46 * dVar27;
      dVar27 = dVar22 * dVar46 * dVar27;
      auVar47._8_4_ = extraout_XMM0._8_4_;
      auVar47._0_8_ = dVar29;
      auVar47._12_4_ = extraout_XMM0._12_4_;
      dVar46 = auVar47._8_8_;
      auVar32._8_4_ = extraout_XMM0._8_4_;
      auVar32._0_8_ = dVar46;
      auVar32._12_4_ = extraout_XMM0._12_4_;
      auVar35._8_4_ = SUB84(dVar21,0);
      auVar35._0_8_ = dVar21;
      auVar35._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      auVar23._8_4_ = SUB84(dVar27,0);
      auVar23._0_8_ = dVar27;
      auVar23._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar16._8_4_ = SUB84(dVar29,0);
      auVar16._0_8_ = dVar29;
      auVar16._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      dVar28 = auVar16._8_8_ * (double)local_108._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      dVar44 = dVar21 * (double)local_198._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
               dVar46 * (double)local_108._0_8_ +
               dVar27 * (double)local_198._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
               dVar29 * (double)local_108._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar40 = auVar35._8_8_ * (double)local_198._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
               auVar32._8_8_ * (double)local_108._8_8_ +
               auVar23._8_8_ * (double)local_198._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] + dVar28;
      auVar2._4_8_ = local_108._0_8_;
      auVar2._0_4_ = (int)((ulonglong)dVar44 >> 0x20);
      auVar30._0_8_ = auVar2._0_8_ << 0x20;
      auVar30._8_4_ = SUB84(dVar40,0);
      uVar34 = (undefined4)((ulonglong)dVar40 >> 0x20);
      auVar30._12_4_ = uVar34;
      dVar46 = dVar21 * (double)local_108._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
               dVar46 * (double)local_198._0_8_ +
               dVar27 * (double)local_108._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
               dVar29 * (double)local_198._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar22 = dVar21 * (double)local_108._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
               extraout_XMM0._8_8_ * (double)local_198._8_8_ +
               dVar27 * (double)local_108._8_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
               dVar29 * (double)local_198._0_8_ *
               GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      uVar37 = SUB84(dVar22,0);
      uVar52 = (undefined4)((ulonglong)dVar22 >> 0x20);
      dVar29 = auVar30._8_8_;
      auVar31._8_8_ = dVar40;
      auVar31._0_8_ = dVar29;
      auVar3._4_8_ = dVar28;
      auVar3._0_4_ = (int)((ulonglong)dVar46 >> 0x20);
      auVar17._0_8_ = auVar3._0_8_ << 0x20;
      auVar17._8_4_ = uVar37;
      auVar17._12_4_ = uVar52;
      auVar18._8_4_ = SUB84(dVar40,0);
      auVar18._0_8_ = dVar44;
      auVar18._12_4_ = uVar34;
      auVar24._8_4_ = uVar37;
      auVar24._0_8_ = dVar46;
      auVar24._12_4_ = uVar52;
      dVar22 = dVar46 * dVar46 + dVar44 * dVar44;
      dVar27 = auVar24._8_8_ * auVar17._8_8_ + auVar18._8_8_ * dVar29;
      auVar19._8_4_ = SUB84(dVar27,0);
      auVar19._0_8_ = dVar22;
      auVar19._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
      auVar20._0_8_ = auVar19._8_8_ + dVar22;
      auVar20._8_8_ = dVar22 + dVar27;
      auVar32 = sqrtpd(auVar31,auVar20);
      auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
      uVar14 = -(ulonglong)(__real_3e45798ee0000000 <= auVar20._0_8_);
      uVar15 = -(ulonglong)(__real_3e45798ee0000000 <= auVar20._8_8_);
      uVar13 = (uint)(uVar14 >> 0x20);
      auVar49._0_8_ = uVar14 & (ulonglong)(auVar48._0_8_ * dVar44);
      uVar10 = uVar15 & (ulonglong)(auVar48._8_8_ * dVar29);
      auVar49._8_4_ = (undefined4)uVar10;
      uVar41 = (uint)(uVar15 >> 0x20);
      auVar49._12_4_ = (undefined4)(uVar10 >> 0x20);
      auVar25._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar25._4_4_ =
           ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar25._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar25._12_4_ =
           ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      uVar11 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar11;
      auVar48 = auVar49 | auVar25;
      auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar32);
      auVar36._0_4_ = ~(uint)uVar14 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar36._4_4_ =
           ~uVar13 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar36._8_4_ = ~(uint)uVar15 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar36._12_4_ =
           ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar26._0_8_ = (ulonglong)(auVar32._0_8_ * dVar46) & uVar14;
      uVar15 = (ulonglong)(auVar32._8_8_ * auVar17._8_8_) & uVar15;
      auVar26._8_4_ = (undefined4)uVar15;
      auVar26._12_4_ = (undefined4)(uVar15 >> 0x20);
      local_198._0_16_ = auVar36 | auVar26;
      local_108._0_16_ = auVar48;
      if (0x31 < uVar11) break;
      uVar52 = SUB84(__real_3ff0000000000000,0);
      uVar53 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar38 = local_198._8_4_;
      uVar39 = local_198._12_4_;
      uVar50 = auVar48._8_4_;
      uVar51 = auVar48._12_4_;
      uVar34 = local_198._0_4_;
      uVar37 = local_198._4_4_;
    }
    __return_storage_ptr__->X = (double)local_108._0_8_;
    __return_storage_ptr__->Y = (double)local_108._8_8_;
    __return_storage_ptr__->Z = (double)local_198._0_8_;
    __return_storage_ptr__->W = (double)local_198._8_8_;
  }
  return __return_storage_ptr__;
}

// InitBodies @ 14dedb5c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPBIKSolver::InitBodies(FPBIKSolver *this)

{
  int *piVar1;
  int iVar2;
  FBone *pFVar3;
  int iVar4;
  ulonglong uVar5;
  FScriptContainerElement *pFVar6;
  FRigidBody *this_00;
  FScriptContainerElement *pFVar7;
  FRigidBody *pFVar8;
  FBone *pFVar9;
  FScriptContainerElement *pFVar10;
  FIdentityFunctor local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  
  piVar1 = &(this->Bodies).ArrayMax;
  (this->Bodies).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,0x10,0,&(this->Bodies).AllocatorInstance,0,piVar1);
  }
  local_res10 = (this->Effectors).ArrayNum;
  uVar5 = (ulonglong)(int)local_res10;
  pFVar10 = (this->Effectors).AllocatorInstance.Data;
  local_res18 = pFVar10 + uVar5 * 0x110;
  while( true ) {
    pFVar6 = local_res18;
    if ((this->Effectors).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar10 == pFVar6) break;
    pFVar9 = *(FBone **)(pFVar10 + 0xd8);
    do {
      if (pFVar9->bIsSolverRoot == false) {
        pFVar9 = pFVar9->Parent;
      }
      if (pFVar9 == (FBone *)0x0) {
        if (2 < (byte)LogPBIKSolver._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPBIKSolver);
        }
        return false;
      }
      iVar2 = (this->Bodies).ArrayNum;
      pFVar6 = (this->Bodies).AllocatorInstance.Data;
      pFVar7 = pFVar6 + (longlong)iVar2 * 0x110;
      while( true ) {
        if ((this->Bodies).ArrayNum != iVar2) {
          `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar6 == pFVar7) break;
        if (*(FBone **)pFVar6 == pFVar9) goto LAB_14dedb6d5;
        pFVar6 = pFVar6 + 0x110;
      }
      iVar2 = (this->Bodies).ArrayNum;
      if (iVar2 == *piVar1) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x110,0x10,&(this->Bodies).AllocatorInstance,piVar1);
      }
      (this->Bodies).ArrayNum = iVar2 + 1;
      PBIK::FRigidBody::FRigidBody
                ((FRigidBody *)((this->Bodies).AllocatorInstance.Data + (longlong)iVar2 * 0x110),
                 pFVar9);
LAB_14dedb6d5:
    } while (pFVar9 != this->SolverRoot);
    pFVar10 = pFVar10 + 0x110;
    uVar5 = (ulonglong)local_res10;
  }
  iVar2 = (this->Bodies).ArrayNum;
  this_00 = (FRigidBody *)(this->Bodies).AllocatorInstance.Data;
  pFVar8 = this_00 + iVar2;
  do {
    if ((this->Bodies).ArrayNum != iVar2) {
      `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar8) {
      AlgoImpl::
      IntroSortInternal<PBIK::FRigidBody,int,FIdentityFunctor,TDereferenceWrapper<PBIK::FRigidBody,TLess<void>_>_>
                ((FRigidBody *)(this->Bodies).AllocatorInstance.Data,(this->Bodies).ArrayNum,
                 local_res8[0],(TLess<void> *)local_res8);
      AlgoImpl::Reverse<PBIK::FRigidBody>
                ((FRigidBody *)(this->Bodies).AllocatorInstance.Data,(this->Bodies).ArrayNum);
      iVar2 = (this->Bodies).ArrayNum;
      pFVar10 = (this->Bodies).AllocatorInstance.Data;
      pFVar6 = pFVar10 + (longlong)iVar2 * 0x110;
      while( true ) {
        if ((this->Bodies).ArrayNum != iVar2) {
          `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar10 == pFVar6) break;
        *(FScriptContainerElement **)(*(longlong *)pFVar10 + 0xb8) = pFVar10;
        pFVar10 = pFVar10 + 0x110;
      }
      return true;
    }
    pFVar9 = this->SolverRoot;
    PBIK::FRigidBody::UpdateTransformAndMassFromBones(this_00);
    pFVar3 = this_00->Bone;
    this_00->NumBonesToRoot = 0;
    if (pFVar3 != (FBone *)0x0) {
      iVar4 = 1;
      do {
        if (pFVar3 == pFVar9) break;
        this_00->NumBonesToRoot = iVar4;
        iVar4 = iVar4 + 1;
        pFVar3 = pFVar3->Parent;
      } while (pFVar3 != (FBone *)0x0);
    }
    this_00 = this_00 + 1;
  } while( true );
}

// InitBones @ 14dedb810

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPBIKSolver::InitBones(FPBIKSolver *this)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  longlong lVar18;
  TRotator<double> *pTVar19;
  ulonglong uVar20;
  FBone *pFVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  FBone *pFVar28;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7;
  undefined1 local_f6;
  undefined1 local_f5 [5];
  FScriptContainerElement *local_f0;
  uint local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  TRotator<double> local_b8 [5];
  
  iVar1 = (this->Bones).ArrayNum;
  if (iVar1 == 0) {
    if (2 < (byte)LogPBIKSolver._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPBIKSolver);
      return false;
    }
  }
  else if ((this->Effectors).ArrayNum == 0) {
    if (2 < (byte)LogPBIKSolver._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPBIKSolver);
      return false;
    }
  }
  else {
    pFVar21 = (FBone *)(this->Bones).AllocatorInstance.Data;
    iVar25 = 0;
    pFVar28 = pFVar21 + iVar1;
    while( true ) {
      if ((this->Bones).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar21 == pFVar28) break;
      if (pFVar21->bIsSolverRoot != false) {
        this->SolverRoot = pFVar21;
        iVar25 = iVar25 + 1;
      }
      pFVar21 = pFVar21 + 1;
    }
    if (this->SolverRoot == (FBone *)0x0) {
      if (2 < (byte)LogPBIKSolver._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPBIKSolver);
        return false;
      }
    }
    else {
      if (iVar25 < 2) {
        iVar1 = (this->Bones).ArrayNum;
        pFVar26 = (this->Bones).AllocatorInstance.Data;
        pFVar23 = pFVar26 + (longlong)iVar1 * 0xf0;
        while( true ) {
          if ((this->Bones).ArrayNum != iVar1) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
          }
          if (pFVar26 == pFVar23) break;
          uVar2 = *(uint *)(pFVar26 + 8);
          if (uVar2 != 0xffffffff) {
            if (((int)uVar2 < 0) || ((this->Bones).ArrayNum <= (int)uVar2)) {
              if ((byte)LogPBIKSolver._0_1_ < 3) {
                return false;
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPBIKSolver);
              return false;
            }
            uVar17 = 0;
            if ((int)uVar2 < (this->Bones).ArrayNum) {
              uVar17 = ~uVar2 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar15)) {
              pcVar4 = (code *)swi(3);
              uVar16 = (*pcVar4)();
              return (bool)uVar16;
            }
            *(FScriptContainerElement **)(pFVar26 + 0xc0) =
                 (this->Bones).AllocatorInstance.Data + (longlong)(int)uVar2 * 0xf0;
          }
          pFVar26 = pFVar26 + 0xf0;
        }
        iVar1 = (this->Bones).ArrayNum;
        pFVar26 = (this->Bones).AllocatorInstance.Data;
        pFVar23 = pFVar26 + (longlong)iVar1 * 0xf0;
LAB_14dedba43:
        do {
          if ((this->Bones).ArrayNum != iVar1) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (pFVar26 == pFVar23) {
            iVar1 = (this->Effectors).ArrayNum;
            pFVar26 = (this->Effectors).AllocatorInstance.Data;
            pFVar23 = pFVar26 + (longlong)iVar1 * 0x110;
            do {
              if ((this->Effectors).ArrayNum != iVar1) {
                local_res20[0] = 0;
                `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_res20);
              }
              if (pFVar26 == pFVar23) {
                local_e8 = (this->Bones).ArrayNum;
                uVar20 = (ulonglong)(int)local_e8;
                pFVar23 = (this->Bones).AllocatorInstance.Data;
                pFVar26 = pFVar23 + 0xd0;
                pFVar27 = pFVar23 + uVar20 * 0xf0;
                while( true ) {
                  if ((this->Bones).ArrayNum != (int)uVar20) {
                    local_f8 = 0;
                    `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_f8);
                  }
                  iVar1 = (this->Bones).ArrayNum;
                  pFVar22 = (this->Bones).AllocatorInstance.Data;
                  pFVar24 = pFVar22 + (longlong)iVar1 * 0xf0;
                  if (pFVar23 == pFVar27) break;
                  while( true ) {
                    if ((this->Bones).ArrayNum != iVar1) {
                      local_f7 = 0;
                      `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::
                      operator()(&local_f7);
                    }
                    if (pFVar22 == pFVar24) break;
                    if ((pFVar22[0xdd] != (FScriptContainerElement)0x0) &&
                       (*(FScriptContainerElement **)(pFVar22 + 0xc0) == pFVar23)) {
                      local_f0 = pFVar22;
                      if ((*(FScriptContainerElement ***)(pFVar26 + -8) <= &local_f0) &&
                         ((&local_f0 <
                           *(FScriptContainerElement ***)(pFVar26 + -8) + *(int *)(pFVar26 + 4) &&
                          (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                               ,0x7a5,
                                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                              ), bVar15)))) {
                        pcVar4 = (code *)swi(3);
                        uVar16 = (*pcVar4)();
                        return (bool)uVar16;
                      }
                      iVar25 = *(int *)pFVar26;
                      if (iVar25 == *(int *)(pFVar26 + 4)) {
                        iVar25 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x808,(ForAnyElementType *)(pFVar26 + -8),
                                            (int *)(pFVar26 + 4));
                      }
                      *(int *)pFVar26 = iVar25 + 1;
                      *(FScriptContainerElement **)
                       (*(longlong *)(pFVar26 + -8) + (longlong)iVar25 * 8) = local_f0;
                    }
                    pFVar22 = pFVar22 + 0xf0;
                  }
                  uVar20 = (ulonglong)local_e8;
                  pFVar23 = pFVar23 + 0xf0;
                  pFVar26 = pFVar26 + 0xf0;
                }
                while( true ) {
                  if ((this->Bones).ArrayNum != iVar1) {
                    `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(&local_f6);
                  }
                  if (pFVar22 == pFVar24) break;
                  if (((*(int *)(pFVar22 + 0xd0) < 2) &&
                      (pFVar22[0xdc] == (FScriptContainerElement)0x0)) &&
                     (*(int *)(pFVar22 + 0xd8) == -1)) {
                    pFVar22[0xde] = (FScriptContainerElement)0x0;
                    pFVar22 = pFVar22 + 0xf0;
                  }
                  else {
                    pFVar22[0xde] = (FScriptContainerElement)0x1;
                    pFVar22 = pFVar22 + 0xf0;
                  }
                }
                pFVar23 = (this->Bones).AllocatorInstance.Data;
                iVar1 = (this->Bones).ArrayNum;
                pFVar26 = pFVar23 + 0x30;
                pFVar27 = pFVar23 + (longlong)iVar1 * 0xf0;
                while( true ) {
                  if ((this->Bones).ArrayNum != iVar1) {
                    `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::
                    operator()(local_f5);
                  }
                  if (pFVar23 == pFVar27) break;
                  dVar3 = *(double *)(pFVar26 + 0x90);
                  if (dVar3 == 0.0) {
                    dVar10 = *(double *)pFVar26;
                    dVar5 = *(double *)(pFVar26 + 8);
                    dVar3 = *(double *)(pFVar26 + 0x10);
                    dVar9 = *(double *)(pFVar26 + 0x18);
                  }
                  else {
                    dVar11 = *(double *)(pFVar26 + 0x10);
                    dVar12 = *(double *)(pFVar26 + 0x18);
                    dVar13 = *(double *)pFVar26;
                    dVar14 = *(double *)(pFVar26 + 8);
                    dVar5 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
                            *(double *)((longlong)dVar3 + 0x30);
                    dVar6 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
                            *(double *)((longlong)dVar3 + 0x38);
                    dVar7 = *(double *)((longlong)dVar3 + 0x40) *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
                    dVar8 = *(double *)((longlong)dVar3 + 0x48) *
                            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
                    dVar3 = dVar14 * dVar5 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                            dVar8 * dVar11 +
                            dVar13 * dVar6 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                            dVar7 * dVar12 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
                    dVar9 = dVar13 * dVar5 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                            dVar8 * dVar12 +
                            dVar14 * dVar6 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                            dVar7 * dVar11 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
                    dVar10 = dVar5 * dVar12 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                             dVar13 * dVar8 +
                             dVar6 * dVar11 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                             dVar14 * dVar7 *
                             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
                    dVar5 = dVar5 * dVar11 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                            dVar14 * dVar8 +
                            dVar6 * dVar12 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                            dVar13 * dVar7 *
                            GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
                  }
                  local_d8._8_4_ = SUB84(dVar5,0);
                  local_d8._0_8_ = dVar10;
                  local_d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
                  local_c8._8_4_ = SUB84(dVar9,0);
                  local_c8._0_8_ = dVar3;
                  local_c8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
                  pTVar19 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_d8,local_b8);
                  pFVar23 = pFVar23 + 0xf0;
                  dVar3 = pTVar19->Yaw;
                  *(double *)(pFVar26 + 0x70) = pTVar19->Pitch;
                  *(double *)(pFVar26 + 0x78) = dVar3;
                  *(double *)(pFVar26 + 0x80) = pTVar19->Roll;
                  pFVar26 = pFVar26 + 0xf0;
                }
                return true;
              }
              lVar18 = *(longlong *)(pFVar26 + 0xd8);
              *(undefined1 *)(lVar18 + 0xdd) = 1;
              do {
                *(undefined1 *)(lVar18 + 0xdd) = 1;
                if (*(char *)(lVar18 + 0xdc) != '\0') break;
                lVar18 = *(longlong *)(lVar18 + 0xc0);
              } while (lVar18 != 0);
              pFVar26 = pFVar26 + 0x110;
            } while( true );
          }
          if (pFVar26[0xdc] == (FScriptContainerElement)0x0) {
            lVar18 = *(longlong *)(pFVar26 + 0xc0);
            if (lVar18 != 0) {
              do {
                if (*(char *)(lVar18 + 0xdc) != '\0') goto LAB_14dedba95;
                lVar18 = *(longlong *)(lVar18 + 0xc0);
              } while (lVar18 != 0);
              pFVar26 = pFVar26 + 0xf0;
              goto LAB_14dedba43;
            }
          }
          else {
LAB_14dedba95:
            pFVar26[0xdf] = (FScriptContainerElement)0x1;
          }
          pFVar26 = pFVar26 + 0xf0;
        } while( true );
      }
      if (2 < (byte)LogPBIKSolver._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPBIKSolver);
        return false;
      }
    }
  }
  return false;
}

// InitConstraints @ 14dedbea0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPBIKSolver::InitConstraints(FPBIKSolver *this)

{
  TArray<TSharedPtr<PBIK::FConstraint,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TTypeCompatibleBytes<PBIK::FJointConstraint> *pTVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  FBone *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  TReferenceControllerBase<1> *pTVar16;
  TIntrusiveReferenceController<PBIK::FJointConstraint,1> *pTVar17;
  ulonglong uVar18;
  TReferenceControllerBase<1> *pTVar19;
  atomic<int> *paVar20;
  FRigidBody *pFVar21;
  TReferenceControllerBase<1> *pTVar22;
  FRigidBody *pFVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TTypeCompatibleBytes<PBIK::FJointConstraint> *local_e8;
  TIntrusiveReferenceController<PBIK::FJointConstraint,1> *local_e0;
  TReferenceControllerBase<1> *local_d8;
  TReferenceControllerBase<1> *local_d0;
  FRigidBody *local_c8;
  FScriptContainerElement *local_c0;
  FRigidBody *local_b8 [2];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  
  pTVar1 = &this->Constraints;
  DestructItems<TSharedPtr<PBIK::FConstraint,1>,int>
            ((TSharedPtr<PBIK::FConstraint,1> *)(pTVar1->AllocatorInstance).Data,
             (this->Constraints).ArrayNum);
  piVar2 = &(this->Constraints).ArrayMax;
  (this->Constraints).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  local_res20 = (this->Effectors).ArrayNum;
  uVar18 = (ulonglong)(int)local_res20;
  pFVar24 = (this->Effectors).AllocatorInstance.Data;
  local_c0 = pFVar24 + uVar18 * 0x110;
  while( true ) {
    pFVar5 = local_c0;
    pTVar19 = (TReferenceControllerBase<1> *)0x0;
    if ((this->Effectors).ArrayNum != (int)uVar18) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar24 == pFVar5) break;
    lVar15 = *(longlong *)(pFVar24 + 0xd8);
    if (*(char *)(lVar15 + 0xdc) == '\0') {
      lVar15 = *(longlong *)(lVar15 + 0xc0);
    }
    if (lVar15 == 0) {
      if (2 < (byte)LogPBIKSolver._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogPBIKSolver);
      }
      return false;
    }
    lVar15 = *(longlong *)(lVar15 + 0xb8);
    pTVar16 = ::operator_new(0x90);
    if (pTVar16 == (TReferenceControllerBase<1> *)0x0) {
      paVar20 = (atomic<int> *)&DAT_00000008;
      pTVar22 = (TReferenceControllerBase<1> *)&DAT_00000010;
    }
    else {
      pTVar16->SharedReferenceCount = (atomic<int>)0x1;
      pTVar16->WeakReferenceCount = (atomic<int>)0x1;
      pTVar16->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFPinConstraint_PBIK___00_SharedPointerInternals__6B_
      ;
      lVar4 = *(longlong *)(pFVar24 + 0xd8);
      pTVar16[1]._padding_ = (longlong)&___7FPinConstraint_PBIK__6B_;
      pTVar16[7]._padding_ = lVar4;
      *(undefined1 *)&pTVar16[1].SharedReferenceCount = 1;
      *(undefined4 *)&pTVar16[6]._padding_ = 0x3f800000;
      pTVar16[6].SharedReferenceCount = (atomic<int>)(int)lVar15;
      pTVar16[6].WeakReferenceCount = (atomic<int>)(int)((ulonglong)lVar15 >> 0x20);
      dVar9 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
              *(double *)(lVar15 + 0x88);
      dVar8 = *(double *)(lVar15 + 0x98) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      local_68._8_4_ = SUB84(dVar9,0);
      local_68._0_8_ =
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] * *(double *)(lVar15 + 0x80)
      ;
      local_68._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_58._8_4_ = SUB84(dVar8,0);
      local_58._0_8_ =
           *(double *)(lVar15 + 0x90) * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0]
      ;
      local_58._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar8 = *(double *)(lVar4 + 0x18) - *(double *)(lVar15 + 0x70);
      local_a8._s_0.Z = *(double *)(lVar4 + 0x20) - *(double *)(lVar15 + 0x78);
      local_a8._8_4_ = SUB84(dVar8,0);
      local_a8._0_8_ = *(double *)(lVar4 + 0x10) - *(double *)(lVar15 + 0x68);
      local_a8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)local_68,(TVector<double> *)&local_88._s_0,
                 (TVector<double> *)&local_a8._s_0);
      pTVar22 = pTVar16 + 1;
      *(double *)&pTVar16[7].SharedReferenceCount = local_88._s_0.X;
      pTVar16[8]._padding_ = (longlong)local_88._s_0.Y;
      *(double *)&pTVar16[8].SharedReferenceCount = local_88._s_0.Z;
      uVar10 = *(undefined8 *)(lVar4 + 0x18);
      pTVar16[2]._padding_ = *(longlong *)(lVar4 + 0x10);
      pTVar16[2].SharedReferenceCount = (atomic<int>)(int)uVar10;
      pTVar16[2].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar10 >> 0x20);
      pTVar16[3]._padding_ = *(longlong *)(lVar4 + 0x20);
      uVar10 = *(undefined8 *)(lVar4 + 0x38);
      pTVar16[4]._padding_ = *(longlong *)(lVar4 + 0x30);
      pTVar16[4].SharedReferenceCount = (atomic<int>)(int)uVar10;
      pTVar16[4].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar10 >> 0x20);
      uVar10 = *(undefined8 *)(lVar4 + 0x48);
      pTVar16[5]._padding_ = *(longlong *)(lVar4 + 0x40);
      pTVar16[5].SharedReferenceCount = (atomic<int>)(int)uVar10;
      pTVar16[5].WeakReferenceCount = (atomic<int>)(int)((ulonglong)uVar10 >> 0x20);
      if ((pTVar22 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      paVar20 = &pTVar16->SharedReferenceCount;
      LOCK();
      *paVar20 = (atomic<int>)((int)*paVar20 + 1);
      UNLOCK();
      pTVar19 = pTVar16;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    *(TReferenceControllerBase<1> **)(pFVar24 + 0xe0) = pTVar22;
    *(FScriptContainerElement **)(lVar15 + 0x58) = pFVar24;
    *(TReferenceControllerBase<1> **)(lVar15 + 0x50) = pTVar22;
    if (pTVar19 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar20 = (atomic<int>)((int)*paVar20 + 1);
      UNLOCK();
    }
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    local_d8 = pTVar22;
    local_d0 = pTVar19;
    if (((pFVar5 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar5 + (longlong)*piVar2 * 0x10)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar7 = (code *)swi(3);
      uVar12 = (*pcVar7)();
      return (bool)uVar12;
    }
    iVar13 = (this->Constraints).ArrayNum;
    if (iVar13 == *piVar2) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->Constraints).ArrayNum = iVar13 + 1;
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar13 * 0x10) = local_d8;
    *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar13 * 0x10 + 8) = local_d0;
    local_d0 = (TReferenceControllerBase<1> *)0x0;
    local_d8 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19);
    uVar18 = (ulonglong)local_res20;
    pFVar24 = pFVar24 + 0x110;
  }
  iVar13 = (this->Bodies).ArrayNum;
  pFVar21 = (FRigidBody *)(this->Bodies).AllocatorInstance.Data;
  pFVar23 = pFVar21 + iVar13;
  do {
    while( true ) {
      if ((this->Bodies).ArrayNum != iVar13) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar21 == pFVar23) {
        UpdateEffectorDepths(this,true);
        return true;
      }
      if ((pFVar21->Bone == (FBone *)0x0) ||
         (pFVar6 = pFVar21->Bone->Parent, pFVar6 == (FBone *)0x0)) break;
      local_c8 = pFVar6->Body;
      if (local_c8 == (FRigidBody *)0x0) goto LAB_14dedc35d;
      local_b8[0] = pFVar21;
      pTVar17 = SharedPointerInternals::
                NewIntrusiveReferenceController<1,PBIK::FJointConstraint,PBIK::FRigidBody_*_&,PBIK::FRigidBody_*>
                          (&local_c8,local_b8);
      pTVar3 = &pTVar17->ObjectStorage;
      if ((pTVar3 == (TTypeCompatibleBytes<PBIK::FJointConstraint> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      if (pTVar17 == (TIntrusiveReferenceController<PBIK::FJointConstraint,1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        *(int *)&pTVar17->_padding_ = (int)pTVar17->_padding_ + 1;
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)pTVar17);
        LOCK();
        *(int *)&pTVar17->_padding_ = (int)pTVar17->_padding_ + 1;
        UNLOCK();
      }
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      local_e8 = pTVar3;
      local_e0 = pTVar17;
      if (((pFVar24 <= (FScriptContainerElement *)&local_e8) &&
          ((FScriptContainerElement *)&local_e8 < pFVar24 + (longlong)*piVar2 * 0x10)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        uVar12 = (*pcVar7)();
        return (bool)uVar12;
      }
      iVar14 = (this->Constraints).ArrayNum;
      if (iVar14 == *piVar2) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->Constraints).ArrayNum = iVar14 + 1;
      pFVar24 = (pTVar1->AllocatorInstance).Data;
      *(TTypeCompatibleBytes<PBIK::FJointConstraint> **)(pFVar24 + (longlong)iVar14 * 0x10) =
           local_e8;
      *(TIntrusiveReferenceController<PBIK::FJointConstraint,1> **)
       (pFVar24 + (longlong)iVar14 * 0x10 + 8) = local_e0;
      local_e0 = (TIntrusiveReferenceController<PBIK::FJointConstraint,1> *)0x0;
      local_e8 = (TTypeCompatibleBytes<PBIK::FJointConstraint> *)0x0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pTVar17);
      pFVar21 = pFVar21 + 1;
    }
    local_c8 = (FRigidBody *)0x0;
LAB_14dedc35d:
    pFVar21 = pFVar21 + 1;
  } while( true );
}

// Initialize @ 14dedc3a0

bool __thiscall FPBIKSolver::Initialize(FPBIKSolver *this)

{
  bool bVar1;
  FLLMScope local_res8 [2];
  FMemScope local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name609,L"Animation/FBIK");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name609,false,None,Default,true);
  FMemScope::FMemScope(local_res10,&LLMScope_Name609,true);
  if (this->bReadyToSimulate == false) {
    this->bReadyToSimulate = false;
    bVar1 = InitBones(this);
    if (bVar1) {
      bVar1 = InitBodies(this);
      if (bVar1) {
        bVar1 = InitConstraints(this);
        if (bVar1) {
          this->bReadyToSimulate = true;
          goto LAB_14dedc43b;
        }
      }
    }
    bVar1 = false;
  }
  else {
LAB_14dedc43b:
    bVar1 = true;
  }
  FMemScope::~FMemScope(local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return bVar1;
}

// IsReadyToSimulate @ 14dedc570

bool __thiscall FPBIKSolver::IsReadyToSimulate(FPBIKSolver *this)

{
  return this->bReadyToSimulate;
}

// Reset @ 14dedc710

void __thiscall FPBIKSolver::Reset(FPBIKSolver *this)

{
  int *piVar1;
  int iVar2;
  FBone *pFVar3;
  TSharedPtr<PBIK::FConstraint,1> *pTVar4;
  FEffector *pFVar5;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name924,L"Animation/FBIK");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name924,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,&LLMScope_Name924,true);
  this->bReadyToSimulate = false;
  this->SolverRoot = (FBone *)0x0;
  (this->Bodies).ArrayNum = 0;
  if ((this->Bodies).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x110,0x10,0,&(this->Bodies).AllocatorInstance,0,&(this->Bodies).ArrayMax);
  }
  piVar1 = &(this->Bones).ArrayMax;
  pFVar3 = (FBone *)(this->Bones).AllocatorInstance.Data;
  iVar2 = (this->Bones).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<PBIK::FBone,int>(pFVar3,iVar2);
    (this->Bones).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,0,&(this->Bones).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<PBIK::FBone,int>(pFVar3,iVar2);
    (this->Bones).ArrayNum = 0;
  }
  piVar1 = &(this->Constraints).ArrayMax;
  pTVar4 = (TSharedPtr<PBIK::FConstraint,1> *)(this->Constraints).AllocatorInstance.Data;
  iVar2 = (this->Constraints).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<PBIK::FConstraint,1>,int>(pTVar4,iVar2);
    (this->Constraints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->Constraints).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<PBIK::FConstraint,1>,int>(pTVar4,iVar2);
    (this->Constraints).ArrayNum = 0;
  }
  pFVar5 = (FEffector *)(this->Effectors).AllocatorInstance.Data;
  piVar1 = &(this->Effectors).ArrayMax;
  iVar2 = (this->Effectors).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<PBIK::FEffector,int>(pFVar5,iVar2);
    (this->Effectors).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x110,0x10,0,&(this->Effectors).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<PBIK::FEffector,int>(pFVar5,iVar2);
    (this->Effectors).ArrayNum = 0;
  }
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// SetBoneTransform @ 14dedd100

void __thiscall
FPBIKSolver::SetBoneTransform(FPBIKSolver *this,int param_1,TTransform<double> *param_2)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if ((param_1 < 0) || ((this->Bones).ArrayNum <= param_1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Bones.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\PBIK\\Private\\Core\\PBIKSolver.cpp"
                       ,0x3c8,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar2 = (param_2->Translation).ZW.m128d_f64[0];
  dVar5 = (param_2->Translation).XY.m128d_f64[0];
  dVar6 = (param_2->Translation).XY.m128d_f64[1];
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < (this->Bones).ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Bones).AllocatorInstance.Data;
  lVar10 = (longlong)param_1 * 0xf0;
  pFVar1 = pFVar3 + lVar10 + 0x10;
  *(double *)pFVar1 = dVar5;
  *(double *)(pFVar1 + 8) = dVar6;
  *(double *)(pFVar3 + lVar10 + 0x20) = dVar2;
  dVar2 = (param_2->Rotation).XY.m128d_f64[0];
  dVar5 = (param_2->Rotation).XY.m128d_f64[1];
  dVar6 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar7 = (param_2->Rotation).ZW.m128d_f64[1];
  uVar9 = 0;
  if (param_1 < (this->Bones).ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Bones).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar10 + 0x30;
  *(double *)pFVar1 = dVar2;
  *(double *)(pFVar1 + 8) = dVar5;
  pFVar3 = pFVar3 + lVar10 + 0x40;
  *(double *)pFVar3 = dVar6;
  *(double *)(pFVar3 + 8) = dVar7;
  dVar2 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar5 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar6 = (param_2->Scale3D).XY.m128d_f64[1];
  uVar9 = 0;
  if (param_1 < (this->Bones).ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (this->Bones).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar10 + 0x50;
  *(double *)pFVar1 = dVar5;
  *(double *)(pFVar1 + 8) = dVar6;
  *(double *)(pFVar3 + lVar10 + 0x60) = dVar2;
  return;
}

// SetEffectorGoal @ 14dedd2e0

void __thiscall
FPBIKSolver::SetEffectorGoal
          (FPBIKSolver *this,int param_1,TVector<double> *param_2,TQuat<double> *param_3,
          FEffectorSettings *param_4)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  
  if ((param_1 < 0) || ((this->Effectors).ArrayNum <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index >= 0 && Index < Effectors.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\PBIK\\Private\\Core\\PBIKSolver.cpp"
                       ,0x3fa,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar6 = 0;
  if (param_1 < (this->Effectors).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar3 = *(undefined8 *)&param_4->StrengthAlpha;
  pFVar1 = (this->Effectors).AllocatorInstance.Data;
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 0x110 + 0xc0) = *(undefined8 *)param_4;
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 0x110 + 200) = uVar3;
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 0x110 + 0xd0) =
       *(undefined8 *)&param_4->PullChainAlpha;
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  *(double *)(pFVar1 + (longlong)param_1 * 0x110 + 0x80) = (param_2->field0_0x0)._s_0.X;
  *(double *)(pFVar1 + (longlong)param_1 * 0x110 + 0x88) = dVar4;
  *(double *)(pFVar1 + (longlong)param_1 * 0x110 + 0x90) = (param_2->field0_0x0)._s_0.Z;
  dVar4 = param_3->Y;
  *(double *)(pFVar1 + (longlong)param_1 * 0x110 + 0xa0) = param_3->X;
  *(double *)(pFVar1 + (longlong)param_1 * 0x110 + 0xa8) = dVar4;
  dVar4 = param_3->W;
  *(double *)(pFVar1 + (longlong)param_1 * 0x110 + 0xb0) = param_3->Z;
  *(double *)(pFVar1 + (longlong)param_1 * 0x110 + 0xb8) = dVar4;
  return;
}

// Solve @ 14deddb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPBIKSolver::Solve(FPBIKSolver *this,FPBIKSolverSettings *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_PBIK_Solve> FVar10;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  FBone *pFVar14;
  FRigidBody *pFVar15;
  FEffector *pFVar16;
  FScriptContainerElement *pFVar17;
  FBone *this_00;
  FRigidBody *this_01;
  FEffector *this_02;
  FScriptContainerElement *pFVar18;
  float fVar19;
  uint local_res18;
  uint uStackX_1c;
  undefined1 local_res20 [8];
  undefined1 local_88;
  undefined1 local_87 [3];
  FColor_u_0 local_84;
  FName local_80;
  FName local_78;
  FName local_70;
  
  FVar10 = StatPtr_STAT_PBIK_Solve;
  if (StatPtr_STAT_PBIK_Solve == (FThreadSafeStaticStat<FStat_STAT_PBIK_Solve>)0x0) {
    pFVar9 = ::FName::FName(&local_78,"STAT_PBIK_Solve");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_PBIK_Solve>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_PBIK_Solve,*pFVar9,L"PBIK Solve",
                        "STATGROUP_Anim","STATCAT_Advanced",L"Anim",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar3 = false;
  bVar5 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_84.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_84._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar12.Value;
        local_80.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\PBIK\\Private\\Core\\PBIKSolver.cpp"
                   ,0xdf);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar12.Value;
      uStackX_1c = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar4 = true;
      goto LAB_14deddc63;
    }
  }
  bVar4 = false;
  FVar13 = local_70;
LAB_14deddc63:
  bVar8 = Initialize(this);
  if (bVar8) {
    this_00 = (FBone *)(this->Bones).AllocatorInstance.Data;
    iVar1 = (this->Bones).ArrayNum;
    pFVar14 = this_00 + iVar1;
    while( true ) {
      if ((this->Bones).ArrayNum != iVar1) {
        local_res18 = local_res18 & 0xffffff00;
        `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_res18);
      }
      fVar7 = __real_3f000000;
      fVar6 = __real_3f800000;
      if (this_00 == pFVar14) break;
      PBIK::FBone::UpdateFromInputs(this_00);
      this_00 = this_00 + 1;
    }
    iVar1 = (this->Bodies).ArrayNum;
    this_01 = (FRigidBody *)(this->Bodies).AllocatorInstance.Data;
    pFVar15 = this_01 + iVar1;
    while( true ) {
      if ((this->Bodies).ArrayNum != iVar1) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (this_01 == pFVar15) break;
      PBIK::FRigidBody::UpdateTransformAndMassFromBones(this_01);
      fVar19 = param_1->MassMultiplier;
      this_01->SolverSettings = param_1;
      fVar19 = this_01->Mass * fVar19 * PBIK::GLOBAL_UNITS;
      if (fVar19 <= fVar7) {
        fVar19 = fVar7;
      }
      this_01->InvMass = fVar6 / fVar19;
      this_01 = this_01 + 1;
    }
    if (param_1->RootBehavior == PinToInput) {
      this->SolverRoot->Body->InvMass = 0.0;
    }
    UpdateEffectorDepths(this,false);
    iVar1 = (this->Effectors).ArrayNum;
    this_02 = (FEffector *)(this->Effectors).AllocatorInstance.Data;
    pFVar16 = this_02 + iVar1;
    while( true ) {
      if ((this->Effectors).ArrayNum != iVar1) {
        local_88 = 0;
        `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_88);
      }
      if (this_02 == pFVar16) break;
      PBIK::FEffector::UpdateFromInputs(this_02,this->SolverRoot,param_1->bAllowStretch);
      this_02 = this_02 + 1;
    }
    iVar1 = (this->Constraints).ArrayNum;
    pFVar18 = (this->Constraints).AllocatorInstance.Data;
    pFVar17 = pFVar18 + (longlong)iVar1 * 0x10;
    while( true ) {
      if ((this->Constraints).ArrayNum != iVar1) {
        local_87[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<PBIK::FConstraint,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_87);
      }
      if (pFVar18 == pFVar17) break;
      if (*(longlong *)pFVar18 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      (**(code **)(**(longlong **)pFVar18 + 0x18))();
      pFVar18 = pFVar18 + 0x10;
    }
    UpdateBodies(this,param_1);
    UpdateBonesFromBodies(this);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    FThreadStats::AddMessage(FVar13,CycleScopeEnd);
  }
  return;
}

// SolveConstraints @ 14dede0a0

void __thiscall FPBIKSolver::SolveConstraints(FPBIKSolver *this,FPBIKSolverSettings *param_1)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  FPBIKSolver *local_48;
  FPBIKSolverSettings *local_40;
  FPBIKSolver *local_38;
  FPBIKSolver **local_30;
  FPBIKSolverSettings *local_28;
  
  local_30 = &local_48;
  local_48 = this;
  local_40 = param_1;
  local_38 = this;
  local_28 = param_1;
  if ((this->bHasSubChains != false) && (0 < param_1->SubIterations)) {
    pFVar3 = (this->Bodies).AllocatorInstance.Data;
    iVar1 = (this->Bodies).ArrayNum;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x110;
    while( true ) {
      if ((this->Bodies).ArrayNum != iVar1) {
        `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar3 == pFVar4) break;
      pFVar3[0x104] = (FScriptContainerElement)(pFVar3[0x105] == (FScriptContainerElement)0x0);
      pFVar3 = pFVar3 + 0x110;
    }
    iVar1 = param_1->SubIterations;
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        `FPBIKSolver::SolveConstraints'::__l2::<lambda_1>::operator()(&local_48,iVar2,iVar1);
        iVar1 = param_1->SubIterations;
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    iVar1 = (this->Bodies).ArrayNum;
    pFVar3 = (this->Bodies).AllocatorInstance.Data;
    pFVar4 = pFVar3 + (longlong)iVar1 * 0x110;
    while( true ) {
      if ((this->Bodies).ArrayNum != iVar1) {
        `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar3 == pFVar4) break;
      pFVar3[0x104] = (FScriptContainerElement)0x0;
      pFVar3 = pFVar3 + 0x110;
    }
  }
  `FPBIKSolver::SolveConstraints'::__l2::<lambda_3>::operator()(&local_38);
  return;
}

// UpdateBodies @ 14dedf740

void __thiscall FPBIKSolver::UpdateBodies(FPBIKSolver *this,FPBIKSolverSettings *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  FEffector *pFVar9;
  uint uVar10;
  FEffector *this_00;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  FPBIKSolver *local_78;
  FPBIKSolverSettings *local_70;
  FPBIKSolver *local_68;
  FPBIKSolver **local_60;
  FPBIKSolverSettings *local_58;
  
  ApplyRootPrePull(this,param_1->RootBehavior,&param_1->PrePullRootSettings);
  iVar8 = (this->Effectors).ArrayNum;
  this_00 = (FEffector *)(this->Effectors).AllocatorInstance.Data;
  pFVar9 = this_00 + iVar8;
  while( true ) {
    if ((this->Effectors).ArrayNum != iVar8) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    uVar3 = __real_3f800000;
    if (this_00 == pFVar9) break;
    PBIK::FEffector::ApplyPreferredAngles(this_00);
    this_00 = this_00 + 1;
  }
  iVar8 = 0;
  uVar10 = (this->Constraints).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar12 = (longlong)(int)uVar10 << 4;
    do {
      uVar5 = 0;
      if ((int)uVar10 < (this->Constraints).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (this->Constraints).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar11 + lVar12) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(pFVar11 + lVar12);
      (**(code **)(*plVar1 + 8))(plVar1,uVar3);
      lVar12 = lVar12 + -0x10;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  ApplyPullChainAlpha(this,param_1->GlobalPullChainAlpha);
  local_60 = &local_78;
  local_78 = this;
  local_70 = param_1;
  local_68 = this;
  local_58 = param_1;
  if ((this->bHasSubChains != false) && (0 < param_1->SubIterations)) {
    iVar6 = (this->Bodies).ArrayNum;
    pFVar11 = (this->Bodies).AllocatorInstance.Data;
    pFVar7 = pFVar11 + (longlong)iVar6 * 0x110;
    while( true ) {
      if ((this->Bodies).ArrayNum != iVar6) {
        `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar11 == pFVar7) break;
      pFVar11[0x104] = (FScriptContainerElement)(pFVar11[0x105] == (FScriptContainerElement)0x0);
      pFVar11 = pFVar11 + 0x110;
    }
    iVar6 = param_1->SubIterations;
    if (0 < iVar6) {
      do {
        `FPBIKSolver::SolveConstraints'::__l2::<lambda_1>::operator()(&local_78,iVar8,iVar6);
        iVar6 = param_1->SubIterations;
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar6);
    }
    iVar8 = (this->Bodies).ArrayNum;
    pFVar11 = (this->Bodies).AllocatorInstance.Data;
    pFVar7 = pFVar11 + (longlong)iVar8 * 0x110;
    while( true ) {
      if ((this->Bodies).ArrayNum != iVar8) {
        `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar11 == pFVar7) break;
      pFVar11[0x104] = (FScriptContainerElement)0x0;
      pFVar11 = pFVar11 + 0x110;
    }
  }
  `FPBIKSolver::SolveConstraints'::__l2::<lambda_3>::operator()(&local_68);
  return;
}

// UpdateBonesFromBodies @ 14dedf980

void __thiscall FPBIKSolver::UpdateBonesFromBodies(FPBIKSolver *this)

{
  double dVar1;
  int iVar2;
  double dVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [12];
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  bool bVar24;
  FScriptContainerElement *pFVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  double dVar31;
  undefined1 in_XMM1 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar35;
  undefined1 auVar34 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  uint uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  uint uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  
  uVar23 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar22 = __real_3f800000;
  fVar21 = __real_322bcc77;
  dVar20 = __real_3ff0000000000000;
  pFVar28 = (this->Bones).AllocatorInstance.Data;
  iVar2 = (this->Bones).ArrayNum;
  uVar36 = (undefined4)__real_bff0000000000000;
  uVar37 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
  pFVar26 = pFVar28 + 0x90;
  uVar44 = (undefined4)__real_3e45798ee0000000;
  uVar45 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
  pFVar27 = pFVar28 + (longlong)iVar2 * 0xf0;
  do {
    while( true ) {
      if ((this->Bones).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<PBIK::FBone,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar28 == pFVar27) {
        return;
      }
      if (pFVar26[0x4f] != (FScriptContainerElement)0x0) break;
LAB_14dedff61:
      pFVar28 = pFVar28 + 0xf0;
      pFVar26 = pFVar26 + 0xf0;
    }
    if ((pFVar26[0x4d] == (FScriptContainerElement)0x0) &&
       (dVar3 = *(double *)(pFVar26 + 0x30), dVar3 != 0.0)) {
      local_198._s_0.X = (double)*(undefined8 *)(pFVar26 + -0x28);
      local_198._s_0.Y = (double)*(undefined8 *)(pFVar26 + -0x20);
      local_198._s_0.Z = (double)*(undefined8 *)(pFVar26 + -0x18);
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)((longlong)dVar3 + 0x30),(TVector<double> *)&local_1e8._s_0,
                 (TVector<double> *)&local_198._s_0);
      dVar31 = *(double *)((longlong)dVar3 + 0x18);
      dVar1 = *(double *)((longlong)dVar3 + 0x20);
      *(double *)(pFVar26 + -0x80) = local_1e8._s_0.X + *(double *)((longlong)dVar3 + 0x10);
      *(double *)(pFVar26 + -0x78) = local_1e8._s_0.Y + dVar31;
      *(double *)(pFVar26 + -0x70) = local_1e8._s_0.Z + dVar1;
      dVar12 = *(double *)pFVar26;
      dVar13 = *(double *)(pFVar26 + 8);
      dVar14 = *(double *)(pFVar26 + -0x10);
      dVar15 = *(double *)(pFVar26 + -8);
      dVar16 = *(double *)((longlong)dVar3 + 0x30);
      dVar17 = *(double *)((longlong)dVar3 + 0x38);
      dVar18 = *(double *)((longlong)dVar3 + 0x40);
      dVar19 = *(double *)((longlong)dVar3 + 0x48);
      in_XMM4._8_8_ = dVar19;
      in_XMM4._0_8_ = dVar19;
      dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
      dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
      in_XMM1._0_8_ =
           dVar12 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
      in_XMM1._8_8_ =
           dVar13 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
      uVar44 = (undefined4)__real_3e45798ee0000000;
      uVar45 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
      dVar31 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
      dVar35 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
      dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      dVar38 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      dVar6 = dVar13 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
              dVar14 * dVar19 + in_XMM1._0_8_ +
              dVar15 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      dVar7 = dVar12 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
              dVar15 * dVar19 + in_XMM1._8_8_ +
              dVar14 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      uVar36 = SUB84(dVar7,0);
      uVar37 = (undefined4)((ulonglong)dVar7 >> 0x20);
      auVar39._8_4_ = uVar36;
      auVar39._0_8_ = dVar6;
      auVar39._12_4_ = uVar37;
      *(undefined1 (*) [16])(pFVar26 + -0x60) = auVar39;
      dVar3 = dVar15 * dVar16 * dVar3 + dVar12 * dVar19 + dVar14 * dVar17 * dVar31 +
              dVar13 * dVar18 * dVar1;
      dVar31 = dVar14 * dVar16 * dVar9 + dVar13 * dVar19 + dVar15 * dVar17 * dVar35 +
               dVar12 * dVar18 * dVar38;
      uVar41 = SUB84(dVar31,0);
      uVar42 = (undefined4)((ulonglong)dVar31 >> 0x20);
      local_138._8_4_ = uVar36;
      local_138._0_8_ = dVar6;
      local_138._12_4_ = uVar37;
      local_128._8_4_ = uVar41;
      local_128._0_8_ = dVar3;
      local_128._12_4_ = uVar42;
      auVar8._8_4_ = uVar41;
      auVar8._0_8_ = dVar3;
      auVar8._12_4_ = uVar42;
      *(undefined1 (*) [16])(pFVar26 + -0x50) = auVar8;
LAB_14dedff59:
      uVar36 = (undefined4)__real_bff0000000000000;
      uVar37 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
      goto LAB_14dedff61;
    }
    dVar3 = *(double *)(pFVar26 + 0x28);
    if (dVar3 != 0.0) {
      local_178._s_0.X = *(double *)((longlong)dVar3 + 0xe0);
      local_178._s_0.Y = *(double *)((longlong)dVar3 + 0xe8);
      local_178._s_0.Z = *(double *)((longlong)dVar3 + 0xf0);
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)((longlong)dVar3 + 0x80),(TVector<double> *)&local_1d0._s_0,
                 (TVector<double> *)&local_178._s_0);
      dVar31 = *(double *)((longlong)dVar3 + 0x78);
      dVar1 = *(double *)((longlong)dVar3 + 0x70);
      *(double *)(pFVar26 + -0x80) = local_1d0._s_0.X + *(double *)((longlong)dVar3 + 0x68);
      *(double *)(pFVar26 + -0x78) = local_1d0._s_0.Y + dVar1;
      *(double *)(pFVar26 + -0x70) = local_1d0._s_0.Z + dVar31;
      dVar31 = *(double *)((longlong)dVar3 + 0x88);
      *(double *)(pFVar26 + -0x60) = *(double *)((longlong)dVar3 + 0x80);
      *(double *)(pFVar26 + -0x58) = dVar31;
      in_XMM1 = *(undefined1 (*) [16])((longlong)dVar3 + 0x90);
      *(undefined1 (*) [16])(pFVar26 + -0x50) = in_XMM1;
    }
    uVar40 = *(uint *)(pFVar26 + 0x48);
    if (uVar40 == 0xffffffff) goto LAB_14dedff61;
    uVar43 = 0;
    if ((int)uVar40 < (this->Effectors).ArrayNum) {
      uVar43 = ~uVar40 >> 0x1f;
    }
    if ((uVar43 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar25 = (this->Effectors).AllocatorInstance.Data + (longlong)(int)uVar40 * 0x110;
    if (*(double *)(pFVar26 + 0x28) == 0.0) {
      dVar3 = *(double *)(pFVar26 + 0x30);
      if (dVar3 == 0.0) {
        dVar3 = *(double *)(pFVar25 + 8);
        *(double *)(pFVar26 + -0x80) = *(double *)pFVar25;
        *(double *)(pFVar26 + -0x78) = dVar3;
        in_XMM1._8_8_ = 0.0;
        in_XMM1._0_8_ = *(double *)(pFVar25 + 0x10);
        *(double *)(pFVar26 + -0x70) = *(double *)(pFVar25 + 0x10);
      }
      else {
        local_158._s_0.X = (double)*(undefined8 *)(pFVar26 + -0x28);
        local_158._s_0.Y = (double)*(undefined8 *)(pFVar26 + -0x20);
        local_158._s_0.Z = (double)*(undefined8 *)(pFVar26 + -0x18);
        UE::Math::TQuat<double>::RotateVector
                  ((TQuat<double> *)((longlong)dVar3 + 0x30),(TVector<double> *)&local_1b8._s_0,
                   (TVector<double> *)&local_158._s_0);
        dVar31 = *(double *)((longlong)dVar3 + 0x18);
        in_XMM1._0_8_ = local_1b8._s_0.Z + *(double *)((longlong)dVar3 + 0x20);
        in_XMM1._8_8_ = 0.0;
        *(double *)(pFVar26 + -0x80) = local_1b8._s_0.X + *(double *)((longlong)dVar3 + 0x10);
        *(double *)(pFVar26 + -0x78) = local_1b8._s_0.Y + dVar31;
        *(double *)(pFVar26 + -0x70) = in_XMM1._0_8_;
      }
    }
    fVar46 = *(float *)(pFVar25 + 0xd4);
    if (fVar21 < (float)((uint)(fVar46 - fVar22) & uVar23)) {
      dVar3 = *(double *)(pFVar26 + 0x30);
      if (dVar3 == 0.0) {
        dVar1 = *(double *)(pFVar26 + -0x60);
        dVar9 = *(double *)(pFVar26 + -0x58);
        dVar3 = *(double *)(pFVar26 + -0x50);
        dVar31 = *(double *)(pFVar26 + -0x48);
      }
      else {
        dVar31 = *(double *)pFVar26;
        dVar35 = *(double *)(pFVar26 + 8);
        dVar38 = *(double *)(pFVar26 + -0x10);
        dVar6 = *(double *)(pFVar26 + -8);
        dVar7 = *(double *)((longlong)dVar3 + 0x30);
        dVar12 = *(double *)((longlong)dVar3 + 0x38);
        dVar9 = *(double *)((longlong)dVar3 + 0x40);
        dVar13 = *(double *)((longlong)dVar3 + 0x48);
        in_XMM1._0_8_ =
             dVar31 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        in_XMM1._8_8_ =
             dVar35 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        uVar36 = (undefined4)__real_bff0000000000000;
        uVar37 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
        in_XMM4._0_8_ =
             dVar35 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        in_XMM4._8_8_ =
             dVar31 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar44 = (undefined4)__real_3e45798ee0000000;
        uVar45 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
        dVar1 = dVar35 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                dVar38 * dVar13 + in_XMM1._0_8_ +
                dVar6 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar9 = dVar31 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                dVar6 * dVar13 + in_XMM1._8_8_ +
                dVar38 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        local_118._8_4_ = SUB84(dVar9,0);
        local_118._0_8_ = dVar1;
        local_118._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        dVar3 = dVar6 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar31 * dVar13 +
                dVar38 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                in_XMM4._0_8_;
        dVar31 = dVar38 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar35 * dVar13 +
                 dVar6 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 in_XMM4._8_8_;
        local_108._8_4_ = SUB84(dVar31,0);
        local_108._0_8_ = dVar3;
        local_108._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      }
      if (fVar22 <= fVar46) {
        fVar46 = fVar22;
      }
      auVar10._4_8_ = in_XMM1._8_8_;
      auVar10._0_4_ = (int)((ulonglong)dVar1 >> 0x20);
      auVar32._0_8_ = auVar10._0_8_ << 0x20;
      auVar32._8_4_ = SUB84(dVar9,0);
      auVar32._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      if (fVar46 <= __real_00000000) {
        fVar46 = __real_00000000;
      }
      dVar38 = (double)fVar46;
      dVar35 = dVar20;
      if (dVar3 * *(double *)(pFVar25 + 0x30) + dVar31 * *(double *)(pFVar25 + 0x38) +
          auVar32._8_8_ * *(double *)(pFVar25 + 0x28) + dVar1 * *(double *)(pFVar25 + 0x20) <
          __real_0000000000000000) {
        dVar35 = (double)CONCAT44(uVar37,uVar36);
      }
      local_res10 = CONCAT44(uVar45,uVar44);
      dVar35 = (dVar20 - dVar38) * dVar35;
      dVar6 = dVar38 * *(double *)(pFVar25 + 0x30) + dVar35 * dVar3;
      dVar7 = dVar38 * *(double *)(pFVar25 + 0x38) + dVar35 * dVar31;
      dVar1 = dVar38 * *(double *)(pFVar25 + 0x20) + dVar35 * dVar1;
      dVar9 = dVar38 * *(double *)(pFVar25 + 0x28) + dVar35 * dVar9;
      auVar33._8_4_ = SUB84(dVar7,0);
      auVar33._0_8_ = dVar6;
      auVar33._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dVar31 = dVar6 * dVar6 + dVar1 * dVar1;
      dVar35 = auVar33._8_8_ * dVar7 + dVar9 * dVar9;
      dVar3 = dVar35 + dVar31;
      dVar31 = dVar31 + dVar35;
      auVar5._8_4_ = SUB84(dVar31,0);
      auVar5._0_8_ = dVar3;
      auVar5._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      in_XMM4 = sqrtpd(in_XMM4,auVar5);
      uVar29 = -(ulonglong)((double)CONCAT44(uVar45,uVar44) <= dVar3);
      uVar30 = -(ulonglong)((double)CONCAT44(uVar45,uVar44) <= dVar31);
      uVar40 = (uint)(uVar29 >> 0x20);
      uVar43 = (uint)(uVar30 >> 0x20);
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
      local_f8._0_8_ = uVar29 & (ulonglong)(auVar39._0_8_ * dVar1);
      uVar11 = uVar30 & (ulonglong)(auVar39._8_8_ * dVar9);
      local_f8._8_4_ = (undefined4)uVar11;
      local_f8._12_4_ = (undefined4)(uVar11 >> 0x20);
      auVar34._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar34._4_4_ =
           ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar34._8_4_ = ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar34._12_4_ =
           ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_f8 = local_f8 | auVar34;
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
      local_e8._0_4_ = ~(uint)uVar29 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0)
      ;
      local_e8._4_4_ =
           ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      local_e8._8_4_ = ~(uint)uVar30 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
      ;
      local_e8._12_4_ =
           ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      in_XMM1._0_8_ = (double)((ulonglong)(auVar39._0_8_ * dVar6) & uVar29);
      uVar30 = (ulonglong)(auVar39._8_8_ * dVar7) & uVar30;
      in_XMM1._8_4_ = (undefined4)uVar30;
      in_XMM1._12_4_ = (undefined4)(uVar30 >> 0x20);
      local_e8 = local_e8 | in_XMM1;
      *(undefined1 (*) [16])(pFVar26 + -0x60) = local_f8;
      *(undefined1 (*) [16])(pFVar26 + -0x50) = local_e8;
      goto LAB_14dedff59;
    }
    dVar3 = *(double *)(pFVar25 + 0x28);
    pFVar28 = pFVar28 + 0xf0;
    *(double *)(pFVar26 + -0x60) = *(double *)(pFVar25 + 0x20);
    *(double *)(pFVar26 + -0x58) = dVar3;
    in_XMM1 = *(undefined1 (*) [16])(pFVar25 + 0x30);
    *(undefined1 (*) [16])(pFVar26 + -0x50) = in_XMM1;
    pFVar26 = pFVar26 + 0xf0;
  } while( true );
}

// UpdateEffectorDepths @ 14dee00b0

void __thiscall FPBIKSolver::UpdateEffectorDepths(FPBIKSolver *this,bool param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  bVar3 = false;
  this->bHasSubChains = false;
  iVar1 = (this->Effectors).ArrayNum;
  pFVar7 = (this->Effectors).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x110;
  while( true ) {
    if ((this->Effectors).ArrayNum != iVar1) {
      `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if ((param_1) || (*(int *)(pFVar7 + 0xf0) != *(int *)(pFVar7 + 0xcc))) {
      bVar3 = true;
    }
    if (0 < *(int *)(pFVar7 + 0xcc)) {
      this->bHasSubChains = true;
    }
    pFVar7 = pFVar7 + 0x110;
  }
  if (bVar3) {
    iVar1 = (this->Bodies).ArrayNum;
    pFVar7 = (this->Bodies).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x110;
    while( true ) {
      if ((this->Bodies).ArrayNum != iVar1) {
        `TCheckedPointerIterator<PBIK::FRigidBody,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar8) break;
      *(undefined2 *)(pFVar7 + 0x104) = 0;
      pFVar7 = pFVar7 + 0x110;
    }
    iVar1 = (this->Effectors).ArrayNum;
    pFVar7 = (this->Effectors).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x110;
    while( true ) {
      if ((this->Effectors).ArrayNum != iVar1) {
        `TCheckedPointerIterator<PBIK::FEffector,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar7 == pFVar8) break;
      iVar6 = 1;
      iVar2 = *(int *)(pFVar7 + 0xcc);
      *(undefined8 *)(pFVar7 + 0xe8) = 0;
      lVar4 = *(longlong *)(pFVar7 + 0xd8);
      lVar5 = *(longlong *)(*(longlong *)(pFVar7 + 0xd8) + 0xc0);
      while( true ) {
        if ((lVar5 == 0) || (*(char *)(lVar5 + 0xdd) == '\0')) goto LAB_14dee021e;
        if ((*(char *)(lVar5 + 0xde) == '\0') && (*(char *)(lVar5 + 0xdc) == '\0')) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (((0 < iVar2) && (iVar2 < iVar6)) || (bVar3)) break;
        iVar6 = iVar6 + 1;
        *(undefined1 *)(*(longlong *)(lVar5 + 0xb8) + 0x105) = 1;
        lVar4 = lVar5;
        lVar5 = *(longlong *)(lVar5 + 0xc0);
      }
      *(undefined8 *)(pFVar7 + 0xe8) = *(undefined8 *)(lVar4 + 0xb8);
LAB_14dee021e:
      *(undefined4 *)(pFVar7 + 0xf0) = *(undefined4 *)(pFVar7 + 0xcc);
      pFVar7 = pFVar7 + 0x110;
    }
  }
  return;
}

// operator() @ 150590540

bool __thiscall `FPBIKSolver::GetBoneSettings'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9182796991183191087>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9182796991183191087>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150590580

bool __thiscall `FPBIKSolver::GetBoneSettings'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_9182796991183191082>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_9182796991183191082>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

