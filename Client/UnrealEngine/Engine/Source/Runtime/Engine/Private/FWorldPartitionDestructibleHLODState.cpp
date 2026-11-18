// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 9

// StaticStruct @ 148a2b610

UScriptStruct * __cdecl FWorldPartitionDestructibleHLODState::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODState.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODState.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWorldPartitionDestructibleHLODState,
                         (UObject *)pUVar1,L"WorldPartitionDestructibleHLODState");
  }
  return Z_Registration_Info_UScriptStruct_FWorldPartitionDestructibleHLODState.OuterSingleton;
}

// <lambda_invoker_cdecl> @ 148a2bfa0

FReplicationFragment * __cdecl
`FWorldPartitionDestructibleHLODState::GetFastArrayCreateReplicationFragmentFunction'::__l2::
<lambda_1>::<lambda_invoker_cdecl>
          (UObject *param_1,FReplicationStateDescriptor *param_2,
          FFragmentRegistrationContext *param_3)

{
  FReplicationFragment *pFVar1;
  undefined1 local_res20 [8];
  
  pFVar1 = operator()(local_res20,param_1,param_2,param_3);
  return pFVar1;
}

// operator() @ 148a459d0

FReplicationFragment * __thiscall
`FWorldPartitionDestructibleHLODState::GetFastArrayCreateReplicationFragmentFunction'::__l2::
<lambda_1>::operator()
          (void *this,UObject *param_1,FReplicationStateDescriptor *param_2,
          FFragmentRegistrationContext *param_3)

{
  FFastArrayReplicationFragmentBase *pFVar1;
  EReplicationFragmentTraits EVar2;
  void *pvVar3;
  FFastArrayReplicationFragmentBase *this_00;
  FFastArraySerializer *pFVar4;
  FFastArraySerializer *this_01;
  
  this_00 = ::operator_new(0x38);
  if (this_00 == (FFastArrayReplicationFragmentBase *)0x0) {
    return (FReplicationFragment *)0x0;
  }
  EVar2 = param_3->FragmentTraits;
  UE::Net::Private::FFastArrayReplicationFragmentBase::FFastArrayReplicationFragmentBase
            (this_00,EVar2,param_1,param_2,true);
  this_01 = (FFastArraySerializer *)0x0;
  this_00->_padding_ =
       (longlong)
       &
       ___7__TFastArrayReplicationFragment_UFWorldPartitionDestructibleHLODDamagedActorState__UFWorldPartitionDestructibleHLODState___Net_UE__6B_
  ;
  pFVar1 = this_00 + 1;
  pFVar1->_padding_ = 0;
  if ((EVar2 & CanReceive) != None) {
    pFVar4 = ::operator_new(0x138);
    if (pFVar4 != (FFastArraySerializer *)0x0) {
      memset(pFVar4,0,0x138);
      FFastArraySerializer::FFastArraySerializer(pFVar4);
      *(undefined8 *)&pFVar4[1].ItemMap = 0;
      *(undefined8 *)&pFVar4[1].ItemMap.field_0x8 = 0;
      *(undefined8 *)&pFVar4[1].ItemMap.field_0x10 = 0;
      *(undefined8 *)&pFVar4[1].ItemMap.field_0x18 = 0;
      *(undefined8 *)&pFVar4[1].ItemMap.field_0x20 = 0;
      *(undefined2 *)&pFVar4[1].ItemMap.field_0x28 = 0;
      *(undefined4 *)&pFVar4[1].ItemMap.field_0x2c = 0;
      this_01 = pFVar4;
    }
    if (pFVar1 == (FFastArrayReplicationFragmentBase *)&stack0xffffffffffffffd8) {
      if (this_01 == (FFastArraySerializer *)0x0) goto LAB_148a45b1d;
      pvVar3 = *(void **)&this_01[1].ItemMap.field_0x18;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if (*(void **)&this_01[1].ItemMap != (void *)0x0) {
        FMemory::Free(*(void **)&this_01[1].ItemMap);
      }
      FFastArraySerializer::~FFastArraySerializer(this_01);
    }
    else {
      pFVar4 = (FFastArraySerializer *)pFVar1->_padding_;
      pFVar1->_padding_ = (longlong)this_01;
      if (pFVar4 == (FFastArraySerializer *)0x0) goto LAB_148a45b1d;
      pvVar3 = *(void **)&pFVar4[1].ItemMap.field_0x18;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      if (*(void **)&pFVar4[1].ItemMap != (void *)0x0) {
        FMemory::Free(*(void **)&pFVar4[1].ItemMap);
      }
      FFastArraySerializer::~FFastArraySerializer(pFVar4);
      this_01 = pFVar4;
    }
    ::operator_delete(this_01,0x138);
  }
LAB_148a45b1d:
  UE::Net::Private::FFastArrayReplicationFragmentBase::Register
            (this_00,param_3,DeleteWithInstanceProtocol);
  return (FReplicationFragment *)this_00;
}

