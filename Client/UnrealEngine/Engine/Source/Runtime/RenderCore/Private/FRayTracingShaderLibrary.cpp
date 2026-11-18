// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// AddShader @ 145e8b4f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __thiscall
FRayTracingShaderLibrary::AddShader
          (FRayTracingShaderLibrary *this,EShaderPlatform param_1,FRHIRayTracingShader *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  FRHIRayTracingShader *pFVar4;
  uint uVar5;
  FShaderLibrary *pFVar6;
  int iVar7;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar10;
  bool bVar11;
  EShaderPlatform local_res10 [4];
  FRHIRayTracingShader *local_res18;
  
  iVar2 = 0;
  bVar11 = param_2->RayTracingPayloadType != 0;
  if (bVar11) {
    for (; (param_2->RayTracingPayloadType >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
    }
  }
  lpCriticalSection = &this->CS;
  iVar7 = 0x20;
  if (bVar11) {
    iVar7 = iVar2;
  }
  local_res10[0] = param_1;
  local_res18 = param_2;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar6 = TMapBase<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,0>_>
             ::FindOrAddImpl<enum_EShaderPlatform_const_&>(this,(uint)local_res10[0],local_res10);
    pTVar10 = pFVar6->UnusedIndicies + iVar7;
    if (pTVar10->ArrayNum == 0) {
      pTVar8 = pFVar6->Shaders + iVar7;
      pFVar1 = (pTVar8->AllocatorInstance).Data;
      if ((pFVar1 <= (FScriptContainerElement *)&local_res18) &&
         ((FScriptContainerElement *)&local_res18 < pFVar1 + (longlong)pTVar8->ArrayMax * 8)) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      uVar5 = pTVar8->ArrayNum;
      if (uVar5 == pTVar8->ArrayMax) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
      }
      pFVar1 = (pTVar8->AllocatorInstance).Data;
      pTVar8->ArrayNum = uVar5 + 1;
      *(FRHIRayTracingShader **)(pFVar1 + (longlong)(int)uVar5 * 8) = local_res18;
    }
    else {
      if (pTVar10->ArrayNum < 1) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      pFVar4 = local_res18;
      uVar5 = *(uint *)((pTVar10->AllocatorInstance).Data + (longlong)pTVar10->ArrayNum * 4 + -4);
      pTVar10->ArrayNum = pTVar10->ArrayNum + -1;
      uVar9 = 0;
      if ((int)uVar5 < pFVar6->Shaders[iVar7].ArrayNum) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
      }
      *(FRHIRayTracingShader **)
       (pFVar6->Shaders[iVar7].AllocatorInstance.Data + (longlong)(int)uVar5 * 8) = pFVar4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetShaders @ 145ea0b60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRayTracingShaderLibrary::GetShaders
          (FRayTracingShaderLibrary *this,EShaderPlatform param_1,
          TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *param_2,
          FRHIRayTracingShader *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  FShaderLibrary *pFVar7;
  uint uVar8;
  int iVar9;
  TArray<FRHIRayTracingShader_*,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  
  iVar3 = 0;
  bVar13 = param_3->RayTracingPayloadType != 0;
  if (bVar13) {
    for (; (param_3->RayTracingPayloadType >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  lpCriticalSection = &this->CS;
  iVar9 = 0x20;
  if (bVar13) {
    iVar9 = iVar3;
  }
  iVar3 = param_2->ArrayNum;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar7 = TMapBase<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,0>_>
           ::Find(this,param_1);
  if (pFVar7 != (FShaderLibrary *)0x0) {
    pTVar10 = pFVar7->Shaders + iVar9;
    if ((param_2 == pTVar10) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = pTVar10->ArrayNum;
    if (iVar2 != 0) {
      iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,iVar2,&param_2->AllocatorInstance,&param_2->ArrayNum,&param_2->ArrayMax
                        );
      memcpy((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8,
             (pTVar10->AllocatorInstance).Data,(longlong)iVar2 << 3);
    }
    pTVar12 = pFVar7->UnusedIndicies + iVar9;
    pFVar11 = (pTVar12->AllocatorInstance).Data;
    iVar9 = pTVar12->ArrayNum;
    pFVar1 = pFVar11 + (longlong)iVar9 * 4;
    while( true ) {
      if (pTVar12->ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<unsigned_int,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar1) break;
      uVar8 = *(int *)pFVar11 + iVar3;
      uVar6 = 0;
      if ((int)uVar8 < param_2->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = pFVar11 + 4;
      *(FRHIRayTracingShader **)((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8) =
           param_3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145ea0d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// RemoveShader @ 145eb01a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRayTracingShaderLibrary::RemoveShader
          (FRayTracingShaderLibrary *this,EShaderPlatform param_1,uint param_2,
          FRHIRayTracingShader *param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  FShaderLibrary *pFVar5;
  int iVar6;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  bool bVar9;
  uint local_res18 [2];
  
  if (param_2 != 0xffffffff) {
    iVar3 = 0;
    bVar9 = param_3->RayTracingPayloadType != 0;
    if (bVar9) {
      for (; (param_3->RayTracingPayloadType >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
      }
    }
    lpCriticalSection = &this->CS;
    iVar6 = 0x20;
    if (bVar9) {
      iVar6 = iVar3;
    }
    local_res18[0] = param_2;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar5 = TMapBase<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EShaderPlatform,FRayTracingShaderLibrary::FShaderLibrary,0>_>
             ::Find(this,param_1);
    if (pFVar5 == (FShaderLibrary *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderLibrary",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderResource.cpp"
                         ,0x88,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pTVar7 = pFVar5->UnusedIndicies + iVar6;
    pFVar1 = (pTVar7->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_res18) &&
       ((FScriptContainerElement *)local_res18 < pFVar1 + (longlong)pTVar7->ArrayMax * 4)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar3 = pTVar7->ArrayNum;
    if (iVar3 == pTVar7->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
    }
    pTVar7->ArrayNum = iVar3 + 1;
    *(uint *)((pTVar7->AllocatorInstance).Data + (longlong)iVar3 * 4) = local_res18[0];
    lVar8 = (longlong)(int)local_res18[0];
    uVar4 = 0;
    if ((int)local_res18[0] < pFVar5->Shaders[iVar6].ArrayNum) {
      uVar4 = ~local_res18[0] >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined8 *)(pFVar5->Shaders[iVar6].AllocatorInstance.Data + lVar8 * 8) = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

