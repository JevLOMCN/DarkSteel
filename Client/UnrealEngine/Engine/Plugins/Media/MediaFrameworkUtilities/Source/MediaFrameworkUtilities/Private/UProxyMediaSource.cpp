// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaFrameworkUtilities
// Functions: 20

// StaticClass @ 14d7ca740

UClass * __cdecl UProxyMediaSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"ProxyMediaSource",
               &Z_Registration_Info_UClass_UProxyMediaSource.InnerSingleton,
               StaticRegisterNativesUProxyMediaSource,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProxyMediaSource>,
               InternalVTableHelperCtorCaller<UProxyMediaSource>,local_res8,
               UMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyMediaSource.InnerSingleton;
}

// UProxyMediaSource @ 14d7d1690

UProxyMediaSource * __thiscall UProxyMediaSource::UProxyMediaSource(UProxyMediaSource *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UMediaSource::UMediaSource((UMediaSource *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  (this->DynamicProxy).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->Proxy).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  this->bUrlGuard = false;
  this->bValidateGuard = false;
  this->bLeafMediaSource = false;
  this->bMediaOptionGuard = false;
  return this;
}

// UProxyMediaSource @ 14d7d16f0

UProxyMediaSource * __thiscall
UProxyMediaSource::UProxyMediaSource(UProxyMediaSource *this,FVTableHelper *param_1)

{
  UMediaSource::UMediaSource((UMediaSource *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  (this->DynamicProxy).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  (this->Proxy).field0_0x0.DebugPtr = (UMediaSource *)0x0;
  return this;
}

// ~UProxyMediaSource @ 14d7d1e20

void __thiscall UProxyMediaSource::~UProxyMediaSource(UProxyMediaSource *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  UMediaSource::~UMediaSource((UMediaSource *)this);
  return;
}

// GetLeafMediaSource @ 14d7d8950

/* WARNING: Enum "Type": Some values do not have unique names */

UMediaSource * __thiscall UProxyMediaSource::GetLeafMediaSource(UProxyMediaSource *this)

{
  int iVar1;
  UClass *pUVar2;
  UProxyMediaSource *this_00;
  FString local_18;
  
  if (this->bLeafMediaSource != false) {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (UMediaSource *)0x0;
  }
  this->bLeafMediaSource = true;
  this_00 = (UProxyMediaSource *)(this->DynamicProxy).field0_0x0.DebugPtr;
  if ((this_00 != (UProxyMediaSource *)0x0) ||
     (this_00 = (UProxyMediaSource *)(this->Proxy).field0_0x0.DebugPtr,
     this_00 != (UProxyMediaSource *)0x0)) {
    pUVar2 = StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       (((longlong *)
         *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_ && (this_00 != (UProxyMediaSource *)0x0)))) {
      this_00 = (UProxyMediaSource *)GetLeafMediaSource(this_00);
    }
  }
  this->bLeafMediaSource = false;
  return (UMediaSource *)this_00;
}

// GetMediaOption @ 14d7d8a40

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<IMediaOptions::FDataContainer,1> * __thiscall
UProxyMediaSource::GetMediaOption
          (UProxyMediaSource *this,
          TSharedPtr<IMediaOptions::FDataContainer,1> *__return_storage_ptr__,FName *param_1,
          TSharedPtr<IMediaOptions::FDataContainer,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  FString local_18;
  
  if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
    lVar2 = this->_padding_;
    if ((lVar2 == 0) && (lVar2 = this->_padding_, lVar2 == 0)) {
      UMediaSource::GetMediaOption((UMediaSource *)this,__return_storage_ptr__,param_1,param_2);
    }
    else {
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 8))(lVar2 + 0x28);
    }
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  }
  else {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    __return_storage_ptr__->Object = param_2->Object;
    pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetMediaOption @ 14d7d8b20

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UProxyMediaSource::GetMediaOption
          (UProxyMediaSource *this,FString *__return_storage_ptr__,FName *param_1,FString *param_2)

{
  longlong lVar1;
  FString local_18;
  
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    ::FString::FString(__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  lVar1 = this->_padding_;
  if ((lVar1 == 0) && (lVar1 = this->_padding_, lVar1 == 0)) {
    UMediaSource::GetMediaOption((UMediaSource *)this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  }
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  return __return_storage_ptr__;
}

// GetMediaOption @ 14d7d8c00

/* WARNING: Enum "Type": Some values do not have unique names */

FText * __thiscall
UProxyMediaSource::GetMediaOption
          (UProxyMediaSource *this,FText *__return_storage_ptr__,FName *param_1,FText *param_2)

{
  ITextData *pIVar1;
  longlong lVar2;
  undefined1 local_res8 [8];
  FString local_18;
  
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (param_2->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = param_2->Flags;
    return __return_storage_ptr__;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  lVar2 = this->_padding_;
  if ((lVar2 == 0) && (lVar2 = this->_padding_, lVar2 == 0)) {
    UMediaSource::GetMediaOption((UMediaSource *)this,__return_storage_ptr__,param_1,param_2);
  }
  else {
    (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28);
  }
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  return __return_storage_ptr__;
}

// GetMediaOption @ 14d7d8cf0

/* WARNING: Enum "Type": Some values do not have unique names */

double __thiscall
UProxyMediaSource::GetMediaOption(UProxyMediaSource *this,FName *param_1,double param_2)

{
  longlong lVar1;
  double dVar2;
  FString local_28 [2];
  
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,local_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
    }
    return param_2;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  lVar1 = this->_padding_;
  if ((lVar1 == 0) && (lVar1 = this->_padding_, lVar1 == 0)) {
    dVar2 = UMediaSource::GetMediaOption((UMediaSource *)this,param_1,param_2);
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
    return dVar2;
  }
  dVar2 = (double)(**(code **)(*(longlong *)(lVar1 + 0x28) + 0x28))(lVar1 + 0x28);
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  return dVar2;
}

// GetMediaOption @ 14d7d8db0

/* WARNING: Enum "Type": Some values do not have unique names */

long64 __thiscall
UProxyMediaSource::GetMediaOption(UProxyMediaSource *this,FName *param_1,long64 param_2)

{
  long64 lVar1;
  longlong lVar2;
  FString local_18;
  
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return param_2;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  lVar2 = this->_padding_;
  if ((lVar2 == 0) && (lVar2 = this->_padding_, lVar2 == 0)) {
    lVar1 = UMediaSource::GetMediaOption((UMediaSource *)this,param_1,param_2);
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
    return lVar1;
  }
  lVar1 = (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x20))(lVar2 + 0x28);
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  return lVar1;
}

// GetMediaOption @ 14d7d8e70

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UProxyMediaSource::GetMediaOption(UProxyMediaSource *this,FName *param_1,bool param_2)

{
  undefined1 uVar1;
  bool bVar2;
  longlong lVar3;
  FString local_18;
  
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return param_2;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  lVar3 = this->_padding_;
  if ((lVar3 == 0) && (lVar3 = this->_padding_, lVar3 == 0)) {
    bVar2 = UMediaSource::GetMediaOption((UMediaSource *)this,param_1,param_2);
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
    return bVar2;
  }
  uVar1 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x30))(lVar3 + 0x28);
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  return (bool)uVar1;
}

