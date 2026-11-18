// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeCore
// Functions: 23

// StaticClass @ 14e303220

UClass * __cdecl UInterchangeTranslatorBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTranslatorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeTranslatorBase",
               &Z_Registration_Info_UClass_UInterchangeTranslatorBase.InnerSingleton,
               StaticRegisterNativesUInterchangeTranslatorBase,0x48,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTranslatorBase>,
               InternalVTableHelperCtorCaller<UInterchangeTranslatorBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTranslatorBase.InnerSingleton;
}

// UInterchangeTranslatorBase @ 14e4022b0

UInterchangeTranslatorBase * __thiscall
UInterchangeTranslatorBase::UInterchangeTranslatorBase
          (UInterchangeTranslatorBase *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeTranslatorBase__6B_;
  (this->Results).field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
  (this->SourceData).field0_0x0.DebugPtr = (UInterchangeSourceData *)0x0;
  (this->AnalyticsHelper).Object = (FAnalyticsHelper *)0x0;
  (this->AnalyticsHelper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UInterchangeTranslatorBase @ 14e4022f0

UInterchangeTranslatorBase * __thiscall
UInterchangeTranslatorBase::UInterchangeTranslatorBase
          (UInterchangeTranslatorBase *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeTranslatorBase__6B_;
  (this->Results).field0_0x0.DebugPtr = (UInterchangeResultsContainer *)0x0;
  (this->SourceData).field0_0x0.DebugPtr = (UInterchangeSourceData *)0x0;
  (this->AnalyticsHelper).Object = (FAnalyticsHelper *)0x0;
  (this->AnalyticsHelper).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UInterchangeTranslatorBase @ 14e405170

void __thiscall
UInterchangeTranslatorBase::~UInterchangeTranslatorBase(UInterchangeTranslatorBase *this)

{
  this->_padding_ = (longlong)&___7UInterchangeTranslatorBase__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AnalyticsHelper).SharedReferenceCount.ReferenceController);
  UObject::~UObject((UObject *)this);
  return;
}

// CanImportSourceData @ 14e417070

bool __thiscall
UInterchangeTranslatorBase::CanImportSourceData
          (UInterchangeTranslatorBase *this,UInterchangeSourceData *param_1)

{
  FScriptContainerElement *_Src;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar1;
  FString *pFVar2;
  longlong lVar3;
  FString local_28;
  FString local_18;
  
  local_28.Data.ArrayNum = (param_1->Filename).Data.ArrayNum;
  lVar3 = (longlong)local_28.Data.ArrayNum;
  _Src = (param_1->Filename).Data.AllocatorInstance.Data;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_28.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,(ForAnyElementType *)&local_28,local_28.Data.ArrayNum,
               &local_28.Data.ArrayMax);
    memcpy(local_28.Data.AllocatorInstance.Data,_Src,lVar3 * 2);
  }
  FPaths::GetExtension(&local_18,&local_28,false);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pTVar1 = (TArray<FString,TSizedDefaultAllocator<32>_> *)
           (**(code **)(this->_padding_ + 0x2d0))(this,&local_28);
  pFVar2 = AlgoImpl::
           FindByPredicate<TArray<FString,TSizedDefaultAllocator<32>_>,_UInterchangeTranslatorBase::CanImportSourceData_::__l2::<lambda_1>_>
                     (pTVar1,&local_18);
  DestructItems<FString,int>((FString *)local_28.Data.AllocatorInstance.Data,local_28.Data.ArrayNum)
  ;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return pFVar2 != (FString *)0x0;
}

// GetPrivateStaticClass @ 14e4422c0

UClass * __cdecl UInterchangeTranslatorBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeTranslatorBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangeCore",L"InterchangeTranslatorBase",
               &Z_Registration_Info_UClass_UInterchangeTranslatorBase.InnerSingleton,
               StaticRegisterNativesUInterchangeTranslatorBase,0x48,8,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UInterchangeTranslatorBase>,
               InternalVTableHelperCtorCaller<UInterchangeTranslatorBase>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeTranslatorBase.InnerSingleton;
}

// GetSettings @ 14e442a00

