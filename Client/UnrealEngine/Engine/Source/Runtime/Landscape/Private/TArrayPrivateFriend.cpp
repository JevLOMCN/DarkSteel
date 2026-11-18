// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 7

// Serialize<float,TMemoryImageAllocator<0>_> @ 145f3f390

FArchive * __cdecl
TArrayPrivateFriend::Serialize<float,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<float,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  ForAnyElementType FVar6;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 2,(longlong)param_2->ArrayMax << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  else {
    local_res8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x400001)) {
        param_2->ArrayNum = local_res8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,local_res8[0],*piVar1,&param_2->AllocatorInstance,local_res8[0],piVar1);
        }
        FVar6 = param_2->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar6,(longlong)param_2->ArrayNum << 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_> @ 145f3f520

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar10 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x30,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<float>,TMemoryImageAllocator<0>_>
          ::Empty(param_2,local_res8[0]);
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          do {
            iVar5 = param_2->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                (0x430,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar5 + 1;
            FVar8 = param_2->AllocatorInstance;
            if (((ulonglong)FVar8 & 1) != 0) {
              FVar8 = (ForAnyElementType)
                      ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18)
                      );
            }
            ::operator<<(param_1,(FInstanceTransformMatrix<float> *)
                                 ((longlong)iVar5 * 0x30 + (longlong)FVar8));
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)local_res8[0]);
          return param_1;
        }
        param_2->ArrayNum = local_res8[0];
        uVar11 = 0;
        uVar9 = local_res8[0];
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          uVar6 = 0;
          if ((int)uVar11 < (int)uVar9) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FArchive *)(*pcVar3)();
            return pFVar7;
          }
          FVar8 = param_2->AllocatorInstance;
          if (((ulonglong)FVar8 & 1) != 0) {
            FVar8 = (ForAnyElementType)
                    ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
          }
          ::operator<<(param_1,(FInstanceTransformMatrix<float> *)
                               ((longlong)(int)uVar11 * 0x30 + (longlong)FVar8));
          uVar11 = uVar11 + 1;
          uVar9 = param_2->ArrayNum;
        } while ((int)uVar11 < param_2->ArrayNum);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_> @ 145f3f750

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>
          *param_2)

{
  int *piVar1;
  FInstanceTransformMatrix<FFloat16> *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  int iVar12;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar12 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar3 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar3[1] < (uint *)*plVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar3;
    *plVar3 = *plVar3 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x18,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar9 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar9) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                pFVar8 = (FArchive *)(*pcVar4)();
                return pFVar8;
              }
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              ::operator<<(param_1,(FInstanceTransformMatrix<FFloat16> *)
                                   ((longlong)FVar10 + (longlong)(int)uVar11 * 0x18));
              uVar11 = uVar11 + 1;
              uVar9 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,TMemoryImageAllocator<0>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                  (0x218,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar10 = param_2->AllocatorInstance;
              if (((ulonglong)FVar10 & 1) != 0) {
                FVar10 = (ForAnyElementType)
                         ((longlong)&(param_2->AllocatorInstance).field_0x0 +
                         ((longlong)FVar10 >> 0x18));
              }
              pFVar2 = (FInstanceTransformMatrix<FFloat16> *)
                       ((longlong)FVar10 + (longlong)iVar6 * 0x18);
              DefaultConstructItems<FStaticMeshInstanceData::FInstanceTransformMatrix<FFloat16>,int>
                        (pFVar2,1);
              ::operator<<(param_1,pFVar2);
              iVar12 = iVar12 + 1;
            } while (iVar12 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FArchive *)(*pcVar4)();
        return pFVar8;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_> @ 145f3fca0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<UE::Math::TVector4<float>,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  ForAnyElementType FVar6;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 4,(longlong)param_2->ArrayMax << 4);
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  else {
    local_res8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (0x10,0x10,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x100001)) {
        param_2->ArrayNum = local_res8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (0x10,0x10,local_res8[0],*piVar1,&param_2->AllocatorInstance,local_res8[0],
                     piVar1);
        }
        FVar6 = param_2->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar6,(longlong)param_2->ArrayNum << 4);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_> @ 145f3fe30

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>
          (FArchive *param_1,
          TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar10 = 0;
  local_res8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (8,2,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<FStaticMeshInstanceData::FInstanceLightMapVector,TMemoryImageAllocator<0>_>::Empty
                    (param_2,local_res8[0]);
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          do {
            iVar5 = param_2->ArrayNum;
            if (iVar5 == *piVar1) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                                (0x208,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar5 + 1;
            FVar8 = param_2->AllocatorInstance;
            if (((ulonglong)FVar8 & 1) != 0) {
              FVar8 = (ForAnyElementType)
                      ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18)
                      );
            }
            ::operator<<(param_1,(FInstanceLightMapVector *)((longlong)FVar8 + (longlong)iVar5 * 8))
            ;
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)local_res8[0]);
          return param_1;
        }
        param_2->ArrayNum = local_res8[0];
        uVar11 = 0;
        uVar9 = local_res8[0];
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          uVar6 = 0;
          if ((int)uVar11 < (int)uVar9) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar7 = (FArchive *)(*pcVar3)();
            return pFVar7;
          }
          FVar8 = param_2->AllocatorInstance;
          if (((ulonglong)FVar8 & 1) != 0) {
            FVar8 = (ForAnyElementType)
                    ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar8 >> 0x18));
          }
          ::operator<<(param_1,(FInstanceLightMapVector *)
                               ((longlong)FVar8 + (longlong)(int)uVar11 * 8));
          uVar9 = param_2->ArrayNum;
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)uVar9);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<unsigned_short,TMemoryImageAllocator<0>_> @ 145f75e80

FArchive * __cdecl
TArrayPrivateFriend::Serialize<unsigned_short,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<unsigned_short,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  ForAnyElementType FVar6;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 2,(longlong)param_2->ArrayMax * 2);
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  else {
    local_res8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (2,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x800001)) {
        param_2->ArrayNum = local_res8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (2,2,local_res8[0],*piVar1,&param_2->AllocatorInstance,local_res8[0],piVar1);
        }
        FVar6 = param_2->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar6,(longlong)param_2->ArrayNum * 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<unsigned_int,TMemoryImageAllocator<0>_> @ 145f76010

FArchive * __cdecl
TArrayPrivateFriend::Serialize<unsigned_int,TMemoryImageAllocator<0>_>
          (FArchive *param_1,TArray<unsigned_int,TMemoryImageAllocator<0>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  ForAnyElementType FVar6;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 2,(longlong)param_2->ArrayMax << 2);
  if ((param_1->field_0x28 & 1) == 0) {
    local_res8[0] = param_2->ArrayNum;
  }
  else {
    local_res8[0] = 0;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (local_res8[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<1,TMemoryImageAllocator<0>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x400001)) {
        param_2->ArrayNum = local_res8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (4,4,local_res8[0],*piVar1,&param_2->AllocatorInstance,local_res8[0],piVar1);
        }
        FVar6 = param_2->AllocatorInstance;
        if (((ulonglong)FVar6 & 1) != 0) {
          FVar6 = (ForAnyElementType)
                  ((longlong)&(param_2->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
        }
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,FVar6,(longlong)param_2->ArrayNum << 2);
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar5 = (FArchive *)(*pcVar3)();
        return pFVar5;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

