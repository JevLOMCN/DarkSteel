// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// CaptureLLMScopes @ 14148bcf0

void __thiscall
UE::FLLMActiveTagsScope::CaptureLLMScopes(FLLMActiveTagsScope *this,FLLMActiveTagsCapture *param_1)

{
  int iVar1;
  
  iVar1 = (this->LLMScopes).ArrayNum;
  if (iVar1 == (this->LLMScopes).ArrayMax) {
    iVar1 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FLLMScope>_>
                      (0x103,(ForElementType<FLLMScope> *)this,&(this->LLMScopes).ArrayMax);
  }
  (this->LLMScopes).ArrayNum = iVar1 + 1;
  FLLMScope::FLLMScope
            ((FLLMScope *)((this->LLMScopes).AllocatorInstance.InlineData + iVar1),
             param_1->LLMTags[0],false,None,Default,true);
  iVar1 = (this->LLMScopes).ArrayNum;
  if (iVar1 == (this->LLMScopes).ArrayMax) {
    iVar1 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FLLMScope>_>
                      (0x103,(ForElementType<FLLMScope> *)this,&(this->LLMScopes).ArrayMax);
  }
  (this->LLMScopes).ArrayNum = iVar1 + 1;
  FLLMScope::FLLMScope
            ((FLLMScope *)((this->LLMScopes).AllocatorInstance.InlineData + iVar1),
             param_1->LLMTags[1],false,Assets,Default,true);
  iVar1 = (this->LLMScopes).ArrayNum;
  if (iVar1 == (this->LLMScopes).ArrayMax) {
    iVar1 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FLLMScope>_>
                      (0x103,(ForElementType<FLLMScope> *)this,&(this->LLMScopes).ArrayMax);
  }
  (this->LLMScopes).ArrayNum = iVar1 + 1;
  FLLMScope::FLLMScope
            ((FLLMScope *)((this->LLMScopes).AllocatorInstance.InlineData + iVar1),
             param_1->LLMTags[2],false,AssetClasses,Default,true);
  iVar1 = (this->LLMScopes).ArrayNum;
  if (iVar1 == (this->LLMScopes).ArrayMax) {
    iVar1 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<FLLMScope>_>
                      (0x103,(ForElementType<FLLMScope> *)this,&(this->LLMScopes).ArrayMax);
  }
  (this->LLMScopes).ArrayNum = iVar1 + 1;
  FLLMScope::FLLMScope
            ((FLLMScope *)((this->LLMScopes).AllocatorInstance.InlineData + iVar1),
             param_1->LLMTags[3],false,UObjectClasses,Default,true);
  return;
}

