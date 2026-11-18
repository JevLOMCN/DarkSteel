// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 13

// StaticClass @ 149855b40

UClass * __cdecl UPCGSpatialDataWithPointCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpatialDataWithPointCache",
               &Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.InnerSingleton,
               StaticRegisterNativesUPCGSpatialDataWithPointCache,0x110,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSpatialDataWithPointCache>,
               InternalVTableHelperCtorCaller<UPCGSpatialDataWithPointCache>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.InnerSingleton;
}

// UPCGSpatialDataWithPointCache @ 14988ee90

UPCGSpatialDataWithPointCache * __thiscall
UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
          (UPCGSpatialDataWithPointCache *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UPCGData::UPCGData((UPCGData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  this->_padding_ = 0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->_padding_,(FObjectPtr)&local_res8);
  *(undefined2 *)&this->_padding_ = 0;
  FPCGAttributePropertyInputSelector::FPCGAttributePropertyInputSelector
            ((FPCGAttributePropertyInputSelector *)&this->_padding_);
  this->_padding_ = (longlong)&___7UPCGSpatialDataWithPointCache__6B_;
  (this->PointDataCache).CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
  (this->PointDataCache).CachedBoundedPointDataBoxes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PointDataCache).CachedBoundedPointDataBoxes.ArrayNum = 0;
  (this->PointDataCache).CachedBoundedPointDataBoxes.ArrayMax = 0;
  (this->PointDataCache).CachedBoundedPointData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PointDataCache).CachedBoundedPointData.ArrayNum = 0;
  (this->PointDataCache).CachedBoundedPointData.ArrayMax = 0;
  (this->PointArrayDataCache).CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
  (this->PointArrayDataCache).CachedBoundedPointDataBoxes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PointArrayDataCache).CachedBoundedPointDataBoxes.ArrayNum = 0;
  (this->PointArrayDataCache).CachedBoundedPointDataBoxes.ArrayMax = 0;
  (this->PointArrayDataCache).CachedBoundedPointData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PointArrayDataCache).CachedBoundedPointData.ArrayNum = 0;
  (this->PointArrayDataCache).CachedBoundedPointData.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CacheLock,4000);
  return this;
}

// UPCGSpatialDataWithPointCache @ 14988ef50

UPCGSpatialDataWithPointCache * __thiscall
UPCGSpatialDataWithPointCache::UPCGSpatialDataWithPointCache
          (UPCGSpatialDataWithPointCache *this,FObjectInitializer *param_1)

{
  UPCGSpatialData::UPCGSpatialData((UPCGSpatialData *)this,param_1);
  this->_padding_ = (longlong)&___7UPCGSpatialDataWithPointCache__6B_;
  (this->PointDataCache).CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
  (this->PointDataCache).CachedBoundedPointDataBoxes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PointDataCache).CachedBoundedPointDataBoxes.ArrayNum = 0;
  (this->PointDataCache).CachedBoundedPointDataBoxes.ArrayMax = 0;
  (this->PointDataCache).CachedBoundedPointData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PointDataCache).CachedBoundedPointData.ArrayNum = 0;
  (this->PointDataCache).CachedBoundedPointData.ArrayMax = 0;
  (this->PointArrayDataCache).CachedPointData.field0_0x0.DebugPtr = (UPCGBasePointData *)0x0;
  (this->PointArrayDataCache).CachedBoundedPointDataBoxes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PointArrayDataCache).CachedBoundedPointDataBoxes.ArrayNum = 0;
  (this->PointArrayDataCache).CachedBoundedPointDataBoxes.ArrayMax = 0;
  (this->PointArrayDataCache).CachedBoundedPointData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PointArrayDataCache).CachedBoundedPointData.ArrayNum = 0;
  (this->PointArrayDataCache).CachedBoundedPointData.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CacheLock,4000);
  return this;
}

// ~UPCGSpatialDataWithPointCache @ 1498919b0

void __thiscall
UPCGSpatialDataWithPointCache::~UPCGSpatialDataWithPointCache(UPCGSpatialDataWithPointCache *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UPCGSpatialDataWithPointCache__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CacheLock);
  pFVar1 = (this->PointArrayDataCache).CachedBoundedPointData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointArrayDataCache).CachedBoundedPointDataBoxes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointDataCache).CachedBoundedPointData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PointDataCache).CachedBoundedPointDataBoxes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UPCGSpatialData__6B_;
  DestructItems<FString,int>((FString *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UPCGData::~UPCGData((UPCGData *)this);
  return;
}

// CreatePointArrayData @ 1498ae040

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

UPCGPointArrayData * __thiscall
UPCGSpatialDataWithPointCache::CreatePointArrayData
          (UPCGSpatialDataWithPointCache *this,FPCGContext *param_1,TBox<double> *param_2)

{
  longlong *plVar1;
  UPCGPointArrayData *pUVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined4 local_17;
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x480))();
  local_48 = 0;
  uStack_40 = 0;
  local_18 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_17 = 0;
  local_13 = 0;
  local_11 = 0;
  local_28 = 0;
  uStack_20 = 0;
  pUVar2 = (UPCGPointArrayData *)(**(code **)(*plVar1 + 0x3b8))(plVar1,param_1,&local_48);
  return pUVar2;
}

