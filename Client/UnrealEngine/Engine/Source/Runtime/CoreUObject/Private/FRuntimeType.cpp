// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// ~FRuntimeType @ 142295cf0

void __thiscall UE::Verse::FRuntimeType::~FRuntimeType(FRuntimeType *this)

{
  this->_padding_ = (longlong)&___7FRuntimeType_Verse_UE__6B_;
  return;
}

// HasIntrusiveUnsetOptionalState @ 14229eb60

bool __thiscall UE::Verse::FRuntimeType::HasIntrusiveUnsetOptionalState(FRuntimeType *this)

{
  return false;
}

// InitializeIntrusiveUnsetOptionalValue @ 1422a0880

void __thiscall
UE::Verse::FRuntimeType::InitializeIntrusiveUnsetOptionalValue(FRuntimeType *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\VerseVM\\VBPVMRuntimeType.h"
                     ,0x65,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// InstanceSubobjects @ 1422a09a0

void __thiscall
UE::Verse::FRuntimeType::InstanceSubobjects
          (FRuntimeType *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  return;
}

// IsIntrusiveOptionalValueSet @ 1422a0d80

bool __thiscall
UE::Verse::FRuntimeType::IsIntrusiveOptionalValueSet(FRuntimeType *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\VerseVM\\VBPVMRuntimeType.h"
                     ,0x68,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    bVar2 = (bool)(*pcVar1)();
    return bVar2;
  }
  return true;
}

// IsValid @ 1422a0e70

bool __thiscall UE::Verse::FRuntimeType::IsValid(FRuntimeType *this,void *param_1)

{
  return true;
}

// MarkReachable @ 1422a3750

void __thiscall
UE::Verse::FRuntimeType::MarkReachable(FRuntimeType *this,FReferenceCollector *param_1)

{
  this->bIsReachable = (atomic<bool>)0x1;
  return;
}

