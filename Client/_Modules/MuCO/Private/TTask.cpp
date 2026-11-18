// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 3

// GetResult @ 14ac24850

TSharedPtr<UE::Mutable::Private::FImage_const_,1> * __thiscall
UE::Tasks::TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>::GetResult
          (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> *this)

{
  TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_> TVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Mutable::Private::FImage_const_,1> *pTVar4;
  
  if (*this == (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*this != (TTask<TSharedPtr<UE::Mutable::Private::FImage_const_,1>_>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)*this);
  }
  TVar1 = *this;
  if (*(char *)((longlong)TVar1 + 0xd0) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TSharedPtr<UE::Mutable::Private::FImage_const_,1> *)((longlong)TVar1 + 0xd8);
}

// GetResult @ 14ac248e0

TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> * __thiscall
UE::Tasks::TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>::GetResult
          (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_> *this)

{
  TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_> TVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *pTVar4;
  
  if (*this == (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*this != (TTask<TSharedPtr<UE::Mutable::Private::FMaterial_const_,1>_>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)*this);
  }
  TVar1 = *this;
  if (*(char *)((longlong)TVar1 + 0xd0) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TSharedPtr<UE::Mutable::Private::FMaterial_const_,1> *)((longlong)TVar1 + 0xd8);
}

// GetResult @ 14ac24970

TSharedPtr<UE::Mutable::Private::FMesh_const_,1> * __thiscall
UE::Tasks::TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>::GetResult
          (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_> *this)

{
  TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_> TVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *pTVar4;
  
  if (*this == (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\Task.h"
                       ,0xc6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if (*this != (TTask<TSharedPtr<UE::Mutable::Private::FMesh_const_,1>_>)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)*this);
  }
  TVar1 = *this;
  if (*(char *)((longlong)TVar1 + 0xd0) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCompleted()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                       ,0x353,L"The task must be completed to obtain its result");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TSharedPtr<UE::Mutable::Private::FMesh_const_,1> *)((longlong)TVar1 + 0xd8);
}

