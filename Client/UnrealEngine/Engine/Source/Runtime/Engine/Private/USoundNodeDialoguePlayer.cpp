// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// StaticClass @ 14867c1e0

UClass * __cdecl USoundNodeDialoguePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDialoguePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDialoguePlayer",
               &Z_Registration_Info_UClass_USoundNodeDialoguePlayer.InnerSingleton,
               StaticRegisterNativesUSoundNodeDialoguePlayer,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeDialoguePlayer>,
               InternalVTableHelperCtorCaller<USoundNodeDialoguePlayer>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDialoguePlayer.InnerSingleton;
}

// USoundNodeDialoguePlayer @ 148697450

USoundNodeDialoguePlayer * __thiscall
USoundNodeDialoguePlayer::USoundNodeDialoguePlayer
          (USoundNodeDialoguePlayer *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7USoundNodeDialoguePlayer__6B_;
  FDialogueWaveParameter::FDialogueWaveParameter(&this->DialogueWaveParameter);
  return this;
}

// USoundNodeDialoguePlayer @ 148697490

USoundNodeDialoguePlayer * __thiscall
USoundNodeDialoguePlayer::USoundNodeDialoguePlayer
          (USoundNodeDialoguePlayer *this,FObjectInitializer *param_1)

{
  USoundNode::USoundNode((USoundNode *)this,param_1);
  this->_padding_ = (longlong)&___7USoundNodeDialoguePlayer__6B_;
  FDialogueWaveParameter::FDialogueWaveParameter(&this->DialogueWaveParameter);
  return this;
}

// ~USoundNodeDialoguePlayer @ 14869b8d0

void __thiscall USoundNodeDialoguePlayer::~USoundNodeDialoguePlayer(USoundNodeDialoguePlayer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7USoundNodeDialoguePlayer__6B_;
  pFVar1 = (this->DialogueWaveParameter).Context.Targets.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7USoundNode__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// GetContextualDialogueSoundWaveProxy @ 1486bcae0

UDialogueSoundWaveProxy * __thiscall
USoundNodeDialoguePlayer::GetContextualDialogueSoundWaveProxy(USoundNodeDialoguePlayer *this)

{
  int iVar1;
  UDialogueWave *this_00;
  code *pcVar2;
  bool bVar3;
  UDialogueSoundWaveProxy *pUVar4;
  UClass *pUVar5;
  
  this_00 = (this->DialogueWaveParameter).DialogueWave.field0_0x0.DebugPtr;
  if ((this_00 != (UDialogueWave *)0x0) && (((uint)this_00->_padding_ >> 0x1e & 1) == 0)) {
    pUVar4 = (UDialogueSoundWaveProxy *)
             UDialogueWave::GetWaveFromContext(this_00,&(this->DialogueWaveParameter).Context);
    if ((pUVar4 != (UDialogueSoundWaveProxy *)0x0) && (((uint)pUVar4->_padding_ >> 0x1e & 1) == 0))
    {
      pUVar5 = Z_Construct_UClass_UDialogueSoundWaveProxy_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pUVar4 = (UDialogueSoundWaveProxy *)0x0;
      }
      else if (((uint)pUVar4->_padding_ >> 0x1e & 1) == 0) {
        return pUVar4;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Proxy)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SoundNodeDialoguePlayer.cpp"
                         ,0x69,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar4 = (UDialogueSoundWaveProxy *)(*pcVar2)();
        return pUVar4;
      }
      return pUVar4;
    }
  }
  return (UDialogueSoundWaveProxy *)0x0;
}

// GetDialogueWave @ 1486bd8c0

UDialogueWave * __thiscall USoundNodeDialoguePlayer::GetDialogueWave(USoundNodeDialoguePlayer *this)

{
  return (this->DialogueWaveParameter).DialogueWave.field0_0x0.DebugPtr;
}

// GetDuration @ 1486bde80

