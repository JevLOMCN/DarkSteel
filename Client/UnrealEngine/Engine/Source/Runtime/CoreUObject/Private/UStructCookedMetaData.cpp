// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 10

// StaticClass @ 141fb51d0

UClass * __cdecl UStructCookedMetaData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStructCookedMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"StructCookedMetaData",
               &Z_Registration_Info_UClass_UStructCookedMetaData.InnerSingleton,
               StaticRegisterNativesUStructCookedMetaData,200,8,CLASS_Intrinsic|CLASS_Optional,
               CASTCLASS_None,L"Engine",InternalConstructor<UStructCookedMetaData>,
               InternalVTableHelperCtorCaller<UStructCookedMetaData>,local_res8,UObject::StaticClass
               ,UScriptStruct::StaticClass);
  }
  return Z_Registration_Info_UClass_UStructCookedMetaData.InnerSingleton;
}

// UStructCookedMetaData @ 141fbf230

UStructCookedMetaData * __thiscall
UStructCookedMetaData::UStructCookedMetaData(UStructCookedMetaData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStructCookedMetaData__6B_;
  *(undefined8 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData = 0;
  *(undefined8 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x8 = 0;
  *(undefined8 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x20 = 0;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x34 = 0;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x48 = 0;
  *(undefined8 *)&(this->StructMetaData).PropertiesMetaData = 0;
  *(undefined8 *)&(this->StructMetaData).PropertiesMetaData.field_0x8 = 0;
  *(undefined8 *)&(this->StructMetaData).PropertiesMetaData.field_0x20 = 0;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x34 = 0;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StructMetaData).PropertiesMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x48 = 0;
  return this;
}

// UStructCookedMetaData @ 141fbf2c0

UStructCookedMetaData * __thiscall
UStructCookedMetaData::UStructCookedMetaData
          (UStructCookedMetaData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStructCookedMetaData__6B_;
  *(undefined8 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData = 0;
  *(undefined8 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x8 = 0;
  *(undefined8 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x20 = 0;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x34 = 0;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x48 = 0;
  *(undefined8 *)&(this->StructMetaData).PropertiesMetaData = 0;
  *(undefined8 *)&(this->StructMetaData).PropertiesMetaData.field_0x8 = 0;
  *(undefined8 *)&(this->StructMetaData).PropertiesMetaData.field_0x20 = 0;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x28 = 0;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x2c = 0x80;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x34 = 0;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StructMetaData).PropertiesMetaData.field_0x40 = 0;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x48 = 0;
  return this;
}

// ~UStructCookedMetaData @ 141fc01c0

void __thiscall UStructCookedMetaData::~UStructCookedMetaData(UStructCookedMetaData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UStructCookedMetaData__6B_;
  *(undefined4 *)&(this->StructMetaData).PropertiesMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->StructMetaData).PropertiesMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FFieldCookedMetaDataStore>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->StructMetaData).PropertiesMetaData);
  *(undefined4 *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x48 = 0;
  pvVar1 = *(void **)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->StructMetaData);
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyMetaData @ 141fc5ff0

void __thiscall
UStructCookedMetaData::ApplyMetaData(UStructCookedMetaData *this,UScriptStruct *param_1)

{
  FStructCookedMetaDataStore::ApplyMetaData(&this->StructMetaData,(UStruct *)param_1);
  return;
}

// CacheMetaData @ 141fc67e0

void __thiscall
UStructCookedMetaData::CacheMetaData(UStructCookedMetaData *this,UScriptStruct *param_1)

{
  FStructCookedMetaDataStore::CacheMetaData(&this->StructMetaData,(UStruct *)param_1);
  return;
}

// GetPrivateStaticClass @ 141fd2970

UClass * __cdecl UStructCookedMetaData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStructCookedMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CoreUObject",L"StructCookedMetaData",
               &Z_Registration_Info_UClass_UStructCookedMetaData.InnerSingleton,
               StaticRegisterNativesUStructCookedMetaData,200,8,CLASS_Intrinsic|CLASS_Optional,
               CASTCLASS_None,L"Engine",InternalConstructor<UStructCookedMetaData>,
               InternalVTableHelperCtorCaller<UStructCookedMetaData>,local_res8,UObject::StaticClass
               ,UScriptStruct::StaticClass);
  }
  return Z_Registration_Info_UClass_UStructCookedMetaData.InnerSingleton;
}

// HasMetaData @ 141fd3f10

bool __thiscall UStructCookedMetaData::HasMetaData(UStructCookedMetaData *this)

{
  if ((*(int *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x8 -
       *(int *)&(this->StructMetaData).ObjectMetaData.ObjectMetaData.field_0x34 < 1) &&
     (*(int *)&(this->StructMetaData).PropertiesMetaData.field_0x8 -
      *(int *)&(this->StructMetaData).PropertiesMetaData.field_0x34 < 1)) {
    return false;
  }
  return true;
}

// PostLoad @ 141fd9270

void __thiscall UStructCookedMetaData::PostLoad(UStructCookedMetaData *this)

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
    if (*(UStructCookedMetaData **)FVar5 == this) {
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

// StaticRegisterNativesUStructCookedMetaData @ 141fe99d0

void __cdecl UStructCookedMetaData::StaticRegisterNativesUStructCookedMetaData(void)

{
  return;
}

