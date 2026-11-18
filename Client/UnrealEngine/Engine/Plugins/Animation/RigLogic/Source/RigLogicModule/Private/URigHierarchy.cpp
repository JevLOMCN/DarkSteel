// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 1

// SetCurveValue @ 14a6825b0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
URigHierarchy::SetCurveValue(URigHierarchy *this,int param_1,float param_2,bool param_3)

{
  int iVar1;
  FRigCurveElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  UScriptStruct *pUVar7;
  
  if ((-1 < param_1) && (param_1 < (this->Elements).ArrayNum)) {
    uVar5 = 0;
    if (param_1 < (this->Elements).ArrayNum) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = *(FRigCurveElement **)((this->Elements).AllocatorInstance.Data + (longlong)param_1 * 8)
    ;
    if (pFVar2 != (FRigCurveElement *)0x0) {
      lVar6 = (**(code **)(pFVar2->_padding_ + 0x10))(pFVar2);
      pUVar7 = FRigCurveElement::StaticStruct();
      if (pUVar7 != (UScriptStruct *)0x0) {
        iVar1 = (int)pUVar7->_padding_;
        if ((*(int *)(lVar6 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar6 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          SetCurveValue(this,pFVar2,param_2,param_3,false);
        }
      }
    }
  }
  return;
}

