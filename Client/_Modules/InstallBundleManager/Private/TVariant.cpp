// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 8

// Get<FInstallBundleReport::FStateInstalling> @ 148bbfde0

FStateInstalling * __thiscall
TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
::Get<FInstallBundleReport::FStateInstalling>
          (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FStateInstalling *pFVar3;
  
  if (this->TypeIndex != '\x02') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateInstalling *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FStateInstalling *)this;
}

// Get<FInstallBundleReport::FStateUpdatable> @ 148bbfe30

FStateUpdatable * __thiscall
TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
::Get<FInstallBundleReport::FStateUpdatable>
          (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FStateUpdatable *pFVar3;
  
  if (this->TypeIndex != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateUpdatable *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FStateUpdatable *)this;
}

// Get<FInstallBundleReport::FStateUpdated> @ 148bbfe80

FStateUpdated * __thiscall
TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
::Get<FInstallBundleReport::FStateUpdated>
          (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FStateUpdated *pFVar3;
  
  if (this->TypeIndex != '\x03') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateUpdated *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FStateUpdated *)this;
}

// Get<FInstallBundleReport::FStateUpdating> @ 148bbfed0

FStateUpdating * __thiscall
TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
::Get<FInstallBundleReport::FStateUpdating>
          (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
           *this)

{
  code *pcVar1;
  bool bVar2;
  FStateUpdating *pFVar3;
  
  if (this->TypeIndex != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateUpdating *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FStateUpdating *)this;
}

// IsType<FInstallBundleReport::FStateInstalling> @ 148bc10d0

bool __thiscall
TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
::IsType<FInstallBundleReport::FStateInstalling>
          (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdated,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1 + 4);
}

// IsType<FInstallBundleReport::FStateUpdatable> @ 148bc1120

bool __thiscall
TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
::IsType<FInstallBundleReport::FStateUpdatable>
          (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1 + 4);
}

// IsType<FInstallBundleReport::FStateUpdated> @ 148bc1170

bool __thiscall
TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
::IsType<FInstallBundleReport::FStateUpdated>
          (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdated,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1);
}

// IsType<FInstallBundleReport::FStateUpdating> @ 148bc11c0

bool __thiscall
TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
::IsType<FInstallBundleReport::FStateUpdating>
          (TVariant<FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
  if (3 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateUpdatable,FInstallBundleReport::FStateUpdating,FInstallBundleReport::FStateInstalling,FInstallBundleReport::FStateUpdated>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1);
}

