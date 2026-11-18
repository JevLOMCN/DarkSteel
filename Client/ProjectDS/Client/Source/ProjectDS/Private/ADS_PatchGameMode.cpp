// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b557480

UClass * __cdecl ADS_PatchGameMode::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PatchGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PatchGameMode",
               &Z_Registration_Info_UClass_ADS_PatchGameMode.InnerSingleton,
               StaticRegisterNativesADS_PatchGameMode,0x368,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_PatchGameMode>,
               InternalVTableHelperCtorCaller<ADS_PatchGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PatchGameMode.InnerSingleton;
}

// ADS_PatchGameMode @ 14b559ac0

ADS_PatchGameMode * __thiscall
ADS_PatchGameMode::ADS_PatchGameMode(ADS_PatchGameMode *this,FVTableHelper *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_PatchGameMode__6B_;
  (this->PatchWidget).field0_0x0.DebugPtr = (UDS_UserWidget *)0x0;
  (this->PakDownloader).field0_0x0.DebugPtr = (UWN_PakDownloader *)0x0;
  return this;
}

// ~ADS_PatchGameMode @ 14b55b150

void __thiscall ADS_PatchGameMode::~ADS_PatchGameMode(ADS_PatchGameMode *this)

{
  this->_padding_ = (longlong)&___7ADS_PatchGameMode__6B_;
  AGameModeBase::~AGameModeBase((AGameModeBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b55ca70

UClass * __cdecl ADS_PatchGameMode::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_PatchGameMode.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PatchGameMode",
               &Z_Registration_Info_UClass_ADS_PatchGameMode.InnerSingleton,
               StaticRegisterNativesADS_PatchGameMode,0x368,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<ADS_PatchGameMode>,
               InternalVTableHelperCtorCaller<ADS_PatchGameMode>,local_res8,
               AGameModeBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_PatchGameMode.InnerSingleton;
}

// StaticRegisterNativesADS_PatchGameMode @ 14b55d2a0

void __cdecl ADS_PatchGameMode::StaticRegisterNativesADS_PatchGameMode(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_ADS_PatchGameMode_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnOpenPatchUICallback @ 14b55e640

void __cdecl
ADS_PatchGameMode::execOnOpenPatchUICallback(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *_Src;
  size_t _Size;
  FName local_48;
  FName FStack_40;
  void *local_38;
  undefined8 local_30;
  FSoftObjectPath local_28;
  
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FStack_40.ComparisonIndex.Value = 0;
  FStack_40.Number = 0;
  local_38 = (void *)0x0;
  local_30 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  _Src = local_38;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)(int)local_30;
  local_28.SubPathString.Data.ArrayNum = (int)local_30;
  local_28.AssetPath.PackageName = local_48;
  local_28.AssetPath.AssetName = FStack_40;
  if ((int)local_30 == 0) {
    local_28.SubPathString.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_30,0,(ForAnyElementType *)&local_28.SubPathString,(int)local_30,
               &local_28.SubPathString.Data.ArrayMax);
    memcpy(local_28.SubPathString.Data.AllocatorInstance.Data,_Src,_Size);
  }
  OnOpenPatchUICallback((ADS_PatchGameMode *)param_1,&local_28);
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// ADS_PatchGameMode @ 14b998db0

ADS_PatchGameMode * __thiscall
ADS_PatchGameMode::ADS_PatchGameMode(ADS_PatchGameMode *this,FObjectInitializer *param_1)

{
  AGameModeBase::AGameModeBase((AGameModeBase *)this,param_1);
  this->_padding_ = (longlong)&___7ADS_PatchGameMode__6B_;
  (this->PatchWidget).field0_0x0.DebugPtr = (UDS_UserWidget *)0x0;
  (this->PakDownloader).field0_0x0.DebugPtr = (UWN_PakDownloader *)0x0;
  return this;
}

// ChangeLoginGameState @ 14b99c600

void __thiscall ADS_PatchGameMode::ChangeLoginGameState(ADS_PatchGameMode *this)

{
  FString *pFVar1;
  FName *pFVar2;
  FName local_res10 [3];
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"");
  pFVar2 = ::FName::FName(local_res10,"DSMap");
  UGameplayStatics::OpenLevel((UObject *)this,*pFVar2,true,pFVar1);
  return;
}

// DeletePakDownloader @ 14b9a6c90

void __thiscall ADS_PatchGameMode::DeletePakDownloader(ADS_PatchGameMode *this)

{
  UWN_PakDownloader *pUVar1;
  
  pUVar1 = (this->PakDownloader).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_PakDownloader *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar1->OnPostProcessCallback);
    (this->PakDownloader).field0_0x0.DebugPtr = (UWN_PakDownloader *)0x0;
  }
  return;
}

