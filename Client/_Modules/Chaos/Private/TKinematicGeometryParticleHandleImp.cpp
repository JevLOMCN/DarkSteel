// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 25

// ObjectState @ 14379acb0

EObjectStateType __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::ObjectState
          (TKinematicGeometryParticleHandleImp<double,3,1> *this)

{
  EObjectStateType EVar1;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  
  this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)this->field_0xc) {
    this_00 = (TPBDRigidParticleHandleImp<double,3,1> *)this;
  }
  if (this_00 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    EVar1 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
    return EVar1;
  }
  return Kinematic;
}

// GetV @ 143a70630

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::GetV
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  longlong lVar9;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar9 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x298)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<double,3> *)(*pcVar5)();
      return pTVar8;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x290);
  fVar1 = *(float *)(lVar4 + 4 + lVar9 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar4 + lVar9 * 0xc);
  fVar2 = *(float *)(lVar4 + 8 + lVar9 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// GetW @ 143a70930

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::GetW
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  longlong lVar9;
  
  uVar3 = *(uint *)&this->field_0x8;
  lVar9 = (longlong)(int)uVar3;
  lVar4 = *(longlong *)this;
  uVar7 = 0;
  if ((int)uVar3 < *(int *)(lVar4 + 0x2b0)) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TVector<double,3> *)(*pcVar5)();
      return pTVar8;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x2a8);
  fVar1 = *(float *)(lVar4 + 4 + lVar9 * 0xc);
  *(double *)__return_storage_ptr__ = (double)*(float *)(lVar4 + lVar9 * 0xc);
  fVar2 = *(float *)(lVar4 + 8 + lVar9 * 0xc);
  *(double *)&__return_storage_ptr__->field_0x8 = (double)fVar1;
  *(double *)&__return_storage_ptr__->field_0x10 = (double)fVar2;
  return __return_storage_ptr__;
}

// SetV @ 143a93240

void __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetV
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,
          bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  
  uVar4 = *(uint *)&this->field_0x8;
  lVar9 = (longlong)(int)uVar4;
  lVar5 = *(longlong *)this;
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  uVar8 = 0;
  if ((int)uVar4 < *(int *)(lVar5 + 0x298)) {
    uVar8 = ~uVar4 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x290);
  *(float *)(lVar5 + lVar9 * 0xc) = (float)dVar1;
  *(float *)(lVar5 + 4 + lVar9 * 0xc) = (float)dVar2;
  *(float *)(lVar5 + 8 + lVar9 * 0xc) = (float)dVar3;
  return;
}

// TKinematicGeometryParticleHandleImp<double,3,1> @ 143bdd510

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::
TKinematicGeometryParticleHandleImp<double,3,1>
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,
          TSerializablePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> param_1,int param_2,
          int param_3,FKinematicGeometryParticleParameters *param_4)

