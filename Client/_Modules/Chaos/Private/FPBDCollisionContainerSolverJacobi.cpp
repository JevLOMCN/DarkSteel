// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 21

// FPBDCollisionContainerSolverJacobi @ 143a04300

FPBDCollisionContainerSolverJacobi * __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::FPBDCollisionContainerSolverJacobi
          (FPBDCollisionContainerSolverJacobi *this,FPBDCollisionConstraints *param_1,int param_2)

{
  *(int *)&this->_padding_ = param_2;
  this->_padding_ = (longlong)&___7FPBDCollisionContainerSolverJacobi_Private_Chaos__6B_;
  (this->CollisionSolvers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionSolvers).ArrayNum = 0;
  (this->CollisionSolvers).ArrayMax = 0;
  (this->CollisionConstraints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionConstraints).ArrayNum = 0;
  (this->CollisionConstraints).ArrayMax = 0;
  (this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->bCollisionConstraintPerIterationCollisionDetection).ArrayNum = 0;
  (this->bCollisionConstraintPerIterationCollisionDetection).ArrayMax = 0;
  this->bPerIterationCollisionDetection = false;
  this->ConstraintContainer = param_1;
  return this;
}

// ~FPBDCollisionContainerSolverJacobi @ 143a04780

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::~FPBDCollisionContainerSolverJacobi
          (FPBDCollisionContainerSolverJacobi *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FPBDCollisionContainerSolverJacobi_Private_Chaos__6B_;
  pFVar1 = (this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionConstraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionSolvers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConstraintContainerSolver_Chaos__6B_;
  return;
}

// AddBodies @ 143a067b0

/* WARNING: Type propagation algorithm not settling */

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::AddBodies
          (FPBDCollisionContainerSolverJacobi *this,FSolverBodyContainer *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FSolverBody *pFVar6;
  FSolverBody *pFVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar11 = (longlong)(this->CollisionConstraints).ArrayNum;
  uVar9 = 0;
  if (0 < lVar11) {
    lVar8 = 0;
    lVar10 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar9 < (this->CollisionSolvers).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
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
      pFVar1 = (this->CollisionSolvers).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar9 < (this->CollisionConstraints).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
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
      lVar2 = *(longlong *)((this->CollisionConstraints).AllocatorInstance.Data + lVar8 * 8);
      if ((lVar2 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Constraint != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                             ,0x151,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar6 = FSolverBodyContainer::FindOrAdd
                         (param_1,(FGenericParticleHandle)
                                  ((FGenericParticleHandleImp *)(lVar2 + 0xe0))->MHandle);
      pFVar7 = FSolverBodyContainer::FindOrAdd
                         (param_1,(FGenericParticleHandle)
                                  ((FGenericParticleHandleImp *)(lVar2 + 0xe8))->MHandle);
      if ((pFVar6 == (FSolverBody *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Body0 != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                             ,0x157,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((pFVar7 == (FSolverBody *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Body1 != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                             ,0x158,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(FSolverBody **)(pFVar1 + lVar10 + 0x10) = pFVar6;
      uVar9 = uVar9 + 1;
      lVar8 = lVar8 + 1;
      *(FSolverBody **)(pFVar1 + lVar10 + 0x28) = pFVar7;
      lVar10 = lVar10 + 0x338;
    } while (lVar8 < lVar11);
  }
  return;
}

// AddConstraint @ 143a06f40

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::AddConstraint
          (FPBDCollisionContainerSolverJacobi *this,FPBDCollisionConstraint *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  FPBDCollisionConstraint *local_18 [2];
  
  pFVar2 = (this->CollisionConstraints).AllocatorInstance.Data;
  local_18[0] = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar2 + (longlong)(this->CollisionConstraints).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (this->CollisionConstraints).ArrayNum;
  piVar1 = &(this->CollisionConstraints).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->CollisionConstraints).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->CollisionConstraints).AllocatorInstance.Data;
  (this->CollisionConstraints).ArrayNum = uVar5 + 1;
  *(FPBDCollisionConstraint **)(pFVar2 + (longlong)(int)uVar5 * 8) = local_18[0];
  uVar6 = 0;
  if ((int)uVar5 < (this->CollisionSolvers).ArrayNum) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->CollisionSolvers).AllocatorInstance.Data;
  lVar7 = (longlong)(int)uVar5 * 0x338;
  *(undefined8 *)(pFVar2 + lVar7 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar7 + 0x28) = 0;
  *(undefined4 *)(pFVar2 + lVar7 + 0x40) = 0;
  return;
}

// AddConstraints @ 143a07410

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::AddConstraints
          (FPBDCollisionContainerSolverJacobi *this,
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
LAB_143a074cc:
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
        goto LAB_143a074cc;
      }
      AddConstraint(this,pFVar2);
    }
    ppFVar8 = ppFVar8 + 1;
  } while( true );
}

// AddConstraints @ 143a07630

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::AddConstraints
          (FPBDCollisionContainerSolverJacobi *this)

{
  int iVar1;
  FPBDCollisionConstraint *pFVar2;
  code *pcVar3;
  bool bVar4;
  FPBDCollisionConstraint **ppFVar5;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> local_18;
  
  iVar1 = (this->ConstraintContainer->ConstraintAllocator).ActiveConstraints.ArrayNum;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  Reset(this,iVar1);
  FPBDCollisionConstraints::GetConstraintHandles(this->ConstraintContainer,&local_18);
  ppFVar5 = local_18.DataPtr;
  while( true ) {
    if (ppFVar5 == local_18.DataPtr + local_18.ArrayNum) {
      return;
    }
    pFVar2 = *ppFVar5;
    if ((pFVar2 == (FPBDCollisionConstraint *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ConstraintHandle != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                           ,0x12a,L""), bVar4)) break;
    AddConstraint(this,pFVar2);
    ppFVar5 = ppFVar5 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ApplyPositionConstraints @ 143a081a0

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::ApplyPositionConstraints
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3)

{
  SolvePositionImpl(this,param_1,param_2,param_3,0,(this->CollisionConstraints).ArrayNum,
                    &this->ConstraintContainer->SolverSettings);
  return;
}

// ApplyProjectionConstraints @ 143a08680

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::ApplyProjectionConstraints
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3)

{
  return;
}

// ApplyVelocityConstraints @ 143a091f0

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::ApplyVelocityConstraints
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3)

{
  SolveVelocityImpl(this,param_1,param_2,param_3,0,(this->CollisionConstraints).ArrayNum,
                    &this->ConstraintContainer->SolverSettings);
  return;
}

// CachePrefetchSolver @ 143a09fc0

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::CachePrefetchSolver
          (FPBDCollisionContainerSolverJacobi *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (param_1 < (this->CollisionConstraints).ArrayNum) {
    uVar3 = 0;
    if (param_1 < (this->CollisionSolvers).ArrayNum) {
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
  }
  return;
}

// GatherInput @ 143a0db20

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::GatherInput
          (FPBDCollisionContainerSolverJacobi *this,double param_1)

{
  GatherInput(this,param_1,0,(this->CollisionConstraints).ArrayNum);
  return;
}

// GatherInput @ 143a0db40

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::GatherInput
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FPBDCollisionConstraint *this_00;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  longlong lVar7;
  ForElementType<Chaos::FManifoldPoint> FVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  bool bVar14;
  bool bVar15;
  FScriptContainerElement FVar16;
  byte bVar17;
  FManifoldPoint *pFVar18;
  FManifoldPoint *pFVar19;
  ForElementType<Chaos::FManifoldPoint> FVar20;
  int iVar21;
  uint uVar22;
  TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4> *pTVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  undefined1 auVar73 [16];
  float fVar74;
  double dVar75;
  double dVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar89;
  undefined4 uVar90;
  float fVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar99;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  double dVar100;
  undefined1 auVar98 [16];
  double dVar101;
  float fVar102;
  float fVar103;
  double dVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  double dVar111;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar112;
  float fVar113;
  double dVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  float fVar121;
  uint uVar122;
  float fVar123;
  uint uVar124;
  float fVar125;
  float fVar126;
  uint local_res18;
  float local_2e8;
  float local_2e4;
  float local_2d0;
  uint local_2a8;
  longlong local_280;
  
  uVar26 = (ulonglong)param_2;
  if ((param_2 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("BeginIndex >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                          ,0x16f,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (((this->CollisionConstraints).ArrayNum < param_3) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("EndIndex <= NumSolvers()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                          ,0x170,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  fVar91 = (float)param_1;
  iVar21 = 0;
  do {
    if (((iVar21 < (this->CollisionConstraints).ArrayNum) &&
        ((this->CollisionSolvers).ArrayNum <= iVar21)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar21 = iVar21 + 1;
  } while (iVar21 < 4);
  bVar14 = false;
  if (param_2 < param_3) {
    lVar28 = uVar26 * 0x338;
    uVar27 = uVar26;
    uVar124 = __xmm_80000000800000008000000080000000;
    fVar126 = __real_3f800000;
    local_res18 = param_2;
    do {
      uVar25 = (uint)uVar27;
      uVar22 = ~uVar25 >> 0x1f;
      uVar122 = 0;
      if ((int)uVar25 < (this->CollisionSolvers).ArrayNum) {
        uVar122 = uVar22;
      }
      if ((uVar122 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar4 = (this->CollisionSolvers).AllocatorInstance.Data;
      uVar122 = 0;
      if ((int)uVar25 < (this->CollisionConstraints).ArrayNum) {
        uVar122 = uVar22;
      }
      if ((uVar122 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      this_00 = *(FPBDCollisionConstraint **)
                 ((this->CollisionConstraints).AllocatorInstance.Data + uVar26 * 8);
      uVar122 = 0;
      if ((int)uVar25 < (this->bCollisionConstraintPerIterationCollisionDetection).ArrayNum) {
        uVar122 = uVar22;
      }
      if ((uVar122 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      fVar29 = 0.0;
      pFVar5 = (this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance.Data;
      fVar30 = 0.0;
      fVar121 = (this_00->Material).DynamicFriction;
      if (0 < (this->ConstraintContainer->SolverSettings).NumPositionFrictionIterations) {
        fVar29 = (this_00->Material).StaticFriction;
        if (fVar29 <= fVar121) {
          fVar29 = fVar121;
        }
        if ((*(byte *)&this_00->Flags & 0xc0) == 0) {
          fVar30 = fVar121;
          fVar121 = 0.0;
        }
      }
      *(float *)(pFVar4 + lVar28) = fVar29;
      *(float *)(pFVar4 + lVar28 + 4) = fVar30;
      *(float *)(pFVar4 + lVar28 + 8) = fVar121;
      *(float *)(pFVar4 + lVar28 + 0xc) = this_00->Stiffness;
      *(float *)(pFVar4 + lVar28 + 0x18) = (this_00->Material).InvMassScale0;
      *(float *)(pFVar4 + lVar28 + 0x1c) = (this_00->Material).InvInertiaScale0;
      *(undefined4 *)(pFVar4 + lVar28 + 0x20) = 0x3f800000;
      *(float *)(pFVar4 + lVar28 + 0x30) = (this_00->Material).InvMassScale1;
      *(float *)(pFVar4 + lVar28 + 0x34) = (this_00->Material).InvInertiaScale1;
      *(undefined4 *)(pFVar4 + lVar28 + 0x38) = 0x3f800000;
      bVar17 = (byte)(this_00->Flags).Bits;
      if (((bVar17 >> 2 & 1) == 0) || ((bVar17 & 0xc) != 4)) {
        FVar16 = (FScriptContainerElement)0x1;
      }
      else {
        FVar16 = (FScriptContainerElement)0x0;
      }
      pFVar5[uVar26] = FVar16;
      iVar21 = (this_00->ManifoldPoints).ArrayNum;
      if ((*(longlong *)(pFVar4 + lVar28 + 0x10) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                              ,0x246,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar6 = *(longlong *)(pFVar4 + lVar28 + 0x10);
      if ((*(longlong *)(pFVar4 + lVar28 + 0x28) == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                              ,0x246,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      lVar24 = (longlong)iVar21;
      lVar7 = *(longlong *)(pFVar4 + lVar28 + 0x28);
      local_2a8 = 0;
      if (0 < lVar24) {
        local_280 = 0;
        uVar122 = uVar124;
        do {
          fVar121 = 0.0;
          uVar124 = 0;
          if ((int)local_2a8 < (this_00->ManifoldPoints).ArrayNum) {
            uVar124 = ~local_2a8 >> 0x1f;
          }
          if ((uVar124 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar8 = (this_00->ManifoldPoints).AllocatorInstance.SecondaryData;
          FVar20 = (ForElementType<Chaos::FManifoldPoint>)&this_00->ManifoldPoints;
          if (FVar8 != (ForElementType<Chaos::FManifoldPoint>)0x0) {
            FVar20 = FVar8;
          }
          uVar124 = uVar122;
          if ((*(byte *)(local_280 + 0x30 + (longlong)FVar20) & 1) == 0) {
            if ((3 < *(int *)(pFVar4 + lVar28 + 0x40)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("NumElements < MaxElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x9e,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar21 = *(int *)(pFVar4 + lVar28 + 0x40);
            *(int *)(pFVar4 + lVar28 + 0x40) = iVar21 + 1;
            pFVar18 = FPBDCollisionConstraint::GetManifoldPoint(this_00,local_2a8);
            uVar124 = __xmm_80000000800000008000000080000000;
            auVar79 = *(undefined1 (*) [16])&this_00->ShapeWorldTransforms[0].field_0x10;
            dVar54 = auVar79._0_8_;
            dVar72 = *(double *)&this_00->ShapeWorldTransforms[0].field_0x18;
            dVar35 = (double)*(float *)&(pFVar18->ContactPoint).ShapeContactPoints[0].field_0x8;
            dVar75 = (double)*(float *)&(pFVar18->ContactPoint).ShapeContactPoints[0].field_0x4;
            auVar37 = *(undefined1 (*) [16])this_00->ShapeWorldTransforms;
            auVar62 = blendpd(auVar37,auVar79,2);
            dVar56 = (double)*(float *)(pFVar18->ContactPoint).ShapeContactPoints;
            auVar73 = *(undefined1 (*) [16])this_00->ShapeWorldTransforms;
            uVar90 = (undefined4)((ulonglong)dVar75 >> 0x20);
            auVar105._8_4_ = SUB84(dVar75,0);
            auVar105._0_8_ = dVar56;
            auVar105._12_4_ = uVar90;
            auVar106._0_8_ = auVar105._8_8_ * auVar37._0_8_ - auVar37._8_8_ * dVar56;
            auVar106._8_8_ = dVar35 * auVar37._8_8_ - dVar54 * dVar75;
            auVar65._8_4_ = SUB84(dVar75,0);
            auVar65._0_8_ = dVar56;
            auVar65._12_4_ = uVar90;
            auVar37._8_8_ = 0;
            auVar37._0_8_ = dVar35;
            auVar37 = blendpd(auVar65,auVar37,2);
            auVar86._0_8_ = auVar37._0_8_ * dVar54 - auVar62._0_8_ * dVar35;
            auVar86._8_8_ = auVar37._8_8_ * auVar79._8_8_ - auVar62._8_8_ * 0.0;
            auVar37 = blendpd(auVar106,auVar86,2);
            dVar61 = auVar106._8_8_ + auVar106._8_8_;
            dVar55 = auVar86._0_8_ + auVar86._0_8_;
            uVar90 = (undefined4)((ulonglong)dVar55 >> 0x20);
            auVar107._0_8_ = auVar37._0_8_ + auVar37._0_8_;
            auVar107._8_8_ = auVar37._8_8_ + auVar37._8_8_;
            auVar77._8_4_ = SUB84(dVar55,0);
            auVar77._0_8_ = dVar61;
            auVar77._12_4_ = uVar90;
            auVar63._8_4_ = SUB84(dVar55,0);
            auVar63._0_8_ = dVar61;
            auVar63._12_4_ = uVar90;
            auVar37 = blendpd(auVar63,auVar107,2);
            auVar78._0_8_ = auVar77._8_8_ * auVar73._0_8_ - auVar73._8_8_ * dVar61;
            auVar78._8_8_ = auVar107._0_8_ * auVar73._8_8_ - dVar54 * dVar55;
            dVar36 = *(double *)&this_00->ShapeWorldTransforms[1].field_0x18;
            auVar62._8_4_ = SUB84(auVar78._8_8_,0);
            auVar62._0_8_ = auVar78._0_8_;
            auVar62._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
            auVar73 = blendpd(auVar73,auVar79,2);
            uVar3 = *(undefined8 *)((pFVar18->ContactPoint).ShapeContactPoints + 1);
            dVar92 = (double)(float)uVar3;
            dVar99 = (double)(float)((ulonglong)uVar3 >> 0x20);
            auVar64._0_8_ = auVar37._0_8_ * dVar54 - auVar73._0_8_ * auVar107._0_8_;
            auVar64._8_8_ = auVar37._8_8_ * auVar79._8_8_ - auVar73._8_8_ * auVar107._8_8_;
            dVar54 = dVar61 * dVar72 + dVar56 + auVar62._8_8_ +
                     *(double *)&this_00->ShapeWorldTransforms[0].field_0x20;
            dVar56 = dVar55 * dVar72 + dVar75 + auVar64._0_8_ +
                     *(double *)&this_00->ShapeWorldTransforms[0].field_0x28;
            dVar75 = (double)*(float *)&(pFVar18->ContactPoint).ShapeContactPoints[1].field_0x8;
            auVar79 = blendpd(auVar78,auVar64,2);
            dVar104 = auVar107._0_8_ * dVar72 + dVar35 + auVar79._0_8_ +
                      *(double *)&this_00->ShapeWorldTransforms[0].field_0x30;
            auVar79 = *(undefined1 (*) [16])(this_00->ShapeWorldTransforms + 1);
            auVar37 = *(undefined1 (*) [16])&this_00->ShapeWorldTransforms[1].field_0x10;
            dVar55 = auVar37._0_8_;
            auVar73 = *(undefined1 (*) [16])(this_00->ShapeWorldTransforms + 1);
            auVar115._8_4_ = SUB84(dVar99,0);
            auVar115._0_8_ = dVar92;
            uVar90 = (undefined4)((ulonglong)dVar99 >> 0x20);
            auVar115._12_4_ = uVar90;
            auVar65 = blendpd(auVar79,auVar37,2);
            auVar116._0_8_ = auVar115._8_8_ * auVar79._0_8_ - auVar79._8_8_ * dVar92;
            auVar116._8_8_ = dVar75 * auVar79._8_8_ - dVar55 * dVar99;
            auVar38._8_4_ = SUB84(dVar99,0);
            auVar38._0_8_ = dVar92;
            auVar38._12_4_ = uVar90;
            auVar79._8_8_ = 0;
            auVar79._0_8_ = dVar75;
            auVar79 = blendpd(auVar38,auVar79,2);
            auVar39._0_8_ = auVar79._0_8_ * dVar55 - auVar65._0_8_ * dVar75;
            auVar39._8_8_ = auVar79._8_8_ * auVar37._8_8_ - auVar65._8_8_ * 0.0;
            auVar79 = blendpd(auVar116,auVar39,2);
            dVar61 = auVar116._8_8_ + auVar116._8_8_;
            dVar72 = auVar39._0_8_ + auVar39._0_8_;
            uVar90 = (undefined4)((ulonglong)dVar72 >> 0x20);
            auVar117._0_8_ = auVar79._0_8_ + auVar79._0_8_;
            auVar117._8_8_ = auVar79._8_8_ + auVar79._8_8_;
            auVar80._8_4_ = SUB84(dVar72,0);
            auVar80._0_8_ = dVar61;
            auVar80._12_4_ = uVar90;
            auVar66._8_4_ = SUB84(dVar72,0);
            auVar66._0_8_ = dVar61;
            auVar66._12_4_ = uVar90;
            auVar79 = blendpd(auVar66,auVar117,2);
            auVar65 = blendpd(auVar73,auVar37,2);
            auVar81._0_8_ = auVar80._8_8_ * auVar73._0_8_ - auVar73._8_8_ * dVar61;
            auVar81._8_8_ = auVar117._0_8_ * auVar73._8_8_ - dVar55 * dVar72;
            auVar67._0_8_ = auVar79._0_8_ * dVar55 - auVar65._0_8_ * auVar117._0_8_;
            auVar67._8_8_ = auVar79._8_8_ * auVar37._8_8_ - auVar65._8_8_ * auVar117._8_8_;
            auVar40._8_4_ = SUB84(auVar81._8_8_,0);
            auVar40._0_8_ = auVar81._0_8_;
            auVar40._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
            auVar79 = blendpd(auVar81,auVar67,2);
            dVar55 = dVar61 * dVar36 + dVar92 + auVar40._8_8_ +
                     *(double *)&this_00->ShapeWorldTransforms[1].field_0x20;
            dVar61 = dVar72 * dVar36 + dVar99 + auVar67._0_8_ +
                     *(double *)&this_00->ShapeWorldTransforms[1].field_0x28;
            dVar114 = auVar117._0_8_ * dVar36 + dVar75 + auVar79._0_8_ +
                      *(double *)&this_00->ShapeWorldTransforms[1].field_0x30;
            auVar12._4_8_ = auVar67._0_8_;
            auVar12._0_4_ = (int)((ulonglong)dVar55 >> 0x20);
            auVar41._0_8_ = auVar12._0_8_ << 0x20;
            auVar41._8_4_ = SUB84(dVar61,0);
            auVar41._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
            dVar35 = auVar41._8_8_;
            auVar13._4_8_ = dVar61;
            auVar13._0_4_ = (int)((ulonglong)dVar54 >> 0x20);
            auVar42._0_8_ = auVar13._0_8_ << 0x20;
            auVar42._8_4_ = SUB84(dVar56,0);
            auVar42._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
            dVar75 = auVar42._8_8_;
            dVar72 = (dVar55 + dVar54) * __real_3fe0000000000000;
            dVar56 = (dVar114 + dVar104) * __real_3fe0000000000000;
            dVar61 = (dVar35 + dVar75) * __real_3fe0000000000000;
            fVar29 = (float)(dVar72 - *(double *)(lVar6 + 0x110));
            fVar30 = (float)(dVar61 - *(double *)(lVar6 + 0x118));
            fVar31 = (float)(dVar56 - *(double *)(lVar6 + 0x120));
            fVar32 = (float)(dVar72 - *(double *)(lVar7 + 0x110));
            uVar3 = *(undefined8 *)&(pFVar18->ContactPoint).ShapeContactNormal;
            dVar99 = (double)(float)uVar3;
            dVar111 = (double)(float)((ulonglong)uVar3 >> 0x20);
            auVar79 = *(undefined1 (*) [16])(this_00->ShapeWorldTransforms + 1);
            dVar72 = *(double *)&this_00->ShapeWorldTransforms[1].field_0x18;
            auVar95._8_4_ = SUB84(dVar111,0);
            auVar95._0_8_ = dVar99;
            uVar90 = (undefined4)((ulonglong)dVar111 >> 0x20);
            auVar95._12_4_ = uVar90;
            fVar33 = (float)(dVar61 - *(double *)(lVar7 + 0x118));
            fVar34 = (float)(dVar56 - *(double *)(lVar7 + 0x120));
            auVar37 = *(undefined1 (*) [16])&this_00->ShapeWorldTransforms[1].field_0x10;
            dVar92 = auVar37._0_8_;
            dVar36 = (double)*(float *)&(pFVar18->ContactPoint).ShapeContactNormal.field_0x8;
            auVar73 = *(undefined1 (*) [16])(this_00->ShapeWorldTransforms + 1);
            auVar65 = blendpd(auVar73,auVar37,2);
            auVar96._0_8_ = auVar95._8_8_ * auVar73._0_8_ - auVar73._8_8_ * dVar99;
            auVar96._8_8_ = dVar36 * auVar73._8_8_ - dVar92 * dVar111;
            auVar43._8_4_ = SUB84(dVar111,0);
            auVar43._0_8_ = dVar99;
            auVar43._12_4_ = uVar90;
            auVar73._8_8_ = 0;
            auVar73._0_8_ = dVar36;
            auVar73 = blendpd(auVar43,auVar73,2);
            auVar44._0_8_ = auVar73._0_8_ * dVar92 - auVar65._0_8_ * dVar36;
            auVar44._8_8_ = auVar73._8_8_ * auVar37._8_8_ - auVar65._8_8_ * 0.0;
            auVar73 = blendpd(auVar96,auVar44,2);
            dVar56 = auVar96._8_8_ + auVar96._8_8_;
            dVar61 = auVar44._0_8_ + auVar44._0_8_;
            uVar90 = (undefined4)((ulonglong)dVar61 >> 0x20);
            auVar97._0_8_ = auVar73._0_8_ + auVar73._0_8_;
            auVar97._8_8_ = auVar73._8_8_ + auVar73._8_8_;
            auVar82._8_4_ = SUB84(dVar61,0);
            auVar82._0_8_ = dVar56;
            auVar82._12_4_ = uVar90;
            auVar58._8_4_ = SUB84(dVar61,0);
            auVar58._0_8_ = dVar56;
            auVar58._12_4_ = uVar90;
            auVar73 = blendpd(auVar58,auVar97,2);
            auVar83._0_8_ = auVar82._8_8_ * auVar79._0_8_ - auVar79._8_8_ * dVar56;
            auVar83._8_8_ = auVar97._0_8_ * auVar79._8_8_ - dVar92 * dVar61;
            auVar45._8_4_ = SUB84(auVar83._8_8_,0);
            auVar45._0_8_ = auVar83._0_8_;
            auVar45._12_4_ = (int)((ulonglong)auVar83._8_8_ >> 0x20);
            auVar79 = blendpd(auVar79,auVar37,2);
            auVar59._0_8_ = auVar73._0_8_ * dVar92 - auVar79._0_8_ * auVar97._0_8_;
            auVar59._8_8_ = auVar73._8_8_ * auVar37._8_8_ - auVar79._8_8_ * auVar97._8_8_;
            auVar79 = blendpd(auVar83,auVar59,2);
            fVar102 = (float)(dVar56 * dVar72 + dVar99 + auVar45._8_8_);
            fVar74 = (float)(auVar97._0_8_ * dVar72 + dVar36 + auVar79._0_8_);
            fVar60 = (float)((uint)fVar102 ^ uVar122);
            fVar113 = (float)(dVar61 * dVar72 + dVar111 + auVar59._0_8_);
            fVar52 = fVar60 * fVar60 + fVar74 * fVar74;
            if (fVar52 <= __real_38d1b717) {
              local_2d0 = 0.0;
              local_2e8 = (float)((uint)fVar74 ^ uVar122);
              fVar126 = fVar126 / SQRT(fVar113 * fVar113 + local_2e8 * local_2e8);
              local_2e8 = local_2e8 * fVar126;
              fVar126 = fVar113 * fVar126;
            }
            else {
              local_2e8 = 0.0;
              fVar126 = fVar126 / SQRT(fVar52);
              local_2d0 = fVar74 * fVar126;
              fVar126 = fVar126 * fVar60;
            }
            fVar52 = local_2e8;
            fVar53 = fVar113 * fVar126 - fVar74 * local_2e8;
            fVar60 = fVar74 * local_2d0 - fVar126 * fVar102;
            fVar112 = local_2e8 * fVar102 - fVar113 * local_2d0;
            bVar17 = (pFVar18->Flags).Bits & 8;
            if ((bVar17 == 0) || (0.0 < (this_00->Material).Restitution)) {
              bVar15 = true;
            }
            else {
              bVar15 = false;
            }
            fVar123 = fVar121;
            fVar125 = fVar121;
            if (bVar15) {
              fVar125 = ((*(float *)(lVar6 + 0x34) * fVar31 - *(float *)(lVar6 + 0x38) * fVar30) +
                        *(float *)(lVar6 + 0x20)) -
                        ((*(float *)(lVar7 + 0x34) * fVar34 - *(float *)(lVar7 + 0x38) * fVar33) +
                        *(float *)(lVar7 + 0x20));
              fVar121 = ((*(float *)(lVar6 + 0x38) * fVar29 - *(float *)(lVar6 + 0x30) * fVar31) +
                        *(float *)(lVar6 + 0x24)) -
                        ((*(float *)(lVar7 + 0x38) * fVar32 - *(float *)(lVar7 + 0x30) * fVar34) +
                        *(float *)(lVar7 + 0x24));
              fVar123 = ((*(float *)(lVar6 + 0x30) * fVar30 - *(float *)(lVar6 + 0x34) * fVar29) +
                        *(float *)(lVar6 + 0x28)) -
                        ((*(float *)(lVar7 + 0x30) * fVar33 - *(float *)(lVar7 + 0x34) * fVar32) +
                        *(float *)(lVar7 + 0x28));
            }
            if (bVar17 == 0) {
              local_2e4 = fVar125 * fVar91;
              fVar89 = fVar121 * fVar91;
              fVar103 = fVar123 * fVar91;
            }
            else {
              auVar79 = *(undefined1 (*) [16])&this_00->ShapeWorldTransforms[0].field_0x10;
              dVar56 = auVar79._0_8_;
              dVar93 = (double)(float)*(undefined8 *)pFVar18->ShapeAnchorPoints;
              dVar100 = (double)(float)((ulonglong)*(undefined8 *)pFVar18->ShapeAnchorPoints >> 0x20
                                       );
              auVar37 = *(undefined1 (*) [16])this_00->ShapeWorldTransforms;
              auVar118._8_4_ = SUB84(dVar100,0);
              auVar118._0_8_ = dVar93;
              uVar90 = (undefined4)((ulonglong)dVar100 >> 0x20);
              auVar118._12_4_ = uVar90;
              dVar36 = *(double *)&this_00->ShapeWorldTransforms[0].field_0x18;
              dVar99 = (double)*(float *)&pFVar18->ShapeAnchorPoints[0].field_0x8;
              auVar73 = *(undefined1 (*) [16])this_00->ShapeWorldTransforms;
              auVar65 = blendpd(auVar73,auVar79,2);
              auVar119._0_8_ = auVar118._8_8_ * auVar73._0_8_ - auVar73._8_8_ * dVar93;
              auVar119._8_8_ = dVar99 * auVar73._8_8_ - dVar56 * dVar100;
              auVar46._8_4_ = SUB84(dVar100,0);
              auVar46._0_8_ = dVar93;
              auVar46._12_4_ = uVar90;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = dVar99;
              auVar73 = blendpd(auVar46,auVar10,2);
              auVar47._0_8_ = auVar73._0_8_ * dVar56 - auVar65._0_8_ * dVar99;
              auVar47._8_8_ = auVar73._8_8_ * auVar79._8_8_ - auVar65._8_8_ * 0.0;
              auVar73 = blendpd(auVar119,auVar47,2);
              dVar61 = auVar119._8_8_ + auVar119._8_8_;
              dVar72 = auVar47._0_8_ + auVar47._0_8_;
              uVar90 = (undefined4)((ulonglong)dVar72 >> 0x20);
              auVar120._0_8_ = auVar73._0_8_ + auVar73._0_8_;
              auVar120._8_8_ = auVar73._8_8_ + auVar73._8_8_;
              auVar84._8_4_ = SUB84(dVar72,0);
              auVar84._0_8_ = dVar61;
              auVar84._12_4_ = uVar90;
              auVar68._8_4_ = SUB84(dVar72,0);
              auVar68._0_8_ = dVar61;
              auVar68._12_4_ = uVar90;
              auVar73 = blendpd(auVar68,auVar120,2);
              auVar85._0_8_ = auVar84._8_8_ * auVar37._0_8_ - auVar37._8_8_ * dVar61;
              auVar85._8_8_ = auVar120._0_8_ * auVar37._8_8_ - dVar56 * dVar72;
              auVar48._8_4_ = SUB84(auVar85._8_8_,0);
              auVar48._0_8_ = auVar85._0_8_;
              auVar48._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
              auVar65 = blendpd(auVar37,auVar79,2);
              auVar37 = *(undefined1 (*) [16])&this_00->ShapeWorldTransforms[1].field_0x10;
              dVar57 = auVar37._0_8_;
              auVar69._0_8_ = auVar73._0_8_ * dVar56 - auVar65._0_8_ * auVar120._0_8_;
              auVar69._8_8_ = auVar73._8_8_ * auVar79._8_8_ - auVar65._8_8_ * auVar120._8_8_;
              auVar86 = blendpd(auVar85,auVar69,2);
              dVar92 = *(double *)&this_00->ShapeWorldTransforms[1].field_0x18;
              dVar76 = (double)*(float *)&pFVar18->ShapeAnchorPoints[1].field_0x4;
              dVar111 = (double)*(float *)&pFVar18->ShapeAnchorPoints[1].field_0x8;
              dVar56 = (double)*(float *)(pFVar18->ShapeAnchorPoints + 1);
              auVar79 = *(undefined1 (*) [16])(this_00->ShapeWorldTransforms + 1);
              uVar90 = (undefined4)((ulonglong)dVar76 >> 0x20);
              auVar108._8_4_ = SUB84(dVar76,0);
              auVar108._0_8_ = dVar56;
              auVar108._12_4_ = uVar90;
              auVar109._0_8_ = auVar108._8_8_ * auVar79._0_8_ - auVar79._8_8_ * dVar56;
              auVar109._8_8_ = dVar111 * auVar79._8_8_ - dVar57 * dVar76;
              auVar49._8_4_ = SUB84(dVar76,0);
              auVar49._0_8_ = dVar56;
              auVar49._12_4_ = uVar90;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = dVar111;
              auVar73 = blendpd(auVar49,auVar11,2);
              auVar65 = blendpd(auVar79,auVar37,2);
              auVar79 = *(undefined1 (*) [16])(this_00->ShapeWorldTransforms + 1);
              auVar98._8_4_ = SUB84(auVar109._8_8_,0);
              auVar98._0_8_ = auVar109._0_8_;
              auVar98._12_4_ = (int)((ulonglong)auVar109._8_8_ >> 0x20);
              auVar50._0_8_ = auVar73._0_8_ * dVar57 - auVar65._0_8_ * dVar111;
              auVar50._8_8_ = auVar73._8_8_ * auVar37._8_8_ - auVar65._8_8_ * 0.0;
              auVar73 = blendpd(auVar109,auVar50,2);
              dVar94 = auVar98._8_8_ + auVar98._8_8_;
              dVar101 = auVar50._0_8_ + auVar50._0_8_;
              auVar110._0_8_ = auVar73._0_8_ + auVar73._0_8_;
              auVar110._8_8_ = auVar73._8_8_ + auVar73._8_8_;
              auVar87._8_4_ = SUB84(dVar101,0);
              auVar87._0_8_ = dVar94;
              uVar90 = (undefined4)((ulonglong)dVar101 >> 0x20);
              auVar87._12_4_ = uVar90;
              auVar70._8_4_ = SUB84(dVar101,0);
              auVar70._0_8_ = dVar94;
              auVar70._12_4_ = uVar90;
              auVar73 = blendpd(auVar70,auVar110,2);
              auVar65 = blendpd(auVar79,auVar37,2);
              auVar88._0_8_ = auVar87._8_8_ * auVar79._0_8_ - auVar79._8_8_ * dVar94;
              auVar88._8_8_ = auVar110._0_8_ * auVar79._8_8_ - dVar57 * dVar101;
              auVar51._8_4_ = SUB84(auVar88._8_8_,0);
              auVar51._0_8_ = auVar88._0_8_;
              auVar51._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
              auVar71._0_8_ = auVar73._0_8_ * dVar57 - auVar65._0_8_ * auVar110._0_8_;
              auVar71._8_8_ = auVar73._8_8_ * auVar37._8_8_ - auVar65._8_8_ * auVar110._8_8_;
              auVar79 = blendpd(auVar88,auVar71,2);
              local_2e4 = (float)((dVar61 * dVar36 + dVar93 + auVar48._8_8_ +
                                  *(double *)&this_00->ShapeWorldTransforms[0].field_0x20) - dVar54)
                          - (float)((dVar94 * dVar92 + dVar56 + auVar51._8_8_ +
                                    *(double *)&this_00->ShapeWorldTransforms[1].field_0x20) -
                                   dVar55);
              fVar89 = (float)((dVar72 * dVar36 + dVar100 + auVar69._0_8_ +
                               *(double *)&this_00->ShapeWorldTransforms[0].field_0x28) - dVar75) -
                       (float)((dVar101 * dVar92 + dVar76 + auVar71._0_8_ +
                               *(double *)&this_00->ShapeWorldTransforms[1].field_0x28) - dVar35);
              fVar103 = (float)((auVar120._0_8_ * dVar36 + dVar99 + auVar86._0_8_ +
                                *(double *)&this_00->ShapeWorldTransforms[0].field_0x30) - dVar104)
                        - (float)((auVar110._0_8_ * dVar92 + dVar111 + auVar79._0_8_ +
                                  *(double *)&this_00->ShapeWorldTransforms[1].field_0x30) - dVar114
                                 );
            }
            local_2e8 = 0.0;
            fVar89 = fVar89 + (float)(dVar75 - dVar35);
            fVar1 = (this_00->Material).Restitution;
            local_2e4 = (float)(dVar54 - dVar55) + local_2e4;
            fVar103 = fVar103 + (float)(dVar104 - dVar114);
            fVar2 = pFVar18->TargetPhi;
            if ((0.0 < fVar1) &&
               (fVar121 = fVar102 * fVar125 + fVar113 * fVar121 + fVar74 * fVar123,
               fVar121 < (float)((uint)(fVar91 * (this_00->Material).RestitutionThreshold) ^
                                __xmm_80000000800000008000000080000000))) {
              local_2e8 = (float)((uint)(fVar121 * fVar1) ^ __xmm_80000000800000008000000080000000);
            }
            pTVar23 = (TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                       *)(pFVar4 + lVar28 + 0x40);
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            *(ulonglong *)&pFVar19->RelativeContactPosition0 = CONCAT44(fVar30,fVar29);
            *(float *)&(pFVar19->RelativeContactPosition0).field_0x8 = fVar31;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            *(ulonglong *)&pFVar19->RelativeContactPosition1 = CONCAT44(fVar33,fVar32);
            *(float *)&(pFVar19->RelativeContactPosition1).field_0x8 = fVar34;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            *(ulonglong *)&pFVar19->ContactNormal = CONCAT44(fVar113,fVar102);
            *(float *)&(pFVar19->ContactNormal).field_0x8 = fVar74;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            *(ulonglong *)&pFVar19->ContactTangentU = CONCAT44(fVar52,local_2d0);
            *(float *)&(pFVar19->ContactTangentU).field_0x8 = fVar126;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            *(ulonglong *)&pFVar19->ContactTangentV = CONCAT44(fVar60,fVar53);
            *(float *)&(pFVar19->ContactTangentV).field_0x8 = fVar112;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->ContactDeltaNormal =
                 (fVar102 * (float)(dVar54 - dVar55) + fVar113 * (float)(dVar75 - dVar35) +
                 fVar74 * (float)(dVar104 - dVar114)) - fVar2;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->ContactDeltaTangentU =
                 fVar52 * fVar89 + local_2d0 * local_2e4 + fVar126 * fVar103;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->ContactDeltaTangentV = fVar60 * fVar89 + fVar53 * local_2e4 + fVar103 * fVar112
            ;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pTVar23 = (TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                       *)(pFVar4 + lVar28 + 0x40);
            pFVar19->ContactTargetVelocityNormal = local_2e8;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->NetPushOutNormal = 0.0;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->NetPushOutTangentU = 0.0;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->NetPushOutTangentV = 0.0;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->NetImpulseNormal = 0.0;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->NetImpulseTangentU = 0.0;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->NetImpulseTangentV = 0.0;
            pFVar19 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                      ::operator[](pTVar23,iVar21);
            pFVar19->StaticFrictionRatio = 0.0;
            FPBDCollisionSolverJacobiManifoldPoints::UpdateMass
                      ((FPBDCollisionSolverJacobiManifoldPoints *)pTVar23,iVar21,
                       (FConstraintSolverBody *)(pFVar4 + lVar28 + 0x10),
                       (FConstraintSolverBody *)(pFVar4 + lVar28 + 0x28));
            fVar126 = __real_3f800000;
          }
          local_2a8 = local_2a8 + 1;
          local_280 = local_280 + 0x6c;
          lVar24 = lVar24 + -1;
          uVar122 = uVar124;
        } while (lVar24 != 0);
      }
      if ((bVar14) || (pFVar5[uVar26] != (FScriptContainerElement)0x0)) {
        bVar14 = true;
      }
      else {
        bVar14 = false;
      }
      CachePrefetchSolver(this,local_res18 + 4);
      local_res18 = local_res18 + 1;
      uVar27 = (ulonglong)local_res18;
      uVar26 = uVar26 + 1;
      lVar28 = lVar28 + 0x338;
    } while ((int)local_res18 < param_3);
    if (bVar14) {
      this->bPerIterationCollisionDetection = true;
    }
  }
  return;
}

// GetNumConstraints @ 143a0f430

int __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::GetNumConstraints
          (FPBDCollisionContainerSolverJacobi *this)

{
  return (this->CollisionConstraints).ArrayNum;
}

// Reset @ 143a114c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::Reset
          (FPBDCollisionContainerSolverJacobi *this,int param_1)

{
  int *piVar1;
  TArray<Chaos::Private::FPBDCollisionSolverJacobi,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *_Dst;
  
  piVar1 = &(this->CollisionSolvers).ArrayMax;
  if (*piVar1 < param_1) {
    uVar6 = (int)(param_1 * 5 + (param_1 * 5 >> 0x1f & 3U)) >> 2;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    (this->CollisionSolvers).ArrayNum = 0;
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x338,8,uVar6,&(this->CollisionSolvers).AllocatorInstance,0,piVar1);
    }
  }
  pTVar2 = &this->CollisionSolvers;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar3 = &(this->CollisionSolvers).ArrayNum;
  *piVar3 = 0;
  if ((this->CollisionSolvers).ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x338,8,param_1,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar6 = *piVar1;
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
  uVar6 = *piVar1;
  if (-1 < (int)uVar6) {
    (this->bCollisionConstraintPerIterationCollisionDetection).ArrayNum = 0;
    if ((this->bCollisionConstraintPerIterationCollisionDetection).ArrayMax < (int)uVar6) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar6,
                 &(this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance,0,
                 &(this->bCollisionConstraintPerIterationCollisionDetection).ArrayMax);
    }
    iVar7 = *piVar3;
    if (iVar7 < param_1) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x338,8,param_1 - iVar7,&pTVar2->AllocatorInstance,piVar3,piVar1);
    }
    else if (param_1 < iVar7) {
      uVar6 = iVar7 - param_1;
      if ((int)(uVar6 | param_1) < 0) {
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
      if (uVar6 != 0) {
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)param_1 * 0x338;
        iVar7 = (*piVar3 - uVar6) - param_1;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x338,(longlong)iVar7 * 0x338);
        }
        *piVar3 = *piVar3 - uVar6;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x338,8,&pTVar2->AllocatorInstance,*piVar3,piVar1);
      }
    }
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->bCollisionConstraintPerIterationCollisionDetection,param_1,Default);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// ScatterOutput @ 143a128d0

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::ScatterOutput
          (FPBDCollisionContainerSolverJacobi *this,double param_1)

{
  ScatterOutput(this,param_1,0,(this->CollisionConstraints).ArrayNum);
  return;
}

// ScatterOutput @ 143a128f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::ScatterOutput
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3)

{
  ForElementType<Chaos::FSavedManifoldPoint> *pFVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte bVar19;
  undefined4 uVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  code *pcVar23;
  bool bVar24;
  int iVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  ForElementType<Chaos::FSavedManifoldPoint> *pFVar29;
  longlong lVar30;
  uint uVar31;
  TArray<Chaos::FManifoldPointResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar32;
  uint uVar33;
  ulonglong uVar34;
  longlong lVar35;
  ulonglong uVar36;
  longlong lVar37;
  uint uVar38;
  int iVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  uint local_res18;
  float local_128;
  float local_124;
  float local_120;
  longlong local_100;
  
  uVar34 = (ulonglong)param_2;
  if ((param_2 < 0) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("BeginIndex >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                          ,0x199,L""), bVar24)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  if (((this->CollisionConstraints).ArrayNum < param_3) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("EndIndex <= NumSolvers()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                          ,0x19a,L""), bVar24)) {
    pcVar23 = (code *)swi(3);
    (*pcVar23)();
    return;
  }
  if (param_2 < param_3) {
    lVar30 = uVar34 * 0x338;
    uVar36 = uVar34;
    fVar40 = __real_3f800000;
    fVar42 = __real_38d1b717;
    fVar43 = __real_3f7ff972;
    local_res18 = param_2;
    do {
      uVar33 = (uint)uVar36;
      uVar38 = 0;
      if ((int)uVar33 < (this->CollisionSolvers).ArrayNum) {
        uVar38 = ~uVar33 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      pFVar21 = (this->CollisionSolvers).AllocatorInstance.Data;
      uVar38 = 0;
      if ((int)uVar33 < (this->CollisionConstraints).ArrayNum) {
        uVar38 = ~uVar33 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar24)) {
        pcVar23 = (code *)swi(3);
        (*pcVar23)();
        return;
      }
      lVar22 = *(longlong *)((this->CollisionConstraints).AllocatorInstance.Data + uVar34 * 8);
      uVar38 = *(uint *)(lVar22 + 0x5b0);
      pFVar1 = (ForElementType<Chaos::FSavedManifoldPoint> *)(lVar22 + 0x378);
      if ((int)uVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar38);
      }
      *(undefined4 *)(lVar22 + 0x3f0) = 0;
      if (*(int *)(lVar22 + 0x3f4) < (int)uVar38) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                  (0x1c,4,uVar38,pFVar1,0,(int *)(lVar22 + 0x3f4));
      }
      TArray<Chaos::FManifoldPointResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
      SetNum((TArray<Chaos::FManifoldPointResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)(lVar22 + 0x5b8),*(int *)(lVar22 + 0x5b0),Default);
      uVar38 = 0;
      iVar39 = 0;
      *(undefined4 *)(lVar22 + 0x638) = 0;
      if (0 < *(int *)(lVar22 + 0x5b0)) {
        fVar41 = fVar40 / (float)param_1;
        lVar37 = 0;
        local_100 = 0;
        lVar35 = 0;
        do {
          fVar40 = 0.0;
          local_120 = 0.0;
          local_124 = 0.0;
          uVar31 = ~uVar38 >> 0x1f;
          local_128 = 0.0;
          uVar33 = 0;
          if ((int)uVar38 < *(int *)(lVar22 + 0x5b0)) {
            uVar33 = uVar31;
          }
          if ((uVar33 == 0) &&
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
          lVar27 = lVar22 + 0x3f8;
          if (*(longlong *)(lVar22 + 0x5a8) != 0) {
            lVar27 = *(longlong *)(lVar22 + 0x5a8);
          }
          fVar44 = fVar40;
          fVar45 = fVar40;
          fVar46 = fVar40;
          if ((*(byte *)(lVar37 + 0x30 + lVar27) & 1) == 0) {
            if (*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L"");
              if (bVar24) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
              if ((*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar24)) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
            }
            fVar42 = *(float *)(pFVar21 + lVar35 + 0xe4 + lVar30);
            fVar43 = *(float *)(pFVar21 + lVar35 + 0x5c + lVar30);
            fVar40 = *(float *)(pFVar21 + lVar35 + 0x60 + lVar30);
            fVar44 = *(float *)(pFVar21 + lVar35 + 100 + lVar30);
            if (*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L"");
              if (bVar24) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
              if ((*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar24)) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
            }
            fVar45 = *(float *)(pFVar21 + lVar35 + 0xe8 + lVar30);
            fVar46 = *(float *)(pFVar21 + lVar35 + 0x68 + lVar30);
            fVar2 = *(float *)(pFVar21 + lVar35 + 0x6c + lVar30);
            fVar3 = *(float *)(pFVar21 + lVar35 + 0x70 + lVar30);
            if (*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L"");
              if (bVar24) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
              if ((*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar24)) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
            }
            fVar4 = *(float *)(pFVar21 + lVar35 + 0xec + lVar30);
            local_120 = fVar4 * *(float *)(pFVar21 + lVar35 + 0x74 + lVar30) +
                        fVar45 * fVar46 + fVar42 * fVar43;
            local_124 = fVar4 * *(float *)(pFVar21 + lVar35 + 0x78 + lVar30) +
                        fVar45 * fVar2 + fVar42 * fVar40;
            local_128 = fVar4 * *(float *)(pFVar21 + lVar35 + 0x7c + lVar30) +
                        fVar45 * fVar3 + fVar42 * fVar44;
            if (*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L"");
              if (bVar24) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
              if ((*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar24)) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
            }
            fVar42 = *(float *)(pFVar21 + lVar35 + 0xf0 + lVar30);
            fVar43 = *(float *)(pFVar21 + lVar35 + 0x5c + lVar30);
            fVar40 = *(float *)(pFVar21 + lVar35 + 0x60 + lVar30);
            fVar44 = *(float *)(pFVar21 + lVar35 + 100 + lVar30);
            if (*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L"");
              if (bVar24) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
              if ((*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar24)) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
            }
            fVar2 = *(float *)(pFVar21 + lVar35 + 0xf4 + lVar30);
            fVar45 = *(float *)(pFVar21 + lVar35 + 0x68 + lVar30);
            fVar46 = *(float *)(pFVar21 + lVar35 + 0x6c + lVar30);
            fVar3 = *(float *)(pFVar21 + lVar35 + 0x70 + lVar30);
            if (*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) {
              bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index < NumElements",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                  ,0x68,L"");
              if (bVar24) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
              if ((*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index < NumElements",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                      ,0x68,L""), bVar24)) {
                pcVar23 = (code *)swi(3);
                (*pcVar23)();
                return;
              }
            }
            fVar4 = *(float *)(pFVar21 + lVar35 + 0xf8 + lVar30);
            fVar45 = fVar4 * *(float *)(pFVar21 + lVar35 + 0x74 + lVar30) +
                     fVar2 * fVar45 + fVar42 * fVar43;
            fVar46 = fVar4 * *(float *)(pFVar21 + lVar35 + 0x78 + lVar30) +
                     fVar2 * fVar46 + fVar42 * fVar40;
            fVar44 = fVar4 * *(float *)(pFVar21 + lVar35 + 0x7c + lVar30) +
                     fVar2 * fVar3 + fVar42 * fVar44;
            if ((*(int *)(pFVar21 + lVar30 + 0x40) <= iVar39) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index < NumElements",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\UncheckedArray.h"
                                    ,0x68,L""), bVar24)) {
              pcVar23 = (code *)swi(3);
              (*pcVar23)();
              return;
            }
            fVar40 = *(float *)(pFVar21 + lVar35 + 0xfc + lVar30);
            iVar39 = iVar39 + 1;
            lVar35 = lVar35 + 0xbc;
            fVar42 = __real_38d1b717;
            fVar43 = __real_3f7ff972;
          }
          uVar33 = 0;
          if ((int)uVar38 < *(int *)(lVar22 + 0x5b0)) {
            uVar33 = uVar31;
          }
          if ((uVar33 == 0) &&
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
          lVar27 = lVar22 + 0x3f8;
          if (*(longlong *)(lVar22 + 0x5a8) != 0) {
            lVar27 = *(longlong *)(lVar22 + 0x5a8);
          }
          uVar33 = 0;
          if ((int)uVar38 < *(int *)(lVar22 + 0x630)) {
            uVar33 = uVar31;
          }
          if ((uVar33 == 0) &&
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
          pTVar32 = (TArray<Chaos::FManifoldPointResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                     *)(lVar22 + 0x5b8);
          if (*(TArray<Chaos::FManifoldPointResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                **)(lVar22 + 0x628) !=
              (TArray<Chaos::FManifoldPointResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
               *)0x0) {
            pTVar32 = *(TArray<Chaos::FManifoldPointResult,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        **)(lVar22 + 0x628);
          }
          if (fVar40 < fVar43) {
            if (fVar42 <= fVar40) {
              fVar42 = *(float *)(lVar27 + 0x48 + lVar37);
              fVar43 = *(float *)(lVar27 + 0xc + lVar37);
              fVar2 = *(float *)(lVar27 + 0x4c + lVar37);
              fVar3 = *(float *)(lVar27 + 0x10 + lVar37);
              fVar4 = *(float *)(lVar27 + 0x50 + lVar37);
              fVar6 = *(float *)(lVar27 + 0x14 + lVar37);
              fVar7 = *(float *)(lVar27 + 0x3c + lVar37);
              fVar8 = *(float *)(lVar27 + lVar37);
              fVar9 = *(float *)(lVar27 + 0x40 + lVar37);
              fVar10 = *(float *)(lVar27 + 4 + lVar37);
              fVar11 = *(float *)(lVar27 + 0x44 + lVar37);
              fVar12 = *(float *)(lVar27 + 8 + lVar37);
              iVar25 = *(int *)(lVar22 + 0x3f0);
              fVar13 = *(float *)(lVar27 + 0xc + lVar37);
              fVar14 = *(float *)(lVar27 + 0x10 + lVar37);
              fVar15 = *(float *)(lVar27 + 0x14 + lVar37);
              fVar16 = *(float *)(lVar27 + lVar37);
              fVar17 = *(float *)(lVar27 + 4 + lVar37);
              fVar18 = *(float *)(lVar27 + 8 + lVar37);
              if (iVar25 == *(int *)(lVar22 + 0x3f4)) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                                   (0x41c,pFVar1,(int *)(lVar22 + 0x3f4));
              }
              *(int *)(lVar22 + 0x3f0) = iVar25 + 1;
              uVar5 = *(undefined4 *)(lVar27 + 0x38 + lVar37);
              pFVar29 = pFVar1;
              if (*(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000) !=
                  (ForElementType<Chaos::FSavedManifoldPoint> *)0x0) {
                pFVar29 = *(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000);
              }
              lVar28 = (longlong)iVar25 * 0x1c;
              *(float *)(pFVar29->InlineData + lVar28) = (fVar7 - fVar8) * fVar40 + fVar16;
              *(float *)(pFVar29->InlineData + lVar28 + 4) = (fVar9 - fVar10) * fVar40 + fVar17;
              *(float *)(pFVar29->InlineData + lVar28 + 8) = (fVar11 - fVar12) * fVar40 + fVar18;
              *(float *)(pFVar29->InlineData + lVar28 + 0xc) = (fVar42 - fVar43) * fVar40 + fVar13;
              *(float *)(pFVar29->InlineData + lVar28 + 0x10) = (fVar2 - fVar3) * fVar40 + fVar14;
              *(float *)(pFVar29->InlineData + lVar28 + 0x14) = (fVar4 - fVar6) * fVar40 + fVar15;
              fVar43 = __real_3f7ff972;
              *(undefined4 *)(pFVar29->InlineData + lVar28 + 0x18) = uVar5;
            }
            else if (*(int *)(lVar22 + 0x5b0) < 8) {
              iVar25 = *(int *)(lVar22 + 0x3f0);
              if (iVar25 == *(int *)(lVar22 + 0x3f4)) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                                   (0x41c,pFVar1,(int *)(lVar22 + 0x3f4));
              }
              *(int *)(lVar22 + 0x3f0) = iVar25 + 1;
              uVar5 = *(undefined4 *)(lVar27 + 0x38 + lVar37);
              pFVar29 = pFVar1;
              if (*(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000) !=
                  (ForElementType<Chaos::FSavedManifoldPoint> *)0x0) {
                pFVar29 = *(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000);
              }
              lVar28 = (longlong)iVar25 * 0x1c;
              *(undefined8 *)(pFVar29->InlineData + lVar28) = *(undefined8 *)(lVar27 + lVar37);
              *(undefined4 *)(pFVar29->InlineData + lVar28 + 8) =
                   *(undefined4 *)(lVar27 + 8 + lVar37);
              *(undefined8 *)(pFVar29->InlineData + lVar28 + 0xc) =
                   *(undefined8 *)(lVar27 + 0xc + lVar37);
              uVar20 = *(undefined4 *)(lVar27 + 0x14 + lVar37);
              *(undefined4 *)(pFVar29->InlineData + lVar28 + 0x18) = uVar5;
              *(undefined4 *)(pFVar29->InlineData + lVar28 + 0x14) = uVar20;
            }
            bVar26 = 0;
          }
          else {
            iVar25 = *(int *)(lVar22 + 0x3f0);
            if (iVar25 == *(int *)(lVar22 + 0x3f4)) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<Chaos::FSavedManifoldPoint>_>
                                 (0x41c,pFVar1,(int *)(lVar22 + 0x3f4));
            }
            *(int *)(lVar22 + 0x3f0) = iVar25 + 1;
            uVar5 = *(undefined4 *)(lVar27 + 0x38 + lVar37);
            pFVar29 = pFVar1;
            if (*(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000) !=
                (ForElementType<Chaos::FSavedManifoldPoint> *)0x0) {
              pFVar29 = *(ForElementType<Chaos::FSavedManifoldPoint> **)(lVar22 + 1000);
            }
            lVar28 = (longlong)iVar25 * 0x1c;
            *(undefined8 *)(pFVar29->InlineData + lVar28) = *(undefined8 *)(lVar27 + 0x3c + lVar37);
            *(undefined4 *)(pFVar29->InlineData + lVar28 + 8) =
                 *(undefined4 *)(lVar27 + 0x44 + lVar37);
            *(undefined8 *)(pFVar29->InlineData + lVar28 + 0xc) =
                 *(undefined8 *)(lVar27 + 0x48 + lVar37);
            uVar20 = *(undefined4 *)(lVar27 + 0x50 + lVar37);
            *(undefined4 *)(pFVar29->InlineData + lVar28 + 0x18) = uVar5;
            *(undefined4 *)(pFVar29->InlineData + lVar28 + 0x14) = uVar20;
            bVar26 = 2;
          }
          fVar42 = __real_38d1b717;
          uVar38 = uVar38 + 1;
          *(float *)(lVar22 + 0x120) = local_120 * fVar41 + fVar45 + *(float *)(lVar22 + 0x120);
          *(float *)(lVar22 + 0x128) = fVar41 * local_128 + fVar44 + *(float *)(lVar22 + 0x128);
          *(float *)(lVar22 + 0x124) = fVar41 * local_124 + fVar46 + *(float *)(lVar22 + 0x124);
          bVar19 = (pTVar32->AllocatorInstance).InlineData[local_100 + 0x18];
          *(ulonglong *)((pTVar32->AllocatorInstance).InlineData + local_100) =
               CONCAT44(local_124,local_120);
          *(float *)((pTVar32->AllocatorInstance).InlineData + local_100 + 8) = local_128;
          (pTVar32->AllocatorInstance).InlineData[local_100 + 0x18] = bVar19 & 0xfd | bVar26 | 1;
          *(ulonglong *)((pTVar32->AllocatorInstance).InlineData + local_100 + 0xc) =
               CONCAT44(fVar46,fVar45);
          *(float *)((pTVar32->AllocatorInstance).InlineData + local_100 + 0x14) = fVar44;
          local_100 = local_100 + 0x1c;
          fVar40 = *(float *)(lVar27 + 0x38 + lVar37);
          lVar37 = lVar37 + 0x6c;
          if (*(float *)(lVar22 + 0x638) <= fVar40) {
            fVar40 = *(float *)(lVar22 + 0x638);
          }
          *(float *)(lVar22 + 0x638) = fVar40;
          fVar40 = __real_3f800000;
          uVar33 = local_res18;
        } while ((int)uVar38 < *(int *)(lVar22 + 0x5b0));
      }
      local_res18 = uVar33 + 1;
      uVar36 = (ulonglong)local_res18;
      *(undefined8 *)(pFVar21 + lVar30 + 0x10) = 0;
      uVar34 = uVar34 + 1;
      *(undefined8 *)(pFVar21 + lVar30 + 0x28) = 0;
      *(undefined4 *)(pFVar21 + lVar30 + 0x40) = 0;
      lVar30 = lVar30 + 0x338;
    } while ((int)local_res18 < param_3);
  }
  return;
}

// SolvePositionImpl @ 143a15410

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::SolvePositionImpl
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3,
          int param_4,int param_5,FPBDCollisionSolverSettings *param_6)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_Collisions_Apply> FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  FColor_u_0 local_b8 [2];
  FName local_b0;
  LARGE_INTEGER local_a8;
  FName local_a0;
  FName local_98;
  FStatMessage local_88;
  TArrayView<Chaos::Private::FPBDCollisionSolverJacobi,int> local_78;
  TArrayView<Chaos::Private::FPBDCollisionSolverJacobi,int> local_68 [3];
  
  uVar14 = 0;
  FVar11 = StatPtr_STAT_Collisions_Apply;
  if (StatPtr_STAT_Collisions_Apply == (FThreadSafeStaticStat<FStat_STAT_Collisions_Apply>)0x0) {
    pFVar10 = ::FName::FName(&local_a0,"STAT_Collisions_Apply");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_Collisions_Apply>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_Apply,*pFVar10,
                        L"Collisions::Apply","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_98.ComparisonIndex.Value = 0;
  local_98.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar16 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar12.Value;
        local_b0.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                   ,0x1de);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_a8.s.LowPart = FVar12.Value;
      local_a8.s.HighPart = uVar16;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_143a15570;
    }
  }
  bVar5 = false;
  FVar13 = local_98;
LAB_143a15570:
  if ((CVars::bChaos_PBDCollisionSolver_Position_SolveEnabled == false) || (param_5 <= param_4)) {
    bVar7 = false;
  }
  else {
    if (param_2 == param_3 - param_6->NumPositionShockPropagationIterations) {
      lVar15 = (longlong)param_4 * 0x338;
      uVar16 = param_4;
      do {
        uVar9 = uVar14;
        if ((int)uVar16 < (this->CollisionSolvers).ArrayNum) {
          uVar9 = ~uVar16 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return (bool)uVar8;
        }
        FPBDCollisionSolverJacobi::SetShockPropagationInvMassScale
                  ((FPBDCollisionSolverJacobi *)
                   ((this->CollisionSolvers).AllocatorInstance.Data + lVar15),
                   CVars::Chaos_PBDCollisionSolver_Position_MinInvMassScale);
        uVar16 = uVar16 + 1;
        lVar15 = lVar15 + 0x338;
      } while ((int)uVar16 < param_5);
    }
    if (((param_2 == 0) &&
        ((this->ConstraintContainer->DetectorSettings).bDeferNarrowPhase != false)) ||
       (this->bPerIterationCollisionDetection != false)) {
      UpdateCollisions(this,param_1,param_4,param_5);
    }
    fVar18 = (float)param_1;
    if (param_6->MaxPushOutVelocity <= 0.0) {
      fVar17 = 0.0;
    }
    else {
      fVar17 = ((float)param_6->MaxPushOutVelocity * fVar18) / (float)param_3;
    }
    iVar2 = (this->CollisionSolvers).ArrayNum;
    if (param_2 < param_3 - param_6->NumPositionFrictionIterations) {
      if (param_4 < iVar2) {
        uVar14 = (uint)~param_4 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      local_68[0].DataPtr =
           (FPBDCollisionSolverJacobi *)
           ((this->CollisionSolvers).AllocatorInstance.Data + (longlong)param_4 * 0x338);
      local_68[0].ArrayNum = param_5 - param_4;
      if ((local_68[0].ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      FPBDCollisionSolverJacobiHelper::SolvePositionNoFriction(local_68,fVar18,fVar17);
      bVar7 = true;
    }
    else {
      if (param_4 < iVar2) {
        uVar14 = (uint)~param_4 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      local_78.DataPtr =
           (FPBDCollisionSolverJacobi *)
           ((this->CollisionSolvers).AllocatorInstance.Data + (longlong)param_4 * 0x338);
      local_78.ArrayNum = param_5 - param_4;
      if ((local_78.ArrayNum < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        uVar8 = (*pcVar3)();
        return (bool)uVar8;
      }
      FPBDCollisionSolverJacobiHelper::SolvePositionWithFriction(&local_78,fVar18,fVar17);
      bVar7 = true;
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a8);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_a8.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_a8.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_a8.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_a8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar7;
}

// SolveVelocityImpl @ 143a1a6a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::SolveVelocityImpl
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3,
          int param_4,int param_5,FPBDCollisionSolverSettings *param_6)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FColor_u_0 local_a8 [2];
  FName local_a0;
  LARGE_INTEGER local_98;
  FName local_90;
  FName local_88;
  FStatMessage local_78;
  TArrayView<Chaos::Private::FPBDCollisionSolverJacobi,int> local_68 [3];
  
  uVar16 = 0;
  FVar12 = StatPtr_STAT_Collisions_ApplyPushOut;
  if (StatPtr_STAT_Collisions_ApplyPushOut ==
      (FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut>)0x0) {
    pFVar11 = ::FName::FName(&local_90,"STAT_Collisions_ApplyPushOut");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Collisions_ApplyPushOut>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Collisions_ApplyPushOut,*pFVar11,
                        L"Collisions::ApplyPushOut","STATGROUP_ChaosCollision","STATCAT_Advanced",
                        L"ChaosCollision",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar12;
  bVar4 = false;
  bVar6 = false;
  local_88.ComparisonIndex.Value = 0;
  local_88.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar15 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_a8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar13.Value;
        local_a0.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Collision\\PBDCollisionContainerSolverJacobi.cpp"
                   ,0x209);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98.s.LowPart = FVar13.Value;
      local_98.s.HighPart = uVar15;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar5 = true;
      goto LAB_143a1a7fd;
    }
  }
  bVar5 = false;
  FVar14 = local_88;
LAB_143a1a7fd:
  fVar7 = __real_3f800000;
  if ((CVars::bChaos_PBDCollisionSolver_Velocity_SolveEnabled == false) || (param_5 <= param_4)) {
    bVar8 = false;
  }
  else {
    if (param_2 == param_3 - param_6->NumVelocityShockPropagationIterations) {
      lVar17 = (longlong)param_4 * 0x338;
      uVar15 = param_4;
      do {
        uVar10 = uVar16;
        if ((int)uVar15 < (this->CollisionSolvers).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        FPBDCollisionSolverJacobi::SetShockPropagationInvMassScale
                  ((FPBDCollisionSolverJacobi *)
                   ((this->CollisionSolvers).AllocatorInstance.Data + lVar17),
                   CVars::Chaos_PBDCollisionSolver_Velocity_MinInvMassScale);
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 0x338;
      } while ((int)uVar15 < param_5);
    }
    else if (param_2 == 0) {
      lVar17 = (longlong)param_4 * 0x338;
      uVar15 = param_4;
      do {
        uVar10 = uVar16;
        if ((int)uVar15 < (this->CollisionSolvers).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        FPBDCollisionSolverJacobi::SetShockPropagationInvMassScale
                  ((FPBDCollisionSolverJacobi *)
                   ((this->CollisionSolvers).AllocatorInstance.Data + lVar17),fVar7);
        uVar15 = uVar15 + 1;
        lVar17 = lVar17 + 0x338;
      } while ((int)uVar15 < param_5);
    }
    iVar2 = param_6->NumVelocityFrictionIterations;
    if (param_4 < (this->CollisionSolvers).ArrayNum) {
      uVar16 = (uint)~param_4 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    local_68[0].DataPtr =
         (FPBDCollisionSolverJacobi *)
         ((this->CollisionSolvers).AllocatorInstance.Data + (longlong)param_4 * 0x338);
    local_68[0].ArrayNum = param_5 - param_4;
    if ((local_68[0].ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return (bool)uVar9;
    }
    FPBDCollisionSolverJacobiHelper::SolveVelocity
              (local_68,(float)param_1,param_3 - iVar2 <= param_2);
    bVar8 = true;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_78.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_98);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_78);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar8;
}

// UpdateCollisions @ 143a1fad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::UpdateCollisions
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3)

{
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  double adVar22 [2];
  double adVar23 [2];
  float fVar24;
  bool bVar25;
  byte bVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  TRotation<double,3> *pTVar30;
  TVector<double> *pTVar31;
  TQuat<double> *this_00;
  FSolverBody *pFVar32;
  FSolverBody *pFVar33;
  FManifoldPoint *pFVar34;
  TVector<double> *pTVar35;
  TVector<double> *pTVar36;
  FManifoldPoint *pFVar37;
  ForElementType<Chaos::FManifoldPoint> FVar38;
  uint uVar39;
  FConstraintSolverBody *pFVar40;
  longlong lVar41;
  longlong lVar42;
  TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4> *pTVar43;
  ForElementType<Chaos::FManifoldPoint> FVar44;
  uint uVar45;
  ulonglong uVar46;
  FPBDCollisionConstraint *this_01;
  longlong lVar47;
  ulonglong uVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar88;
  double dVar89;
  double dVar90;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar91;
  float fVar92;
  double dVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auStack_6c8 [32];
  ulonglong local_6a8;
  longlong local_6a0;
  char local_698;
  float local_694;
  float local_690;
  float local_68c;
  float local_688;
  float local_684;
  float local_680;
  float local_67c;
  float local_678;
  float local_674;
  float local_670;
  float local_66c;
  float local_668;
  float local_664;
  uint local_660;
  TVector<float>_u_0 local_658;
  longlong local_648;
  float local_640;
  float local_63c;
  double local_638;
  TTransform<double> *local_630;
  TTransform<double> *local_628;
  int local_620;
  FScriptContainerElement *local_618;
  longlong local_610;
  ulonglong local_608;
  longlong local_600;
  FPBDCollisionConstraint *local_5f8;
  FConstraintSolverBody *local_5f0;
  FConstraintSolverBody *local_5e8;
  FPBDCollisionContainerSolverJacobi *local_5e0;
  double local_5d8;
  double dStack_5d0;
  undefined8 local_5c8;
  undefined1 local_5b8 [16];
  TVector<double>_u_0 local_5a8;
  undefined1 local_588 [16];
  TVector<double>_u_0 local_578;
  TVector<double>_u_0 local_558;
  TVector<double>_u_0 local_538;
  TVector<double>_u_0 local_520;
  undefined1 local_508 [32];
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_4d0;
  double dStack_4c8;
  double local_4c0;
  undefined1 local_4b8 [16];
  double local_4a8;
  undefined1 local_4a0 [16];
  double local_490;
  undefined1 local_488 [16];
  double local_478;
  TVector<double>_u_0 local_468;
  double local_448;
  double dStack_440;
  undefined1 local_438 [16];
  TVector<double> local_428;
  TVector<double> local_410;
  TVector<double> local_3f8;
  TVector<double> local_3e0;
  TVector<double> local_3c8;
  TRotation<double,3> local_3a8;
  TRotation<double,3> local_388;
  TRotation<double,3> local_368;
  TRotation<double,3> local_348;
  TTransform<double> local_328;
  TTransform<double> local_2c8;
  TTransform<double> local_268;
  TTransform<double> local_208;
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
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_6c8;
  uVar46 = (ulonglong)param_2;
  local_698 = (this->ConstraintContainer->DetectorSettings).bDeferNarrowPhase;
  local_678 = (float)param_1;
  if (param_2 < param_3) {
    lVar47 = uVar46 * 0x338;
    uVar48 = uVar46;
    local_660 = param_2;
    local_620 = param_3;
    local_5e0 = this;
    do {
      uVar45 = (uint)uVar46;
      uVar28 = 0;
      local_608 = uVar48;
      local_600 = lVar47;
      if (local_698 == '\0') {
        iVar29 = (this->bCollisionConstraintPerIterationCollisionDetection).ArrayNum;
        uVar27 = uVar28;
        if ((int)uVar45 < iVar29) {
          uVar27 = ~uVar45 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (local_6a8 = uVar48, local_6a0 = (longlong)iVar29,
           bVar25 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar25)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((this->bCollisionConstraintPerIterationCollisionDetection).AllocatorInstance.Data
            [uVar48] != (FScriptContainerElement)0x0) goto LAB_143a1fbfc;
      }
      else {
LAB_143a1fbfc:
        iVar29 = (this->CollisionSolvers).ArrayNum;
        uVar39 = ~uVar45 >> 0x1f;
        uVar27 = uVar28;
        if ((int)uVar45 < iVar29) {
          uVar27 = uVar39;
        }
        if ((uVar27 == 0) &&
           (local_6a8 = uVar48, local_6a0 = (longlong)iVar29,
           bVar25 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar25)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar29 = (this->CollisionConstraints).ArrayNum;
        pFVar4 = (this->CollisionSolvers).AllocatorInstance.Data;
        if ((int)uVar45 < iVar29) {
          uVar28 = uVar39;
        }
        local_618 = pFVar4;
        if ((uVar28 == 0) &&
           (local_6a8 = uVar48, local_6a0 = (longlong)iVar29,
           bVar25 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar25)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar40 = (FConstraintSolverBody *)(pFVar4 + lVar47 + 0x10);
        this_01 = *(FPBDCollisionConstraint **)
                   ((this->CollisionConstraints).AllocatorInstance.Data + uVar48 * 8);
        local_5f8 = this_01;
        local_5e8 = pFVar40;
        if ((pFVar40->Body == (FSolverBody *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                ,0x246,L""), bVar25)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar32 = pFVar40->Body;
        pFVar40 = (FConstraintSolverBody *)(pFVar4 + lVar47 + 0x28);
        local_5f0 = pFVar40;
        if ((pFVar40->Body == (FSolverBody *)0x0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Evolution\\SolverBody.h"
                                ,0x246,L""), bVar25)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar33 = pFVar40->Body;
        pTVar30 = FSolverBody::CorrectedQ(pFVar32,&local_3a8);
        dVar9 = *(double *)&(pFVar32->State).RoM.field_0x10 *
                GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar10 = *(double *)&(pFVar32->State).RoM.field_0x18 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar82 = *(double *)&(pFVar32->State).RoM *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar88 = *(double *)&(pFVar32->State).RoM.field_0x8 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar19 = *(double *)pTVar30;
        dVar20 = *(double *)&pTVar30->field_0x8;
        auVar66._8_4_ = SUB84(dVar10,0);
        auVar66._0_8_ = dVar9;
        auVar66._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar74 = *(undefined1 (*) [16])&pTVar30->field_0x10;
        fVar78 = *(float *)&(pFVar32->State).DP.field_0x8;
        fVar91 = *(float *)&(pFVar32->State).DP.field_0x4;
        auVar58._8_4_ = SUB84(dVar88,0);
        auVar58._0_8_ = dVar82;
        auVar58._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
        fVar80 = *(float *)&(pFVar32->State).DP;
        dVar16 = auVar74._8_8_;
        auVar69._8_4_ = auVar74._8_4_;
        auVar69._0_8_ = dVar16;
        auVar69._12_4_ = auVar74._12_4_;
        dVar11 = auVar74._0_8_;
        dVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
        dVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        auVar53._8_4_ = auVar74._0_4_;
        auVar53._0_8_ = dVar11;
        auVar53._12_4_ = auVar74._4_4_;
        dVar70 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar93 = *(double *)&(pFVar32->State).P.field_0x10;
        dVar2 = *(double *)&(pFVar32->State).P.field_0x8;
        dVar49 = *(double *)&(pFVar32->State).P;
        dVar17 = dVar19 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar69._8_8_ * dVar88 +
                 dVar20 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar53._8_8_ * dVar82 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar18 = dVar19 * dVar82 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar16 * dVar10 +
                 dVar20 * dVar88 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        pTVar30 = FSolverBody::CorrectedQ(pFVar32,&local_388);
        auVar74 = *(undefined1 (*) [16])pTVar30;
        auVar69 = *(undefined1 (*) [16])&pTVar30->field_0x10;
        dVar83 = *(double *)&(pFVar32->State).RoM.field_0x10 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar89 = *(double *)&(pFVar32->State).RoM.field_0x18 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar90 = *(double *)&(pFVar32->State).RoM *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar15 = *(double *)&(pFVar32->State).RoM.field_0x8 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        dVar88 = auVar74._0_8_;
        auVar71._8_4_ = SUB84(dVar89,0);
        auVar71._0_8_ = dVar83;
        auVar71._12_4_ = (int)((ulonglong)dVar89 >> 0x20);
        dVar84 = auVar69._8_8_;
        auVar59._8_4_ = auVar74._0_4_;
        auVar59._0_8_ = dVar88;
        auVar59._12_4_ = auVar74._4_4_;
        auVar61._8_4_ = auVar69._8_4_;
        auVar61._0_8_ = dVar84;
        auVar61._12_4_ = auVar69._12_4_;
        dVar13 = auVar74._8_8_;
        auVar67._8_4_ = SUB84(dVar15,0);
        auVar67._0_8_ = dVar90;
        auVar67._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
        dVar14 = auVar69._0_8_;
        auVar74._8_4_ = auVar69._0_4_;
        auVar74._0_8_ = dVar14;
        auVar74._12_4_ = auVar69._4_4_;
        local_578._s_0.Z = (double)*(undefined8 *)&(pFVar32->State).CoM.field_0x10;
        local_508._0_8_ =
             dVar88 * auVar71._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] + dVar84 * dVar90 +
             dVar13 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar14 * auVar67._8_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_508._8_8_ =
             auVar59._8_8_ * dVar83 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
             auVar61._8_8_ * dVar15 +
             dVar13 * dVar89 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             auVar74._8_8_ * dVar90 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        local_578._s_0.X = (double)*(undefined8 *)&(pFVar32->State).CoM;
        local_578._s_0.Y = (double)*(undefined8 *)&(pFVar32->State).CoM.field_0x8;
        dVar10 = dVar88 * auVar67._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar84 * dVar83 +
                 dVar13 * dVar90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar14 * auVar71._8_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar88 = dVar88 * dVar90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar84 * dVar89 +
                 dVar13 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar14 * dVar83 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        uVar77 = SUB84(dVar88,0);
        uVar75 = (undefined4)((ulonglong)dVar88 >> 0x20);
        local_438._8_4_ = uVar77;
        local_438._0_8_ = dVar10;
        local_438._12_4_ = uVar75;
        local_508._24_4_ = uVar77;
        local_508._16_8_ = dVar10;
        local_508._28_4_ = uVar75;
        local_448 = (double)local_508._0_8_;
        dStack_440 = (double)local_508._8_8_;
        pTVar31 = UE::Math::TQuat<double>::RotateVector
                            ((TQuat<double> *)local_508,&local_428,
                             (TVector<double> *)&local_578._s_0);
        adVar22 = ___xmm_3ff00000000000003ff0000000000000;
        uVar21 = _UNK_15068951c;
        uVar76 = _UNK_150689518;
        uVar75 = _UNK_150689514;
        uVar77 = ___xmm_00000000000000003ff0000000000000;
        local_4e8 = (pTVar31->field0_0x0)._s_0.X;
        dStack_4e0 = (pTVar31->field0_0x0)._s_0.Y;
        local_4d8 = (pTVar31->field0_0x0)._s_0.Z;
        local_268.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar17,0);
        local_268.Rotation.XY.m128d_f64[0] =
             dVar19 * auVar66._8_8_ * dVar57 + dVar16 * dVar82 + dVar20 * dVar9 * dVar70 +
             dVar11 * auVar58._8_8_ * dVar7;
        local_268.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar17 >> 0x20);
        local_268.Translation.ZW.m128d_f64[0] = ((double)fVar78 + dVar93) - local_4d8;
        dVar93 = ((double)fVar91 + dVar2) - dStack_4e0;
        local_268.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar18,0);
        local_268.Rotation.ZW.m128d_f64[0] =
             dVar19 * auVar58._8_8_ * dVar65 + dVar16 * dVar9 + dVar20 * dVar82 * dVar6 +
             dVar11 * auVar66._8_8_ * dVar8;
        local_268.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
        local_268.Scale3D.ZW.m128d_f64[0]._0_4_ = ___xmm_00000000000000003ff0000000000000;
        local_268.Scale3D.ZW.m128d_f64[0]._4_4_ = _UNK_150689514;
        local_268.Scale3D.ZW.m128d_f64[1]._0_4_ = _UNK_150689518;
        local_268.Scale3D.ZW.m128d_f64[1]._4_4_ = _UNK_15068951c;
        local_268.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar93,0);
        local_268.Translation.XY.m128d_f64[0] = ((double)fVar80 + dVar49) - local_4e8;
        local_268.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar93 >> 0x20);
        local_268.Translation.ZW.m128d_f64[1] = 0.0;
        local_268.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_268.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        pTVar30 = FSolverBody::CorrectedQ(pFVar33,&local_368);
        dVar10 = *(double *)&(pFVar33->State).RoM.field_0x10 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
        dVar88 = *(double *)&(pFVar33->State).RoM.field_0x18 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
        dVar13 = *(double *)pTVar30;
        dVar14 = *(double *)&pTVar30->field_0x8;
        auVar74 = *(undefined1 (*) [16])&pTVar30->field_0x10;
        dVar84 = *(double *)&(pFVar33->State).RoM *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
        dVar90 = *(double *)&(pFVar33->State).RoM.field_0x8 *
                 GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
        auVar68._8_4_ = SUB84(dVar88,0);
        auVar68._0_8_ = dVar10;
        auVar68._12_4_ = (int)((ulonglong)dVar88 >> 0x20);
        dVar11 = auVar74._8_8_;
        auVar50._8_4_ = auVar74._8_4_;
        auVar50._0_8_ = dVar11;
        auVar50._12_4_ = auVar74._12_4_;
        auVar60._8_4_ = SUB84(dVar90,0);
        auVar60._0_8_ = dVar84;
        auVar60._12_4_ = (int)((ulonglong)dVar90 >> 0x20);
        dVar57 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
        dVar9 = auVar74._0_8_;
        auVar51._8_4_ = auVar74._0_4_;
        auVar51._0_8_ = dVar9;
        auVar51._12_4_ = auVar74._4_4_;
        dVar65 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        dVar70 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        fVar78 = *(float *)&(pFVar33->State).DP.field_0x8;
        fVar91 = *(float *)&(pFVar33->State).DP;
        dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar16 = dVar13 * dVar84 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar11 * dVar88 +
                 dVar14 * dVar90 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar9 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        fVar80 = *(float *)&(pFVar33->State).DP.field_0x4;
        dVar93 = *(double *)&(pFVar33->State).P.field_0x10;
        dVar2 = *(double *)&(pFVar33->State).P.field_0x8;
        dVar49 = *(double *)&(pFVar33->State).P;
        dVar88 = dVar13 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 auVar50._8_8_ * dVar90 +
                 dVar14 * dVar88 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 auVar51._8_8_ * dVar84 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        this_00 = (TQuat<double> *)FSolverBody::CorrectedActorQ(pFVar33,&local_348);
        local_558._s_0.X = (double)*(undefined8 *)&(pFVar33->State).CoM;
        local_558._s_0.Y = (double)*(undefined8 *)&(pFVar33->State).CoM.field_0x8;
        local_558._s_0.Z = (double)*(undefined8 *)&(pFVar33->State).CoM.field_0x10;
        pTVar31 = UE::Math::TQuat<double>::RotateVector
                            (this_00,&local_410,(TVector<double> *)&local_558._s_0);
        adVar23 = ___xmm_3ff00000000000003ff0000000000000;
        local_4d0 = (pTVar31->field0_0x0)._s_0.X;
        dStack_4c8 = (pTVar31->field0_0x0)._s_0.Y;
        local_4c0 = (pTVar31->field0_0x0)._s_0.Z;
        local_208.Translation.ZW.m128d_f64[0] = ((double)fVar78 + dVar93) - local_4c0;
        dVar93 = ((double)fVar80 + dVar2) - dStack_4c8;
        local_208.Rotation.XY.m128d_f64[1]._0_4_ = SUB84(dVar88,0);
        local_208.Rotation.XY.m128d_f64[0] =
             dVar13 * auVar68._8_8_ * dVar57 + dVar11 * dVar84 + dVar14 * dVar10 * dVar65 +
             dVar9 * auVar60._8_8_ * dVar70;
        local_208.Rotation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar88 >> 0x20);
        local_208.Rotation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar16,0);
        local_208.Rotation.ZW.m128d_f64[0] =
             dVar13 * auVar60._8_8_ * dVar6 + dVar11 * dVar10 + dVar14 * dVar84 * dVar7 +
             dVar9 * auVar68._8_8_ * dVar8;
        local_208.Rotation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar16 >> 0x20);
        ___xmm_3ff00000000000003ff0000000000000 = adVar22[0];
        _UNK_150689688 = adVar22[1];
        local_208.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_208.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        local_208.Scale3D.ZW.m128d_f64[0]._0_4_ = uVar77;
        local_208.Scale3D.ZW.m128d_f64[0]._4_4_ = uVar75;
        local_208.Scale3D.ZW.m128d_f64[1]._0_4_ = uVar76;
        local_208.Scale3D.ZW.m128d_f64[1]._4_4_ = uVar21;
        local_208.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar93,0);
        local_208.Translation.XY.m128d_f64[0] = ((double)fVar91 + dVar49) - local_4d0;
        local_208.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar93 >> 0x20);
        local_208.Translation.ZW.m128d_f64[1] = 0.0;
        local_328.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_328.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_328.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_328.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_328.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_328.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_328.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_328.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_328.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_328.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_328.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_328.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_328.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_328.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        ___xmm_3ff00000000000003ff0000000000000 = adVar23;
        UE::Math::TTransform<double>::Multiply
                  (&local_328,(TTransform<double> *)this_01->ImplicitTransform,&local_268);
        local_148 = local_328.Rotation.XY.m128d_f64[0];
        dStack_140 = local_328.Rotation.XY.m128d_f64[1];
        local_138 = local_328.Rotation.ZW.m128d_f64[0];
        dStack_130 = local_328.Rotation.ZW.m128d_f64[1];
        local_128 = local_328.Translation.XY.m128d_f64[0];
        dStack_120 = local_328.Translation.XY.m128d_f64[1];
        local_118 = local_328.Translation.ZW.m128d_f64[0];
        dStack_110 = local_328.Translation.ZW.m128d_f64[1];
        local_108 = local_328.Scale3D.XY.m128d_f64[0];
        dStack_100 = local_328.Scale3D.XY.m128d_f64[1];
        local_2c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_2c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
        local_2c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_2c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_f8 = local_328.Scale3D.ZW.m128d_f64[0];
        dStack_f0 = local_328.Scale3D.ZW.m128d_f64[1];
        local_2c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_2c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3]
        ;
        local_2c8.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_2c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_2c8.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_2c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_2c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_2c8.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_2c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_2c8.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UE::Math::TTransform<double>::Multiply
                  (&local_2c8,(TTransform<double> *)(this_01->ImplicitTransform + 1),&local_208);
        local_1a8 = local_2c8.Rotation.XY.m128d_f64[0];
        dStack_1a0 = local_2c8.Rotation.XY.m128d_f64[1];
        local_198 = local_2c8.Rotation.ZW.m128d_f64[0];
        dStack_190 = local_2c8.Rotation.ZW.m128d_f64[1];
        local_188 = local_2c8.Translation.XY.m128d_f64[0];
        dStack_180 = local_2c8.Translation.XY.m128d_f64[1];
        local_178 = local_2c8.Translation.ZW.m128d_f64[0];
        dStack_170 = local_2c8.Translation.ZW.m128d_f64[1];
        local_168 = local_2c8.Scale3D.XY.m128d_f64[0];
        dStack_160 = local_2c8.Scale3D.XY.m128d_f64[1];
        local_158 = local_2c8.Scale3D.ZW.m128d_f64[0];
        dStack_150 = local_2c8.Scale3D.ZW.m128d_f64[1];
        bVar26 = *(byte *)&this_01->Flags;
        this_01->SolverBodies[0] = pFVar32;
        this_01->SolverBodies[1] = pFVar33;
        if ((bVar26 >> 2 & 1) == 0) {
          FPBDCollisionConstraint::ResetActiveManifoldContacts(this_01);
          *(undefined4 *)(pFVar4 + lVar47 + 0x40) = 0;
        }
        fVar78 = local_678;
        uVar46 = (ulonglong)(this_01->ManifoldPoints).ArrayNum;
        this_01->ClosestManifoldPointIndex = -1;
        Collisions::UpdateConstraint
                  (this_01,(TRigidTransform<double,3> *)&local_148,
                   (TRigidTransform<double,3> *)&local_1a8,(double)local_678);
        lVar41 = (longlong)(this_01->ManifoldPoints).ArrayNum;
        pFVar32 = FConstraintSolverBody::SolverBody
                            ((FConstraintSolverBody *)(pFVar4 + lVar47 + 0x10));
        pFVar33 = FConstraintSolverBody::SolverBody(pFVar40);
        if ((longlong)uVar46 < lVar41) {
          lVar42 = uVar46 * 0x6c;
          local_648 = lVar41 - uVar46;
          FVar44 = (ForElementType<Chaos::FManifoldPoint>)&this_01->ManifoldPoints;
          do {
            uVar45 = (uint)uVar46;
            uVar28 = 0;
            if ((int)uVar45 < *(int *)((longlong)FVar44 + 0x1b8)) {
              uVar28 = ~uVar45 >> 0x1f;
            }
            local_610 = lVar42;
            if (uVar28 == 0) {
              local_6a8 = (ulonglong)(int)uVar45;
              local_6a0 = (longlong)*(int *)((longlong)FVar44 + 0x1b8);
              bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar25) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            FVar38 = FVar44;
            if (*(ForElementType<Chaos::FManifoldPoint> *)((longlong)FVar44 + 0x1b0) !=
                (ForElementType<Chaos::FManifoldPoint>)0x0) {
              FVar38 = *(ForElementType<Chaos::FManifoldPoint> *)((longlong)FVar44 + 0x1b0);
            }
            if ((*(byte *)(lVar42 + 0x30 + (longlong)FVar38) & 1) == 0) {
              iVar29 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                       ::AddUninitialized((TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                                           *)(local_618 + lVar47 + 0x40));
              pFVar34 = FPBDCollisionConstraint::GetManifoldPoint(this_01,uVar45);
              fVar91 = (this_01->Material).Restitution;
              local_630 = (TTransform<double> *)(this_01->ShapeWorldTransforms + 1);
              local_628 = (TTransform<double> *)this_01->ShapeWorldTransforms;
              local_640 = fVar78 * (this_01->Material).RestitutionThreshold;
              auVar74 = *(undefined1 (*) [16])&this_01->ShapeWorldTransforms[0].field_0x10;
              dVar65 = *(double *)&this_01->ShapeWorldTransforms[0].field_0x18;
              local_4a8 = (double)*(float *)&(pFVar34->ContactPoint).ShapeContactPoints[0].field_0x8
              ;
              dVar70 = (double)*(float *)&(pFVar34->ContactPoint).ShapeContactPoints[0].field_0x4;
              local_468._0_16_ =
                   *(undefined1 (*) [16])&((TRigidTransform<double,3> *)local_628)->field_0x0;
              auVar61 = blendpd(local_468._0_16_,auVar74,2);
              dVar2 = (double)*(float *)(pFVar34->ContactPoint).ShapeContactPoints;
              auVar69 = *(undefined1 (*) [16])&((TRigidTransform<double,3> *)local_628)->field_0x0;
              uVar77 = SUB84(dVar70,0);
              uVar75 = (undefined4)((ulonglong)dVar70 >> 0x20);
              auVar85._8_4_ = uVar77;
              auVar85._0_8_ = dVar2;
              auVar85._12_4_ = uVar75;
              dVar93 = auVar74._0_8_;
              local_4b8._8_4_ = uVar77;
              local_4b8._0_8_ = dVar2;
              local_4b8._12_4_ = uVar75;
              auVar86._0_8_ = auVar85._8_8_ * local_468._0_8_ - local_468._8_8_ * dVar2;
              auVar86._8_8_ = local_4a8 * local_468._8_8_ - dVar93 * dVar70;
              auVar52._8_4_ = uVar77;
              auVar52._0_8_ = dVar2;
              auVar52._12_4_ = uVar75;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = local_4a8;
              auVar53 = blendpd(auVar52,auVar12,2);
              auVar54._0_8_ = auVar53._0_8_ * dVar93 - auVar61._0_8_ * local_4a8;
              auVar54._8_8_ = auVar53._8_8_ * auVar74._8_8_ - auVar61._8_8_ * 0.0;
              auVar53 = blendpd(auVar86,auVar54,2);
              dVar49 = auVar86._8_8_ + auVar86._8_8_;
              dVar57 = auVar54._0_8_ + auVar54._0_8_;
              uVar77 = (undefined4)((ulonglong)dVar57 >> 0x20);
              auVar87._0_8_ = auVar53._0_8_ + auVar53._0_8_;
              auVar87._8_8_ = auVar53._8_8_ + auVar53._8_8_;
              auVar72._8_4_ = SUB84(dVar57,0);
              auVar72._0_8_ = dVar49;
              auVar72._12_4_ = uVar77;
              auVar62._8_4_ = SUB84(dVar57,0);
              auVar62._0_8_ = dVar49;
              auVar62._12_4_ = uVar77;
              auVar53 = blendpd(auVar62,auVar87,2);
              auVar73._0_8_ = auVar72._8_8_ * auVar69._0_8_ - auVar69._8_8_ * dVar49;
              auVar73._8_8_ = auVar87._0_8_ * auVar69._8_8_ - dVar93 * dVar57;
              auVar55._8_4_ = SUB84(auVar73._8_8_,0);
              auVar55._0_8_ = auVar73._0_8_;
              auVar55._12_4_ = (int)((ulonglong)auVar73._8_8_ >> 0x20);
              auVar69 = blendpd(auVar69,auVar74,2);
              auVar63._0_8_ = auVar53._0_8_ * dVar93 - auVar69._0_8_ * auVar87._0_8_;
              auVar63._8_8_ = auVar53._8_8_ * auVar74._8_8_ - auVar69._8_8_ * auVar87._8_8_;
              uVar3 = *(undefined8 *)((pFVar34->ContactPoint).ShapeContactPoints + 1);
              local_538._s_0.X = (double)(float)uVar3;
              local_538._s_0.Y = (double)(float)((ulonglong)uVar3 >> 0x20);
              dVar2 = dVar49 * dVar65 + dVar2 + auVar55._8_8_ +
                      *(double *)&this_01->ShapeWorldTransforms[0].field_0x20;
              dVar49 = dVar57 * dVar65 + dVar70 + auVar63._0_8_ +
                       *(double *)&this_01->ShapeWorldTransforms[0].field_0x28;
              uVar77 = (undefined4)((ulonglong)dVar49 >> 0x20);
              auVar74 = blendpd(auVar73,auVar63,2);
              local_538._s_0.Z =
                   (double)*(float *)&(pFVar34->ContactPoint).ShapeContactPoints[1].field_0x8;
              dVar70 = auVar87._0_8_ * dVar65 + local_4a8 + auVar74._0_8_ +
                       *(double *)&this_01->ShapeWorldTransforms[0].field_0x30;
              local_4a0._8_4_ = SUB84(dVar49,0);
              local_4a0._0_8_ = dVar2;
              local_4a0._12_4_ = uVar77;
              pTVar31 = UE::Math::TTransform<double>::TransformPositionNoScale
                                  (local_630,&local_3f8,(TVector<double> *)&local_538._s_0);
              _local_5d8 = *(undefined1 (*) [16])&pTVar31->field0_0x0;
              local_638 = *(double *)((longlong)&pTVar31->field0_0x0 + 0x10);
              local_5b8._8_4_ = local_5d8._8_4_;
              local_5b8._0_8_ = local_5d8._8_8_;
              local_5b8._12_4_ = local_5d8._12_4_;
              dVar65 = (dVar2 + local_5d8) * __real_3fe0000000000000;
              local_588._8_4_ = SUB84(dVar49,0);
              local_588._0_8_ = dVar49;
              local_588._12_4_ = uVar77;
              dVar57 = (dVar49 + local_5d8._8_8_) * __real_3fe0000000000000;
              dVar93 = (dVar70 + local_638) * __real_3fe0000000000000;
              fVar94 = (float)(dVar65 - *(double *)&(pFVar32->State).P);
              local_674 = (float)(dVar57 - *(double *)&(pFVar32->State).P.field_0x8);
              local_690 = (float)(dVar93 - *(double *)&(pFVar32->State).P.field_0x10);
              local_68c = (float)(dVar65 - *(double *)&(pFVar33->State).P);
              local_688 = (float)(dVar57 - *(double *)&(pFVar33->State).P.field_0x8);
              local_684 = (float)(dVar93 - *(double *)&(pFVar33->State).P.field_0x10);
              uVar3 = *(undefined8 *)&(pFVar34->ContactPoint).ShapeContactNormal;
              local_520._s_0.X = (double)(float)uVar3;
              local_520._s_0.Y = (double)(float)((ulonglong)uVar3 >> 0x20);
              local_520._s_0.Z =
                   (double)*(float *)&(pFVar34->ContactPoint).ShapeContactNormal.field_0x8;
              local_63c = fVar94;
              local_490 = dVar70;
              local_488 = _local_5d8;
              local_478 = local_638;
              pTVar35 = UE::Math::TTransform<double>::TransformVectorNoScale
                                  ((TTransform<double> *)(this_01->ShapeWorldTransforms + 1),
                                   &local_3e0,(TVector<double> *)&local_520._s_0);
              uVar28 = __xmm_80000000800000008000000080000000;
              fVar80 = (float)(pTVar35->field0_0x0)._s_0.X;
              fVar78 = (float)(pTVar35->field0_0x0)._s_0.Z;
              local_658._s_0.Z = (float)((uint)fVar80 ^ __xmm_80000000800000008000000080000000);
              local_658._s_0.Y = 0.0;
              fVar96 = (float)(pTVar35->field0_0x0)._s_0.Y;
              local_680 = fVar80;
              local_670 = fVar78;
              local_658._s_0.X = fVar78;
              bVar25 = UE::Math::TVector<float>::Normalize
                                 ((TVector<float> *)&local_658._s_0,__real_38d1b717);
              local_694 = local_658._s_0.Y;
              local_67c = local_658._s_0.X;
              if (!bVar25) {
                fVar64 = (float)((uint)fVar78 ^ uVar28);
                local_67c = 0.0;
                fVar92 = __real_3f800000 / SQRT(fVar64 * fVar64 + fVar96 * fVar96);
                local_658._s_0.Z = fVar92 * fVar96;
                local_694 = fVar92 * fVar64;
              }
              uVar77 = local_658._s_0.Z;
              local_66c = fVar96 * local_658._s_0.Z - fVar78 * local_694;
              local_668 = fVar78 * local_67c - fVar80 * local_658._s_0.Z;
              local_664 = fVar80 * local_694 - fVar96 * local_67c;
              bVar26 = (pFVar34->Flags).Bits & 8;
              if ((bVar26 == 0) || (0.0 < fVar91)) {
                bVar25 = true;
              }
              else {
                bVar25 = false;
              }
              fVar91 = 0.0;
              fVar78 = 0.0;
              fVar80 = 0.0;
              if (bVar25) {
                fVar78 = *(float *)&(pFVar32->State).W.field_0x8;
                fVar80 = *(float *)&(pFVar32->State).W.field_0x4;
                fVar64 = *(float *)&(pFVar33->State).W.field_0x8;
                fVar92 = *(float *)&(pFVar33->State).W.field_0x4;
                fVar1 = *(float *)&(pFVar33->State).W;
                fVar91 = ((local_690 * fVar80 - local_674 * fVar78) + *(float *)&(pFVar32->State).V)
                         - ((fVar92 * local_684 - fVar64 * local_688) +
                           *(float *)&(pFVar33->State).V);
                fVar78 = ((fVar78 * fVar94 - local_690 * *(float *)&(pFVar32->State).W) +
                         *(float *)&(pFVar32->State).V.field_0x4) -
                         ((local_68c * fVar64 - fVar1 * local_684) +
                         *(float *)&(pFVar33->State).V.field_0x4);
                fVar80 = ((local_674 * *(float *)&(pFVar32->State).W - fVar80 * fVar94) +
                         *(float *)&(pFVar32->State).V.field_0x8) -
                         ((fVar1 * local_688 - local_68c * fVar92) +
                         *(float *)&(pFVar33->State).V.field_0x8);
              }
              if (bVar26 == 0) {
                uVar75 = SUB84(local_638,0);
                uVar76 = (undefined4)((ulonglong)local_638 >> 0x20);
                fVar64 = fVar91 * local_678;
                fVar94 = fVar78 * local_678;
                fVar92 = fVar80 * local_678;
                dVar93 = local_5d8;
              }
              else {
                dStack_5d0 = (double)(float)((ulonglong)*(undefined8 *)pFVar34->ShapeAnchorPoints >>
                                            0x20);
                local_5d8 = (double)(float)*(undefined8 *)pFVar34->ShapeAnchorPoints;
                local_5c8 = (undefined8)*(float *)&pFVar34->ShapeAnchorPoints[0].field_0x8;
                pTVar35 = UE::Math::TTransform<double>::TransformPositionNoScale
                                    (local_628,(TVector<double> *)&local_468._s_0,
                                     (TVector<double> *)&local_5d8);
                local_5a8._s_0.X = (double)*(float *)(pFVar34->ShapeAnchorPoints + 1);
                local_5a8._s_0.Y = (double)*(float *)&pFVar34->ShapeAnchorPoints[1].field_0x4;
                local_5a8._s_0.Z = (double)*(float *)&pFVar34->ShapeAnchorPoints[1].field_0x8;
                pTVar36 = UE::Math::TTransform<double>::TransformPositionNoScale
                                    (local_630,&local_3c8,(TVector<double> *)&local_5a8._s_0);
                dVar93 = (pTVar31->field0_0x0)._s_0.X;
                dVar57 = *(double *)((longlong)&pTVar31->field0_0x0 + 0x10);
                uVar75 = SUB84(dVar57,0);
                uVar76 = (undefined4)((ulonglong)dVar57 >> 0x20);
                fVar64 = (float)((pTVar35->field0_0x0)._s_0.X - dVar2) -
                         (float)((pTVar36->field0_0x0)._s_0.X - dVar93);
                fVar94 = (float)((pTVar35->field0_0x0)._s_0.Y - dVar49) -
                         (float)((pTVar36->field0_0x0)._s_0.Y - (double)local_5b8._0_8_);
                fVar92 = (float)((pTVar35->field0_0x0)._s_0.Z - dVar70) -
                         (float)((pTVar36->field0_0x0)._s_0.Z - dVar57);
                this_01 = local_5f8;
              }
              lVar47 = local_600;
              fVar24 = local_694;
              dVar49 = (double)local_588._0_8_ - (double)local_5b8._0_8_;
              fVar56 = (float)(dVar70 - (double)CONCAT44(uVar76,uVar75));
              fVar92 = fVar92 + fVar56;
              fVar94 = fVar94 + (float)dVar49;
              fVar64 = fVar64 + (float)(dVar2 - dVar93);
              fVar81 = (float)(dVar2 - dVar93) * local_680;
              fVar56 = fVar56 * local_670;
              fVar95 = fVar92 * local_664;
              fVar1 = (this_01->Material).Restitution;
              local_628 = (TTransform<double> *)CONCAT44(local_628._4_4_,fVar92 * (float)uVar77);
              fVar79 = fVar94 * local_668;
              fVar92 = pFVar34->TargetPhi;
              local_630 = (TTransform<double> *)CONCAT44(local_630._4_4_,fVar94 * local_694);
              fVar94 = fVar64 * local_66c;
              local_638 = (double)CONCAT44(local_638._4_4_,fVar64 * local_67c);
              local_694 = 0.0;
              if ((0.0 < fVar1) &&
                 (fVar78 = fVar78 * fVar96 + fVar91 * local_680 + fVar80 * local_670,
                 fVar78 < (float)((uint)local_640 ^ __xmm_80000000800000008000000080000000))) {
                local_694 = (float)((uint)(fVar78 * fVar1) ^ __xmm_80000000800000008000000080000000)
                ;
              }
              pTVar43 = (TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                         *)(local_618 + local_600 + 0x40);
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              *(ulonglong *)&pFVar37->RelativeContactPosition0 = CONCAT44(local_674,local_63c);
              *(float *)&(pFVar37->RelativeContactPosition0).field_0x8 = local_690;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              *(ulonglong *)&pFVar37->RelativeContactPosition1 = CONCAT44(local_688,local_68c);
              *(float *)&(pFVar37->RelativeContactPosition1).field_0x8 = local_684;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              *(ulonglong *)&pFVar37->ContactNormal = CONCAT44(fVar96,local_680);
              *(float *)&(pFVar37->ContactNormal).field_0x8 = local_670;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              local_658._0_8_ = CONCAT44(fVar24,local_67c);
              *(undefined8 *)&pFVar37->ContactTangentU = local_658._0_8_;
              *(undefined4 *)&(pFVar37->ContactTangentU).field_0x8 = uVar77;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              *(ulonglong *)&pFVar37->ContactTangentV = CONCAT44(local_668,local_66c);
              *(float *)&(pFVar37->ContactTangentV).field_0x8 = local_664;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->ContactDeltaNormal = (fVar81 + (float)dVar49 * fVar96 + fVar56) - fVar92;
              fVar78 = local_638._0_4_ + local_630._0_4_ + local_628._0_4_;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->ContactDeltaTangentU = fVar78;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->ContactDeltaTangentV = fVar79 + fVar94 + fVar95;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pTVar43 = (TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                         *)(local_618 + lVar47 + 0x40);
              pFVar37->ContactTargetVelocityNormal = local_694;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->NetPushOutNormal = 0.0;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->NetPushOutTangentU = 0.0;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->NetPushOutTangentV = 0.0;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->NetImpulseNormal = 0.0;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->NetImpulseTangentU = 0.0;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->NetImpulseTangentV = 0.0;
              pFVar37 = TCArray<Chaos::Private::FPBDCollisionSolverJacobiManifoldPoints::FManifoldPoint,4>
                        ::operator[](pTVar43,iVar29);
              pFVar37->StaticFrictionRatio = 0.0;
              FPBDCollisionSolverJacobiManifoldPoints::UpdateMass
                        ((FPBDCollisionSolverJacobiManifoldPoints *)pTVar43,iVar29,local_5e8,
                         local_5f0);
              FVar44 = (ForElementType<Chaos::FManifoldPoint>)&this_01->ManifoldPoints;
              lVar42 = local_610;
              fVar78 = local_678;
            }
            lVar42 = lVar42 + 0x6c;
            uVar46 = (ulonglong)(uVar45 + 1);
            local_648 = local_648 + -1;
            local_610 = lVar42;
          } while (local_648 != 0);
        }
        this_01->SolverBodies[0] = (FSolverBody *)0x0;
        this_01->SolverBodies[1] = (FSolverBody *)0x0;
        this = local_5e0;
        uVar48 = local_608;
        uVar45 = local_660;
      }
      local_660 = uVar45 + 1;
      uVar46 = (ulonglong)local_660;
      uVar48 = uVar48 + 1;
      lVar47 = lVar47 + 0x338;
    } while ((int)local_660 < local_620);
  }
  return;
}

