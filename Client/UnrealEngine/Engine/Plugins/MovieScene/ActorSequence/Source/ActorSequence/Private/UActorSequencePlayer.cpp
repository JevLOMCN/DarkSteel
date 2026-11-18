// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ActorSequence
// Functions: 8

// StaticClass @ 14eacfcd0

UClass * __cdecl UActorSequencePlayer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorSequence",L"ActorSequencePlayer",
               &Z_Registration_Info_UClass_UActorSequencePlayer.InnerSingleton,
               StaticRegisterNativesUActorSequencePlayer,0x4b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UActorSequencePlayer>,
               InternalVTableHelperCtorCaller<UActorSequencePlayer>,local_res8,
               UMovieSceneSequencePlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSequencePlayer.InnerSingleton;
}

// UActorSequencePlayer @ 14ead1290

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UActorSequencePlayer * __thiscall
UActorSequencePlayer::UActorSequencePlayer(UActorSequencePlayer *this,FVTableHelper *param_1)

{
  UMovieSceneSequencePlayer::UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMovieScenePlayer__;
  *(undefined ***)&this->field_0x218 = &_vftable__for__IMovieSceneSequenceTickManagerClient__;
  return this;
}

// UActorSequencePlayer @ 14ead12d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UActorSequencePlayer * __thiscall
UActorSequencePlayer::UActorSequencePlayer(UActorSequencePlayer *this,FObjectInitializer *param_1)

{
  UMovieSceneSequencePlayer::UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMovieScenePlayer__;
  *(undefined ***)&this->field_0x218 = &_vftable__for__IMovieSceneSequenceTickManagerClient__;
  return this;
}

// ~UActorSequencePlayer @ 14ead13a0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UActorSequencePlayer::~UActorSequencePlayer(UActorSequencePlayer *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IMovieScenePlayer__;
  *(undefined ***)&this->field_0x218 = &_vftable__for__IMovieSceneSequenceTickManagerClient__;
  UMovieSceneSequencePlayer::~UMovieSceneSequencePlayer((UMovieSceneSequencePlayer *)this);
  return;
}

// GetEventContexts @ 14ead2100

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
UActorSequencePlayer::GetEventContexts
          (UActorSequencePlayer *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong local_18 [2];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  local_18[0] = (**(code **)(*(longlong *)this + 0x80))();
  if (local_18[0] != 0) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
       ((FScriptContainerElement *)local_18 <
        pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 8)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar5;
      }
    }
    iVar4 = __return_storage_ptr__->ArrayNum;
    if (iVar4 == __return_storage_ptr__->ArrayMax) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    *(longlong *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar4 * 8) =
         local_18[0];
  }
  return __return_storage_ptr__;
}

// GetPlaybackContext @ 14ead2240

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall UActorSequencePlayer::GetPlaybackContext(UActorSequencePlayer *this)

{
  undefined1 *this_00;
  UObjectBaseUtility *this_01;
  bool bVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  this_00 = &this->field_0x2a8;
  if (*(longlong *)this_00 == 0) {
    pFVar4 = GetTypeName<UActorSequence>(&local_18);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar5 = L"";
    }
    else {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar5);
  }
  pUVar2 = UActorSequence::StaticClass();
  bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
  if ((bVar1) && (this_01 = *(UObjectBaseUtility **)this_00, this_01 != (UObjectBaseUtility *)0x0))
  {
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    pUVar3 = UObjectBaseUtility::GetTypedOuter(this_01,pUVar2);
    return pUVar3;
  }
  pFVar4 = GetTypeName<UActorSequence>(&local_28);
  pwVar5 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UMovieSceneSequence>
                     (&local_18,*(UMovieSceneSequence **)this_00);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar5,pwVar6);
}

// GetPrivateStaticClass @ 14ead2490

UClass * __cdecl UActorSequencePlayer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UActorSequencePlayer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ActorSequence",L"ActorSequencePlayer",
               &Z_Registration_Info_UClass_UActorSequencePlayer.InnerSingleton,
               StaticRegisterNativesUActorSequencePlayer,0x4b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UActorSequencePlayer>,
               InternalVTableHelperCtorCaller<UActorSequencePlayer>,local_res8,
               UMovieSceneSequencePlayer::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UActorSequencePlayer.InnerSingleton;
}

// StaticRegisterNativesUActorSequencePlayer @ 14ead2d30

void __cdecl UActorSequencePlayer::StaticRegisterNativesUActorSequencePlayer(void)

{
  return;
}

