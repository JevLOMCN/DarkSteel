// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationUtils
// Functions: 8

// StaticClass @ 14e7eb810

UClass * __cdecl UAutomationUtilsBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationUtils",L"AutomationUtilsBlueprintLibrary",
               &Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAutomationUtilsBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationUtilsBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAutomationUtilsBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.InnerSingleton;
}

// UAutomationUtilsBlueprintLibrary @ 14e7ee4e0

UAutomationUtilsBlueprintLibrary * __thiscall
UAutomationUtilsBlueprintLibrary::UAutomationUtilsBlueprintLibrary
          (UAutomationUtilsBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAutomationUtilsBlueprintLibrary__6B_;
  return this;
}

// UAutomationUtilsBlueprintLibrary @ 14e7ee510

UAutomationUtilsBlueprintLibrary * __thiscall
UAutomationUtilsBlueprintLibrary::UAutomationUtilsBlueprintLibrary
          (UAutomationUtilsBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAutomationUtilsBlueprintLibrary__6B_;
  return this;
}

// ~UAutomationUtilsBlueprintLibrary @ 14e7ee690

void __thiscall
UAutomationUtilsBlueprintLibrary::~UAutomationUtilsBlueprintLibrary
          (UAutomationUtilsBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UAutomationUtilsBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetPrivateStaticClass @ 14e7ef560

UClass * __cdecl UAutomationUtilsBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AutomationUtils",L"AutomationUtilsBlueprintLibrary",
               &Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUAutomationUtilsBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAutomationUtilsBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UAutomationUtilsBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAutomationUtilsBlueprintLibrary.InnerSingleton;
}

// StaticRegisterNativesUAutomationUtilsBlueprintLibrary @ 14e7efdf0

void __cdecl
UAutomationUtilsBlueprintLibrary::StaticRegisterNativesUAutomationUtilsBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAutomationUtilsBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TakeGameplayAutomationScreenshot @ 14e7efe30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAutomationUtilsBlueprintLibrary::TakeGameplayAutomationScreenshot
          (FString *param_1,float param_2,float param_3,FString *param_4)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  UEngine *this;
  bool bVar4;
  UClass *pUVar5;
  UWorld *this_00;
  FStreamingManagerCollection *pFVar6;
  FString *pFVar7;
  FString *pFVar8;
  FOutputDeviceRedirector *this_01;
  TIntRect<int>_u_0 local_48;
  FString local_38 [3];
  
  FlushAsyncLoading(-1);
  this = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar5 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar2 = this->_padding_;
    iVar1 = (int)pUVar5->_padding_;
    if (((iVar1 <= *(int *)(lVar2 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar5->_padding_)) &&
       (this_00 = UGameEngine::GetGameWorld((UGameEngine *)this), this_00 != (UWorld *)0x0)) {
      UWorld::FlushLevelStreaming(this_00,Full);
    }
  }
  pFVar6 = IStreamingManager::Get();
  (**(code **)(pFVar6->_padding_ + 0x18))(pFVar6,0);
  UTexture::ForceUpdateTextureStreaming();
  pFVar7 = ::FString::FString((FString *)&local_48._s_0,param_4);
  pFVar8 = ::FString::FString(local_38,param_1);
  bVar4 = FAutomationUtilsGameplayAutomationScreenshotFactory::CreateScreenshotInstance
                    (pFVar8,param_2,param_3,pFVar7);
  if (!bVar4) {
    this_01 = GetGlobalLogSingleton();
    ::FString::PrintfImpl
              ((FString *)&local_48._s_0,
               L"Failed to create GameplayAutomationScreenshot Instance for \"%s\"!");
    FOutputDevice::Log((FOutputDevice *)this_01,Error,(FString *)&local_48._s_0);
    if ((TIntPoint<int>_u_0)local_48._s_0.Min.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
      FMemory::Free((void *)local_48._s_0.Min.field0_0x0);
    }
  }
  local_48._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_48._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  FScreenshotRequest::RequestScreenshot(param_1,false,true,false,(TIntRect<int> *)&local_48._s_0);
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_4->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// execTakeGameplayAutomationScreenshot @ 14e7f0170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UAutomationUtilsBlueprintLibrary::execTakeGameplayAutomationScreenshot
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  int iVar2;
  FProperty *pFVar3;
  UEngine *this;
  float fVar4;
  float fVar5;
  void *pvVar6;
  bool bVar7;
  UClass *pUVar8;
  UWorld *this_00;
  FStreamingManagerCollection *pFVar9;
  FString *pFVar10;
  FString *pFVar11;
  FOutputDeviceRedirector *this_01;
  longlong lVar12;
  float local_res10 [2];
  float local_res20 [2];
  FString local_98;
  FString local_88;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  TIntRect<int>_u_0 local_58;
  FString local_48 [3];
  
  local_68 = (void *)0x0;
  local_60 = 0;
  FStrProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_res20[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar3);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  pvVar6 = local_78;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar12 = (longlong)(int)local_70;
  local_88.Data.ArrayNum = (int)local_70;
  if ((int)local_70 == 0) {
    local_88.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_70,0,(ForAnyElementType *)&local_88,(int)local_70,
               &local_88.Data.ArrayMax);
    memcpy(local_88.Data.AllocatorInstance.Data,pvVar6,lVar12 * 2);
  }
  pvVar6 = local_68;
  fVar5 = local_res20[0];
  fVar4 = local_res10[0];
  lVar12 = (longlong)(int)local_60;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = (int)local_60;
  if ((int)local_60 == 0) {
    local_98.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_60,0,(ForAnyElementType *)&local_98,(int)local_60,
               &local_98.Data.ArrayMax);
    memcpy(local_98.Data.AllocatorInstance.Data,pvVar6,lVar12 * 2);
  }
  FlushAsyncLoading(-1);
  this = GEngine;
  if (GEngine != (UEngine *)0x0) {
    pUVar8 = Z_Construct_UClass_UGameEngine_NoRegister();
    lVar12 = this->_padding_;
    iVar2 = (int)pUVar8->_padding_;
    if (((iVar2 <= *(int *)(lVar12 + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar8->_padding_)) &&
       (this_00 = UGameEngine::GetGameWorld((UGameEngine *)this), this_00 != (UWorld *)0x0)) {
      UWorld::FlushLevelStreaming(this_00,Full);
    }
  }
  pFVar9 = IStreamingManager::Get();
  (**(code **)(pFVar9->_padding_ + 0x18))(pFVar9,0);
  UTexture::ForceUpdateTextureStreaming();
  pFVar10 = ::FString::FString((FString *)&local_58._s_0,&local_88);
  pFVar11 = ::FString::FString(local_48,&local_98);
  bVar7 = FAutomationUtilsGameplayAutomationScreenshotFactory::CreateScreenshotInstance
                    (pFVar11,fVar5,fVar4,pFVar10);
  if (!bVar7) {
    this_01 = GetGlobalLogSingleton();
    ::FString::PrintfImpl
              ((FString *)&local_58._s_0,
               L"Failed to create GameplayAutomationScreenshot Instance for \"%s\"!");
    FOutputDevice::Log((FOutputDevice *)this_01,Error,(FString *)&local_58._s_0);
    if ((TIntPoint<int>_u_0)local_58._s_0.Min.field0_0x0 != (TIntPoint<int>_u_0)0x0) {
      FMemory::Free((void *)local_58._s_0.Min.field0_0x0);
    }
  }
  local_58._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_58._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  FScreenshotRequest::RequestScreenshot(&local_98,false,true,false,(TIntRect<int> *)&local_58._s_0);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

