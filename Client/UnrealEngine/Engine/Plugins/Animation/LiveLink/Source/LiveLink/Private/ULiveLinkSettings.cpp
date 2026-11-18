// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLink
// Functions: 9

// StaticClass @ 14cff5f20

UClass * __cdecl ULiveLinkSettings::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkSettings",
               &Z_Registration_Info_UClass_ULiveLinkSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkSettings,0xe8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<ULiveLinkSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSettings.InnerSingleton;
}

// ULiveLinkSettings @ 14d014140

ULiveLinkSettings * __thiscall
ULiveLinkSettings::ULiveLinkSettings(ULiveLinkSettings *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7ULiveLinkSettings__6B_;
  (this->DefaultRoleSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultRoleSettings).ArrayNum = 0;
  (this->DefaultRoleSettings).ArrayMax = 0;
  *(undefined8 *)&this->DefaultSettingsClass = 0;
  *(undefined8 *)&(this->DefaultSettingsClass).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultSettingsClass).field_0x10 = 0;
  *(undefined8 *)&(this->DefaultSettingsClass).field_0x18 = 0;
  (this->FrameInterpolationProcessor).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultLiveLinkPreset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->bPreProcessRebroadcastFrames = false;
  this->bTranslateRebroadcastFrames = false;
  return this;
}

// ULiveLinkSettings @ 14d0141b0

ULiveLinkSettings * __thiscall ULiveLinkSettings::ULiveLinkSettings(ULiveLinkSettings *this)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this);
  this_00 = &(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7ULiveLinkSettings__6B_;
  (this->DefaultRoleSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultRoleSettings).ArrayNum = 0;
  (this->DefaultRoleSettings).ArrayMax = 0;
  *(undefined8 *)&this->DefaultSettingsClass = 0;
  *(undefined8 *)&(this->DefaultSettingsClass).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultSettingsClass).field_0x10 = 0;
  *(undefined8 *)&(this->DefaultSettingsClass).field_0x18 = 0;
  (this->FrameInterpolationProcessor).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->DefaultLiveLinkPreset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->ClockOffsetCorrectionStep = 0.0001;
  this->MessageBusPingRequestFrequency = 1.0;
  this->MessageBusHeartbeatFrequency = 1.0;
  this->MessageBusHeartbeatTimeout = 2.0;
  this->MessageBusTimeBeforeRemovingInactiveSource = 5.0;
  this->TimeWithoutFrameToBeConsiderAsInvalid = 0.5;
  this->DefaultMessageBusSourceMode = EngineTime;
  this->bPreProcessRebroadcastFrames = false;
  this->bTranslateRebroadcastFrames = false;
  (this->ValidColor).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[0x1f];
  (this->ValidColor).field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[0xe4];
  (this->ValidColor).field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[0x4b];
  (this->ValidColor).field0_0x0._s_0.A = 1.0;
  (this->InvalidColor).field0_0x0._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
  (this->InvalidColor).field0_0x0._s_0.G = FLinearColor::sRGBToLinearTable[0xb8];
  (this->InvalidColor).field0_0x0._s_0.B = FLinearColor::sRGBToLinearTable[0];
  (this->InvalidColor).field0_0x0._s_0.A = 1.0;
  this->TextSizeSource = '\x10';
  this->TextSizeSubject = '\f';
  return this;
}

// ~ULiveLinkSettings @ 14d0173d0

void __thiscall ULiveLinkSettings::~ULiveLinkSettings(ULiveLinkSettings *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7ULiveLinkSettings__6B_;
  pvVar1 = *(void **)&(this->DefaultLiveLinkPreset).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->DefaultSettingsClass).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  DestructItems<FLiveLinkRoleProjectSetting,int>
            ((FLiveLinkRoleProjectSetting *)(this->DefaultRoleSettings).AllocatorInstance.Data,
             (this->DefaultRoleSettings).ArrayNum);
  pFVar2 = (this->DefaultRoleSettings).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14d018db0

