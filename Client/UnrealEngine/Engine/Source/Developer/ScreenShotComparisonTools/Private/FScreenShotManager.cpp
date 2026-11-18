// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 20

// FScreenShotManager @ 148c3d8a0

FScreenShotManager * __thiscall FScreenShotManager::FScreenShotManager(FScreenShotManager *this)

{
  FString *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FModuleManager *this_00;
  FName *pFVar4;
  FString *pFVar5;
  FString *pFVar6;
  UClass *this_01;
  FName local_res8;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  wchar_t *local_28;
  undefined4 local_20;
  
  pFVar1 = &this->ScreenshotTempDeltaFolder;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar6 = &this->ScreenshotResultsFolder;
  (this->ScreenshotTempDeltaFolder).Data.ArrayNum = 0;
  (this->ScreenshotTempDeltaFolder).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FScreenShotManager__6B_;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScreenshotResultsFolder).Data.ArrayNum = 0;
  (this->ScreenshotResultsFolder).Data.ArrayMax = 0;
  (this->PendingComparisonReportPaths).Object = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
  (this->PendingComparisonReportPaths).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&this->FallbackPlatforms = 0;
  *(undefined8 *)&(this->FallbackPlatforms).field_0x8 = 0;
  *(undefined8 *)&(this->FallbackPlatforms).field_0x20 = 0;
  *(undefined4 *)&(this->FallbackPlatforms).field_0x28 = 0;
  *(undefined4 *)&(this->FallbackPlatforms).field_0x2c = 0x80;
  *(undefined4 *)&(this->FallbackPlatforms).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FallbackPlatforms).field_0x34 = 0;
  *(undefined8 *)&(this->FallbackPlatforms).field_0x40 = 0;
  *(undefined4 *)&(this->FallbackPlatforms).field_0x48 = 0;
  this_00 = FModuleManager::Get();
  pFVar4 = ::FName::FName(&local_res8,"ImageWrapper");
  FModuleManager::LoadModuleChecked(this_00,*pFVar4);
  pFVar5 = FPaths::AutomationReportsDir(&local_48);
  if (pFVar6 != pFVar5) {
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar6->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->ScreenshotResultsFolder).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->ScreenshotResultsFolder).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  pFVar6 = FPaths::AutomationTransientDir(&local_48);
  local_20 = 6;
  local_38.DataPtr = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  iVar2 = (pFVar6->Data).ArrayNum;
  local_38.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_38.Size = 0;
  }
  local_28 = L"Delta/";
  FPaths::CombineInternal(&local_58,&local_38,2);
  if (pFVar1 != &local_58) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
    (this->ScreenshotTempDeltaFolder).Data.ArrayNum = local_58.Data.ArrayNum;
    (this->ScreenshotTempDeltaFolder).Data.ArrayMax = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  this_01 = UScreenShotComparisonSettings::StaticClass();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  this->bUseConfidentialPlatformPaths =
       *(bool *)((this_01->ClassDefaultObject).field0_0x0.DebugPtr + 1);
  BuildFallbackPlatformsListFromConfig(this);
  return this;
}

// ~FScreenShotManager @ 148c3e0c0

void __thiscall FScreenShotManager::~FScreenShotManager(FScreenShotManager *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FScreenShotManager__6B_;
  *(undefined4 *)&(this->FallbackPlatforms).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FallbackPlatforms).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FallbackPlatforms);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PendingComparisonReportPaths).SharedReferenceCount.ReferenceController);
  pFVar2 = (this->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ScreenshotTempDeltaFolder).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7IScreenShotManager__6B_;
  return;
}

// operator() @ 148c3f670

void __thiscall
`FScreenShotManager::CopyDirectory'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  FString *this_00;
  uint uVar11;
  wchar_t *pwVar12;
  ulonglong in_stack_ffffffffffffff90;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  uint local_10;
  
  plVar3 = *(longlong **)this;
  uVar11 = 0;
  iVar1 = (int)plVar3[1];
  uVar9 = (ulonglong)iVar1;
  uVar6 = uVar11;
  if (param_1 < iVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_stack_ffffffffffffff90 = uVar9;
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = (FString *)((longlong)param_1 * 0x10 + *plVar3);
  iVar1 = *(int *)(*(longlong *)((longlong)this + 0x10) + 8);
  uVar6 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar6 = uVar11;
  }
  pFVar7 = ::FString::RightChop(this_00,&local_38,uVar6);
  local_28.DataPtr = (wchar_t *)**(undefined8 **)((longlong)this + 8);
  iVar1 = *(int *)(*(undefined8 **)((longlong)this + 8) + 1);
  local_18 = (pFVar7->Data).AllocatorInstance.Data;
  iVar2 = (pFVar7->Data).ArrayNum;
  local_28.Size = iVar1 - 1;
  if (iVar1 == 0) {
    local_28.Size = uVar11;
  }
  local_10 = iVar2 - 1;
  if (iVar2 == 0) {
    local_10 = uVar11;
  }
  FPaths::CombineInternal(&local_48,&local_28,2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar8 = IFileManager::Get();
  if ((this_00->Data).ArrayNum == 0) {
    pwVar12 = L"";
  }
  else {
    pwVar12 = (wchar_t *)(this_00->Data).AllocatorInstance.Data;
  }
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar10.Data = local_48.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar8 + 0x40))
            (pIVar8,FVar10.Data,pwVar12,1,1,in_stack_ffffffffffffff90 & 0xffffffffffffff00,0,0,0);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 148c3f7e0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> * __thiscall
`FScreenShotManager::OpenComparisonReportsAsync'::__l2::<lambda_1>::operator()
          (void *this,
          TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>
          *__return_storage_ptr__)

{
  atomic<int> *paVar1;
  int iVar2;
  longlong *plVar3;
  TJsonStringReader<wchar_t> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  uint uVar7;
  atomic<int> aVar8;
  TReferenceControllerBase<1> *pTVar9;
  TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *pTVar10;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar11;
  UPackage *pUVar12;
  FString *pFVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *pTVar17;
  TReferenceControllerBase<1> *pTVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  longlong local_res18;
  FString local_2f8;
  FString local_2e8;
  longlong local_2d8;
  TSharedPtr<FJsonObject,1> local_2c8;
  StackState local_2b8;
  longlong local_280;
  TSharedRef<FJsonObject,1> local_278;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_268;
  FString local_258;
  void *local_248;
  undefined8 local_240;
  FString local_238;
  FString local_228;
  FImageComparisonResult local_218;
  FImageComparisonResult local_128;
  
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
  pTVar18 = pTVar9;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    aVar8 = pTVar9->SharedReferenceCount;
    do {
      pTVar18 = (TReferenceControllerBase<1> *)0x0;
      if (aVar8 == (atomic<int>)0x0) goto LAB_148c3f827;
      LOCK();
      aVar6 = pTVar9->SharedReferenceCount;
      bVar21 = aVar8 == aVar6;
      if (bVar21) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar6 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar6;
    } while (!bVar21);
    pTVar18 = pTVar9;
    if (*(longlong *)((longlong)this + 0x18) != 0) {
      iVar19 = *(int *)(*(longlong *)((longlong)this + 0x18) + 8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      if (iVar19 < 1) {
        __return_storage_ptr__->Object =
             (TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *)0x0;
        (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        return __return_storage_ptr__;
      }
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pTVar17 = (TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar17 = (TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *)(pTVar9 + 1);
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        pTVar9[1]._padding_ = 0;
        pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_V__TArray_UFComparisonReport__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
        ;
        if ((pTVar17 == (TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *)
                    (*pcVar5)();
          return pTVar10;
        }
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        if ((pTVar17 == (TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *)
                    (*pcVar5)();
          return pTVar10;
        }
      }
      uVar20 = 0;
      paVar1 = (atomic<int> *)&pTVar17->ArrayMax;
      if ((int)*paVar1 < iVar19) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x120,8,iVar19,&pTVar17->AllocatorInstance,
                   (int)*(atomic<int> *)&pTVar17->ArrayNum,(int *)paVar1);
      }
      local_2d8 = 0;
      local_res18 = 0;
      local_280 = (longlong)iVar19;
      do {
        local_2f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pTVar18 = *(TReferenceControllerBase<1> **)((longlong)this + 0x20);
        local_2f8.Data.ArrayNum = 0;
        local_2f8.Data.ArrayMax = 0;
        if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
LAB_148c3f996:
          __return_storage_ptr__->Object =
               (TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          goto LAB_148c3f9c1;
        }
        aVar8 = pTVar18->SharedReferenceCount;
        do {
          if (aVar8 == (atomic<int>)0x0) {
            pTVar18 = (TReferenceControllerBase<1> *)0x0;
            goto LAB_148c3f996;
          }
          LOCK();
          aVar6 = pTVar18->SharedReferenceCount;
          bVar21 = aVar8 == aVar6;
          if (bVar21) {
            pTVar18->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
            aVar6 = aVar8;
          }
          UNLOCK();
          aVar8 = aVar6;
        } while (!bVar21);
        plVar3 = *(longlong **)((longlong)this + 0x18);
        if (plVar3 == (longlong *)0x0) goto LAB_148c3f996;
        uVar7 = 0;
        if ((int)uVar20 < (int)plVar3[1]) {
          uVar7 = ~uVar20 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *)
                    (*pcVar5)();
          return pTVar10;
        }
        iVar2 = *(int *)(*plVar3 + 8 + local_res18);
        iVar19 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar19 = 0;
        }
        ::FString::AssignRange(&local_2f8,*(wchar_t **)(*plVar3 + local_res18),iVar19);
        if ((local_2f8.Data.ArrayNum < 2) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("!ReportPath.IsEmpty()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ScreenShotManager.cpp"
                                ,0x26b,L""), bVar21)) {
          pcVar5 = (code *)swi(3);
          pTVar10 = (TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *)
                    (*pcVar5)();
          return pTVar10;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18)
        ;
        local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar14.Data = (FScriptContainerElement *)L"";
        if (local_2f8.Data.ArrayNum != 0) {
          FVar14.Data = local_2f8.Data.AllocatorInstance.Data;
        }
        local_2e8.Data.ArrayNum = 0;
        local_2e8.Data.ArrayMax = 0;
        bVar21 = FFileHelper::LoadFileToString(&local_2e8,(wchar_t *)FVar14.Data,None,0);
        if (bVar21) {
          pTVar11 = TJsonStringReader<wchar_t>::Create(&local_268,&local_2e8);
          pTVar18 = (pTVar11->SharedReferenceCount).ReferenceController;
          pTVar4 = pTVar11->Object;
          if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_268.SharedReferenceCount.ReferenceController);
          local_2b8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2c8.Object = (FJsonObject *)0x0;
          local_2c8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_2b8.Identifier.Data.ArrayNum = 0;
          local_2b8.Identifier.Data.ArrayMax = 0;
          local_2b8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2b8.Object.Object = (FJsonObject *)0x0;
          local_2b8.Object.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          local_2b8.Array.ArrayNum = 0;
          local_2b8.Array.ArrayMax = 0;
          bVar21 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                             ((TJsonReader<wchar_t> *)pTVar4,&local_2b8,None);
          if (bVar21) {
            bVar21 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_2b8,&local_2c8);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2b8.Object.SharedReferenceCount.ReferenceController);
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_2b8.Array.AllocatorInstance.Data,
                       local_2b8.Array.ArrayNum);
            if ((TSharedPtr<FJsonValue,1> *)local_2b8.Array.AllocatorInstance.Data !=
                (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_2b8.Array.AllocatorInstance.Data);
            }
            if (local_2b8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_2b8.Identifier.Data.AllocatorInstance.Data);
            }
            if (bVar21) {
              FImageComparisonResult::FImageComparisonResult(&local_128);
              local_128.Version = 0;
              if ((local_2c8.Object == (FJsonObject *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x408,L""), bVar21)) {
                pcVar5 = (code *)swi(3);
                pTVar10 = (TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *)
                          (*pcVar5)();
                return pTVar10;
              }
              local_278.Object = local_2c8.Object;
              local_278.SharedReferenceCount.ReferenceController =
                   local_2c8.SharedReferenceCount.ReferenceController;
              if (local_2c8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_2c8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              if ((local_2c8.Object == (FJsonObject *)0x0) &&
                 (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x25d,L""), bVar21)) {
                pcVar5 = (code *)swi(3);
                pTVar10 = (TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *)
                          (*pcVar5)();
                return pTVar10;
              }
              if (Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton ==
                  (UScriptStruct *)0x0) {
                pUVar12 = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
                Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton =
                     GetStaticStruct(Z_Construct_UScriptStruct_FImageComparisonResult,
                                     (UObject *)pUVar12,L"ImageComparisonResult");
              }
              bVar21 = FJsonObjectConverter::JsonObjectToUStruct
                                 (&local_278,
                                  (UStruct *)
                                  Z_Registration_Info_UScriptStruct_FImageComparisonResult.
                                  OuterSingleton,&local_128,0,0,false,(FText *)0x0,
                                  (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                                   *)0x0);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_278.SharedReferenceCount.ReferenceController);
              if (bVar21) {
                if (local_128.Version - 2U < 2) {
                  local_248 = (void *)0x0;
                  local_240 = 0;
                  local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_238.Data.ArrayNum = 0;
                  local_238.Data.ArrayMax = 0;
                  local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  local_228.Data.ArrayNum = 0;
                  local_228.Data.ArrayMax = 0;
                  FImageComparisonResult::FImageComparisonResult(&local_218);
                  ::FString::operator=((FString *)&local_248,(FString *)((longlong)this + 8));
                  FVar14.Data = local_2f8.Data.AllocatorInstance.Data;
                  iVar19 = local_2f8.Data.ArrayNum;
                  lVar15 = (longlong)local_2f8.Data.ArrayNum;
                  local_238.Data.ArrayNum = local_2f8.Data.ArrayNum;
                  if ((local_2f8.Data.ArrayNum == 0) && (local_238.Data.ArrayMax == 0)) {
                    local_238.Data._8_8_ = local_2f8.Data._8_8_ & 0xffffffff;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_2f8.Data.ArrayNum,local_238.Data.ArrayMax,
                               (ForAnyElementType *)&local_238,local_2f8.Data.ArrayNum,
                               &local_238.Data.ArrayMax);
                    if (iVar19 != 0) {
                      memcpy(local_238.Data.AllocatorInstance.Data,FVar14.Data,lVar15 * 2);
                    }
                  }
                  pFVar13 = FPaths::GetPath(&local_258,&local_2f8);
                  if (&local_228 != pFVar13) {
                    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_228.Data.AllocatorInstance.Data);
                    }
                    local_228.Data.AllocatorInstance.Data = (pFVar13->Data).AllocatorInstance.Data;
                    (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_228.Data.ArrayNum = (pFVar13->Data).ArrayNum;
                    local_228.Data.ArrayMax = (pFVar13->Data).ArrayMax;
                    (pFVar13->Data).ArrayNum = 0;
                    (pFVar13->Data).ArrayMax = 0;
                  }
                  if (local_258.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_258.Data.AllocatorInstance.Data);
                  }
                  FImageComparisonResult::operator=(&local_218,&local_128);
                  if ((pTVar17 == (TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *)0x0) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar21)) {
                    pcVar5 = (code *)swi(3);
                    pTVar10 = (TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *
                              )(*pcVar5)();
                    return pTVar10;
                  }
                  pFVar16 = (pTVar17->AllocatorInstance).Data;
                  if (((pFVar16 <= (FScriptContainerElement *)&local_248) &&
                      ((FScriptContainerElement *)&local_248 <
                       pFVar16 + (longlong)(int)*paVar1 * 0x120)) &&
                     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar21)) {
                    pcVar5 = (code *)swi(3);
                    pTVar10 = (TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1> *
                              )(*pcVar5)();
                    return pTVar10;
                  }
                  aVar8 = *(atomic<int> *)&pTVar17->ArrayNum;
                  if (aVar8 == *paVar1) {
                    aVar8 = (atomic<int>)
                            UE::Core::Private::
                            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x120,8,&pTVar17->AllocatorInstance,(int *)paVar1);
                  }
                  *(int *)&pTVar17->ArrayNum = (int)aVar8 + 1;
                  pFVar16 = (pTVar17->AllocatorInstance).Data + (longlong)(int)aVar8 * 0x120;
                  ::FString::FString((FString *)pFVar16,(FString *)&local_248);
                  ::FString::FString((FString *)(pFVar16 + 0x10),&local_238);
                  ::FString::FString((FString *)(pFVar16 + 0x20),&local_228);
                  FImageComparisonResult::FImageComparisonResult
                            ((FImageComparisonResult *)(pFVar16 + 0x30),&local_218);
                  FImageComparisonResult::~FImageComparisonResult(&local_218);
                  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_228.Data.AllocatorInstance.Data);
                  }
                  if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_238.Data.AllocatorInstance.Data);
                  }
                  if (local_248 != (void *)0x0) {
                    FMemory::Free(local_248);
                  }
                }
                else if (1 < (byte)LogScreenShotManager._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            (&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
                }
              }
              FImageComparisonResult::~FImageComparisonResult(&local_128);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_2c8.SharedReferenceCount.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar18);
              goto LAB_148c3ff25;
            }
          }
          else {
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2b8.Object.SharedReferenceCount.ReferenceController);
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_2b8.Array.AllocatorInstance.Data,
                       local_2b8.Array.ArrayNum);
            if ((TSharedPtr<FJsonValue,1> *)local_2b8.Array.AllocatorInstance.Data !=
                (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_2b8.Array.AllocatorInstance.Data);
            }
            if (local_2b8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_2b8.Identifier.Data.AllocatorInstance.Data);
            }
          }
          __return_storage_ptr__->Object =
               (TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *)0x0;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
               (TReferenceControllerBase<1> *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2c8.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
          if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
          }
          if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
          }
          goto LAB_148c3f9c1;
        }
LAB_148c3ff25:
        if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
        }
        if (local_2f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2f8.Data.AllocatorInstance.Data);
        }
        uVar20 = uVar20 + 1;
        local_res18 = local_res18 + 0x10;
        local_2d8 = local_2d8 + 1;
        if (local_280 <= local_2d8) {
          __return_storage_ptr__->Object = pTVar17;
          (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar9;
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
LAB_148c3f9c1:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar9);
          return __return_storage_ptr__;
        }
      } while( true );
    }
  }
LAB_148c3f827:
  __return_storage_ptr__->Object = (TArray<FComparisonReport,TSizedDefaultAllocator<32>_> *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  return __return_storage_ptr__;
}

// operator() @ 148c40000

