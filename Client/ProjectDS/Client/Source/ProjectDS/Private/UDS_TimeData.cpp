// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b5b9e00

UClass * __cdecl UDS_TimeData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TimeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TimeData",
               &Z_Registration_Info_UClass_UDS_TimeData.InnerSingleton,
               StaticRegisterNativesUDS_TimeData,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_TimeData>,InternalVTableHelperCtorCaller<UDS_TimeData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TimeData.InnerSingleton;
}

// UDS_TimeData @ 14b5bd7e0

UDS_TimeData * __thiscall UDS_TimeData::UDS_TimeData(UDS_TimeData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TimeData__6B_;
  *(undefined8 *)&this->TimeMap = 0;
  *(undefined8 *)&(this->TimeMap).field_0x8 = 0;
  *(undefined8 *)&(this->TimeMap).field_0x20 = 0;
  *(undefined4 *)&(this->TimeMap).field_0x28 = 0;
  *(undefined4 *)&(this->TimeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TimeMap).field_0x34 = 0;
  *(undefined4 *)&(this->TimeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TimeMap).field_0x40 = 0;
  *(undefined4 *)&(this->TimeMap).field_0x48 = 0;
  (this->ChronoTime)._MyDur._MyRep = 0;
  return this;
}

// UDS_TimeData @ 14b5bd840

UDS_TimeData * __thiscall UDS_TimeData::UDS_TimeData(UDS_TimeData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TimeData__6B_;
  *(undefined8 *)&this->TimeMap = 0;
  *(undefined8 *)&(this->TimeMap).field_0x8 = 0;
  *(undefined8 *)&(this->TimeMap).field_0x20 = 0;
  *(undefined4 *)&(this->TimeMap).field_0x28 = 0;
  *(undefined4 *)&(this->TimeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TimeMap).field_0x34 = 0;
  *(undefined4 *)&(this->TimeMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TimeMap).field_0x40 = 0;
  *(undefined4 *)&(this->TimeMap).field_0x48 = 0;
  (this->ChronoTime)._MyDur._MyRep = 0;
  return this;
}

// ~UDS_TimeData @ 14b5be310

void __thiscall UDS_TimeData::~UDS_TimeData(UDS_TimeData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_TimeData__6B_;
  *(undefined4 *)&(this->TimeMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TimeMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_TimeType,FDS_TimeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_TimeType,FDS_TimeInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->TimeMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5bfe90

UClass * __cdecl UDS_TimeData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TimeData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TimeData",
               &Z_Registration_Info_UClass_UDS_TimeData.InnerSingleton,
               StaticRegisterNativesUDS_TimeData,0x80,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_TimeData>,InternalVTableHelperCtorCaller<UDS_TimeData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TimeData.InnerSingleton;
}

// StaticRegisterNativesUDS_TimeData @ 14b5c0110

void __cdecl UDS_TimeData::StaticRegisterNativesUDS_TimeData(void)

{
  return;
}

// GetDateTime @ 14ba4a4d0

double __thiscall UDS_TimeData::GetDateTime(UDS_TimeData *this,EDS_TimeType param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_TimeInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->TimeMap).field_0x8 != *(int *)&(this->TimeMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TimeMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TimeMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->TimeMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->TimeMap;
      do {
        if (*(EDS_TimeType *)(lVar1 + (longlong)iVar2 * 0x30) == param_1) {
          pFVar3 = TMapBase<enum_EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>_>
                   ::FindChecked(&this->TimeMap,param_1);
          return pFVar3->Time;
        }
        iVar2 = *(int *)(lVar1 + 0x28 + (longlong)iVar2 * 0x30);
      } while (iVar2 != -1);
    }
  }
  return 0.0;
}

// GetInst @ 14ba4c140

TWeakObjectPtr<UDS_TimeData,FWeakObjectPtr> __cdecl UDS_TimeData::GetInst(void)

{
  FWeakObjectPtr in_RCX;
  UDS_DataManager *local_res10 [3];
  
  local_res10[0] = UDS_DataManager::GetInst();
  if (local_res10[0] == (UDS_DataManager *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_TimeData,FWeakObjectPtr>)in_RCX;
  }
  UDS_DataManager::GetTimeData(local_res10[0]);
  return (TWeakObjectPtr<UDS_TimeData,FWeakObjectPtr>)in_RCX;
}

// GetTime @ 14ba50bd0

FDS_TimeInfo * __cdecl
UDS_TimeData::GetTime(FDS_TimeInfo *__return_storage_ptr__,EDS_TimeType param_1)