// ApplyDamagedActorState @ 148a49da0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWorldPartitionDestructibleHLODState::ApplyDamagedActorState
          (FWorldPartitionDestructibleHLODState *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->DamagedActors).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->DamagedActors).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar1 = (this->DamagedActors).AllocatorInstance.Data;
    UWorldPartitionDestructibleHLODComponent::ApplyDamagedActorState
              ((this->OwnerComponent).field0_0x0.DebugPtr,
               *(int *)(pFVar1 + (longlong)param_1 * 0x14 + 0xc),
               (uchar)pFVar1[(longlong)param_1 * 0x14 + 0x10]);
    return;
  }
  if (1 < (byte)LogHLODDestruction._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHLODDestruction);
  }
  return;
}

// GetFastArrayCreateReplicationFragmentFunction @ 148a58920

_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
* __cdecl FWorldPartitionDestructibleHLODState::GetFastArrayCreateReplicationFragmentFunction(void)

{
  return `FWorldPartitionDestructibleHLODState::GetFastArrayCreateReplicationFragmentFunction'::__l2
         ::<lambda_1>::<lambda_invoker_cdecl>;
}

// Initialize @ 148a5bd20

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FWorldPartitionDestructibleHLODState::Initialize
          (FWorldPartitionDestructibleHLODState *this,
          UWorldPartitionDestructibleHLODComponent *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  ENetMode EVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_1 != (UWorldPartitionDestructibleHLODComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OwnerComponent).field0_0x0.DebugPtr = param_1;
  this->NumDestructibleActors = (param_1->DestructibleActors).ArrayNum;
  EVar6 = UActorComponent::InternalGetNetMode((UActorComponent *)param_1);
  this->bIsClient = EVar6 != NM_DedicatedServer;
  if (EVar6 - NM_DedicatedServer < 2) {
    uVar9 = this->NumDestructibleActors;
    this->bIsServer = true;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((this->DamagedActors).ArrayMax < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,uVar9,&(this->DamagedActors).AllocatorInstance,
                 (this->DamagedActors).ArrayNum,&(this->DamagedActors).ArrayMax);
    }
    uVar9 = this->NumDestructibleActors;
    pTVar2 = &this->ActorsToDamagedActorsMapping;
    iVar8 = (this->ActorsToDamagedActorsMapping).ArrayNum;
    piVar1 = &(this->ActorsToDamagedActorsMapping).ArrayNum;
    if (iVar8 < (int)uVar9) {
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,uVar9 - iVar8,&pTVar2->AllocatorInstance,piVar1,
                         &(this->ActorsToDamagedActorsMapping).ArrayMax);
      memset((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4,0,
             (longlong)(int)(uVar9 - iVar8) << 2);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < iVar8) {
        uVar11 = iVar8 - uVar9;
        if ((int)(uVar11 | uVar9) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar11 != 0) {
          pFVar3 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 4;
          iVar8 = (*piVar1 - uVar9) - uVar11;
          if (iVar8 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)(int)uVar11 * 4,(longlong)iVar8 << 2);
          }
          *piVar1 = *piVar1 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,&pTVar2->AllocatorInstance,*piVar1,
                     &(this->ActorsToDamagedActorsMapping).ArrayMax);
        }
      }
    }
    pFVar10 = (pTVar2->AllocatorInstance).Data;
    iVar8 = *piVar1;
    pFVar3 = pFVar10 + (longlong)iVar8 * 4;
    while( true ) {
      if (*piVar1 != iVar8) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar3) break;
      *(undefined4 *)pFVar10 = 0xffffffff;
      pFVar10 = pFVar10 + 4;
    }
  }
  else {
    this->bIsServer = false;
  }
  if ((this->bIsClient != false) && (iVar8 = (this->DamagedActors).ArrayNum, iVar8 != 0)) {
    uVar9 = 0;
    if (0 < iVar8) {
      lVar12 = 0;
      do {
        if (((int)uVar9 < 0) || (iVar8 <= (int)uVar9)) {
          if (1 < (byte)LogHLODDestruction._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHLODDestruction)
            ;
          }
        }
        else {
          uVar11 = 0;
          if ((int)uVar9 < (this->DamagedActors).ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if (uVar11 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          pFVar3 = (this->DamagedActors).AllocatorInstance.Data;
          UWorldPartitionDestructibleHLODComponent::ApplyDamagedActorState
                    ((this->OwnerComponent).field0_0x0.DebugPtr,*(int *)(pFVar3 + lVar12 + 0xc),
                     (uchar)pFVar3[lVar12 + 0x10]);
        }
        iVar8 = (this->DamagedActors).ArrayNum;
        uVar9 = uVar9 + 1;
        lVar12 = lVar12 + 0x14;
      } while ((int)uVar9 < iVar8);
    }
    UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture
              ((this->OwnerComponent).field0_0x0.DebugPtr);
  }
  return;
}

// PostReplicatedAdd @ 148a616e0

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
FWorldPartitionDestructibleHLODState::PostReplicatedAdd
          (FWorldPartitionDestructibleHLODState *this,TArrayView<int,int> *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  
  if ((this->bIsClient == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsClient()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                         ,0x78,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->OwnerComponent).field0_0x0.DebugPtr != (UWorldPartitionDestructibleHLODComponent *)0x0)
  {
    piVar4 = param_1->DataPtr;
    piVar1 = piVar4 + param_1->ArrayNum;
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      ApplyDamagedActorState(this,*piVar4);
    }
    UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture
              ((this->OwnerComponent).field0_0x0.DebugPtr);
  }
  return;
}

// PostReplicatedChange @ 148a61700

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

void __thiscall
FWorldPartitionDestructibleHLODState::PostReplicatedChange
          (FWorldPartitionDestructibleHLODState *this,TArrayView<int,int> *param_1,int param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int *piVar4;
  
  if ((this->bIsClient == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsClient()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                         ,0x78,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->OwnerComponent).field0_0x0.DebugPtr != (UWorldPartitionDestructibleHLODComponent *)0x0)
  {
    piVar4 = param_1->DataPtr;
    piVar1 = piVar4 + param_1->ArrayNum;
    for (; piVar4 != piVar1; piVar4 = piVar4 + 1) {
      ApplyDamagedActorState(this,*piVar4);
    }
    UWorldPartitionDestructibleHLODComponent::UpdateVisibilityTexture
              ((this->OwnerComponent).field0_0x0.DebugPtr);
  }
  return;
}

// SetActorHealth @ 148a67f00

/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FWorldPartitionDestructibleHLODState::SetActorHealth
          (FWorldPartitionDestructibleHLODState *this,int param_1,uchar param_2)

{
  int *piVar1;
  FFastArraySerializerItem *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  
  if ((param_1 < 0) || (this->NumDestructibleActors <= param_1)) {
    if (1 < (byte)LogHLODDestruction._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogHLODDestruction);
      return;
    }
  }
  else if (this->bIsServer != false) {
    bVar5 = false;
    uVar7 = 0;
    if (param_1 < (this->ActorsToDamagedActorsMapping).ArrayNum) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar7 = *(uint *)((this->ActorsToDamagedActorsMapping).AllocatorInstance.Data +
                     (longlong)param_1 * 4);
    if (uVar7 == 0xffffffff) {
      AActor::FlushNetDormancy
                (*(AActor **)&((this->OwnerComponent).field0_0x0.DebugPtr)->field_0xa8);
      uVar7 = (this->DamagedActors).ArrayNum;
      bVar5 = true;
      uVar8 = 0;
      if (param_1 < (this->ActorsToDamagedActorsMapping).ArrayNum) {
        uVar8 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      piVar1 = &(this->DamagedActors).ArrayMax;
      *(uint *)((this->ActorsToDamagedActorsMapping).AllocatorInstance.Data + (longlong)param_1 * 4)
           = uVar7;
      iVar9 = (this->DamagedActors).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,&(this->DamagedActors).AllocatorInstance,piVar1);
      }
      lVar10 = (longlong)iVar9;
      (this->DamagedActors).ArrayNum = iVar9 + 1;
      pFVar3 = (this->DamagedActors).AllocatorInstance.Data;
      *(undefined8 *)(pFVar3 + lVar10 * 0x14) = 0xffffffffffffffff;
      *(undefined4 *)(pFVar3 + lVar10 * 0x14 + 8) = 0xffffffff;
      *(int *)(pFVar3 + lVar10 * 0x14 + 0xc) = param_1;
      pFVar3[lVar10 * 0x14 + 0x10] = (FScriptContainerElement)0xff;
    }
    uVar8 = 0;
    if ((int)uVar7 < (this->DamagedActors).ArrayNum) {
      uVar8 = ~uVar7 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->DamagedActors).AllocatorInstance.Data;
    pFVar2 = (FFastArraySerializerItem *)(pFVar3 + (longlong)(int)uVar7 * 0x14);
    if ((*(int *)(pFVar3 + (longlong)(int)uVar7 * 0x14 + 0xc) != param_1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DamagedActor.ActorIndex == InActorIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\HLOD\\DestructibleHLODComponent.cpp"
                           ,99,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((uchar)pFVar2[1].ReplicationKey == param_2) {
      if (!bVar5) {
        return;
      }
    }
    else {
      if (!bVar5) {
        AActor::FlushNetDormancy
                  (*(AActor **)&((this->OwnerComponent).field0_0x0.DebugPtr)->field_0xa8);
      }
      *(uchar *)&pFVar2[1].ReplicationKey = param_2;
    }
    FFastArraySerializer::MarkItemDirty((FFastArraySerializer *)this,pFVar2);
  }
  return;
}