void __thiscall
`FScreenShotManager::CompareImageSequence'::__l12::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  IFileManager *pIVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  undefined8 *puVar9;
  wchar_t *pwVar10;
  ulonglong in_stack_ffffffffffffffd0;
  
  plVar2 = *(longlong **)this;
  iVar1 = (int)plVar2[1];
  uVar7 = (ulonglong)iVar1;
  uVar5 = 0;
  if (param_1 < iVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_stack_ffffffffffffffd0 = uVar7;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar9 = (undefined8 *)((longlong)param_1 * 0x20 + *plVar2);
  pIVar6 = IFileManager::Get();
  pwVar8 = L"";
  if (*(int *)(puVar9 + 1) == 0) {
    pwVar10 = L"";
  }
  else {
    pwVar10 = (wchar_t *)*puVar9;
  }
  if (*(int *)(puVar9 + 3) != 0) {
    pwVar8 = (wchar_t *)puVar9[2];
  }
  (**(code **)((longlong)*pIVar6 + 0x40))
            (pIVar6,pwVar8,pwVar10,1,1,in_stack_ffffffffffffffd0 & 0xffffffffffffff00,0,0,0);
  return;
}

// BuildFallbackPlatformsListFromConfig @ 148c409c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FScreenShotManager::BuildFallbackPlatformsListFromConfig(FScreenShotManager *this)

{
  uint *puVar1;
  FScriptContainerElement *_Dst;
  undefined8 *puVar2;
  int iVar3;
  void *pvVar4;
  code *pcVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  UScreenShotComparisonSettings *pUVar13;
  ulonglong uVar14;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar15;
  FString *pFVar16;
  FConfigSection *pFVar17;
  byte bVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar20;
  wchar_t *pwVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  ulonglong uVar26;
  int iVar27;
  longlong *plVar28;
  ulonglong uVar29;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *this_00;
  ForAnyElementType FVar30;
  undefined1 auStackY_2d8 [32];
  FString local_298;
  FString local_288;
  FString local_278;
  undefined1 local_268;
  undefined1 local_267 [3];
  uint local_264;
  FString local_260;
  FScriptContainerElement *local_250;
  ForAnyElementType local_248;
  int local_240;
  int local_23c;
  FScriptContainerElement *local_238;
  int local_230 [2];
  FScriptContainerElement *local_228;
  FString local_220;
  uint local_210;
  uint uStack_20c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_208;
  undefined4 local_200;
  uint uStack_1fc;
  uint uStack_1f8;
  undefined4 uStack_1f4;
  FConfigSection *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1c0;
  FConfigSection *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  int local_188;
  undefined4 uStack_184;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_180;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  *local_160;
  FString *local_158;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_148;
  FSparseArrayAllocationInfo local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c8;
  undefined4 local_8c;
  undefined1 local_88 [32];
  ForElementType<unsigned_int> local_68;
  uint local_60;
  int local_5c;
  int local_58;
  uint local_54;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar29 = 0;
  this_00 = (TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
             *)&this->FallbackPlatforms;
  local_264 = 0;
  local_160 = this_00;
  if (*(int *)&(this->FallbackPlatforms).field_0x48 < 2) {
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,0);
  }
  else {
    TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,0);
    *(undefined4 *)&(this->FallbackPlatforms).field_0x48 = 1;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  pUVar13 = GetDefault<UScreenShotComparisonSettings>();
  uVar9 = (pUVar13->ScreenshotFallbackPlatforms).ArrayNum;
  pFVar25 = (pUVar13->ScreenshotFallbackPlatforms).AllocatorInstance.Data;
  if (((int)uVar9 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_54 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (ForElementType<unsigned_int>)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_58 = -1;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  uVar19 = uVar29;
  if (uVar9 == 0) goto LAB_148c40d45;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar9);
  }
  TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_88,uVar9);
  uVar22 = 1;
  if (3 < uVar9) {
    uVar19 = (ulonglong)((uVar9 >> 1) + 7) * 2 + 1;
    lVar24 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    uVar22 = 1 << ((byte)lVar24 & 0x1f);
  }
  if ((local_40 == 0) || ((int)local_40 < (int)uVar22)) {
    local_40 = uVar22;
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
    }
    if (uVar22 != 0) {
      uVar10 = uVar22;
      if (uVar22 < 2) {
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          uVar10 = 0;
          goto LAB_148c40b51;
        }
      }
      else {
LAB_148c40b51:
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar10,4);
      }
      if (0 < (int)uVar22) {
        uVar26 = (ulonglong)uVar22;
        uVar19 = uVar29;
        do {
          FVar30.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar30.Data = local_48.Data;
          }
          uVar14 = (longlong)(int)uVar22 - 1U & uVar19;
          uVar19 = uVar19 + 1;
          *(undefined4 *)(FVar30.Data + uVar14 * 4) = 0xffffffff;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
    }
    if (local_40 != 0) {
      pTStack_208 = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      local_210 = 0;
      uStack_20c = 1;
      local_200 = 0xffffffff;
      uStack_1fc = 0;
      uStack_1f8 = 0;
      uVar19 = uVar29;
      if (local_60 != 0) {
        FVar20 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = local_68;
        }
        uVar22 = *(uint *)FVar20;
        uVar26 = uVar29;
        while (uVar22 == 0) {
          uStack_1f8 = (int)uVar26 + 0x20;
          uVar26 = (ulonglong)uStack_1f8;
          iVar11 = (int)uVar19;
          local_210 = iVar11 + 1;
          uVar19 = (ulonglong)local_210;
          if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_210)
          goto LAB_148c40c57;
          uVar22 = ((uint *)((longlong)FVar20 + 4))[iVar11];
          local_200 = 0xffffffff;
        }
        uStack_20c = -uVar22 & uVar22;
        uVar19 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uStack_1fc = (int)lVar24 + -1 + (int)uVar26;
        uVar19 = (ulonglong)uStack_1fc;
        if ((int)local_60 < (int)uStack_1fc) {
LAB_148c40c57:
          uVar19 = (ulonglong)local_60;
          uStack_1fc = local_60;
        }
      }
      local_200 = 0xffffffff;
      local_150 = (longlong *)local_88;
      local_148._padding_ = CONCAT44(uStack_20c,local_210);
      local_148.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
      local_148.UnvisitedBitMask = 0xffffffff;
      local_148.CurrentBitIndex = uStack_1fc;
      local_148.BaseBitIndex = uStack_1f8;
      local_148._28_4_ = uStack_1f4;
      if ((int)uVar19 < (int)local_60) {
        do {
          iVar27 = (int)uVar19;
          lVar24 = *local_150 + (longlong)iVar27 * 0x28;
          iVar11 = *(int *)(*local_150 + 0x18 + (longlong)iVar27 * 0x28);
          if (iVar11 == 0) {
            pwVar21 = L"";
            iVar11 = 0;
          }
          else {
            pwVar21 = *(wchar_t **)(lVar24 + 0x10);
            iVar11 = iVar11 + -1;
          }
          uVar22 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar21);
          uVar22 = local_40 - 1 & uVar22;
          *(uint *)(lVar24 + 0x24) = uVar22;
          FVar30.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar30.Data = local_48.Data;
          }
          uVar19 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar22;
          *(undefined4 *)(lVar24 + 0x20) = *(undefined4 *)(FVar30.Data + uVar19 * 4);
          *(int *)(FVar30.Data + uVar19 * 4) = iVar27;
          local_148.UnvisitedBitMask = local_148.UnvisitedBitMask & ~local_148._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_148);
          uVar19 = (ulonglong)(uint)local_148.CurrentBitIndex;
        } while (local_148.CurrentBitIndex < (local_148.Array)->NumBits);
      }
    }
  }
  uVar19 = (ulonglong)local_54;
LAB_148c40d45:
  local_228 = pFVar25 + (longlong)(int)uVar9 * 0x20;
  uVar9 = (uint)uVar19;
  if (pFVar25 != local_228) {
    do {
      pFVar16 = (FString *)0x0;
      if ((int)uVar19 == 0) {
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x28,8,1,(ForAnyElementType *)local_88,(int *)(local_88 + 8),
                            (int *)(local_88 + 0xc));
        iVar27 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                           ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),1);
        FVar20 = (ForElementType<unsigned_int>)((longlong)local_88 + 0x10);
        if (local_68 != (ForElementType<unsigned_int>)0x0) {
          FVar20 = local_68;
        }
        bVar18 = (byte)iVar27 & 0x1f;
        if (iVar27 < 0) {
          iVar27 = iVar27 + 0x1f;
          bVar18 = bVar18 - 0x20;
        }
        puVar1 = (uint *)((longlong)FVar20 + (longlong)(iVar27 >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << (bVar18 & 0x1f));
        iVar27 = local_58;
      }
      else {
        local_54 = (int)uVar19 - 1;
        iVar27 = *(int *)(local_88._0_8_ + (longlong)local_58 * 0x28 + 4);
        iVar11 = local_58;
        if (local_54 != 0) {
          *(undefined4 *)(local_88._0_8_ + (longlong)iVar27 * 0x28) = 0xffffffff;
        }
      }
      local_58 = iVar27;
      TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::AllocateIndex((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_88,&local_128,iVar11);
      pvVar4 = local_128.Pointer;
      if (local_128.Pointer != (FString *)0x0) {
        ::FString::FString(local_128.Pointer,(FString *)pFVar25);
        ::FString::FString((FString *)((longlong)pvVar4 + 0x10),(FString *)(pFVar25 + 0x10));
        *(undefined4 *)&(((FString *)((longlong)pvVar4 + 0x20))->Data).AllocatorInstance.Data =
             0xffffffff;
        pFVar16 = pvVar4;
      }
      iVar12 = local_128.Index;
      iVar27 = pFVar16[1].Data.ArrayNum;
      iVar11 = iVar27 + -1;
      if (iVar27 == 0) {
        pwVar21 = L"";
        iVar11 = 0;
      }
      else {
        pwVar21 = (wchar_t *)pFVar16[1].Data.AllocatorInstance.Data;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar21);
      local_250 = (FScriptContainerElement *)CONCAT44(local_250._4_4_,uVar9);
      if ((local_88._8_4_ - local_54 != 1) && (local_88._8_4_ != local_54)) {
        FVar30.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar30.Data = local_48.Data;
        }
        iVar11 = *(int *)(FVar30.Data + (ulonglong)(local_40 - 1 & uVar9) * 4);
        if (iVar11 != -1) {
          do {
            iVar27 = *(int *)(local_88._0_8_ + (longlong)iVar11 * 0x28 + 0x18);
            lVar24 = (longlong)iVar11 * 0x28;
            iVar3 = pFVar16[1].Data.ArrayNum;
            if (iVar27 == iVar3) {
              if (1 < iVar27) {
                iVar27 = FGenericPlatformStricmp::Stricmp
                                   (*(wchar_t **)(local_88._0_8_ + lVar24 + 0x10),
                                    (wchar_t *)pFVar16[1].Data.AllocatorInstance.Data);
                bVar8 = iVar27 == 0;
                goto LAB_148c40f1e;
              }
LAB_148c40f37:
              if (iVar11 != -1) {
                _Dst = (FScriptContainerElement *)(local_88._0_8_ + (longlong)iVar11 * 0x28);
                if (*(void **)(local_88._0_8_ + (longlong)iVar11 * 0x28 + 0x10) != (void *)0x0) {
                  FMemory::Free(*(void **)(local_88._0_8_ + (longlong)iVar11 * 0x28 + 0x10));
                }
                pvVar4 = *(void **)_Dst;
                if (pvVar4 != (void *)0x0) {
                  FMemory::Free(pvVar4);
                }
                memmove(_Dst,pFVar16,0x20);
                TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized
                          ((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_88,iVar12,1);
                iVar12 = iVar11;
              }
              if (iVar11 != -1) goto LAB_148c41036;
              break;
            }
            bVar8 = iVar27 + iVar3 == 1;
LAB_148c40f1e:
            if (bVar8) goto LAB_148c40f37;
            iVar11 = *(int *)(local_88._0_8_ + lVar24 + 0x20);
          } while (iVar11 != -1);
          uVar9 = (uint)local_250;
        }
      }
      uVar22 = local_88._8_4_ - local_54;
      if (uVar22 < 4) {
        uVar10 = 1;
      }
      else {
        uVar19 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
        lVar24 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        uVar10 = 1 << ((byte)lVar24 & 0x1f);
      }
      if (((int)uVar22 < 1) || ((int)uVar10 <= (int)local_40)) {
        uVar9 = local_40 - 1 & uVar9;
        *(uint *)((longlong)&pFVar16[2].Data.AllocatorInstance.Data + 4) = uVar9;
        FVar30.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar30.Data = local_48.Data;
        }
        uVar19 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar9;
        *(undefined4 *)&pFVar16[2].Data.AllocatorInstance.Data =
             *(undefined4 *)(FVar30.Data + uVar19 * 4);
        *(int *)(FVar30.Data + uVar19 * 4) = iVar12;
      }
      else {
        local_40 = uVar10;
        TSet<FScreenshotFallbackEntry,DefaultKeyFuncs<FScreenshotFallbackEntry,0>,FDefaultSetAllocator>
        ::Rehash((TSet<FScreenshotFallbackEntry,DefaultKeyFuncs<FScreenshotFallbackEntry,0>,FDefaultSetAllocator>
                  *)local_88);
      }
LAB_148c41036:
      uVar19 = (ulonglong)local_54;
      pFVar25 = pFVar25 + 0x20;
      this_00 = local_160;
      uVar9 = local_54;
    } while (pFVar25 != local_228);
  }
  if (0 < (int)(local_88._8_4_ - uVar9)) {
    local_180._padding_._0_4_ = 0;
    local_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
    local_180._padding_._4_4_ = 1;
    local_180.UnvisitedBitMask = 0xffffffff;
    local_180.CurrentBitIndex = 0;
    local_180.BaseBitIndex = 0;
    if (local_60 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_180);
      uVar9 = local_54;
    }
    TStack_1e8._padding_ = CONCAT44(local_180._padding_._4_4_,(undefined4)local_180._padding_);
    local_1f0 = (FConfigSection *)local_88;
    TStack_1e8.CurrentBitIndex = local_180.CurrentBitIndex;
    TStack_1e8.UnvisitedBitMask = local_180.UnvisitedBitMask;
    TStack_1e8._28_4_ = local_180._28_4_;
    TStack_1e8.BaseBitIndex = local_180.BaseBitIndex;
    TStack_1a8.Array = local_180.Array;
    local_188 = local_88._8_4_ - uVar9;
    uStack_1c8 = CONCAT44(uStack_184,local_188);
    TStack_1e8.Array = local_180.Array;
    local_1b0 = local_1f0;
    TStack_1a8._padding_ = TStack_1e8._padding_;
    TStack_1a8._16_8_ = TStack_1e8._16_8_;
    TStack_1a8._24_8_ = TStack_1e8._24_8_;
    pTVar15 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_c8,(TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),
                         local_60);
    TStack_1a8._padding_ = pTVar15->_padding_;
    pTVar6 = pTVar15->Array;
    uVar7._0_4_ = pTVar15->UnvisitedBitMask;
    uVar7._4_4_ = pTVar15->CurrentBitIndex;
    TStack_1a8.BaseBitIndex = pTVar15->BaseBitIndex;
    TStack_1a8._28_4_ = *(undefined4 *)&pTVar15->field_0x1c;
    TStack_1a8.Array = pTVar6;
    TStack_1a8._16_8_ = uVar7;
    while( true ) {
      pFVar17 = local_1f0;
      if ((int)local_1f0->_padding_ - *(int *)((longlong)&local_1f0->_padding_ + 4) !=
          (int)uStack_1c8) {
        `TSparseArray<TSparseSetElement<FScreenshotFallbackEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_268);
      }
      if (((TStack_1e8.CurrentBitIndex == uVar7._4_4_) && (TStack_1e8.Array == pTVar6)) &&
         (pFVar17 == (FConfigSection *)local_88)) break;
      local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      lVar24 = pFVar17->_padding_;
      local_288.Data.ArrayNum = *(int *)(lVar24 + 8 + (longlong)TStack_1e8.CurrentBitIndex * 0x28);
      lVar23 = (longlong)local_288.Data.ArrayNum;
      puVar2 = (undefined8 *)(lVar24 + (longlong)TStack_1e8.CurrentBitIndex * 0x28);
      pvVar4 = (void *)*puVar2;
      if (local_288.Data.ArrayNum == 0) {
        local_288.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_288.Data.ArrayNum,0,(ForAnyElementType *)&local_288,
                   local_288.Data.ArrayNum,&local_288.Data.ArrayMax);
        memcpy(local_288.Data.AllocatorInstance.Data,pvVar4,lVar23 * 2);
      }
      local_298.Data.ArrayNum = *(int *)(puVar2 + 3);
      lVar24 = (longlong)local_298.Data.ArrayNum;
      pvVar4 = (void *)puVar2[2];
      local_298.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_298.Data.ArrayNum == 0) {
        local_298.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_298.Data.ArrayNum,0,(ForAnyElementType *)&local_298,
                   local_298.Data.ArrayNum,&local_298.Data.ArrayMax);
        memcpy(local_298.Data.AllocatorInstance.Data,pvVar4,lVar24 * 2);
      }
      bVar8 = ::FString::StartsWith(&local_288,L"/",1,IgnoreCase);
      if (bVar8) {
        if (2 < (byte)LogScreenShotManager._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager)
          ;
        }
        pFVar16 = ::FString::RightChop(&local_288,&local_118,1);
        if (&local_288 != pFVar16) {
          if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_288.Data.AllocatorInstance.Data);
          }
          local_288.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_288.Data.ArrayNum = (pFVar16->Data).ArrayNum;
          local_288.Data.ArrayMax = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
        }
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
      }
      bVar8 = ::FString::StartsWith(&local_298,L"/",1,IgnoreCase);
      if (bVar8) {
        if (2 < (byte)LogScreenShotManager._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager)
          ;
        }
        pFVar16 = ::FString::RightChop(&local_298,&local_108,1);
        if (&local_298 != pFVar16) {
          if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_298.Data.AllocatorInstance.Data);
          }
          local_298.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
          (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_298.Data.ArrayNum = (pFVar16->Data).ArrayNum;
          local_298.Data.ArrayMax = (pFVar16->Data).ArrayMax;
          (pFVar16->Data).ArrayNum = 0;
          (pFVar16->Data).ArrayMax = 0;
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
      if (local_298.Data.ArrayNum == 0) {
        pwVar21 = L"";
        iVar11 = 0;
      }
      else {
        iVar11 = local_298.Data.ArrayNum + -1;
        pwVar21 = (wchar_t *)local_298.Data.AllocatorInstance.Data;
      }
      uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar21);
      iVar11 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FString>(this_00,uVar9,&local_298);
      if ((iVar11 == -1) ||
         (lVar24 = *(longlong *)&this_00->Elements + (longlong)iVar11 * 0x28, lVar24 == 0)) {
        local_228 = (FScriptContainerElement *)&local_298;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                  (this_00,(uint)&local_238,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar9,
                   (bool *)&local_228);
        lVar24 = *(longlong *)&this_00->Elements + (longlong)(int)local_238 * 0x28;
      }
      iVar11 = local_288.Data.ArrayNum + -1;
      if (local_288.Data.ArrayNum == 0) {
        iVar11 = 0;
      }
      ::FString::AssignRange
                ((FString *)(lVar24 + 0x10),(wchar_t *)local_288.Data.AllocatorInstance.Data,iVar11)
      ;
      if (local_298.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_298.Data.AllocatorInstance.Data);
      }
      if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data.AllocatorInstance.Data);
      }
      TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
    }
  }
  if (GConfig != (FConfigCacheIni *)0x0) {
    FConfigCacheIni::GetFilenames(GConfig,&local_1c0);
    uVar19 = (ulonglong)local_1c0.ArrayNum;
    pFVar25 = local_1c0.AllocatorInstance.Data + uVar19 * 0x10;
    local_264 = local_1c0.ArrayNum;
    FVar30.Data = local_1c0.AllocatorInstance.Data;
    local_238 = pFVar25;
    while( true ) {
      local_250 = FVar30.Data;
      if (local_1c0.ArrayNum != (uint)uVar19) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_267);
      }
      if (FVar30.Data == pFVar25) break;
      pFVar17 = FConfigCacheIni::GetSection
                          (GConfig,L"AutomationTestFallbackHierarchy",false,(FString *)FVar30.Data);
      if (pFVar17 != (FConfigSection *)0x0) {
        if (2 < (byte)LogScreenShotManager._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager)
          ;
        }
        iVar11 = (int)pFVar17->_padding_;
        TStack_1e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)&pFVar17->_padding_;
        uVar9 = 1;
        iVar27 = 0;
        TStack_1e8.BaseBitIndex = 0;
        iVar12 = 0;
        if (iVar11 != 0) {
          plVar28 = (longlong *)TStack_1e8.Array;
          if ((longlong *)pFVar17->_padding_ != (longlong *)0x0) {
            plVar28 = (longlong *)pFVar17->_padding_;
          }
          uVar22 = (uint)*plVar28;
          TStack_1e8.BaseBitIndex = 0;
          while (uVar22 == 0) {
            lVar24 = (longlong)iVar27;
            TStack_1e8.BaseBitIndex = TStack_1e8.BaseBitIndex + 0x20;
            iVar27 = iVar27 + 1;
            iVar12 = iVar11;
            if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar27)
            goto LAB_148c4154b;
            uVar22 = *(uint *)((longlong)plVar28 + lVar24 * 4 + 4);
          }
          uVar9 = -uVar22 & uVar22;
          uVar19 = (ulonglong)uVar9 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar12 = TStack_1e8.BaseBitIndex + -1 + (int)lVar24;
          if (iVar11 < iVar12) {
            iVar12 = iVar11;
          }
        }
