// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// FUniqueNameGenerator @ 14e157e70

FUniqueNameGenerator * __thiscall
Optimus::FUniqueNameGenerator::FUniqueNameGenerator(FUniqueNameGenerator *this,UObject *param_1)

{
  this->ScopeObject = param_1;
  (this->GeneratedName).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeneratedName).ArrayNum = 0;
  (this->GeneratedName).ArrayMax = 0;
  return this;
}

// GetUniqueName @ 14e1e8100

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FName __thiscall
Optimus::FUniqueNameGenerator::GetUniqueName(FUniqueNameGenerator *this,FName param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName FVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  GetUniqueNameForScope((UObject *)param_1,(FName)this->ScopeObject);
  FVar6 = GenerateUniqueNameFromExistingNames
                    ((FName)local_res8,*(TArray<FName,TSizedDefaultAllocator<32>_> **)param_1);
  FVar6 = *(FName *)FVar6;
  *(FName *)param_1 = FVar6;
  pUVar8 = this->ScopeObject;
  pUVar7 = Z_Construct_UClass_UObject_NoRegister();
  pUVar8 = StaticFindObjectFast(pUVar7,pUVar8,FVar6,None,RF_NoFlags,Borrowed);
  if (pUVar8 != (UObject *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<8731243684667850796>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\OptimusHelpers.cpp"
                       ,0x2c,
                       "StaticFindObjectFast(UObject::StaticClass(), ScopeObject, Result) == nullptr"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FName)(*pcVar3)();
      return FVar6;
    }
    while( true ) {
      do {
        *(int *)((longlong)param_1 + 4) = *(int *)((longlong)param_1 + 4) + 1;
        FVar6 = *(FName *)param_1;
        pUVar8 = this->ScopeObject;
        pUVar7 = Z_Construct_UClass_UObject_NoRegister();
        pUVar8 = StaticFindObjectFast(pUVar7,pUVar8,FVar6,None,RF_NoFlags,Borrowed);
      } while (pUVar8 != (UObject *)0x0);
      pFVar9 = (this->GeneratedName).AllocatorInstance.Data;
      pFVar2 = pFVar9 + (longlong)(this->GeneratedName).ArrayNum * 8;
      if (pFVar9 == pFVar2) break;
      while (*(longlong *)pFVar9 != *(longlong *)param_1) {
        pFVar9 = pFVar9 + 8;
        if (pFVar9 == pFVar2) goto LAB_14e1e81ee;
      }
    }
  }
LAB_14e1e81ee:
  FVar6 = (FName)(this->GeneratedName).AllocatorInstance.Data;
  if (((ulonglong)FVar6 <= (ulonglong)param_1) &&
     ((ulonglong)param_1 <
      (ulonglong)((longlong)FVar6 + (longlong)(this->GeneratedName).ArrayMax * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      FVar6 = (FName)(*pcVar3)();
      return FVar6;
    }
  }
  iVar5 = (this->GeneratedName).ArrayNum;
  piVar1 = &(this->GeneratedName).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->GeneratedName).AllocatorInstance,piVar1);
  }
  (this->GeneratedName).ArrayNum = iVar5 + 1;
  *(undefined8 *)((this->GeneratedName).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       *(undefined8 *)param_1;
  return param_1;
}

