// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 25

// FPBDCollisionContainerSolver @ 143a042b0

FPBDCollisionContainerSolver * __thiscall
Chaos::FPBDCollisionContainerSolver::FPBDCollisionContainerSolver
          (FPBDCollisionContainerSolver *this,FPBDCollisionConstraints *param_1,int param_2)

{
  *(int *)&this->_padding_ = param_2;
  this->_padding_ = (longlong)&___7FPBDCollisionContainerSolver_Chaos__6B_;
  (this->CollisionConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionConstraints).ArrayNum = 0;
  (this->CollisionConstraints).ArrayMax = 0;
  (this->Scratch).BufferNext = (uchar *)0x0;
  (this->Scratch).BufferBegin = (uchar *)0x0;
  (this->Scratch).BufferEnd = (uchar *)0x0;
  this->CollisionSolvers = (FPBDCollisionSolver *)0x0;
  this->CollisionSolverManifoldPoints = (FPBDCollisionSolverManifoldPoint *)0x0;
  this->NumCollisionSolverManifoldPoints = 0;
  this->MaxCollisionSolverManifoldPoints = 0;
  (this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->bCollisionConstraintPerIterationCollisionDetection).ArrayNum = 0;
  (this->bCollisionConstraintPerIterationCollisionDetection).ArrayMax = 0;
  this->bPerIterationCollisionDetection = false;
  this->ConstraintContainer = param_1;
  this->AppliedShockPropagation = 1.0;
  return this;
}

// ~FPBDCollisionContainerSolver @ 143a04730

