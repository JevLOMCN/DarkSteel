// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// SetAsyncCompute @ 145dcbd70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FRHITransientAllocationFences::SetAsyncCompute
          (FRHITransientAllocationFences *this,uint param_1,TInterval<unsigned_int> param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uStackX_1c;
  
  if ((this->Pipelines & AsyncCompute) == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumHasAnyFlags(Pipelines, ERHIPipeline::AsyncCompute)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x55,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uStackX_1c = param_2.Max;
  uVar4 = param_2.Min;
  if ((((uStackX_1c < uVar4) || (uStackX_1c < uVar4)) || (param_1 <= uVar4)) ||
     (uStackX_1c <= param_1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InGraphicsForkJoin.IsValid() && Contains(InGraphicsForkJoin, InAsyncCompute)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x56,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = this->Graphics;
  if ((uVar1 != 0xffffffff) && (((uStackX_1c < uVar4 || (uVar1 <= uVar4)) || (uStackX_1c <= uVar1)))
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Graphics == Invalid || Contains(InGraphicsForkJoin, Graphics)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHITransientResourceAllocator.h"
                       ,0x57,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->GraphicsForkJoin = param_2;
  this->AsyncCompute = param_1;
  return;
}

