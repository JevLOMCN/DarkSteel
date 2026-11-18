// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 7

// <lambda_invoker_cdecl> @ 148bbc7b0

void __cdecl
`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return;
}

// FInstallManagerBundleReportCache @ 148bc30b0

FInstallManagerBundleReportCache * __thiscall
FInstallManagerBundleReportCache::FInstallManagerBundleReportCache
          (FInstallManagerBundleReportCache *this,
          TArray<TUniquePtr<FAsyncTask<InstallBundleUtil::FInstallBundleWork>,TDefaultDelete<FAsyncTask<InstallBundleUtil::FInstallBundleWork>_>_>,TSizedDefaultAllocator<32>_>
          *param_1)

{
  size_t sVar1;
  int iVar2;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  this->AsyncTasks = param_1;
  (this->Report).ContextName.ComparisonIndex = 0;
  (this->Report).ContextName.Number = 0;
  (this->Report)._padding_ = (longlong)&___7FInstallManagerBundleReport__6B_;
  (this->Report).SessionId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Report).SessionId.Data.ArrayNum = 0;
  (this->Report).SessionId.Data.ArrayMax = 0;
  (this->Report).BackgroundedCount.bIsSet = false;
  iVar2 = 0;
  (this->Report).LoadedCount = 0;
  (this->Report).SourceReports.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Report).SourceReports.ArrayNum = 0;
  (this->Report).SourceReports.ArrayMax = 0;
  local_28.DataPtr = FGenericPlatformMisc::GamePersistentDownloadDir();
  if (local_28.DataPtr != (wchar_t *)0x0) {
    sVar1 = wcslen(local_28.DataPtr);
    iVar2 = (int)sVar1;
  }
  local_18 = L"InstallBundleManagerReportCache.json";
  local_10 = 0x24;
  local_28.Size = iVar2;
  FPaths::CombineInternal(&this->ReportFilename,&local_28,2);
  return this;
}

// operator() @ 148bc4d20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  undefined8 local_res8;
  FString local_18;
  
  bVar3 = FPaths::FileExists((FString *)(*(longlong *)this + 0x48));
  if (bVar3) {
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    if (*(int *)(*(longlong *)this + 0x50) == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = *(wchar_t **)(*(longlong *)this + 0x48);
    }
    bVar3 = FFileHelper::LoadFileToString(&local_18,pwVar5,None,0);
    if (bVar3) {
      if (3 < (byte)LogInstallBundleManager._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  (&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
      }
      if ((*(longlong *)((longlong)this + 8) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      cVar4 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x38))
                        (*(longlong **)((longlong)this + 8),&local_18);
      if (cVar4 == '\0') {
        local_res8 = *(undefined8 *)this;
        ``FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>::
        operator()(&local_res8);
      }
      if ((*(longlong *)((longlong)this + 8) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      piVar1 = (int *)(*(longlong *)((longlong)this + 8) + 0x28);
      *piVar1 = *piVar1 + 1;
    }
    else if (2 < (byte)LogInstallBundleManager._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 148bc5040

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  bool bVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  undefined8 local_res8;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  pwVar5 = L"";
  if (3 < (byte)LogInstallBundleManager._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogInstallBundleManager);
  }
  pIVar3 = IFileManager::Get();
  if (*(int *)(*(longlong *)this + 0x50) != 0) {
    pwVar5 = *(wchar_t **)(*(longlong *)this + 0x48);
  }
  pFVar4 = FJsonSerializable::ToJson((FJsonSerializable *)((longlong)this + 8),&local_18,true);
  local_28.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar1 = (pFVar4->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  bVar2 = FFileHelper::SaveStringToFile(&local_28,pwVar5,AutoDetect,pIVar3,0);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (!bVar2) {
    local_res8 = *(undefined8 *)this;
    bVar2 = ``FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>::operator()'::__l2::
            <lambda_1>::operator()(&local_res8);
    if (!bVar2) {
      return false;
    }
  }
  return true;
}

// operator() @ 148bc5140

void __thiscall `FInstallManagerBundleReportCache::Load'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  FReadAccessScope local_28;
  
  if (*(longlong *)((longlong)this + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FInstallManagerBundleReport::operator=
            (*(FInstallManagerBundleReport **)this,
             *(FInstallManagerBundleReport **)((longlong)this + 8));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x18),
             &local_28);
  if ((*(int *)((longlong)this + 0x28) != 0) &&
     (*(longlong **)((longlong)this + 0x20) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)((longlong)this + 0x20) + 0x68))();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// Load @ 148bd0080

