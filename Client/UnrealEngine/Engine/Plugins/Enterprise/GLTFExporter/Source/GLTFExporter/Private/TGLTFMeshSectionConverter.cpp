// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 2

// Convert @ 14e5e42f0

FGLTFMeshSection * __thiscall
TGLTFMeshSectionConverter<USkeletalMesh>::Convert
          (TGLTFMeshSectionConverter<USkeletalMesh> *this,USkeletalMesh *param_1,int param_2,
          FMeshAttributesArray<int> *param_3)

{
  TArray<TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGLTFMeshSection *pFVar7;
  FGLTFMeshSection *local_18 [2];
  
  pTVar1 = &this->Outputs;
  pFVar7 = ::operator_new(0x68);
  local_18[0] = (FGLTFMeshSection *)0x0;
  if (pFVar7 != (FGLTFMeshSection *)0x0) {
    local_18[0] = FGLTFMeshSection::FGLTFMeshSection(pFVar7,param_1,param_2,param_3);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Outputs).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FGLTFMeshSection *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->Outputs).ArrayNum;
  piVar2 = &(this->Outputs).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Outputs).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8;
  *(FGLTFMeshSection **)pFVar3 = local_18[0];
  local_18[0] = (FGLTFMeshSection *)0x0;
  pFVar7 = *(FGLTFMeshSection **)pFVar3;
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return pFVar7;
}

// Convert @ 14e5e4410

FGLTFMeshSection * __thiscall
TGLTFMeshSectionConverter<UStaticMesh>::Convert
          (TGLTFMeshSectionConverter<UStaticMesh> *this,UStaticMesh *param_1,int param_2,
          FMeshAttributesArray<int> *param_3)

{
  TArray<TUniquePtr<FGLTFMeshSection,TDefaultDelete<FGLTFMeshSection>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGLTFMeshSection *pFVar7;
  FGLTFMeshSection *local_18 [2];
  
  pTVar1 = &this->Outputs;
  pFVar7 = ::operator_new(0x68);
  local_18[0] = (FGLTFMeshSection *)0x0;
  if (pFVar7 != (FGLTFMeshSection *)0x0) {
    local_18[0] = FGLTFMeshSection::FGLTFMeshSection(pFVar7,param_1,param_2,param_3);
  }
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->Outputs).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FGLTFMeshSection *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->Outputs).ArrayNum;
  piVar2 = &(this->Outputs).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->Outputs).ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8;
  *(FGLTFMeshSection **)pFVar3 = local_18[0];
  local_18[0] = (FGLTFMeshSection *)0x0;
  pFVar7 = *(FGLTFMeshSection **)pFVar3;
  if (*(void **)param_3 != (void *)0x0) {
    FMemory::Free(*(void **)param_3);
  }
  return pFVar7;
}

