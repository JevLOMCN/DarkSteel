// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 61

// AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_> @ 1437d5260

void __thiscall
Chaos::FPBDRigidsSOAs::
AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
          (FPBDRigidsSOAs *this,TPBDGeometryCollectionParticleHandleImp<double,3,1> *param_1,
          TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int local_res10 [2];
  TPairInitializer<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*_const_&,int_&&>
  local_res18;
  TPBDGeometryCollectionParticleHandleImp<double,3,1> *local_28;
  TPBDGeometryCollectionParticleHandleImp<double,3,1> **local_20;
  int *local_18;
  
  TGeometryParticleHandleImp<double,3,1>::AddToLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,param_2->ContainerListMask);
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(param_2->ParticleToIndex).field_0x8 !=
      *(int *)&(param_2->ParticleToIndex).field_0x34) {
    puVar7 = *(undefined1 **)&(param_2->ParticleToIndex).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(param_2->ParticleToIndex).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(param_2->ParticleToIndex).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(TPBDGeometryCollectionParticleHandleImp<double,3,1> **)
             (*(longlong *)&param_2->ParticleToIndex + (longlong)iVar5 * 0x18) == param_1) {
          return;
        }
        iVar5 = *(int *)(*(longlong *)&param_2->ParticleToIndex + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  local_res10[0] = (param_2->ParticleArray).ArrayNum;
  local_20 = &local_28;
  local_18 = local_res10;
  local_28 = param_1;
  TSet<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*_const_&,int_&&>_>
            ((TSet<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
              *)param_2,&local_res18,(bool *)&local_20);
  pFVar2 = (param_2->ParticleArray).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar2 + (longlong)(param_2->ParticleArray).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (param_2->ParticleArray).ArrayNum;
  piVar1 = &(param_2->ParticleArray).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_2->ParticleArray).AllocatorInstance,piVar1);
  }
  (param_2->ParticleArray).ArrayNum = iVar5 + 1;
  *(TPBDGeometryCollectionParticleHandleImp<double,3,1> **)
   ((param_2->ParticleArray).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_28;
  return;
}

// AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> @ 1437d53f0

void __thiscall
Chaos::FPBDRigidsSOAs::
AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
          (FPBDRigidsSOAs *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1,
          TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int local_res10 [2];
  TPairInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,int_&&>
  local_res18;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_28;
  TPBDRigidClusteredParticleHandleImp<double,3,1> **local_20;
  int *local_18;
  
  TGeometryParticleHandleImp<double,3,1>::AddToLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,param_2->ContainerListMask);
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(param_2->ParticleToIndex).field_0x8 !=
      *(int *)&(param_2->ParticleToIndex).field_0x34) {
    puVar7 = *(undefined1 **)&(param_2->ParticleToIndex).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(param_2->ParticleToIndex).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(param_2->ParticleToIndex).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
             (*(longlong *)&param_2->ParticleToIndex + (longlong)iVar5 * 0x18) == param_1) {
          return;
        }
        iVar5 = *(int *)(*(longlong *)&param_2->ParticleToIndex + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  local_res10[0] = (param_2->ParticleArray).ArrayNum;
  local_20 = &local_28;
  local_18 = local_res10;
  local_28 = param_1;
  TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&,int_&&>_>
            ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
              *)param_2,&local_res18,(bool *)&local_20);
  pFVar2 = (param_2->ParticleArray).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar2 + (longlong)(param_2->ParticleArray).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (param_2->ParticleArray).ArrayNum;
  piVar1 = &(param_2->ParticleArray).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_2->ParticleArray).AllocatorInstance,piVar1);
  }
  (param_2->ParticleArray).ArrayNum = iVar5 + 1;
  *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
   ((param_2->ParticleArray).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_28;
  return;
}

// AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1437d5580

void __thiscall
Chaos::FPBDRigidsSOAs::
AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FPBDRigidsSOAs *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  int local_res10 [2];
  TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,int_&&> local_res18;
  TPBDRigidParticleHandleImp<double,3,1> *local_28;
  TPBDRigidParticleHandleImp<double,3,1> **local_20;
  int *local_18;
  
  TGeometryParticleHandleImp<double,3,1>::AddToLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,param_2->ContainerListMask);
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(param_2->ParticleToIndex).field_0x8 !=
      *(int *)&(param_2->ParticleToIndex).field_0x34) {
    puVar7 = *(undefined1 **)&(param_2->ParticleToIndex).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(param_2->ParticleToIndex).field_0x38;
    }
    iVar5 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(param_2->ParticleToIndex).field_0x48 - 1U &
                              (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar5 != -1) {
      do {
        if (*(TPBDRigidParticleHandleImp<double,3,1> **)
             (*(longlong *)&param_2->ParticleToIndex + (longlong)iVar5 * 0x18) == param_1) {
          return;
        }
        iVar5 = *(int *)(*(longlong *)&param_2->ParticleToIndex + 0x10 + (longlong)iVar5 * 0x18);
      } while (iVar5 != -1);
    }
  }
  local_res10[0] = (param_2->ParticleArray).ArrayNum;
  local_20 = &local_28;
  local_18 = local_res10;
  local_28 = param_1;
  TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,int_&&>_>
            ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
              *)param_2,&local_res18,(bool *)&local_20);
  pFVar2 = (param_2->ParticleArray).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
      ((FScriptContainerElement *)&local_28 <
       pFVar2 + (longlong)(param_2->ParticleArray).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (param_2->ParticleArray).ArrayNum;
  piVar1 = &(param_2->ParticleArray).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(param_2->ParticleArray).AllocatorInstance,piVar1);
  }
  (param_2->ParticleArray).ArrayNum = iVar5 + 1;
  *(TPBDRigidParticleHandleImp<double,3,1> **)
   ((param_2->ParticleArray).AllocatorInstance.Data + (longlong)iVar5 * 8) = local_28;
  return;
}

// RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 1438805c0

void __thiscall
Chaos::FPBDRigidsSOAs::
RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FPBDRigidsSOAs *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,
          TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2->ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,param_2->ContainerListMask);
  TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove(param_2,param_1);
  return;
}

// AddToActiveArray @ 14389bb90

void __thiscall
Chaos::FPBDRigidsSOAs::AddToActiveArray
          (FPBDRigidsSOAs *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
            (this,param_1,&this->ActiveParticlesMapArray);
  if (this->bResimulating != false) {
    AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              (this,param_1,&this->ResimActiveParticlesMapArray);
  }
  if ((this->TransientDirtyMapArray).ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
             (this->TransientDirtyMapArray).ContainerListMask);
  TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
            (&this->TransientDirtyMapArray,param_1);
  return;
}

// DisableParticle @ 1438ae0a0

void __thiscall
Chaos::FPBDRigidsSOAs::DisableParticle
          (FPBDRigidsSOAs *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4);
  pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this_00 = pTVar9;
  if (1 < bVar1) {
    this_00 = param_1;
  }
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if (bVar1 != 0) {
      pTVar9 = param_1;
    }
    if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar8 = (TKinematicGeometryParticlesImp<double,3,0> *)(this->StaticDisabledParticles).Ptr;
    }
    else {
      pTVar8 = (this->KinematicDisabledParticles).Ptr;
    }
    TGeometryParticleHandleImp<double,3,1>::MoveToSOA
              (param_1,(TGeometryParticlesImp<double,3,0> *)pTVar8);
  }
  else {
    TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,true);
    uVar2 = (uint)this_00->_padding_;
    lVar3 = this_00->_padding_;
    uVar6 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x298)) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x290);
    *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0xc) = 0;
    *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0xc) = 0;
    uVar2 = (uint)this_00->_padding_;
    lVar3 = this_00->_padding_;
    uVar6 = 0;
    if ((int)uVar2 < *(int *)(lVar3 + 0x2b0)) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar3 = *(longlong *)(lVar3 + 0x2a8);
    *(undefined8 *)(lVar3 + (longlong)(int)uVar2 * 0xc) = 0;
    *(undefined4 *)(lVar3 + 8 + (longlong)(int)uVar2 * 0xc) = 0;
    bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4);
    pTVar7 = pTVar9;
    if (5 < bVar1) {
      pTVar7 = param_1;
    }
    if (pTVar7 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (2 < bVar1) {
        pTVar9 = param_1;
      }
      if (pTVar9 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        SetDynamicParticleSOA(this,(TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      }
      else {
        RemoveClusteredParticle(this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar9);
      }
    }
    else {
      RemoveGeometryCollectionParticle
                (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar7);
    }
    RemoveFromActiveArray(this,(TPBDRigidParticleHandleImp<double,3,1> *)this_00,false);
    if (CVars::bRemoveParticleFromMovingKinematicsOnDisable != false) {
      RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (this,(TPBDRigidParticleHandleImp<double,3,1> *)this_00,
                 &this->MovingKinematicsMapArray);
    }
  }
  if (CVars::bChaosSolverCheckParticleViews != false) {
    CheckParticleViewMaskImpl(this,param_1);
  }
  UpdateViews(this);
  return;
}

// InsertClusteredParticle @ 1438c2fc0

void __thiscall
Chaos::FPBDRigidsSOAs::InsertClusteredParticle
          (FPBDRigidsSOAs *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  EObjectStateType EVar2;
  bool bVar3;
  bool *pbVar4;
  
  pbVar4 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                     ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  if (*pbVar4 == false) {
    EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    if (EVar2 != Uninitialized) {
      if (EVar2 != Sleeping) {
        if (EVar2 == Kinematic) {
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
                    (this,param_1,&this->KinematicClusteredMapArray);
          return;
        }
        if (EVar2 == Static) {
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
                    (this,param_1,&this->StaticClusteredMapArray);
          return;
        }
        if (EVar2 != Dynamic) {
          return;
        }
      }
      AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
                (this,param_1,&this->DynamicClusteredMapArray);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2590006970459096252>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x4bc,"false");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// InsertGeometryCollectionParticle @ 1438c30a0

void __thiscall
Chaos::FPBDRigidsSOAs::InsertGeometryCollectionParticle
          (FPBDRigidsSOAs *this,TPBDGeometryCollectionParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  EObjectStateType EVar3;
  bool *pbVar4;
  
  pbVar4 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                     ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  if (*pbVar4 == false) {
    bVar2 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping
                      ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    if (bVar2) {
      EVar3 = Sleeping;
    }
    else {
      EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                        ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    }
    if (EVar3 == Uninitialized) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2590006970459096023>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                         ,0x3d7,"false");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      if (EVar3 == Sleeping) {
        AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
                  (this,param_1,&this->SleepingGeometryCollectionArray);
        return;
      }
      if (EVar3 == Kinematic) {
        AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
                  (this,param_1,&this->KinematicGeometryCollectionArray);
        return;
      }
      if (EVar3 == Static) {
        AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
                  (this,param_1,&this->StaticGeometryCollectionArray);
        return;
      }
      if (EVar3 == Dynamic) {
        AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
                  (this,param_1,&this->DynamicGeometryCollectionArray);
        return;
      }
    }
  }
  return;
}

// RemoveClusteredParticle @ 1438cb7f0

void __thiscall
Chaos::FPBDRigidsSOAs::RemoveClusteredParticle
          (FPBDRigidsSOAs *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->StaticClusteredMapArray).ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
             (this->StaticClusteredMapArray).ContainerListMask);
  TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>::Remove
            (&this->StaticClusteredMapArray,param_1);
  if ((this->KinematicClusteredMapArray).ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
             (this->KinematicClusteredMapArray).ContainerListMask);
  TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>::Remove
            (&this->KinematicClusteredMapArray,param_1);
  if ((this->DynamicClusteredMapArray).ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
             (this->DynamicClusteredMapArray).ContainerListMask);
  TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>::Remove
            (&this->DynamicClusteredMapArray,param_1);
  return;
}

// RemoveFromActiveArray @ 1438cd7a0

void __thiscall
Chaos::FPBDRigidsSOAs::RemoveFromActiveArray
          (FPBDRigidsSOAs *this,TPBDRigidParticleHandleImp<double,3,1> *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->ActiveParticlesMapArray).ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
             (this->ActiveParticlesMapArray).ContainerListMask);
  TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
            (&this->ActiveParticlesMapArray,param_1);
  if (this->bResimulating != false) {
    if ((this->ResimActiveParticlesMapArray).ContainerListMask == None) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                         ,0x425,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
              ((TGeometryParticleHandleImp<double,3,1> *)param_1,
               (this->ResimActiveParticlesMapArray).ContainerListMask);
    TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
              (&this->ResimActiveParticlesMapArray,param_1);
  }
  if (param_2) {
    bVar2 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                      (&this->MovingKinematicsMapArray,param_1);
    if (!bVar2) {
      AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (this,param_1,&this->TransientDirtyMapArray);
    }
  }
  else {
    if ((this->TransientDirtyMapArray).ContainerListMask == None) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                         ,0x425,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
              ((TGeometryParticleHandleImp<double,3,1> *)param_1,
               (this->TransientDirtyMapArray).ContainerListMask);
    TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
              (&this->TransientDirtyMapArray,param_1);
  }
  return;
}

// RemoveGeometryCollectionParticle @ 1438cd990

void __thiscall
Chaos::FPBDRigidsSOAs::RemoveGeometryCollectionParticle
          (FPBDRigidsSOAs *this,TPBDGeometryCollectionParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->StaticGeometryCollectionArray).ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
             (this->StaticGeometryCollectionArray).ContainerListMask);
  TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>::Remove
            (&this->StaticGeometryCollectionArray,param_1);
  if ((this->KinematicGeometryCollectionArray).ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
             (this->KinematicGeometryCollectionArray).ContainerListMask);
  TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>::Remove
            (&this->KinematicGeometryCollectionArray,param_1);
  if ((this->SleepingGeometryCollectionArray).ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
             (this->SleepingGeometryCollectionArray).ContainerListMask);
  TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>::Remove
            (&this->SleepingGeometryCollectionArray,param_1);
  if ((this->DynamicGeometryCollectionArray).ContainerListMask == None) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x425,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
            ((TGeometryParticleHandleImp<double,3,1> *)param_1,
             (this->DynamicGeometryCollectionArray).ContainerListMask);
  TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>::Remove
            (&this->DynamicGeometryCollectionArray,param_1);
  return;
}

// SetDynamicParticleSOA @ 1438d2020

void __thiscall
Chaos::FPBDRigidsSOAs::SetDynamicParticleSOA
          (FPBDRigidsSOAs *this,TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  char cVar1;
  EObjectStateType EVar2;
  EObjectStateType EVar3;
  bool *pbVar4;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar5;
  TPBDRigidClusteredParticles<double,3> *pTVar6;
  TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *pTVar7;
  
  EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  pbVar4 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(param_1);
  if (*pbVar4 != false) {
    TGeometryParticleHandleImp<double,3,1>::MoveToSOA
              ((TGeometryParticleHandleImp<double,3,1> *)param_1,
               (TGeometryParticlesImp<double,3,0> *)(this->DynamicDisabledParticles).Ptr);
    pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)param_1->field_0xc) {
      pTVar5 = param_1;
    }
    RemoveFromActiveArray(this,pTVar5,false);
    if (CVars::bRemoveParticleFromMovingKinematicsOnDisable != false) {
      RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (this,param_1,&this->MovingKinematicsMapArray);
    }
    goto LAB_1438d2177;
  }
  EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  if (EVar3 == Dynamic) {
    pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)param_1->field_0xc) {
      pTVar5 = param_1;
    }
    AddToActiveArray(this,pTVar5);
  }
  else {
    pTVar5 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
    if (1 < (byte)param_1->field_0xc) {
      pTVar5 = param_1;
    }
    RemoveFromActiveArray(this,pTVar5,true);
  }
  EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(param_1);
  if (EVar3 != Kinematic) {
    RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              (this,param_1,&this->MovingKinematicsMapArray);
  }
  if (param_1->field_0xc == '\x03') {
    pTVar6 = (this->ClusteredParticles).Ptr;
LAB_1438d20f8:
    TGeometryParticleHandleImp<double,3,1>::MoveToSOA
              ((TGeometryParticleHandleImp<double,3,1> *)param_1,
               (TGeometryParticlesImp<double,3,0> *)pTVar6);
    cVar1 = this->bResimulating;
joined_r0x0001438d2124:
    if (cVar1 == '\0') goto LAB_1438d2177;
    RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              (this,param_1,&this->ResimDynamicKinematicParticles);
    pTVar7 = &this->ResimDynamicParticles;
  }
  else {
    if (param_1->field_0xc == '\x06') {
      pTVar6 = (TPBDRigidClusteredParticles<double,3> *)(this->GeometryCollectionParticles).Ptr;
      goto LAB_1438d20f8;
    }
    if (EVar2 != Kinematic) {
      TGeometryParticleHandleImp<double,3,1>::MoveToSOA
                ((TGeometryParticleHandleImp<double,3,1> *)param_1,
                 (TGeometryParticlesImp<double,3,0> *)(this->DynamicParticles).Ptr);
      cVar1 = this->bResimulating;
      goto joined_r0x0001438d2124;
    }
    TGeometryParticleHandleImp<double,3,1>::MoveToSOA
              ((TGeometryParticleHandleImp<double,3,1> *)param_1,
               (TGeometryParticlesImp<double,3,0> *)(this->DynamicKinematicParticles).Ptr);
    if (this->bResimulating == false) goto LAB_1438d2177;
    RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              (this,param_1,&this->ResimDynamicParticles);
    pTVar7 = &this->ResimDynamicKinematicParticles;
  }
  AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
            (this,param_1,pTVar7);
LAB_1438d2177:
  if (CVars::bChaosSolverCheckParticleViews != false) {
    CheckParticleViewMaskImpl(this,(TGeometryParticleHandleImp<double,3,1> *)param_1);
  }
  UpdateViews(this);
  return;
}

// UpdateAllMovingKinematic @ 143b47640

void __thiscall Chaos::FPBDRigidsSOAs::UpdateAllMovingKinematic(FPBDRigidsSOAs *this,bool param_1)

{
  undefined8 *puVar1;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FKinematicTarget *pFVar5;
  uint uVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  longlong lVar8;
  
  uVar6 = 0;
  if (0 < (this->MovingKinematicsMapArray).ParticleArray.ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->MovingKinematicsMapArray).ParticleArray.ArrayNum) {
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
      puVar1 = *(undefined8 **)
                ((this->MovingKinematicsMapArray).ParticleArray.AllocatorInstance.Data + lVar8);
      pFVar5 = TKinematicGeometryParticlesImp<double,3,0>::KinematicTarget
                         ((TKinematicGeometryParticlesImp<double,3,0> *)*puVar1,*(int *)(puVar1 + 1)
                         );
      if (pFVar5->Mode == None) {
        uVar4 = 0;
        if ((int)uVar6 < (this->MovingKinematicsMapArray).ParticleArray.ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = *(TGeometryParticleHandleImp<double,3,1> **)
                   ((this->MovingKinematicsMapArray).ParticleArray.AllocatorInstance.Data + lVar8);
        if (((this->MovingKinematicsMapArray).ContainerListMask == None) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                               ,0x425,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
                  (this_00,(this->MovingKinematicsMapArray).ContainerListMask);
        TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
                  (&this->MovingKinematicsMapArray,(TPBDRigidParticleHandleImp<double,3,1> *)this_00
                  );
        pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (1 < *(byte *)((longlong)&this_00->_padding_ + 4)) {
          pTVar7 = this_00;
        }
        if (((pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
            (bVar3 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                               (&this->ActiveParticlesMapArray,
                                (TPBDRigidParticleHandleImp<double,3,1> *)pTVar7), !bVar3)) &&
           (bVar3 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                              (&this->MovingKinematicsMapArray,
                               (TPBDRigidParticleHandleImp<double,3,1> *)pTVar7), !bVar3)) {
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                    (this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar7,
                     &this->TransientDirtyMapArray);
          if (CVars::bChaosSolverCheckParticleViews != false) {
            CheckParticleViewMaskImpl(this,this_00);
          }
          if (param_1) {
            UpdateViews(this);
          }
        }
        if (CVars::bChaosSolverCheckParticleViews != false) {
          CheckParticleViewMaskImpl(this,this_00);
        }
      }
      else {
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 8;
      }
    } while ((int)uVar6 < (this->MovingKinematicsMapArray).ParticleArray.ArrayNum);
  }
  return;
}

// DeactivateParticles @ 143b61c50

void __thiscall
Chaos::FPBDRigidsSOAs::DeactivateParticles
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  EObjectStateType EVar5;
  bool bVar6;
  bool *pbVar7;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  FScriptContainerElement *pFVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  undefined1 local_res10 [8];
  
  pFVar8 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TGeometryParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar1) break;
    pTVar3 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar8;
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
    if (1 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
      this_00 = pTVar3;
    }
    if ((this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       ((EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), EVar5 == Dynamic ||
        (EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                           ((TPBDRigidParticleHandleImp<double,3,1> *)this_00), EVar5 == Sleeping)))
       ) {
      pbVar7 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                         ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      if (*pbVar7 == false) {
        TPBDRigidParticles<double,3>::SetSleeping
                  ((TPBDRigidParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_,true);
        TPBDRigidParticles<double,3>::SetObjectState
                  ((TPBDRigidParticles<double,3> *)this_00->_padding_,(int)this_00->_padding_,
                   Sleeping);
        pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (5 < *(byte *)((longlong)&pTVar3->_padding_ + 4)) {
          pTVar9 = pTVar3;
        }
        if (pTVar9 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          RemoveGeometryCollectionParticle
                    (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar9);
          InsertGeometryCollectionParticle
                    (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar9);
        }
        RemoveFromActiveArray(this,(TPBDRigidParticleHandleImp<double,3,1> *)this_00,true);
        if (CVars::bChaosSolverCheckParticleViews != false) {
          CheckParticleViewMaskImpl(this,pTVar3);
        }
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2590006970459095690>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                           ,0x28a,"!PBDRigid->Disabled()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  UpdateViews(this);
  return;
}

// AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 143c7ec60

void __thiscall
Chaos::FPBDRigidsSOAs::
AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1,TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *param_2)

{
  EGeometryParticleListMask *pEVar1;
  int iVar2;
  EGeometryParticleListMask EVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  if (param_2->ContainerListMask == None) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                       ,0x418,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar10 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar6 = pFVar10 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar10 == pFVar6) break;
    EVar3 = param_2->ContainerListMask;
    uVar4 = *(uint *)(*(longlong **)pFVar10 + 1);
    lVar5 = **(longlong **)pFVar10;
    uVar9 = 0;
    if ((int)uVar4 < *(int *)(lVar5 + 0x250)) {
      uVar9 = ~uVar4 >> 0x1f;
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
    pEVar1 = (EGeometryParticleListMask *)(*(longlong *)(lVar5 + 0x248) + (longlong)(int)uVar4 * 4);
    *pEVar1 = *pEVar1 | EVar3;
    pFVar10 = pFVar10 + 8;
  }
  TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
  Insert<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>(param_2,param_1);
  pFVar6 = (param_1->AllocatorInstance).Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
    return;
  }
  return;
}

// CreateParticlesHelper<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>,Chaos::TPBDRigidClusteredParticles<double,3>_> @ 143c804e0

TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::FPBDRigidsSOAs::
CreateParticlesHelper<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>,Chaos::TPBDRigidClusteredParticles<double,3>_>
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,FUniqueIdx *param_2,
          TUniquePtr<Chaos::TPBDRigidClusteredParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidClusteredParticles<double,3>_>_>
          *param_3,FGeometryParticleParameters *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  TPBDRigidClusteredParticles<double,3> *pTVar4;
  TSerializablePtr<Chaos::TPBDRigidParticles<double,3>_> this_00;
  longlong lVar5;
  undefined8 *puVar6;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  code *pcVar7;
  FParticleID FVar8;
  bool bVar9;
  uint uVar10;
  TGeometryParticleHandleImp<double,3,1> *this_02;
  FParticleID *pFVar11;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar12;
  int *piVar13;
  FUniqueIdx *pFVar14;
  TGeometryParticlesImp<double,3,0> *this_03;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  FPBDRigidParticleParameters local_res10 [2];
  int local_res18;
  FUniqueIdx *local_res20;
  undefined1 local_80 [8];
  FUniqueIdx *local_78;
  int local_70;
  int iStack_6c;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  pTVar4 = param_3->Ptr;
  uVar2 = *(uint *)&pTVar4->_padding_;
  uVar22 = (ulonglong)(int)uVar2;
  local_res18 = param_1;
  local_res20 = param_2;
  if (param_1 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)pTVar4,uVar2 + param_1);
  }
  piVar13 = (int *)((longlong)&pTVar4->_padding_ + 4);
  *piVar13 = *piVar13 + 1;
  lVar20 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_1,&__return_storage_ptr__->AllocatorInstance,
             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  iVar3 = (int)(this->ParticleHandles)._padding_;
  local_68 = (longlong)iVar3;
  if ((param_1 != 0) &&
     (TArrayCollection::ResizeHelper((TArrayCollection *)&this->ParticleHandles,iVar3 + param_1),
     0 < param_1)) {
    local_78 = local_res20;
    local_70 = -1;
    local_60 = uVar22;
    local_58 = uVar22;
    do {
      this_00.Ptr = (TPBDRigidParticles<double,3> *)param_3->Ptr;
      local_res10[0]._padding_ = '\0';
      local_res10[0].bStartSleeping = false;
      local_res10[0].bGravityEnabled = true;
      local_res10[0].bCCDEnabled = false;
      this_02 = ::operator_new(0x18);
      uVar21 = (uint)uVar22;
      if (this_02 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        this_02 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      }
      else {
        TPBDRigidParticleHandleImp<double,3,1>::TPBDRigidParticleHandleImp<double,3,1>
                  ((TPBDRigidParticleHandleImp<double,3,1> *)this_02,this_00,uVar21,
                   (iVar3 - uVar2) + uVar21,local_res10);
      }
      TGeometryParticlesImp<double,3,0>::SetHandle
                ((TGeometryParticlesImp<double,3,0> *)this_00.Ptr,uVar21,this_02);
      iStack_6c = this->BiggestParticleID;
      this->BiggestParticleID = iStack_6c + 1;
      if (iStack_6c != -1) {
        pFVar11 = TGeometryParticlesImp<double,3,0>::ParticleID
                            ((TGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                             (int)this_02->_padding_);
        FVar8.LocalID = iStack_6c;
        FVar8.GlobalID = local_70;
        *pFVar11 = FVar8;
      }
      uVar10 = (uint)this_02->_padding_;
      lVar5 = this_02->_padding_;
      uVar17 = *(uint *)((longlong)&param_3->Ptr->_padding_ + 4);
      uVar19 = 0;
      if ((int)uVar10 < *(int *)(lVar5 + 0x250)) {
        uVar19 = ~uVar10 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      uVar19 = -uVar2 + uVar21;
      puVar1 = (uint *)(*(longlong *)(lVar5 + 0x248) + (longlong)(int)uVar10 * 4);
      *puVar1 = *puVar1 | uVar17;
      uVar17 = ~uVar19 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      *(TGeometryParticleHandleImp<double,3,1> **)
       ((__return_storage_ptr__->AllocatorInstance).Data + lVar20) = this_02;
      if (local_res20 == (FUniqueIdx *)0x0) {
        uVar10 = 0;
        if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar12;
        }
        puVar6 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar20);
        piVar13 = (int *)(**(code **)((longlong)*this->UniqueIndices + 8))
                                   (this->UniqueIndices,local_80);
        iVar16 = *(int *)(puVar6 + 1);
        this_03 = (TGeometryParticlesImp<double,3,0> *)*puVar6;
        iVar18 = *piVar13;
      }
      else {
        uVar10 = 0;
        if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar12;
        }
        puVar6 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar20);
        iVar18 = local_78->Idx;
        iVar16 = *(int *)(puVar6 + 1);
        this_03 = (TGeometryParticlesImp<double,3,0> *)*puVar6;
      }
      pFVar14 = TGeometryParticlesImp<double,3,0>::UniqueIdx(this_03,iVar16);
      uVar17 = (iVar3 - uVar2) + uVar21;
      pFVar14->Idx = iVar18;
      uVar10 = 0;
      if ((int)uVar17 < *(int *)&(this->ParticleHandles).Handles.field_0x10) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      lVar5 = *(longlong *)&(this->ParticleHandles).Handles.field_0x8;
      lVar15 = local_68 * 8 + lVar20;
      this_01 = *(TGeometryParticleHandleImp<double,3,1> **)(lVar15 + lVar5);
      *(TGeometryParticleHandleImp<double,3,1> **)(lVar15 + lVar5) = this_02;
      if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        TGeometryParticleHandleImp<double,3,1>::~TGeometryParticleHandleImp<double,3,1>(this_01);
        ::operator_delete(this_01,0x18);
      }
      pTVar4 = param_3->Ptr;
      uVar10 = 0;
      if ((int)uVar21 < (int)pTVar4->_padding_) {
        uVar10 = ~uVar21 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      uVar22 = (ulonglong)(uVar21 + 1);
      local_78 = local_78 + 1;
      lVar20 = lVar20 + 8;
      *(undefined1 *)(pTVar4->_padding_ + local_60) = 1;
      local_60 = local_60 + 1;
    } while ((int)(-uVar2 + uVar21 + 1) < local_res18);
  }
  return __return_storage_ptr__;
}

// AddToActiveArray @ 143c8dcb0

void __thiscall
Chaos::FPBDRigidsSOAs::AddToActiveArray
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_48;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_48.ArrayNum = param_1->ArrayNum;
  lVar5 = (longlong)local_48.ArrayNum;
  pFVar2 = (param_1->AllocatorInstance).Data;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_48.ArrayNum == 0) {
    local_48.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_48.ArrayNum,0,&local_48.AllocatorInstance,local_48.ArrayNum,
               &local_48.ArrayMax);
    memcpy(local_48.AllocatorInstance.Data,pFVar2,lVar5 << 3);
  }
  AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
            (this,&local_48,&this->ActiveParticlesMapArray);
  if (this->bResimulating != false) {
    local_38.ArrayNum = param_1->ArrayNum;
    lVar5 = (longlong)local_38.ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.ArrayNum == 0) {
      local_38.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_38.ArrayNum,0,&local_38.AllocatorInstance,local_38.ArrayNum,
                 &local_38.ArrayMax);
      memcpy(local_38.AllocatorInstance.Data,pFVar2,lVar5 << 3);
    }
    AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              (this,&local_38,&this->ResimActiveParticlesMapArray);
  }
  pFVar6 = (param_1->AllocatorInstance).Data;
  iVar1 = param_1->ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar1 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar6;
    if ((this->TransientDirtyMapArray).ContainerListMask == None) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                         ,0x425,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
              (this_00,(this->TransientDirtyMapArray).ContainerListMask);
    TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
              (&this->TransientDirtyMapArray,(TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// CreateClusteredParticles @ 143c978d0

TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::FPBDRigidsSOAs::CreateClusteredParticles
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,FUniqueIdx *param_2,
          FPBDRigidParticleParameters *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  code *pcVar3;
  FGeometryParticleParameters *pFVar4;
  EObjectStateType EVar5;
  bool bVar6;
  bool *pbVar7;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar8;
  FScriptContainerElement *pFVar9;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_class_TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateClusteredParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_class_TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateClusteredParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_class_TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateClusteredParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_class_TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateClusteredParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                    ::__l2::LLMScope_Name395,L"Physics/ClusteredParticles");
    _Init_thread_footer(&`public:_class_TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateClusteredParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `public:_class_TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateClusteredParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name395,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res10,
             &`public:_class_TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateClusteredParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name395,true);
  pFVar4 = (FGeometryParticleParameters *)CONCAT71(param_3._1_7_,param_3._0_1_);
  CreateParticlesHelper<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>,Chaos::TPBDRigidClusteredParticles<double,3>_>
            (this,__return_storage_ptr__,param_1,param_2,&this->ClusteredParticles,pFVar4);
  if (pFVar4->bDisabled == false) {
    pFVar9 = (__return_storage_ptr__->AllocatorInstance).Data;
    iVar2 = __return_storage_ptr__->ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if (__return_storage_ptr__->ArrayNum != iVar2) {
        param_3._0_1_ = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&param_3);
      }
      if (pFVar9 == pFVar1) break;
      this_00 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar9;
      pbVar7 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(this_00);
      if (*pbVar7 == false) {
        EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
        if (EVar5 == Uninitialized) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2590006970459096252>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                             ,0x4bc,"false");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            pTVar8 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                      *)(*pcVar3)();
            return pTVar8;
          }
          goto LAB_143c97a75;
        }
        if (EVar5 == Sleeping) {
LAB_143c97a01:
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
                    (this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00,
                     &this->DynamicClusteredMapArray);
          pFVar9 = pFVar9 + 8;
        }
        else if (EVar5 == Kinematic) {
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
                    (this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00,
                     &this->KinematicClusteredMapArray);
          pFVar9 = pFVar9 + 8;
        }
        else {
          if (EVar5 != Static) {
            if (EVar5 != Dynamic) goto LAB_143c97a75;
            goto LAB_143c97a01;
          }
          AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>
                    (this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00,
                     &this->StaticClusteredMapArray);
          pFVar9 = pFVar9 + 8;
        }
      }
      else {
LAB_143c97a75:
        pFVar9 = pFVar9 + 8;
      }
    }
  }
  if (pFVar4[1].bDisabled == false) {
    AddToActiveArray(this,(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                           *)__return_storage_ptr__);
  }
  UpdateViews(this);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return __return_storage_ptr__;
}

// DestroyParticle @ 143c99960

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FPBDRigidsSOAs::DestroyParticle
          (FPBDRigidsSOAs *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  byte bVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  TGeometryParticleHandleImp<double,3,1> *pTVar7;
  TGeometryParticleHandleImp<double,3,1> *pTVar8;
  TGeometryParticleHandleImp<double,3,1> *pTVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  TGeometryParticleHandleImp<double,3,1> *pTVar13;
  <lambda_1> local_res20;
  TGeometryParticleHandleImp<double,3,1> *local_58;
  TGeometryParticleHandleImp<double,3,1> *local_50 [2];
  
  pTVar8 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (this->bResimulating != false) {
    if (((this->ResimStaticParticles).ContainerListMask == None) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                           ,0x425,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
              (param_1,(this->ResimStaticParticles).ContainerListMask);
    pFVar3 = (this->ResimStaticParticles).ParticleArray.AllocatorInstance.Data;
    local_58 = param_1;
    if (((pFVar3 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar3 + (longlong)(this->ResimStaticParticles).ParticleArray.ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->ResimStaticParticles).ParticleArray.ArrayNum;
    if (iVar2 != 0) {
      pFVar3 = (this->ResimStaticParticles).ParticleArray.AllocatorInstance.Data;
      bVar5 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar3 != local_58;
      pTVar6 = local_58;
      pTVar9 = pTVar8;
      pTVar7 = pTVar8;
      pTVar13 = pTVar8;
      do {
        uVar10 = (uint)pTVar7;
        uVar11 = uVar10;
        do {
          pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)((longlong)&pTVar9->_padding_ + 1);
          uVar11 = uVar11 + 1;
          pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)(ulonglong)uVar11;
          if ((longlong)iVar2 <= (longlong)pTVar9) break;
        } while (bVar5 == (*(TGeometryParticleHandleImp<double,3,1> **)
                            (pFVar3 + (longlong)pTVar9 * 8) != pTVar6));
        if (bVar5 != false) {
          uVar12 = (uint)pTVar13;
          if (uVar12 != uVar10) {
            memmove(pFVar3 + (longlong)(int)uVar12 * 8,pFVar3 + (longlong)(int)uVar10 * 8,
                    (longlong)(int)(uVar11 - uVar10) << 3);
            pTVar6 = local_58;
          }
          pTVar13 = (TGeometryParticleHandleImp<double,3,1> *)
                    (ulonglong)(uVar12 + (uVar11 - uVar10));
        }
        bVar5 = (bool)(bVar5 ^ 1);
      } while ((longlong)pTVar9 < (longlong)iVar2);
      (this->ResimStaticParticles).ParticleArray.ArrayNum = (int)pTVar13;
    }
    pTVar7 = pTVar8;
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      pTVar7 = param_1;
    }
    if (pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (((this->ResimKinematicParticles).ContainerListMask == None) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                             ,0x425,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
                (pTVar7,(this->ResimKinematicParticles).ContainerListMask);
      pFVar3 = (this->ResimKinematicParticles).ParticleArray.AllocatorInstance.Data;
      local_50[0] = pTVar7;
      if (((pFVar3 <= (FScriptContainerElement *)local_50) &&
          ((FScriptContainerElement *)local_50 <
           pFVar3 + (longlong)(this->ResimKinematicParticles).ParticleArray.ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar2 = (this->ResimKinematicParticles).ParticleArray.ArrayNum;
      if (iVar2 != 0) {
        pFVar3 = (this->ResimKinematicParticles).ParticleArray.AllocatorInstance.Data;
        bVar5 = *(TGeometryParticleHandleImp<double,3,1> **)pFVar3 != local_50[0];
        pTVar9 = pTVar8;
        pTVar6 = local_50[0];
        pTVar7 = pTVar8;
        pTVar13 = pTVar8;
        do {
          uVar10 = (uint)pTVar7;
          uVar11 = uVar10;
          do {
            pTVar9 = (TGeometryParticleHandleImp<double,3,1> *)((longlong)&pTVar9->_padding_ + 1);
            uVar11 = uVar11 + 1;
            pTVar7 = (TGeometryParticleHandleImp<double,3,1> *)(ulonglong)uVar11;
            if ((longlong)iVar2 <= (longlong)pTVar9) break;
          } while (bVar5 == (*(TGeometryParticleHandleImp<double,3,1> **)
                              (pFVar3 + (longlong)pTVar9 * 8) != pTVar6));
          if (bVar5 != false) {
            uVar12 = (uint)pTVar13;
            if (uVar12 != uVar10) {
              memmove(pFVar3 + (longlong)(int)uVar12 * 8,pFVar3 + (longlong)(int)uVar10 * 8,
                      (longlong)(int)(uVar11 - uVar10) << 3);
              pTVar6 = local_50[0];
            }
            pTVar13 = (TGeometryParticleHandleImp<double,3,1> *)
                      (ulonglong)(uVar12 + (uVar11 - uVar10));
          }
          bVar5 = (bool)(bVar5 ^ 1);
        } while ((longlong)pTVar9 < (longlong)iVar2);
        (this->ResimKinematicParticles).ParticleArray.ArrayNum = (int)pTVar13;
      }
    }
  }
  FChaosVisualDebuggerTrace::TraceParticleDestroyed(param_1);
  pTVar7 = pTVar8;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar7 = param_1;
  }
  if (pTVar7 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if (this->bResimulating != false) {
      RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar7,&this->ResimDynamicParticles)
      ;
      RemoveFromList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                (this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar7,
                 &this->ResimDynamicKinematicParticles);
    }
    RemoveFromActiveArray(this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar7,false);
    if (((this->MovingKinematicsMapArray).ContainerListMask == None) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                           ,0x425,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
              (pTVar7,(this->MovingKinematicsMapArray).ContainerListMask);
    TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
              (&this->MovingKinematicsMapArray,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar7);
    bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4);
    pTVar7 = pTVar8;
    if (5 < bVar1) {
      pTVar7 = param_1;
    }
    if (pTVar7 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (2 < bVar1) {
        pTVar8 = param_1;
      }
      if (pTVar8 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        RemoveClusteredParticle(this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar8);
      }
    }
    else {
      RemoveGeometryCollectionParticle
                (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar7);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&((this->DynamicParticles).Ptr)->_padding_);
    local_res20.Particle = param_1;
    TArray<Chaos::TSleepData<double,3>,TSizedDefaultAllocator<32>_>::
    RemoveAllSwap<_Chaos::FPBDRigidsSOAs::DestroyParticle_::__l11::<lambda_1>_>
              ((TArray<Chaos::TSleepData<double,3>,TSizedDefaultAllocator<32>_> *)
               &((this->DynamicParticles).Ptr)->_padding_,&local_res20,Default);
    ReleaseSRWLockExclusive((PSRWLOCK)&((this->DynamicParticles).Ptr)->_padding_);
  }
  uVar11 = param_1->HandleIdx;
  TArrayCollection::RemoveAtSwapHelper((TArrayCollection *)&this->ParticleHandles,uVar11);
  if (uVar11 < (uint)(this->ParticleHandles)._padding_) {
    uVar10 = 0;
    if ((int)uVar11 < *(int *)&(this->ParticleHandles).Handles.field_0x10) {
      uVar10 = ~uVar11 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(uint *)(*(longlong *)
               (*(longlong *)&(this->ParticleHandles).Handles.field_0x8 + (longlong)(int)uVar11 * 8)
             + 0x10) = uVar11;
  }
  UpdateViews(this);
  return;
}

// operator()<TUniquePtr<Chaos::TGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TGeometryParticlesImp<double,3,0>_>_>_> @ 143cb3fb0

void __thiscall
`Chaos::FPBDRigidsSOAs::Serialize'::__l6::<lambda_1>::
operator()<TUniquePtr<Chaos::TGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TGeometryParticlesImp<double,3,0>_>_>_>
          (void *this,
          TUniquePtr<Chaos::TGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TGeometryParticlesImp<double,3,0>_>_>
          *param_1)

{
  TGeometryParticlesImp<double,3,0> *pTVar1;
  longlong lVar2;
  IPhysicsProxyBase *pIVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_res10 [2];
  
  uVar8 = 0;
  if ((int)param_1->Ptr->_padding_ != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)this + 0x708) + 8))
                (*(longlong **)(*(longlong *)this + 0x708),local_res10);
      uVar5 = local_res10[0];
      pTVar1 = param_1->Ptr;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&(pTVar1->MUniqueIdx).field_0x10) {
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
      *(undefined4 *)(*(longlong *)&(pTVar1->MUniqueIdx).field_0x8 + (longlong)(int)uVar8 * 4) =
           uVar5;
      pTVar1 = param_1->Ptr;
      uVar7 = 0;
      if ((int)uVar8 < *(int *)&(pTVar1->MGeometryParticle).field_0x10) {
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
      lVar2 = *(longlong *)
               (*(longlong *)&(pTVar1->MGeometryParticle).field_0x8 + (longlong)(int)uVar8 * 8);
      pIVar3 = *(IPhysicsProxyBase **)(lVar2 + 0x10);
      *(undefined4 *)(lVar2 + 0x58) = local_res10[0];
      *(uint *)(lVar2 + 0x9c) = *(uint *)(lVar2 + 0x9c) | 0x10;
      if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)param_1->Ptr->_padding_);
  }
  return;
}

// operator()<TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>_> @ 143cb4110

void __thiscall
`Chaos::FPBDRigidsSOAs::Serialize'::__l6::<lambda_1>::
operator()<TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>_>
          (void *this,
          TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>
          *param_1)

{
  TPBDRigidParticles<double,3> *pTVar1;
  longlong lVar2;
  IPhysicsProxyBase *pIVar3;
  code *pcVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_res10 [2];
  
  uVar8 = 0;
  if ((int)param_1->Ptr->_padding_ != 0) {
    do {
      (**(code **)(**(longlong **)(*(longlong *)this + 0x708) + 8))
                (*(longlong **)(*(longlong *)this + 0x708),local_res10);
      uVar5 = local_res10[0];
      pTVar1 = param_1->Ptr;
      uVar7 = 0;
      if ((int)uVar8 < (int)pTVar1->_padding_) {
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
      *(undefined4 *)(pTVar1->_padding_ + (longlong)(int)uVar8 * 4) = uVar5;
      pTVar1 = param_1->Ptr;
      uVar7 = 0;
      if ((int)uVar8 < (int)pTVar1->_padding_) {
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
      lVar2 = *(longlong *)(pTVar1->_padding_ + (longlong)(int)uVar8 * 8);
      pIVar3 = *(IPhysicsProxyBase **)(lVar2 + 0x10);
      *(undefined4 *)(lVar2 + 0x58) = local_res10[0];
      *(uint *)(lVar2 + 0x9c) = *(uint *)(lVar2 + 0x9c) | 0x10;
      if ((pIVar3 != (IPhysicsProxyBase *)0x0) && (pIVar3->Solver != (FPhysicsSolverBase *)0x0)) {
        Chaos::FPhysicsSolverBase::AddDirtyProxy(pIVar3->Solver,pIVar3);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)param_1->Ptr->_padding_);
  }
  return;
}

// CheckListMasks<Chaos::TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_>_> @ 143cbb1c0

void __thiscall
Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
          (FPBDRigidsSOAs *this,
          TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_> *param_1)

{
  EGeometryParticleListMask EVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  longlong local_40;
  TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_> *pTStack_38;
  undefined8 *local_30;
  TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_> *local_28;
  
  iVar7 = 0;
  local_40 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 1;
  pTStack_38 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar6 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(longlong *)local_a8.Data = local_40;
  *(TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_> **)(local_a8.Data + 8) =
       pTStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    EVar1 = param_1->ContainerListMask;
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(EGeometryParticleListMask *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & EVar1) == None)
    {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = param_1;
      `Chaos::FPBDRigidsSOAs::
      CheckListMasks<Chaos::TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>'::__l6
      ::<lambda_1>::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbb366:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbb366;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbb39e;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbb39e:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckListMasks<Chaos::TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>_> @ 143cbb480

void __thiscall
Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>_>
          (FPBDRigidsSOAs *this,
          TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *param_1)

