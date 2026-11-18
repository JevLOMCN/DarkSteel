// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 14

// Reset @ 14a1fa990

void __thiscall FCRSimPointContainer::Reset(FCRSimPointContainer *this)

{
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->Points).ArrayNum = 0;
  if ((this->Points).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->Points).AllocatorInstance,0,&(this->Points).ArrayMax);
  }
  (this->Springs).ArrayNum = 0;
  if ((this->Springs).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->Springs).AllocatorInstance,0,&(this->Springs).ArrayMax);
  }
  (this->Constraints).ArrayNum = 0;
  if ((this->Constraints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->Constraints).AllocatorInstance,0,&(this->Constraints).ArrayMax);
  }
  (this->PreviousStep).ArrayNum = 0;
  if ((this->PreviousStep).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->PreviousStep).AllocatorInstance,0,&(this->PreviousStep).ArrayMax);
  }
  return;
}

// ResetTime @ 14a1faa70

void __thiscall FCRSimPointContainer::ResetTime(FCRSimPointContainer *this)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  (this->PreviousStep).ArrayNum = 0;
  if ((this->PreviousStep).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&(this->PreviousStep).AllocatorInstance,0,&(this->PreviousStep).ArrayMax);
  }
  pFVar3 = (this->Points).AllocatorInstance.Data;
  iVar1 = (this->Points).ArrayNum;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x40;
  pFVar5 = pFVar3 + 0x28;
  while( true ) {
    if ((this->Points).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigVMSimPoint,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (pFVar3 == pFVar4) break;
    pFVar3 = pFVar3 + 0x40;
    *(double *)pFVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pFVar5 + 8) = uVar2;
    *(double *)(pFVar5 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pFVar5 = pFVar5 + 0x40;
  }
  return;
}

// CachePreviousStep @ 14a1fab20

void __thiscall FCRSimPointContainer::CachePreviousStep(FCRSimPointContainer *this)

{
  int iVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  TArray<FRigVMSimPoint,TSizedDefaultAllocator<32>_>::operator=(&this->PreviousStep,&this->Points);
  pFVar5 = (this->Points).AllocatorInstance.Data;
  iVar1 = (this->Points).ArrayNum;
  pFVar4 = pFVar5 + (longlong)iVar1 * 0x40;
  pFVar3 = pFVar5 + 0x28;
  while( true ) {
    if ((this->Points).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigVMSimPoint,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (pFVar5 == pFVar4) break;
    pFVar5 = pFVar5 + 0x40;
    *(double *)pFVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)(pFVar3 + 8) = uVar2;
    *(double *)(pFVar3 + 0x10) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    pFVar3 = pFVar3 + 0x40;
  }
  return;
}

// IntegrateVerlet @ 14a1fabb0

