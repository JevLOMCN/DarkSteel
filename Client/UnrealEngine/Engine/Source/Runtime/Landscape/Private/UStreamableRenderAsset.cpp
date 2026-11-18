// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 14

// CalcCumulativeLODSize @ 145f095c0

int __thiscall
UStreamableRenderAsset::CalcCumulativeLODSize(UStreamableRenderAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\StreamableRenderAsset.h"
             ,0x35,L"UStreamableRenderAsset::%s has no default implementation");
  return -1;
}

// DoesMipDataExist @ 145f0bda0

bool __thiscall UStreamableRenderAsset::DoesMipDataExist(UStreamableRenderAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\StreamableRenderAsset.h"
             ,0x41,L"UStreamableRenderAsset::%s has no default implementation");
  return false;
}

// GetCachedLODBias @ 145f0ea40

int __thiscall UStreamableRenderAsset::GetCachedLODBias(UStreamableRenderAsset *this)

{
  return 0;
}

// GetLODGroupForStreaming @ 145f0fb60

int __thiscall UStreamableRenderAsset::GetLODGroupForStreaming(UStreamableRenderAsset *this)

{
  return 0;
}

// GetLastRenderTimeForStreaming @ 145f10630

float __thiscall UStreamableRenderAsset::GetLastRenderTimeForStreaming(UStreamableRenderAsset *this)

{
  return __real_7f7fffff;
}

// GetMipIoFilenameHash @ 145f10e70

uint __thiscall
UStreamableRenderAsset::GetMipIoFilenameHash(UStreamableRenderAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\StreamableRenderAsset.h"
             ,0x3b,L"UStreamableRenderAsset::%s has no default implementation");
  return 0;
}

// GetRenderAssetType @ 145f13280

EStreamableRenderAssetType __thiscall
UStreamableRenderAsset::GetRenderAssetType(UStreamableRenderAsset *this)

{
  return None;
}

// HasPendingLODTransition @ 145f14690

bool __thiscall UStreamableRenderAsset::HasPendingLODTransition(UStreamableRenderAsset *this)

{
  return false;
}

// HasPendingRenderResourceInitialization @ 145f146a0

bool __thiscall
UStreamableRenderAsset::HasPendingRenderResourceInitialization(UStreamableRenderAsset *this)

{
  return false;
}

// InvalidateLastRenderTimeForStreaming @ 145f15a50

void __thiscall
UStreamableRenderAsset::InvalidateLastRenderTimeForStreaming(UStreamableRenderAsset *this)

{
  return;
}

// ShouldMipLevelsBeForcedResident @ 145f1e6b0

bool __thiscall
UStreamableRenderAsset::ShouldMipLevelsBeForcedResident(UStreamableRenderAsset *this)

{
  if ((this->bGlobalForceMipLevelsToBeResident == '\0' && this->bForceMiplevelsToBeResident == '\0')
     && (this->ForceMipLevelsToBeResidentTimestamp <= (double)FApp::CurrentTime &&
         (double)FApp::CurrentTime != this->ForceMipLevelsToBeResidentTimestamp)) {
    return false;
  }
  return true;
}

// StreamIn @ 145f1ef90

bool __thiscall
UStreamableRenderAsset::StreamIn(UStreamableRenderAsset *this,int param_1,bool param_2)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\StreamableRenderAsset.h"
             ,99,L"UStreamableRenderAsset::%s has no default implementation");
  return false;
}

// StreamOut @ 145f1efc0

bool __thiscall UStreamableRenderAsset::StreamOut(UStreamableRenderAsset *this,int param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\StreamableRenderAsset.h"
             ,0x56,L"UStreamableRenderAsset::%s has no default implementation");
  return false;
}

// StaticClass @ 145f33730

UClass * __cdecl UStreamableRenderAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UStreamableRenderAsset.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"StreamableRenderAsset",
               &Z_Registration_Info_UClass_UStreamableRenderAsset.InnerSingleton,
               StaticRegisterNativesUStreamableRenderAsset,0xe0,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UStreamableRenderAsset>,
               InternalVTableHelperCtorCaller<UStreamableRenderAsset>,aFStackX_8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStreamableRenderAsset.InnerSingleton;
}

