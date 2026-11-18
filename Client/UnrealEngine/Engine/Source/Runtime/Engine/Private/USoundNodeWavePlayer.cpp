// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 1486789c0

UClass * __cdecl USoundNodeWavePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeWavePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeWavePlayer",
               &Z_Registration_Info_UClass_USoundNodeWavePlayer.InnerSingleton,
               StaticRegisterNativesUSoundNodeWavePlayer,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeWavePlayer>,
               InternalVTableHelperCtorCaller<USoundNodeWavePlayer>,local_res8,
               USoundNodeAssetReferencer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeWavePlayer.InnerSingleton;
}

// USoundNodeWavePlayer @ 148697d70

USoundNodeWavePlayer * __thiscall
USoundNodeWavePlayer::USoundNodeWavePlayer(USoundNodeWavePlayer *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UObject::UObject((UObject *)this,param_1);
  this_00 = &(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x18;
  *(undefined8 *)this_00 = 0;
  this->_padding_ = (longlong)&___7USoundNodeWavePlayer__6B_;
  *(undefined8 *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x20 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->SoundWaveAssetPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  this->bAsyncLoadRequestPending = (FThreadSafeBool)0x0;
  return this;
}

// USoundNodeWavePlayer @ 148697de0

USoundNodeWavePlayer * __thiscall
USoundNodeWavePlayer::USoundNodeWavePlayer(USoundNodeWavePlayer *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this_00 = &(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7USoundNodeWavePlayer__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoundWaveAssetPtr).SoftObjectPtr = 0;
  *(undefined8 *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  this->bAsyncLoadRequestPending = (FThreadSafeBool)0x0;
  return this;
}

// ~USoundNodeWavePlayer @ 14869be40

void __thiscall USoundNodeWavePlayer::~USoundNodeWavePlayer(USoundNodeWavePlayer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeWavePlayer__6B_;
  pvVar1 = *(void **)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ClearAssetReferences @ 1486a88f0

void __thiscall USoundNodeWavePlayer::ClearAssetReferences(USoundNodeWavePlayer *this)

{
  (this->SoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
  return;
}

// ContainsProceduralSoundReference @ 1486abdb0

bool __thiscall USoundNodeWavePlayer::ContainsProceduralSoundReference(USoundNodeWavePlayer *this)

{
  int iVar1;
  USoundWave *pUVar2;
  longlong lVar3;
  UClass *pUVar4;
  
  pUVar2 = (this->SoundWave).field0_0x0.DebugPtr;
  if (pUVar2 != (USoundWave *)0x0) {
    pUVar4 = Z_Construct_UClass_USoundWaveProcedural_NoRegister();
    lVar3 = pUVar2->_padding_;
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      return true;
    }
  }
  return false;
}

// GetDuration @ 1486be080

float __thiscall USoundNodeWavePlayer::GetDuration(USoundNodeWavePlayer *this)

{
  USoundWave *pUVar1;
  
  pUVar1 = (this->SoundWave).field0_0x0.DebugPtr;
  if (pUVar1 == (USoundWave *)0x0) {
    return 0.0;
  }
  if (this->bLooping != '\0') {
    return __real_461c4000;
  }
  return *(float *)((longlong)&pUVar1->_padding_ + 4);
}

// GetMaxChildNodes @ 1486c12e0

int __thiscall USoundNodeWavePlayer::GetMaxChildNodes(USoundNodeWavePlayer *this)

{
  return 0;
}

// GetNumSounds @ 1486c3290

int __thiscall
USoundNodeWavePlayer::GetNumSounds(USoundNodeWavePlayer *this,ulong64 param_1,FActiveSound *param_2)

{
  return 1;
}

// GetPrivateStaticClass @ 1486c5770

UClass * __cdecl USoundNodeWavePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeWavePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeWavePlayer",
               &Z_Registration_Info_UClass_USoundNodeWavePlayer.InnerSingleton,
               StaticRegisterNativesUSoundNodeWavePlayer,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeWavePlayer>,
               InternalVTableHelperCtorCaller<USoundNodeWavePlayer>,local_res8,
               USoundNodeAssetReferencer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeWavePlayer.InnerSingleton;
}

// IsPlayWhenSilent @ 1486d15c0

bool __thiscall USoundNodeWavePlayer::IsPlayWhenSilent(USoundNodeWavePlayer *this)

{
  USoundWave *pUVar1;
  
  pUVar1 = (this->SoundWave).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundWave *)0x0) {
    return *(char *)((longlong)&pUVar1->_padding_ + 1) == '\x01';
  }
  return false;
}

// LoadAsset @ 1486d2660

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall USoundNodeWavePlayer::LoadAsset(USoundNodeWavePlayer *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  USoundWave *pUVar3;
  UClass *pUVar4;
  undefined8 *puVar5;
  ulong64 uVar6;
  FUObjectItem *pFVar7;
  FName local_res18;
  FDestructionSentinel local_68;
  FDelegateAllocation *local_50;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FString local_30;
  
  bVar2 = (*IsAsyncLoadingMultithreaded)();
  if (!bVar2) {
    if (6 < (byte)LogAudio._0_1_) {
      TPersistentObjectPtr<FSoftObjectPath>::Get
                ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoundWaveAssetPtr);
      local_res18 = (FName)this->_padding_;
      ::FName::ToString(&local_res18,&local_30);
      if (this->_padding_ == 0) {
        ::FString::FString((FString *)&local_68,L"None");
      }
      else {
        local_res18 = *(FName *)(this->_padding_ + 0x18);
        ::FName::ToString(&local_res18,(FString *)&local_68);
      }
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_68._0_8_);
      }
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
    pUVar3 = (USoundWave *)
             TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoundWaveAssetPtr);
    if (pUVar3 == (USoundWave *)0x0) {
      if (*(longlong *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x8 != 0) {
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x8,
                   (FUObjectSerializeContext *)0x0);
        pUVar3 = (USoundWave *)
                 TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoundWaveAssetPtr);
        goto LAB_1486d29d9;
      }