void __thiscall FCRSimPointContainer::IntegrateVerlet(FCRSimPointContainer *this,float param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  FRigVMSimPoint *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  FRigVMSimPoint local_a8 [2];
  
  IntegrateSprings(this);
  IntegrateForcesAndVolumes(this);
  uVar15 = 0;
  if (0 < (this->Points).ArrayNum) {
    lVar16 = 0;
    do {
      uVar17 = ~uVar15 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar15 < (this->PreviousStep).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->PreviousStep).AllocatorInstance.Data;
      fVar1 = *(float *)&this->_padding_;
      uVar13 = 0;
      if ((int)uVar15 < (this->Points).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = FRigVMSimPoint::IntegrateVerlet
                          ((FRigVMSimPoint *)(pFVar2 + (longlong)(int)uVar15 * 0x40),local_a8,
                           (TVector<double> *)
                           ((this->Points).AllocatorInstance.Data +
                           (longlong)(int)uVar15 * 0x40 + 0x28),param_1,fVar1);
      uVar4 = *(undefined8 *)pFVar14;
      uVar5 = *(undefined8 *)&pFVar14->LinearDamping;
      dVar6 = (pFVar14->Position).field0_0x0._s_0.X;
      dVar7 = (pFVar14->Position).field0_0x0._s_0.Y;
      dVar8 = (pFVar14->Position).field0_0x0._s_0.Z;
      dVar9 = (pFVar14->LinearVelocity).field0_0x0._s_0.X;
      dVar10 = (pFVar14->LinearVelocity).field0_0x0._s_0.Y;
      dVar11 = (pFVar14->LinearVelocity).field0_0x0._s_0.Z;
      uVar13 = 0;
      if ((int)uVar15 < (this->Points).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data;
      uVar15 = uVar15 + 1;
      *(undefined8 *)(pFVar2 + lVar16) = uVar4;
      *(undefined8 *)(pFVar2 + lVar16 + 8) = uVar5;
      *(double *)(pFVar2 + lVar16 + 0x10) = dVar6;
      *(double *)(pFVar2 + lVar16 + 0x10 + 8) = dVar7;
      *(double *)(pFVar2 + lVar16 + 0x20) = dVar8;
      *(double *)(pFVar2 + lVar16 + 0x20 + 8) = dVar9;
      *(double *)(pFVar2 + lVar16 + 0x30) = dVar10;
      *(double *)(pFVar2 + lVar16 + 0x30 + 8) = dVar11;
      lVar16 = lVar16 + 0x40;
    } while ((int)uVar15 < (this->Points).ArrayNum);
  }
  ApplyConstraints(this);
  return;
}

// IntegrateSemiExplicitEuler @ 14a1fadc0

void __thiscall FCRSimPointContainer::IntegrateSemiExplicitEuler(FCRSimPointContainer *this)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  FRigVMSimPoint *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  FRigVMSimPoint local_98 [2];
  
  IntegrateSprings(this);
  IntegrateForcesAndVolumes(this);
  uVar15 = 0;
  if (0 < (this->Points).ArrayNum) {
    lVar16 = 0;
    do {
      uVar17 = ~uVar15 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar15 < (this->PreviousStep).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->PreviousStep).AllocatorInstance.Data;
      fVar1 = *(float *)&this->_padding_;
      uVar13 = 0;
      if ((int)uVar15 < (this->Points).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = FRigVMSimPoint::IntegrateSemiExplicitEuler
                          ((FRigVMSimPoint *)(pFVar2 + (longlong)(int)uVar15 * 0x40),local_98,
                           (TVector<double> *)
                           ((this->Points).AllocatorInstance.Data +
                           (longlong)(int)uVar15 * 0x40 + 0x28),fVar1);
      uVar4 = *(undefined8 *)pFVar14;
      uVar5 = *(undefined8 *)&pFVar14->LinearDamping;
      dVar6 = (pFVar14->Position).field0_0x0._s_0.X;
      dVar7 = (pFVar14->Position).field0_0x0._s_0.Y;
      dVar8 = (pFVar14->Position).field0_0x0._s_0.Z;
      dVar9 = (pFVar14->LinearVelocity).field0_0x0._s_0.X;
      dVar10 = (pFVar14->LinearVelocity).field0_0x0._s_0.Y;
      dVar11 = (pFVar14->LinearVelocity).field0_0x0._s_0.Z;
      uVar13 = 0;
      if ((int)uVar15 < (this->Points).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data;
      uVar15 = uVar15 + 1;
      *(undefined8 *)(pFVar2 + lVar16) = uVar4;
      *(undefined8 *)(pFVar2 + lVar16 + 8) = uVar5;
      *(double *)(pFVar2 + lVar16 + 0x10) = dVar6;
      *(double *)(pFVar2 + lVar16 + 0x10 + 8) = dVar7;
      *(double *)(pFVar2 + lVar16 + 0x20) = dVar8;
      *(double *)(pFVar2 + lVar16 + 0x20 + 8) = dVar9;
      *(double *)(pFVar2 + lVar16 + 0x30) = dVar10;
      *(double *)(pFVar2 + lVar16 + 0x30 + 8) = dVar11;
      lVar16 = lVar16 + 0x40;
    } while ((int)uVar15 < (this->Points).ArrayNum);
  }
  ApplyConstraints(this);
  return;
}

// StaticStruct @ 14a203120

UScriptStruct * __cdecl FCRSimPointContainer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCRSimPointContainer.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FCRSimPointContainer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCRSimPointContainer,(UObject *)pUVar1,
                         L"CRSimPointContainer");
  }
  return Z_Registration_Info_UScriptStruct_FCRSimPointContainer.OuterSingleton;
}