LAB_148c4154b:
        TStack_1e8._padding_ = CONCAT44(uVar9,iVar27);
        TStack_1e8.CurrentBitIndex = iVar12;
        TStack_1e8.UnvisitedBitMask = 0xffffffff;
        TStack_1e8._28_4_ = local_8c;
        TStack_1a8._padding_ = TStack_1e8._padding_;
        TStack_1a8.BaseBitIndex = TStack_1e8.BaseBitIndex;
        TStack_1a8._28_4_ = local_8c;
        TStack_1a8.UnvisitedBitMask = 0xffffffff;
        TStack_1a8.CurrentBitIndex = iVar12;
        pFVar25 = local_238;
        local_1f0 = pFVar17;
        local_1b0 = pFVar17;
        TStack_1a8.Array = TStack_1e8.Array;
        if (iVar12 < iVar11) {
          do {
            pFVar17 = local_1b0;
            bVar8 = ::FName::Equals(*(FName *)(local_1b0->_padding_ + (longlong)iVar12 * 0x28),
                                    L"FallbackPlatform");
            if (bVar8) {
              lVar24 = pFVar17->_padding_ + (longlong)iVar12 * 0x28;
              if (*(char *)(lVar24 + 0x1d) == '\0') {
                iVar11 = *(int *)(lVar24 + 0x10);
                uVar9 = (uint)uVar29 | 2;
                pvVar4 = *(void **)(lVar24 + 8);
                local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_220.Data.ArrayNum = iVar11;
                if (iVar11 == 0) {
                  local_220.Data.ArrayMax = 0;
                }
                else {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,iVar11,0,(ForAnyElementType *)&local_220,iVar11,
                             &local_220.Data.ArrayMax);
                  memcpy(local_220.Data.AllocatorInstance.Data,pvVar4,(longlong)iVar11 * 2);
                }
                pFVar16 = &local_220;
              }
              else {
                uVar9 = (uint)uVar29 | 1;
                pFVar16 = FConfigValue::ExpandValue(&local_f8,(FString *)(lVar24 + 8));
              }
              uVar29 = (ulonglong)uVar9;
              local_248.Data = (FScriptContainerElement *)0x0;
              local_240 = (pFVar16->Data).ArrayNum;
              lVar24 = (longlong)local_240;
              pFVar25 = (pFVar16->Data).AllocatorInstance.Data;
              if (local_240 == 0) {
                local_23c = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (2,2,local_240,0,&local_248,local_240,&local_23c);
                memcpy(local_248.Data,pFVar25,lVar24 * 2);
              }
              if (((uVar9 & 2) != 0) &&
                 (uVar29 = (ulonglong)(uVar9 & 0xfffffffd),
                 local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_220.Data.AllocatorInstance.Data);
              }
              if (((uVar29 & 1) != 0) &&
                 (uVar29 = (ulonglong)((uint)uVar29 & 0xfffffffe),
                 local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_f8.Data.AllocatorInstance.Data);
              }
              local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              FVar30.Data = (FScriptContainerElement *)L"";
              if (local_240 != 0) {
                FVar30.Data = local_248.Data;
              }
              local_278.Data.ArrayNum = 0;
              local_278.Data.ArrayMax = 0;
              local_260.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_260.Data.ArrayNum = 0;
              local_260.Data.ArrayMax = 0;
              bVar8 = FParse::Value((wchar_t *)FVar30.Data,L"Child=",&local_278,true,(wchar_t **)0x0
                                   );
              if (bVar8) {
                FVar30.Data = (FScriptContainerElement *)L"";
                if (local_240 != 0) {
                  FVar30.Data = local_248.Data;
                }
                bVar8 = FParse::Value((wchar_t *)FVar30.Data,L"Parent=",&local_260,true,
                                      (wchar_t **)0x0);
                if (!bVar8) goto LAB_148c41943;
                bVar8 = ::FString::StartsWith(&local_260,L"/",1,IgnoreCase);
                if (bVar8) {
                  if (2 < (byte)LogScreenShotManager._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
                  }
                  pFVar16 = ::FString::RightChop(&local_260,&local_e8,1);
                  if (&local_260 != pFVar16) {
                    if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_260.Data.AllocatorInstance.Data);
                    }
                    local_260.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
                    (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_260.Data.ArrayNum = (pFVar16->Data).ArrayNum;
                    local_260.Data.ArrayMax = (pFVar16->Data).ArrayMax;
                    (pFVar16->Data).ArrayNum = 0;
                    (pFVar16->Data).ArrayMax = 0;
                  }
                  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
                  }
                }
                bVar8 = ::FString::StartsWith(&local_278,L"/",1,IgnoreCase);
                if (bVar8) {
                  if (2 < (byte)LogScreenShotManager._0_1_) {
                    UE::Logging::Private::BasicLog<3>
                              (&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
                  }
                  pFVar16 = ::FString::RightChop(&local_278,&local_d8,1);
                  if (&local_278 != pFVar16) {
                    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_278.Data.AllocatorInstance.Data);
                    }
                    local_278.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
                    (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_278.Data.ArrayNum = (pFVar16->Data).ArrayNum;
                    local_278.Data.ArrayMax = (pFVar16->Data).ArrayMax;
                    (pFVar16->Data).ArrayNum = 0;
                    (pFVar16->Data).ArrayMax = 0;
                  }
                  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
                  }
                }
                if (local_278.Data.ArrayNum == 0) {
                  pwVar21 = L"";
                  iVar11 = 0;
                }
                else {
                  pwVar21 = (wchar_t *)local_278.Data.AllocatorInstance.Data;
                  iVar11 = local_278.Data.ArrayNum + -1;
                }
                uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar21);
                iVar11 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                         ::FindIndexByHash<FString>(this_00,uVar9,&local_278);
                if ((iVar11 == -1) ||
                   (lVar24 = *(longlong *)&this_00->Elements + (longlong)iVar11 * 0x28, lVar24 == 0)
                   ) {
                  local_158 = &local_278;
                  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                            (this_00,(uint)local_230,
                             (TKeyInitializer<FString_const_&> *)(ulonglong)uVar9,(bool *)&local_158
                            );
                  lVar24 = *(longlong *)&this_00->Elements + (longlong)local_230[0] * 0x28;
                }
                iVar11 = local_260.Data.ArrayNum + -1;
                if (local_260.Data.ArrayNum == 0) {
                  iVar11 = 0;
                }
                ::FString::AssignRange
                          ((FString *)(lVar24 + 0x10),
                           (wchar_t *)local_260.Data.AllocatorInstance.Data,iVar11);
              }
              else {
LAB_148c41943:
                if (1 < (byte)LogScreenShotManager._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)&PTR_u_Invalid_fallbac_151c93030,
                             (FLogCategoryBase *)&LogScreenShotManager);
                }
              }
              if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_260.Data.AllocatorInstance.Data);
              }
              if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_278.Data.AllocatorInstance.Data);
              }
              if (local_248.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Data);
              }
            }
            TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
            pFVar25 = local_238;
            FVar30.Data = local_250;
            iVar12 = TStack_1a8.CurrentBitIndex;
          } while (TStack_1a8.CurrentBitIndex < (TStack_1a8.Array)->NumBits);
        }
      }
      uVar19 = (ulonglong)local_264;
      FVar30.Data = FVar30.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
    if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c0.AllocatorInstance.Data);
    }
  }
  local_40 = 0;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  TSparseArray<TSparseSetElement<FScreenshotFallbackEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FScreenshotFallbackEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FScreenshotFallbackEntry>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// CompareImageSequence @ 148c429c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FImageComparisonResult,1> * __thiscall
FScreenShotManager::CompareImageSequence
          (FScreenShotManager *this,TSharedPtr<FImageComparisonResult,1> *__return_storage_ptr__,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1,FAutomationScreenshotMetadata *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined6 uVar4;
  FScreenShotManager *this_00;
  undefined8 uVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  int iVar9;
  TSharedPtr<FImageComparisonResult,1> *pTVar10;
  longlong lVar11;
  undefined8 *puVar12;
  FString *pFVar13;
  FString *pFVar14;
  FString *pFVar15;
  FText *pFVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  UPackage *pUVar19;
  IFileManager *pIVar20;
  UScriptStruct *pUVar21;
  FImageComparisonResult *pFVar22;
  FImageComparisonResult *pFVar23;
  ForElementType<unsigned_int> FVar24;
  wchar_t *pwVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  FImageComparisonResult *pFVar31;
  uint *puVar32;
  ForAnyElementType FVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auStackY_558 [32];
  <lambda_1> local_518 [8];
  ForAnyElementType local_510;
  undefined8 local_508;
  undefined1 local_500 [8];
  FScreenShotManager *local_4f8;
  FImageTolerance local_4e8;
  FString local_4d8;
  FString local_4c8;
  ForElementType<unsigned_int> local_4b8;
  FString local_4b0;
  TSharedPtr<FImageComparisonResult,1> *local_4a0;
  FString local_498;
  FString local_488;
  FImageComparisonResult local_478;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_388;
  uint uStack_380;
  uint uStack_37c;
  undefined1 *local_378;
  undefined4 uStack_370;
  uint uStack_36c;
  uint local_368;
  uint uStack_364;
  int iStack_360;
  undefined4 uStack_35c;
  int local_358;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_350;
  ForAnyElementType *local_348;
  FString local_340;
  FString local_330;
  FString local_320;
  FString local_310;
  FString local_300;
  FString local_2f0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d8;
  undefined8 uStack_2b8;
  FString local_2b0;
  TArrayView<std::nullptr_t,int> local_2a0;
  code *local_290;
  ForAnyElementType **local_288;
  FScriptContainerElement *local_278;
  uint uStack_270;
  undefined4 uStack_26c;
  FScriptContainerElement *local_268;
  uint uStack_260;
  undefined4 uStack_25c;
  TStringView<wchar_t> local_258;
  wchar_t *local_248;
  undefined4 local_240;
  TStringView<wchar_t> local_238;
  wchar_t *local_228;
  undefined4 local_220;
  TStringView<wchar_t> local_218;
  wchar_t *local_208;
  undefined4 local_200;
  TStringView<wchar_t> local_1f8;
  wchar_t *local_1e8;
  undefined4 local_1e0;
  TStringView<wchar_t> local_1d8;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FText local_188;
  FText local_178;
  FString local_168;
  void *local_158 [2];
  TStringView<wchar_t> local_148;
  FString local_138;
  FString local_128;
  FImageTolerance local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TStringView<wchar_t> local_c8;
  FText local_b8;
  FTextFormat local_a8;
  TStringView<wchar_t> local_98;
  FScriptContainerElement *local_88;
  uint local_80;
  FScriptContainerElement *local_78;
  uint local_70;
  FScriptContainerElement *local_68;
  uint local_60;
  undefined *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_558;
  pFVar23 = (FImageComparisonResult *)0x0;
  uVar28 = 0;
  uVar34 = *(uint *)&param_1->field_0x28;
  local_4b8 = (ForElementType<unsigned_int>)&param_1->field_0x10;
  uVar29 = 0;
  uStack_37c = 1;
  uVar30 = 0;
  iVar9 = 0;
  uStack_36c = uVar29;
  uStack_380 = uVar29;
  local_368 = uVar30;
  if (uVar34 != 0) {
    puVar32 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar32 = (uint *)local_4b8;
    }
    uVar35 = *puVar32;
    pFVar22 = pFVar23;
    pFVar31 = pFVar23;
    local_368 = uVar28;
    uStack_380 = uVar28;
    while (uVar35 == 0) {
      iVar9 = (int)pFVar31;
      local_368 = (int)pFVar22 + 0x20;
      pFVar22 = (FImageComparisonResult *)(ulonglong)local_368;
      uStack_380 = iVar9 + 1;
      pFVar31 = (FImageComparisonResult *)(ulonglong)uStack_380;
      if ((int)(((int)(uVar34 - 1) >> 0x1f & 0x1fU) + (uVar34 - 1)) >> 5 < (int)uStack_380) {
        iVar9 = *(int *)&param_1->field_0x28;
        uStack_36c = uVar34;
        goto LAB_148c42a98;
      }
      uVar35 = (puVar32 + 1)[iVar9];
    }
    iVar9 = *(int *)&param_1->field_0x28;
    uStack_37c = -uVar35 & uVar35;
    uVar1 = (ulonglong)uStack_37c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_358 = (int)lVar11;
    uStack_36c = local_358 + -1 + local_368;
    if (iVar9 < (int)uStack_36c) {
      uStack_36c = uVar34;
    }
  }
