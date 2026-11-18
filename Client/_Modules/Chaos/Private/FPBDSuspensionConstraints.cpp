// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 28

// ~FPBDSuspensionConstraints @ 143d039f0

void __thiscall
Chaos::FPBDSuspensionConstraints::~FPBDSuspensionConstraints(FPBDSuspensionConstraints *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDSuspensionConstraints_Chaos__6B_;
  pFVar1 = (this->StaticCollisionBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionSolverManifoldPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Handles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintSolverBodies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintEnabledStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintResults).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstraintSettings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SuspensionLocalOffset).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConstrainedParticles).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FPBDConstraintContainer::~FPBDConstraintContainer((FPBDConstraintContainer *)this);
  return;
}

// DisconnectConstraints @ 143d4cf70

void __thiscall
Chaos::FPBDSuspensionConstraints::DisconnectConstraints
          (FPBDSuspensionConstraints *this,
          TSet<Chaos::TGeometryParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
          *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  TArray<Chaos::FConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FConstraintHandleTypeID *pFVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_c8;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar18 = 0;
  iVar20 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar21 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar15 = *puVar21;
    while (uVar15 == 0) {
      lVar14 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_143d4d01d;
      uVar15 = puVar21[lVar14 + 1];
    }
    uVar10 = -uVar15 & uVar15;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar11 = iVar20 + -1 + (int)lVar14;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_143d4d01d:
  local_c8 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = local_c8 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar10,iVar18);
  TStack_68.CurrentBitIndex = iVar11;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)local_c8 >> 5;
  TStack_68._28_4_ = iVar11;
  TStack_68.BaseBitIndex = iVar20;
  uStack_48 = CONCAT44(uStack_94,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)local_c8 < 0) || (iVar4 < (int)local_c8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  if (local_c8 != uVar10) {
    puVar19 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar17 = -1 << ((byte)local_c8 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar18;
      uVar15 = uVar15 + 0x20;
      iVar18 = iVar18 + 1;
      local_c8 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_143d4d121;
      uVar17 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_c8 = (int)lVar14 + -1 + uVar15;
    if ((int)uVar10 < (int)local_c8) {
      local_c8 = uVar10;
    }
  }
LAB_143d4d121:
  do {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<Chaos::TGeometryParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == local_c8) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    puVar5 = *(undefined8 **)
              (*(longlong *)&param_1->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
    pTVar12 = TGeometryParticlesImp<double,3,0>::ParticleConstraints
                        ((TGeometryParticlesImp<double,3,0> *)*puVar5,*(int *)(puVar5 + 1));
    pFVar16 = (pTVar12->AllocatorInstance).Data;
    iVar4 = pTVar12->ArrayNum;
    pFVar2 = pFVar16 + (longlong)iVar4 * 8;
    while( true ) {
      if (pTVar12->ArrayNum != iVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<Chaos::FConstraintHandle_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (pFVar16 == pFVar2) break;
      lVar14 = *(longlong *)pFVar16;
      lVar6 = *(longlong *)(lVar14 + 8);
      if ((lVar6 != 0) &&
         ((pFVar13 = FPBDSuspensionConstraintHandle::StaticType(),
          pFVar13->TypeName == *(FName *)(lVar6 + 8) ||
          ((*(FConstraintHandleTypeID **)(lVar6 + 0x10) != (FConstraintHandleTypeID *)0x0 &&
           (bVar9 = FConstraintHandleTypeID::IsA
                              (*(FConstraintHandleTypeID **)(lVar6 + 0x10),pFVar13), bVar9)))))) {
        plVar7 = *(longlong **)(lVar14 + 8);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x60))(plVar7,*(undefined4 *)(lVar14 + 0x18),0);
        }
        uVar10 = *(uint *)(lVar14 + 0x18);
        if (uVar10 != 0xffffffff) {
          uVar15 = 0;
          if ((int)uVar10 < (this->ConstrainedParticles).ArrayNum) {
            uVar15 = ~uVar10 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(undefined8 **)
               ((this->ConstrainedParticles).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) ==
              puVar5) {
            uVar15 = 0;
            if ((int)uVar10 < (this->ConstrainedParticles).ArrayNum) {
              uVar15 = ~uVar10 >> 0x1f;
            }
            if ((uVar15 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            *(undefined8 *)
             ((this->ConstrainedParticles).AllocatorInstance.Data + (longlong)(int)uVar10 * 8) = 0;
          }
        }
      }
      pFVar16 = pFVar16 + 8;
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  } while( true );
}

// GetNumConstraints @ 143d56300

int __thiscall Chaos::FPBDSuspensionConstraints::GetNumConstraints(FPBDSuspensionConstraints *this)

{
  return (this->ConstrainedParticles).ArrayNum;
}

// IsConstraintEnabled @ 143d59be0

bool __thiscall
Chaos::FPBDSuspensionConstraints::IsConstraintEnabled(FPBDSuspensionConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (param_1 < (this->ConstraintEnabledStates).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (bool)(this->ConstraintEnabledStates).AllocatorInstance.Data[param_1];
}

// PrepareTick @ 143d5c400

void __thiscall Chaos::FPBDSuspensionConstraints::PrepareTick(FPBDSuspensionConstraints *this)

{
  return;
}

// ResetConstraints @ 143d69140

void __thiscall Chaos::FPBDSuspensionConstraints::ResetConstraints(FPBDSuspensionConstraints *this)

{
  return;
}

// SetConstraintEnabled @ 143d6e410

void __thiscall
Chaos::FPBDSuspensionConstraints::SetConstraintEnabled
          (FPBDSuspensionConstraints *this,int param_1,bool param_2)

{
  TPBDRigidParticleHandleImp<double,3,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  bool *pbVar5;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  longlong lVar6;
  uint uVar7;
  
  lVar6 = (longlong)param_1;
  uVar7 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->ConstrainedParticles).ArrayNum) {
    uVar4 = uVar7;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_2) {
    pTVar1 = *(TPBDRigidParticleHandleImp<double,3,1> **)
              ((this->ConstrainedParticles).AllocatorInstance.Data + lVar6 * 8);
    if (pTVar1 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
      this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
      if (1 < (byte)pTVar1->field_0xc) {
        this_00 = pTVar1;
      }
      if ((this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
         (pbVar5 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(this_00), *pbVar5 != false)) {
        return;
      }
      uVar4 = 0;
      if (param_1 < (this->ConstraintEnabledStates).ArrayNum) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->ConstraintEnabledStates).AllocatorInstance.Data[lVar6] = (FScriptContainerElement)0x1;
    }
  }
  else {
    uVar4 = 0;
    if (param_1 < (this->ConstraintEnabledStates).ArrayNum) {
      uVar4 = uVar7;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->ConstraintEnabledStates).AllocatorInstance.Data[lVar6] = (FScriptContainerElement)0x0;
  }
  return;
}

// UnprepareTick @ 143d76f40

void __thiscall Chaos::FPBDSuspensionConstraints::UnprepareTick(FPBDSuspensionConstraints *this)

{
  return;
}

// AddBodies @ 143d983d0

void __thiscall
Chaos::FPBDSuspensionConstraints::AddBodies
          (FPBDSuspensionConstraints *this,int param_1,FSolverBodyContainer *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSolverBody *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstrainedParticles).ArrayNum) {
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
  pFVar4 = FSolverBodyContainer::FindOrAdd
                     (param_2,(FGenericParticleHandleImp)
                              *(FGenericParticleHandleImp *)
                               &(this->ConstrainedParticles).AllocatorInstance.Data
                                [(longlong)param_1 * 8].field_0x0);
  uVar3 = 0;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
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
  *(FSolverBody **)((this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)param_1 * 8) =
       pFVar4;
  return;
}

// AddBodies @ 143d984c0

void __thiscall
Chaos::FPBDSuspensionConstraints::AddBodies
          (FPBDSuspensionConstraints *this,FSolverBodyContainer *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSolverBody *pFVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ConstrainedParticles).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this->ConstrainedParticles).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar4 = FSolverBodyContainer::FindOrAdd
                         (param_1,(FGenericParticleHandleImp)
                                  *(FGenericParticleHandleImp *)
                                   &(this->ConstrainedParticles).AllocatorInstance.Data[lVar6].
                                    field_0x0);
      uVar3 = 0;
      if ((int)uVar5 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = uVar5 + 1;
      *(FSolverBody **)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar6) = pFVar4;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ConstrainedParticles).ArrayNum);
  }
  return;
}

// AddBodies @ 143d985d0