// UpdatePositionShockPropagation @ 143a24530

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::UpdatePositionShockPropagation
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3,
          int param_4,int param_5,FPBDCollisionSolverSettings *param_6)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((param_2 == param_3 - param_6->NumPositionShockPropagationIterations) &&
     (uVar5 = (ulonglong)param_4, param_4 < param_5)) {
    lVar6 = uVar5 * 0x338;
    do {
      uVar4 = (uint)uVar5;
      uVar3 = 0;
      if ((int)uVar4 < (this->CollisionSolvers).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
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
      FPBDCollisionSolverJacobi::SetShockPropagationInvMassScale
                ((FPBDCollisionSolverJacobi *)
                 ((this->CollisionSolvers).AllocatorInstance.Data + lVar6),
                 CVars::Chaos_PBDCollisionSolver_Position_MinInvMassScale);
      uVar5 = (ulonglong)(uVar4 + 1);
      lVar6 = lVar6 + 0x338;
    } while ((int)(uVar4 + 1) < param_5);
  }
  return;
}

// UpdateVelocityShockPropagation @ 143a24670

void __thiscall
Chaos::Private::FPBDCollisionContainerSolverJacobi::UpdateVelocityShockPropagation
          (FPBDCollisionContainerSolverJacobi *this,double param_1,int param_2,int param_3,
          int param_4,int param_5,FPBDCollisionSolverSettings *param_6)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  fVar2 = __real_3f800000;
  if (param_2 == param_3 - param_6->NumVelocityShockPropagationIterations) {
    uVar6 = (ulonglong)param_4;
    if (param_4 < param_5) {
      lVar7 = uVar6 * 0x338;
      do {
        uVar5 = (uint)uVar6;
        uVar4 = 0;
        if ((int)uVar5 < (this->CollisionSolvers).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FPBDCollisionSolverJacobi::SetShockPropagationInvMassScale
                  ((FPBDCollisionSolverJacobi *)
                   ((this->CollisionSolvers).AllocatorInstance.Data + lVar7),
                   CVars::Chaos_PBDCollisionSolver_Velocity_MinInvMassScale);
        uVar6 = (ulonglong)(uVar5 + 1);
        lVar7 = lVar7 + 0x338;
      } while ((int)(uVar5 + 1) < param_5);
    }
  }
  else if ((param_2 == 0) && (uVar6 = (ulonglong)param_4, param_4 < param_5)) {
    lVar7 = uVar6 * 0x338;
    do {
      uVar5 = (uint)uVar6;
      uVar4 = 0;
      if ((int)uVar5 < (this->CollisionSolvers).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FPBDCollisionSolverJacobi::SetShockPropagationInvMassScale
                ((FPBDCollisionSolverJacobi *)
                 ((this->CollisionSolvers).AllocatorInstance.Data + lVar7),fVar2);
      uVar6 = (ulonglong)(uVar5 + 1);
      lVar7 = lVar7 + 0x338;
    } while ((int)(uVar5 + 1) < param_5);
  }
  return;
}

