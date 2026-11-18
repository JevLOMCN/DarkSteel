// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// StaticStruct @ 1488f05a0

UScriptStruct * __cdecl FAutoCompleteNode::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAutoCompleteNode.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FAutoCompleteNode.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAutoCompleteNode,(UObject *)pUVar1,
                         L"AutoCompleteNode");
  }
  return Z_Registration_Info_UScriptStruct_FAutoCompleteNode.OuterSingleton;
}

// ~FAutoCompleteNode @ 14890d8f0

void __thiscall FAutoCompleteNode::~FAutoCompleteNode(FAutoCompleteNode *this)

{
  FAutoCompleteNode *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  if (0 < (this->ChildNodes).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->ChildNodes).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FAutoCompleteNode **)((this->ChildNodes).AllocatorInstance.Data + lVar6);
      if (this_00 != (FAutoCompleteNode *)0x0) {
        ~FAutoCompleteNode(this_00);
        ::operator_delete(this_00,0x28);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar5 < (this->ChildNodes).ArrayNum);
  }
  (this->ChildNodes).ArrayNum = 0;
  if ((this->ChildNodes).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ChildNodes).AllocatorInstance,0,&(this->ChildNodes).ArrayMax);
  }
  pFVar1 = (this->ChildNodes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AutoCompleteListIndices).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar1);
  return;
}