LAB_148c42a98:
  uVar34 = *(uint *)&param_1->field_0x28;
  iStack_360 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uVar35 = uVar34 & 0xffffffe0;
  TStack_2d8._padding_ = CONCAT44(uStack_37c,uStack_380);
  uStack_370 = 0xffffffff;
  TStack_2d8.CurrentBitIndex = uStack_36c;
  TStack_2d8.UnvisitedBitMask = 0xffffffff;
  iVar26 = (int)uVar34 >> 5;
  TStack_2d8._28_4_ = uStack_36c;
  TStack_2d8.BaseBitIndex = local_368;
  uStack_2b8 = CONCAT44(uStack_35c,iStack_360);
  local_4f8 = this;
  local_4a0 = __return_storage_ptr__;
  local_388 = param_1;
  local_378 = (undefined1 *)local_4b8;
  uStack_364 = uStack_36c;
  local_350 = param_1;
  local_2e0 = param_1;
  TStack_2d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_4b8;
  if ((((int)uVar34 < 0) || (iVar9 < (int)uVar34)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pTVar10 = (TSharedPtr<FImageComparisonResult,1> *)(*pcVar3)();
    return pTVar10;
  }
  pTVar6 = local_350;
  uVar2 = *(int *)((longlong)local_4b8 + 0x18);
  if (uVar34 != uVar2) {
    FVar24 = *(ForElementType<unsigned_int> *)((longlong)local_4b8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_4b8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar24 = local_4b8;
    }
    uVar34 = -1 << ((byte)uVar34 & 0x1f) & *(uint *)((longlong)FVar24 + (longlong)iVar26 * 4);
    while (uVar34 == 0) {
      lVar11 = (longlong)iVar26;
      uVar35 = uVar35 + 0x20;
      iVar26 = iVar26 + 1;
      uVar34 = uVar2;
      if ((int)(((int)(uVar2 - 1) >> 0x1f & 0x1fU) + (uVar2 - 1)) >> 5 < iVar26) goto LAB_148c42be0;
      uVar34 = *(uint *)((undefined1 *)((longlong)FVar24 + 4) + lVar11 * 4);
    }
    uVar1 = (ulonglong)(-uVar34 & uVar34) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar34 = (int)lVar11 + -1 + uVar35;
    if ((int)uVar2 < (int)uVar34) {
      uVar34 = uVar2;
    }
  }
LAB_148c42be0:
  do {
    pTVar7 = local_2e0;
    if (*(int *)&local_2e0->field_0x8 - *(int *)&local_2e0->field_0x34 != (int)uStack_2b8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_500);
    }
    if (((TStack_2d8.CurrentBitIndex == uVar34) &&
        ((ForElementType<unsigned_int>)TStack_2d8.Array == local_4b8)) && (pTVar7 == pTVar6)) {
      local_4a0->Object = (FImageComparisonResult *)0x0;
      (local_4a0->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
      return local_4a0;
    }
    pFVar15 = (FString *)(*(longlong *)pTVar7 + (longlong)TStack_2d8.CurrentBitIndex * 0x28);
    ::FString::FString(&local_2b0,L"");
    FPaths::ChangeExtension(&local_488,pFVar15 + 1,&local_2b0);
    if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
    }
    FPaths::GetExtension(&local_2f0,pFVar15 + 1,true);
    ::FString::ConcatCF(&local_340,L"_Delta",&local_2f0);
    uVar35 = local_340.Data.ArrayNum - 1;
    if (local_340.Data.ArrayNum == 0) {
      uVar35 = uVar30;
    }
    ::FString::AppendChars(&local_488,(wchar_t *)local_340.Data.AllocatorInstance.Data,uVar35);
    if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_340.Data.AllocatorInstance.Data);
    }
    local_118.MaximumLocalError = FImageTolerance::DefaultIgnoreLess.MaximumLocalError;
    local_118.MaximumGlobalError = FImageTolerance::DefaultIgnoreLess.MaximumGlobalError;
    local_4e8 = FImageTolerance::DefaultIgnoreLess;
    local_118._0_4_ = FImageTolerance::DefaultIgnoreLess._0_4_;
    local_118._4_4_ = FImageTolerance::DefaultIgnoreLess._4_4_;
    if (param_2->bHasComparisonRules != false) {
      local_118.MaximumLocalError = param_2->MaximumLocalError;
      local_118.MaximumGlobalError = param_2->MaximumGlobalError;
      uVar4._0_1_ = param_2->ToleranceRed;
      uVar4._1_1_ = param_2->ToleranceGreen;
      uVar4._2_1_ = param_2->ToleranceBlue;
      uVar4._3_1_ = param_2->ToleranceAlpha;
      uVar4._4_1_ = param_2->ToleranceMinBrightness;
      uVar4._5_1_ = param_2->ToleranceMaxBrightness;
      local_4e8.IgnoreAntiAliasing = param_2->bIgnoreAntiAliasing;
      local_4e8.Red = (undefined1)uVar4;
      local_4e8.Green = uVar4._1_1_;
      local_4e8.Blue = uVar4._2_1_;
      local_4e8.Alpha = uVar4._3_1_;
      local_4e8.MinBrightness = uVar4._4_1_;
      local_4e8.MaxBrightness = uVar4._5_1_;
      local_4e8.IgnoreColors = param_2->bIgnoreColors;
      uVar5 = local_4e8._0_8_;
      local_4e8._0_4_ = SUB64(uVar4,0);
      local_4e8._4_4_ = SUB84(uVar5,4);
      local_4e8.MaximumLocalError = local_118.MaximumLocalError;
      local_4e8.MaximumGlobalError = local_118.MaximumGlobalError;
      local_118._0_4_ = local_4e8._0_4_;
      local_118._4_4_ = local_4e8._4_4_;
    }
    FImageComparer::Compare
              ((FImageComparer *)local_518,&local_478,pFVar15,pFVar15 + 1,&local_118,&local_488);
    if (local_478.ApprovedFilePath.Data.ArrayNum < 2) {
LAB_148c42e41:
      pFVar15 = &param_2->Platform;
      if (&local_478.SourcePlatform != pFVar15) {
        iVar9 = (param_2->Platform).Data.ArrayNum;
        pFVar27 = (pFVar15->Data).AllocatorInstance.Data;
        local_478.SourcePlatform.Data.ArrayNum = iVar9;
        if ((iVar9 == 0) && (local_478.SourcePlatform.Data.ArrayMax == 0)) {
          local_478.SourcePlatform.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,local_478.SourcePlatform.Data.ArrayMax,
                     (ForAnyElementType *)&local_478.SourcePlatform,iVar9,
                     &local_478.SourcePlatform.Data.ArrayMax);
          if (iVar9 != 0) {
            memcpy(local_478.SourcePlatform.Data.AllocatorInstance.Data,pFVar27,(longlong)iVar9 * 2)
            ;
          }
        }
      }
      pFVar14 = &param_2->Rhi;
      if (&local_478.SourceRHI != pFVar14) {
        iVar9 = (param_2->Rhi).Data.ArrayNum;
        pFVar27 = (pFVar14->Data).AllocatorInstance.Data;
        local_478.SourceRHI.Data.ArrayNum = iVar9;
        if ((iVar9 == 0) && (local_478.SourceRHI.Data.ArrayMax == 0)) {
          local_478.SourceRHI.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar9,local_478.SourceRHI.Data.ArrayMax,
                     (ForAnyElementType *)&local_478.SourceRHI,iVar9,
                     &local_478.SourceRHI.Data.ArrayMax);
          if (iVar9 != 0) {
            memcpy(local_478.SourceRHI.Data.AllocatorInstance.Data,pFVar27,(longlong)iVar9 * 2);
          }
        }
      }
      this_00 = local_4f8;
      puVar12 = (undefined8 *)
                (**(code **)(local_4f8->_padding_ + 0x20))(local_4f8,local_158,param_2);
      if (&local_478.IdealApprovedFolderPath != (FString *)puVar12) {
        if (local_478.IdealApprovedFolderPath.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_478.IdealApprovedFolderPath.Data.AllocatorInstance.Data);
        }
        local_478.IdealApprovedFolderPath.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)*puVar12;
        *puVar12 = 0;
        local_478.IdealApprovedFolderPath.Data.ArrayNum = *(int *)(puVar12 + 1);
        local_478.IdealApprovedFolderPath.Data.ArrayMax = *(int *)((longlong)puVar12 + 0xc);
        puVar12[1] = 0;
      }
      if (local_158[0] != (void *)0x0) {
        FMemory::Free(local_158[0]);
      }
      pFVar13 = GetPathComponentForTestImages(this_00,&local_138,param_2,true);
      if (&local_478.ScreenshotPath != pFVar13) {
        if (local_478.ScreenshotPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        {
          FMemory::Free(local_478.ScreenshotPath.Data.AllocatorInstance.Data);
        }
        local_478.ScreenshotPath.Data.AllocatorInstance.Data =
             (pFVar13->Data).AllocatorInstance.Data;
        (pFVar13->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_478.ScreenshotPath.Data.ArrayNum = (pFVar13->Data).ArrayNum;
        local_478.ScreenshotPath.Data.ArrayMax = (pFVar13->Data).ArrayMax;
        (pFVar13->Data).ArrayNum = 0;
        (pFVar13->Data).ArrayMax = 0;
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      local_4d8.Data.ArrayNum = (param_2->Rhi).Data.ArrayNum;
      lVar11 = (longlong)local_4d8.Data.ArrayNum;
      pFVar27 = (pFVar14->Data).AllocatorInstance.Data;
      local_4d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_4d8.Data.ArrayNum == 0) {
        local_4d8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_4d8.Data.ArrayNum,0,(ForAnyElementType *)&local_4d8,
                   local_4d8.Data.ArrayNum,&local_4d8.Data.ArrayMax);
        memcpy(local_4d8.Data.AllocatorInstance.Data,pFVar27,lVar11 * 2);
      }
      if (1 < local_4d8.Data.ArrayNum) {
        ::FString::AppendChars(&local_4d8,L"_",1);
      }
      iVar9 = (param_2->FeatureLevel).Data.ArrayNum;
      uVar34 = iVar9 - 1;
      if (iVar9 == 0) {
        uVar34 = uVar30;
      }
      ::FString::AppendChars
                (&local_4d8,(wchar_t *)(param_2->FeatureLevel).Data.AllocatorInstance.Data,uVar34);
      pFVar14 = GetPathComponentForTestImages(this_00,&local_128,param_2,true);
      local_98.DataPtr = (wchar_t *)(this_00->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
      iVar9 = (this_00->ScreenshotResultsFolder).Data.ArrayNum;
      local_88 = (pFVar14->Data).AllocatorInstance.Data;
      iVar26 = (pFVar14->Data).ArrayNum;
      local_50 = 1;
      local_98.Size = iVar9 - 1;
      if (iVar9 == 0) {
        local_98.Size = uVar30;
      }
      local_78 = (pFVar15->Data).AllocatorInstance.Data;
      local_80 = iVar26 - 1;
      if (iVar26 == 0) {
        local_80 = uVar30;
      }
      iVar9 = (param_2->Platform).Data.ArrayNum;
      local_70 = iVar9 - 1;
      if (iVar9 == 0) {
        local_70 = uVar28;
      }
      local_68 = local_4d8.Data.AllocatorInstance.Data;
      local_60 = local_4d8.Data.ArrayNum - 1;
      if (local_4d8.Data.ArrayNum == 0) {
        local_60 = uVar28;
      }
      local_58 = &u__;
      FPaths::CombineInternal(&local_4c8,&local_98,5);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
      }
      local_1d8.DataPtr = (wchar_t *)local_4c8.Data.AllocatorInstance.Data;
      local_1c0 = 0xc;
      local_1d8.Size = local_4c8.Data.ArrayNum - 1;
      if (local_4c8.Data.ArrayNum == 0) {
        local_1d8.Size = uVar29;
      }
      local_1c8 = L"Approved.png";
      FPaths::CombineInternal(&local_330,&local_1d8,2);
      if (local_478.ReportApprovedFilePath.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.ReportApprovedFilePath.Data.AllocatorInstance.Data);
      }
      local_478.ReportApprovedFilePath.Data.AllocatorInstance.Data =
           local_330.Data.AllocatorInstance.Data;
      local_478.ReportApprovedFilePath.Data.ArrayNum = local_330.Data.ArrayNum;
      local_478.ReportApprovedFilePath.Data.ArrayMax = local_330.Data.ArrayMax;
      local_258.DataPtr = (wchar_t *)local_4c8.Data.AllocatorInstance.Data;
      local_240 = 0xc;
      local_258.Size = local_4c8.Data.ArrayNum - 1;
      if (local_4c8.Data.ArrayNum == 0) {
        local_258.Size = uVar29;
      }
      local_248 = L"Incoming.png";
      FPaths::CombineInternal(&local_320,&local_258,2);
      if (local_478.ReportIncomingFilePath.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.ReportIncomingFilePath.Data.AllocatorInstance.Data);
      }
      local_478.ReportIncomingFilePath.Data.AllocatorInstance.Data =
           local_320.Data.AllocatorInstance.Data;
      local_478.ReportIncomingFilePath.Data.ArrayNum = local_320.Data.ArrayNum;
      local_478.ReportIncomingFilePath.Data.ArrayMax = local_320.Data.ArrayMax;
      local_1f8.DataPtr = (wchar_t *)local_4c8.Data.AllocatorInstance.Data;
      local_1e0 = 9;
      local_1f8.Size = local_4c8.Data.ArrayNum - 1;
      if (local_4c8.Data.ArrayNum == 0) {
        local_1f8.Size = uVar29;
      }
      local_1e8 = L"Delta.png";
      FPaths::CombineInternal(&local_310,&local_1f8,2);
      if (local_478.ReportComparisonFilePath.Data.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_478.ReportComparisonFilePath.Data.AllocatorInstance.Data);
      }
      local_478.ReportComparisonFilePath.Data.AllocatorInstance.Data =
           local_310.Data.AllocatorInstance.Data;
      local_478.ReportComparisonFilePath.Data.ArrayNum = local_310.Data.ArrayNum;
      local_478.ReportComparisonFilePath.Data.ArrayMax = local_310.Data.ArrayMax;
      local_510.Data = (FScriptContainerElement *)0x0;
      local_508 = 0;
      pFVar15 = FPaths::ConvertRelativePathToFull(&local_108,&local_478.ReportApprovedFilePath);
      iVar9 = (int)local_508;
      if ((int)local_508 == local_508._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_510,(int *)((longlong)&local_508 + 4));
      }
      pFVar27 = local_510.Data + (longlong)iVar9 * 0x20;
      local_508 = CONCAT44(local_508._4_4_,iVar9 + 1);
      *(FScriptContainerElement **)pFVar27 = (FScriptContainerElement *)0x0;
      lVar11 = (longlong)local_478.ApprovedFilePath.Data.ArrayNum;
      local_4f8 = (FScreenShotManager *)local_478.ApprovedFilePath.Data.AllocatorInstance.Data;
      *(int *)(pFVar27 + 8) = local_478.ApprovedFilePath.Data.ArrayNum;
      if (local_478.ApprovedFilePath.Data.ArrayNum == 0) {
        *(int *)(pFVar27 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_478.ApprovedFilePath.Data.ArrayNum,0,(ForAnyElementType *)pFVar27,
                   local_478.ApprovedFilePath.Data.ArrayNum,(int *)(pFVar27 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar27,local_4f8,lVar11 * 2);
      }
      *(FScriptContainerElement **)(pFVar27 + 0x10) = (FScriptContainerElement *)0x0;
      *(FScriptContainerElement **)(pFVar27 + 0x10) = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar27 + 0x18) = (pFVar15->Data).ArrayNum;
      *(int *)(pFVar27 + 0x1c) = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      pFVar15 = FPaths::ConvertRelativePathToFull(&local_f8,&local_478.ReportIncomingFilePath);
      iVar9 = (int)local_508;
      if ((int)local_508 == local_508._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_510,(int *)((longlong)&local_508 + 4));
      }
      pFVar27 = local_510.Data + (longlong)iVar9 * 0x20;
      local_508 = CONCAT44(local_508._4_4_,iVar9 + 1);
      *(FScriptContainerElement **)pFVar27 = (FScriptContainerElement *)0x0;
      local_4f8 = (FScreenShotManager *)local_478.IncomingFilePath.Data.AllocatorInstance.Data;
      *(int *)(pFVar27 + 8) = local_478.IncomingFilePath.Data.ArrayNum;
      if (local_478.IncomingFilePath.Data.ArrayNum == 0) {
        *(int *)(pFVar27 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_478.IncomingFilePath.Data.ArrayNum,0,(ForAnyElementType *)pFVar27,
                   local_478.IncomingFilePath.Data.ArrayNum,(int *)(pFVar27 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar27,local_4f8,(longlong)local_478.IncomingFilePath.Data.ArrayNum * 2);
      }
      *(FScriptContainerElement **)(pFVar27 + 0x10) = (FScriptContainerElement *)0x0;
      *(FScriptContainerElement **)(pFVar27 + 0x10) = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar27 + 0x18) = (pFVar15->Data).ArrayNum;
      *(int *)(pFVar27 + 0x1c) = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      pFVar15 = FPaths::ConvertRelativePathToFull(&local_e8,&local_478.ReportComparisonFilePath);
      iVar9 = (int)local_508;
      if ((int)local_508 == local_508._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_510,(int *)((longlong)&local_508 + 4));
      }
      pFVar27 = local_510.Data + (longlong)iVar9 * 0x20;
      local_508 = CONCAT44(local_508._4_4_,iVar9 + 1);
      *(FScriptContainerElement **)pFVar27 = (FScriptContainerElement *)0x0;
      lVar11 = (longlong)local_478.ComparisonFilePath.Data.ArrayNum;
      local_4f8 = (FScreenShotManager *)local_478.ComparisonFilePath.Data.AllocatorInstance.Data;
      *(int *)(pFVar27 + 8) = local_478.ComparisonFilePath.Data.ArrayNum;
      if (local_478.ComparisonFilePath.Data.ArrayNum == 0) {
        *(int *)(pFVar27 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_478.ComparisonFilePath.Data.ArrayNum,0,(ForAnyElementType *)pFVar27,
                   local_478.ComparisonFilePath.Data.ArrayNum,(int *)(pFVar27 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar27,local_4f8,lVar11 * 2);
      }
      *(FScriptContainerElement **)(pFVar27 + 0x10) = (FScriptContainerElement *)0x0;
      *(FScriptContainerElement **)(pFVar27 + 0x10) = (pFVar15->Data).AllocatorInstance.Data;
      (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar27 + 0x18) = (pFVar15->Data).ArrayNum;
      *(int *)(pFVar27 + 0x1c) = (pFVar15->Data).ArrayMax;
      (pFVar15->Data).ArrayNum = 0;
      (pFVar15->Data).ArrayMax = 0;
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      local_348 = &local_510;
      local_2a0.DataPtr = (void **)0x0;
      local_290 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FScreenShotManager::CompareImageSequence'::__l12::<lambda_1>,void,int>
                  ::Call;
      local_288 = &local_348;
      local_2a0.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(int)local_508,1,(TFunctionRef<void___cdecl(int)> *)&local_290,
                 local_518[0],None,&local_2a0);
      if ((this_00->ScreenshotResultsFolder).Data.ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(this_00->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_478.ReportApprovedFilePath,pwVar25);
      if ((this_00->ScreenshotResultsFolder).Data.ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(this_00->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_478.ReportIncomingFilePath,pwVar25);
      if ((this_00->ScreenshotResultsFolder).Data.ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(this_00->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_478.ReportComparisonFilePath,pwVar25);
      pFVar15 = FPaths::ProjectDir(&local_d8);
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_478.IncomingFilePath,pwVar25);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      pFVar15 = FPaths::ProjectDir(&local_1b8);
      if ((pFVar15->Data).ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      FPaths::MakePathRelativeTo(&local_478.IdealApprovedFolderPath,pwVar25);
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (1 < local_478.ApprovedFilePath.Data.ArrayNum) {
        pFVar15 = FPaths::ProjectDir(&local_1a8);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        FPaths::MakePathRelativeTo(&local_478.ApprovedFilePath,pwVar25);
        if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
        }
      }
      if (1 < local_478.ComparisonFilePath.Data.ArrayNum) {
        pFVar15 = FPaths::ProjectDir(&local_198);
        if ((pFVar15->Data).ArrayNum == 0) {
          pwVar25 = L"";
        }
        else {
          pwVar25 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
        }
        FPaths::MakePathRelativeTo(&local_478.ComparisonFilePath,pwVar25);
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
      }
      bVar8 = FText::IsEmpty(&local_478.ErrorMessage);
      if (bVar8) {
        pFVar15 = FPaths::GetBaseFilename(&local_168,&local_478.ApprovedFilePath,true);
        pFVar16 = FText::FromString(&local_b8,pFVar15);
        pFVar17 = FText::AsLocalizable_Advanced_LocText
                            (&local_178,L"ScreenShotManager",L"CompareImageSequenceError",
                             L"Frame \'{0}\' is not similar to Ground Truth");
        pFVar18 = FTextFormat::FTextFormat(&local_a8,pFVar17,Default);
        pFVar16 = FText::Format<FText>(&local_188,pFVar18,pFVar16);
        FText::operator=(&local_478.ErrorMessage,pFVar16);
        if (local_188.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
        }
        if (local_178.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_178.TextData.Reference + 0x10))();
        }
        if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_168.Data.AllocatorInstance.Data);
        }
      }
      local_4b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4b0.Data.ArrayNum = 0;
      local_4b0.Data.ArrayMax = 0;
      if (Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton ==
          (UScriptStruct *)0x0) {
        pUVar19 = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
        Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FImageComparisonResult,(UObject *)pUVar19,
                             L"ImageComparisonResult");
      }
      bVar8 = FJsonObjectConverter::UStructToJsonObjectString
                        ((UStruct *)
                         Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton,
                         &local_478,&local_4b0,0,0,0,
                         (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                          *)0x0,true);
      if (bVar8) {
        local_238.DataPtr = (wchar_t *)local_4c8.Data.AllocatorInstance.Data;
        local_220 = 0xb;
        local_238.Size = local_4c8.Data.ArrayNum - 1;
        if (local_4c8.Data.ArrayNum == 0) {
          local_238.Size = uVar29;
        }
        local_228 = L"Report.json";
        FPaths::CombineInternal(&local_498,&local_238,2);
        pIVar20 = IFileManager::Get();
        local_278 = local_4b0.Data.AllocatorInstance.Data;
        FVar33.Data = (FScriptContainerElement *)L"";
        if (local_498.Data.ArrayNum != 0) {
          FVar33.Data = local_498.Data.AllocatorInstance.Data;
        }
        uStack_270 = local_4b0.Data.ArrayNum - 1;
        if (local_4b0.Data.ArrayNum == 0) {
          uStack_270 = uVar28;
        }
        local_c8._12_4_ = uStack_26c;
        local_c8.Size = uStack_270;
        local_c8.DataPtr = (wchar_t *)local_4b0.Data.AllocatorInstance.Data;
        FFileHelper::SaveStringToFile
                  (&local_c8,(wchar_t *)FVar33.Data,ForceUTF8WithoutBOM,pIVar20,0);
        if (4 < (byte)LogScreenShotManager._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager)
          ;
        }
        if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_498.Data.AllocatorInstance.Data);
        }
      }
      pUVar21 = FAutomationScreenshotMetadata::StaticStruct();
      bVar8 = FJsonObjectConverter::UStructToJsonObjectString
                        ((UStruct *)pUVar21,param_2,&local_4b0,0,0,0,
                         (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                          *)0x0,true);
      if (bVar8) {
        local_218.DataPtr = (wchar_t *)local_4c8.Data.AllocatorInstance.Data;
        local_200 = 0xd;
        local_218.Size = local_4c8.Data.ArrayNum - 1;
        if (local_4c8.Data.ArrayNum == 0) {
          local_218.Size = uVar29;
        }
        local_208 = L"Incoming.json";
        FPaths::CombineInternal(&local_300,&local_218,2);
        pIVar20 = IFileManager::Get();
        local_268 = local_4b0.Data.AllocatorInstance.Data;
        FVar33.Data = (FScriptContainerElement *)L"";
        if (local_300.Data.ArrayNum != 0) {
          FVar33.Data = local_300.Data.AllocatorInstance.Data;
        }
        uStack_260 = local_4b0.Data.ArrayNum - 1;
        if (local_4b0.Data.ArrayNum == 0) {
          uStack_260 = uVar28;
        }
        local_148._12_4_ = uStack_25c;
        local_148.Size = uStack_260;
        local_148.DataPtr = (wchar_t *)local_4b0.Data.AllocatorInstance.Data;
        FFileHelper::SaveStringToFile
                  (&local_148,(wchar_t *)FVar33.Data,ForceUTF8WithoutBOM,pIVar20,0);
        if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_300.Data.AllocatorInstance.Data);
        }
      }
      pFVar22 = ::operator_new(0xf0);
      if (pFVar22 != (FImageComparisonResult *)0x0) {
        pFVar23 = FImageComparisonResult::FImageComparisonResult(pFVar22,&local_478);
      }
      pTVar10 = local_4a0;
      local_4e8._0_8_ = pFVar23;
      TSharedPtr<FImageComparisonResult,1>::
      TSharedPtr<FImageComparisonResult,1><FImageComparisonResult>
                (local_4a0,(TRawPtrProxy<FImageComparisonResult> *)&local_4e8);
      if (local_4b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.Data.AllocatorInstance.Data);
      }
      DestructItems<TTuple<FString,FString>,int>
                ((TTuple<FString,FString> *)local_510.Data,(int)local_508);
      if ((TTuple<FString,FString> *)local_510.Data != (TTuple<FString,FString> *)0x0) {
        FMemory::Free(local_510.Data);
      }
      if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
      }
      FImageComparisonResult::~FImageComparisonResult(&local_478);
      if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
      }
      if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_488.Data.AllocatorInstance.Data);
      }
      return pTVar10;
    }
    bVar8 = FText::IsEmpty(&local_478.ErrorMessage);
    if (((!bVar8) || ((double)local_478.Tolerance.MaximumLocalError < local_478.MaxLocalDifference))
       || ((double)local_478.Tolerance.MaximumGlobalError < local_478.GlobalDifference))
    goto LAB_148c42e41;
    FImageComparisonResult::~FImageComparisonResult(&local_478);
    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
    }
    if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_488.Data.AllocatorInstance.Data);
    }
    TStack_2d8.UnvisitedBitMask = TStack_2d8.UnvisitedBitMask & ~TStack_2d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d8);
  } while( true );
}

// CompareScreenshot @ 148c43a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FImageComparisonResult * __thiscall
FScreenShotManager::CompareScreenshot
          (FScreenShotManager *this,FImageComparisonResult *__return_storage_ptr__,FString *param_1,
          FAutomationScreenshotMetadata *param_2,EScreenShotCompareOptions param_3)

