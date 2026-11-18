// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 17

// Resize @ 1436eea80

void __thiscall FManagedArrayBase::Resize(FManagedArrayBase *this,int param_1)

{
  return;
}

// Reserve @ 1436eea90

void __thiscall FManagedArrayBase::Reserve(FManagedArrayBase *this,int param_1)

{
  return;
}

// ReindexFromLookup @ 1436eeaa0

void __thiscall
FManagedArrayBase::ReindexFromLookup
          (FManagedArrayBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  return;
}

// Init @ 1436eeab0

void __thiscall FManagedArrayBase::Init(FManagedArrayBase *this,FManagedArrayBase *param_1)

{
  return;
}

// Convert @ 1436eeac0

void __thiscall FManagedArrayBase::Convert(FManagedArrayBase *this,FManagedArrayBase *param_1)

{
  undefined1 local_res18 [16];
  
  `FManagedArrayBase::Convert'::__l2::<lambda_1>::operator()(local_res18);
  return;
}

// CopyRange @ 1436eead0

void __thiscall
FManagedArrayBase::CopyRange
          (FManagedArrayBase *this,FManagedArrayBase *param_1,int param_2,int param_3,int param_4)

{
  return;
}

// SetDefaults @ 1436eeae0

void __thiscall
FManagedArrayBase::SetDefaults(FManagedArrayBase *this,uint param_1,uint param_2,bool param_3)

{
  return;
}

// GetAllocatedSize @ 1436eeaf0

ulong64 __thiscall FManagedArrayBase::GetAllocatedSize(FManagedArrayBase *this)

{
  return 0;
}

// RemoveElements @ 1436eeb00

void __thiscall
FManagedArrayBase::RemoveElements
          (FManagedArrayBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                     ,0xee,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Num @ 1436eeb40

int __thiscall FManagedArrayBase::Num(FManagedArrayBase *this)

{
  return 0;
}

// Max @ 1436eeb50

int __thiscall FManagedArrayBase::Max(FManagedArrayBase *this)

{
  return 0;
}

// Serialize @ 1436eeb60

void __thiscall FManagedArrayBase::Serialize(FManagedArrayBase *this,FChaosArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                     ,0x100,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// GetTypeSize @ 1436eeba0

ulong64 __thiscall FManagedArrayBase::GetTypeSize(FManagedArrayBase *this)

{
  return 0;
}

// Reindex @ 1436eebb0

void __thiscall
FManagedArrayBase::Reindex
          (FManagedArrayBase *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,int *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_4)

{
  return;
}

// Empty @ 1436eebc0

void __thiscall FManagedArrayBase::Empty(FManagedArrayBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\GeometryCollection\\ManagedArray.h"
                     ,0x118,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ~FManagedArrayBase @ 1436f7590

void __thiscall FManagedArrayBase::~FManagedArrayBase(FManagedArrayBase *this)

{
  this->_padding_ = (longlong)&___7FManagedArrayBase__6B_;
  return;
}

// operator() @ 1504a1ab0

bool __thiscall `FManagedArrayBase::Convert'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7863574370055094082>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7863574370055094082>,
                       &`public:___cdecl_`protected:_virtual_void___cdecl_FManagedArrayBase::Convert(FManagedArrayBase_const&___ptr64)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

