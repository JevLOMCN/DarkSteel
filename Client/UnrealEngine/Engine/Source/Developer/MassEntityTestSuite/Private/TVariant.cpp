// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 4

// Emplace<FMassEntityManager_InitParams_Concurrent> @ 1470dd2b0

void __thiscall
TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>::
Emplace<FMassEntityManager_InitParams_Concurrent>
          (TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->TypeIndex;
  if (1 < (ulonglong)bVar1) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  *(undefined8 *)this = 0;
  FMassEntityManager_InitParams_Concurrent::FMassEntityManager_InitParams_Concurrent
            ((FMassEntityManager_InitParams_Concurrent *)this);
  this->TypeIndex = '\x01';
  return;
}

// Emplace<FMassEntityManager_InitParams_SingleThreaded> @ 1470dd320

void __thiscall
TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>::
Emplace<FMassEntityManager_InitParams_SingleThreaded>
          (TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar1 = this->TypeIndex;
  if (1 < (ulonglong)bVar1) {
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
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(this);
  this->TypeIndex = '\0';
  return;
}

// Get<FMassEntityManager_InitParams_Concurrent> @ 1470de170

FMassEntityManager_InitParams_Concurrent * __thiscall
TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>::
Get<FMassEntityManager_InitParams_Concurrent>
          (TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FMassEntityManager_InitParams_Concurrent *pFVar3;
  
  if (this->TypeIndex != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMassEntityManager_InitParams_Concurrent *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FMassEntityManager_InitParams_Concurrent *)this;
}

// TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent> @ 1470f22c0

TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent> *
__thiscall
TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>::
TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
          (TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
           *this)

{
  this->TypeIndex = '\0';
  return this;
}