{
  code *pcVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  FScreenShotManager *pFVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FImageComparisonResult *pFVar10;
  FDateTime FVar11;
  FString *pFVar12;
  FString *pFVar13;
  FString *pFVar14;
  IFileManager *pIVar15;
  FString *pFVar16;
  UPackage *pUVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  ForAnyElementType FVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  FString *pFVar26;
  undefined1 auStackY_ba8 [32];
  undefined1 local_b58;
  FImageComparer local_b57 [15];
  undefined8 local_b48;
  float fStack_b40;
  float fStack_b3c;
  FString local_b38;
  FImageComparisonResult *local_b28;
  FString local_b20;
  FString local_b10;
  FString *local_b00;
  int local_af8;
  FScreenShotManager *local_af0;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString *local_a68;
  FString local_a60;
  FString local_a50;
  FString local_a40;
  FString local_a30;
  FString local_a20;
  FString local_a10;
  FString local_a00;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  wchar_t *local_978;
  int local_970;
  FString local_968;
  FString local_958;
  FString local_948;
  FImageTolerance local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  FString local_8f8;
  FString local_8e8;
  FScriptContainerElement *local_8d8;
  int iStack_8d0;
  undefined4 uStack_8cc;
  TStringView<wchar_t> local_8c8;
  wchar_t *local_8b8;
  undefined4 local_8b0;
  TStringView<wchar_t> local_8a8;
  wchar_t *local_898;
  undefined4 local_890;
  TStringView<wchar_t> local_888;
  wchar_t *local_878;
  undefined4 local_870;
  TStringView<wchar_t> local_868;
  wchar_t *local_858;
  undefined4 local_850;
  TStringView<wchar_t> local_848;
  FScriptContainerElement *local_838;
  int local_830;
  TStringView<wchar_t> local_828;
  FScriptContainerElement *local_818;
  int local_810;
  TStringView<wchar_t> local_808;
  FScriptContainerElement *local_7f8;
  int local_7f0;
  TStringView<wchar_t> local_7e8;
  FScriptContainerElement *local_7d8;
  int local_7d0;
  TStringView<wchar_t> local_7c8;
  wchar_t *local_7b8;
  undefined4 local_7b0;
  FImageTolerance local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  TStringView<wchar_t> local_6d8;
  FString local_6c8;
  FAutomationScreenshotMetadata local_6b8;
  char local_578;
  FAutomationScreenshotMetadata local_568;
  char local_428;
  FAutomationScreenshotMetadata local_418;
  FAutomationScreenshotMetadata local_2d8;
  FImageComparisonResult local_198;
  TStringView<wchar_t> local_a8;
  FScriptContainerElement *local_98;
  int local_90;
  FScriptContainerElement *local_88;
  int local_80;
  FScriptContainerElement *local_78;
  int local_70;
  undefined *local_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_ba8;
  local_b48 = param_2;
  local_b28 = __return_storage_ptr__;
  local_af0 = this;
  local_a68 = param_1;
  (**(code **)(this->_padding_ + 0x20))(this,&local_978,param_2);
  GetPathComponentForTestImages(this,&local_a30,param_2,true);
  local_938._7_9_ = FImageTolerance::DefaultIgnoreLess._7_9_;
  local_938._0_6_ = FImageTolerance::DefaultIgnoreLess._0_6_;
  local_938.IgnoreAntiAliasing = true;
  pcVar1 = *(code **)(this->_padding_ + 0x28);
  ::FString::FString(&local_968,L"*.png");
  (*pcVar1)(this,&local_b00,param_2);
  if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_968.Data.AllocatorInstance.Data);
  }
  local_428 = '\0';
  FImageComparisonResult::FImageComparisonResult(__return_storage_ptr__);
  if (local_af8 < 1) {
    pFVar16 = &__return_storage_ptr__->IncomingFilePath;
    ::FString::operator=(pFVar16,param_1);
    FVar11 = FDateTime::UtcNow();
                    /* WARNING: Load size is inaccurate */
    (__return_storage_ptr__->CreationTime).Ticks = *FVar11.Ticks;
    if (4 < (byte)LogScreenShotManager._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
    }
  }
  else {
    local_578 = '\0';
    ::FString::FString(&local_958,".json");
    FPaths::ChangeExtension(&local_9e8,param_1,&local_958);
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
    local_a60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_9e8.Data.ArrayNum != 0) {
      FVar21.Data = local_9e8.Data.AllocatorInstance.Data;
    }
    local_a60.Data.ArrayNum = 0;
    local_a60.Data.ArrayMax = 0;
    bVar7 = FFileHelper::LoadFileToString(&local_a60,(wchar_t *)FVar21.Data,None,0);
    if (bVar7) {
      FAutomationScreenshotMetadata::FAutomationScreenshotMetadata(&local_2d8);
      bVar7 = FJsonObjectConverter::JsonObjectStringToUStruct<FAutomationScreenshotMetadata>
                        (&local_a60,&local_2d8,0,0,false,(FText *)0x0,
                         (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                          *)0x0);
      if (bVar7) {
        if (local_578 != '\0') {
          FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata(&local_6b8);
        }
        FAutomationScreenshotMetadata::FAutomationScreenshotMetadata(&local_6b8,&local_2d8);
        local_578 = '\x01';
      }
      FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata(&local_2d8);
    }
    if (local_a60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a60.Data.AllocatorInstance.Data);
    }
    if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
    }
    iVar23 = local_af8;
    local_a98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a98.Data.ArrayNum = 0;
    local_a98.Data.ArrayMax = 0;
    if (local_578 == '\0') {
      if ((local_af8 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar1 = (code *)swi(3);
        pFVar10 = (FImageComparisonResult *)(*pcVar1)();
        return pFVar10;
      }
      iVar23 = (local_b00->Data).ArrayNum;
      iVar25 = iVar23 + -1;
      if (iVar23 == 0) {
        iVar25 = 0;
      }
      ::FString::AssignRange(&local_a98,(wchar_t *)(local_b00->Data).AllocatorInstance.Data,iVar25);
    }
    else {
      iVar25 = -1;
      pFVar12 = local_b00 + local_af8;
      pFVar16 = local_b00;
      while( true ) {
        if (local_af8 != iVar23) {
          local_b58 = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_b58);
        }
        this = local_af0;
        __return_storage_ptr__ = local_b28;
        param_2 = local_b48;
        param_1 = local_a68;
        if (pFVar16 == pFVar12) break;
        local_b10.Data.ArrayNum = (pFVar16->Data).ArrayNum;
        lVar22 = (longlong)local_b10.Data.ArrayNum;
        local_b10.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        pFVar2 = (pFVar16->Data).AllocatorInstance.Data;
        if (local_b10.Data.ArrayNum == 0) {
          local_b10.Data.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_b10.Data.ArrayNum,0,(ForAnyElementType *)&local_b10,
                     local_b10.Data.ArrayNum,&local_b10.Data.ArrayMax);
          memcpy(local_b10.Data.AllocatorInstance.Data,pFVar2,lVar22 * 2);
        }
        ::FString::FString(&local_948,".json");
        FPaths::ChangeExtension(&local_a20,&local_b10,&local_948);
        if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_948.Data.AllocatorInstance.Data);
        }
        local_a78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar21.Data = (FScriptContainerElement *)L"";
        if (local_a20.Data.ArrayNum != 0) {
          FVar21.Data = local_a20.Data.AllocatorInstance.Data;
        }
        local_a78.Data.ArrayNum = 0;
        local_a78.Data.ArrayMax = 0;
        bVar7 = FFileHelper::LoadFileToString(&local_a78,(wchar_t *)FVar21.Data,None,0);
        if (bVar7) {
          FAutomationScreenshotMetadata::FAutomationScreenshotMetadata(&local_418);
          bVar7 = FJsonObjectConverter::JsonObjectStringToUStruct<FAutomationScreenshotMetadata>
                            (&local_a78,&local_418,0,0,false,(FText *)0x0,
                             (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                              *)0x0);
          if (bVar7) {
            if (local_af8 != 1) {
              if ((local_578 == '\0') &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsSet()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                     ,0x1bd,
                                     L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                    ), bVar7)) {
                pcVar1 = (code *)swi(3);
                pFVar10 = (FImageComparisonResult *)(*pcVar1)();
                return pFVar10;
              }
              bVar7 = Substrate::IsSubstrateEnabled();
              if ((!bVar7) && (local_418.bIsSubstrate != false)) goto LAB_148c43e58;
            }
            if ((local_578 == '\0') &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar7)) {
              pcVar1 = (code *)swi(3);
              pFVar10 = (FImageComparisonResult *)(*pcVar1)();
              return pFVar10;
            }
            iVar9 = FAutomationScreenshotMetadata::Compare(&local_418,&local_6b8);
            if (iVar25 < iVar9) {
              iVar25 = local_b10.Data.ArrayNum + -1;
              if (local_b10.Data.ArrayNum == 0) {
                iVar25 = 0;
              }
              ::FString::AssignRange
                        (&local_a98,(wchar_t *)local_b10.Data.AllocatorInstance.Data,iVar25);
              if (local_428 != '\0') {
                FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata(&local_568);
              }
              FAutomationScreenshotMetadata::FAutomationScreenshotMetadata(&local_568,&local_418);
              local_428 = '\x01';
              iVar25 = iVar9;
            }
          }
LAB_148c43e58:
          FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata(&local_418);
        }
        if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a78.Data.AllocatorInstance.Data);
        }
        if (local_a20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a20.Data.AllocatorInstance.Data);
        }
        if (local_b10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b10.Data.AllocatorInstance.Data);
        }
        pFVar16 = pFVar16 + 1;
      }
    }
    local_b48 = local_938._0_8_;
    fStack_b40 = local_938.MaximumLocalError;
    fStack_b3c = local_938.MaximumGlobalError;
    local_7a8._0_4_ = local_938._0_4_;
    local_7a8._4_4_ = local_938._4_4_;
    if ((local_578 != '\0') && (local_6b8.bHasComparisonRules != false)) {
      local_b48._1_1_ = local_6b8.ToleranceGreen;
      local_b48._0_1_ = local_6b8.ToleranceRed;
      local_b48._2_1_ = local_6b8.ToleranceBlue;
      local_b48._3_1_ = local_6b8.ToleranceAlpha;
      local_b48 = (FAutomationScreenshotMetadata *)
                  CONCAT17(local_6b8.bIgnoreColors,
                           CONCAT16(local_6b8.bIgnoreAntiAliasing,
                                    CONCAT15(local_6b8.ToleranceMaxBrightness,
                                             CONCAT14(local_6b8.ToleranceMinBrightness,
                                                      (undefined4)local_b48))));
      fStack_b40 = local_6b8.MaximumLocalError;
      fStack_b3c = local_6b8.MaximumGlobalError;
      local_7a8._0_4_ = (undefined4)local_b48;
      local_7a8._4_4_ = local_b48._4_4_;
    }
    local_7a8.MaximumLocalError = fStack_b40;
    local_7a8.MaximumGlobalError = fStack_b3c;
    pFVar10 = FImageComparer::Compare
                        (local_b57,&local_198,&local_a98,param_1,&local_7a8,
                         &this->ScreenshotTempDeltaFolder);
    FImageComparisonResult::operator=(__return_storage_ptr__,pFVar10);
    FImageComparisonResult::~FImageComparisonResult(&local_198);
    if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a98.Data.AllocatorInstance.Data);
    }
    if (local_578 != '\0') {
      FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata(&local_6b8);
    }
    pFVar16 = &__return_storage_ptr__->IncomingFilePath;
  }
  ::FString::operator=(&__return_storage_ptr__->SourcePlatform,&param_2->Platform);
  ::FString::operator=(&__return_storage_ptr__->SourceRHI,&param_2->Rhi);
  iVar23 = local_970 + -1;
  if (local_970 == 0) {
    iVar23 = 0;
  }
  ::FString::AssignRange(&__return_storage_ptr__->IdealApprovedFolderPath,local_978,iVar23);
  iVar23 = local_a30.Data.ArrayNum + -1;
  if (local_a30.Data.ArrayNum == 0) {
    iVar23 = 0;
  }
  ::FString::AssignRange
            (&__return_storage_ptr__->ScreenshotPath,
             (wchar_t *)local_a30.Data.AllocatorInstance.Data,iVar23);
  uVar3 = (param_2->Id).B;
  uVar4 = (param_2->Id).C;
  uVar5 = (param_2->Id).D;
  (__return_storage_ptr__->ComparisonId).A = (param_2->Id).A;
  (__return_storage_ptr__->ComparisonId).B = uVar3;
  (__return_storage_ptr__->ComparisonId).C = uVar4;
  (__return_storage_ptr__->ComparisonId).D = uVar5;
  pFVar12 = FPaths::ProjectDir(&local_798);
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  FPaths::MakePathRelativeTo(pFVar16,pwVar20);
  if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_798.Data.AllocatorInstance.Data);
  }
  pFVar12 = FPaths::ProjectDir(&local_788);
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
  FPaths::MakePathRelativeTo(&__return_storage_ptr__->IdealApprovedFolderPath,pwVar20);
  if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_788.Data.AllocatorInstance.Data);
  }
  pFVar12 = &__return_storage_ptr__->ApprovedFilePath;
  local_b48 = (FAutomationScreenshotMetadata *)pFVar12;
  if (1 < (__return_storage_ptr__->ApprovedFilePath).Data.ArrayNum) {
    pFVar13 = FPaths::ProjectDir(&local_778);
    if ((pFVar13->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
    }
    FPaths::MakePathRelativeTo(pFVar12,pwVar20);
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
  }
  if (1 < (__return_storage_ptr__->ComparisonFilePath).Data.ArrayNum) {
    pFVar12 = FPaths::ProjectDir(&local_768);
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    FPaths::MakePathRelativeTo(&__return_storage_ptr__->ComparisonFilePath,pwVar20);
    if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_768.Data.AllocatorInstance.Data);
    }
  }
  local_b20.Data.ArrayNum = (param_2->Rhi).Data.ArrayNum;
  lVar22 = (longlong)local_b20.Data.ArrayNum;
  pFVar2 = (param_2->Rhi).Data.AllocatorInstance.Data;
  local_b20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b20.Data.ArrayNum == 0) {
    local_b20.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_b20.Data.ArrayNum,0,(ForAnyElementType *)&local_b20,local_b20.Data.ArrayNum
               ,&local_b20.Data.ArrayMax);
    memcpy(local_b20.Data.AllocatorInstance.Data,pFVar2,lVar22 * 2);
  }
  iVar23 = 0;
  if (1 < local_b20.Data.ArrayNum) {
    ::FString::AppendChars(&local_b20,L"_",1);
  }
  iVar25 = (param_2->FeatureLevel).Data.ArrayNum;
  iVar24 = 0;
  iVar9 = iVar25 + -1;
  if (iVar25 == 0) {
    iVar9 = iVar24;
  }
  ::FString::AppendChars
            (&local_b20,(wchar_t *)(param_2->FeatureLevel).Data.AllocatorInstance.Data,iVar9);
  local_60 = 1;
  local_a8.DataPtr = (wchar_t *)(local_af0->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
  iVar25 = (local_af0->ScreenshotResultsFolder).Data.ArrayNum;
  local_a8.Size = iVar25 + -1;
  if (iVar25 == 0) {
    local_a8.Size = iVar24;
  }
  local_98 = local_a30.Data.AllocatorInstance.Data;
  local_88 = (param_2->Platform).Data.AllocatorInstance.Data;
  local_90 = local_a30.Data.ArrayNum + -1;
  if (local_a30.Data.ArrayNum == 0) {
    local_90 = iVar23;
  }
  iVar25 = (param_2->Platform).Data.ArrayNum;
  local_80 = iVar25 + -1;
  if (iVar25 == 0) {
    local_80 = iVar24;
  }
  local_78 = local_b20.Data.AllocatorInstance.Data;
  local_70 = local_b20.Data.ArrayNum + -1;
  if (local_b20.Data.ArrayNum == 0) {
    local_70 = iVar24;
  }
  local_68 = &u__;
  FPaths::CombineInternal(&local_b38,&local_a8,5);
  if (local_b20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b20.Data.AllocatorInstance.Data);
  }
  local_8a8.DataPtr = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
  local_890 = 0xc;
  local_8a8.Size = local_b38.Data.ArrayNum + -1;
  if (local_b38.Data.ArrayNum == 0) {
    local_8a8.Size = iVar23;
  }
  local_898 = L"Approved.png";
  FPaths::CombineInternal(&local_ac8,&local_8a8,2);
  pFVar12 = &__return_storage_ptr__->ReportApprovedFilePath;
  if (pFVar12 != &local_ac8) {
    pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar12->Data).AllocatorInstance.Data = local_ac8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->ReportApprovedFilePath).Data.ArrayNum = local_ac8.Data.ArrayNum;
    (__return_storage_ptr__->ReportApprovedFilePath).Data.ArrayMax = local_ac8.Data.ArrayMax;
    local_ac8.Data.ArrayNum = 0;
    local_ac8.Data.ArrayMax = 0;
    local_ac8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
  }
  local_888.DataPtr = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
  local_870 = 0xc;
  local_888.Size = local_b38.Data.ArrayNum + -1;
  if (local_b38.Data.ArrayNum == 0) {
    local_888.Size = iVar23;
  }
  local_878 = L"Incoming.png";
  FPaths::CombineInternal(&local_ab8,&local_888,2);
  pFVar13 = &__return_storage_ptr__->ReportIncomingFilePath;
  if (pFVar13 != &local_ab8) {
    pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar13->Data).AllocatorInstance.Data = local_ab8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->ReportIncomingFilePath).Data.ArrayNum = local_ab8.Data.ArrayNum;
    (__return_storage_ptr__->ReportIncomingFilePath).Data.ArrayMax = local_ab8.Data.ArrayMax;
    local_ab8.Data.ArrayNum = 0;
    local_ab8.Data.ArrayMax = 0;
    local_ab8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
  }
  local_868.DataPtr = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
  local_850 = 9;
  local_868.Size = local_b38.Data.ArrayNum + -1;
  if (local_b38.Data.ArrayNum == 0) {
    local_868.Size = iVar23;
  }
  local_858 = L"Delta.png";
  FPaths::CombineInternal(&local_aa8,&local_868,2);
  pFVar26 = &__return_storage_ptr__->ReportComparisonFilePath;
  if (pFVar26 != &local_aa8) {
    pFVar2 = (pFVar26->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar26->Data).AllocatorInstance.Data = local_aa8.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->ReportComparisonFilePath).Data.ArrayNum = local_aa8.Data.ArrayNum;
    (__return_storage_ptr__->ReportComparisonFilePath).Data.ArrayMax = local_aa8.Data.ArrayMax;
    local_aa8.Data.ArrayNum = 0;
    local_aa8.Data.ArrayMax = 0;
    local_aa8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
  }
  pFVar14 = FPaths::GetPath(&local_758,&local_b48->ScreenShotName);
  pFVar10 = local_b28;
  iVar23 = (pFVar14->Data).ArrayNum;
  iVar25 = (local_b28->IdealApprovedFolderPath).Data.ArrayNum;
  if (iVar23 == iVar25) {
    if (iVar23 < 2) {
      bVar7 = true;
    }
    else {
      iVar23 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(pFVar14->Data).AllocatorInstance.Data,
                          (wchar_t *)
                          (local_b28->IdealApprovedFolderPath).Data.AllocatorInstance.Data);
      bVar7 = iVar23 == 0;
    }
  }
  else {
    bVar7 = iVar25 + iVar23 == 1;
  }
  if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_758.Data.AllocatorInstance.Data);
  }
  if ((!bVar7) && (1 < (pFVar10->ApprovedFilePath).Data.ArrayNum)) {
    if (local_428 == '\0') {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NearestExistingApprovedImageMetadata.IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ScreenShotManager.cpp"
                         ,0x1b2,L"");
      if (bVar7) {
        pcVar1 = (code *)swi(3);
        pFVar10 = (FImageComparisonResult *)(*pcVar1)();
        return pFVar10;
      }
      if ((local_428 == '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar1 = (code *)swi(3);
        pFVar10 = (FImageComparisonResult *)(*pcVar1)();
        return pFVar10;
      }
    }
    pFVar14 = GetPathComponentForPlatformAndRHI(local_af0,&local_738,&local_568);
    ::FString::Replace(pFVar14,&local_748,L"/",L"_",IgnoreCase);
    ::FString::PrintfImpl(&local_9d8,L"Approved_%s.png");
    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_748.Data.AllocatorInstance.Data);
    }
    if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.Data.AllocatorInstance.Data);
    }
    local_848.DataPtr = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
    local_848.Size = local_b38.Data.ArrayNum + -1;
    if (local_b38.Data.ArrayNum == 0) {
      local_848.Size = 0;
    }
    local_838 = local_9d8.Data.AllocatorInstance.Data;
    local_830 = local_9d8.Data.ArrayNum + -1;
    if (local_9d8.Data.ArrayNum == 0) {
      local_830 = 0;
    }
    FPaths::CombineInternal(&local_ae8,&local_848,2);
    if (pFVar12 != &local_ae8) {
      pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar12->Data).AllocatorInstance.Data = local_ae8.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->ReportApprovedFilePath).Data.ArrayNum = local_ae8.Data.ArrayNum;
      (__return_storage_ptr__->ReportApprovedFilePath).Data.ArrayMax = local_ae8.Data.ArrayMax;
      local_ae8.Data.ArrayNum = 0;
      local_ae8.Data.ArrayMax = 0;
      local_ae8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
    }
    if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
    }
  }
  bVar7 = FPaths::IsProjectFilePathSet();
  if (bVar7) {
    pFVar14 = FPaths::GetProjectFilePath(&local_728);
    FPaths::GetPath(&local_ad8,pFVar14);
  }
  else {
    pFVar14 = FPaths::ProjectDir(&local_718);
    FPaths::GetPath(&local_ad8,pFVar14);
    local_728.Data.AllocatorInstance.Data = local_718.Data.AllocatorInstance.Data;
  }
  if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Data.AllocatorInstance.Data);
  }
  local_828.DataPtr = (wchar_t *)local_ad8.Data.AllocatorInstance.Data;
  local_818 = (pFVar16->Data).AllocatorInstance.Data;
  local_828.Size = local_ad8.Data.ArrayNum + -1;
  if (local_ad8.Data.ArrayNum == 0) {
    local_828.Size = 0;
  }
  iVar23 = (pFVar16->Data).ArrayNum;
  local_810 = iVar23 + -1;
  if (iVar23 == 0) {
    local_810 = 0;
  }
  FPaths::CombineInternal(&local_9c8,&local_828,2);
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_9c8.Data.ArrayNum != 0) {
    FVar21.Data = local_9c8.Data.AllocatorInstance.Data;
  }
  ::FString::FString(&local_a10,(wchar_t *)FVar21.Data);
  if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
  }
  pIVar15 = IFileManager::Get();
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_a10.Data.ArrayNum != 0) {
    FVar21.Data = local_a10.Data.AllocatorInstance.Data;
  }
  if ((__return_storage_ptr__->ReportIncomingFilePath).Data.ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
  }
  iVar23 = (**(code **)((longlong)*pIVar15 + 0x40))(pIVar15,pwVar20,FVar21.Data);
  if (iVar23 == 0) {
    pIVar15 = IFileManager::Get();
    pcVar1 = *(code **)((longlong)*pIVar15 + 0x40);
    ::FString::FString(&local_918,".json");
    pFVar16 = FPaths::ChangeExtension(&local_6c8,&local_a10,&local_918);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    ::FString::FString(&local_928,".json");
    pFVar16 = FPaths::ChangeExtension(&local_708,pFVar13,&local_928);
    if ((pFVar16->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
    }
    (*pcVar1)(pIVar15,pwVar19,pwVar20);
    if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_708.Data.AllocatorInstance.Data);
    }
    if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_928.Data.AllocatorInstance.Data);
    }
    if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
    }
    if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_918.Data.AllocatorInstance.Data);
    }
  }
  else if (1 < (byte)LogScreenShotManager._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
  }
  if (local_a10.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a10.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_908,L".rdc");
  FPaths::ChangeExtension(&local_a40,local_a68,&local_908);
  if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.Data.AllocatorInstance.Data);
  }
  pIVar15 = IFileManager::Get();
  FVar21.Data = (FScriptContainerElement *)L"";
  if (local_a40.Data.ArrayNum != 0) {
    FVar21.Data = local_a40.Data.AllocatorInstance.Data;
  }
  cVar8 = (**(code **)((longlong)*pIVar15 + 0x50))(pIVar15,FVar21.Data);
  if (cVar8 != '\0') {
    pIVar15 = IFileManager::Get();
    local_8b0 = 0xc;
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_a40.Data.ArrayNum != 0) {
      FVar21.Data = local_a40.Data.AllocatorInstance.Data;
    }
    pcVar1 = *(code **)((longlong)*pIVar15 + 0x48);
    local_8c8.DataPtr = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
    local_8c8.Size = local_b38.Data.ArrayNum + -1;
    if (local_b38.Data.ArrayNum == 0) {
      local_8c8.Size = 0;
    }
    local_8b8 = L"Incoming.rdc";
    FPaths::CombineInternal(&local_9b8,&local_8c8,2);
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_9b8.Data.ArrayNum != 0) {
      FVar18.Data = local_9b8.Data.AllocatorInstance.Data;
    }
    (*pcVar1)(pIVar15,FVar18.Data,FVar21.Data);
    if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
    }
  }
  pFVar10 = local_b28;
  iVar25 = (local_b28->ComparisonFilePath).Data.ArrayNum;
  iVar23 = iVar25 + -1;
  iVar9 = iVar23;
  if (iVar25 == 0) {
    iVar9 = 0;
  }
  if (iVar9 != 0) {
    local_808.DataPtr = (wchar_t *)local_ad8.Data.AllocatorInstance.Data;
    local_7f8 = (local_b28->ComparisonFilePath).Data.AllocatorInstance.Data;
    local_808.Size = local_ad8.Data.ArrayNum + -1;
    if (local_ad8.Data.ArrayNum == 0) {
      local_808.Size = 0;
    }
    if (iVar25 == 0) {
      iVar23 = 0;
    }
    local_7f0 = iVar23;
    FPaths::CombineInternal(&local_9a8,&local_808,2);
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_9a8.Data.ArrayNum != 0) {
      FVar21.Data = local_9a8.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_998,(wchar_t *)FVar21.Data);
    if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
    }
    pIVar15 = IFileManager::Get();
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_998.Data.ArrayNum != 0) {
      FVar21.Data = local_998.Data.AllocatorInstance.Data;
    }
    if ((__return_storage_ptr__->ReportComparisonFilePath).Data.ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar26->Data).AllocatorInstance.Data;
    }
    iVar23 = (**(code **)((longlong)*pIVar15 + 0x40))(pIVar15,pwVar20,FVar21.Data);
    if ((iVar23 != 0) && (1 < (byte)LogScreenShotManager._0_1_)) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
    }
    if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_998.Data.AllocatorInstance.Data);
    }
  }
  iVar25 = (pFVar10->ApprovedFilePath).Data.ArrayNum;
  iVar23 = iVar25 + -1;
  iVar9 = iVar23;
  if (iVar25 == 0) {
    iVar9 = 0;
  }
  if (iVar9 != 0) {
    local_7e8.DataPtr = (wchar_t *)local_ad8.Data.AllocatorInstance.Data;
    local_7d8 = (pFVar10->ApprovedFilePath).Data.AllocatorInstance.Data;
    local_7e8.Size = local_ad8.Data.ArrayNum + -1;
    if (local_ad8.Data.ArrayNum == 0) {
      local_7e8.Size = 0;
    }
    if (iVar25 == 0) {
      iVar23 = 0;
    }
    local_7d0 = iVar23;
    FPaths::CombineInternal(&local_988,&local_7e8,2);
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_988.Data.ArrayNum != 0) {
      FVar21.Data = local_988.Data.AllocatorInstance.Data;
    }
    ::FString::FString(&local_a00,(wchar_t *)FVar21.Data);
    if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_988.Data.AllocatorInstance.Data);
    }
    pIVar15 = IFileManager::Get();
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_a00.Data.ArrayNum != 0) {
      FVar21.Data = local_a00.Data.AllocatorInstance.Data;
    }
    if ((__return_storage_ptr__->ReportApprovedFilePath).Data.ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    iVar23 = (**(code **)((longlong)*pIVar15 + 0x40))(pIVar15,pwVar20,FVar21.Data);
    if (iVar23 == 0) {
      pIVar15 = IFileManager::Get();
      pcVar1 = *(code **)((longlong)*pIVar15 + 0x40);
      ::FString::FString(&local_8e8,".json");
      pFVar16 = FPaths::ChangeExtension(&local_6e8,&local_a00,&local_8e8);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      ::FString::FString(&local_8f8,".json");
      pFVar16 = FPaths::ChangeExtension(&local_6f8,pFVar12,&local_8f8);
      if ((pFVar16->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar16->Data).AllocatorInstance.Data;
      }
      (*pcVar1)(pIVar15,pwVar19,pwVar20);
      if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
      }
      if (local_8f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8f8.Data.AllocatorInstance.Data);
      }
      if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
      }
      pFVar10 = local_b28;
      if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
        pFVar10 = local_b28;
      }
    }
    else if (1 < (byte)LogScreenShotManager._0_1_) {
      UE::Logging::Private::BasicLog<2>
                ((FStaticBasicLogRecord *)&PTR_u_Failed_to_copy__151c928b8,
                 (FLogCategoryBase *)&LogScreenShotManager);
    }
    if (local_a00.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a00.Data.AllocatorInstance.Data);
    }
  }
  pFVar6 = local_af0;
  if ((local_af0->ScreenshotResultsFolder).Data.ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(local_af0->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
  }
  FPaths::MakePathRelativeTo(pFVar12,pwVar20);
  if ((pFVar6->ScreenshotResultsFolder).Data.ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar6->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
  }
  FPaths::MakePathRelativeTo(pFVar13,pwVar20);
  if ((pFVar6->ScreenshotResultsFolder).Data.ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar6->ScreenshotResultsFolder).Data.AllocatorInstance.Data;
  }
  FPaths::MakePathRelativeTo(pFVar26,pwVar20);
  local_a88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a88.Data.ArrayNum = 0;
  local_a88.Data.ArrayMax = 0;
  if (Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar17 = Z_Construct_UPackage__Script_ScreenShotComparisonTools();
    Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FImageComparisonResult,(UObject *)pUVar17,
                         L"ImageComparisonResult");
  }
  bVar7 = FJsonObjectConverter::UStructToJsonObjectString
                    ((UStruct *)
                     Z_Registration_Info_UScriptStruct_FImageComparisonResult.OuterSingleton,pFVar10
                     ,&local_a88,0,0,0,
                     (TDelegate<TSharedPtr<FJsonValue,1>___cdecl(FProperty_*,void_const_*),FDefaultDelegateUserPolicy>
                      *)0x0,true);
  if (bVar7) {
    local_7c8.DataPtr = (wchar_t *)local_b38.Data.AllocatorInstance.Data;
    local_7b0 = 0xb;
    local_7c8.Size = local_b38.Data.ArrayNum + -1;
    if (local_b38.Data.ArrayNum == 0) {
      local_7c8.Size = 0;
    }
    local_7b8 = L"Report.json";
    FPaths::CombineInternal(&local_a50,&local_7c8,2);
    pIVar15 = IFileManager::Get();
    local_8d8 = local_a88.Data.AllocatorInstance.Data;
    FVar21.Data = (FScriptContainerElement *)L"";
    if (local_a50.Data.ArrayNum != 0) {
      FVar21.Data = local_a50.Data.AllocatorInstance.Data;
    }
    iStack_8d0 = local_a88.Data.ArrayNum + -1;
    if (local_a88.Data.ArrayNum == 0) {
      iStack_8d0 = 0;
    }
    local_6d8._12_4_ = uStack_8cc;
    local_6d8.Size = iStack_8d0;
    local_6d8.DataPtr = (wchar_t *)local_a88.Data.AllocatorInstance.Data;
    FFileHelper::SaveStringToFile(&local_6d8,(wchar_t *)FVar21.Data,ForceUTF8WithoutBOM,pIVar15,0);
    if (4 < (byte)LogScreenShotManager._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
    }
    if (local_a50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a50.Data.AllocatorInstance.Data);
    }
  }
  if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.Data.AllocatorInstance.Data);
  }
  if (local_a40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a40.Data.AllocatorInstance.Data);
  }
  if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
  }
  if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b38.Data.AllocatorInstance.Data);
  }
  if (local_428 != '\0') {
    FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata(&local_568);
  }
  DestructItems<FString,int>(local_b00,local_af8);
  if (local_b00 != (FString *)0x0) {
    FMemory::Free(local_b00);
  }
  if (local_a30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a30.Data.AllocatorInstance.Data);
  }
  if (local_978 != (wchar_t *)0x0) {
    FMemory::Free(local_978);
  }
  return pFVar10;
}

