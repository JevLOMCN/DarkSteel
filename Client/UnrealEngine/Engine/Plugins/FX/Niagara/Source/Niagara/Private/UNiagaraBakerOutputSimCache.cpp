// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticClass @ 148fe0e20

UClass * __cdecl UNiagaraBakerOutputSimCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutputSimCache",
               &Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutputSimCache,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutputSimCache>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutputSimCache>,local_res8,
               UNiagaraBakerOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.InnerSingleton;
}

// UNiagaraBakerOutputSimCache @ 1490236a0

UNiagaraBakerOutputSimCache * __thiscall
UNiagaraBakerOutputSimCache::UNiagaraBakerOutputSimCache
          (UNiagaraBakerOutputSimCache *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraBakerOutputSimCache__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FString::FString(&this->SimCacheAssetPathFormat,
                     L"{AssetFolder}/{AssetName}_SimCache_{OutputName}");
  (this->CreateParameters).AttributeCaptureMode = All;
  (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  puVar2 = &(this->CreateParameters).field_0x4;
  (this->CreateParameters).bAllowRebasing = 1;
  (this->CreateParameters).bIncludeDebugData = 0;
  (this->CreateParameters).bAllowSerializeLargeCache = 1;
  (this->CreateParameters).bAllowVelocityExtrapolation = 0;
  (this->CreateParameters).bInterpolateAllTypes = 1;
  (this->CreateParameters).bAllowInterpolation = 0;
  (this->CreateParameters).bAllowDataInterfaceCaching = 1;
  (this->CreateParameters).RebaseIncludeAttributes.ArrayNum = 0;
  (this->CreateParameters).RebaseIncludeAttributes.ArrayMax = 0;
  (this->CreateParameters).RebaseExcludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).RebaseExcludeAttributes.ArrayNum = 0;
  (this->CreateParameters).RebaseExcludeAttributes.ArrayMax = 0;
  (this->CreateParameters).InterpolationIncludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).InterpolationIncludeAttributes.ArrayNum = 0;
  (this->CreateParameters).InterpolationIncludeAttributes.ArrayMax = 0;
  (this->CreateParameters).InterpolationExcludeAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).InterpolationExcludeAttributes.ArrayNum = 0;
  (this->CreateParameters).InterpolationExcludeAttributes.ArrayMax = 0;
  (this->CreateParameters).ExplicitCaptureAttributes.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->CreateParameters).ExplicitCaptureAttributes.ArrayNum = 0;
  (this->CreateParameters).ExplicitCaptureAttributes.ArrayMax = 0;
  return this;
}

// ~UNiagaraBakerOutputSimCache @ 149026480

void __thiscall
UNiagaraBakerOutputSimCache::~UNiagaraBakerOutputSimCache(UNiagaraBakerOutputSimCache *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraBakerOutputSimCache__6B_;
  pFVar1 = (this->CreateParameters).ExplicitCaptureAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).InterpolationExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).InterpolationIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).RebaseExcludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CreateParameters).RebaseIncludeAttributes.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimCacheAssetPathFormat).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraBakerOutput__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// Equals @ 14903fdc0

bool __thiscall
UNiagaraBakerOutputSimCache::Equals(UNiagaraBakerOutputSimCache *this,UNiagaraBakerOutput *param_1)

{
  int iVar1;
  int iVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UNiagaraBakerOutput *)0x0) {
    pFVar4 = GetTypeName<UNiagaraBakerOutputSimCache>(&local_28);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar3 = StaticClass();
  iVar2 = (int)pUVar3->_padding_;
  if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
      != &pUVar3->_padding_)) {
    pFVar4 = GetTypeName<UNiagaraBakerOutputSimCache>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraBakerOutput_const_>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  iVar2 = (int)this->_padding_;
  iVar1 = (param_1->OutputName).Data.ArrayNum;
  if (iVar2 != iVar1) {
    return iVar2 + iVar1 == 1;
  }
  if (1 < iVar2) {
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)this->_padding_,
                       (wchar_t *)(param_1->OutputName).Data.AllocatorInstance.Data);
    return iVar2 == 0;
  }
  return true;
}

// GetPrivateStaticClass @ 149047dc0

UClass * __cdecl UNiagaraBakerOutputSimCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraBakerOutputSimCache",
               &Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.InnerSingleton,
               StaticRegisterNativesUNiagaraBakerOutputSimCache,0xa0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraBakerOutputSimCache>,
               InternalVTableHelperCtorCaller<UNiagaraBakerOutputSimCache>,local_res8,
               UNiagaraBakerOutput::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraBakerOutputSimCache.InnerSingleton;
}

// StaticRegisterNativesUNiagaraBakerOutputSimCache @ 14906a460

void __cdecl UNiagaraBakerOutputSimCache::StaticRegisterNativesUNiagaraBakerOutputSimCache(void)

{
  return;
}