LAB_1486d2a01:
      pUVar3 = (USoundWave *)0x0;
    }
    else {
LAB_1486d29d9:
      if (pUVar3 == (USoundWave *)0x0) goto LAB_1486d2a01;
      pUVar4 = USoundWave::StaticClass();
      iVar1 = (int)pUVar4->_padding_;
      if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar4->_padding_)) goto LAB_1486d2a01;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (USoundWave *)0x0)) {
      (this->SoundWave).field0_0x0.DebugPtr = pUVar3;
      if (pUVar3 == (USoundWave *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      (this->SoundWave).field0_0x0.DebugPtr = pUVar3;
    }
    if (param_1) {
      pFVar7 = FUObjectArray::IndexToObject
                         (&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4));
      FUObjectItem::SetRootFlags(pFVar7,RootSet);
    }
    pUVar3 = (this->SoundWave).field0_0x0.DebugPtr;
    bVar2 = false;
    goto LAB_1486d2a50;
  }
  pUVar3 = (USoundWave *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoundWaveAssetPtr);
  if (pUVar3 == (USoundWave *)0x0) {
LAB_1486d26c9:
    pUVar3 = (USoundWave *)0x0;
  }
  else {
    pUVar4 = USoundWave::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar4->_padding_)) goto LAB_1486d26c9;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar3 == (USoundWave *)0x0)) {
    (this->SoundWave).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 != (USoundWave *)0x0) goto LAB_1486d26f1;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->SoundWave).field0_0x0.DebugPtr = pUVar3;