{
  FSpatialAccelerationIdx *pFVar1;
  TVector<double,3> local_38 [2];
  
  TGeometryParticleHandleImp<double,3,1>::TGeometryParticleHandleImp<double,3,1>
            ((TGeometryParticleHandleImp<double,3,1> *)this,
             (TSerializablePtr<Chaos::TGeometryParticlesImp<double,3,0>_>)param_1.Ptr,param_2,
             param_3,(FGeometryParticleParameters *)param_4);
  local_38[0]._0_8_ = 0;
  local_38[0]._8_8_ = 0;
  local_38[0]._16_8_ = 0;
  TKinematicGeometryParticlesImp<double,3,0>::SetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8,local_38)
  ;
  local_38[0]._0_8_ = 0;
  local_38[0]._8_8_ = 0;
  local_38[0]._16_8_ = 0;
  TKinematicGeometryParticlesImp<double,3,0>::SetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8,local_38)
  ;
  if (AccelerationStructureSplitStaticAndDynamic == 1) {
    pFVar1 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                       (*(TGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8);
    pFVar1->Bucket = 0;
    pFVar1->InnerIdx = 1;
    return this;
  }
  pFVar1 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                     (*(TGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8);
  pFVar1->Bucket = 0;
  pFVar1->InnerIdx = 0;
  return this;
}

// TKinematicGeometryParticleHandleImp<double,3,1> @ 143bdd5c0

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::
TKinematicGeometryParticleHandleImp<double,3,1>
          (TKinematicGeometryParticleHandleImp<double,3,1> *this)

{
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0;
  this->field_0xc = 0;
  TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode
            ((TGeometryParticleHandleImp<double,3,1> *)this,(FPBDIslandParticle *)0x0);
  return this;
}

// ~TKinematicGeometryParticleHandleImp<double,3,1> @ 143be2aa0

void __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::
~TKinematicGeometryParticleHandleImp<double,3,1>
          (TKinematicGeometryParticleHandleImp<double,3,1> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  TArrayCollection *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FPBDIslandParticle *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStackX_8 [8];
  
  pFVar9 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode
                     ((TGeometryParticleHandleImp<double,3,1> *)this);
  if (pFVar9 != (FPBDIslandParticle *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetConstraintGraphNode() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                       ,0x1fa,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar8 = *(uint *)&this->field_0x8;
  lVar13 = *(longlong *)this;
  uVar10 = 0;
  if ((int)uVar8 < *(int *)(lVar13 + 0x1a8)) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar4 = *(undefined8 **)(*(longlong *)(lVar13 + 0x1a0) + (longlong)(int)uVar8 * 0x10);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 0;
  }
  this_00 = *(TArrayCollection **)this;
  iVar7 = *(int *)&this->field_0x8;
  if ((char)this_00[1].MSize == '\0') {
    TArrayCollection::RemoveAtSwapHelper(this_00,iVar7);
  }
  else {
    pFVar11 = (this_00->MArrays).AllocatorInstance.Data;
    iVar14 = (this_00->MArrays).ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar14 * 8;
    while( true ) {
      if ((this_00->MArrays).ArrayNum != iVar14) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<Chaos::TArrayCollectionArrayBase_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(auStackX_8);
      }
      if (pFVar11 == pFVar2) break;
      plVar3 = *(longlong **)pFVar11;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,iVar7,1);
      }
      pFVar11 = pFVar11 + 8;
    }
    iVar7 = this_00->MSize - iVar7;
    iVar14 = 1;
    if (iVar7 < 1) {
      iVar14 = iVar7;
    }
    this_00->MSize = this_00->MSize - iVar14;
  }
  *(int *)&this_00[1].field_0x1c = *(int *)&this_00[1].field_0x1c + 1;
  lVar13 = *(longlong *)this;
  uVar8 = *(uint *)&this->field_0x8;
  uVar12 = (ulonglong)(int)uVar8;
  if (uVar8 < *(uint *)(lVar13 + 0x18)) {
    if (*(char *)(lVar13 + 0x38) == '\0') {
      uVar10 = 0;
      if ((int)uVar8 < *(int *)(lVar13 + 0xa0)) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(uint *)(*(longlong *)(*(longlong *)(lVar13 + 0x98) + uVar12 * 8) + 8) = uVar8;
    }
    else {
      lVar15 = uVar12 * 8;
      do {
        uVar10 = (uint)uVar12;
        uVar8 = 0;
        if ((int)uVar10 < *(int *)(lVar13 + 0xa0)) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar12 = (ulonglong)(uVar10 + 1);
        plVar3 = (longlong *)(lVar15 + *(longlong *)(lVar13 + 0x98));
        lVar15 = lVar15 + 8;
        piVar1 = (int *)(*plVar3 + 8);
        *piVar1 = *piVar1 + -1;
        lVar13 = *(longlong *)this;
      } while (uVar10 + 1 < *(uint *)(lVar13 + 0x18));
    }
  }
  *(undefined4 *)&this->field_0x10 = 0xffffffff;
  *(undefined8 *)this = 0;
  *(undefined4 *)&this->field_0x8 = 0xffffffff;
  this->field_0xc = 7;
  FChaosVisualDebuggerTrace::InvalidateParticleMetadataFromCache
            ((TGeometryParticleHandleImp<double,3,1> *)this);
  return;
}

// CreateParticleHandle @ 143c00a40

TUniquePtr<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>_>
 __cdecl Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::CreateParticleHandle
                   (TSerializablePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> param_1,
                   int param_2,int param_3,FKinematicGeometryParticleParameters *param_4)