// CompareScreenshotAsync @ 148c44fe0

TFuture<FImageComparisonResult> * __thiscall
FScreenShotManager::CompareScreenshotAsync
          (FScreenShotManager *this,TFuture<FImageComparisonResult> *__return_storage_ptr__,
          FString *param_1,FAutomationScreenshotMetadata *param_2,EScreenShotCompareOptions param_3)

{
  TUniqueFunction<void___cdecl(void)> local_198;
  <lambda_1> local_168;
  
  local_198._0_8_ = 0;
  local_198._40_8_ = 0;
  local_168.__this = this;
  ::FString::FString(&local_168.IncomingPath,param_1);
  FAutomationScreenshotMetadata::FAutomationScreenshotMetadata(&local_168.MetaData,param_2);
  local_168.Options = param_3;
  Async<_FScreenShotManager::CompareScreenshotAsync_::__l2::<lambda_1>_>
            (__return_storage_ptr__,Thread,&local_168,&local_198);
  FAutomationScreenshotMetadata::~FAutomationScreenshotMetadata(&local_168.MetaData);
  if (local_168.IncomingPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.IncomingPath.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// CopyDirectory @ 148c46550

void __thiscall
FScreenShotManager::CopyDirectory
          (FScreenShotManager *this,FString *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  IFileManager *pIVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  <lambda_1> local_res10 [8];
  uint in_stack_ffffffffffffff60;
  ulonglong in_stack_ffffffffffffff68;
  FString *local_88;
  undefined8 local_80;
  FString local_78;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FString ***local_50;
  FString **local_48;
  FString *local_40;
  FString *local_38;
  
  local_88 = (FString *)0x0;
  local_80 = 0;
  FPaths::ConvertRelativePathToFull(&local_78,param_2);
  iVar1 = param_3->ArrayNum;
  pFVar3 = (param_3->AllocatorInstance).Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if (param_3->ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar3 == pFVar4) break;
    pIVar2 = IFileManager::Get();
    if (*(int *)(pFVar3 + 8) == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = *(wchar_t **)pFVar3;
    }
    in_stack_ffffffffffffff68 = in_stack_ffffffffffffff68 & 0xffffffffffffff00;
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_78.Data.ArrayNum != 0) {
      FVar5.Data = local_78.Data.AllocatorInstance.Data;
    }
    in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffff00;
    (**(code **)((longlong)*pIVar2 + 0x88))
              (pIVar2,&local_88,FVar5.Data,pwVar6,1,in_stack_ffffffffffffff60,
               in_stack_ffffffffffffff68);
    pFVar3 = pFVar3 + 0x10;
  }
  local_48 = &local_88;
  local_38 = &local_78;
  local_68.DataPtr = (void **)0x0;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FScreenShotManager::CopyDirectory'::__l2::<lambda_1>,void,int>::
             Call;
  local_50 = &local_48;
  local_68.ArrayNum = 0;
  local_40 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(int)local_80,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
             local_res10[0],None,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_88,(int)local_80);
  if (local_88 != (FString *)0x0) {
    FMemory::Free(local_88);
  }
  DestructItems<FString,int>((FString *)(param_3->AllocatorInstance).Data,param_3->ArrayNum);
  pFVar3 = (param_3->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// ExportScreenshotComparisonResult @ 148c47150

/* WARNING: Removing unreachable block (ram,0x000148c47505) */
/* WARNING: Removing unreachable block (ram,0x000148c4741e) */
/* WARNING: Removing unreachable block (ram,0x000148c476ce) */

FScreenshotExportResult * __thiscall
FScreenShotManager::ExportScreenshotComparisonResult
          (FScreenShotManager *this,FScreenshotExportResult *__return_storage_ptr__,FString *param_1
          ,FString *param_2,bool param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  IFileManager *pIVar8;
  FScreenshotExportResult *pFVar9;
  ulonglong uVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  wchar_t *pwVar16;
  <lambda_1> local_res10 [8];
  ForAnyElementType in_stack_fffffffffffffea0;
  int *in_stack_fffffffffffffea8;
  ForAnyElementType local_138;
  undefined8 local_130;
  FString local_128;
  ForAnyElementType local_118;
  uint local_110;
  int local_10c;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString *local_b8;
  undefined8 local_b0;
  FString local_a8;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  FString ***local_80;
  FString **local_78;
  FString *local_70;
  FString *local_68;
  TStringView<wchar_t> local_60;
  wchar_t *local_50;
  undefined4 local_48;
  FString local_40;
  
  FPaths::NormalizeDirectoryName(param_2);
  if ((param_2->Data).ArrayNum < 2) {
    pFVar7 = FPaths::ProjectSavedDir();
    local_48 = 0x15;
    local_60.DataPtr = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    iVar6 = (pFVar7->Data).ArrayNum;
    local_60.Size = iVar6 + -1;
    if (iVar6 == 0) {
      local_60.Size = 0;
    }
    local_50 = L"Exported/imageCompare";
    FPaths::CombineInternal(&local_c8,&local_60,2);
    if (param_2 != &local_c8) {
      pFVar12 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar12 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar12);
      }
      (param_2->Data).AllocatorInstance.Data = local_c8.Data.AllocatorInstance.Data;
      (param_2->Data).ArrayNum = local_c8.Data.ArrayNum;
      (param_2->Data).ArrayMax = local_c8.Data.ArrayMax;
      local_c8.Data.ArrayNum = 0;
      local_c8.Data.ArrayMax = 0;
      local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  (__return_storage_ptr__->ExportPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ExportPath).Data.ArrayNum = 0;
  (__return_storage_ptr__->ExportPath).Data.ArrayMax = 0;
  __return_storage_ptr__->Success = false;
  piVar11 = &(param_2->Data).ArrayNum;
  iVar6 = *piVar11;
  iVar5 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar5 = 0;
  }
  ::FString::AssignRange
            (&__return_storage_ptr__->ExportPath,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
             iVar5);
  iVar5 = (param_1->Data).ArrayNum;
  iVar1 = *piVar11;
  iVar6 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar6 = 0;
  }
  iVar5 = iVar6 + 1;
  local_128.Data.ArrayNum = iVar1;
  if ((iVar1 == 0) && (iVar5 != 0)) {
    pFVar12 = (param_2->Data).AllocatorInstance.Data;
    iVar5 = iVar6 + 2;
LAB_148c4728e:
    local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar5 == 0) {
      local_128.Data.ArrayMax = 0;
      goto LAB_148c472e3;
    }
  }
  else {
    pFVar12 = (param_2->Data).AllocatorInstance.Data;
    if (iVar1 == 0) goto LAB_148c4728e;
  }
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar14 = iVar1 + iVar5;
  if ((int)uVar14 < iVar1) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  in_stack_fffffffffffffea8 = &local_128.Data.ArrayMax;
  in_stack_fffffffffffffea0.Data =
       (FScriptContainerElement *)
       CONCAT44((int)((ulonglong)in_stack_fffffffffffffea0.Data >> 0x20),iVar1);
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar14,0,(ForAnyElementType *)&local_128,iVar1,in_stack_fffffffffffffea8);
  if (iVar1 != 0) {
    memcpy(local_128.Data.AllocatorInstance.Data,pFVar12,(longlong)iVar1 * 2);
  }
LAB_148c472e3:
  ::FString::PathAppend(&local_128,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar6);
  pIVar8 = IFileManager::Get();
  FVar13.Data = (FScriptContainerElement *)L"";
  if (local_128.Data.ArrayNum != 0) {
    FVar13.Data = local_128.Data.AllocatorInstance.Data;
  }
  cVar3 = (**(code **)((longlong)*pIVar8 + 0x60))(pIVar8,FVar13.Data,1);
  if (cVar3 != '\0') {
    local_138.Data = (FScriptContainerElement *)0x0;
    local_130 = 0;
    if (param_3) {
      ::FString::FString(&local_108,L"Incoming.*");
      if (local_138.Data <= (FScriptContainerElement *)&local_108) {
        piVar11 = (int *)(longlong)local_130._4_4_;
        if (((FScriptContainerElement *)&local_108 < local_138.Data + (longlong)piVar11 * 0x10) &&
           (in_stack_fffffffffffffea0.Data = local_138.Data,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), in_stack_fffffffffffffea8 = piVar11, bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FScreenshotExportResult *)(*pcVar2)();
          return pFVar9;
        }
      }
      iVar6 = (uint)local_130;
      if ((uint)local_130 == local_130._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_138,(int *)((longlong)&local_130 + 4));
      }
      pFVar12 = local_138.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar12 = 0;
      *(FScriptContainerElement **)pFVar12 = local_108.Data.AllocatorInstance.Data;
      *(int *)(pFVar12 + 8) = local_108.Data.ArrayNum;
      *(int *)(pFVar12 + 0xc) = local_108.Data.ArrayMax;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130._0_4_ = iVar6 + 1;
      ::FString::FString(&local_f8,L"Delta.png");
      if (((local_138.Data <= (FScriptContainerElement *)&local_f8) &&
          (piVar11 = (int *)(longlong)local_130._4_4_,
          (FScriptContainerElement *)&local_f8 < local_138.Data + (longlong)piVar11 * 0x10)) &&
         (in_stack_fffffffffffffea0.Data = local_138.Data,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), in_stack_fffffffffffffea8 = piVar11, bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FScreenshotExportResult *)(*pcVar2)();
        return pFVar9;
      }
      if ((uint)local_130 == local_130._4_4_) {
        local_130._0_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_138,(int *)((longlong)&local_130 + 4));
      }
      pFVar12 = local_138.Data + (longlong)(int)(uint)local_130 * 0x10;
      *(undefined8 *)pFVar12 = 0;
      *(FScriptContainerElement **)pFVar12 = local_f8.Data.AllocatorInstance.Data;
      *(int *)(pFVar12 + 8) = local_f8.Data.ArrayNum;
      *(int *)(pFVar12 + 0xc) = local_f8.Data.ArrayMax;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130._0_4_ = (uint)local_130 + 1;
      ::FString::FString(&local_e8,L"Report.json");
      if (((local_138.Data <= (FScriptContainerElement *)&local_e8) &&
          (piVar11 = (int *)(longlong)local_130._4_4_,
          (FScriptContainerElement *)&local_e8 < local_138.Data + (longlong)piVar11 * 0x10)) &&
         (in_stack_fffffffffffffea0.Data = local_138.Data,
         bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), in_stack_fffffffffffffea8 = piVar11, bVar4)) {
        pcVar2 = (code *)swi(3);
        pFVar9 = (FScreenshotExportResult *)(*pcVar2)();
        return pFVar9;
      }
      iVar6 = (uint)local_130;
      if ((uint)local_130 == local_130._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_138,(int *)((longlong)&local_130 + 4));
      }
      local_130 = CONCAT44(local_130._4_4_,iVar6 + 1);
      pFVar12 = local_138.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar12 = 0;
      *(FScriptContainerElement **)pFVar12 = local_e8.Data.AllocatorInstance.Data;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 8) = local_e8.Data.ArrayNum;
      *(int *)(pFVar12 + 0xc) = local_e8.Data.ArrayMax;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
    }
    else {
      ::FString::FString(&local_d8,L"*");
      if (local_138.Data <= (FScriptContainerElement *)&local_d8) {
        piVar11 = (int *)(longlong)local_130._4_4_;
        if (((FScriptContainerElement *)&local_d8 < local_138.Data + (longlong)piVar11 * 0x10) &&
           (in_stack_fffffffffffffea0.Data = local_138.Data,
           bVar4 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), in_stack_fffffffffffffea8 = piVar11, bVar4)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FScreenshotExportResult *)(*pcVar2)();
          return pFVar9;
        }
      }
      iVar6 = (uint)local_130;
      if ((uint)local_130 == local_130._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_138,(int *)((longlong)&local_130 + 4));
      }
      local_130 = CONCAT44(local_130._4_4_,iVar6 + 1);
      pFVar12 = local_138.Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar12 = 0;
      *(FScriptContainerElement **)pFVar12 = local_d8.Data.AllocatorInstance.Data;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar12 + 8) = local_d8.Data.ArrayNum;
      *(int *)(pFVar12 + 0xc) = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
    }
    FVar13.Data = local_138.Data;
    uVar14 = (uint)local_130;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = (uint)local_130;
    if ((uint)local_130 == 0) {
      local_10c = 0;
    }
    else {
      in_stack_fffffffffffffea8 = &local_10c;
      in_stack_fffffffffffffea0.Data =
           (FScriptContainerElement *)
           CONCAT44((int)((ulonglong)in_stack_fffffffffffffea0.Data >> 0x20),(uint)local_130);
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(uint)local_130,0,&local_118,(uint)local_130,in_stack_fffffffffffffea8);
      ConstructItems<FString,FString,int>(local_118.Data,(FString *)FVar13.Data,uVar14);
    }
    pFVar7 = ::operator/(&local_40,&this->ScreenshotResultsFolder,param_1);
    local_b8 = (FString *)0x0;
    local_b0 = 0;
    FPaths::ConvertRelativePathToFull(&local_a8,pFVar7);
    uVar14 = local_110;
    uVar10 = (ulonglong)(int)local_110;
    pFVar12 = local_118.Data + uVar10 * 0x10;
    FVar13.Data = local_118.Data;
    while( true ) {
      if ((uint)uVar10 != uVar14) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (FVar13.Data == pFVar12) break;
      pIVar8 = IFileManager::Get();
      if (*(int *)(FVar13.Data + 8) == 0) {
        pwVar16 = L"";
      }
      else {
        pwVar16 = *(wchar_t **)FVar13.Data;
      }
      in_stack_fffffffffffffea8 = (int *)((ulonglong)in_stack_fffffffffffffea8 & 0xffffffffffffff00)
      ;
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_a8.Data.ArrayNum != 0) {
        FVar15.Data = local_a8.Data.AllocatorInstance.Data;
      }
      in_stack_fffffffffffffea0.Data = in_stack_fffffffffffffea0.Data & 0xffffffffffffff00;
      (**(code **)((longlong)*pIVar8 + 0x88))
                (pIVar8,&local_b8,FVar15.Data,pwVar16,1,in_stack_fffffffffffffea0.Data,
                 in_stack_fffffffffffffea8);
      uVar10 = (ulonglong)local_110;
      FVar13.Data = FVar13.Data + 0x10;
    }
    local_78 = &local_b8;
    local_70 = &local_128;
    local_68 = &local_a8;
    local_98.DataPtr = (void **)0x0;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FScreenShotManager::CopyDirectory'::__l2::<lambda_1>,void,int>::
               Call;
    local_80 = &local_78;
    local_98.ArrayNum = 0;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(int)local_b0,1,(TFunctionRef<void___cdecl(int)> *)&local_88,
               local_res10[0],None,&local_98);
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    DestructItems<FString,int>(local_b8,(int)local_b0);
    if (local_b8 != (FString *)0x0) {
      FMemory::Free(local_b8);
    }
    DestructItems<FString,int>((FString *)local_118.Data,local_110);
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    __return_storage_ptr__->Success = true;
    DestructItems<FString,int>((FString *)local_138.Data,(uint)local_130);
    if (local_138.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.Data);
    }
  }
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pFVar12 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  pFVar12 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar12 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar12);
  }
  return __return_storage_ptr__;
}

