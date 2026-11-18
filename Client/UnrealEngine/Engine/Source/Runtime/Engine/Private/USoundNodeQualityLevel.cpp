// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1486777f0

UClass * __cdecl USoundNodeQualityLevel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeQualityLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeQualityLevel",
               &Z_Registration_Info_UClass_USoundNodeQualityLevel.InnerSingleton,
               StaticRegisterNativesUSoundNodeQualityLevel,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeQualityLevel>,
               InternalVTableHelperCtorCaller<USoundNodeQualityLevel>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeQualityLevel.InnerSingleton;
}

// USoundNodeQualityLevel @ 148697b10

USoundNodeQualityLevel * __thiscall
USoundNodeQualityLevel::USoundNodeQualityLevel(USoundNodeQualityLevel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->CookedQualityLevelIndex = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundNodeQualityLevel__6B_;
  return this;
}

// USoundNodeQualityLevel @ 148697b50

USoundNodeQualityLevel * __thiscall
USoundNodeQualityLevel::USoundNodeQualityLevel
          (USoundNodeQualityLevel *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->CookedQualityLevelIndex = -1;
  this->_padding_ = (longlong)&___7USoundNodeQualityLevel__6B_;
  return this;
}

// ~USoundNodeQualityLevel @ 14869bce0

void __thiscall USoundNodeQualityLevel::~USoundNodeQualityLevel(USoundNodeQualityLevel *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ForCurrentQualityLevel @ 1486b8200

void __thiscall
USoundNodeQualityLevel::ForCurrentQualityLevel
          (USoundNodeQualityLevel *this,TFunction<void___cdecl(USoundNode_*)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  uint uVar6;
  undefined8 local_res8;
  
  if (((-1 < this->CookedQualityLevelIndex) && (uVar6 = 0, (int)this->_padding_ == 1)) ||
     ((-1 < USoundCue::CachedQualityLevel &&
      (uVar6 = USoundCue::CachedQualityLevel, USoundCue::CachedQualityLevel < (int)this->_padding_))
     )) {
    uVar3 = 0;
    if ((int)uVar6 < (int)this->_padding_) {
      uVar3 = ~uVar6 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (*(longlong *)((ulonglong)uVar6 * 8 + this->_padding_) != 0) {
      uVar3 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_res8 = *(undefined8 *)((ulonglong)uVar6 * 8 + this->_padding_);
      UE::Core::Private::Function::CheckCallable(*(void **)param_1);
      pcVar1 = *(code **)param_1;
      plVar5 = (longlong *)&param_1->field_0x10;
      if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
        plVar5 = *(longlong **)&param_1->field_0x28;
      }
      uVar4 = (**(code **)(*plVar5 + 8))();
      (*pcVar1)(uVar4,&local_res8);
    }
  }
  return;
}

// GetMaxChildNodes @ 1486c1270

int __thiscall USoundNodeQualityLevel::GetMaxChildNodes(USoundNodeQualityLevel *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return *(int *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[9].field_0x18;
  }
  return *(int *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[9].field_0x18;
}

// GetMinChildNodes @ 1486c1aa0

int __thiscall USoundNodeQualityLevel::GetMinChildNodes(USoundNodeQualityLevel *this)

{
  UClass *this_00;
  
  this_00 = Z_Construct_UClass_UAudioSettings_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
    return *(int *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[9].field_0x18;
  }
  return *(int *)&(this_00->ClassDefaultObject).field0_0x0.DebugPtr[9].field_0x18;
}

// GetPrivateStaticClass @ 1486c53b0

UClass * __cdecl USoundNodeQualityLevel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeQualityLevel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeQualityLevel",
               &Z_Registration_Info_UClass_USoundNodeQualityLevel.InnerSingleton,
               StaticRegisterNativesUSoundNodeQualityLevel,0x50,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeQualityLevel>,
               InternalVTableHelperCtorCaller<USoundNodeQualityLevel>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeQualityLevel.InnerSingleton;
}

// LoadChildWavePlayers @ 1486d2b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeQualityLevel::LoadChildWavePlayers(USoundNodeQualityLevel *this,bool param_1,bool param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_78 [32];
  undefined2 local_58;
  code *local_48 [2];
  undefined **local_38;
  undefined2 local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USoundNodeQualityLevel::LoadChildWavePlayers'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_58 = CONCAT11(param_2,param_1);
  local_30 = local_58;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USoundNodeQualityLevel::LoadChildWavePlayers'::__l2::<lambda_1>,void,USoundNode_*>
                ::Call;
  local_20 = (undefined ***)0x0;
  (**(code **)(this->_padding_ + 0x360))(this,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// ParseNodes @ 1486de6c0

void __thiscall
USoundNodeQualityLevel::ParseNodes
          (USoundNodeQualityLevel *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if (((-1 < this->CookedQualityLevelIndex) && (uVar6 = 0, (int)this->_padding_ == 1)) ||
     ((-1 < USoundCue::CachedQualityLevel &&
      (uVar6 = USoundCue::CachedQualityLevel, USoundCue::CachedQualityLevel < (int)this->_padding_))
     )) {
    uVar7 = ~uVar6 >> 0x1f;
    uVar4 = 0;
    if ((int)uVar6 < (int)this->_padding_) {
      uVar4 = uVar7;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    uVar8 = (ulonglong)uVar6;
    if (*(longlong *)(this->_padding_ + uVar8 * 8) != 0) {
      uVar4 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(this->_padding_ + uVar8 * 8);
      pcVar2 = *(code **)(*plVar1 + 0x2f0);
      uVar4 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar4 = uVar7;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = USoundNode::GetNodeWaveInstanceHash
                        (param_2,*(USoundNode **)(this->_padding_ + uVar8 * 8),uVar6);
      (*pcVar2)(plVar1,param_1,uVar5,param_3,param_4,param_5);
    }
  }
  return;
}

// PostLoad @ 1486e09a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundNodeQualityLevel::PostLoad(USoundNodeQualityLevel *this)

{
  int iVar1;
  UClass *pUVar2;
  UAudioSettings *pUVar3;
  longlong lVar4;
  FString local_48;
  FString local_38;
  FString local_28;
  
  UObject::PostLoad((UObject *)this);
  if ((byte)LogAudio._0_1_ < 3) {
    return;
  }
  lVar4 = this->_padding_;
  if (lVar4 == 0) {
    return;
  }
  pUVar2 = USoundCue::StaticClass();
  lVar4 = *(longlong *)(lVar4 + 0x10);
  iVar1 = (int)pUVar2->_padding_;
  if (*(int *)(lVar4 + 0x38) < iVar1) {
    return;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar2->_padding_) {
    return;
  }
  lVar4 = this->_padding_;
  if (lVar4 != 0) {
    pUVar2 = USoundCue::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_1486e0a34;
  }
  lVar4 = 0;
LAB_1486e0a34:
  if ((*(int *)(lVar4 + 0x56c) != this->CookedQualityLevelIndex) &&
     (this->CookedQualityLevelIndex != -1)) {
    pUVar3 = GetDefault<UAudioSettings>();
    UAudioSettings::FindQualityNameByIndex(pUVar3,&local_28,this->CookedQualityLevelIndex);
    pUVar3 = GetDefault<UAudioSettings>();
    UAudioSettings::FindQualityNameByIndex(pUVar3,&local_38,USoundCue::CachedQualityLevel);
    if (this->_padding_ == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// PrimeChildWavePlayers @ 1486e2030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeQualityLevel::PrimeChildWavePlayers(USoundNodeQualityLevel *this,bool param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USoundNodeQualityLevel::PrimeChildWavePlayers'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USoundNodeQualityLevel::PrimeChildWavePlayers'::__l2::<lambda_1>,void,USoundNode_*>
                ::Call;
  local_30 = param_1;
  (**(code **)(this->_padding_ + 0x360))(this,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// ReleaseRetainerOnChildWavePlayers @ 1486e6d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeQualityLevel::ReleaseRetainerOnChildWavePlayers(USoundNodeQualityLevel *this,bool param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USoundNodeQualityLevel::ReleaseRetainerOnChildWavePlayers'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USoundNodeQualityLevel::ReleaseRetainerOnChildWavePlayers'::__l2::<lambda_1>,void,USoundNode_*>
                ::Call;
  local_30 = param_1;
  (**(code **)(this->_padding_ + 0x360))(this,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// RetainChildWavePlayers @ 1486eb8c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeQualityLevel::RetainChildWavePlayers(USoundNodeQualityLevel *this,bool param_1)

{
  undefined ***pppuVar1;
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined **local_38;
  undefined1 local_30;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USoundNodeQualityLevel::RetainChildWavePlayers'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_20 = (undefined ***)0x0;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USoundNodeQualityLevel::RetainChildWavePlayers'::__l2::<lambda_1>,void,USoundNode_*>
                ::Call;
  local_30 = param_1;
  (**(code **)(this->_padding_ + 0x360))(this,local_48);
  if (local_48[0] != (code *)0x0) {
    pppuVar1 = &local_38;
    if (local_20 != (undefined ***)0x0) {
      pppuVar1 = local_20;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  return;
}

// Serialize @ 1486ed0e0

void __thiscall USoundNodeQualityLevel::Serialize(USoundNodeQualityLevel *this,FArchive *param_1)

{
  FStripDataFlags local_res10 [12];
  
  UObject::Serialize((UObject *)this,param_1);
  if (0x1e4 < *(int *)&param_1->field_0x40) {
    FStripDataFlags::FStripDataFlags(local_res10,param_1,'\0',&GOldestLoadablePackageFileUEVersion);
  }
  return;
}

// Serialize @ 1486ed120

void __thiscall
USoundNodeQualityLevel::Serialize(USoundNodeQualityLevel *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FStripDataFlags local_res10 [4];
  FSlotBase local_res18 [2];
  
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  UObject::Serialize((UObject *)this,pFVar1);
  if (0x1e4 < *(int *)&pFVar1->field_0x40) {
    FStripDataFlags::FStripDataFlags(local_res10,pFVar1,'\0',&GOldestLoadablePackageFileUEVersion);
  }
  return;
}

// StaticRegisterNativesUSoundNodeQualityLevel @ 1486f19d0

void __cdecl USoundNodeQualityLevel::StaticRegisterNativesUSoundNodeQualityLevel(void)

{
  return;
}

