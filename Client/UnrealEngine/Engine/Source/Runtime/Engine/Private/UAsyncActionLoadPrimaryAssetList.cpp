// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147587070

UClass * __cdecl UAsyncActionLoadPrimaryAssetList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetList",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.InnerSingleton,
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetList,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionLoadPrimaryAssetList>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetList>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.InnerSingleton;
}

// UAsyncActionLoadPrimaryAssetList @ 1475a7510

UAsyncActionLoadPrimaryAssetList * __thiscall
UAsyncActionLoadPrimaryAssetList::UAsyncActionLoadPrimaryAssetList
          (UAsyncActionLoadPrimaryAssetList *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetList__6B_;
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

// UAsyncActionLoadPrimaryAssetList @ 1475a7570

UAsyncActionLoadPrimaryAssetList * __thiscall
UAsyncActionLoadPrimaryAssetList::UAsyncActionLoadPrimaryAssetList
          (UAsyncActionLoadPrimaryAssetList *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetList__6B_;
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

// ~UAsyncActionLoadPrimaryAssetList @ 1475aa910

void __thiscall
UAsyncActionLoadPrimaryAssetList::~UAsyncActionLoadPrimaryAssetList
          (UAsyncActionLoadPrimaryAssetList *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetList__6B_;
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

// AsyncLoadPrimaryAssetList @ 1475b40a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncActionLoadPrimaryAssetList * __cdecl
UAsyncActionLoadPrimaryAssetList::AsyncLoadPrimaryAssetList
          (UObject *param_1,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAsyncActionLoadPrimaryAssetList *pUVar3;
  longlong *plVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar2);
  local_a8._8_8_ = pUVar1;
  pUVar3 = (UAsyncActionLoadPrimaryAssetList *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar4 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *)&pUVar3->_padding_,param_2);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar3->_padding_,param_3);
  *(undefined1 *)&pUVar3->_padding_ = 0;
  (**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,param_1);
  return pUVar3;
}

// GetPrivateStaticClass @ 1475db960

UClass * __cdecl UAsyncActionLoadPrimaryAssetList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetList",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.InnerSingleton,
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetList,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionLoadPrimaryAssetList>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetList>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetList.InnerSingleton;
}

// HandleLoadCompleted @ 1475df3c0

void __thiscall
UAsyncActionLoadPrimaryAssetList::HandleLoadCompleted(UAsyncActionLoadPrimaryAssetList *this)

{
  void *_Src;
  longlong lVar1;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  void *local_28;
  undefined8 local_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_28 = (void *)0x0;
  local_20 = 0;
  (**(code **)(this->_padding_ + 0x2d8))(this,&local_28);
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
  _Src = local_28;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_2c = 0;
  lVar1 = (longlong)(int)local_20;
  local_30 = (int)local_20;
  if ((int)local_20 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_20,0,&local_38,(int)local_20,&local_2c);
    memcpy(local_38.Data,_Src,lVar1 << 3);
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->Completed,&local_38);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// StaticRegisterNativesUAsyncActionLoadPrimaryAssetList @ 1475fed10

void __cdecl
UAsyncActionLoadPrimaryAssetList::StaticRegisterNativesUAsyncActionLoadPrimaryAssetList(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAsyncActionLoadPrimaryAssetList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAsyncLoadPrimaryAssetList @ 1476065b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UAsyncActionLoadPrimaryAssetList::execAsyncLoadPrimaryAssetList
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_e0;
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> local_d0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d0);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  pTVar7 = &local_d0;
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
    FFrame::StepExplicitProperty(param_2,&local_e0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e0);
  }
  uVar3 = local_e8;
  pTVar8 = &local_e0;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar8 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar4 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar4,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar5 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar5);
  local_b8._8_8_ = pUVar4;
  pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar6 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *)&pUVar4[1].field_0x8,pTVar7);
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar4[1].field_0x18,pTVar8);
  lVar2 = *(longlong *)pUVar4;
  pUVar4[2].field_0x20 = 0;
  (**(code **)(lVar2 + 0x2c0))(pUVar4,uVar3);
  *(UObject **)param_3 = pUVar4;
  if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.AllocatorInstance.Data);
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return;
}

