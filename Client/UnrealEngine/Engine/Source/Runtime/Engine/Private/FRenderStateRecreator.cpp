// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator() @ 150513af0

bool __thiscall
`FRenderStateRecreator::~FRenderStateRecreator'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3394079828146648916>);
  if (bVar2) {
    puVar4 = *(undefined8 **)((longlong)this + 8);
    if (**(char **)((longlong)this + 0x10) == '\0') {
      puVar4 = *(undefined8 **)((longlong)this + 8) + 1;
    }
    FText::ToString((FText *)*puVar4);
    puVar4 = *(undefined8 **)((longlong)this + 8);
    if (*(char *)(*(longlong *)this + 8) == '\0') {
      puVar4 = *(undefined8 **)((longlong)this + 8) + 1;
    }
    FText::ToString((FText *)*puVar4);
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3394079828146648916>,
                       &`public:___cdecl_`public:___cdecl_FRenderStateRecreator::~FRenderStateRecreator(void)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

