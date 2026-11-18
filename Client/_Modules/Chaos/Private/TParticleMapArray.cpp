// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 5

// Contains @ 1438a9e80

bool __thiscall
Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Contains
          (TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *this,
          TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (*(int *)&(this->ParticleToIndex).field_0x8 != *(int *)&(this->ParticleToIndex).field_0x34) {
    puVar2 = *(undefined1 **)&(this->ParticleToIndex).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->ParticleToIndex).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->ParticleToIndex).field_0x48 - 1U &
                              (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(TPBDRigidParticleHandleImp<double,3,1> **)
             (*(longlong *)&this->ParticleToIndex + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_1438a9eff;
        iVar1 = *(int *)(*(longlong *)&this->ParticleToIndex + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_1438a9eff:
  return iVar1 != -1;
}

// Remove @ 1438ca950

void __thiscall
Chaos::TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_>::Remove
          (TParticleMapArray<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_> *this,
          TPBDGeometryCollectionParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  TPBDGeometryCollectionParticleHandleImp<double,3,1> *local_res8;
  
  pTVar7 = TSet<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar10 = (uint *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int> *)0x0) {
    puVar10 = (uint *)0x0;
  }
  if (puVar10 != (uint *)0x0) {
    uVar9 = *puVar10;
    uVar8 = 0;
    if ((int)uVar9 < (this->ParticleArray).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
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
    iVar2 = (this->ParticleArray).ArrayNum;
    pFVar3 = (this->ParticleArray).AllocatorInstance.Data;
    iVar6 = iVar2 + ~uVar9;
    if (1 < iVar6) {
      iVar6 = 1;
    }
    if (iVar6 != 0) {
      memmove(pFVar3 + (longlong)(int)uVar9 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
              (longlong)iVar6 << 3);
    }
    piVar1 = &(this->ParticleArray).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->ParticleArray).AllocatorInstance,(this->ParticleArray).ArrayNum,
               &(this->ParticleArray).ArrayMax);
    if ((int)uVar9 < (this->ParticleArray).ArrayNum) {
      if ((int)uVar9 < 0) {
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
      pTVar7 = TSet<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                       *)this,*(TPBDGeometryCollectionParticleHandleImp<double,3,1> **)
                               ((this->ParticleArray).AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 8));
      if (pTVar7 == (TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int> *)0x0)
      {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(uint *)&pTVar7->field_0x8 = uVar9;
    }
    if (*(int *)&(this->ParticleToIndex).field_0x8 != *(int *)&(this->ParticleToIndex).field_0x34) {
      uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      local_res8 = param_1;
      TSet<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_const_*>
                ((TSet<TTuple<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDGeometryCollectionParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                  *)this,uVar9 >> 0x10 ^ uVar9,&local_res8);
    }
  }
  return;
}

// Remove @ 1438cab00

void __thiscall
Chaos::TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_>::Remove
          (TParticleMapArray<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_> *this,
          TPBDRigidClusteredParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_res8;
  
  pTVar7 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar10 = (uint *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int> *)0x0) {
    puVar10 = (uint *)0x0;
  }
  if (puVar10 != (uint *)0x0) {
    uVar9 = *puVar10;
    uVar8 = 0;
    if ((int)uVar9 < (this->ParticleArray).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
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
    iVar2 = (this->ParticleArray).ArrayNum;
    pFVar3 = (this->ParticleArray).AllocatorInstance.Data;
    iVar6 = iVar2 + ~uVar9;
    if (1 < iVar6) {
      iVar6 = 1;
    }
    if (iVar6 != 0) {
      memmove(pFVar3 + (longlong)(int)uVar9 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
              (longlong)iVar6 << 3);
    }
    piVar1 = &(this->ParticleArray).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->ParticleArray).AllocatorInstance,(this->ParticleArray).ArrayNum,
               &(this->ParticleArray).ArrayMax);
    if ((int)uVar9 < (this->ParticleArray).ArrayNum) {
      if ((int)uVar9 < 0) {
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
      pTVar7 = TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                       *)this,*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
                               ((this->ParticleArray).AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 8));
      if (pTVar7 == (TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(uint *)&pTVar7->field_0x8 = uVar9;
    }
    if (*(int *)&(this->ParticleToIndex).field_0x8 != *(int *)&(this->ParticleToIndex).field_0x34) {
      uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      local_res8 = param_1;
      TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_const_*>
                ((TSet<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                  *)this,uVar9 >> 0x10 ^ uVar9,&local_res8);
    }
  }
  return;
}

// Remove @ 1438cacb0

