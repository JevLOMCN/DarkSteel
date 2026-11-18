// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 148998e40

UClass * __cdecl UVoiceChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVoiceChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VoiceChannel",
               &Z_Registration_Info_UClass_UVoiceChannel.InnerSingleton,
               StaticRegisterNativesUVoiceChannel,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UVoiceChannel>,
               InternalVTableHelperCtorCaller<UVoiceChannel>,local_res8,UChannel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVoiceChannel.InnerSingleton;
}

// UVoiceChannel @ 1489b7420

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVoiceChannel * __thiscall UVoiceChannel::UVoiceChannel(UVoiceChannel *this,FVTableHelper *param_1)

{
  UChannel::UChannel((UChannel *)this,param_1);
  this->_padding_ = (longlong)&___7UVoiceChannel__6B_;
  (this->VoicePackets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VoicePackets).ArrayNum = 0;
  (this->VoicePackets).ArrayMax = 0;
  return this;
}

// ~UVoiceChannel @ 1489bab10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVoiceChannel::~UVoiceChannel(UVoiceChannel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UVoiceChannel__6B_;
  DestructItems<TSharedPtr<FVoicePacket,1>,int>
            ((TSharedPtr<FVoicePacket,1> *)(this->VoicePackets).AllocatorInstance.Data,
             (this->VoicePackets).ArrayNum);
  pFVar1 = (this->VoicePackets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UChannel::~UChannel((UChannel *)this);
  return;
}

// AddVoicePacket @ 1489ca590

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UVoiceChannel::AddVoicePacket(UVoiceChannel *this,TSharedPtr<FVoicePacket,1> *param_1)

