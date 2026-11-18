// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 28

// StaticClass @ 14dcf9b80

UClass * __cdecl UMoviePipelineConfigBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineConfigBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineConfigBase",
               &Z_Registration_Info_UClass_UMoviePipelineConfigBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineConfigBase,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineConfigBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineConfigBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineConfigBase.InnerSingleton;
}

// FindSetting<UMoviePipelineOutputSetting> @ 14dcfe180

UMoviePipelineOutputSetting * __thiscall
UMoviePipelineConfigBase::FindSetting<UMoviePipelineOutputSetting>
          (UMoviePipelineConfigBase *this,bool param_1)

{
  int iVar1;
  UMoviePipelineOutputSetting *pUVar2;
  UClass *pUVar3;
  UClass *local_res18 [2];
  
  local_res18[0] = Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar2 = (UMoviePipelineOutputSetting *)
           FindSettingByClass(this,(TSubclassOf<UMoviePipelineSetting>)local_res18,param_1,false);
  if (pUVar2 != (UMoviePipelineOutputSetting *)0x0) {
    pUVar3 = Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMoviePipelineOutputSetting *)0x0;
}

// UMoviePipelineConfigBase @ 14dd0c9b0

UMoviePipelineConfigBase * __thiscall
UMoviePipelineConfigBase::UMoviePipelineConfigBase
          (UMoviePipelineConfigBase *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->ConfigOrigin).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMoviePipelineConfigBase__6B_;
  (this->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.ArrayNum = 0;
  (this->DisplayName).Data.ArrayMax = 0;
  (this->Settings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).ArrayNum = 0;
  (this->Settings).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ConfigOrigin).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ConfigOrigin).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ConfigOrigin).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ConfigOrigin).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  return this;
}

// UMoviePipelineConfigBase @ 14dd0ca10

UMoviePipelineConfigBase * __thiscall
UMoviePipelineConfigBase::UMoviePipelineConfigBase(UMoviePipelineConfigBase *this)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this);
  this_00 = &(this->ConfigOrigin).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UMoviePipelineConfigBase__6B_;
  (this->DisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DisplayName).Data.ArrayNum = 0;
  (this->DisplayName).Data.ArrayMax = 0;
  (this->Settings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Settings).ArrayNum = 0;
  (this->Settings).ArrayMax = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->ConfigOrigin).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->ConfigOrigin).SoftObjectPtr = 0;
  *(undefined8 *)&(this->ConfigOrigin).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->ConfigOrigin).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->SettingsSerialNumber = -1;
  ::FString::operator=(&this->DisplayName,L"Unsaved Config");
  return this;
}

// ~UMoviePipelineConfigBase @ 14dd0e520

void __thiscall UMoviePipelineConfigBase::~UMoviePipelineConfigBase(UMoviePipelineConfigBase *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UMoviePipelineConfigBase__6B_;
  pvVar1 = *(void **)&(this->ConfigOrigin).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->Settings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->DisplayName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// CanSettingBeAdded @ 14dd188f0

bool __thiscall
UMoviePipelineConfigBase::CanSettingBeAdded
          (UMoviePipelineConfigBase *this,UMoviePipelineSetting *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Public\\MoviePipelineConfigBase.h"
             ,0xad,L"Pure virtual not implemented (%s)");
  return false;
}

