// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 148505570

UScriptStruct * __cdecl FShaderStats::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FShaderStats.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FShaderStats.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FShaderStats,(UObject *)pUVar1,L"ShaderStats");
  }
  return Z_Registration_Info_UScriptStruct_FShaderStats.OuterSingleton;
}

// FShaderStats @ 14850f5d0

FShaderStats * __thiscall FShaderStats::FShaderStats(FShaderStats *this,FShaderStats *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->PermutationCompilations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PermutationCompilations).ArrayMax;
  iVar2 = (param_1->PermutationCompilations).ArrayNum;
  _Src = (param_1->PermutationCompilations).AllocatorInstance.Data;
  (this->PermutationCompilations).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->PermutationCompilations).AllocatorInstance.Data,_Src,(longlong)iVar2 << 5);
  }
  this->Compiled = param_1->Compiled;
  this->Cooked = param_1->Cooked;
  this->CompiledDouble = param_1->CompiledDouble;
  this->CookedDouble = param_1->CookedDouble;
  this->CompileTime = param_1->CompileTime;
  return this;
}

