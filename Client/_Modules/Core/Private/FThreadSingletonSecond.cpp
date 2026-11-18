// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// ~FThreadSingletonSecond @ 141becde0

void __thiscall
``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonSecond::~FThreadSingletonSecond
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  FTlsAutoCleanup *pFVar3;
  
  *(undefined ***)this = &`TestThreadSingleton'::`10'::FThreadSingletonSecond::_vftable_;
  pFVar3 = FThreadSingletonInitializer::TryGet(&DAT_154b85e94);
  if (pFVar3 != (FTlsAutoCleanup *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FThreadSingletonFirst::TryGet() == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Tests\\HAL\\ThreadTest.cpp"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TThreadSingleton<``anonymous_namespace'::TestThreadSingleton'::__l10::FThreadSingletonSecond>::
  ~TThreadSingleton<__anonymous_namespace_::TestThreadSingleton_::__l10::FThreadSingletonSecond>
            (this);
  return;
}

