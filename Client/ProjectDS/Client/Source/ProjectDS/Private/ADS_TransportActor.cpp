// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b5c3e40

UClass * __cdecl ADS_TransportActor::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_TransportActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportActor",
               &Z_Registration_Info_UClass_ADS_TransportActor.InnerSingleton,
               StaticRegisterNativesADS_TransportActor,0x760,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_TransportActor>,
               InternalVTableHelperCtorCaller<ADS_TransportActor>,local_res8,
               ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_TransportActor.InnerSingleton;
}

// ADS_TransportActor @ 14b5c6850

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_TransportActor * __thiscall
ADS_TransportActor::ADS_TransportActor(ADS_TransportActor *this,FVTableHelper *param_1)

{
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->MeshSub).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSub).ArrayNum = 0;
  (this->MeshSub).ArrayMax = 0;
  (this->BoxCollision).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  (this->PartsSystemControl).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  this->DebugSpeed = 0.0;
  return this;
}

// ~ADS_TransportActor @ 14b5c89a0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TransportActor::~ADS_TransportActor(ADS_TransportActor *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  pFVar1 = (this->MeshSub).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ADS_EntityActorBase::~ADS_EntityActorBase((ADS_EntityActorBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cbae0

UClass * __cdecl ADS_TransportActor::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_TransportActor.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TransportActor",
               &Z_Registration_Info_UClass_ADS_TransportActor.InnerSingleton,
               StaticRegisterNativesADS_TransportActor,0x760,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ADS_TransportActor>,
               InternalVTableHelperCtorCaller<ADS_TransportActor>,local_res8,
               ADS_EntityActorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_TransportActor.InnerSingleton;
}

// StaticRegisterNativesADS_TransportActor @ 14b5cdf30

void __cdecl ADS_TransportActor::StaticRegisterNativesADS_TransportActor(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_ADS_TransportActor_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnBeginOverlap @ 14b5d0520

void __cdecl ADS_TransportActor::execOnBeginOverlap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  bool bVar3;
  int local_res8 [2];
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined8 local_158;
  undefined8 local_150 [3];
  undefined8 local_138;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined2 uStack_12b;
  undefined1 uStack_129;
  uchar local_128 [4];
  undefined4 local_124;
  undefined4 local_84;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_150[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_150,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_150);
  }
  local_158 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_158);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar3 = local_res8[0] != 0;
  memset(local_128,0,0x100);
  uStack_12b = 0;
  uStack_129 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_138 = 0;
  uStack_130 = 0xffffffff;
  uStack_12c = 0;
  uStack_58 = 0xffffffff;
  local_124 = 0x3f800000;
  local_84 = 0xffffffff;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  puVar2 = local_128;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x778))
            (param_1,local_150[0],local_158,local_res20,local_res10[0],bVar3,puVar2);
  return;
}

// execOnEndOverlap @ 14b5d0790

void __cdecl ADS_TransportActor::execOnEndOverlap(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_28);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x780))
            (param_1,local_28[0],local_res20,local_res10[0],local_res8[0]);
  return;
}

// execOnLoadComplete @ 14b5d08f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl ADS_TransportActor::execOnLoadComplete(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnLoadComplete((ADS_TransportActor *)param_1,local_res10[0] != 0);
  return;
}

