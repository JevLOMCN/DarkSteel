// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// Construct @ 141f73580

void __thiscall UScriptStruct::ICppStructOps::Construct(ICppStructOps *this,void *param_1)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  pFVar1 = this->FakeVPtr;
  if ((pFVar1->Flags & Construct) == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!!(this->Flags & FuncFlag)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x660,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141f735cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(pFVar1 + 1))(param_1);
  return;
}

// Destruct @ 141f79530

void __thiscall UScriptStruct::ICppStructOps::Destruct(ICppStructOps *this,void *param_1)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  EStructOpsFakeVTableFlags EVar4;
  uint uVar5;
  
  pFVar1 = this->FakeVPtr;
  if (((pFVar1->Flags & Destruct) == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!!(this->Flags & FuncFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x660,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = 0;
  for (EVar4 = pFVar1->Flags & (ConstructForTests|Construct); EVar4 != None;
      EVar4 = EVar4 & EVar4 - Construct) {
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000141f79594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar5 * 2))
            (param_1,*(code **)(&pFVar1[1].Flags + (ulonglong)uVar5 * 2));
  return;
}

// GetPreloadDependencies @ 141f84580

void __thiscall
UScriptStruct::ICppStructOps::GetPreloadDependencies
          (ICppStructOps *this,void *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  EStructOpsFakeVTableFlags EVar4;
  uint uVar5;
  
  pFVar1 = this->FakeVPtr;
  if ((pFVar1->Capabilities).HasGetPreloadDependencies) {
    if (((pFVar1->Flags & GetPreloadDependencies) == None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!!(this->Flags & FuncFlag)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x660,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar5 = 0;
    for (EVar4 = pFVar1->Flags &
                 (PostScriptConstruct|NetDeltaSerialize|NetSerialize|PostSerialize|SerializeSlot|
                  SerializeArchive|Destruct|ConstructForTests|Construct); EVar4 != None;
        EVar4 = EVar4 & EVar4 - Construct) {
      uVar5 = uVar5 + 1;
    }
    (**(code **)(&pFVar1[1].Flags + (ulonglong)uVar5 * 2))(param_1,param_2);
  }
  return;
}

// AddStructReferencedObjects @ 14225ff70

_func___cdecl_void_void_ptr_FReferenceCollector_ptr * __thiscall
UScriptStruct::ICppStructOps::AddStructReferencedObjects(ICppStructOps *this)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  EStructOpsFakeVTableFlags EVar4;
  _func___cdecl_void_void_ptr_FReferenceCollector_ptr *p_Var5;
  ulonglong uVar6;
  
  pFVar1 = this->FakeVPtr;
  if (((pFVar1->Flags & AddStructReferencedObjects) == None) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!!(this->Flags & FuncFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x660,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    p_Var5 = (_func___cdecl_void_void_ptr_FReferenceCollector_ptr *)(*pcVar2)();
    return p_Var5;
  }
  uVar6 = 0;
  for (EVar4 = pFVar1->Flags &
               (FindInnerPropertyInstance|ImportTextItem|ExportTextItem|Identical|Copy|
                GetPreloadDependencies|PostScriptConstruct|NetDeltaSerialize|NetSerialize|
                PostSerialize|SerializeSlot|SerializeArchive|Destruct|ConstructForTests|Construct);
      EVar4 != None; EVar4 = EVar4 & EVar4 - Construct) {
    uVar6 = (ulonglong)((int)uVar6 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00014225ffca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var5 = (_func___cdecl_void_void_ptr_FReferenceCollector_ptr *)
           (**(code **)(&pFVar1[1].Flags + uVar6 * 2))();
  return p_Var5;
}

