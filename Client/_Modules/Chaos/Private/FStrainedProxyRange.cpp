// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FStrainedProxyRange @ 143dfc8f0

FStrainedProxyRange * __thiscall
Chaos::FStrainedProxyRange::FStrainedProxyRange
          (FStrainedProxyRange *this,FRigidClustering *param_1,bool param_2,
          TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_3)

{
  TArray<Chaos::FStrainedProxyAndRoot,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar4;
  longlong lVar5;
  FGeometryCollectionPhysicsProxy *this_01;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FRigidClustering *pFVar8;
  undefined1 *puVar9;
  TGeometryParticleHandleImp<double,3,1> *pTVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FStrainedProxyRange *pFVar15;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar16;
  float *pfVar17;
  IPhysicsProxyBase *pIVar18;
  uint uVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  FScriptContainerElement *pFVar23;
  TGeometryParticleHandleImp<double,3,1> *this_02;
  longlong *plVar24;
  ulonglong *puVar25;
  float fVar26;
  undefined1 local_res10 [8];
  char local_res18;
  undefined1 local_res20 [8];
  FGeometryCollectionPhysicsProxy *local_b8;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTStack_b0;
  undefined1 local_a8;
  undefined7 uStack_a7;
  IPhysicsProxyBase *local_a0;
  TGeometryParticleHandleImp<double,3,1> *pTStack_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
  *local_88;
  FScriptContainerElement *local_80;
  FStrainedProxyAndRoot local_78 [2];
  
  this->RigidClustering = param_1;
  (this->ProxyAndRoots).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this_00 = &this->ProxyAndRoots;
  (this->ProxyAndRoots).ArrayMax = 0;
  piVar1 = &(this->ProxyAndRoots).ArrayMax;
  (this->ProxyAndRoots).ArrayNum = 0;
  this->StrainedParticles = param_3;
  if (param_3 !=
      (TArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
       *)0x0) {
    uVar3 = param_3->ArrayNum;
    local_res18 = param_2;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (*piVar1 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar3,&this_00->AllocatorInstance,(this->ProxyAndRoots).ArrayNum,piVar1);
    }
    local_88 = this->StrainedParticles;
    uVar3 = local_88->ArrayNum;
    uVar21 = (ulonglong)(int)uVar3;
    pFVar23 = (local_88->AllocatorInstance).Data;
    local_80 = pFVar23 + uVar21 * 8;
    while( true ) {
      pFVar6 = local_80;
      if (local_88->ArrayNum != (int)uVar21) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar23 == pFVar6) break;
      pTVar4 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)pFVar23;
      uVar19 = *(uint *)&pTVar4->field_0x8;
      lVar5 = *(longlong *)pTVar4;
      uVar13 = 0;
      if ((int)uVar19 < *(int *)(lVar5 + 0xd0)) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        pFVar15 = (FStrainedProxyRange *)(*pcVar11)();
        return pFVar15;
      }
      this_01 = *(FGeometryCollectionPhysicsProxy **)
                 (*(longlong *)(lVar5 + 200) + (longlong)(int)uVar19 * 8);
      if (this_01 == (FGeometryCollectionPhysicsProxy *)0x0) {
        return this;
      }
      if (*(int *)&this_01->field_0x1c == 2) {
        if (param_2 == false) {
          local_78[0].bPartialDestruction = false;
          local_78[0].Proxy = this_01;
          local_78[0].ParticleHandle = pTVar4;
          TArray<Chaos::FStrainedProxyAndRoot,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<Chaos::FStrainedProxyAndRoot>(this_00,local_78);
        }
        else {
          pTVar16 = FGeometryCollectionPhysicsProxy::GetParticle_Internal
                              (this_01,(this_01->Parameters).InitialRootIndex);
          if ((pTVar16 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) &&
             (pTVar4 != pTVar16)) {
            return this;
          }
          pFVar6 = (this_00->AllocatorInstance).Data;
          local_a8 = 0;
          local_b8 = this_01;
          pTStack_b0 = pTVar4;
          if (((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
              ((FScriptContainerElement *)&local_b8 < pFVar6 + (longlong)*piVar1 * 0x18)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar11 = (code *)swi(3);
            pFVar15 = (FStrainedProxyRange *)(*pcVar11)();
            return pFVar15;
          }
          iVar14 = (this->ProxyAndRoots).ArrayNum;
          if (iVar14 == *piVar1) {
            iVar14 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&this_00->AllocatorInstance,piVar1);
          }
          (this->ProxyAndRoots).ArrayNum = iVar14 + 1;
          pFVar7 = (this_00->AllocatorInstance).Data;
          pFVar6 = pFVar7 + (longlong)iVar14 * 0x18;
          *(FGeometryCollectionPhysicsProxy **)pFVar6 = local_b8;
          *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)(pFVar6 + 8) = pTStack_b0;
          *(ulonglong *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) = CONCAT71(uStack_a7,local_a8);
        }
      }
      if (*(int *)&this_01->field_0x1c == 0xc) {
        pFVar8 = this->RigidClustering;
        uVar21._0_4_ = (this_01->Parameters).InitializationCommands.ArrayNum;
        uVar21._4_4_ = (this_01->Parameters).InitializationCommands.ArrayMax;
        uVar19 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595;
        uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
        if (*(int *)&(pFVar8->MChildren).field_0x8 != *(int *)&(pFVar8->MChildren).field_0x34) {
          puVar9 = *(undefined1 **)&(pFVar8->MChildren).field_0x40;
          puVar22 = &(pFVar8->MChildren).field_0x38;
          if (puVar9 != (undefined1 *)0x0) {
            puVar22 = puVar9;
          }
          iVar14 = *(int *)(puVar22 +
                           (ulonglong)
                           (*(int *)&(pFVar8->MChildren).field_0x48 - 1U & (uVar19 >> 0x10 ^ uVar19)
                           ) * 4);
          if (iVar14 != -1) {
            do {
              puVar20 = (ulonglong *)((longlong)iVar14 * 0x20 + *(longlong *)&pFVar8->MChildren);
              if (*puVar20 == uVar21) {
                puVar25 = puVar20 + 1;
                if (puVar20 == (ulonglong *)0x0) {
                  puVar25 = (ulonglong *)0x0;
                }
                if (puVar25 != (ulonglong *)0x0) {
                  plVar24 = (longlong *)*puVar25;
                  uVar21 = puVar25[1];
                  plVar2 = plVar24 + (int)uVar21;
                  while( true ) {
                    if ((int)puVar25[1] != (int)uVar21) {
                      local_res20[0] = 0;
                      `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const,int,0>
                      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
                    }
                    param_2 = (bool)local_res18;
                    if (plVar24 == plVar2) break;
                    pTVar10 = (TGeometryParticleHandleImp<double,3,1> *)*plVar24;
                    if (pTVar10 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                      this_02 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                      if (2 < *(byte *)((longlong)&pTVar10->_padding_ + 4)) {
                        this_02 = pTVar10;
                      }
                      if (((this_02 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
                          ((fVar26 = TPBDRigidClusteredParticleHandleImp<double,3,1>::
                                     GetExternalStrain((
                                                  TPBDRigidClusteredParticleHandleImp<double,3,1> *)
                                                  this_02), 0.0 < fVar26 ||
                           (pfVar17 = TPBDRigidClusteredParticles<double,3>::CollisionImpulses
                                                ((TPBDRigidClusteredParticles<double,3> *)
                                                 this_02->_padding_,(int)this_02->_padding_),
                           0.0 < *pfVar17)))) &&
                         ((pIVar18 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy(this_02),
                          pIVar18 != (IPhysicsProxyBase *)0x0 &&
                          (pIVar18->Type == GeometryCollectionType)))) {
                        pFVar6 = (this_00->AllocatorInstance).Data;
                        local_90 = 1;
                        local_a0 = pIVar18;
                        pTStack_98 = this_02;
                        if (((pFVar6 <= (FScriptContainerElement *)&local_a0) &&
                            ((FScriptContainerElement *)&local_a0 <
                             pFVar6 + (longlong)*piVar1 * 0x18)) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar12)) {
                          pcVar11 = (code *)swi(3);
                          pFVar15 = (FStrainedProxyRange *)(*pcVar11)();
                          return pFVar15;
                        }
                        iVar14 = (this->ProxyAndRoots).ArrayNum;
                        if (iVar14 == *piVar1) {
                          iVar14 = UE::Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x818,&this_00->AllocatorInstance,piVar1);
                        }
                        (this->ProxyAndRoots).ArrayNum = iVar14 + 1;
                        pFVar7 = (this_00->AllocatorInstance).Data;
                        pFVar6 = pFVar7 + (longlong)iVar14 * 0x18;
                        *(IPhysicsProxyBase **)pFVar6 = local_a0;
                        *(TGeometryParticleHandleImp<double,3,1> **)(pFVar6 + 8) = pTStack_98;
                        *(ulonglong *)(pFVar7 + (longlong)iVar14 * 0x18 + 0x10) =
                             CONCAT71(uStack_8f,local_90);
                      }
                    }
                    plVar24 = plVar24 + 1;
                  }
                }
                break;
              }
              iVar14 = (int)puVar20[3];
            } while (iVar14 != -1);
          }
        }
      }
      pFVar23 = pFVar23 + 8;
      uVar21 = (ulonglong)uVar3;
    }
  }
  return this;
}

