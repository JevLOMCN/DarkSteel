// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// ~FShaderPipelineCacheArchive @ 145e85d40

void __thiscall
FShaderPipelineCacheArchive::~FShaderPipelineCacheArchive(FShaderPipelineCacheArchive *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FShaderPipelineCacheArchive__6B_;
  DestructItems<TFunction<bool___cdecl(double)>,int>
            ((TFunction<bool___cdecl(double)> *)
             (this->ExternalReadDependencies).AllocatorInstance.Data,
             (this->ExternalReadDependencies).ArrayNum);
  pFVar1 = (this->ExternalReadDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FArchive::~FArchive((FArchive *)this);
  return;
}

// AttachExternalReadDependency @ 145e8e220

bool __thiscall
FShaderPipelineCacheArchive::AttachExternalReadDependency
          (FShaderPipelineCacheArchive *this,TFunction<bool___cdecl(double)> *param_1)

{
  int *piVar1;
  TArray<TFunction<bool___cdecl(double)>,TSizedDefaultAllocator<32>_> *pTVar2;
  TFunction<bool___cdecl(double)> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  
  pTVar2 = &this->ExternalReadDependencies;
  pTVar3 = (TFunction<bool___cdecl(double)> *)(pTVar2->AllocatorInstance).Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->ExternalReadDependencies).ArrayMax)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = (this->ExternalReadDependencies).ArrayNum;
  piVar1 = &(this->ExternalReadDependencies).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ExternalReadDependencies).ArrayNum = iVar7 + 1;
  pFVar9 = (pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x30;
  *(longlong *)pFVar9 = *(longlong *)param_1;
  *(longlong *)(pFVar9 + 0x28) = 0;
  if (*(longlong *)pFVar9 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)();
  }
  return true;
}

// PollExternalReadDependencies @ 145ea8dc0

bool __thiscall
FShaderPipelineCacheArchive::PollExternalReadDependencies(FShaderPipelineCacheArchive *this)

{
  int *piVar1;
  TArray<TFunction<bool___cdecl(double)>,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  bool bVar15;
  undefined8 local_res10;
  
  uVar4 = __real_bff0000000000000;
  uVar12 = 0;
  bVar15 = (this->ExternalReadDependencies).ArrayNum == 0;
  if (!bVar15) {
    pTVar2 = &this->ExternalReadDependencies;
    do {
      uVar14 = ~uVar12 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar12 < (this->ExternalReadDependencies).ArrayNum) {
        uVar7 = uVar14;
      }
      if (uVar7 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      pFVar11 = (pTVar2->AllocatorInstance).Data;
      local_res10 = uVar4;
      lVar13 = (longlong)(int)uVar12 * 0x30;
      UE::Core::Private::Function::CheckCallable(*(void **)(pFVar11 + lVar13));
      pcVar3 = *(code **)(pFVar11 + lVar13);
      pFVar10 = *(FScriptContainerElement **)(pFVar11 + lVar13 + 0x10 + 0x18);
      if (pFVar10 == (FScriptContainerElement *)0x0) {
        pFVar10 = pFVar11 + lVar13 + 0x10;
      }
      uVar8 = (**(code **)(*(longlong *)pFVar10 + 8))();
      cVar6 = (*pcVar3)(uVar8,&local_res10);
      if (cVar6 == '\0') {
        uVar12 = uVar12 + 1;
      }
      else {
        uVar7 = 0;
        if ((int)uVar12 < (this->ExternalReadDependencies).ArrayNum) {
          uVar7 = uVar14;
        }
        if (uVar7 == 0) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            uVar5 = (*pcVar3)();
            return (bool)uVar5;
          }
        }
        pFVar11 = (pTVar2->AllocatorInstance).Data + lVar13;
        if (*(longlong *)pFVar11 != 0) {
          pFVar10 = *(FScriptContainerElement **)(pFVar11 + 0x28);
          if (*(FScriptContainerElement **)(pFVar11 + 0x28) == (FScriptContainerElement *)0x0) {
            pFVar10 = pFVar11 + 0x10;
          }
          (**(code **)(*(longlong *)pFVar10 + 0x10))();
        }
        iVar9 = (this->ExternalReadDependencies).ArrayNum + ~uVar12;
        if (iVar9 != 0) {
          memmove(pFVar11,pFVar11 + 0x30,(longlong)iVar9 * 0x30);
        }
        piVar1 = &(this->ExternalReadDependencies).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,0x10,&pTVar2->AllocatorInstance,(this->ExternalReadDependencies).ArrayNum,
                   &(this->ExternalReadDependencies).ArrayMax);
      }
      uVar7 = (this->ExternalReadDependencies).ArrayNum;
    } while (uVar12 < uVar7);
    bVar15 = uVar7 == 0;
  }
  return bVar15;
}

