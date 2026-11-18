// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticStruct @ 149078dc0

UScriptStruct * __cdecl FNDCMapEntryBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDCMapEntryBase,(UObject *)pUVar1,
                         L"NDCMapEntryBase");
  }
  return Z_Registration_Info_UScriptStruct_FNDCMapEntryBase.OuterSingleton;
}

// Init @ 149078e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNDCMapEntryBase::Init
          (FNDCMapEntryBase *this,FNDCAccessContextInst *param_1,
          UNiagaraDataChannelHandler_MapBase *param_2,FNDCMapKey *param_3)

{
  TSharedPtr<FNiagaraDataChannelData,1> *pTVar1;
  TSharedPtr<FNiagaraDataChannelData,1> local_18;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (param_2 != (UNiagaraDataChannelHandler_MapBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  (this->Owner).field0_0x0.DebugPtr = param_2;
  pTVar1 = UNiagaraDataChannelHandler::CreateData((UNiagaraDataChannelHandler *)param_2,&local_18);
  if (&this->Data != pTVar1) {
    (this->Data).Object = pTVar1->Object;
    pTVar1->Object = (FNiagaraDataChannelData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,&pTVar1->SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  this->LastUsedTime = 0.0;
  return;
}

// Reset @ 149078e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNDCMapEntryBase::Reset(FNDCMapEntryBase *this,FNDCMapKey *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FNiagaraDataChannelData *this_00;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  this_00 = (this->Data).Object;
  if (this_00 != (FNiagaraDataChannelData *)0x0) {
    FNiagaraDataChannelData::Reset(this_00);
  }
  pFVar4 = (this->SpawnedComponents).AllocatorInstance.Data;
  iVar3 = (this->SpawnedComponents).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->SpawnedComponents).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar2) break;
    if (*(longlong **)pFVar4 != (longlong *)0x0) {
      (**(code **)(**(longlong **)pFVar4 + 0xae0))();
    }
    pFVar4 = pFVar4 + 8;
  }
  piVar1 = &(this->SpawnedComponents).ArrayMax;
  (this->SpawnedComponents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SpawnedComponents).AllocatorInstance,0,piVar1);
  }
  return;
}

