// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 10

// StaticClass @ 14a026790

UClass * __cdecl UWN_WorldInfo::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_WorldInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_WorldInfo",
               &Z_Registration_Info_UClass_UWN_WorldInfo.InnerSingleton,
               StaticRegisterNativesUWN_WorldInfo,0x130,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_WorldInfo>,InternalVTableHelperCtorCaller<UWN_WorldInfo>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_WorldInfo.InnerSingleton;
}

// UWN_WorldInfo @ 14a02dd30

UWN_WorldInfo * __thiscall UWN_WorldInfo::UWN_WorldInfo(UWN_WorldInfo *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->Map).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UWN_WorldInfo__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Map).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Map).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Map).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Map).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&(this->BGMSoundInfos).field_0x8 = 0;
  *(undefined8 *)&this->BGMSoundInfos = 0;
  *(undefined8 *)&(this->BGMSoundInfos).field_0x20 = 0;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x28 = 0;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x34 = 0;
  *(undefined8 *)&(this->BGMSoundInfos).field_0x40 = 0;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x48 = 0;
  *(undefined8 *)&(this->AmbientSoundInfos).field_0x8 = 0;
  *(undefined8 *)&this->AmbientSoundInfos = 0;
  *(undefined8 *)&(this->AmbientSoundInfos).field_0x20 = 0;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x28 = 0;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x34 = 0;
  *(undefined8 *)&(this->AmbientSoundInfos).field_0x40 = 0;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x48 = 0;
  this->Version = 0;
  (this->WorldBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->WorldBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->WorldBounds).IsValid = '\0';
  (this->WorldBounds).Pad[0] = '\0';
  (this->WorldBounds).Pad[1] = '\0';
  (this->WorldBounds).Pad[2] = '\0';
  (this->WorldBounds).Pad[3] = '\0';
  (this->WorldBounds).Pad[4] = '\0';
  (this->WorldBounds).Pad[5] = '\0';
  (this->WorldBounds).Pad[6] = '\0';
  return this;
}

// UWN_WorldInfo @ 14a02de50

UWN_WorldInfo * __thiscall
UWN_WorldInfo::UWN_WorldInfo(UWN_WorldInfo *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->Map).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UWN_WorldInfo__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Map).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Map).SoftObjectPtr = 0;
  *(undefined8 *)&(this->Map).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Map).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  *(undefined8 *)&(this->BGMSoundInfos).field_0x8 = 0;
  *(undefined8 *)&this->BGMSoundInfos = 0;
  *(undefined8 *)&(this->BGMSoundInfos).field_0x20 = 0;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x28 = 0;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x34 = 0;
  *(undefined8 *)&(this->BGMSoundInfos).field_0x40 = 0;
  *(undefined4 *)&(this->BGMSoundInfos).field_0x48 = 0;
  *(undefined8 *)&(this->AmbientSoundInfos).field_0x8 = 0;
  *(undefined8 *)&this->AmbientSoundInfos = 0;
  *(undefined8 *)&(this->AmbientSoundInfos).field_0x20 = 0;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x28 = 0;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x34 = 0;
  *(undefined8 *)&(this->AmbientSoundInfos).field_0x40 = 0;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x48 = 0;
  this->Version = 0;
  (this->WorldBounds).Min.field0_0x0._s_0.X = 0.0;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = 0.0;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = 0.0;
  (this->WorldBounds).Max.field0_0x0._s_0.X = 0.0;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = 0.0;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = 0.0;
  (this->WorldBounds).IsValid = '\0';
  (this->WorldBounds).Pad[0] = '\0';
  (this->WorldBounds).Pad[1] = '\0';
  (this->WorldBounds).Pad[2] = '\0';
  (this->WorldBounds).Pad[3] = '\0';
  (this->WorldBounds).Pad[4] = '\0';
  (this->WorldBounds).Pad[5] = '\0';
  (this->WorldBounds).Pad[6] = '\0';
  return this;
}

