// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 19

// Call @ 146b51130

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FLocTextHelperTest::RunTest'::__l2::<lambda_3>::operator()'::__l2::<lambda_1>,bool,TSharedRef<FArchiveEntry,1>_>
::Call(void *param_1,TSharedRef<FArchiveEntry,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  **(int **)param_1 = **(int **)param_1 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return true;
}

// Call @ 146b51160

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``anonymous_namespace'::BuildCollapsedManifest'::__l2::<lambda_1>,bool,TSharedRef<FManifestEntry,1>_>
::Call(void *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  bool bVar1;
  TSharedRef<FManifestEntry,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = ``anonymous_namespace'::BuildCollapsedManifest'::__l2::<lambda_1>::operator()
                    (param_1,&local_18);
  return bVar1;
}

// Call @ 146b511a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLocTextHelper::EnumerateSourceTextsParallel'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FLocTextHelper::EnumerateSourceTextsParallel'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 146b511b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLocTextHelper::EnumerateTranslations'::__l2::<lambda_1>,bool,TSharedRef<FManifestEntry,1>_>
::Call(void *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  bool bVar1;
  TSharedRef<FManifestEntry,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = `FLocTextHelper::EnumerateTranslations'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return bVar1;
}

// Call @ 146b511f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PortableObjectPipeline::ExportAll'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `PortableObjectPipeline::ExportAll'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 146b51200

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FTextLocalizationResourceGenerator::GenerateLocRes'::__l2::<lambda_1>,bool,TSharedRef<FManifestEntry,1>_>
::Call(void *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  bool bVar1;
  TSharedRef<FManifestEntry,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = `FTextLocalizationResourceGenerator::GenerateLocRes'::__l2::<lambda_1>::operator()
                    (param_1,&local_18);
  return bVar1;
}

// Call @ 146b51240

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UserGeneratedContentLocalization::GetLocalizationFileHashes'::__l2::<lambda_1>,bool,wchar_t_const_*,bool>
::Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `UserGeneratedContentLocalization::GetLocalizationFileHashes'::__l2::<lambda_1>::
          operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 146b51260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`PortableObjectPipeline::ImportAll'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `PortableObjectPipeline::ImportAll'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 146b51270

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLocTextHelper::TrimArchive'::__l2::<lambda_1>,bool,TSharedRef<FManifestEntry,1>_>
::Call(void *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  bool bVar1;
  TSharedRef<FManifestEntry,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = `FLocTextHelper::TrimArchive'::__l2::<lambda_1>::operator()(param_1,&local_18);
  return bVar1;
}

// Call @ 146b512b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UserGeneratedContentLocalization::GetLocalizationFileHashes'::__l2::<lambda_2>::operator()'::__l3::<lambda_1>,void,TStringView<wchar_t>_>
::Call(void *param_1,TStringView<wchar_t> *param_2)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)&param_2->Size;
  if (**(char **)param_1 != '\0') {
    **(char **)param_1 = iVar1 != 0;
    return;
  }
  FXxHash64Builder::Update
            (*(FXxHash64Builder **)((longlong)param_1 + 8),param_2->DataPtr,(longlong)iVar1 * 2);
  return;
}

// Call @ 146b51300

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``UserGeneratedContentLocalization::CleanupLocalization'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,bool,wchar_t_const_*,bool>
::Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = ``UserGeneratedContentLocalization::CleanupLocalization'::__l2::<lambda_1>::operator()'::
          __l6::<lambda_1>::operator()(param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 146b51320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UserGeneratedContentLocalization::GetLocalizationFileHashes'::__l2::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `UserGeneratedContentLocalization::GetLocalizationFileHashes'::__l2::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 146b51330

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLocTextHelper::SaveArchiveImpl'::__l6::<lambda_2>,bool,TSharedRef<FManifestEntry,1>_>
::Call(void *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  bool bVar1;
  TSharedRef<FManifestEntry,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = `FLocTextHelper::SaveArchiveImpl'::__l6::<lambda_2>::operator()(param_1,&local_18);
  return bVar1;
}

// Call @ 146b51370

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLocTextHelper::LoadArchiveImpl'::__l9::<lambda_2>,bool,wchar_t_const_*,bool>::
Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `FLocTextHelper::LoadArchiveImpl'::__l9::<lambda_2>::operator()(param_1,*param_2,*param_3)
  ;
  return bVar1;
}

// Call @ 146b51390

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLocTextHelper::LoadManifestImpl'::__l9::<lambda_2>,bool,wchar_t_const_*,bool>::
Call(void *param_1,wchar_t **param_2,bool *param_3)

{
  bool bVar1;
  
  bVar1 = `FLocTextHelper::LoadManifestImpl'::__l9::<lambda_2>::operator()
                    (param_1,*param_2,*param_3);
  return bVar1;
}

// Call @ 146b513b0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLocTextHelperTest::RunTest'::__l17::<lambda_2>,bool,TSharedRef<FManifestEntry,1>_>
::Call(void *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  **(int **)param_1 = **(int **)param_1 + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return true;
}

// Call @ 146b513e0

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLocTextHelper::GetWordCountReport'::__l58::<lambda_2>,bool,TSharedRef<FManifestEntry,1>_>
::Call(void *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  bool bVar1;
  TSharedRef<FManifestEntry,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = `FLocTextHelper::GetWordCountReport'::__l58::<lambda_2>::operator()(param_1,&local_18);
  return bVar1;
}

// Call @ 146b51420

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLocTextHelper::GetWordCountReport'::__l62::<lambda_3>,bool,TSharedRef<FManifestEntry,1>_>
::Call(void *param_1,TSharedRef<FManifestEntry,1> *param_2)

{
  bool bVar1;
  TSharedRef<FManifestEntry,1> local_18;
  
  local_18.Object = param_2->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_2->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar1 = `FLocTextHelper::GetWordCountReport'::__l62::<lambda_3>::operator()(param_1,&local_18);
  return bVar1;
}

// Call @ 146b51460

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UserGeneratedContentLocalization::MergeLocalization'::__l2::<lambda_4>,void,int>
::Call(void *param_1,int *param_2)

{
  `UserGeneratedContentLocalization::MergeLocalization'::__l2::<lambda_4>::operator()
            (param_1,*param_2);
  return;
}