void __thiscall
Chaos::FPBDSuspensionConstraints::AddBodies
          (FPBDSuspensionConstraints *this,TArrayView<int,int> *param_1,
          FSolverBodyContainer *param_2)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSolverBody *pFVar6;
  uint *puVar7;
  
  puVar7 = (uint *)param_1->DataPtr;
  puVar1 = puVar7 + param_1->ArrayNum;
  while( true ) {
    if (puVar7 == puVar1) {
      return;
    }
    uVar2 = *puVar7;
    uVar5 = 0;
    if ((int)uVar2 < (this->ConstrainedParticles).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar6 = FSolverBodyContainer::FindOrAdd
                       (param_2,(FGenericParticleHandleImp)
                                *(FGenericParticleHandleImp *)
                                 &(this->ConstrainedParticles).AllocatorInstance.Data
                                  [(longlong)(int)uVar2 * 8].field_0x0);
    uVar5 = 0;
    if ((int)uVar2 < (this->ConstraintSolverBodies).ArrayNum) {
      uVar5 = ~uVar2 >> 0x1f;
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
    puVar7 = puVar7 + 1;
    *(FSolverBody **)
     ((this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)(int)uVar2 * 8) = pFVar6;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// AddConstraint @ 143d992e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPBDSuspensionConstraintHandle * __thiscall
Chaos::FPBDSuspensionConstraints::AddConstraint
          (FPBDSuspensionConstraints *this,TGeometryParticleHandleImp<double,3,1> *param_1,
          TVector<double,3> *param_2,FPBDSuspensionSettings *param_3)

{
  int *piVar1;
  TArray<Chaos::FSolverBody,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<Chaos::Private::FPBDCollisionSolver,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<Chaos::Private::FPBDCollisionSolverManifoldPoint,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<Chaos::FPBDSuspensionConstraintHandle_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  FPBDSuspensionSettings *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  double dVar11;
  bool bVar12;
  int iVar13;
  FPBDSuspensionConstraintHandle *pFVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStack_3c8 [32];
  FPBDSuspensionSettings *local_3a8;
  FPBDSuspensionSettings *local_3a0;
  longlong local_398;
  longlong local_390;
  undefined8 local_388;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  double local_358;
  double local_350;
  double local_348;
  double local_340;
  double local_338;
  double local_330;
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  undefined4 uStack_300;
  double local_2f8;
  undefined4 uStack_2f0;
  double local_2e8;
  undefined4 uStack_2e0;
  TVector<double,3> local_2d8;
  TVector<double,3> TStack_2c0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined1 local_1b8 [96];
  FPBDSuspensionSettings local_158 [2];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  uVar7 = (this->ConstrainedParticles).ArrayNum;
  lVar22 = (longlong)(int)uVar7;
  pFVar8 = (FPBDSuspensionSettings *)(this->ConstrainedParticles).AllocatorInstance.Data;
  local_378._8_8_ = param_1;
  if ((pFVar8 <= (FPBDSuspensionSettings *)(local_378 + 8)) &&
     (lVar18 = (longlong)(this->ConstrainedParticles).ArrayMax,
     local_378 + 8 < &pFVar8->Enabled + lVar18 * 8)) {
    local_388 = 8;
    local_3a8 = (FPBDSuspensionSettings *)(local_378 + 8);
    local_3a0 = pFVar8;
    local_398 = lVar18;
    local_390 = lVar22;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
      return pFVar14;
    }
  }
  iVar13 = (this->ConstrainedParticles).ArrayNum;
  piVar1 = &(this->ConstrainedParticles).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->ConstrainedParticles).AllocatorInstance,piVar1);
  }
  (this->ConstrainedParticles).ArrayNum = iVar13 + 1;
  *(undefined8 *)((this->ConstrainedParticles).AllocatorInstance.Data + (longlong)iVar13 * 8) =
       local_378._8_8_;
  pFVar8 = (FPBDSuspensionSettings *)(this->SuspensionLocalOffset).AllocatorInstance.Data;
  if ((pFVar8 <= param_2) &&
     (lVar18 = (longlong)(this->SuspensionLocalOffset).ArrayMax,
     param_2 < (TVector<double,3> *)(&pFVar8->Enabled + lVar18 * 0x18))) {
    local_390 = (longlong)(this->SuspensionLocalOffset).ArrayNum;
    local_388 = 0x18;
    local_3a8 = (FPBDSuspensionSettings *)param_2;
    local_3a0 = pFVar8;
    local_398 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
      return pFVar14;
    }
  }
  iVar13 = (this->SuspensionLocalOffset).ArrayNum;
  piVar1 = &(this->SuspensionLocalOffset).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&(this->SuspensionLocalOffset).AllocatorInstance,piVar1);
  }
  (this->SuspensionLocalOffset).ArrayNum = iVar13 + 1;
  uVar10 = *(undefined8 *)&param_2->field_0x8;
  pFVar19 = (this->SuspensionLocalOffset).AllocatorInstance.Data;
  pFVar6 = pFVar19 + (longlong)iVar13 * 0x18;
  *(undefined8 *)pFVar6 = *(undefined8 *)param_2;
  *(undefined8 *)(pFVar6 + 8) = uVar10;
  *(undefined8 *)(pFVar19 + (longlong)iVar13 * 0x18 + 0x10) = *(undefined8 *)&param_2->field_0x10;
  pFVar8 = (FPBDSuspensionSettings *)(this->ConstraintSettings).AllocatorInstance.Data;
  if ((pFVar8 <= param_3) &&
     (lVar18 = (longlong)(this->ConstraintSettings).ArrayMax, param_3 < pFVar8 + lVar18)) {
    local_390 = (longlong)(this->ConstraintSettings).ArrayNum;
    local_388 = 0x88;
    local_3a8 = param_3;
    local_3a0 = pFVar8;
    local_398 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
      return pFVar14;
    }
  }
  iVar13 = (this->ConstraintSettings).ArrayNum;
  piVar1 = &(this->ConstraintSettings).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x888,&(this->ConstraintSettings).AllocatorInstance,piVar1);
  }
  (this->ConstraintSettings).ArrayNum = iVar13 + 1;
  piVar1 = &(this->ConstraintResults).ArrayMax;
  dVar11 = param_3->HardstopStiffness;
  lVar18 = (longlong)iVar13 * 0x88;
  pFVar6 = (this->ConstraintSettings).AllocatorInstance.Data;
  *(undefined8 *)(pFVar6 + lVar18) = *(undefined8 *)param_3;
  *(double *)(pFVar6 + lVar18 + 8) = dVar11;
  dVar11 = param_3->SpringPreload;
  *(double *)(pFVar6 + lVar18 + 0x10) = param_3->HardstopVelocityCompensation;
  *(double *)(pFVar6 + lVar18 + 0x10 + 8) = dVar11;
  dVar11 = param_3->SpringDamping;
  *(double *)(pFVar6 + lVar18 + 0x20) = param_3->SpringStiffness;
  *(double *)(pFVar6 + lVar18 + 0x20 + 8) = dVar11;
  dVar11 = param_3->MaxLength;
  *(double *)(pFVar6 + lVar18 + 0x30) = param_3->MinLength;
  *(double *)(pFVar6 + lVar18 + 0x30 + 8) = dVar11;
  uVar10 = *(undefined8 *)&(param_3->Axis).field_0x8;
  *(undefined8 *)(pFVar6 + lVar18 + 0x40) = *(undefined8 *)&param_3->Axis;
  *(undefined8 *)(pFVar6 + lVar18 + 0x40 + 8) = uVar10;
  uVar10 = *(undefined8 *)&param_3->Target;
  *(undefined8 *)(pFVar6 + lVar18 + 0x50) = *(undefined8 *)&(param_3->Axis).field_0x10;
  *(undefined8 *)(pFVar6 + lVar18 + 0x50 + 8) = uVar10;
  uVar10 = *(undefined8 *)&(param_3->Target).field_0x10;
  *(undefined8 *)(pFVar6 + lVar18 + 0x60) = *(undefined8 *)&(param_3->Target).field_0x8;
  *(undefined8 *)(pFVar6 + lVar18 + 0x60 + 8) = uVar10;
  uVar10 = *(undefined8 *)&(param_3->Normal).field_0x8;
  *(undefined8 *)(pFVar6 + lVar18 + 0x70) = *(undefined8 *)&param_3->Normal;
  *(undefined8 *)(pFVar6 + lVar18 + 0x70 + 8) = uVar10;
  *(undefined8 *)(pFVar6 + lVar18 + 0x80) = *(undefined8 *)&(param_3->Normal).field_0x10;
  iVar13 = (this->ConstraintResults).ArrayNum;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,&(this->ConstraintResults).AllocatorInstance,piVar1);
  }
  (this->ConstraintResults).ArrayNum = iVar13 + 1;
  DefaultConstructItems<Chaos::FPBDSuspensionResults,int>
            ((this->ConstraintResults).AllocatorInstance.Data + (longlong)iVar13 * 0x50,1);
  pFVar8 = (FPBDSuspensionSettings *)(this->ConstraintEnabledStates).AllocatorInstance.Data;
  local_378[0] = (FScriptContainerElement)0x1;
  if ((pFVar8 <= (FPBDSuspensionSettings *)local_378) &&
     (lVar18 = (longlong)(this->ConstraintEnabledStates).ArrayMax,
     local_378 < &pFVar8->Enabled + lVar18)) {
    local_390 = (longlong)(this->ConstraintEnabledStates).ArrayNum;
    local_388 = 1;
    local_3a8 = (FPBDSuspensionSettings *)local_378;
    local_3a0 = pFVar8;
    local_398 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
      return pFVar14;
    }
  }
  iVar13 = (this->ConstraintEnabledStates).ArrayNum;
  piVar1 = &(this->ConstraintEnabledStates).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x101,&(this->ConstraintEnabledStates).AllocatorInstance,piVar1);
  }
  puVar17 = (undefined8 *)0x0;
  (this->ConstraintEnabledStates).ArrayNum = iVar13 + 1;
  local_368._0_8_ = 0.0;
  (this->ConstraintEnabledStates).AllocatorInstance.Data[iVar13] = local_378[0];
  pFVar8 = (FPBDSuspensionSettings *)(this->ConstraintSolverBodies).AllocatorInstance.Data;
  if ((pFVar8 <= (FPBDSuspensionSettings *)local_368) &&
     (lVar18 = (longlong)(this->ConstraintSolverBodies).ArrayMax,
     local_368 < &pFVar8->Enabled + lVar18 * 8)) {
    local_390 = (longlong)(this->ConstraintSolverBodies).ArrayNum;
    local_388 = 8;
    local_3a8 = (FPBDSuspensionSettings *)local_368;
    local_3a0 = pFVar8;
    local_398 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
      return pFVar14;
    }
  }
  iVar13 = (this->ConstraintSolverBodies).ArrayNum;
  piVar1 = &(this->ConstraintSolverBodies).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->ConstraintSolverBodies).AllocatorInstance,piVar1);
  }
  local_328._8_8_ = _UNK_150689648;
  local_328._0_8_ = ___xmm_3f800000000000000000000000000000;
  pTVar2 = &this->StaticCollisionBodies;
  (this->ConstraintSolverBodies).ArrayNum = iVar13 + 1;
  uStack_260 = _UNK_15061cbc8;
  local_268 = ___xmm_3ff00000000000000000000000000000;
  local_2d8._16_8_ = 0;
  TStack_2c0._0_8_ = 0;
  local_288 = ___xmm_3ff00000000000000000000000000000;
  uStack_280 = _UNK_15061cbc8;
  *(undefined8 *)((this->ConstraintSolverBodies).AllocatorInstance.Data + (longlong)iVar13 * 8) =
       local_368._0_8_;
  pFVar8 = (FPBDSuspensionSettings *)(pTVar2->AllocatorInstance).Data;
  local_248 = local_268;
  uStack_240 = uStack_260;
  local_1f8 = 0;
  local_318._0_8_ = 0;
  local_318._8_4_ = 0;
  local_308 = 0.0;
  uStack_300 = 0;
  local_2f8 = 0.0;
  uStack_2f0 = 0;
  local_2e8 = 0.0;
  uStack_2e0 = 0;
  local_358 = 0.0;
  local_348 = 0.0;
  local_338 = 0.0;
  local_350 = 0.0;
  local_340 = 0.0;
  local_330 = 0.0;
  local_2d8._0_8_ = 0;
  local_2d8._8_8_ = 0;
  TStack_2c0._8_8_ = 0;
  TStack_2c0._16_8_ = 0;
  local_2a8._0_8_ = local_328._0_8_;
  local_2a8._8_8_ = local_328._8_8_;
  local_298 = 0;
  uStack_290 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1f0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  if ((pFVar8 <= (FPBDSuspensionSettings *)local_318) &&
     (lVar18 = (longlong)(this->StaticCollisionBodies).ArrayMax,
     (FScriptContainerElement *)local_318 <
     (FScriptContainerElement *)((longlong)pFVar8 + lVar18 * 0x160))) {
    local_390 = (longlong)(this->StaticCollisionBodies).ArrayNum;
    local_388 = 0x160;
    local_3a8 = (FPBDSuspensionSettings *)local_318;
    local_3a0 = pFVar8;
    local_398 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
      return pFVar14;
    }
  }
  iVar13 = (this->StaticCollisionBodies).ArrayNum;
  piVar1 = &(this->StaticCollisionBodies).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x160,0x10,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar20 = 2;
  (this->StaticCollisionBodies).ArrayNum = iVar13 + 1;
  lVar18 = 2;
  puVar16 = (undefined8 *)local_318;
  pFVar6 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x160;
  do {
    pFVar19 = pFVar6;
    puVar15 = puVar16;
    uVar10 = puVar15[1];
    *(undefined8 *)pFVar19 = *puVar15;
    *(undefined8 *)(pFVar19 + 8) = uVar10;
    uVar10 = puVar15[3];
    *(undefined8 *)(pFVar19 + 0x10) = puVar15[2];
    *(undefined8 *)(pFVar19 + 0x18) = uVar10;
    uVar10 = puVar15[5];
    *(undefined8 *)(pFVar19 + 0x20) = puVar15[4];
    *(undefined8 *)(pFVar19 + 0x28) = uVar10;
    uVar10 = puVar15[7];
    *(undefined8 *)(pFVar19 + 0x30) = puVar15[6];
    *(undefined8 *)(pFVar19 + 0x38) = uVar10;
    uVar10 = puVar15[9];
    *(undefined8 *)(pFVar19 + 0x40) = puVar15[8];
    *(undefined8 *)(pFVar19 + 0x48) = uVar10;
    uVar10 = puVar15[0xb];
    *(undefined8 *)(pFVar19 + 0x50) = puVar15[10];
    *(undefined8 *)(pFVar19 + 0x58) = uVar10;
    uVar10 = puVar15[0xd];
    *(undefined8 *)(pFVar19 + 0x60) = puVar15[0xc];
    *(undefined8 *)(pFVar19 + 0x68) = uVar10;
    uVar10 = puVar15[0xf];
    *(undefined8 *)(pFVar19 + 0x70) = puVar15[0xe];
    *(undefined8 *)(pFVar19 + 0x78) = uVar10;
    lVar18 = lVar18 + -1;
    puVar16 = puVar15 + 0x10;
    pFVar6 = pFVar19 + 0x80;
  } while (lVar18 != 0);
  uVar10 = puVar15[0x11];
  pTVar3 = &this->CollisionSolvers;
  local_1b8._24_8_ = 0.0;
  local_1b8._48_8_ = 0.0;
  *(undefined8 *)(pFVar19 + 0x80) = puVar15[0x10];
  *(undefined8 *)(pFVar19 + 0x88) = uVar10;
  uVar10 = puVar15[0x13];
  *(undefined8 *)(pFVar19 + 0x90) = puVar15[0x12];
  *(undefined8 *)(pFVar19 + 0x98) = uVar10;
  uVar10 = puVar15[0x15];
  *(undefined8 *)(pFVar19 + 0xa0) = puVar15[0x14];
  *(undefined8 *)(pFVar19 + 0xa8) = uVar10;
  uVar10 = puVar15[0x17];
  *(undefined8 *)(pFVar19 + 0xb0) = puVar15[0x16];
  *(undefined8 *)(pFVar19 + 0xb8) = uVar10;
  uVar10 = puVar15[0x19];
  *(undefined8 *)(pFVar19 + 0xc0) = puVar15[0x18];
  *(undefined8 *)(pFVar19 + 200) = uVar10;
  uVar10 = puVar15[0x1b];
  *(undefined8 *)(pFVar19 + 0xd0) = puVar15[0x1a];
  *(undefined8 *)(pFVar19 + 0xd8) = uVar10;
  pFVar8 = (FPBDSuspensionSettings *)(pTVar3->AllocatorInstance).Data;
  if ((pFVar8 <= (FPBDSuspensionSettings *)local_1b8) &&
     (lVar18 = (longlong)(this->CollisionSolvers).ArrayMax,
     local_1b8 < &pFVar8->Enabled + lVar18 * 0x60)) {
    local_390 = (longlong)(this->CollisionSolvers).ArrayNum;
    local_388 = 0x60;
    local_3a8 = (FPBDSuspensionSettings *)local_1b8;
    local_3a0 = pFVar8;
    local_398 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
      return pFVar14;
    }
  }
  iVar13 = (this->CollisionSolvers).ArrayNum;
  piVar1 = &(this->CollisionSolvers).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x860,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->CollisionSolvers).ArrayNum = iVar13 + 1;
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  lVar18 = (longlong)iVar13 * 0x60;
  pTVar4 = &this->CollisionSolverManifoldPoints;
  *(undefined8 *)(pFVar6 + lVar18) = local_1b8._0_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 8) = local_1b8._8_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x10) = local_1b8._16_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x10 + 8) = local_1b8._24_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x20) = local_1b8._32_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x20 + 8) = local_1b8._40_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x30) = local_1b8._48_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x30 + 8) = local_1b8._56_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x40) = local_1b8._64_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x40 + 8) = local_1b8._72_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x50) = local_1b8._80_8_;
  *(undefined8 *)(pFVar6 + lVar18 + 0x50 + 8) = local_1b8._88_8_;
  memset(local_1b8 + 0x60,0,0x10c);
  pFVar8 = (FPBDSuspensionSettings *)(pTVar4->AllocatorInstance).Data;
  if ((pFVar8 <= (FPBDSuspensionSettings *)(local_1b8 + 0x60)) &&
     (lVar18 = (longlong)(this->CollisionSolverManifoldPoints).ArrayMax,
     (FScriptContainerElement *)(local_1b8 + 0x60) <
     (FScriptContainerElement *)((longlong)pFVar8 + lVar18 * 0x10c))) {
    local_390 = (longlong)(this->CollisionSolverManifoldPoints).ArrayNum;
    local_388 = 0x10c;
    local_3a8 = (FPBDSuspensionSettings *)(local_1b8 + 0x60);
    local_3a0 = pFVar8;
    local_398 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
      return pFVar14;
    }
  }
  iVar13 = (this->CollisionSolverManifoldPoints).ArrayNum;
  piVar1 = &(this->CollisionSolverManifoldPoints).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10c,4,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->CollisionSolverManifoldPoints).ArrayNum = iVar13 + 1;
  puVar16 = (undefined8 *)(local_1b8 + 0x60);
  pFVar6 = (pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 0x10c;
  do {
    pFVar19 = pFVar6;
    puVar15 = puVar16;
    uVar10 = puVar15[1];
    *(undefined8 *)pFVar19 = *puVar15;
    *(undefined8 *)(pFVar19 + 8) = uVar10;
    uVar10 = puVar15[3];
    *(undefined8 *)(pFVar19 + 0x10) = puVar15[2];
    *(undefined8 *)(pFVar19 + 0x18) = uVar10;
    uVar10 = puVar15[5];
    *(undefined8 *)(pFVar19 + 0x20) = puVar15[4];
    *(undefined8 *)(pFVar19 + 0x28) = uVar10;
    uVar10 = puVar15[7];
    *(undefined8 *)(pFVar19 + 0x30) = puVar15[6];
    *(undefined8 *)(pFVar19 + 0x38) = uVar10;
    uVar10 = puVar15[9];
    *(undefined8 *)(pFVar19 + 0x40) = puVar15[8];
    *(undefined8 *)(pFVar19 + 0x48) = uVar10;
    uVar10 = puVar15[0xb];
    *(undefined8 *)(pFVar19 + 0x50) = puVar15[10];
    *(undefined8 *)(pFVar19 + 0x58) = uVar10;
    uVar10 = puVar15[0xd];
    *(undefined8 *)(pFVar19 + 0x60) = puVar15[0xc];
    *(undefined8 *)(pFVar19 + 0x68) = uVar10;
    uVar10 = puVar15[0xf];
    *(undefined8 *)(pFVar19 + 0x70) = puVar15[0xe];
    *(undefined8 *)(pFVar19 + 0x78) = uVar10;
    lVar20 = lVar20 + -1;
    puVar16 = puVar15 + 0x10;
    pFVar6 = pFVar19 + 0x80;
  } while (lVar20 != 0);
  pTVar5 = &this->Handles;
  *(undefined8 *)(pFVar19 + 0x80) = puVar15[0x10];
  *(undefined4 *)(pFVar19 + 0x88) = *(undefined4 *)(puVar15 + 0x11);
  puVar16 = ::operator_new(0x20);
  if (puVar16 != (undefined8 *)0x0) {
    puVar16[1] = this;
    *puVar16 = &___7FPBDSuspensionConstraintHandle_Chaos__6B_;
    puVar16[2] = 0;
    *(uint *)(puVar16 + 3) = uVar7;
    puVar17 = puVar16;
  }
  pFVar8 = (FPBDSuspensionSettings *)(pTVar5->AllocatorInstance).Data;
  local_368._8_8_ = puVar17;
  if ((pFVar8 <= (FPBDSuspensionSettings *)(local_368 + 8)) &&
     (lVar18 = (longlong)(this->Handles).ArrayMax, local_368 + 8 < &pFVar8->Enabled + lVar18 * 8)) {
    local_390 = (longlong)(this->Handles).ArrayNum;
    local_388 = 8;
    local_3a8 = (FPBDSuspensionSettings *)(local_368 + 8);
    local_3a0 = pFVar8;
    local_398 = lVar18;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
      return pFVar14;
    }
  }
  iVar13 = (this->Handles).ArrayNum;
  piVar1 = &(this->Handles).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar5->AllocatorInstance,piVar1);
  }
  (this->Handles).ArrayNum = iVar13 + 1;
  *(undefined8 *)((pTVar5->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_368._8_8_;
  iVar13 = (this->Handles).ArrayNum;
  local_3a0 = (FPBDSuspensionSettings *)(longlong)iVar13;
  uVar21 = 0;
  if ((int)uVar7 < iVar13) {
    uVar21 = ~uVar7 >> 0x1f;
  }
  if ((uVar21 == 0) &&
     (local_3a8 = (FPBDSuspensionSettings *)lVar22,
     bVar12 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar9 = (code *)swi(3);
    pFVar14 = (FPBDSuspensionConstraintHandle *)(*pcVar9)();
    return pFVar14;
  }
  return *(FPBDSuspensionConstraintHandle **)((pTVar5->AllocatorInstance).Data + lVar22 * 8);
}

// AddConstraintsToGraph @ 143d99c30

void __thiscall
Chaos::FPBDSuspensionConstraints::AddConstraintsToGraph
          (FPBDSuspensionConstraints *this,FPBDIslandManager *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FConstraintHandle *pFVar3;
  FPBDIslandConstraint *pFVar4;
  longlong lVar5;
  char cVar6;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_38 [16];
  
  pFVar8 = (this->Handles).AllocatorInstance.Data;
  iVar2 = (this->Handles).ArrayNum;
  lVar5 = this->_padding_;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
LAB_143d99c70:
  do {
    if ((this->Handles).ArrayNum != iVar2) {
      `TCheckedPointerIterator<Chaos::FPBDSuspensionConstraintHandle_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return;
    }
    pFVar3 = *(FConstraintHandle **)pFVar8;
    if (pFVar3 != (FConstraintHandle *)0x0) {
      pFVar4 = pFVar3->GraphEdge;
      cVar6 = (**(code **)(pFVar3->_padding_ + 0x20))(pFVar3);
      if (cVar6 == '\0') {
        if (pFVar4 != (FPBDIslandConstraint *)0x0) {
          Chaos::Private::FPBDIslandManager::RemoveConstraint(param_1,pFVar3);
        }
      }
      else if (pFVar4 == (FPBDIslandConstraint *)0x0) {
        pTVar7 = (TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> *)
                 (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,local_38);
        Chaos::Private::FPBDIslandManager::AddConstraint(param_1,(int)lVar5,pFVar3,pTVar7);
        pFVar8 = pFVar8 + 8;
        goto LAB_143d99c70;
      }
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// ApplyPositionConstraint @ 143d9c220

void __thiscall
Chaos::FPBDSuspensionConstraints::ApplyPositionConstraint
          (FPBDSuspensionConstraints *this,int param_1,double param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  code *pcVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar16;
  
  if (bChaos_Suspension_Hardstop_Enabled) {
    uVar14 = 0;
    uVar13 = 0;
    if (param_1 < (this->ConstraintSettings).ArrayNum) {
      uVar13 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((this->ConstraintSettings).AllocatorInstance.Data[(longlong)param_1 * 0x88] !=
        (FScriptContainerElement)0x0) {
      uVar13 = 0;
      if (param_1 < (this->CollisionSolvers).ArrayNum) {
        uVar13 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar11 = __real_00800000;
      uVar13 = __xmm_80000000800000008000000080000000;
      fVar10 = __real_322bcc77;
      pFVar17 = (this->CollisionSolvers).AllocatorInstance.Data + (longlong)param_1 * 0x60;
      if ((pFVar17 != (FScriptContainerElement *)0x0) && (0 < *(int *)(pFVar17 + 0x58))) {
        dVar20 = (double)Chaos_Suspension_MaxPushoutVelocity * param_2;
        if ((double)Chaos_Suspension_MaxPushout <=
            (double)Chaos_Suspension_MaxPushoutVelocity * param_2) {
          dVar20 = (double)Chaos_Suspension_MaxPushout;
        }
        uVar16 = uVar14;
        do {
          lVar5 = *(longlong *)(pFVar17 + 0x50);
          fVar21 = 0.0;
          if (*(float *)(pFVar17 + 0x48) <= fVar11) {
            if (fVar11 < *(float *)(pFVar17 + 0x4c)) {
              pfVar6 = *(float **)(pFVar17 + 0x30);
              fVar21 = (float)((uint)(pfVar6[5] * *(float *)(uVar14 + 0x5c + lVar5) +
                                      pfVar6[4] * *(float *)(uVar14 + 0x58 + lVar5) +
                                     pfVar6[6] * *(float *)(uVar14 + 0x60 + lVar5)) ^ uVar13) -
                       (pfVar6[1] * *(float *)(uVar14 + 0x1c + lVar5) +
                        *(float *)(uVar14 + 0x18 + lVar5) * *pfVar6 +
                       pfVar6[2] * *(float *)(uVar14 + 0x20 + lVar5));
            }
          }
          else {
            pfVar6 = *(float **)(pFVar17 + 0x18);
            if (*(float *)(pFVar17 + 0x4c) <= fVar11) {
              fVar21 = pfVar6[6] * *(float *)(uVar14 + 0x54 + lVar5) +
                       pfVar6[4] * *(float *)(uVar14 + 0x4c + lVar5) +
                       pfVar6[5] * *(float *)(uVar14 + 0x50 + lVar5) +
                       pfVar6[2] * *(float *)(uVar14 + 0x20 + lVar5) +
                       *pfVar6 * *(float *)(uVar14 + 0x18 + lVar5) +
                       *(float *)(uVar14 + 0x1c + lVar5) * pfVar6[1];
            }
            else {
              pfVar7 = *(float **)(pFVar17 + 0x30);
              fVar21 = ((pfVar6[1] - pfVar7[1]) * *(float *)(uVar14 + 0x1c + lVar5) +
                        (pfVar6[2] - pfVar7[2]) * *(float *)(uVar14 + 0x20 + lVar5) +
                        (*pfVar6 - *pfVar7) * *(float *)(uVar14 + 0x18 + lVar5) +
                       pfVar6[6] * *(float *)(uVar14 + 0x54 + lVar5) +
                       *(float *)(uVar14 + 0x4c + lVar5) * pfVar6[4] +
                       pfVar6[5] * *(float *)(uVar14 + 0x50 + lVar5)) -
                       (pfVar7[5] * *(float *)(uVar14 + 0x5c + lVar5) +
                        *(float *)(uVar14 + 0x58 + lVar5) * pfVar7[4] +
                       pfVar7[6] * *(float *)(uVar14 + 0x60 + lVar5));
            }
          }
          fVar18 = fVar21;
          if ((0.0 < (float)dVar20) &&
             (fVar18 = (float)((uint)(float)dVar20 ^ uVar13), fVar18 <= fVar21)) {
            fVar18 = fVar21;
          }
          fVar21 = (fVar18 + *(float *)(uVar14 + 0x3c + lVar5)) - *(float *)(pFVar17 + 0x14);
          if ((fVar21 < 0.0) || (fVar10 < *(float *)(uVar14 + 0xe8 + lVar5))) {
            fVar18 = *(float *)(uVar14 + 0xe8 + lVar5);
            fVar21 = fVar21 * *(float *)(pFVar17 + 0x10) * *(float *)(uVar14 + 0xdc + lVar5);
            if (fVar18 - fVar21 <= 0.0) {
              fVar21 = fVar18;
            }
            fVar22 = (float)((uint)fVar21 ^ uVar13);
            *(float *)(uVar14 + 0xe8 + lVar5) = fVar18 + fVar22;
            if (fVar11 < *(float *)(pFVar17 + 0x48)) {
              pfVar6 = *(float **)(pFVar17 + 0x18);
              fVar19 = fVar22 * *(float *)(pFVar17 + 0x48);
              fVar18 = *(float *)(uVar14 + 0x94 + lVar5);
              fVar1 = *(float *)(uVar14 + 0x98 + lVar5);
              fVar2 = *(float *)(uVar14 + 0x9c + lVar5);
              fVar3 = *(float *)(uVar14 + 0x20 + lVar5);
              fVar4 = *(float *)(uVar14 + 0x18 + lVar5);
              pfVar6[1] = fVar19 * *(float *)(uVar14 + 0x1c + lVar5) + pfVar6[1];
              pfVar6[2] = fVar19 * fVar3 + pfVar6[2];
              *pfVar6 = fVar19 * fVar4 + *pfVar6;
              lVar8 = *(longlong *)(pFVar17 + 0x18);
              *(float *)(lVar8 + 0x10) = fVar22 * fVar18 + *(float *)(lVar8 + 0x10);
              *(float *)(lVar8 + 0x14) = fVar22 * fVar1 + *(float *)(lVar8 + 0x14);
              *(float *)(lVar8 + 0x18) = fVar22 * fVar2 + *(float *)(lVar8 + 0x18);
            }
            if (fVar11 < *(float *)(pFVar17 + 0x4c)) {
              pfVar6 = *(float **)(pFVar17 + 0x30);
              fVar22 = fVar22 * *(float *)(pFVar17 + 0x4c);
              fVar18 = *(float *)(uVar14 + 0xb8 + lVar5);
              fVar1 = *(float *)(uVar14 + 0x1c + lVar5);
              fVar2 = *(float *)(uVar14 + 0x20 + lVar5);
              fVar3 = *(float *)(uVar14 + 0xbc + lVar5);
              fVar4 = *(float *)(uVar14 + 0xc0 + lVar5);
              *pfVar6 = *pfVar6 - fVar22 * *(float *)(uVar14 + 0x18 + lVar5);
              pfVar6[1] = pfVar6[1] - fVar22 * fVar1;
              pfVar6[2] = pfVar6[2] - fVar22 * fVar2;
              lVar5 = *(longlong *)(pFVar17 + 0x30);
              *(float *)(lVar5 + 0x10) = fVar21 * fVar18 + *(float *)(lVar5 + 0x10);
              *(float *)(lVar5 + 0x14) = fVar21 * fVar3 + *(float *)(lVar5 + 0x14);
              *(float *)(lVar5 + 0x18) = fVar21 * fVar4 + *(float *)(lVar5 + 0x18);
            }
          }
          uVar15 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar15;
          uVar14 = uVar14 + 0x10c;
        } while ((int)uVar15 < *(int *)(pFVar17 + 0x58));
      }
    }
  }
  if (bChaos_Suspension_Spring_Enabled != false) {
    ApplySingle(this,param_1,param_2);
  }
  return;
}

// ApplyPositionConstraints @ 143d9c740

void __thiscall
Chaos::FPBDSuspensionConstraints::ApplyPositionConstraints
          (FPBDSuspensionConstraints *this,TArrayView<int,int> *param_1,double param_2,int param_3,
          int param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1->DataPtr;
  piVar1 = piVar2 + param_1->ArrayNum;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    ApplyPositionConstraint(this,*piVar2,param_2,param_3,param_4);
  }
  return;
}

// ApplyPositionConstraints @ 143d9c7d0

void __thiscall
Chaos::FPBDSuspensionConstraints::ApplyPositionConstraints
          (FPBDSuspensionConstraints *this,double param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (this->ConstrainedParticles).ArrayNum) {
    do {
      ApplyPositionConstraint(this,iVar1,param_1,param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->ConstrainedParticles).ArrayNum);
  }
  return;
}

// ApplySingle @ 143d9c910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDSuspensionConstraints::ApplySingle
          (FPBDSuspensionConstraints *this,int param_1,double param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FSolverBody *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  uint uVar25;
  TRotation<double,3> *pTVar26;
  TVector<double,3> *pTVar27;
  TVector<double> *pTVar28;
  TGeometryParticleHandleImp<double,3,1> *pTVar29;
  longlong lVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  uint uVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float fVar44;
  FGenericParticleHandleImp local_res8;
  TVector<double>_u_0 local_208;
  double local_1e8;
  FScriptContainerElement *local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  TQuat<double> local_188;
  TQuat<double> local_168;
  TVector<double>_u_0 local_148;
  TVector<double> local_128 [2];
  TVector<double> local_f8 [8];
  
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  lVar30 = (longlong)param_1;
  uVar33 = (uint)~param_1 >> 0x1f;
  uVar32 = 0;
  uVar25 = uVar32;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar25 = uVar33;
  }
  if ((uVar25 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((*(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar30 * 8) == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintSolverBodies[ConstraintIndex] != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSuspensionConstraints.cpp"
                          ,0x167,L""), bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  uVar25 = uVar32;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar25 = uVar33;
  }
  if ((uVar25 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  this_00 = *(FSolverBody **)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar30 * 8);
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar32 = uVar33;
  }
  if ((uVar32 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar31 = (this->ConstraintSettings).AllocatorInstance.Data + lVar30 * 0x88;
  uVar32 = 0;
  uVar25 = uVar32;
  if (param_1 < (this->ConstraintResults).ArrayNum) {
    uVar25 = uVar33;
  }
  if ((uVar25 == 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_1e0 = (this->ConstraintResults).AllocatorInstance.Data + lVar30 * 0x50;
  if ((__real_00800000 < (this_00->State).InvM) && (*pFVar31 != (FScriptContainerElement)0x0)) {
    uVar25 = uVar32;
    if (param_1 < (this->ConstrainedParticles).ArrayNum) {
      uVar25 = uVar33;
    }
    if ((uVar25 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    if (param_1 < (this->SuspensionLocalOffset).ArrayNum) {
      uVar32 = uVar33;
    }
    pTVar11 = *(TGeometryParticleHandleImp<double,3,1> **)
               ((this->ConstrainedParticles).AllocatorInstance.Data + lVar30 * 8);
    local_res8.MHandle = pTVar11;
    if ((uVar32 == 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar24)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    pFVar12 = (this->SuspensionLocalOffset).AllocatorInstance.Data;
    bVar24 = FGenericParticleHandleImp::IsDynamic(&local_res8);
    if (bVar24) {
      pTVar29 = this_01;
      if (1 < *(byte *)((longlong)&pTVar11->_padding_ + 4)) {
        pTVar29 = pTVar11;
      }
      pTVar26 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar29);
      local_188.X._0_4_ = *(undefined4 *)pTVar26;
      local_188.X._4_4_ = *(undefined4 *)&pTVar26->field_0x4;
      local_188.Y._0_4_ = *(undefined4 *)&pTVar26->field_0x8;
      local_188.Y._4_4_ = *(undefined4 *)&pTVar26->field_0xc;
      local_188.Z = *(double *)&pTVar26->field_0x10;
      local_188.W = *(double *)&pTVar26->field_0x18;
    }
    else {
      local_188.X._0_4_ = 0;
      local_188.X._4_4_ = 0;
      local_188.Y._0_4_ = 0;
      local_188.Y._4_4_ = 0;
      local_188.Z = ___xmm_3ff00000000000000000000000000000;
      local_188.W = _UNK_15061cbc8;
    }
    bVar24 = FGenericParticleHandleImp::IsDynamic(&local_res8);
    if (bVar24) {
      pTVar29 = this_01;
      if (1 < *(byte *)((longlong)&pTVar11->_padding_ + 4)) {
        pTVar29 = pTVar11;
      }
      pTVar27 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar29);
      dVar36 = *(double *)pTVar27;
      dVar38 = *(double *)&pTVar27->field_0x8;
      dVar40 = *(double *)&pTVar27->field_0x10;
    }
    else {
      dVar36 = 0.0;
      dVar38 = 0.0;
      dVar40 = 0.0;
    }
    local_208._s_0.X = *(double *)(pFVar12 + lVar30 * 0x18) - dVar36;
    local_208._s_0.Y = *(double *)(pFVar12 + lVar30 * 0x18 + 8) - dVar38;
    local_208._s_0.Z = *(double *)(pFVar12 + lVar30 * 0x18 + 0x10) - dVar40;
    pTVar28 = UE::Math::TQuat<double>::UnrotateVector
                        (&local_188,local_f8,(TVector<double> *)&local_208._s_0);
    local_208._s_0.Z = (pTVar28->field0_0x0)._s_0.Z;
    dVar40 = (pTVar28->field0_0x0)._s_0.X;
    dVar36 = (pTVar28->field0_0x0)._s_0.Y;
    bVar24 = FGenericParticleHandleImp::IsDynamic(&local_res8);
    if (bVar24) {
      if (1 < *(byte *)((longlong)&pTVar11->_padding_ + 4)) {
        this_01 = pTVar11;
      }
      pTVar26 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
      local_168.X._0_4_ = *(undefined4 *)pTVar26;
      local_168.X._4_4_ = *(undefined4 *)&pTVar26->field_0x4;
      local_168.Y._0_4_ = *(undefined4 *)&pTVar26->field_0x8;
      local_168.Y._4_4_ = *(undefined4 *)&pTVar26->field_0xc;
      local_168.Z = *(double *)&pTVar26->field_0x10;
      local_168.W = *(double *)&pTVar26->field_0x18;
    }
    else {
      local_168.X._0_4_ = 0;
      local_168.X._4_4_ = 0;
      local_168.Y._0_4_ = 0;
      local_168.Y._4_4_ = 0;
      local_168.Z = ___xmm_3ff00000000000000000000000000000;
      local_168.W = _UNK_15061cbc8;
    }
    local_148._s_0.X = (double)*(undefined8 *)(pFVar31 + 0x40);
    local_148._s_0.Y = (double)*(undefined8 *)(pFVar31 + 0x48);
    local_148._s_0.Z = (double)*(undefined8 *)(pFVar31 + 0x50);
    pTVar28 = UE::Math::TQuat<double>::UnrotateVector
                        (&local_168,local_128,(TVector<double> *)&local_148._s_0);
    dVar18 = (pTVar28->field0_0x0)._s_0.X;
    dVar19 = (pTVar28->field0_0x0)._s_0.Y;
    dVar38 = (pTVar28->field0_0x0)._s_0.Z;
    FSolverBody::CorrectedQ(this_00,(TRotation<double,3> *)&local_1c8);
    uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dVar14 = (double)*(float *)&(this_00->State).DP.field_0x8 +
             *(double *)&(this_00->State).P.field_0x10;
    dVar15 = (double)*(float *)&(this_00->State).DP.field_0x4 +
             *(double *)&(this_00->State).P.field_0x8;
    local_1d8 = (double)*(float *)&(this_00->State).DP + *(double *)&(this_00->State).P;
    dVar43 = local_208._s_0.Z * local_1c0 - dVar36 * local_1b8;
    dVar43 = dVar43 + dVar43;
    dVar41 = dVar40 * local_1b8 - local_208._s_0.Z * local_1c8;
    dVar41 = dVar41 + dVar41;
    dVar37 = dVar36 * local_1c8 - dVar40 * local_1c0;
    dVar37 = dVar37 + dVar37;
    dVar16 = (local_1c0 * dVar37 - local_1b8 * dVar41) + local_1b0 * dVar43 + dVar40;
    local_res8.MHandle =
         (TGeometryParticleHandleImp<double,3,1> *)
         ((local_1b8 * dVar43 - local_1c8 * dVar37) + local_1b0 * dVar41 + dVar36);
    local_1d0 = (local_1c8 * dVar41 - local_1c0 * dVar43) + local_1b0 * dVar37 + local_208._s_0.Z;
    dVar43 = dVar38 * local_1c0 - dVar19 * local_1b8;
    dVar43 = dVar43 + dVar43;
    dVar41 = dVar18 * local_1b8 - dVar38 * local_1c8;
    dVar37 = dVar19 * local_1c8 - dVar18 * local_1c0;
    dVar41 = dVar41 + dVar41;
    dVar37 = dVar37 + dVar37;
    dVar40 = *(double *)(pFVar31 + 0x80);
    dVar36 = (local_1c0 * dVar37 - local_1b8 * dVar41) + local_1b0 * dVar43 + dVar18;
    local_208._s_0.X = (double)*(undefined8 *)(pFVar31 + 0x70);
    local_208._s_0.Y = (double)*(undefined8 *)(pFVar31 + 0x78);
    dVar18 = (local_1b8 * dVar43 - local_1c8 * dVar37) + local_1b0 * dVar41 + dVar19;
    local_1e8 = (local_1c8 * dVar41 - local_1c0 * dVar43) + local_1b0 * dVar37 + dVar38;
    dVar38 = local_208._s_0.Y;
    dVar19 = local_208._s_0.X;
    if ((double)Chaos_Suspension_SlopeThreshold < dVar40) {
      fVar34 = *(float *)&(this_00->State).V;
      fVar1 = *(float *)&(this_00->State).V.field_0x4;
      fVar2 = *(float *)&(this_00->State).V.field_0x8;
      fVar34 = fVar1 * fVar1 + fVar34 * fVar34 + fVar2 * fVar2;
      if (Chaos_Suspension_SlopeSpeedThreshold * __real_4232d0c8 *
          Chaos_Suspension_SlopeSpeedThreshold * __real_4232d0c8 <= fVar34) {
        dVar37 = (double)SQRT(fVar34);
        if (dVar37 < (double)(Chaos_Suspension_SlopeSpeedBlendThreshold * __real_4232d0c8)) {
          dVar37 = dVar37 / (double)(Chaos_Suspension_SlopeSpeedBlendThreshold * __real_4232d0c8);
          dVar40 = (dVar40 - __real_3ff0000000000000) * dVar37 + __real_3ff0000000000000;
          dVar38 = local_208._s_0.Y * dVar37;
          dVar19 = local_208._s_0.X * dVar37;
        }
      }
      else {
        dVar38 = 0.0;
        dVar19 = 0.0;
        dVar40 = __real_3ff0000000000000;
      }
    }
    dVar37 = ((dVar15 + (double)local_res8.MHandle) - *(double *)(pFVar31 + 0x60)) * dVar18 +
             ((dVar16 + local_1d8) - *(double *)(pFVar31 + 0x58)) * dVar36 +
             ((dVar14 + local_1d0) - *(double *)(pFVar31 + 0x68)) * local_1e8;
    if (dVar37 < *(double *)(pFVar31 + 0x38)) {
      dVar42 = __real_3ff0000000000000 / param_2;
      dVar41 = *(double *)&(this_00->State).X.field_0x8;
      dVar17 = local_1d8 - *(double *)&(this_00->State).X;
      dVar43 = *(double *)&(this_00->State).X.field_0x10;
      TRotation<double,3>::CalculateAngularVelocity1
                ((TVector<double,3> *)&local_1a8,&(this_00->State).R,
                 (TRotation<double,3> *)&local_1c8,param_2);
      dVar20 = *(double *)(pFVar31 + 0x30);
      if (*(double *)(pFVar31 + 0x30) <= dVar37) {
        dVar20 = dVar37;
      }
      dVar36 = (dVar18 * dVar38 + dVar19 * dVar36 + local_1e8 * dVar40) *
               (*(double *)(pFVar31 + 0x38) - dVar20) *
               param_2 * *(double *)(pFVar31 + 0x20) * param_2 -
               ((dVar17 * dVar42 - ((double)local_res8.MHandle * local_198 - local_1d0 * local_1a0))
                * dVar19 +
                ((dVar15 - dVar41) * dVar42 - (local_1d0 * local_1a8 - dVar16 * local_198)) * dVar38
               + ((dVar14 - dVar43) * dVar42 -
                 (dVar16 * local_1a0 - (double)local_res8.MHandle * local_1a8)) * dVar40) *
               param_2 * *(double *)(pFVar31 + 0x28);
      if (dVar36 <= 0.0) {
        dVar36 = 0.0;
      }
      dVar14 = dVar19 * dVar36 + (double)uVar21;
      dVar38 = dVar38 * dVar36 + (double)uVar22;
      dVar36 = dVar36 * dVar40 + (double)uVar23;
      dVar40 = (double)(this_00->State).InvM;
      fVar39 = (float)((double)local_res8.MHandle * dVar36 - local_1d0 * dVar38);
      fVar34 = *(float *)&(this_00->State).InvI;
      fVar35 = (float)(dVar16 * dVar38 - (double)local_res8.MHandle * dVar14);
      fVar44 = (float)(local_1d0 * dVar14 - dVar16 * dVar36);
      fVar1 = *(float *)&(this_00->State).InvI.field_0x8;
      fVar2 = *(float *)&(this_00->State).InvI.field_0x4;
      fVar3 = *(float *)&(this_00->State).InvI.field_0x14;
      fVar4 = *(float *)&(this_00->State).InvI.field_0x24;
      fVar5 = *(float *)&(this_00->State).InvI.field_0x20;
      fVar6 = *(float *)&(this_00->State).InvI.field_0x10;
      fVar7 = *(float *)&(this_00->State).InvI.field_0x18;
      fVar8 = *(float *)&(this_00->State).InvI.field_0x28;
      *(float *)&(this_00->State).DP = (float)(dVar40 * dVar14) + *(float *)&(this_00->State).DP;
      fVar9 = *(float *)&(this_00->State).DP.field_0x8;
      *(float *)&(this_00->State).DP.field_0x4 =
           (float)(dVar40 * dVar38) + *(float *)&(this_00->State).DP.field_0x4;
      *(float *)&(this_00->State).DP.field_0x8 = (float)(dVar40 * dVar36) + fVar9;
      fVar9 = *(float *)&(this_00->State).DQ.field_0x4;
      fVar10 = *(float *)&(this_00->State).DQ.field_0x8;
      *(float *)&(this_00->State).DQ =
           fVar44 * fVar2 + fVar39 * fVar34 + fVar35 * fVar1 + *(float *)&(this_00->State).DQ;
      *(float *)&(this_00->State).DQ.field_0x4 =
           fVar44 * fVar3 + fVar39 * fVar6 + fVar35 * fVar7 + fVar9;
      *(float *)&(this_00->State).DQ.field_0x8 =
           fVar44 * fVar4 + fVar39 * fVar5 + fVar35 * fVar8 + fVar10;
      FSolverBody::UpdateRotationDependentState(this_00);
      *(double *)local_1e0 = dVar14 + *(double *)local_1e0;
      *(double *)(local_1e0 + 8) = dVar38 + *(double *)(local_1e0 + 8);
      *(double *)(local_1e0 + 0x10) = dVar36 + *(double *)(local_1e0 + 0x10);
      *(double *)(local_1e0 + 0x48) = dVar20;
    }
    else {
      *(double *)(local_1e0 + 0x48) = *(double *)(pFVar31 + 0x38);
    }
  }
  return;
}

// ApplyVelocityConstraint @ 143d9d3d0

void __thiscall
Chaos::FPBDSuspensionConstraints::ApplyVelocityConstraint
          (FPBDSuspensionConstraints *this,int param_1,double param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  FScriptContainerElement *this_00;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((bChaos_Suspension_Hardstop_Enabled) && (bChaos_Suspension_VelocitySolve)) {
    uVar10 = 0;
    uVar9 = 0;
    if (param_1 < (this->ConstraintSettings).ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((this->ConstraintSettings).AllocatorInstance.Data[(longlong)param_1 * 0x88] !=
        (FScriptContainerElement)0x0) {
      uVar9 = 0;
      if (param_1 < (this->CollisionSolvers).ArrayNum) {
        uVar9 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (this->CollisionSolvers).AllocatorInstance.Data + (longlong)param_1 * 0x60;
      if ((this_00 != (FScriptContainerElement *)0x0) && (0 < *(int *)(this_00 + 0x58))) {
        if ((1 < *(int *)(this_00 + 0x58)) &&
           (CVars::bChaos_PBDCollisionSolver_Velocity_AveragePointEnabled != false)) {
          Chaos::Private::FPBDCollisionSolver::SolveVelocityAverage
                    ((FPBDCollisionSolver *)this_00,(float)param_2);
        }
        fVar7 = __real_00800000;
        uVar9 = __xmm_80000000800000008000000080000000;
        fVar6 = __real_bf800000;
        uVar13 = uVar10;
        if (0 < *(int *)(this_00 + 0x58)) {
          do {
            lVar3 = *(longlong *)(this_00 + 0x50);
            fVar14 = *(float *)(lVar3 + 0xe8 + uVar10);
            if (0.0 < fVar14) {
              lVar11 = *(longlong *)(this_00 + 0x30);
              lVar4 = *(longlong *)(this_00 + 0x18);
              fVar17 = *(float *)(lVar3 + 0x18 + uVar10);
              fVar14 = (fVar14 + *(float *)(lVar3 + 0x100 + uVar10)) * (fVar6 / (float)param_2);
              if (0.0 <= fVar14) {
                fVar14 = 0.0;
              }
              fVar18 = *(float *)(lVar3 + 0xf4 + uVar10);
              fVar16 = ((*(float *)(lVar11 + 0x34) * *(float *)(lVar3 + 0x5c + uVar10) +
                         *(float *)(lVar3 + 0x58 + uVar10) * *(float *)(lVar11 + 0x30) +
                        *(float *)(lVar11 + 0x38) * *(float *)(lVar3 + 0x60 + uVar10)) -
                       ((((*(float *)(lVar4 + 0x24) - *(float *)(lVar11 + 0x24)) *
                          *(float *)(lVar3 + 0x1c + uVar10) +
                          (*(float *)(lVar4 + 0x20) - *(float *)(lVar11 + 0x20)) * fVar17 +
                         (*(float *)(lVar4 + 0x28) - *(float *)(lVar11 + 0x28)) *
                         *(float *)(lVar3 + 0x20 + uVar10)) - *(float *)(lVar3 + 0x48 + uVar10)) +
                        *(float *)(lVar4 + 0x38) * *(float *)(lVar3 + 0x54 + uVar10) +
                       *(float *)(lVar4 + 0x34) * *(float *)(lVar3 + 0x50 + uVar10) +
                       *(float *)(lVar3 + 0x4c + uVar10) * *(float *)(lVar4 + 0x30))) *
                       *(float *)(lVar3 + 0xdc + uVar10) * *(float *)(this_00 + 0x10);
              if (fVar16 + fVar18 < fVar14) {
                fVar16 = fVar14 - fVar18;
              }
              fVar17 = fVar16 * fVar17;
              *(float *)(lVar3 + 0xf4 + uVar10) = fVar18 + fVar16;
              fVar14 = *(float *)(this_00 + 0x48);
              fVar18 = fVar16 * *(float *)(lVar3 + 0x1c + uVar10);
              fVar19 = fVar16 * *(float *)(lVar3 + 0x20 + uVar10);
              if (fVar7 < fVar14) {
                fVar1 = *(float *)(lVar3 + 0x94 + uVar10);
                fVar2 = *(float *)(lVar3 + 0x98 + uVar10);
                fVar15 = *(float *)(lVar3 + 0x9c + uVar10);
                *(float *)(lVar4 + 0x20) = fVar14 * fVar17 + *(float *)(lVar4 + 0x20);
                *(float *)(lVar4 + 0x24) = fVar18 * fVar14 + *(float *)(lVar4 + 0x24);
                *(float *)(lVar4 + 0x28) = fVar19 * fVar14 + *(float *)(lVar4 + 0x28);
                *(float *)(lVar4 + 0x30) = fVar16 * fVar1 + *(float *)(lVar4 + 0x30);
                *(float *)(lVar4 + 0x34) = fVar16 * fVar2 + *(float *)(lVar4 + 0x34);
                *(float *)(lVar4 + 0x38) = fVar16 * fVar15 + *(float *)(lVar4 + 0x38);
                lVar11 = *(longlong *)(this_00 + 0x30);
              }
              if (fVar7 < *(float *)(this_00 + 0x4c)) {
                fVar15 = (float)((uint)*(float *)(this_00 + 0x4c) ^ uVar9);
                fVar16 = (float)((uint)fVar16 ^ uVar9);
                fVar14 = *(float *)(lVar3 + 0xb8 + uVar10);
                fVar1 = *(float *)(lVar3 + 0xbc + uVar10);
                fVar2 = *(float *)(lVar3 + 0xc0 + uVar10);
                *(float *)(lVar11 + 0x20) = fVar15 * fVar17 + *(float *)(lVar11 + 0x20);
                *(float *)(lVar11 + 0x24) = fVar15 * fVar18 + *(float *)(lVar11 + 0x24);
                *(float *)(lVar11 + 0x28) = fVar15 * fVar19 + *(float *)(lVar11 + 0x28);
                *(float *)(lVar11 + 0x30) = fVar16 * fVar14 + *(float *)(lVar11 + 0x30);
                *(float *)(lVar11 + 0x34) = fVar16 * fVar1 + *(float *)(lVar11 + 0x34);
                *(float *)(lVar11 + 0x38) = fVar16 * fVar2 + *(float *)(lVar11 + 0x38);
              }
            }
            uVar12 = (int)uVar13 + 1;
            uVar10 = uVar10 + 0x10c;
            uVar13 = (ulonglong)uVar12;
          } while ((int)uVar12 < *(int *)(this_00 + 0x58));
        }
      }
    }
  }
  return;
}

// ApplyVelocityConstraints @ 143d9d830

void __thiscall
Chaos::FPBDSuspensionConstraints::ApplyVelocityConstraints
          (FPBDSuspensionConstraints *this,TArrayView<int,int> *param_1,double param_2,int param_3,
          int param_4)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1->DataPtr;
  piVar1 = piVar2 + param_1->ArrayNum;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    ApplyVelocityConstraint(this,*piVar2,param_2,param_3,param_4);
  }
  return;
}

// ApplyVelocityConstraints @ 143d9d8c0

void __thiscall
Chaos::FPBDSuspensionConstraints::ApplyVelocityConstraints
          (FPBDSuspensionConstraints *this,double param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (this->ConstrainedParticles).ArrayNum) {
    do {
      ApplyVelocityConstraint(this,iVar1,param_1,param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->ConstrainedParticles).ArrayNum);
  }
  return;
}

// GatherInput @ 143da73e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
Chaos::FPBDSuspensionConstraints::GatherInput
          (FPBDSuspensionConstraints *this,int param_1,double param_2)

{
  double dVar1;
  FScriptContainerElement *pFVar2;
  FSolverBody *this_00;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  TRotation<double,3> *pTVar16;
  TVector<double,3> *pTVar17;
  TVector<double> *pTVar18;
  FDebugDrawQueue *pFVar19;
  FDebugDrawQueue *pFVar20;
  TVector<float,3> *pTVar21;
  PMatrix<float,3,3> *pPVar22;
  TGeometryParticleHandleImp<double,3,1> *pTVar23;
  TGeometryParticleHandleImp<double,3,1> *pTVar24;
  longlong lVar25;
  longlong lVar26;
  TGeometryParticleHandleImp<double,3,1> *pTVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  float fVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStackY_718 [32];
  float local_690;
  float fStack_68c;
  float local_688;
  TVector<float,3> local_684;
  FGenericParticleHandleImp local_678;
  float local_670;
  float fStack_66c;
  float local_668;
  TVector<float,3> local_664;
  TVector<float,3> local_658;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_648;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  undefined8 uStack_610;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  double local_5b8;
  FString local_5b0 [2];
  double local_590;
  double local_588;
  double dStack_580;
  double local_578;
  TVector<double>_u_0 local_570;
  TVector<double>_u_0 local_558;
  undefined4 local_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  double local_528;
  TQuat<double> local_518;
  TQuat<double> local_4f8;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  TVector<double>_u_0 local_4b8;
  TVector<double>_u_0 local_4a0;
  TVector<double>_u_0 local_488;
  TVector<double>_u_0 local_470;
  double local_458;
  double dStack_450;
  double local_448;
  TVector<double>_u_0 local_440;
  TVector<double>_u_0 local_428;
  FStringFormatArg local_408;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  TVector<float,3> local_398;
  TVector<float,3> local_38c;
  TVector<float,3> local_380;
  TVector<float,3> local_374;
  TVector<float,3> local_368;
  TVector<float,3> local_35c;
  TVector<double> local_350;
  TVector<double> local_338;
  PMatrix<float,3,3> local_318;
  PMatrix<float,3,3> local_2d8;
  FLatentDrawCommand local_298;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_718;
  pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  lVar25 = (longlong)param_1;
  uVar28 = (uint)~param_1 >> 0x1f;
  uVar44 = 0;
  uVar42 = uVar44;
  if (param_1 < (this->ConstraintResults).ArrayNum) {
    uVar42 = uVar28;
  }
  if ((uVar42 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->ConstraintResults).AllocatorInstance.Data;
  local_3e8 = 0;
  uStack_3e0 = 0;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50) = 0;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50 + 0x10 + 8) = uStack_3d0;
  local_3d8 = 0;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50 + 0x20) = local_3c8;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50 + 0x20 + 8) = uStack_3c0;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50 + 0x30) = local_3b8;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50 + 0x30 + 8) = uStack_3b0;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50 + 0x40) = local_3a8;
  *(undefined8 *)(pFVar2 + lVar25 * 0x50 + 0x40 + 8) = 0;
  uStack_3a0 = 0;
  uVar42 = uVar44;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar42 = uVar28;
  }
  if ((uVar42 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(longlong *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar25 * 8) == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintSolverBodies[ConstraintIndex] != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSuspensionConstraints.cpp"
                          ,0xd7,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar42 = uVar44;
  if (param_1 < (this->CollisionSolvers).ArrayNum) {
    uVar42 = uVar28;
  }
  if ((uVar42 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->CollisionSolvers).AllocatorInstance.Data;
  lVar26 = lVar25 * 0x60;
  uVar42 = uVar44;
  if (param_1 < (this->CollisionSolverManifoldPoints).ArrayNum) {
    uVar42 = uVar28;
  }
  if ((uVar42 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = (this->CollisionSolverManifoldPoints).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar26 + 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar26 + 0x30) = 0;
  *(FScriptContainerElement **)(pFVar2 + lVar26 + 0x50) = pFVar14 + lVar25 * 0x10c;
  *(undefined4 *)(pFVar2 + lVar26 + 0x58) = 0;
  *(undefined4 *)(pFVar2 + lVar26 + 0x5c) = 1;
  *(undefined8 *)(pFVar2 + lVar26 + 0x10) = 0x3f800000;
  uVar42 = uVar44;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar42 = uVar28;
  }
  if ((uVar42 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = *(FSolverBody **)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar25 * 8);
  uVar13 = 0;
  uVar42 = uVar13;
  if (param_1 < (this->StaticCollisionBodies).ArrayNum) {
    uVar42 = uVar28;
  }
  if ((uVar42 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar14 = (this->StaticCollisionBodies).AllocatorInstance.Data + lVar25 * 0x160;
  uVar42 = uVar13;
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar42 = uVar28;
  }
  if ((uVar42 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (this->ConstraintSettings).AllocatorInstance.Data;
  lVar15 = lVar25 * 0x88;
  if ((__real_00800000 < (this_00->State).InvM) && (pFVar3[lVar15] != (FScriptContainerElement)0x0))
  {
    uVar42 = uVar13;
    if (param_1 < (this->ConstrainedParticles).ArrayNum) {
      uVar42 = uVar28;
    }
    if ((uVar42 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_1 < (this->SuspensionLocalOffset).ArrayNum) {
      uVar13 = uVar28;
    }
    pTVar27 = *(TGeometryParticleHandleImp<double,3,1> **)
               ((this->ConstrainedParticles).AllocatorInstance.Data + lVar25 * 8);
    local_678.MHandle = pTVar27;
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->SuspensionLocalOffset).AllocatorInstance.Data;
    bVar12 = FGenericParticleHandleImp::IsDynamic(&local_678);
    if (bVar12) {
      pTVar24 = pTVar23;
      if (1 < *(byte *)((longlong)&pTVar27->_padding_ + 4)) {
        pTVar24 = pTVar27;
      }
      pTVar16 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24);
      local_4f8.X = *(double *)pTVar16;
      local_4f8.Y = *(double *)&pTVar16->field_0x8;
      local_4f8.Z = *(double *)&pTVar16->field_0x10;
      local_4f8.W = *(double *)&pTVar16->field_0x18;
    }
    else {
      local_4f8.X = 0.0;
      local_4f8.Y = 0.0;
      local_4f8.Z = ___xmm_3ff00000000000000000000000000000;
      local_4f8.W = _UNK_15061cbc8;
    }
    bVar12 = FGenericParticleHandleImp::IsDynamic(&local_678);
    if (bVar12) {
      pTVar24 = pTVar23;
      if (1 < *(byte *)((longlong)&pTVar27->_padding_ + 4)) {
        pTVar24 = pTVar27;
      }
      pTVar17 = TPBDRigidParticleHandleImp<double,3,1>::CenterOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24);
      local_528 = *(double *)&pTVar17->field_0x10;
      local_538 = *(undefined4 *)pTVar17;
      uStack_534 = *(undefined4 *)&pTVar17->field_0x4;
      uStack_530 = *(undefined4 *)&pTVar17->field_0x8;
      uStack_52c = *(undefined4 *)&pTVar17->field_0xc;
    }
    else {
      local_538 = 0;
      uStack_534 = 0;
      uStack_530 = 0;
      uStack_52c = 0;
      local_528 = 0.0;
    }
    local_558._s_0.X = *(double *)(pFVar4 + lVar25 * 0x18) - (double)CONCAT44(uStack_534,local_538);
    local_558._s_0.Y =
         *(double *)(pFVar4 + lVar25 * 0x18 + 8) - (double)CONCAT44(uStack_52c,uStack_530);
    local_558._s_0.Z = *(double *)(pFVar4 + lVar25 * 0x18 + 0x10) - local_528;
    pTVar18 = UE::Math::TQuat<double>::UnrotateVector
                        (&local_4f8,&local_350,(TVector<double> *)&local_558._s_0);
    local_590 = (pTVar18->field0_0x0)._s_0.Z;
    dVar7 = (pTVar18->field0_0x0)._s_0.X;
    dVar8 = (pTVar18->field0_0x0)._s_0.Y;
    bVar12 = FGenericParticleHandleImp::IsDynamic(&local_678);
    if (bVar12) {
      pTVar24 = pTVar23;
      if (1 < *(byte *)((longlong)&pTVar27->_padding_ + 4)) {
        pTVar24 = pTVar27;
      }
      pTVar16 = TPBDRigidParticleHandleImp<double,3,1>::RotationOfMass
                          ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar24);
      local_518.X = *(double *)pTVar16;
      local_518.Y = *(double *)&pTVar16->field_0x8;
      local_518.Z = *(double *)&pTVar16->field_0x10;
      local_518.W = *(double *)&pTVar16->field_0x18;
    }
    else {
      local_518.X = 0.0;
      local_518.Y = 0.0;
      local_518.Z = ___xmm_3ff00000000000000000000000000000;
      local_518.W = _UNK_15061cbc8;
    }
    local_428._s_0.X = (double)*(undefined8 *)(pFVar3 + lVar15 + 0x40);
    local_428._s_0.Y = (double)*(undefined8 *)(pFVar3 + lVar15 + 0x40 + 8);
    local_428._s_0.Z = (double)*(undefined8 *)(pFVar3 + lVar15 + 0x50);
    pTVar18 = UE::Math::TQuat<double>::UnrotateVector
                        (&local_518,&local_338,(TVector<double> *)&local_428._s_0);
    dVar9 = (pTVar18->field0_0x0)._s_0.X;
    dVar32 = (pTVar18->field0_0x0)._s_0.Y;
    dVar1 = (pTVar18->field0_0x0)._s_0.Z;
    FSolverBody::CorrectedQ(this_00,(TRotation<double,3> *)&local_4d8);
    dVar36 = local_590 * local_4d0 - dVar8 * local_4c8;
    dVar36 = dVar36 + dVar36;
    dVar33 = dVar7 * local_4c8 - local_590 * local_4d8;
    dVar34 = dVar8 * local_4d8 - dVar7 * local_4d0;
    dVar33 = dVar33 + dVar33;
    dVar34 = dVar34 + dVar34;
    dVar11 = (local_4d0 * dVar34 - local_4c8 * dVar33) + local_4c0 * dVar36 + dVar7;
    dVar10 = (local_4c8 * dVar36 - local_4d8 * dVar34) + local_4c0 * dVar33 + dVar8;
    dVar31 = (double)*(float *)&(this_00->State).DP + *(double *)&(this_00->State).P + dVar11;
    local_5b8 = (local_4d8 * dVar33 - local_4d0 * dVar36) + local_4c0 * dVar34 + local_590;
    dVar33 = (double)*(float *)&(this_00->State).DP.field_0x4 +
             *(double *)&(this_00->State).P.field_0x8 + dVar10;
    dVar36 = (double)*(float *)&(this_00->State).DP.field_0x8 +
             *(double *)&(this_00->State).P.field_0x10 + local_5b8;
    dVar37 = dVar1 * local_4d0 - dVar32 * local_4c8;
    dVar37 = dVar37 + dVar37;
    dVar34 = dVar9 * local_4c8 - dVar1 * local_4d8;
    dVar34 = dVar34 + dVar34;
    dVar7 = dVar32 * local_4d8 - dVar9 * local_4d0;
    dVar7 = dVar7 + dVar7;
    dVar8 = (local_4d0 * dVar7 - local_4c8 * dVar34) + local_4c0 * dVar37 + dVar9;
    dVar9 = (local_4d8 * dVar34 - local_4d0 * dVar37) + local_4c0 * dVar7 + dVar1;
    dVar34 = (local_4c8 * dVar37 - local_4d8 * dVar7) + local_4c0 * dVar34 + dVar32;
    dVar7 = (dVar31 - *(double *)(pFVar3 + lVar15 + 0x58)) * dVar8 +
            (dVar33 - *(double *)(pFVar3 + lVar15 + 0x60)) * dVar34 +
            (dVar36 - *(double *)(pFVar3 + lVar15 + 0x68)) * dVar9;
    dVar32 = *(double *)(pFVar3 + lVar15 + 0x30) - dVar7;
    dVar1 = dVar7 * dVar34 + *(double *)(pFVar3 + lVar15 + 0x60);
    dVar34 = dVar32 * dVar34 * *(double *)(pFVar3 + lVar15 + 0x78) +
             dVar32 * dVar8 * *(double *)(pFVar3 + lVar15 + 0x70) +
             dVar32 * dVar9 * *(double *)(pFVar3 + lVar15 + 0x80);
    local_590 = dVar7 * dVar9 + *(double *)(pFVar3 + lVar15 + 0x68);
    dVar7 = dVar7 * dVar8 + *(double *)(pFVar3 + lVar15 + 0x58);
    *(double *)(pFVar14 + 0x110) = dVar7;
    *(double *)(pFVar14 + 0x118) = dVar1;
    *(double *)(pFVar14 + 0x120) = local_590;
    *(double *)(pFVar14 + 0xf8) = dVar7;
    *(double *)(pFVar14 + 0x100) = dVar1;
    *(double *)(pFVar14 + 0x108) = local_590;
    if ((*(float *)(pFVar14 + 0x134) != 0.0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Body1->InvM() == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\PBDSuspensionConstraints.cpp"
                            ,0x100,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(FSolverBody **)(pFVar2 + lVar26 + 0x18) = this_00;
    *(FScriptContainerElement **)(pFVar2 + lVar26 + 0x30) = pFVar14;
    *(undefined4 *)(pFVar2 + lVar26 + 0x20) = 0x3f800000;
    *(undefined4 *)(pFVar2 + lVar26 + 0x24) = 0x3f800000;
    *(undefined4 *)(pFVar2 + lVar26 + 0x28) = 0x3f800000;
    *(undefined4 *)(pFVar2 + lVar26 + 0x38) = 0x3f800000;
    *(undefined4 *)(pFVar2 + lVar26 + 0x3c) = 0x3f800000;
    *(undefined4 *)(pFVar2 + lVar26 + 0x40) = 0x3f800000;
    *(undefined8 *)(pFVar2 + lVar26) = 0;
    *(undefined8 *)(pFVar2 + lVar26 + 8) = 0;
    if (bChaos_Suspension_DebugDraw_Hardstop != false) {
      local_470._s_0.Z = local_590;
      local_570._s_0.X = dVar31;
      local_570._s_0.Y = dVar33;
      local_570._s_0.Z = dVar36;
      local_470._s_0.X = dVar7;
      local_470._s_0.Y = dVar1;
      pFVar19 = FDebugDrawQueue::GetInstance();
      fVar40 = __real_bf800000;
      fVar53 = __real_40400000;
      local_4b8._s_0.Z = 0.0;
      local_4a0._s_0.Z = 0.0;
      local_4b8._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_4b8._s_0.Y = _UNK_15061cbc8;
      local_4a0._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_4a0._s_0.Y = _UNK_150689518;
      FDebugDrawQueue::DrawDebugCircle
                (pFVar19,(TVector<double> *)&local_570._s_0,__real_403e000000000000,0x3c,
                 &FColor::Yellow,false,__real_bf800000,'\0',__real_40400000,
                 (TVector<double> *)&local_4a0._s_0,(TVector<double> *)&local_4b8._s_0,false);
      pFVar19 = FDebugDrawQueue::GetInstance();
      local_440._s_0.Z = 0.0;
      local_488._s_0.Z = 0.0;
      local_440._s_0.X = ___xmm_3ff00000000000000000000000000000;
      local_440._s_0.Y = _UNK_15061cbc8;
      local_488._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_488._s_0.Y = _UNK_150689518;
      FDebugDrawQueue::DrawDebugCircle
                (pFVar19,(TVector<double> *)&local_470._s_0,__real_403e000000000000,0x3c,
                 &FColor::Green,false,fVar40,'\0',fVar53,(TVector<double> *)&local_488._s_0,
                 (TVector<double> *)&local_440._s_0,false);
      FStringFormatArg::FStringFormatArg(&local_408,dVar34);
      local_648.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_648.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,1,0,&local_648.AllocatorInstance,1,&local_648.ArrayMax);
      ConstructItems<FStringFormatArg,FStringFormatArg,int>
                (local_648.AllocatorInstance.Data,&local_408,1);
      ::FString::FormatImpl(local_5b0,L"{0}",&local_648);
      DestructItems<FStringFormatArg,int>
                ((FStringFormatArg *)local_648.AllocatorInstance.Data,local_648.ArrayNum);
      if ((FStringFormatArg *)local_648.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
        FMemory::Free(local_648.AllocatorInstance.Data);
      }
      if (local_408.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_408.StringValue.Data.AllocatorInstance.Data);
      }
      pFVar19 = FDebugDrawQueue::GetInstance();
      dVar36 = dVar36 + __real_4049000000000000;
      dVar33 = dVar33 + __real_4049000000000000;
      local_588 = dVar31;
      dStack_580 = dVar33;
      local_578 = dVar36;
      pFVar20 = FDebugDrawQueue::GetInstance();
      if ((pFVar20->bEnableDebugDrawing != false) &&
         (pFVar20 = FDebugDrawQueue::GetInstance(), 0 < pFVar20->NumConsumers)) {
        if (&pFVar19->CommandQueueCS == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::ReportNotNullPtr();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&pFVar19->CommandQueueCS);
        uVar42 = local_5b0[0].Data.ArrayNum - 1;
        if (local_5b0[0].Data.ArrayNum == 0) {
          uVar42 = uVar44;
        }
        local_448 = local_578;
        local_588 = dVar31;
        dStack_580 = dVar33;
        local_458 = dVar31;
        dStack_450 = dVar33;
        bVar12 = FDebugDrawQueue::AcceptCommand(pFVar19,uVar42,(TVector<double,3> *)&local_458);
        if (bVar12) {
          local_298.Text.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_298.Text.Data.ArrayNum = 0;
          local_298.Text.Data.ArrayMax = 0;
          local_298.TestBaseActor = (AActor *)0x0;
          local_298.TextLocation.field0_0x0._s_0.X = dVar31;
          local_298.TextLocation.field0_0x0._s_0.Y = dVar33;
          local_298.TextLocation.field0_0x0._s_0.Z = dVar36;
          ::FString::operator=(&local_298.Text,local_5b0);
          local_298.Color.field0_0x0._s_0 = FColor::White.field0_0x0;
          local_298.TestBaseActor = (AActor *)0x0;
          local_298.Duration = -1.0;
          local_298.LifeTime = -1.0;
          local_298.bDrawShadow = true;
          local_298.FontScale = 1.0;
          local_298.Type = String;
          FDebugDrawQueue::AddCommand(pFVar19,&local_298);
          if (local_298.Text.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Text.Data.AllocatorInstance.Data);
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&pFVar19->CommandQueueCS);
      }
      if (local_5b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5b0[0].Data.AllocatorInstance.Data);
      }
    }
    if (*(int *)(pFVar2 + lVar26 + 0x58) < *(int *)(pFVar2 + lVar26 + 0x5c)) {
      *(int *)(pFVar2 + lVar26 + 0x58) = *(int *)(pFVar2 + lVar26 + 0x58) + 1;
    }
    local_670 = (float)*(double *)(pFVar3 + lVar15 + 0x70);
    local_658._0_8_ = 0;
    local_658._8_4_ = 0;
    local_664._0_8_ = 0;
    local_664._8_4_ = 0;
    local_684._0_8_ = 0;
    fStack_66c = (float)*(double *)(pFVar3 + lVar15 + 0x78);
    local_684._8_4_ = 0;
    local_668 = (float)*(double *)(pFVar3 + lVar15 + 0x80);
    local_690 = (float)dVar11;
    fStack_68c = (float)dVar10;
    local_688 = (float)local_5b8;
    if ((*(longlong *)(pFVar2 + lVar26 + 0x50) == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("State.ManifoldPoints != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                            ,0x3c8,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((*(int *)(pFVar2 + lVar26 + 0x58) < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("PointIndex < State.NumManifoldPoints",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                            ,0x3c9,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    puVar5 = *(undefined8 **)(pFVar2 + lVar26 + 0x50);
    uVar42 = SUB84(dVar34,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar44 = (uint)((ulonglong)dVar34 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    *puVar5 = CONCAT44(fStack_68c,local_690);
    *(undefined8 *)((longlong)puVar5 + 0xc) = local_684._0_8_;
    puVar5[3] = CONCAT44(fStack_66c,local_670);
    *(undefined8 *)((longlong)puVar5 + 0x24) = local_664._0_8_;
    *(float *)(puVar5 + 1) = local_688;
    puVar5[6] = local_658._0_8_;
    *(undefined4 *)((longlong)puVar5 + 0x14) = local_684._8_4_;
    *(float *)(puVar5 + 4) = local_668;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = local_664._8_4_;
    *(undefined4 *)(puVar5 + 7) = local_658._8_4_;
    puVar5[8] = 0;
    *(undefined4 *)(puVar5 + 9) = 0;
    *(float *)((longlong)puVar5 + 0x3c) = (float)(double)CONCAT44(uVar44,uVar42);
    pTVar21 = TVector<float,3>::CrossProduct
                        (&local_374,(TVector<float,3> *)&local_690,(TVector<float,3> *)&local_670);
    *(undefined8 *)((longlong)puVar5 + 0x4c) = *(undefined8 *)pTVar21;
    *(undefined4 *)((longlong)puVar5 + 0x54) = *(undefined4 *)&pTVar21->field_0x8;
    pTVar21 = TVector<float,3>::CrossProduct(&local_380,(TVector<float,3> *)&local_690,&local_664);
    *(undefined8 *)((longlong)puVar5 + 100) = *(undefined8 *)pTVar21;
    *(undefined4 *)((longlong)puVar5 + 0x6c) = *(undefined4 *)&pTVar21->field_0x8;
    pTVar21 = TVector<float,3>::CrossProduct(&local_38c,(TVector<float,3> *)&local_690,&local_658);
    puVar5[0xe] = *(undefined8 *)pTVar21;
    *(undefined4 *)(puVar5 + 0xf) = *(undefined4 *)&pTVar21->field_0x8;
    pTVar21 = TVector<float,3>::CrossProduct(&local_398,&local_684,(TVector<float,3> *)&local_670);
    puVar5[0xb] = *(undefined8 *)pTVar21;
    *(undefined4 *)(puVar5 + 0xc) = *(undefined4 *)&pTVar21->field_0x8;
    pTVar21 = TVector<float,3>::CrossProduct(&local_35c,&local_684,&local_664);
    *(undefined8 *)((longlong)puVar5 + 0x7c) = *(undefined8 *)pTVar21;
    *(undefined4 *)((longlong)puVar5 + 0x84) = *(undefined4 *)&pTVar21->field_0x8;
    pTVar21 = TVector<float,3>::CrossProduct(&local_368,&local_684,&local_658);
    puVar5[0x11] = *(undefined8 *)pTVar21;
    local_638 = 0;
    uStack_630 = 0;
    *(undefined4 *)(puVar5 + 0x12) = *(undefined4 *)&pTVar21->field_0x8;
    puVar5[0x1d] = 0;
    puVar5[0x1e] = 0;
    puVar5[0x1f] = 0;
    *(undefined4 *)((longlong)puVar5 + 0x104) = 0;
    fVar53 = __real_00800000;
    local_628 = 0;
    uStack_620 = 0;
    local_618 = 0;
    uStack_610 = 0;
    fVar29 = *(float *)(pFVar2 + lVar26 + 0x28) * *(float *)(pFVar2 + lVar26 + 0x20) *
             *(float *)(*(longlong *)(pFVar2 + lVar26 + 0x18) + 0x134);
    local_5f8 = 0;
    uStack_5f0 = 0;
    local_5e8 = 0;
    uStack_5e0 = 0;
    local_5d8 = 0;
    uStack_5d0 = 0;
    fVar40 = 0.0;
    if (__real_00800000 < fVar29) {
      pPVar22 = FConstraintSolverBody::InvI
                          ((FConstraintSolverBody *)(pFVar2 + lVar26 + 0x18),&local_318);
      local_638 = *(undefined8 *)pPVar22;
      uStack_630 = *(undefined8 *)&pPVar22->field_0x8;
      local_628 = *(undefined8 *)&pPVar22->field_0x10;
      uStack_620 = *(undefined8 *)&pPVar22->field_0x18;
      local_618 = *(undefined8 *)&pPVar22->field_0x20;
      uStack_610 = *(undefined8 *)&pPVar22->field_0x28;
      fVar40 = fVar29;
    }
    fVar30 = *(float *)(pFVar2 + lVar26 + 0x40) * *(float *)(pFVar2 + lVar26 + 0x38) *
             *(float *)(*(longlong *)(pFVar2 + lVar26 + 0x30) + 0x134);
    fVar29 = 0.0;
    if (fVar53 < fVar30) {
      pPVar22 = FConstraintSolverBody::InvI
                          ((FConstraintSolverBody *)(pFVar2 + lVar26 + 0x30),&local_2d8);
      local_5f8 = *(undefined8 *)pPVar22;
      uStack_5f0 = *(undefined8 *)&pPVar22->field_0x8;
      local_5e8 = *(undefined8 *)&pPVar22->field_0x10;
      uStack_5e0 = *(undefined8 *)&pPVar22->field_0x18;
      local_5d8 = *(undefined8 *)&pPVar22->field_0x20;
      uStack_5d0 = *(undefined8 *)&pPVar22->field_0x28;
      fVar29 = fVar30;
    }
    *(float *)(pFVar2 + lVar26 + 0x48) = fVar40;
    *(float *)(pFVar2 + lVar26 + 0x4c) = fVar29;
    pTVar27 = pTVar23;
    fVar30 = __real_322bcc77;
    if (0 < *(int *)(pFVar2 + lVar26 + 0x58)) {
      do {
        lVar25 = *(longlong *)(pFVar2 + lVar26 + 0x50);
        fVar47 = 0.0;
        fVar50 = 0.0;
        fVar52 = 0.0;
        if (fVar53 < *(float *)(pFVar2 + lVar26 + 0x48)) {
          fVar53 = *(float *)((longlong)&pTVar23[3]._padding_ + lVar25);
          fVar30 = *(float *)((longlong)&pTVar23[3]._padding_ + lVar25 + 4);
          fVar47 = *(float *)((longlong)&pTVar23[3]._padding_ + lVar25 + 4);
          fVar45 = local_618._4_4_ * fVar53 + fVar47 * (float)local_618 + (float)uStack_610 * fVar30
          ;
          fVar48 = local_628._4_4_ * fVar53 + fVar47 * (float)local_628 + (float)uStack_620 * fVar30
          ;
          fVar41 = local_638._4_4_ * fVar53 + fVar47 * (float)local_638 + (float)uStack_630 * fVar30
          ;
          *(float *)((longlong)&pTVar23[6]._padding_ + lVar25 + 4) = fVar41;
          *(float *)((longlong)&pTVar23[6]._padding_ + lVar25) = fVar48;
          *(float *)((longlong)&pTVar23[6]._padding_ + lVar25 + 4) = fVar45;
          fVar53 = *(float *)((longlong)&pTVar23[4]._padding_ + lVar25);
          fVar30 = *(float *)((longlong)&pTVar23[4]._padding_ + lVar25 + 4);
          fVar50 = *(float *)((longlong)&pTVar23[4]._padding_ + lVar25 + 4);
          fVar43 = local_618._4_4_ * fVar53 + (float)local_618 * fVar50 + (float)uStack_610 * fVar30
          ;
          fVar51 = local_628._4_4_ * fVar53 + (float)local_628 * fVar50 + (float)uStack_620 * fVar30
          ;
          fVar39 = local_638._4_4_ * fVar53 + (float)local_638 * fVar50 + (float)uStack_630 * fVar30
          ;
          *(float *)((longlong)&pTVar23[6].HandleIdx + lVar25) = fVar39;
          *(float *)(&pTVar23[6].field_0x14 + lVar25) = fVar51;
          *(float *)((longlong)&pTVar23[7]._padding_ + lVar25) = fVar43;
          fVar53 = *(float *)(&pTVar23[4].field_0x14 + lVar25);
          fVar30 = *(float *)((longlong)&pTVar23[4].HandleIdx + lVar25);
          fVar52 = *(float *)((longlong)&pTVar23[5]._padding_ + lVar25);
          fVar38 = local_618._4_4_ * fVar53 + (float)local_618 * fVar30 + (float)uStack_610 * fVar52
          ;
          fVar35 = local_628._4_4_ * fVar53 + (float)local_628 * fVar30 + (float)uStack_620 * fVar52
          ;
          fVar53 = local_638._4_4_ * fVar53 + (float)local_638 * fVar30 + (float)uStack_630 * fVar52
          ;
          *(float *)((longlong)&pTVar23[7]._padding_ + lVar25 + 4) = fVar53;
          *(float *)((longlong)&pTVar23[7]._padding_ + lVar25) = fVar35;
          *(float *)((longlong)&pTVar23[7]._padding_ + lVar25 + 4) = fVar38;
          fVar47 = fVar48 * *(float *)((longlong)&pTVar23[3]._padding_ + lVar25) + fVar47 * fVar41 +
                   fVar45 * *(float *)((longlong)&pTVar23[3]._padding_ + lVar25 + 4) + fVar40;
          fVar50 = fVar51 * *(float *)((longlong)&pTVar23[4]._padding_ + lVar25) + fVar39 * fVar50 +
                   fVar43 * *(float *)((longlong)&pTVar23[4]._padding_ + lVar25 + 4) + fVar40;
          fVar52 = fVar53 * fVar30 + fVar35 * *(float *)(&pTVar23[4].field_0x14 + lVar25) +
                   fVar38 * *(float *)((longlong)&pTVar23[5]._padding_ + lVar25) + fVar40;
          fVar53 = __real_00800000;
          fVar30 = __real_322bcc77;
        }
        if (fVar53 < *(float *)(pFVar2 + lVar26 + 0x4c)) {
          fVar53 = *(float *)(&pTVar23[3].field_0x14 + lVar25);
          fVar30 = *(float *)((longlong)&pTVar23[4]._padding_ + lVar25);
          fVar35 = *(float *)((longlong)&pTVar23[3].HandleIdx + lVar25);
          fVar54 = (float)local_5d8 * fVar35 + local_5d8._4_4_ * fVar53 + (float)uStack_5d0 * fVar30
          ;
          fVar49 = (float)local_5e8 * fVar35 + local_5e8._4_4_ * fVar53 + (float)uStack_5e0 * fVar30
          ;
          fVar46 = local_5f8._4_4_ * fVar53 + (float)local_5f8 * fVar35 + (float)uStack_5f0 * fVar30
          ;
          *(float *)((longlong)&pTVar23[7].HandleIdx + lVar25) = fVar46;
          *(float *)(&pTVar23[7].field_0x14 + lVar25) = fVar49;
          *(float *)((longlong)&pTVar23[8]._padding_ + lVar25) = fVar54;
          fVar53 = *(float *)((longlong)&pTVar23[5]._padding_ + lVar25);
          fVar30 = *(float *)((longlong)&pTVar23[5]._padding_ + lVar25 + 4);
          fVar38 = *(float *)((longlong)&pTVar23[5]._padding_ + lVar25 + 4);
          fVar51 = local_5d8._4_4_ * fVar53 + (float)local_5d8 * fVar38 + (float)uStack_5d0 * fVar30
          ;
          fVar48 = local_5e8._4_4_ * fVar53 + (float)local_5e8 * fVar38 + (float)uStack_5e0 * fVar30
          ;
          fVar45 = local_5f8._4_4_ * fVar53 + (float)local_5f8 * fVar38 + (float)uStack_5f0 * fVar30
          ;
          *(float *)((longlong)&pTVar23[8]._padding_ + lVar25 + 4) = fVar45;
          *(float *)((longlong)&pTVar23[8]._padding_ + lVar25) = fVar48;
          *(float *)((longlong)&pTVar23[8]._padding_ + lVar25 + 4) = fVar51;
          fVar53 = *(float *)(&pTVar23[5].field_0x14 + lVar25);
          fVar30 = *(float *)((longlong)&pTVar23[5].HandleIdx + lVar25);
          fVar39 = *(float *)((longlong)&pTVar23[6]._padding_ + lVar25);
          fVar43 = local_5d8._4_4_ * fVar53 + (float)local_5d8 * fVar30 + (float)uStack_5d0 * fVar39
          ;
          fVar41 = local_5e8._4_4_ * fVar53 + (float)local_5e8 * fVar30 + (float)uStack_5e0 * fVar39
          ;
          fVar53 = local_5f8._4_4_ * fVar53 + (float)local_5f8 * fVar30 + (float)uStack_5f0 * fVar39
          ;
          *(float *)((longlong)&pTVar23[8].HandleIdx + lVar25) = fVar53;
          *(float *)(&pTVar23[8].field_0x14 + lVar25) = fVar41;
          *(float *)((longlong)&pTVar23[9]._padding_ + lVar25) = fVar43;
          fVar47 = fVar47 + fVar46 * fVar35 + fVar49 * *(float *)(&pTVar23[3].field_0x14 + lVar25) +
                            fVar54 * *(float *)((longlong)&pTVar23[4]._padding_ + lVar25) + fVar29;
          fVar50 = fVar50 + fVar45 * fVar38 +
                            fVar48 * *(float *)((longlong)&pTVar23[5]._padding_ + lVar25) +
                            fVar51 * *(float *)((longlong)&pTVar23[5]._padding_ + lVar25 + 4) +
                            fVar29;
          fVar52 = fVar52 + fVar41 * *(float *)(&pTVar23[5].field_0x14 + lVar25) + fVar53 * fVar30 +
                            fVar43 * *(float *)((longlong)&pTVar23[6]._padding_ + lVar25) + fVar29;
          fVar30 = __real_322bcc77;
        }
        fVar35 = __real_3f800000;
        if (fVar47 <= fVar30) {
          fVar47 = 0.0;
        }
        else {
          fVar47 = __real_3f800000 / fVar47;
        }
        *(float *)((longlong)&pTVar23[9]._padding_ + lVar25 + 4) = fVar47;
        if (fVar50 <= fVar30) {
          fVar50 = 0.0;
        }
        else {
          fVar50 = fVar35 / fVar50;
        }
        *(float *)((longlong)&pTVar23[9]._padding_ + lVar25) = fVar50;
        fVar53 = __real_00800000;
        if (fVar52 <= fVar30) {
          fVar35 = 0.0;
        }
        else {
          fVar35 = fVar35 / fVar52;
        }
        uVar42 = (int)pTVar27 + 1;
        *(float *)((longlong)&pTVar23[9]._padding_ + lVar25 + 4) = fVar35;
        pTVar23 = (TGeometryParticleHandleImp<double,3,1> *)((longlong)&pTVar23[0xb]._padding_ + 4);
        pTVar27 = (TGeometryParticleHandleImp<double,3,1> *)(ulonglong)uVar42;
      } while ((int)uVar42 < *(int *)(pFVar2 + lVar26 + 0x58));
    }
  }
  return;
}

// GatherInput @ 143da8a50

void __thiscall
Chaos::FPBDSuspensionConstraints::GatherInput
          (FPBDSuspensionConstraints *this,TArrayView<int,int> *param_1,double param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = param_1->DataPtr;
  piVar1 = piVar2 + param_1->ArrayNum;
  for (; piVar2 != piVar1; piVar2 = piVar2 + 1) {
    GatherInput(this,*piVar2,param_2);
  }
  return;
}

// GatherInput @ 143da8ac0

void __thiscall
Chaos::FPBDSuspensionConstraints::GatherInput(FPBDSuspensionConstraints *this,double param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < (this->ConstrainedParticles).ArrayNum) {
    do {
      GatherInput(this,iVar1,param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->ConstrainedParticles).ArrayNum);
  }
  return;
}

// RemoveConstraint @ 143db3b80

void __thiscall
Chaos::FPBDSuspensionConstraints::RemoveConstraint(FPBDSuspensionConstraints *this,int param_1)

{
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FConstraintHandle *pFVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  
  lVar11 = (longlong)param_1;
  uVar14 = ~param_1;
  uVar13 = uVar14 >> 0x1f;
  uVar9 = 0;
  if (param_1 < (this->Handles).ArrayNum) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar1 = &this->ConstrainedParticles;
  pFVar4 = *(FConstraintHandle **)((this->Handles).AllocatorInstance.Data + lVar11 * 8);
  uVar9 = 0;
  if (pFVar4 != (FConstraintHandle *)0x0) {
    uVar10 = uVar9;
    if (param_1 < (this->ConstrainedParticles).ArrayNum) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*(longlong *)((pTVar1->AllocatorInstance).Data + lVar11 * 8) != 0) {
      uVar10 = uVar9;
      if (param_1 < (this->ConstrainedParticles).ArrayNum) {
        uVar10 = uVar13;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      puVar5 = *(undefined8 **)((pTVar1->AllocatorInstance).Data + lVar11 * 8);
      TGeometryParticlesImp<double,3,0>::RemoveConstraintHandle
                ((TGeometryParticlesImp<double,3,0> *)*puVar5,(int *)(puVar5 + 1),pFVar4);
    }
    pFVar4->_padding_ = (longlong)&___7FConstraintHandle_Chaos__6B_;
    if (pFVar4->GraphEdge != (FPBDIslandConstraint *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphEdge == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                         ,0x79,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    ::operator_delete(pFVar4,0x20);
    uVar10 = 0;
    if (param_1 < (this->Handles).ArrayNum) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(undefined8 *)((this->Handles).AllocatorInstance.Data + lVar11 * 8) = 0;
  }
  uVar10 = 0;
  if (param_1 < (this->ConstrainedParticles).ArrayNum) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->ConstrainedParticles).ArrayNum;
  pFVar6 = (pTVar1->AllocatorInstance).Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11 * 8,pFVar6 + (longlong)(iVar3 - iVar12) * 8,(longlong)iVar12 << 3);
  }
  piVar2 = &(this->ConstrainedParticles).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&pTVar1->AllocatorInstance,(this->ConstrainedParticles).ArrayNum,
             &(this->ConstrainedParticles).ArrayMax);
  uVar10 = uVar9;
  if (param_1 < (this->SuspensionLocalOffset).ArrayNum) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->SuspensionLocalOffset).ArrayNum;
  pFVar6 = (this->SuspensionLocalOffset).AllocatorInstance.Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11 * 0x18,pFVar6 + (longlong)(iVar3 - iVar12) * 0x18,
            (longlong)iVar12 * 0x18);
  }
  piVar2 = &(this->SuspensionLocalOffset).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&(this->SuspensionLocalOffset).AllocatorInstance,
             (this->SuspensionLocalOffset).ArrayNum,&(this->SuspensionLocalOffset).ArrayMax);
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->ConstraintSettings).ArrayNum;
  pFVar6 = (this->ConstraintSettings).AllocatorInstance.Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11 * 0x88,pFVar6 + (longlong)(iVar3 - iVar12) * 0x88,
            (longlong)iVar12 * 0x88);
  }
  piVar2 = &(this->ConstraintSettings).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x88,8,&(this->ConstraintSettings).AllocatorInstance,
             (this->ConstraintSettings).ArrayNum,&(this->ConstraintSettings).ArrayMax);
  uVar10 = 0;
  uVar9 = uVar10;
  if (param_1 < (this->ConstraintResults).ArrayNum) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->ConstraintResults).ArrayNum;
  pFVar6 = (this->ConstraintResults).AllocatorInstance.Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11 * 0x50,pFVar6 + (longlong)(iVar3 - iVar12) * 0x50,
            (longlong)iVar12 * 0x50);
  }
  piVar2 = &(this->ConstraintResults).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x50,8,&(this->ConstraintResults).AllocatorInstance,(this->ConstraintResults).ArrayNum,
             &(this->ConstraintResults).ArrayMax);
  uVar9 = uVar10;
  if (param_1 < (this->ConstraintEnabledStates).ArrayNum) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->ConstraintEnabledStates).ArrayNum;
  pFVar6 = (this->ConstraintEnabledStates).AllocatorInstance.Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11,pFVar6 + (iVar3 - iVar12),(longlong)iVar12);
  }
  piVar2 = &(this->ConstraintEnabledStates).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,&(this->ConstraintEnabledStates).AllocatorInstance,
             (this->ConstraintEnabledStates).ArrayNum,&(this->ConstraintEnabledStates).ArrayMax);
  uVar9 = uVar10;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->ConstraintSolverBodies).ArrayNum;
  pFVar6 = (this->ConstraintSolverBodies).AllocatorInstance.Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11 * 8,pFVar6 + (longlong)(iVar3 - iVar12) * 8,(longlong)iVar12 << 3);
  }
  piVar2 = &(this->ConstraintSolverBodies).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->ConstraintSolverBodies).AllocatorInstance,
             (this->ConstraintSolverBodies).ArrayNum,&(this->ConstraintSolverBodies).ArrayMax);
  uVar9 = uVar10;
  if (param_1 < (this->CollisionSolvers).ArrayNum) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->CollisionSolvers).ArrayNum;
  pFVar6 = (this->CollisionSolvers).AllocatorInstance.Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11 * 0x60,pFVar6 + (longlong)(iVar3 - iVar12) * 0x60,
            (longlong)iVar12 * 0x60);
  }
  piVar2 = &(this->CollisionSolvers).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x60,8,&(this->CollisionSolvers).AllocatorInstance,(this->CollisionSolvers).ArrayNum,
             &(this->CollisionSolvers).ArrayMax);
  uVar9 = uVar10;
  if (param_1 < (this->CollisionSolverManifoldPoints).ArrayNum) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->CollisionSolverManifoldPoints).ArrayNum;
  pFVar6 = (this->CollisionSolverManifoldPoints).AllocatorInstance.Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11 * 0x10c,pFVar6 + (longlong)(iVar3 - iVar12) * 0x10c,
            (longlong)iVar12 * 0x10c);
  }
  piVar2 = &(this->CollisionSolverManifoldPoints).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10c,4,&(this->CollisionSolverManifoldPoints).AllocatorInstance,
             (this->CollisionSolverManifoldPoints).ArrayNum,
             &(this->CollisionSolverManifoldPoints).ArrayMax);
  uVar9 = uVar10;
  if (param_1 < (this->StaticCollisionBodies).ArrayNum) {
    uVar9 = uVar13;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->StaticCollisionBodies).ArrayNum;
  pFVar6 = (this->StaticCollisionBodies).AllocatorInstance.Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11 * 0x160,pFVar6 + (longlong)(iVar3 - iVar12) * 0x160,
            (longlong)iVar12 * 0x160);
  }
  piVar2 = &(this->StaticCollisionBodies).ArrayNum;
  *piVar2 = *piVar2 + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x160,0x10,&(this->StaticCollisionBodies).AllocatorInstance,
             (this->StaticCollisionBodies).ArrayNum,&(this->StaticCollisionBodies).ArrayMax);
  if (param_1 < (this->Handles).ArrayNum) {
    uVar10 = uVar13;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar3 = (this->Handles).ArrayNum;
  pFVar6 = (this->Handles).AllocatorInstance.Data;
  iVar12 = iVar3 + uVar14;
  if (1 < iVar12) {
    iVar12 = 1;
  }
  if (iVar12 != 0) {
    memmove(pFVar6 + lVar11 * 8,pFVar6 + (longlong)(iVar3 - iVar12) * 8,(longlong)iVar12 << 3);
  }
  iVar12 = (this->Handles).ArrayNum + -1;
  (this->Handles).ArrayNum = iVar12;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&(this->Handles).AllocatorInstance,iVar12,&(this->Handles).ArrayMax);
  if (param_1 < (this->Handles).ArrayNum) {
    if (param_1 < 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(int *)(*(longlong *)((this->Handles).AllocatorInstance.Data + lVar11 * 8) + 0x18) = param_1;
  }
  return;
}

// ScatterOutput @ 143db4e30

void __thiscall
Chaos::FPBDSuspensionConstraints::ScatterOutput
          (FPBDSuspensionConstraints *this,int param_1,double param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  
  iVar4 = (this->CollisionSolvers).ArrayNum;
  lVar13 = (longlong)param_1;
  uVar12 = 0;
  if (0 < iVar4) {
    uVar15 = (uint)~param_1 >> 0x1f;
    uVar11 = 0;
    if (param_1 < iVar4) {
      uVar11 = uVar15;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar14 = lVar13 * 0x60;
    if (0 < *(int *)((this->CollisionSolvers).AllocatorInstance.Data + lVar14 + 0x58)) {
      uVar11 = uVar12;
      if (param_1 < (this->CollisionSolvers).ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->CollisionSolvers).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar5 + lVar14 + 0x50) == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("State.ManifoldPoints != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                              ,0xb5,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((*(int *)(pFVar5 + lVar14 + 0x58) < 1) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ManifoldPointIndex < NumManifoldPoints()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                              ,0xb6,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar14 = *(longlong *)(pFVar5 + lVar14 + 0x50);
      fVar1 = *(float *)(lVar14 + 0xe8);
      uVar11 = uVar12;
      if (param_1 < (this->ConstraintResults).ArrayNum) {
        uVar11 = uVar15;
      }
      fVar2 = *(float *)(lVar14 + 0x18);
      uVar3 = *(undefined8 *)(lVar14 + 0x1c);
      dVar9 = (double)(fVar1 * (float)((ulonglong)uVar3 >> 0x20));
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->ConstraintResults).AllocatorInstance.Data;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x18) = (double)(fVar1 * fVar2);
      auVar7._8_4_ = SUB84(dVar9,0);
      auVar7._0_8_ = (double)(fVar1 * (float)uVar3);
      auVar7._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(pFVar5 + lVar13 * 0x50 + 0x20) = auVar7;
      fVar1 = *(float *)(lVar14 + 0xf4);
      fVar2 = *(float *)(lVar14 + 0x18);
      uVar11 = uVar12;
      if (param_1 < (this->ConstraintResults).ArrayNum) {
        uVar11 = uVar15;
      }
      uVar3 = *(undefined8 *)(lVar14 + 0x1c);
      dVar9 = (double)(fVar1 * (float)((ulonglong)uVar3 >> 0x20));
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->ConstraintResults).AllocatorInstance.Data;
      *(double *)(pFVar5 + lVar13 * 0x50 + 0x30) = (double)(fVar1 * fVar2);
      auVar8._8_4_ = SUB84(dVar9,0);
      auVar8._0_8_ = (double)(fVar1 * (float)uVar3);
      auVar8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined1 (*) [16])(pFVar5 + lVar13 * 0x50 + 0x38) = auVar8;
    }
  }
  uVar11 = uVar12;
  if (param_1 < (this->ConstraintSolverBodies).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(undefined8 *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar13 * 8) = 0;
  if (param_1 < (this->CollisionSolvers).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (this->CollisionSolvers).AllocatorInstance.Data;
  lVar13 = lVar13 * 0x60;
  *(undefined8 *)(pFVar5 + lVar13 + 0x18) = 0;
  *(undefined8 *)(pFVar5 + lVar13 + 0x30) = 0;
  *(undefined8 *)(pFVar5 + lVar13 + 0x50) = 0;
  *(undefined8 *)(pFVar5 + lVar13 + 0x58) = 0;
  return;
}

// ScatterOutput @ 143db5160

void __thiscall
Chaos::FPBDSuspensionConstraints::ScatterOutput
          (FPBDSuspensionConstraints *this,TArrayView<int,int> *param_1,double param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint *puVar17;
  
  puVar17 = (uint *)param_1->DataPtr;
  puVar1 = puVar17 + param_1->ArrayNum;
  do {
    if (puVar17 == puVar1) {
      return;
    }
    iVar5 = (this->CollisionSolvers).ArrayNum;
    uVar6 = *puVar17;
    lVar14 = (longlong)(int)uVar6;
    if (0 < iVar5) {
      uVar16 = ~uVar6 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar6 < iVar5) {
        uVar13 = uVar16;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar15 = lVar14 * 0x60;
      if (0 < *(int *)((this->CollisionSolvers).AllocatorInstance.Data + lVar15 + 0x58)) {
        uVar13 = 0;
        if ((int)uVar6 < (this->CollisionSolvers).ArrayNum) {
          uVar13 = uVar16;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (this->CollisionSolvers).AllocatorInstance.Data;
        if ((*(longlong *)(pFVar7 + lVar15 + 0x50) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("State.ManifoldPoints != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                                ,0xb5,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((*(int *)(pFVar7 + lVar15 + 0x58) < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ManifoldPointIndex < NumManifoldPoints()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                                ,0xb6,L""), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar15 = *(longlong *)(pFVar7 + lVar15 + 0x50);
        fVar2 = *(float *)(lVar15 + 0xe8);
        uVar13 = 0;
        if ((int)uVar6 < (this->ConstraintResults).ArrayNum) {
          uVar13 = uVar16;
        }
        fVar3 = *(float *)(lVar15 + 0x18);
        uVar4 = *(undefined8 *)(lVar15 + 0x1c);
        dVar11 = (double)(fVar2 * (float)((ulonglong)uVar4 >> 0x20));
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (this->ConstraintResults).AllocatorInstance.Data;
        *(double *)(pFVar7 + lVar14 * 0x50 + 0x18) = (double)(fVar2 * fVar3);
        auVar9._8_4_ = SUB84(dVar11,0);
        auVar9._0_8_ = (double)(fVar2 * (float)uVar4);
        auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(pFVar7 + lVar14 * 0x50 + 0x20) = auVar9;
        fVar2 = *(float *)(lVar15 + 0xf4);
        fVar3 = *(float *)(lVar15 + 0x18);
        uVar4 = *(undefined8 *)(lVar15 + 0x1c);
        uVar13 = 0;
        if ((int)uVar6 < (this->ConstraintResults).ArrayNum) {
          uVar13 = uVar16;
        }
        dVar11 = (double)(fVar2 * (float)((ulonglong)uVar4 >> 0x20));
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (this->ConstraintResults).AllocatorInstance.Data;
        *(double *)(pFVar7 + lVar14 * 0x50 + 0x30) = (double)(fVar2 * fVar3);
        auVar10._8_4_ = SUB84(dVar11,0);
        auVar10._0_8_ = (double)(fVar2 * (float)uVar4);
        auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        *(undefined1 (*) [16])(pFVar7 + lVar14 * 0x50 + 0x38) = auVar10;
      }
    }
    uVar13 = 0;
    if ((int)uVar6 < (this->ConstraintSolverBodies).ArrayNum) {
      uVar13 = ~uVar6 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(undefined8 *)((this->ConstraintSolverBodies).AllocatorInstance.Data + lVar14 * 8) = 0;
    uVar13 = 0;
    if ((int)uVar6 < (this->CollisionSolvers).ArrayNum) {
      uVar13 = ~uVar6 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (this->CollisionSolvers).AllocatorInstance.Data;
    lVar14 = lVar14 * 0x60;
    puVar17 = puVar17 + 1;
    *(undefined8 *)(pFVar7 + lVar14 + 0x18) = 0;
    *(undefined8 *)(pFVar7 + lVar14 + 0x30) = 0;
    *(undefined8 *)(pFVar7 + lVar14 + 0x50) = 0;
    *(undefined8 *)(pFVar7 + lVar14 + 0x58) = 0;
  } while( true );
}

// ScatterOutput @ 143db54d0

void __thiscall
Chaos::FPBDSuspensionConstraints::ScatterOutput(FPBDSuspensionConstraints *this,double param_1)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  uVar15 = 0;
  uVar17 = uVar15;
  uVar18 = uVar15;
  uVar19 = uVar15;
  if (0 < (this->ConstrainedParticles).ArrayNum) {
    do {
      iVar4 = (this->CollisionSolvers).ArrayNum;
      uVar14 = (uint)uVar15;
      uVar13 = 0;
      if (0 < iVar4) {
        uVar16 = ~uVar14 >> 0x1f;
        uVar12 = 0;
        if ((int)uVar14 < iVar4) {
          uVar12 = uVar16;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (0 < *(int *)((this->CollisionSolvers).AllocatorInstance.Data + uVar17 + 0x58)) {
          uVar12 = uVar13;
          if ((int)uVar14 < (this->CollisionSolvers).ArrayNum) {
            uVar12 = uVar16;
          }
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (this->CollisionSolvers).AllocatorInstance.Data;
          if ((*(longlong *)(pFVar5 + uVar17 + 0x50) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("State.ManifoldPoints != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                                  ,0xb5,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((*(int *)(pFVar5 + uVar17 + 0x58) < 1) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ManifoldPointIndex < NumManifoldPoints()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                                  ,0xb6,L""), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar6 = *(longlong *)(pFVar5 + uVar17 + 0x50);
          fVar1 = *(float *)(lVar6 + 0xe8);
          uVar12 = uVar13;
          if ((int)uVar14 < (this->ConstraintResults).ArrayNum) {
            uVar12 = uVar16;
          }
          fVar2 = *(float *)(lVar6 + 0x18);
          uVar3 = *(undefined8 *)(lVar6 + 0x1c);
          dVar10 = (double)(fVar1 * (float)((ulonglong)uVar3 >> 0x20));
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (this->ConstraintResults).AllocatorInstance.Data;
          *(double *)(pFVar5 + uVar18 + 0x18) = (double)(fVar1 * fVar2);
          auVar8._8_4_ = SUB84(dVar10,0);
          auVar8._0_8_ = (double)(fVar1 * (float)uVar3);
          auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(pFVar5 + uVar18 + 0x20) = auVar8;
          fVar1 = *(float *)(lVar6 + 0xf4);
          fVar2 = *(float *)(lVar6 + 0x18);
          uVar12 = 0;
          if ((int)uVar14 < (this->ConstraintResults).ArrayNum) {
            uVar12 = uVar16;
          }
          uVar3 = *(undefined8 *)(lVar6 + 0x1c);
          dVar10 = (double)(fVar1 * (float)((ulonglong)uVar3 >> 0x20));
          if ((uVar12 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (this->ConstraintResults).AllocatorInstance.Data;
          *(double *)(pFVar5 + uVar18 + 0x30) = (double)(fVar1 * fVar2);
          auVar9._8_4_ = SUB84(dVar10,0);
          auVar9._0_8_ = (double)(fVar1 * (float)uVar3);
          auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          *(undefined1 (*) [16])(pFVar5 + uVar18 + 0x38) = auVar9;
        }
      }
      uVar12 = 0;
      if ((int)uVar14 < (this->ConstraintSolverBodies).ArrayNum) {
        uVar12 = ~uVar14 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)((this->ConstraintSolverBodies).AllocatorInstance.Data + uVar19 * 8) = 0;
      if ((int)uVar14 < (this->CollisionSolvers).ArrayNum) {
        uVar13 = ~uVar14 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->CollisionSolvers).AllocatorInstance.Data;
      uVar15 = (ulonglong)(uVar14 + 1);
      *(undefined8 *)(pFVar5 + uVar17 + 0x18) = 0;
      *(undefined8 *)(pFVar5 + uVar17 + 0x30) = 0;
      *(undefined8 *)(pFVar5 + uVar17 + 0x50) = 0;
      *(undefined8 *)(pFVar5 + uVar17 + 0x58) = 0;
      uVar17 = uVar17 + 0x60;
      uVar18 = uVar18 + 0x50;
      uVar19 = uVar19 + 1;
    } while ((int)(uVar14 + 1) < (this->ConstrainedParticles).ArrayNum);
  }
  return;
}

// GetSettings @ 1440e5ab0

FPBDSuspensionSettings * __thiscall
Chaos::FPBDSuspensionConstraints::GetSettings(FPBDSuspensionConstraints *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPBDSuspensionSettings *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->ConstraintSettings).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPBDSuspensionSettings *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPBDSuspensionSettings *)
         ((this->ConstraintSettings).AllocatorInstance.Data + (longlong)param_1 * 0x88);
}

