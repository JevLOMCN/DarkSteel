// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioCapture
// Functions: 10

// StaticClass @ 14d0cd740

UClass * __cdecl UAudioCaptureBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCaptureBlueprintLibrary",
               &Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAudioCaptureBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioCaptureBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAudioCaptureBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.InnerSingleton;
}

// UAudioCaptureBlueprintLibrary @ 14d0ce710

UAudioCaptureBlueprintLibrary * __thiscall
UAudioCaptureBlueprintLibrary::UAudioCaptureBlueprintLibrary
          (UAudioCaptureBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAudioCaptureBlueprintLibrary__6B_;
  return this;
}

// UAudioCaptureBlueprintLibrary @ 14d0ce740

UAudioCaptureBlueprintLibrary * __thiscall
UAudioCaptureBlueprintLibrary::UAudioCaptureBlueprintLibrary
          (UAudioCaptureBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAudioCaptureBlueprintLibrary__6B_;
  return this;
}

// ~UAudioCaptureBlueprintLibrary @ 14d0ce990

void __thiscall
UAudioCaptureBlueprintLibrary::~UAudioCaptureBlueprintLibrary(UAudioCaptureBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UAudioCaptureBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Conv_AudioInputDeviceInfoToString @ 14d0ced70

FString * __cdecl
UAudioCaptureBlueprintLibrary::Conv_AudioInputDeviceInfoToString
          (FString *__return_storage_ptr__,FAudioInputDeviceInfo *param_1)

{
  ::FString::PrintfImpl
            (__return_storage_ptr__,
             L"Device Name: %s, \nDevice Id: %s, \nNum Channels: %u, \nSample Rate: %u, \nSupports Hardware AEC: %u, \n"
            );
  return __return_storage_ptr__;
}

// GetAvailableAudioInputDevices @ 14d0cf2e0

/* WARNING: Removing unreachable block (ram,0x00014d0cf5a8) */
/* WARNING: Removing unreachable block (ram,0x00014d0cf5b6) */

void __cdecl
UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices
          (UObject *param_1,FOnAudioInputDevicesObtained *param_2)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  FAudioCapture local_res18 [2];
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  int local_e0;
  int local_dc;
  TArray<Audio::FCaptureDeviceInfo,TSizedDefaultAllocator<32>_> local_d8;
  FAudioInputDeviceInfo local_c8;
  UObject *local_98;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_90;
  undefined8 local_88;
  undefined8 local_80;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  code *local_48 [5];
  undefined8 *local_20;
  
  bVar3 = IsInAudioThread();
  uVar8 = 0;
  if (bVar3) {
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    Audio::FAudioCapture::FAudioCapture(local_res18);
    local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.ArrayNum = 0;
    local_d8.ArrayMax = 0;
    Audio::FAudioCapture::GetCaptureDevicesAvailable(local_res18,&local_d8);
    for (; (-1 < (int)uVar8 && ((int)uVar8 < local_d8.ArrayNum)); uVar8 = uVar8 + 1) {
      uVar4 = 0;
      if ((int)uVar8 < local_d8.ArrayNum) {
        uVar4 = ~uVar8 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = local_d8.AllocatorInstance.Data + (longlong)(int)uVar8 * 0x30;
      ::FString::FString(&local_c8.DeviceName,(FString *)pFVar7);
      ::FString::FString(&local_c8.DeviceId,(FString *)(pFVar7 + 0x10));
      local_c8.InputChannels = *(int *)(pFVar7 + 0x20);
      local_c8.PreferredSampleRate = *(int *)(pFVar7 + 0x24);
      local_c8.bSupportsHardwareAEC = pFVar7[0x28];
      if (((local_f8.Data <= &local_c8) &&
          (&local_c8 < (FAudioInputDeviceInfo *)(local_f8.Data + (longlong)local_f0._4_4_ * 0x30)))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = (int)local_f0;
      if ((int)local_f0 == local_f0._4_4_) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&local_f8,(int *)((longlong)&local_f0 + 4));
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar5 + 1);
      pFVar7 = local_f8.Data + (longlong)iVar5 * 0x30;
      *(undefined8 *)&pFVar7->field_0x0 = 0;
      *(FScriptContainerElement **)&pFVar7->field_0x0 =
           local_c8.DeviceName.Data.AllocatorInstance.Data;
      *(int *)(pFVar7 + 8) = local_c8.DeviceName.Data.ArrayNum;
      *(int *)(pFVar7 + 0xc) = local_c8.DeviceName.Data.ArrayMax;
      *(undefined8 *)(pFVar7 + 0x10) = 0;
      *(FScriptContainerElement **)(pFVar7 + 0x10) = local_c8.DeviceId.Data.AllocatorInstance.Data;
      *(int *)(pFVar7 + 0x18) = local_c8.DeviceId.Data.ArrayNum;
      *(int *)(pFVar7 + 0x1c) = local_c8.DeviceId.Data.ArrayMax;
      *(int *)(pFVar7 + 0x20) = local_c8.InputChannels;
      *(int *)(pFVar7 + 0x24) = local_c8.PreferredSampleRate;
      pFVar7[0x28] = (FScriptContainerElement)
                     ((byte)pFVar7[0x28] ^ ((byte)pFVar7[0x28] ^ local_c8._40_1_) & 1);
      local_c8.DeviceId.Data.ArrayNum = 0;
      local_c8.DeviceId.Data.ArrayMax = 0;
      local_c8.DeviceId.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.DeviceName.Data.ArrayNum = 0;
      local_c8.DeviceName.Data.ArrayMax = 0;
      local_c8.DeviceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_dc = 0;
    DestructItems<FAudioInputDeviceInfo,int>((FAudioInputDeviceInfo *)0x0,0);
    FVar2.Data = local_f8.Data;
    iVar5 = (int)local_f0;
    local_e0 = (int)local_f0;
    if (((int)local_f0 != 0) || (local_dc != 0)) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,(int)local_f0,local_dc,&local_e8,(int)local_f0,&local_dc);
      ConstructItems<FAudioInputDeviceInfo,FAudioInputDeviceInfo,int>
                (local_e8.Data,(FAudioInputDeviceInfo *)FVar2.Data,iVar5);
    }
    TScriptDelegate<FNotThreadSafeDelegateMode>::ProcessDelegate<UObject>
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)param_2,&local_e8);
    DestructItems<FAudioInputDeviceInfo,int>((FAudioInputDeviceInfo *)local_e8.Data,local_e0);
    if ((FAudioInputDeviceInfo *)local_e8.Data != (FAudioInputDeviceInfo *)0x0) {
      FMemory::Free(local_e8.Data);
    }
    DestructItems<Audio::FCaptureDeviceInfo,int>
              ((FCaptureDeviceInfo *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
    if ((FCaptureDeviceInfo *)local_d8.AllocatorInstance.Data != (FCaptureDeviceInfo *)0x0) {
      FMemory::Free(local_d8.AllocatorInstance.Data);
    }
    Audio::FAudioCapture::~FAudioCapture(local_res18);
    DestructItems<FAudioInputDeviceInfo,int>((FAudioInputDeviceInfo *)local_f8.Data,(int)local_f0);
    if ((FAudioInputDeviceInfo *)local_f8.Data != (FAudioInputDeviceInfo *)0x0) {
      FMemory::Free(local_f8.Data);
    }
  }
  else {
    local_90.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_98 = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_78);
    local_88 = *(undefined8 *)&param_2->field_0x8;
    local_80 = *(undefined8 *)&param_2->field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    local_48[0] = (code *)0x0;
    puVar6 = FMemory::Malloc(0x28,8);
    *puVar6 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::`5'::<lambda_1>,1,1>
               ::_vftable_;
    puVar6[1] = local_98;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    local_20 = puVar6;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_90,&local_60);
    puVar6[3] = local_88;
    puVar6[4] = local_80;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_60);
    if (puVar6 + 1 != (undefined8 *)0x0) {
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioCaptureBlueprintLibrary::GetAvailableAudioInputDevices'::__l5::<lambda_1>,void>
                    ::Call;
    }
    FAudioThread::RunCommandOnAudioThread
              ((TUniqueFunction<void___cdecl(void)> *)local_48,(TStatId)0x154f11430);
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_90.AccessDetector);
  }
  return;
}

// GetPrivateStaticClass @ 14d0cf780

UClass * __cdecl UAudioCaptureBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioCapture",L"AudioCaptureBlueprintLibrary",
               &Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAudioCaptureBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioCaptureBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAudioCaptureBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioCaptureBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUAudioCaptureBlueprintLibrary @ 14d0d01e0

void __cdecl UAudioCaptureBlueprintLibrary::StaticRegisterNativesUAudioCaptureBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAudioCaptureBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execConv_AudioInputDeviceInfoToString @ 14d0d04f0

void __cdecl
UAudioCaptureBlueprintLibrary::execConv_AudioInputDeviceInfoToString
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FString local_48;
  FString local_38;
  FString local_28;
  undefined8 local_18;
  byte local_10;
  
  ::FString::FString(&local_38,"");
  ::FString::FString(&local_28,"");
  local_10 = local_10 | 1;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ::FString::PrintfImpl
            (&local_48,
             L"Device Name: %s, \nDevice Id: %s, \nNum Channels: %u, \nSample Rate: %u, \nSupports Hardware AEC: %u, \n"
            );
  if (param_3 != &local_48) {
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(FScriptContainerElement **)param_3 = local_48.Data.AllocatorInstance.Data;
    *(int *)((longlong)param_3 + 8) = local_48.Data.ArrayNum;
    *(int *)((longlong)param_3 + 0xc) = local_48.Data.ArrayMax;
    local_48.Data.ArrayNum = 0;
    local_48.Data.ArrayMax = 0;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// execGetAvailableAudioInputDevices @ 14d0d07f0

void __cdecl
UAudioCaptureBlueprintLibrary::execGetAvailableAudioInputDevices
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *this;
  UObject *local_res10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  atomic<unsigned___int64> local_30;
  FReadAccessScope local_28;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = 0;
  local_48 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_40._0_8_ = (atomic<unsigned___int64>)0x0;
  this = &local_58;
  if ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2->MostRecentPropertyAddress
      != (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)0x0) {
    this = (TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
           param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(this,&local_28);
  local_40._8_8_ = this[1].AccessDetector.State;
  local_30 = this[2].AccessDetector.State;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  GetAvailableAudioInputDevices(local_res10,(FOnAudioInputDevicesObtained *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_40);
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  return;
}

