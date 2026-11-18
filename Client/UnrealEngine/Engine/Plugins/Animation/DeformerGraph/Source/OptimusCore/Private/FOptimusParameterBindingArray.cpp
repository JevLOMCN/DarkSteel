// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 3

// StaticStruct @ 14e1019f0

UScriptStruct * __cdecl FOptimusParameterBindingArray::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusParameterBindingArray.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusParameterBindingArray.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusParameterBindingArray,(UObject *)pUVar1,
                         L"OptimusParameterBindingArray");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusParameterBindingArray.OuterSingleton;
}

// FOptimusParameterBindingArray @ 14e1558a0

FOptimusParameterBindingArray * __thiscall
FOptimusParameterBindingArray::FOptimusParameterBindingArray
          (FOptimusParameterBindingArray *this,FOptimusParameterBindingArray *param_1)

{
  int *piVar1;
  int iVar2;
  FOptimusParameterBinding *pFVar3;
  
  (this->InnerArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->InnerArray).ArrayMax;
  iVar2 = (param_1->InnerArray).ArrayNum;
  pFVar3 = (FOptimusParameterBinding *)(param_1->InnerArray).AllocatorInstance.Data;
  (this->InnerArray).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x80,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  ConstructItems<FOptimusParameterBinding,FOptimusParameterBinding,int>
            ((this->InnerArray).AllocatorInstance.Data,pFVar3,iVar2);
  return this;
}

// Last @ 14e1f1100

FOptimusParameterBinding * __thiscall
FOptimusParameterBindingArray::Last(FOptimusParameterBindingArray *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FOptimusParameterBinding *pFVar5;
  uint uVar6;
  
  iVar1 = (this->InnerArray).ArrayNum;
  uVar6 = iVar1 + ~param_1;
  uVar4 = 0;
  if ((int)uVar6 < iVar1) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FOptimusParameterBinding *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FOptimusParameterBinding *)
         ((this->InnerArray).AllocatorInstance.Data +
         (longlong)((this->InnerArray).ArrayNum + ~param_1) * 0x80);
}

