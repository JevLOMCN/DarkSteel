// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FNonTrivial @ 141b2b070

void __thiscall
`UE::ConcurrentQueuesTests::FConcurrentQueuesTest::TestBody'::__l20::FNonTrivial::~FNonTrivial
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)this == -0x3232323232323233) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Value != (int*)0xcdcdcdcdcdcdcdcd",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\Containers\\ConcurrentQueuesTest.cpp"
                       ,0x138,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ::operator_delete(*(void **)this,4);
  *(undefined8 *)this = 0xcdcdcdcdcdcdcdcd;
  return;
}