// CreatePointData @ 1498af240

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGSpatialDataWithPointCache::CreatePointData
          (UPCGSpatialDataWithPointCache *this,FPCGContext *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\PCG\\Source\\PCG\\Public\\Data\\PCGSpatialData.h"
             ,0x14f,L"Pure virtual not implemented (%s)");
  return (UPCGPointData *)0x0;
}

// CreatePointData @ 1498af270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGSpatialDataWithPointCache::CreatePointData
          (UPCGSpatialDataWithPointCache *this,FPCGContext *param_1,TBox<double> *param_2)

{
  UPCGPointData *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001498af273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UPCGPointData *)(**(code **)(this->_padding_ + 0x488))();
  return pUVar1;
}

// GetPrivateStaticClass @ 1498bcdd0

UClass * __cdecl UPCGSpatialDataWithPointCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/PCG",L"PCGSpatialDataWithPointCache",
               &Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.InnerSingleton,
               StaticRegisterNativesUPCGSpatialDataWithPointCache,0x110,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UPCGSpatialDataWithPointCache>,
               InternalVTableHelperCtorCaller<UPCGSpatialDataWithPointCache>,local_res8,
               UPCGSpatialData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPCGSpatialDataWithPointCache.InnerSingleton;
}

// GetResourceSizeEx @ 1498c55c0

void __thiscall
UPCGSpatialDataWithPointCache::GetResourceSizeEx
          (UPCGSpatialDataWithPointCache *this,FResourceSizeEx *param_1)

{
  longlong *plVar1;
  
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 400))(plVar1,param_1);
  }
  FPCGPointDataCache::GetResourceSizeEx(&this->PointDataCache,param_1);
  FPCGPointDataCache::GetResourceSizeEx(&this->PointArrayDataCache,param_1);
  return;
}

// StaticRegisterNativesUPCGSpatialDataWithPointCache @ 1498f6a90

void __cdecl UPCGSpatialDataWithPointCache::StaticRegisterNativesUPCGSpatialDataWithPointCache(void)

{
  return;
}

// SupportsBoundedPointData @ 1498f6c70

bool __thiscall
UPCGSpatialDataWithPointCache::SupportsBoundedPointData(UPCGSpatialDataWithPointCache *this)

{
  return false;
}

// ToPointArrayData @ 1498f7df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointArrayData * __thiscall
UPCGSpatialDataWithPointCache::ToPointArrayData
          (UPCGSpatialDataWithPointCache *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGPointArrayData *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UPCGSpatialDataWithPointCache *local_res8;
  undefined1 local_28 [16];
  FString local_18;
  
  local_28._8_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UPCGSpatialDataWithPointCache::ToPointArrayData'::__l2::<lambda_1>,UPCGBasePointData_const_*,FPCGContext_*,UE::Math::TBox<double>_const_&>
       ::Call;
  local_res8 = this;
  bVar2 = (bool)(**(code **)(this->_padding_ + 0x478))();
  pUVar3 = (UPCGPointArrayData *)
           FPCGPointDataCache::ToBasePointDataInternal
                     (&this->PointArrayDataCache,param_1,param_2,bVar2,&this->CacheLock,
                      (TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UE::Math::TBox<double>_const_&)>
                       *)local_28);
  if (pUVar3 == (UPCGPointArrayData *)0x0) {
    pUVar3 = (UPCGPointArrayData *)0x0;
  }
  else {
    pUVar4 = UPCGPointArrayData::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UPCGPointArrayData>((FString *)local_28);
      pwVar7 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar6);
    }
  }
  return pUVar3;
}

// ToPointData @ 1498f80b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPCGPointData * __thiscall
UPCGSpatialDataWithPointCache::ToPointData
          (UPCGSpatialDataWithPointCache *this,FPCGContext *param_1,TBox<double> *param_2)

{
  int iVar1;
  bool bVar2;
  UPCGPointData *pUVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  UPCGSpatialDataWithPointCache *local_res8;
  undefined1 local_28 [16];
  FString local_18;
  
  local_28._8_8_ = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UPCGSpatialDataWithPointCache::ToPointData'::__l2::<lambda_1>,UPCGBasePointData_const_*,FPCGContext_*,UE::Math::TBox<double>_const_&>
       ::Call;
  local_res8 = this;
  bVar2 = (bool)(**(code **)(this->_padding_ + 0x478))();
  pUVar3 = (UPCGPointData *)
           FPCGPointDataCache::ToBasePointDataInternal
                     (&this->PointDataCache,param_1,param_2,bVar2,&this->CacheLock,
                      (TFunctionRef<UPCGBasePointData_const_*___cdecl(FPCGContext_*,UE::Math::TBox<double>_const_&)>
                       *)local_28);
  if (pUVar3 == (UPCGPointData *)0x0) {
    pUVar3 = (UPCGPointData *)0x0;
  }
  else {
    pUVar4 = UPCGPointData::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UPCGPointData>((FString *)local_28);
      pwVar7 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UPCGBasePointData_const_>
                         (&local_18,(UPCGBasePointData *)pUVar3);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar6);
    }
  }
  return pUVar3;
}

