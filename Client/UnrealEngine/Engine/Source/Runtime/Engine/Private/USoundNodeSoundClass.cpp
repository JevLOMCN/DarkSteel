// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticClass @ 148678390

UClass * __cdecl USoundNodeSoundClass::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeSoundClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeSoundClass",
               &Z_Registration_Info_UClass_USoundNodeSoundClass.InnerSingleton,
               StaticRegisterNativesUSoundNodeSoundClass,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeSoundClass>,
               InternalVTableHelperCtorCaller<USoundNodeSoundClass>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeSoundClass.InnerSingleton;
}

// USoundNodeSoundClass @ 148697c10

USoundNodeSoundClass * __thiscall
USoundNodeSoundClass::USoundNodeSoundClass(USoundNodeSoundClass *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeSoundClass__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->SoundClassOverride).field0_0x0.DebugPtr = (USoundClass *)0x0;
  return this;
}

// USoundNodeSoundClass @ 148697c50

USoundNodeSoundClass * __thiscall
USoundNodeSoundClass::USoundNodeSoundClass(USoundNodeSoundClass *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->bRetainingAudioDueToSoundClass = false;
  this->_padding_ = (longlong)&___7USoundNodeSoundClass__6B_;
  (this->SoundClassOverride).field0_0x0.DebugPtr = (USoundClass *)0x0;
  return this;
}

// ~USoundNodeSoundClass @ 14869bd80

void __thiscall USoundNodeSoundClass::~USoundNodeSoundClass(USoundNodeSoundClass *this)

{
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// BeginDestroy @ 1486a6a70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundNodeSoundClass::BeginDestroy(USoundNodeSoundClass *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(USoundNodeSoundClass **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetPrivateStaticClass @ 1486c5530

UClass * __cdecl USoundNodeSoundClass::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeSoundClass.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeSoundClass",
               &Z_Registration_Info_UClass_USoundNodeSoundClass.InnerSingleton,
               StaticRegisterNativesUSoundNodeSoundClass,0x58,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeSoundClass>,
               InternalVTableHelperCtorCaller<USoundNodeSoundClass>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeSoundClass.InnerSingleton;
}

// ParseNodes @ 1486deca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeSoundClass::ParseNodes
          (USoundNodeSoundClass *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
          FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  USoundClass *pUVar1;
  undefined1 auStackY_2a8 [32];
  FSoundParseParameters local_278;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FSoundParseParameters::FSoundParseParameters(&local_278,param_4);
  pUVar1 = (this->SoundClassOverride).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundClass *)0x0) {
    local_278.SoundClass = pUVar1;
  }
  USoundNode::ParseNodes((USoundNode *)this,param_1,param_2,param_3,&local_278,param_5);
  FSoundParseParameters::~FSoundParseParameters(&local_278);
  return;
}

// PostLoad @ 1486e0c10

void __thiscall USoundNodeSoundClass::PostLoad(USoundNodeSoundClass *this)

{
  ESoundWaveLoadingBehavior EVar1;
  USoundClass *pUVar2;
  
  UObject::PostLoad((UObject *)this);
  pUVar2 = (this->SoundClassOverride).field0_0x0.DebugPtr;
  do {
    if (pUVar2 == (USoundClass *)0x0) {
      return;
    }
    EVar1 = (pUVar2->Properties).LoadingBehavior;
    pUVar2 = (pUVar2->ParentClass).field0_0x0.DebugPtr;
  } while (EVar1 == Inherited);
  if (EVar1 != RetainOnLoad) {
    if (EVar1 != PrimeOnLoad) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0001486e0c66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x330))(this,1);
    return;
  }
  (**(code **)(this->_padding_ + 0x338))(this);
  this->bRetainingAudioDueToSoundClass = true;
  return;
}

// StaticRegisterNativesUSoundNodeSoundClass @ 1486f19f0

void __cdecl USoundNodeSoundClass::StaticRegisterNativesUSoundNodeSoundClass(void)

{
  return;
}

