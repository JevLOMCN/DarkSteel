// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 11

// IsStereoAllowed @ 146bd10f0

bool __thiscall FMovieSceneCaptureModule::IsStereoAllowed(FMovieSceneCaptureModule *this)

{
  return this->bStereoAllowed;
}

// StartupModule @ 146bd1100

void __thiscall FMovieSceneCaptureModule::StartupModule(FMovieSceneCaptureModule *this)

{
  FMovieSceneCaptureModule local_res8 [2];
  
  this->bStereoAllowed = false;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FMovieSceneCaptureModule>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnPreExit,local_res8,(pmf_52e427d2)this);
  TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy>::
  AddRaw<FMovieSceneCaptureModule>
            ((TMulticastDelegateRegistration<void___cdecl(UWorld_*),FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostLoadMapWithWorld,local_res8,(pmf_a4ce5759)this);
  return;
}

// PreUnloadCallback @ 146bd1150

void __thiscall FMovieSceneCaptureModule::PreUnloadCallback(FMovieSceneCaptureModule *this)

{
                    /* WARNING: Could not recover jumptable at 0x000146bd1153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x68))();
  return;
}

// InitializeFromCommandLine @ 146bd1160

/* WARNING: Removing unreachable block (ram,0x000146bd1701) */
/* WARNING: Enum "ECoreRedirectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

IMovieSceneCaptureInterface * __thiscall
FMovieSceneCaptureModule::InitializeFromCommandLine(FMovieSceneCaptureModule *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  wchar_t *pwVar6;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar7;
  IMovieSceneCaptureInterface *pIVar8;
  TSharedPtr<FJsonValue,1> *pTVar9;
  FString *pFVar10;
  size_t sVar11;
  UClass *pUVar12;
  UPackage *pUVar13;
  TObjectPtr<UMovieSceneCapture>_u_0 TVar14;
  TSharedPtr<FJsonObject,1> *pTVar15;
  TMap<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
  *pTVar16;
  FJsonObject *pFVar17;
  uint *puVar18;
  FActiveMovieSceneCaptures *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  TObjectPtr<UMovieSceneCapture>_u_0 TVar21;
  int iVar22;
  TObjectPtr<UMovieSceneCapture>_u_0 TVar23;
  TObjectPtr<UMovieSceneCapture>_u_0 TVar25;
  FJsonValue *pFVar26;
  undefined1 local_res18 [8];
  TReferenceControllerBase<1> *local_res20;
  FString local_2a8;
  UClass *local_298;
  TSharedPtr<FJsonObject,1> local_290;
  FString local_280;
  FString local_270;
  undefined8 local_260;
  undefined8 local_258;
  TObjectPtr<UMovieSceneCapture>_u_0 local_250;
  FCoreRedirectObjectName local_248;
  FCoreRedirectObjectName local_230;
  TSharedRef<TJsonReader<wchar_t>,1> local_218;
  FCoreRedirect *local_208;
  FCoreRedirect *local_200;
  <lambda_1> local_1f8 [16];
  FScriptContainerElement *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  FScriptContainerElement *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  FScriptContainerElement *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  TObjectPtr<UMovieSceneCapture>_u_0 local_1b8;
  TReferenceControllerBase<1> *local_1b0;
  wchar_t *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  FJsonValue *local_198;
  UClass *local_190;
  FScriptContainerElement *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  FJsonValue *local_158;
  TObjectPtr<UMovieSceneCapture>_u_0 local_150;
  FString local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  FString local_118;
  TStringView<wchar_t> local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  TStringView<wchar_t> local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_98;
  TStringView<wchar_t> local_88;
  FCoreRedirectObjectName local_78;
  FCoreRedirectObjectName local_60;
  TObjectPtr<UMovieSceneCapture>_u_0 TVar24;
  
  TVar24.DebugPtr = (UMovieSceneCapture *)0x0;
  TVar23.DebugPtr = (UMovieSceneCapture *)0x0;
  iVar22 = 0;
  pwVar6 = FCommandLine::Get();
  bVar2 = FParse::Param(pwVar6,L"EmulateStereo");
  if (bVar2) {
    this->bStereoAllowed = true;
  }
  local_2a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a8.Data.ArrayNum = 0;
  local_2a8.Data.ArrayMax = 0;
  pwVar6 = FCommandLine::Get();
  FParse::Value(pwVar6,L"-MovieSceneCaptureType=",&local_2a8,true,(wchar_t **)0x0);
  local_270.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270.Data.ArrayNum = 0;
  local_270.Data.ArrayMax = 0;
  pwVar6 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar6,L"-MovieSceneCaptureManifest=",&local_270,true,(wchar_t **)0x0);
  if (((!bVar2) || (local_270.Data.ArrayNum < 2)) &&
     (TVar21.DebugPtr = TVar24.DebugPtr, local_2a8.Data.ArrayNum < 2)) goto LAB_146bd1a1e;
  iVar5 = 0;
  TVar21.DebugPtr = TVar23.DebugPtr;
  TVar14.DebugPtr = TVar24.DebugPtr;
  if (local_270.Data.ArrayNum < 2) {
    if (local_2a8.Data.ArrayNum < 2) goto LAB_146bd17a7;
    local_188 = local_2a8.Data.AllocatorInstance.Data;
    iStack_180 = iVar5;
    if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      sVar11 = wcslen((wchar_t *)local_2a8.Data.AllocatorInstance.Data);
      iStack_180 = (int)sVar11;
    }
    pUVar12 = Z_Construct_UClass_UClass_NoRegister();
    local_c8._12_4_ = uStack_17c;
    local_c8.Size = iStack_180;
    local_c8.DataPtr = (wchar_t *)local_188;
    pUVar12 = (UClass *)StaticFindObject(pUVar12,(UObject *)0x0,&local_c8,None);
    if (pUVar12 == (UClass *)0x0) {
      local_200 = (FCoreRedirect *)0x0;
      local_230.ObjectName.ComparisonIndex.Value = 0;
      local_230.ObjectName.Number = 0;
      local_230.OuterName.ComparisonIndex.Value = 0;
      local_230.OuterName.Number = 0;
      local_230.PackageName.ComparisonIndex.Value = 0;
      local_230.PackageName.Number = 0;
      FCoreRedirectObjectName::FCoreRedirectObjectName(&local_60,&local_2a8);
      bVar2 = FCoreRedirects::RedirectNameAndValues(Type_Class,&local_60,&local_230,&local_200,None)
      ;
      if (!bVar2) goto LAB_146bd1a1e;
      pFVar10 = FCoreRedirectObjectName::ToString(&local_230,&local_a8);
      if ((pFVar10->Data).ArrayNum == 0) {
        local_1c8 = (FScriptContainerElement *)0x15060d16c;
LAB_146bd1945:
        sVar11 = wcslen((wchar_t *)local_1c8);
        iVar5 = (int)sVar11;
      }
      else {
        local_1c8 = (pFVar10->Data).AllocatorInstance.Data;
        if (local_1c8 != (FScriptContainerElement *)0x0) goto LAB_146bd1945;
      }
      iStack_1c0 = iVar5;
      pUVar12 = Z_Construct_UClass_UClass_NoRegister();
      local_b8._12_4_ = uStack_1bc;
      local_b8.Size = iStack_1c0;
      local_b8.DataPtr = (wchar_t *)local_1c8;
      pUVar12 = (UClass *)StaticFindObject(pUVar12,(UObject *)0x0,&local_b8,None);
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      if (pUVar12 == (UClass *)0x0) goto LAB_146bd1a1e;
    }
    local_258 = 0;
    pUVar13 = GetTransientPackage();
    TVar14.DebugPtr =
         NewObject<UMovieSceneCapture>
                   ((UObject *)pUVar13,pUVar12,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                    (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    if (TVar14.DebugPtr == (UMovieSceneCapture *)0x0) goto LAB_146bd1a1e;
  }
  else {
    local_280.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_280.Data.ArrayNum = 0;
    local_280.Data.ArrayMax = 0;
    bVar2 = FFileHelper::LoadFileToString
                      (&local_280,(wchar_t *)local_270.Data.AllocatorInstance.Data,None,0);
    if (bVar2) {
      local_290.Object = (FJsonObject *)0x0;
      local_290.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      pTVar7 = TJsonStringReader<wchar_t>::Create(&local_98,&local_280);
      local_218.Object = (TJsonReader<wchar_t> *)pTVar7->Object;
      local_218.SharedReferenceCount.ReferenceController =
           (pTVar7->SharedReferenceCount).ReferenceController;
      if (local_218.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_98.SharedReferenceCount.ReferenceController);
      bVar2 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                        (&local_218,&local_290,None);
      if ((bVar2) &&
         ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)local_290.Object !=
          (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
           *)0x0)) {
        if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)local_290.Object ==
             (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
              *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          pIVar8 = (IMovieSceneCaptureInterface *)(*pcVar1)();
          return pIVar8;
        }
        pFVar17 = local_290.Object;
        bVar2 = true;
        local_178 = L"Type";
        uStack_170 = 4;
        local_88._12_4_ = uStack_16c;
        local_88.Size = 4;
        local_88.DataPtr = L"Type";
        uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"Type");
        pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                 ::FindByHash<TStringView<wchar_t>_>
                           ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                             *)pFVar17,uVar4,&local_88);
        if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) ||
           (pFVar26 = pTVar9->Object, pFVar26 == (FJsonValue *)0x0)) {
          pTVar20 = (TReferenceControllerBase<1> *)0x0;
          TVar21.DebugPtr = TVar24.DebugPtr;
LAB_146bd184c:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar20);
        }
        else {
          TVar21 = (TObjectPtr<UMovieSceneCapture>_u_0)
                   (pTVar9->SharedReferenceCount).ReferenceController;
          if (TVar21.DebugPtr != (UMovieSceneCapture *)0x0) {
            LOCK();
            *(atomic<int> *)&(TVar21.DebugPtr)->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&(TVar21.DebugPtr)->_padding_ + 1);
            UNLOCK();
            if (TVar21.DebugPtr != (UMovieSceneCapture *)0x0) {
              LOCK();
              *(atomic<int> *)&(TVar21.DebugPtr)->_padding_ =
                   (atomic<int>)((int)*(atomic<int> *)&(TVar21.DebugPtr)->_padding_ + 1);
              UNLOCK();
            }
          }
          local_158 = pFVar26;
          local_150 = TVar21;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)TVar21.DebugPtr);
          pFVar10 = FJsonValue::AsString(pFVar26,&local_148);
          if (&local_2a8 != pFVar10) {
            if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
            }
            local_2a8.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
            (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a8.Data.ArrayNum = (pFVar10->Data).ArrayNum;
            local_2a8.Data.ArrayMax = (pFVar10->Data).ArrayMax;
            (pFVar10->Data).ArrayNum = 0;
            (pFVar10->Data).ArrayMax = 0;
          }
          if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_148.Data.AllocatorInstance.Data);
          }
          if (local_2a8.Data.ArrayNum == 0) {
            local_1e8 = (FScriptContainerElement *)0x15060d16c;
LAB_146bd13fe:
            sVar11 = wcslen((wchar_t *)local_1e8);
            iVar22 = (int)sVar11;
          }
          else {
            local_1e8 = local_2a8.Data.AllocatorInstance.Data;
            if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            goto LAB_146bd13fe;
          }
          iStack_1e0 = iVar22;
          pUVar12 = Z_Construct_UClass_UClass_NoRegister();
          local_138._12_4_ = uStack_1dc;
          local_138.Size = iStack_1e0;
          local_138.DataPtr = (wchar_t *)local_1e8;
          pUVar12 = (UClass *)StaticFindObject(pUVar12,(UObject *)0x0,&local_138,None);
          local_298 = pUVar12;
          if (pUVar12 == (UClass *)0x0) {
            local_208 = (FCoreRedirect *)0x0;
            local_248.ObjectName.ComparisonIndex.Value = 0;
            local_248.ObjectName.Number = 0;
            local_248.OuterName.ComparisonIndex.Value = 0;
            local_248.OuterName.Number = 0;
            local_248.PackageName.ComparisonIndex.Value = 0;
            local_248.PackageName.Number = 0;
            FCoreRedirectObjectName::FCoreRedirectObjectName(&local_78,&local_2a8);
            bVar3 = FCoreRedirects::RedirectNameAndValues
                              (Type_Class,&local_78,&local_248,&local_208,None);
            if (bVar3) {
              pFVar10 = FCoreRedirectObjectName::ToString(&local_248,&local_118);
              if ((pFVar10->Data).ArrayNum == 0) {
                local_1d8 = (FScriptContainerElement *)0x15060d16c;
LAB_146bd14ae:
                sVar11 = wcslen((wchar_t *)local_1d8);
                iVar5 = (int)sVar11;
              }
              else {
                local_1d8 = (pFVar10->Data).AllocatorInstance.Data;
                if (local_1d8 != (FScriptContainerElement *)0x0) goto LAB_146bd14ae;
              }
              iStack_1d0 = iVar5;
              pUVar12 = Z_Construct_UClass_UClass_NoRegister();
              local_128._12_4_ = uStack_1cc;
              local_128.Size = iStack_1d0;
              local_128.DataPtr = (wchar_t *)local_1d8;
              pUVar12 = (UClass *)StaticFindObject(pUVar12,(UObject *)0x0,&local_128,None);
              local_298 = pUVar12;
              if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_118.Data.AllocatorInstance.Data);
              }
              if (pUVar12 != (UClass *)0x0) goto LAB_146bd14fd;
            }
          }
          else {
LAB_146bd14fd:
            local_260 = 0;
            pUVar13 = GetTransientPackage();
            TVar14.DebugPtr =
                 NewObject<UMovieSceneCapture>
                           ((UObject *)pUVar13,pUVar12,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                            (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
            if (TVar14.DebugPtr != (UMovieSceneCapture *)0x0) {
              if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)local_290.Object ==
                   (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                    *)0x0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar3)) {
                pcVar1 = (code *)swi(3);
                pIVar8 = (IMovieSceneCaptureInterface *)(*pcVar1)();
                return pIVar8;
              }
              pFVar17 = local_290.Object;
              local_168 = &u_Data;
              uStack_160 = 4;
              local_108._12_4_ = uStack_15c;
              local_108.Size = 4;
              local_108.DataPtr = L"Data";
              uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(4,L"Data");
              pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                       ::FindByHash<TStringView<wchar_t>_>
                                 ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                                   *)pFVar17,uVar4,&local_108);
              pTVar20 = local_1b0;
              if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                 (TVar25.ObjectPtr.field0_0x0 = (FObjectPtr)pTVar9->Object,
                 TVar25.DebugPtr == (UMovieSceneCapture *)0x0)) {
                local_f8 = 0;
                uStack_f0 = 0;
                bVar2 = false;
                local_res20 = (TReferenceControllerBase<1> *)0x0;
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)0x0);
                TVar25.DebugPtr = TVar24.DebugPtr;
LAB_146bd1605:
                if (bVar2) goto LAB_146bd160b;
              }
              else {
                pTVar20 = (pTVar9->SharedReferenceCount).ReferenceController;
                local_res20 = pTVar20;
                local_1b8.ObjectPtr.field0_0x0 = TVar25.ObjectPtr.field0_0x0;
                local_1b0 = pTVar20;
                if (pTVar20 == (TReferenceControllerBase<1> *)0x0) goto LAB_146bd1605;
                LOCK();
                pTVar20->SharedReferenceCount =
                     (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
                UNLOCK();
                LOCK();
                pTVar20->SharedReferenceCount =
                     (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
                UNLOCK();
LAB_146bd160b:
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar20);
              }
              pTVar20 = local_res20;
              if (TVar25.DebugPtr != (UMovieSceneCapture *)0x0) {
                pTVar15 = (TSharedPtr<FJsonObject,1> *)
                          (**(code **)(TVar25.DebugPtr)->_padding_)(TVar25.DebugPtr);
                pTVar16 = &TSharedPtr<FJsonObject,1>::operator->(pTVar15)->Values;
                bVar2 = FJsonObjectConverter::JsonAttributesToUStruct
                                  (pTVar16,(UStruct *)local_298,TVar14.DebugPtr,0,0,false,
                                   (FText *)0x0,
                                   (TDelegate<bool___cdecl(TSharedPtr<FJsonValue,1>_const_&,FProperty_*,void_*),FDefaultDelegateUserPolicy>
                                    *)0x0);
                pTVar20 = local_res20;
                if (bVar2) {
                  if (((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)local_290.Object ==
                       (TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                        *)0x0) &&
                     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValid()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                         ,0x458,L""), bVar2)) {
                    pcVar1 = (code *)swi(3);
                    pIVar8 = (IMovieSceneCaptureInterface *)(*pcVar1)();
                    return pIVar8;
                  }
                  pFVar17 = local_290.Object;
                  local_1a8 = L"AdditionalData";
                  uStack_1a0 = 0xe;
                  local_e8._12_4_ = uStack_19c;
                  local_e8.Size = 0xe;
                  local_e8.DataPtr = L"AdditionalData";
                  uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(0xe,L"AdditionalData");
                  pTVar9 = TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                           ::FindByHash<TStringView<wchar_t>_>
                                     ((TMapBase<FString,TSharedPtr<FJsonValue,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TSharedPtr<FJsonValue,1>,0>_>
                                       *)pFVar17,uVar4,&local_e8);
                  pUVar12 = local_190;
                  if ((pTVar9 == (TSharedPtr<FJsonValue,1> *)0x0) ||
                     (pFVar26 = pTVar9->Object, pFVar26 == (FJsonValue *)0x0)) {
                    local_d8 = 0;
                    uStack_d0 = 0;
                    local_298 = (UClass *)0x0;
                    bVar2 = false;
                    pFVar26 = (FJsonValue *)0x0;
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)0x0);
                  }
                  else {
                    pUVar12 = (UClass *)(pTVar9->SharedReferenceCount).ReferenceController;
                    if (pUVar12 != (UClass *)0x0) {
                      LOCK();
                      *(int *)&pUVar12->_padding_ = (int)pUVar12->_padding_ + 1;
                      UNLOCK();
                    }
                    bVar2 = true;
                    local_298 = pUVar12;
                    local_198 = pFVar26;
                    local_190 = pUVar12;
                    if (pUVar12 != (UClass *)0x0) {
                      LOCK();
                      *(int *)&pUVar12->_padding_ = (int)pUVar12->_padding_ + 1;
                      UNLOCK();
                    }
                  }
                  if (bVar2) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)pUVar12);
                  }
                  if (pFVar26 != (FJsonValue *)0x0) {
                    pTVar15 = (TSharedPtr<FJsonObject,1> *)(**(code **)pFVar26->_padding_)(pFVar26);
                    pFVar17 = TSharedPtr<FJsonObject,1>::operator*<FJsonObject>(pTVar15);
                    UMovieSceneCapture::DeserializeJson(TVar14.DebugPtr,pFVar17);
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)local_298);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_res20);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline((TReferenceControllerBase<1> *)TVar21.DebugPtr);
                  goto LAB_146bd1780;
                }
              }
              goto LAB_146bd184c;
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar21.DebugPtr);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_218.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_290.SharedReferenceCount.ReferenceController);
        TVar21.DebugPtr = TVar24.DebugPtr;
        if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_280.Data.AllocatorInstance.Data);
          TVar21.DebugPtr = TVar23.DebugPtr;
        }
        goto LAB_146bd1a1e;
      }
LAB_146bd1780:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_218.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_290.SharedReferenceCount.ReferenceController);
    }
    if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data.AllocatorInstance.Data);
    }
    if (TVar14.DebugPtr == (UMovieSceneCapture *)0x0) {
LAB_146bd17a7:
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Capture != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneCapture\\Private\\MovieSceneCaptureModule.cpp"
                         ,0xbe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar8 = (IMovieSceneCaptureInterface *)(*pcVar1)();
        return pIVar8;
      }
    }
  }
  puVar18 = (uint *)(**(code **)((TVar14.DebugPtr)->_padding_ + 0x28))
                              (&(TVar14.DebugPtr)->_padding_,local_res18);
  (this->StartupMovieCaptureHandle).ID = *puVar18;
  pFVar19 = FActiveMovieSceneCaptures::Get();
  local_250 = TVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (TVar14.DebugPtr == (UMovieSceneCapture *)0x0)) {
    TArray<TObjectPtr<UMovieSceneCapture>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UMovieSceneCapture>_>
              (&pFVar19->ActiveCaptures,(TObjectPtr<UMovieSceneCapture> *)&local_250.ObjectPtr);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FMovieSceneCaptureModule::InitializeFromCommandLine_::__l2::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &(TVar14.DebugPtr)->OnCaptureFinishedDelegate,local_1f8);
    TVar21.DebugPtr = TVar24.DebugPtr;
    if (TVar14.DebugPtr == (UMovieSceneCapture *)0x0) goto LAB_146bd1a1e;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)TVar14.DebugPtr);
    TArray<TObjectPtr<UMovieSceneCapture>,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<TObjectPtr<UMovieSceneCapture>_>
              (&pFVar19->ActiveCaptures,(TObjectPtr<UMovieSceneCapture> *)&local_250.ObjectPtr);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddLambda<_FMovieSceneCaptureModule::InitializeFromCommandLine_::__l2::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &(TVar14.DebugPtr)->OnCaptureFinishedDelegate,local_1f8);
  }
  TVar21 = (TObjectPtr<UMovieSceneCapture>_u_0)&(TVar14.DebugPtr)->_padding_;
LAB_146bd1a1e:
  if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_270.Data.AllocatorInstance.Data);
  }
  if (local_2a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2a8.Data.AllocatorInstance.Data);
  }
  return (IMovieSceneCaptureInterface *)TVar21.DebugPtr;
}

// CreateMovieSceneCapture @ 146bd1a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

IMovieSceneCaptureInterface * __thiscall
FMovieSceneCaptureModule::CreateMovieSceneCapture
          (FMovieSceneCaptureModule *this,TSharedPtr<FSceneViewport,1> *param_1)

{
  code *pcVar1;
  UPackage *pUVar2;
  UClass *pUVar3;
  UMovieSceneCapture *this_00;
  longlong *plVar4;
  IMovieSceneCaptureInterface *pIVar5;
  undefined1 auStack_c8 [32];
  FSceneViewport *local_a8;
  TReferenceControllerBase<1> *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar2 = GetTransientPackage();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UMovieSceneCapture::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar3);
  local_98._8_8_ = pUVar2;
  this_00 = (UMovieSceneCapture *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar4 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pcVar1 = *(code **)(this_00->_padding_ + 0x10);
  local_a8 = param_1->Object;
  local_a0 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_a0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_a0->SharedReferenceCount = (atomic<int>)((int)local_a0->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar1)(&this_00->_padding_,&local_a8,0xffffffff);
  UMovieSceneCapture::StartCapture(this_00);
  pIVar5 = (IMovieSceneCaptureInterface *)&this_00->_padding_;
  if (this_00 == (UMovieSceneCapture *)0x0) {
    pIVar5 = (IMovieSceneCaptureInterface *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return pIVar5;
}

// RetrieveMovieSceneInterface @ 146bd1b70

IMovieSceneCaptureInterface * __thiscall
FMovieSceneCaptureModule::RetrieveMovieSceneInterface
          (FMovieSceneCaptureModule *this,FMovieSceneCaptureHandle param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FActiveMovieSceneCaptures *pFVar4;
  uint *puVar5;
  IMovieSceneCaptureInterface *pIVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  pFVar4 = FActiveMovieSceneCaptures::Get();
  pFVar7 = (pFVar4->ActiveCaptures).AllocatorInstance.Data;
  iVar2 = (pFVar4->ActiveCaptures).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar4->ActiveCaptures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneCapture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar7 == pFVar1) break;
    pFVar7 = pFVar7 + 8;
  }
  pFVar7 = (pFVar4->ActiveCaptures).AllocatorInstance.Data;
  iVar2 = (pFVar4->ActiveCaptures).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar4->ActiveCaptures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMovieSceneCapture_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar7 == pFVar1) break;
    lVar3 = *(longlong *)pFVar7;
    puVar5 = (uint *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x28))
                               ((IMovieSceneCaptureInterface *)(lVar3 + 0x28),local_res20);
    if (*puVar5 == param_1.ID) {
      pIVar6 = (IMovieSceneCaptureInterface *)(lVar3 + 0x28);
      if (lVar3 == 0) {
        pIVar6 = (IMovieSceneCaptureInterface *)0x0;
      }
      return pIVar6;
    }
    pFVar7 = pFVar7 + 8;
  }
  return (IMovieSceneCaptureInterface *)0x0;
}

// GetFirstActiveMovieSceneCapture @ 146bd1c30

IMovieSceneCaptureInterface * __thiscall
FMovieSceneCaptureModule::GetFirstActiveMovieSceneCapture(FMovieSceneCaptureModule *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FActiveMovieSceneCaptures *pFVar4;
  IMovieSceneCaptureInterface *pIVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  
  pFVar4 = FActiveMovieSceneCaptures::Get();
  pFVar6 = (pFVar4->ActiveCaptures).AllocatorInstance.Data;
  iVar2 = (pFVar4->ActiveCaptures).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar4->ActiveCaptures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneCapture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar1) break;
    pFVar6 = pFVar6 + 8;
  }
  if ((pFVar4->ActiveCaptures).ArrayNum < 1) {
    pIVar5 = (IMovieSceneCaptureInterface *)0x0;
  }
  else {
    lVar3 = *(longlong *)(pFVar4->ActiveCaptures).AllocatorInstance.Data;
    pIVar5 = (IMovieSceneCaptureInterface *)(lVar3 + 0x28);
    if (lVar3 == 0) {
      pIVar5 = (IMovieSceneCaptureInterface *)0x0;
    }
  }
  return pIVar5;
}

// DestroyMovieSceneCapture @ 146bd1cb0

void __thiscall
FMovieSceneCaptureModule::DestroyMovieSceneCapture
          (FMovieSceneCaptureModule *this,FMovieSceneCaptureHandle param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  FActiveMovieSceneCaptures *pFVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  pFVar4 = FActiveMovieSceneCaptures::Get();
  pFVar6 = (pFVar4->ActiveCaptures).AllocatorInstance.Data;
  iVar2 = (pFVar4->ActiveCaptures).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar4->ActiveCaptures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UMovieSceneCapture>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar6 == pFVar1) break;
    pFVar6 = pFVar6 + 8;
  }
  pFVar6 = (pFVar4->ActiveCaptures).AllocatorInstance.Data;
  iVar2 = (pFVar4->ActiveCaptures).ArrayNum;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((pFVar4->ActiveCaptures).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UMovieSceneCapture_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (pFVar6 == pFVar1) break;
    lVar3 = *(longlong *)pFVar6;
    puVar5 = (uint *)(**(code **)(*(longlong *)(lVar3 + 0x28) + 0x28))(lVar3 + 0x28,local_res20);
    if (*puVar5 == param_1.ID) {
      (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))(lVar3 + 0x28);
      return;
    }
    pFVar6 = pFVar6 + 8;
  }
  return;
}

// DestroyAllActiveCaptures @ 146bd1d60

void __thiscall FMovieSceneCaptureModule::DestroyAllActiveCaptures(FMovieSceneCaptureModule *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPreExit,this);
  PreExit(this);
  return;
}

// OnPostLoadMap @ 146be45c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FMovieSceneCaptureModule::OnPostLoadMap(FMovieSceneCaptureModule *this,UWorld *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  UEngine *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong local_18;
  TReferenceControllerBase<1> *local_10;
  
  pUVar4 = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar6 = Z_Construct_UClass_UGameEngine_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
         == &pUVar6->_padding_)) && ((this->StartupMovieCaptureHandle).ID != 0)) {
      if (pUVar4[1]._padding_ == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar7 = (**(code **)(**(longlong **)(pUVar4[1]._padding_ + 0x48) + 0x30))();
      if (lVar7 == 0) {
        FWindowsPlatformMisc::RequestExit(false,L"FMovieSceneCaptureModule::OnPostLoadMap");
      }
      else {
        plVar8 = (longlong *)
                 (**(code **)(this->_padding_ + 0x58))(this,(this->StartupMovieCaptureHandle).ID);
        pcVar3 = *(code **)(*plVar8 + 0x10);
        if (pUVar4[1]._padding_ == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        lVar7 = pUVar4[1]._padding_;
        pTVar2 = (TReferenceControllerBase<1> *)pUVar4[1]._padding_;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_18 = lVar7;
        local_10 = pTVar2;
        (*pcVar3)(plVar8,&local_18,0xffffffff);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      }
    }
  }
  (this->StartupMovieCaptureHandle).ID = 0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreUObjectDelegates::PostLoadMapWithWorld,this);
  return;
}

// PreExit @ 146be5110

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FMovieSceneCaptureModule::PreExit(FMovieSceneCaptureModule *this)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  TUniquePtr<FActiveMovieSceneCaptures,TDefaultDelete<FActiveMovieSceneCaptures>_> TVar3;
  FActiveMovieSceneCaptures *pFVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar4 = FActiveMovieSceneCaptures::Get();
  pFVar1 = (pFVar4->ActiveCaptures).AllocatorInstance.Data;
  uVar2 = (pFVar4->ActiveCaptures).ArrayNum;
  (pFVar4->ActiveCaptures).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar4->ActiveCaptures).ArrayNum = 0;
  (pFVar4->ActiveCaptures).ArrayMax = 0;
  for (pFVar5 = pFVar1; TVar3.Ptr = FActiveMovieSceneCaptures::Singleton.Ptr,
      pFVar5 != pFVar1 + (longlong)(int)uVar2 * 8; pFVar5 = pFVar5 + 8) {
    UMovieSceneCapture::Finalize(*(UMovieSceneCapture **)pFVar5);
  }
  if (FActiveMovieSceneCaptures::Singleton.Ptr != (FActiveMovieSceneCaptures *)0x0) {
    FActiveMovieSceneCaptures::Singleton.Ptr = (FActiveMovieSceneCaptures *)0x0;
    (**(code **)(TVar3.Ptr)->_padding_)(TVar3.Ptr,1);
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