// ~FCRSimPointContainer @ 14a225480

void __thiscall FCRSimPointContainer::~FCRSimPointContainer(FCRSimPointContainer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PreviousStep).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Constraints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollisionVolumes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Forces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Springs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FCRSimContainer__6B_;
  return;
}

// ApplyConstraints @ 14a23ec00

void __thiscall FCRSimPointContainer::ApplyConstraints(FCRSimPointContainer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FCRSimPointConstraint *this_00;
  longlong lVar8;
  
  uVar6 = 0;
  if (0 < (this->Constraints).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->Constraints).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
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
      this_00 = (FCRSimPointConstraint *)((this->Constraints).AllocatorInstance.Data + lVar8);
      uVar4 = this_00->SubjectA;
      if (uVar4 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar4 < (this->Points).ArrayNum) {
          uVar7 = ~uVar4 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar7 = this_00->SubjectB;
        pFVar1 = (this->Points).AllocatorInstance.Data;
        if (uVar7 == 0xffffffff) {
          uVar7 = this_00->SubjectA;
        }
        uVar5 = 0;
        if ((int)uVar7 < (this->Points).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FCRSimPointConstraint::Apply
                  (this_00,(FRigVMSimPoint *)(pFVar1 + (longlong)(int)uVar4 * 0x40),
                   (FRigVMSimPoint *)
                   ((this->Points).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x40));
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x40;
    } while ((int)uVar6 < (this->Constraints).ArrayNum);
  }
  return;
}

// GetPointInterpolated @ 14a267070