// Cleanup @ 149078f20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNDCMapEntryBase::Cleanup(FNDCMapEntryBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  (this->Owner).field0_0x0.DebugPtr = (UNiagaraDataChannelHandler_MapBase *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Data != (TSharedPtr<FNiagaraDataChannelData,1> *)&local_18) {
    (this->Data).Object = (FNiagaraDataChannelData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  iVar1 = (this->SpawnedComponents).ArrayNum;
  this->LastUsedTime = 0.0;
  if (iVar1 != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SpawnedComponents.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannel_Map.cpp"
                       ,0x11f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// BeginFrame @ 149078ff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
FNDCMapEntryBase::BeginFrame
          (FNDCMapEntryBase *this,float param_1,FNiagaraWorldManager *param_2,FNDCMapKey *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNiagaraDataChannelData *this_00;
  TReferenceControllerBase<1> *pTVar3;
  UNiagaraComponent *this_01;
  bool bVar4;
  UWorld *pUVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pUVar5 = FNiagaraWorldManager::GetWorld(param_2);
  this_00 = (this->Data).Object;
  this->LastUsedTime = (float)pUVar5->RealTimeSeconds;
  if (this_00 != (FNiagaraDataChannelData *)0x0) {
    FNiagaraDataChannelData::BeginFrame
              (this_00,(UNiagaraDataChannelHandler *)(this->Owner).field0_0x0.DebugPtr);
    pTVar3 = (this->Data).SharedReferenceCount.ReferenceController;
    if ((pTVar3 == (TReferenceControllerBase<1> *)0x0) ||
       (pTVar3->SharedReferenceCount != (atomic<int>)0x1)) {
      return true;
    }
  }
  iVar2 = (this->SpawnedComponents).ArrayNum;
  pFVar6 = (this->SpawnedComponents).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  do {
    if ((this->SpawnedComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) {
      return false;
    }
    this_01 = *(UNiagaraComponent **)pFVar6;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (this_01 != (UNiagaraComponent *)0x0) goto LAB_149079094;
    }
    else if (this_01 != (UNiagaraComponent *)0x0) {
      UE::GC::MarkAsReachable((UObject *)this_01);
LAB_149079094:
      bVar4 = UNiagaraComponent::IsComplete(this_01);
      if (!bVar4) {
        return true;
      }
    }
    pFVar6 = pFVar6 + 8;
  } while( true );
}

// EndFrame @ 149079150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNDCMapEntryBase::EndFrame
          (FNDCMapEntryBase *this,float param_1,FNiagaraWorldManager *param_2,FNDCMapKey *param_3)

{
  FNiagaraDataChannelData *this_00;
  
  this_00 = (this->Data).Object;
  if (this_00 != (FNiagaraDataChannelData *)0x0) {
    FNiagaraDataChannelData::EndFrame
              (this_00,(UNiagaraDataChannelHandler *)(this->Owner).field0_0x0.DebugPtr);
    return;
  }
  return;
}

// Tick @ 149079170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNDCMapEntryBase::Tick
          (FNDCMapEntryBase *this,float param_1,ETickingGroup param_2,FNiagaraWorldManager *param_3,
          FNDCMapKey *param_4)

{
  FNiagaraDataChannelData *this_00;
  ETickingGroup local_res18 [4];
  
  this_00 = (this->Data).Object;
  if (this_00 != (FNiagaraDataChannelData *)0x0) {
    local_res18[0] = param_2;
    FNiagaraDataChannelData::ConsumePublishRequests
              (this_00,(UNiagaraDataChannelHandler *)(this->Owner).field0_0x0.DebugPtr,local_res18);
  }
  return;
}

// SpawnSystem @ 1490791e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __thiscall
FNDCMapEntryBase::SpawnSystem
          (FNDCMapEntryBase *this,FNDCAccessContext_MapBase *param_1,UObject *param_2,
          USceneComponent *param_3,TVector<double> *param_4,TVector<double> *param_5,bool param_6)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  UNiagaraComponent *local_res8;
  USceneComponent *local_res20;
  FNDCMapEntryBase *local_58;
  USceneComponent **local_50;
  UNiagaraComponent **local_48;
  TVector<double> *local_40;
  FNDCAccessContext_MapBase *local_38;
  TVector<double> *local_30;
  bool *local_28;
  
  local_50 = &local_res20;
  local_48 = &local_res8;
  local_40 = param_4;
  local_30 = param_5;
  local_28 = &param_6;
  local_res8 = (UNiagaraComponent *)0x0;
  if (param_2 == (UObject *)0x0) {
    return (UNiagaraComponent *)0x0;
  }
  local_res20 = param_3;
  local_58 = this;
  local_38 = param_1;
  pUVar3 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  iVar2 = (int)pUVar3->_padding_;
  if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar2) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar3->_padding_)) {
    if (param_2 == (UObject *)0x0) {
      return local_res8;
    }
    pUVar3 = Z_Construct_UClass_UNiagaraSystemCollection_NoRegister();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&param_2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar3->_padding_)) {
      pTVar4 = FNiagaraSystemCollectionData::GetSystems
                         ((FNiagaraSystemCollectionData *)&param_2[1].field_0x8);
      pFVar5 = (pTVar4->AllocatorInstance).Data;
      iVar2 = pTVar4->ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar2 * 8;
      while( true ) {
        if (pTVar4->ArrayNum != iVar2) {
          `TCheckedPointerIterator<UNiagaraSystem_*_const,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&param_4);
        }
        if (pFVar5 == pFVar1) break;
        `FNDCMapEntryBase::SpawnSystem'::__l2::<lambda_1>::operator()
                  (&local_58,*(UNiagaraSystem **)pFVar5);
        pFVar5 = pFVar5 + 8;
      }
      return local_res8;
    }
  }
  else {
    `FNDCMapEntryBase::SpawnSystem'::__l2::<lambda_1>::operator()
              (&local_58,(UNiagaraSystem *)param_2);
  }
  return local_res8;
}

// ~FNDCMapEntryBase @ 1490b7410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FNDCMapEntryBase::~FNDCMapEntryBase(FNDCMapEntryBase *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Data).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SpawnedComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1490b9870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNDCMapEntryBase * __thiscall
FNDCMapEntryBase::operator=(FNDCMapEntryBase *this,FNDCMapEntryBase *param_1)

{
  TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  UNiagaraDataChannelHandler_MapBase *pUVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FNiagaraDataChannelData *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar5 = (param_1->Owner).field0_0x0.DebugPtr,
     pUVar5 != (UNiagaraDataChannelHandler_MapBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  pTVar1 = &this->SpawnedComponents;
  (this->Owner).field0_0x0 = (param_1->Owner).field0_0x0;
  if (pTVar1 != &param_1->SpawnedComponents) {
    iVar3 = (this->SpawnedComponents).ArrayMax;
    piVar2 = &(this->SpawnedComponents).ArrayMax;
    iVar4 = (param_1->SpawnedComponents).ArrayNum;
    pFVar6 = (param_1->SpawnedComponents).AllocatorInstance.Data;
    (this->SpawnedComponents).ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar3 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar4,iVar3,&pTVar1->AllocatorInstance,iVar4,piVar2);
      ConstructItems<TObjectPtr<UNiagaraComponent>,TObjectPtr<UNiagaraComponent>,int>
                ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UNiagaraComponent> *)pFVar6,iVar4);
    }
  }
  pTVar7 = (param_1->Data).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_1->Data).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (this->Data).SharedReferenceCount.ReferenceController;
  (this->Data).Object = pFVar8;
  (this->Data).SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  this->LastUsedTime = param_1->LastUsedTime;
  return this;
}

// operator() @ 1490bda00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
`FNDCMapEntryBase::SpawnSystem'::__l2::<lambda_1>::operator()(void *this,UNiagaraSystem *param_1)

{
  UObject *pUVar1;
  double *pdVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  UNiagaraComponent *pUVar9;
  uint uVar10;
  uint uVar11;
  UObject *local_res10;
  FWeakObjectPtr local_118;
  UObject *local_110;
  TObjectPtr<UObject_const_>_u_0 local_108;
  UNiagaraSystem *local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  UObject *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_68;
  undefined7 uStack_67;
  TVector<double>_u_0 local_58;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (param_1 != (UNiagaraSystem *)0x0) {
    local_b0 = (UObject *)0x0;
    local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_d0 = UE::Math::TRotator<double>::ZeroRotator.Roll;
    local_e0 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
    dStack_d8 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
    local_a8 = 0;
    local_b8 = __real_3ff0000000000000;
    local_c8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_c0 = _UNK_150689688;
    local_a0 = 0x2000001;
    local_9c = 0;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_100 = param_1;
    local_108.DebugPtr = (UObject *)(**(code **)(**(longlong **)(*(longlong *)this + 8) + 0x180))();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_108.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_108.DebugPtr);
    }
    pUVar1 = (UObject *)**(undefined8 **)((longlong)this + 8);
    if (pUVar1 == (UObject *)0x0) {
      pdVar2 = *(double **)((longlong)this + 0x18);
      local_f8 = *pdVar2;
      dStack_f0 = pdVar2[1];
      local_e8 = pdVar2[2];
      pUVar9 = UNiagaraFunctionLibrary::SpawnSystemAtLocationWithParams
                         ((FFXSystemSpawnParameters *)&local_108.ObjectPtr);
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      local_a0 = CONCAT31(local_a0._1_3_,2);
      local_b0 = pUVar1;
      pUVar9 = UNiagaraFunctionLibrary::SpawnSystemAttachedWithParams
                         ((FFXSystemSpawnParameters *)&local_108.ObjectPtr);
    }
    **(undefined8 **)((longlong)this + 0x10) = pUVar9;
    local_110 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
    if (local_110 != (UObject *)0x0) {
      lVar3 = *(longlong *)this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_110);
      }
      if (((*(UObject ***)(lVar3 + 0x10) <= &local_110) &&
          (&local_110 < *(UObject ***)(lVar3 + 0x10) + *(int *)(lVar3 + 0x1c))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar3 + 0x18);
      if (iVar8 == *(int *)(lVar3 + 0x1c)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)(lVar3 + 0x10),(int *)(lVar3 + 0x1c));
      }
      *(int *)(lVar3 + 0x18) = iVar8 + 1;
      *(UObject **)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar8 * 8) = local_110;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_110 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_110);
      }
      lVar3 = *(longlong *)((longlong)this + 0x20);
      pUVar1 = (UObject *)**(undefined8 **)((longlong)this + 0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      local_118.ObjectIndex = 0;
      local_118.ObjectSerialNumber = 0;
      local_res10 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_res10);
      if (((*(FWeakObjectPtr **)(lVar3 + 0x38) <= &local_118) &&
          (&local_118 < *(FWeakObjectPtr **)(lVar3 + 0x38) + *(int *)(lVar3 + 0x44))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = *(int *)(lVar3 + 0x40);
      if (iVar8 == *(int *)(lVar3 + 0x44)) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)(lVar3 + 0x38),(int *)(lVar3 + 0x44));
      }
      uVar10 = (uint)__xmm_80000000000000008000000000000000;
      uVar11 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      *(int *)(lVar3 + 0x40) = iVar8 + 1;
      local_68 = 1;
      *(FWeakObjectPtr *)(*(longlong *)(lVar3 + 0x38) + (longlong)iVar8 * 8) = local_118;
      puVar4 = *(undefined8 **)((longlong)this + 0x28);
      local_58._0_4_ = (uint)*puVar4 ^ uVar10;
      local_58._4_4_ = (uint)((ulonglong)*puVar4 >> 0x20) ^ uVar11;
      local_58._8_4_ = (uint)puVar4[1] ^ uVar10;
      local_58._12_4_ = (uint)((ulonglong)puVar4[1] >> 0x20) ^ uVar11;
      local_58._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)puVar4[2] >> 0x20) ^ uVar11,(uint)puVar4[2] ^ uVar10);
      local_80 = *puVar4;
      uVar6 = puVar4[1];
      uStack_78._0_4_ = (undefined4)uVar6;
      uStack_78._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30 = (undefined4)puVar4[2];
      uStack_2c = (undefined4)((ulonglong)puVar4[2] >> 0x20);
      local_38 = (undefined4)uStack_78;
      uStack_34 = uStack_78._4_4_;
      local_28 = CONCAT71(uStack_67,1);
      uStack_78 = uVar6;
      uStack_40 = local_80;
      UNiagaraComponent::SetSystemFixedBounds
                ((UNiagaraComponent *)**(undefined8 **)((longlong)this + 0x10),
                 (TBox<double> *)&local_58._s_0);
      if (**(char **)((longlong)this + 0x30) != '\0') {
        (**(code **)(*(longlong *)**(undefined8 **)((longlong)this + 0x10) + 0x2b8))
                  ((longlong *)**(undefined8 **)((longlong)this + 0x10),0);
      }
    }
  }
  return;
}

