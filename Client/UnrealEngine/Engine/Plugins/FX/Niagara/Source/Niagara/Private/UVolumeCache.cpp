// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 12

// StaticClass @ 1494732d0

UClass * __cdecl UVolumeCache::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVolumeCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"VolumeCache",
               &Z_Registration_Info_UClass_UVolumeCache.InnerSingleton,
               StaticRegisterNativesUVolumeCache,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVolumeCache>,InternalVTableHelperCtorCaller<UVolumeCache>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVolumeCache.InnerSingleton;
}

// UVolumeCache @ 149476cd0

UVolumeCache * __thiscall UVolumeCache::UVolumeCache(UVolumeCache *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVolumeCache__6B_;
  (this->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePath).Data.ArrayNum = 0;
  (this->FilePath).Data.ArrayMax = 0;
  (this->CachedVolumeFiles).Object = (FVolumeCacheData *)0x0;
  (this->CachedVolumeFiles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UVolumeCache @ 149476d10

UVolumeCache * __thiscall UVolumeCache::UVolumeCache(UVolumeCache *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UVolumeCache__6B_;
  (this->FilePath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilePath).Data.ArrayNum = 0;
  (this->FilePath).Data.ArrayMax = 0;
  (this->CachedVolumeFiles).Object = (FVolumeCacheData *)0x0;
  (this->CachedVolumeFiles).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UVolumeCache @ 149477480

void __thiscall UVolumeCache::~UVolumeCache(UVolumeCache *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVolumeCache__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CachedVolumeFiles).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->FilePath).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetAssetPath @ 14947acc0

FString * __thiscall
UVolumeCache::GetAssetPath(UVolumeCache *this,FString *__return_storage_ptr__,int param_1)

{
  FVolumeCacheData *this_00;
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_18;
  
  if ((this->CachedVolumeFiles).Object == (FVolumeCacheData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CachedVolumeFiles != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\VolumeCache.cpp"
                       ,0x6c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((this->CachedVolumeFiles).Object == (FVolumeCacheData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = (this->CachedVolumeFiles).Object;
  pFVar3 = ::FString::FString(&local_18,&this->FilePath);
  FVolumeCacheData::GetAssetPath(this_00,__return_storage_ptr__,pFVar3,param_1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14947b130

UClass * __cdecl UVolumeCache::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVolumeCache.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"VolumeCache",
               &Z_Registration_Info_UClass_UVolumeCache.InnerSingleton,
               StaticRegisterNativesUVolumeCache,0x60,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UVolumeCache>,InternalVTableHelperCtorCaller<UVolumeCache>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVolumeCache.InnerSingleton;
}

// InitData @ 14947bee0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UVolumeCache::InitData(UVolumeCache *this)

{
  TSharedPtr<FVolumeCacheData,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FStaticBasicLogRecord *pFVar4;
  undefined8 local_28;
  int local_20;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->CachedVolumeFiles;
  if ((this->CachedVolumeFiles).Object != (FVolumeCacheData *)0x0) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FVolumeCacheData,1> *)&local_18) {
      pTVar1->Object = (FVolumeCacheData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CachedVolumeFiles).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  if (this->CacheType == OpenVDB) {
    if ((byte)LogVolumeCache._0_1_ < 3) goto LAB_14947bf5e;
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((byte)LogVolumeCache._0_1_ < 3) goto LAB_14947bf5e;
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&LogVolumeCache);
LAB_14947bf5e:
  if (pTVar1->Object == (FVolumeCacheData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_20 = (this->Resolution).field0_0x0._s_0.Z;
  local_28 = *(undefined8 *)&(this->Resolution).field0_0x0;
  (**(code **)(pTVar1->Object->_padding_ + 8))(pTVar1->Object,&local_28);
  return;
}

// LoadFile @ 14947d5b0

bool __thiscall UVolumeCache::LoadFile(UVolumeCache *this,int param_1)

{
  FVolumeCacheData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  FString local_18;
  
  if ((this->CachedVolumeFiles).Object == (FVolumeCacheData *)0x0) {
    InitData(this);
  }
  if ((this->CachedVolumeFiles).Object == (FVolumeCacheData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->CachedVolumeFiles).Object;
  pcVar2 = *(code **)(pFVar1->_padding_ + 0x10);
  pFVar5 = ::FString::FString(&local_18,&this->FilePath);
  uVar4 = (*pcVar2)(pFVar1,pFVar5,param_1);
  return (bool)uVar4;
}

// LoadRange @ 14947d650

bool __thiscall UVolumeCache::LoadRange(UVolumeCache *this)

{
  int iVar1;
  int iVar2;
  FVolumeCacheData *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  FString *pFVar7;
  FString local_18;
  
  if ((this->CachedVolumeFiles).Object == (FVolumeCacheData *)0x0) {
    InitData(this);
  }
  if ((this->CachedVolumeFiles).Object == (FVolumeCacheData *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  pFVar3 = (this->CachedVolumeFiles).Object;
  iVar1 = this->FrameRangeEnd;
  iVar2 = this->FrameRangeStart;
  pcVar4 = *(code **)(pFVar3->_padding_ + 0x20);
  pFVar7 = ::FString::FString(&local_18,&this->FilePath);
  uVar6 = (*pcVar4)(pFVar3,pFVar7,iVar2,iVar1);
  return (bool)uVar6;
}

// StaticRegisterNativesUVolumeCache @ 14947f3c0

void __cdecl UVolumeCache::StaticRegisterNativesUVolumeCache(void)

{
  return;
}

// UnloadAll @ 149480290

void __thiscall UVolumeCache::UnloadAll(UVolumeCache *this)

{
  FVolumeCacheData *pFVar1;
  
  pFVar1 = (this->CachedVolumeFiles).Object;
  if (pFVar1 != (FVolumeCacheData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014948029c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x28))();
    return;
  }
  return;
}

// UnloadFile @ 1494802b0

bool __thiscall UVolumeCache::UnloadFile(UVolumeCache *this,int param_1)

{
  FVolumeCacheData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if ((this->CachedVolumeFiles).Object == (FVolumeCacheData *)0x0) {
    InitData(this);
  }
  if ((this->CachedVolumeFiles).Object == (FVolumeCacheData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar1 = (this->CachedVolumeFiles).Object;
                    /* WARNING: Could not recover jumptable at 0x00014948030b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(pFVar1->_padding_ + 0x18))(pFVar1,param_1);
  return (bool)uVar4;
}

