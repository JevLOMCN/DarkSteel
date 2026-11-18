// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFCore
// Functions: 3

// FMaterialExpressionGeneric @ 14e62ac20

FMaterialExpressionGeneric * __thiscall
GLTF::FMaterialExpressionGeneric::FMaterialExpressionGeneric(FMaterialExpressionGeneric *this)

{
  *(undefined4 *)&this->_padding_ = 3;
  this->_padding_ = (longlong)&___7FMaterialExpressionGeneric_GLTF__6B_;
  (this->ExpressionName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpressionName).Data.ArrayNum = 0;
  (this->ExpressionName).Data.ArrayMax = 0;
  (this->Inputs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Inputs).ArrayNum = 0;
  (this->Inputs).ArrayMax = 0;
  *(undefined8 *)&this->BoolProperties = 0;
  *(undefined8 *)&(this->BoolProperties).field_0x8 = 0;
  *(undefined8 *)&(this->BoolProperties).field_0x20 = 0;
  *(undefined4 *)&(this->BoolProperties).field_0x28 = 0;
  *(undefined4 *)&(this->BoolProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->BoolProperties).field_0x34 = 0;
  *(undefined4 *)&(this->BoolProperties).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BoolProperties).field_0x40 = 0;
  *(undefined4 *)&(this->BoolProperties).field_0x48 = 0;
  *(undefined8 *)&this->FloatProperties = 0;
  *(undefined8 *)&(this->FloatProperties).field_0x8 = 0;
  *(undefined8 *)&(this->FloatProperties).field_0x20 = 0;
  *(undefined4 *)&(this->FloatProperties).field_0x28 = 0;
  *(undefined4 *)&(this->FloatProperties).field_0x2c = 0x80;
  *(undefined4 *)&(this->FloatProperties).field_0x34 = 0;
  *(undefined4 *)&(this->FloatProperties).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FloatProperties).field_0x40 = 0;
  *(undefined4 *)&(this->FloatProperties).field_0x48 = 0;
  return this;
}

// GetInput @ 14e63c590

FMaterialExpressionInput * __thiscall
GLTF::FMaterialExpressionGeneric::GetInput(FMaterialExpressionGeneric *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMaterialExpressionInput *pFVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  FString local_38;
  FString local_28;
  
  while ((param_1 < 0 || ((this->Inputs).ArrayNum <= param_1))) {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_38,(this->Inputs).ArrayNum);
    iVar4 = (this->Inputs).ArrayNum;
    piVar1 = &(this->Inputs).ArrayMax;
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->Inputs).AllocatorInstance,piVar1);
    }
    pFVar8 = (this->Inputs).AllocatorInstance.Data;
    (this->Inputs).ArrayNum = iVar4 + 1;
    pFVar8 = pFVar8 + (longlong)iVar4 * 0x20;
    ::FString::FString(&local_28,(wchar_t *)FVar7.Data);
    FVar7.Data = local_28.Data.AllocatorInstance.Data;
    *(undefined8 *)&pFVar8->field_0x0 = 0;
    iVar4 = local_28.Data.ArrayNum;
    *(int *)&pFVar8[8].field_0x0 = iVar4;
    if (iVar4 == 0) {
      *(int *)(pFVar8 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,0,(ForAnyElementType *)pFVar8,iVar4,(int *)(pFVar8 + 0xc));
      memcpy(*(void **)&pFVar8->field_0x0,FVar7.Data,(longlong)iVar4 * 2);
    }
    *(undefined8 *)&pFVar8[0x10].field_0x0 = 0;
    *(undefined4 *)&pFVar8[0x18].field_0x0 = 0xffffffff;
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  uVar6 = 0;
  if (param_1 < (this->Inputs).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FMaterialExpressionInput *)(*pcVar2)();
      return pFVar5;
    }
  }
  return (FMaterialExpressionInput *)
         ((this->Inputs).AllocatorInstance.Data + (longlong)param_1 * 0x20);
}

// GetInputCount @ 14e63c7b0

int __thiscall GLTF::FMaterialExpressionGeneric::GetInputCount(FMaterialExpressionGeneric *this)

{
  return (this->Inputs).ArrayNum;
}

