// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 14749e6e0

UScriptStruct * __cdecl FAnimNodeReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNodeReference.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAnimNodeReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNodeReference,(UObject *)pUVar1,
                         L"AnimNodeReference");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNodeReference.OuterSingleton;
}

// FAnimNodeReference @ 1474b0a80

FAnimNodeReference * __thiscall
FAnimNodeReference::FAnimNodeReference
          (FAnimNodeReference *this,UAnimInstance *param_1,FAnimNode_Base *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  IAnimClassInterface *pIVar4;
  longlong *plVar5;
  FAnimNodeReference *pFVar6;
  uint uVar7;
  
  this->AnimNode = param_2;
  this->AnimNodeStruct = (UScriptStruct *)0x0;
  pIVar4 = IAnimClassInterface::GetFromClass(*(UClass **)&param_1->field_0x10);
  plVar5 = (longlong *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
  if (param_2->NodeData == (FAnimNodeData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                       ,0x3c7,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FAnimNodeReference *)(*pcVar2)();
      return pFVar6;
    }
  }
  uVar1 = param_2->NodeData->NodeIndex;
  uVar7 = 0;
  if ((int)uVar1 < (int)plVar5[1]) {
    uVar7 = ~uVar1 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FAnimNodeReference *)(*pcVar2)();
      return pFVar6;
    }
  }
  this->AnimNodeStruct =
       *(UScriptStruct **)(*(longlong *)(*plVar5 + (longlong)(int)uVar1 * 8) + 0x70);
  return this;
}

// FAnimNodeReference @ 1474b0b60

FAnimNodeReference * __thiscall
FAnimNodeReference::FAnimNodeReference(FAnimNodeReference *this,UAnimInstance *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  IAnimClassInterface *pIVar3;
  longlong *plVar4;
  FAnimNodeReference *pFVar5;
  FAnimNode_Base *pFVar6;
  uint uVar7;
  
  this->AnimNode = (FAnimNode_Base *)0x0;
  this->AnimNodeStruct = (UScriptStruct *)0x0;
  pIVar3 = IAnimClassInterface::GetFromClass(*(UClass **)&param_1->field_0x10);
  plVar4 = (longlong *)(**(code **)((longlong)*pIVar3 + 0x20))(pIVar3);
  if ((-1 < param_2) && (param_2 < (int)plVar4[1])) {
    this->AnimNodeStruct =
         *(UScriptStruct **)(*(longlong *)(*plVar4 + (longlong)param_2 * 8) + 0x70);
    uVar7 = 0;
    if (param_2 < (int)plVar4[1]) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FAnimNodeReference *)(*pcVar1)();
        return pFVar5;
      }
    }
    pFVar6 = FProperty::ContainerUObjectPtrToValuePtrInternal
                       (*(FProperty **)(*plVar4 + (longlong)param_2 * 8),(UObject *)param_1,0);
    this->AnimNode = pFVar6;
  }
  return this;
}

