// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// Serialize<short,TSizedDefaultAllocator<32>_> @ 142462510

FArchive * __cdecl
TArrayPrivateFriend::Serialize<short,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<short,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  FArchive *pFVar5;
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x800001)) {
        param_2->ArrayNum = local_res8[0];
        if ((param_1->field_0x28 & 1) != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_res8[0],*piVar1,&param_2->AllocatorInstance,local_res8[0],piVar1);
        }
        (**(code **)(*(longlong *)param_1 + 0x188))
                  (param_1,(param_2->AllocatorInstance).Data,(longlong)param_2->ArrayNum * 2);
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

// Serialize<UE::Slate::FPreprocessedFontGeometry,TSizedDefaultAllocator<32>_> @ 142462940

FArchive * __cdecl
TArrayPrivateFriend::Serialize<UE::Slate::FPreprocessedFontGeometry,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<UE::Slate::FPreprocessedFontGeometry,TSizedDefaultAllocator<32>_> *param_2)

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
  FScriptContainerElement *pFVar10;
  int iVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x78);
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
      DestructItems<UE::Slate::FPreprocessedFontGeometry,int>
                ((FPreprocessedFontGeometry *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x78,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x22223)) {
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
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x78;
              pFVar7 = ::operator<<(param_1,(bool *)pFVar10);
              TSetPrivateFriend::
              Serialize<TTuple<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader>,TDefaultMapHashableKeyFuncs<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader,0>,FDefaultSetAllocator>
                        (pFVar7,(TSet<TTuple<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader>,TDefaultMapHashableKeyFuncs<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader,0>,FDefaultSetAllocator>
                                 *)(pFVar10 + 8));
              pFVar7 = Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                                 (pFVar7,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                         (pFVar10 + 0x58));
              Serialize<short,TSizedDefaultAllocator<32>_>
                        (pFVar7,(TArray<short,TSizedDefaultAllocator<32>_> *)(pFVar10 + 0x68));
              uVar8 = param_2->ArrayNum;
              uVar9 = uVar9 + 1;
            } while ((int)uVar9 < (int)uVar8);
          }
        }
        else {
          TArray<UE::Slate::FPreprocessedFontGeometry,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if (0 < (int)local_res8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x878,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x78;
              DefaultConstructItems<UE::Slate::FPreprocessedFontGeometry,int>(pFVar10,1);
              pFVar7 = ::operator<<(param_1,(bool *)pFVar10);
              TSetPrivateFriend::
              Serialize<TTuple<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader>,TDefaultMapHashableKeyFuncs<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader,0>,FDefaultSetAllocator>
                        (pFVar7,(TSet<TTuple<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader>,TDefaultMapHashableKeyFuncs<int,UE::Slate::FPreprocessedFontGeometry::FGlyphHeader,0>,FDefaultSetAllocator>
                                 *)(pFVar10 + 8));
              pFVar7 = Serialize<unsigned_char,TSizedDefaultAllocator<32>_>
                                 (pFVar7,(TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                                         (pFVar10 + 0x58));
              Serialize<short,TSizedDefaultAllocator<32>_>
                        (pFVar7,(TArray<short,TSizedDefaultAllocator<32>_> *)(pFVar10 + 0x68));
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