// CopyFrom @ 14dd18f70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMoviePipelineConfigBase::CopyFrom(UMoviePipelineConfigBase *this,UMoviePipelineConfigBase *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  FName local_res18 [2];
  UObject *local_58;
  FString local_50;
  
  if ((param_1 == (UMoviePipelineConfigBase *)0x0) || (param_1 == this)) {
    return;
  }
  TPersistentObjectPtr<FSoftObjectPath>::operator=
            ((TPersistentObjectPtr<FSoftObjectPath> *)&this->ConfigOrigin,
             (TPersistentObjectPtr<FSoftObjectPath> *)&param_1->ConfigOrigin);
  iVar3 = (param_1->DisplayName).Data.ArrayNum;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange
            (&this->DisplayName,(wchar_t *)(param_1->DisplayName).Data.AllocatorInstance.Data,iVar8)
  ;
  piVar1 = &(this->Settings).ArrayMax;
  (this->Settings).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->Settings).AllocatorInstance,0,piVar1);
  }
  pFVar11 = (param_1->Settings).AllocatorInstance.Data;
  iVar3 = (param_1->Settings).ArrayNum;
  pFVar2 = pFVar11 + (longlong)iVar3 * 8;
  do {
    while( true ) {
      if ((param_1->Settings).ArrayNum != iVar3) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UMoviePipelineSetting>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar2) {
        this->SettingsSerialNumber = this->SettingsSerialNumber + 1;
        return;
      }
      pUVar9 = *(UObject **)pFVar11;
      if (pUVar9 == (UObject *)0x0) break;
      FVar4.ComparisonIndex.Value = *(uint *)&pUVar9->field_0x18;
      FVar4.Number = *(uint *)&pUVar9->field_0x1c;
      pUVar9 = StaticDuplicateObject
                         (pUVar9,(UObject *)this,FVar4,
                          RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                          RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                          RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                          RF_InheritableComponentTemplate|RF_LoadCompleted|RF_TextExportTransient|
                          RF_WasLoaded|RF_DefaultSubObject|RF_BeingRegenerated|RF_FinishDestroyed|
                          RF_BeginDestroyed|RF_NewerVersionExists|RF_NeedPostLoadSubobjects|
                          RF_NeedPostLoad|RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|
                          RF_TagGarbageTemp|RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|
                          RF_ClassDefaultObject|RF_Transactional|RF_MarkAsNative|RF_Standalone|
                          RF_Public,(UClass *)0x0,Normal,
                          PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native|
                          ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport|
                          AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                          ReachabilityFlag0);
      if (pUVar9 == (UObject *)0x0) {
LAB_14dd190f6:
        pUVar9 = (UObject *)0x0;
      }
      else {
        pUVar10 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
        iVar8 = (int)pUVar10->_padding_;
        if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar10->_padding_)) goto LAB_14dd190f6;
      }
      (**(code **)(*(longlong *)pUVar9 + 0x300))(pUVar9);
      local_58 = pUVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      pFVar5 = (this->Settings).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 < pFVar5 + (longlong)*piVar1 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->Settings).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Settings).AllocatorInstance,piVar1);
      }
      (this->Settings).ArrayNum = iVar8 + 1;
      *(UObject **)((this->Settings).AllocatorInstance.Data + (longlong)iVar8 * 8) = local_58;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_58 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_58);
      }
      (**(code **)(this->_padding_ + 0x2d0))(this,pUVar9);
LAB_14dd191dd:
      pFVar11 = pFVar11 + 8;
    }
    if ((byte)LogMovieRenderPipeline._0_1_ < 2) goto LAB_14dd191dd;
    local_res18[0] = (FName)param_1->_padding_;
    ::FName::ToString(local_res18,&local_50);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMovieRenderPipeline);
    if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14dd191dd;
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
    pFVar11 = pFVar11 + 8;
  } while( true );
}