// EndPlay @ 14b9a76d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_PatchGameMode::EndPlay(ADS_PatchGameMode *this,Type param_1)

{
  UWN_PakDownloader *pUVar1;
  UDS_UserWidget *pUVar2;
  
  AActor::EndPlay((AActor *)this,param_1);
  pUVar1 = (this->PakDownloader).field0_0x0.DebugPtr;
  if (pUVar1 != (UWN_PakDownloader *)0x0) {
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar1->OnPostProcessCallback);
    (this->PakDownloader).field0_0x0.DebugPtr = (UWN_PakDownloader *)0x0;
  }
  pUVar2 = (this->PatchWidget).field0_0x0.DebugPtr;
  if (pUVar2 != (UDS_UserWidget *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2d0))();
    (this->PatchWidget).field0_0x0.DebugPtr = (UDS_UserWidget *)0x0;
  }
  return;
}

// GetInst @ 14b9aebb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TWeakObjectPtr<ADS_PatchGameMode,FWeakObjectPtr> __cdecl ADS_PatchGameMode::GetInst(void)

{
  TObjectPtr<AGameModeBase> *this;
  bool bVar1;
  UWorld *pUVar2;
  UClass *pUVar3;
  FWeakObjectPtr in_RCX;
  AGameModeBase *pAVar4;
  AGameModeBase *local_res10;
  
  if ((UDS_GameInstance::StaticInstance != (UDS_GameInstance *)0x0) &&
     (pUVar2 = UGameInstance::GetWorld((UGameInstance *)UDS_GameInstance::StaticInstance),
     pUVar2 != (UWorld *)0x0)) {
    pAVar4 = (AGameModeBase *)0x0;
    this = &pUVar2->AuthorityGameMode;
    if ((this->field0_0x0).DebugPtr != (AGameModeBase *)0x0) {
      pUVar3 = Z_Construct_UClass_ADS_PatchGameMode_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
      if (bVar1) {
        pAVar4 = (this->field0_0x0).DebugPtr;
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AGameModeBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    *(undefined8 *)in_RCX = 0;
    local_res10 = pAVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar4 != (AGameModeBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar4);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
    return (TWeakObjectPtr<ADS_PatchGameMode,FWeakObjectPtr>)in_RCX;
  }
  *(undefined8 *)in_RCX = 0;
  local_res10 = (AGameModeBase *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)&local_res10);
  return (TWeakObjectPtr<ADS_PatchGameMode,FWeakObjectPtr>)in_RCX;
}

// GetPakDownloader @ 14b9b09b0

TWeakObjectPtr<UWN_PakDownloader,FWeakObjectPtr> __thiscall
ADS_PatchGameMode::GetPakDownloader(ADS_PatchGameMode *this)

{
  UWN_PakDownloader *pUVar1;
  FWeakObjectPtr in_RDX;
  UWN_PakDownloader *local_res8;
  
  pUVar1 = (this->PakDownloader).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UWN_PakDownloader *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UWN_PakDownloader *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UWN_PakDownloader *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UWN_PakDownloader,FWeakObjectPtr>)in_RDX;
}

// OnCompletedPakDownloaderProcess @ 14b9bd240