{
  bool bVar1;
  UDS_DataManager *this;
  UObject *pUVar2;
  FDS_TimeInfo *pFVar3;
  undefined1 *puVar4;
  int iVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  this = UDS_DataManager::GetInst();
  if (this == (UDS_DataManager *)0x0) {
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  }
  else {
    UDS_DataManager::GetTimeData(this);
  }
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if ((bVar1) &&
     (pUVar2 = FWeakObjectPtr::Get(&local_res8),
     *(int *)&pUVar2[1].field_0x8 != *(int *)&pUVar2[2].field_0xc)) {
    puVar4 = *(undefined1 **)&pUVar2[2].field_0x18;
    if (*(undefined1 **)&pUVar2[2].field_0x18 == (undefined1 *)0x0) {
      puVar4 = &pUVar2[2].field_0x10;
    }
    iVar5 = *(int *)(puVar4 + ((ulonglong)(*(int *)&pUVar2[2].field_0x20 - 1) & (ulonglong)param_1)
                              * 4);
    if (iVar5 != -1) {
      do {
        if (*(EDS_TimeType *)(*(longlong *)(pUVar2 + 1) + (longlong)iVar5 * 0x30) == param_1) {
          if (iVar5 != -1) goto LAB_14ba50d20;
          break;
        }
        iVar5 = *(int *)(*(longlong *)(pUVar2 + 1) + 0x28 + (longlong)iVar5 * 0x30);
      } while (iVar5 != -1);
    }
    puVar4 = *(undefined1 **)&pUVar2[2].field_0x18;
    if (*(undefined1 **)&pUVar2[2].field_0x18 == (undefined1 *)0x0) {
      puVar4 = &pUVar2[2].field_0x10;
    }
    iVar5 = *(int *)(puVar4 + (ulonglong)(*(int *)&pUVar2[2].field_0x20 - 1U & 2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(char *)(*(longlong *)(pUVar2 + 1) + (longlong)iVar5 * 0x30) == '\x02') {
          param_1 = NTPTime;
LAB_14ba50d20:
          pFVar3 = TMapBase<enum_EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>_>
                   ::FindChecked(pUVar2 + 1,param_1);
          local_28 = (undefined4)(pFVar3->ChronoTime)._MyDur._MyRep;
          uStack_24 = *(undefined4 *)((longlong)&(pFVar3->ChronoTime)._MyDur._MyRep + 4);
          uStack_20 = *(undefined4 *)&pFVar3->diff;
          uStack_1c = *(undefined4 *)((longlong)&pFVar3->diff + 4);
          uStack_18 = *(undefined4 *)&pFVar3->WorldRealTimeSecond;
          uStack_14 = *(undefined4 *)((longlong)&pFVar3->WorldRealTimeSecond + 4);
          uStack_10 = *(undefined4 *)&pFVar3->Time;
          uStack_c = *(undefined4 *)((longlong)&pFVar3->Time + 4);
          goto LAB_14ba50cf8;
        }
        iVar5 = *(int *)(*(longlong *)(pUVar2 + 1) + 0x28 + (longlong)iVar5 * 0x30);
      } while (iVar5 != -1);
    }
  }
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
LAB_14ba50cf8:
  *(undefined4 *)&(__return_storage_ptr__->ChronoTime)._MyDur._MyRep = local_28;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->ChronoTime)._MyDur._MyRep + 4) = uStack_24;
  *(undefined4 *)&__return_storage_ptr__->diff = uStack_20;
  *(undefined4 *)((longlong)&__return_storage_ptr__->diff + 4) = uStack_1c;
  *(undefined4 *)&__return_storage_ptr__->WorldRealTimeSecond = uStack_18;
  *(undefined4 *)((longlong)&__return_storage_ptr__->WorldRealTimeSecond + 4) = uStack_14;
  *(undefined4 *)&__return_storage_ptr__->Time = uStack_10;
  *(undefined4 *)((longlong)&__return_storage_ptr__->Time + 4) = uStack_c;
  return __return_storage_ptr__;
}

// GetTimeMap @ 14ba50d40

FDS_TimeInfo * __thiscall
UDS_TimeData::GetTimeMap
          (UDS_TimeData *this,FDS_TimeInfo *__return_storage_ptr__,EDS_TimeType param_1)

{
  TMap<EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_TimeType,FDS_TimeInfo,0>_>
  *this_00;
  double dVar1;
  int iVar2;
  FDS_TimeInfo *pFVar3;
  undefined1 *puVar4;
  uint uVar5;
  
  this_00 = &this->TimeMap;
  if (*(int *)&(this->TimeMap).field_0x8 != *(int *)&(this->TimeMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TimeMap).field_0x40;
    uVar5 = *(int *)&(this->TimeMap).field_0x48 - 1;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TimeMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)param_1 & (ulonglong)uVar5) * 4);
    if (iVar2 != -1) {
      do {
        if (*(EDS_TimeType *)(*(longlong *)this_00 + (longlong)iVar2 * 0x30) == param_1) {
          if (iVar2 != -1) goto LAB_14ba50e00;
          break;
        }
        iVar2 = *(int *)(*(longlong *)this_00 + 0x28 + (longlong)iVar2 * 0x30);
      } while (iVar2 != -1);
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(uVar5 & 2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(char *)(*(longlong *)this_00 + (longlong)iVar2 * 0x30) == '\x02') {
          param_1 = NTPTime;
LAB_14ba50e00:
          pFVar3 = TMapBase<enum_EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>_>
                   ::FindChecked(this_00,param_1);
          dVar1 = pFVar3->diff;
          (__return_storage_ptr__->ChronoTime)._MyDur._MyRep = (pFVar3->ChronoTime)._MyDur._MyRep;
          __return_storage_ptr__->diff = dVar1;
          dVar1 = pFVar3->Time;
          __return_storage_ptr__->WorldRealTimeSecond = pFVar3->WorldRealTimeSecond;
          __return_storage_ptr__->Time = dVar1;
          return __return_storage_ptr__;
        }
        iVar2 = *(int *)(*(longlong *)this_00 + 0x28 + (longlong)iVar2 * 0x30);
      } while (iVar2 != -1);
    }
  }
  __return_storage_ptr__->diff = 0.0;
  __return_storage_ptr__->WorldRealTimeSecond = 0.0;
  __return_storage_ptr__->Time = 0.0;
  (__return_storage_ptr__->ChronoTime)._MyDur._MyRep = 0;
  return __return_storage_ptr__;
}