// ADS_TransportActor @ 14bc82c00

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ADS_TransportActor * __thiscall
ADS_TransportActor::ADS_TransportActor(ADS_TransportActor *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  FName local_res8 [4];
  
  ADS_EntityActorBase::ADS_EntityActorBase((ADS_EntityActorBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__FDS_EntityBase__;
  (this->MeshSub).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshSub).ArrayNum = 0;
  (this->MeshSub).ArrayMax = 0;
  (this->BoxCollision).field0_0x0.DebugPtr = (UBoxComponent *)0x0;
  (this->PartsSystemControl).field0_0x0.DebugPtr = (UDS_PartsSystemControl *)0x0;
  this->DebugSpeed = 0.0;
  if (this->_padding_ != 0) {
    ::FName::FName(local_res8,L"NoCollision");
    this->_padding_ = (longlong)local_res8[0];
    (**(code **)(*(longlong *)this->_padding_ + 0x788))((longlong *)this->_padding_,local_res8[0],1)
    ;
  }
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WarpLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = (double)uVar2;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 6;
  (this->WarpLocation).field0_0x0._s_0.Z = (double)uVar2;
  this->EntityID = 0xffffffffffffffff;
  return this;
}

// BeginPlay @ 14bc8adf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall ADS_TransportActor::BeginPlay(ADS_TransportActor *this)

{
  int iVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UDS_PartsSystemControl *pUVar7;
  UDS_DataBase *this_00;
  FDS_TransportBaseTableRow *this_01;
  UWN_ISKM_CharacterCore *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  TReferenceControllerBase<1> *pTVar11;
  FDS_ResourcePresetTableRow *pFVar12;
  UDS_SyncRecvComponent *pUVar13;
  UClass *pUVar14;
  UBoxComponent *pUVar15;
  longlong *plVar16;
  TReferenceControllerBase<1> *pTVar17;
  undefined1 auStackY_288 [32];
  undefined1 local_258 [8];
  ForAnyElementType local_250;
  int local_248;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_240;
  FDelegateAllocation local_238;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_228;
  ForAnyElementType local_220;
  int local_218;
  code *local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  FWeakObjectPtr local_1f8;
  ADS_TransportActor *local_1f0;
  undefined8 local_1e8;
  FSharedReferencer<1> local_1e0;
  FWN_EndOfRefs local_1d8;
  FDestructionSentinel local_1c8;
  FDestructionSentinel local_1b0;
  FDestructionSentinel local_198;
  FDestructionSentinel local_180;
  FDestructionSentinel local_168;
  TVector<double>_u_0 local_148;
  FDestructionSentinel local_128;
  FDelegateAllocation *local_110;
  FReadAccessScope local_108;
  FReadAccessScope local_f0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_288;
  ADS_EntityActorBase::BeginPlay((ADS_EntityActorBase *)this);
  UDS_TransportData::GetData((ulong64)&local_1f8,this->_padding_,false);
  bVar4 = FWeakObjectPtr::IsValid(&local_1f8);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1446507434393731128>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Transport\\DS_TransportActor.cpp"
                       ,0x38,"entityData.IsValid()");
    if (!bVar4) {
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->PartsSystemControl).field0_0x0.DebugPtr == (UDS_PartsSystemControl *)0x0) {
    pUVar7 = NewObject<UDS_PartsSystemControl>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UDS_PartsSystemControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->PartsSystemControl).field0_0x0.DebugPtr = pUVar7;
  }
  this_00 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_1f8);
  iVar6 = UDS_DataBase::GetEntityTableID(this_00);
  this_01 = FDS_TransportBaseTableRow::GetRef((longlong)iVar6,true);
  pTVar17 = (TReferenceControllerBase<1> *)0x0;
  if (this_01->ID_ResourcePreset < 1) goto LAB_14bc8b313;
  pUVar7 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  pUVar8 = NewObject<UWN_ISKM_CharacterCore>((UObject *)this);
  UDS_PartsSystemControl::Init(pUVar7,(UWN_CS_CharacterCore *)pUVar8,false);
  pUVar7 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  local_208 = _vcall__72__flat______;
  uStack_1fc = local_1d8.TaskCaller.SharedReferenceCount.ReferenceController._4_4_;
  uStack_200 = 0x2c0;
  local_240.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_238.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_238.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_240,(FWriteAccessScope *)&local_128);
  local_110 = &local_238;
  puVar9 = UE::Core::Private::DelegateAllocate(0x30,&local_238);
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar10 = FDelegateHandle::GenerateNewID();
    puVar9[2] = uVar10;
    *puVar9 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VADS_TransportActor____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar9[3] = 0;
    local_1f0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar9 + 3),(FObjectPtr)&local_1f0);
    puVar9[4] = local_208;
    puVar9[5] = CONCAT44(uStack_1fc,uStack_200);
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  local_1d8.TaskCaller.Object = (void *)0x0;
  local_1d8.TaskCaller.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_240,&local_108);
  if (((local_238.DelegateSize == 0) ||
      (local_238.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)local_238.DelegateAllocator + 0x38))(), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_108);
  if (bVar4) {
    local_258 = (undefined1  [8])0x0;
    local_250.Data = (FScriptContainerElement *)0x0;
    local_248 = 0;
    local_228.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_220.Data = (FScriptContainerElement *)0x0;
    local_218 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_240,&local_f0)
    ;
    if ((local_238.DelegateSize != 0) &&
       (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (**(code **)(*(longlong *)local_238.DelegateAllocator + 0x50))
                (local_238.DelegateAllocator,&local_228);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_228,(FWriteAccessScope *)&local_1c8);
    iVar6 = local_218;
    FVar3.Data = local_220.Data;
    local_220.Data = (FScriptContainerElement *)0x0;
    local_218 = 0;
    if (local_1c8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1c8.Accessor,&local_1c8);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
               (FWriteAccessScope *)&local_1b0);
    if (local_248 == 0) {
LAB_14bc8b100:
      if (local_250.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data);
      }
    }
    else if (local_250.Data != (FScriptContainerElement *)0x0) {
      (*(code *)**(undefined8 **)local_250.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_250,0,0,0x10);
      local_248 = 0;
      goto LAB_14bc8b100;
    }
    local_250.Data = FVar3.Data;
    local_248 = iVar6;
    if (local_1b0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b0.Accessor,&local_1b0);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_228,(FWriteAccessScope *)&local_198);
    if ((local_218 != 0) && (local_220.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_220.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_220,0,0,0x10);
      local_218 = 0;
    }
    if (local_198.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_198.Accessor,&local_198);
    }
    if (local_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_228.AccessDetector);
    pTVar11 = ::operator_new(0x30);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      *(undefined8 *)(pTVar11 + 1) = 0;
      pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&pTVar11[2]._padding_ = 0;
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
                ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pTVar11 + 1),
                 (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_258);
      pTVar11->SharedReferenceCount = (atomic<int>)0x1;
      pTVar11->_padding_ =
           (longlong)
           &
           ___7__TReferenceControllerWithDeleter_XV<lambda_1>__4___0FWN_EndOfRefs__QEAA_AEBV__TDelegate___A6AXXZUFDefaultDelegateUserPolicy_____Z__00_SharedPointerInternals__6B_
      ;
      pTVar11->WeakReferenceCount = (atomic<int>)0x1;
      pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar17 = pTVar11;
    }
    local_1e8 = 0;
    local_1e0.ReferenceController = pTVar17;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_1d8.TaskCaller.SharedReferenceCount,&local_1e0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1e0.ReferenceController);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_258,
               (FWriteAccessScope *)&local_180);
    if ((local_248 != 0) && (local_250.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_250.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_250,0,0,0x10);
      local_248 = 0;
    }
    if (local_180.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
    }
    if (local_250.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_258);
  }
  pFVar12 = FDS_TransportBaseTableRow::ID_ResourcePresetTable(this_01);
  UDS_PartsSystemControl::RefreshAsync(pUVar7,(AActor *)this,pFVar12,&local_1d8,true);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_240,(FWriteAccessScope *)&local_168);
  if ((local_238.DelegateSize != 0) &&
     (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_238.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_238,0,0,0x10);
    local_238.DelegateSize = 0;
  }
  if (local_168.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_168.Accessor,&local_168);
  }
  if (local_238.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_238.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_240.AccessDetector);