float __thiscall USoundNodeDialoguePlayer::GetDuration(USoundNodeDialoguePlayer *this)

{
  UDialogueWave *this_00;
  USoundBase *pUVar1;
  float fVar2;
  
  this_00 = (this->DialogueWaveParameter).DialogueWave.field0_0x0.DebugPtr;
  if (this_00 != (UDialogueWave *)0x0) {
    pUVar1 = UDialogueWave::GetWaveFromContext(this_00,&(this->DialogueWaveParameter).Context);
    if (pUVar1 != (USoundBase *)0x0) {
      if (this->bLooping != 0) {
        return __real_461c4000;
      }
                    /* WARNING: Could not recover jumptable at 0x0001486bdebf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      fVar2 = (float)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
      return fVar2;
    }
  }
  return 0.0;
}

// GetMaxChildNodes @ 1486c1220

int __thiscall USoundNodeDialoguePlayer::GetMaxChildNodes(USoundNodeDialoguePlayer *this)

{
  return 0;
}

// GetNumSounds @ 1486c2d80

int __thiscall
USoundNodeDialoguePlayer::GetNumSounds
          (USoundNodeDialoguePlayer *this,ulong64 param_1,FActiveSound *param_2)

{
  return 1;
}

// GetPrivateStaticClass @ 1486c4ab0

UClass * __cdecl USoundNodeDialoguePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundNodeDialoguePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundNodeDialoguePlayer",
               &Z_Registration_Info_UClass_USoundNodeDialoguePlayer.InnerSingleton,
               StaticRegisterNativesUSoundNodeDialoguePlayer,0x70,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<USoundNodeDialoguePlayer>,
               InternalVTableHelperCtorCaller<USoundNodeDialoguePlayer>,local_res8,
               USoundNode::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundNodeDialoguePlayer.InnerSingleton;
}

// ParseNodes @ 1486db440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
USoundNodeDialoguePlayer::ParseNodes
          (USoundNodeDialoguePlayer *this,FAudioDevice *param_1,ulong64 param_2,
          FActiveSound *param_3,FSoundParseParameters *param_4,
          TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  UDialogueWave *this_00;
  USoundBase *pUVar1;
  undefined1 auStack_2b8 [32];
  FSoundParseParameters *local_298;
  TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *local_290;
  FSoundParseParameters local_288;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  this_00 = (this->DialogueWaveParameter).DialogueWave.field0_0x0.DebugPtr;
  if ((this_00 != (UDialogueWave *)0x0) &&
     (pUVar1 = UDialogueWave::GetWaveFromContext(this_00,&(this->DialogueWaveParameter).Context),
     pUVar1 != (USoundBase *)0x0)) {
    if (this->bLooping == 0) {
      local_290 = param_5;
      local_298 = param_4;
      (**(code **)(pUVar1->_padding_ + 0x328))(pUVar1,param_1,param_2,param_3);
    }
    else {
      FSoundParseParameters::FSoundParseParameters(&local_288,param_4);
      local_298 = &local_288;
      local_288.bLooping = '\x01';
      local_290 = param_5;
      (**(code **)(pUVar1->_padding_ + 0x328))(pUVar1,param_1,param_2,param_3);
      FSoundParseParameters::~FSoundParseParameters(&local_288);
    }
  }
  return;
}

// SetDialogueWave @ 1486ee250

void __thiscall
USoundNodeDialoguePlayer::SetDialogueWave(USoundNodeDialoguePlayer *this,UDialogueWave *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UDialogueWave *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->DialogueWaveParameter).DialogueWave.field0_0x0.DebugPtr = param_1;
    return;
  }
  (this->DialogueWaveParameter).DialogueWave.field0_0x0.DebugPtr = param_1;
  return;
}

// StaticRegisterNativesUSoundNodeDialoguePlayer @ 1486f1910

void __cdecl USoundNodeDialoguePlayer::StaticRegisterNativesUSoundNodeDialoguePlayer(void)

{
  return;
}