// FindOrAddSettingByClass @ 14dd1f500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UMoviePipelineSetting * __thiscall
UMoviePipelineConfigBase::FindOrAddSettingByClass
          (UMoviePipelineConfigBase *this,TSubclassOf<UMoviePipelineSetting> param_1,bool param_2,
          bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FName FVar4;
  FName FVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  UMoviePipelineSetting *pUVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  UClass *pUVar12;
  longlong *plVar13;
  longlong lVar14;
  ForAnyElementType FVar15;
  undefined1 auStack_158 [32];
  UMoviePipelineSetting **local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  UMoviePipelineSetting *local_108;
  FName local_100;
  UObject *local_f8;
  FName local_f0;
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_f8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_f8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_f8);
  }
  pUVar9 = FindSettingByClass(this,(TSubclassOf<UMoviePipelineSetting>)&local_f8,param_2,param_3);
  if (pUVar9 == (UMoviePipelineSetting *)0x0) {
    lVar14 = *(longlong *)param_1.Class.field0_0x0;
    pUVar12 = (UClass *)0x0;
    local_100.ComparisonIndex.Value = 0;
    local_100.Number = 0;
    pUVar11 = pUVar12;
    if ((lVar14 != 0) &&
       (pUVar10 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar10 != (UClass *)0x0))
    {
      iVar8 = (int)pUVar10->_padding_;
      if ((*(int *)(lVar14 + 0x38) < iVar8) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar10->_padding_)) {
        bVar7 = false;
      }
      else {
        bVar7 = true;
      }
      if (bVar7) {
        pUVar11 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    FVar4 = local_100;
    if (local_100 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)this,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar10 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister();
    CheckIsClassChildOf_Internal(pUVar10,pUVar11);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar11);
    FVar5 = local_100;
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_100.ComparisonIndex = FVar4.ComparisonIndex.Value;
    local_100.Number = FVar4.Number;
    local_c8._16_4_ = local_100.ComparisonIndex.Value;
    local_c8._20_4_ = local_100.Number;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_100 = FVar5;
    local_c8._8_8_ = this;
    pUVar9 = (UMoviePipelineSetting *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar13 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar13 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    cVar6 = (**(code **)(this->_padding_ + 0x2c8))(this,pUVar9);
    if (cVar6 == '\0') {
      lVar14 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar14 != 0) &&
         (pUVar11 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar11 != (UClass *)0x0)
         ) {
        iVar8 = (int)pUVar11->_padding_;
        if ((*(int *)(lVar14 + 0x38) < iVar8) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar8 * 8) !=
            &pUVar11->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        if (bVar7) {
          pUVar12 = *(UClass **)param_1.Class.field0_0x0;
        }
      }
      local_f0 = (FName)pUVar12->_padding_;
      ::FName::ToString(&local_f0,&local_d8);
      ::FString::PrintfImpl
                (&local_e8,L"Setting %s is not compatible with this Config Type and was not added.")
      ;
      FVar15.Data = (FScriptContainerElement *)L"";
      if (local_e8.Data.ArrayNum != 0) {
        FVar15.Data = local_e8.Data.AllocatorInstance.Data;
      }
      FFrame::KismetExecutionMessage((wchar_t *)FVar15.Data,Error,(FName)0x0);
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      pUVar9 = (UMoviePipelineSetting *)0x0;
    }
    else {
      local_108 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UMoviePipelineSetting *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      pFVar2 = (this->Settings).AllocatorInstance.Data;
      if ((pFVar2 <= (FScriptContainerElement *)&local_108) &&
         (lVar14 = (longlong)(this->Settings).ArrayMax,
         (FScriptContainerElement *)&local_108 < pFVar2 + lVar14 * 8)) {
        local_120 = (longlong)(this->Settings).ArrayNum;
        local_118 = 8;
        local_138 = &local_108;
        local_130 = pFVar2;
        local_128 = lVar14;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pUVar9 = (UMoviePipelineSetting *)(*pcVar3)();
          return pUVar9;
        }
      }
      iVar8 = (this->Settings).ArrayNum;
      piVar1 = &(this->Settings).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this->Settings).AllocatorInstance,piVar1);
      }
      (this->Settings).ArrayNum = iVar8 + 1;
      *(UMoviePipelineSetting **)((this->Settings).AllocatorInstance.Data + (longlong)iVar8 * 8) =
           local_108;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_108 != (UMoviePipelineSetting *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_108);
      }
      (**(code **)(this->_padding_ + 0x2d0))(this,pUVar9);
      this->SettingsSerialNumber = this->SettingsSerialNumber + 1;
    }
  }
  return pUVar9;
}

// FindSettingByClass @ 14dd1fc00

UMoviePipelineSetting * __thiscall
UMoviePipelineConfigBase::FindSettingByClass
          (UMoviePipelineConfigBase *this,TSubclassOf<UMoviePipelineSetting> param_1,bool param_2,
          bool param_3)