LAB_1486d26f1:
    if (((uint)pUVar3->_padding_ >> 10 & 1) != 0) {
      (this->SoundWave).field0_0x0.DebugPtr = (USoundWave *)0x0;
    }
  }
  pUVar3 = (this->SoundWave).field0_0x0.DebugPtr;
  if (pUVar3 == (USoundWave *)0x0) {
    FSoftObjectPath::GetLongPackageName
              ((FSoftObjectPath *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x8,&local_30);
    if (1 < local_30.Data.ArrayNum) {
      if (6 < (byte)LogAudio._0_1_) {
        local_res18 = (FName)this->_padding_;
        ::FName::ToString(&local_res18,(FString *)local_48);
        if (this->_padding_ == 0) {
          ::FString::FString((FString *)&local_68,L"None");
        }
        else {
          local_res18 = *(FName *)(this->_padding_ + 0x18);
          ::FName::ToString(&local_res18,(FString *)&local_68);
        }
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
        if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_68._0_8_);
        }
        if ((atomic<unsigned___int64>)local_48 != (atomic<unsigned___int64>)0x0) {
          FMemory::Free((void *)local_48);
        }
      }
      this->bAsyncLoading = '\x01';
      local_48 = (undefined1  [8])0x0;
      local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_40.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
                 (FWriteAccessScope *)&local_68);
      local_50 = &local_40;
      puVar5 = UE::Core::Private::DelegateAllocate(0x28,&local_40);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = &
                  ___7__TCommonDelegateInstanceState___A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy___N__6B_
        ;
        *(bool *)(puVar5 + 1) = param_1;
        uVar6 = FDelegateHandle::GenerateNewID();
        puVar5[2] = uVar6;
        *puVar5 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUSoundNodeWavePlayer____A6AXAEBVFName__PEAVUPackage__W4Type_EAsyncLoadingResult___ZUFDefaultDelegateUserPolicy___N__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar5[3] = 0;
        local_res18 = (FName)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar5 + 3),(FObjectPtr)&local_res18);
        puVar5[4] = OnSoundWaveLoaded;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)
                   CONCAT44(local_68.Accessor._4_4_,(int)local_68.Accessor),&local_68);
      }
      LoadPackageAsync(&local_30,
                       (TDelegate<void___cdecl(FName_const_&,UPackage_*,EAsyncLoadingResult::Type),FDefaultDelegateUserPolicy>
                        *)local_48,0,PKG_None,-1);
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
  }
  else if (param_1) {
    pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar3->_padding_ + 4))
    ;
    FUObjectItem::SetRootFlags(pFVar7,RootSet);
  }
  pUVar3 = (this->SoundWave).field0_0x0.DebugPtr;
  if (pUVar3 == (USoundWave *)0x0) {
    return;
  }
  bVar2 = true;
LAB_1486d2a50:
  UObjectBaseUtility::AddToCluster((UObjectBaseUtility *)pUVar3,(UObjectBaseUtility *)this,bVar2);
  (**(code **)(((this->SoundWave).field0_0x0.DebugPtr)->_padding_ + 0x360))();
  return;
}

// OnSoundWaveLoaded @ 1486d6fa0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
USoundNodeWavePlayer::OnSoundWaveLoaded
          (USoundNodeWavePlayer *this,FName *param_1,UPackage *param_2,Type param_3,bool param_4)

{
  int iVar1;
  USoundWave *pUVar2;
  UClass *pUVar3;
  FUObjectItem *this_00;
  
  if (param_3 != Succeeded) {
    this->bAsyncLoading = '\0';
    return;
  }
  pUVar2 = (USoundWave *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SoundWaveAssetPtr);
  if (pUVar2 == (USoundWave *)0x0) {
LAB_1486d6fec:
    pUVar2 = (USoundWave *)0x0;
  }
  else {
    pUVar3 = USoundWave::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_1486d6fec;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar2 == (USoundWave *)0x0)) {
    (this->SoundWave).field0_0x0.DebugPtr = pUVar2;
    if (pUVar2 == (USoundWave *)0x0) goto LAB_1486d7045;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
    (this->SoundWave).field0_0x0.DebugPtr = pUVar2;
  }
  if (param_4) {
    this_00 = FUObjectArray::IndexToObject
                        (&GUObjectArray,*(int *)((longlong)&pUVar2->_padding_ + 4));
    FUObjectItem::SetRootFlags(this_00,RootSet);
  }
  UObjectBaseUtility::AddToCluster
            ((UObjectBaseUtility *)(this->SoundWave).field0_0x0.DebugPtr,(UObjectBaseUtility *)this,
             false);