// ~UWN_WorldInfo @ 14a02ece0

void __thiscall UWN_WorldInfo::~UWN_WorldInfo(UWN_WorldInfo *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UWN_WorldInfo__6B_;
  *(undefined4 *)&(this->AmbientSoundInfos).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AmbientSoundInfos).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FWN_AmbientSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FWN_AmbientSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FWN_AmbientSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AmbientSoundInfos);
  *(undefined4 *)&(this->BGMSoundInfos).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BGMSoundInfos).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FWN_BGMSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FWN_BGMSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FWN_BGMSoundInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BGMSoundInfos);
  pvVar1 = *(void **)&(this->Map).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FinishDestroy @ 14a0336e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UWN_WorldInfo::FinishDestroy(UWN_WorldInfo *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLinkerLoad *pFVar5;
  ForElementType<UObject_*> FVar6;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0x10 & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar5 != (FLinkerLoad *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetLinker()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x457,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLinkerIndex() == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObject::DestroyNonNativeProperties((UObject *)this);
  pTVar8 = &DebugFinishDestroyed;
  pTVar7 = &DebugFinishDestroyed;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)
          ((longlong)pTVar7 + (longlong)DebugFinishDestroyed.ArrayNum * 8);
  FVar6 = (ForElementType<UObject_*>)pTVar7;
  if ((ForElementType<UObject_*>)pTVar7 != FVar1) {
    while (*(UWN_WorldInfo **)FVar6 != this) {
      FVar6 = (ForElementType<UObject_*>)((longlong)FVar6 + 8);
      if (FVar6 == FVar1) {
        return;
      }
    }
    iVar4 = (int)((longlong)FVar6 - (longlong)pTVar7 >> 3);
    if (iVar4 != -1) {
      if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar8 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugFinishDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar8 + (longlong)iVar4 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugFinishDestroyed.ArrayNum - iVar4) + -1) << 3);
      DebugFinishDestroyed.ArrayNum = DebugFinishDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14a034d90

UClass * __cdecl UWN_WorldInfo::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_WorldInfo.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_WorldInfo",
               &Z_Registration_Info_UClass_UWN_WorldInfo.InnerSingleton,
               StaticRegisterNativesUWN_WorldInfo,0x130,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_WorldInfo>,InternalVTableHelperCtorCaller<UWN_WorldInfo>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_WorldInfo.InnerSingleton;
}

// PostLoad @ 14a0384d0

void __thiscall UWN_WorldInfo::PostLoad(UWN_WorldInfo *this)

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
    if (*(UWN_WorldInfo **)FVar5 == this) {
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

// Serialize @ 14a039c00

void __thiscall UWN_WorldInfo::Serialize(UWN_WorldInfo *this,FArchive *param_1)

{
  int iVar1;
  FGuid local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  if ((param_1->field_0x28 & 1) == 0) {
    iVar1 = 6;
  }
  else {
    local_18 = FWN_WorldInfoCustomVersion::GUID;
    iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  }
  if (((param_1->field_0x28 & 1) == 0) || (iVar1 != -1)) {
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FWN_WorldInfoCustomVersion::GUID);
  }
  return;
}

// Serialize @ 14a039c70

void __thiscall UWN_WorldInfo::Serialize(UWN_WorldInfo *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  FGuid local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar2);
  if ((pFVar2->field_0x28 & 1) == 0) {
    iVar1 = 6;
  }
  else {
    local_18 = FWN_WorldInfoCustomVersion::GUID;
    iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  }
  if (((pFVar2->field_0x28 & 1) == 0) || (iVar1 != -1)) {
    (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&FWN_WorldInfoCustomVersion::GUID);
  }
  return;
}

// StaticRegisterNativesUWN_WorldInfo @ 14a03a820

void __cdecl UWN_WorldInfo::StaticRegisterNativesUWN_WorldInfo(void)

{
  return;
}

