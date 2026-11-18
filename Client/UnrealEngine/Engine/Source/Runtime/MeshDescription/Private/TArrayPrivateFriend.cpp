// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshDescription
// Functions: 34

// Serialize<float,TSizedDefaultAllocator<32>_> @ 14364cfb0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<float,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x400001)) {
        param_2->ArrayNum = local_res8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_res8[0],*piVar1,&param_2->AllocatorInstance,local_res8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 2);
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

// Serialize<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> @ 14364e990

FArchive * __cdecl
TArrayPrivateFriend::Serialize<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum << 3,(longlong)param_2->ArrayMax << 3);
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x200001)) {
        param_2->ArrayNum = local_res8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,local_res8[0],*piVar1,&param_2->AllocatorInstance,local_res8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum << 3);
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

// Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> @ 14364eb20

FArchive * __cdecl
TArrayPrivateFriend::Serialize<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)param_2->ArrayNum * 0xc,(longlong)param_2->ArrayMax * 0xc);
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x155556)) {
        param_2->ArrayNum = local_res8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,local_res8[0],*piVar1,&param_2->AllocatorInstance,local_res8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum * 0xc);
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

// Serialize<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> @ 14364ecc0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<int>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<int>::FChunk,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<int>::FChunk,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
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

// Serialize<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> @ 14364ef10

FArchive * __cdecl
TArrayPrivateFriend::Serialize<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<float>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<float>::FChunk,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<float>::FChunk,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
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

