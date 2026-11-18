// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 147587f20

UClass * __cdecl UAsyncActionChangePrimaryAssetBundles::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionChangePrimaryAssetBundles",
               &Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.InnerSingleton,
               StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionChangePrimaryAssetBundles>,
               InternalVTableHelperCtorCaller<UAsyncActionChangePrimaryAssetBundles>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.InnerSingleton;
}

// UAsyncActionChangePrimaryAssetBundles @ 1475a7170

UAsyncActionChangePrimaryAssetBundles * __thiscall
UAsyncActionChangePrimaryAssetBundles::UAsyncActionChangePrimaryAssetBundles
          (UAsyncActionChangePrimaryAssetBundles *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionChangePrimaryAssetBundles__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Completed = 0;
  *(undefined8 *)&(this->Completed).field_0x8 = 0;
  *(undefined8 *)&(this->Completed).field_0x10 = 0;
  return this;
}

// UAsyncActionChangePrimaryAssetBundles @ 1475a71d0

UAsyncActionChangePrimaryAssetBundles * __thiscall
UAsyncActionChangePrimaryAssetBundles::UAsyncActionChangePrimaryAssetBundles
          (UAsyncActionChangePrimaryAssetBundles *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionChangePrimaryAssetBundles__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->Completed = 0;
  *(undefined8 *)&(this->Completed).field_0x8 = 0;
  *(undefined8 *)&(this->Completed).field_0x10 = 0;
  return this;
}

// ~UAsyncActionChangePrimaryAssetBundles @ 1475aa670

void __thiscall
UAsyncActionChangePrimaryAssetBundles::~UAsyncActionChangePrimaryAssetBundles
          (UAsyncActionChangePrimaryAssetBundles *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionChangePrimaryAssetBundles__6B_;
  pvVar1 = *(void **)&(this->Completed).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->Completed);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UBlueprintAsyncActionBase::~UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this);
  return;
}

// AsyncChangeBundleStateForMatchingPrimaryAssets @ 1475b3bc0

UAsyncActionChangePrimaryAssetBundles * __cdecl
UAsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForMatchingPrimaryAssets
          (UObject *param_1,TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  UObject *pUVar1;
  UAsyncActionChangePrimaryAssetBundles *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UAsyncActionChangePrimaryAssetBundles>(pUVar1);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar2->_padding_,param_2);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar2->_padding_,param_3);
  *(undefined1 *)&pUVar2->_padding_ = 1;
  (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,param_1);
  return pUVar2;
}

// AsyncChangeBundleStateForPrimaryAssetList @ 1475b3c40

UAsyncActionChangePrimaryAssetBundles * __cdecl
UAsyncActionChangePrimaryAssetBundles::AsyncChangeBundleStateForPrimaryAssetList
          (UObject *param_1,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_4)

{
  UObject *pUVar1;
  UAsyncActionChangePrimaryAssetBundles *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = NewObject<UAsyncActionChangePrimaryAssetBundles>(pUVar1);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar2->_padding_,param_3);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar2->_padding_,param_4);
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *)&pUVar2->_padding_,param_2);
  *(undefined1 *)&pUVar2->_padding_ = 2;
  (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,param_1);
  return pUVar2;
}

// GetPrivateStaticClass @ 1475db5a0

UClass * __cdecl UAsyncActionChangePrimaryAssetBundles::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionChangePrimaryAssetBundles",
               &Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.InnerSingleton,
               StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionChangePrimaryAssetBundles>,
               InternalVTableHelperCtorCaller<UAsyncActionChangePrimaryAssetBundles>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionChangePrimaryAssetBundles.InnerSingleton;
}

// HandleLoadCompleted @ 1475dee90

void __thiscall
UAsyncActionChangePrimaryAssetBundles::HandleLoadCompleted
          (UAsyncActionChangePrimaryAssetBundles *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_18) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  (**(code **)(this->_padding_ + 0x2c8))(this);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->Completed,(void *)0x0);
  return;
}

// StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles @ 1475fec00

void __cdecl
UAsyncActionChangePrimaryAssetBundles::StaticRegisterNativesUAsyncActionChangePrimaryAssetBundles
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UAsyncActionChangePrimaryAssetBundles_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAsyncChangeBundleStateForMatchingPrimaryAssets @ 147605b00

void __cdecl
UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForMatchingPrimaryAssets
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  UAsyncActionChangePrimaryAssetBundles *pUVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  undefined8 local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pTVar5 = &local_28;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
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
  uVar2 = local_res10;
  pTVar6 = &local_38;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UAsyncActionChangePrimaryAssetBundles>(pUVar3);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar4->_padding_,pTVar5);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar4->_padding_,pTVar6);
  *(undefined1 *)&pUVar4->_padding_ = 1;
  (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,uVar2);
  *(UAsyncActionChangePrimaryAssetBundles **)param_3 = pUVar4;
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// execAsyncChangeBundleStateForPrimaryAssetList @ 147605ca0

void __cdecl
UAsyncActionChangePrimaryAssetBundles::execAsyncChangeBundleStateForPrimaryAssetList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  UObject *pUVar3;
  UAsyncActionChangePrimaryAssetBundles *pUVar4;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined8 local_res10;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> local_38;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
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
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  pTVar7 = &local_38;
  if ((TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar7 = (TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  pTVar6 = &local_48;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
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
  uVar2 = local_res10;
  pTVar5 = &local_58;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar5 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar3 = GetTransientPackageAsObject();
  pUVar4 = NewObject<UAsyncActionChangePrimaryAssetBundles>(pUVar3);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar4->_padding_,pTVar6);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar4->_padding_,pTVar5);
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *)&pUVar4->_padding_,pTVar7);
  *(undefined1 *)&pUVar4->_padding_ = 2;
  (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,uVar2);
  *(UAsyncActionChangePrimaryAssetBundles **)param_3 = pUVar4;
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return;
}