// FindApprovedFiles @ 148c47910

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
FScreenShotManager::FindApprovedFiles
          (FScreenShotManager *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FAutomationScreenshotMetadata *param_1,FString *param_2)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType *pFVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  IFileManager *pIVar7;
  FString *pFVar8;
  ulonglong uVar9;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  undefined1 local_res8 [8];
  ulonglong in_stack_fffffffffffffdc0;
  FString local_228;
  FString local_218;
  TArray<FString,TSizedDefaultAllocator<32>_> local_208;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1f8;
  ForAnyElementType local_1e8;
  undefined8 local_1e0;
  ForAnyElementType local_1d8;
  int local_1d0;
  int local_1cc;
  ForAnyElementType *local_1c8;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  void *local_180 [3];
  FAutomationScreenshotMetadata local_168;
  
  local_1c8 = &local_1e8;
  local_1e8.Data = (FScriptContainerElement *)0x0;
  local_1e0 = 0;
  ::FString::FString(&local_1c0,param_2);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  GetApprovedFolderForImageWithOptions
            (this,&local_228,param_1,this->bUseConfidentialPlatformPaths != false);
  pIVar7 = IFileManager::Get();
  FVar12.Data = (FScriptContainerElement *)L"";
  if (local_1c0.Data.ArrayNum != 0) {
    FVar12.Data = local_1c0.Data.AllocatorInstance.Data;
  }
  in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
  FVar15.Data = (FScriptContainerElement *)L"";
  if (local_228.Data.ArrayNum != 0) {
    FVar15.Data = local_228.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar7 + 0x88))
            (pIVar7,__return_storage_ptr__,FVar15.Data,FVar12.Data,1,in_stack_fffffffffffffdc0,1);
  pFVar3 = local_1c8;
  piVar1 = (int *)((longlong)&local_1c8[1].Data + 4);
  iVar5 = *(int *)&local_1c8[1].Data;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,local_1c8,piVar1);
    *(int *)&pFVar3[1].Data = iVar5;
  }
  *(int *)&pFVar3[1].Data = iVar5 + 1;
  FVar12.Data = local_228.Data.AllocatorInstance.Data;
  pFVar11 = pFVar3->Data + (longlong)iVar5 * 0x10;
  *(FScriptContainerElement **)pFVar11 = (FScriptContainerElement *)0x0;
  lVar14 = (longlong)local_228.Data.ArrayNum;
  *(int *)(pFVar11 + 8) = local_228.Data.ArrayNum;
  if (local_228.Data.ArrayNum == 0) {
    *(int *)(pFVar11 + 0xc) = 0;
  }
  else {
    in_stack_fffffffffffffdc0 =
         CONCAT44((int)(in_stack_fffffffffffffdc0 >> 0x20),local_228.Data.ArrayNum);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_228.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,local_228.Data.ArrayNum,
               (int *)(pFVar11 + 0xc));
                    /* WARNING: Load size is inaccurate */
    memcpy(*pFVar11,FVar12.Data,lVar14 * 2);
  }
  FVar12.Data = local_228.Data.AllocatorInstance.Data;
  lVar14 = (longlong)local_228.Data.ArrayNum;
  local_1d8.Data = (FScriptContainerElement *)0x0;
  local_1d0 = local_228.Data.ArrayNum;
  if (local_228.Data.ArrayNum == 0) {
    local_1cc = 0;
  }
  else {
    in_stack_fffffffffffffdc0 =
         CONCAT44((int)(in_stack_fffffffffffffdc0 >> 0x20),local_228.Data.ArrayNum);
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_228.Data.ArrayNum,0,&local_1d8,local_228.Data.ArrayNum,&local_1cc);
    memcpy(local_1d8.Data,FVar12.Data,lVar14 * 2);
  }
  if (__return_storage_ptr__->ArrayNum == 0) {
    if (this->bUseConfidentialPlatformPaths != false) {
      pFVar8 = GetApprovedFolderForImageWithOptions(this,&local_1a0,param_1,None);
      pFVar8 = FPaths::GetPath(&local_1b0,pFVar8);
      if (&local_228 != pFVar8) {
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        local_228.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_228.Data.ArrayNum = (pFVar8->Data).ArrayNum;
        local_228.Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_1b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b0.Data.AllocatorInstance.Data);
      }
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      pIVar7 = IFileManager::Get();
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_1c0.Data.ArrayNum != 0) {
        FVar12.Data = local_1c0.Data.AllocatorInstance.Data;
      }
      in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_228.Data.ArrayNum != 0) {
        FVar15.Data = local_228.Data.AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar7 + 0x88))
                (pIVar7,__return_storage_ptr__,FVar15.Data,FVar12.Data,1,in_stack_fffffffffffffdc0,1
                );
      pFVar3 = local_1c8;
      piVar1 = (int *)((longlong)&local_1c8[1].Data + 4);
      iVar5 = *(int *)&local_1c8[1].Data;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,local_1c8,piVar1);
        *(int *)&pFVar3[1].Data = iVar5;
      }
      FVar12.Data = local_228.Data.AllocatorInstance.Data;
      *(int *)&pFVar3[1].Data = iVar5 + 1;
      pFVar11 = pFVar3->Data + (longlong)iVar5 * 0x10;
      *(FScriptContainerElement **)pFVar11 = (FScriptContainerElement *)0x0;
      lVar14 = (longlong)local_228.Data.ArrayNum;
      *(int *)(pFVar11 + 8) = local_228.Data.ArrayNum;
      if (local_228.Data.ArrayNum == 0) {
        *(int *)(pFVar11 + 0xc) = 0;
      }
      else {
        in_stack_fffffffffffffdc0 =
             CONCAT44((int)(in_stack_fffffffffffffdc0 >> 0x20),local_228.Data.ArrayNum);
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_228.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,
                   local_228.Data.ArrayNum,(int *)(pFVar11 + 0xc));
                    /* WARNING: Load size is inaccurate */
        memcpy(*pFVar11,FVar12.Data,lVar14 * 2);
      }
    }
    if (__return_storage_ptr__->ArrayNum == 0) {
      GetPathComponentForPlatformAndRHI(this,&local_218,param_1);
      if (4 < (byte)LogScreenShotManager._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      while (iVar5 == 0) {
        pFVar11 = (FScriptContainerElement *)L"";
        if (local_218.Data.ArrayNum != 0) {
          pFVar11 = local_218.Data.AllocatorInstance.Data;
        }
        iVar13 = 0;
        iVar5 = local_218.Data.ArrayNum + -1;
        if (local_218.Data.ArrayNum == 0) {
          iVar5 = iVar13;
        }
        uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar5,(wchar_t *)pFVar11);
        iVar5 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FString>
                          ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                            *)&this->FallbackPlatforms,uVar6,&local_218);
        if (iVar5 == -1) break;
        lVar14 = *(longlong *)&this->FallbackPlatforms + (longlong)iVar5 * 0x28;
        pFVar8 = (FString *)(lVar14 + 0x10);
        if (lVar14 == 0) {
          pFVar8 = (FString *)0x0;
        }
        if (pFVar8 == (FString *)0x0) break;
        if (&local_218 != pFVar8) {
          iVar5 = (pFVar8->Data).ArrayNum;
          pFVar11 = (pFVar8->Data).AllocatorInstance.Data;
          local_218.Data.ArrayNum = iVar5;
          if ((iVar5 == 0) && (local_218.Data.ArrayMax == 0)) {
            local_218.Data.ArrayMax = 0;
          }
          else {
            in_stack_fffffffffffffdc0 = CONCAT44((int)(in_stack_fffffffffffffdc0 >> 0x20),iVar5);
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar5,local_218.Data.ArrayMax,(ForAnyElementType *)&local_218,iVar5,
                       &local_218.Data.ArrayMax);
            if (iVar5 != 0) {
              memcpy(local_218.Data.AllocatorInstance.Data,pFVar11,(longlong)iVar5 * 2);
            }
          }
        }
        local_1f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f8.ArrayNum = 0;
        local_1f8.ArrayMax = 0;
        ::FString::ParseIntoArray(&local_218,&local_1f8,L"/",true);
        if (local_1f8.ArrayNum == 2) {
          local_208.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_208.ArrayNum = 0;
          local_208.ArrayMax = 0;
          ::FString::ParseIntoArray
                    ((FString *)(local_1f8.AllocatorInstance.Data + 0x10),&local_208,L"_",true);
          FAutomationScreenshotMetadata::FAutomationScreenshotMetadata(&local_168,param_1);
          uVar9 = (ulonglong)local_1f8.ArrayNum;
          if ((local_1f8.ArrayNum < 1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             in_stack_fffffffffffffdc0 = uVar9, bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar10 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
            return pTVar10;
          }
          iVar5 = *(int *)(local_1f8.AllocatorInstance.Data + 8) + -1;
          if (*(int *)(local_1f8.AllocatorInstance.Data + 8) == 0) {
            iVar5 = iVar13;
          }
          ::FString::AssignRange
                    (&local_168.Platform,*(wchar_t **)local_1f8.AllocatorInstance.Data,iVar5);
          if (local_208.ArrayNum < 2) {
            ::FString::operator=(&local_168.Rhi,L"");
            uVar9 = (ulonglong)local_208.ArrayNum;
            FVar12.Data = local_208.AllocatorInstance.Data;
            if ((local_208.ArrayNum < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               FVar12.Data = local_208.AllocatorInstance.Data, in_stack_fffffffffffffdc0 = uVar9,
               bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar10 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar10;
            }
          }
          else {
            iVar5 = *(int *)(local_208.AllocatorInstance.Data + 8) + -1;
            if (*(int *)(local_208.AllocatorInstance.Data + 8) == 0) {
              iVar5 = iVar13;
            }
            ::FString::AssignRange
                      (&local_168.Rhi,*(wchar_t **)local_208.AllocatorInstance.Data,iVar5);
            uVar9 = (ulonglong)local_208.ArrayNum;
            if ((local_208.ArrayNum < 2) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               in_stack_fffffffffffffdc0 = uVar9, bVar4)) {
              pcVar2 = (code *)swi(3);
              pTVar10 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
              return pTVar10;
            }
            FVar12.Data = local_208.AllocatorInstance.Data + 0x10;
          }
          iVar5 = *(int *)(FVar12.Data + 8) + -1;
          if (*(int *)(FVar12.Data + 8) == 0) {
            iVar5 = iVar13;
          }
          ::FString::AssignRange(&local_168.FeatureLevel,*(wchar_t **)FVar12.Data,iVar5);
          pFVar8 = (FString *)(**(code **)(this->_padding_ + 0x20))(this,local_180,&local_168);
          pFVar8 = FPaths::GetPath(&local_190,pFVar8);
          if (&local_228 != pFVar8) {
            if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_228.Data.AllocatorInstance.Data);
            }
            local_228.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
            (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_228.Data.ArrayNum = (pFVar8->Data).ArrayNum;
            local_228.Data.ArrayMax = (pFVar8->Data).ArrayMax;
            (pFVar8->Data).ArrayNum = 0;
            (pFVar8->Data).ArrayMax = 0;
          }
          if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data.AllocatorInstance.Data);
          }
          if (local_180[0] != (void *)0x0) {
            FMemory::Free(local_180[0]);
          }
          pIVar7 = IFileManager::Get();
          FVar12.Data = (FScriptContainerElement *)L"";
          if (local_1c0.Data.ArrayNum != 0) {
            FVar12.Data = local_1c0.Data.AllocatorInstance.Data;
          }
          in_stack_fffffffffffffdc0 = in_stack_fffffffffffffdc0 & 0xffffffffffffff00;
          FVar15.Data = (FScriptContainerElement *)L"";
          if (local_228.Data.ArrayNum != 0) {
            FVar15.Data = local_228.Data.AllocatorInstance.Data;
          }
          (**(code **)((longlong)*pIVar7 + 0x88))
                    (pIVar7,__return_storage_ptr__,FVar15.Data,FVar12.Data,1,
                     in_stack_fffffffffffffdc0,1);
          pFVar3 = local_1c8;
          piVar1 = (int *)((longlong)&local_1c8[1].Data + 4);
          iVar5 = *(int *)&local_1c8[1].Data;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,local_1c8,piVar1);
            *(int *)&pFVar3[1].Data = iVar5;
          }
          FVar12.Data = local_228.Data.AllocatorInstance.Data;
          *(int *)&pFVar3[1].Data = iVar5 + 1;
          pFVar11 = pFVar3->Data + (longlong)iVar5 * 0x10;
          *(FScriptContainerElement **)pFVar11 = (FScriptContainerElement *)0x0;
          lVar14 = (longlong)local_228.Data.ArrayNum;
          *(int *)(pFVar11 + 8) = local_228.Data.ArrayNum;
          if (local_228.Data.ArrayNum == 0) {
            *(int *)(pFVar11 + 0xc) = 0;
          }
          else {
            in_stack_fffffffffffffdc0 =
                 CONCAT44((int)(in_stack_fffffffffffffdc0 >> 0x20),local_228.Data.ArrayNum);
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_228.Data.ArrayNum,0,(ForAnyElementType *)pFVar11,
                       local_228.Data.ArrayNum,(int *)(pFVar11 + 0xc));
                    /* WARNING: Load size is inaccurate */
            memcpy(*pFVar11,FVar12.Data,lVar14 * 2);
          }
          if ((__return_storage_ptr__->ArrayNum != 0) && (4 < (byte)LogScreenShotManager._0_1_)) {
            UE::Logging::Private::BasicLog<5>
                      (&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
          }
          if (local_168.UniqueDeviceId.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_168.UniqueDeviceId.Data.AllocatorInstance.Data);
          }
          if (local_168.AdapterUserDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.AdapterUserDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_168.AdapterInternalDriverVersion.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.AdapterInternalDriverVersion.Data.AllocatorInstance.Data);
          }
          if (local_168.AdapterName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.AdapterName.Data.AllocatorInstance.Data);
          }
          if (local_168.Vendor.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Vendor.Data.AllocatorInstance.Data);
          }
          if (local_168.FeatureLevel.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_168.FeatureLevel.Data.AllocatorInstance.Data);
          }
          if (local_168.Platform.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Platform.Data.AllocatorInstance.Data);
          }
          if (local_168.Rhi.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Rhi.Data.AllocatorInstance.Data);
          }
          if (local_168.Commit.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Commit.Data.AllocatorInstance.Data);
          }
          if (local_168.Notes.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Notes.Data.AllocatorInstance.Data);
          }
          if (local_168.TestName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.TestName.Data.AllocatorInstance.Data);
          }
          if (local_168.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Context.Data.AllocatorInstance.Data);
          }
          if (local_168.VariantName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.VariantName.Data.AllocatorInstance.Data);
          }
          if (local_168.ScreenShotName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
             ) {
            FMemory::Free(local_168.ScreenShotName.Data.AllocatorInstance.Data);
          }
          DestructItems<FString,int>((FString *)local_208.AllocatorInstance.Data,local_208.ArrayNum)
          ;
          if (local_208.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_208.AllocatorInstance.Data);
          }
        }
        else if (1 < (byte)LogScreenShotManager._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager)
          ;
        }
        DestructItems<FString,int>((FString *)local_1f8.AllocatorInstance.Data,local_1f8.ArrayNum);
        if (local_1f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.AllocatorInstance.Data);
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
      }
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
    }
  }
  if (__return_storage_ptr__->ArrayNum == 0) {
    if (4 < (byte)LogScreenShotManager._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
    }
    iVar5 = (int)local_1e0;
    pFVar11 = local_1e8.Data + (longlong)(int)local_1e0 * 0x10;
    FVar12.Data = local_1e8.Data;
    while( true ) {
      if ((int)local_1e0 != iVar5) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar12.Data == pFVar11) break;
      if (4 < (byte)LogScreenShotManager._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogScreenShotManager);
      }
      FVar12.Data = FVar12.Data + 0x10;
    }
  }
  if (local_1d8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.Data);
  }
  if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data.AllocatorInstance.Data);
  }
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_1e8.Data,(int)local_1e0);
  if (local_1e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e8.Data);
  }
  return __return_storage_ptr__;
}

// GetApprovedFolderForImageWithOptions @ 148c48320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FScreenShotManager::GetApprovedFolderForImageWithOptions
          (FScreenShotManager *this,FString *__return_storage_ptr__,
          FAutomationScreenshotMetadata *param_1,EApprovedFolderOptions param_2)