void __thiscall
Chaos::FPBDCollisionContainerSolver::~FPBDCollisionContainerSolver
          (FPBDCollisionContainerSolver *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDCollisionContainerSolver_Chaos__6B_;
  pFVar1 = (this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Chaos::Private::FScratchBuffer::DestroyBuffer(&this->Scratch);
  pFVar1 = (this->CollisionConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  return;
}

// AddBodies @ 143a06500

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::FPBDCollisionContainerSolver::AddBodies
          (FPBDCollisionContainerSolver *this,FSolverBodyContainer *param_1)

{
  int iVar1;
  int iVar2;
  FPBDCollisionSolver *pFVar3;
  longlong lVar4;
  FPBDCollisionSolverManifoldPoint *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FSolverBody *pFVar9;
  FSolverBody *pFVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong local_res8;
  
  PrepareSolverBuffer(this);
  if (this->CollisionSolverManifoldPoints != (FPBDCollisionSolverManifoldPoint *)0x0) {
    iVar1 = this->NumCollisionSolvers;
    uVar11 = 0;
    if (0 < (longlong)iVar1) {
      lVar13 = 0;
      local_res8 = 0;
      do {
        if ((this->NumCollisionSolvers <= (int)uVar11) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < NumSolvers()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionContainerSolver.h"
                               ,0x38,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar3 = this->CollisionSolvers;
        uVar8 = 0;
        if ((int)uVar11 < (this->CollisionConstraints).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar4 = *(longlong *)((this->CollisionConstraints).AllocatorInstance.Data + lVar13 * 8);
        if ((lVar4 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Constraint != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                               ,0x243,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar9 = FSolverBodyContainer::FindOrAdd
                           (param_1,(FGenericParticleHandle)
                                    ((FGenericParticleHandleImp *)(lVar4 + 0xe0))->MHandle);
        pFVar10 = FSolverBodyContainer::FindOrAdd
                            (param_1,(FGenericParticleHandle)
                                     ((FGenericParticleHandleImp *)(lVar4 + 0xe8))->MHandle);
        if ((pFVar9 == (FSolverBody *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Body0 != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                               ,0x249,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((pFVar10 == (FSolverBody *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Body1 != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                               ,0x24a,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar8 = 0;
        if ((int)uVar11 < (this->CollisionConstraints).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (((this->ConstraintContainer->DetectorSettings).bDeferNarrowPhase == false) &&
           (lVar4 = *(longlong *)((this->CollisionConstraints).AllocatorInstance.Data + lVar13 * 8),
           (*(byte *)(lVar4 + 0x374) >> 3 & 1) == 0)) {
          iVar12 = *(int *)(lVar4 + 0x5b0);
        }
        else {
          iVar12 = 4;
        }
        if ((this->MaxCollisionSolverManifoldPoints <
             this->NumCollisionSolverManifoldPoints + iVar12) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumCollisionSolverManifoldPoints + ConstraintManifoldPointMax <= MaxCollisionSolverManifoldPoints"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                               ,0x250,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar2 = this->NumCollisionSolverManifoldPoints;
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 1;
        pFVar5 = this->CollisionSolverManifoldPoints;
        *(int *)((longlong)(pFVar3->State).InvMs + local_res8 + 0x14) = iVar12;
        *(FSolverBody **)((longlong)&(pFVar3->State).SolverBodies[1].Body + local_res8) = pFVar10;
        *(FPBDCollisionSolverManifoldPoint **)((longlong)(pFVar3->State).InvMs + local_res8 + 8) =
             pFVar5 + iVar2;
        *(undefined4 *)((longlong)(pFVar3->State).InvMs + local_res8 + 0x10) = 0;
        *(FSolverBody **)((longlong)&(pFVar3->State).SolverBodies[0].Body + local_res8) = pFVar9;
        this->NumCollisionSolverManifoldPoints = this->NumCollisionSolverManifoldPoints + iVar12;
        local_res8 = local_res8 + 0x60;
      } while (lVar13 < iVar1);
    }
  }
  return;
}

// AddConstraint @ 143a06e90

void __thiscall
Chaos::FPBDCollisionContainerSolver::AddConstraint
          (FPBDCollisionContainerSolver *this,FPBDCollisionConstraint *param_1)

{
  TArray<Chaos::FPBDCollisionConstraint_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FPBDCollisionConstraint *local_18 [2];
  
  pTVar1 = &this->CollisionConstraints;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(this->CollisionConstraints).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->CollisionConstraints).ArrayNum;
  piVar2 = &(this->CollisionConstraints).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->CollisionConstraints).ArrayNum = iVar6 + 1;
  *(FPBDCollisionConstraint **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       local_18[0];
  return;
}

// AddConstraints @ 143a07070

void __thiscall
Chaos::FPBDCollisionContainerSolver::AddConstraints
          (FPBDCollisionContainerSolver *this,
          TArrayView<Chaos::Private::FPBDIslandConstraint_*,int> *param_1)

{
  FPBDIslandConstraint **ppFVar1;
  FPBDCollisionConstraint *pFVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  FPBDIslandConstraint **ppFVar8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  
  ppFVar8 = param_1->DataPtr;
  ppFVar1 = ppFVar8 + param_1->ArrayNum;
  do {
    if (ppFVar8 == ppFVar1) {
      return;
    }
    pFVar2 = (FPBDCollisionConstraint *)(*ppFVar8)->Constraint;
    cVar5 = (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
    if (cVar5 == '\0') {
      lVar3 = pFVar2->_padding_;
      if (lVar3 == 0) {
LAB_143a0712c:
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("As<T>() != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                           ,0xbd,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        piVar7 = (int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c
                        );
        if ((*piVar7 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          if ((*piVar7 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                         ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            if ((*piVar7 < `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                           ::__l2::_thread_safe_static_guard_0__) &&
               (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                     ::__l2::_thread_safe_static_guard_0__),
               `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
               ::__l2::_thread_safe_static_guard_0__ == -1)) {
              ::FName::FName(&local_res10,L"FConstraintHandle");
              `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID.TypeName = local_res10;
              `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
              ::__l2::STypeID.BaseType = (FConstraintHandleTypeID *)0x0;
              _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                                   ::__l2::_thread_safe_static_guard_0__);
            }
            ::FName::FName(&local_res18,L"FIntrusiveConstraintHandle");
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
            ::__l2::STypeID.TypeName = local_res18;
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
            ::__l2::STypeID.BaseType =
                 &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FConstraintHandle::StaticType(void)'
                  ::__l2::STypeID;
            _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          ::FName::FName(&local_res20,L"FCollisionConstraintHandle");
          STypeID.TypeName = local_res20;
          STypeID.BaseType =
               &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FIntrusiveConstraintHandle::StaticType(void)'
                ::__l2::STypeID;
          _Init_thread_footer(&::_TSS0);
        }
        if ((STypeID.TypeName != *(FName *)(lVar3 + 8)) &&
           ((*(FConstraintHandleTypeID **)(lVar3 + 0x10) == (FConstraintHandleTypeID *)0x0 ||
            (bVar6 = FConstraintHandleTypeID::IsA
                               (*(FConstraintHandleTypeID **)(lVar3 + 0x10),&STypeID), !bVar6))))
        goto LAB_143a0712c;
      }
      AddConstraint(this,pFVar2);
    }
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// AddConstraints @ 143a07290

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionContainerSolver::AddConstraints(FPBDCollisionContainerSolver *this)

{
  uint uVar1;
  int iVar2;
  FPBDCollisionConstraint *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FPBDCollisionConstraint **ppFVar7;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_18;
  
  uVar1 = (this->ConstraintContainer->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if (((int)uVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar2 = (this->CollisionConstraints).ArrayNum;
  this->AppliedShockPropagation = 1.0;
  uVar6 = uVar1;
  if ((ulonglong)(longlong)iVar2 < (ulonglong)(longlong)(int)uVar1) {
    uVar6 = (uint)((ulonglong)((longlong)(int)uVar1 * 5) >> 2);
  }
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
  }
  (this->CollisionConstraints).ArrayNum = 0;
  if ((this->CollisionConstraints).ArrayMax < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar6,&(this->CollisionConstraints).AllocatorInstance,0,
               &(this->CollisionConstraints).ArrayMax);
  }
  (this->bCollisionConstraintPerIterationCollisionDetection).ArrayNum = 0;
  if ((this->bCollisionConstraintPerIterationCollisionDetection).ArrayMax < (int)uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar6,
               &(this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance,0,
               &(this->bCollisionConstraintPerIterationCollisionDetection).ArrayMax);
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->bCollisionConstraintPerIterationCollisionDetection,uVar1,No);
  this->NumCollisionSolverManifoldPoints = 0;
  this->MaxCollisionSolverManifoldPoints = 0;
  this->CollisionSolvers = (FPBDCollisionSolver *)0x0;
  this->CollisionSolverManifoldPoints = (FPBDCollisionSolverManifoldPoint *)0x0;
  FPBDCollisionConstraints::GetConstraintHandles(this->ConstraintContainer,&local_18);
  ppFVar7 = local_18.DataPtr;
  while( true ) {
    if (ppFVar7 == local_18.DataPtr + local_18.ArrayNum) {
      return;
    }
    pFVar3 = *ppFVar7;
    if ((pFVar3 == (FPBDCollisionConstraint *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ConstraintHandle != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                           ,0x217,L""), bVar5)) break;
    AddConstraint(this,pFVar3);
    ppFVar7 = ppFVar7 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// ApplyPositionConstraints @ 143a08160

void __thiscall
Chaos::FPBDCollisionContainerSolver::ApplyPositionConstraints
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3)

{
  SolvePositionImpl(this,param_1,param_2,param_3,0,this->NumCollisionSolvers,
                    &this->ConstraintContainer->SolverSettings);
  return;
}

// ApplyProjectionConstraints @ 143a08670

void __thiscall
Chaos::FPBDCollisionContainerSolver::ApplyProjectionConstraints
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3)

{
  return;
}

// ApplyShockPropagation @ 143a086a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDCollisionContainerSolver::ApplyShockPropagation
          (FPBDCollisionContainerSolver *this,float param_1)

{
  FPBDCollisionSolver *pFVar1;
  longlong lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float local_1c8;
  float fStack_1c4;
  float local_1b8;
  float fStack_1b4;
  float local_1a8;
  float fStack_1a4;
  float local_188;
  float fStack_184;
  float local_178;
  float fStack_174;
  float local_168;
  float fStack_164;
  
  fVar5 = __real_00800000;
  fVar4 = __real_3f800000;
  if (param_1 != this->AppliedShockPropagation) {
    uVar12 = 0;
    if (0 < this->NumCollisionSolvers) {
      lVar10 = 0;
      lVar11 = 0;
      fVar27 = __real_322bcc77;
      do {
        uVar7 = 0;
        if ((int)uVar12 < (this->CollisionConstraints).ArrayNum) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = *(longlong *)((this->CollisionConstraints).AllocatorInstance.Data + lVar11);
        if ((this->NumCollisionSolvers <= (int)uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < NumSolvers()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionContainerSolver.h"
                               ,0x38,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar1 = this->CollisionSolvers;
        if (lVar8 != 0) {
          if ((*(longlong *)((longlong)&(pFVar1->State).SolverBodies[1].Body + lVar10) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                 ,0x246,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar8 = *(longlong *)((longlong)&(pFVar1->State).SolverBodies[1].Body + lVar10);
          if ((*(longlong *)((longlong)&(pFVar1->State).SolverBodies[0].Body + lVar10) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                 ,0x246,L""), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar2 = *(longlong *)((longlong)&(pFVar1->State).SolverBodies[0].Body + lVar10);
          if ((fVar5 < *(float *)(lVar2 + 0x134)) && (fVar5 < *(float *)(lVar8 + 0x134))) {
            iVar9 = *(int *)(lVar8 + 0x150);
            if (*(int *)(lVar2 + 0x150) != iVar9) {
              fVar24 = fVar4;
              fVar22 = param_1;
              if (*(int *)(lVar2 + 0x150) < iVar9) {
                fVar24 = param_1;
                fVar22 = fVar4;
              }
              *(float *)((longlong)&(pFVar1->State).SolverBodies[0].State.ShockPropagationScale +
                        lVar10) = fVar24;
              *(float *)((longlong)&(pFVar1->State).SolverBodies[1].State.ShockPropagationScale +
                        lVar10) = fVar22;
              fVar24 = *(float *)((longlong)
                                  &(pFVar1->State).SolverBodies[0].State.ShockPropagationScale +
                                 lVar10);
              fVar26 = 0.0;
              local_1c8 = 0.0;
              fStack_1c4 = 0.0;
              fVar14 = 0.0;
              local_1b8 = 0.0;
              fStack_1b4 = 0.0;
              fVar16 = 0.0;
              local_1a8 = 0.0;
              fStack_1a4 = 0.0;
              fVar25 = 0.0;
              local_188 = 0.0;
              fStack_184 = 0.0;
              fVar15 = 0.0;
              fVar13 = fVar24 * *(float *)((longlong)
                                           &(pFVar1->State).SolverBodies[0].State.InvMScale + lVar10
                                          ) * *(float *)(lVar2 + 0x134);
              local_178 = 0.0;
              fStack_174 = 0.0;
              fVar17 = 0.0;
              local_168 = 0.0;
              fStack_164 = 0.0;
              fVar23 = 0.0;
              if (fVar5 < fVar13) {
                fVar24 = fVar24 * *(float *)((longlong)
                                             &(pFVar1->State).SolverBodies[0].State.InvIScale +
                                            lVar10);
                local_1c8 = fVar24 * *(float *)(lVar2 + 0x40);
                local_1b8 = fVar24 * *(float *)(lVar2 + 0x50);
                local_1a8 = fVar24 * *(float *)(lVar2 + 0x60);
                fStack_1c4 = fVar24 * *(float *)(lVar2 + 0x44);
                fStack_1b4 = fVar24 * *(float *)(lVar2 + 0x54);
                fStack_1a4 = fVar24 * *(float *)(lVar2 + 100);
                fVar14 = fVar24 * *(float *)(lVar2 + 0x48);
                fVar25 = fVar24 * *(float *)(lVar2 + 0x68);
                fVar16 = fVar24 * *(float *)(lVar2 + 0x58);
                fVar26 = fVar13;
                fVar27 = __real_322bcc77;
              }
              lVar8 = *(longlong *)((longlong)&(pFVar1->State).SolverBodies[1].Body + lVar10);
              fVar13 = fVar22 * *(float *)((longlong)
                                           &(pFVar1->State).SolverBodies[1].State.InvMScale + lVar10
                                          ) * *(float *)(lVar8 + 0x134);
              fVar24 = 0.0;
              if (fVar5 < fVar13) {
                fVar22 = fVar22 * *(float *)((longlong)
                                             &(pFVar1->State).SolverBodies[1].State.InvIScale +
                                            lVar10);
                local_188 = fVar22 * *(float *)(lVar8 + 0x40);
                local_178 = fVar22 * *(float *)(lVar8 + 0x50);
                local_168 = fVar22 * *(float *)(lVar8 + 0x60);
                fStack_184 = fVar22 * *(float *)(lVar8 + 0x44);
                fStack_174 = fVar22 * *(float *)(lVar8 + 0x54);
                fStack_164 = fVar22 * *(float *)(lVar8 + 100);
                fVar15 = fVar22 * *(float *)(lVar8 + 0x48);
                fVar17 = fVar22 * *(float *)(lVar8 + 0x58);
                fVar23 = fVar22 * *(float *)(lVar8 + 0x68);
                fVar24 = fVar13;
              }
              iVar9 = 0;
              *(float *)((longlong)(pFVar1->State).InvMs + lVar10) = fVar26;
              *(float *)((longlong)(pFVar1->State).InvMs + lVar10 + 4) = fVar24;
              if (0 < *(int *)((longlong)(pFVar1->State).InvMs + lVar10 + 0x10)) {
                lVar8 = 0;
                do {
                  lVar2 = *(longlong *)((longlong)(pFVar1->State).InvMs + lVar10 + 8);
                  fVar22 = 0.0;
                  if (fVar5 < *(float *)((longlong)(pFVar1->State).InvMs + lVar10)) {
                    fVar22 = *(float *)(lVar8 + 0x4c + lVar2);
                    fVar13 = *(float *)(lVar8 + 0x50 + lVar2);
                    fVar18 = *(float *)(lVar8 + 0x54 + lVar2);
                    fVar20 = fStack_1a4 * fVar13 + local_1a8 * fVar22 + fVar25 * fVar18;
                    fVar19 = fStack_1b4 * fVar13 + local_1b8 * fVar22 + fVar16 * fVar18;
                    fVar13 = fStack_1c4 * fVar13 + local_1c8 * fVar22 + fVar14 * fVar18;
                    *(float *)(lVar8 + 0x94 + lVar2) = fVar13;
                    *(float *)(lVar8 + 0x98 + lVar2) = fVar19;
                    *(float *)(lVar8 + 0x9c + lVar2) = fVar20;
                    fVar22 = fVar13 * fVar22 + fVar19 * *(float *)(lVar8 + 0x50 + lVar2) +
                             fVar20 * *(float *)(lVar8 + 0x54 + lVar2) + fVar26;
                  }
                  if (fVar5 < *(float *)((longlong)(pFVar1->State).InvMs + lVar10 + 4)) {
                    fVar13 = *(float *)(lVar8 + 0x58 + lVar2);
                    fVar18 = *(float *)(lVar8 + 0x5c + lVar2);
                    fVar19 = *(float *)(lVar8 + 0x60 + lVar2);
                    fVar21 = fStack_164 * fVar18 + local_168 * fVar13 + fVar23 * fVar19;
                    fVar20 = fStack_174 * fVar18 + local_178 * fVar13 + fVar17 * fVar19;
                    fVar18 = fStack_184 * fVar18 + local_188 * fVar13 + fVar15 * fVar19;
                    *(float *)(lVar8 + 0xb8 + lVar2) = fVar18;
                    *(float *)(lVar8 + 0xbc + lVar2) = fVar20;
                    *(float *)(lVar8 + 0xc0 + lVar2) = fVar21;
                    fVar22 = fVar22 + fVar18 * fVar13 + fVar20 * *(float *)(lVar8 + 0x5c + lVar2) +
                                      fVar21 * *(float *)(lVar8 + 0x60 + lVar2) + fVar24;
                  }
                  if (fVar22 <= fVar27) {
                    fVar22 = 0.0;
                  }
                  else {
                    fVar22 = fVar4 / fVar22;
                  }
                  *(float *)(lVar8 + 0xdc + lVar2) = fVar22;
                  iVar9 = iVar9 + 1;
                  lVar8 = lVar8 + 0x10c;
                } while (iVar9 < *(int *)((longlong)(pFVar1->State).InvMs + lVar10 + 0x10));
              }
            }
          }
        }
        uVar12 = uVar12 + 1;
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 0x60;
      } while ((int)uVar12 < this->NumCollisionSolvers);
    }
    this->AppliedShockPropagation = param_1;
  }
  return;
}

// ApplyVelocityConstraints @ 143a091b0

void __thiscall
Chaos::FPBDCollisionContainerSolver::ApplyVelocityConstraints
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3)

{
  SolveVelocityImpl(this,param_1,param_2,param_3,0,this->NumCollisionSolvers,
                    &this->ConstraintContainer->SolverSettings);
  return;
}

// CachePrefetchSolver @ 143a09ed0

void __thiscall
Chaos::FPBDCollisionContainerSolver::CachePrefetchSolver
          (FPBDCollisionContainerSolver *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (param_1 < this->NumCollisionSolvers) {
    uVar3 = 0;
    if (param_1 < (this->CollisionConstraints).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
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
    lVar4 = 0xd;
    do {
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    if ((this->NumCollisionSolvers <= param_1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < NumSolvers()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionContainerSolver.h"
                           ,0x39,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// CalculateCollisionBufferSize @ 143a0a040

ulong64 __thiscall
Chaos::FPBDCollisionContainerSolver::CalculateCollisionBufferSize
          (FPBDCollisionContainerSolver *this,ulong64 param_1,ulong64 param_2)

{
  if (param_2 < param_1) {
    return param_1 * 5 >> 2;
  }
  return param_1;
}

// CalculateConstraintMaxManifoldPoints @ 143a0a060

int __thiscall
Chaos::FPBDCollisionContainerSolver::CalculateConstraintMaxManifoldPoints
          (FPBDCollisionContainerSolver *this,FPBDCollisionConstraint *param_1)

{
  if (((this->ConstraintContainer->DetectorSettings).bDeferNarrowPhase == false) &&
     ((*(byte *)&param_1->Flags >> 3 & 1) == 0)) {
    return (param_1->ManifoldPoints).ArrayNum;
  }
  return 4;
}

// GatherInput @ 143a0d780

void __thiscall
Chaos::FPBDCollisionContainerSolver::GatherInput(FPBDCollisionContainerSolver *this,double param_1)

{
  GatherInput(this,param_1,0,this->NumCollisionSolvers);
  return;
}

// GatherInput @ 143a0d7a0

void __thiscall
Chaos::FPBDCollisionContainerSolver::GatherInput
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  FPBDCollisionConstraint *pFVar3;
  FPBDCollisionConstraints *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  FScriptContainerElement FVar10;
  uint uVar11;
  byte bVar12;
  int iVar13;
  FPBDCollisionSolver *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  if ((param_2 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstraintBeginIndex >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                         ,0x26b,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->CollisionConstraints).ArrayNum < param_3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ConstraintEndIndex <= CollisionConstraints.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                         ,0x26c,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar15 = this->NumCollisionSolvers;
  uVar17 = uVar15;
  if (param_2 < (int)uVar15) {
    uVar17 = param_2;
  }
  if (param_3 < (int)uVar15) {
    uVar15 = param_3;
  }
  iVar13 = 0;
  do {
    CachePrefetchSolver(this,iVar13);
    fVar7 = __real_00800000;
    iVar13 = iVar13 + 1;
  } while (iVar13 < 2);
  bVar8 = false;
  lVar18 = (longlong)(int)uVar17;
  if (lVar18 < (int)uVar15) {
    lVar16 = lVar18 * 0x60;
    do {
      CachePrefetchSolver(this,uVar17 + 2);
      if ((this->NumCollisionSolvers <= (int)uVar17) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index < NumSolvers()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionContainerSolver.h"
                             ,0x38,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar14 = (FPBDCollisionSolver *)
                ((longlong)
                 &((FState *)((this->CollisionSolvers->State).SolverBodies + -1))->StaticFriction +
                lVar16);
      uVar11 = 0;
      if ((int)uVar17 < (this->CollisionConstraints).ArrayNum) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = *(FPBDCollisionConstraint **)
                ((this->CollisionConstraints).AllocatorInstance.Data + lVar18 * 8);
      uVar11 = 0;
      if ((int)uVar17 < (this->bCollisionConstraintPerIterationCollisionDetection).ArrayNum) {
        uVar11 = ~uVar17 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = this->ConstraintContainer;
      fVar19 = 0.0;
      pFVar5 = (this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance.Data;
      fVar1 = (pFVar3->Material).DynamicFriction;
      fVar2 = (pFVar3->Material).BaseFrictionImpulse;
      fVar20 = 0.0;
      if ((pFVar4->SolverSettings).NumPositionFrictionIterations < 1) {
        fVar21 = 0.0;
        if (0 < (pFVar4->SolverSettings).NumVelocityFrictionIterations) goto LAB_143a0d9b9;
      }
      else {
        fVar19 = (pFVar3->Material).StaticFriction;
        if (fVar19 <= fVar1) {
          fVar19 = fVar1;
        }
        fVar21 = fVar1;
        if (((*(byte *)&pFVar3->Flags & 0xc0) != 0) &&
           ((pFVar4->SolverSettings).NumVelocityFrictionIterations != 0)) {
LAB_143a0d9b9:
          fVar20 = fVar1;
          fVar21 = 0.0;
        }
      }
      (pFVar14->State).StaticFriction = fVar19;
      (pFVar14->State).DynamicFriction = fVar21;
      (pFVar14->State).VelocityFriction = fVar20;
      (pFVar14->State).MinMaxFrictionPushout = fVar2;
      fVar1 = pFVar3->Stiffness;
      (pFVar14->State).SoftPhi = 0.0;
      (pFVar14->State).Stiffness = fVar1;
      (pFVar14->State).SolverBodies[0].State.InvMScale = (pFVar3->Material).InvMassScale0;
      (pFVar14->State).SolverBodies[0].State.InvIScale = (pFVar3->Material).InvInertiaScale0;
      (pFVar14->State).SolverBodies[0].State.ShockPropagationScale = 1.0;
      (pFVar14->State).SolverBodies[1].State.InvMScale = (pFVar3->Material).InvMassScale1;
      (pFVar14->State).SolverBodies[1].State.InvIScale = (pFVar3->Material).InvInertiaScale1;
      (pFVar14->State).SolverBodies[1].State.ShockPropagationScale = 1.0;
      bVar12 = (byte)(pFVar3->Flags).Bits;
      if (((bVar12 >> 2 & 1) == 0) || ((bVar12 & 0xc) != 4)) {
        FVar10 = (FScriptContainerElement)0x1;
      }
      else {
        FVar10 = (FScriptContainerElement)0x0;
      }
      pFVar5[lVar18] = FVar10;
      if ((fVar7 < (pFVar14->State).SolverBodies[0].State.InvMScale *
                   (pFVar14->State).SolverBodies[0].State.ShockPropagationScale *
                   (((pFVar14->State).SolverBodies[0].Body)->State).InvM) ||
         (fVar7 < (pFVar14->State).SolverBodies[1].State.ShockPropagationScale *
                  (pFVar14->State).SolverBodies[1].State.InvMScale *
                  (((pFVar14->State).SolverBodies[1].Body)->State).InvM)) {
        UpdateCollisionSolverManifoldFromConstraint
                  (pFVar14,pFVar3,(float)param_1,0,(pFVar3->ManifoldPoints).ArrayNum,
                   &pFVar4->SolverSettings);
      }
      fVar1 = (pFVar3->Material).SoftSeparation;
      if (((fVar1 != 0.0) && (CVars::bChaos_Collision_EnableSoftCollisions != false)) &&
         (0 < (pFVar14->State).NumManifoldPoints)) {
        (pFVar14->State).SoftPhi = fVar1;
      }
      if ((bVar8) || (pFVar5[lVar18] != (FScriptContainerElement)0x0)) {
        bVar8 = true;
      }
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 1;
      lVar16 = lVar16 + 0x60;
    } while (lVar18 < (int)uVar15);
    if (bVar8) {
      this->bPerIterationCollisionDetection = true;
    }
  }
  return;
}

// GetNumConstraints @ 143a0f420

int __thiscall
Chaos::FPBDCollisionContainerSolver::GetNumConstraints(FPBDCollisionContainerSolver *this)

{
  return (this->CollisionConstraints).ArrayNum;
}

// PrepareSolverBuffer @ 143a11030

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionContainerSolver::PrepareSolverBuffer(FPBDCollisionContainerSolver *this)

{
  longlong *plVar1;
  FPBDCollisionSolver *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uchar *puVar7;
  FConstraintSolverBody *pFVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  FPBDCollisionSolverManifoldPoint *_Dst;
  FPBDCollisionSolver *pFVar15;
  
  iVar11 = (this->CollisionConstraints).ArrayNum;
  uVar10 = 0;
  this->NumCollisionSolverManifoldPoints = 0;
  this->MaxCollisionSolverManifoldPoints = 0;
  this->CollisionSolvers = (FPBDCollisionSolver *)0x0;
  this->CollisionSolverManifoldPoints = (FPBDCollisionSolverManifoldPoint *)0x0;
  this->NumCollisionSolvers = iVar11;
  iVar4 = CVars::Chaos_Collision_MaxSolverManifoldPoints;
  uVar9 = uVar10;
  uVar13 = uVar10;
  uVar6 = 0;
  if (0 < iVar11) {
    do {
      uVar14 = (uint)uVar13;
      uVar6 = 0;
      if ((int)uVar14 < (this->CollisionConstraints).ArrayNum) {
        uVar6 = ~uVar14 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((this->ConstraintContainer->DetectorSettings).bDeferNarrowPhase == false) &&
         (lVar12 = *(longlong *)((this->CollisionConstraints).AllocatorInstance.Data + uVar9),
         (*(byte *)(lVar12 + 0x374) >> 3 & 1) == 0)) {
        iVar11 = *(int *)(lVar12 + 0x5b0);
      }
      else {
        iVar11 = 4;
      }
      if ((-1 < iVar4) &&
         (uVar6 = this->MaxCollisionSolverManifoldPoints, iVar4 < (int)(uVar6 + iVar11))) {
        if (1 < (byte)LogChaos._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
          uVar6 = this->MaxCollisionSolverManifoldPoints;
        }
        this->NumCollisionSolvers = uVar14;
        break;
      }
      this->MaxCollisionSolverManifoldPoints = this->MaxCollisionSolverManifoldPoints + iVar11;
      uVar6 = this->MaxCollisionSolverManifoldPoints;
      uVar9 = uVar9 + 8;
      uVar13 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < (this->CollisionConstraints).ArrayNum);
  }
  if (uVar6 != 0) {
    plVar1 = (longlong *)(this->Scratch).BufferEnd;
    uVar13 = (longlong)this->NumCollisionSolvers * 0x60 + (longlong)(int)uVar6 * 0x10c;
    uVar9 = (longlong)plVar1 - (longlong)(this->Scratch).BufferBegin;
    if (uVar9 < uVar13) {
      uVar13 = uVar13 * 5 >> 2;
    }
    if (uVar9 < uVar13) {
      if (((plVar1 != (longlong *)0x0) && (*plVar1 != -0x5e4d3c2b5e4d3c2c)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("*Sentinel() == SentinelValue",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\ScratchBuffer.h"
                             ,0xa9,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar12 = (longlong)(int)uVar13;
      if (lVar12 != (longlong)(this->Scratch).BufferEnd - (longlong)(this->Scratch).BufferBegin) {
        Chaos::Private::FScratchBuffer::DestroyBuffer(&this->Scratch);
        if (0 < (int)uVar13) {
          puVar7 = operator_new__(lVar12 + 8);
          (this->Scratch).BufferBegin = puVar7;
        }
        puVar7 = (this->Scratch).BufferBegin;
        if (puVar7 != (uchar *)0x0) {
          (this->Scratch).BufferEnd = puVar7 + lVar12;
        }
        puVar7 = (this->Scratch).BufferEnd;
        if (puVar7 != (uchar *)0x0) {
          puVar7[0] = 0xd4;
          puVar7[1] = 0xc3;
          puVar7[2] = 0xb2;
          puVar7[3] = 0xa1;
          puVar7[4] = 0xd4;
          puVar7[5] = 0xc3;
          puVar7[6] = 0xb2;
          puVar7[7] = 0xa1;
        }
      }
    }
    pFVar15 = (FPBDCollisionSolver *)(this->Scratch).BufferBegin;
    (this->Scratch).BufferNext = (uchar *)pFVar15;
    pFVar2 = (FPBDCollisionSolver *)(this->Scratch).BufferEnd;
    if (pFVar2 == pFVar15) {
      if (1 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    else {
      lVar12 = (longlong)this->NumCollisionSolvers;
      pFVar15 = (FPBDCollisionSolver *)
                ((ulonglong)((longlong)&(pFVar15->State).DynamicFriction + 3) & 0xfffffffffffffff8);
      if (pFVar2 < pFVar15 + lVar12) {
        pFVar15 = (FPBDCollisionSolver *)0x0;
      }
      else {
        (this->Scratch).BufferNext = (uchar *)(pFVar15 + lVar12);
        if ((pFVar15 != (FPBDCollisionSolver *)0x0) && (0 < lVar12)) {
          pFVar8 = (pFVar15->State).SolverBodies;
          do {
            pFVar8->Body = (FSolverBody *)0x0;
            uVar10 = uVar10 + 1;
            pFVar8[1].Body = (FSolverBody *)0x0;
            pFVar8 = pFVar8 + 4;
          } while ((longlong)uVar10 < lVar12);
        }
      }
      uVar6 = this->MaxCollisionSolverManifoldPoints;
      this->CollisionSolvers = pFVar15;
      _Dst = (FPBDCollisionSolverManifoldPoint *)
             ((ulonglong)((this->Scratch).BufferNext + 3) & 0xfffffffffffffffc);
      if ((FPBDCollisionSolverManifoldPoint *)(this->Scratch).BufferEnd < _Dst + (int)uVar6) {
        _Dst = (FPBDCollisionSolverManifoldPoint *)0x0;
      }
      else {
        (this->Scratch).BufferNext = (uchar *)(_Dst + (int)uVar6);
        if ((_Dst != (FPBDCollisionSolverManifoldPoint *)0x0) && (0 < (int)uVar6)) {
          memset(_Dst,0,(ulonglong)uVar6 * 0x10c);
        }
      }
      this->CollisionSolverManifoldPoints = _Dst;
      if ((this->CollisionSolvers != (FPBDCollisionSolver *)0x0) &&
         (_Dst != (FPBDCollisionSolverManifoldPoint *)0x0)) {
        return;
      }
      if (1 < (byte)LogChaos._0_1_) {
        if (this->CollisionSolvers == (FPBDCollisionSolver *)0x0) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
        if ((1 < (byte)LogChaos._0_1_) &&
           (this->CollisionSolverManifoldPoints == (FPBDCollisionSolverManifoldPoint *)0x0)) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        }
      }
      this->CollisionSolvers = (FPBDCollisionSolver *)0x0;
      this->CollisionSolverManifoldPoints = (FPBDCollisionSolverManifoldPoint *)0x0;
    }
    this->MaxCollisionSolverManifoldPoints = 0;
  }
  this->NumCollisionSolvers = 0;
  return;
}

// Reset @ 143a113d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionContainerSolver::Reset(FPBDCollisionContainerSolver *this,int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (this->CollisionConstraints).ArrayNum;
  this->AppliedShockPropagation = 1.0;
  uVar2 = param_1;
  if ((ulonglong)(longlong)iVar1 < (ulonglong)(longlong)param_1) {
    uVar2 = (uint)((ulonglong)((longlong)param_1 * 5) >> 2);
  }
  if (-1 < (int)uVar2) {
    (this->CollisionConstraints).ArrayNum = 0;
    if ((this->CollisionConstraints).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar2,&(this->CollisionConstraints).AllocatorInstance,0,
                 &(this->CollisionConstraints).ArrayMax);
    }
    (this->bCollisionConstraintPerIterationCollisionDetection).ArrayNum = 0;
    if ((this->bCollisionConstraintPerIterationCollisionDetection).ArrayMax < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar2,
                 &(this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance,0,
                 &(this->bCollisionConstraintPerIterationCollisionDetection).ArrayMax);
    }
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->bCollisionConstraintPerIterationCollisionDetection,param_1,No);
    this->NumCollisionSolverManifoldPoints = 0;
    this->MaxCollisionSolverManifoldPoints = 0;
    this->CollisionSolvers = (FPBDCollisionSolver *)0x0;
    this->CollisionSolverManifoldPoints = (FPBDCollisionSolverManifoldPoint *)0x0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// ScatterOutput @ 143a11ee0

void __thiscall
Chaos::FPBDCollisionContainerSolver::ScatterOutput
          (FPBDCollisionContainerSolver *this,double param_1)

{
  ScatterOutput(this,param_1,0,this->NumCollisionSolvers);
  return;
}

// ScatterOutput @ 143a11f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionContainerSolver::ScatterOutput
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3)

{
  int *piVar1;
  ForElementType<Chaos::FSavedManifoldPoint> *pFVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  FPBDCollisionSolver *pFVar21;
  longlong lVar22;
  code *pcVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  byte bVar28;
  longlong lVar29;
  longlong lVar30;
  ForElementType<Chaos::FSavedManifoldPoint> *pFVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  uint uVar37;
  ulonglong uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float local_res10;
  int local_res18;
  float local_130;
  float local_12c;
  float local_128;
  uint local_124;
  longlong local_110;
  longlong local_108;
  
  if ((param_2 < 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintBeginIndex >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                          ,0x299,L""), bVar24)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  if (((this->CollisionConstraints).ArrayNum < param_3) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("ConstraintEndIndex <= CollisionConstraints.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                          ,0x29a,L""), bVar24)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  uVar25 = this->NumCollisionSolvers;
  local_124 = uVar25;
  if (param_2 < (int)uVar25) {
    local_124 = param_2;
  }
  lVar34 = (longlong)(int)local_124;
  if (param_3 < (int)uVar25) {
    uVar25 = param_3;
  }
  if (lVar34 < (int)uVar25) {
    lVar36 = lVar34 * 0x60;
    fVar43 = __real_3f800000;
    fVar41 = __real_38d1b717;
    fVar42 = __real_3f7ff972;
    do {
      if ((this->NumCollisionSolvers <= (int)local_124) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index < NumSolvers()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionContainerSolver.h"
                              ,0x38,L""), bVar24)) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      pFVar21 = this->CollisionSolvers;
      uVar26 = 0;
      if ((int)local_124 < (this->CollisionConstraints).ArrayNum) {
        uVar26 = ~local_124 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      lVar22 = *(longlong *)((this->CollisionConstraints).AllocatorInstance.Data + lVar34 * 8);
      uVar26 = *(uint *)(lVar22 + 0x5b0);
      pFVar2 = (ForElementType<Chaos::FSavedManifoldPoint> *)(lVar22 + 0x378);
      if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
      }
      piVar1 = (int *)(lVar22 + 0x3f4);
      *(undefined4 *)(lVar22 + 0x3f0) = 0;
      if (*(int *)(lVar22 + 0x3f4) < (int)uVar26) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                  (0x1c,4,uVar26,pFVar2,0,piVar1);
      }
      TArray<Chaos::FManifoldPointResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
      SetNum((TArray<Chaos::FManifoldPointResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)(lVar22 + 0x5b8),*(int *)(lVar22 + 0x5b0),Default);
      uVar35 = 0;
      *(undefined4 *)(lVar22 + 0x638) = 0;
      local_res18 = 0;
      if (0 < *(int *)(lVar22 + 0x5b0)) {
        fVar40 = fVar43 / (float)param_1;
        local_108 = 0;
        local_110 = 0;
        uVar38 = uVar35;
        do {
          uVar37 = (uint)uVar38;
          local_130 = 0.0;
          uVar32 = ~uVar37 >> 0x1f;
          local_res10 = 0.0;
          local_128 = 0.0;
          fVar43 = 0.0;
          uVar26 = 0;
          if ((int)uVar37 < *(int *)(lVar22 + 0x5b0)) {
            uVar26 = uVar32;
          }
          local_12c = 0.0;
          fVar44 = 0.0;
          fVar39 = 0.0;
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar23 = (code *)swi(3);
            (*pcVar23)();
            return;
          }
          lVar29 = lVar22 + 0x3f8;
          if (*(longlong *)(lVar22 + 0x5a8) != 0) {
            lVar29 = *(longlong *)(lVar22 + 0x5a8);
          }
          if (((*(byte *)(uVar35 + 0x30 + lVar29) & 1) == 0) &&
             (local_res18 < *(int *)((longlong)(pFVar21->State).InvMs + lVar36 + 0x10))) {
            if ((*(longlong *)((longlong)(pFVar21->State).InvMs + lVar36 + 8) == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("State.ManifoldPoints != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                                    ,0xb5,L""), bVar24)) {
              pcVar23 = (code *)swi(3);
              (*pcVar23)();
              return;
            }
            if ((*(int *)((longlong)(pFVar21->State).InvMs + lVar36 + 0x10) <= local_res18) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("ManifoldPointIndex < NumManifoldPoints()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionSolver.h"
                                    ,0xb6,L""), bVar24)) {
              pcVar23 = (code *)swi(3);
              (*pcVar23)();
              return;
            }
            lVar29 = *(longlong *)((longlong)(pFVar21->State).InvMs + lVar36 + 8);
            local_res18 = local_res18 + 1;
            fVar41 = *(float *)(local_110 + 0xec + lVar29);
            fVar42 = *(float *)(local_110 + 0xf0 + lVar29);
            fVar39 = *(float *)(local_110 + 0x18 + lVar29);
            fVar44 = *(float *)(local_110 + 0xe8 + lVar29);
            fVar3 = *(float *)(local_110 + 0x30 + lVar29);
            fVar4 = *(float *)(local_110 + 0x28 + lVar29);
            fVar5 = *(float *)(local_110 + 0x34 + lVar29);
            fVar6 = *(float *)(local_110 + 0x24 + lVar29);
            fVar7 = *(float *)(local_110 + 0x20 + lVar29);
            fVar8 = *(float *)(local_110 + 0x1c + lVar29);
            fVar9 = *(float *)(local_110 + 0x2c + lVar29);
            fVar10 = *(float *)(local_110 + 0x38 + lVar29);
            fVar43 = fVar6 * fVar41 + fVar39 * fVar44 + fVar3 * fVar42;
            local_130 = fVar4 * fVar41 + fVar8 * fVar44 + fVar5 * fVar42;
            fVar11 = *(float *)(local_110 + 0xf4 + lVar29);
            local_res10 = fVar9 * fVar41 + fVar7 * fVar44 + fVar10 * fVar42;
            fVar41 = *(float *)(local_110 + 0xfc + lVar29);
            fVar42 = *(float *)(local_110 + 0xf8 + lVar29);
            local_128 = fVar42 * fVar6 + fVar11 * fVar39 + fVar3 * fVar41;
            fVar39 = *(float *)(local_110 + 0x104 + lVar29);
            local_110 = local_110 + 0x10c;
            local_12c = fVar42 * fVar4 + fVar11 * fVar8 + fVar5 * fVar41;
            fVar44 = fVar42 * fVar9 + fVar11 * fVar7 + fVar10 * fVar41;
            fVar41 = __real_38d1b717;
            fVar42 = __real_3f7ff972;
          }
          uVar26 = 0;
          if ((int)uVar37 < *(int *)(lVar22 + 0x5b0)) {
            uVar26 = uVar32;
          }
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar23 = (code *)swi(3);
            (*pcVar23)();
            return;
          }
          lVar29 = lVar22 + 0x3f8;
          if (*(longlong *)(lVar22 + 0x5a8) != 0) {
            lVar29 = *(longlong *)(lVar22 + 0x5a8);
          }
          uVar26 = 0;
          if ((int)uVar37 < *(int *)(lVar22 + 0x630)) {
            uVar26 = uVar32;
          }
          if ((uVar26 == 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar24)) {
            pcVar23 = (code *)swi(3);
            (*pcVar23)();
            return;
          }
          lVar33 = lVar22 + 0x5b8;
          if (*(longlong *)(lVar22 + 0x628) != 0) {
            lVar33 = *(longlong *)(lVar22 + 0x628);
          }
          if (fVar39 < fVar42) {
            if (fVar41 <= fVar39) {
              fVar41 = *(float *)(uVar35 + 0x48 + lVar29);
              fVar42 = *(float *)(uVar35 + 0xc + lVar29);
              fVar3 = *(float *)(uVar35 + 0x4c + lVar29);
              fVar4 = *(float *)(uVar35 + 0x10 + lVar29);
              fVar5 = *(float *)(uVar35 + 0x50 + lVar29);
              fVar6 = *(float *)(uVar35 + 0x14 + lVar29);
              fVar7 = *(float *)(uVar35 + 0x3c + lVar29);
              fVar8 = *(float *)(uVar35 + lVar29);
              fVar9 = *(float *)(uVar35 + 0x40 + lVar29);
              fVar10 = *(float *)(uVar35 + 4 + lVar29);
              fVar11 = *(float *)(uVar35 + 0x44 + lVar29);
              fVar13 = *(float *)(uVar35 + 8 + lVar29);
              iVar27 = *(int *)(lVar22 + 0x3f0);
              fVar14 = *(float *)(uVar35 + 0xc + lVar29);
              fVar15 = *(float *)(uVar35 + 0x10 + lVar29);
              fVar16 = *(float *)(uVar35 + 0x14 + lVar29);
              fVar17 = *(float *)(uVar35 + lVar29);
              fVar18 = *(float *)(uVar35 + 4 + lVar29);
              fVar19 = *(float *)(uVar35 + 8 + lVar29);
              if (iVar27 == *piVar1) {
                iVar27 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                                   (0x41c,pFVar2,piVar1);
              }
              *(int *)(lVar22 + 0x3f0) = iVar27 + 1;
              uVar12 = *(undefined4 *)(uVar35 + 0x38 + lVar29);
              pFVar31 = pFVar2;
              if (*(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000) !=
                  (ForElementType<Chaos::FSavedManifoldPoint> *)0x0) {
                pFVar31 = *(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000);
              }
              lVar30 = (longlong)iVar27 * 0x1c;
              *(float *)(pFVar31->InlineData + lVar30) = (fVar7 - fVar8) * fVar39 + fVar17;
              *(float *)(pFVar31->InlineData + lVar30 + 4) = (fVar9 - fVar10) * fVar39 + fVar18;
              *(float *)(pFVar31->InlineData + lVar30 + 8) = (fVar11 - fVar13) * fVar39 + fVar19;
              *(float *)(pFVar31->InlineData + lVar30 + 0xc) = (fVar41 - fVar42) * fVar39 + fVar14;
              *(float *)(pFVar31->InlineData + lVar30 + 0x10) = (fVar3 - fVar4) * fVar39 + fVar15;
              *(float *)(pFVar31->InlineData + lVar30 + 0x14) = (fVar5 - fVar6) * fVar39 + fVar16;
              fVar42 = __real_3f7ff972;
              *(undefined4 *)(pFVar31->InlineData + lVar30 + 0x18) = uVar12;
            }
            else if (*(int *)(lVar22 + 0x5b0) < 8) {
              iVar27 = *(int *)(lVar22 + 0x3f0);
              if (iVar27 == *piVar1) {
                iVar27 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                                   (0x41c,pFVar2,piVar1);
              }
              *(int *)(lVar22 + 0x3f0) = iVar27 + 1;
              uVar12 = *(undefined4 *)(uVar35 + 0x38 + lVar29);
              pFVar31 = pFVar2;
              if (*(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000) !=
                  (ForElementType<Chaos::FSavedManifoldPoint> *)0x0) {
                pFVar31 = *(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000);
              }
              lVar30 = (longlong)iVar27 * 0x1c;
              *(undefined8 *)(pFVar31->InlineData + lVar30) = *(undefined8 *)(uVar35 + lVar29);
              *(undefined4 *)(pFVar31->InlineData + lVar30 + 8) =
                   *(undefined4 *)(uVar35 + 8 + lVar29);
              *(undefined8 *)(pFVar31->InlineData + lVar30 + 0xc) =
                   *(undefined8 *)(uVar35 + 0xc + lVar29);
              uVar20 = *(undefined4 *)(uVar35 + 0x14 + lVar29);
              *(undefined4 *)(pFVar31->InlineData + lVar30 + 0x18) = uVar12;
              *(undefined4 *)(pFVar31->InlineData + lVar30 + 0x14) = uVar20;
            }
            bVar28 = 0;
          }
          else {
            iVar27 = *(int *)(lVar22 + 0x3f0);
            if (iVar27 == *piVar1) {
              iVar27 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                                 (0x41c,pFVar2,piVar1);
            }
            *(int *)(lVar22 + 0x3f0) = iVar27 + 1;
            uVar12 = *(undefined4 *)(uVar35 + 0x38 + lVar29);
            pFVar31 = pFVar2;
            if (*(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000) !=
                (ForElementType<Chaos::FSavedManifoldPoint> *)0x0) {
              pFVar31 = *(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000);
            }
            lVar30 = (longlong)iVar27 * 0x1c;
            *(undefined8 *)(pFVar31->InlineData + lVar30) = *(undefined8 *)(uVar35 + 0x3c + lVar29);
            *(undefined4 *)(pFVar31->InlineData + lVar30 + 8) =
                 *(undefined4 *)(uVar35 + 0x44 + lVar29);
            *(undefined8 *)(pFVar31->InlineData + lVar30 + 0xc) =
                 *(undefined8 *)(uVar35 + 0x48 + lVar29);
            uVar20 = *(undefined4 *)(uVar35 + 0x50 + lVar29);
            *(undefined4 *)(pFVar31->InlineData + lVar30 + 0x18) = uVar12;
            *(undefined4 *)(pFVar31->InlineData + lVar30 + 0x14) = uVar20;
            bVar28 = 2;
          }
          fVar41 = __real_38d1b717;
          uVar38 = (ulonglong)(uVar37 + 1);
          *(float *)(lVar22 + 0x120) = fVar43 * fVar40 + local_128 + *(float *)(lVar22 + 0x120);
          *(float *)(lVar22 + 0x128) = fVar40 * local_res10 + fVar44 + *(float *)(lVar22 + 0x128);
          *(float *)(lVar22 + 0x124) = fVar40 * local_130 + local_12c + *(float *)(lVar22 + 0x124);
          *(ulonglong *)(local_108 + lVar33) = CONCAT44(local_130,fVar43);
          *(float *)(local_108 + 8 + lVar33) = local_res10;
          *(byte *)(local_108 + 0x18 + lVar33) =
               *(byte *)(local_108 + 0x18 + lVar33) & 0xfd | bVar28 | 1;
          *(ulonglong *)(local_108 + 0xc + lVar33) = CONCAT44(local_12c,local_128);
          *(float *)(local_108 + 0x14 + lVar33) = fVar44;
          local_108 = local_108 + 0x1c;
          fVar43 = *(float *)(uVar35 + 0x38 + lVar29);
          uVar35 = uVar35 + 0x6c;
          if (*(float *)(lVar22 + 0x638) <= fVar43) {
            fVar43 = *(float *)(lVar22 + 0x638);
          }
          *(float *)(lVar22 + 0x638) = fVar43;
          fVar43 = __real_3f800000;
        } while ((int)(uVar37 + 1) < *(int *)(lVar22 + 0x5b0));
      }
      lVar34 = lVar34 + 1;
      *(undefined8 *)((longlong)&(pFVar21->State).SolverBodies[0].Body + lVar36) = 0;
      local_124 = local_124 + 1;
      *(undefined8 *)((longlong)&(pFVar21->State).SolverBodies[1].Body + lVar36) = 0;
      *(undefined8 *)((longlong)(pFVar21->State).InvMs + lVar36 + 8) = 0;
      *(undefined8 *)((longlong)(pFVar21->State).InvMs + lVar36 + 0x10) = 0;
      lVar36 = lVar36 + 0x60;
    } while (lVar34 < (int)uVar25);
  }
  return;
}

// SolvePositionImpl @ 143a14310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionContainerSolver::SolvePositionImpl
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3,int param_4,
          int param_5,FPBDCollisionSolverSettings *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FPBDCollisionSolver *pFVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_Collisions_Apply> FVar14;
  longlong lVar15;
  FNameEntryId FVar16;
  FName FVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  uint uVar32;
  double local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  
  FVar14 = StatPtr_STAT_Collisions_Apply;
  if (StatPtr_STAT_Collisions_Apply == (FThreadSafeStaticStat<FStat_STAT_Collisions_Apply>)0x0) {
    pFVar13 = ::FName::FName(&local_e8,"STAT_Collisions_Apply");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_Collisions_Apply>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Apply,*pFVar13,
                        L"Collisions::Apply","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar14;
  bVar9 = false;
  bVar11 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar16 = FVar17.ComparisonIndex.Value;
  uVar32 = FVar17.Number;
  if ((FVar16.Value != 0) || (uVar32 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_f8 = (double)((ulonglong)local_f8 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar16.Value;
        local_f0.Number = uVar32;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                   ,0x2ea);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0.ComparisonIndex.Value = FVar16.Value;
      local_f0.Number = uVar32;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar10 = true;
      goto LAB_143a14469;
    }
  }
  bVar10 = false;
  FVar17 = local_e0;
LAB_143a14469:
  if ((CVars::bChaos_PBDCollisionSolver_Position_SolveEnabled != false) && (param_4 < param_5)) {
    fVar27 = __real_3f800000;
    if (param_3 - param_6->NumPositionShockPropagationIterations <= param_2) {
      fVar27 = CVars::Chaos_PBDCollisionSolver_Position_MinInvMassScale;
    }
    ApplyShockPropagation(this,fVar27);
    if (((param_2 == 0) &&
        ((this->ConstraintContainer->DetectorSettings).bDeferNarrowPhase != false)) ||
       (this->bPerIterationCollisionDetection != false)) {
      UpdateCollisions(this,param_1,param_4,param_5);
    }
    fVar12 = __real_00800000;
    uVar32 = __xmm_80000000800000008000000080000000;
    fVar27 = __real_322bcc77;
    iVar18 = 0;
    if (param_2 < param_3 - param_6->NumPositionFrictionIterations) {
      if (0 < this->NumCollisionSolvers) {
        lVar19 = 0;
        do {
          pFVar4 = this->CollisionSolvers;
          iVar21 = 0;
          if (0 < *(int *)((longlong)(pFVar4->State).InvMs + lVar19 + 0x10)) {
            lVar15 = 0;
            do {
              lVar5 = *(longlong *)((longlong)(pFVar4->State).InvMs + lVar19 + 8);
              fVar26 = *(float *)((longlong)(pFVar4->State).InvMs + lVar19 + 4);
              fVar28 = 0.0;
              if (*(float *)((longlong)(pFVar4->State).InvMs + lVar19) <= fVar12) {
                if (fVar12 < fVar26) {
                  pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                  fVar28 = (float)((uint)(*(float *)(lVar15 + 0x5c + lVar5) * pfVar6[5] +
                                          *(float *)(lVar15 + 0x58 + lVar5) * pfVar6[4] +
                                         *(float *)(lVar15 + 0x60 + lVar5) * pfVar6[6]) ^ uVar32) -
                           (*(float *)(lVar15 + 0x1c + lVar5) * pfVar6[1] +
                            *(float *)(lVar15 + 0x18 + lVar5) * *pfVar6 +
                           *(float *)(lVar15 + 0x20 + lVar5) * pfVar6[2]);
                }
              }
              else {
                pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[0].Body + lVar19);
                if (fVar26 <= fVar12) {
                  fVar28 = pfVar6[6] * *(float *)(lVar15 + 0x54 + lVar5) +
                           pfVar6[4] * *(float *)(lVar15 + 0x4c + lVar5) +
                           pfVar6[5] * *(float *)(lVar15 + 0x50 + lVar5) +
                           *pfVar6 * *(float *)(lVar15 + 0x18 + lVar5) +
                           *(float *)(lVar15 + 0x20 + lVar5) * pfVar6[2] +
                           *(float *)(lVar15 + 0x1c + lVar5) * pfVar6[1];
                }
                else {
                  pfVar7 = *(float **)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                  fVar28 = ((pfVar6[2] - pfVar7[2]) * *(float *)(lVar15 + 0x20 + lVar5) +
                            (*pfVar6 - *pfVar7) * *(float *)(lVar15 + 0x18 + lVar5) +
                            (pfVar6[1] - pfVar7[1]) * *(float *)(lVar15 + 0x1c + lVar5) +
                           pfVar6[6] * *(float *)(lVar15 + 0x54 + lVar5) +
                           *(float *)(lVar15 + 0x4c + lVar5) * pfVar6[4] +
                           pfVar6[5] * *(float *)(lVar15 + 0x50 + lVar5)) -
                           (*(float *)(lVar15 + 0x5c + lVar5) * pfVar7[5] +
                            *(float *)(lVar15 + 0x58 + lVar5) * pfVar7[4] +
                           *(float *)(lVar15 + 0x60 + lVar5) * pfVar7[6]);
                }
              }
              fVar26 = (fVar28 + *(float *)(lVar15 + 0x3c + lVar5)) -
                       *(float *)((longlong)(pFVar4->State).SolverBodies + lVar19 + -4);
              if ((fVar26 < 0.0) || (fVar27 < *(float *)(lVar15 + 0xe8 + lVar5))) {
                fVar28 = *(float *)(lVar15 + 0xe8 + lVar5);
                fVar26 = fVar26 * *(float *)((longlong)(pFVar4->State).SolverBodies + lVar19 + -8) *
                         *(float *)(lVar15 + 0xdc + lVar5);
                if (fVar28 - fVar26 <= 0.0) {
                  fVar26 = fVar28;
                }
                fVar31 = (float)((uint)fVar26 ^ uVar32);
                *(float *)(lVar15 + 0xe8 + lVar5) = fVar28 + fVar31;
                fVar28 = *(float *)((longlong)(pFVar4->State).InvMs + lVar19);
                if (fVar12 < fVar28) {
                  pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[0].Body + lVar19);
                  fVar1 = *(float *)(lVar15 + 0x94 + lVar5);
                  fVar25 = *(float *)(lVar15 + 0x98 + lVar5);
                  fVar29 = *(float *)(lVar15 + 0x9c + lVar5);
                  fVar28 = fVar28 * fVar31;
                  fVar24 = *(float *)(lVar15 + 0x20 + lVar5);
                  fVar22 = *(float *)(lVar15 + 0x18 + lVar5);
                  pfVar6[1] = fVar28 * *(float *)(lVar15 + 0x1c + lVar5) + pfVar6[1];
                  pfVar6[2] = fVar28 * fVar24 + pfVar6[2];
                  *pfVar6 = fVar28 * fVar22 + *pfVar6;
                  lVar8 = *(longlong *)((longlong)&(pFVar4->State).SolverBodies[0].Body + lVar19);
                  *(float *)(lVar8 + 0x10) = fVar31 * fVar1 + *(float *)(lVar8 + 0x10);
                  *(float *)(lVar8 + 0x14) = fVar31 * fVar25 + *(float *)(lVar8 + 0x14);
                  *(float *)(lVar8 + 0x18) = fVar31 * fVar29 + *(float *)(lVar8 + 0x18);
                }
                fVar28 = *(float *)((longlong)(pFVar4->State).InvMs + lVar19 + 4);
                if (fVar12 < fVar28) {
                  pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                  fVar28 = fVar28 * fVar31;
                  fVar31 = *(float *)(lVar15 + 0xb8 + lVar5);
                  fVar1 = *(float *)(lVar15 + 0x1c + lVar5);
                  fVar25 = *(float *)(lVar15 + 0x20 + lVar5);
                  fVar29 = *(float *)(lVar15 + 0xbc + lVar5);
                  fVar24 = *(float *)(lVar15 + 0xc0 + lVar5);
                  *pfVar6 = *pfVar6 - fVar28 * *(float *)(lVar15 + 0x18 + lVar5);
                  pfVar6[1] = pfVar6[1] - fVar28 * fVar1;
                  pfVar6[2] = pfVar6[2] - fVar28 * fVar25;
                  lVar5 = *(longlong *)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                  *(float *)(lVar5 + 0x10) = fVar26 * fVar31 + *(float *)(lVar5 + 0x10);
                  *(float *)(lVar5 + 0x14) = fVar26 * fVar29 + *(float *)(lVar5 + 0x14);
                  *(float *)(lVar5 + 0x18) = fVar26 * fVar24 + *(float *)(lVar5 + 0x18);
                }
              }
              iVar21 = iVar21 + 1;
              lVar15 = lVar15 + 0x10c;
            } while (iVar21 < *(int *)((longlong)(pFVar4->State).InvMs + lVar19 + 0x10));
          }
          iVar18 = iVar18 + 1;
          lVar19 = lVar19 + 0x60;
        } while (iVar18 < this->NumCollisionSolvers);
      }
    }
    else if (0 < this->NumCollisionSolvers) {
      lVar19 = 0;
      do {
        pFVar4 = this->CollisionSolvers;
        iVar20 = 0;
        iVar21 = *(int *)((longlong)(pFVar4->State).InvMs + lVar19 + 0x10);
        if (0 < iVar21) {
          lVar15 = 0;
          do {
            lVar5 = *(longlong *)((longlong)(pFVar4->State).InvMs + lVar19 + 8);
            fVar27 = *(float *)((longlong)(pFVar4->State).InvMs + lVar19 + 4);
            fVar26 = 0.0;
            if (*(float *)((longlong)(pFVar4->State).InvMs + lVar19) <= fVar12) {
              if (fVar12 < fVar27) {
                pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                fVar26 = (float)((uint)(*(float *)(lVar15 + 0x5c + lVar5) * pfVar6[5] +
                                        *(float *)(lVar15 + 0x58 + lVar5) * pfVar6[4] +
                                       *(float *)(lVar15 + 0x60 + lVar5) * pfVar6[6]) ^ uVar32) -
                         (*(float *)(lVar15 + 0x1c + lVar5) * pfVar6[1] +
                          *(float *)(lVar15 + 0x18 + lVar5) * *pfVar6 +
                         *(float *)(lVar15 + 0x20 + lVar5) * pfVar6[2]);
              }
            }
            else {
              pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[0].Body + lVar19);
              if (fVar27 <= fVar12) {
                fVar26 = pfVar6[6] * *(float *)(lVar15 + 0x54 + lVar5) +
                         pfVar6[4] * *(float *)(lVar15 + 0x4c + lVar5) +
                         pfVar6[5] * *(float *)(lVar15 + 0x50 + lVar5) +
                         *(float *)(lVar15 + 0x18 + lVar5) * *pfVar6 +
                         *(float *)(lVar15 + 0x20 + lVar5) * pfVar6[2] +
                         *(float *)(lVar15 + 0x1c + lVar5) * pfVar6[1];
              }
              else {
                pfVar7 = *(float **)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                fVar26 = ((pfVar6[2] - pfVar7[2]) * *(float *)(lVar15 + 0x20 + lVar5) +
                          (pfVar6[1] - pfVar7[1]) * *(float *)(lVar15 + 0x1c + lVar5) +
                          (*pfVar6 - *pfVar7) * *(float *)(lVar15 + 0x18 + lVar5) +
                         pfVar6[6] * *(float *)(lVar15 + 0x54 + lVar5) +
                         pfVar6[4] * *(float *)(lVar15 + 0x4c + lVar5) +
                         pfVar6[5] * *(float *)(lVar15 + 0x50 + lVar5)) -
                         (*(float *)(lVar15 + 0x5c + lVar5) * pfVar7[5] +
                          *(float *)(lVar15 + 0x58 + lVar5) * pfVar7[4] +
                         *(float *)(lVar15 + 0x60 + lVar5) * pfVar7[6]);
              }
            }
            fVar27 = (fVar26 + *(float *)(lVar15 + 0x3c + lVar5)) -
                     *(float *)((longlong)(pFVar4->State).SolverBodies + lVar19 + -4);
            if ((fVar27 < 0.0) || (__real_322bcc77 < *(float *)(lVar15 + 0xe8 + lVar5))) {
              fVar26 = *(float *)(lVar15 + 0xe8 + lVar5);
              fVar27 = fVar27 * *(float *)((longlong)(pFVar4->State).SolverBodies + lVar19 + -8) *
                       *(float *)(lVar15 + 0xdc + lVar5);
              if (fVar26 - fVar27 <= 0.0) {
                fVar27 = fVar26;
              }
              fVar28 = (float)((uint)fVar27 ^ uVar32);
              *(float *)(lVar15 + 0xe8 + lVar5) = fVar26 + fVar28;
              fVar26 = *(float *)((longlong)(pFVar4->State).InvMs + lVar19);
              if (fVar12 < fVar26) {
                pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[0].Body + lVar19);
                fVar31 = *(float *)(lVar15 + 0x94 + lVar5);
                fVar1 = *(float *)(lVar15 + 0x98 + lVar5);
                fVar25 = *(float *)(lVar15 + 0x9c + lVar5);
                fVar26 = fVar26 * fVar28;
                fVar29 = *(float *)(lVar15 + 0x20 + lVar5);
                fVar24 = *(float *)(lVar15 + 0x18 + lVar5);
                pfVar6[1] = fVar26 * *(float *)(lVar15 + 0x1c + lVar5) + pfVar6[1];
                pfVar6[2] = fVar26 * fVar29 + pfVar6[2];
                *pfVar6 = fVar26 * fVar24 + *pfVar6;
                lVar8 = *(longlong *)((longlong)&(pFVar4->State).SolverBodies[0].Body + lVar19);
                *(float *)(lVar8 + 0x10) = fVar28 * fVar31 + *(float *)(lVar8 + 0x10);
                *(float *)(lVar8 + 0x14) = fVar28 * fVar1 + *(float *)(lVar8 + 0x14);
                *(float *)(lVar8 + 0x18) = fVar28 * fVar25 + *(float *)(lVar8 + 0x18);
              }
              fVar26 = *(float *)((longlong)(pFVar4->State).InvMs + lVar19 + 4);
              if (fVar12 < fVar26) {
                pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                fVar26 = fVar26 * fVar28;
                fVar28 = *(float *)(lVar15 + 0xb8 + lVar5);
                fVar31 = *(float *)(lVar15 + 0x1c + lVar5);
                fVar1 = *(float *)(lVar15 + 0x20 + lVar5);
                fVar25 = *(float *)(lVar15 + 0xbc + lVar5);
                fVar29 = *(float *)(lVar15 + 0xc0 + lVar5);
                *pfVar6 = *pfVar6 - fVar26 * *(float *)(lVar15 + 0x18 + lVar5);
                pfVar6[1] = pfVar6[1] - fVar26 * fVar31;
                pfVar6[2] = pfVar6[2] - fVar26 * fVar1;
                lVar5 = *(longlong *)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                *(float *)(lVar5 + 0x10) = fVar27 * fVar28 + *(float *)(lVar5 + 0x10);
                *(float *)(lVar5 + 0x14) = fVar27 * fVar25 + *(float *)(lVar5 + 0x14);
                *(float *)(lVar5 + 0x18) = fVar27 * fVar29 + *(float *)(lVar5 + 0x18);
              }
            }
            iVar21 = *(int *)((longlong)(pFVar4->State).InvMs + lVar19 + 0x10);
            iVar20 = iVar20 + 1;
            lVar15 = lVar15 + 0x10c;
          } while (iVar20 < iVar21);
        }
        local_f0.ComparisonIndex.Value =
             (uint)(CVars::Chaos_PBDCollisionSolver_Position_StaticFrictionStiffness *
                   *(float *)((longlong)(pFVar4->State).SolverBodies + lVar19 + -8));
        if ((0.0 < (float)local_f0.ComparisonIndex.Value) && (iVar20 = 0, 0 < iVar21)) {
          lVar15 = 0;
          do {
            lVar5 = *(longlong *)((longlong)(pFVar4->State).InvMs + lVar19 + 8);
            fVar26 = *(float *)(lVar15 + 0x100 + lVar5) + *(float *)(lVar15 + 0xe8 + lVar5);
            fVar27 = *(float *)((longlong)(pFVar4->State).SolverBodies + lVar19 + -0xc);
            if (fVar26 <= fVar27) {
              fVar26 = fVar27;
            }
            if (((0.0 < fVar26) || (*(float *)(lVar15 + 0xec + lVar5) != 0.0)) ||
               (*(float *)(lVar15 + 0xf0 + lVar5) != 0.0)) {
              fVar27 = *(float *)(lVar15 + 0x40 + lVar5);
              fVar28 = *(float *)(lVar15 + 0x44 + lVar5);
              fVar31 = *(float *)((longlong)(pFVar4->State).InvMs + lVar19 + 4);
              if (*(float *)((longlong)(pFVar4->State).InvMs + lVar19) <= fVar12) {
                if (fVar12 < fVar31) {
                  pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                  fVar27 = (fVar27 - (pfVar6[1] * *(float *)(lVar15 + 0x28 + lVar5) +
                                      *pfVar6 * *(float *)(lVar15 + 0x24 + lVar5) +
                                     pfVar6[2] * *(float *)(lVar15 + 0x2c + lVar5))) -
                           (pfVar6[5] * *(float *)(lVar15 + 0x80 + lVar5) +
                            pfVar6[4] * *(float *)(lVar15 + 0x7c + lVar5) +
                           pfVar6[6] * *(float *)(lVar15 + 0x84 + lVar5));
                  fVar28 = (fVar28 - (pfVar6[1] * *(float *)(lVar15 + 0x34 + lVar5) +
                                      *pfVar6 * *(float *)(lVar15 + 0x30 + lVar5) +
                                     pfVar6[2] * *(float *)(lVar15 + 0x38 + lVar5))) -
                           (pfVar6[5] * *(float *)(lVar15 + 0x8c + lVar5) +
                            pfVar6[4] * *(float *)(lVar15 + 0x88 + lVar5) +
                           pfVar6[6] * *(float *)(lVar15 + 0x90 + lVar5));
                }
              }
              else {
                pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[0].Body + lVar19);
                if (fVar31 <= fVar12) {
                  fVar27 = *pfVar6 * *(float *)(lVar15 + 0x24 + lVar5) +
                           pfVar6[2] * *(float *)(lVar15 + 0x2c + lVar5) +
                           pfVar6[1] * *(float *)(lVar15 + 0x28 + lVar5) +
                           pfVar6[6] * *(float *)(lVar15 + 0x6c + lVar5) +
                           pfVar6[4] * *(float *)(lVar15 + 100 + lVar5) +
                           pfVar6[5] * *(float *)(lVar15 + 0x68 + lVar5) + fVar27;
                  fVar28 = pfVar6[6] * *(float *)(lVar15 + 0x78 + lVar5) +
                           pfVar6[4] * *(float *)(lVar15 + 0x70 + lVar5) +
                           pfVar6[5] * *(float *)(lVar15 + 0x74 + lVar5) + fVar28 +
                           *pfVar6 * *(float *)(lVar15 + 0x30 + lVar5) +
                           pfVar6[2] * *(float *)(lVar15 + 0x38 + lVar5) +
                           pfVar6[1] * *(float *)(lVar15 + 0x34 + lVar5);
                }
                else {
                  pfVar7 = *(float **)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                  fVar27 = ((*pfVar6 - *pfVar7) * *(float *)(lVar15 + 0x24 + lVar5) +
                            (pfVar6[1] - pfVar7[1]) * *(float *)(lVar15 + 0x28 + lVar5) +
                            (pfVar6[2] - pfVar7[2]) * *(float *)(lVar15 + 0x2c + lVar5) + fVar27 +
                           pfVar6[6] * *(float *)(lVar15 + 0x6c + lVar5) +
                           pfVar6[4] * *(float *)(lVar15 + 100 + lVar5) +
                           *(float *)(lVar15 + 0x68 + lVar5) * pfVar6[5]) -
                           (pfVar7[5] * *(float *)(lVar15 + 0x80 + lVar5) +
                            pfVar7[4] * *(float *)(lVar15 + 0x7c + lVar5) +
                           pfVar7[6] * *(float *)(lVar15 + 0x84 + lVar5));
                  fVar28 = ((*pfVar6 - *pfVar7) * *(float *)(lVar15 + 0x30 + lVar5) +
                            (pfVar6[1] - pfVar7[1]) * *(float *)(lVar15 + 0x34 + lVar5) +
                            (pfVar6[2] - pfVar7[2]) * *(float *)(lVar15 + 0x38 + lVar5) + fVar28 +
                           *(float *)(lVar15 + 0x78 + lVar5) * pfVar6[6] +
                           pfVar6[4] * *(float *)(lVar15 + 0x70 + lVar5) +
                           *(float *)(lVar15 + 0x74 + lVar5) * pfVar6[5]) -
                           (pfVar7[5] * *(float *)(lVar15 + 0x8c + lVar5) +
                            pfVar7[4] * *(float *)(lVar15 + 0x88 + lVar5) +
                           pfVar7[6] * *(float *)(lVar15 + 0x90 + lVar5));
                  uVar32 = __xmm_80000000800000008000000080000000;
                }
              }
              fVar31 = *(float *)(lVar15 + 0xec + lVar5);
              fVar1 = *(float *)(lVar15 + 0xf0 + lVar5);
              fVar29 = (float)((uint)((float)local_f0.ComparisonIndex.Value *
                                      *(float *)(lVar15 + 0xe0 + lVar5) * fVar27) ^ uVar32);
              fVar27 = fVar31 + fVar29;
              fVar25 = (float)((uint)((float)local_f0.ComparisonIndex.Value *
                                      *(float *)(lVar15 + 0xe4 + lVar5) * fVar28) ^ uVar32);
              fVar28 = fVar1 + fVar25;
              if (__real_38d1b717 <= fVar26) {
                fVar22 = fVar26 * *(float *)((longlong)
                                             &((FState *)((pFVar4->State).SolverBodies + -1))->
                                              StaticFriction + lVar19);
                fVar30 = fVar28 * fVar28 + fVar27 * fVar27;
                fVar24 = __real_3f800000;
                if (fVar22 * fVar22 < fVar30) {
                  fVar24 = (__real_3f800000 / SQRT(fVar30)) *
                           fVar26 * *(float *)((longlong)(pFVar4->State).SolverBodies +
                                              lVar19 + -0x14);
                  fVar27 = fVar27 * fVar24;
                  fVar28 = fVar28 * fVar24;
                  fVar29 = fVar27 - fVar31;
                  fVar25 = fVar28 - fVar1;
                }
              }
              else {
                fVar29 = (float)((uint)fVar31 ^ uVar32);
                fVar25 = (float)((uint)fVar1 ^ uVar32);
                fVar27 = 0.0;
                fVar28 = 0.0;
                fVar24 = 0.0;
              }
              *(float *)(lVar15 + 0xec + lVar5) = fVar27;
              *(float *)(lVar15 + 0xf0 + lVar5) = fVar28;
              *(float *)(lVar15 + 0x104 + lVar5) = fVar24;
              fVar28 = fVar25 * *(float *)(lVar15 + 0x38 + lVar5) +
                       fVar29 * *(float *)(lVar15 + 0x2c + lVar5);
              fVar27 = *(float *)((longlong)(pFVar4->State).InvMs + lVar19);
              fVar31 = fVar25 * *(float *)(lVar15 + 0x34 + lVar5) +
                       fVar29 * *(float *)(lVar15 + 0x28 + lVar5);
              fVar26 = fVar29 * *(float *)(lVar15 + 0x24 + lVar5) +
                       fVar25 * *(float *)(lVar15 + 0x30 + lVar5);
              local_f8 = (double)fVar28;
              if (fVar12 < fVar27) {
                pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[0].Body + lVar19);
                fVar1 = *(float *)(lVar15 + 0xa8 + lVar5);
                fVar24 = *(float *)(lVar15 + 0xb4 + lVar5);
                fVar22 = *(float *)(lVar15 + 0xb0 + lVar5);
                fVar30 = *(float *)(lVar15 + 0xa0 + lVar5);
                fVar2 = *(float *)(lVar15 + 0xac + lVar5);
                fVar3 = *(float *)(lVar15 + 0xa4 + lVar5);
                *pfVar6 = fVar26 * fVar27 + *pfVar6;
                pfVar6[1] = fVar27 * fVar31 + pfVar6[1];
                pfVar6[2] = fVar27 * fVar28 + pfVar6[2];
                lVar8 = *(longlong *)((longlong)&(pFVar4->State).SolverBodies[0].Body + lVar19);
                *(float *)(lVar8 + 0x10) =
                     fVar25 * fVar2 + fVar29 * fVar30 + *(float *)(lVar8 + 0x10);
                *(float *)(lVar8 + 0x14) =
                     fVar25 * fVar22 + fVar29 * fVar3 + *(float *)(lVar8 + 0x14);
                *(float *)(lVar8 + 0x18) =
                     fVar25 * fVar24 + fVar29 * fVar1 + *(float *)(lVar8 + 0x18);
              }
              fVar27 = *(float *)((longlong)(pFVar4->State).InvMs + lVar19 + 4);
              if (fVar12 < fVar27) {
                pfVar6 = *(float **)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                fVar25 = (float)((uint)fVar25 ^ uVar32);
                fVar29 = (float)((uint)fVar29 ^ uVar32);
                fVar28 = *(float *)(lVar15 + 0xd8 + lVar5);
                fVar1 = *(float *)(lVar15 + 0xc4 + lVar5);
                fVar24 = *(float *)(lVar15 + 0xd4 + lVar5);
                fVar22 = *(float *)(lVar15 + 0xd0 + lVar5);
                dVar23 = (double)(float)((uint)fVar27 ^ uVar32);
                fVar27 = *(float *)(lVar15 + 200 + lVar5);
                fVar30 = *(float *)(lVar15 + 0xcc + lVar5);
                *pfVar6 = (float)((double)fVar26 * dVar23) + *pfVar6;
                pfVar6[1] = (float)((double)fVar31 * dVar23) + pfVar6[1];
                pfVar6[2] = (float)(local_f8 * dVar23) + pfVar6[2];
                lVar5 = *(longlong *)((longlong)&(pFVar4->State).SolverBodies[1].Body + lVar19);
                *(float *)(lVar5 + 0x10) =
                     fVar29 * fVar1 + fVar25 * fVar22 + *(float *)(lVar5 + 0x10);
                *(float *)(lVar5 + 0x14) =
                     fVar25 * fVar24 + fVar29 * fVar27 + *(float *)(lVar5 + 0x14);
                *(float *)(lVar5 + 0x18) =
                     fVar25 * fVar28 + fVar29 * fVar30 + *(float *)(lVar5 + 0x18);
              }
            }
            iVar20 = iVar20 + 1;
            lVar15 = lVar15 + 0x10c;
          } while (iVar20 < *(int *)((longlong)(pFVar4->State).InvMs + lVar19 + 0x10));
        }
        iVar18 = iVar18 + 1;
        lVar19 = lVar19 + 0x60;
      } while (iVar18 < this->NumCollisionSolvers);
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return;
}

// SolveVelocityImpl @ 143a19990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Chaos::FPBDCollisionContainerSolver::SolveVelocityImpl
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3,int param_4,
          int param_5,FPBDCollisionSolverSettings *param_6)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  FPBDCollisionSolverManifoldPoint *pFVar10;
  FSolverBody *pFVar11;
  FSolverBody *pFVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  FName *pFVar19;
  FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut> FVar20;
  longlong lVar21;
  FNameEntryId FVar22;
  FName FVar23;
  int iVar24;
  FPBDCollisionSolver *this_00;
  int iVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float local_114;
  FColor_u_0 local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  
  iVar24 = 0;
  FVar20 = StatPtr_STAT_Collisions_ApplyPushOut;
  if (StatPtr_STAT_Collisions_ApplyPushOut ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut>)0x0) {
    pFVar19 = ::FName::FName(&local_e8,"STAT_Collisions_ApplyPushOut");
    FVar20 = (FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_ApplyPushOut,*pFVar19,
                        L"Collisions::ApplyPushOut","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar20;
  bVar15 = false;
  bVar17 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar35 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar35 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_10c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_10c._s_0,(char *)*(FName *)((longlong)FVar20 + 0x10));
      bVar15 = false;
      bVar17 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar22.Value;
        local_f0.Number = uVar35;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar20 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolver.cpp"
                   ,0x319);
        bVar15 = true;
        bVar17 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f0.ComparisonIndex.Value = FVar22.Value;
      local_f0.Number = uVar35;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar16 = true;
      goto LAB_143a19aff;
    }
  }
  bVar16 = false;
  FVar23 = local_e0;
LAB_143a19aff:
  fVar39 = __real_3f800000;
  if ((CVars::bChaos_PBDCollisionSolver_Velocity_SolveEnabled != false) && (param_4 < param_5)) {
    fVar27 = __real_3f800000;
    if (param_3 - param_6->NumVelocityShockPropagationIterations <= param_2) {
      fVar27 = CVars::Chaos_PBDCollisionSolver_Velocity_MinInvMassScale;
    }
    ApplyShockPropagation(this,fVar27);
    iVar9 = param_6->NumVelocityFrictionIterations;
    fVar27 = (float)param_1;
    if (0 < this->NumCollisionSolvers) {
      lVar26 = 0;
      uVar35 = __xmm_80000000800000008000000080000000;
      fVar28 = __real_00800000;
      do {
        this_00 = (FPBDCollisionSolver *)
                  ((longlong)
                   &((FState *)((this->CollisionSolvers->State).SolverBodies + -1))->StaticFriction
                  + lVar26);
        iVar18 = (this_00->State).NumManifoldPoints;
        if ((1 < iVar18) && (CVars::bChaos_PBDCollisionSolver_Velocity_AveragePointEnabled != false)
           ) {
          Chaos::Private::FPBDCollisionSolver::SolveVelocityAverage(this_00,fVar27);
          iVar18 = (this_00->State).NumManifoldPoints;
        }
        if (((param_2 < param_3 - iVar9) || (fVar27 <= 0.0)) ||
           (CVars::bChaos_PBDCollisionSolver_Velocity_FrictionEnabled == false)) {
          local_f8 = 0.0;
        }
        else {
          local_f8 = (this_00->State).VelocityFriction;
        }
        iVar25 = 0;
        if (0 < iVar18) {
          lVar21 = 0;
          do {
            pFVar10 = (this_00->State).ManifoldPoints;
            fVar37 = *(float *)((longlong)&pFVar10->NetPushOutNormal + lVar21);
            bVar13 = 0.0 < fVar37;
            if ((local_f8 <= 0.0) ||
               (((!bVar13 &&
                 (fVar41 = (this_00->State).SoftPhi,
                 pfVar1 = (float *)((longlong)(pFVar10->RelativeContactPoints + 5) + lVar21),
                 fVar41 < *pfVar1 || fVar41 == *pfVar1)) &&
                (*(float *)((longlong)&pFVar10->NetSoftPushOutNormal + lVar21) <= 0.0)))) {
              bVar14 = false;
            }
            else {
              bVar14 = true;
            }
            if ((bVar13) || (bVar14)) {
              fVar40 = fVar39 / fVar27;
              fVar41 = (fVar37 + *(float *)((longlong)&pFVar10->NetSoftPushOutNormal + lVar21)) *
                       fVar40;
              fVar37 = (float)((uint)fVar41 ^ uVar35);
              if (0.0 <= fVar37) {
                fVar37 = 0.0;
              }
              if (bVar14) {
                pFVar11 = (this_00->State).SolverBodies[1].Body;
                pFVar12 = (this_00->State).SolverBodies[0].Body;
                local_100 = *(float *)(&pFVar10->RelativeContactPoints[2].field_0x0 + lVar21);
                fVar39 = *(float *)&(pFVar11->State).W.field_0x4;
                fVar28 = *(float *)&(pFVar11->State).W.field_0x8;
                fVar42 = *(float *)&(pFVar12->State).W;
                local_e8.ComparisonIndex.Value =
                     *(uint *)(&pFVar10->RelativeContactPoints[3].field_0x0 + lVar21);
                fVar29 = *(float *)&(pFVar12->State).W.field_0x8;
                fVar2 = *(float *)&(pFVar12->State).W.field_0x4;
                local_f0.ComparisonIndex.Value =
                     (uint)(*(float *)&(pFVar11->State).W *
                            *(float *)((longlong)(pFVar10->RelativeContactPoints + 10) + lVar21 + 4)
                            + fVar39 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 10) +
                                                 lVar21 + 8) +
                           fVar28 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 0xb) +
                                              lVar21));
                fVar32 = *(float *)&(pFVar12->State).V.field_0x4 -
                         *(float *)&(pFVar11->State).V.field_0x4;
                fVar31 = *(float *)&(pFVar12->State).V.field_0x8 -
                         *(float *)&(pFVar11->State).V.field_0x8;
                fVar36 = *(float *)&(pFVar12->State).V;
                fVar30 = fVar36 - *(float *)&(pFVar11->State).V;
                fVar3 = *(float *)(&pFVar10->RelativeContactPoints[4].field_0x8 + lVar21);
                fVar4 = *(float *)(&pFVar10->RelativeContactPoints[4].field_0x4 + lVar21);
                local_108 = fVar29 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 9) +
                                               lVar21) +
                            fVar42 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 8) +
                                               lVar21 + 4) +
                            fVar2 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 8) +
                                              lVar21 + 8) +
                            fVar32 * *(float *)(&pFVar10->RelativeContactPoints[3].field_0x4 +
                                               lVar21) +
                            fVar31 * *(float *)(&pFVar10->RelativeContactPoints[3].field_0x8 +
                                               lVar21) +
                            (float)local_e8.ComparisonIndex.Value * fVar30;
                fVar38 = *(float *)&(pFVar11->State).W;
                local_104 = fVar39 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 0xb) +
                                               lVar21 + 8) +
                            fVar38 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 0xb) +
                                               lVar21 + 4) +
                            fVar28 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 0xc) +
                                               lVar21);
                fVar5 = *(float *)((longlong)(pFVar10->RelativeContactPoints + 10) + lVar21);
                local_10c = *(FColor_u_0 *)(&pFVar10->RelativeContactPoints[4].field_0x0 + lVar21);
                fVar6 = *(float *)((longlong)(pFVar10->RelativeContactPoints + 9) + lVar21 + 4);
                fVar7 = *(float *)((longlong)(pFVar10->RelativeContactPoints + 9) + lVar21 + 8);
                fVar36 = (fVar38 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 7) +
                                             lVar21 + 4) +
                          fVar39 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 7) +
                                             lVar21 + 8) +
                         fVar28 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 8) + lVar21
                                            )) -
                         ((((*(float *)&(pFVar12->State).V.field_0x4 -
                            *(float *)&(pFVar11->State).V.field_0x4) *
                            *(float *)(&pFVar10->RelativeContactPoints[2].field_0x4 + lVar21) +
                            (fVar36 - *(float *)&(pFVar11->State).V) * local_100 +
                           (*(float *)&(pFVar12->State).V.field_0x8 -
                           *(float *)&(pFVar11->State).V.field_0x8) *
                           *(float *)(&pFVar10->RelativeContactPoints[2].field_0x8 + lVar21)) -
                          *(float *)((longlong)(pFVar10->RelativeContactPoints + 6) + lVar21)) +
                          fVar29 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 7) +
                                             lVar21) +
                         fVar42 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 6) +
                                            lVar21 + 4) +
                         fVar2 * *(float *)((longlong)(pFVar10->RelativeContactPoints + 6) +
                                           lVar21 + 8));
                if (!bVar13) {
                  fVar36 = __real_80000000;
                }
                fVar39 = (this_00->State).Stiffness;
                fVar28 = *(float *)((longlong)&pFVar10->NetImpulseNormal + lVar21);
                fVar36 = fVar39 * *(float *)((longlong)&pFVar10->ContactMassNormal + lVar21) *
                         fVar36;
                if (fVar28 + fVar36 < fVar37) {
                  fVar36 = fVar37 - fVar28;
                }
                local_100 = fVar36 * local_100;
                fVar37 = 0.0;
                *(float *)((longlong)&pFVar10->NetImpulseNormal + lVar21) = fVar28 + fVar36;
                fVar38 = 0.0;
                local_fc = fVar36 * *(float *)(&pFVar10->RelativeContactPoints[2].field_0x4 + lVar21
                                              );
                local_114 = fVar36 * *(float *)(&pFVar10->RelativeContactPoints[2].field_0x8 +
                                               lVar21);
                if ((0.0 < local_f8) && (0.0 < fVar27)) {
                  fVar41 = fVar28 + fVar36 + fVar41;
                  fVar28 = fVar40 * (this_00->State).MinMaxFrictionPushout;
                  fVar39 = fVar39 * CVars::Chaos_PBDCollisionSolver_Velocity_StaticFrictionStiffness
                  ;
                  if (fVar28 <= fVar41) {
                    fVar28 = fVar41;
                  }
                  fVar41 = *(float *)((longlong)&pFVar10->NetImpulseTangentU + lVar21);
                  fVar37 = fVar39 * *(float *)((longlong)&pFVar10->ContactMassTangentU + lVar21) *
                           ((float)local_f0.ComparisonIndex.Value - local_108);
                  fVar33 = fVar40 * *(float *)((longlong)&pFVar10->NetPushOutTangentU + lVar21) +
                           fVar41;
                  fVar28 = fVar28 * local_f8;
                  fVar8 = *(float *)((longlong)&pFVar10->NetImpulseTangentV + lVar21);
                  fVar34 = fVar33 + fVar37;
                  fVar38 = fVar39 * *(float *)((longlong)&pFVar10->ContactMassTangentV + lVar21) *
                           (local_104 -
                           (fVar29 * fVar5 + fVar42 * fVar6 + fVar2 * fVar7 +
                           fVar32 * fVar4 + fVar31 * fVar3 + (float)local_10c * fVar30));
                  fVar40 = fVar40 * *(float *)((longlong)&pFVar10->NetPushOutTangentV + lVar21) +
                           fVar8;
                  fVar42 = fVar40 + fVar38;
                  fVar39 = fVar42 * fVar42 + fVar34 * fVar34;
                  if (fVar28 * fVar28 + __real_322bcc77 < fVar39) {
                    fVar28 = (__real_3f800000 / SQRT(fVar39)) * fVar28;
                    fVar37 = fVar34 * fVar28 - fVar33;
                    fVar38 = fVar42 * fVar28 - fVar40;
                  }
                  *(float *)((longlong)&pFVar10->NetImpulseTangentU + lVar21) = fVar41 + fVar37;
                  *(float *)((longlong)&pFVar10->NetImpulseTangentV + lVar21) = fVar8 + fVar38;
                  local_100 = local_100 +
                              fVar37 * (float)local_e8.ComparisonIndex.Value +
                              fVar38 * (float)local_10c;
                  local_fc = local_fc +
                             fVar38 * *(float *)(&pFVar10->RelativeContactPoints[4].field_0x4 +
                                                lVar21) +
                             fVar37 * *(float *)(&pFVar10->RelativeContactPoints[3].field_0x4 +
                                                lVar21);
                  local_114 = local_114 +
                              fVar38 * *(float *)(&pFVar10->RelativeContactPoints[4].field_0x8 +
                                                 lVar21) +
                              fVar37 * *(float *)(&pFVar10->RelativeContactPoints[3].field_0x8 +
                                                 lVar21);
                }
                fVar41 = __real_00800000;
                fVar39 = (this_00->State).InvMs[0];
                if (__real_00800000 < fVar39) {
                  fVar28 = *(float *)((longlong)(pFVar10->RelativeContactPoints + 0xc) + lVar21 + 8)
                  ;
                  fVar40 = *(float *)(&(pFVar10->ContactTangentUAngular0).field_0x0 + lVar21);
                  fVar42 = *(float *)(&(pFVar10->ContactTangentUAngular0).field_0x4 + lVar21);
                  fVar29 = *(float *)(&(pFVar10->ContactTangentVAngular0).field_0x0 + lVar21);
                  fVar2 = *(float *)((longlong)(pFVar10->RelativeContactPoints + 0xc) + lVar21 + 4);
                  fVar3 = *(float *)(&(pFVar10->ContactNormalAngular0).field_0x8 + lVar21);
                  fVar4 = *(float *)(&(pFVar10->ContactTangentUAngular0).field_0x8 + lVar21);
                  fVar5 = *(float *)(&(pFVar10->ContactTangentVAngular0).field_0x4 + lVar21);
                  fVar6 = *(float *)(&(pFVar10->ContactTangentVAngular0).field_0x8 + lVar21);
                  fVar7 = *(float *)&(pFVar12->State).V.field_0x4;
                  *(float *)&(pFVar12->State).V = local_100 * fVar39 + *(float *)&(pFVar12->State).V
                  ;
                  *(float *)&(pFVar12->State).V.field_0x4 = local_fc * fVar39 + fVar7;
                  *(float *)&(pFVar12->State).V.field_0x8 =
                       local_114 * fVar39 + *(float *)&(pFVar12->State).V.field_0x8;
                  fVar39 = *(float *)&(pFVar12->State).W.field_0x4;
                  fVar7 = *(float *)&(pFVar12->State).W.field_0x8;
                  *(float *)&(pFVar12->State).W =
                       fVar36 * fVar2 + *(float *)&(pFVar12->State).W +
                       fVar38 * fVar29 + fVar37 * fVar40;
                  *(float *)&(pFVar12->State).W.field_0x4 =
                       fVar37 * fVar42 + fVar38 * fVar5 + fVar36 * fVar28 + fVar39;
                  *(float *)&(pFVar12->State).W.field_0x8 =
                       fVar36 * fVar3 + fVar7 + fVar37 * fVar4 + fVar38 * fVar6;
                }
                uVar35 = __xmm_80000000800000008000000080000000;
                fVar40 = (this_00->State).InvMs[1];
                fVar39 = __real_3f800000;
                fVar28 = __real_00800000;
                if (fVar41 < fVar40) {
                  pFVar11 = (this_00->State).SolverBodies[1].Body;
                  fVar37 = (float)((uint)fVar37 ^ __xmm_80000000800000008000000080000000);
                  fVar36 = (float)((uint)fVar36 ^ __xmm_80000000800000008000000080000000);
                  fVar39 = *(float *)(&(pFVar10->ContactTangentUAngular1).field_0x0 + lVar21);
                  fVar28 = *(float *)(&(pFVar10->ContactNormalAngular1).field_0x4 + lVar21);
                  fVar41 = *(float *)(&(pFVar10->ContactTangentUAngular1).field_0x8 + lVar21);
                  fVar40 = (float)((uint)fVar40 ^ __xmm_80000000800000008000000080000000);
                  fVar42 = *(float *)(&(pFVar10->ContactTangentUAngular1).field_0x4 + lVar21);
                  fVar38 = (float)((uint)fVar38 ^ __xmm_80000000800000008000000080000000);
                  fVar29 = *(float *)(&(pFVar10->ContactNormalAngular1).field_0x0 + lVar21);
                  fVar2 = *(float *)(&(pFVar10->ContactTangentVAngular1).field_0x0 + lVar21);
                  fVar3 = *(float *)(&(pFVar10->ContactTangentVAngular1).field_0x4 + lVar21);
                  fVar4 = *(float *)(&(pFVar10->ContactNormalAngular1).field_0x8 + lVar21);
                  fVar5 = *(float *)(&(pFVar10->ContactTangentVAngular1).field_0x8 + lVar21);
                  fVar6 = *(float *)&(pFVar11->State).V.field_0x4;
                  *(float *)&(pFVar11->State).V = local_100 * fVar40 + *(float *)&(pFVar11->State).V
                  ;
                  fVar7 = *(float *)&(pFVar11->State).V.field_0x8;
                  *(float *)&(pFVar11->State).V.field_0x4 = local_fc * fVar40 + fVar6;
                  *(float *)&(pFVar11->State).V.field_0x8 = local_114 * fVar40 + fVar7;
                  fVar40 = *(float *)&(pFVar11->State).W.field_0x4;
                  fVar6 = *(float *)&(pFVar11->State).W.field_0x8;
                  *(float *)&(pFVar11->State).W =
                       fVar37 * fVar39 + *(float *)&(pFVar11->State).W +
                       fVar38 * fVar2 + fVar36 * fVar29;
                  *(float *)&(pFVar11->State).W.field_0x4 =
                       fVar36 * fVar28 + fVar40 + fVar38 * fVar3 + fVar37 * fVar42;
                  *(float *)&(pFVar11->State).W.field_0x8 =
                       fVar37 * fVar41 + fVar38 * fVar5 + fVar36 * fVar4 + fVar6;
                  fVar39 = __real_3f800000;
                  fVar28 = __real_00800000;
                }
              }
              else if (bVar13) {
                pFVar11 = (this_00->State).SolverBodies[1].Body;
                pFVar12 = (this_00->State).SolverBodies[0].Body;
                fVar41 = *(float *)(&pFVar10->RelativeContactPoints[2].field_0x0 + lVar21);
                fVar39 = *(float *)((longlong)&pFVar10->NetImpulseNormal + lVar21);
                fVar40 = ((*(float *)&(pFVar11->State).W.field_0x4 *
                           *(float *)((longlong)(pFVar10->RelativeContactPoints + 7) + lVar21 + 8) +
                           *(float *)((longlong)(pFVar10->RelativeContactPoints + 7) + lVar21 + 4) *
                           *(float *)&(pFVar11->State).W +
                          *(float *)&(pFVar11->State).W.field_0x8 *
                          *(float *)((longlong)(pFVar10->RelativeContactPoints + 8) + lVar21)) -
                         ((((*(float *)&(pFVar12->State).V.field_0x4 -
                            *(float *)&(pFVar11->State).V.field_0x4) *
                            *(float *)(&pFVar10->RelativeContactPoints[2].field_0x4 + lVar21) +
                            (*(float *)&(pFVar12->State).V - *(float *)&(pFVar11->State).V) * fVar41
                           + (*(float *)&(pFVar12->State).V.field_0x8 -
                             *(float *)&(pFVar11->State).V.field_0x8) *
                             *(float *)(&pFVar10->RelativeContactPoints[2].field_0x8 + lVar21)) -
                          *(float *)((longlong)(pFVar10->RelativeContactPoints + 6) + lVar21)) +
                          *(float *)&(pFVar12->State).W.field_0x8 *
                          *(float *)((longlong)(pFVar10->RelativeContactPoints + 7) + lVar21) +
                         *(float *)&(pFVar12->State).W.field_0x4 *
                         *(float *)((longlong)(pFVar10->RelativeContactPoints + 6) + lVar21 + 8) +
                         *(float *)((longlong)(pFVar10->RelativeContactPoints + 6) + lVar21 + 4) *
                         *(float *)&(pFVar12->State).W)) *
                         (this_00->State).Stiffness *
                         *(float *)((longlong)&pFVar10->ContactMassNormal + lVar21);
                if (fVar39 + fVar40 < fVar37) {
                  fVar40 = fVar37 - fVar39;
                }
                fVar41 = fVar40 * fVar41;
                *(float *)((longlong)&pFVar10->NetImpulseNormal + lVar21) = fVar40 + fVar39;
                fVar39 = (this_00->State).InvMs[0];
                fVar37 = fVar40 * *(float *)(&pFVar10->RelativeContactPoints[2].field_0x4 + lVar21);
                fVar42 = fVar40 * *(float *)(&pFVar10->RelativeContactPoints[2].field_0x8 + lVar21);
                if (fVar28 < fVar39) {
                  fVar29 = *(float *)((longlong)(pFVar10->RelativeContactPoints + 0xc) + lVar21 + 4)
                  ;
                  fVar2 = *(float *)((longlong)(pFVar10->RelativeContactPoints + 0xc) + lVar21 + 8);
                  fVar36 = *(float *)(&(pFVar10->ContactNormalAngular0).field_0x8 + lVar21);
                  fVar3 = *(float *)&(pFVar12->State).V.field_0x4;
                  *(float *)&(pFVar12->State).V = fVar41 * fVar39 + *(float *)&(pFVar12->State).V;
                  *(float *)&(pFVar12->State).V.field_0x4 = fVar37 * fVar39 + fVar3;
                  *(float *)&(pFVar12->State).V.field_0x8 =
                       fVar42 * fVar39 + *(float *)&(pFVar12->State).V.field_0x8;
                  fVar39 = *(float *)&(pFVar12->State).W.field_0x4;
                  fVar3 = *(float *)&(pFVar12->State).W.field_0x8;
                  *(float *)&(pFVar12->State).W = fVar40 * fVar29 + *(float *)&(pFVar12->State).W;
                  *(float *)&(pFVar12->State).W.field_0x4 = fVar40 * fVar2 + fVar39;
                  *(float *)&(pFVar12->State).W.field_0x8 = fVar40 * fVar36 + fVar3;
                }
                fVar29 = (this_00->State).InvMs[1];
                fVar39 = __real_3f800000;
                if (fVar28 < fVar29) {
                  pFVar11 = (this_00->State).SolverBodies[1].Body;
                  fVar40 = (float)((uint)fVar40 ^ uVar35);
                  fVar29 = (float)((uint)fVar29 ^ uVar35);
                  fVar39 = *(float *)(&(pFVar10->ContactNormalAngular1).field_0x0 + lVar21);
                  fVar2 = *(float *)(&(pFVar10->ContactNormalAngular1).field_0x4 + lVar21);
                  fVar36 = *(float *)(&(pFVar10->ContactNormalAngular1).field_0x8 + lVar21);
                  fVar3 = *(float *)&(pFVar11->State).V.field_0x4;
                  fVar4 = *(float *)&(pFVar11->State).V.field_0x8;
                  *(float *)&(pFVar11->State).V = fVar41 * fVar29 + *(float *)&(pFVar11->State).V;
                  *(float *)&(pFVar11->State).V.field_0x4 = fVar37 * fVar29 + fVar3;
                  *(float *)&(pFVar11->State).V.field_0x8 = fVar42 * fVar29 + fVar4;
                  fVar37 = *(float *)&(pFVar11->State).W.field_0x4;
                  fVar41 = *(float *)&(pFVar11->State).W.field_0x8;
                  *(float *)&(pFVar11->State).W = fVar40 * fVar39 + *(float *)&(pFVar11->State).W;
                  *(float *)&(pFVar11->State).W.field_0x4 = fVar40 * fVar2 + fVar37;
                  *(float *)&(pFVar11->State).W.field_0x8 = fVar40 * fVar36 + fVar41;
                  fVar39 = __real_3f800000;
                }
              }
            }
            iVar25 = iVar25 + 1;
            lVar21 = lVar21 + 0x10c;
          } while (iVar25 < (this_00->State).NumManifoldPoints);
        }
        iVar24 = iVar24 + 1;
        lVar26 = lVar26 + 0x60;
      } while (iVar24 < this->NumCollisionSolvers);
    }
  }
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar16) {
    FThreadStats::AddMessage(FVar23,CycleScopeEnd);
  }
  return;
}

