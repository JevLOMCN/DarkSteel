// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// StaticClass @ 141fb52a0

UClass * __cdecl UClassCookedMetaData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClassCookedMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ClassCookedMetaData",
               &Z_Registration_Info_UClass_UClassCookedMetaData.InnerSingleton,
               StaticRegisterNativesUClassCookedMetaData,0x118,8,CLASS_Intrinsic|CLASS_Optional,
               CASTCLASS_None,L"Engine",InternalConstructor<UClassCookedMetaData>,
               InternalVTableHelperCtorCaller<UClassCookedMetaData>,local_res8,UObject::StaticClass,
               UClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UClassCookedMetaData.InnerSingleton;
}

// UClassCookedMetaData @ 141fbeda0

UClassCookedMetaData * __thiscall
UClassCookedMetaData::UClassCookedMetaData(UClassCookedMetaData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UClassCookedMetaData__6B_;
  *(undefined8 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData = 0;
  *(undefined8 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x8 = 0;
  *(undefined8 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x20 = 0;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x34 = 0;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x48 = 0;
  *(undefined8 *)&(this->ClassMetaData).PropertiesMetaData = 0;
  *(undefined8 *)&(this->ClassMetaData).PropertiesMetaData.field_0x8 = 0;
  *(undefined8 *)&(this->ClassMetaData).PropertiesMetaData.field_0x20 = 0;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x34 = 0;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClassMetaData).PropertiesMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x48 = 0;
  *(undefined8 *)&this->FunctionsMetaData = 0;
  *(undefined8 *)&(this->FunctionsMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->FunctionsMetaData).field_0x20 = 0;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x34 = 0;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FunctionsMetaData).field_0x40 = 0;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x48 = 0;
  return this;
}

// UClassCookedMetaData @ 141fbee80

UClassCookedMetaData * __thiscall
UClassCookedMetaData::UClassCookedMetaData(UClassCookedMetaData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UClassCookedMetaData__6B_;
  *(undefined8 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData = 0;
  *(undefined8 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x8 = 0;
  *(undefined8 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x20 = 0;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x34 = 0;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x48 = 0;
  *(undefined8 *)&(this->ClassMetaData).PropertiesMetaData = 0;
  *(undefined8 *)&(this->ClassMetaData).PropertiesMetaData.field_0x8 = 0;
  *(undefined8 *)&(this->ClassMetaData).PropertiesMetaData.field_0x20 = 0;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x34 = 0;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClassMetaData).PropertiesMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x48 = 0;
  *(undefined8 *)&this->FunctionsMetaData = 0;
  *(undefined8 *)&(this->FunctionsMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->FunctionsMetaData).field_0x20 = 0;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x34 = 0;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->FunctionsMetaData).field_0x40 = 0;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x48 = 0;
  return this;
}

// ~UClassCookedMetaData @ 141fbffc0

void __thiscall UClassCookedMetaData::~UClassCookedMetaData(UClassCookedMetaData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UClassCookedMetaData__6B_;
  *(undefined4 *)&(this->FunctionsMetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->FunctionsMetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FStructCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FStructCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FStructCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FunctionsMetaData);
  *(undefined4 *)&(this->ClassMetaData).PropertiesMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClassMetaData).PropertiesMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ClassMetaData).PropertiesMetaData);
  *(undefined4 *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClassMetaData);
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyMetaData @ 141fc5f30

void __thiscall UClassCookedMetaData::ApplyMetaData(UClassCookedMetaData *this,UClass *param_1)

