// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 1

// IsType<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FWrapErrorType> @ 14321c500

bool __thiscall
TVariant<TSharedPtr<FBuildPatchAppManifest,1>,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FWrapErrorType,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FEmptyType>
::IsType<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FWrapErrorType>
          (TVariant<TSharedPtr<FBuildPatchAppManifest,1>,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FWrapErrorType,TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FEmptyType>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar1 = this->TypeIndex;
  if (2 < (ulonglong)bVar1) {
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
                 &`public:_static_bool___cdecl_UE::Core::Private::TIsType<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>::FWrapErrorType,TSharedPtr<FBuildPatchAppManifest,1>,TValueOrError<class_TSharedPtr<class_FBuildPatchAppManifest,1>,class_FString>::FWrapErrorType,TValueOrError<class_TSharedPtr<class_FBuildPatchAppManifest,1>,class_FString>::FEmptyType>::IsSame(unsigned___int64)'
                  ::__l2::bIsSameType + (ulonglong)bVar1);
}