FRigVMSimPoint * __thiscall
FCRSimPointContainer::GetPointInterpolated
          (FCRSimPointContainer *this,FRigVMSimPoint *__return_storage_ptr__,int param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  code *pcVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  bool bVar26;
  FRigVMSimPoint *pFVar27;
  uint uVar28;
  longlong lVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  
  if ((*(float *)&this->_padding_ <= __real_322bcc77) ||
     (iVar10 = (this->PreviousStep).ArrayNum, iVar10 != (this->Points).ArrayNum)) {
    uVar28 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar28 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar26)) {
      pcVar13 = (code *)swi(3);
      pFVar27 = (FRigVMSimPoint *)(*pcVar13)();
      return pFVar27;
    }
    pFVar11 = (this->Points).AllocatorInstance.Data;
    lVar29 = (longlong)param_1 * 0x40;
    uVar24 = *(undefined8 *)(pFVar11 + lVar29);
    uVar25 = *(undefined8 *)(pFVar11 + lVar29 + 8);
    dVar4 = *(double *)(pFVar11 + lVar29 + 0x10);
    dVar5 = *(double *)(pFVar11 + lVar29 + 0x10 + 8);
    __return_storage_ptr__->Mass = (float)(int)uVar24;
    __return_storage_ptr__->Size = (float)(int)((ulonglong)uVar24 >> 0x20);
    __return_storage_ptr__->LinearDamping = (float)(int)uVar25;
    __return_storage_ptr__->InheritMotion = (float)(int)((ulonglong)uVar25 >> 0x20);
    dVar6 = *(double *)(pFVar11 + lVar29 + 0x20);
    dVar7 = *(double *)(pFVar11 + lVar29 + 0x20 + 8);
    (__return_storage_ptr__->Position).field0_0x0._s_0.X = dVar4;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Y = dVar5;
    dVar4 = *(double *)(pFVar11 + lVar29 + 0x30);
    dVar5 = *(double *)(pFVar11 + lVar29 + 0x30 + 8);
    (__return_storage_ptr__->Position).field0_0x0._s_0.Z = dVar6;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.X = dVar7;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Y = dVar4;
    (__return_storage_ptr__->LinearVelocity).field0_0x0._s_0.Z = dVar5;
    return __return_storage_ptr__;
  }
  uVar28 = 0;
  if (param_1 < iVar10) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  fVar33 = __real_3f800000 - *(float *)&this->_padding_ / *(float *)&this->_padding_;
  if ((uVar28 == 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar26)) {
    pcVar13 = (code *)swi(3);
    pFVar27 = (FRigVMSimPoint *)(*pcVar13)();
    return pFVar27;
  }
  pFVar11 = (this->PreviousStep).AllocatorInstance.Data;
  lVar29 = (longlong)param_1 * 0x40;
  uVar28 = 0;
  if (param_1 < (this->Points).ArrayNum) {
    uVar28 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar28 == 0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar26)) {
    pcVar13 = (code *)swi(3);
    pFVar27 = (FRigVMSimPoint *)(*pcVar13)();
    return pFVar27;
  }
  pFVar12 = (this->Points).AllocatorInstance.Data;
  dVar32 = (double)fVar33;
  dVar18 = *(double *)(pFVar12 + lVar29 + 0x10);
  dVar19 = *(double *)(pFVar12 + lVar29 + 0x20);
  dVar20 = *(double *)(pFVar12 + lVar29 + 0x30);
  pFVar1 = pFVar12 + lVar29;
  fVar21 = *(float *)(pFVar1 + 4);
  fVar22 = *(float *)(pFVar1 + 8);
  fVar23 = *(float *)(pFVar1 + 0xc);
  dVar4 = *(double *)(pFVar11 + lVar29 + 0x10);
  dVar5 = *(double *)(pFVar11 + lVar29 + 0x20);
  dVar6 = *(double *)(pFVar11 + lVar29 + 0x30);
  fVar2 = *(float *)(pFVar11 + lVar29 + 4);
  dVar7 = *(double *)(pFVar11 + lVar29 + 0x10);
  dVar8 = *(double *)(pFVar11 + lVar29 + 0x20);
  fVar3 = *(float *)(pFVar11 + lVar29 + 4);
  dVar9 = *(double *)(pFVar11 + lVar29 + 0x30);
  dVar14 = (*(double *)(pFVar12 + lVar29 + 0x10 + 8) - *(double *)(pFVar11 + lVar29 + 0x18)) *
           dVar32 + *(double *)(pFVar11 + lVar29 + 0x18);
  dVar31 = (*(double *)(pFVar12 + lVar29 + 0x20 + 8) - *(double *)(pFVar11 + lVar29 + 0x28)) *
           dVar32 + *(double *)(pFVar11 + lVar29 + 0x28);
  dVar30 = (*(double *)(pFVar12 + lVar29 + 0x30 + 8) - *(double *)(pFVar11 + lVar29 + 0x38)) *
           dVar32 + *(double *)(pFVar11 + lVar29 + 0x38);
  __return_storage_ptr__->Mass = *(float *)pFVar1;
  __return_storage_ptr__->Size = (fVar21 - fVar2) * fVar33 + fVar3;
  __return_storage_ptr__->LinearDamping = fVar22;
  __return_storage_ptr__->InheritMotion = fVar23;
  auVar15._8_4_ = SUB84(dVar14,0);
  auVar15._0_8_ = (dVar18 - dVar4) * dVar32 + dVar7;
  auVar15._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Position).field0_0x0 = auVar15;
  auVar16._8_4_ = SUB84(dVar31,0);
  auVar16._0_8_ = (dVar19 - dVar5) * dVar32 + dVar8;
  auVar16._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Position).field0_0x0 + 0x10) = auVar16;
  auVar17._8_4_ = SUB84(dVar30,0);
  auVar17._0_8_ = (dVar20 - dVar6) * dVar32 + dVar9;
  auVar17._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->LinearVelocity).field0_0x0 + 8) =
       auVar17;
  return __return_storage_ptr__;
}

