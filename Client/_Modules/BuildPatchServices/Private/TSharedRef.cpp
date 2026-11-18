// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 12

// TSharedRef<FBuildPatchAppManifest,1><FBuildPatchAppManifest> @ 1431a8ff0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<FBuildPatchAppManifest,1> * __thiscall
TSharedRef<FBuildPatchAppManifest,1>::TSharedRef<FBuildPatchAppManifest,1><FBuildPatchAppManifest>
          (TSharedRef<FBuildPatchAppManifest,1> *this,TRawPtrProxy<FBuildPatchAppManifest> *param_1)

{
  FBuildPatchAppManifest *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FBuildPatchAppManifest,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBuildPatchAppManifest__U__DefaultDeleter_VFBuildPatchAppManifest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FBuildPatchAppManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<FBuildPatchAppManifest,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<IBuildManifest,1><FBuildPatchAppManifest> @ 1431a9090

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<IBuildManifest,1> * __thiscall
TSharedRef<IBuildManifest,1>::TSharedRef<IBuildManifest,1><FBuildPatchAppManifest>
          (TSharedRef<IBuildManifest,1> *this,TRawPtrProxy<FBuildPatchAppManifest> *param_1)

{
  FBuildPatchAppManifest *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<IBuildManifest,1> *pTVar5;
  
  this->Object = (IBuildManifest *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFBuildPatchAppManifest__U__DefaultDeleter_VFBuildPatchAppManifest___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FBuildPatchAppManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<IBuildManifest,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TPromise<void>,1><TPromise<void>_> @ 1431fffc0

TSharedRef<TPromise<void>,1> * __thiscall
TSharedRef<TPromise<void>,1>::TSharedRef<TPromise<void>,1><TPromise<void>_>
          (TSharedRef<TPromise<void>,1> *this,TRawPtrProxy<TPromise<void>_> *param_1)

{
  TPromise<void> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TPromise<void>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TPromise_X__U__DefaultDeleter_V__TPromise_X___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (TPromise<void> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TPromise<void>,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<BuildPatchServices::FFileAttributesParser,1><BuildPatchServices::FFileAttributesParserImpl> @ 143200230

TSharedRef<BuildPatchServices::FFileAttributesParser,1> * __thiscall
TSharedRef<BuildPatchServices::FFileAttributesParser,1>::
TSharedRef<BuildPatchServices::FFileAttributesParser,1><BuildPatchServices::FFileAttributesParserImpl>
          (TSharedRef<BuildPatchServices::FFileAttributesParser,1> *this,
          TRawPtrProxy<BuildPatchServices::FFileAttributesParserImpl> *param_1)

{
  FFileAttributesParserImpl *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<BuildPatchServices::FFileAttributesParser,1> *pTVar5;
  
  this->Object = (FFileAttributesParser *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFFileAttributesParserImpl_BuildPatchServices__U__DefaultDeleter_VFFileAttributesParserImpl_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FFileAttributesParserImpl *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<BuildPatchServices::FFileAttributesParser,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<BuildPatchServices::IManifestBuilder,1><BuildPatchServices::FManifestBuilder> @ 1432002d0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<BuildPatchServices::IManifestBuilder,1> * __thiscall
TSharedRef<BuildPatchServices::IManifestBuilder,1>::
TSharedRef<BuildPatchServices::IManifestBuilder,1><BuildPatchServices::FManifestBuilder>
          (TSharedRef<BuildPatchServices::IManifestBuilder,1> *this,
          TRawPtrProxy<BuildPatchServices::FManifestBuilder> *param_1)

{
  FManifestBuilder *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<BuildPatchServices::IManifestBuilder,1> *pTVar5;
  
  this->Object = (IManifestBuilder *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFManifestBuilder_BuildPatchServices__U__DefaultDeleter_VFManifestBuilder_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FManifestBuilder *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<BuildPatchServices::IManifestBuilder,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,1><TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_> @ 1432708b0

TSharedRef<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,1> * __thiscall
TSharedRef<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,1>::
TSharedRef<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,1><TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
          (TSharedRef<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,1>
           *this,TRawPtrProxy<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>_>
                 *param_1)

{
  TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,1> *pTVar5;
  
  this->Object = param_1->Object;
  pTVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_V__TPromise_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator______U__DefaultDeleter_V__TPromise_V__TSet_VFString__U__DefaultKeyFuncs_VFString___0A___VFDefaultSetAllocator_______SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pTVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object ==
      (TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<TPromise<TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_>,1>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1><BuildPatchServices::FCloudChunkSource::FDownloadDelegates> @ 143270950

TSharedRef<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1> * __thiscall
TSharedRef<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1>::
TSharedRef<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1><BuildPatchServices::FCloudChunkSource::FDownloadDelegates>
          (TSharedRef<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1> *this,
          TRawPtrProxy<BuildPatchServices::FCloudChunkSource::FDownloadDelegates> *param_1)

{
  FDownloadDelegates *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDownloadDelegates_FCloudChunkSource_BuildPatchServices__U__DefaultDeleter_VFDownloadDelegates_FCloudChunkSource_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FDownloadDelegates *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<BuildPatchServices::FCloudChunkSource::FDownloadDelegates,1> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1><BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates> @ 1432709f0

TSharedRef<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1> * __thiscall
TSharedRef<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1>::
TSharedRef<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1><BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates>
          (TSharedRef<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1> *this,
          TRawPtrProxy<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates>
          *param_1)

{
  FDownloadDelegates *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1> *pTVar5;
  
  this->Object = param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFDownloadDelegates_FConstructorCloudChunkSource_BuildPatchServices__U__DefaultDeleter_VFDownloadDelegates_FConstructorCloudChunkSource_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FDownloadDelegates *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<BuildPatchServices::FConstructorCloudChunkSource::FDownloadDelegates,1> *
               )(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<IBuildManifest,1><BuildPatchServices::FMockManifest> @ 143270a90

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

TSharedRef<IBuildManifest,1> * __thiscall
TSharedRef<IBuildManifest,1>::TSharedRef<IBuildManifest,1><BuildPatchServices::FMockManifest>
          (TSharedRef<IBuildManifest,1> *this,
          TRawPtrProxy<BuildPatchServices::FMockManifest> *param_1)

{
  FMockManifest *pFVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<IBuildManifest,1> *pTVar5;
  
  this->Object = (IBuildManifest *)param_1->Object;
  pFVar1 = param_1->Object;
  pTVar4 = ::operator_new(0x18);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMockManifest_BuildPatchServices__U__DefaultDeleter_VFMockManifest_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4[1]._padding_ = (longlong)pFVar1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar4;
  if (param_1->Object == (FMockManifest *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InRawPtrProxy.Object != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0xe3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<IBuildManifest,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  return this;
}

// TSharedRef<BuildPatchServices::FDownloadServiceImpl,1> @ 14327e0a0

TSharedRef<BuildPatchServices::FDownloadServiceImpl,1> * __thiscall
TSharedRef<BuildPatchServices::FDownloadServiceImpl,1>::
TSharedRef<BuildPatchServices::FDownloadServiceImpl,1>
          (TSharedRef<BuildPatchServices::FDownloadServiceImpl,1> *this,
          FDownloadServiceImpl *param_1,TReferenceControllerBase<1> *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  TSharedRef<BuildPatchServices::FDownloadServiceImpl,1> *pTVar8;
  
  this->Object = param_1;
  (this->SharedReferenceCount).ReferenceController = param_2;
  if (param_1 == (FDownloadServiceImpl *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pTVar8 = (TSharedRef<BuildPatchServices::FDownloadServiceImpl,1> *)(*pcVar6)();
      return pTVar8;
    }
  }
  else {
    plVar1 = &param_1->_padding_;
    if (((param_1->_padding_ == 0) || (*plVar1 == 0)) || (*(int *)(*plVar1 + 8) < 1)) {
      pTVar4 = (this->SharedReferenceCount).ReferenceController;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      param_1->_padding_ = (longlong)param_1;
      if (pTVar4 != (TReferenceControllerBase<1> *)*plVar1) {
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->WeakReferenceCount = (atomic<int>)((int)pTVar4->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar5 = (longlong *)*plVar1;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5,1);
          }
        }
        *plVar1 = (longlong)pTVar4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    }
  }
  return this;
}

// TSharedRef<BuildPatchServices::FFakeHttpRequest,1><BuildPatchServices::FFakeHttpRequest> @ 1432f87c0

TSharedRef<BuildPatchServices::FFakeHttpRequest,1> * __thiscall
TSharedRef<BuildPatchServices::FFakeHttpRequest,1>::
TSharedRef<BuildPatchServices::FFakeHttpRequest,1><BuildPatchServices::FFakeHttpRequest>
          (TSharedRef<BuildPatchServices::FFakeHttpRequest,1> *this,FFakeHttpRequest *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<BuildPatchServices::FFakeHttpRequest,1> *pTVar7;
  
  this->Object = param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFFakeHttpRequest_BuildPatchServices__U__DefaultDeleter_VFFakeHttpRequest_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FFakeHttpRequest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<BuildPatchServices::FFakeHttpRequest,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar6 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

// TSharedRef<IHttpRequest,1><BuildPatchServices::FMockHttpRequest> @ 1432f88d0

TSharedRef<IHttpRequest,1> * __thiscall
TSharedRef<IHttpRequest,1>::TSharedRef<IHttpRequest,1><BuildPatchServices::FMockHttpRequest>
          (TSharedRef<IHttpRequest,1> *this,FMockHttpRequest *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  TSharedRef<IHttpRequest,1> *pTVar7;
  
  this->Object = (IHttpRequest *)param_1;
  pTVar6 = ::operator_new(0x18);
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFMockHttpRequest_BuildPatchServices__U__DefaultDeleter_VFMockHttpRequest_BuildPatchServices___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6[1]._padding_ = (longlong)param_1;
  }
  (this->SharedReferenceCount).ReferenceController = pTVar6;
  if (param_1 == (FMockHttpRequest *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedRef<IHttpRequest,1> *)(*pcVar4)();
      return pTVar7;
    }
  }
  else if (((param_1->_padding_ == 0) || (param_1->_padding_ == 0)) ||
          (*(int *)(param_1->_padding_ + 8) < 1)) {
    pTVar6 = (this->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    param_1->_padding_ = (longlong)param_1;
    if (pTVar6 != (TReferenceControllerBase<1> *)param_1->_padding_) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)param_1->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      param_1->_padding_ = (longlong)pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return this;
}