// ResetData @ 14ba695a0

void __thiscall UDS_TimeData::ResetData(UDS_TimeData *this)

{
  TMap<EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_TimeType,FDS_TimeInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  this_00 = &this->TimeMap;
  bVar3 = 1 < *(int *)&(this->TimeMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<enum_EDS_TimeType,FDS_TimeInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar1 = &(this->TimeMap).field_0xc;
  *(undefined4 *)&(this->TimeMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->TimeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TimeMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->TimeMap).field_0x2c;
  *(undefined4 *)&(this->TimeMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->TimeMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TimeMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->TimeMap).field_0x48 = 1;
    TSet<TTuple<enum_EDS_TimeType,FDS_TimeInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  return;
}

// SetDateTime @ 14ba70a00

void __thiscall UDS_TimeData::SetDateTime(UDS_TimeData *this,EDS_TimeType param_1,double param_2)

{
  long64 lVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *this_00;
  time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>_>_>
  tVar4;
  FDS_TimeInfo *pFVar5;
  undefined1 *puVar6;
  int iVar7;
  double dVar8;
  TPairInitializer<EDS_TimeType_&,FDS_TimeInfo_&> local_res8;
  FName local_res20;
  FDS_TimeInfo **local_68;
  undefined8 *local_60;
  FString local_58;
  undefined8 local_48 [2];
  double local_38;
  double local_30;
  
  local_res8.Value._0_1_ = param_1;
  this_00 = StaticEnum<enum_EDS_TimeType>();
  if (this_00 == (UEnum *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("EnumClass != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0xca4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UEnum::GetNameByValue(this_00,(long64)&local_res20);
  ::FName::ToString(&local_res20,&local_58);
  if (*(int *)&(this->TimeMap).field_0x8 != *(int *)&(this->TimeMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TimeMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TimeMap).field_0x38;
    }
    iVar7 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->TimeMap).field_0x48 - 1) &
                              (ulonglong)(EDS_TimeType)local_res8.Value) * 4);
    if (iVar7 != -1) {
      do {
        if (*(EDS_TimeType *)(*(longlong *)&this->TimeMap + (longlong)iVar7 * 0x30) ==
            (EDS_TimeType)local_res8.Value) {
          if (iVar7 != -1) {
            pFVar5 = TMapBase<enum_EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>_>
                     ::FindChecked(&this->TimeMap,(EDS_TimeType)local_res8.Value);
            pFVar5->Time = param_2;
            tVar4 = DS_Util::GetChronoTimeNow();
            lVar1 = *(long64 *)tVar4._MyDur._MyRep;
            pFVar5 = TMapBase<enum_EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>_>
                     ::FindChecked(&this->TimeMap,(EDS_TimeType)local_res8.Value);
            (pFVar5->ChronoTime)._MyDur._MyRep = lVar1;
            dVar8 = DS_Util::GetRealTimeSeconds();
            pFVar5 = TMapBase<enum_EDS_TimeType,FDS_TimeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>_>
                     ::FindChecked(&this->TimeMap,(EDS_TimeType)local_res8.Value);
            pFVar5->WorldRealTimeSecond = dVar8;
            goto LAB_14ba70b1e;
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this->TimeMap + 0x28 + (longlong)iVar7 * 0x30);
      } while (iVar7 != -1);
    }
  }
  local_30 = param_2;
  tVar4 = DS_Util::GetChronoTimeNow();
  local_48[0] = *(undefined8 *)tVar4._MyDur._MyRep;
  local_38 = DS_Util::GetRealTimeSeconds();
  local_68 = &local_res8.Value;
  local_60 = local_48;
  TSet<TTuple<enum_EDS_TimeType,FDS_TimeInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_TimeType,FDS_TimeInfo,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<enum_EDS_TimeType_&,FDS_TimeInfo_&>_>
            (&this->TimeMap,&local_res8,(bool *)&local_68);
LAB_14ba70b1e:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