LAB_14bc8b313:
  pUVar13 = NewObject<UDS_SyncRecvComponent>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 != (UDS_SyncRecvComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  this->_padding_ = (longlong)pUVar13;
  if (2 < (this_01->BoardingRange).ArrayNum) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar14 = Z_Construct_UClass_UBoxComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar14);
    local_d8._8_8_ = this;
    pUVar15 = (UBoxComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar16 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar16 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UBoxComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar15);
    }
    (this->BoxCollision).field0_0x0.DebugPtr = pUVar15;
    (**(code **)(pUVar15->_padding_ + 0x788))(pUVar15,::COLLISION_PROFILE_NOCOLLISION,1);
    local_208 = (code *)0x0;
    USceneComponent::SetupAttachment
              ((USceneComponent *)(this->BoxCollision).field0_0x0.DebugPtr,
               (USceneComponent *)this->_padding_,(FName)0x0);
    UActorComponent::RegisterComponent((UActorComponent *)(this->BoxCollision).field0_0x0.DebugPtr);
    pUVar15 = (this->BoxCollision).field0_0x0.DebugPtr;
    if (((this_01->BoardingRange).ArrayNum < 3) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = *(int *)((this_01->BoardingRange).AllocatorInstance.Data + 8);
    if (((this_01->BoardingRange).ArrayNum < 2) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = *(int *)((this_01->BoardingRange).AllocatorInstance.Data + 4);
    if (((this_01->BoardingRange).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_148._s_0.X = (double)*(int *)(this_01->BoardingRange).AllocatorInstance.Data;
    local_148._s_0.Y = (double)iVar1;
    local_148._s_0.Z = (double)iVar6;
    UBoxComponent::SetBoxExtent(pUVar15,(TVector<double> *)&local_148._s_0,true);
  }
  return;
}

// EndPlay @ 14bc971f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TransportActor::EndPlay(ADS_TransportActor *this,Type param_1)

{
  UDS_PartsSystemControl::Deinit((this->PartsSystemControl).field0_0x0.DebugPtr);
  ADS_EntityActorBase::EndPlay((ADS_EntityActorBase *)this,param_1);
  return;
}

// GetPartsSystemControl @ 14bca1620

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr> __thiscall
ADS_TransportActor::GetPartsSystemControl(ADS_TransportActor *this)

{
  UDS_PartsSystemControl *pUVar1;
  FWeakObjectPtr in_RDX;
  UDS_PartsSystemControl *local_res8;
  
  pUVar1 = (this->PartsSystemControl).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (pUVar1 != (UDS_PartsSystemControl *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_PartsSystemControl *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RDX = 0;
  local_res8 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_PartsSystemControl *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RDX,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_PartsSystemControl,FWeakObjectPtr>)in_RDX;
}

// NotifyActorBeginOverlap @ 14bcaeda0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
ADS_TransportActor::NotifyActorBeginOverlap(ADS_TransportActor *this,AActor *param_1)

{
  return;
}

// NotifyActorEndOverlap @ 14bcaedb0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TransportActor::NotifyActorEndOverlap(ADS_TransportActor *this,AActor *param_1)

{
  return;
}

// NotifyHit @ 14bcaefb0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
ADS_TransportActor::NotifyHit
          (ADS_TransportActor *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,bool param_4,TVector<double> *param_5,
          TVector<double> *param_6,TVector<double> *param_7,FHitResult *param_8)

{
  return;
}

// OnBeginOverlap @ 14bcafc20

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
ADS_TransportActor::OnBeginOverlap
          (ADS_TransportActor *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4,bool param_5,FHitResult *param_6)

{
  return;
}

// OnEndOverlap @ 14bcb2f90

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
ADS_TransportActor::OnEndOverlap
          (ADS_TransportActor *this,UPrimitiveComponent *param_1,AActor *param_2,
          UPrimitiveComponent *param_3,int param_4)

{
  return;
}

// OnLoadComplete @ 14bcb64e0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TransportActor::OnLoadComplete(ADS_TransportActor *this,bool param_1)

{
  return;
}

// OnPartsSystemComplete @ 14bcb9ef0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_TransportActor::OnPartsSystemComplete(ADS_TransportActor *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((UDS_PartsSystemControl *)this->_padding_)->bIsCanceled == false) {
    bVar2 = UDS_PartsSystemControl::IsValid((UDS_PartsSystemControl *)this->_padding_);
    if (bVar2) {
      FDS_EntityBase::OnPartsSystemComplete((FDS_EntityBase *)this);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1446507434393731221>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\SpawnActor\\Transport\\DS_TransportActor.cpp"
                       ,0x95,"PartsSystemControl->IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// SetDebugMove @ 14bcc5c70

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
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
ADS_TransportActor::SetDebugMove(ADS_TransportActor *this,TVector<double> *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->WarpLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->WarpLocation).field0_0x0._s_0.Y = dVar2;
  (this->WarpLocation).field0_0x0._s_0.Z = dVar1;
  this->DebugSpeed = param_2;
  return;
}

// Tick @ 14bcccff0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_TransportActor::Tick(ADS_TransportActor *this,float param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  
  ADS_EntityActorBase::Tick((ADS_EntityActorBase *)this,param_1);
  if (0.0 < this->DebugSpeed) {
    lVar1 = this->_padding_;
    if (lVar1 == 0) {
      local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      local_78 = *(double *)(lVar1 + 0x220);
      uVar8 = *(undefined4 *)(lVar1 + 0x210);
      uVar9 = *(undefined4 *)(lVar1 + 0x214);
      uVar10 = *(undefined4 *)(lVar1 + 0x218);
      uVar11 = *(undefined4 *)(lVar1 + 0x21c);
    }
    dVar6 = (this->WarpLocation).field0_0x0._s_0.X - (double)CONCAT44(uVar9,uVar8);
    uVar3 = (this->WarpLocation).field0_0x0._s_0.Z - local_78;
    dVar7 = (this->WarpLocation).field0_0x0._s_0.Y - (double)CONCAT44(uVar11,uVar10);
    dVar4 = dVar7 * dVar7 + dVar6 * dVar6 + (double)uVar3 * (double)uVar3;
    if (dVar4 != __real_3ff0000000000000) {
      if (__real_3e45798ee0000000 <= dVar4) {
        dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
        dVar6 = dVar6 * dVar4;
        dVar7 = dVar7 * dVar4;
        uVar3 = (double)uVar3 * dVar4;
      }
      else {
        dVar6 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
        dVar7 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
        uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
    }
    plVar2 = (longlong *)this->_padding_;
    dVar5 = (double)this->DebugSpeed;
    dVar4 = (double)param_1;
    local_60 = dVar5 * (double)uVar3 * dVar4 + local_78;
    local_70 = dVar5 * dVar6 * dVar4 + (double)CONCAT44(uVar9,uVar8);
    local_68 = dVar5 * dVar7 * dVar4 + (double)CONCAT44(uVar11,uVar10);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x358))(plVar2,&local_70);
    }
  }
  return;
}

