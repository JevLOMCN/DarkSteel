// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 1

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_> @ 141dc6270

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,TVariant<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>_>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->field_0x20;
  if (2 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<bool,TVariant<int,unsigned_int,__int64,float,double>,FString>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&this->field_0x10);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

