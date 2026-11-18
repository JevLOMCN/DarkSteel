// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Emplace<FString_const_&,int_const_&> @ 141503b00

int * __thiscall
TCompactMapBase<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
::Emplace<FString_const_&,int_const_&>
          (TCompactMapBase<FString,int,FDefaultCompactSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
           *this,FString *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int local_res8 [2];
  
  TCompactSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultCompactSetAllocator>
  ::Emplace<TPairInitializer<FString_const_&,int_const_&>_>
            (&this->Pairs,(EInPlace)local_res8,(TPairInitializer<FString_const_&,int_const_&> *)0x0)
  ;
  if ((local_res8[0] < 0) || (*(int *)&(this->Pairs).field_0x8 <= local_res8[0])) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidId(Id)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\CompactSet.h.inl"
                       ,0x265,L"Array index out of bounds: %d into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar3 = (int *)(*pcVar1)();
      return piVar3;
    }
  }
  return (int *)(*(longlong *)&this->Pairs + (longlong)local_res8[0] * 0x18 + 0x10);
}