{
  int *piVar1;
  TSharedPtr<FVoicePacket,1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  FString local_68;
  FString local_58;
  void *local_48 [2];
  void *local_38 [2];
  undefined1 local_28 [8];
  TReferenceControllerBase<1> *local_20;
  
  if (param_1->Object != (FVoicePacket *)0x0) {
    pTVar2 = (TSharedPtr<FVoicePacket,1> *)(this->VoicePackets).AllocatorInstance.Data;
    if (((pTVar2 <= param_1) && (param_1 < pTVar2 + (this->VoicePackets).ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (this->VoicePackets).ArrayNum;
    piVar1 = &(this->VoicePackets).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->VoicePackets).AllocatorInstance,piVar1);
    }
    (this->VoicePackets).ArrayNum = iVar6 + 1;
    pFVar8 = (this->VoicePackets).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    *(FVoicePacket **)pFVar8 = param_1->Object;
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (6 < (byte)LogNet._0_1_) {
      if ((param_1->Object == (FVoicePacket *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar7 = (longlong *)
               (**(code **)((longlong)*param_1->Object + 0x18))(param_1->Object,local_28);
      if ((*plVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(*(longlong *)*plVar7 + 0x38))((longlong *)*plVar7,local_38);
      (**(code **)(*(longlong *)this->_padding_ + 0x2d8))((longlong *)this->_padding_,local_48);
      UNetDriver::GetDescription(*(UNetDriver **)(this->_padding_ + 0x58),&local_58);
      FUniqueNetIdWrapper::ToDebugString((FUniqueNetIdWrapper *)(this->_padding_ + 0x1b8),&local_68)
      ;
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48[0] != (void *)0x0) {
        FMemory::Free(local_48[0]);
      }
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CanStopTicking @ 1489cecb0

bool __thiscall UVoiceChannel::CanStopTicking(UVoiceChannel *this)

{
  return false;
}

// CleanUp @ 1489cf260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UVoiceChannel::CleanUp(UVoiceChannel *this,bool param_1,EChannelCloseReason param_2)

{
  int *piVar1;
  bool bVar2;
  
  DestructItems<TSharedPtr<FVoicePacket,1>,int>
            ((TSharedPtr<FVoicePacket,1> *)(this->VoicePackets).AllocatorInstance.Data,
             (this->VoicePackets).ArrayNum);
  piVar1 = &(this->VoicePackets).ArrayMax;
  (this->VoicePackets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->VoicePackets).AllocatorInstance,0,piVar1);
  }
  bVar2 = UChannel::CleanUp((UChannel *)this,param_1,param_2);
  return bVar2;
}

// Describe @ 1489d59d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall UVoiceChannel::Describe(UVoiceChannel *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  pFVar1 = UChannel::Describe((UChannel *)this,&local_18);
  pFVar2 = ::FString::FString(&local_28,L"VoIP: ");
  ::FString::ConcatFF(__return_storage_ptr__,pFVar2,pFVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1489ec3a0

UClass * __cdecl UVoiceChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVoiceChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"VoiceChannel",
               &Z_Registration_Info_UClass_UVoiceChannel.InnerSingleton,
               StaticRegisterNativesUVoiceChannel,0x78,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UVoiceChannel>,
               InternalVTableHelperCtorCaller<UVoiceChannel>,local_res8,UChannel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVoiceChannel.InnerSingleton;
}

// ReceivedBunch @ 148a04610

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVoiceChannel::ReceivedBunch(UVoiceChannel *this,FInBunch *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  UOnlineEngineInterface *pUVar8;
  longlong *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  longlong *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  lVar2 = *(longlong *)(this->_padding_ + 0x58);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1b8) != 0)) &&
     (cVar5 = (**(code **)(param_1->_padding_ + 0x38))(param_1), cVar5 == '\0')) {
    while( true ) {
      pUVar8 = UOnlineEngineInterface::Get();
      (**(code **)(*(longlong *)pUVar8 + 0x378))
                (pUVar8,&local_28,*(undefined8 *)(*(longlong *)(this->_padding_ + 0x58) + 0x1b8),
                 this->_padding_,param_1);
      if (local_28 == (longlong *)0x0) break;
      plVar3 = *(longlong **)(this->_padding_ + 0x58);
      if (plVar3[0x20] == 0) {
        local_18 = local_28;
        pTStack_10 = pTStack_20;
        pcVar4 = *(code **)(*plVar3 + 0x398);
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
        (*pcVar4)(plVar3,&local_18);
      }
      piVar1 = (int *)(*(longlong *)(this->_padding_ + 0x58) + 0x3ac);
      *piVar1 = *piVar1 + 1;
      if ((local_28 == (longlong *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar7 = (**(code **)(*local_28 + 0x10))();
      piVar1 = (int *)(*(longlong *)(this->_padding_ + 0x58) + 0x3b0);
      *piVar1 = *piVar1 + (uint)uVar7;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
      cVar5 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
      if (cVar5 != '\0') {
        return;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  }
  return;
}

// StaticRegisterNativesUVoiceChannel @ 148a18920

void __cdecl UVoiceChannel::StaticRegisterNativesUVoiceChannel(void)

{
  return;
}

// Tick @ 148a1b760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVoiceChannel::Tick(UVoiceChannel *this)

{
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  ushort uVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStackY_1d8 [32];
  undefined1 local_198 [16];
  FOutBunch local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  lVar15 = *(longlong *)(this->_padding_ + 0x30);
  if ((lVar15 == 0) || (*(char *)(lVar15 + 0x550) == '\0')) {
    bVar5 = false;
  }
  else {
    uVar12 = 0;
    bVar5 = true;
    if (0 < (this->VoicePackets).ArrayNum) {
      lVar15 = 0;
      do {
        cVar6 = (**(code **)(*(longlong *)this->_padding_ + 0x318))();
        if (cVar6 == '\0') {
          if (2 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          break;
        }
        FOutBunch::FOutBunch(&local_188,(UChannel *)this,false);
        uVar9 = 0;
        if ((int)uVar12 < (this->VoicePackets).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (this->VoicePackets).AllocatorInstance.Data;
        pTVar2 = *(TReferenceControllerBase<1> **)(pFVar13 + lVar15 + 8);
        plVar3 = *(longlong **)(pFVar13 + lVar15);
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((this->_padding_ & 1) == 0) {
LAB_148a1b896:
          bVar10 = 0x10;
        }
        else {
          if ((plVar3 == (longlong *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          cVar6 = (**(code **)(*plVar3 + 0x20))();
          if (cVar6 != '\0') goto LAB_148a1b896;
          bVar10 = 0;
        }
        local_188.bReliable = bVar10 >> 4;
        if ((plVar3 == (longlong *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)(*plVar3 + 0x28))(plVar3,&local_188);
        piVar1 = (int *)(*(longlong *)(this->_padding_ + 0x58) + 0x3a4);
        *piVar1 = *piVar1 + 1;
        uVar8 = (**(code **)(*plVar3 + 0x10))(plVar3);
        piVar1 = (int *)(*(longlong *)(this->_padding_ + 0x58) + 0x3a8);
        *piVar1 = *piVar1 + (uint)uVar8;
        if ((local_188._padding_._1_1_ & 2) != 0) {
          if (2 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          FOutBunch::~FOutBunch(&local_188);
          break;
        }
        (**(code **)(this->_padding_ + 0x318))(this,local_198,&local_188,1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        FOutBunch::~FOutBunch(&local_188);
        uVar12 = uVar12 + 1;
        lVar15 = lVar15 + 0x10;
      } while ((int)uVar12 < (this->VoicePackets).ArrayNum);
    }
    iVar14 = (this->VoicePackets).ArrayNum;
    if ((int)uVar12 < iVar14) {
      if (0 < (int)uVar12) {
        if (((int)uVar12 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<TSharedPtr<FVoicePacket,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (&this->VoicePackets,0,uVar12);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->VoicePackets).AllocatorInstance,(this->VoicePackets).ArrayNum,
                   &(this->VoicePackets).ArrayMax);
      }
    }
    else {
      DestructItems<TSharedPtr<FVoicePacket,1>,int>
                ((TSharedPtr<FVoicePacket,1> *)(this->VoicePackets).AllocatorInstance.Data,iVar14);
      (this->VoicePackets).ArrayNum = 0;
      if ((this->VoicePackets).ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->VoicePackets).AllocatorInstance,0,&(this->VoicePackets).ArrayMax
                  );
      }
    }
  }
  iVar14 = 0;
  uVar12 = (this->VoicePackets).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar15 = (longlong)(int)uVar12 << 4;
    do {
      uVar9 = 0;
      if ((int)uVar12 < (this->VoicePackets).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (this->VoicePackets).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar13 + lVar15) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar6 = (**(code **)(**(longlong **)(pFVar13 + lVar15) + 0x20))();
      if (cVar6 == '\0') {
        uVar9 = 0;
        if ((int)uVar12 < (this->VoicePackets).ArrayNum) {
          uVar9 = ~uVar12 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (this->VoicePackets).AllocatorInstance.Data + lVar15;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)(pFVar13 + 8));
        iVar11 = ~uVar12 + (this->VoicePackets).ArrayNum;
        if (iVar11 != 0) {
          memmove(pFVar13,pFVar13 + 0x10,(longlong)iVar11 << 4);
        }
        piVar1 = &(this->VoicePackets).ArrayNum;
        *piVar1 = *piVar1 + -1;
        iVar14 = iVar14 + 1;
      }
      lVar15 = lVar15 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  if (((bVar5) && (0 < iVar14)) && (4 < (byte)LogNet._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
  }
  return;
}

