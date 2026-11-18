// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// MarkScriptSerializationEnd @ 148b692b0

void __thiscall FCPFUOReader::MarkScriptSerializationEnd(FCPFUOReader *this,UObject *param_1)

{
  *(int *)&this->field_0xb4 = *(int *)&this->field_0xb4 + -1;
  return;
}

// MarkScriptSerializationStart @ 148b692d0

void __thiscall FCPFUOReader::MarkScriptSerializationStart(FCPFUOReader *this,UObject *param_1)

{
  *(int *)&this->field_0xb4 = *(int *)&this->field_0xb4 + 1;
  return;
}

// Serialize @ 148b75160

void __thiscall FCPFUOReader::Serialize(FCPFUOReader *this,void *param_1,long64 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((((this->field_0xb0 != '\0') || (0 < *(int *)&this->field_0xb4)) && (param_2 != 0)) &&
     ((this->field_0x29 & 2) == 0)) {
    lVar6 = (**(code **)(*(longlong *)this + 0x30))();
    lVar1 = *(longlong *)&this->field_0x90;
    if (lVar1 + param_2 <= lVar6) {
      uVar7 = (uint)lVar1;
      plVar2 = *(longlong **)&this->field_0x98;
      if (lVar1 != (int)uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      uVar5 = 0;
      if ((int)uVar7 < (int)plVar2[1]) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      memcpy(param_1,(void *)(*plVar2 + (longlong)(int)uVar7),param_2);
      *(longlong *)&this->field_0x90 = *(longlong *)&this->field_0x90 + param_2;
      return;
    }
    FArchiveState::SetError((FArchiveState *)this);
  }
  return;
}