LAB_1486d7045:
  this->bAsyncLoading = '\0';
  return;
}

// ParseNodes @ 1486df540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
USoundNodeWavePlayer::ParseNodes
          (USoundNodeWavePlayer *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FSoundCueParameterTransmitter *this_00;
  USoundWave *pUVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStack_398 [32];
  FSoundParseParameters *local_378;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_370;
  uint local_368 [2];
  ulong64 local_360;
  FAudioDevice *local_358;
  FWeakObjectPtr local_350;
  FSoundParseParameters *local_348;
  FString local_340;
  FString local_330;
  TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&> local_320;
  USoundNodeWavePlayer *local_310;
  ulong64 *local_308;
  uint *local_300;
  FParameterTransmitterInitParams local_2f8;
  code *local_2c8 [2];
  undefined **local_2b8;
  FWeakObjectPtr local_2b0;
  undefined8 local_2a0;
  FSoundParseParameters local_298;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_398;
  local_348 = param_4;
  local_360 = param_2;
  local_358 = param_1;
  if (this->bAsyncLoading == 0) {
    if ((this->SoundWave).field0_0x0.DebugPtr == (USoundWave *)0x0) {
      if ((*(longlong *)&(this->SoundWaveAssetPtr).SoftObjectPtr.field_0x8 != 0) &&
         (this->bAsyncLoadRequestPending == (FThreadSafeBool)0x0)) {
        if (2 < (byte)LogAudio._0_1_) {
          if (this->_padding_ == 0) {
            ::FString::FString(&local_330,L"None");
          }
          else {
            UObjectBaseUtility::GetFullName
                      ((UObjectBaseUtility *)this,&local_330,(UObject *)0x0,None);
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
          if (local_330.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_330.Data.AllocatorInstance.Data);
          }
        }
        LOCK();
        this->bAsyncLoadRequestPending = (FThreadSafeBool)0x1;
        UNLOCK();
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_350.ObjectIndex = 0;
        local_350.ObjectSerialNumber = 0;
        local_310 = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=(&local_350,(FObjectPtr)&local_310);
        local_2a0 = 0;
        local_2b8 = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`USoundNodeWavePlayer::ParseNodes'::`60'::<lambda_1>,1,0>
                     ::_vftable_;
        local_2b0 = local_350;
        local_2c8[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`USoundNodeWavePlayer::ParseNodes'::__l60::<lambda_1>,void>
                       ::Call;
        AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_2c8);
      }
    }
    else {
      local_320.Value =
           TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
           ::Find((TMapBase<unsigned___int64,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>_>
                   *)&param_3->SoundNodeOffsetMap,param_2);
      if (local_320.Value == (uint *)0x0) {
        local_368[0] = TArray<unsigned_char,TSizedDefaultAllocator<32>_>::AddZeroed
                                 (&param_3->SoundNodeData,8);
        local_308 = &local_360;
        local_300 = local_368;
        TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<unsigned___int64_const_&,unsigned_int_const_&>_>
                  ((TSet<TTuple<unsigned___int64,unsigned_int>,TDefaultMapHashableKeyFuncs<unsigned___int64,unsigned_int,0>,FDefaultSetAllocator>
                    *)&param_3->SoundNodeOffsetMap,&local_320,(bool *)&local_308);
        lVar11 = (longlong)(int)local_368[0];
        iVar3 = (param_3->SoundNodeData).ArrayNum;
        uVar10 = 0;
        if ((int)local_368[0] < iVar3) {
          uVar10 = ~local_368[0] >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (local_378 = (FSoundParseParameters *)lVar11,
           local_370 = (TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *)(longlong)iVar3,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar12 = (param_3->SoundNodeData).AllocatorInstance.Data + lVar11;
        *(int *)pFVar12 = 1;
      }
      else {
        uVar10 = *local_320.Value;
        iVar3 = (param_3->SoundNodeData).ArrayNum;
        uVar13 = 0;
        if ((int)uVar10 < iVar3) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (local_378 = (FSoundParseParameters *)(longlong)(int)uVar10,
           local_370 = (TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *)(longlong)iVar3,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar12 = (param_3->SoundNodeData).AllocatorInstance.Data + (int)uVar10;
        local_368[0] = *local_320.Value;
      }
      iVar3 = (param_3->SoundNodeData).ArrayNum;
      uVar13 = local_368[0] + 4;
      uVar10 = 0;
      if ((int)uVar13 < iVar3) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      local_368[0] = uVar13;
      if (uVar10 == 0) {
        local_378 = (FSoundParseParameters *)(longlong)(int)uVar13;
        local_370 = (TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *)(longlong)iVar3;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pFVar14 = (param_3->SoundNodeData).AllocatorInstance.Data + (int)uVar13;
      if (*(int *)pFVar12 != 0) {
        *(int *)pFVar14 = 0;
        this_00 = (FSoundCueParameterTransmitter *)(param_3->InstanceTransmitter).Object;
        if (this_00 != (FSoundCueParameterTransmitter *)0x0) {
          local_2f8.InstanceID =
               Audio::GetTransmitterID(param_3->AudioComponentID,local_360,param_3->PlayOrder);
          local_2f8.DefaultParams.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f8.DefaultParams.ArrayNum = 0;
          local_2f8.DefaultParams.ArrayMax = 0;
          local_2f8.AudioDeviceID = local_358->DeviceID;
          local_2f8.SampleRate = (float)local_358->SampleRate;
          FSoundCueParameterTransmitter::CreateChildTransmitter
                    (this_00,local_360,(USoundBase *)(this->SoundWave).field0_0x0.DebugPtr,
                     &local_2f8);
          DestructItems<FAudioParameter,int>((FAudioParameter *)0x0,0);
        }
        *(int *)pFVar12 = 0;
      }
      pUVar6 = (this->SoundWave).field0_0x0.DebugPtr;
      pUVar6->bLooping = '\0';
      if ((this->bLooping == '\0') &&
         ((pUVar6 = (this->SoundWave).field0_0x0.DebugPtr, pUVar6->bProcedural == 0 ||
          (cVar9 = (**(code **)(pUVar6->_padding_ + 0x318))(), cVar9 != '\0')))) {
        if (local_348->bEnableRetrigger == '\0') {
          if ((param_3->bHasVirtualized == 0) && (*(int *)pFVar14 == 0)) {
            pUVar6 = (this->SoundWave).field0_0x0.DebugPtr;
            iVar3 = *(int *)&(param_3->WaveInstances).field_0x8;
            iVar4 = *(int *)&(param_3->WaveInstances).field_0x34;
            iVar5 = param_5->ArrayNum;
            local_370 = param_5;
            local_378 = local_348;
            (**(code **)(pUVar6->_padding_ + 0x328))(pUVar6,local_358,local_360,param_3);
            if ((*(int *)&(param_3->WaveInstances).field_0x8 -
                 *(int *)&(param_3->WaveInstances).field_0x34 == iVar3 - iVar4) &&
               (param_5->ArrayNum == iVar5)) {
              *(int *)pFVar14 = 1;
            }
          }
        }
        else {
          pUVar6 = (this->SoundWave).field0_0x0.DebugPtr;
          local_370 = param_5;
          local_378 = local_348;
          (**(code **)(pUVar6->_padding_ + 0x328))(pUVar6,local_358,local_360,param_3);
        }
      }
      else {
        FSoundParseParameters::FSoundParseParameters(&local_298,local_348);
        pUVar6 = (this->SoundWave).field0_0x0.DebugPtr;
        local_298.bLooping = '\x01';
        local_370 = param_5;
        local_378 = &local_298;
        (**(code **)(pUVar6->_padding_ + 0x328))(pUVar6,local_358,local_360,param_3);
        FSoundParseParameters::~FSoundParseParameters(&local_298);
      }
      pUVar6 = (this->SoundWave).field0_0x0.DebugPtr;
      uVar2 = pUVar6->field_0x19b;
      pUVar6->field_0x19b = (pUVar6->bLooping ^ pUVar6->bLooping) & 1 ^ uVar2;
    }
  }
  else {
    if (5 < (byte)LogAudio._0_1_) {
      if (this->_padding_ == 0) {
        ::FString::FString(&local_340,L"None");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_340,(UObject *)0x0,None);
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data.AllocatorInstance.Data);
      }
    }
    param_3->bFinished = '\0';
  }
  return;
}

// Serialize @ 1486ed180

void __thiscall USoundNodeWavePlayer::Serialize(USoundNodeWavePlayer *this,FArchive *param_1)

{
  int iVar1;
  TObjectPtr<USoundWave>_u_0 local_res10 [3];
  
  UObject::Serialize((UObject *)this,param_1);
  if (0x1e4 < *(int *)&param_1->field_0x40) {
    FStripDataFlags::FStripDataFlags
              ((FStripDataFlags *)&local_res10[0].ObjectPtr,param_1,'\0',
               &GOldestLoadablePackageFileUEVersion);
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (0x16 < iVar1) {
    if ((param_1->field_0x28 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001486ed1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->SoundWave);
      return;
    }
    if ((param_1->field_0x28 & 4) != 0) {
      local_res10[0] = (this->SoundWave).field0_0x0;
      (**(code **)(*(longlong *)param_1 + 0x168))(param_1,local_res10);
    }
  }
  return;
}

// Serialize @ 1486ed230

void __thiscall
USoundNodeWavePlayer::Serialize(USoundNodeWavePlayer *this,FStructuredArchiveRecord param_1)

{
  int iVar1;
  FArchiveState *this_00;
  TObjectPtr<USoundWave>_u_0 local_res10;
  FSlotBase local_res18 [2];
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  if (0x1e4 < (this_00->ArUEVer).FileVersionUE4) {
    FStripDataFlags::FStripDataFlags
              ((FStripDataFlags *)&local_res10.ObjectPtr,(FArchive *)this_00,'\0',
               &GOldestLoadablePackageFileUEVersion);
  }
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FFrameworkObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer(this_00,&FFrameworkObjectVersion::GUID);
  if (0x16 < iVar1) {
    if (this_00->ArIsLoading != 0) {
      (**(code **)(this_00->_padding_ + 0x150))(this_00,&this->SoundWave);
      return;
    }
    if (this_00->ArIsSaving != '\0') {
      local_res10 = (this->SoundWave).field0_0x0;
      (**(code **)(this_00->_padding_ + 0x168))(this_00,&local_res10);
    }
  }
  return;
}

// SetSoundWave @ 1486efc40

void __thiscall USoundNodeWavePlayer::SetSoundWave(USoundNodeWavePlayer *this,USoundWave *param_1)

{
  USoundWave *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->SoundWave).field0_0x0.DebugPtr = param_1;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (USoundWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FSoftObjectPtr::operator=(&(this->SoundWaveAssetPtr).SoftObjectPtr,(FObjectPtr)&local_res8);
  return;
}

// StaticRegisterNativesUSoundNodeWavePlayer @ 1486f1a20

void __cdecl USoundNodeWavePlayer::StaticRegisterNativesUSoundNodeWavePlayer(void)

{
  return;
}