{
  EGeometryParticleListMask EVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  longlong local_40;
  TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *pTStack_38;
  undefined8 *local_30;
  TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *local_28;
  
  iVar7 = 0;
  local_40 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 1;
  pTStack_38 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar6 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(longlong *)local_a8.Data = local_40;
  *(TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> **)(local_a8.Data + 8) =
       pTStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    EVar1 = param_1->ContainerListMask;
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(EGeometryParticleListMask *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & EVar1) == None)
    {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = param_1;
      `Chaos::FPBDRigidsSOAs::
      CheckListMasks<Chaos::TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>_>'
      ::__l6::<lambda_1>::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbb626:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbb626;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbb65e;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbb65e:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>_> @ 143cbb740

void __thiscall
Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>_>
          (FPBDRigidsSOAs *this,
          TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_> *param_1)

{
  EGeometryParticleListMask EVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  longlong local_40;
  TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTStack_38;
  undefined8 *local_30;
  TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_> *local_28;
  
  pTStack_38 = &param_1->ParticleArray;
  local_a0._0_4_ = 1;
  iVar7 = 0;
  local_40 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar6 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(longlong *)local_a8.Data = local_40;
  *(TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
    **)(local_a8.Data + 8) = pTStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    EVar1 = param_1->ContainerListMask;
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(EGeometryParticleListMask *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & EVar1) == None)
    {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = param_1;
      `Chaos::FPBDRigidsSOAs::
      CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>_>'
      ::__l6::<lambda_1>::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbb8e6:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbb8e6;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbb91e;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbb91e:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_> @ 143cbba00

void __thiscall
Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>
          (FPBDRigidsSOAs *this,
          TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> *param_1)

{
  EGeometryParticleListMask EVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  longlong local_40;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTStack_38;
  undefined8 *local_30;
  TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> *local_28;
  
  pTStack_38 = &param_1->ParticleArray;
  local_a0._0_4_ = 1;
  iVar7 = 0;
  local_40 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar6 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(longlong *)local_a8.Data = local_40;
  *(TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
   (local_a8.Data + 8) = pTStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    EVar1 = param_1->ContainerListMask;
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(EGeometryParticleListMask *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & EVar1) == None)
    {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = param_1;
      `Chaos::FPBDRigidsSOAs::
      CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>'
      ::__l6::<lambda_1>::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbbba6:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbbba6;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbbbde;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbbbde:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_> @ 143cbbcc0

void __thiscall
Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>
          (FPBDRigidsSOAs *this,
          TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *param_1)

{
  EGeometryParticleListMask EVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  longlong local_40;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTStack_38;
  undefined8 *local_30;
  TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *local_28;
  
  pTStack_38 = &param_1->ParticleArray;
  local_a0._0_4_ = 1;
  iVar7 = 0;
  local_40 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar6 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(longlong *)local_a8.Data = local_40;
  *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
   (local_a8.Data + 8) = pTStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar6) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    EVar1 = param_1->ContainerListMask;
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(EGeometryParticleListMask *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & EVar1) == None)
    {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = param_1;
      `Chaos::FPBDRigidsSOAs::
      CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>'::
      __l6::<lambda_1>::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbbe66:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbbe66;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbbe9e;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbbe9e:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckSOAMasks<Chaos::TGeometryParticlesImp<double,3,0>_> @ 143cbd420

void __thiscall
Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TGeometryParticlesImp<double,3,0>_>
          (FPBDRigidsSOAs *this,TGeometryParticlesImp<double,3,0> *param_1)

{
  EGeometryParticleListMask EVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  TGeometryParticlesImp<double,3,0> *local_res10;
  undefined1 local_res18 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  TGeometryParticlesImp<double,3,0> *local_40;
  longlong lStack_38;
  undefined8 *local_30;
  TGeometryParticlesImp<double,3,0> **local_28;
  
  iVar7 = 0;
  lStack_38 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 1;
  local_res10 = param_1;
  local_40 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar6 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(TGeometryParticlesImp<double,3,0> **)local_a8.Data = local_40;
  *(longlong *)(local_a8.Data + 8) = lStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar6) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    EVar1 = local_res10->MContainerListMask;
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(EGeometryParticleListMask *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & EVar1) == None)
    {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = &local_res10;
      `Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l6::
      <lambda_1>::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbd5bc:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbd5bc;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbd5f4;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbd5f4:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckSOAMasks<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> @ 143cbd6d0

void __thiscall
Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
          (FPBDRigidsSOAs *this,TKinematicGeometryParticlesImp<double,3,0> *param_1)

{
  uint uVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  TKinematicGeometryParticlesImp<double,3,0> *local_res10;
  undefined1 local_res18 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  TKinematicGeometryParticlesImp<double,3,0> *local_40;
  longlong lStack_38;
  undefined8 *local_30;
  TKinematicGeometryParticlesImp<double,3,0> **local_28;
  
  iVar7 = 0;
  lStack_38 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 1;
  local_res10 = param_1;
  local_40 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar1 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(TKinematicGeometryParticlesImp<double,3,0> **)local_a8.Data = local_40;
  *(longlong *)(local_a8.Data + 8) = lStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    uVar1 = *(uint *)((longlong)&local_res10->_padding_ + 4);
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(uint *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & uVar1) == 0) {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = &local_res10;
      `Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>'::
      __l6::<lambda_1>::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbd86c:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbd86c;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbd8a4;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbd8a4:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckSOAMasks<Chaos::TPBDGeometryCollectionParticles<double,3>_> @ 143cbd980

void __thiscall
Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDGeometryCollectionParticles<double,3>_>
          (FPBDRigidsSOAs *this,TPBDGeometryCollectionParticles<double,3> *param_1)

{
  uint uVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  TPBDGeometryCollectionParticles<double,3> *local_res10;
  undefined1 local_res18 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  TPBDGeometryCollectionParticles<double,3> *local_40;
  longlong lStack_38;
  undefined8 *local_30;
  TPBDGeometryCollectionParticles<double,3> **local_28;
  
  iVar7 = 0;
  lStack_38 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 1;
  local_res10 = param_1;
  local_40 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar1 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(TPBDGeometryCollectionParticles<double,3> **)local_a8.Data = local_40;
  *(longlong *)(local_a8.Data + 8) = lStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    uVar1 = *(uint *)&local_res10->field_0x74;
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(uint *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & uVar1) == 0) {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = &local_res10;
      `Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDGeometryCollectionParticles<double,3>_>'::
      __l6::<lambda_1>::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbdb1c:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbdb1c;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbdb54;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbdb54:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckSOAMasks<Chaos::TPBDRigidClusteredParticles<double,3>_> @ 143cbdc30

void __thiscall
Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDRigidClusteredParticles<double,3>_>
          (FPBDRigidsSOAs *this,TPBDRigidClusteredParticles<double,3> *param_1)

{
  uint uVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  TPBDRigidClusteredParticles<double,3> *local_res10;
  undefined1 local_res18 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  TPBDRigidClusteredParticles<double,3> *local_40;
  longlong lStack_38;
  undefined8 *local_30;
  TPBDRigidClusteredParticles<double,3> **local_28;
  
  iVar7 = 0;
  lStack_38 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 1;
  local_res10 = param_1;
  local_40 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar1 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(TPBDRigidClusteredParticles<double,3> **)local_a8.Data = local_40;
  *(longlong *)(local_a8.Data + 8) = lStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    uVar1 = *(uint *)((longlong)&local_res10->_padding_ + 4);
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(uint *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & uVar1) == 0) {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = &local_res10;
      `Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDRigidClusteredParticles<double,3>_>'::__l6::
      <lambda_1>::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbddcc:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbddcc;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbde04;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbde04:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckSOAMasks<Chaos::TPBDRigidParticles<double,3>_> @ 143cbdee0

void __thiscall
Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDRigidParticles<double,3>_>
          (FPBDRigidsSOAs *this,TPBDRigidParticles<double,3> *param_1)

{
  uint uVar1;
  TParticleHandleBase<double,3>_u_0 *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  TPBDRigidParticles<double,3> *local_res10;
  undefined1 local_res18 [8];
  ForAnyElementType local_a8;
  undefined8 local_a0;
  undefined1 local_98 [24];
  uint uStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_68;
  int local_58;
  TParticleHandleBase<double,3>_u_0 local_50;
  int iStack_48;
  int iStack_44;
  TPBDRigidParticles<double,3> *local_40;
  longlong lStack_38;
  undefined8 *local_30;
  TPBDRigidParticles<double,3> **local_28;
  
  iVar7 = 0;
  lStack_38 = 0;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_a0._0_4_ = 1;
  local_res10 = param_1;
  local_40 = param_1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,&local_a8,1,(int *)((longlong)&local_a0 + 4));
  uVar1 = (uint)local_a0;
  FVar9.Data = local_a8.Data;
  *(TPBDRigidParticles<double,3> **)local_a8.Data = local_40;
  *(longlong *)(local_a8.Data + 8) = lStack_38;
  uVar8 = (ulonglong)(int)(uint)local_a0;
  pFVar11 = local_a8.Data + uVar8 * 0x10;
  local_68.AllocatorInstance.Data = local_a8.Data;
  local_a8.Data = (FScriptContainerElement *)0x0;
  local_68.ArrayNum = (uint)local_a0;
  local_68.ArrayMax = local_a0._4_4_;
  local_a0 = 0;
  while( true ) {
    local_58 = iVar7;
    if ((uint)uVar8 != uVar1) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res18);
      uVar8 = (ulonglong)(uint)local_68.ArrayNum;
    }
    if (FVar9.Data == pFVar11) break;
    if (*(longlong *)(FVar9.Data + 8) == 0) {
      iVar7 = local_58 + *(int *)(*(longlong *)FVar9.Data + 0x18);
      FVar9.Data = FVar9.Data + 0x10;
    }
    else {
      iVar7 = local_58 + *(int *)(*(longlong *)(FVar9.Data + 8) + 8);
      FVar9.Data = FVar9.Data + 0x10;
    }
  }
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98,&local_68
            );
  while ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ !=
         (TGeometryParticlesImp<double,3,0> *)0x0) {
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    uVar4 = local_98._16_8_;
    lVar10 = (longlong)(int)uStack_80;
    uVar1 = *(uint *)((longlong)&local_res10->_padding_ + 4);
    uVar6 = 0;
    if ((int)uStack_80 <
        *(int *)&((TArrayCollectionArray<Chaos::EGeometryParticleListMask> *)
                 (local_98._16_8_ + 0x240))->field_0x10) {
      uVar6 = ~uStack_80 >> 0x1f;
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
    if ((*(uint *)(*(longlong *)(uVar4 + 0x248) + lVar10 * 4) & uVar1) == 0) {
      local_30 = (undefined8 *)(local_98 + 0x10);
      local_28 = &local_res10;
      `Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDRigidParticles<double,3>_>'::__l6::<lambda_1>
      ::operator()(&local_30);
    }
    TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
              ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
    do {
      uVar4 = local_98._8_8_;
      if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
          local_98._8_8_ ==
          (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0
         ) {
        iVar7 = uStack_80 + 1;
        uStack_80 = iVar7;
        if (local_74 <= iVar7) {
LAB_143cbe07c:
          local_78 = local_78 + 1;
          TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                    ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
        }
      }
      else {
        iVar7 = local_70 + 1;
        local_70 = iVar7;
        if (*(int *)(local_98._8_8_ + 8) <= iVar7) goto LAB_143cbe07c;
        if ((iVar7 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar2 = *(TParticleHandleBase<double,3>_u_0 **)
                  (((ForAnyElementType *)uVar4)->Data + (longlong)iVar7 * 8);
        local_98._16_8_ = pTVar2->GeometryParticles;
        iStack_48 = *(int *)(pTVar2 + 1);
        local_50 = (TParticleHandleBase<double,3>_u_0)local_98._16_8_;
        if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
            (TGeometryParticlesImp<double,3,0> *)0x0) {
          iStack_44 = (uint)iStack_44._1_3_ << 8;
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
        else {
          iStack_44 = CONCAT31(iStack_44._1_3_,
                               ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_)->MParticleType
                              );
          uStack_7c = iStack_44;
          uStack_80 = iStack_48;
        }
      }
      if ((TGeometryParticlesImp<double,3,0> *)local_98._16_8_ ==
          (TGeometryParticlesImp<double,3,0> *)0x0) goto LAB_143cbe0b4;
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_98);
      bVar5 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                        ((TGeometryParticleHandleImp<double,3,0> *)(local_98 + 0x10));
    } while (bVar5);
  }
LAB_143cbe0b4:
  if (local_68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.AllocatorInstance.Data);
  }
  if (local_a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data);
  }
  return;
}

// CheckListMasks @ 143d46200

void __thiscall Chaos::FPBDRigidsSOAs::CheckListMasks(FPBDRigidsSOAs *this)

{
  CheckSOAMasks<Chaos::TGeometryParticlesImp<double,3,0>_>(this,(this->StaticParticles).Ptr);
  CheckSOAMasks<Chaos::TGeometryParticlesImp<double,3,0>_>(this,(this->StaticDisabledParticles).Ptr)
  ;
  CheckSOAMasks<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
            (this,(this->KinematicParticles).Ptr);
  CheckSOAMasks<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
            (this,(this->KinematicDisabledParticles).Ptr);
  CheckSOAMasks<Chaos::TPBDRigidParticles<double,3>_>(this,(this->DynamicDisabledParticles).Ptr);
  CheckSOAMasks<Chaos::TPBDRigidParticles<double,3>_>(this,(this->DynamicParticles).Ptr);
  CheckSOAMasks<Chaos::TPBDRigidParticles<double,3>_>(this,(this->DynamicKinematicParticles).Ptr);
  CheckSOAMasks<Chaos::TPBDRigidClusteredParticles<double,3>_>(this,(this->ClusteredParticles).Ptr);
  CheckSOAMasks<Chaos::TPBDGeometryCollectionParticles<double,3>_>
            (this,(this->GeometryCollectionParticles).Ptr);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>_>
            (this,&this->StaticGeometryCollectionArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>_>
            (this,&this->KinematicGeometryCollectionArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>_>
            (this,&this->SleepingGeometryCollectionArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>_>
            (this,&this->DynamicGeometryCollectionArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>
            (this,&this->ActiveParticlesMapArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>
            (this,&this->TransientDirtyMapArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>
            (this,&this->MovingKinematicsMapArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>
            (this,&this->ResimActiveParticlesMapArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>
            (this,&this->ResimDynamicParticles);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>
            (this,&this->ResimDynamicKinematicParticles);
  CheckListMasks<Chaos::TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
            (this,&this->ResimStaticParticles);
  CheckListMasks<Chaos::TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>_>
            (this,&this->ResimKinematicParticles);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>
            (this,&this->StaticClusteredMapArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>
            (this,&this->KinematicClusteredMapArray);
  CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>
            (this,&this->DynamicClusteredMapArray);
  return;
}

// CheckParticleViewMaskImpl @ 143d466f0

void __thiscall
Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl
          (FPBDRigidsSOAs *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TGeometryParticleHandleImp<double,3,1> *local_res10;
  uint local_res18 [2];
  TGeometryParticleHandleImp<double,3,1> **local_res20;
  TGeometryParticleHandleImp<double,3,1> **local_28;
  uint *local_20;
  TGeometryParticleHandleImp<double,3,1> **local_18;
  uint *local_10;
  
  uVar1 = (uint)param_1->_padding_;
  lVar2 = param_1->_padding_;
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x250)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  local_res10 = param_1;
  if (uVar5 == 0) {
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
  local_res18[0] = *(uint *)(*(longlong *)(lVar2 + 0x248) + (longlong)(int)uVar1 * 4);
  if (local_res18[0] == 0) {
    local_res20 = &local_res10;
    `Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl'::__l2::<lambda_1>::operator()(&local_res20);
  }
  if ((local_res18[0] & 0x81820 & (local_res18[0] & 0x81820) - 1) != 0) {
    local_28 = &local_res10;
    local_20 = local_res18;
    `Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl'::__l2::<lambda_2>::operator()(&local_28);
  }
  if ((local_res18[0] & 0xa000 & (local_res18[0] & 0xa000) - 1) != 0) {
    local_18 = &local_res10;
    local_10 = local_res18;
    `Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl'::__l2::<lambda_3>::operator()(&local_18);
  }
  return;
}

// CheckViewMasks @ 143d46ed0

void __thiscall Chaos::FPBDRigidsSOAs::CheckViewMasks(FPBDRigidsSOAs *this)

{
  TParticleHandleBase<double,3>_u_0 *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  TParticleHandleBase<double,3>_u_0 TVar8;
  int iStack_4c;
  undefined1 local_48 [24];
  uint uStack_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  int local_20;
  
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::
  TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>
            ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48,
             (TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
              *)&this->AllParticlesView);
  if ((TGeometryParticlesImp<double,3,0> *)local_48._16_8_ !=
      (TGeometryParticlesImp<double,3,0> *)0x0) {
    TVar8 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
    uVar6 = uStack_30;
    do {
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48);
      uVar5 = 0;
      if ((int)uVar6 < *(int *)&((TVar8.GeometryParticles)->MGeometryParticleHandle).field_0x10) {
        uVar5 = ~uVar6 >> 0x1f;
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
      CheckParticleViewMaskImpl
                (this,*(TGeometryParticleHandleImp<double,3,1> **)
                       ((TVar8.KinematicGeometryParticles)->_padding_ + (longlong)(int)uVar6 * 8));
      TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48);
      do {
        uVar3 = local_48._8_8_;
        if ((TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            local_48._8_8_ ==
            (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
            0x0) {
          uVar6 = uVar6 + 1;
          uStack_30 = uVar6;
          if (local_24 <= (int)uVar6) {
LAB_143d46fa3:
            local_28 = local_28 + 1;
            TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::SeekNonEmptySOA
                      ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48
                      );
            TVar8 = (TParticleHandleBase<double,3>_u_0)local_48._16_8_;
            uVar6 = uStack_30;
          }
        }
        else {
          iVar7 = local_20 + 1;
          local_20 = iVar7;
          if (*(int *)(local_48._8_8_ + 8) <= iVar7) goto LAB_143d46fa3;
          if ((iVar7 < 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pTVar1 = *(TParticleHandleBase<double,3>_u_0 **)
                    (((ForAnyElementType *)uVar3)->Data + (longlong)iVar7 * 8);
          TVar8 = (TParticleHandleBase<double,3>_u_0)pTVar1->KinematicGeometryParticles;
          uVar6 = *(uint *)(pTVar1 + 1);
          if (TVar8.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
            iStack_4c = (uint)iStack_4c._1_3_ << 8;
          }
          else {
            iStack_4c = CONCAT31(iStack_4c._1_3_,(TVar8.GeometryParticles)->MParticleType);
          }
          uStack_2c = iStack_4c;
          uStack_30 = uVar6;
          local_48._16_8_ = TVar8;
        }
        if (TVar8.GeometryParticles == (TGeometryParticlesImp<double,3,0> *)0x0) {
          return;
        }
        TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_>::RangedForValidation
                  ((TConstParticleIterator<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_48);
        bVar4 = TGeometryParticleHandleImp<double,3,0>::LightWeightDisabled
                          ((TGeometryParticleHandleImp<double,3,0> *)(local_48 + 0x10));
      } while (bVar4);
    } while (TVar8.GeometryParticles != (TGeometryParticlesImp<double,3,0> *)0x0);
  }
  return;
}

// MarkTransientDirtyParticle @ 143d59ca0

void __thiscall
Chaos::FPBDRigidsSOAs::MarkTransientDirtyParticle
          (FPBDRigidsSOAs *this,TGeometryParticleHandleImp<double,3,1> *param_1,bool param_2)

{
  bool bVar1;
  TGeometryParticleHandleImp<double,3,1> *pTVar2;
  
  pTVar2 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&param_1->_padding_ + 4)) {
    pTVar2 = param_1;
  }
  if (pTVar2 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar1 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                      (&this->ActiveParticlesMapArray,
                       (TPBDRigidParticleHandleImp<double,3,1> *)pTVar2);
    if (!bVar1) {
      bVar1 = TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
                        (&this->MovingKinematicsMapArray,
                         (TPBDRigidParticleHandleImp<double,3,1> *)pTVar2);
      if (!bVar1) {
        AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
                  (this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar2,
                   &this->TransientDirtyMapArray);
        if (CVars::bChaosSolverCheckParticleViews != false) {
          CheckParticleViewMaskImpl(this,param_1);
        }
        if (param_2) {
          UpdateViews(this);
        }
      }
    }
  }
  return;
}

// Serialize @ 143d6dd90

void __thiscall Chaos::FPBDRigidsSOAs::Serialize(FPBDRigidsSOAs *this,FChaosArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar2;
  longlong lVar3;
  IPhysicsProxyBase *pIVar4;
  TPBDGeometryCollectionParticles<double,3> *pTVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  int iVar13;
  undefined1 local_res8 [8];
  FChaosArchive *local_res10;
  undefined4 local_res18 [2];
  int local_res20 [2];
  TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,int_&&> local_78;
  TSerializablePtr<Chaos::TPBDGeometryCollectionParticles<double,3>_> local_68;
  undefined8 local_60;
  undefined8 *local_58;
  int *local_50;
  
  local_res10 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_Chaos::FPBDRigidsSOAs::Serialize(Chaos::FChaosArchive&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_Chaos::FPBDRigidsSOAs::Serialize(Chaos::FChaosArchive&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_Chaos::FPBDRigidsSOAs::Serialize(Chaos::FChaosArchive&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`public:_void___cdecl_Chaos::FPBDRigidsSOAs::Serialize(Chaos::FChaosArchive&___ptr64)___ptr64'
                    ::__l2::SOAsName,L"PBDRigidsSOAs");
    _Init_thread_footer(&`public:_void___cdecl_Chaos::FPBDRigidsSOAs::Serialize(Chaos::FChaosArchive&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  operator<<<Chaos::TGeometryParticleHandleImp<double,3,1>_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,TSizedDefaultAllocator<32>_>
                      *)&(this->ParticleHandles).Handles.field_0x8);
  TArrayCollection::ResizeHelper
            ((TArrayCollection *)&this->ParticleHandles,
             *(int *)&(this->ParticleHandles).Handles.field_0x10);
  operator<<<Chaos::TGeometryParticlesImp<double,3,0>_>(param_1,&this->StaticParticles);
  operator<<<Chaos::TGeometryParticlesImp<double,3,0>_>(param_1,&this->StaticDisabledParticles);
  operator<<<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>(param_1,&this->KinematicParticles);
  operator<<<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
            (param_1,&this->KinematicDisabledParticles);
  operator<<<Chaos::TPBDRigidParticles<double,3>_>(param_1,&this->DynamicParticles);
  operator<<<Chaos::TPBDRigidParticles<double,3>_>(param_1,&this->DynamicDisabledParticles);
  (**(code **)(param_1->_padding_ + 0x230))(param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  iVar9 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1,&FExternalPhysicsCustomObjectVersion::GUID);
  if (0x10 < iVar9) {
    operator<<<Chaos::TPBDRigidParticles<double,3>_>(param_1,&this->DynamicKinematicParticles);
  }
  local_78.Value = (int *)this;
  `Chaos::FPBDRigidsSOAs::Serialize'::__l6::<lambda_1>::
  operator()<TUniquePtr<Chaos::TGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TGeometryParticlesImp<double,3,0>_>_>_>
            (&local_78.Value,&this->StaticParticles);
  `Chaos::FPBDRigidsSOAs::Serialize'::__l6::<lambda_1>::
  operator()<TUniquePtr<Chaos::TGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TGeometryParticlesImp<double,3,0>_>_>_>
            (&local_78.Value,&this->StaticDisabledParticles);
  uVar12 = 0;
  if ((int)((this->KinematicParticles).Ptr)->_padding_ != 0) {
    do {
      (**(code **)((longlong)**(IParticleUniqueIndices **)((longlong)local_78.Value + 0x708) + 8))
                (*(IParticleUniqueIndices **)((longlong)local_78.Value + 0x708),local_res18);
      uVar7 = local_res18[0];
      pTVar2 = (this->KinematicParticles).Ptr;
      uVar10 = 0;
      if ((int)uVar12 < (int)pTVar2->_padding_) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      *(undefined4 *)(pTVar2->_padding_ + (longlong)(int)uVar12 * 4) = uVar7;
      pTVar2 = (this->KinematicParticles).Ptr;
      uVar10 = 0;
      if ((int)uVar12 < (int)pTVar2->_padding_) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar3 = *(longlong *)(pTVar2->_padding_ + (longlong)(int)uVar12 * 8);
      pIVar4 = *(IPhysicsProxyBase **)(lVar3 + 0x10);
      *(undefined4 *)(lVar3 + 0x58) = local_res18[0];
      *(uint *)(lVar3 + 0x9c) = *(uint *)(lVar3 + 0x9c) | 0x10;
      if ((pIVar4 != (IPhysicsProxyBase *)0x0) && (pIVar4->Solver != (FPhysicsSolverBase *)0x0)) {
        FPhysicsSolverBase::AddDirtyProxy(pIVar4->Solver,pIVar4);
      }
      uVar12 = uVar12 + 1;
      param_1 = local_res10;
    } while (uVar12 < (uint)((this->KinematicParticles).Ptr)->_padding_);
  }
  `Chaos::FPBDRigidsSOAs::Serialize'::__l6::<lambda_1>::
  operator()<TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>_>
            (&local_78.Value,&this->DynamicParticles);
  `Chaos::FPBDRigidsSOAs::Serialize'::__l6::<lambda_1>::
  operator()<TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>_>
            (&local_78.Value,&this->DynamicParticles);
  `Chaos::FPBDRigidsSOAs::Serialize'::__l6::<lambda_1>::
  operator()<TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>_>
            (&local_78.Value,&this->DynamicDisabledParticles);
  if (((int)((this->ClusteredParticles).Ptr)->_padding_ != 0) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2590006970459095942>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                         ,0x386,"ClusteredParticles->Size() == 0"), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (**(code **)(*(longlong *)param_1->_padding_ + 0x230))
            ((longlong *)param_1->_padding_,&FDestructionObjectVersion::GUID);
  iVar9 = FArchiveState::CustomVer
                    ((FArchiveState *)param_1->_padding_,&FDestructionObjectVersion::GUID);
  if (iVar9 < 5) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ChaosArchive.h"
                       ,0x14d,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    local_68.Ptr = (this->GeometryCollectionParticles).Ptr;
    FChaosArchive::SerializePtr<Chaos::TPBDGeometryCollectionParticles<double,3>_>
              (param_1,&local_68);
    if ((((*(byte *)(param_1->_padding_ + 0x28) & 1) != 0) &&
        (pTVar5 = (this->GeometryCollectionParticles).Ptr, pTVar5 != local_68.Ptr)) &&
       ((this->GeometryCollectionParticles).Ptr = local_68.Ptr,
       pTVar5 != (TPBDGeometryCollectionParticles<double,3> *)0x0)) {
      (*(code *)**(undefined8 **)pTVar5)(pTVar5,1);
    }
  }
  operator<<<Chaos::TPBDRigidParticleHandleImp<double,3,1>_TSizedDefaultAllocator<32>_>
            (param_1,(TArray<Chaos::TSerializablePtr<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,TSizedDefaultAllocator<32>_>
                      *)&(this->ActiveParticlesMapArray).ParticleArray);
  pFVar11 = (this->ActiveParticlesMapArray).ParticleArray.AllocatorInstance.Data;
  iVar9 = (this->ActiveParticlesMapArray).ParticleArray.ArrayNum;
  pFVar1 = pFVar11 + (longlong)iVar9 * 8;
  iVar13 = 0;
  while( true ) {
    if ((this->ActiveParticlesMapArray).ParticleArray.ArrayNum != iVar9) {
      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar1) break;
    local_60 = *(undefined8 *)pFVar11;
    local_58 = &local_60;
    local_50 = local_res20;
    local_res20[0] = iVar13;
    TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,int_&&>_>
              ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                *)&this->ActiveParticlesMapArray,&local_78,(bool *)&local_58);
    pFVar11 = pFVar11 + 8;
    iVar13 = iVar13 + 1;
  }
  if ((local_res10->_padding_ & 1) != 0) {
    ((this->StaticParticles).Ptr)->MContainerListMask = StaticParticles;
    ((this->StaticDisabledParticles).Ptr)->MContainerListMask = StaticDisabledParticles;
    *(undefined4 *)((longlong)&((this->KinematicParticles).Ptr)->_padding_ + 4) = 4;
    *(undefined4 *)((longlong)&((this->KinematicDisabledParticles).Ptr)->_padding_ + 4) = 8;
    *(undefined4 *)((longlong)&((this->DynamicDisabledParticles).Ptr)->_padding_ + 4) = 0x10;
    *(undefined4 *)((longlong)&((this->DynamicParticles).Ptr)->_padding_ + 4) = 0x20;
    *(undefined4 *)((longlong)&((this->DynamicKinematicParticles).Ptr)->_padding_ + 4) = 0x40;
    *(undefined4 *)((longlong)&((this->ClusteredParticles).Ptr)->_padding_ + 4) = 0x80;
    *(undefined4 *)&((this->GeometryCollectionParticles).Ptr)->field_0x74 = 0x100;
    (this->StaticGeometryCollectionArray).ContainerListMask = StaticGeometryCollectionArray;
    (this->KinematicGeometryCollectionArray).ContainerListMask = KinematicGeometryCollectionArray;
    (this->SleepingGeometryCollectionArray).ContainerListMask = SleepingGeometryCollectionArray;
    (this->DynamicGeometryCollectionArray).ContainerListMask = DynamicGeometryCollectionArray;
    (this->ActiveParticlesMapArray).ContainerListMask = ActiveParticlesMapArray;
    (this->TransientDirtyMapArray).ContainerListMask = TransientDirtyMapArray;
    (this->MovingKinematicsMapArray).ContainerListMask = MovingKinematicsMapArray;
    (this->ResimActiveParticlesMapArray).ContainerListMask = ResimActiveParticlesMapArray;
    (this->ResimDynamicParticles).ContainerListMask = ResimDynamicParticles;
    (this->ResimDynamicKinematicParticles).ContainerListMask = ResimDynamicKinematicParticles;
    (this->ResimStaticParticles).ContainerListMask = ResimStaticParticles;
    (this->ResimKinematicParticles).ContainerListMask = ResimKinematicParticles;
    (this->StaticClusteredMapArray).ContainerListMask = StaticClusteredMapArray;
    (this->KinematicClusteredMapArray).ContainerListMask = KinematicClusteredMapArray;
    (this->DynamicClusteredMapArray).ContainerListMask = DynamicClusteredMapArray;
  }
  UpdateViews(this);
  return;
}

// SetClusteredParticleSOA @ 143d6e2b0

void __thiscall
Chaos::FPBDRigidsSOAs::SetClusteredParticleSOA
          (FPBDRigidsSOAs *this,TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  EObjectStateType EVar2;
  bool bVar3;
  bool *pbVar4;
  TPBDGeometryCollectionParticleHandleImp<double,3,1> *pTVar5;
  TPBDGeometryCollectionParticleHandleImp<double,3,1> *pTVar6;
  
  EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                    ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  if (EVar2 != Kinematic) {
    if ((this->MovingKinematicsMapArray).ContainerListMask == None) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                         ,0x425,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
              ((TGeometryParticleHandleImp<double,3,1> *)param_1,
               (this->MovingKinematicsMapArray).ContainerListMask);
    TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
              (&this->MovingKinematicsMapArray,(TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  }
  pTVar6 = (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)0x0;
  pTVar5 = pTVar6;
  if (5 < (byte)param_1->field_0xc) {
    pTVar5 = (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)param_1;
  }
  if (pTVar5 == (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)0x0) {
    if (param_1->field_0xc == 6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClusteredParticle->GetParticleType() != Chaos::EParticleType::GeometryCollection"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                         ,0x31d,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    RemoveClusteredParticle(this,param_1);
    InsertClusteredParticle(this,param_1);
  }
  else {
    RemoveGeometryCollectionParticle(this,pTVar5);
    InsertGeometryCollectionParticle(this,pTVar5);
  }
  EVar2 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                    ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
  if (EVar2 == Dynamic) {
    pbVar4 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                       ((TPBDRigidParticleHandleImp<double,3,1> *)param_1);
    if (*pbVar4 == false) {
      if (1 < (byte)param_1->field_0xc) {
        pTVar6 = (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)param_1;
      }
      AddToActiveArray(this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar6);
      goto LAB_143d6e3d1;
    }
  }
  if (1 < (byte)param_1->field_0xc) {
    pTVar6 = (TPBDGeometryCollectionParticleHandleImp<double,3,1> *)param_1;
  }
  RemoveFromActiveArray(this,(TPBDRigidParticleHandleImp<double,3,1> *)pTVar6,true);
LAB_143d6e3d1:
  if (CVars::bChaosSolverCheckParticleViews != false) {
    CheckParticleViewMaskImpl(this,(TGeometryParticleHandleImp<double,3,1> *)param_1);
  }
  UpdateViews(this);
  return;
}

// SetContainerListMasks @ 143d6e620

void __thiscall Chaos::FPBDRigidsSOAs::SetContainerListMasks(FPBDRigidsSOAs *this)

{
  ((this->StaticParticles).Ptr)->MContainerListMask = StaticParticles;
  ((this->StaticDisabledParticles).Ptr)->MContainerListMask = StaticDisabledParticles;
  *(undefined4 *)((longlong)&((this->KinematicParticles).Ptr)->_padding_ + 4) = 4;
  *(undefined4 *)((longlong)&((this->KinematicDisabledParticles).Ptr)->_padding_ + 4) = 8;
  *(undefined4 *)((longlong)&((this->DynamicDisabledParticles).Ptr)->_padding_ + 4) = 0x10;
  *(undefined4 *)((longlong)&((this->DynamicParticles).Ptr)->_padding_ + 4) = 0x20;
  *(undefined4 *)((longlong)&((this->DynamicKinematicParticles).Ptr)->_padding_ + 4) = 0x40;
  *(undefined4 *)((longlong)&((this->ClusteredParticles).Ptr)->_padding_ + 4) = 0x80;
  *(undefined4 *)&((this->GeometryCollectionParticles).Ptr)->field_0x74 = 0x100;
  (this->StaticGeometryCollectionArray).ContainerListMask = StaticGeometryCollectionArray;
  (this->KinematicGeometryCollectionArray).ContainerListMask = KinematicGeometryCollectionArray;
  (this->SleepingGeometryCollectionArray).ContainerListMask = SleepingGeometryCollectionArray;
  (this->DynamicGeometryCollectionArray).ContainerListMask = DynamicGeometryCollectionArray;
  (this->ActiveParticlesMapArray).ContainerListMask = ActiveParticlesMapArray;
  (this->TransientDirtyMapArray).ContainerListMask = TransientDirtyMapArray;
  (this->MovingKinematicsMapArray).ContainerListMask = MovingKinematicsMapArray;
  (this->ResimActiveParticlesMapArray).ContainerListMask = ResimActiveParticlesMapArray;
  (this->ResimDynamicParticles).ContainerListMask = ResimDynamicParticles;
  (this->ResimDynamicKinematicParticles).ContainerListMask = ResimDynamicKinematicParticles;
  (this->ResimStaticParticles).ContainerListMask = ResimStaticParticles;
  (this->ResimKinematicParticles).ContainerListMask = ResimKinematicParticles;
  (this->StaticClusteredMapArray).ContainerListMask = StaticClusteredMapArray;
  (this->KinematicClusteredMapArray).ContainerListMask = KinematicClusteredMapArray;
  (this->DynamicClusteredMapArray).ContainerListMask = DynamicClusteredMapArray;
  return;
}

// UpdateViews @ 143d81430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall Chaos::FPBDRigidsSOAs::UpdateViews(FPBDRigidsSOAs *this)

{
  TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> *pTVar1;
  TParticleView<Chaos::TPBDRigidParticles<double,3>_> *pTVar2;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar3;
  TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *pTVar4;
  TParticleView<Chaos::TPBDGeometryCollectionParticles<double,3>_> *pTVar5;
  undefined4 uVar6;
  TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar8;
  TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  *pTVar9;
  ForAnyElementType *pFVar10;
  FScriptContainerElement *pFVar11;
  TPBDRigidParticles<double,3> *pTVar12;
  FScriptContainerElement *pFVar13;
  TParticleView<Chaos::TPBDRigidClusteredParticles<double,3>_> *pTVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  byte bVar18;
  int iVar19;
  TPBDRigidParticles<double,3> *pTVar20;
  ForAnyElementType FVar21;
  byte bVar22;
  bool bVar23;
  undefined1 auStackY_368 [32];
  TSOAView<Chaos::TPBDRigidParticles<double,3>_> local_328;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  longlong local_2f8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTStack_2f0;
  ForAnyElementType local_2e8;
  undefined4 local_2e0;
  int local_2dc;
  ForAnyElementType local_2d8;
  undefined4 local_2d0;
  int iStack_2cc;
  ForAnyElementType local_2c8;
  undefined4 local_2c0;
  int local_2bc;
  ForAnyElementType local_2b8;
  undefined4 local_2b0;
  int iStack_2ac;
  ForAnyElementType local_2a8;
  undefined4 local_2a0;
  int local_29c;
  ForAnyElementType local_298;
  undefined4 local_290;
  int local_28c;
  TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
  local_288;
  undefined1 local_278 [16];
  undefined8 local_268;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTStack_260;
  undefined4 local_258;
  ForAnyElementType local_250;
  undefined8 local_248;
  ForAnyElementType local_240;
  undefined8 local_238;
  undefined8 local_230 [3];
  longlong local_218 [3];
  undefined8 local_200 [3];
  undefined8 local_1e8 [3];
  undefined8 local_1d0 [3];
  undefined8 local_1b8 [3];
  longlong local_1a0 [3];
  undefined8 local_188 [3];
  longlong local_170 [3];
  undefined8 local_158 [3];
  undefined8 local_140 [3];
  TSOAView<Chaos::TPBDRigidParticles<double,3>_> local_128;
  TPBDRigidParticles<double,3> *local_118;
  TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *pTStack_110;
  undefined1 local_108 [16];
  longlong local_f8;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTStack_f0;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_e8;
  TKinematicGeometryParticlesImp<double,3,0> *local_d8;
  undefined8 uStack_d0;
  TPBDRigidParticles<double,3> *local_c8;
  undefined8 uStack_c0;
  TPBDRigidParticles<double,3> *local_b8;
  undefined8 uStack_b0;
  TPBDRigidParticles<double,3> *local_a8;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTStack_a0;
  TPBDRigidParticles<double,3> *local_98;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTStack_90;
  TPBDRigidParticles<double,3> *local_88;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTStack_80;
  TPBDRigidClusteredParticles<double,3> *local_78;
  TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTStack_70;
  TPBDGeometryCollectionParticles<double,3> *local_68;
  TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTStack_60;
  undefined8 local_58;
  TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *local_50;
  undefined8 local_48;
  TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *local_40;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data =
       (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStackY_368);
  iVar16 = 0;
  local_258 = 0;
  if (this->bResimulating == false) {
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)(this->StaticParticles).Ptr;
    local_d8 = (this->KinematicParticles).Ptr;
    local_c8 = (this->DynamicParticles).Ptr;
    local_b8 = (this->DynamicKinematicParticles).Ptr;
    pTStack_a0 = &(this->StaticClusteredMapArray).ParticleArray;
    pTStack_90 = &(this->KinematicClusteredMapArray).ParticleArray;
    pTStack_80 = &(this->DynamicClusteredMapArray).ParticleArray;
    pTStack_70 = &(this->StaticGeometryCollectionArray).ParticleArray;
    pTStack_60 = &(this->KinematicGeometryCollectionArray).ParticleArray;
    local_50 = &(this->SleepingGeometryCollectionArray).ParticleArray;
    local_40 = &(this->DynamicGeometryCollectionArray).ParticleArray;
    local_318._0_8_ = &local_e8;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    local_318._8_8_ = &local_38;
    uStack_d0 = 0;
    uStack_c0 = 0;
    uStack_b0 = 0;
    local_a8 = (TPBDRigidParticles<double,3> *)0x0;
    local_98 = (TPBDRigidParticles<double,3> *)0x0;
    local_88 = (TPBDRigidParticles<double,3> *)0x0;
    local_78 = (TPBDRigidClusteredParticles<double,3> *)0x0;
    local_68 = (TPBDGeometryCollectionParticles<double,3> *)0x0;
    local_58 = 0;
    local_48 = 0;
    pTVar9 = TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
             ::
             TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                       ((TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                         *)local_278,
                        (initializer_list<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>_>
                         *)local_318);
    pTVar20 = (TPBDRigidParticles<double,3> *)(pTVar9->AllocatorInstance).Data;
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    iVar17 = pTVar9->ArrayNum;
    iVar19 = pTVar9->ArrayMax;
    pTVar9->ArrayNum = 0;
    pTVar9->ArrayMax = 0;
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
  }
  else {
    local_128.HandlesArray =
         (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
         &this->ResimStaticParticles;
    local_128.SOA = (TPBDRigidParticles<double,3> *)0x0;
    pTStack_110 = &this->ResimKinematicParticles;
    local_118 = (TPBDRigidParticles<double,3> *)0x0;
    local_108._8_8_ = &(this->ResimDynamicParticles).ParticleArray;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    pTStack_f0 = &(this->ResimDynamicKinematicParticles).ParticleArray;
    local_f8 = 0;
    local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
    local_328.HandlesArray._0_4_ = 4;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,0,(ForAnyElementType *)&local_328,4,(int *)((longlong)&local_328 + 0xc));
    iVar19 = local_328.HandlesArray._4_4_;
    iVar17 = (int)local_328.HandlesArray;
    pTVar20 = local_328.SOA;
    (local_328.SOA)->_padding_ = (longlong)local_128.SOA;
    *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
     ((longlong)local_328.SOA + 8) = local_128.HandlesArray;
    *(TPBDRigidParticles<double,3> **)((longlong)local_328.SOA + 0x10) = local_118;
    *(TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> **)
     ((longlong)local_328.SOA + 0x18) = pTStack_110;
    *(undefined8 *)((longlong)local_328.SOA + 0x20) = local_108._0_8_;
    *(undefined8 *)((longlong)local_328.SOA + 0x28) = local_108._8_8_;
    *(longlong *)((longlong)local_328.SOA + 0x30) = local_f8;
    *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
     ((longlong)local_328.SOA + 0x38) = pTStack_f0;
    local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
    local_328.HandlesArray =
         (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
  }
  pFVar11 = (FScriptContainerElement *)pTVar20;
  while (pFVar11 != (FScriptContainerElement *)((longlong)pTVar20 + (longlong)iVar17 * 0x10)) {
    if (*(longlong *)((longlong)pFVar11 + 8) == 0) {
      iVar16 = iVar16 + *(int *)(*(longlong *)&pFVar11->field_0x0 + 0x18);
      pFVar11 = (FScriptContainerElement *)((longlong)pFVar11 + 0x10);
    }
    else {
      iVar16 = iVar16 + *(int *)(*(longlong *)((longlong)pFVar11 + 8) + 8);
      pFVar11 = (FScriptContainerElement *)((longlong)pFVar11 + 0x10);
    }
  }
  pTVar1 = &this->NonDisabledView;
  if (pTVar1 != (TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_230) {
    if (*(void **)pTVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar1);
    }
    *(TPBDRigidParticles<double,3> **)pTVar1 = pTVar20;
    pTVar20 = (TPBDRigidParticles<double,3> *)0x0;
    *(int *)&(this->NonDisabledView).field_0x8 = iVar17;
    *(int *)&(this->NonDisabledView).field_0xc = iVar19;
  }
  *(int *)&(this->NonDisabledView).field_0x10 = iVar16;
  if (pTVar20 != (TPBDRigidParticles<double,3> *)0x0) {
    FMemory::Free(pTVar20);
  }
  iVar16 = 0;
  if (this->bResimulating == false) {
    local_128.SOA = (this->DynamicParticles).Ptr;
    pTStack_110 = (TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *)
                  &(this->DynamicClusteredMapArray).ParticleArray;
    local_108._8_8_ = &(this->SleepingGeometryCollectionArray).ParticleArray;
    pTStack_f0 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                  *)&(this->DynamicGeometryCollectionArray).ParticleArray;
    local_318._0_8_ = &local_128;
    local_318._8_8_ = &local_e8;
    local_128.HandlesArray =
         (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
    local_118 = (TPBDRigidParticles<double,3> *)0x0;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    local_f8 = 0;
    pTVar7 = TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
             ::
             TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                       ((TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                         *)local_278,
                        (initializer_list<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>_> *)
                        local_318);
    bVar18 = 8;
  }
  else {
    local_328.HandlesArray = &(this->ResimDynamicParticles).ParticleArray;
    local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
    local_318._0_8_ = &local_328;
    local_318._8_8_ = local_318;
    pTVar7 = TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
             ::
             TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                       ((TArray<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>,TSizedDefaultAllocator<32>_>
                         *)local_308,
                        (initializer_list<Chaos::TSOAView<Chaos::TPBDRigidParticles<double,3>_>_> *)
                        local_318);
    bVar18 = 4;
  }
  pFVar11 = (pTVar7->AllocatorInstance).Data;
  (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar17 = pTVar7->ArrayNum;
  iVar19 = pTVar7->ArrayMax;
  pTVar7->ArrayNum = 0;
  pTVar7->ArrayMax = 0;
  if ((bVar18 & 8) != 0) {
    bVar18 = bVar18 & 0xf7;
    if ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_278._0_8_);
    }
  }
  if ((bVar18 & 4) != 0) {
    bVar18 = bVar18 & 0xfb;
    if ((FScriptContainerElement *)local_308._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_308._0_8_);
    }
  }
  pFVar13 = pFVar11;
  while (pFVar13 != pFVar11 + (longlong)iVar17 * 0x10) {
    if (*(longlong *)(pFVar13 + 8) == 0) {
      iVar16 = iVar16 + *(int *)(*(longlong *)pFVar13 + 0x18);
      pFVar13 = pFVar13 + 0x10;
    }
    else {
      iVar16 = iVar16 + *(int *)(*(longlong *)(pFVar13 + 8) + 8);
      pFVar13 = pFVar13 + 0x10;
    }
  }
  pTVar2 = &this->NonDisabledDynamicView;
  if (pTVar2 != (TParticleView<Chaos::TPBDRigidParticles<double,3>_> *)local_218) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(FScriptContainerElement **)pTVar2 = pFVar11;
    pFVar11 = (FScriptContainerElement *)0x0;
    *(int *)&(this->NonDisabledDynamicView).field_0x8 = iVar17;
    *(int *)&(this->NonDisabledDynamicView).field_0xc = iVar19;
  }
  *(int *)&(this->NonDisabledDynamicView).field_0x10 = iVar16;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  iVar17 = 0;
  local_328.HandlesArray._0_4_ = 2;
  local_308._8_8_ = &(this->ActiveParticlesMapArray).ParticleArray;
  local_308._0_8_ = (FScriptContainerElement *)0x0;
  pTStack_2f0 = &(this->MovingKinematicsMapArray).ParticleArray;
  local_2f8 = 0;
  local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,2,0,(ForAnyElementType *)&local_328,2,(int *)((longlong)&local_328 + 0xc));
  uVar6 = local_328.HandlesArray._4_4_;
  iVar16 = (int)local_328.HandlesArray;
  pTVar20 = local_328.SOA;
  (local_328.SOA)->_padding_ = local_308._0_8_;
  *(undefined8 *)((longlong)local_328.SOA + 8) = local_308._8_8_;
  *(longlong *)((longlong)local_328.SOA + 0x10) = local_2f8;
  *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
   ((longlong)local_328.SOA + 0x18) = pTStack_2f0;
  pFVar11 = (FScriptContainerElement *)
            ((longlong)local_328.SOA + (longlong)(int)local_328.HandlesArray * 0x10);
  local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
  local_328.HandlesArray =
       (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
  pTVar12 = pTVar20;
  while (pTVar12 != (TPBDRigidParticles<double,3> *)pFVar11) {
    if (*(longlong *)((longlong)pTVar12 + 8) == 0) {
      iVar17 = iVar17 + *(int *)(*(longlong *)&((FScriptContainerElement *)pTVar12)->field_0x0 +
                                0x18);
      pTVar12 = (TPBDRigidParticles<double,3> *)((longlong)pTVar12 + 0x10);
    }
    else {
      iVar17 = iVar17 + *(int *)(*(longlong *)((longlong)pTVar12 + 8) + 8);
      pTVar12 = (TPBDRigidParticles<double,3> *)((longlong)pTVar12 + 0x10);
    }
  }
  pTVar2 = &this->ActiveDynamicMovingKinematicParticlesView;
  if (pTVar2 != (TParticleView<Chaos::TPBDRigidParticles<double,3>_> *)local_200) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(TPBDRigidParticles<double,3> **)pTVar2 = pTVar20;
    pTVar20 = (TPBDRigidParticles<double,3> *)0x0;
    *(int *)&(this->ActiveDynamicMovingKinematicParticlesView).field_0x8 = iVar16;
    *(undefined4 *)&(this->ActiveDynamicMovingKinematicParticlesView).field_0xc = uVar6;
  }
  *(int *)&(this->ActiveDynamicMovingKinematicParticlesView).field_0x10 = iVar17;
  if (pTVar20 != (TPBDRigidParticles<double,3> *)0x0) {
    FMemory::Free(pTVar20);
  }
  if (local_328.SOA != (TPBDRigidParticles<double,3> *)0x0) {
    FMemory::Free(local_328.SOA);
  }
  iVar16 = 0;
  if (this->bResimulating == false) {
    local_128.HandlesArray = &(this->ActiveParticlesMapArray).ParticleArray;
    local_128.SOA = (TPBDRigidParticles<double,3> *)0x0;
    pTStack_110 = (TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *)
                  &(this->StaticGeometryCollectionArray).ParticleArray;
    local_118 = (TPBDRigidParticles<double,3> *)0x0;
    local_108._8_8_ = &(this->KinematicGeometryCollectionArray).ParticleArray;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    local_2e8.Data = (FScriptContainerElement *)0x0;
    local_2e0 = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,3,0,&local_2e8,3,&local_2dc);
    bVar15 = 0x20;
    *(TPBDRigidParticles<double,3> **)local_2e8.Data = local_128.SOA;
    *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
     (local_2e8.Data + 8) = local_128.HandlesArray;
    *(TPBDRigidParticles<double,3> **)(local_2e8.Data + 0x10) = local_118;
    *(TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> **)
     (local_2e8.Data + 0x18) = pTStack_110;
    *(undefined8 *)(local_2e8.Data + 0x20) = local_108._0_8_;
    *(undefined8 *)(local_2e8.Data + 0x28) = local_108._8_8_;
    pFVar10 = &local_2e8;
    FVar21.Data = local_2e8.Data;
  }
  else {
    local_318._8_8_ = &(this->ResimActiveParticlesMapArray).ParticleArray;
    local_318._0_8_ = (TSOAView<Chaos::TPBDRigidParticles<double,3>_> *)0x0;
    local_2d8.Data = (FScriptContainerElement *)0x0;
    local_2d0 = 1;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,1,0,&local_2d8,1,&iStack_2cc);
    bVar15 = 0x10;
    *(undefined8 *)local_2d8.Data = local_318._0_8_;
    *(undefined8 *)(local_2d8.Data + 8) = local_318._8_8_;
    pFVar10 = &local_2d8;
    FVar21.Data = local_2d8.Data;
  }
  pFVar10->Data = (FScriptContainerElement *)0x0;
  bVar22 = bVar15 | bVar18;
  iVar17 = *(int *)&pFVar10[1].Data;
  uVar6 = *(undefined4 *)((longlong)&pFVar10[1].Data + 4);
  pFVar10[1].Data = (FScriptContainerElement *)0x0;
  if ((bVar15 & 0x20) != 0) {
    bVar22 = bVar15 & 0xdf | bVar18;
    if (local_2e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data);
    }
  }
  if ((bVar22 & 0x10) != 0) {
    bVar22 = bVar22 & 0xef;
    if (local_2d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data);
    }
  }
  pFVar11 = FVar21.Data;
  while (pFVar11 != FVar21.Data + (longlong)iVar17 * 0x10) {
    if (*(longlong *)(pFVar11 + 8) == 0) {
      iVar16 = iVar16 + *(int *)(*(longlong *)pFVar11 + 0x18);
      pFVar11 = pFVar11 + 0x10;
    }
    else {
      iVar16 = iVar16 + *(int *)(*(longlong *)(pFVar11 + 8) + 8);
      pFVar11 = pFVar11 + 0x10;
    }
  }
  pTVar2 = &this->ActiveParticlesView;
  if (pTVar2 != (TParticleView<Chaos::TPBDRigidParticles<double,3>_> *)local_1e8) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(FScriptContainerElement **)pTVar2 = FVar21.Data;
    FVar21.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->ActiveParticlesView).field_0x8 = iVar17;
    *(undefined4 *)&(this->ActiveParticlesView).field_0xc = uVar6;
  }
  *(int *)&(this->ActiveParticlesView).field_0x10 = iVar16;
  if (FVar21.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar21.Data);
  }
  iVar16 = 0;
  pTVar3 = &(this->TransientDirtyMapArray).ParticleArray;
  if (this->bResimulating == false) {
    local_128.HandlesArray = &(this->ActiveParticlesMapArray).ParticleArray;
    pTStack_110 = (TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *)
                  &(this->MovingKinematicsMapArray).ParticleArray;
    local_128.SOA = (TPBDRigidParticles<double,3> *)0x0;
    local_108._8_8_ = &(this->SleepingGeometryCollectionArray).ParticleArray;
    local_118 = (TPBDRigidParticles<double,3> *)0x0;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    local_f8 = 0;
    local_2c8.Data = (FScriptContainerElement *)0x0;
    local_2c0 = 4;
    pTStack_f0 = pTVar3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,4,0,&local_2c8,4,&local_2bc);
    bVar18 = 0x80;
    *(TPBDRigidParticles<double,3> **)local_2c8.Data = local_128.SOA;
    *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
     (local_2c8.Data + 8) = local_128.HandlesArray;
    *(TPBDRigidParticles<double,3> **)(local_2c8.Data + 0x10) = local_118;
    *(TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> **)
     (local_2c8.Data + 0x18) = pTStack_110;
    *(undefined8 *)(local_2c8.Data + 0x20) = local_108._0_8_;
    *(undefined8 *)(local_2c8.Data + 0x28) = local_108._8_8_;
    *(longlong *)(local_2c8.Data + 0x30) = local_f8;
    *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
     (local_2c8.Data + 0x38) = pTStack_f0;
    pFVar10 = &local_2c8;
    FVar21.Data = local_2c8.Data;
  }
  else {
    local_308._8_8_ = &(this->ResimActiveParticlesMapArray).ParticleArray;
    local_308._0_8_ = (FScriptContainerElement *)0x0;
    local_2f8 = 0;
    local_2b8.Data = (FScriptContainerElement *)0x0;
    local_2b0 = 2;
    pTStack_2f0 = pTVar3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,2,0,&local_2b8,2,&iStack_2ac);
    bVar18 = 0x40;
    *(undefined8 *)local_2b8.Data = local_308._0_8_;
    *(undefined8 *)(local_2b8.Data + 8) = local_308._8_8_;
    *(longlong *)(local_2b8.Data + 0x10) = local_2f8;
    *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
     (local_2b8.Data + 0x18) = pTStack_2f0;
    pFVar10 = &local_2b8;
    FVar21.Data = local_2b8.Data;
  }
  pFVar10->Data = (FScriptContainerElement *)0x0;
  bVar22 = bVar18 | bVar22;
  iVar17 = *(int *)&pFVar10[1].Data;
  uVar6 = *(undefined4 *)((longlong)&pFVar10[1].Data + 4);
  pFVar10[1].Data = (FScriptContainerElement *)0x0;
  if ((char)bVar22 < '\0') {
    bVar22 = bVar18 & 0x7f;
    if (local_2c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c8.Data);
    }
  }
  if (((bVar22 & 0x40) != 0) && (local_2b8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2b8.Data);
  }
  pFVar11 = FVar21.Data;
  while (pFVar11 != FVar21.Data + (longlong)iVar17 * 0x10) {
    if (*(longlong *)(pFVar11 + 8) == 0) {
      iVar16 = iVar16 + *(int *)(*(longlong *)pFVar11 + 0x18);
      pFVar11 = pFVar11 + 0x10;
    }
    else {
      iVar16 = iVar16 + *(int *)(*(longlong *)(pFVar11 + 8) + 8);
      pFVar11 = pFVar11 + 0x10;
    }
  }
  pTVar2 = &this->DirtyParticlesView;
  if (pTVar2 != (TParticleView<Chaos::TPBDRigidParticles<double,3>_> *)local_1d0) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(FScriptContainerElement **)pTVar2 = FVar21.Data;
    FVar21.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->DirtyParticlesView).field_0x8 = iVar17;
    *(undefined4 *)&(this->DirtyParticlesView).field_0xc = uVar6;
  }
  *(int *)&(this->DirtyParticlesView).field_0x10 = iVar16;
  if (FVar21.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar21.Data);
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)(this->StaticParticles).Ptr;
  iVar17 = 0;
  local_d8 = (TKinematicGeometryParticlesImp<double,3,0> *)(this->StaticDisabledParticles).Ptr;
  local_c8 = (TPBDRigidParticles<double,3> *)(this->KinematicParticles).Ptr;
  local_b8 = (TPBDRigidParticles<double,3> *)(this->KinematicDisabledParticles).Ptr;
  local_a8 = (this->DynamicParticles).Ptr;
  local_98 = (this->DynamicDisabledParticles).Ptr;
  local_88 = (this->DynamicKinematicParticles).Ptr;
  local_78 = (this->ClusteredParticles).Ptr;
  local_68 = (this->GeometryCollectionParticles).Ptr;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  uStack_d0 = 0;
  uStack_c0 = 0;
  uStack_b0 = 0;
  pTStack_a0 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)0x0;
  pTStack_90 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)0x0;
  pTStack_80 = (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)0x0;
  pTStack_70 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)0x0;
  pTStack_60 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                *)0x0;
  local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
  local_328.HandlesArray._0_4_ = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,9,0,(ForAnyElementType *)&local_328,9,(int *)((longlong)&local_328 + 0xc));
  uVar6 = local_328.HandlesArray._4_4_;
  iVar16 = (int)local_328.HandlesArray;
  pTVar20 = local_328.SOA;
  (local_328.SOA)->_padding_ = (longlong)local_e8.AllocatorInstance.Data;
  *(undefined8 *)((longlong)local_328.SOA + 8) = local_e8._8_8_;
  *(TKinematicGeometryParticlesImp<double,3,0> **)((longlong)local_328.SOA + 0x10) = local_d8;
  *(undefined8 *)((longlong)local_328.SOA + 0x18) = uStack_d0;
  *(TPBDRigidParticles<double,3> **)((longlong)local_328.SOA + 0x20) = local_c8;
  *(undefined8 *)((longlong)local_328.SOA + 0x28) = uStack_c0;
  *(TPBDRigidParticles<double,3> **)((longlong)local_328.SOA + 0x30) = local_b8;
  *(undefined8 *)((longlong)local_328.SOA + 0x38) = uStack_b0;
  *(TPBDRigidParticles<double,3> **)((longlong)local_328.SOA + 0x40) = local_a8;
  *(TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
   ((longlong)local_328.SOA + 0x48) = pTStack_a0;
  *(TPBDRigidParticles<double,3> **)((longlong)local_328.SOA + 0x50) = local_98;
  *(TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
   ((longlong)local_328.SOA + 0x58) = pTStack_90;
  *(TPBDRigidParticles<double,3> **)((longlong)local_328.SOA + 0x60) = local_88;
  *(TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
   ((longlong)local_328.SOA + 0x68) = pTStack_80;
  *(TPBDRigidClusteredParticles<double,3> **)((longlong)local_328.SOA + 0x70) = local_78;
  *(TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
    **)((longlong)local_328.SOA + 0x78) = pTStack_70;
  *(TPBDGeometryCollectionParticles<double,3> **)((longlong)local_328.SOA + 0x80) = local_68;
  *(TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
    **)((longlong)local_328.SOA + 0x88) = pTStack_60;
  pFVar11 = (FScriptContainerElement *)
            ((longlong)local_328.SOA + (longlong)(int)local_328.HandlesArray * 0x10);
  local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
  local_328.HandlesArray =
       (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
  pTVar12 = pTVar20;
  while (pTVar12 != (TPBDRigidParticles<double,3> *)pFVar11) {
    if (*(longlong *)((longlong)pTVar12 + 8) == 0) {
      iVar17 = iVar17 + *(int *)(*(longlong *)&((FScriptContainerElement *)pTVar12)->field_0x0 +
                                0x18);
      pTVar12 = (TPBDRigidParticles<double,3> *)((longlong)pTVar12 + 0x10);
    }
    else {
      iVar17 = iVar17 + *(int *)(*(longlong *)((longlong)pTVar12 + 8) + 8);
      pTVar12 = (TPBDRigidParticles<double,3> *)((longlong)pTVar12 + 0x10);
    }
  }
  pTVar1 = &this->AllParticlesView;
  if (pTVar1 != (TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_1b8) {
    if (*(void **)pTVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar1);
    }
    *(TPBDRigidParticles<double,3> **)pTVar1 = pTVar20;
    pTVar20 = (TPBDRigidParticles<double,3> *)0x0;
    *(int *)&(this->AllParticlesView).field_0x8 = iVar16;
    *(undefined4 *)&(this->AllParticlesView).field_0xc = uVar6;
  }
  *(int *)&(this->AllParticlesView).field_0x10 = iVar17;
  if (pTVar20 != (TPBDRigidParticles<double,3> *)0x0) {
    FMemory::Free(pTVar20);
  }
  if (local_328.SOA != (TPBDRigidParticles<double,3> *)0x0) {
    FMemory::Free(local_328.SOA);
  }
  iVar16 = 0;
  bVar23 = this->bResimulating == false;
  if (bVar23) {
    local_128.SOA = (TPBDRigidParticles<double,3> *)(this->KinematicParticles).Ptr;
    local_118 = (this->DynamicKinematicParticles).Ptr;
    local_108._8_8_ = &(this->KinematicGeometryCollectionArray).ParticleArray;
    pTStack_f0 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                  *)&(this->KinematicClusteredMapArray).ParticleArray;
    local_318._0_8_ = &local_128;
    local_318._8_8_ = &local_e8;
    local_128.HandlesArray =
         (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
    pTStack_110 = (TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *)0x0;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    local_f8 = 0;
    pTVar8 = TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
             ::
             TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                       ((TArray<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                         *)local_308,
                        (initializer_list<Chaos::TSOAView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>_>
                         *)local_318);
  }
  else {
    local_278._8_8_ = &this->ResimKinematicParticles;
    local_278._0_8_ = (FScriptContainerElement *)0x0;
    pTStack_260 = &(this->ResimDynamicKinematicParticles).ParticleArray;
    local_268 = 0;
    local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.ArrayNum = 2;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,2,0,&local_288.AllocatorInstance,2,&local_288.ArrayMax);
    *(undefined8 *)local_288.AllocatorInstance.Data = local_278._0_8_;
    *(undefined8 *)(local_288.AllocatorInstance.Data + 8) = local_278._8_8_;
    *(undefined8 *)(local_288.AllocatorInstance.Data + 0x10) = local_268;
    *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
     (local_288.AllocatorInstance.Data + 0x18) = pTStack_260;
    pTVar8 = &local_288;
  }
  pFVar11 = (pTVar8->AllocatorInstance).Data;
  (pTVar8->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar17 = pTVar8->ArrayNum;
  iVar19 = pTVar8->ArrayMax;
  pTVar8->ArrayNum = 0;
  pTVar8->ArrayMax = 0;
  if ((bVar23) && ((FScriptContainerElement *)local_308._0_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_308._0_8_);
  }
  if ((!bVar23) && (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  pFVar13 = pFVar11;
  while (pFVar13 != pFVar11 + (longlong)iVar17 * 0x10) {
    if (*(longlong *)(pFVar13 + 8) == 0) {
      iVar16 = iVar16 + *(int *)(*(longlong *)pFVar13 + 0x18);
      pFVar13 = pFVar13 + 0x10;
    }
    else {
      iVar16 = iVar16 + *(int *)(*(longlong *)(pFVar13 + 8) + 8);
      pFVar13 = pFVar13 + 0x10;
    }
  }
  pTVar4 = &this->ActiveKinematicParticlesView;
  if (pTVar4 != (TParticleView<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> *)local_1a0) {
    if (*(void **)pTVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar4);
    }
    *(FScriptContainerElement **)pTVar4 = pFVar11;
    pFVar11 = (FScriptContainerElement *)0x0;
    *(int *)&(this->ActiveKinematicParticlesView).field_0x8 = iVar17;
    *(int *)&(this->ActiveKinematicParticlesView).field_0xc = iVar19;
  }
  *(int *)&(this->ActiveKinematicParticlesView).field_0x10 = iVar16;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  local_318._8_8_ = &(this->MovingKinematicsMapArray).ParticleArray;
  local_328.HandlesArray._0_4_ = 1;
  iVar17 = 0;
  local_318._0_8_ = (TSOAView<Chaos::TPBDRigidParticles<double,3>_> *)0x0;
  local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,1,0,(ForAnyElementType *)&local_328,1,(int *)((longlong)&local_328 + 0xc));
  uVar6 = local_328.HandlesArray._4_4_;
  iVar16 = (int)local_328.HandlesArray;
  pTVar20 = local_328.SOA;
  (local_328.SOA)->_padding_ = local_318._0_8_;
  *(undefined8 *)((longlong)local_328.SOA + 8) = local_318._8_8_;
  pFVar11 = (FScriptContainerElement *)
            ((longlong)local_328.SOA + (longlong)(int)local_328.HandlesArray * 0x10);
  local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
  local_328.HandlesArray =
       (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
  pTVar12 = pTVar20;
  while (pTVar12 != (TPBDRigidParticles<double,3> *)pFVar11) {
    if (*(longlong *)((longlong)pTVar12 + 8) == 0) {
      iVar17 = iVar17 + *(int *)(*(longlong *)&((FScriptContainerElement *)pTVar12)->field_0x0 +
                                0x18);
      pTVar12 = (TPBDRigidParticles<double,3> *)((longlong)pTVar12 + 0x10);
    }
    else {
      iVar17 = iVar17 + *(int *)(*(longlong *)((longlong)pTVar12 + 8) + 8);
      pTVar12 = (TPBDRigidParticles<double,3> *)((longlong)pTVar12 + 0x10);
    }
  }
  pTVar2 = &this->ActiveMovingKinematicParticlesView;
  if (pTVar2 != (TParticleView<Chaos::TPBDRigidParticles<double,3>_> *)local_188) {
    if (*(void **)pTVar2 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar2);
    }
    *(TPBDRigidParticles<double,3> **)pTVar2 = pTVar20;
    pTVar20 = (TPBDRigidParticles<double,3> *)0x0;
    *(int *)&(this->ActiveMovingKinematicParticlesView).field_0x8 = iVar16;
    *(undefined4 *)&(this->ActiveMovingKinematicParticlesView).field_0xc = uVar6;
  }
  *(int *)&(this->ActiveMovingKinematicParticlesView).field_0x10 = iVar17;
  if (pTVar20 != (TPBDRigidParticles<double,3> *)0x0) {
    FMemory::Free(pTVar20);
  }
  if (local_328.SOA != (TPBDRigidParticles<double,3> *)0x0) {
    FMemory::Free(local_328.SOA);
  }
  bVar23 = this->bResimulating == false;
  if (bVar23) {
    local_128.SOA = (TPBDRigidParticles<double,3> *)(this->StaticParticles).Ptr;
    pTStack_110 = (TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *)
                  &(this->StaticClusteredMapArray).ParticleArray;
    local_318._0_8_ = &local_128;
    local_318._8_8_ = local_108;
    local_128.HandlesArray =
         (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)0x0;
    local_118 = (TPBDRigidParticles<double,3> *)0x0;
    pTVar9 = TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
             ::
             TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                       ((TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                         *)local_308,
                        (initializer_list<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>_>
                         *)local_318);
  }
  else {
    local_328.HandlesArray =
         (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
         &this->ResimStaticParticles;
    local_328.SOA = (TPBDRigidParticles<double,3> *)0x0;
    local_318._0_8_ = &local_328;
    local_318._8_8_ = local_318;
    pTVar9 = TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
             ::
             TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                       ((TArray<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>,TSizedDefaultAllocator<32>_>
                         *)local_278,
                        (initializer_list<Chaos::TSOAView<Chaos::TGeometryParticlesImp<double,3,0>_>_>
                         *)local_318);
  }
  pFVar11 = (pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar16 = pTVar9->ArrayNum;
  iVar17 = pTVar9->ArrayMax;
  pTVar9->ArrayNum = 0;
  pTVar9->ArrayMax = 0;
  if ((bVar23) && ((FScriptContainerElement *)local_308._0_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_308._0_8_);
  }
  if ((!bVar23) && ((FScriptContainerElement *)local_278._0_8_ != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_278._0_8_);
  }
  iVar19 = 0;
  pFVar13 = pFVar11;
  while (pFVar13 != pFVar11 + (longlong)iVar16 * 0x10) {
    if (*(longlong *)(pFVar13 + 8) == 0) {
      iVar19 = iVar19 + *(int *)(*(longlong *)pFVar13 + 0x18);
      pFVar13 = pFVar13 + 0x10;
    }
    else {
      iVar19 = iVar19 + *(int *)(*(longlong *)(pFVar13 + 8) + 8);
      pFVar13 = pFVar13 + 0x10;
    }
  }
  pTVar1 = &this->ActiveStaticParticlesView;
  pFVar13 = pFVar11;
  if (pTVar1 != (TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> *)local_170) {
    if (*(void **)pTVar1 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar1);
    }
    pFVar13 = (FScriptContainerElement *)0x0;
    *(FScriptContainerElement **)pTVar1 = pFVar11;
    *(int *)&(this->ActiveStaticParticlesView).field_0x8 = iVar16;
    *(int *)&(this->ActiveStaticParticlesView).field_0xc = iVar17;
  }
  *(int *)&(this->ActiveStaticParticlesView).field_0x10 = iVar19;
  if (pFVar13 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar13);
  }
  bVar23 = this->bResimulating == false;
  if (bVar23) {
    local_128.HandlesArray =
         (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
         &(this->StaticGeometryCollectionArray).ParticleArray;
    local_128.SOA = (TPBDRigidParticles<double,3> *)0x0;
    pTStack_110 = (TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *)
                  &(this->KinematicGeometryCollectionArray).ParticleArray;
    local_118 = (TPBDRigidParticles<double,3> *)0x0;
    local_108._8_8_ = &(this->DynamicGeometryCollectionArray).ParticleArray;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    local_2a8.Data = (FScriptContainerElement *)0x0;
    local_2a0 = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,3,0,&local_2a8,3,&local_29c);
    *(TPBDRigidParticles<double,3> **)local_2a8.Data = local_128.SOA;
    *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
     (local_2a8.Data + 8) = local_128.HandlesArray;
    *(TPBDRigidParticles<double,3> **)(local_2a8.Data + 0x10) = local_118;
    *(TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> **)
     (local_2a8.Data + 0x18) = pTStack_110;
    *(undefined8 *)(local_2a8.Data + 0x20) = local_108._0_8_;
    *(undefined8 *)(local_2a8.Data + 0x28) = local_108._8_8_;
    pFVar10 = &local_2a8;
    FVar21.Data = local_2a8.Data;
  }
  else {
    local_248 = 0;
    pFVar10 = &local_250;
    FVar21.Data = (FScriptContainerElement *)0x0;
  }
  pFVar10->Data = (FScriptContainerElement *)0x0;
  iVar16 = *(int *)&pFVar10[1].Data;
  uVar6 = *(undefined4 *)((longlong)&pFVar10[1].Data + 4);
  pFVar10[1].Data = (FScriptContainerElement *)0x0;
  if ((bVar23) && (local_2a8.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_2a8.Data);
  }
  if ((!bVar23) && (local_250.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_250.Data);
  }
  iVar17 = 0;
  pFVar11 = FVar21.Data;
  while (pFVar11 != FVar21.Data + (longlong)iVar16 * 0x10) {
    if (*(longlong *)(pFVar11 + 8) == 0) {
      iVar17 = iVar17 + *(int *)(*(longlong *)pFVar11 + 0x18);
      pFVar11 = pFVar11 + 0x10;
    }
    else {
      iVar17 = iVar17 + *(int *)(*(longlong *)(pFVar11 + 8) + 8);
      pFVar11 = pFVar11 + 0x10;
    }
  }
  pTVar5 = &this->ActiveGeometryCollectionParticlesView;
  pFVar11 = FVar21.Data;
  if (pTVar5 != (TParticleView<Chaos::TPBDGeometryCollectionParticles<double,3>_> *)local_158) {
    if (*(void **)pTVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar5);
    }
    pFVar11 = (FScriptContainerElement *)0x0;
    *(FScriptContainerElement **)pTVar5 = FVar21.Data;
    *(int *)&(this->ActiveGeometryCollectionParticlesView).field_0x8 = iVar16;
    *(undefined4 *)&(this->ActiveGeometryCollectionParticlesView).field_0xc = uVar6;
  }
  *(int *)&(this->ActiveGeometryCollectionParticlesView).field_0x10 = iVar17;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  bVar23 = this->bResimulating == false;
  if (bVar23) {
    local_128.HandlesArray =
         (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *)
         &(this->StaticClusteredMapArray).ParticleArray;
    local_128.SOA = (TPBDRigidParticles<double,3> *)0x0;
    pTStack_110 = (TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> *)
                  &(this->KinematicClusteredMapArray).ParticleArray;
    local_118 = (TPBDRigidParticles<double,3> *)0x0;
    local_108._8_8_ = &(this->DynamicClusteredMapArray).ParticleArray;
    local_108._0_8_ = (FScriptContainerElement *)0x0;
    local_298.Data = (FScriptContainerElement *)0x0;
    local_290 = 3;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,3,0,&local_298,3,&local_28c);
    *(TPBDRigidParticles<double,3> **)local_298.Data = local_128.SOA;
    *(TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> **)
     (local_298.Data + 8) = local_128.HandlesArray;
    *(TPBDRigidParticles<double,3> **)(local_298.Data + 0x10) = local_118;
    *(TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_> **)
     (local_298.Data + 0x18) = pTStack_110;
    *(undefined8 *)(local_298.Data + 0x20) = local_108._0_8_;
    *(undefined8 *)(local_298.Data + 0x28) = local_108._8_8_;
    pFVar10 = &local_298;
    FVar21.Data = local_298.Data;
  }
  else {
    local_238 = 0;
    pFVar10 = &local_240;
    FVar21.Data = (FScriptContainerElement *)0x0;
  }
  pFVar10->Data = (FScriptContainerElement *)0x0;
  iVar16 = *(int *)&pFVar10[1].Data;
  uVar6 = *(undefined4 *)((longlong)&pFVar10[1].Data + 4);
  pFVar10[1].Data = (FScriptContainerElement *)0x0;
  if ((bVar23) && (local_298.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_298.Data);
  }
  if ((!bVar23) && (local_240.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_240.Data);
  }
  iVar17 = 0;
  pFVar11 = FVar21.Data;
  while (pFVar11 != FVar21.Data + (longlong)iVar16 * 0x10) {
    if (*(longlong *)(pFVar11 + 8) == 0) {
      iVar17 = iVar17 + *(int *)(*(longlong *)pFVar11 + 0x18);
      pFVar11 = pFVar11 + 0x10;
    }
    else {
      iVar17 = iVar17 + *(int *)(*(longlong *)(pFVar11 + 8) + 8);
      pFVar11 = pFVar11 + 0x10;
    }
  }
  pTVar14 = &this->NonDisabledClusteredView;
  if (pTVar14 != (TParticleView<Chaos::TPBDRigidClusteredParticles<double,3>_> *)local_140) {
    if (*(void **)pTVar14 != (void *)0x0) {
      FMemory::Free(*(void **)pTVar14);
    }
    *(FScriptContainerElement **)pTVar14 = FVar21.Data;
    FVar21.Data = (FScriptContainerElement *)0x0;
    *(int *)&(this->NonDisabledClusteredView).field_0x8 = iVar16;
    *(undefined4 *)&(this->NonDisabledClusteredView).field_0xc = uVar6;
  }
  *(int *)&(this->NonDisabledClusteredView).field_0x10 = iVar17;
  if (FVar21.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar21.Data);
  }
  return;
}

// CreateParticlesHelper<Chaos::TGeometryParticleHandleImp<double,3,1>,Chaos::TGeometryParticlesImp<double,3,0>_> @ 14405cec0

TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FPBDRigidsSOAs::
CreateParticlesHelper<Chaos::TGeometryParticleHandleImp<double,3,1>,Chaos::TGeometryParticlesImp<double,3,0>_>
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,FUniqueIdx *param_2,
          TUniquePtr<Chaos::TGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TGeometryParticlesImp<double,3,0>_>_>
          *param_3,FGeometryParticleParameters *param_4)

{
  EGeometryParticleListMask *pEVar1;
  uint uVar2;
  int iVar3;
  EGeometryParticleListMask EVar4;
  TSerializablePtr<Chaos::TGeometryParticlesImp<double,3,0>_> this_00;
  longlong lVar5;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  code *pcVar6;
  FParticleID FVar7;
  bool bVar8;
  uint uVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  FParticleID *pFVar11;
  TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar12;
  int *piVar13;
  FUniqueIdx *pFVar14;
  TGeometryParticlesImp<double,3,0> *pTVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  FGeometryParticleParameters local_res10 [8];
  int local_res18;
  FUniqueIdx *local_res20;
  FUniqueIdx *local_80;
  ulonglong local_68;
  undefined1 local_60 [8];
  ulonglong local_58;
  undefined8 local_50 [2];
  
  pTVar15 = param_3->Ptr;
  uVar2 = *(uint *)&pTVar15->_padding_;
  uVar23 = (ulonglong)(int)uVar2;
  local_res18 = param_1;
  local_res20 = param_2;
  if (param_1 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)pTVar15,uVar2 + param_1);
  }
  piVar13 = (int *)((longlong)&pTVar15->_padding_ + 4);
  *piVar13 = *piVar13 + 1;
  lVar21 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_1,&__return_storage_ptr__->AllocatorInstance,
             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  iVar3 = (int)(this->ParticleHandles)._padding_;
  if ((param_1 != 0) &&
     (TArrayCollection::ResizeHelper((TArrayCollection *)&this->ParticleHandles,iVar3 + param_1),
     0 < param_1)) {
    local_80 = local_res20;
    local_68 = uVar23;
    local_58 = uVar23;
    do {
      this_00.Ptr = param_3->Ptr;
      local_res10[0].bDisabled = false;
      pTVar10 = ::operator_new(0x18);
      uVar22 = (uint)uVar23;
      if (pTVar10 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      }
      else {
        pTVar10 = TGeometryParticleHandleImp<double,3,1>::TGeometryParticleHandleImp<double,3,1>
                            (pTVar10,this_00,uVar22,(iVar3 - uVar2) + uVar22,local_res10);
      }
      TGeometryParticlesImp<double,3,0>::SetHandle(this_00.Ptr,uVar22,pTVar10);
      iVar20 = this->BiggestParticleID;
      this->BiggestParticleID = iVar20 + 1;
      if (iVar20 != -1) {
        pFVar11 = TGeometryParticlesImp<double,3,0>::ParticleID
                            ((TGeometryParticlesImp<double,3,0> *)pTVar10->_padding_,
                             (int)pTVar10->_padding_);
        FVar7.LocalID = iVar20;
        FVar7.GlobalID = -1;
        *pFVar11 = FVar7;
      }
      uVar9 = (uint)pTVar10->_padding_;
      lVar5 = pTVar10->_padding_;
      EVar4 = param_3->Ptr->MContainerListMask;
      uVar18 = 0;
      if ((int)uVar9 < *(int *)(lVar5 + 0x250)) {
        uVar18 = ~uVar9 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      uVar18 = -uVar2 + uVar22;
      pEVar1 = (EGeometryParticleListMask *)
               (*(longlong *)(lVar5 + 0x248) + (longlong)(int)uVar9 * 4);
      *pEVar1 = *pEVar1 | EVar4;
      uVar19 = ~uVar18 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar18 < __return_storage_ptr__->ArrayNum) {
        uVar9 = uVar19;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      *(TGeometryParticleHandleImp<double,3,1> **)
       ((__return_storage_ptr__->AllocatorInstance).Data + lVar21) = pTVar10;
      if (local_res20 == (FUniqueIdx *)0x0) {
        uVar9 = 0;
        if ((int)uVar18 < __return_storage_ptr__->ArrayNum) {
          uVar9 = uVar19;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar12;
        }
        puVar17 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar21);
        piVar13 = (int *)(**(code **)((longlong)*this->UniqueIndices + 8))
                                   (this->UniqueIndices,local_60);
        iVar16 = *(int *)(puVar17 + 1);
        pTVar15 = (TGeometryParticlesImp<double,3,0> *)*puVar17;
        iVar20 = *piVar13;
      }
      else {
        uVar9 = 0;
        if ((int)uVar18 < __return_storage_ptr__->ArrayNum) {
          uVar9 = uVar19;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar12;
        }
        puVar17 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar21);
        iVar20 = local_80->Idx;
        iVar16 = *(int *)(puVar17 + 1);
        pTVar15 = (TGeometryParticlesImp<double,3,0> *)*puVar17;
      }
      pFVar14 = TGeometryParticlesImp<double,3,0>::UniqueIdx(pTVar15,iVar16);
      uVar18 = (iVar3 - uVar2) + uVar22;
      pFVar14->Idx = iVar20;
      uVar9 = 0;
      if ((int)uVar18 < *(int *)&(this->ParticleHandles).Handles.field_0x10) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      puVar17 = (undefined8 *)
                (lVar21 + (longlong)iVar3 * 8 +
                *(longlong *)&(this->ParticleHandles).Handles.field_0x8);
      if (puVar17 != local_50) {
        this_01 = (TGeometryParticleHandleImp<double,3,1> *)*puVar17;
        *puVar17 = pTVar10;
        pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
        if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          TGeometryParticleHandleImp<double,3,1>::~TGeometryParticleHandleImp<double,3,1>(this_01);
          ::operator_delete(this_01,0x18);
        }
      }
      pTVar15 = param_3->Ptr;
      uVar9 = 0;
      if ((int)uVar22 < *(int *)&(pTVar15->MHasCollision).field_0x10) {
        uVar9 = ~uVar22 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      *(undefined1 *)(*(longlong *)&(pTVar15->MHasCollision).field_0x8 + local_68) = 1;
      if (pTVar10 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        TGeometryParticleHandleImp<double,3,1>::~TGeometryParticleHandleImp<double,3,1>(pTVar10);
        ::operator_delete(pTVar10,0x18);
      }
      local_68 = local_68 + 1;
      local_80 = local_80 + 1;
      uVar23 = (ulonglong)(uVar22 + 1);
      lVar21 = lVar21 + 8;
    } while ((int)(-uVar2 + uVar22 + 1) < local_res18);
  }
  return __return_storage_ptr__;
}

// CreateParticlesHelper<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>,Chaos::TKinematicGeometryParticlesImp<double,3,0>_> @ 14405d320

TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::FPBDRigidsSOAs::
CreateParticlesHelper<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>,Chaos::TKinematicGeometryParticlesImp<double,3,0>_>
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,FUniqueIdx *param_2,
          TUniquePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>_>
          *param_3,FGeometryParticleParameters *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar4;
  TSerializablePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>_> this_00;
  longlong lVar5;
  undefined8 *puVar6;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  code *pcVar7;
  FParticleID FVar8;
  bool bVar9;
  uint uVar10;
  TKinematicGeometryParticleHandleImp<double,3,1> *this_02;
  TGeometryParticleHandleImp<double,3,1> *pTVar11;
  FParticleID *pFVar12;
  TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar13;
  FUniqueIdx *pFVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  FUniqueIdx *pFVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  FKinematicGeometryParticleParameters local_res10 [8];
  int local_res18;
  FUniqueIdx *local_res20;
  undefined1 local_80 [8];
  FUniqueIdx *local_78;
  int local_70;
  int iStack_6c;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  pTVar4 = param_3->Ptr;
  uVar2 = *(uint *)&pTVar4->_padding_;
  uVar21 = (ulonglong)(int)uVar2;
  local_res18 = param_1;
  local_res20 = param_2;
  if (param_1 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)pTVar4,uVar2 + param_1);
  }
  piVar15 = (int *)((longlong)&pTVar4->_padding_ + 4);
  *piVar15 = *piVar15 + 1;
  lVar23 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_1,&__return_storage_ptr__->AllocatorInstance,
             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  iVar3 = (int)(this->ParticleHandles)._padding_;
  if ((param_1 != 0) &&
     (TArrayCollection::ResizeHelper((TArrayCollection *)&this->ParticleHandles,iVar3 + param_1),
     0 < param_1)) {
    local_68 = (longlong)iVar3;
    local_78 = local_res20;
    local_70 = -1;
    local_60 = uVar21;
    local_58 = uVar21;
    do {
      this_00.Ptr = param_3->Ptr;
      local_res10[0] = (FKinematicGeometryParticleParameters)0x0;
      this_02 = ::operator_new(0x18);
      uVar20 = (uint)uVar21;
      if (this_02 == (TKinematicGeometryParticleHandleImp<double,3,1> *)0x0) {
        pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      }
      else {
        pTVar11 = (TGeometryParticleHandleImp<double,3,1> *)
                  TKinematicGeometryParticleHandleImp<double,3,1>::
                  TKinematicGeometryParticleHandleImp<double,3,1>
                            (this_02,this_00,uVar20,uVar20 + (iVar3 - uVar2),local_res10);
      }
      TGeometryParticlesImp<double,3,0>::SetHandle
                ((TGeometryParticlesImp<double,3,0> *)this_00.Ptr,uVar20,pTVar11);
      iStack_6c = this->BiggestParticleID;
      this->BiggestParticleID = iStack_6c + 1;
      if (iStack_6c != -1) {
        pFVar12 = TGeometryParticlesImp<double,3,0>::ParticleID
                            ((TGeometryParticlesImp<double,3,0> *)pTVar11->_padding_,
                             (int)pTVar11->_padding_);
        FVar8.LocalID = iStack_6c;
        FVar8.GlobalID = local_70;
        *pFVar12 = FVar8;
      }
      uVar10 = (uint)pTVar11->_padding_;
      lVar5 = pTVar11->_padding_;
      uVar17 = *(uint *)((longlong)&param_3->Ptr->_padding_ + 4);
      uVar22 = 0;
      if ((int)uVar10 < *(int *)(lVar5 + 0x250)) {
        uVar22 = ~uVar10 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar13;
      }
      uVar22 = -uVar2 + uVar20;
      puVar1 = (uint *)(*(longlong *)(lVar5 + 0x248) + (longlong)(int)uVar10 * 4);
      *puVar1 = *puVar1 | uVar17;
      uVar17 = ~uVar22 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar22 < __return_storage_ptr__->ArrayNum) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar13;
      }
      *(TGeometryParticleHandleImp<double,3,1> **)
       ((__return_storage_ptr__->AllocatorInstance).Data + lVar23) = pTVar11;
      if (local_res20 == (FUniqueIdx *)0x0) {
        uVar10 = 0;
        if ((int)uVar22 < __return_storage_ptr__->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar13;
        }
        puVar6 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar23);
        piVar15 = (int *)(**(code **)((longlong)*this->UniqueIndices + 8))
                                   (this->UniqueIndices,local_80);
        iVar18 = *piVar15;
        pFVar14 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)*puVar6,*(int *)(puVar6 + 1));
        pFVar19 = local_78;
      }
      else {
        uVar10 = 0;
        if ((int)uVar22 < __return_storage_ptr__->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar13 = (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar13;
        }
        pFVar19 = local_78;
        puVar6 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar23);
        iVar18 = local_78->Idx;
        pFVar14 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)*puVar6,*(int *)(puVar6 + 1));
      }
      uVar17 = (iVar3 - uVar2) + uVar20;
      pFVar14->Idx = iVar18;
      uVar10 = 0;
      if ((int)uVar17 < *(int *)&(this->ParticleHandles).Handles.field_0x10) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar13;
      }
      lVar5 = *(longlong *)&(this->ParticleHandles).Handles.field_0x8;
      lVar16 = local_68 * 8 + lVar23;
      this_01 = *(TGeometryParticleHandleImp<double,3,1> **)(lVar16 + lVar5);
      *(TGeometryParticleHandleImp<double,3,1> **)(lVar16 + lVar5) = pTVar11;
      if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        TGeometryParticleHandleImp<double,3,1>::~TGeometryParticleHandleImp<double,3,1>(this_01);
        ::operator_delete(this_01,0x18);
      }
      pTVar4 = param_3->Ptr;
      uVar10 = 0;
      if ((int)uVar20 < (int)pTVar4->_padding_) {
        uVar10 = ~uVar20 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar13 = (TArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar13;
      }
      local_78 = pFVar19 + 1;
      uVar21 = (ulonglong)(uVar20 + 1);
      lVar23 = lVar23 + 8;
      *(undefined1 *)(local_60 + pTVar4->_padding_) = 1;
      local_60 = local_60 + 1;
    } while ((int)(-uVar2 + uVar20 + 1) < local_res18);
  }
  return __return_storage_ptr__;
}

// CreateParticlesHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>,Chaos::TPBDRigidParticles<double,3>_> @ 14405d790

TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FPBDRigidsSOAs::
CreateParticlesHelper<Chaos::TPBDRigidParticleHandleImp<double,3,1>,Chaos::TPBDRigidParticles<double,3>_>
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,FUniqueIdx *param_2,
          TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>
          *param_3,FGeometryParticleParameters *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  TPBDRigidParticles<double,3> *pTVar4;
  TSerializablePtr<Chaos::TPBDRigidParticles<double,3>_> this_00;
  undefined8 *puVar5;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  code *pcVar6;
  FParticleID FVar7;
  bool bVar8;
  uint uVar9;
  TPBDRigidParticleHandleImp<double,3,1> *this_02;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  FParticleID *pFVar11;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar12;
  FUniqueIdx *pFVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  FUniqueIdx *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  FPBDRigidParticleParameters local_res10 [2];
  int local_res18;
  FUniqueIdx *local_res20;
  undefined1 local_80 [8];
  FUniqueIdx *local_78;
  int local_70;
  int iStack_6c;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  pTVar4 = param_3->Ptr;
  uVar2 = *(uint *)&pTVar4->_padding_;
  uVar20 = (ulonglong)(int)uVar2;
  local_res18 = param_1;
  local_res20 = param_2;
  if (param_1 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)pTVar4,uVar2 + param_1);
  }
  piVar14 = (int *)((longlong)&pTVar4->_padding_ + 4);
  *piVar14 = *piVar14 + 1;
  lVar22 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_1,&__return_storage_ptr__->AllocatorInstance,
             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  iVar3 = (int)(this->ParticleHandles)._padding_;
  if ((param_1 != 0) &&
     (TArrayCollection::ResizeHelper((TArrayCollection *)&this->ParticleHandles,iVar3 + param_1),
     0 < param_1)) {
    local_68 = (longlong)iVar3;
    local_78 = local_res20;
    local_70 = -1;
    local_60 = uVar20;
    local_58 = uVar20;
    do {
      this_00.Ptr = param_3->Ptr;
      local_res10[0]._padding_ = '\0';
      local_res10[0].bStartSleeping = false;
      local_res10[0].bGravityEnabled = true;
      local_res10[0].bCCDEnabled = false;
      this_02 = ::operator_new(0x18);
      uVar19 = (uint)uVar20;
      if (this_02 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
        pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      }
      else {
        pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)
                  TPBDRigidParticleHandleImp<double,3,1>::TPBDRigidParticleHandleImp<double,3,1>
                            (this_02,this_00,uVar19,uVar19 + (iVar3 - uVar2),local_res10);
      }
      TGeometryParticlesImp<double,3,0>::SetHandle
                ((TGeometryParticlesImp<double,3,0> *)this_00.Ptr,uVar19,pTVar10);
      iStack_6c = this->BiggestParticleID;
      this->BiggestParticleID = iStack_6c + 1;
      if (iStack_6c != -1) {
        pFVar11 = TGeometryParticlesImp<double,3,0>::ParticleID
                            ((TGeometryParticlesImp<double,3,0> *)pTVar10->_padding_,
                             (int)pTVar10->_padding_);
        FVar7.LocalID = iStack_6c;
        FVar7.GlobalID = local_70;
        *pFVar11 = FVar7;
      }
      uVar9 = (uint)pTVar10->_padding_;
      lVar15 = pTVar10->_padding_;
      uVar16 = *(uint *)((longlong)&param_3->Ptr->_padding_ + 4);
      uVar21 = 0;
      if ((int)uVar9 < *(int *)(lVar15 + 0x250)) {
        uVar21 = ~uVar9 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      uVar21 = -uVar2 + uVar19;
      puVar1 = (uint *)(*(longlong *)(lVar15 + 0x248) + (longlong)(int)uVar9 * 4);
      *puVar1 = *puVar1 | uVar16;
      uVar16 = ~uVar21 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar21 < __return_storage_ptr__->ArrayNum) {
        uVar9 = uVar16;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      *(TGeometryParticleHandleImp<double,3,1> **)
       ((__return_storage_ptr__->AllocatorInstance).Data + lVar22) = pTVar10;
      if (local_res20 == (FUniqueIdx *)0x0) {
        uVar9 = 0;
        if ((int)uVar21 < __return_storage_ptr__->ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar12;
        }
        puVar5 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar22);
        piVar14 = (int *)(**(code **)((longlong)*this->UniqueIndices + 8))
                                   (this->UniqueIndices,local_80);
        iVar17 = *piVar14;
        pFVar13 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)*puVar5,*(int *)(puVar5 + 1));
        pFVar18 = local_78;
      }
      else {
        uVar9 = 0;
        if ((int)uVar21 < __return_storage_ptr__->ArrayNum) {
          uVar9 = uVar16;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          pTVar12 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar6)();
          return pTVar12;
        }
        pFVar18 = local_78;
        puVar5 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar22);
        iVar17 = local_78->Idx;
        pFVar13 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                            ((TGeometryParticlesImp<double,3,0> *)*puVar5,*(int *)(puVar5 + 1));
      }
      uVar16 = (iVar3 - uVar2) + uVar19;
      pFVar13->Idx = iVar17;
      uVar9 = 0;
      if ((int)uVar16 < *(int *)&(this->ParticleHandles).Handles.field_0x10) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      lVar15 = *(longlong *)&(this->ParticleHandles).Handles.field_0x8 + local_68 * 8;
      this_01 = *(TGeometryParticleHandleImp<double,3,1> **)(lVar15 + lVar22);
      *(TGeometryParticleHandleImp<double,3,1> **)(lVar15 + lVar22) = pTVar10;
      if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        TGeometryParticleHandleImp<double,3,1>::~TGeometryParticleHandleImp<double,3,1>(this_01);
        ::operator_delete(this_01,0x18);
      }
      pTVar4 = param_3->Ptr;
      uVar9 = 0;
      if ((int)uVar19 < (int)pTVar4->_padding_) {
        uVar9 = ~uVar19 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar6)();
        return pTVar12;
      }
      local_78 = pFVar18 + 1;
      uVar20 = (ulonglong)(uVar19 + 1);
      lVar22 = lVar22 + 8;
      *(undefined1 *)(local_60 + pTVar4->_padding_) = 1;
      local_60 = local_60 + 1;
    } while ((int)(-uVar2 + uVar19 + 1) < local_res18);
  }
  return __return_storage_ptr__;
}

// FPBDRigidsSOAs @ 144067ef0

FPBDRigidsSOAs * __thiscall
Chaos::FPBDRigidsSOAs::FPBDRigidsSOAs(FPBDRigidsSOAs *this,IParticleUniqueIndices *param_1)

{
  TUniquePtr<Chaos::TGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TGeometryParticlesImp<double,3,0>_>_>
  *pTVar1;
  TUniquePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>_>
  *pTVar2;
  TUniquePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>_>
  *pTVar3;
  TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>
  *pTVar4;
  TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>
  *pTVar5;
  TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>
  *pTVar6;
  TArrayCollectionArray<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>_>
  *pTVar7;
  TUniquePtr<Chaos::TPBDRigidClusteredParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidClusteredParticles<double,3>_>_>
  *pTVar8;
  TUniquePtr<Chaos::TPBDGeometryCollectionParticles<double,3>,TDefaultDelete<Chaos::TPBDGeometryCollectionParticles<double,3>_>_>
  *pTVar9;
  TGeometryParticlesImp<double,3,0> *pTVar10;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar11;
  TPBDRigidParticles<double,3> *pTVar12;
  TPBDRigidClusteredParticles<double,3> *pTVar13;
  TGeometryParticlesImp<double,3,0> *pTVar14;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar15;
  TPBDRigidParticles<double,3> *pTVar16;
  TPBDRigidClusteredParticles<double,3> *pTVar17;
  undefined8 *puVar18;
  
  pTVar1 = &this->StaticDisabledParticles;
  (this->StaticParticles).Ptr = (TGeometryParticlesImp<double,3,0> *)0x0;
  pTVar2 = &this->KinematicParticles;
  pTVar1->Ptr = (TGeometryParticlesImp<double,3,0> *)0x0;
  pTVar3 = &this->KinematicDisabledParticles;
  pTVar2->Ptr = (TKinematicGeometryParticlesImp<double,3,0> *)0x0;
  pTVar4 = &this->DynamicParticles;
  pTVar3->Ptr = (TKinematicGeometryParticlesImp<double,3,0> *)0x0;
  pTVar5 = &this->DynamicKinematicParticles;
  pTVar4->Ptr = (TPBDRigidParticles<double,3> *)0x0;
  pTVar6 = &this->DynamicDisabledParticles;
  pTVar5->Ptr = (TPBDRigidParticles<double,3> *)0x0;
  pTVar6->Ptr = (TPBDRigidParticles<double,3> *)0x0;
  (this->ClusteredParticles).Ptr = (TPBDRigidClusteredParticles<double,3> *)0x0;
  (this->GeometryCollectionParticles).Ptr = (TPBDGeometryCollectionParticles<double,3> *)0x0;
  *(undefined8 *)&(this->StaticGeometryCollectionArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x48 = 0;
  (this->StaticGeometryCollectionArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticGeometryCollectionArray).ParticleArray.ArrayNum = 0;
  (this->StaticGeometryCollectionArray).ParticleArray.ArrayMax = 0;
  (this->StaticGeometryCollectionArray).ContainerListMask = None;
  *(undefined8 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x48 = 0;
  (this->KinematicGeometryCollectionArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->KinematicGeometryCollectionArray).ParticleArray.ArrayNum = 0;
  (this->KinematicGeometryCollectionArray).ParticleArray.ArrayMax = 0;
  (this->KinematicGeometryCollectionArray).ContainerListMask = None;
  *(undefined8 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x48 = 0;
  (this->SleepingGeometryCollectionArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SleepingGeometryCollectionArray).ParticleArray.ArrayNum = 0;
  (this->SleepingGeometryCollectionArray).ParticleArray.ArrayMax = 0;
  (this->SleepingGeometryCollectionArray).ContainerListMask = None;
  *(undefined8 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x48 = 0;
  (this->DynamicGeometryCollectionArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DynamicGeometryCollectionArray).ParticleArray.ArrayNum = 0;
  (this->DynamicGeometryCollectionArray).ParticleArray.ArrayMax = 0;
  (this->DynamicGeometryCollectionArray).ContainerListMask = None;
  *(undefined8 *)&(this->ActiveParticlesMapArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x48 = 0;
  (this->ActiveParticlesMapArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ActiveParticlesMapArray).ParticleArray.ArrayNum = 0;
  (this->ActiveParticlesMapArray).ParticleArray.ArrayMax = 0;
  (this->ActiveParticlesMapArray).ContainerListMask = None;
  *(undefined8 *)&(this->TransientDirtyMapArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x48 = 0;
  (this->TransientDirtyMapArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->TransientDirtyMapArray).ParticleArray.ArrayNum = 0;
  (this->TransientDirtyMapArray).ParticleArray.ArrayMax = 0;
  (this->TransientDirtyMapArray).ContainerListMask = None;
  *(undefined8 *)&(this->MovingKinematicsMapArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x48 = 0;
  (this->MovingKinematicsMapArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MovingKinematicsMapArray).ParticleArray.ArrayNum = 0;
  (this->MovingKinematicsMapArray).ParticleArray.ArrayMax = 0;
  (this->MovingKinematicsMapArray).ContainerListMask = None;
  *(undefined8 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x48 = 0;
  (this->ResimActiveParticlesMapArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResimActiveParticlesMapArray).ParticleArray.ArrayNum = 0;
  (this->ResimActiveParticlesMapArray).ParticleArray.ArrayMax = 0;
  (this->ResimActiveParticlesMapArray).ContainerListMask = None;
  *(undefined8 *)&(this->ResimDynamicParticles).ParticleToIndex = 0;
  *(undefined8 *)&(this->ResimDynamicParticles).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->ResimDynamicParticles).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->ResimDynamicParticles).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->ResimDynamicParticles).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->ResimDynamicParticles).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResimDynamicParticles).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->ResimDynamicParticles).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->ResimDynamicParticles).ParticleToIndex.field_0x48 = 0;
  (this->ResimDynamicParticles).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResimDynamicParticles).ParticleArray.ArrayNum = 0;
  (this->ResimDynamicParticles).ParticleArray.ArrayMax = 0;
  (this->ResimDynamicParticles).ContainerListMask = None;
  *(undefined8 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex = 0;
  *(undefined8 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x48 = 0;
  (this->ResimDynamicKinematicParticles).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResimDynamicKinematicParticles).ParticleArray.ArrayNum = 0;
  (this->ResimDynamicKinematicParticles).ParticleArray.ArrayMax = 0;
  (this->ResimDynamicKinematicParticles).ContainerListMask = None;
  (this->ResimStaticParticles).ParticleArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->ResimStaticParticles).ParticleArray.ArrayNum = 0;
  (this->ResimStaticParticles).ParticleArray.ArrayMax = 0;
  (this->ResimStaticParticles).ContainerListMask = None;
  (this->ResimKinematicParticles).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ResimKinematicParticles).ParticleArray.ArrayNum = 0;
  (this->ResimKinematicParticles).ParticleArray.ArrayMax = 0;
  (this->ResimKinematicParticles).ContainerListMask = None;
  this->bResimulating = false;
  *(undefined8 *)&(this->StaticClusteredMapArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x48 = 0;
  (this->StaticClusteredMapArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->StaticClusteredMapArray).ParticleArray.ArrayNum = 0;
  (this->StaticClusteredMapArray).ParticleArray.ArrayMax = 0;
  (this->StaticClusteredMapArray).ContainerListMask = None;
  *(undefined8 *)&(this->KinematicClusteredMapArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x48 = 0;
  (this->KinematicClusteredMapArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->KinematicClusteredMapArray).ParticleArray.ArrayNum = 0;
  (this->KinematicClusteredMapArray).ParticleArray.ArrayMax = 0;
  (this->KinematicClusteredMapArray).ContainerListMask = None;
  *(undefined8 *)&(this->DynamicClusteredMapArray).ParticleToIndex = 0;
  *(undefined8 *)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x8 = 0;
  *(undefined8 *)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x48 = 0;
  (this->DynamicClusteredMapArray).ParticleArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DynamicClusteredMapArray).ParticleArray.ArrayNum = 0;
  (this->DynamicClusteredMapArray).ParticleArray.ArrayMax = 0;
  (this->DynamicClusteredMapArray).ContainerListMask = None;
  *(undefined8 *)&this->NonDisabledView = 0;
  *(undefined8 *)&(this->NonDisabledView).field_0x8 = 0;
  *(undefined4 *)&(this->NonDisabledView).field_0x10 = 0;
  *(undefined8 *)&this->NonDisabledDynamicView = 0;
  *(undefined8 *)&(this->NonDisabledDynamicView).field_0x8 = 0;
  *(undefined4 *)&(this->NonDisabledDynamicView).field_0x10 = 0;
  *(undefined8 *)&this->NonDisabledClusteredView = 0;
  *(undefined8 *)&(this->NonDisabledClusteredView).field_0x8 = 0;
  *(undefined4 *)&(this->NonDisabledClusteredView).field_0x10 = 0;
  *(undefined8 *)&this->ActiveParticlesView = 0;
  *(undefined8 *)&(this->ActiveParticlesView).field_0x8 = 0;
  *(undefined4 *)&(this->ActiveParticlesView).field_0x10 = 0;
  *(undefined8 *)&this->DirtyParticlesView = 0;
  *(undefined8 *)&(this->DirtyParticlesView).field_0x8 = 0;
  *(undefined4 *)&(this->DirtyParticlesView).field_0x10 = 0;
  *(undefined8 *)&this->AllParticlesView = 0;
  *(undefined8 *)&(this->AllParticlesView).field_0x8 = 0;
  *(undefined4 *)&(this->AllParticlesView).field_0x10 = 0;
  *(undefined8 *)&this->ActiveKinematicParticlesView = 0;
  *(undefined8 *)&(this->ActiveKinematicParticlesView).field_0x8 = 0;
  *(undefined4 *)&(this->ActiveKinematicParticlesView).field_0x10 = 0;
  *(undefined8 *)&this->ActiveMovingKinematicParticlesView = 0;
  *(undefined8 *)&(this->ActiveMovingKinematicParticlesView).field_0x8 = 0;
  *(undefined4 *)&(this->ActiveMovingKinematicParticlesView).field_0x10 = 0;
  *(undefined8 *)&this->ActiveDynamicMovingKinematicParticlesView = 0;
  *(undefined8 *)&(this->ActiveDynamicMovingKinematicParticlesView).field_0x8 = 0;
  *(undefined4 *)&(this->ActiveDynamicMovingKinematicParticlesView).field_0x10 = 0;
  *(undefined8 *)&this->ActiveStaticParticlesView = 0;
  *(undefined8 *)&(this->ActiveStaticParticlesView).field_0x8 = 0;
  *(undefined4 *)&(this->ActiveStaticParticlesView).field_0x10 = 0;
  *(undefined8 *)&this->ActiveGeometryCollectionParticlesView = 0;
  *(undefined8 *)&(this->ActiveGeometryCollectionParticlesView).field_0x8 = 0;
  *(undefined4 *)&(this->ActiveGeometryCollectionParticlesView).field_0x10 = 0;
  pTVar7 = &(this->ParticleHandles).Handles;
  *(undefined8 *)&(this->ParticleHandles).Handles.field_0x8 = 0;
  *(undefined8 *)&(this->ParticleHandles).Handles.field_0x10 = 0;
  (this->ParticleHandles)._padding_ = (longlong)&___7__TGeometryParticleHandles_N_02_Chaos__6B_;
  *(undefined ***)pTVar7 =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos__U__TDefaultDelete_V__TGeometryParticleHandleImp_N_02_00_Chaos_______Chaos__6B_
  ;
  (this->ParticleHandles)._padding_ = 0;
  (this->ParticleHandles)._padding_ = 0;
  *(undefined4 *)&(this->ParticleHandles)._padding_ = 0;
  TArrayCollection::AddArray
            ((TArrayCollection *)&this->ParticleHandles,(TArrayCollectionArrayBase *)pTVar7);
  this->UniqueIndices = param_1;
  this->BiggestParticleID = 0;
  pTVar14 = ::operator_new(0x288);
  if (pTVar14 == (TGeometryParticlesImp<double,3,0> *)0x0) {
    pTVar14 = (TGeometryParticlesImp<double,3,0> *)0x0;
  }
  else {
    pTVar14 = TGeometryParticlesImp<double,3,0>::TGeometryParticlesImp<double,3,0>(pTVar14);
  }
  if (this == (FPBDRigidsSOAs *)&stack0xffffffffffffff88) {
    if (pTVar14 != (TGeometryParticlesImp<double,3,0> *)0x0) {
      puVar18 = (undefined8 *)pTVar14->_padding_;
      goto LAB_14406856e;
    }
  }
  else {
    pTVar10 = (this->StaticParticles).Ptr;
    (this->StaticParticles).Ptr = pTVar14;
    if (pTVar10 != (TGeometryParticlesImp<double,3,0> *)0x0) {
      puVar18 = (undefined8 *)pTVar10->_padding_;
      pTVar14 = pTVar10;
LAB_14406856e:
      (*(code *)*puVar18)(pTVar14,1);
    }
  }
  pTVar14 = ::operator_new(0x288);
  if (pTVar14 == (TGeometryParticlesImp<double,3,0> *)0x0) {
    pTVar14 = (TGeometryParticlesImp<double,3,0> *)0x0;
  }
  else {
    pTVar14 = TGeometryParticlesImp<double,3,0>::TGeometryParticlesImp<double,3,0>(pTVar14);
  }
  if (pTVar1 == (TUniquePtr<Chaos::TGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TGeometryParticlesImp<double,3,0>_>_>
                 *)&stack0xffffffffffffff90) {
    if (pTVar14 != (TGeometryParticlesImp<double,3,0> *)0x0) {
      puVar18 = (undefined8 *)pTVar14->_padding_;
      goto LAB_1440685b8;
    }
  }
  else {
    pTVar10 = pTVar1->Ptr;
    pTVar1->Ptr = pTVar14;
    if (pTVar10 != (TGeometryParticlesImp<double,3,0> *)0x0) {
      puVar18 = (undefined8 *)pTVar10->_padding_;
      pTVar14 = pTVar10;
LAB_1440685b8:
      (*(code *)*puVar18)(pTVar14,1);
    }
  }
  pTVar15 = ::operator_new(0x2d0);
  if (pTVar15 == (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
    pTVar15 = (TKinematicGeometryParticlesImp<double,3,0> *)0x0;
  }
  else {
    pTVar15 = TKinematicGeometryParticlesImp<double,3,0>::TKinematicGeometryParticlesImp<double,3,0>
                        (pTVar15);
  }
  if (pTVar2 == (TUniquePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>_>
                 *)&stack0xffffffffffffff98) {
    if (pTVar15 != (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
      puVar18 = (undefined8 *)pTVar15->_padding_;
      goto LAB_144068602;
    }
  }
  else {
    pTVar11 = pTVar2->Ptr;
    pTVar2->Ptr = pTVar15;
    if (pTVar11 != (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
      puVar18 = (undefined8 *)pTVar11->_padding_;
      pTVar15 = pTVar11;
LAB_144068602:
      (*(code *)*puVar18)(pTVar15,1);
    }
  }
  pTVar15 = ::operator_new(0x2d0);
  if (pTVar15 == (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
    pTVar15 = (TKinematicGeometryParticlesImp<double,3,0> *)0x0;
  }
  else {
    pTVar15 = TKinematicGeometryParticlesImp<double,3,0>::TKinematicGeometryParticlesImp<double,3,0>
                        (pTVar15);
  }
  if (pTVar3 == (TUniquePtr<Chaos::TKinematicGeometryParticlesImp<double,3,0>,TDefaultDelete<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>_>
                 *)&stack0xffffffffffffffa0) {
    if (pTVar15 != (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
      puVar18 = (undefined8 *)pTVar15->_padding_;
      goto LAB_14406864c;
    }
  }
  else {
    pTVar11 = pTVar3->Ptr;
    pTVar3->Ptr = pTVar15;
    if (pTVar11 != (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
      puVar18 = (undefined8 *)pTVar11->_padding_;
      pTVar15 = pTVar11;
LAB_14406864c:
      (*(code *)*puVar18)(pTVar15,1);
    }
  }
  pTVar16 = ::operator_new(0x5b8);
  if (pTVar16 == (TPBDRigidParticles<double,3> *)0x0) {
    pTVar16 = (TPBDRigidParticles<double,3> *)0x0;
  }
  else {
    pTVar16 = TPBDRigidParticles<double,3>::TPBDRigidParticles<double,3>(pTVar16);
  }
  if (pTVar6 == (TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>
                 *)&stack0xffffffffffffffa8) {
    if (pTVar16 != (TPBDRigidParticles<double,3> *)0x0) {
      puVar18 = (undefined8 *)pTVar16->_padding_;
      goto LAB_144068698;
    }
  }
  else {
    pTVar12 = pTVar6->Ptr;
    pTVar6->Ptr = pTVar16;
    if (pTVar12 != (TPBDRigidParticles<double,3> *)0x0) {
      puVar18 = (undefined8 *)pTVar12->_padding_;
      pTVar16 = pTVar12;
LAB_144068698:
      (*(code *)*puVar18)(pTVar16,1);
    }
  }
  pTVar16 = ::operator_new(0x5b8);
  if (pTVar16 == (TPBDRigidParticles<double,3> *)0x0) {
    pTVar16 = (TPBDRigidParticles<double,3> *)0x0;
  }
  else {
    pTVar16 = TPBDRigidParticles<double,3>::TPBDRigidParticles<double,3>(pTVar16);
  }
  if (pTVar4 == (TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>
                 *)&stack0xffffffffffffffb0) {
    if (pTVar16 != (TPBDRigidParticles<double,3> *)0x0) {
      puVar18 = (undefined8 *)pTVar16->_padding_;
      goto LAB_1440686e4;
    }
  }
  else {
    pTVar12 = pTVar4->Ptr;
    pTVar4->Ptr = pTVar16;
    if (pTVar12 != (TPBDRigidParticles<double,3> *)0x0) {
      puVar18 = (undefined8 *)pTVar12->_padding_;
      pTVar16 = pTVar12;
LAB_1440686e4:
      (*(code *)*puVar18)(pTVar16,1);
    }
  }
  pTVar16 = ::operator_new(0x5b8);
  if (pTVar16 == (TPBDRigidParticles<double,3> *)0x0) {
    pTVar16 = (TPBDRigidParticles<double,3> *)0x0;
  }
  else {
    pTVar16 = TPBDRigidParticles<double,3>::TPBDRigidParticles<double,3>(pTVar16);
  }
  if (pTVar5 == (TUniquePtr<Chaos::TPBDRigidParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidParticles<double,3>_>_>
                 *)&stack0xffffffffffffffb8) {
    if (pTVar16 != (TPBDRigidParticles<double,3> *)0x0) {
      puVar18 = (undefined8 *)pTVar16->_padding_;
      goto LAB_144068730;
    }
  }
  else {
    pTVar12 = pTVar5->Ptr;
    pTVar5->Ptr = pTVar16;
    if (pTVar12 != (TPBDRigidParticles<double,3> *)0x0) {
      puVar18 = (undefined8 *)pTVar12->_padding_;
      pTVar16 = pTVar12;
LAB_144068730:
      (*(code *)*puVar18)(pTVar16,1);
    }
  }
  pTVar17 = ::operator_new(0x6c0);
  if (pTVar17 == (TPBDRigidClusteredParticles<double,3> *)0x0) {
    pTVar17 = (TPBDRigidClusteredParticles<double,3> *)0x0;
  }
  else {
    pTVar17 = TPBDRigidClusteredParticles<double,3>::TPBDRigidClusteredParticles<double,3>(pTVar17);
  }
  pTVar8 = &this->ClusteredParticles;
  if (pTVar8 == (TUniquePtr<Chaos::TPBDRigidClusteredParticles<double,3>,TDefaultDelete<Chaos::TPBDRigidClusteredParticles<double,3>_>_>
                 *)&stack0xffffffffffffffc0) {
    if (pTVar17 != (TPBDRigidClusteredParticles<double,3> *)0x0) {
      puVar18 = (undefined8 *)pTVar17->_padding_;
      goto LAB_14406877e;
    }
  }
  else {
    pTVar13 = pTVar8->Ptr;
    pTVar8->Ptr = pTVar17;
    if (pTVar13 != (TPBDRigidClusteredParticles<double,3> *)0x0) {
      puVar18 = (undefined8 *)pTVar13->_padding_;
      pTVar17 = pTVar13;
LAB_14406877e:
      (*(code *)*puVar18)(pTVar17,1);
    }
  }
  pTVar17 = ::operator_new(0x6c0);
  if (pTVar17 == (TPBDRigidClusteredParticles<double,3> *)0x0) {
    pTVar17 = (TPBDRigidClusteredParticles<double,3> *)0x0;
  }
  else {
    TPBDRigidClusteredParticles<double,3>::TPBDRigidClusteredParticles<double,3>(pTVar17);
    *(undefined1 *)&pTVar17->_padding_ = 6;
    pTVar17->_padding_ = (longlong)&___7__TPBDGeometryCollectionParticles_N_02_Chaos__6B_;
  }
  pTVar9 = &this->GeometryCollectionParticles;
  if (pTVar9 == (TUniquePtr<Chaos::TPBDGeometryCollectionParticles<double,3>,TDefaultDelete<Chaos::TPBDGeometryCollectionParticles<double,3>_>_>
                 *)&stack0xffffffffffffffc8) {
    if (pTVar17 == (TPBDRigidClusteredParticles<double,3> *)0x0) goto LAB_1440687e1;
    puVar18 = (undefined8 *)pTVar17->_padding_;
  }
  else {
    pTVar13 = (TPBDRigidClusteredParticles<double,3> *)pTVar9->Ptr;
    pTVar9->Ptr = (TPBDGeometryCollectionParticles<double,3> *)pTVar17;
    if (pTVar13 == (TPBDRigidClusteredParticles<double,3> *)0x0) goto LAB_1440687e1;
    puVar18 = (undefined8 *)pTVar13->_padding_;
    pTVar17 = pTVar13;
  }
  (*(code *)*puVar18)(pTVar17,1);
LAB_1440687e1:
  SetContainerListMasks(this);
  UpdateViews(this);
  return this;
}

// ~FPBDRigidsSOAs @ 14406b2d0

void __thiscall Chaos::FPBDRigidsSOAs::~FPBDRigidsSOAs(FPBDRigidsSOAs *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  TPBDGeometryCollectionParticles<double,3> *pTVar3;
  TPBDRigidClusteredParticles<double,3> *pTVar4;
  TPBDRigidParticles<double,3> *pTVar5;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar6;
  TGeometryParticlesImp<double,3,0> *pTVar7;
  
  *(undefined1 *)&((this->ClusteredParticles).Ptr)->_padding_ = 0;
  ((this->GeometryCollectionParticles).Ptr)->field_0x38 = 0;
  *(undefined ***)&(this->ParticleHandles).Handles =
       &
       ___7__TArrayCollectionArray_V__TUniquePtr_V__TGeometryParticleHandleImp_N_02_00_Chaos__U__TDefaultDelete_V__TGeometryParticleHandleImp_N_02_00_Chaos_______Chaos__6B_
  ;
  DestructItems<TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>,int>
            (*(TUniquePtr<Chaos::TGeometryParticleHandleImp<double,3,1>,TDefaultDelete<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>
               **)&(this->ParticleHandles).Handles.field_0x8,
             *(int *)&(this->ParticleHandles).Handles.field_0x10);
  pvVar1 = *(void **)&(this->ParticleHandles).Handles.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TArrayCollection::~TArrayCollection((TArrayCollection *)&this->ParticleHandles);
  if (*(void **)&this->ActiveGeometryCollectionParticlesView != (void *)0x0) {
    FMemory::Free(*(void **)&this->ActiveGeometryCollectionParticlesView);
  }
  if (*(void **)&this->ActiveStaticParticlesView != (void *)0x0) {
    FMemory::Free(*(void **)&this->ActiveStaticParticlesView);
  }
  if (*(void **)&this->ActiveDynamicMovingKinematicParticlesView != (void *)0x0) {
    FMemory::Free(*(void **)&this->ActiveDynamicMovingKinematicParticlesView);
  }
  if (*(void **)&this->ActiveMovingKinematicParticlesView != (void *)0x0) {
    FMemory::Free(*(void **)&this->ActiveMovingKinematicParticlesView);
  }
  if (*(void **)&this->ActiveKinematicParticlesView != (void *)0x0) {
    FMemory::Free(*(void **)&this->ActiveKinematicParticlesView);
  }
  if (*(void **)&this->AllParticlesView != (void *)0x0) {
    FMemory::Free(*(void **)&this->AllParticlesView);
  }
  if (*(void **)&this->DirtyParticlesView != (void *)0x0) {
    FMemory::Free(*(void **)&this->DirtyParticlesView);
  }
  if (*(void **)&this->ActiveParticlesView != (void *)0x0) {
    FMemory::Free(*(void **)&this->ActiveParticlesView);
  }
  if (*(void **)&this->NonDisabledClusteredView != (void *)0x0) {
    FMemory::Free(*(void **)&this->NonDisabledClusteredView);
  }
  if (*(void **)&this->NonDisabledDynamicView != (void *)0x0) {
    FMemory::Free(*(void **)&this->NonDisabledDynamicView);
  }
  if (*(void **)&this->NonDisabledView != (void *)0x0) {
    FMemory::Free(*(void **)&this->NonDisabledView);
  }
  pFVar2 = (this->DynamicClusteredMapArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DynamicClusteredMapArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicClusteredMapArray);
  pFVar2 = (this->KinematicClusteredMapArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->KinematicClusteredMapArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KinematicClusteredMapArray);
  pFVar2 = (this->StaticClusteredMapArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->StaticClusteredMapArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StaticClusteredMapArray);
  pFVar2 = (this->ResimKinematicParticles).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ResimStaticParticles).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ResimDynamicKinematicParticles).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResimDynamicKinematicParticles).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResimDynamicKinematicParticles);
  pFVar2 = (this->ResimDynamicParticles).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ResimDynamicParticles).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResimDynamicParticles).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResimDynamicParticles);
  pFVar2 = (this->ResimActiveParticlesMapArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ResimActiveParticlesMapArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResimActiveParticlesMapArray);
  pFVar2 = (this->MovingKinematicsMapArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MovingKinematicsMapArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MovingKinematicsMapArray);
  pFVar2 = (this->TransientDirtyMapArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->TransientDirtyMapArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TransientDirtyMapArray);
  pFVar2 = (this->ActiveParticlesMapArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ActiveParticlesMapArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveParticlesMapArray);
  pFVar2 = (this->DynamicGeometryCollectionArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->DynamicGeometryCollectionArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DynamicGeometryCollectionArray);
  pFVar2 = (this->SleepingGeometryCollectionArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->SleepingGeometryCollectionArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SleepingGeometryCollectionArray);
  pFVar2 = (this->KinematicGeometryCollectionArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->KinematicGeometryCollectionArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->KinematicGeometryCollectionArray);
  pFVar2 = (this->StaticGeometryCollectionArray).ParticleArray.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x48 = 0;
  pvVar1 = *(void **)&(this->StaticGeometryCollectionArray).ParticleToIndex.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StaticGeometryCollectionArray);
  pTVar3 = (this->GeometryCollectionParticles).Ptr;
  if (pTVar3 != (TPBDGeometryCollectionParticles<double,3> *)0x0) {
    (*(code *)**(undefined8 **)pTVar3)(pTVar3,1);
  }
  pTVar4 = (this->ClusteredParticles).Ptr;
  if (pTVar4 != (TPBDRigidClusteredParticles<double,3> *)0x0) {
    (**(code **)pTVar4->_padding_)(pTVar4,1);
  }
  pTVar5 = (this->DynamicDisabledParticles).Ptr;
  if (pTVar5 != (TPBDRigidParticles<double,3> *)0x0) {
    (**(code **)pTVar5->_padding_)(pTVar5,1);
  }
  pTVar5 = (this->DynamicKinematicParticles).Ptr;
  if (pTVar5 != (TPBDRigidParticles<double,3> *)0x0) {
    (**(code **)pTVar5->_padding_)(pTVar5,1);
  }
  pTVar5 = (this->DynamicParticles).Ptr;
  if (pTVar5 != (TPBDRigidParticles<double,3> *)0x0) {
    (**(code **)pTVar5->_padding_)(pTVar5,1);
  }
  pTVar6 = (this->KinematicDisabledParticles).Ptr;
  if (pTVar6 != (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
    (**(code **)pTVar6->_padding_)(pTVar6,1);
  }
  pTVar6 = (this->KinematicParticles).Ptr;
  if (pTVar6 != (TKinematicGeometryParticlesImp<double,3,0> *)0x0) {
    (**(code **)pTVar6->_padding_)(pTVar6,1);
  }
  pTVar7 = (this->StaticDisabledParticles).Ptr;
  if (pTVar7 != (TGeometryParticlesImp<double,3,0> *)0x0) {
    (**(code **)pTVar7->_padding_)(pTVar7,1);
  }
  pTVar7 = (this->StaticParticles).Ptr;
  if (pTVar7 != (TGeometryParticlesImp<double,3,0> *)0x0) {
    (**(code **)pTVar7->_padding_)(pTVar7,1);
  }
  return;
}

// EnableParticle @ 1440dbd60

void __thiscall
Chaos::FPBDRigidsSOAs::EnableParticle
          (FPBDRigidsSOAs *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  byte bVar1;
  bool bVar2;
  EObjectStateType EVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  TKinematicGeometryParticlesImp<double,3,0> *pTVar5;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  
  bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4);
  this_01 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this_00 = this_01;
  if (1 < bVar1) {
    this_00 = param_1;
  }
  if (this_00 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    if (bVar1 != 0) {
      this_01 = param_1;
    }
    if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar5 = (TKinematicGeometryParticlesImp<double,3,0> *)(this->StaticParticles).Ptr;
    }
    else {
      pTVar5 = (this->KinematicParticles).Ptr;
    }
    TGeometryParticleHandleImp<double,3,1>::MoveToSOA
              (param_1,(TGeometryParticlesImp<double,3,0> *)pTVar5);
  }
  else {
    TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
              ((TPBDRigidParticleHandleImp<double,3,1> *)this_00,false);
    bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4);
    pTVar4 = this_01;
    if (5 < bVar1) {
      pTVar4 = param_1;
    }
    if (pTVar4 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      pTVar4 = this_01;
      if (2 < bVar1) {
        pTVar4 = param_1;
      }
      if (pTVar4 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        SetDynamicParticleSOA(this,(TPBDRigidParticleHandleImp<double,3,1> *)this_00);
      }
      else {
        InsertClusteredParticle(this,(TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar4);
      }
    }
    else {
      RemoveGeometryCollectionParticle
                (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar4);
      InsertGeometryCollectionParticle
                (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)pTVar4);
    }
    bVar2 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping
                      ((TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    if (!bVar2) {
      pTVar4 = this_01;
      if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
        pTVar4 = param_1;
      }
      if (pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        if (1 < *(byte *)((longlong)&pTVar4->_padding_ + 4)) {
          this_01 = pTVar4;
        }
        if (this_01 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
          EVar3 = Kinematic;
        }
        else {
          EVar3 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                            ((TPBDRigidParticleHandleImp<double,3,1> *)this_01);
        }
        if (EVar3 == Dynamic) {
          AddToActiveArray(this,(TPBDRigidParticleHandleImp<double,3,1> *)this_00);
        }
      }
    }
  }
  if (CVars::bChaosSolverCheckParticleViews != false) {
    CheckParticleViewMaskImpl(this,param_1);
  }
  UpdateViews(this);
  return;
}

// MarkMovingKinematic @ 1440e8810

void __thiscall
Chaos::FPBDRigidsSOAs::MarkMovingKinematic
          (FPBDRigidsSOAs *this,TKinematicGeometryParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TGeometryParticleHandleImp<double,3,1> *this_00;
  
  this_00 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < (byte)param_1->field_0xc) {
    this_00 = (TGeometryParticleHandleImp<double,3,1> *)param_1;
  }
  if (this_00 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    AddToList<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>,Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
              (this,(TPBDRigidParticleHandleImp<double,3,1> *)this_00,
               &this->MovingKinematicsMapArray);
    if ((this->TransientDirtyMapArray).ContainerListMask == None) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("List.GetContainerListMask() != EGeometryParticleListMask::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                         ,0x425,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    TGeometryParticleHandleImp<double,3,1>::RemoveFromLists
              (this_00,(this->TransientDirtyMapArray).ContainerListMask);
    TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
              (&this->TransientDirtyMapArray,(TPBDRigidParticleHandleImp<double,3,1> *)this_00);
    if (CVars::bChaosSolverCheckParticleViews != false) {
      CheckParticleViewMaskImpl(this,(TGeometryParticleHandleImp<double,3,1> *)param_1);
    }
  }
  return;
}

// CreateParticlesHelper<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>,Chaos::TPBDGeometryCollectionParticles<double,3>_> @ 1440f9870

TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::FPBDRigidsSOAs::
CreateParticlesHelper<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>,Chaos::TPBDGeometryCollectionParticles<double,3>_>
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,FUniqueIdx *param_2,
          TUniquePtr<Chaos::TPBDGeometryCollectionParticles<double,3>,TDefaultDelete<Chaos::TPBDGeometryCollectionParticles<double,3>_>_>
          *param_3,FGeometryParticleParameters *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  TPBDGeometryCollectionParticles<double,3> *pTVar4;
  TSerializablePtr<Chaos::TPBDRigidParticles<double,3>_> this_00;
  longlong lVar5;
  undefined8 *puVar6;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  code *pcVar7;
  FParticleID FVar8;
  bool bVar9;
  uint uVar10;
  TGeometryParticleHandleImp<double,3,1> *this_02;
  FParticleID *pFVar11;
  TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar12;
  int *piVar13;
  FUniqueIdx *pFVar14;
  TGeometryParticlesImp<double,3,0> *this_03;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  FPBDRigidParticleParameters local_res10 [2];
  int local_res18;
  FUniqueIdx *local_res20;
  undefined1 local_80 [8];
  FUniqueIdx *local_78;
  int local_70;
  int iStack_6c;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  pTVar4 = param_3->Ptr;
  uVar2 = *(uint *)&pTVar4->field_0x18;
  uVar22 = (ulonglong)(int)uVar2;
  local_res18 = param_1;
  local_res20 = param_2;
  if (param_1 != 0) {
    TArrayCollection::ResizeHelper((TArrayCollection *)pTVar4,uVar2 + param_1);
  }
  *(int *)&pTVar4->field_0x3c = *(int *)&pTVar4->field_0x3c + 1;
  lVar20 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_1,&__return_storage_ptr__->AllocatorInstance,
             &__return_storage_ptr__->ArrayNum,&__return_storage_ptr__->ArrayMax);
  iVar3 = (int)(this->ParticleHandles)._padding_;
  local_68 = (longlong)iVar3;
  if ((param_1 != 0) &&
     (TArrayCollection::ResizeHelper((TArrayCollection *)&this->ParticleHandles,iVar3 + param_1),
     0 < param_1)) {
    local_78 = local_res20;
    local_70 = -1;
    local_60 = uVar22;
    local_58 = uVar22;
    do {
      this_00.Ptr = (TPBDRigidParticles<double,3> *)param_3->Ptr;
      local_res10[0]._padding_ = '\0';
      local_res10[0].bStartSleeping = false;
      local_res10[0].bGravityEnabled = true;
      local_res10[0].bCCDEnabled = false;
      this_02 = ::operator_new(0x18);
      uVar21 = (uint)uVar22;
      if (this_02 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        this_02 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
      }
      else {
        TPBDRigidParticleHandleImp<double,3,1>::TPBDRigidParticleHandleImp<double,3,1>
                  ((TPBDRigidParticleHandleImp<double,3,1> *)this_02,this_00,uVar21,
                   (iVar3 - uVar2) + uVar21,local_res10);
      }
      TGeometryParticlesImp<double,3,0>::SetHandle
                ((TGeometryParticlesImp<double,3,0> *)this_00.Ptr,uVar21,this_02);
      iStack_6c = this->BiggestParticleID;
      this->BiggestParticleID = iStack_6c + 1;
      if (iStack_6c != -1) {
        pFVar11 = TGeometryParticlesImp<double,3,0>::ParticleID
                            ((TGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                             (int)this_02->_padding_);
        FVar8.LocalID = iStack_6c;
        FVar8.GlobalID = local_70;
        *pFVar11 = FVar8;
      }
      uVar10 = (uint)this_02->_padding_;
      lVar5 = this_02->_padding_;
      uVar17 = *(uint *)&param_3->Ptr->field_0x74;
      uVar19 = 0;
      if ((int)uVar10 < *(int *)(lVar5 + 0x250)) {
        uVar19 = ~uVar10 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      uVar19 = -uVar2 + uVar21;
      puVar1 = (uint *)(*(longlong *)(lVar5 + 0x248) + (longlong)(int)uVar10 * 4);
      *puVar1 = *puVar1 | uVar17;
      uVar17 = ~uVar19 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
        uVar10 = uVar17;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      *(TGeometryParticleHandleImp<double,3,1> **)
       ((__return_storage_ptr__->AllocatorInstance).Data + lVar20) = this_02;
      if (local_res20 == (FUniqueIdx *)0x0) {
        uVar10 = 0;
        if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar12;
        }
        puVar6 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar20);
        piVar13 = (int *)(**(code **)((longlong)*this->UniqueIndices + 8))
                                   (this->UniqueIndices,local_80);
        iVar16 = *(int *)(puVar6 + 1);
        this_03 = (TGeometryParticlesImp<double,3,0> *)*puVar6;
        iVar18 = *piVar13;
      }
      else {
        uVar10 = 0;
        if ((int)uVar19 < __return_storage_ptr__->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                     *)(*pcVar7)();
          return pTVar12;
        }
        puVar6 = *(undefined8 **)((__return_storage_ptr__->AllocatorInstance).Data + lVar20);
        iVar18 = local_78->Idx;
        iVar16 = *(int *)(puVar6 + 1);
        this_03 = (TGeometryParticlesImp<double,3,0> *)*puVar6;
      }
      pFVar14 = TGeometryParticlesImp<double,3,0>::UniqueIdx(this_03,iVar16);
      uVar17 = (iVar3 - uVar2) + uVar21;
      pFVar14->Idx = iVar18;
      uVar10 = 0;
      if ((int)uVar17 < *(int *)&(this->ParticleHandles).Handles.field_0x10) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      lVar5 = *(longlong *)&(this->ParticleHandles).Handles.field_0x8;
      lVar15 = local_68 * 8 + lVar20;
      this_01 = *(TGeometryParticleHandleImp<double,3,1> **)(lVar15 + lVar5);
      *(TGeometryParticleHandleImp<double,3,1> **)(lVar15 + lVar5) = this_02;
      if (this_01 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        TGeometryParticleHandleImp<double,3,1>::~TGeometryParticleHandleImp<double,3,1>(this_01);
        ::operator_delete(this_01,0x18);
      }
      pTVar4 = param_3->Ptr;
      uVar10 = 0;
      if ((int)uVar21 < *(int *)&pTVar4->field_0xe8) {
        uVar10 = ~uVar21 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                   *)(*pcVar7)();
        return pTVar12;
      }
      uVar22 = (ulonglong)(uVar21 + 1);
      local_78 = local_78 + 1;
      lVar20 = lVar20 + 8;
      *(undefined1 *)(*(longlong *)&pTVar4->field_0xe0 + local_60) = 1;
      local_60 = local_60 + 1;
    } while ((int)(-uVar2 + uVar21 + 1) < local_res18);
  }
  return __return_storage_ptr__;
}

// CreateGeometryCollectionParticles @ 144112320

TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *
__thiscall
Chaos::FPBDRigidsSOAs::CreateGeometryCollectionParticles
          (FPBDRigidsSOAs *this,
          TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,int param_1,FUniqueIdx *param_2,
          FPBDRigidParticleParameters *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  code *pcVar3;
  bool bVar4;
  EObjectStateType EVar5;
  bool *pbVar6;
  TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *pTVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  FLLMScope local_res10 [2];
  FMemScope local_48 [2];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateGeometryCollectionParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateGeometryCollectionParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateGeometryCollectionParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_class_TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateGeometryCollectionParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name366,L"Physics/GeometryCollectionParticles");
      _Init_thread_footer(&`public:_class_TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateGeometryCollectionParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res10,
             `public:_class_TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateGeometryCollectionParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name366,false,None,Default,true);
  FMemScope::FMemScope
            (local_48,&`public:_class_TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>*___ptr64,TSizedDefaultAllocator<32>_>___cdecl_Chaos::FPBDRigidsSOAs::CreateGeometryCollectionParticles(int,Chaos::FUniqueIdx_const*___ptr64,Chaos::FPBDRigidParticleParameters_const&___ptr64)___ptr64'
                       ::__l2::LLMScope_Name366,true);
  CreateParticlesHelper<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>,Chaos::TPBDGeometryCollectionParticles<double,3>_>
            (this,__return_storage_ptr__,param_1,param_2,&this->GeometryCollectionParticles,
             (FGeometryParticleParameters *)param_3);
  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
  iVar2 = __return_storage_ptr__->ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  do {
    while( true ) {
      if (__return_storage_ptr__->ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar8 == pFVar1) {
        UpdateViews(this);
        FMemScope::~FMemScope(local_48);
        FLLMScope::~FLLMScope(local_res10);
        return __return_storage_ptr__;
      }
      this_00 = *(TPBDRigidParticleHandleImp<double,3,1> **)pFVar8;
      bVar4 = param_3->bStartSleeping;
      EVar5 = Sleeping;
      if (bVar4 == false) {
        EVar5 = Dynamic;
      }
      TPBDRigidParticles<double,3>::SetObjectState
                (*(TPBDRigidParticles<double,3> **)this_00,*(int *)&this_00->field_0x8,EVar5);
      TPBDRigidParticles<double,3>::SetSleeping
                (*(TPBDRigidParticles<double,3> **)this_00,*(int *)&this_00->field_0x8,
                 bVar4 != false);
      if (param_3->_padding_ == '\0') break;
LAB_14411251d:
      pFVar8 = pFVar8 + 8;
    }
    pbVar6 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(this_00);
    if (*pbVar6 != false) goto LAB_14411251d;
    bVar4 = TPBDRigidParticleHandleImp<double,3,1>::Sleeping(this_00);
    if (bVar4) {
      EVar5 = Sleeping;
    }
    else {
      EVar5 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState(this_00);
    }
    if (EVar5 == Uninitialized) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2590006970459096023>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsSOAs.h"
                         ,0x3d7,"false");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
                  *)(*pcVar3)();
        return pTVar7;
      }
      goto LAB_14411251d;
    }
    if (EVar5 == Sleeping) {
      AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
                (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)this_00,
                 &this->SleepingGeometryCollectionArray);
      pFVar8 = pFVar8 + 8;
    }
    else if (EVar5 == Kinematic) {
      AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
                (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)this_00,
                 &this->KinematicGeometryCollectionArray);
      pFVar8 = pFVar8 + 8;
    }
    else if (EVar5 == Static) {
      AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
                (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)this_00,
                 &this->StaticGeometryCollectionArray);
      pFVar8 = pFVar8 + 8;
    }
    else {
      if (EVar5 != Dynamic) goto LAB_14411251d;
      AddToList<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>,Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>
                (this,(TPBDGeometryCollectionParticleHandleImp<double,3,1> *)this_00,
                 &this->DynamicGeometryCollectionArray);
      pFVar8 = pFVar8 + 8;
    }
  } while( true );
}

