// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetFromIndex @ 147a50e10

FFieldNetCache * __thiscall FClassNetCache::GetFromIndex(FClassNetCache *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FFieldNetCache *pFVar5;
  uint uVar6;
  
  while( true ) {
    if (this == (FClassNetCache *)0x0) {
      return (FFieldNetCache *)0x0;
    }
    iVar1 = this->FieldsBase;
    if ((iVar1 <= param_1) && (param_1 < (this->Fields).ArrayNum + iVar1)) break;
    this = this->Super;
  }
  uVar6 = param_1 - iVar1;
  uVar4 = 0;
  if ((int)uVar6 < (this->Fields).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FFieldNetCache *)(*pcVar2)();
    return pFVar5;
  }
  return (FFieldNetCache *)((this->Fields).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x18);
}

// GetFromField @ 148035840

FFieldNetCache * __thiscall FClassNetCache::GetFromField(FClassNetCache *this,FFieldVariant param_1)

{
  void *pvVar1;
  TTuple<void_*,FFieldNetCache_*> *pTVar2;
  
  if (this == (FClassNetCache *)0x0) {
    return (FFieldNetCache *)0x0;
  }
  pvVar1 = *(void **)param_1.Container;
  do {
    pTVar2 = TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<void_*,FFieldNetCache_*>,TDefaultMapHashableKeyFuncs<void_*,FFieldNetCache_*,0>,FDefaultSetAllocator>
                     *)&this->FieldMap,pvVar1);
    if (pTVar2 != (TTuple<void_*,FFieldNetCache_*> *)0x0) {
      if (*(FFieldNetCache **)&pTVar2->field_0x8 != (FFieldNetCache *)0x0) {
        return *(FFieldNetCache **)&pTVar2->field_0x8;
      }
    }
    this = this->Super;
  } while (this != (FClassNetCache *)0x0);
  return (FFieldNetCache *)0x0;
}