{
  UMoviePipelineSetting *pUVar1;
  UObject *local_res10;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res10 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  FindSettingsByClass(this,&local_18,(TSubclassOf<UMoviePipelineSetting>)&local_res10,param_2,
                      param_3);
  if (local_18.ArrayNum < 1) {
    pUVar1 = (UMoviePipelineSetting *)0x0;
  }
  else {
    pUVar1 = *(UMoviePipelineSetting **)local_18.AllocatorInstance.Data;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return pUVar1;
}

// FindSettingsByClass @ 14dd1fc90

TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineConfigBase::FindSettingsByClass
          (UMoviePipelineConfigBase *this,
          TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TSubclassOf<UMoviePipelineSetting> param_1,bool param_2,bool param_3)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  UClass *pUVar7;
  longlong lVar8;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 local_res8 [8];
  longlong *local_48;
  longlong *local_40;
  int local_38;
  
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_40);
  iVar4 = local_38;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  plVar1 = local_40 + local_38;
  plVar10 = local_40;
  do {
    if (local_38 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar10 == plVar1) {
      if (local_40 != (longlong *)0x0) {
        FMemory::Free(local_40);
      }
      return __return_storage_ptr__;
    }
    local_48 = (longlong *)*plVar10;
    if (local_48 != (longlong *)0x0) {
      lVar8 = *(longlong *)param_1.Class.field0_0x0;
      if (param_3) {
        if ((lVar8 != 0) &&
           (pUVar7 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar7 != (UClass *)0x0)
           ) {
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar8 + 0x38) < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar7->_padding_)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if (bVar11) {
            bVar11 = *(longlong *)param_1.Class.field0_0x0 == local_48[2];
            goto LAB_14dd1fdef;
          }
        }
        bVar11 = local_48[2] == 0;
      }
      else {
        if ((lVar8 == 0) ||
           (pUVar7 = Z_Construct_UClass_UMoviePipelineSetting_NoRegister(), pUVar7 == (UClass *)0x0)
           ) {
LAB_14dd1fdc8:
          lVar8 = 0;
        }
        else {
          iVar6 = (int)pUVar7->_padding_;
          if ((*(int *)(lVar8 + 0x38) < iVar6) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar6 * 8) !=
              &pUVar7->_padding_)) {
            bVar11 = false;
          }
          else {
            bVar11 = true;
          }
          if (!bVar11) goto LAB_14dd1fdc8;
          lVar8 = *(longlong *)param_1.Class.field0_0x0;
        }
        if ((*(int *)(local_48[2] + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (*(longlong *)(*(longlong *)(local_48[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
            != lVar8 + 0x30)) {
          bVar11 = false;
        }
        else {
          bVar11 = true;
        }
      }
LAB_14dd1fdef:
      if ((bVar11) &&
         ((cVar5 = (**(code **)(*local_48 + 0x328))(local_48), cVar5 != '\0' || (param_2)))) {
        pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
           (((FScriptContainerElement *)&local_48 <
             pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8 &&
            (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar11)))) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar9;
        }
        iVar6 = __return_storage_ptr__->ArrayNum;
        if (iVar6 == __return_storage_ptr__->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar6 + 1;
        *(longlong **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_48;
      }
    }
    plVar10 = plVar10 + 1;
  } while( true );
}

// GetPrivateStaticClass @ 14dd2e070

UClass * __cdecl UMoviePipelineConfigBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMoviePipelineConfigBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieRenderPipelineCore",L"MoviePipelineConfigBase",
               &Z_Registration_Info_UClass_UMoviePipelineConfigBase.InnerSingleton,
               StaticRegisterNativesUMoviePipelineConfigBase,0x78,8,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UMoviePipelineConfigBase>,
               InternalVTableHelperCtorCaller<UMoviePipelineConfigBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMoviePipelineConfigBase.InnerSingleton;
}

// GetUserSettings @ 14dd30390

TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineConfigBase::GetUserSettings
          (UMoviePipelineConfigBase *this,
          TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->Settings).ArrayNum;
  _Src = (this->Settings).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// OnSettingAdded @ 14dd39be0

void __thiscall
UMoviePipelineConfigBase::OnSettingAdded
          (UMoviePipelineConfigBase *this,UMoviePipelineSetting *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014dd39be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x300))(param_1);
  return;
}

// OnSettingRemoved @ 14dd39c00

void __thiscall
UMoviePipelineConfigBase::OnSettingRemoved
          (UMoviePipelineConfigBase *this,UMoviePipelineSetting *param_1)

{
  return;
}

// PostDuplicate @ 14dd3a3d0

