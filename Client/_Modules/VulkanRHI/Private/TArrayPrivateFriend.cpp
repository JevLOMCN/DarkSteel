// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 11

// Serialize<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_> @ 145b41740

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 5);
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
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x80001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar9 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
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
               bVar5)) break;
            ::operator<<(param_1,(FAttachmentDesc *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x20))
            ;
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x820,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          ::operator<<(param_1,(FAttachmentDesc *)(pFVar3 + (longlong)iVar6 * 0x20));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_res8[0]);
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

// Serialize<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_> @ 145b41930

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar9 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
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
               bVar5)) break;
            ::operator<<(param_1,(FAttachmentRef *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10))
            ;
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          ::operator<<(param_1,(FAttachmentRef *)(pFVar3 + (longlong)iVar6 * 0x10));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_res8[0]);
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

// Serialize<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_> @ 145b41b20

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
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
                (8,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar8 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FBlendAttachment *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x108,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FBlendAttachment *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)local_res8[0]);
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

// Serialize<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> @ 145b41d10

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
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
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar8 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FDescriptorSetLayoutBinding *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FDescriptorSetLayoutBinding *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)local_res8[0]);
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

// Serialize<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_> @ 145b41f00

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FArchive *pFVar8;
  uint uVar9;
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
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar11 = 0;
          uVar9 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
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
               bVar5)) break;
            ::operator<<(param_1,(FVertexAttribute *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 0x10))
            ;
            uVar11 = uVar11 + 1;
            uVar9 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar11) {
              return param_1;
            }
          }
          pcVar4 = (code *)swi(3);
          pFVar8 = (FArchive *)(*pcVar4)();
          return pFVar8;
        }
        TArray<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar6 = param_2->ArrayNum;
          if (iVar6 == *piVar1) {
            iVar6 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x410,&param_2->AllocatorInstance,piVar1);
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          param_2->ArrayNum = iVar6 + 1;
          ::operator<<(param_1,(FVertexAttribute *)(pFVar3 + (longlong)iVar6 * 0x10));
          iVar10 = iVar10 + 1;
        } while (iVar10 < (int)local_res8[0]);
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

// Serialize<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_> @ 145b420f0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
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
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar8 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FVertexBinding *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FVertexBinding *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)local_res8[0]);
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

// Serialize<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> @ 145b422e0

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
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
  TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *pTVar9;
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
      DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
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
            Serialize<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>
                      (param_1,(TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
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
        TArray<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::Empty(param_2,local_res8[0]);
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
          pTVar9 = (TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
                   ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10);
          (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          pTVar9->ArrayNum = 0;
          pTVar9->ArrayMax = 0;
          Serialize<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>(param_1,pTVar9);
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

// Serialize<FVulkanShaderHeader::FBindingInfo,TSizedDefaultAllocator<32>_> @ 145b8fd10

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FVulkanShaderHeader::FBindingInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FVulkanShaderHeader::FBindingInfo,TSizedDefaultAllocator<32>_> *param_2)

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
        if ((param_1->field_0x28 & 1) != 0) {
          TArray<FVulkanShaderHeader::FBindingInfo,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,local_res8[0]);
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          do {
            iVar7 = param_2->ArrayNum;
            if (iVar7 == *piVar1) {
              iVar7 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar7 + 1;
            pFVar10 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 4;
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
        param_2->ArrayNum = local_res8[0];
        uVar14 = uVar12;
        uVar11 = local_res8[0];
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
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

// Serialize<FVulkanShaderHeader::FGlobalSamplerInfo,TSizedDefaultAllocator<32>_> @ 145b8ffa0

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FVulkanShaderHeader::FGlobalSamplerInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FVulkanShaderHeader::FGlobalSamplerInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 2);
  iVar9 = 0;
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
                (2,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x800001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar8 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FGlobalSamplerInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 2));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FVulkanShaderHeader::FGlobalSamplerInfo,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x102,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FGlobalSamplerInfo *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 2));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)local_res8[0]);
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

// Serialize<FVulkanShaderHeader::FInputAttachmentInfo,TSizedDefaultAllocator<32>_> @ 145b90190

FArchive * __cdecl
TArrayPrivateFriend::
Serialize<FVulkanShaderHeader::FInputAttachmentInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FVulkanShaderHeader::FInputAttachmentInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 2);
  iVar9 = 0;
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
                (2,1,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x800001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar8 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FInputAttachmentInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 2));
            uVar8 = param_2->ArrayNum;
            uVar10 = uVar10 + 1;
            if ((int)uVar8 <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FVulkanShaderHeader::FInputAttachmentInfo,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x102,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FInputAttachmentInfo *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 2));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)local_res8[0]);
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

// Serialize<FVulkanShaderHeader::FUniformBufferInfo,TSizedDefaultAllocator<32>_> @ 145b90380

FArchive * __cdecl
TArrayPrivateFriend::Serialize<FVulkanShaderHeader::FUniformBufferInfo,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<FVulkanShaderHeader::FUniformBufferInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint local_res8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 3);
  iVar9 = 0;
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
                (8,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)local_res8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)local_res8[0] < 0x200001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = local_res8[0];
          uVar10 = 0;
          uVar8 = local_res8[0];
          if ((int)local_res8[0] < 1) {
            return param_1;
          }
          while( true ) {
            uVar6 = 0;
            if ((int)uVar10 < (int)uVar8) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) break;
            ::operator<<(param_1,(FUniformBufferInfo *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 8));
            uVar10 = uVar10 + 1;
            uVar8 = param_2->ArrayNum;
            if (param_2->ArrayNum <= (int)uVar10) {
              return param_1;
            }
          }
          pcVar3 = (code *)swi(3);
          pFVar7 = (FArchive *)(*pcVar3)();
          return pFVar7;
        }
        TArray<FVulkanShaderHeader::FUniformBufferInfo,TSizedDefaultAllocator<32>_>::Empty
                  (param_2,local_res8[0]);
        if ((int)local_res8[0] < 1) {
          return param_1;
        }
        do {
          iVar5 = param_2->ArrayNum;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar5 + 1;
          ::operator<<(param_1,(FUniformBufferInfo *)
                               ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8));
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)local_res8[0]);
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