// UpdateCollisions @ 143a1f3d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::FPBDCollisionContainerSolver::UpdateCollisions
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  FSolverBody *pFVar4;
  FPBDCollisionConstraint *this_00;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  bool bVar26;
  uint uVar27;
  TRotation<double,3> *pTVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  FPBDCollisionSolver *pFVar33;
  undefined1 auStackY_3c8 [32];
  undefined1 local_390 [24];
  undefined1 local_378 [32];
  TRotation<double,3> local_358;
  TRotation<double,3> local_338;
  TTransform<double> local_318;
  TTransform<double> local_2b8;
  undefined1 local_258 [48];
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [48];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d8;
  
  dVar25 = _UNK_150689688;
  dVar24 = ___xmm_3ff00000000000003ff0000000000000;
  dVar23 = _UNK_150689518;
  dVar22 = ___xmm_00000000000000003ff0000000000000;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  uVar30 = (ulonglong)param_2;
  bVar1 = (this->ConstraintContainer->DetectorSettings).bDeferNarrowPhase;
  if (param_2 < param_3) {
    lVar32 = uVar30 * 0x60;
    uVar31 = uVar30;
    do {
      uVar29 = (uint)uVar30;
      if (bVar1 == false) {
        uVar27 = 0;
        if ((int)uVar29 < (this->bCollisionConstraintPerIterationCollisionDetection).ArrayNum) {
          uVar27 = ~uVar29 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance.Data
            [uVar31] != (FScriptContainerElement)0x0) goto LAB_143a1f4ee;
      }
      else {
LAB_143a1f4ee:
        if ((this->NumCollisionSolvers <= (int)uVar29) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index < NumSolvers()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Collision\\PBDCollisionContainerSolver.h"
                                ,0x38,L""), bVar26)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar33 = (FPBDCollisionSolver *)
                  ((longlong)
                   &((FState *)((this->CollisionSolvers->State).SolverBodies + -1))->StaticFriction
                  + lVar32);
        uVar27 = 0;
        if ((int)uVar29 < (this->CollisionConstraints).ArrayNum) {
          uVar27 = ~uVar29 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pFVar33->State).SolverBodies[0].Body;
        this_00 = *(FPBDCollisionConstraint **)
                   ((this->CollisionConstraints).AllocatorInstance.Data + uVar31 * 8);
        pTVar28 = FSolverBody::CorrectedQ(pFVar4,&local_358);
        dVar14 = *(double *)&(pFVar4->State).RoM.field_0x10 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar15 = *(double *)&(pFVar4->State).RoM.field_0x18 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar18 = *(double *)pTVar28;
        dVar19 = *(double *)&pTVar28->field_0x8;
        dVar20 = *(double *)&pTVar28->field_0x10;
        dVar21 = *(double *)&pTVar28->field_0x18;
        dVar16 = *(double *)&(pFVar4->State).RoM *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar17 = *(double *)&(pFVar4->State).RoM.field_0x8 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
        dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar12 = dVar18 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar21 * dVar17 +
                 dVar19 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar20 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar13 = dVar18 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar21 * dVar15 +
                 dVar19 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar20 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        FSolverBody::CorrectedActorP
                  ((pFVar33->State).SolverBodies[0].Body,(TVector<double,3> *)local_390);
        local_228 = (double)local_390._16_8_;
        dStack_220 = 0.0;
        local_258._8_4_ = SUB84(dVar12,0);
        local_258._0_8_ =
             dVar18 * dVar15 * dVar6 + dVar21 * dVar16 + dVar19 * dVar14 * dVar8 +
             dVar20 * dVar17 * dVar10;
        local_258._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_258._24_4_ = SUB84(dVar13,0);
        local_258._16_8_ =
             dVar18 * dVar17 * dVar7 + dVar21 * dVar14 + dVar19 * dVar16 * dVar9 +
             dVar20 * dVar15 * dVar11;
        local_258._28_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_258._32_4_ = local_390._0_4_;
        local_258._36_4_ = local_390._4_4_;
        local_258._40_4_ = local_390._8_4_;
        local_258._44_4_ = local_390._12_4_;
        local_218 = dVar24;
        dStack_210 = dVar25;
        local_208 = dVar22;
        dStack_200 = dVar23;
        pFVar4 = (pFVar33->State).SolverBodies[1].Body;
        pTVar28 = FSolverBody::CorrectedQ(pFVar4,&local_338);
        dVar16 = *(double *)&(pFVar4->State).RoM *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar17 = *(double *)&(pFVar4->State).RoM.field_0x8 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar18 = *(double *)pTVar28;
        dVar19 = *(double *)&pTVar28->field_0x8;
        dVar20 = *(double *)&pTVar28->field_0x10;
        dVar21 = *(double *)&pTVar28->field_0x18;
        dVar14 = *(double *)&(pFVar4->State).RoM.field_0x10 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar15 = *(double *)&(pFVar4->State).RoM.field_0x18 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
        dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar12 = dVar18 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dVar21 * dVar17 +
                 dVar19 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 dVar20 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar13 = dVar18 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar21 * dVar15 +
                 dVar19 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar20 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        FSolverBody::CorrectedActorP
                  ((pFVar33->State).SolverBodies[1].Body,(TVector<double,3> *)local_378);
        local_1f8._32_4_ = local_378._0_4_;
        local_1f8._36_4_ = local_378._4_4_;
        local_1f8._40_4_ = local_378._8_4_;
        local_1f8._44_4_ = local_378._12_4_;
        local_318.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_318.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_318.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1c8 = (double)local_378._16_8_;
        dStack_1c0 = 0.0;
        local_318.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_318.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_318.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_318.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_318.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_318.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_318.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_318.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_318.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_1f8._8_4_ = SUB84(dVar12,0);
        local_1f8._0_8_ =
             dVar18 * dVar15 * dVar6 + dVar21 * dVar16 + dVar19 * dVar14 * dVar8 +
             dVar20 * dVar17 * dVar10;
        local_1f8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        local_318.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_318.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_318.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_1f8._24_4_ = SUB84(dVar13,0);
        local_1f8._16_8_ =
             dVar18 * dVar17 * dVar7 + dVar21 * dVar14 + dVar19 * dVar16 * dVar9 +
             dVar20 * dVar15 * dVar11;
        local_1f8._28_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_1b8 = dVar24;
        dStack_1b0 = dVar25;
        local_1a8 = dVar22;
        dStack_1a0 = dVar23;
        local_318.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_318.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_318.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_318,(TTransform<double> *)this_00->ImplicitTransform,
                   (TTransform<double> *)local_258);
        local_138 = local_318.Rotation.XY.m128d_f64[0];
        dStack_130 = local_318.Rotation.XY.m128d_f64[1];
        local_118 = local_318.Translation.XY.m128d_f64[0];
        dStack_110 = local_318.Translation.XY.m128d_f64[1];
        local_128 = local_318.Rotation.ZW.m128d_f64[0];
        dStack_120 = local_318.Rotation.ZW.m128d_f64[1];
        local_f8 = local_318.Scale3D.XY.m128d_f64[0];
        dStack_f0 = local_318.Scale3D.XY.m128d_f64[1];
        local_108 = local_318.Translation.ZW.m128d_f64[0];
        dStack_100 = local_318.Translation.ZW.m128d_f64[1];
        local_2b8.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_2b8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2b8.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_e8 = local_318.Scale3D.ZW.m128d_f64[0];
        dStack_e0 = local_318.Scale3D.ZW.m128d_f64[1];
        local_2b8.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_2b8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2b8.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_2b8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_2b8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2b8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_2b8.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_2b8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2b8.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_2b8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_2b8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2b8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_2b8.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_2b8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2b8.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_2b8,(TTransform<double> *)(this_00->ImplicitTransform + 1),
                   (TTransform<double> *)local_1f8);
        local_198 = local_2b8.Rotation.XY.m128d_f64[0];
        dStack_190 = local_2b8.Rotation.XY.m128d_f64[1];
        local_188 = local_2b8.Rotation.ZW.m128d_f64[0];
        dStack_180 = local_2b8.Rotation.ZW.m128d_f64[1];
        local_178 = local_2b8.Translation.XY.m128d_f64[0];
        dStack_170 = local_2b8.Translation.XY.m128d_f64[1];
        local_168 = local_2b8.Translation.ZW.m128d_f64[0];
        dStack_160 = local_2b8.Translation.ZW.m128d_f64[1];
        local_158 = local_2b8.Scale3D.XY.m128d_f64[0];
        dStack_150 = local_2b8.Scale3D.XY.m128d_f64[1];
        local_148 = local_2b8.Scale3D.ZW.m128d_f64[0];
        dStack_140 = local_2b8.Scale3D.ZW.m128d_f64[1];
        if (((pFVar33->State).SolverBodies[1].Body == (FSolverBody *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                ,0x247,L""), bVar26)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pFVar33->State).SolverBodies[1].Body;
        if (((pFVar33->State).SolverBodies[0].Body == (FSolverBody *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                ,0x247,L""), bVar26)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00->SolverBodies[0] = (pFVar33->State).SolverBodies[0].Body;
        bVar2 = *(byte *)&this_00->Flags;
        this_00->SolverBodies[1] = pFVar4;
        if ((bVar2 >> 2 & 1) == 0) {
          FPBDCollisionConstraint::ResetActiveManifoldContacts(this_00);
          (pFVar33->State).NumManifoldPoints = 0;
        }
        iVar3 = (this_00->ManifoldPoints).ArrayNum;
        this_00->ClosestManifoldPointIndex = -1;
        Collisions::UpdateConstraint
                  (this_00,(TRigidTransform<double,3> *)&local_138,
                   (TRigidTransform<double,3> *)&local_198,(double)(float)param_1);
        UpdateCollisionSolverManifoldFromConstraint
                  (pFVar33,this_00,(float)param_1,iVar3,(this_00->ManifoldPoints).ArrayNum,
                   &this->ConstraintContainer->SolverSettings);
        this_00->SolverBodies[0] = (FSolverBody *)0x0;
        this_00->SolverBodies[1] = (FSolverBody *)0x0;
      }
      uVar30 = (ulonglong)(uVar29 + 1);
      uVar31 = uVar31 + 1;
      lVar32 = lVar32 + 0x60;
    } while ((int)(uVar29 + 1) < param_3);
  }
  return;
}

// UpdatePositionShockPropagation @ 143a24500

void __thiscall
Chaos::FPBDCollisionContainerSolver::UpdatePositionShockPropagation
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3,int param_4,
          int param_5,FPBDCollisionSolverSettings *param_6)

{
  if (param_3 - param_6->NumPositionShockPropagationIterations <= param_2) {
    ApplyShockPropagation(this,CVars::Chaos_PBDCollisionSolver_Position_MinInvMassScale);
    return;
  }
  ApplyShockPropagation(this,__real_3f800000);
  return;
}

// UpdateVelocityShockPropagation @ 143a24640

void __thiscall
Chaos::FPBDCollisionContainerSolver::UpdateVelocityShockPropagation
          (FPBDCollisionContainerSolver *this,double param_1,int param_2,int param_3,int param_4,
          int param_5,FPBDCollisionSolverSettings *param_6)

{
  if (param_3 - param_6->NumVelocityShockPropagationIterations <= param_2) {
    ApplyShockPropagation(this,CVars::Chaos_PBDCollisionSolver_Velocity_MinInvMassScale);
    return;
  }
  ApplyShockPropagation(this,__real_3f800000);
  return;
}