// IntegrateForcesAndVolumes @ 14a272d90

void __thiscall FCRSimPointContainer::IntegrateForcesAndVolumes(FCRSimPointContainer *this)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FCRSimSoftCollision *pFVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  TArray<FRigVMSimPoint,TSizedDefaultAllocator<32>_> *local_res8;
  undefined1 local_a8 [16];
  double local_98;
  TVector<double>_u_0 local_90;
  TVector<double> local_78 [2];
  
  dVar6 = __real_3e45798ee0000000;
  fVar5 = __real_322bcc77;
  uVar11 = 0;
  if (0 < (this->Points).ArrayNum) {
    lVar10 = 0;
    do {
      uVar13 = 0;
      if (0 < (this->Forces).ArrayNum) {
        lVar12 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar13 < (this->Forces).ArrayNum) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->Forces).AllocatorInstance.Data;
          uVar8 = 0;
          if ((int)uVar11 < (this->PreviousStep).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_a8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_a8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if ((fVar5 < *(float *)((this->PreviousStep).AllocatorInstance.Data + lVar10)) &&
             (pFVar2[lVar12] == (FScriptContainerElement)0x0)) {
            if (pFVar2[lVar12 + 0x24] == (FScriptContainerElement)0x0) {
              uVar15 = *(undefined4 *)(pFVar2 + lVar12 + 8);
              uVar17 = *(undefined4 *)(pFVar2 + lVar12 + 0xc);
              uVar18 = *(undefined4 *)(pFVar2 + lVar12 + 0x10);
              uVar19 = *(undefined4 *)(pFVar2 + lVar12 + 0x14);
              uVar20 = (undefined4)*(undefined8 *)(pFVar2 + lVar12 + 0x18);
              uVar21 = (undefined4)((ulonglong)*(undefined8 *)(pFVar2 + lVar12 + 0x18) >> 0x20);
            }
            else {
              pTVar9 = UE::Math::TVector<double>::GetSafeNormal
                                 ((TVector<double> *)(pFVar2 + lVar12 + 8),local_78,dVar6,
                                  &UE::Math::TVector<double>::ZeroVector);
              uVar15 = *(undefined4 *)&pTVar9->field0_0x0;
              uVar17 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 4);
              uVar18 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 8);
              uVar19 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 0xc);
              uVar1 = *(undefined8 *)((longlong)&pTVar9->field0_0x0 + 0x10);
              uVar20 = (undefined4)uVar1;
              uVar21 = (undefined4)((ulonglong)uVar1 >> 0x20);
            }
            local_98 = (double)*(float *)(pFVar2 + lVar12 + 0x20);
            dVar4 = (double)CONCAT44(uVar19,uVar18) * local_98;
            local_a8._8_4_ = SUB84(dVar4,0);
            local_a8._0_8_ = (double)CONCAT44(uVar17,uVar15) * local_98;
            local_a8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
            local_98 = (double)CONCAT44(uVar21,uVar20) * local_98;
          }
          uVar8 = 0;
          if ((int)uVar11 < (this->Points).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->Points).AllocatorInstance.Data;
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0x28;
          *(double *)(pFVar2 + lVar10 + 0x28) =
               (double)local_a8._0_8_ + *(double *)(pFVar2 + lVar10 + 0x28);
          *(double *)(pFVar2 + lVar10 + 0x30) =
               (double)local_a8._8_8_ + *(double *)(pFVar2 + lVar10 + 0x30);
          *(double *)(pFVar2 + lVar10 + 0x38) = local_98 + *(double *)(pFVar2 + lVar10 + 0x38);
        } while ((int)uVar13 < (this->Forces).ArrayNum);
      }
      local_res8 = &this->PreviousStep;
      uVar13 = 0;
      if (0 < (this->CollisionVolumes).ArrayNum) {
        lVar12 = 0;
        do {
          uVar8 = 0;
          if ((int)uVar13 < (this->CollisionVolumes).ArrayNum) {
            uVar8 = ~uVar13 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar14 = (FCRSimSoftCollision *)
                    ((this->CollisionVolumes).AllocatorInstance.Data + lVar12);
          uVar8 = 0;
          if ((int)uVar11 < (this->PreviousStep).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_90._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_90._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          pFVar2 = (local_res8->AllocatorInstance).Data;
          local_90._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          if (fVar5 < *(float *)(pFVar2 + lVar10)) {
            fVar16 = FCRSimSoftCollision::CalculateFalloff
                               (pFVar14,(TVector<double> *)(pFVar2 + lVar10 + 0x10),
                                *(float *)(pFVar2 + lVar10 + 4),(TVector<double> *)&local_90._s_0);
            dVar23 = (double)fVar16;
            dVar22 = (double)pFVar14->Coefficient;
            dVar4 = local_90._s_0.Y * dVar23 * dVar22;
            local_90._s_0.Z = dVar23 * local_90._s_0.Z * dVar22;
            local_90._8_4_ = SUB84(dVar4,0);
            local_90._s_0.X = local_90._s_0.X * dVar23 * dVar22;
            local_90._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
          }
          uVar8 = 0;
          if ((int)uVar11 < (this->Points).ArrayNum) {
            uVar8 = ~uVar11 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->Points).AllocatorInstance.Data;
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0x80;
          *(double *)(pFVar2 + lVar10 + 0x28) =
               local_90._s_0.X + *(double *)(pFVar2 + lVar10 + 0x28);
          *(double *)(pFVar2 + lVar10 + 0x30) =
               local_90._s_0.Y + *(double *)(pFVar2 + lVar10 + 0x30);
          *(double *)(pFVar2 + lVar10 + 0x38) =
               local_90._s_0.Z + *(double *)(pFVar2 + lVar10 + 0x38);
        } while ((int)uVar13 < (this->CollisionVolumes).ArrayNum);
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x40;
    } while ((int)uVar11 < (this->Points).ArrayNum);
  }
  return;
}

