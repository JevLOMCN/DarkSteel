// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 2

// Get @ 143253710

TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> * __thiscall
TFutureBase<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_>::Get
          (TFutureBase<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *this)

{
  TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *pTVar4;
  
  if ((this->State).Object ==
      (TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
      return pTVar4;
    }
    if ((this->State).Object ==
        (TFutureState<TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  pTVar1 = (this->State).Object;
  while ((char)pTVar1->_padding_ == '\0') {
    (**(code **)(*(longlong *)pTVar1->_padding_ + 0x20))((longlong *)pTVar1->_padding_,0xffffffff,0)
    ;
  }
  return (TArray<BuildPatchServices::FChunkMatch,TSizedDefaultAllocator<32>_> *)&pTVar1->Result;
}

// Get @ 1432537b0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedPtr<FBuildPatchAppManifest,1> * __thiscall
TFutureBase<TSharedPtr<FBuildPatchAppManifest,1>_>::Get
          (TFutureBase<TSharedPtr<FBuildPatchAppManifest,1>_> *this)

{
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FBuildPatchAppManifest,1> *pTVar4;
  
  if ((this->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedPtr<FBuildPatchAppManifest,1> *)(*pcVar2)();
      return pTVar4;
    }
    if ((this->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TSharedPtr<FBuildPatchAppManifest,1> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  pTVar1 = (this->State).Object;
  while ((char)pTVar1->_padding_ == '\0') {
    (**(code **)(*(longlong *)pTVar1->_padding_ + 0x20))((longlong *)pTVar1->_padding_,0xffffffff,0)
    ;
  }
  return (TSharedPtr<FBuildPatchAppManifest,1> *)&pTVar1->Result;
}