// Serialize<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_> @ 14364f160

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>::FChunk,int>
                        (pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
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

// Serialize<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_> @ 14364f3b0

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>::FChunk,int>
                        (pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
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

// Serialize<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_> @ 14364f600

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>::FChunk,int>
                        (pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
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

// Serialize<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_> @ 14364f850

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>::FChunk,int>
                        (pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
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

// Serialize<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> @ 14364faa0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<FName>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<FName>::FChunk,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<FName>::FChunk,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
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

// Serialize<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> @ 14364fcf0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FChunk *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0xc18);
  iVar11 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TAttributeArrayContainer<bool>::FChunk,int>
                ((FChunk *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x152b)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              ::operator<<(param_1,(FChunk *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0xc18
                                   ));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<TAttributeArrayContainer<bool>::FChunk,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc18,8,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FChunk *)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0xc18);
              DefaultConstructItems<TAttributeArrayContainer<bool>::FChunk,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
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

// Serialize<FEdgeID,TSizedDefaultAllocator<32>_> @ 14364ff40

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FEdgeID,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FEdgeID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar14 = uVar12;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar13 = (uint)uVar12;
              uVar8 = 0;
              if ((int)uVar13 < (int)uVar11) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(undefined4 *)pFVar10 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar12 = (ulonglong)(uVar13 + 1);
              uVar14 = uVar14 + 4;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar13 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FEdgeID,TSizedDefaultAllocator<32>_>::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
              DefaultConstructItems<FEdgeID,int>(pFVar10,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(uint *)pFVar10 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_> @ 1436501f0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FMeshTriangle_Legacy *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar9 = 0;
          uVar8 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
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
              ::operator<<(param_1,(FMeshTriangle_Legacy *)
                                   ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x10)
                          );
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FMeshTriangle_Legacy,TSizedDefaultAllocator<32>_>::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FMeshTriangle_Legacy *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
              DefaultConstructItems<FMeshTriangle_Legacy,int>(pFVar10,1);
              ::operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
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

// Serialize<FPolygonID,TSizedDefaultAllocator<32>_> @ 143650420

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FPolygonID,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FPolygonID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar14 = uVar12;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar13 = (uint)uVar12;
              uVar8 = 0;
              if ((int)uVar13 < (int)uVar11) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(undefined4 *)pFVar10 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar12 = (ulonglong)(uVar13 + 1);
              uVar14 = uVar14 + 4;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar13 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FPolygonID,TSizedDefaultAllocator<32>_>::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
              DefaultConstructItems<FPolygonID,int>(pFVar10,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(uint *)pFVar10 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_> @ 1436506d0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 2);
  uVar12 = 0;
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x400001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar14 = uVar12;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar13 = (uint)uVar12;
              uVar8 = 0;
              if ((int)uVar13 < (int)uVar11) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              pFVar10 = (param_2->AllocatorInstance).Data + uVar14;
              puVar4 = (undefined4 *)**(undefined8 **)&param_1->field_0x8;
              if ((undefined4 *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(undefined4 *)pFVar10 = *puVar4;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar12 = (ulonglong)(uVar13 + 1);
              uVar14 = uVar14 + 4;
              uVar11 = param_2->ArrayNum;
            } while ((int)(uVar13 + 1) < param_2->ArrayNum);
          }
        }
        else {
          TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
              DefaultConstructItems<FVertexInstanceID,int>(pFVar10,1);
              puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
              if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
                if ((param_1->field_0x2a & 1) == 0) {
                  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,pFVar10,4);
                }
                else {
                  FArchive::SerializeByteOrderSwapped(param_1,(uint *)pFVar10);
                }
              }
              else {
                *(uint *)pFVar10 = *puVar3;
                **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
              }
              uVar11 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar11;
            } while ((int)uVar11 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 143650980

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *pTVar9;
  int iVar10;
  uint uVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
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
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                 (param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar8 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar11 < (int)uVar8) {
              uVar6 = ~uVar11 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                               ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10));
            uVar11 = uVar11 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
        Empty(param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          pTVar9 = (TArray<FVertexInstanceID,TSizedDefaultAllocator<32>_> *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
          Serialize<FVertexInstanceID,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_res8[0]);
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

// Serialize<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143650b80

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TAttributeArrayContainer<int> *pTVar2;
  longlong *plVar3;
  ForElementType<TAttributeArrayContainer<int>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TAttributeArrayContainer<int>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TAttributeArrayContainer<int>_>)param_2;
      if (FVar4 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TAttributeArrayContainer<int>,int>
                ((TAttributeArrayContainer<int> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<int>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
                FVar10 = FVar4;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<int> *)
                                   ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<int>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<int>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<int>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TAttributeArrayContainer<int> *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TAttributeArrayContainer<int>,int>(pTVar2,1);
              ::operator<<(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143650e00

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TAttributeArrayContainer<float> *pTVar2;
  longlong *plVar3;
  ForElementType<TAttributeArrayContainer<float>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TAttributeArrayContainer<float>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TAttributeArrayContainer<float>_>)param_2;
      if (FVar4 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TAttributeArrayContainer<float>,int>
                ((TAttributeArrayContainer<float> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<float>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
                FVar10 = FVar4;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<float> *)
                                   ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<float>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<float>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<float>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TAttributeArrayContainer<float> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TAttributeArrayContainer<float>,int>(pTVar2,1);
              ::operator<<(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143651080

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<UE::Math::TTransform<double>_> *pTVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
                ((TAttributeArrayContainer<UE::Math::TTransform<double>_> *)FVar9,param_2->ArrayNum)
      ;
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                  (0x80,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar10 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
                      param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>
                           )0x0) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<UE::Math::TTransform<double>_> *)
                                   ((longlong)(int)uVar11 * 0x80 + (longlong)FVar9));
              uVar10 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar10);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>_>
                                  (0x1080,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>)
                      param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TTransform<double>_>_>
                           )0x0) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<UE::Math::TTransform<double>_> *)
                        ((longlong)iVar6 * 0x80 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TTransform<double>_>,int>
                        (pTVar12,1);
              ::operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
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

// Serialize<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143651320

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<UE::Math::TVector2<float>_> *pTVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
                ((TAttributeArrayContainer<UE::Math::TVector2<float>_> *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar10 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
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
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)param_2
              ;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
                           0x0) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<UE::Math::TVector2<float>_> *)
                                   ((longlong)(int)uVar11 * 0x20 + (longlong)FVar9));
              uVar11 = uVar11 + 1;
              uVar10 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>_>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)param_2
              ;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector2<float>_>_>)
                           0x0) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<UE::Math::TVector2<float>_> *)
                        ((longlong)iVar6 * 0x20 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector2<float>_>,int>
                        (pTVar12,1);
              ::operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
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

// Serialize<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143651590

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<UE::Math::TVector4<float>_> *pTVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x30);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
                ((TAttributeArrayContainer<UE::Math::TVector4<float>_> *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                  (0x30,0x10,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x55556)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar10 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
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
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)param_2
              ;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
                           0x0) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<UE::Math::TVector4<float>_> *)
                                   ((longlong)(int)uVar11 * 0x30 + (longlong)FVar9));
              uVar11 = uVar11 + 1;
              uVar10 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>_>
                                  (0x1030,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)param_2
              ;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector4<float>_>_>)
                           0x0) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<UE::Math::TVector4<float>_> *)
                        ((longlong)iVar6 * 0x30 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector4<float>_>,int>
                        (pTVar12,1);
              ::operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
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

// Serialize<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143651820

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<UE::Math::TVector<float>_> *pTVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
                ((TAttributeArrayContainer<UE::Math::TVector<float>_> *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar10 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
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
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0
                 ) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<UE::Math::TVector<float>_> *)
                                   ((longlong)(int)uVar11 * 0x20 + (longlong)FVar9));
              uVar11 = uVar11 + 1;
              uVar10 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>_>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<UE::Math::TVector<float>_>_>)0x0
                 ) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<UE::Math::TVector<float>_> *)
                        ((longlong)iVar6 * 0x20 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<UE::Math::TVector<float>_>,int>
                        (pTVar12,1);
              ::operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
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

// Serialize<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143651a90

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<TAttributeArrayContainer<FName>_> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<TAttributeArrayContainer<FName>_> FVar9;
  uint uVar10;
  uint uVar11;
  TAttributeArrayContainer<FName> *pTVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<TAttributeArrayContainer<FName>_>)param_2;
      if (FVar3 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<TAttributeArrayContainer<FName>,int>
                ((TAttributeArrayContainer<FName> *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                  (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar10 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
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
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<FName>_>)param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<FName> *)
                                   ((longlong)(int)uVar11 * 0x20 + (longlong)FVar9));
              uVar11 = uVar11 + 1;
              uVar10 = param_2->ArrayNum;
            } while ((int)uVar11 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<FName>_>_>
                                  (0x820,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TAttributeArrayContainer<FName>_>)param_2;
              if (FVar3 != (ForElementType<TAttributeArrayContainer<FName>_>)0x0) {
                FVar9 = FVar3;
              }
              pTVar12 = (TAttributeArrayContainer<FName> *)
                        ((longlong)iVar6 * 0x20 + (longlong)FVar9);
              DefaultConstructItems<TAttributeArrayContainer<FName>,int>(pTVar12,1);
              ::operator<<(param_1,pTVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
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

// Serialize<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143651d00

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TAttributeArrayContainer<bool> *pTVar2;
  longlong *plVar3;
  ForElementType<TAttributeArrayContainer<bool>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TAttributeArrayContainer<bool>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TAttributeArrayContainer<bool>_>)param_2;
      if (FVar4 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TAttributeArrayContainer<bool>,int>
                ((TAttributeArrayContainer<bool> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<bool>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
                FVar10 = FVar4;
              }
              ::operator<<(param_1,(TAttributeArrayContainer<bool> *)
                                   ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TAttributeArrayContainer<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TAttributeArrayContainer<bool>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TAttributeArrayContainer<bool>_>)param_2;
              if (FVar4 != (ForElementType<TAttributeArrayContainer<bool>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TAttributeArrayContainer<bool> *)((longlong)FVar10 + (longlong)iVar7 * 0x18)
              ;
              DefaultConstructItems<TAttributeArrayContainer<bool>,int>(pTVar2,1);
              ::operator<<(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143651f80

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<int> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<int>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<int>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<int>,int>
                ((TMeshAttributeArrayBase<int> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<int>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<<int>(param_1,(TMeshAttributeArrayBase<int> *)
                                      ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<int>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<int>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<int>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<int> *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<int>,int>(pTVar2,1);
              operator<<<int>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143652200

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<float> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<float>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<float>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<float>,int>
                ((TMeshAttributeArrayBase<float> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<float>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<<float>(param_1,(TMeshAttributeArrayBase<float> *)
                                        ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<float>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<float>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<float>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<float>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<float> *)((longlong)FVar10 + (longlong)iVar7 * 0x18)
              ;
              DefaultConstructItems<TMeshAttributeArrayBase<float>,int>(pTVar2,1);
              operator<<<float>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143652480

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)FVar10,param_2->ArrayNum)
      ;
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                       param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                           0x0) {
                FVar10 = FVar4;
              }
              operator<<<UE::Math::TTransform<double>_>
                        (param_1,(TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                       param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>_>)
                           0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<UE::Math::TTransform<double>_> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TTransform<double>_>,int>
                        (pTVar2,1);
              operator<<<UE::Math::TTransform<double>_>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143652700

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)param_2
              ;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0
                 ) {
                FVar10 = FVar4;
              }
              operator<<<UE::Math::TVector2<float>_>
                        (param_1,(TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)param_2
              ;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>_>)0x0
                 ) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<UE::Math::TVector2<float>_> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector2<float>_>,int>
                        (pTVar2,1);
              operator<<<UE::Math::TVector2<float>_>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143652980

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)param_2
              ;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0
                 ) {
                FVar10 = FVar4;
              }
              operator<<<UE::Math::TVector4<float>_>
                        (param_1,(TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)param_2
              ;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>_>)0x0
                 ) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<UE::Math::TVector4<float>_> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector4<float>_>,int>
                        (pTVar2,1);
              operator<<<UE::Math::TVector4<float>_>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143652c00

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<UE::Math::TVector<float>_> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
                ((TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0)
              {
                FVar10 = FVar4;
              }
              operator<<<UE::Math::TVector<float>_>
                        (param_1,(TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)
                                 ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<UE::Math::TVector<float>_>_>)0x0)
              {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<UE::Math::TVector<float>_> *)
                       ((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<UE::Math::TVector<float>_>,int>
                        (pTVar2,1);
              operator<<<UE::Math::TVector<float>_>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143652e80

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<FName> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<FName>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<FName>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<FName>,int>
                ((TMeshAttributeArrayBase<FName> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<FName>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<<FName>(param_1,(TMeshAttributeArrayBase<FName> *)
                                        ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<FName>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<FName>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<FName>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<FName>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<FName> *)((longlong)FVar10 + (longlong)iVar7 * 0x18)
              ;
              DefaultConstructItems<TMeshAttributeArrayBase<FName>,int>(pTVar2,1);
              operator<<<FName>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143653100

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  TMeshAttributeArrayBase<bool> *pTVar2;
  longlong *plVar3;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FArchive *pFVar9;
  ForElementType<TMeshAttributeArrayBase<bool>_> FVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x18);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar4 = (param_2->AllocatorInstance).SecondaryData;
      FVar10 = (ForElementType<TMeshAttributeArrayBase<bool>_>)param_2;
      if (FVar4 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
        FVar10 = FVar4;
      }
      DestructItems<TMeshAttributeArrayBase<bool>,int>
                ((TMeshAttributeArrayBase<bool> *)FVar10,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                  (0x18,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0xaaaab)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar12 = 0;
          uVar11 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar8 = 0;
              if ((int)uVar12 < (int)uVar11) {
                uVar8 = ~uVar12 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar5 = (code *)swi(3);
                pFVar9 = (FArchive *)(*pcVar5)();
                return pFVar9;
              }
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<bool>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
                FVar10 = FVar4;
              }
              operator<<<bool>(param_1,(TMeshAttributeArrayBase<bool> *)
                                       ((longlong)FVar10 + (longlong)(int)uVar12 * 0x18));
              uVar12 = uVar12 + 1;
              uVar11 = param_2->ArrayNum;
            } while ((int)uVar12 < param_2->ArrayNum);
          }
        }
        else {
          TArray<TMeshAttributeArrayBase<bool>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar7 = param_2->ArrayNum;
              if (iVar7 == *piVar1) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TMeshAttributeArrayBase<bool>_>_>
                                  (0x818,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar7 + 1;
              FVar4 = (param_2->AllocatorInstance).SecondaryData;
              FVar10 = (ForElementType<TMeshAttributeArrayBase<bool>_>)param_2;
              if (FVar4 != (ForElementType<TMeshAttributeArrayBase<bool>_>)0x0) {
                FVar10 = FVar4;
              }
              pTVar2 = (TMeshAttributeArrayBase<bool> *)((longlong)FVar10 + (longlong)iVar7 * 0x18);
              DefaultConstructItems<TMeshAttributeArrayBase<bool>,int>(pTVar2,1);
              operator<<<bool>(param_1,pTVar2);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FArchive *)(*pcVar5)();
        return pFVar9;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Serialize<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> @ 143653380

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  ForElementType<FMeshElementContainer> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  ForElementType<FMeshElementContainer> FVar9;
  uint uVar10;
  uint uVar11;
  FMeshElementContainer *pFVar12;
  int iVar13;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 7);
  iVar13 = 0;
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
    if ((param_1->field_0x28 & 1) != 0) {
      FVar3 = (param_2->AllocatorInstance).SecondaryData;
      FVar9 = (ForElementType<FMeshElementContainer>)param_2;
      if (FVar3 != (ForElementType<FMeshElementContainer>)0x0) {
        FVar9 = FVar3;
      }
      DestructItems<FMeshElementContainer,int>((FMeshElementContainer *)FVar9,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshElementContainer>_>
                  (0x80,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x20001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar10 = local_res8[0];
          if (0 < (int)local_res8[0]) {
            do {
              uVar7 = 0;
              if ((int)uVar11 < (int)uVar10) {
                uVar7 = ~uVar11 >> 0x1f;
              }
              if (uVar7 == 0) {
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar4 = (code *)swi(3);
                  pFVar8 = (FArchive *)(*pcVar4)();
                  return pFVar8;
                }
              }
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<FMeshElementContainer>)param_2;
              if (FVar3 != (ForElementType<FMeshElementContainer>)0x0) {
                FVar9 = FVar3;
              }
              ::operator<<(param_1,(FMeshElementContainer *)
                                   ((longlong)(int)uVar11 * 0x80 + (longlong)FVar9));
              uVar10 = param_2->ArrayNum;
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar10);
          }
        }
        else {
          TArray<FMeshElementContainer,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
          Empty(param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar6 = param_2->ArrayNum;
              if (iVar6 == *piVar1) {
                iVar6 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMeshElementContainer>_>
                                  (0x880,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar6 + 1;
              FVar3 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<FMeshElementContainer>)param_2;
              if (FVar3 != (ForElementType<FMeshElementContainer>)0x0) {
                FVar9 = FVar3;
              }
              pFVar12 = (FMeshElementContainer *)((longlong)iVar6 * 0x80 + (longlong)FVar9);
              DefaultConstructItems<FMeshElementContainer,int>(pFVar12,1);
              ::operator<<(param_1,pFVar12);
              iVar13 = iVar13 + 1;
            } while (iVar13 < (int)local_res8[0]);
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

// Serialize<bool,TSizedDefaultAllocator<32>_> @ 143653620

FArchive * __cdecl
TArrayPrivateFriend::Serialize<bool,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum,(longlong)*piVar1);
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x1000001)) {
        param_2->ArrayNum = local_res8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_res8[0],*piVar1,&param_2->AllocatorInstance,local_res8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum);
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

