// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FShaderTypeRegistration @ 14472e720

FShaderTypeRegistration * __thiscall
FShaderTypeRegistration::FShaderTypeRegistration
          (FShaderTypeRegistration *this,TFunctionRef<FShaderType_&___cdecl(void)> *param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FShaderTypeRegistration *pFVar6;
  TArray<FShaderTypeRegistration_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FShaderTypeRegistration *local_18 [2];
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)&(this->LazyShaderTypeAccessor).field_0x8 = 0;
  *(undefined8 *)&this->LazyShaderTypeAccessor = uVar1;
  *(undefined8 *)&(this->LazyShaderTypeAccessor).field_0x8 = *(undefined8 *)&param_1->field_0x8;
  bVar4 = AreShaderTypesInitialized();
  if (bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!AreShaderTypesInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                       ,0x63a,
                       L"Shader type was loaded too late, use ELoadingPhase::PostConfigInit on your module to cause it to load earlier. This shader will not be compiled or function.  The module and shader will appear in the callstack of this assert."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderTypeRegistration *)(*pcVar3)();
      return pFVar6;
    }
  }
  pTVar7 = GetInstances();
  pFVar2 = (pTVar7->AllocatorInstance).Data;
  local_18[0] = this;
  if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)pTVar7->ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FShaderTypeRegistration *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar5 = pTVar7->ArrayNum;
  if (iVar5 == pTVar7->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
  }
  pTVar7->ArrayNum = iVar5 + 1;
  *(FShaderTypeRegistration **)((pTVar7->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_18[0];
  return this;
}