{
  TKinematicGeometryParticleHandleImp<double,3,1> *this;
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  undefined4 in_register_00000014;
  TSerializablePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> this_00;
  FKinematicGeometryParticleParameters *in_stack_00000028;
  
  this_00.Ptr._4_4_ = in_register_00000014;
  this_00.Ptr._0_4_ = param_2;
  this = ::operator_new(0x18);
  pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (this != (TKinematicGeometryParticleHandleImp<double,3,1> *)0x0) {
    pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)
             TKinematicGeometryParticleHandleImp<double,3,1>
                       (this,this_00,param_3,(int)param_4,in_stack_00000028);
  }
  (param_1.Ptr)->_padding_ = (longlong)pTVar1;
  TGeometryParticlesImp<double,3,0>::SetHandle
            ((TGeometryParticlesImp<double,3,0> *)this_00.Ptr,param_3,pTVar1);
  return (TUniquePtr<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>_>
          )(TKinematicGeometryParticleHandleImp<double,3,1> *)param_1.Ptr;
}

// GetVf @ 143c07e60

TVector<float,3> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::GetVf
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,
          TVector<float,3> *__return_storage_ptr__)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float,3> *pTVar7;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x298)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x290);
  uVar2 = *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar3 + (longlong)(int)uVar1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar2;
  return __return_storage_ptr__;
}

// GetWf @ 143c08150

TVector<float,3> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::GetWf
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,
          TVector<float,3> *__return_storage_ptr__)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TVector<float,3> *pTVar7;
  
  uVar1 = *(uint *)&this->field_0x8;
  lVar3 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar3 + 0x2b0)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TVector<float,3> *)(*pcVar4)();
      return pTVar7;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x2a8);
  uVar2 = *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar1 * 0xc);
  *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)(lVar3 + (longlong)(int)uVar1 * 0xc);
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar2;
  return __return_storage_ptr__;
}

// Handle @ 143c0a3c0

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::Handle
          (TKinematicGeometryParticleHandleImp<double,3,1> *this)

{
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = TKinematicGeometryParticlesImp<double,3,0>::Handle
                     (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8)
  ;
  return pTVar1;
}

// Handle @ 143c0a3e0

TKinematicGeometryParticleHandleImp<double,3,1> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::Handle
          (TKinematicGeometryParticleHandleImp<double,3,1> *this)

{
  TKinematicGeometryParticleHandleImp<double,3,1> *pTVar1;
  
  pTVar1 = TKinematicGeometryParticlesImp<double,3,0>::Handle
                     (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8)
  ;
  return pTVar1;
}

// KinematicTarget @ 143c0b6a0

FKinematicTarget * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::KinematicTarget
          (TKinematicGeometryParticleHandleImp<double,3,1> *this)

{
  FKinematicTarget *pFVar1;
  
  pFVar1 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                     (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8)
  ;
  return pFVar1;
}

// KinematicTarget @ 143c0b6c0

FKinematicTarget * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::KinematicTarget
          (TKinematicGeometryParticleHandleImp<double,3,1> *this)

{
  FKinematicTarget *pFVar1;
  
  pFVar1 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                     (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8)
  ;
  return pFVar1;
}

// SetKinematicTarget @ 143c16be0

void __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetKinematicTarget
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,FKinematicTarget *param_1,
          bool param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  EKinematicTargetMode EVar6;
  undefined4 uVar7;
  FKinematicTarget *pFVar8;
  
  uVar1 = *(undefined8 *)&param_1->Rotation;
  uVar2 = *(undefined8 *)&(param_1->Rotation).field_0x8;
  uVar3 = *(undefined8 *)&param_1->Position;
  uVar4 = *(undefined8 *)&(param_1->Position).field_0x8;
  uVar5 = *(undefined8 *)&(param_1->Position).field_0x10;
  EVar6 = param_1->Mode;
  uVar7 = *(undefined4 *)&param_1->field_0x2c;
  pFVar8 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                     (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8)
  ;
  *(undefined8 *)&pFVar8->Rotation = uVar1;
  *(undefined8 *)&(pFVar8->Rotation).field_0x8 = uVar2;
  *(undefined8 *)&pFVar8->Position = uVar3;
  *(undefined8 *)&(pFVar8->Position).field_0x8 = uVar4;
  *(undefined8 *)&(pFVar8->Position).field_0x10 = uVar5;
  pFVar8->Mode = EVar6;
  *(undefined4 *)&pFVar8->field_0x2c = uVar7;
  return;
}