void __thiscall UMoviePipelineConfigBase::PostDuplicate(UMoviePipelineConfigBase *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString *pFVar3;
  FName local_res8;
  FString local_18;
  
  local_res8 = (FName)this->_padding_;
  pFVar2 = ::FName::ToString(&local_res8,&local_18);
  pFVar3 = &this->DisplayName;
  if (pFVar3 != pFVar2) {
    pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DisplayName).Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (this->DisplayName).Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// PostRename @ 14dd3a570

void __thiscall
UMoviePipelineConfigBase::PostRename(UMoviePipelineConfigBase *this,UObject *param_1,FName param_2)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FName local_res8;
  FString local_28;
  
  local_res8 = (FName)this->_padding_;
  pFVar3 = ::FName::ToString(&local_res8,&local_28);
  pFVar1 = &this->DisplayName;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DisplayName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->DisplayName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  UObject::PostRename((UObject *)this,param_1,param_2);
  return;
}

// RemoveSetting @ 14dd3c600

void __thiscall
UMoviePipelineConfigBase::RemoveSetting
          (UMoviePipelineConfigBase *this,UMoviePipelineSetting *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UMoviePipelineSetting *pUVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  UMoviePipelineSetting *local_38 [2];
  
  local_38[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMoviePipelineSetting *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->Settings).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_38) &&
      ((FScriptContainerElement *)local_38 < pFVar2 + (longlong)(this->Settings).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->Settings).ArrayNum;
  if (iVar1 != 0) {
    iVar9 = 0;
    pFVar2 = (this->Settings).AllocatorInstance.Data;
    bVar4 = *(UMoviePipelineSetting **)pFVar2 != local_38[0];
    lVar6 = 0;
    pUVar5 = local_38[0];
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(UMoviePipelineSetting **)(pFVar2 + lVar6 * 8) != pUVar5));
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(pFVar2 + (longlong)iVar9 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pUVar5 = local_38[0];
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->Settings).ArrayNum = iVar9;
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,param_1);
  this->SettingsSerialNumber = this->SettingsSerialNumber + 1;
  return;
}

// StaticRegisterNativesUMoviePipelineConfigBase @ 14dd455e0

void __cdecl UMoviePipelineConfigBase::StaticRegisterNativesUMoviePipelineConfigBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMoviePipelineConfigBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execCopyFrom @ 14dd4e1e0

void __cdecl UMoviePipelineConfigBase::execCopyFrom(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8);
  return;
}

// execFindOrAddSettingByClass @ 14dd4e780

void __cdecl
UMoviePipelineConfigBase::execFindOrAddSettingByClass
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMoviePipelineSetting *pUVar2;
  bool bVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res18 [2];
  UObject *local_res20;
  UObject *local_38 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_38[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  pUVar2 = FindOrAddSettingByClass
                     ((UMoviePipelineConfigBase *)param_1,
                      (TSubclassOf<UMoviePipelineSetting>)local_38,bVar3,bVar4);
  *(UMoviePipelineSetting **)param_3 = pUVar2;
  return;
}

// execFindSettingByClass @ 14dd4eb00

void __cdecl
UMoviePipelineConfigBase::execFindSettingByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMoviePipelineSetting *pUVar2;
  bool bVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res18 [2];
  UObject *local_res20;
  UObject *local_38 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  local_38[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  pUVar2 = FindSettingByClass((UMoviePipelineConfigBase *)param_1,
                              (TSubclassOf<UMoviePipelineSetting>)local_38,bVar3,bVar4);
  *(UMoviePipelineSetting **)param_3 = pUVar2;
  return;
}

// execFindSettingsByClass @ 14dd4ec50

void __cdecl
UMoviePipelineConfigBase::execFindSettingsByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  bool bVar4;
  int local_res10 [2];
  int local_res18 [2];
  UObject *local_res20;
  UObject *local_48;
  TArray<UMoviePipelineSetting_*,TSizedDefaultAllocator<32>_> local_40;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  bVar3 = local_res10[0] != 0;
  local_res18[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  bVar4 = local_res18[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_48 = local_res20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  pTVar2 = FindSettingsByClass((UMoviePipelineConfigBase *)param_1,&local_40,
                               (TSubclassOf<UMoviePipelineSetting>)&local_48,bVar3,bVar4);
  if (param_3 != pTVar2) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_3 + 8) = pTVar2->ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  return;
}

// execGetConfigOrigin @ 14dd4f660

