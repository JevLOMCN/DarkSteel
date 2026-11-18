// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 3

// Find @ 146371fd0

FGTParticleIndices * __thiscall
TMapBase<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices,0>_>
::Find(TMapBase<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidParticle<double,3>_*,FGeometryCollectionPhysicsProxy::FGTParticleIndices,0>_>
       *this,TPBDRigidParticle<double,3> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FGTParticleIndices *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x18;
        if (*(TPBDRigidParticle<double,3> **)(lVar2 + (longlong)iVar3 * 0x18) == param_1) {
          pFVar5 = (FGTParticleIndices *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FGTParticleIndices *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x10);
      } while (iVar3 != -1);
    }
  }
  return (FGTParticleIndices *)0x0;
}

// FindChecked @ 1463b1c10

int * __thiscall
TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::FindChecked
          (TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        piVar4 = (int *)((longlong)iVar3 * 0x10 + *(longlong *)&(this->Pairs).Elements);
        if (*piVar4 == param_1) {
          if (piVar4 != (int *)0x0) {
            return piVar4 + 1;
          }
          break;
        }
        iVar3 = piVar4[2];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (!bVar2) {
    return (int *)&DAT_00000004;
  }
  pcVar1 = (code *)swi(3);
  piVar4 = (int *)(*pcVar1)();
  return piVar4;
}

// FindChecked @ 1463b1cb0

FAnalyticImplicitGroup ** __thiscall
TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
::FindChecked(TMapBase<int,FAnalyticImplicitGroup_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FAnalyticImplicitGroup_*,0>_>
              *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FAnalyticImplicitGroup **ppFVar6;
  ForElementType<FSetElementId> FVar7;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar7 = (this->Pairs).Hash.SecondaryData;
    if (FVar7 == (ForElementType<FSetElementId>)0x0) {
      FVar7 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar5 = *(int *)((longlong)FVar7 + (ulonglong)((this->Pairs).HashSize - 1U & param_1) * 4);
    if (iVar5 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar5 * 0x18;
        if (*(int *)(lVar2 + (longlong)iVar5 * 0x18) == param_1) {
          if (lVar1 != 0) {
            return (FAnalyticImplicitGroup **)(lVar1 + 8);
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar4) {
    return (FAnalyticImplicitGroup **)&DAT_00000008;
  }
  pcVar3 = (code *)swi(3);
  ppFVar6 = (FAnalyticImplicitGroup **)(*pcVar3)();
  return ppFVar6;
}

