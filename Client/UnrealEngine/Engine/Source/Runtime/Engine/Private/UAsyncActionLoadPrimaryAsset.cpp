// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 14758d1d0

UClass * __cdecl UAsyncActionLoadPrimaryAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAsset",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.InnerSingleton,
               StaticRegisterNativesUAsyncActionLoadPrimaryAsset,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionLoadPrimaryAsset>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAsset>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.InnerSingleton;
}

// UAsyncActionLoadPrimaryAsset @ 1475a7230

UAsyncActionLoadPrimaryAsset * __thiscall
UAsyncActionLoadPrimaryAsset::UAsyncActionLoadPrimaryAsset
          (UAsyncActionLoadPrimaryAsset *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAsset__6B_;
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

// UAsyncActionLoadPrimaryAsset @ 1475a7290

UAsyncActionLoadPrimaryAsset * __thiscall
UAsyncActionLoadPrimaryAsset::UAsyncActionLoadPrimaryAsset
          (UAsyncActionLoadPrimaryAsset *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAsset__6B_;
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

// ~UAsyncActionLoadPrimaryAsset @ 1475aa700

void __thiscall
UAsyncActionLoadPrimaryAsset::~UAsyncActionLoadPrimaryAsset(UAsyncActionLoadPrimaryAsset *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAsset__6B_;
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

// AsyncLoadPrimaryAsset @ 1475b3ce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncActionLoadPrimaryAsset * __cdecl
UAsyncActionLoadPrimaryAsset::AsyncLoadPrimaryAsset
          (UObject *param_1,FPrimaryAssetId *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  FName *pFVar2;
  FPrimaryAssetId *pFVar3;
  code *pcVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UAsyncActionLoadPrimaryAsset *pUVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_108 [32];
  FPrimaryAssetId *local_e8;
  FPrimaryAssetId *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar8 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar9);
  local_b8._8_8_ = pUVar8;
  pUVar10 = (UAsyncActionLoadPrimaryAsset *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar11 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  pFVar3 = (FPrimaryAssetId *)pUVar10->_padding_;
  if ((pFVar3 <= param_2) &&
     (lVar12 = (longlong)*(int *)((longlong)&pUVar10->_padding_ + 4), param_2 < pFVar3 + lVar12)) {
    local_d0 = (longlong)(int)pUVar10->_padding_;
    local_c8 = 0x10;
    local_e8 = param_2;
    local_e0 = pFVar3;
    local_d8 = lVar12;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pUVar10 = (UAsyncActionLoadPrimaryAsset *)(*pcVar4)();
      return pUVar10;
    }
  }
  iVar7 = (int)pUVar10->_padding_;
  piVar1 = (int *)((longlong)&pUVar10->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)&pUVar10->_padding_,piVar1);
  }
  *(int *)&pUVar10->_padding_ = iVar7 + 1;
  FVar5 = param_2->PrimaryAssetName;
  pFVar2 = (FName *)(pUVar10->_padding_ + (longlong)iVar7 * 0x10);
  *pFVar2 = (param_2->PrimaryAssetType).Name;
  pFVar2[1] = FVar5;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar10->_padding_,param_3);
  *(undefined1 *)&pUVar10->_padding_ = 0;
  (**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,param_1);
  return pUVar10;
}

// GetPrivateStaticClass @ 1475db660

UClass * __cdecl UAsyncActionLoadPrimaryAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAsset",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.InnerSingleton,
               StaticRegisterNativesUAsyncActionLoadPrimaryAsset,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionLoadPrimaryAsset>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAsset>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAsset.InnerSingleton;
}

// HandleLoadCompleted @ 1475def00

void __thiscall
UAsyncActionLoadPrimaryAsset::HandleLoadCompleted(UAsyncActionLoadPrimaryAsset *this)

{
  undefined8 uVar1;
  undefined8 local_res8;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  uVar1 = 0;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  (**(code **)(this->_padding_ + 0x2d8))(this,&local_28);
  if (0 < (int)local_20) {
    uVar1 = *local_28;
  }
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
  local_res8 = uVar1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->Completed,&local_res8);
  if (local_28 != (undefined8 *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// StaticRegisterNativesUAsyncActionLoadPrimaryAsset @ 1475fec40

void __cdecl UAsyncActionLoadPrimaryAsset::StaticRegisterNativesUAsyncActionLoadPrimaryAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAsyncActionLoadPrimaryAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAsyncLoadPrimaryAsset @ 147605eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UAsyncActionLoadPrimaryAsset::execAsyncLoadPrimaryAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar11;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 *local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_f8 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_f8[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_f8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_f8);
  }
  local_e8 = 0;
  uStack_e0 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_e8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_e8);
  }
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_d8);
  }
  uVar5 = local_f8[0];
  pTVar11 = &local_d8;
  if ((TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<FName,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar11 = (TArray<FName,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  local_c8 = local_e8;
  uStack_c0 = uStack_e0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar8 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar9);
  local_b8._8_8_ = pUVar8;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  puVar2 = *(undefined8 **)&pUVar8[1].field_0x8;
  if ((puVar2 <= &local_c8) && (&local_c8 < puVar2 + (longlong)*(int *)&pUVar8[1].field_0x14 * 2)) {
    local_110 = (longlong)*(int *)&pUVar8[1].field_0x10;
    local_108 = 0x10;
    local_128 = &local_c8;
    local_120 = puVar2;
    local_118 = (longlong)*(int *)&pUVar8[1].field_0x14;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)&pUVar8[1].field_0x10;
  if (iVar7 == *(int *)&pUVar8[1].field_0x14) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x410,(ForAnyElementType *)&pUVar8[1].field_0x8,(int *)&pUVar8[1].field_0x14)
    ;
  }
  *(int *)&pUVar8[1].field_0x10 = iVar7 + 1;
  puVar2 = (undefined8 *)(*(longlong *)&pUVar8[1].field_0x8 + (longlong)iVar7 * 0x10);
  *puVar2 = local_c8;
  puVar2[1] = uStack_c0;
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar8[1].field_0x18,pTVar11);
  lVar3 = *(longlong *)pUVar8;
  pUVar8[2].field_0x20 = 0;
  (**(code **)(lVar3 + 0x2c0))(pUVar8,uVar5);
  *(UObject **)param_3 = pUVar8;
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  return;
}