{
  FName FVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  bool bVar4;
  FDataDrivenPlatformInfo *pFVar5;
  size_t sVar6;
  FModuleManager *pFVar7;
  FName *pFVar8;
  IModuleInterface *pIVar9;
  undefined8 *puVar10;
  FString *pFVar11;
  int iVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStackY_168 [32];
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  TStringView<wchar_t> local_d8;
  FScriptContainerElement *local_c8;
  int local_c0;
  void *local_b8 [2];
  TStringView<wchar_t> local_a8;
  wchar_t *local_98;
  undefined4 local_90;
  FName local_88;
  int local_80;
  FScriptContainerElement *local_78;
  int local_70;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pFVar5 = FDataDrivenPlatformInfoRegistry::GetPlatformInfo(&param_1->Platform);
  if ((pFVar5->bIsConfidential == false) || ((param_2 & UsePlatformFolders) == None)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0 = 0;
  if ((param_1->ScreenShotName).Data.ArrayNum == 0) {
    local_c8 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    local_c8 = (param_1->ScreenShotName).Data.AllocatorInstance.Data;
  }
  local_d8.DataPtr = (wchar_t *)(param_1->Context).Data.AllocatorInstance.Data;
  iVar15 = (param_1->Context).Data.ArrayNum;
  local_d8.Size = iVar15 + -1;
  if (iVar15 == 0) {
    local_d8.Size = local_c0;
  }
  if (local_c8 != (FScriptContainerElement *)0x0) {
    sVar6 = wcslen((wchar_t *)local_c8);
    local_c0 = (int)sVar6;
  }
  FPaths::CombineInternal(&local_e8,&local_d8,2);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  local_118.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
  local_118.Data.ArrayNum = local_e8.Data.ArrayNum;
  local_118.Data.ArrayMax = local_e8.Data.ArrayMax;
  FPaths::NormalizeDirectoryName(&local_118);
  FPaths::ProjectDir(__return_storage_ptr__);
  pFVar7 = FModuleManager::Get();
  pFVar8 = ::FName::FName((FName *)&local_128,"LauncherServices");
  bVar3 = FModuleManager::IsModuleLoaded(pFVar7,*pFVar8);
  iVar15 = 0;
  if (!bVar3) goto LAB_148c484d5;
  pFVar8 = ::FName::FName((FName *)&local_128,"LauncherServices");
  FVar1 = *pFVar8;
  pFVar7 = FModuleManager::Get();
  pIVar9 = FModuleManager::LoadModuleChecked(pFVar7,FVar1);
  puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar9 + 0x60))(pIVar9,&local_d8);
  pFVar11 = (FString *)(**(code **)(*(longlong *)*puVar10 + 0xf0))((longlong *)*puVar10,local_b8);
  FPaths::GetPath(&local_e8,pFVar11);
  if (local_b8[0] != (void *)0x0) {
    FMemory::Free(local_b8[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)CONCAT44(local_d8._12_4_,local_d8.Size));
  if (local_e8.Data.ArrayNum < 2) {
LAB_148c484ac:
    pFVar11 = __return_storage_ptr__;
  }
  else {
    bVar3 = FPaths::DirectoryExists(&local_e8);
    pFVar11 = &local_e8;
    if (!bVar3) goto LAB_148c484ac;
  }
  iVar12 = (pFVar11->Data).ArrayNum;
  iVar16 = iVar12 + -1;
  if (iVar12 == 0) {
    iVar16 = iVar15;
  }
  ::FString::AssignRange
            (__return_storage_ptr__,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,iVar16);
  if ((FName)local_e8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
LAB_148c484d5:
  local_128.Data.ArrayNum = (param_1->Rhi).Data.ArrayNum;
  lVar13 = (longlong)local_128.Data.ArrayNum;
  pFVar2 = (param_1->Rhi).Data.AllocatorInstance.Data;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar12 = 0;
  if (bVar4) {
    if (local_128.Data.ArrayNum == 0) {
      local_128.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
                 local_128.Data.ArrayNum,&local_128.Data.ArrayMax);
      memcpy(local_128.Data.AllocatorInstance.Data,pFVar2,lVar13 * 2);
    }
    if (1 < local_128.Data.ArrayNum) {
      ::FString::AppendChars(&local_128,L"_",1);
    }
    iVar16 = (param_1->FeatureLevel).Data.ArrayNum;
    iVar17 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar17 = iVar15;
    }
    ::FString::AppendChars
              (&local_128,(wchar_t *)(param_1->FeatureLevel).Data.AllocatorInstance.Data,iVar17);
    local_a8.DataPtr = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    iVar16 = (__return_storage_ptr__->Data).ArrayNum;
    local_90 = 9;
    local_70 = 0x11;
    local_a8.Size = iVar16 + -1;
    if (iVar16 == 0) {
      local_a8.Size = iVar15;
    }
    local_98 = L"Platforms";
    local_88 = (FName)(param_1->Platform).Data.AllocatorInstance.Data;
    iVar16 = (param_1->Platform).Data.ArrayNum;
    local_80 = iVar16 + -1;
    if (iVar16 == 0) {
      local_80 = iVar15;
    }
    local_78 = (FScriptContainerElement *)0x151c92498;
    local_68 = (FName)local_118.Data.AllocatorInstance.Data;
    local_60 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      local_60 = iVar12;
    }
    local_58 = (FName)local_128.Data.AllocatorInstance.Data;
    local_50 = local_128.Data.ArrayNum + -1;
    if (local_128.Data.ArrayNum == 0) {
      local_50 = iVar12;
    }
    FPaths::CombineInternal(&local_108,&local_a8,6);
    FVar14.Data = local_108.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_108) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_108.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_108.Data.ArrayMax;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar14.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    if (local_128.Data.ArrayNum == 0) {
      local_128.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
                 local_128.Data.ArrayNum,&local_128.Data.ArrayMax);
      memcpy(local_128.Data.AllocatorInstance.Data,pFVar2,lVar13 * 2);
    }
    if (1 < local_128.Data.ArrayNum) {
      ::FString::AppendChars(&local_128,L"_",1);
    }
    iVar16 = (param_1->FeatureLevel).Data.ArrayNum;
    iVar17 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar17 = iVar12;
    }
    ::FString::AppendChars
              (&local_128,(wchar_t *)(param_1->FeatureLevel).Data.AllocatorInstance.Data,iVar17);
    local_a8.DataPtr = (wchar_t *)(__return_storage_ptr__->Data).AllocatorInstance.Data;
    iVar16 = (__return_storage_ptr__->Data).ArrayNum;
    local_90 = 0x11;
    local_a8.Size = iVar16 + -1;
    if (iVar16 == 0) {
      local_a8.Size = iVar12;
    }
    local_98 = L"Test/Screenshots/";
    local_88 = (FName)local_118.Data.AllocatorInstance.Data;
    local_78 = (param_1->Platform).Data.AllocatorInstance.Data;
    local_80 = local_118.Data.ArrayNum + -1;
    if (local_118.Data.ArrayNum == 0) {
      local_80 = iVar12;
    }
    iVar16 = (param_1->Platform).Data.ArrayNum;
    local_70 = iVar16 + -1;
    if (iVar16 == 0) {
      local_70 = iVar12;
    }
    local_68 = (FName)local_128.Data.AllocatorInstance.Data;
    local_60 = local_128.Data.ArrayNum + -1;
    if (local_128.Data.ArrayNum == 0) {
      local_60 = iVar15;
    }
    FPaths::CombineInternal(&local_f8,&local_a8,5);
    FVar14.Data = local_f8.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_f8) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_f8.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_f8.Data.ArrayMax;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar14.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  if ((FName)local_128.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  bVar4 = ::FString::EndsWith(__return_storage_ptr__,L"/",1,IgnoreCase);
  if (!bVar4) {
    ::FString::AppendChars(__return_storage_ptr__,L"/",1);
  }
  if ((FName)local_118.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetDefaultExportDirectory @ 148c48860

FString * __thiscall
FScreenShotManager::GetDefaultExportDirectory
          (FScreenShotManager *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pFVar2 = FPaths::ProjectSavedDir();
  local_10 = 0x15;
  local_28.DataPtr = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18 = L"Exported/imageCompare";
  FPaths::CombineInternal(__return_storage_ptr__,&local_28,2);
  return __return_storage_ptr__;
}

// GetIdealApprovedFolderForImage @ 148c489d0

FString * __thiscall
FScreenShotManager::GetIdealApprovedFolderForImage
          (FScreenShotManager *this,FString *__return_storage_ptr__,
          FAutomationScreenshotMetadata *param_1)

{
  GetApprovedFolderForImageWithOptions
            (this,__return_storage_ptr__,param_1,this->bUseConfidentialPlatformPaths != false);
  return __return_storage_ptr__;
}

// GetPathComponentForPlatformAndRHI @ 148c48a00

FString * __thiscall
FScreenShotManager::GetPathComponentForPlatformAndRHI
          (FScreenShotManager *this,FString *__return_storage_ptr__,
          FAutomationScreenshotMetadata *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  longlong lVar2;
  int iVar3;
  FString local_38;
  TStringView<wchar_t> local_28;
  FScriptContainerElement *local_18;
  int local_10;
  
  local_38.Data.ArrayNum = (param_1->Rhi).Data.ArrayNum;
  lVar2 = (longlong)local_38.Data.ArrayNum;
  _Src = (param_1->Rhi).Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar2 * 2);
  }
  if (1 < local_38.Data.ArrayNum) {
    ::FString::AppendChars(&local_38,L"_",1);
  }
  iVar1 = (param_1->FeatureLevel).Data.ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars
            (&local_38,(wchar_t *)(param_1->FeatureLevel).Data.AllocatorInstance.Data,iVar3);
  local_28.DataPtr = (wchar_t *)(param_1->Platform).Data.AllocatorInstance.Data;
  iVar1 = (param_1->Platform).Data.ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18 = local_38.Data.AllocatorInstance.Data;
  local_10 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    local_10 = 0;
  }
  FPaths::CombineInternal(__return_storage_ptr__,&local_28,2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPathComponentForRHI @ 148c48b40

FString * __thiscall
FScreenShotManager::GetPathComponentForRHI
          (FScreenShotManager *this,FString *__return_storage_ptr__,
          FAutomationScreenshotMetadata *param_1)

{
  int iVar1;
  int iVar2;
  
  ::FString::FString(__return_storage_ptr__,&param_1->Rhi);
  if (1 < (__return_storage_ptr__->Data).ArrayNum) {
    ::FString::AppendChars(__return_storage_ptr__,L"_",1);
  }
  iVar1 = (param_1->FeatureLevel).Data.ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)(param_1->FeatureLevel).Data.AllocatorInstance.Data,
             iVar2);
  return __return_storage_ptr__;
}

// GetPathComponentForTestImages @ 148c48bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FScreenShotManager::GetPathComponentForTestImages
          (FScreenShotManager *this,FString *__return_storage_ptr__,
          FAutomationScreenshotMetadata *param_1,bool param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  size_t sVar4;
  ForAnyElementType FVar5;
  wchar_t *_Str;
  undefined1 auStack_88 [32];
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  FScriptContainerElement *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_30 = 0;
  iVar3 = 0;
  if (param_2) {
    local_38 = (FScriptContainerElement *)0x15060d16c;
    if ((param_1->VariantName).Data.ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(param_1->VariantName).Data.AllocatorInstance.Data;
    }
    if ((param_1->ScreenShotName).Data.ArrayNum != 0) {
      local_38 = (param_1->ScreenShotName).Data.AllocatorInstance.Data;
    }
    local_48.DataPtr = (wchar_t *)(param_1->Context).Data.AllocatorInstance.Data;
    iVar1 = (param_1->Context).Data.ArrayNum;
    local_48.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_48.Size = iVar3;
    }
    if (local_38 != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen((wchar_t *)local_38);
      local_30 = (int)sVar4;
    }
    local_28 = (FScriptContainerElement *)_Str;
    if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen(_Str);
      iVar3 = (int)sVar4;
    }
    local_20 = iVar3;
    FPaths::CombineInternal(&local_68,&local_48,3);
    FVar5.Data = local_68.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_68) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_68.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    if ((param_1->ScreenShotName).Data.ArrayNum == 0) {
      local_38 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_38 = (param_1->ScreenShotName).Data.AllocatorInstance.Data;
    }
    local_48.DataPtr = (wchar_t *)(param_1->Context).Data.AllocatorInstance.Data;
    iVar1 = (param_1->Context).Data.ArrayNum;
    local_48.Size = iVar1 + -1;
    if (iVar1 == 0) {
      local_48.Size = iVar3;
    }
    if (local_38 != (FScriptContainerElement *)0x0) {
      sVar4 = wcslen((wchar_t *)local_38);
      iVar3 = (int)sVar4;
    }
    local_30 = iVar3;
    FPaths::CombineInternal(&local_58,&local_48,2);
    FVar5.Data = local_58.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_58) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar5.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar5.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar5.Data);
  }
  FPaths::NormalizeDirectoryName(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// NotifyAutomationTestFrameworkOfImageComparison @ 148c498f0

void __thiscall
FScreenShotManager::NotifyAutomationTestFrameworkOfImageComparison
          (FScreenShotManager *this,FImageComparisonResult *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FAutomationTestBase *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  FString *pFVar8;
  FString *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  FString *pFVar12;
  FString *pFVar13;
  FGuid *pFVar14;
  FAutomationTestFramework *pFVar15;
  FAutomationEvent *pFVar16;
  FAutomationScreenshotCompareResults local_188;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FGuid local_98;
  FAutomationEvent local_88;
  
  pFVar8 = ::FString::FString(&local_f8,&param_1->ScreenshotPath);
  pFVar9 = ::FString::FString(&local_e8,&param_1->ReportIncomingFilePath);
  pFVar10 = ::FString::FString(&local_d8,&param_1->ReportApprovedFilePath);
  pFVar11 = ::FString::FString(&local_c8,&param_1->ReportComparisonFilePath);
  pFVar12 = ::FString::FString(&local_b8,&param_1->IncomingFilePath);
  if (1 < (param_1->ApprovedFilePath).Data.ArrayNum) {
    bVar7 = FText::IsEmpty(&param_1->ErrorMessage);
    if (((bVar7) && (param_1->MaxLocalDifference <= (double)(param_1->Tolerance).MaximumLocalError))
       && (param_1->GlobalDifference <= (double)(param_1->Tolerance).MaximumGlobalError)) {
      bVar7 = true;
      goto LAB_148c499c1;
    }
  }
  bVar7 = false;
LAB_148c499c1:
  iVar1 = (param_1->ApprovedFilePath).Data.ArrayNum;
  dVar5 = param_1->MaxLocalDifference;
  dVar6 = param_1->GlobalDifference;
  pFVar13 = FText::ToString(&param_1->ErrorMessage);
  pFVar13 = ::FString::FString(&local_a8,pFVar13);
  pFVar14 = FGuid::NewGuid(&local_98);
  local_188.UniqueId.A = pFVar14->A;
  local_188.UniqueId.B = pFVar14->B;
  local_188.UniqueId.C = pFVar14->C;
  local_188.UniqueId.D = pFVar14->D;
  ::FString::FString(&local_188.ErrorMessage,pFVar13);
  local_188.MaxLocalDifference = dVar5;
  local_188.GlobalDifference = dVar6;
  local_188.bWasNew = iVar1 < 2;
  local_188.bWasSimilar = bVar7;
  ::FString::FString(&local_188.IncomingFilePath,pFVar12);
  ::FString::FString(&local_188.ReportComparisonFilePath,pFVar11);
  ::FString::FString(&local_188.ReportApprovedFilePath,pFVar10);
  ::FString::FString(&local_188.ReportIncomingFilePath,pFVar9);
  ::FString::FString(&local_188.ScreenshotPath,pFVar8);
  pFVar2 = (pFVar13->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pFVar12->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pFVar10->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pFVar9->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (pFVar8->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar15 = FAutomationTestFramework::Get();
  FAutomationTestFramework::NotifyScreenshotComparisonReport(pFVar15,&local_188);
  pFVar15 = FAutomationTestFramework::Get();
  pFVar3 = pFVar15->CurrentTest;
  if (pFVar3 != (FAutomationTestBase *)0x0) {
    pcVar4 = *(code **)(pFVar3->_padding_ + 0x58);
    pFVar16 = FAutomationScreenshotCompareResults::ToAutomationEvent(&local_188,&local_88);
    (*pcVar4)(pFVar3,pFVar16,0,0);
    if (local_88.Context.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Context.Data.AllocatorInstance.Data);
    }
    if (local_88.Message.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Message.Data.AllocatorInstance.Data);
    }
  }
  if (local_188.ScreenshotPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.ScreenshotPath.Data.AllocatorInstance.Data);
  }
  if (local_188.ReportIncomingFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_188.ReportIncomingFilePath.Data.AllocatorInstance.Data);
  }
  if (local_188.ReportApprovedFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_188.ReportApprovedFilePath.Data.AllocatorInstance.Data);
  }
  if (local_188.ReportComparisonFilePath.Data.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.ReportComparisonFilePath.Data.AllocatorInstance.Data);
  }
  if (local_188.IncomingFilePath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.IncomingFilePath.Data.AllocatorInstance.Data);
  }
  if (local_188.ErrorMessage.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.ErrorMessage.Data.AllocatorInstance.Data);
  }
  return;
}

// OpenComparisonReportsAsync @ 148c49ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> * __thiscall
FScreenShotManager::OpenComparisonReportsAsync
          (FScreenShotManager *this,
          TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_>
          *__return_storage_ptr__,FString *param_1)

{
  TSharedPtr<TArray<FString,TSizedDefaultAllocator<32>_>,1> *pTVar1;
  atomic<int> *paVar2;
  atomic<int> aVar3;
  FScriptContainerElement *_Src;
  code *pcVar4;
  bool bVar5;
  IFileManager *pIVar6;
  TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *pTVar7;
  longlong lVar8;
  TReferenceControllerBase<1> *pTVar9;
  ForAnyElementType FVar10;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar11;
  uint in_stack_ffffffffffffff30;
  uint uVar12;
  int *in_stack_ffffffffffffff38;
  FString local_b8;
  FString *local_a8;
  undefined8 local_a0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_98;
  FSharedReferencer<1> FStack_90;
  <lambda_1> local_88;
  TUniqueFunction<void___cdecl(void)> local_58;
  
  uVar12 = (param_1->Data).ArrayNum;
  lVar8 = (longlong)(int)uVar12;
  _Src = (param_1->Data).AllocatorInstance.Data;
  pTVar9 = (TReferenceControllerBase<1> *)0x0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = uVar12;
  if (uVar12 == 0) {
    local_b8.Data.ArrayNum = 0;
    local_b8.Data.ArrayMax = 0;
    uVar12 = in_stack_ffffffffffffff30;
  }
  else {
    in_stack_ffffffffffffff38 = &local_b8.Data.ArrayMax;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,uVar12,0,(ForAnyElementType *)&local_b8,uVar12,in_stack_ffffffffffffff38);
    memcpy(local_b8.Data.AllocatorInstance.Data,_Src,lVar8 * 2);
  }
  FPaths::NormalizeDirectoryName(&local_b8);
  ::FString::AppendChars(&local_b8,L"/",1);
  local_a8 = (FString *)0x0;
  local_a0 = 0;
  pIVar6 = IFileManager::Get();
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_b8.Data.ArrayNum != 0) {
    FVar10.Data = local_b8.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar6 + 0x88))
            (pIVar6,&local_a8,FVar10.Data,L"Report.json",1,uVar12 & 0xffffff00,
             (ulonglong)in_stack_ffffffffffffff38 & 0xffffffffffffff00);
  FStack_90.ReferenceController = ::operator_new(0x20);
  if (FStack_90.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_98 = ___xmm_00000000000000000000000000000010;
    pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)&DAT_00000010;
    FStack_90.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_90.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(FStack_90.ReferenceController + 1);
    (FStack_90.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_90.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    FStack_90.ReferenceController[1]._padding_ = (longlong)local_a8;
    local_a8 = (FString *)0x0;
    FStack_90.ReferenceController[1].SharedReferenceCount = local_a0._0_4_;
    FStack_90.ReferenceController[1].WeakReferenceCount = local_a0._4_4_;
    local_a0 = 0;
    if (pTVar11 == (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TFuture<TSharedPtr<TArray<FComparisonReport,TSizedDefaultAllocator<32>_>,1>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
    }
    LOCK();
    (FStack_90.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_90.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar9 = FStack_90.ReferenceController;
    local_98 = pTVar11;
  }
  pTVar1 = &this->PendingComparisonReportPaths;
  if (pTVar1 != (TSharedPtr<TArray<FString,TSizedDefaultAllocator<32>_>,1> *)&local_98) {
    pTVar1->Object = pTVar11;
    local_98 = (TArray<FString,TSizedDefaultAllocator<32>_> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PendingComparisonReportPaths).SharedReferenceCount,&FStack_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_90.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  local_88.ReportPathsWPtr.WeakReferenceCount.ReferenceController =
       (this->PendingComparisonReportPaths).SharedReferenceCount.ReferenceController;
  local_88.ReportPathsWPtr.Object = pTVar1->Object;
  local_58._0_8_ = 0;
  local_58._40_8_ = 0;
  if (local_88.ReportPathsWPtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_88.ReportPathsWPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_88.ReportPathsWPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount
         + 1);
    UNLOCK();
  }
  local_88.ImportPathToUse.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
  local_88.ImportPathToUse.Data.ArrayNum = local_b8.Data.ArrayNum;
  local_88.ImportPathToUse.Data.ArrayMax = local_b8.Data.ArrayMax;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.__this = this;
  Async<_FScreenShotManager::OpenComparisonReportsAsync_::__l2::<lambda_1>_>
            (__return_storage_ptr__,ThreadPool,&local_88,&local_58);
  if (local_88.ReportPathsWPtr.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar2 = &(local_88.ReportPathsWPtr.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar2;
    *paVar2 = (atomic<int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_88.ReportPathsWPtr.WeakReferenceCount.ReferenceController)->_padding_ + 8)
      )(local_88.ReportPathsWPtr.WeakReferenceCount.ReferenceController,1);
    }
  }
  if (local_88.ImportPathToUse.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.ImportPathToUse.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_a8,(int)local_a0._0_4_);
  if (local_a8 != (FString *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