// GetMediaSource @ 14d7d90a0

UMediaSource * __thiscall UProxyMediaSource::GetMediaSource(UProxyMediaSource *this)

{
  UMediaSource *pUVar1;
  
  pUVar1 = (this->DynamicProxy).field0_0x0.DebugPtr;
  if (pUVar1 == (UMediaSource *)0x0) {
    pUVar1 = (this->Proxy).field0_0x0.DebugPtr;
  }
  return pUVar1;
}

// GetPrivateStaticClass @ 14d7dae60

UClass * __cdecl UProxyMediaSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UProxyMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaFrameworkUtilities",L"ProxyMediaSource",
               &Z_Registration_Info_UClass_UProxyMediaSource.InnerSingleton,
               StaticRegisterNativesUProxyMediaSource,0x98,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UProxyMediaSource>,
               InternalVTableHelperCtorCaller<UProxyMediaSource>,local_res8,
               UMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UProxyMediaSource.InnerSingleton;
}

// GetUrl @ 14d7db5e0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UProxyMediaSource::GetUrl(UProxyMediaSource *this,FString *__return_storage_ptr__)

{
  bool bVar1;
  bool bVar2;
  FString *pFVar3;
  UMediaSource *pUVar4;
  FString local_28;
  void *local_18 [2];
  
  if (this->bUrlGuard != false) {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  this->bUrlGuard = true;
  pUVar4 = (this->DynamicProxy).field0_0x0.DebugPtr;
  if ((pUVar4 == (UMediaSource *)0x0) &&
     (pUVar4 = (this->Proxy).field0_0x0.DebugPtr, pUVar4 == (UMediaSource *)0x0)) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pFVar3 = &local_28;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    pFVar3 = (FString *)(**(code **)(pUVar4->_padding_ + 0x2b0))(pUVar4,local_18);
    bVar2 = true;
    bVar1 = false;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
  (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
  (pFVar3->Data).ArrayNum = 0;
  (pFVar3->Data).ArrayMax = 0;
  if ((bVar1) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar2) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  this->bUrlGuard = false;
  return __return_storage_ptr__;
}

// HasMediaOption @ 14d7db740

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UProxyMediaSource::HasMediaOption(UProxyMediaSource *this,FName *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  longlong lVar3;
  FString local_18;
  
  if (*(char *)((longlong)&this->_padding_ + 5) != '\0') {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName
                ((UObjectBaseUtility *)&this[-1]._padding_,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 1;
  lVar3 = this->_padding_;
  if ((lVar3 == 0) && (lVar3 = this->_padding_, lVar3 == 0)) {
    bVar2 = UMediaSource::HasMediaOption((UMediaSource *)this,param_1);
    *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
    return bVar2;
  }
  uVar1 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x38))(lVar3 + 0x28);
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  return (bool)uVar1;
}

// IsProxyValid @ 14d7dbf90

bool __thiscall UProxyMediaSource::IsProxyValid(UProxyMediaSource *this)

{
  UMediaSource *pUVar1;
  
  pUVar1 = GetLeafMediaSource(this);
  return pUVar1 != (UMediaSource *)0x0;
}

// SetDynamicMediaSource @ 14d7e1530

void __thiscall
UProxyMediaSource::SetDynamicMediaSource(UProxyMediaSource *this,UMediaSource *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMediaSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->DynamicProxy).field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->DynamicProxy).field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUProxyMediaSource @ 14d7e1f70

void __cdecl UProxyMediaSource::StaticRegisterNativesUProxyMediaSource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UProxyMediaSource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Validate @ 14d7e2290

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UProxyMediaSource::Validate(UProxyMediaSource *this)

{
  undefined1 uVar1;
  UMediaSource *pUVar2;
  FString local_18;
  
  if (this->bValidateGuard != false) {
    if (2 < (byte)LogMediaFrameworkUtilities._0_1_) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
      UE::Logging::Private::BasicLog<3>
                (&::LOG_Static,(FLogCategoryBase *)&LogMediaFrameworkUtilities);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return false;
  }
  this->bValidateGuard = true;
  pUVar2 = (this->DynamicProxy).field0_0x0.DebugPtr;
  if ((pUVar2 == (UMediaSource *)0x0) &&
     (pUVar2 = (this->Proxy).field0_0x0.DebugPtr, pUVar2 == (UMediaSource *)0x0)) {
    this->bValidateGuard = false;
    return false;
  }
  uVar1 = (**(code **)(pUVar2->_padding_ + 0x2b8))();
  this->bValidateGuard = false;
  return (bool)uVar1;
}

// execIsProxyValid @ 14d7e2ac0

void __cdecl UProxyMediaSource::execIsProxyValid(UObject *param_1,FFrame *param_2,void *param_3)

{
  UMediaSource *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = GetLeafMediaSource((UProxyMediaSource *)param_1);
  *(bool *)param_3 = pUVar1 != (UMediaSource *)0x0;
  return;
}

