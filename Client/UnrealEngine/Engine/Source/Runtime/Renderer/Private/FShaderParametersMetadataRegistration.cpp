// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FShaderParametersMetadataRegistration @ 14472e640

FShaderParametersMetadataRegistration * __thiscall
FShaderParametersMetadataRegistration::FShaderParametersMetadataRegistration
          (FShaderParametersMetadataRegistration *this,
          TFunctionRef<FShaderParametersMetadata_const_*___cdecl(void)> *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FShaderParametersMetadataRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar6;
  FShaderParametersMetadataRegistration *pFVar7;
  FShaderParametersMetadataRegistration *local_18 [2];
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)&(this->LazyShaderParametersMetadataAccessor).field_0x8 = 0;
  *(undefined8 *)&this->LazyShaderParametersMetadataAccessor = uVar1;
  *(undefined8 *)&(this->LazyShaderParametersMetadataAccessor).field_0x8 =
       *(undefined8 *)&param_1->field_0x8;
  pTVar6 = GetInstances();
  pFVar2 = (pTVar6->AllocatorInstance).Data;
  local_18[0] = this;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)pTVar6->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FShaderParametersMetadataRegistration *)(*pcVar3)();
      return pFVar7;
    }
  }
  iVar5 = pTVar6->ArrayNum;
  if (iVar5 == pTVar6->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar6->AllocatorInstance,&pTVar6->ArrayMax);
  }
  pTVar6->ArrayNum = iVar5 + 1;
  *(FShaderParametersMetadataRegistration **)
   ((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_18[0];
  return this;
}

