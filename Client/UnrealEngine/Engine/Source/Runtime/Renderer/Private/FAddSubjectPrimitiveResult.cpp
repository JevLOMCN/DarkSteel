// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AcceptMesh @ 1456116d0

void __thiscall
FAddSubjectPrimitiveResult::AcceptMesh
          (FAddSubjectPrimitiveResult *this,int param_1,int param_2,
          FAddSubjectPrimitiveOverflowedIndices *param_3)

{
  int *piVar1;
  short *psVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  short local_18 [8];
  
  sVar5 = (short)param_2;
  if ((param_1 < 0) || (0xfffe < param_2)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumAcceptedStaticMeshes >= 0 && MeshIdx < ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                       ,0x629,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1 < 2) {
    *(short *)((longlong)&this->field0_0x0 + (longlong)param_1 * 2 + 4) = sVar5 + 1;
  }
  else {
    if (param_1 == 2) {
      HandleOverflow(this,param_3);
    }
    if ((*(byte *)&this->field0_0x0 & 4) == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bOverflowed",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                         ,0x634,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (param_3->MeshIndices).AllocatorInstance.Data;
    local_18[0] = sVar5;
    if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(param_3->MeshIndices).ArrayMax * 2
       )) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (param_3->MeshIndices).ArrayNum;
    piVar1 = &(param_3->MeshIndices).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&(param_3->MeshIndices).AllocatorInstance,piVar1);
    }
    (param_3->MeshIndices).ArrayNum = iVar7 + 1;
    *(short *)((param_3->MeshIndices).AllocatorInstance.Data + (longlong)iVar7 * 2) = local_18[0];
    psVar2 = (short *)((longlong)&this->field0_0x0 + 6);
    *psVar2 = *psVar2 + 1;
  }
  *(uint *)&this->field0_0x0 = *(uint *)&this->field0_0x0 | 2;
  return;
}

// HandleOverflow @ 1456388e0

void __thiscall
FAddSubjectPrimitiveResult::HandleOverflow
          (FAddSubjectPrimitiveResult *this,FAddSubjectPrimitiveOverflowedIndices *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e [3];
  
  uVar6 = *(uint *)&this->field0_0x0 >> 1 & 1;
  if ((*(uint *)&this->field0_0x0 & 1) == 0) {
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequestMeshCommandBuild",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                         ,0x682,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (param_1->MeshIndices).AllocatorInstance.Data;
    local_10 = *(short *)((longlong)&this->field0_0x0 + 4) + -1;
    if ((pFVar2 <= (FScriptContainerElement *)&local_10) &&
       ((FScriptContainerElement *)&local_10 <
        pFVar2 + (longlong)(param_1->MeshIndices).ArrayMax * 2)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_1->MeshIndices).ArrayNum;
    if (iVar5 == (param_1->MeshIndices).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&(param_1->MeshIndices).AllocatorInstance,
                         &(param_1->MeshIndices).ArrayMax);
    }
    (param_1->MeshIndices).ArrayNum = iVar5 + 1;
    *(short *)((param_1->MeshIndices).AllocatorInstance.Data + (longlong)iVar5 * 2) = local_10;
    pFVar2 = (param_1->MeshIndices).AllocatorInstance.Data;
    local_e[0] = *(short *)((longlong)&this->field0_0x0 + 6) + -1;
    if ((pFVar2 <= (FScriptContainerElement *)local_e) &&
       ((FScriptContainerElement *)local_e < pFVar2 + (longlong)(param_1->MeshIndices).ArrayMax * 2)
       ) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar5 = (param_1->MeshIndices).ArrayNum;
    if (iVar5 == (param_1->MeshIndices).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x202,&(param_1->MeshIndices).AllocatorInstance,
                         &(param_1->MeshIndices).ArrayMax);
    }
    (param_1->MeshIndices).ArrayNum = iVar5 + 1;
    *(short *)((param_1->MeshIndices).AllocatorInstance.Data + (longlong)iVar5 * 2) = local_e[0];
    (this->field0_0x0)._s_1.field14_0x4 = (FAddSubjectPrimitiveResult_u_0_s_1_u_4)0x20000;
  }
  else {
    pFVar2 = (param_1->MDCIndices).AllocatorInstance.Data;
    local_18 = *(short *)((longlong)&this->field0_0x0 + 4) + -1;
    if (uVar6 == 0) {
      if ((pFVar2 <= (FScriptContainerElement *)&local_18) &&
         ((FScriptContainerElement *)&local_18 <
          pFVar2 + (longlong)(param_1->MDCIndices).ArrayMax * 2)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_1->MDCIndices).ArrayNum;
      if (iVar5 == (param_1->MDCIndices).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,(ForAnyElementType *)param_1,&(param_1->MDCIndices).ArrayMax);
      }
      (param_1->MDCIndices).ArrayNum = iVar5 + 1;
      *(short *)((param_1->MDCIndices).AllocatorInstance.Data + (longlong)iVar5 * 2) = local_18;
      pFVar2 = (param_1->MDCIndices).AllocatorInstance.Data;
      local_16 = *(short *)((longlong)&this->field0_0x0 + 6) + -1;
      if ((pFVar2 <= (FScriptContainerElement *)&local_16) &&
         ((FScriptContainerElement *)&local_16 <
          pFVar2 + (longlong)(param_1->MDCIndices).ArrayMax * 2)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_1->MDCIndices).ArrayNum;
      if (iVar5 == (param_1->MDCIndices).ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,(ForAnyElementType *)param_1,&(param_1->MDCIndices).ArrayMax);
      }
      (param_1->MDCIndices).ArrayNum = iVar5 + 1;
      *(short *)((param_1->MDCIndices).AllocatorInstance.Data + (longlong)iVar5 * 2) = local_16;
      (this->field0_0x0)._s_1.field14_0x4 = (FAddSubjectPrimitiveResult_u_0_s_1_u_4)0x2;
    }
    else {
      local_14 = local_18;
      if ((pFVar2 <= (FScriptContainerElement *)&local_14) &&
         ((FScriptContainerElement *)&local_14 <
          pFVar2 + (longlong)(param_1->MDCIndices).ArrayMax * 2)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_1->MDCIndices).ArrayNum;
      piVar1 = &(param_1->MDCIndices).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,(ForAnyElementType *)param_1,piVar1);
      }
      (param_1->MDCIndices).ArrayNum = iVar5 + 1;
      *(short *)((param_1->MDCIndices).AllocatorInstance.Data + (longlong)iVar5 * 2) = local_14;
      pFVar2 = (param_1->MeshIndices).AllocatorInstance.Data;
      local_12 = *(short *)((longlong)&this->field0_0x0 + 6) + -1;
      if ((pFVar2 <= (FScriptContainerElement *)&local_12) &&
         ((FScriptContainerElement *)&local_12 <
          pFVar2 + (longlong)(param_1->MeshIndices).ArrayMax * 2)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = (param_1->MeshIndices).ArrayNum;
      piVar1 = &(param_1->MeshIndices).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&(param_1->MeshIndices).AllocatorInstance,piVar1);
      }
      (param_1->MeshIndices).ArrayNum = iVar5 + 1;
      *(short *)((param_1->MeshIndices).AllocatorInstance.Data + (longlong)iVar5 * 2) = local_12;
      (this->field0_0x0)._s_1.field14_0x4 = (FAddSubjectPrimitiveResult_u_0_s_1_u_4)0x10001;
    }
  }
  *(uint *)&this->field0_0x0 = *(uint *)&this->field0_0x0 | 4;
  return;
}