bool __thiscall
`ULiveLinkSettings::GetDefaultSettingForRole'::__l2::<lambda_1>::operator()
          (void *this,FLiveLinkRoleProjectSetting *param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  
  pUVar5 = (param_1->Role).Class.field0_0x0.DebugPtr;
  pUVar6 = (UClass *)0x0;
  pUVar7 = pUVar6;
  if ((pUVar5 != (UClass *)0x0) &&
     (pUVar4 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar4 != (UClass *)0x0)) {
    iVar1 = (int)pUVar4->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar4->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar7 = (param_1->Role).Class.field0_0x0.DebugPtr;
    }
  }
  lVar2 = *(longlong *)this;
  if ((lVar2 != 0) &&
     (pUVar5 = Z_Construct_UClass_ULiveLinkRole_NoRegister(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar6 = *(UClass **)this;
    }
  }
  return pUVar7 == pUVar6;
}

// GetDefaultSettingForRole @ 14d04b110

FLiveLinkRoleProjectSetting * __thiscall
ULiveLinkSettings::GetDefaultSettingForRole
          (ULiveLinkSettings *this,FLiveLinkRoleProjectSetting *__return_storage_ptr__,
          TSubclassOf<ULiveLinkRole> param_1)

{
  TArray<TSubclassOf<ULiveLinkFramePreProcessor>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  TSubclassOf<ULiveLinkFramePreProcessor> *pTVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  UClass *pUVar9;
  FString *pFVar10;
  FLiveLinkRoleProjectSetting *pFVar11;
  longlong lVar12;
  size_t sVar13;
  UClass *pUVar14;
  FLiveLinkRoleProjectSetting *pFVar15;
  int iVar16;
  UObject *local_res8;
  FScriptContainerElement *local_68;
  undefined4 uStack_5c;
  uint uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  FString local_28;
  
  local_res8 = *(UObject **)param_1.Class.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pFVar11 = (FLiveLinkRoleProjectSetting *)(this->DefaultRoleSettings).AllocatorInstance.Data;
  iVar16 = (this->DefaultRoleSettings).ArrayNum;
  for (pFVar15 = pFVar11; pFVar15 != pFVar11 + iVar16; pFVar15 = pFVar15 + 1) {
    bVar7 = `ULiveLinkSettings::GetDefaultSettingForRole'::__l2::<lambda_1>::operator()
                      (&local_res8,pFVar15);
    if (bVar7) {
      uVar6 = (uint)(((longlong)pFVar15 - (longlong)pFVar11) / 0x28);
      if (uVar6 != 0xffffffff) {
        uVar8 = 0;
        if ((int)uVar6 < (this->DefaultRoleSettings).ArrayNum) {
          uVar8 = ~uVar6 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar11 = (FLiveLinkRoleProjectSetting *)(*pcVar5)();
          return pFVar11;
        }
        lVar12 = (longlong)(int)uVar6;
        pFVar3 = (this->DefaultRoleSettings).AllocatorInstance.Data;
        pUVar9 = *(UClass **)(pFVar3 + lVar12 * 0x28);
        (__return_storage_ptr__->Role).Class.field0_0x0.DebugPtr = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        pUVar9 = *(UClass **)(pFVar3 + lVar12 * 0x28 + 8);
        (__return_storage_ptr__->SettingClass).Class.field0_0x0.DebugPtr = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        pUVar9 = *(UClass **)(pFVar3 + lVar12 * 0x28 + 0x10);
        (__return_storage_ptr__->FrameInterpolationProcessor).Class.field0_0x0.DebugPtr = pUVar9;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar9);
        }
        pTVar1 = &__return_storage_ptr__->FramePreProcessors;
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        piVar2 = &(__return_storage_ptr__->FramePreProcessors).ArrayMax;
        iVar16 = *(int *)(pFVar3 + lVar12 * 0x28 + 0x20);
        pTVar4 = *(TSubclassOf<ULiveLinkFramePreProcessor> **)(pFVar3 + lVar12 * 0x28 + 0x18);
        (__return_storage_ptr__->FramePreProcessors).ArrayNum = iVar16;
        if (iVar16 == 0) {
          *piVar2 = 0;
          return __return_storage_ptr__;
        }
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar16,0,&pTVar1->AllocatorInstance,iVar16,piVar2);
        ConstructItems<TSubclassOf<ULiveLinkFramePreProcessor>,TSubclassOf<ULiveLinkFramePreProcessor>,int>
                  ((pTVar1->AllocatorInstance).Data,pTVar4,iVar16);
        return __return_storage_ptr__;
      }
      break;
    }
  }
  pUVar9 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  if (*(longlong *)&(this->DefaultSettingsClass).field_0x0 == 0) goto LAB_14d04b394;
  iVar16 = 0;
  pFVar10 = FSoftObjectPath::ToString((FSoftObjectPath *)&this->DefaultSettingsClass,&local_28);
  if ((pFVar10->Data).ArrayNum == 0) {
    local_68 = (FScriptContainerElement *)0x15060d16c;
LAB_14d04b325:
    sVar13 = wcslen((wchar_t *)local_68);
    iVar16 = (int)sVar13;
  }
  else {
    local_68 = (pFVar10->Data).AllocatorInstance.Data;
    if (local_68 != (FScriptContainerElement *)0x0) goto LAB_14d04b325;
  }
  pUVar14 = Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
  local_48._8_8_ = (ulonglong)uStack_4c << 0x20;
  local_38._12_4_ = uStack_5c;
  local_38.Size = iVar16;
  local_48.DataPtr = (wchar_t *)0x0;
  local_38.DataPtr = (wchar_t *)local_68;
  pUVar14 = StaticLoadClass(pUVar14,(UObject *)0x0,&local_38,&local_48,0,(UPackageMap *)0x0);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((pUVar14 != (UClass *)0x0) &&
     (pUVar9 = pUVar14, UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
LAB_14d04b394:
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar9 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar9 != (UClass *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)param_1.Class.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)param_1.Class.field0_0x0);
      }
    }
  }
  pUVar14 = *(UClass **)param_1.Class.field0_0x0;
  (__return_storage_ptr__->Role).Class.field0_0x0.DebugPtr = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (__return_storage_ptr__->SettingClass).Class.field0_0x0.DebugPtr = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (__return_storage_ptr__->FrameInterpolationProcessor).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (__return_storage_ptr__->FramePreProcessors).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FramePreProcessors).ArrayNum = 0;
  (__return_storage_ptr__->FramePreProcessors).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d052a10

UClass * __cdecl ULiveLinkSettings::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULiveLinkSettings.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/LiveLink",L"LiveLinkSettings",
               &Z_Registration_Info_UClass_ULiveLinkSettings.InnerSingleton,
               StaticRegisterNativesULiveLinkSettings,0xe8,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Game",
               InternalConstructor<ULiveLinkSettings>,
               InternalVTableHelperCtorCaller<ULiveLinkSettings>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULiveLinkSettings.InnerSingleton;
}

// PostInitProperties @ 14d06cca0

void __thiscall ULiveLinkSettings::PostInitProperties(ULiveLinkSettings *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  ULiveLinkSettings *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (ULiveLinkSettings **)((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(ULiveLinkSettings **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// StaticRegisterNativesULiveLinkSettings @ 14d080850

void __cdecl ULiveLinkSettings::StaticRegisterNativesULiveLinkSettings(void)

{
  return;
}

