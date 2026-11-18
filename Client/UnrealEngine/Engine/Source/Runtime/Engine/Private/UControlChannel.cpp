// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 17

// StaticClass @ 1472655e0

UClass * __cdecl UControlChannel::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ControlChannel",
               &Z_Registration_Info_UClass_UControlChannel.InnerSingleton,
               StaticRegisterNativesUControlChannel,0x80,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlChannel>,
               InternalVTableHelperCtorCaller<UControlChannel>,local_res8,UChannel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlChannel.InnerSingleton;
}

// UControlChannel @ 14726cc10

UControlChannel * __thiscall
UControlChannel::UControlChannel(UControlChannel *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UControlChannel__6B_;
  this->_padding_ = 0;
  (this->QueuedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueuedMessages).ArrayNum = 0;
  (this->QueuedMessages).ArrayMax = 0;
  return this;
}

// ~UControlChannel @ 14726d3b0

void __thiscall UControlChannel::~UControlChannel(UControlChannel *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UControlChannel__6B_;
  DestructItems<FQueuedControlMessage,int>
            ((FQueuedControlMessage *)(this->QueuedMessages).AllocatorInstance.Data,
             (this->QueuedMessages).ArrayNum);
  pFVar1 = (this->QueuedMessages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UChannel__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CanStopTicking @ 14726e970

bool __thiscall UControlChannel::CanStopTicking(UControlChannel *this)

{
  return false;
}

// GetPrivateStaticClass @ 14726f440

UClass * __cdecl UControlChannel::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlChannel.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ControlChannel",
               &Z_Registration_Info_UClass_UControlChannel.InnerSingleton,
               StaticRegisterNativesUControlChannel,0x80,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UControlChannel>,
               InternalVTableHelperCtorCaller<UControlChannel>,local_res8,UChannel::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlChannel.InnerSingleton;
}

// StaticRegisterNativesUControlChannel @ 147270a00

void __cdecl UControlChannel::StaticRegisterNativesUControlChannel(void)

{
  return;
}

// CheckEndianess @ 147a358c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UControlChannel::CheckEndianess(UControlChannel *this,FInBunch *param_1)

{
  char cVar1;
  byte bVar2;
  
  if (((longlong)(param_1->_padding_ + 7U & 0xfffffffffffffff8) < 0x10) ||
     (*(char *)param_1->_padding_ != '\0')) {
    return false;
  }
  cVar1 = ((char *)param_1->_padding_)[1];
  if (4 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  bVar2 = *(byte *)((longlong)&param_1->_padding_ + 2);
  if (cVar1 != '\x01') {
    *(byte *)((longlong)&param_1->_padding_ + 2) = bVar2 | 1;
    *(undefined1 *)(this->_padding_ + 0x1b0) = 1;
    this->bNeedsEndianInspection = false;
    return true;
  }
  *(byte *)((longlong)&param_1->_padding_ + 2) = bVar2 & 0xfe;
  *(undefined1 *)(this->_padding_ + 0x1b0) = 0;
  this->bNeedsEndianInspection = false;
  return true;
}

// Describe @ 147a3ecb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FString * __thiscall
UControlChannel::Describe(UControlChannel *this,FString *__return_storage_ptr__)

{
  UChannel::Describe((UChannel *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Init @ 147a5cce0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UControlChannel::Init
          (UControlChannel *this,UNetConnection *param_1,int param_2,EChannelCreateFlags param_3)

{
  UChannel::Init((UChannel *)this,param_1,param_2,param_3);
  this->bNeedsEndianInspection = (bool)(~(byte)(param_3 >> 1) & 1);
  return;
}

// QueueMessage @ 147a6b050

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UControlChannel::QueueMessage(UControlChannel *this,FOutBunch *param_1)

{
  int *piVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FLLMScope local_res8 [2];
  FName local_res18;
  FMemScope local_res20;
  
  FLLMScope::FLLMScope(local_res8,LLMTagDeclaration_NetChannel.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_NetChannel.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  uVar6 = (this->QueuedMessages).ArrayNum;
  if ((int)uVar6 < 0x8000) {
    piVar1 = &(this->QueuedMessages).ArrayMax;
    if (uVar6 == *piVar1) {
      uVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&(this->QueuedMessages).AllocatorInstance,piVar1);
      (this->QueuedMessages).ArrayNum = uVar6;
    }
    (this->QueuedMessages).ArrayNum = uVar6 + 1;
    lVar2 = (longlong)(int)uVar6 * 0x18;
    pFVar3 = (this->QueuedMessages).AllocatorInstance.Data;
    pFVar8 = pFVar3 + lVar2;
    *(undefined8 *)pFVar8 = 0;
    *(undefined8 *)(pFVar8 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar2 + 0x10) = 0;
    uVar7 = 0;
    if ((int)uVar6 < (this->QueuedMessages).ArrayNum) {
      uVar7 = ~uVar6 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar8 = (this->QueuedMessages).AllocatorInstance.Data + lVar2;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)(param_1->_padding_ + 7 >> 3),(ForAnyElementType *)pFVar8,
               (int *)(pFVar8 + 8),(int *)(pFVar8 + 0xc));
    lVar2 = param_1->_padding_;
    if ((param_1->_padding_ & 0x200) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\BitWriter.h"
                         ,0x53,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    memcpy(*(void **)&pFVar8->field_0x0,(void *)param_1->_padding_,lVar2 + 7 >> 3);
    *(int *)&pFVar8[0x10].field_0x0 = (int)param_1->_padding_;
  }
  else {
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    UNetConnection::SetConnectionState((UNetConnection *)this->_padding_,USOCK_Closed);
  }
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// ReceiveDestructionInfo @ 147a6fcb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UControlChannel::ReceiveDestructionInfo(UControlChannel *this,FInBunch *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  code *pcVar7;
  AActor *this_00;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  char cVar10;
  UClass *pUVar11;
  UWorld *pUVar12;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *pTVar13;
  UPackageMapClient *pUVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  char local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  FNetworkGUID_u_0 local_res20;
  AActor *local_100;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  void *local_98 [2];
  void *local_88 [2];
  void *local_78 [5];
  undefined4 local_4c;
  
  lVar4 = this->_padding_;
  if (((lVar4 == 0) || (*(longlong *)(lVar4 + 0x68) == 0)) || (*(longlong *)(lVar4 + 0x58) == 0)) {
    (**(code **)(this->_padding_ + 0x2d0))(this,local_98);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Connection && Connection->PackageMap && Connection->Driver",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x8f8,
                       L"UControlChannel::ReceiveDestructionInfo requires a valid connection, package map, and driver: %s"
                      );
    if (local_98[0] != (void *)0x0) {
      FMemory::Free(local_98[0]);
    }
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  cVar10 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x3f8))();
  if (cVar10 != '\0') {
    (**(code **)(this->_padding_ + 0x2d0))(this,local_88);
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Connection->Driver->IsServer()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x8f9,
                       L"UControlChannel::ReceiveDestructionInfo should not be called on a server: %s"
                      );
    if (local_88[0] != (void *)0x0) {
      FMemory::Free(local_88[0]);
    }
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  plVar5 = (longlong *)param_1->_padding_;
  local_res8[0] = '\0';
  if ((char *)plVar5[1] < (char *)*plVar5 + 1) {
    (**(code **)(param_1->_padding_ + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(char *)*plVar5;
    *plVar5 = *plVar5 + 1;
  }
  iVar16 = 0;
  local_res20.ObjectId = 0;
  local_100 = (AActor *)0x0;
  plVar5 = *(longlong **)(this->_padding_ + 0x68);
  pcVar7 = *(code **)(*plVar5 + 0x2b8);
  pUVar11 = Z_Construct_UClass_UObject_NoRegister();
  cVar10 = (*pcVar7)(plVar5,param_1,pUVar11,&local_100,&local_res20);
  this_00 = local_100;
  if ((cVar10 != '\0') && (local_100 != (AActor *)0x0)) {
    pUVar11 = Z_Construct_UClass_AActor_NoRegister();
    iVar15 = (int)pUVar11->_padding_;
    if ((iVar15 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar15 * 8) ==
        &pUVar11->_padding_)) {
      bVar9 = UObjectBase::IsValidLowLevel((UObjectBase *)this_00);
      if (!bVar9) {
        (**(code **)(this->_padding_ + 0x2d0))(this,local_78);
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("TheActor->IsValidLowLevel()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                           ,0x905,L"ReceiveDestructionInfo serialized an invalid actor: %s");
        if (local_78[0] != (void *)0x0) {
          FMemory::Free(local_78[0]);
        }
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if ((this_00->bTearOff == 0) ||
         (cVar10 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x428))(), cVar10 != '\0')
         ) {
        if (((this->_padding_ & 4) == 0) || ((local_res8[0] != '\x01' || (this_00->bTearOff != 0))))
        {
          if ((this_00->bNetTemporary == 0) &&
             (((pUVar12 = AActor::GetWorld(this_00), pUVar12 != (UWorld *)0x0 &&
               (GIsRequestingExit == false)) &&
              (plVar5 = *(longlong **)(this->_padding_ + 0x58),
              cVar10 = (**(code **)(*plVar5 + 0x498))(plVar5,this_00,0), cVar10 != '\0')))) {
            pTVar13 = ObjectPtrDecay<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>,UE::Core::Private::TObjectPtrDecayTypeOf<TSet<TObjectPtr<UActorComponent>,DefaultKeyFuncs<TObjectPtr<UActorComponent>,0>,FDefaultSetAllocator>_>,TSet<UActorComponent_*,DefaultKeyFuncs<UActorComponent_*,0>,FDefaultSetAllocator>_>
                                (&this_00->OwnedComponents);
            local_e8 = &(pTVar13->Elements).field_0x10;
            iVar15 = *(int *)&(pTVar13->Elements).field_0x28;
            iStack_dc = iVar16;
            local_d8 = 0;
            uStack_ec = 1;
            if (iVar15 != 0) {
              puVar20 = *(uint **)&(pTVar13->Elements).field_0x20;
              if (puVar20 == (uint *)0x0) {
                puVar20 = (uint *)local_e8;
              }
              uVar18 = *puVar20;
              iVar16 = 0;
              while (uVar18 == 0) {
                iVar16 = iVar16 + 1;
                local_d8 = local_d8 + 0x20;
                iStack_dc = iVar15;
                if ((int)((iVar15 + -1 >> 0x1f & 0x1fU) + iVar15 + -1) >> 5 < iVar16)
                goto LAB_147a7001f;
                uVar18 = puVar20[iVar16];
              }
              uStack_ec = -uVar18 & uVar18;
              uVar1 = (ulonglong)uStack_ec * 2 + 1;
              lVar4 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              local_res18 = (int)lVar4;
              iStack_dc = local_res18 + -1 + local_d8;
              if (iVar15 < iStack_dc) {
                iStack_dc = iVar15;
              }
            }
LAB_147a7001f:
            uVar18 = *(uint *)&(pTVar13->Elements).field_0x28;
            uStack_d4 = local_4c;
            iStack_d0 = *(int *)&(pTVar13->Elements).field_0x8 -
                        *(int *)&(pTVar13->Elements).field_0x34;
            uVar17 = uVar18 & 0xffffffe0;
            uStack_e0 = 0xffffffff;
            puVar2 = &(pTVar13->Elements).field_0x10;
            TStack_c0._padding_ = CONCAT44(uStack_ec,iVar16);
            TStack_c0.CurrentBitIndex = iStack_dc;
            TStack_c0.UnvisitedBitMask = 0xffffffff;
            iVar15 = (int)uVar18 >> 5;
            TStack_c0._28_4_ = local_4c;
            TStack_c0.BaseBitIndex = local_d8;
            uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
            local_f8 = pTVar13;
            iStack_f0 = iVar16;
            local_c8 = pTVar13;
            TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e8;
            if ((((int)uVar18 < 0) || (*(int *)&(pTVar13->Elements).field_0x28 < (int)uVar18)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x7af,L""), bVar9)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar3 = *(uint *)&(pTVar13->Elements).field_0x28;
            if (uVar18 != uVar3) {
              puVar6 = *(undefined1 **)&(pTVar13->Elements).field_0x20;
              puVar19 = puVar2;
              if (puVar6 != (undefined1 *)0x0) {
                puVar19 = puVar6;
              }
              uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
              while (uVar18 == 0) {
                iVar15 = iVar15 + 1;
                uVar17 = uVar17 + 0x20;
                uVar18 = uVar3;
                if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar15)
                goto LAB_147a70130;
                uVar18 = *(uint *)(puVar19 + (longlong)iVar15 * 4);
              }
              uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
              lVar4 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
                }
              }
              uVar18 = (int)lVar4 + -1 + uVar17;
              if ((int)uVar3 < (int)uVar18) {
                uVar18 = uVar3;
              }
            }
LAB_147a70130:
            while( true ) {
              pTVar8 = local_c8;
              if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34
                  != (int)uStack_a0) {
                local_res10[0] = 0;
                `TSparseArray<TSparseSetElement<UActorComponent_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
              }
              if (((TStack_c0.CurrentBitIndex == uVar18) &&
                  (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
                 (pTVar8 == pTVar13)) break;
              UNetDriver::MoveMappedObjectToUnmapped
                        (*(UNetDriver **)(this->_padding_ + 0x58),
                         *(UObject **)
                          (*(longlong *)&pTVar8->Elements +
                          (longlong)TStack_c0.CurrentBitIndex * 0x10));
              TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
            }
            UNetDriver::MoveMappedObjectToUnmapped
                      (*(UNetDriver **)(this->_padding_ + 0x58),(UObject *)this_00);
            (**(code **)(this_00->_padding_ + 0x238))(this_00);
            AActor::Destroy(this_00,true,true);
            if ((((UE::Net::FilterGuidRemapping != 0) && (local_res20.ObjectId != 0)) &&
                (this->_padding_ != 0)) &&
               ((lVar4 = *(longlong *)(this->_padding_ + 0x58), lVar4 != 0 &&
                (*(longlong *)(lVar4 + 0x1c8) != 0)))) {
              TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator>::Remove
                        ((TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> *)
                         (*(longlong *)(lVar4 + 0x1c8) + 0xb0),(FNetworkGUID *)&local_res20);
            }
            pUVar14 = Cast<UPackageMapClient,UPackageMap>
                                ((TObjectPtr<UPackageMap> *)(this->_padding_ + 0x68));
            if (pUVar14 != (UPackageMapClient *)0x0) {
              (**(code **)(pUVar14->_padding_ + 0x360))(pUVar14,&local_res20,0);
            }
          }
        }
        else {
          plVar5 = *(longlong **)(this->_padding_ + 0x58);
          (**(code **)(*plVar5 + 0x4b8))(plVar5,this_00);
          UNetDriver::NotifyActorFullyDormantForConnection
                    ((((UNetConnection *)this->_padding_)->Driver).field0_0x0.DebugPtr,this_00,
                     (UNetConnection *)this->_padding_);
        }
      }
      else {
        plVar5 = *(longlong **)(this->_padding_ + 0x58);
        (**(code **)(*plVar5 + 0x4c0))(plVar5,this_00);
      }
    }
  }
  return;
}

// ReceivedBunch @ 147a721c0

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
/* WARNING: Enum "ENetPingControlMessage": Some values do not have unique names */

void __thiscall UControlChannel::ReceivedBunch(UControlChannel *this,FInBunch *param_1)

{
  FObjectPtr_u_0 *this_00;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  FObjectPtr FVar4;
  UNetConnection *pUVar5;
  UNetDriver *pUVar6;
  TObjectPtr<UWorld>_u_0 TVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  UReplicationSystem *pUVar11;
  FNetResult *pFVar12;
  bool bVar13;
  char cVar14;
  uint uVar15;
  EConnectionState EVar16;
  uint uVar17;
  wchar_t **ppwVar18;
  UClass *pUVar19;
  FWorldContext *pFVar20;
  TEventRef<unsigned_int> TVar21;
  UPackage *pUVar22;
  FWriteBuffer *pFVar23;
  UEnum *pUVar24;
  wchar_t *pwVar25;
  undefined8 *puVar26;
  code *pcVar27;
  undefined8 *puVar28;
  ForElementType<FNetTracePacketContentEvent> FVar29;
  longlong lVar30;
  ForElementType<FNetTracePacketContentEvent> FVar31;
  uint *puVar32;
  FNetResult *pFVar33;
  byte bVar34;
  FNetTraceCollector *pFVar35;
  ulonglong uVar36;
  FNetTraceCollector *pFVar37;
  UGameInstance *this_01;
  undefined1 auStackY_618 [32];
  byte local_5e8;
  ENetPingControlMessage local_5e7;
  byte local_5e6;
  undefined1 local_5e5;
  uint local_5e4;
  uint local_5e0;
  uint local_5dc;
  uint local_5d4;
  uint local_5d0 [2];
  ENetRefHandleError local_5c8;
  uint local_5c4;
  FLLMScope local_5c0;
  uint local_5bc;
  int local_5b8 [2];
  ulong64 local_5b0;
  FNetTraceCollector *local_5a8;
  FNetResult local_5a0;
  FString local_570;
  FString local_560;
  FString local_550;
  ulong64 local_540;
  TTuple<unsigned_int,EEngineNetworkRuntimeFeatures> local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined8 local_520;
  FString local_518;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_508;
  undefined1 local_4f8 [8];
  FString local_4f0;
  ulong64 local_4e0;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  undefined8 local_4a8;
  FString local_4a0;
  FGuid local_490;
  FString local_480;
  FString local_470;
  FString local_460;
  FString local_450;
  FGuid local_440;
  FString local_430;
  undefined1 local_420 [8];
  void *local_418;
  undefined8 uStack_410;
  undefined2 local_408;
  FNetResult local_400;
  FName local_3d0;
  FName local_3c8;
  FName local_3c0;
  FName local_3b8;
  longlong local_3b0;
  undefined8 local_3a8;
  longlong local_3a0;
  FMemScope local_398;
  FInBunch *local_390;
  UEnum *local_388;
  FString local_380;
  FString local_370;
  FString local_360;
  FString local_350;
  FInBunch *local_340;
  FInBunch *local_338;
  FInBunch *local_330;
  UEnum *local_328;
  FNetTraceCollector *local_320;
  UControlChannel *local_318;
  FNetResult local_310;
  undefined1 local_2e0 [16];
  void *pvStack_2d0;
  undefined8 local_2c8;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> local_2c0;
  FString local_2b0;
  FName local_2a0;
  void *local_298 [2];
  FString local_288;
  void *local_278 [2];
  longlong local_268;
  FName local_260;
  FName local_258;
  void *local_250 [2];
  FNetResult local_240;
  FNetResult local_210;
  FNetResult local_1e0;
  FNetResult local_1b0;
  FString local_180;
  FString local_170;
  FUniqueNetIdRepl local_160;
  FString local_130;
  FString local_120;
  FUniqueNetIdRepl local_110;
  FString local_e0;
  FUniqueNetIdRepl local_d0;
  FString local_a0;
  FUniqueNetIdRepl local_90;
  undefined4 *local_60;
  longlong local_58;
  FNetIDVariant local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_618;
  pFVar37 = (FNetTraceCollector *)0x0;
  local_5e4 = 0;
  local_390 = param_1;
  local_318 = this;
  if (((this->_padding_ & 2) != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!Closing",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                          ,0x719,L""), bVar13)) {
    pcVar27 = (code *)swi(3);
    (*pcVar27)();
    return;
  }
  local_5c4 = 0xffffffff;
  pFVar35 = pFVar37;
  if (GNetTraceRuntimeVerbosity != 0) {
    pFVar35 = *(FNetTraceCollector **)(this->_padding_ + 0x1ec0);
  }
  local_320 = pFVar35;
  if (pFVar35 != (FNetTraceCollector *)0x0) {
    local_5c4 = FNetTrace::BeginPacketContentEvent(pFVar35,NameId,(uint)param_1->_padding_);
    uVar36 = (ulonglong)local_5c4;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ControlChannel = UE::Net::CreatePersistentNetDebugName(L"ControlChannel",0xe);
      _Init_thread_footer(&::_TSS0);
    }
    uVar15 = FNetTrace::TraceName(ControlChannel);
    FVar29 = (pFVar35->Events).AllocatorInstance.SecondaryData;
    if (FVar29 == (ForElementType<FNetTracePacketContentEvent>)0x0) {
      FVar29 = (ForElementType<FNetTracePacketContentEvent>)&pFVar35->Events;
    }
    *(uint *)((longlong)FVar29 + uVar36 * 0x10) = uVar15;
  }
  if ((this->_padding_ == 0) || (this->bNeedsEndianInspection == false)) {
LAB_147a72389:
    bVar34 = 0;
    local_5e6 = 0;
    cVar14 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
    if (cVar14 == '\0') {
      while (((bVar34 == 0 && ((UNetConnection *)this->_padding_ != (UNetConnection *)0x0)) &&
             (EVar16 = UNetConnection::GetConnectionState((UNetConnection *)this->_padding_),
             EVar16 != USOCK_Closed))) {
        plVar2 = (longlong *)param_1->_padding_;
        if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
          local_5e8 = bVar34;
          (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_5e8);
        }
        else {
          local_5e8 = *(byte *)*plVar2;
          *plVar2 = *plVar2 + 1;
        }
        if ((param_1->_padding_ & 0x200) != 0) goto LAB_147a73c12;
        uVar15 = (uint)param_1->_padding_;
        local_5bc = uVar15;
        if (this->_padding_ == 0) {
          local_5dc = 0xffffffff;
          local_5a8 = (FNetTraceCollector *)0x0;
        }
        else {
          local_5dc = 0xffffffff;
          pFVar35 = (FNetTraceCollector *)0x0;
          if (GNetTraceRuntimeVerbosity != 0) {
            pFVar35 = *(FNetTraceCollector **)(this->_padding_ + 0x1ec0);
          }
          local_5a8 = pFVar35;
          if (pFVar35 != (FNetTraceCollector *)0x0) {
            local_5dc = FNetTrace::BeginPacketContentEvent(pFVar35,NameId,uVar15);
            uVar36 = (ulonglong)local_5dc;
            if (FNetControlMessageInfo::bInitialized == false) {
              lVar30 = 0x20;
              ppwVar18 = FNetControlMessageInfo::Names;
              do {
                *ppwVar18 = L"";
                ppwVar18[1] = L"";
                ppwVar18[2] = L"";
                ppwVar18[3] = L"";
                ppwVar18[4] = L"";
                ppwVar18[5] = L"";
                ppwVar18[6] = L"";
                ppwVar18[7] = L"";
                lVar30 = lVar30 + -1;
                ppwVar18 = ppwVar18 + 8;
              } while (lVar30 != 0);
              FNetControlMessageInfo::bInitialized = true;
            }
            uVar17 = FNetTrace::TraceName(FNetControlMessageInfo::Names[local_5e8]);
            FVar29 = (pFVar35->Events).AllocatorInstance.SecondaryData;
            FVar31 = (ForElementType<FNetTracePacketContentEvent>)&pFVar35->Events;
            if (FVar29 != (ForElementType<FNetTracePacketContentEvent>)0x0) {
              FVar31 = FVar29;
            }
            *(uint *)((longlong)FVar31 + uVar36 * 0x10) = uVar17;
          }
        }
        if (local_5e8 == 0x10) {
          if (*(longlong *)(*(longlong *)(this->_padding_ + 0x58) + 0x100) == 0) {
            plVar2 = (longlong *)param_1->_padding_;
            if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
              if ((param_1->_padding_ & 0x10000) == 0) {
                (**(code **)(param_1->_padding_ + 0x188))();
              }
              else {
                FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&local_5e0);
              }
            }
            else {
              local_5e0 = *(uint *)*plVar2;
              *plVar2 = *plVar2 + 4;
            }
            if ((param_1->_padding_ & 0x200) == 0) {
              if (4 < (byte)LogNet._0_1_) {
                (**(code **)(this->_padding_ + 0x2d0))(this,local_250);
                if (FNetControlMessageInfo::bInitialized == false) {
                  lVar30 = 0x20;
                  ppwVar18 = FNetControlMessageInfo::Names;
                  do {
                    *ppwVar18 = L"";
                    ppwVar18[1] = L"";
                    ppwVar18[2] = L"";
                    ppwVar18[3] = L"";
                    ppwVar18[4] = L"";
                    ppwVar18[5] = L"";
                    ppwVar18[6] = L"";
                    ppwVar18[7] = L"";
                    lVar30 = lVar30 + -1;
                    ppwVar18 = ppwVar18 + 8;
                  } while (lVar30 != 0);
                  FNetControlMessageInfo::bInitialized = true;
                }
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_250[0] != (void *)0x0) {
                  FMemory::Free(local_250[0]);
                }
              }
              lVar30 = (longlong)(int)local_5e0;
              if (-1 < (int)local_5e0) {
                lVar3 = this->_padding_;
                iVar1 = *(int *)(lVar3 + 0x1470);
                if ((int)local_5e0 < iVar1) {
                  uVar17 = 0;
                  if ((int)local_5e0 < iVar1) {
                    uVar17 = ~local_5e0 >> 0x1f;
                  }
                  if ((uVar17 == 0) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar13)) {
                    pcVar27 = (code *)swi(3);
                    (*pcVar27)();
                    return;
                  }
                  lVar3 = *(longlong *)(lVar3 + 0x1468);
                  this_00 = (FObjectPtr_u_0 *)(lVar3 + lVar30 * 8);
                  if (*(longlong *)(lVar3 + lVar30 * 8) != 0) {
                    pUVar19 = Z_Construct_UClass_UActorChannel_NoRegister();
                    bVar13 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar19);
                    if ((bVar13) &&
                       (FVar4.field0_0x0 = (FObjectPtr_u_0)this_00->Handle,
                       FVar4.field0_0x0 != (UObject *)0x0)) {
                      if (4 < (byte)LogNet._0_1_) {
                        (**(code **)(*(longlong *)FVar4.field0_0x0 + 0x2d0))
                                  (FVar4.field0_0x0,local_298);
                        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet)
                        ;
                        if (local_298[0] != (void *)0x0) {
                          FMemory::Free(local_298[0]);
                        }
                      }
                      if (*(longlong **)((longlong)FVar4.field0_0x0 + 0x68) != (longlong *)0x0) {
                        plVar2 = *(longlong **)(this->_padding_ + 0x30);
                        if (*(longlong **)((longlong)FVar4.field0_0x0 + 0x68) == plVar2) {
                          if (2 < (byte)LogNet._0_1_) {
                            lVar30 = *(longlong *)(this->_padding_ + 0x98);
                            if (lVar30 != 0) {
                              local_3c0 = *(FName *)(lVar30 + 0x18);
                              local_5e4 = (uint)pFVar37 | 8;
                              pFVar37 = (FNetTraceCollector *)(ulonglong)local_5e4;
                              ::FName::ToString(&local_3c0,&local_350);
                            }
                            lVar30 = *(longlong *)(this->_padding_ + 0x30);
                            if (lVar30 != 0) {
                              local_3b8 = *(FName *)(lVar30 + 0x18);
                              local_5e4 = (uint)pFVar37 | 0x10;
                              pFVar37 = (FNetTraceCollector *)(ulonglong)local_5e4;
                              ::FName::ToString(&local_3b8,&local_360);
                            }
                            lVar30 = *(longlong *)(this->_padding_ + 0x58);
                            if (lVar30 != 0) {
                              local_5e4 = (uint)pFVar37 | 0x20;
                              pFVar37 = (FNetTraceCollector *)(ulonglong)local_5e4;
                              ::FName::ToString((FName *)(lVar30 + 0x218),&local_288);
                            }
                            UE::Logging::Private::BasicLog<3>
                                      (&::LOG_Static,(FLogCategoryBase *)&LogNet);
                            if (((ulonglong)pFVar37 & 0x20) != 0) {
                              local_5e4 = (uint)pFVar37 & 0xffffffdf;
                              pFVar37 = (FNetTraceCollector *)(ulonglong)local_5e4;
                              if (local_288.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_288.Data.AllocatorInstance.Data);
                              }
                            }
                            if (((ulonglong)pFVar37 & 0x10) != 0) {
                              local_5e4 = (uint)pFVar37 & 0xffffffef;
                              pFVar37 = (FNetTraceCollector *)(ulonglong)local_5e4;
                              if (local_360.Data.AllocatorInstance.Data !=
                                  (FScriptContainerElement *)0x0) {
                                FMemory::Free(local_360.Data.AllocatorInstance.Data);
                              }
                            }
                            if ((((ulonglong)pFVar37 & 8) != 0) &&
                               (local_5e4 = (uint)pFVar37 & 0xfffffff7,
                               local_350.Data.AllocatorInstance.Data !=
                               (FScriptContainerElement *)0x0)) {
                              FMemory::Free(local_350.Data.AllocatorInstance.Data);
                            }
                          }
                          pUVar5 = (UNetConnection *)this->_padding_;
                          UE::Net::TNetResult<enum_ENetCloseResult>::
                          TNetResult<enum_ENetCloseResult>
                                    (&local_1e0,ControlChannelPlayerChannelFail);
                          UNetConnection::Close(pUVar5,&local_1e0);
                          if (local_1e0.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
                            (**(code **)((longlong)local_1e0.NextResult + -0x10))
                                      ((longlong)local_1e0.NextResult + -0x10);
                          }
                          if (local_1e0.ErrorContext.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1e0.ErrorContext.Data.AllocatorInstance.Data);
                          }
                        }
                        else if (plVar2 != (longlong *)0x0) {
                          (**(code **)(*plVar2 + 0xe08))(plVar2,FVar4.field0_0x0);
                        }
                      }
                    }
                  }
                  goto LAB_147a73164;
                }
              }
              if (2 < (byte)LogNet._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              }
            }
          }
        }
        else if (local_5e8 == 0x14) {
          plVar2 = (longlong *)param_1->_padding_;
          local_518.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_518.Data.ArrayNum = 0;
          local_518.Data.ArrayMax = 0;
          if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_5e5);
          }
          else {
            local_5e5 = *(undefined1 *)*plVar2;
            *plVar2 = *plVar2 + 1;
          }
          ::operator<<((FArchive *)param_1,&local_518);
          if ((param_1->_padding_ & 0x200) == 0) {
            pUVar6 = *(UNetDriver **)(this->_padding_ + 0x58);
            TVar7 = (pUVar6->World).field0_0x0;
            if (((TVar7.DebugPtr != (UWorld *)0x0) &&
                (this_01 = *(UGameInstance **)((longlong)TVar7 + 0x230),
                this_01 != (UGameInstance *)0x0)) ||
               ((pFVar20 = UEngine::GetWorldContextFromPendingNetGameNetDriver(GEngine,pUVar6),
                pFVar20 != (FWorldContext *)0x0 &&
                (this_01 = (pFVar20->OwningGameInstance).field0_0x0.DebugPtr,
                this_01 != (UGameInstance *)0x0)))) {
              lVar30 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if ((*(int *)(lVar30 + 0x9d4c) < ::_TSS0) &&
                 (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
                ::FName::FName(&LLMScope_Name1922,L"Networking/GameControlMessage");
                _Init_thread_footer(&::_TSS0);
              }
              FLLMScope::FLLMScope(&local_5c0,LLMScope_Name1922,false,None,Default,true);
              FMemScope::FMemScope(&local_398,&LLMScope_Name1922,true);
              if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                local_530 = 0;
                TVar21 = (TEventRef<unsigned_int>)&local_530;
              }
              else {
                local_3b0 = this_01->_padding_;
                TVar21 = FStringTrace::GetNameRef(&local_260);
              }
              uVar8 = *(undefined8 *)TVar21;
              if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                local_528 = 0;
                TVar21 = (TEventRef<unsigned_int>)&local_528;
              }
              else {
                local_3a8 = *(undefined8 *)(this_01->_padding_ + 0x18);
                TVar21 = FStringTrace::GetNameRef(&local_258);
              }
              uVar9 = *(undefined8 *)TVar21;
              if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
                local_520 = 0;
                TVar21 = (TEventRef<unsigned_int>)&local_520;
              }
              else {
                pUVar22 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this_01);
                local_3a0 = pUVar22->_padding_;
                TVar21 = FStringTrace::GetNameRef(&local_2a0);
              }
              uVar10 = *(undefined8 *)TVar21;
              bVar13 = false;
              if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
                UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>
                          ((TLogScope<0> *)&local_60);
                bVar13 = true;
                *local_60 = (int)uVar8;
                local_60[1] = (int)uVar9;
                local_60[2] = (int)uVar10;
                *(undefined8 *)(local_58 + 0x28) = *(undefined8 *)(local_58 + 0x20);
              }
              this = local_318;
              (**(code **)(this_01->_padding_ + 0x390))(this_01,local_318->_padding_);
              if (bVar13) {
                if (*(char *)(lVar30 + 0x9d48) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                pFVar23 = *(FWriteBuffer **)(lVar30 + 0x20);
                if ((int)pFVar23 - *(int *)&pFVar23->Cursor < 1) {
                  pFVar23 = UE::Trace::Private::Writer_NextBuffer();
                }
                *pFVar23->Cursor = '\n';
                pFVar23->Cursor = pFVar23->Cursor + 1;
                pFVar23->Committed = pFVar23->Cursor;
              }
              FMemScope::~FMemScope(&local_398);
              FLLMScope::~FLLMScope(&local_5c0);
              param_1 = local_390;
              uVar15 = local_5bc;
            }
          }
          if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_518.Data.AllocatorInstance.Data);
          }
        }
        else if (local_5e8 == 0x13) {
          local_570.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_570.Data.ArrayNum = 0;
          local_570.Data.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_570);
          if ((param_1->_padding_ & 0x200) == 0) {
            if (2 < (byte)LogSecurity._0_1_) {
              (**(code **)(*(longlong *)this->_padding_ + 0x390))
                        ((longlong *)this->_padding_,local_278);
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSecurity);
              if (local_278[0] != (void *)0x0) {
                FMemory::Free(local_278[0]);
              }
            }
            local_5e6 = 1;
          }
          if (local_570.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_570.Data.AllocatorInstance.Data);
          }
        }
        else if (local_5e8 == 0x16) {
          cVar14 = (**(code **)(**(longlong **)(this->_padding_ + 0x58) + 0x3f8))();
          if (cVar14 == '\0') {
            ReceiveDestructionInfo(this,param_1);
          }
          else {
            if (2 < (byte)LogNet._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            }
            pUVar5 = (UNetConnection *)this->_padding_;
            pUVar24 = StaticEnum<enum_ENetCloseResult>();
            local_400.Result = 0x4b;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UEnum *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar24);
            }
            local_400.ResultEnumObj.WeakPtr.ObjectIndex = 0;
            local_400.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
            local_388 = pUVar24;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UEnum *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar24);
            }
            FWeakObjectPtr::operator=(&local_400.ResultEnumObj.WeakPtr,(FObjectPtr)&local_388);
            local_400.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_400.ErrorContext.Data.ArrayNum = 0;
            local_400.ErrorContext.Data.ArrayMax = 0;
            local_400.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
            local_400.RawResultEnumObj = pUVar24;
            pwVar25 = ::LexToString(ClientSentDestructionInfo);
            ::FString::operator=(&local_400.ErrorContext,pwVar25);
            UNetConnection::Close(pUVar5,&local_400);
            if (local_400.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
              (**(code **)((longlong)local_400.NextResult + -0x10))
                        ((longlong)local_400.NextResult + -0x10);
            }
            if (local_400.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_400.ErrorContext.Data.AllocatorInstance.Data);
            }
          }
        }
        else if (local_5e8 == 0x17) {
          local_560.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_560.Data.ArrayNum = 0;
          local_560.Data.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_560);
          if (((param_1->_padding_ & 0x200) == 0) && (1 < local_560.Data.ArrayNum)) {
            UNetConnection::HandleReceiveCloseReason((UNetConnection *)this->_padding_,&local_560);
          }
          if (local_560.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_560.Data.AllocatorInstance.Data);
          }
        }
        else if (local_5e8 == 0x18) {
          plVar2 = (longlong *)param_1->_padding_;
          local_550.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_550.Data.ArrayNum = 0;
          local_550.Data.ArrayMax = 0;
          if ((ENetPingControlMessage *)plVar2[1] < (ENetPingControlMessage *)*plVar2 + 1) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,&local_5e7);
          }
          else {
            local_5e7 = *(ENetPingControlMessage *)*plVar2;
            *plVar2 = *plVar2 + 1;
          }
          ::operator<<((FArchive *)param_1,&local_550);
          if (((param_1->_padding_ & 0x200) == 0) && (local_5e7 < 2)) {
            local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            TArray<wchar_t,TSizedDefaultAllocator<32>_>::CopyToEmpty<wchar_t,int>
                      (&local_2c0,(wchar_t *)local_550.Data.AllocatorInstance.Data,
                       local_550.Data.ArrayNum,0);
            UE::Net::FNetPing::HandleNetPingControlMessage
                      ((UNetConnection *)this->_padding_,local_5e7,(FString *)&local_2c0);
          }
          if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_550.Data.AllocatorInstance.Data);
          }
        }
        else if (local_5e8 == 0x1d) {
          local_4e0 = 0;
          ::operator<<((FArchive *)param_1,&local_4e0);
          if ((param_1->_padding_ & 0x200) == 0) {
            pUVar11 = *(UReplicationSystem **)(*(longlong *)(this->_padding_ + 0x58) + 0x9b0);
            if (pUVar11 != (UReplicationSystem *)0x0) {
              UReplicationSystem::ReportProtocolMismatch
                        (pUVar11,local_4e0,*(uint *)(this->_padding_ + 0x1eb4));
            }
          }
        }
        else if (local_5e8 == 0x1e) {
          local_5c8 = None;
          local_540 = 0;
          local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_508.ArrayNum = 0;
          local_508.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_5c8);
          ::operator<<((FArchive *)param_1,&local_540);
          TArrayPrivateFriend::Serialize<unsigned___int64,TSizedDefaultAllocator<32>_>
                    ((FArchive *)param_1,&local_508);
          if ((param_1->_padding_ & 0x200) == 0) {
            pUVar11 = *(UReplicationSystem **)(*(longlong *)(this->_padding_ + 0x58) + 0x9b0);
            if (pUVar11 != (UReplicationSystem *)0x0) {
              UReplicationSystem::ReportErrorWithNetRefHandle
                        (pUVar11,local_5c8,local_540,*(uint *)(this->_padding_ + 0x1eb4),&local_508)
              ;
            }
          }
          if (local_508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_508.AllocatorInstance.Data);
          }
        }
        else {
          plVar2 = *(longlong **)(*(longlong *)(this->_padding_ + 0x58) + 0x318);
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x18))();
          }
        }
LAB_147a73164:
        if (((longlong)(int)uVar15 != param_1->_padding_) || ((param_1->_padding_ & 0x200) != 0))
        goto switchD_147a7319d_caseD_9;
        switch(local_5e8) {
        case 0:
          local_420[0] = 0;
          local_420._4_4_ = 0;
          local_418 = (void *)0x0;
          uStack_410 = 0;
          local_408 = 0;
          local_340 = param_1;
          UE::Core::Private::Tuple::
          TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2,3>_>::
          Do<_UE::Net::TNetControlMessageImpl<0,unsigned_char,unsigned_int,FString,enum_EEngineNetworkRuntimeFeatures>::Discard_::__l2::<lambda_1>,TTuple<unsigned_char,unsigned_int,FString,enum_EEngineNetworkRuntimeFeatures>_&>
                    ((<lambda_1> *)&local_340,
                     (TTuple<unsigned_char,unsigned_int,FString,EEngineNetworkRuntimeFeatures> *)
                     local_420);
          if (local_418 != (void *)0x0) {
            FMemory::Free(local_418);
          }
          break;
        case 1:
          local_4d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4c8.Data.ArrayNum = 0;
          local_4c8.Data.ArrayMax = 0;
          local_4b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4b8.Data.ArrayNum = 0;
          local_4b8.Data.ArrayMax = 0;
          local_4d8.Data.ArrayNum = 0;
          local_4d8.Data.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_4d8);
          ::operator<<((FArchive *)param_1,&local_4c8);
          ::operator<<((FArchive *)param_1,&local_4b8);
          if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
          }
          if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
          }
          if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
          }
          break;
        case 2:
          local_538._0_4_ = 0;
          local_538._4_2_ = 0;
          local_338 = param_1;
          UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1>_>::
          Do<_UE::Net::TNetControlMessageImpl<2,unsigned_int,enum_EEngineNetworkRuntimeFeatures>::Discard_::__l2::<lambda_1>,TTuple<unsigned_int,enum_EEngineNetworkRuntimeFeatures>_&>
                    ((<lambda_1> *)&local_338,&local_538);
          break;
        case 3:
          local_430.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_430.Data.ArrayNum = 0;
          local_430.Data.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_430);
          if (local_430.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_430.Data.AllocatorInstance.Data);
          }
          break;
        case 4:
          local_5d0[0] = 0;
          plVar2 = (longlong *)param_1->_padding_;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            puVar32 = local_5d0;
            if ((param_1->_padding_ & 0x10000) != 0) goto LAB_147a7331d;
LAB_147a739dd:
            (**(code **)(param_1->_padding_ + 0x188))();
          }
          else {
            local_5d0[0] = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
          break;
        case 5:
          local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_170.Data.ArrayNum = 0;
          local_170.Data.ArrayMax = 0;
          local_130.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.Data.ArrayNum = 0;
          local_130.Data.ArrayMax = 0;
          local_180.Data.ArrayNum = 0;
          local_180.Data.ArrayMax = 0;
          local_160._padding_ = 0;
          local_160._padding_ = 0;
          local_160._padding_._0_1_ = 0;
          local_160._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
          local_160.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.ReplicationBytes.ArrayNum = 0;
          local_160.ReplicationBytes.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_180);
          ::operator<<((FArchive *)param_1,&local_170);
          ::operator<<((FArchive *)param_1,&local_160);
          ::operator<<((FArchive *)param_1,&local_130);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_160);
          if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.Data.AllocatorInstance.Data);
          }
          if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_180.Data.AllocatorInstance.Data);
          }
          break;
        case 6:
          local_450.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_450.Data.ArrayNum = 0;
          local_450.Data.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_450);
          if (local_450.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_450.Data.AllocatorInstance.Data);
          }
          break;
        default:
          if (FNetControlMessageInfo::bInitialized == false) {
            lVar30 = 0x20;
            ppwVar18 = FNetControlMessageInfo::Names;
            do {
              *ppwVar18 = L"";
              ppwVar18[1] = L"";
              ppwVar18[2] = L"";
              ppwVar18[3] = L"";
              ppwVar18[4] = L"";
              ppwVar18[5] = L"";
              ppwVar18[6] = L"";
              ppwVar18[7] = L"";
              lVar30 = lVar30 + -1;
              ppwVar18 = ppwVar18 + 8;
            } while (lVar30 != 0);
            FNetControlMessageInfo::bInitialized = true;
          }
          if ((*FNetControlMessageInfo::Names[local_5e8] != L'\0') &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!FNetControlMessageInfo::IsRegistered(MessageType)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                                  ,0x838,L""), bVar13)) {
            pcVar27 = (code *)swi(3);
            (*pcVar27)();
            return;
          }
          if (4 < (byte)LogNet._0_1_) {
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          pUVar5 = (UNetConnection *)this->_padding_;
          UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                    (&local_1b0,ControlChannelMessageUnknown);
          UNetConnection::Close(pUVar5,&local_1b0);
          if (local_1b0.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
            (**(code **)((longlong)local_1b0.NextResult + -0x10))
                      ((longlong)local_1b0.NextResult + -0x10);
          }
          if (local_1b0.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_1b0.ErrorContext.Data.AllocatorInstance.Data);
          }
          if (local_5dc != 0xffffffff) {
            FNetTrace::EndPacketContentEvent(local_5a8,local_5dc,(uint)param_1->_padding_);
          }
          goto LAB_147a73d2b;
        case 10:
          local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_120.Data.ArrayNum = 0;
          local_120.Data.ArrayMax = 0;
          local_110._padding_._0_1_ = 0;
          local_110._padding_ = 0;
          local_110._padding_ = 0;
          local_110._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
          local_110.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_110.ReplicationBytes.ArrayNum = 0;
          local_110.ReplicationBytes.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_120);
          ::operator<<((FArchive *)param_1,&local_110);
          FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_110);
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
          break;
        case 0xc:
          local_440.A = 0;
          local_440.B = 0;
          local_440.C = 0;
          local_440.D = 0;
          ::operator<<((FArchive *)param_1,&local_440);
          break;
        case 0xd:
          local_490.A = 0;
          local_490.B = 0;
          local_490.C = 0;
          local_490.D = 0;
          ::operator<<((FArchive *)param_1,&local_490);
          break;
        case 0xf:
          local_5b8[0] = 0;
          ::operator<<((FArchive *)param_1,local_5b8);
          break;
        case 0x10:
          local_5b8[1] = 0;
          ::operator<<((FArchive *)param_1,local_5b8 + 1);
          break;
        case 0x11:
          local_480.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_480.Data.ArrayNum = 0;
          local_480.Data.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_480);
          if (local_480.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_480.Data.AllocatorInstance.Data);
          }
          break;
        case 0x12:
          local_4a8 = 0;
          local_4a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4a0.Data.ArrayNum = 0;
          local_4a0.Data.ArrayMax = 0;
          (**(code **)(param_1->_padding_ + 0x1a8))(param_1,&local_4a8);
          ::operator<<((FArchive *)param_1,&local_4a0);
          if (local_4a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4a0.Data.AllocatorInstance.Data);
          }
          break;
        case 0x17:
          local_470.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_470.Data.ArrayNum = 0;
          local_470.Data.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_470);
          if (local_470.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_470.Data.AllocatorInstance.Data);
          }
          break;
        case 0x18:
          local_4f8[0] = 0;
          local_4f0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_4f0.Data.ArrayNum = 0;
          local_4f0.Data.ArrayMax = 0;
          plVar2 = (longlong *)param_1->_padding_;
          if ((undefined1 *)plVar2[1] < (undefined1 *)*plVar2 + 1) {
            (**(code **)(param_1->_padding_ + 0x188))(param_1,local_4f8);
          }
          else {
            local_4f8[0] = *(undefined1 *)*plVar2;
            *plVar2 = *plVar2 + 1;
          }
          ::operator<<((FArchive *)param_1,&local_4f0);
          if (local_4f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_4f0.Data.AllocatorInstance.Data);
          }
          break;
        case 0x1a:
          local_e0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e0.Data.ArrayNum = 0;
          local_e0.Data.ArrayMax = 0;
          local_d0._padding_._0_1_ = 0;
          local_d0._padding_ = 0;
          local_d0._padding_ = 0;
          local_d0._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
          local_d0.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d0.ReplicationBytes.ArrayNum = 0;
          local_d0.ReplicationBytes.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_e0);
          ::operator<<((FArchive *)param_1,&local_d0);
          FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_d0);
          if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e0.Data.AllocatorInstance.Data);
          }
          break;
        case 0x1b:
          local_50.Variant._padding_ = 0;
          local_50.Variant.TypeIndex = '\0';
          local_50.Variant._9_7_ = 0;
          UE::Net::operator<<((FArchive *)param_1,&local_50);
        case 9:
        case 0x15:
        case 0x19:
        case 0x1f:
switchD_147a7319d_caseD_9:
          break;
        case 0x1c:
          local_460.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_460.Data.ArrayNum = 0;
          local_460.Data.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_460);
          if (local_460.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_460.Data.AllocatorInstance.Data);
          }
          break;
        case 0x1d:
          local_5b0 = 0;
          plVar2 = (longlong *)param_1->_padding_;
          if ((ulong64 *)plVar2[1] < (ulong64 *)*plVar2 + 1) {
            if ((param_1->_padding_ & 0x10000) == 0) {
              (**(code **)(param_1->_padding_ + 0x188))();
            }
            else {
              FArchive::SerializeByteOrderSwapped((FArchive *)param_1,&local_5b0);
            }
          }
          else {
            local_5b0 = *(ulong64 *)*plVar2;
            *plVar2 = *plVar2 + 8;
          }
          break;
        case 0x1e:
          local_2e0._0_4_ = 0;
          local_2c8 = 0;
          local_2e0._8_8_ = 0;
          pvStack_2d0 = (void *)0x0;
          local_330 = param_1;
          UE::Core::Private::Tuple::TVisitTupleElements_Impl<TIntegerSequence<unsigned_int,0,1,2>_>
          ::
          Do<_UE::Net::TNetControlMessageImpl<30,enum_UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>::Discard_::__l2::<lambda_1>,TTuple<enum_UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>_&>
                    ((<lambda_1> *)&local_330,
                     (TTuple<UE::Net::ENetRefHandleError,unsigned___int64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                      *)local_2e0);
          if (pvStack_2d0 != (void *)0x0) {
            FMemory::Free(pvStack_2d0);
          }
          break;
        case 0x20:
          local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.Data.ArrayNum = 0;
          local_a0.Data.ArrayMax = 0;
          local_90._padding_._0_1_ = 0;
          local_90._padding_ = 0;
          local_90._padding_ = 0;
          local_90._padding_ = (longlong)&___7FUniqueNetIdRepl__6B_;
          local_90.ReplicationBytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.ReplicationBytes.ArrayNum = 0;
          local_90.ReplicationBytes.ArrayMax = 0;
          ::operator<<((FArchive *)param_1,&local_a0);
          ::operator<<((FArchive *)param_1,&local_90);
          FUniqueNetIdRepl::~FUniqueNetIdRepl(&local_90);
          if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.Data.AllocatorInstance.Data);
          }
          break;
        case 0x22:
          local_5d4 = 0;
          plVar2 = (longlong *)param_1->_padding_;
          if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
            puVar32 = &local_5d4;
            if ((param_1->_padding_ & 0x10000) == 0) goto LAB_147a739dd;
LAB_147a7331d:
            FArchive::SerializeByteOrderSwapped((FArchive *)param_1,puVar32);
          }
          else {
            local_5d4 = *(uint *)*plVar2;
            *plVar2 = *plVar2 + 4;
          }
        }
        puVar28 = (undefined8 *)0x0;
        if ((param_1->_padding_ & 0x200) != 0) {
          if (1 < (byte)LogNet._0_1_) {
            if (FNetControlMessageInfo::bInitialized == false) {
              lVar30 = 0x20;
              ppwVar18 = FNetControlMessageInfo::Names;
              do {
                *ppwVar18 = L"";
                ppwVar18[1] = L"";
                ppwVar18[2] = L"";
                ppwVar18[3] = L"";
                ppwVar18[4] = L"";
                ppwVar18[5] = L"";
                ppwVar18[6] = L"";
                ppwVar18[7] = L"";
                lVar30 = lVar30 + -1;
                ppwVar18 = ppwVar18 + 8;
              } while (lVar30 != 0);
              FNetControlMessageInfo::bInitialized = true;
            }
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          pUVar24 = StaticEnum<enum_ENetCloseResult>();
          local_5a0.Result = 0x47;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UEnum *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar24);
          }
          local_5a0.ResultEnumObj.WeakPtr.ObjectIndex = 0;
          local_5a0.ResultEnumObj.WeakPtr.ObjectSerialNumber = 0;
          local_328 = pUVar24;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar24 != (UEnum *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar24);
          }
          FWeakObjectPtr::operator=(&local_5a0.ResultEnumObj.WeakPtr,(FObjectPtr)&local_328);
          local_5a0.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_5a0.ErrorContext.Data.ArrayNum = 0;
          local_5a0.ErrorContext.Data.ArrayMax = 0;
          local_5a0.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
          local_5a0.RawResultEnumObj = pUVar24;
          pwVar25 = ::LexToString(ControlChannelMessagePayloadFail);
          ::FString::operator=(&local_5a0.ErrorContext,pwVar25);
          plVar2 = &param_1->_padding_;
          if ((FNetResult *)*plVar2 == (FNetResult *)0x0) {
            puVar26 = ::operator_new(0x40);
            if (puVar26 != (undefined8 *)0x0) {
              *puVar26 = UE::Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>;
              puVar26[1] = UE::Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>;
              puVar26[2] = local_5a0.Result;
              *(FWeakObjectPtr *)(puVar26 + 3) = local_5a0.ResultEnumObj.WeakPtr;
              puVar26[4] = local_5a0.RawResultEnumObj;
              puVar26[5] = local_5a0.ErrorContext.Data.AllocatorInstance.Data;
              local_5a0.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(puVar26 + 6) = local_5a0.ErrorContext.Data.ArrayNum;
              *(int *)((longlong)puVar26 + 0x34) = local_5a0.ErrorContext.Data.ArrayMax;
              local_5a0.ErrorContext.Data.ArrayNum = 0;
              local_5a0.ErrorContext.Data.ArrayMax = 0;
              *(TPimplPtr<UE::Net::FNetResult,1> *)(puVar26 + 7) = local_5a0.NextResult;
              local_5a0.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
              puVar28 = puVar26;
            }
            if (&local_268 == plVar2) {
              if (puVar28 + 2 != (undefined8 *)0x0) {
                pcVar27 = (code *)*puVar28;
                goto LAB_147a73a92;
              }
            }
            else {
              lVar30 = *plVar2;
              *plVar2 = (longlong)(puVar28 + 2);
              if (lVar30 != 0) {
                pcVar27 = *(code **)(lVar30 + -0x10);
                puVar28 = (undefined8 *)(lVar30 + -0x10);
LAB_147a73a92:
                (*pcVar27)(puVar28);
              }
            }
          }
          else {
            UE::Net::FNetResult::AddChainResult((FNetResult *)*plVar2,&local_5a0);
          }
          if (local_5a0.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
            (**(code **)((longlong)local_5a0.NextResult + -0x10))
                      ((longlong)local_5a0.NextResult + -0x10);
          }
          if (local_5a0.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          {
            FMemory::Free(local_5a0.ErrorContext.Data.AllocatorInstance.Data);
          }
          local_5e6 = 1;
        }
        bVar34 = local_5e6;
        if (local_5dc != 0xffffffff) {
          FNetTrace::EndPacketContentEvent(local_5a8,local_5dc,(uint)param_1->_padding_);
        }
        cVar14 = (**(code **)(param_1->_padding_ + 0x38))(param_1);
        if (cVar14 != '\0') break;
        pFVar37 = (FNetTraceCollector *)(ulonglong)local_5e4;
      }
    }
    if ((param_1->_padding_ & 0x200) == 0) goto LAB_147a73d2b;
LAB_147a73c12:
    if (1 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    pUVar5 = (UNetConnection *)this->_padding_;
    if (pUVar5 == (UNetConnection *)0x0) goto LAB_147a73d2b;
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (&local_240,ControlChannelMessageFail);
    pFVar12 = (FNetResult *)param_1->_padding_;
    pFVar33 = &local_240;
    if (pFVar12 != (FNetResult *)0x0) {
      pFVar33 = pFVar12;
    }
    local_310.Result = pFVar33->Result;
    local_310.ResultEnumObj.WeakPtr = (pFVar33->ResultEnumObj).WeakPtr;
    local_310.RawResultEnumObj = pFVar33->RawResultEnumObj;
    local_310.ErrorContext.Data.AllocatorInstance.Data =
         (pFVar33->ErrorContext).Data.AllocatorInstance.Data;
    (pFVar33->ErrorContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_310.ErrorContext.Data.ArrayNum = (pFVar33->ErrorContext).Data.ArrayNum;
    local_310.ErrorContext.Data.ArrayMax = (pFVar33->ErrorContext).Data.ArrayMax;
    (pFVar33->ErrorContext).Data.ArrayNum = 0;
    (pFVar33->ErrorContext).Data.ArrayMax = 0;
    local_310.NextResult = pFVar33->NextResult;
    pFVar33->NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    if (pFVar12 != (FNetResult *)0x0) {
      UE::Net::FNetResult::AddChainResult(&local_310,&local_240);
    }
    UNetConnection::Close(pUVar5,&local_310);
    if (local_310.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_310.NextResult + -0x10))((longlong)local_310.NextResult + -0x10);
    }
    if (local_310.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_310.ErrorContext.Data.AllocatorInstance.Data);
    }
    if (local_240.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_240.NextResult + -0x10))((longlong)local_240.NextResult + -0x10);
    }
  }
  else {
    if ((0xf < (longlong)(param_1->_padding_ + 7U & 0xfffffffffffffff8)) &&
       (*(char *)param_1->_padding_ == '\0')) {
      cVar14 = ((char *)param_1->_padding_)[1];
      if ((4 < (byte)LogNet._0_1_) &&
         (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet),
         4 < (byte)LogNet._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      bVar34 = *(byte *)((longlong)&param_1->_padding_ + 2);
      if (cVar14 == '\x01') {
        *(byte *)((longlong)&param_1->_padding_ + 2) = bVar34 & 0xfe;
        *(undefined1 *)(this->_padding_ + 0x1b0) = 0;
      }
      else {
        *(byte *)((longlong)&param_1->_padding_ + 2) = bVar34 | 1;
        *(undefined1 *)(this->_padding_ + 0x1b0) = 1;
      }
      this->bNeedsEndianInspection = false;
      goto LAB_147a72389;
    }
    if (2 < (byte)LogNet._0_1_) {
      lVar30 = *(longlong *)(this->_padding_ + 0x98);
      if (lVar30 != 0) {
        local_3d0 = *(FName *)(lVar30 + 0x18);
        ::FName::ToString(&local_3d0,&local_370);
        pFVar37 = (FNetTraceCollector *)&DAT_00000001;
      }
      lVar30 = *(longlong *)(this->_padding_ + 0x30);
      if (lVar30 != 0) {
        local_3c8 = *(FName *)(lVar30 + 0x18);
        pFVar37 = (FNetTraceCollector *)(ulonglong)((uint)pFVar37 | 2);
        ::FName::ToString(&local_3c8,&local_380);
      }
      lVar30 = *(longlong *)(this->_padding_ + 0x58);
      if (lVar30 != 0) {
        pFVar37 = (FNetTraceCollector *)(ulonglong)((uint)pFVar37 | 4);
        ::FName::ToString((FName *)(lVar30 + 0x218),&local_2b0);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if ((((ulonglong)pFVar37 & 4) != 0) &&
         (pFVar37 = (FNetTraceCollector *)(ulonglong)((uint)pFVar37 & 0xfffffffb),
         local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pFVar37 & 2) != 0) &&
         (pFVar37 = (FNetTraceCollector *)(ulonglong)((uint)pFVar37 & 0xfffffffd),
         local_380.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_380.Data.AllocatorInstance.Data);
      }
      if ((((ulonglong)pFVar37 & 1) != 0) &&
         (local_370.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_370.Data.AllocatorInstance.Data);
      }
    }
    pUVar5 = (UNetConnection *)this->_padding_;
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (&local_210,ControlChannelEndianCheck);
    UNetConnection::Close(pUVar5,&local_210);
    local_240.ErrorContext.Data.AllocatorInstance.Data =
         local_210.ErrorContext.Data.AllocatorInstance.Data;
    if (local_210.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_210.NextResult + -0x10))((longlong)local_210.NextResult + -0x10);
      local_240.ErrorContext.Data.AllocatorInstance.Data =
           local_210.ErrorContext.Data.AllocatorInstance.Data;
    }
  }
  if (local_240.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.ErrorContext.Data.AllocatorInstance.Data);
  }
LAB_147a73d2b:
  if (local_5c4 != 0xffffffff) {
    FNetTrace::EndPacketContentEvent(local_320,local_5c4,(uint)param_1->_padding_);
  }
  return;
}

// SendBunch @ 147a86a70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPacketIdRange __thiscall
UControlChannel::SendBunch(UControlChannel *this,FOutBunch *param_1,bool param_2)

{
  UNetConnection *this_00;
  undefined7 in_register_00000081;
  undefined1 local_res8 [8];
  FNetResult local_38;
  
  if (((this->QueuedMessages).ArrayNum < 1) &&
     (*(int *)((longlong)&this->_padding_ + 4) <
      (int)((*(byte *)(CONCAT71(in_register_00000081,param_2) + 0xfc) >> 2 & 1) + 0x1ff))) {
    if ((*(byte *)(CONCAT71(in_register_00000081,param_2) + 0x29) & 2) == 0) {
      UChannel::SendBunch((UChannel *)this,param_1,param_2);
      return (FPacketIdRange)param_1;
    }
    if (1 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    `UControlChannel::SendBunch'::__l12::<lambda_1>::operator()(local_res8);
    this_00 = (UNetConnection *)this->_padding_;
    UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
              (&local_38,ControlChannelBunchOverflowed);
    UNetConnection::Close(this_00,&local_38);
    if (local_38.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_38.NextResult + -0x10))((longlong)local_38.NextResult + -0x10);
    }
    if (local_38.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.ErrorContext.Data.AllocatorInstance.Data);
    }
  }
  else {
    QueueMessage(this,(FOutBunch *)CONCAT71(in_register_00000081,param_2));
  }
  param_1->_padding_ = -1;
  return (FPacketIdRange)param_1;
}

// SendDestructionInfo @ 147a86fd0

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

long64 __thiscall
UControlChannel::SendDestructionInfo(UControlChannel *this,FActorDestructionInfo *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  EConnectionState EVar5;
  undefined8 *puVar6;
  long64 lVar7;
  UObject *pUVar8;
  FString *pFVar9;
  undefined1 auStack_228 [32];
  FString *local_208;
  undefined1 local_1f8;
  EChannelCloseReason local_1f7 [7];
  FString local_1f0;
  FString local_1e0;
  undefined1 local_1d0 [8];
  void *local_1c8 [2];
  void *local_1b8 [2];
  FString local_1a8;
  FOutBunch local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_228;
  if ((this->_padding_ == 0) || (*(longlong *)(this->_padding_ + 0x68) == 0)) {
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x2d0))(this,local_1c8);
    if (*(int *)(puVar6 + 1) == 0) {
      local_208 = (FString *)0x15060d16c;
    }
    else {
      local_208 = (FString *)*puVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Connection && Connection->PackageMap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x8d5,L"SendDestructionInfo requires a valid connection and package map: %s"
                      );
    if (local_1c8[0] != (void *)0x0) {
      FMemory::Free(local_1c8[0]);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
  }
  if (param_1 == (FActorDestructionInfo *)0x0) {
    puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x2d0))(this,local_1b8);
    if (*(int *)(puVar6 + 1) == 0) {
      local_208 = (FString *)0x15060d16c;
    }
    else {
      local_208 = (FString *)*puVar6;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestructionInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                       ,0x8d6,L"SendDestructionInfo was passed an invalid desctruction info: %s");
    if (local_1b8[0] != (void *)0x0) {
      FMemory::Free(local_1b8[0]);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      lVar7 = (*pcVar2)();
      return lVar7;
    }
  }
  if (((this->_padding_ & 2) == 0) &&
     ((EVar5 = UNetConnection::GetConnectionState((UNetConnection *)this->_padding_),
      EVar5 == USOCK_Open ||
      (EVar5 = UNetConnection::GetConnectionState((UNetConnection *)this->_padding_),
      EVar5 == USOCK_Pending)))) {
    pUVar8 = FWeakObjectPtr::Get(&(param_1->ObjOuter).WeakPtr);
    pFVar9 = (FString *)0x0;
    if (pUVar8 != (UObject *)0x0) {
      FOutBunch::FOutBunch(&local_198,*(UPackageMap **)(this->_padding_ + 0x68),0);
      if (((local_198._padding_._1_1_ & 2) != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InfoBunch.IsError()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                             ,0x8df,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        lVar7 = (*pcVar2)();
        return lVar7;
      }
      local_198.bReliable = '\x01';
      local_1f8 = 0x16;
      if (*(undefined1 **)(local_198._padding_ + 8) < *(undefined1 **)local_198._padding_ + 1) {
        (**(code **)(local_198._padding_ + 0x188))(&local_198,&local_1f8,1);
      }
      else {
        local_1f8 = **(undefined1 **)local_198._padding_;
        *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 1;
      }
      local_1f7[0] = param_1->Reason;
      if (*(EChannelCloseReason **)(local_198._padding_ + 8) <
          *(EChannelCloseReason **)local_198._padding_ + 1) {
        (**(code **)(local_198._padding_ + 0x188))(&local_198,local_1f7,1);
      }
      else {
        local_1f7[0] = **(EChannelCloseReason **)local_198._padding_;
        *(longlong *)local_198._padding_ = *(longlong *)local_198._padding_ + 1;
      }
      plVar1 = *(longlong **)(this->_padding_ + 0x68);
      pcVar2 = *(code **)(*plVar1 + 0x2b0);
      local_208 = ::FString::FString(&local_1a8,&param_1->PathName);
      (*pcVar2)(plVar1,&local_198,pUVar8,(param_1->NetGUID).field0_0x0.ObjectId);
      lVar3 = local_198._padding_;
      if (4 < (byte)LogNetTraffic._0_1_) {
        ::FString::PrintfImpl(&local_1f0,L"%llu");
        local_208 = (FString *)lVar3;
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
        if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        }
      }
      lVar3 = local_198._padding_;
      if (5 < (byte)LogNetDormancy._0_1_) {
        ::FString::PrintfImpl(&local_1e0,L"%llu");
        local_208 = (FString *)lVar3;
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogNetDormancy);
        if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
        }
      }
      (**(code **)(this->_padding_ + 0x318))(this,local_1d0,&local_198,0);
      local_198._padding_ = (longlong)&___7FOutBunch__6B_;
      FNetTrace::DestroyTraceCollector((FNetTraceCollector *)local_198._padding_);
      if (local_198.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.DebugString.Data.AllocatorInstance.Data);
      }
      if (local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData);
      }
      if (local_198.NetFieldExports.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.NetFieldExports.AllocatorInstance.Data);
      }
      if (local_198.ExportNetGUIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.ExportNetGUIDs.AllocatorInstance.Data);
      }
      FBitWriter::~FBitWriter((FBitWriter *)&local_198);
      pFVar9 = (FString *)local_198._padding_;
    }
  }
  else {
    pFVar9 = (FString *)0x0;
  }
  return (long64)pFVar9;
}