{
  UStruct *pUVar1;
  FStructCookedMetaDataStore *this_00;
  TFieldIterator<UFunction> local_28;
  
  FStructCookedMetaDataStore::ApplyMetaData(&this->ClassMetaData,(UStruct *)param_1);
  if (param_1 == (UClass *)0x0) {
    local_28.Field = (UField *)0x0;
  }
  else {
    local_28.Field = (UField *)param_1->_padding_;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = false;
  local_28.bIncludeDeprecated = false;
  local_28.bIncludeInterface = false;
  local_28.Struct = (UStruct *)param_1;
  TFieldIterator<UFunction>::IterateToNext(&local_28);
  pUVar1 = (UStruct *)local_28.Field;
  while (pUVar1 != (UStruct *)0x0) {
    local_28.Field = (UField *)pUVar1;
    this_00 = TMapBase<FName,FStructCookedMetaDataStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStructCookedMetaDataStore,0>_>
              ::Find((TMapBase<FName,FStructCookedMetaDataStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FStructCookedMetaDataStore,0>_>
                      *)&this->FunctionsMetaData,(FName)pUVar1->_padding_);
    if (this_00 != (FStructCookedMetaDataStore *)0x0) {
      FStructCookedMetaDataStore::ApplyMetaData(this_00,pUVar1);
    }
    local_28.Field = (UField *)pUVar1->_padding_;
    TFieldIterator<UFunction>::IterateToNext(&local_28);
    pUVar1 = (UStruct *)local_28.Field;
  }
  return;
}

// CacheMetaData @ 141fc6530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UClassCookedMetaData::CacheMetaData(UClassCookedMetaData *this,UClass *param_1)

{
  int iVar1;
  UStruct *pUVar2;
  undefined1 auStackY_138 [32];
  TFieldIterator<UFunction_const_> local_108;
  TPairInitializer<FName_&&,FStructCookedMetaDataStore_&&> local_f0;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 local_c8 [32];
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  int local_94;
  void *local_88;
  undefined4 local_80;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  int local_44;
  void *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FStructCookedMetaDataStore::CacheMetaData(&this->ClassMetaData,(UStruct *)param_1);
  if (param_1 == (UClass *)0x0) {
    local_108.Field = (UField *)0x0;
  }
  else {
    local_108.Field = (UField *)param_1->_padding_;
  }
  local_108.InterfaceIndex = -1;
  local_108.bIncludeSuper = false;
  local_108.bIncludeDeprecated = false;
  local_108.bIncludeInterface = false;
  local_108.Struct = (UStruct *)param_1;
  TFieldIterator<UFunction_const_>::IterateToNext(&local_108);
  pUVar2 = (UStruct *)local_108.Field;
  while (pUVar2 != (UStruct *)0x0) {
    local_c8._0_8_ = (FScriptContainerElement *)0x0;
    local_c8._8_8_ = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_9c = 0x80;
    local_98 = 0xffffffff;
    local_94 = 0;
    local_88 = (void *)0x0;
    local_80 = 0;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_4c = 0x80;
    local_48 = 0xffffffff;
    local_44 = 0;
    local_38 = (void *)0x0;
    local_30 = 0;
    local_108.Field = (UField *)pUVar2;
    FStructCookedMetaDataStore::CacheMetaData((FStructCookedMetaDataStore *)local_c8,pUVar2);
    if ((0 < local_c8._8_4_ - local_94) || (0 < local_78._8_4_ - local_44)) {
      local_f0._4_8_ = pUVar2->_padding_;
      local_e0 = (undefined8 *)((longlong)&local_f0.Key + 4);
      local_d8 = local_c8;
      TSet<TTuple<FName,FStructCookedMetaDataStore>,TDefaultMapHashableKeyFuncs<FName,FStructCookedMetaDataStore,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,FStructCookedMetaDataStore_&&>_>
                ((TSet<TTuple<FName,FStructCookedMetaDataStore>,TDefaultMapHashableKeyFuncs<FName,FStructCookedMetaDataStore,0>,FDefaultSetAllocator>
                  *)&this->FunctionsMetaData,&local_f0,(bool *)&local_e0);
    }
    local_30 = 0;
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_78,0,local_78._8_4_);
    iVar1 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xb0,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_48 = 0xffffffff;
    local_44 = 0;
    local_50 = 0;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
    local_80 = 0;
    if (local_88 != (void *)0x0) {
      FMemory::Free(local_88);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_c8,0,local_c8._8_4_);
    iVar1 = SUB84(local_c8._8_8_,4);
    local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
    }
    local_98 = 0xffffffff;
    local_94 = 0;
    local_a0 = 0;
    if (0x80 < local_9c) {
      local_9c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
    }
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    local_108.Field = (UField *)pUVar2->_padding_;
    TFieldIterator<UFunction_const_>::IterateToNext(&local_108);
    pUVar2 = (UStruct *)local_108.Field;
  }
  return;
}

// GetPrivateStaticClass @ 141fd2740

UClass * __cdecl UClassCookedMetaData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClassCookedMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"ClassCookedMetaData",
               &Z_Registration_Info_UClass_UClassCookedMetaData.InnerSingleton,
               StaticRegisterNativesUClassCookedMetaData,0x118,8,CLASS_Intrinsic|CLASS_Optional,
               CASTCLASS_None,L"Engine",InternalConstructor<UClassCookedMetaData>,
               InternalVTableHelperCtorCaller<UClassCookedMetaData>,local_res8,UObject::StaticClass,
               UClass::StaticClass);
  }
  return Z_Registration_Info_UClass_UClassCookedMetaData.InnerSingleton;
}

// HasMetaData @ 141fd3eb0

bool __thiscall UClassCookedMetaData::HasMetaData(UClassCookedMetaData *this)

{
  if (((*(int *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x8 -
        *(int *)&(this->ClassMetaData).ObjectMetaData.ObjectMetaData.field_0x34 < 1) &&
      (*(int *)&(this->ClassMetaData).PropertiesMetaData.field_0x8 -
       *(int *)&(this->ClassMetaData).PropertiesMetaData.field_0x34 < 1)) &&
     (*(int *)&(this->FunctionsMetaData).field_0x8 - *(int *)&(this->FunctionsMetaData).field_0x34 <
      1)) {
    return false;
  }
  return true;
}

// PostLoad @ 141fd9250

void __thiscall UClassCookedMetaData::PostLoad(UClassCookedMetaData *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UClassCookedMetaData **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// StaticRegisterNativesUClassCookedMetaData @ 141fe99a0

void __cdecl UClassCookedMetaData::StaticRegisterNativesUClassCookedMetaData(void)

{
  return;
}