void __thiscall
Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::Remove
          (TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *this,
          TPBDRigidParticleHandleImp<double,3,1> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *pTVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  TPBDRigidParticleHandleImp<double,3,1> *local_res8;
  
  pTVar7 = TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                   *)this,param_1);
  puVar10 = (uint *)&pTVar7->field_0x8;
  if (pTVar7 == (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *)0x0) {
    puVar10 = (uint *)0x0;
  }
  if (puVar10 != (uint *)0x0) {
    uVar9 = *puVar10;
    uVar8 = 0;
    if ((int)uVar9 < (this->ParticleArray).ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
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
    iVar2 = (this->ParticleArray).ArrayNum;
    pFVar3 = (this->ParticleArray).AllocatorInstance.Data;
    iVar6 = iVar2 + ~uVar9;
    if (1 < iVar6) {
      iVar6 = 1;
    }
    if (iVar6 != 0) {
      memmove(pFVar3 + (longlong)(int)uVar9 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
              (longlong)iVar6 << 3);
    }
    piVar1 = &(this->ParticleArray).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->ParticleArray).AllocatorInstance,(this->ParticleArray).ArrayNum,
               &(this->ParticleArray).ArrayMax);
    if ((int)uVar9 < (this->ParticleArray).ArrayNum) {
      if ((int)uVar9 < 0) {
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
      pTVar7 = TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                       *)this,*(TPBDRigidParticleHandleImp<double,3,1> **)
                               ((this->ParticleArray).AllocatorInstance.Data +
                               (longlong)(int)uVar9 * 8));
      if (pTVar7 == (TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int> *)0x0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(uint *)&pTVar7->field_0x8 = uVar9;
    }
    if (*(int *)&(this->ParticleToIndex).field_0x8 != *(int *)&(this->ParticleToIndex).field_0x34) {
      uVar9 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      local_res8 = param_1;
      TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::TPBDRigidParticleHandleImp<double,3,1>_const_*>
                ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                  *)this,uVar9 >> 0x10 ^ uVar9,&local_res8);
    }
  }
  return;
}

// Insert<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> @ 143c84290

void __thiscall
Chaos::TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>::
Insert<Chaos::TPBDRigidParticleHandleImp<double,3,1>_>
          (TParticleMapArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_> *this,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_1)

{
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  uint local_res8 [2];
  TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,int_&&> local_res10;
  undefined8 local_68;
  ForAnyElementType local_60;
  int local_58 [2];
  int **local_50;
  uint *local_48;
  
  iVar8 = param_1->ArrayNum;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,iVar8,&local_60,local_58,local_58 + 1);
  memset(local_60.Data + iVar7,0,(longlong)iVar8);
  iVar8 = param_1->ArrayNum;
  uVar11 = 0;
  uVar13 = (this->ParticleArray).ArrayNum;
  if (0 < iVar8) {
    lVar14 = 0;
    do {
      uVar12 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < iVar8) {
        uVar9 = uVar12;
      }
      if (uVar9 == 0) {
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
      local_res10.Value = *(int **)((param_1->AllocatorInstance).Data + lVar14 * 8);
      uVar9 = ((uint)((ulonglong)local_res10.Value >> 0x14) & 0xffff ^
              (uint)((ulonglong)local_res10.Value >> 4)) * -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      if (*(int *)&(this->ParticleToIndex).field_0x8 != *(int *)&(this->ParticleToIndex).field_0x34)
      {
        puVar3 = *(undefined1 **)&(this->ParticleToIndex).field_0x40;
        puVar10 = &(this->ParticleToIndex).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar10 = puVar3;
        }
        iVar8 = *(int *)(puVar10 +
                        (ulonglong)
                        (*(int *)&(this->ParticleToIndex).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9))
                        * 4);
        if (iVar8 != -1) {
          do {
            if (*(int **)(*(longlong *)&this->ParticleToIndex + (longlong)iVar8 * 0x18) ==
                local_res10.Value) goto LAB_143c843dc;
            iVar8 = *(int *)(*(longlong *)&this->ParticleToIndex + 0x10 + (longlong)iVar8 * 0x18);
          } while (iVar8 != -1);
        }
      }
      iVar8 = -1;
LAB_143c843dc:
      uVar9 = 0;
      if ((int)uVar11 < local_58[0]) {
        uVar9 = uVar12;
      }
      if (uVar9 == 0) {
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
      local_60.Data[lVar14] = (FScriptContainerElement)(iVar8 != -1);
      uVar9 = 0;
      if ((int)uVar11 < local_58[0]) {
        uVar9 = uVar12;
      }
      if (uVar9 == 0) {
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
      if (local_60.Data[lVar14] == (FScriptContainerElement)0x0) {
        local_50 = &local_res10.Value;
        local_48 = local_res8;
        local_res8[0] = uVar13;
        TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*_const_&,int_&&>_>
                  ((TSet<TTuple<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>,FDefaultSetAllocator>
                    *)this,&local_res10,(bool *)&local_50);
        uVar13 = uVar13 + 1;
      }
      iVar8 = param_1->ArrayNum;
      uVar11 = uVar11 + 1;
      lVar14 = lVar14 + 1;
    } while ((int)uVar11 < iVar8);
  }
  pTVar1 = &this->ParticleArray;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar2 = &(this->ParticleArray).ArrayMax;
  if ((this->ParticleArray).ArrayMax < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar13,&pTVar1->AllocatorInstance,(this->ParticleArray).ArrayNum,piVar2);
  }
  uVar13 = 0;
  if (0 < param_1->ArrayNum) {
    lVar14 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar13 < local_58[0]) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if (uVar11 == 0) {
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
      if (local_60.Data[lVar14] == (FScriptContainerElement)0x0) {
        uVar11 = 0;
        if ((int)uVar13 < param_1->ArrayNum) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if (uVar11 == 0) {
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
        local_68 = *(undefined8 *)((param_1->AllocatorInstance).Data + lVar14 * 8);
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)&local_68) &&
           ((FScriptContainerElement *)&local_68 < pFVar4 + (longlong)*piVar2 * 8)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar8 = (this->ParticleArray).ArrayNum;
        if (iVar8 == *piVar2) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar1->AllocatorInstance,piVar2);
        }
        (this->ParticleArray).ArrayNum = iVar8 + 1;
        *(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_68;
      }
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 1;
    } while ((int)uVar13 < param_1->ArrayNum);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

