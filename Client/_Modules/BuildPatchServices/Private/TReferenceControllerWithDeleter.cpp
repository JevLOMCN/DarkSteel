// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 17

// DestroyObject @ 1431d8ed0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBuildPatchAppManifest,SharedPointerInternals::DefaultDeleter<FBuildPatchAppManifest>,1>
::DestroyObject(TReferenceControllerWithDeleter<FBuildPatchAppManifest,SharedPointerInternals::DefaultDeleter<FBuildPatchAppManifest>,1>
                *this)

{
  FBuildPatchAppManifest *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBuildPatchAppManifest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d8ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1431d8ef0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBuildPatchCustomField,SharedPointerInternals::DefaultDeleter<FBuildPatchCustomField>,1>
::DestroyObject(TReferenceControllerWithDeleter<FBuildPatchCustomField,SharedPointerInternals::DefaultDeleter<FBuildPatchCustomField>,1>
                *this)

{
  FBuildPatchCustomField *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FBuildPatchCustomField *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d8f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1431d8f10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::IBuildStatistics,SharedPointerInternals::DefaultDeleter<BuildPatchServices::IBuildStatistics>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::IBuildStatistics,SharedPointerInternals::DefaultDeleter<BuildPatchServices::IBuildStatistics>,1>
                *this)

{
  IBuildStatistics *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IBuildStatistics *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d8f21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1431d8f30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::IPatchDataEnumeration,SharedPointerInternals::DefaultDeleter<BuildPatchServices::IPatchDataEnumeration>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::IPatchDataEnumeration,SharedPointerInternals::DefaultDeleter<BuildPatchServices::IPatchDataEnumeration>,1>
                *this)

{
  IPatchDataEnumeration *pIVar1;
  
  pIVar1 = this->Object;
  if (pIVar1 != (IPatchDataEnumeration *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431d8f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar1)(pIVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14324a7a0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FDataMessage,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FDataMessage>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FDataMessage,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FDataMessage>,1>
                *this)

{
  FDataMessage *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FDataMessage *)0x0) {
    pFVar2 = (pFVar1->Memory).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    pFVar2 = (pFVar1->Filename).Data.AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x28);
    return;
  }
  return;
}

// DestroyObject @ 14324a7f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TPromise<void>,SharedPointerInternals::DefaultDeleter<TPromise<void>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TPromise<void>,SharedPointerInternals::DefaultDeleter<TPromise<void>_>,1>
                *this)

{
  TPromise<void> *pTVar1;
  TFutureState<void> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = this->Object;
  if (pTVar1 == (TPromise<void> *)0x0) {
    return;
  }
  pTVar2 = (pTVar1->State).Object;
  if ((pTVar2 != (TFutureState<void> *)0x0) && (pTVar2->field_0x68 == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar1->State).SharedReferenceCount.ReferenceController);
  ::operator_delete(pTVar1,0x18);
  return;
}

// DestroyObject @ 14324a860

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FFileAttributesParserImpl,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FFileAttributesParserImpl>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FFileAttributesParserImpl,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FFileAttributesParserImpl>,1>
                *this)

{
  FFileAttributesParserImpl *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FFileAttributesParserImpl *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324a871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14324a880

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FManifestBuilder,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FManifestBuilder>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FManifestBuilder,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FManifestBuilder>,1>
                *this)

{
  FManifestBuilder *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FManifestBuilder *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014324a891. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1432ceaa0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,SharedPointerInternals::DefaultDeleter<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,1>
::DestroyObject(TReferenceControllerWithDeleter<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,SharedPointerInternals::DefaultDeleter<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>,1>
                *this)

{
  TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *pTVar1;
  TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = this->Object;
  if (pTVar1 == (TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *)0x0) {
    return;
  }
  pTVar2 = (pTVar1->State).Object;
  if ((pTVar2 != (TFutureState<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *)0x0
      ) && ((char)pTVar2->_padding_ == '\0')) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pTVar1->State).SharedReferenceCount.ReferenceController);
  ::operator_delete(pTVar1,0x18);
  return;
}

// DestroyObject @ 1432ceb10

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FCloudChunkSource::FDownloadDelegates>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FCloudChunkSource::FDownloadDelegates>,1>
                *this)

{
  ::operator_delete(this->Object,8);
  return;
}

// DestroyObject @ 1432ceb30

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates>,1>
                *this)

{
  ::operator_delete(this->Object,8);
  return;
}

// DestroyObject @ 1432ceb50

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FMockDownload,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FMockDownload>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FMockDownload,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FMockDownload>,1>
                *this)

{
  FMockDownload *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMockDownload *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ceb61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1432ceb70

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FMockManifest,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FMockManifest>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FMockManifest,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FMockManifest>,1>
                *this)

{
  FMockManifest *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMockManifest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ceb81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 1432ceb90

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FMockManifestField,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FMockManifestField>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FMockManifestField,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FMockManifestField>,1>
                *this)

{
  FMockManifestField *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMockManifestField *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001432ceba1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14331e7d0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FFakeHttpRequest,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FFakeHttpRequest>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FFakeHttpRequest,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FFakeHttpRequest>,1>
                *this)

{
  FFakeHttpRequest *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FFakeHttpRequest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014331e7e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14331e7f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FFakeHttpResponse,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FFakeHttpResponse>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FFakeHttpResponse,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FFakeHttpResponse>,1>
                *this)

{
  FFakeHttpResponse *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FFakeHttpResponse *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014331e801. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 14331e810

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<BuildPatchServices::FMockHttpRequest,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FMockHttpRequest>,1>
::DestroyObject(TReferenceControllerWithDeleter<BuildPatchServices::FMockHttpRequest,SharedPointerInternals::DefaultDeleter<BuildPatchServices::FMockHttpRequest>,1>
                *this)

{
  FMockHttpRequest *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMockHttpRequest *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014331e821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x50))(pFVar1,1);
    return;
  }
  return;
}