void __thiscall
FInstallManagerBundleReportCache::Load
          (FInstallManagerBundleReportCache *this,
          TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  atomic<int> *paVar6;
  TReferenceControllerBase<1> *pTVar7;
  TDelegateBase<FNotThreadSafeDelegateMode> local_90;
  code *local_78 [5];
  undefined8 *local_50;
  code *local_48 [5];
  undefined8 *local_20;
  
  pTVar4 = ::operator_new(0x50);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar6 = (atomic<int> *)&DAT_00000008;
    pTVar7 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar7 = pTVar4 + 1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFInstallManagerBundleReport___00_SharedPointerInternals__6B_
    ;
    *(undefined8 *)&pTVar4[2].WeakReferenceCount = 0;
    *(undefined2 *)((longlong)&pTVar4[3]._padding_ + 5) = 0;
    *(undefined1 *)((longlong)&pTVar4[3]._padding_ + 7) = 0;
    pTVar4[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[1]._padding_ = (longlong)&___7FInstallManagerBundleReport__6B_;
    pTVar4[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar4[2]._padding_ = 0;
    pTVar4[2].SharedReferenceCount = (atomic<int>)0x0;
    *(undefined1 *)((longlong)&pTVar4[3]._padding_ + 4) = 0;
    pTVar4[4]._padding_ = 0;
    pTVar4[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar4[4].WeakReferenceCount = (atomic<int>)0x0;
    if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    paVar6 = &pTVar4->SharedReferenceCount;
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
    pTVar5 = pTVar4;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            (&local_90,(TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  local_78[0] = (code *)0x0;
  local_50 = FMemory::Malloc(0x38,8);
  puVar1 = local_50 + 1;
  *local_50 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::`2'::<lambda_2>,1,1>
               ::_vftable_;
  *puVar1 = this;
  local_50[2] = pTVar7;
  local_50[3] = pTVar5;
  TDelegateBase<FNotThreadSafeDelegateMode>::TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)(local_50 + 4),&local_90);
  if (puVar1 != (undefined8 *)0x0) {
    local_78[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_2>,void>
                  ::Call;
  }
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar6 = (atomic<int>)((int)*paVar6 + 1);
    UNLOCK();
  }
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x20,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FInstallManagerBundleReportCache::Load'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_20[2] = pTVar7;
  local_20[1] = this;
  local_20[3] = pTVar5;
  if (local_20 + 1 != (undefined8 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstallManagerBundleReportCache::Load'::__l2::<lambda_1>,void>
                  ::Call;
  }
  InstallBundleUtil::StartInstallBundleAsyncIOTask
            (this->AsyncTasks,(TUniqueFunction<void___cdecl(void)> *)local_48,
             (TUniqueFunction<void___cdecl(void)> *)local_78);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>(&local_90);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_1);
  return;
}

// SetReport @ 148bd7d30

void __thiscall
FInstallManagerBundleReportCache::SetReport
          (FInstallManagerBundleReportCache *this,FInstallManagerBundleReport *param_1)

{
  int iVar1;
  FInstallBundleSourceReport *pFVar2;
  FScriptContainerElement *pFVar3;
  FJsonSerializable local_c0;
  FName local_b8;
  FString local_b0;
  uint local_a0;
  char local_9c;
  uint local_98;
  ForAnyElementType local_90;
  undefined8 local_88;
  code *local_78 [2];
  undefined **local_68;
  code *local_60;
  undefined8 local_50;
  code *local_48 [5];
  undefined8 *local_20;
  
  FInstallManagerBundleReport::operator=(&this->Report,param_1);
  local_68 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
  local_c0 = (FJsonSerializable)&___7FInstallManagerBundleReport__6B_;
  local_60 = `FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_2>::<lambda_invoker_cdecl>
  ;
  local_78[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  local_b8 = (this->Report).ContextName;
  local_50 = 0;
  ::FString::FString(&local_b0,&(this->Report).SessionId);
  local_9c = (this->Report).BackgroundedCount.bIsSet;
  if ((bool)local_9c != false) {
    local_a0 = (this->Report).BackgroundedCount.TypedValue;
  }
  iVar1 = (this->Report).SourceReports.ArrayNum;
  local_98 = (this->Report).LoadedCount;
  pFVar2 = (FInstallBundleSourceReport *)(this->Report).SourceReports.AllocatorInstance.Data;
  local_90.Data = (FScriptContainerElement *)0x0;
  local_88 = CONCAT44(local_88._4_4_,iVar1);
  if (iVar1 == 0) {
    local_88 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar1,0,&local_90,iVar1,(int *)((longlong)&local_88 + 4));
    ConstructItems<FInstallBundleSourceReport,FInstallBundleSourceReport,int>
              (local_90.Data,pFVar2,iVar1);
  }
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x50,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FInstallManagerBundleReportCache::SetReport'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  local_20[1] = this;
  local_20[2] = &___7FInstallManagerBundleReport__6B_;
  *(FName *)(local_20 + 3) = local_b8;
  local_20[4] = 0;
  local_20[4] = local_b0.Data.AllocatorInstance.Data;
  local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_20 + 5) = local_b0.Data.ArrayNum;
  *(int *)((longlong)local_20 + 0x2c) = local_b0.Data.ArrayMax;
  local_b0.Data.ArrayNum = 0;
  local_b0.Data.ArrayMax = 0;
  *(undefined1 *)((longlong)local_20 + 0x34) = 0;
  *(char *)((longlong)local_20 + 0x34) = local_9c;
  if (local_9c != '\0') {
    *(uint *)(local_20 + 6) = local_a0;
  }
  local_20[8] = 0;
  *(uint *)(local_20 + 7) = local_98;
  local_20[8] = local_90.Data;
  local_90.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_20 + 9) = (int)local_88;
  *(undefined4 *)((longlong)local_20 + 0x4c) = local_88._4_4_;
  local_88 = 0;
  if (local_20 + 1 != (undefined8 *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FInstallManagerBundleReportCache::SetReport'::__l2::<lambda_1>,void>
                  ::Call;
  }
  InstallBundleUtil::StartInstallBundleAsyncIOTask
            (this->AsyncTasks,(TUniqueFunction<void___cdecl(void)> *)local_48,
             (TUniqueFunction<void___cdecl(void)> *)local_78);
  DestructItems<FInstallBundleSourceReport,int>
            ((FInstallBundleSourceReport *)local_90.Data,(int)local_88);
  if ((FInstallBundleSourceReport *)local_90.Data != (FInstallBundleSourceReport *)0x0) {
    FMemory::Free(local_90.Data);
  }
  if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data.AllocatorInstance.Data);
  }
  FJsonSerializable::~FJsonSerializable(&local_c0);
  DestructItems<FInstallBundleSourceReport,int>
            ((FInstallBundleSourceReport *)(param_1->SourceReports).AllocatorInstance.Data,
             (param_1->SourceReports).ArrayNum);
  pFVar3 = (param_1->SourceReports).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_1->SessionId).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  FJsonSerializable::~FJsonSerializable((FJsonSerializable *)param_1);
  return;
}