// Tick @ 147a98760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UControlChannel::Tick(UControlChannel *this)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  FOutBunch *pFVar4;
  FQueuedControlMessage *_Dst;
  UNetConnection *this_00;
  code *pcVar5;
  double dVar6;
  int iVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  FOutBunch *pFVar11;
  undefined1 auStackY_218 [32];
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [36];
  void *local_1b0;
  longlong local_1a0;
  FOutBunch local_198;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (((this->_padding_ & 0x80) != 0) &&
     (cVar8 = (**(code **)(this->_padding_ + 800))(this,0), cVar8 != '\0')) {
    (**(code **)(this->_padding_ + 0x340))(this);
  }
  dVar6 = __real_3ff0000000000000;
  if ((this->_padding_ & 1) == 0) {
    pFVar4 = (FOutBunch *)this->_padding_;
    iVar10 = 0;
    pFVar11 = pFVar4;
    if (pFVar4 != (FOutBunch *)0x0) {
      do {
        pFVar11 = pFVar11->Next;
        iVar7 = iVar10 + 1;
        if (pFVar11->ReceivedAck != 0) {
          iVar7 = iVar10;
        }
        iVar10 = iVar7;
      } while (pFVar11 != (FOutBunch *)0x0);
      if (iVar10 < 9) {
        for (; pFVar4 != (FOutBunch *)0x0; pFVar4 = pFVar4->Next) {
          if ((pFVar4->ReceivedAck == 0) &&
             (dVar6 < *(double *)(*(longlong *)(this->_padding_ + 0x58) + 800) - pFVar4->Time)) {
            if (4 < (byte)LogNetTraffic._0_1_) {
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetTraffic);
            }
            if ((pFVar4->bReliable == '\0') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Out->bReliable",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\DataChannel.cpp"
                                   ,0x8a3,L""), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            UNetConnection::SendRawBunch
                      ((UNetConnection *)this->_padding_,pFVar4,false,(FNetTraceCollector *)0x0);
          }
        }
      }
    }
  }
  else {
    iVar10 = (this->QueuedMessages).ArrayNum;
    while( true ) {
      if (iVar10 < 1) {
        return;
      }
      if ((this->_padding_ & 2) != 0) {
        return;
      }
      FOutBunch::FOutBunch(&local_198,(UChannel *)this,false);
      local_198.bReliable = '\x01';
      local_198._padding_ = (longlong)&___7FControlChannelOutBunch__6B_;
      if ((local_198._padding_._1_1_ & 2) != 0) break;
      if (((this->QueuedMessages).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar3 = *(uint *)((this->QueuedMessages).AllocatorInstance.Data + 0x10);
      if (((this->QueuedMessages).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FBitWriter::SerializeBits
                ((FBitWriter *)&local_198,*(void **)(this->QueuedMessages).AllocatorInstance.Data,
                 (ulonglong)uVar3);
      if ((local_198._padding_._1_1_ & 2) != 0) {
        `UControlChannel::Tick'::__l61::<lambda_1>::operator()(local_1d8);
        if (1 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        this_00 = (UNetConnection *)this->_padding_;
        UE::Net::TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>
                  (local_1d4 + 0xc,ControlChannelQueueBunchOverflowed);
        UNetConnection::Close(this_00,(FNetResult *)(local_1d4 + 0xc));
        if (local_1a0 != 0) {
          (**(code **)(local_1a0 + -0x10))(local_1a0 + -0x10);
        }
        if (local_1b0 != (void *)0x0) {
          FMemory::Free(local_1b0);
        }
        break;
      }
      UChannel::SendBunch((UChannel *)this,(FOutBunch *)local_1d4,SUB81(&local_198,0));
      if (((this->QueuedMessages).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      _Dst = (FQueuedControlMessage *)(this->QueuedMessages).AllocatorInstance.Data;
      DestructItems<FQueuedControlMessage,int>(_Dst,1);
      iVar10 = (this->QueuedMessages).ArrayNum + -1;
      if (iVar10 != 0) {
        memmove(_Dst,_Dst + 1,(longlong)iVar10 * 0x18);
      }
      piVar1 = &(this->QueuedMessages).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&(this->QueuedMessages).AllocatorInstance,(this->QueuedMessages).ArrayNum,
                 &(this->QueuedMessages).ArrayMax);
      local_198._padding_ = (longlong)&___7FOutBunch__6B_;
      FNetTrace::DestroyTraceCollector((FNetTraceCollector *)local_198._padding_);
      if (local_198.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.DebugString.Data.AllocatorInstance.Data);
      }
      if (local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::Net::FNetToken>)0x0) {
        FMemory::Free((void *)local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData);
      }
      if (local_198.NetFieldExports.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.NetFieldExports.AllocatorInstance.Data);
      }
      if (local_198.ExportNetGUIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.ExportNetGUIDs.AllocatorInstance.Data);
      }
      FBitWriter::~FBitWriter((FBitWriter *)&local_198);
      iVar10 = (this->QueuedMessages).ArrayNum;
    }
    local_198._padding_ = (longlong)&___7FOutBunch__6B_;
    FNetTrace::DestroyTraceCollector((FNetTraceCollector *)local_198._padding_);
    if (local_198.DebugString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.DebugString.Data.AllocatorInstance.Data);
    }
    if (local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::Net::FNetToken>)0x0) {
      FMemory::Free((void *)local_198.NetTokensPendingExport.AllocatorInstance.SecondaryData);
    }
    if (local_198.NetFieldExports.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.NetFieldExports.AllocatorInstance.Data);
    }
    if (local_198.ExportNetGUIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.ExportNetGUIDs.AllocatorInstance.Data);
    }
    FBitWriter::~FBitWriter((FBitWriter *)&local_198);
  }
  return;
}

// operator() @ 150517290

bool __thiscall `UControlChannel::Tick'::__l61::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790774591>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790774591>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150517380

bool __thiscall `UControlChannel::SendBunch'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1840253650790774658>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1840253650790774658>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