// SetVelocities @ 143c19cf0

void __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetVelocities
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,FParticleVelocities *param_1)

{
  double dVar1;
  undefined1 local_28 [16];
  double local_18;
  
  dVar1 = (double)(float)((ulonglong)*(undefined8 *)&param_1->MV >> 0x20);
  local_28._8_4_ = SUB84(dVar1,0);
  local_28._0_8_ = (double)(float)*(undefined8 *)&param_1->MV;
  local_28._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_18 = (double)*(float *)&(param_1->MV).field_0x8;
  TKinematicGeometryParticlesImp<double,3,0>::SetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8,
             (TVector<double,3> *)local_28);
  local_18 = (double)*(float *)&(param_1->MW).field_0x8;
  local_28._8_8_ = (double)*(float *)&(param_1->MW).field_0x4;
  local_28._0_8_ = (double)*(float *)&param_1->MW;
  TKinematicGeometryParticlesImp<double,3,0>::SetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8,
             (TVector<double,3> *)local_28);
  return;
}

// SetVf @ 143c19e70

void __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetVf
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,TVector<float,3> *param_1,
          bool param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined4 *)&param_1->field_0x8;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x298)) {
    uVar7 = ~uVar2 >> 0x1f;
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
  lVar4 = *(longlong *)(lVar4 + 0x290);
  *(undefined8 *)(lVar4 + (longlong)(int)uVar2 * 0xc) = uVar1;
  *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar2 * 0xc) = uVar3;
  return;
}

// SetW @ 143c19fc0

void __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetW
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,TVector<double,3> *param_1,
          bool param_2)

{
  TKinematicGeometryParticlesImp<double,3,0>::SetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,*(int *)&this->field_0x8,param_1);
  return;
}

// SetWf @ 143c1a150

void __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::SetWf
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,TVector<float,3> *param_1,
          bool param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  
  uVar2 = *(uint *)&this->field_0x8;
  lVar4 = *(longlong *)this;
  uVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined4 *)&param_1->field_0x8;
  uVar7 = 0;
  if ((int)uVar2 < *(int *)(lVar4 + 0x2b0)) {
    uVar7 = ~uVar2 >> 0x1f;
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
  lVar4 = *(longlong *)(lVar4 + 0x2a8);
  *(undefined8 *)(lVar4 + (longlong)(int)uVar2 * 0xc) = uVar1;
  *(undefined4 *)(lVar4 + 8 + (longlong)(int)uVar2 * 0xc) = uVar3;
  return;
}

// StaticType @ 143c1aaa0

EParticleType __cdecl Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::StaticType(void)

{
  return Kinematic;
}

// ToSerializable @ 143c1ae60

TSerializablePtr<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::ToSerializable
          (TKinematicGeometryParticleHandleImp<double,3,1> *this)

{
  TKinematicGeometryParticleHandleImp<double,3,1> *in_RDX;
  
  *(TKinematicGeometryParticleHandleImp<double,3,1> **)in_RDX = this;
  return (TSerializablePtr<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>)in_RDX;
}

// V @ 143c1d350

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::V
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__)

{
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,__return_storage_ptr__,
             *(int *)&this->field_0x8);
  return __return_storage_ptr__;
}

// V @ 143c1d380

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::V
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__)

{
  TKinematicGeometryParticlesImp<double,3,0>::GetV
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,__return_storage_ptr__,
             *(int *)&this->field_0x8);
  return __return_storage_ptr__;
}

// W @ 143c1d830

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::W
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__)

{
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,__return_storage_ptr__,
             *(int *)&this->field_0x8);
  return __return_storage_ptr__;
}

// W @ 143c1d860

TVector<double,3> * __thiscall
Chaos::TKinematicGeometryParticleHandleImp<double,3,1>::W
          (TKinematicGeometryParticleHandleImp<double,3,1> *this,
          TVector<double,3> *__return_storage_ptr__)

{
  TKinematicGeometryParticlesImp<double,3,0>::GetW
            (*(TKinematicGeometryParticlesImp<double,3,0> **)this,__return_storage_ptr__,
             *(int *)&this->field_0x8);
  return __return_storage_ptr__;
}