// operator() @ 1504a7230

bool __thiscall
`Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7511393721867304716>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       (*(TGeometryParticlesImp<double,3,0> **)**(longlong **)this,
                        *(int *)((undefined8 *)**(longlong **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7511393721867304716>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a72d0

bool __thiscall
`Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096131>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096131>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckListMasks<Chaos::TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_>_>(Chaos::TParticleArray<Chaos::TGeometryParticleHandleImp<double,3,1>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a7390

bool __thiscall
`Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>_>'::
__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096131>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096131>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckListMasks<Chaos::TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>_>(Chaos::TParticleArray<Chaos::TKinematicGeometryParticleHandleImp<double,3,1>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a7450

bool __thiscall
`Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>_>'
::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096131>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096131>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>_>(Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a7510

bool __thiscall
`Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>'
::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096131>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096131>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>_>(Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a75d0

bool __thiscall
`Chaos::FPBDRigidsSOAs::
CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096131>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096131>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckListMasks<Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>_>(Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>&___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a7690

bool __thiscall
`Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TGeometryParticlesImp<double,3,0>_>'::__l6::<lambda_1>
::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096118>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096118>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TGeometryParticlesImp<double,3,0>_>(Chaos::TGeometryParticlesImp<double,3,0>*___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a7750

bool __thiscall
`Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096118>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096118>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TKinematicGeometryParticlesImp<double,3,0>_>(Chaos::TKinematicGeometryParticlesImp<double,3,0>*___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a7810

bool __thiscall
`Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDGeometryCollectionParticles<double,3>_>'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096118>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096118>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDGeometryCollectionParticles<double,3>_>(Chaos::TPBDGeometryCollectionParticles<double,3>*___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a78d0

bool __thiscall
`Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDRigidClusteredParticles<double,3>_>'::__l6::
<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096118>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096118>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDRigidClusteredParticles<double,3>_>(Chaos::TPBDRigidClusteredParticles<double,3>*___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a7990

bool __thiscall
`Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDRigidParticles<double,3>_>'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2590006970459096118>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       ((TGeometryParticlesImp<double,3,0> *)**(undefined8 **)this,
                        *(int *)(*(undefined8 **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2590006970459096118>,
                       &`public:___cdecl_`private:_void___cdecl_Chaos::FPBDRigidsSOAs::CheckSOAMasks<Chaos::TPBDRigidParticles<double,3>_>(Chaos::TPBDRigidParticles<double,3>*___ptr64)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a82d0

bool __thiscall
`Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7511393721867304704>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       (*(TGeometryParticlesImp<double,3,0> **)**(longlong **)this,
                        *(int *)((undefined8 *)**(longlong **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7511393721867304704>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 1504a83f0

bool __thiscall
`Chaos::FPBDRigidsSOAs::CheckParticleViewMaskImpl'::__l2::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TSharedPtr<FString,1> *pTVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_7511393721867304699>);
  if (bVar2) {
    pTVar4 = Chaos::TGeometryParticlesImp<double,3,0>::DebugName
                       (*(TGeometryParticlesImp<double,3,0> **)**(longlong **)this,
                        *(int *)((undefined8 *)**(longlong **)this + 1));
    if ((pTVar4->Object == (FString *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7511393721867304699>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