void __thiscall ADS_PatchGameMode::OnCompletedPakDownloaderProcess(ADS_PatchGameMode *this)

{
  FString *pFVar1;
  FName *pFVar2;
  FName local_res10 [3];
  FString local_18;
  
  pFVar1 = ::FString::FString(&local_18,L"");
  pFVar2 = ::FName::FName(local_res10,"DSMap");
  UGameplayStatics::OpenLevel((UObject *)this,*pFVar2,true,pFVar1);
  return;
}

// OnOpenPatchUICallback @ 14b9bdc70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
ADS_PatchGameMode::OnOpenPatchUICallback(ADS_PatchGameMode *this,FSoftObjectPath *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  UDS_GameInstance *this_00;
  bool bVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  FName FVar8;
  UWorld *pUVar9;
  UDS_UserWidget *pUVar10;
  UWN_PakDownloader *pUVar11;
  FDS_ViewModelContext *pFVar12;
  UScriptStruct *pUVar13;
  UDS_ViewModelContextManager *this_01;
  longlong *plVar14;
  FDS_ViewModelContext *pFVar15;
  undefined1 auStackY_368 [32];
  TSharedPtr<FDS_ViewModelContext,1> local_338;
  FWeakObjectPtr local_328;
  UObject *local_320;
  UDS_UserWidget *local_318;
  undefined1 local_310 [16];
  FDS_ViewModelContext *pFStack_300;
  undefined1 local_2f8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  this_00 = UDS_GameInstance::StaticInstance;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  if (UDS_GameInstance::StaticInstance == (UDS_GameInstance *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_278._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_278,"ADS_PatchGameMode::OnOpenPatchUICallback",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_278.Ptr,0x51,L"gameInst is nullptr.");
      if ((void *)local_278._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_278._padding_);
      }
    }
  }
  else {
    pUVar6 = FSoftObjectPath::ResolveObject(param_1);
    if (pUVar6 != (UObject *)0x0) {
      pUVar7 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) {
        FVar8 = DS_Util::GetUniqueClassName((UClass *)local_310);
        FVar8 = *(FName *)FVar8;
        local_320 = pUVar6;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar6);
        }
        pUVar9 = UGameInstance::GetWorld((UGameInstance *)this_00);
        pUVar10 = CreateWidget<UDS_UserWidget,UWorld_*>
                            (pUVar9,(TSubclassOf<UUserWidget>)&local_320,FVar8);
        if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
           (pUVar10 == (UDS_UserWidget *)0x0)) {
          (this->PatchWidget).field0_0x0.DebugPtr = pUVar10;
          if (pUVar10 == (UDS_UserWidget *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            if (pUVar5 != (UDS_LogManager *)0x0) {
              pUVar5 = UDS_LogManager::GetInst();
              local_158._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_158,"ADS_PatchGameMode::OnOpenPatchUICallback",0x28,Yes);
              UDS_LogManager::PrintLog
                        (pUVar5,1,Warning,local_158.Ptr,0x5b,L"patchWidget is nullptr.");
              if ((void *)local_158._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_158._padding_);
              }
            }
            goto LAB_14b9be0bf;
          }
        }
        else {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
          (this->PatchWidget).field0_0x0.DebugPtr = pUVar10;
        }
        UUserWidget::AddToViewport((UUserWidget *)pUVar10,0);
        (**(code **)(((this->PatchWidget).field0_0x0.DebugPtr)->_padding_ + 0x4e0))();
        pUVar10 = (this->PatchWidget).field0_0x0.DebugPtr;
        (**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,4);
        pUVar10 = (this->PatchWidget).field0_0x0.DebugPtr;
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar10,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar7 = Z_Construct_UClass_UWN_PakDownloader_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_2f8,pUVar7);
        local_2f8._8_8_ = pUVar10;
        pUVar11 = (UWN_PakDownloader *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2f8);
        if (local_2f8._64_8_ != 0) {
          plVar14 = (longlong *)(local_2f8 + 0x50);
          if ((longlong *)local_2f8._104_8_ != (longlong *)0x0) {
            plVar14 = (longlong *)local_2f8._104_8_;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar11 != (UWN_PakDownloader *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar11);
        }
        (this->PakDownloader).field0_0x0.DebugPtr = pUVar11;
        pFVar12 = ::operator_new(0x20);
        local_338.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pFVar15 = (FDS_ViewModelContext *)local_338.SharedReferenceCount.ReferenceController;
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          *(undefined4 *)&pFVar12->field_0x1c = 0;
          pFVar12->_padding_ = (longlong)&___7FDS_ViewModelContext__6B_;
          *(undefined8 *)&pFVar12->DerivedStaticStruct = 0;
          (pFVar12->ViewModelName).ComparisonIndex = 0;
          (pFVar12->ViewModelName).Number = 0;
          pFVar12->ViewModelTemplateKey = None;
          pFVar15 = pFVar12;
        }
        local_338.Object = pFVar15;
        pFVar12 = ::operator_new(0x20);
        if (pFVar12 != (FDS_ViewModelContext *)0x0) {
          *(atomic<int> *)&pFVar12->DerivedStaticStruct = (atomic<int>)0x1;
          *(code **)&(pFVar12->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
          pFVar12->_padding_ =
               (longlong)
               &
               ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext__P6AXPEAU1__Z_00_SharedPointerInternals__6B_
          ;
          ((atomic<int> *)&pFVar12->DerivedStaticStruct)[1] = (atomic<int>)0x1;
          *(FDS_ViewModelContext **)&pFVar12->ViewModelTemplateKey = pFVar15;
          local_338.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)pFVar12;
        }
        if ((local_338.Object == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar15 = local_338.Object;
        pUVar13 = FDS_ViewModelContext::StaticStruct();
        *(UScriptStruct **)&pFVar15->DerivedStaticStruct = pUVar13;
        this_01 = UDS_ViewModelContextManager::GetInst();
        if (this_01 != (UDS_ViewModelContextManager *)0x0) {
          UDS_ViewModelContextManager::RegisterContext(this_01,&local_338);
        }
        if ((local_338.Object == (FDS_ViewModelContext *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        (local_338.Object)->ViewModelTemplateKey = W_Patcher;
        local_310._8_8_ = local_338.Object;
        pFStack_300 = (FDS_ViewModelContext *)local_338.SharedReferenceCount.ReferenceController;
        if ((FDS_ViewModelContext *)local_338.SharedReferenceCount.ReferenceController !=
            (FDS_ViewModelContext *)0x0) {
          LOCK();
          (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        pUVar10 = (this->PatchWidget).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar10 != (UDS_UserWidget *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar10 != (UDS_UserWidget *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
        }
        local_328.ObjectIndex = 0;
        local_328.ObjectSerialNumber = 0;
        local_318 = pUVar10;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar10 != (UDS_UserWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar10);
        }
        FWeakObjectPtr::operator=(&local_328,(FObjectPtr)&local_318);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_328,
                   (TSharedPtr<FDS_ViewModelContext,1> *)(local_310 + 8),false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_338.SharedReferenceCount.ReferenceController);
      }
    }
  }
LAB_14b9be0bf:
  pFVar2 = (param_1->SubPathString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// OpenPatchUI @ 14b9bf560

void __thiscall ADS_PatchGameMode::OpenPatchUI(ADS_PatchGameMode *this)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  ForAnyElementType _Src;
  FString *pFVar3;
  UAssetManager *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  size_t _Size;
  ADS_PatchGameMode *local_res10;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  TStringView<wchar_t> local_a8;
  undefined1 local_98 [24];
  FSoftObjectPath local_80;
  TSharedPtr<FStreamableHandle,1> local_60;
  undefined1 local_48 [16];
  char *local_38;
  FDelegateAllocation *local_30;
  
  pFVar3 = ::FString::FString((FString *)&local_60,L"/Game/Patcher/UI/W_Patcher");
  pFVar3 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_c8,pFVar3,false);
  local_80.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_80.AssetPath.PackageName.Number = 0;
  local_80.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_80.AssetPath.AssetName.Number = 0;
  local_80.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.SubPathString.Data.ArrayNum = 0;
  local_80.SubPathString.Data.ArrayMax = 0;
  local_a8.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  iVar2 = (pFVar3->Data).ArrayNum;
  local_a8.Size = iVar2 + -1;
  if (iVar2 == 0) {
    local_a8.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_80,&local_a8);
  if ((atomic<unsigned___int64>)local_c8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  if (local_60.Object != (FStreamableHandle *)0x0) {
    FMemory::Free(local_60.Object);
  }
  pUVar4 = UAssetManager::Get();
  local_98._0_4_ = 0x49;
  local_98._4_4_ = 0x28;
  local_98._8_8_ =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\GameMode\\DS_PatchGameMode.cpp";
  local_a8.DataPtr = (wchar_t *)0x0;
  local_98._16_8_ = "void __cdecl ADS_PatchGameMode::OpenPatchUI(void)";
  local_a8.Size = 0;
  local_a8._12_4_ = 0;
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_48);
  local_30 = &local_c0;
  puVar5 = UE::Core::Private::DelegateAllocate(0x40,&local_c0);
  _Src.Data = local_80.SubPathString.Data.AllocatorInstance.Data;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = &
              ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy__UFSoftObjectPath____6B_
    ;
    pFVar1 = (ForAnyElementType *)(puVar5 + 3);
    *(FName *)(puVar5 + 1) = local_80.AssetPath.PackageName;
    *(FName *)(puVar5 + 2) = local_80.AssetPath.AssetName;
    pFVar1->Data = (FScriptContainerElement *)0x0;
    _Size = (size_t)local_80.SubPathString.Data.ArrayNum;
    *(int *)(puVar5 + 4) = local_80.SubPathString.Data.ArrayNum;
    if (local_80.SubPathString.Data.ArrayNum == 0) {
      *(int *)((longlong)puVar5 + 0x24) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,local_80.SubPathString.Data.ArrayNum,0,pFVar1,
                 local_80.SubPathString.Data.ArrayNum,(int *)((longlong)puVar5 + 0x24));
      memcpy(pFVar1->Data,_Src.Data,_Size);
    }
    uVar6 = FDelegateHandle::GenerateNewID();
    puVar5[5] = uVar6;
    *puVar5 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_PatchGameMode____A6AXXZUFDefaultDelegateUserPolicy__UFSoftObjectPath____6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_PatchGameMode *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar5[6] = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_PatchGameMode *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 6),(FObjectPtr)&local_res10);
    puVar5[7] = OnOpenPatchUICallback;
  }
  if (local_38._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_48._8_8_,(FDestructionSentinel *)local_48);
  }
  local_48._4_4_ = local_98._4_4_;
  local_48._0_4_ = local_98._0_4_;
  local_48._8_8_ = local_98._8_8_;
  local_38 = (char *)local_98._16_8_;
  FStreamableManager::
  RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
            (&pUVar4->StreamableManager,&local_60,&local_80,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8,0,false,false,
             (FString *)&local_a8,(FSourceLocation *)local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_60.SharedReferenceCount.ReferenceController);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_98);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_98[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_98._8_8_,(FDestructionSentinel *)local_98);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  if (local_80.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// StartPlay @ 14b9c6740

void __thiscall ADS_PatchGameMode::StartPlay(ADS_PatchGameMode *this)

{
  FString *pFVar1;
  FName *pFVar2;
  FName local_res10 [3];
  FString local_18;
  
  AGameModeBase::StartPlay((AGameModeBase *)this);
  pFVar1 = ::FString::FString(&local_18,L"");
  pFVar2 = ::FName::FName(local_res10,"DSMap");
  UGameplayStatics::OpenLevel((UObject *)this,*pFVar2,true,pFVar1);
  return;
}