void __cdecl
UMoviePipelineConfigBase::execGetConfigOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[1].field_0x20);
  if (pUVar2 == (UObject *)0x0) {
    if (*(longlong *)(param_1 + 2) == 0) goto LAB_14dd4f6f0;
    FSoftObjectPath::TryLoad((FSoftObjectPath *)(param_1 + 2),(FUObjectSerializeContext *)0x0);
    pUVar2 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&param_1[1].field_0x20);
  }
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      *(UObject **)param_3 = pUVar2;
      return;
    }
  }
LAB_14dd4f6f0:
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetUserSettings @ 14dd52010

void __cdecl
UMoviePipelineConfigBase::execGetUserSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  void *local_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2c0))(param_1,local_18);
  if (param_3 != puVar1) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return;
}

// execRemoveSetting @ 14dd563d0

void __cdecl
UMoviePipelineConfigBase::execRemoveSetting(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res8);
  return;
}

// execSetConfigOrigin @ 14dd57330

void __cdecl
UMoviePipelineConfigBase::execSetConfigOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FSoftObjectPtr::operator=((FSoftObjectPtr *)&param_1[1].field_0x20,(FObjectPtr)&local_res10);
  return;
}

// FindSetting<UMoviePipelineColorSetting> @ 14dd65180

UMoviePipelineColorSetting * __thiscall
UMoviePipelineConfigBase::FindSetting<UMoviePipelineColorSetting>
          (UMoviePipelineConfigBase *this,bool param_1)

{
  int iVar1;
  UMoviePipelineColorSetting *pUVar2;
  UClass *pUVar3;
  UClass *local_res18 [2];
  
  local_res18[0] = Z_Construct_UClass_UMoviePipelineColorSetting_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res18[0]);
  }
  pUVar2 = (UMoviePipelineColorSetting *)
           FindSettingByClass(this,(TSubclassOf<UMoviePipelineSetting>)local_res18,param_1,false);
  if (pUVar2 != (UMoviePipelineColorSetting *)0x0) {
    pUVar3 = Z_Construct_UClass_UMoviePipelineColorSetting_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UMoviePipelineColorSetting *)0x0;
}

// FindSettings<UMoviePipelineOutputBase> @ 14dd65210

TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> * __thiscall
UMoviePipelineConfigBase::FindSettings<UMoviePipelineOutputBase>
          (UMoviePipelineConfigBase *this,
          TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> *pTVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_res8 [8];
  longlong *local_48;
  longlong *local_40;
  int local_38;
  
  (**(code **)(this->_padding_ + 0x2c0))(this,&local_40);
  iVar4 = local_38;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  plVar1 = local_40 + local_38;
  plVar11 = local_40;
  while( true ) {
    if (local_38 != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UMoviePipelineSetting_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar11 == plVar1) break;
    plVar10 = (longlong *)*plVar11;
    if (plVar10 != (longlong *)0x0) {
      pUVar8 = Z_Construct_UClass_UMoviePipelineOutputBase_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= *(int *)(plVar10[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar10[2] + 0x30) + (longlong)iVar7 * 8) ==
          &pUVar8->_padding_)) {
        cVar5 = (**(code **)(*plVar10 + 0x328))(plVar10);
        if ((cVar5 != '\0') || (param_1)) {
          pUVar8 = Z_Construct_UClass_UMoviePipelineOutputBase_NoRegister();
          iVar7 = (int)pUVar8->_padding_;
          if ((*(int *)(plVar10[2] + 0x38) < iVar7) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(plVar10[2] + 0x30) + (longlong)iVar7 * 8)
              != &pUVar8->_padding_)) {
            plVar10 = (longlong *)0x0;
          }
          pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
          local_48 = plVar10;
          if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
             ((FScriptContainerElement *)&local_48 <
              pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              pTVar9 = (TArray<UMoviePipelineOutputBase_*,TSizedDefaultAllocator<32>_> *)(*pcVar3)()
              ;
              return pTVar9;
            }
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          *(longlong **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8) =
               local_48;
        }
      }
    }
    plVar11 = plVar11 + 1;
  }
  if (local_40 != (longlong *)0x0) {
    FMemory::Free(local_40);
  }
  return __return_storage_ptr__;
}

