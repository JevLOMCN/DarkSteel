// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 147587ce0

UClass * __cdecl UAsyncActionLoadPrimaryAssetClassList::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetClassList",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.InnerSingleton,
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionLoadPrimaryAssetClassList>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetClassList>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.InnerSingleton;
}

// UAsyncActionLoadPrimaryAssetClassList @ 1475a7450

UAsyncActionLoadPrimaryAssetClassList * __thiscall
UAsyncActionLoadPrimaryAssetClassList::UAsyncActionLoadPrimaryAssetClassList
          (UAsyncActionLoadPrimaryAssetClassList *this,FVTableHelper *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetClassList__6B_;
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

// UAsyncActionLoadPrimaryAssetClassList @ 1475a74b0

UAsyncActionLoadPrimaryAssetClassList * __thiscall
UAsyncActionLoadPrimaryAssetClassList::UAsyncActionLoadPrimaryAssetClassList
          (UAsyncActionLoadPrimaryAssetClassList *this,FObjectInitializer *param_1)

{
  UBlueprintAsyncActionBase::UBlueprintAsyncActionBase((UBlueprintAsyncActionBase *)this,param_1);
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetClassList__6B_;
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

// ~UAsyncActionLoadPrimaryAssetClassList @ 1475aa880

void __thiscall
UAsyncActionLoadPrimaryAssetClassList::~UAsyncActionLoadPrimaryAssetClassList
          (UAsyncActionLoadPrimaryAssetClassList *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UAsyncActionLoadPrimaryAssetClassList__6B_;
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

// AsyncLoadPrimaryAssetClassList @ 1475b3fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UAsyncActionLoadPrimaryAssetClassList * __cdecl
UAsyncActionLoadPrimaryAssetClassList::AsyncLoadPrimaryAssetClassList
          (UObject *param_1,TArray<FPrimaryAssetId,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UAsyncActionLoadPrimaryAssetClassList *pUVar3;
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
  pUVar3 = (UAsyncActionLoadPrimaryAssetClassList *)
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

// GetPrivateStaticClass @ 1475db8a0

UClass * __cdecl UAsyncActionLoadPrimaryAssetClassList::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AsyncActionLoadPrimaryAssetClassList",
               &Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.InnerSingleton,
               StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList,0x90,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAsyncActionLoadPrimaryAssetClassList>,
               InternalVTableHelperCtorCaller<UAsyncActionLoadPrimaryAssetClassList>,local_res8,
               UAsyncActionLoadPrimaryAssetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAsyncActionLoadPrimaryAssetClassList.InnerSingleton;
}

// HandleLoadCompleted @ 1475df160

void __thiscall
UAsyncActionLoadPrimaryAssetClassList::HandleLoadCompleted
          (UAsyncActionLoadPrimaryAssetClassList *this)

{
  TObjectPtr<UClass>_u_0 *pTVar1;
  TObjectPtr<UClass>_u_0 TVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  UClass *pUVar8;
  TObjectPtr<UClass>_u_0 *pTVar9;
  undefined1 local_res8 [8];
  TObjectPtr<UClass>_u_0 local_78;
  ForAnyElementType local_70;
  undefined8 local_68;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  TObjectPtr<UClass>_u_0 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  FSharedReferencer<1> aFStack_38 [2];
  
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  local_50 = (TObjectPtr<UClass>_u_0 *)0x0;
  local_48 = 0;
  (**(code **)(this->_padding_ + 0x2d8))(this,&local_50);
  iVar5 = (int)local_48;
  pTVar1 = local_50 + (int)local_48;
  pTVar9 = local_50;
  while( true ) {
    if ((int)local_48 != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pTVar9 == pTVar1) break;
    TVar2 = (TObjectPtr<UClass>_u_0)pTVar9->DebugPtr;
    if (TVar2.DebugPtr != (UClass *)0x0) {
      pUVar8 = Z_Construct_UClass_UClass_NoRegister();
      iVar7 = (int)pUVar8->_padding_;
      if ((iVar7 <= *(int *)((TVar2.DebugPtr)->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)((TVar2.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8)
          == &pUVar8->_padding_)) {
        local_78 = TVar2;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
        }
        if (((local_70.Data <= &local_78) &&
            (&local_78 < (TObjectPtr<UClass>_u_0 *)(local_70.Data + (longlong)local_68._4_4_ * 8)))
           && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar7 = (int)local_68;
        if ((int)local_68 == local_68._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_70,(int *)((longlong)&local_68 + 4));
        }
        local_68 = CONCAT44(local_68._4_4_,iVar7 + 1);
        ((TObjectPtr<UClass>_u_0 *)(local_70.Data + (longlong)iVar7 * 8))->DebugPtr =
             (UClass *)local_78;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_78.DebugPtr != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_78.DebugPtr);
        }
      }
    }
    pTVar9 = pTVar9 + 1;
  }
  local_40 = 0;
  aFStack_38[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->_padding_ != &local_40) {
    this->_padding_ = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->_padding_,aFStack_38);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_38[0].ReferenceController);
  (**(code **)(this->_padding_ + 0x2c8))(this);
  FVar4.Data = local_70.Data;
  iVar5 = (int)local_68;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_54 = 0;
  local_58 = (int)local_68;
  if ((int)local_68 != 0) {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_68,0,&local_60,(int)local_68,&local_54);
    ConstructItems<TSubclassOf<UObject>,TSubclassOf<UObject>,int>
              (local_60.Data,(TSubclassOf<UObject> *)FVar4.Data,iVar5);
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->Completed,&local_60);
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_50 != (TObjectPtr<UClass>_u_0 *)0x0) {
    FMemory::Free(local_50);
  }
  if ((TObjectPtr<UClass>_u_0 *)local_70.Data != (TObjectPtr<UClass>_u_0 *)0x0) {
    FMemory::Free(local_70.Data);
  }
  return;
}

// StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList @ 1475fecd0

void __cdecl
UAsyncActionLoadPrimaryAssetClassList::StaticRegisterNativesUAsyncActionLoadPrimaryAssetClassList
          (void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAsyncActionLoadPrimaryAssetClassList_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAsyncLoadPrimaryAssetClassList @ 1476063b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UAsyncActionLoadPrimaryAssetClassList::execAsyncLoadPrimaryAssetClassList
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