UInterchangeTranslatorSettings * __thiscall
UInterchangeTranslatorBase::GetSettings(UInterchangeTranslatorBase *this)

{
  return (UInterchangeTranslatorSettings *)0x0;
}

// GetSupportedAssetTypes @ 14e442ed0

EInterchangeTranslatorAssetType __thiscall
UInterchangeTranslatorBase::GetSupportedAssetTypes(UInterchangeTranslatorBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
             ,0x5a,L"Pure virtual not implemented (%s)");
  return None;
}

// GetSupportedFormats @ 14e442f00

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UInterchangeTranslatorBase::GetSupportedFormats
          (UInterchangeTranslatorBase *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Core\\Public\\InterchangeTranslatorBase.h"
             ,0x5e,L"Pure virtual not implemented (%s)");
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetTranslatorType @ 14e443250

EInterchangeTranslatorType __thiscall
UInterchangeTranslatorBase::GetTranslatorType(UInterchangeTranslatorBase *this)

{
  return Assets;
}

// ImportFinish @ 14e446c70

void __thiscall UInterchangeTranslatorBase::ImportFinish(UInterchangeTranslatorBase *this)

{
  return;
}

// IsThreadSafe @ 14e449f70

bool __thiscall UInterchangeTranslatorBase::IsThreadSafe(UInterchangeTranslatorBase *this)

{
  return true;
}

// ReleaseSource @ 14e451bb0

void __thiscall UInterchangeTranslatorBase::ReleaseSource(UInterchangeTranslatorBase *this)

{
  return;
}

// SetSettings @ 14e45f8d0

void __thiscall
UInterchangeTranslatorBase::SetSettings
          (UInterchangeTranslatorBase *this,UInterchangeTranslatorSettings *param_1)

{
  return;
}

// StaticRegisterNativesUInterchangeTranslatorBase @ 14e4600c0

void __cdecl UInterchangeTranslatorBase::StaticRegisterNativesUInterchangeTranslatorBase(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 7;
  local_18.DataPtr = Z_Construct_UClass_UInterchangeTranslatorBase_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Translate @ 14e464580

bool __thiscall
UInterchangeTranslatorBase::Translate
          (UInterchangeTranslatorBase *this,UInterchangeBaseNodeContainer *param_1)

{
  return false;
}

// execCanImportSourceData @ 14e469ae0

void __cdecl
UInterchangeTranslatorBase::execCanImportSourceData(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execGetSettings @ 14e46e210

void __cdecl
UInterchangeTranslatorBase::execGetSettings(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2f0))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetSourceData @ 14e46e250

void __cdecl
UInterchangeTranslatorBase::execGetSourceData(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[1].field_0x8;
  return;
}

// execGetSupportedAssetTypes @ 14e46e4c0

void __cdecl
UInterchangeTranslatorBase::execGetSupportedAssetTypes
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execGetSupportedFormats @ 14e46e500

void __cdecl
UInterchangeTranslatorBase::execGetSupportedFormats(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 *puVar1;
  FString *local_18;
  int local_10;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2d0))(param_1,&local_18);
  if (param_3 != puVar1) {
    DestructItems<FString,int>(*(FString **)param_3,*(int *)((longlong)param_3 + 8));
    if (*(void **)param_3 != (void *)0x0) {
      FMemory::Free(*(void **)param_3);
    }
    *(undefined8 *)param_3 = *puVar1;
    *puVar1 = 0;
    *(undefined4 *)((longlong)param_3 + 8) = *(undefined4 *)(puVar1 + 1);
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
    puVar1[1] = 0;
  }
  DestructItems<FString,int>(local_18,local_10);
  if (local_18 != (FString *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}

// execGetTranslatorType @ 14e46e6a0

void __cdecl
UInterchangeTranslatorBase::execGetTranslatorType(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execSetSettings @ 14e474000

void __cdecl
UInterchangeTranslatorBase::execSetSettings(UObject *param_1,FFrame *param_2,void *param_3)

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
  (**(code **)(*(longlong *)param_1 + 0x2f8))(param_1,local_res8);
  return;
}