// IntegrateSprings @ 14a273200

void __thiscall FCRSimPointContainer::IntegrateSprings(FCRSimPointContainer *this)

{
  double dVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  FCRSimLinearSpring *this_00;
  longlong lVar12;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  uVar11 = 0;
  if (0 < (this->Springs).ArrayNum) {
    lVar12 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (this->Springs).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = (FCRSimLinearSpring *)((this->Springs).AllocatorInstance.Data + lVar12);
      uVar7 = this_00->SubjectA;
      if ((uVar7 != 0xffffffff) && (this_00->SubjectB != -1)) {
        uVar8 = 0;
        if ((int)uVar7 < (this->PreviousStep).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = this_00->SubjectB;
        pFVar3 = (this->PreviousStep).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar8 < (this->PreviousStep).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_48._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_48._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_48._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        local_30._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_30._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_30._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        FCRSimLinearSpring::CalculateForPoints
                  (this_00,(FRigVMSimPoint *)(pFVar3 + (longlong)(int)uVar7 * 0x40),
                   (FRigVMSimPoint *)
                   ((this->PreviousStep).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x40),
                   (TVector<double> *)&local_48._s_0,(TVector<double> *)&local_30._s_0);
        uVar7 = this_00->SubjectA;
        uVar8 = 0;
        if ((int)uVar7 < (this->Points).ArrayNum) {
          uVar8 = ~uVar7 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar8 = this_00->SubjectB;
        pFVar3 = (this->Points).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar8 < (this->Points).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->Points).AllocatorInstance.Data;
        dVar1 = *(double *)(pFVar3 + (longlong)(int)uVar7 * 0x40 + 0x30);
        lVar10 = (longlong)(int)uVar8 * 0x40;
        *(double *)(pFVar3 + (longlong)(int)uVar7 * 0x40 + 0x28) =
             local_48._s_0.X + *(double *)(pFVar3 + (longlong)(int)uVar7 * 0x40 + 0x28);
        dVar2 = *(double *)(pFVar3 + (longlong)(int)uVar7 * 0x40 + 0x38);
        *(double *)(pFVar3 + (longlong)(int)uVar7 * 0x40 + 0x30) = local_48._s_0.Y + dVar1;
        *(double *)(pFVar3 + (longlong)(int)uVar7 * 0x40 + 0x38) = local_48._s_0.Z + dVar2;
        *(double *)(pFVar4 + lVar10 + 0x28) = local_30._s_0.X + *(double *)(pFVar4 + lVar10 + 0x28);
        *(double *)(pFVar4 + lVar10 + 0x30) = local_30._s_0.Y + *(double *)(pFVar4 + lVar10 + 0x30);
        *(double *)(pFVar4 + lVar10 + 0x38) = local_30._s_0.Z + *(double *)(pFVar4 + lVar10 + 0x38);
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar11 < (this->Springs).ArrayNum);
  }
  return;
}

// IntegrateVelocitySemiExplicitEuler @ 14a2734c0

void __thiscall FCRSimPointContainer::IntegrateVelocitySemiExplicitEuler(FCRSimPointContainer *this)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  FRigVMSimPoint *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  FRigVMSimPoint local_98 [2];
  
  uVar15 = 0;
  if (0 < (this->Points).ArrayNum) {
    lVar16 = 0;
    do {
      uVar17 = ~uVar15 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar15 < (this->PreviousStep).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->PreviousStep).AllocatorInstance.Data;
      fVar1 = *(float *)&this->_padding_;
      uVar13 = 0;
      if ((int)uVar15 < (this->Points).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = FRigVMSimPoint::IntegrateSemiExplicitEuler
                          ((FRigVMSimPoint *)(pFVar2 + (longlong)(int)uVar15 * 0x40),local_98,
                           (TVector<double> *)
                           ((this->Points).AllocatorInstance.Data +
                           (longlong)(int)uVar15 * 0x40 + 0x28),fVar1);
      uVar4 = *(undefined8 *)pFVar14;
      uVar5 = *(undefined8 *)&pFVar14->LinearDamping;
      dVar6 = (pFVar14->Position).field0_0x0._s_0.X;
      dVar7 = (pFVar14->Position).field0_0x0._s_0.Y;
      dVar8 = (pFVar14->Position).field0_0x0._s_0.Z;
      dVar9 = (pFVar14->LinearVelocity).field0_0x0._s_0.X;
      dVar10 = (pFVar14->LinearVelocity).field0_0x0._s_0.Y;
      dVar11 = (pFVar14->LinearVelocity).field0_0x0._s_0.Z;
      uVar13 = 0;
      if ((int)uVar15 < (this->Points).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data;
      uVar15 = uVar15 + 1;
      *(undefined8 *)(pFVar2 + lVar16) = uVar4;
      *(undefined8 *)(pFVar2 + lVar16 + 8) = uVar5;
      *(double *)(pFVar2 + lVar16 + 0x10) = dVar6;
      *(double *)(pFVar2 + lVar16 + 0x10 + 8) = dVar7;
      *(double *)(pFVar2 + lVar16 + 0x20) = dVar8;
      *(double *)(pFVar2 + lVar16 + 0x20 + 8) = dVar9;
      *(double *)(pFVar2 + lVar16 + 0x30) = dVar10;
      *(double *)(pFVar2 + lVar16 + 0x30 + 8) = dVar11;
      lVar16 = lVar16 + 0x40;
    } while ((int)uVar15 < (this->Points).ArrayNum);
  }
  return;
}

// IntegrateVelocityVerlet @ 14a273680

void __thiscall
FCRSimPointContainer::IntegrateVelocityVerlet(FCRSimPointContainer *this,float param_1)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  FRigVMSimPoint *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  FRigVMSimPoint local_a8 [2];
  
  uVar15 = 0;
  if (0 < (this->Points).ArrayNum) {
    lVar16 = 0;
    do {
      uVar17 = ~uVar15 >> 0x1f;
      uVar13 = 0;
      if ((int)uVar15 < (this->PreviousStep).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->PreviousStep).AllocatorInstance.Data;
      fVar1 = *(float *)&this->_padding_;
      uVar13 = 0;
      if ((int)uVar15 < (this->Points).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = FRigVMSimPoint::IntegrateVerlet
                          ((FRigVMSimPoint *)(pFVar2 + (longlong)(int)uVar15 * 0x40),local_a8,
                           (TVector<double> *)
                           ((this->Points).AllocatorInstance.Data +
                           (longlong)(int)uVar15 * 0x40 + 0x28),param_1,fVar1);
      uVar4 = *(undefined8 *)pFVar14;
      uVar5 = *(undefined8 *)&pFVar14->LinearDamping;
      dVar6 = (pFVar14->Position).field0_0x0._s_0.X;
      dVar7 = (pFVar14->Position).field0_0x0._s_0.Y;
      dVar8 = (pFVar14->Position).field0_0x0._s_0.Z;
      dVar9 = (pFVar14->LinearVelocity).field0_0x0._s_0.X;
      dVar10 = (pFVar14->LinearVelocity).field0_0x0._s_0.Y;
      dVar11 = (pFVar14->LinearVelocity).field0_0x0._s_0.Z;
      uVar13 = 0;
      if ((int)uVar15 < (this->Points).ArrayNum) {
        uVar13 = uVar17;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data;
      uVar15 = uVar15 + 1;
      *(undefined8 *)(pFVar2 + lVar16) = uVar4;
      *(undefined8 *)(pFVar2 + lVar16 + 8) = uVar5;
      *(double *)(pFVar2 + lVar16 + 0x10) = dVar6;
      *(double *)(pFVar2 + lVar16 + 0x10 + 8) = dVar7;
      *(double *)(pFVar2 + lVar16 + 0x20) = dVar8;
      *(double *)(pFVar2 + lVar16 + 0x20 + 8) = dVar9;
      *(double *)(pFVar2 + lVar16 + 0x30) = dVar10;
      *(double *)(pFVar2 + lVar16 + 0x30 + 8) = dVar11;
      lVar16 = lVar16 + 0x40;
    } while ((int)uVar15 < (this->Points).ArrayNum);
  }
  return;
}

// operator= @ 14a519880

FCRSimPointContainer * __thiscall
FCRSimPointContainer::operator=(FCRSimPointContainer *this,FCRSimPointContainer *param_1)

{
  TArray<FCRSimPointConstraint,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  TArray<FRigVMSimPoint,TSizedDefaultAllocator<32>_>::operator=(&this->Points,&param_1->Points);
  TArray<FCRSimLinearSpring,TSizedDefaultAllocator<32>_>::operator=
            (&this->Springs,&param_1->Springs);
  TArray<FCRSimPointForce,TSizedDefaultAllocator<32>_>::operator=(&this->Forces,&param_1->Forces);
  TArray<FCRSimSoftCollision,TSizedDefaultAllocator<32>_>::operator=
            (&this->CollisionVolumes,&param_1->CollisionVolumes);
  pTVar1 = &this->Constraints;
  if (pTVar1 != &param_1->Constraints) {
    iVar3 = (this->Constraints).ArrayMax;
    piVar2 = &(this->Constraints).ArrayMax;
    iVar4 = (param_1->Constraints).ArrayNum;
    _Src = (param_1->Constraints).AllocatorInstance.Data;
    (this->Constraints).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar4 << 6);
      }
    }
  }
  TArray<FRigVMSimPoint,TSizedDefaultAllocator<32>_>::operator=
            (&this->PreviousStep,&param_1->PreviousStep);
  return this;
}

