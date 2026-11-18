// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AIModule
// Functions: 31

// StaticStruct @ 146f13200

UScriptStruct * __cdecl FEnvQueryInstance::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEnvQueryInstance.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AIModule();
    Z_Registration_Info_UScriptStruct_FEnvQueryInstance.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEnvQueryInstance,(UObject *)pUVar1,
                         L"EnvQueryInstance");
  }
  return Z_Registration_Info_UScriptStruct_FEnvQueryInstance.OuterSingleton;
}

// AddItemData<UEnvQueryItemType_Actor> @ 146f158d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnvQueryInstance::AddItemData<UEnvQueryItemType_Actor>
          (FEnvQueryInstance *this,FWeakObjectPtr *param_1)

{
  uchar auVar1 [8];
  ushort uVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  UClass *pUVar12;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined4 local_78;
  uint uStack_74;
  FStatMessage local_70;
  FStatMessage local_60 [2];
  
  auVar1 = (uchar  [8])
           ((longlong)*(int *)((longlong)&this->_padding_ + 4) +
           (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8);
  if (auVar1 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_res18,"STAT_AI_EQS_InstanceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar8,
                         L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                         L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar9;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_70.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_70.StatData.Pad = auVar1;
      local_70.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_70);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  pUVar12 = UEnvQueryItemType_Actor::StaticClass();
  if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar12);
  }
  if (*(short *)((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr + 1) != 8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetDefault<TypeItem>()->GetValueSize() == sizeof(typename TypeItem::FValueType)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\EnvironmentQuery\\EnvQueryTypes.h"
                       ,0x393,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pUVar12 = UEnvQueryItemType_Actor::StaticClass();
  if ((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar12);
  }
  if (this->ValueSize < *(ushort *)((pUVar12->ClassDefaultObject).field0_0x0.DebugPtr + 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetDefault<TypeItem>()->GetValueSize() <= ValueSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\EnvironmentQuery\\EnvQueryTypes.h"
                       ,0x395,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar2 = this->ValueSize;
  uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,(uint)uVar2,(ForAnyElementType *)&this->_padding_,(int *)&this->_padding_,
                     (int *)((longlong)&this->_padding_ + 4));
  memset((void *)(this->_padding_ + (longlong)(int)uVar6),0,(ulonglong)(uint)uVar2);
  local_78 = 0;
  *(FWeakObjectPtr *)((longlong)(int)uVar6 + this->_padding_) = *param_1;
  uStack_74 = uVar6 & 0x7fffffff;
  if (((undefined4 *)this->_padding_ <= &local_78) &&
     (&local_78 <
      (undefined4 *)this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (int)this->_padding_;
  if (iVar7 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar7 + 1;
  *(ulonglong *)(this->_padding_ + (longlong)iVar7 * 8) = CONCAT44(uStack_74,local_78);
  auVar1 = (uchar  [8])
           ((longlong)*(int *)((longlong)&this->_padding_ + 4) +
           (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8);
  if (auVar1 != (uchar  [8])0x0) {
    FVar9 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar8 = ::FName::FName(&local_res20,"STAT_AI_EQS_InstanceMemory");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar8,
                         L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                         L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar9;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_60[0].NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res10 = FVar3;
      local_60[0].StatData.Pad = auVar1;
      local_60[0].NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,local_60);
      FStatsTrace::Add(&local_res10,(long64)auVar1);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
  }
  return;
}

// AddItemData<UEnvQueryItemType_Actor,AActor_*> @ 146f15d60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnvQueryInstance::AddItemData<UEnvQueryItemType_Actor,AActor_*>
          (FEnvQueryInstance *this,TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  UObject *local_res10;
  FWeakObjectPtr local_res18;
  
  pFVar4 = (param_1->AllocatorInstance).Data;
  iVar2 = param_1->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<AActor_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_res10);
    }
    if (pFVar4 == pFVar1) break;
    pUVar3 = *(UObject **)pFVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res10 = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res10);
    AddItemData<UEnvQueryItemType_Actor>(this,&local_res18);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// AddItemData<UEnvQueryItemType_Point> @ 146f15e20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnvQueryInstance::AddItemData<UEnvQueryItemType_Point>
          (FEnvQueryInstance *this,FNavLocation *param_1)

{
  uchar auVar1 [8];
  double *pdVar2;
  ushort uVar3;
  FName FVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  UClass *pUVar17;
  longlong lVar18;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  undefined4 local_78;
  uint uStack_74;
  FStatMessage local_70;
  FStatMessage local_60 [2];
  
  auVar1 = (uchar  [8])
           ((longlong)*(int *)((longlong)&this->_padding_ + 4) +
           (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8);
  if (auVar1 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar13 = ::FName::FName(&local_res18,"STAT_AI_EQS_InstanceMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar13,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar14;
    local_res8 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      local_70.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar4;
      local_70.StatData.Pad = auVar1;
      local_70.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar15,&local_70);
      FStatsTrace::Add(&local_res8,-(longlong)auVar1);
      if (pFVar15->ScopeCount == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  pUVar17 = UEnvQueryItemType_Point::StaticClass();
  if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar17);
  }
  if (*(short *)((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr + 1) != 0x20) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("GetDefault<TypeItem>()->GetValueSize() == sizeof(typename TypeItem::FValueType)"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\EnvironmentQuery\\EnvQueryTypes.h"
                        ,0x393,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pUVar17 = UEnvQueryItemType_Point::StaticClass();
  if ((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar17);
  }
  if (this->ValueSize < *(ushort *)((pUVar17->ClassDefaultObject).field0_0x0.DebugPtr + 1)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("GetDefault<TypeItem>()->GetValueSize() <= ValueSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Classes\\EnvironmentQuery\\EnvQueryTypes.h"
                        ,0x395,L"");
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar3 = this->ValueSize;
  uVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,(uint)uVar3,(ForAnyElementType *)&this->_padding_,(int *)&this->_padding_,
                      (int *)((longlong)&this->_padding_ + 4));
  lVar18 = (longlong)(int)uVar11;
  memset((void *)(this->_padding_ + lVar18),0,(ulonglong)(uint)uVar3);
  lVar5 = this->_padding_;
  dVar7 = (param_1->Location).field0_0x0._s_0.Y;
  local_78 = 0;
  dVar8 = (param_1->Location).field0_0x0._s_0.Z;
  dVar9 = (double)param_1->NodeRef;
  pdVar2 = (double *)(lVar5 + lVar18);
  *pdVar2 = (param_1->Location).field0_0x0._s_0.X;
  pdVar2[1] = dVar7;
  pdVar2 = (double *)(lVar5 + 0x10 + lVar18);
  *pdVar2 = dVar8;
  pdVar2[1] = dVar9;
  uStack_74 = uVar11 & 0x7fffffff;
  if (((undefined4 *)this->_padding_ <= &local_78) &&
     (&local_78 <
      (undefined4 *)this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar12 = (int)this->_padding_;
  if (iVar12 == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4));
  }
  *(int *)&this->_padding_ = iVar12 + 1;
  *(ulonglong *)(this->_padding_ + (longlong)iVar12 * 8) = CONCAT44(uStack_74,local_78);
  auVar1 = (uchar  [8])
           ((longlong)*(int *)((longlong)&this->_padding_ + 4) +
           (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8);
  if (auVar1 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar13 = ::FName::FName(&local_res20,"STAT_AI_EQS_InstanceMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar13,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar14;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar4;
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      local_60[0].NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_res10 = FVar4;
      local_60[0].StatData.Pad = auVar1;
      local_60[0].NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar15,local_60);
      FStatsTrace::Add(&local_res10,(long64)auVar1);
      if (pFVar15->ScopeCount == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  return;
}

// AddItemData<UEnvQueryItemType_Point,UE::Math::TVector<double>_> @ 146f162c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnvQueryInstance::AddItemData<UEnvQueryItemType_Point,UE::Math::TVector<double>_>
          (FEnvQueryInstance *this,TVector<double> *param_1)

{
  TVector<double>_u_0 local_28;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._16_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_28._20_4_ = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0x14);
  uStack_10 = 0;
  uStack_c = 0;
  AddItemData<UEnvQueryItemType_Point>(this,(FNavLocation *)&local_28._s_0);
  return;
}

// FEnvQueryInstance @ 146f28f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryInstance * __thiscall
FEnvQueryInstance::FEnvQueryInstance(FEnvQueryInstance *this,FEnvQueryInstance *param_1)

{
  undefined1 *puVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->QueryName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryName).Data.ArrayNum = 0;
  (this->QueryName).Data.ArrayMax = 0;
  (this->UniqueName).ComparisonIndex = 0;
  (this->UniqueName).Number = 0;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  *(undefined8 *)&this->FinishDelegate = 0;
  *(undefined8 *)&(this->FinishDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->FinishDelegate).field_0x10 = 0;
  *(undefined8 *)&this->NamedParams = 0;
  *(undefined8 *)&(this->NamedParams).field_0x8 = 0;
  *(undefined8 *)&(this->NamedParams).field_0x20 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&(this->NamedParams).field_0x28 = 0;
  *(undefined4 *)&(this->NamedParams).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedParams).field_0x34 = 0;
  *(undefined4 *)&(this->NamedParams).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->NamedParams).field_0x40 = 0;
  *(undefined4 *)&(this->NamedParams).field_0x48 = 0;
  (this->DebugData).bSingleItemResult = 0;
  this->GenerationTimeWarningSeconds = 0.009999999776482582;
  (this->ContextCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextCache).ArrayNum = 0;
  (this->ContextCache).ArrayMax = 0;
  (this->Options).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).ArrayNum = 0;
  (this->Options).ArrayMax = 0;
  (this->ItemDetails).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemDetails).ArrayNum = 0;
  (this->ItemDetails).ArrayMax = 0;
  (this->ItemTypeVectorCDO).field0_0x0.DebugPtr = (UEnvQueryItemType_VectorBase *)0x0;
  (this->ItemTypeActorCDO).field0_0x0.DebugPtr = (UEnvQueryItemType_ActorBase *)0x0;
  (this->DebugData)._padding_ = 0;
  (this->DebugData)._padding_ = 0;
  (this->DebugData)._padding_ = 0;
  (this->DebugData)._padding_ = 0;
  (this->DebugData).DebugItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).DebugItems.ArrayNum = 0;
  (this->DebugData).DebugItems.ArrayMax = 0;
  (this->DebugData).DebugItemDetails.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).DebugItemDetails.ArrayNum = 0;
  (this->DebugData).DebugItemDetails.ArrayMax = 0;
  (this->DebugData).RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).RawData.ArrayNum = 0;
  (this->DebugData).RawData.ArrayMax = 0;
  (this->DebugData).PerformedTestNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).PerformedTestNames.ArrayNum = 0;
  (this->DebugData).PerformedTestNames.ArrayMax = 0;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  (this->DebugData).CurrentOptionGeneratorIdx = -1;
  operator=(this,param_1);
  IncStats(this);
  return this;
}

// FEnvQueryInstance @ 146f29090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryInstance * __thiscall FEnvQueryInstance::FEnvQueryInstance(FEnvQueryInstance *this)

{
  undefined1 *puVar1;
  byte bVar2;
  bool bVar3;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  (this->QueryName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryName).Data.ArrayNum = 0;
  (this->QueryName).Data.ArrayMax = 0;
  (this->UniqueName).ComparisonIndex = 0;
  (this->UniqueName).Number = 0;
  (this->World).field0_0x0.DebugPtr = (UWorld *)0x0;
  *(undefined8 *)&this->FinishDelegate = 0;
  *(undefined8 *)&(this->FinishDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->FinishDelegate).field_0x10 = 0;
  *(undefined8 *)&this->NamedParams = 0;
  *(undefined8 *)&(this->NamedParams).field_0x8 = 0;
  *(undefined8 *)&(this->NamedParams).field_0x20 = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&(this->NamedParams).field_0x28 = 0;
  *(undefined4 *)&(this->NamedParams).field_0x2c = 0x80;
  *(undefined4 *)&(this->NamedParams).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NamedParams).field_0x34 = 0;
  *(undefined8 *)&(this->NamedParams).field_0x40 = 0;
  *(undefined4 *)&(this->NamedParams).field_0x48 = 0;
  (this->ContextCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ContextCache).ArrayNum = 0;
  (this->ContextCache).ArrayMax = 0;
  (this->Options).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Options).ArrayNum = 0;
  (this->Options).ArrayMax = 0;
  this->CurrentTest = -1;
  this->CurrentTestStartingItem = -1;
  (this->ItemDetails).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ItemDetails).ArrayNum = 0;
  (this->ItemDetails).ArrayMax = 0;
  this->NumValidItems = 0;
  this->ValueSize = 0;
  this->NumProcessedItems = 0;
  bVar3 = bDebuggingInfoEnabled;
  bVar2 = this->field_0x10c;
  (this->DebugData).bSingleItemResult = 0;
  this->StartTime = 0.0;
  this->field_0x10c = bVar2 & 0xe0 | bVar3;
  this->GenerationTimeWarningSeconds = 0.009999999776482582;
  this->TotalExecutionTime = 0.0;
  (this->StatId).StatIdPtr = &TStatId::TStatId_NAME_None;
  this->CurrentStepTimeLimit = 0.0;
  this->Mode = SingleResult;
  (this->ItemTypeVectorCDO).field0_0x0.DebugPtr = (UEnvQueryItemType_VectorBase *)0x0;
  (this->ItemTypeActorCDO).field0_0x0.DebugPtr = (UEnvQueryItemType_ActorBase *)0x0;
  (this->DebugData)._padding_ = 0;
  (this->DebugData)._padding_ = 0;
  (this->DebugData)._padding_ = 0;
  (this->DebugData)._padding_ = 0;
  (this->DebugData).DebugItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).DebugItems.ArrayNum = 0;
  (this->DebugData).DebugItems.ArrayMax = 0;
  (this->DebugData).DebugItemDetails.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).DebugItemDetails.ArrayNum = 0;
  (this->DebugData).DebugItemDetails.ArrayMax = 0;
  (this->DebugData).RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).RawData.ArrayNum = 0;
  (this->DebugData).RawData.ArrayMax = 0;
  (this->DebugData).PerformedTestNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugData).PerformedTestNames.ArrayNum = 0;
  (this->DebugData).PerformedTestNames.ArrayMax = 0;
  (this->DebugData).CurrentOptionGeneratorIdx = -1;
  IncStats(this);
  return this;
}

// ~FEnvQueryInstance @ 146f2e2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::~FEnvQueryInstance(FEnvQueryInstance *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DecStats(this);
  FEnvQueryDebugData::~FEnvQueryDebugData(&this->DebugData);
  DestructItems<FEnvQueryItemDetails,int>
            ((FEnvQueryItemDetails *)(this->ItemDetails).AllocatorInstance.Data,
             (this->ItemDetails).ArrayNum);
  pFVar1 = (this->ItemDetails).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnvQueryOptionInstance,int>
            ((FEnvQueryOptionInstance *)(this->Options).AllocatorInstance.Data,
             (this->Options).ArrayNum);
  pFVar1 = (this->Options).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FEnvQueryInstanceContextCacheItem,int>
            ((FEnvQueryInstanceContextCacheItem *)(this->ContextCache).AllocatorInstance.Data,
             (this->ContextCache).ArrayNum);
  pFVar1 = (this->ContextCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->NamedParams).field_0x48 = 0;
  pvVar2 = *(void **)&(this->NamedParams).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,float>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NamedParams);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->FinishDelegate);
  pFVar1 = (this->QueryName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// operator= @ 146f2fd50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FEnvQueryInstance * __thiscall
FEnvQueryInstance::operator=(FEnvQueryInstance *this,FEnvQueryInstance *param_1)

{
  int *piVar1;
  TArray<FEnvQueryInstanceContextCacheItem,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FEnvQueryOptionInstance,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  UWorld *pUVar8;
  FEnvQueryInstanceContextCacheItem *pFVar9;
  FEnvQueryOptionInstance *pFVar10;
  UEnvQueryItemType_VectorBase *pUVar11;
  UEnvQueryItemType_ActorBase *pUVar12;
  FScriptContainerElement *pFVar13;
  byte bVar14;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar15;
  
  FEnvQueryResult::operator=((FEnvQueryResult *)this,(FEnvQueryResult *)param_1);
  ::FString::operator=(&this->QueryName,&param_1->QueryName);
  this->UniqueName = param_1->UniqueName;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar8 = (param_1->World).field0_0x0.DebugPtr, pUVar8 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->World).field0_0x0 = (param_1->World).field0_0x0;
  TDelegate<void___cdecl(TSharedPtr<FEnvQueryResult,1>),FDefaultDelegateUserPolicy>::operator=
            (&this->FinishDelegate,&param_1->FinishDelegate);
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::operator=
            (&this->NamedParams,&param_1->NamedParams);
  pTVar2 = &this->ContextCache;
  if (pTVar2 != &param_1->ContextCache) {
    DestructItems<FEnvQueryInstanceContextCacheItem,int>
              ((FEnvQueryInstanceContextCacheItem *)(pTVar2->AllocatorInstance).Data,
               (this->ContextCache).ArrayNum);
    iVar5 = (param_1->ContextCache).ArrayNum;
    piVar1 = &(this->ContextCache).ArrayMax;
    pFVar9 = (FEnvQueryInstanceContextCacheItem *)(param_1->ContextCache).AllocatorInstance.Data;
    (this->ContextCache).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar5,*piVar1,&pTVar2->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FEnvQueryInstanceContextCacheItem,FEnvQueryInstanceContextCacheItem,int>
                ((pTVar2->AllocatorInstance).Data,pFVar9,iVar5);
    }
  }
  pTVar3 = &this->Options;
  if (pTVar3 != &param_1->Options) {
    DestructItems<FEnvQueryOptionInstance,int>
              ((FEnvQueryOptionInstance *)(pTVar3->AllocatorInstance).Data,(this->Options).ArrayNum)
    ;
    iVar5 = (param_1->Options).ArrayNum;
    piVar1 = &(this->Options).ArrayMax;
    pFVar10 = (FEnvQueryOptionInstance *)(param_1->Options).AllocatorInstance.Data;
    (this->Options).ArrayNum = iVar5;
    if ((iVar5 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar5,*piVar1,&pTVar3->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FEnvQueryOptionInstance,FEnvQueryOptionInstance,int>
                ((pTVar3->AllocatorInstance).Data,pFVar10,iVar5);
    }
  }
  this->CurrentTest = param_1->CurrentTest;
  this->CurrentTestStartingItem = param_1->CurrentTestStartingItem;
  TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_>::operator=
            (&this->ItemDetails,&param_1->ItemDetails);
  this->NumValidItems = param_1->NumValidItems;
  this->ValueSize = param_1->ValueSize;
  this->NumProcessedItems = param_1->NumProcessedItems;
  bVar14 = (this->bStoreDebugInfo ^ param_1->bStoreDebugInfo) & 1 ^ this->field_0x10c;
  this->field_0x10c = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x10c) & 2 ^ bVar14;
  this->field_0x10c = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x10c) & 4 ^ bVar14;
  this->field_0x10c = bVar14;
  bVar14 = (bVar14 ^ param_1->field_0x10c) & 8 ^ bVar14;
  this->field_0x10c = bVar14;
  this->field_0x10c = (bVar14 ^ param_1->field_0x10c) & 0x10 ^ bVar14;
  this->StartTime = param_1->StartTime;
  this->TotalExecutionTime = param_1->TotalExecutionTime;
  this->CurrentStepTimeLimit = param_1->CurrentStepTimeLimit;
  this->GenerationTimeWarningSeconds = param_1->GenerationTimeWarningSeconds;
  this->Mode = param_1->Mode;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 = (param_1->ItemTypeVectorCDO).field0_0x0.DebugPtr,
     pUVar11 != (UEnvQueryItemType_VectorBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->ItemTypeVectorCDO).field0_0x0 = (param_1->ItemTypeVectorCDO).field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 = (param_1->ItemTypeActorCDO).field0_0x0.DebugPtr,
     pUVar12 != (UEnvQueryItemType_ActorBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->ItemTypeActorCDO).field0_0x0 = (param_1->ItemTypeActorCDO).field0_0x0;
  FEnvQueryDebugProfileData::operator=
            ((FEnvQueryDebugProfileData *)&this->DebugData,
             (FEnvQueryDebugProfileData *)&param_1->DebugData);
  TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DebugData).DebugItems,&(param_1->DebugData).DebugItems);
  TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DebugData).DebugItemDetails,&(param_1->DebugData).DebugItemDetails);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&(this->DebugData).RawData,&(param_1->DebugData).RawData);
  pTVar4 = &(param_1->DebugData).PerformedTestNames;
  pTVar15 = &(this->DebugData).PerformedTestNames;
  if (pTVar15 != pTVar4) {
    DestructItems<FString,int>
              ((FString *)(pTVar15->AllocatorInstance).Data,
               (this->DebugData).PerformedTestNames.ArrayNum);
    iVar5 = (param_1->DebugData).PerformedTestNames.ArrayNum;
    piVar1 = &(this->DebugData).PerformedTestNames.ArrayMax;
    pFVar13 = (pTVar4->AllocatorInstance).Data;
    iVar6 = *piVar1;
    (this->DebugData).PerformedTestNames.ArrayNum = iVar5;
    if ((iVar5 == 0) && (iVar6 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar5,iVar6,&pTVar15->AllocatorInstance,iVar5,piVar1);
      ConstructItems<FString,FString,int>
                ((pTVar15->AllocatorInstance).Data,(FString *)pFVar13,iVar5);
    }
  }
  uVar7 = *(undefined4 *)&(this->DebugData).field_0x60;
  *(uint *)&(this->DebugData).field_0x60 =
       (ZPULL(uVar7,0,1) ^ (param_1->DebugData).bSingleItemResult) & 1 ^ uVar7;
  (this->DebugData).CurrentOptionGeneratorIdx = (param_1->DebugData).CurrentOptionGeneratorIdx;
  (this->StatId).StatIdPtr = (param_1->StatId).StatIdPtr;
  return this;
}

// DecStats @ 146f3f920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::DecStats(FEnvQueryInstance *this)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems> FVar7;
  uchar auVar8 [8];
  FName local_res8;
  FStatMessage local_38;
  
  uVar2 = GetAllocatedSize(this);
  auVar8[4] = '\0';
  auVar8[5] = '\0';
  auVar8[6] = '\0';
  auVar8[7] = '\0';
  auVar8[0] = (char)uVar2;
  auVar8[1] = (char)(uVar2 >> 8);
  auVar8[2] = (char)(uVar2 >> 0x10);
  auVar8[3] = (char)(uVar2 >> 0x18);
  if (uVar2 != 0) {
    FVar4 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_AI_EQS_InstanceMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar3,
                         L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                         L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar8);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  auVar8 = (uchar  [8])(longlong)(int)this->_padding_;
  if ((auVar8 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar7 = StatPtr_STAT_AI_EQS_NumItems;
    if (StatPtr_STAT_AI_EQS_NumItems == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_AI_EQS_NumItems");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_NumItems,*pFVar3,
                         L"Num Items","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",
                         true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar7;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar8);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  return;
}

// ExecuteOneStep @ 146f47020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FEnvQueryInstance::ExecuteOneStep(FEnvQueryInstance *this,double param_1)

{
  int *piVar1;
  float *pfVar2;
  FName FVar3;
  TAtomic<FMinimalName> TVar4;
  UObject *pUVar5;
  UObjectBaseUtility *pUVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_ExecuteOneStep> FVar19;
  TStatId TVar20;
  FThreadStats *pFVar21;
  FThreadStatsPool *pFVar22;
  UClass *pUVar23;
  UClass *pUVar24;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar25;
  byte bVar26;
  uint uVar27;
  UClass *pUVar28;
  uint uVar29;
  longlong lVar30;
  FNameEntryId FVar31;
  int iVar32;
  uint uVar33;
  FScriptContainerElement *this_00;
  uchar auVar34 [8];
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  uint local_res20;
  TArray<UEnvQueryGenerator_*,TSizedDefaultAllocator<32>_> local_1d8;
  FScriptContainerElement *local_1c8;
  FName local_1c0;
  byte local_1b8;
  FName local_1b0;
  byte local_1a8;
  FName local_1a0;
  byte local_198;
  uint local_190;
  uint uStack_18c;
  FColor_u_0 local_188;
  FColor_u_0 local_184;
  FColor_u_0 local_180 [2];
  FName local_178;
  byte local_170;
  FName local_168;
  byte local_160;
  FName local_158;
  byte local_150;
  FName local_148;
  byte local_140;
  FName local_138;
  FName local_130;
  FName local_128;
  longlong local_120;
  LARGE_INTEGER local_118;
  FName local_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  LARGE_INTEGER local_f0;
  FName local_e8;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FName local_c0 [4];
  FName local_a0;
  FName local_98 [12];
  
  bVar10 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)&this->_padding_ + 4));
  if (!bVar10) {
    *(undefined4 *)&this->_padding_ = 4;
    return;
  }
  if (((int)this->_padding_ != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsFinished() == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                          ,300,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = *(int *)((longlong)&this->_padding_ + 4);
  if ((iVar16 < 0) || ((this->Options).ArrayNum <= iVar16)) {
    iVar16 = *(int *)((longlong)&this->_padding_ + 4);
    this->NumValidItems = 0;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar16 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)this,0,(int *)((longlong)&this->_padding_ + 4));
    }
    *(undefined4 *)&this->_padding_ = 2;
    return;
  }
  pUVar28 = (UClass *)0x0;
  iVar16 = 0;
  uVar29 = 0;
  FVar19 = StatPtr_STAT_AI_EQS_ExecuteOneStep;
  if (StatPtr_STAT_AI_EQS_ExecuteOneStep ==
      (FThreadSafeStaticStat<FStat_STAT_AI_EQS_ExecuteOneStep>)0x0) {
    pFVar18 = ::FName::FName(local_c0,"STAT_AI_EQS_ExecuteOneStep");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_ExecuteOneStep>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_ExecuteOneStep,*pFVar18,
                        L"Execute One Step Time","STATGROUP_AI_EQS","STATCAT_Advanced",
                        L"Environment Query",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1a0.ComparisonIndex.Value = 0;
  local_1a0.Number = 0;
  local_198 = 0;
  FVar3 = *(FName *)FVar19;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      local_198 = local_198 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_138.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_138.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_138,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                   ,0x135);
        local_198 = local_198 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a0 = FVar3;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      local_198 = local_198 | 4;
    }
  }
  uVar17 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar13 = uVar29;
  if ((int)uVar17 < (this->Options).ArrayNum) {
    uVar13 = ~uVar17 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_00 = (this->Options).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x30;
  local_1c8 = this_00;
  QueryPerformanceCounter(&local_118);
  dVar8 = __real_4170000000000000;
  iVar32 = *(int *)&this_00[0x10].field_0x0;
  iVar14 = this->CurrentTest;
  bVar10 = true;
  local_120 = 8;
  dVar38 = (double)local_118.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->bIsCurrentlyRunningAsync = '\0';
  dVar9 = __real_3f60000000000000;
  this->CurrentStepTimeLimit = param_1;
  dVar38 = dVar38 + dVar8;
  uVar17 = 0;
  if (iVar14 < 0) {
    bVar10 = true;
    local_res20 = 0;
    cVar11 = (**(code **)(**(longlong **)this_00 + 0x2c8))();
    if (cVar11 == '\0') {
      TVar20 = FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_GeneratorTime,1>::GetStatId
                         ((FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_GeneratorTime,1> *)
                          &StatPtr_STAT_AI_EQS_GeneratorTime);
      TVar4 = (TVar20.StatIdPtr)->Name;
      local_1c0.ComparisonIndex.Value = 0;
      local_1c0.Number = 0;
      local_1b8 = 0;
      FVar3 = *(FName *)TVar4;
      FVar31 = FVar3.ComparisonIndex.Value;
      uVar13 = FVar3.Number;
      if ((FVar31.Value != 0) || (uVar13 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_184.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_184._s_0,(char *)*(FName *)((longlong)TVar4 + 0x10));
          local_1b8 = local_1b8 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_130.ComparisonIndex.Value = FVar31.Value;
            local_130.Number = uVar13;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_130,(wchar_t *)*(FName *)((longlong)TVar4 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                       ,0x147);
            local_1b8 = local_1b8 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_1c0 = FVar3;
          local_190 = FVar31.Value;
          uStack_18c = uVar13;
          FThreadStats::AddMessage(FVar3,CycleScopeStart);
          local_1b8 = local_1b8 | 4;
        }
      }
      auVar34 = (uchar  [8])(longlong)(int)this->_padding_;
      if ((auVar34 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
        TVar20 = FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_NumItems,1>::GetStatId
                           ((FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_NumItems,1> *)
                            &StatPtr_STAT_AI_EQS_NumItems);
        FVar3 = *(FName *)(TVar20.StatIdPtr)->Name;
        FVar31 = FVar3.ComparisonIndex.Value;
        uVar13 = FVar3.Number;
        local_190 = FVar31.Value;
        uStack_18c = uVar13;
        if ((FVar3 != (FName)0x0) &&
           ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff))
           )) {
          pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar21 == (FThreadStats *)0x0) {
            pFVar22 = FThreadStatsPool::Get();
            pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
          }
          local_e0.NameAndInfo.Number = uVar13 & 0xffffbfff | 0xb000;
          local_110 = FVar3;
          local_e0.StatData.Pad = auVar34;
          local_e0.NameAndInfo.Index.Value = FVar31.Value;
          FThreadStats::AddStatMessage(pFVar21,&local_e0);
          FStatsTrace::Add(&local_110,-(longlong)auVar34);
          if (pFVar21->ScopeCount == 0) {
            FThreadStats::Flush(pFVar21,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar21,false,false);
          }
        }
      }
      iVar32 = *(int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar32 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this->_padding_,0,
                   (int *)((longlong)&this->_padding_ + 4));
      }
      iVar32 = *(int *)((longlong)&this->_padding_ + 4);
      *(undefined4 *)&this->_padding_ = 0;
      if (iVar32 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,0,(ForAnyElementType *)this,0,(int *)((longlong)&this->_padding_ + 4));
      }
      TSubclassOf<UEnvQueryItemType>::operator=
                ((TSubclassOf<UEnvQueryItemType> *)&this->_padding_,
                 (TSubclassOf<UEnvQueryItemType> *)(this_00 + 0x20));
      this->bPassOnSingleResult = '\0';
      lVar30 = this->_padding_;
      pUVar24 = pUVar28;
      if ((lVar30 != 0) && (pUVar23 = UEnvQueryItemType::StaticClass(), pUVar23 != (UClass *)0x0)) {
        iVar32 = (int)pUVar23->_padding_;
        if ((*(int *)(lVar30 + 0x38) < iVar32) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar30 + 0x30) + (longlong)iVar32 * 8) !=
            &pUVar23->_padding_)) {
          bVar12 = false;
        }
        else {
          bVar12 = true;
        }
        if (bVar12) {
          pUVar24 = (UClass *)this->_padding_;
        }
      }
      if ((pUVar24->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar24);
      }
      pUVar5 = (pUVar24->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar24 = UEnvQueryItemType::StaticClass();
      lVar30 = *(longlong *)&pUVar5->field_0x10;
      iVar32 = (int)pUVar24->_padding_;
      if (((*(int *)(lVar30 + 0x38) < iVar32) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar30 + 0x30) + (longlong)iVar32 * 8) !=
           &pUVar24->_padding_)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ret->IsA(T::StaticClass())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                              ,0x1181,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      this->ValueSize = *(ushort *)(pUVar5 + 1);
      if (this->bStoreDebugInfo != 0) {
        if (*(longlong *)this_00 == 0) {
LAB_146f477b3:
          local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.ArrayNum = 0;
          local_1d8.ArrayMax = 0;
        }
        else {
          pUVar24 = UEnvQueryGenerator_Composite::StaticClass();
          bVar12 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar24);
          if (!bVar12) goto LAB_146f477b3;
          local_1d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.ArrayNum = 0;
          local_1d8.ArrayMax = 0;
          if (*(longlong *)this_00 != 0) {
            TArray<UEnvQueryGenerator_*,TSizedDefaultAllocator<32>_>::
            Append<TObjectPtr<UEnvQueryGenerator>,TSizedDefaultAllocator<32>_>
                      (&local_1d8,
                       (TArray<TObjectPtr<UEnvQueryGenerator>,TSizedDefaultAllocator<32>_> *)
                       (*(longlong *)this_00 + 0x50));
            pUVar24 = pUVar28;
            pUVar23 = pUVar28;
            iVar32 = local_1d8.ArrayNum;
            if (0 < local_1d8.ArrayNum) {
              do {
                uVar27 = (uint)pUVar24;
                uVar13 = uVar29;
                if ((int)uVar27 < iVar32) {
                  uVar13 = ~uVar27 >> 0x1f;
                }
                if (uVar13 == 0) {
                  bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar12) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar32 = local_1d8.ArrayNum;
                }
                lVar30 = *(longlong *)(local_1d8.AllocatorInstance.Data + (longlong)pUVar23);
                if (lVar30 != 0) {
                  pUVar24 = UEnvQueryGenerator_Composite::StaticClass();
                  iVar32 = (int)pUVar24->_padding_;
                  if ((*(int *)(*(longlong *)(lVar30 + 0x10) + 0x38) < iVar32) ||
                     ((longlong *)
                      *(undefined1 **)
                       (*(longlong *)(*(longlong *)(lVar30 + 0x10) + 0x30) + (longlong)iVar32 * 8)
                      != &pUVar24->_padding_)) {
                    iVar32 = local_1d8.ArrayNum;
                  }
                  else {
                    if ((&local_1d8 ==
                         (TArray<UEnvQueryGenerator_*,TSizedDefaultAllocator<32>_> *)(lVar30 + 0x50)
                        ) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(void*)this != (void*)&Source",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x96e,L""), bVar12)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    iVar32 = *(int *)(lVar30 + 0x58);
                    if (iVar32 != 0) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (8,8,iVar32,&local_1d8.AllocatorInstance,
                                          &local_1d8.ArrayNum,&local_1d8.ArrayMax);
                      ConstructItems<UEnvQueryGenerator_*,TObjectPtr<UEnvQueryGenerator>,int>
                                (local_1d8.AllocatorInstance.Data + (longlong)iVar14 * 8,
                                 (TObjectPtr<UEnvQueryGenerator> *)
                                 (((TArray<UEnvQueryGenerator_*,TSizedDefaultAllocator<32>_> *)
                                  (lVar30 + 0x50))->AllocatorInstance).Data,iVar32);
                    }
                    uVar13 = uVar17;
                    if ((int)uVar27 < local_1d8.ArrayNum) {
                      uVar13 = ~uVar27 >> 0x1f;
                    }
                    if (uVar13 == 0) {
                      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar12) {
                        pcVar7 = (code *)swi(3);
                        (*pcVar7)();
                        return;
                      }
                    }
                    iVar14 = (local_1d8.ArrayNum - uVar27) + -1;
                    iVar32 = local_1d8.ArrayNum;
                    if (iVar14 != 0) {
                      memmove(local_1d8.AllocatorInstance.Data + (longlong)(int)uVar27 * 8,
                              local_1d8.AllocatorInstance.Data + (longlong)(int)uVar27 * 8 + 8,
                              (longlong)iVar14 << 3);
                      iVar32 = local_1d8.ArrayNum;
                    }
                    uVar27 = uVar27 - 1;
                    local_1d8.ArrayNum = iVar32 + -1;
                    pUVar23 = (UClass *)&pUVar23[-1].NativeFunctionLookupTable.ArrayNum;
                    iVar32 = iVar32 + -1;
                  }
                }
                pUVar24 = (UClass *)(ulonglong)(uVar27 + 1);
                pUVar23 = (UClass *)&pUVar23->_padding_;
                this_00 = local_1c8;
              } while ((int)(uVar27 + 1) < iVar32);
            }
          }
        }
        FEnvQueryDebugData::PrepareOption(&this->DebugData,this,&local_1d8,*(int *)(this_00 + 0x10))
        ;
        dVar37 = dVar38;
        if (local_1d8.ArrayNum != 0) {
          bVar10 = false;
          (this->DebugData).CurrentOptionGeneratorIdx = 0;
          uVar27 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
          uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
          pUVar24 = pUVar28;
          pUVar23 = pUVar28;
          if (0 < local_1d8.ArrayNum + -1) {
            do {
              uVar33 = (uint)pUVar24;
              uVar15 = uVar17;
              if ((int)uVar33 < local_1d8.ArrayNum) {
                uVar15 = ~uVar33 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FScopeCycleCounterUObject::FScopeCycleCounterUObject
                        ((FScopeCycleCounterUObject *)&local_178,
                         *(UObjectBaseUtility **)
                          (local_1d8.AllocatorInstance.Data + (longlong)pUVar23));
              uVar15 = uVar17;
              if ((int)uVar33 < local_1d8.ArrayNum) {
                uVar15 = ~uVar33 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              (**(code **)(**(longlong **)(local_1d8.AllocatorInstance.Data + (longlong)pUVar23) +
                          0x2d0))(*(longlong **)
                                   (local_1d8.AllocatorInstance.Data + (longlong)pUVar23),this);
              if ((local_170 & 1) != 0) {
                FGenericPlatformMisc::EndNamedEvent();
              }
              if ((local_170 & 2) != 0) {
                FCpuProfilerTrace::OutputEndEvent();
              }
              if ((local_170 & 4) != 0) {
                FThreadStats::AddMessage(local_178,CycleScopeEnd);
              }
              local_170 = 0;
              QueryPerformanceCounter(&local_108);
              lVar30 = this->_padding_;
              iVar32 = (int)pUVar28;
              local_res20 = (uint)this->_padding_;
              pUVar28 = (UClass *)(ulonglong)local_res20;
              dVar37 = (double)local_108.QuadPart * FGenericPlatformTime::SecondsPerCycle;
              piVar1 = &(this->DebugData).CurrentOptionGeneratorIdx;
              *piVar1 = *piVar1 + 1;
              this->NumProcessedItems = (int)lVar30 - iVar32;
              dVar37 = dVar37 + dVar8;
              this->StartTime = dVar37;
              dVar38 = dVar37 - dVar38;
              this->TotalExecutionTime = dVar38 + this->TotalExecutionTime;
              dVar36 = (double)(float)dVar38 - dVar38;
              if ((dVar9 < (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) & uVar27,
                                            SUB84(dVar36,0) & uVar13)) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("FloatFitsIn<OutType>(In, Precision)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                                      ,0xc0,L"Loss of data caused by narrowing conversion"), bVar12)
                 ) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FEnvQueryDebugData::Store(&this->DebugData,this,(float)dVar38,false);
              this->NumProcessedItems = 0;
              this_00 = local_1c8;
              pUVar24 = (UClass *)(ulonglong)(uVar33 + 1);
              pUVar23 = (UClass *)&pUVar23->_padding_;
              dVar38 = dVar37;
            } while ((int)(uVar33 + 1) < local_1d8.ArrayNum + -1);
          }
          uVar13 = uVar17;
          if ((int)(local_1d8.ArrayNum - 1U) < local_1d8.ArrayNum) {
            uVar13 = ~(local_1d8.ArrayNum - 1U) >> 0x1f;
          }
          iVar32 = local_1d8.ArrayNum;
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar32 = local_1d8.ArrayNum;
          }
          FScopeCycleCounterUObject::FScopeCycleCounterUObject
                    ((FScopeCycleCounterUObject *)&local_168,
                     *(UObjectBaseUtility **)
                      (local_1d8.AllocatorInstance.Data + (longlong)(iVar32 + -1) * 8));
          uVar13 = uVar17;
          if ((int)(local_1d8.ArrayNum - 1U) < local_1d8.ArrayNum) {
            uVar13 = ~(local_1d8.ArrayNum - 1U) >> 0x1f;
          }
          if (uVar13 == 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar12) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          (**(code **)(**(longlong **)
                         (local_1d8.AllocatorInstance.Data + (longlong)(local_1d8.ArrayNum + -1) * 8
                         ) + 0x2d0))
                    (*(longlong **)
                      (local_1d8.AllocatorInstance.Data + (longlong)(local_1d8.ArrayNum + -1) * 8),
                     this);
          if ((local_160 & 1) != 0) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if ((local_160 & 2) != 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((local_160 & 4) != 0) {
            FThreadStats::AddMessage(local_168,CycleScopeEnd);
          }
          local_160 = 0;
          (this->DebugData).CurrentOptionGeneratorIdx = -1;
        }
        dVar38 = dVar37;
        if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.AllocatorInstance.Data);
        }
      }
      if ((local_1b8 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_1b8 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_1b8 & 4) != 0) {
        FThreadStats::AddMessage(local_1c0,CycleScopeEnd);
      }
      local_1b8 = 0;
      if (bVar10) goto LAB_146f47b44;
    }
    else {
LAB_146f47b44:
      QueryPerformanceCounter(&local_100);
      dVar37 = (double)local_100.QuadPart * FGenericPlatformTime::SecondsPerCycle;
      FScopeCycleCounterUObject::FScopeCycleCounterUObject
                ((FScopeCycleCounterUObject *)&local_158,*(UObjectBaseUtility **)this_00);
      (**(code **)(**(longlong **)this_00 + 0x2d0))(*(longlong **)this_00,this);
      QueryPerformanceCounter(&local_f8);
      if ((this->GenerationTimeWarningSeconds <=
           (double)local_f8.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar37) &&
         (2 < (byte)LogEQS._0_1_)) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
      }
      if ((local_150 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_150 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_150 & 4) != 0) {
        FThreadStats::AddMessage(local_158,CycleScopeEnd);
      }
      local_150 = 0;
    }
    cVar11 = (**(code **)(**(longlong **)this_00 + 0x2c8))();
    bVar26 = (cVar11 << 4 | this->field_0x10c) & 0x10U ^ this->field_0x10c & 0xef;
    this->field_0x10c = bVar26;
    bVar10 = (bool)(~(bVar26 >> 4) & 1);
    if (bVar10 != false) {
      FinalizeGeneration(this);
    }
    this->NumProcessedItems = (int)this->_padding_ - local_res20;
  }
  else if (iVar14 < *(int *)&this_00[0x10].field_0x0) {
    TVar20 = FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_TestTime,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_AI_EQS_TestTime,1> *)
                        &StatPtr_STAT_AI_EQS_TestTime);
    TVar4 = (TVar20.StatIdPtr)->Name;
    local_1b0.ComparisonIndex.Value = 0;
    local_1b0.Number = 0;
    local_1a8 = 0;
    FVar3 = *(FName *)TVar4;
    if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_180[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_180[0]._s_0,(char *)*(FName *)((longlong)TVar4 + 0x10));
        local_1a8 = local_1a8 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_128.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
          local_128.Number = FVar3.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_128,(wchar_t *)*(FName *)((longlong)TVar4 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                     ,0x1aa);
          local_1a8 = local_1a8 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_1b0 = FVar3;
        FThreadStats::AddMessage(FVar3,CycleScopeStart);
        local_1a8 = local_1a8 | 4;
      }
    }
    this_00 = local_1c8;
    uVar13 = this->CurrentTest;
    uVar27 = uVar17;
    if ((int)uVar13 < *(int *)(local_1c8 + 0x10)) {
      uVar27 = ~uVar13 >> 0x1f;
    }
    if ((uVar27 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pUVar6 = *(UObjectBaseUtility **)(*(longlong *)(this_00 + 8) + (longlong)(int)uVar13 * 8);
    cVar11 = (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6);
    if (cVar11 == '\0') {
      if ((((iVar14 < iVar32 + -1) || (this->Mode != SingleResult)) ||
          (pUVar6[1].field_0xc == '\x01')) ||
         ((pUVar6[1].field_0xc != '\0' && (pUVar6[6].field_0x9 != '\x04')))) {
        this->bPassOnSingleResult = '\0';
      }
      else {
        this->bPassOnSingleResult = '\x01';
        if ((this->CurrentTestStartingItem == 0) &&
           (pUVar24 = pUVar28, 0 < *(int *)(this_00 + 0x10) + -1)) {
          do {
            uVar27 = (uint)pUVar28;
            uVar13 = uVar17;
            if ((int)uVar27 < *(int *)(this_00 + 0x10)) {
              uVar13 = ~uVar27 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar10)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            if (*(char *)(*(longlong *)((longlong)&pUVar24->_padding_ + *(longlong *)(this_00 + 8))
                         + 0x34) != '\0') {
              SortScores(this);
              break;
            }
            pUVar28 = (UClass *)(ulonglong)(uVar27 + 1);
            pUVar24 = (UClass *)&pUVar24->_padding_;
          } while ((int)(uVar27 + 1) < *(int *)(this_00 + 0x10) + -1);
        }
      }
    }
    iVar32 = this->CurrentTestStartingItem;
    FScopeCycleCounterUObject::FScopeCycleCounterUObject
              ((FScopeCycleCounterUObject *)&local_148,pUVar6);
    (**(code **)(*(longlong *)pUVar6 + 0x2d0))(pUVar6,this);
    if ((local_140 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_140 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_140 & 4) != 0) {
      FThreadStats::AddMessage(local_148,CycleScopeEnd);
    }
    local_140 = 0;
    cVar11 = (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6);
    bVar26 = (cVar11 << 4 | this->field_0x10c) & 0x10U ^ this->field_0x10c & 0xef;
    this->field_0x10c = bVar26;
    if (((bVar26 & 0x10) == 0) &&
       ((((int)this->_padding_ <= this->CurrentTestStartingItem || ((bVar26 & 2) != 0)) ||
        (iVar32 == this->CurrentTestStartingItem)))) {
      bVar10 = true;
      FinalizeTest(this);
    }
    else {
      bVar10 = false;
    }
    if ((local_1a8 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_1a8 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_1a8 & 4) != 0) {
      FThreadStats::AddMessage(local_1b0,CycleScopeEnd);
    }
    local_1a8 = 0;
  }
  else if (2 < (byte)LogEQS._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
  }
  QueryPerformanceCounter(&local_f0);
  bVar26 = this->field_0x10c;
  dVar38 = ((double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar8) - dVar38;
  this->TotalExecutionTime = dVar38 + this->TotalExecutionTime;
  if (this->bStoreDebugInfo == '\x01' && this->bIsCurrentlyRunningAsync == '\0') {
    fVar35 = FloatCastChecked<float,double>(dVar38,dVar9);
    FEnvQueryDebugData::Store(&this->DebugData,this,fVar35,bVar10);
    bVar26 = this->field_0x10c;
  }
  if (bVar10 != false) {
    this->CurrentTest = this->CurrentTest + 1;
    this->CurrentTestStartingItem = 0;
    this->NumProcessedItems = 0;
  }
  if (((bVar26 & 0x10) != 0) || ((int)this->_padding_ != 0)) goto LAB_146f484e0;
  if (*(int *)(this_00 + 0x10) == this->CurrentTest) {
    if (0 < this->NumValidItems) {
      uVar13 = *(uint *)((longlong)&this->_padding_ + 4);
      cVar11 = '\0';
      if ((int)uVar13 < (this->Options).ArrayNum) {
        uVar17 = ~uVar13 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar30 = *(longlong *)((this->Options).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30);
      if (lVar30 != 0) {
        cVar11 = *(char *)(lVar30 + 0x4c);
      }
      if (this->Mode == SingleResult) {
        if (this->bFoundSingleResult == '\0' && this->bPassOnSingleResult == '\0') {
          SortScores(this);
          if (cVar11 == '\x01') {
            NormalizeScores(this);
          }
          iVar16 = 0;
LAB_146f484bd:
          PickSingleItem(this,iVar16);
        }
      }
      else {
        if (this->Mode - RandomBest5Pct < 2) {
          SortScores(this);
          if (cVar11 == '\x01') {
            NormalizeScores(this);
          }
          fVar35 = __real_3f400000;
          if (this->Mode == RandomBest5Pct) {
            fVar35 = __real_3f733333;
          }
          if (((int)this->_padding_ < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar17 = this->NumValidItems;
          fVar35 = fVar35 * *(float *)this->_padding_;
          uVar13 = uVar17;
          uVar27 = 1;
          if ((int)uVar17 < 2) {
LAB_146f4847d:
            uVar17 = uVar13;
            if ((int)uVar13 < 1) goto LAB_146f484bd;
          }
          else {
            do {
              uVar13 = uVar27;
              uVar27 = uVar29;
              if ((int)uVar13 < (int)this->_padding_) {
                uVar27 = ~uVar13 >> 0x1f;
              }
              if ((uVar27 == 0) &&
                 (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar10)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pfVar2 = (float *)(local_120 + this->_padding_);
              if (*pfVar2 <= fVar35 && fVar35 != *pfVar2) goto LAB_146f4847d;
              local_120 = local_120 + 8;
              uVar27 = uVar13 + 1;
            } while ((int)(uVar13 + 1) < this->NumValidItems);
          }
          UAISystem::RandomStream.Seed = UAISystem::RandomStream.Seed * 0xbb38435 + 0x3619636b;
          iVar16 = (int)(((float)(UAISystem::RandomStream.Seed >> 9 | 0x3f800000) - __real_3f800000)
                        * (float)(int)uVar17);
          goto LAB_146f484bd;
        }
        SortScores(this);
        lVar30 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
        auVar34 = (uchar  [8])(lVar30 * 8);
        if (auVar34 != (uchar  [8])0x0) {
          FVar25 = StatPtr_STAT_AI_EQS_InstanceMemory;
          if (StatPtr_STAT_AI_EQS_InstanceMemory ==
              (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
            pFVar18 = ::FName::FName(&local_a0,"STAT_AI_EQS_InstanceMemory");
            FVar25 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,
                                *pFVar18,L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                                L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
          }
          FVar3 = *(FName *)FVar25;
          if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar21 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar21 == (FThreadStats *)0x0) {
              pFVar22 = FThreadStatsPool::Get();
              pFVar21 = FThreadStatsPool::GetFromPool(pFVar22);
            }
            local_d0.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
            local_e8 = FVar3;
            local_d0.StatData.Pad = auVar34;
            local_d0.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar21,&local_d0);
            FStatsTrace::Add(&local_e8,lVar30 * -8);
            if (pFVar21->ScopeCount == 0) {
              FThreadStats::Flush(pFVar21,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar21,false,false);
            }
          }
        }
        TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_>::SetNum
                  ((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)this,this->NumValidItems,
                   Default);
        lVar30 = (longlong)*(int *)((longlong)&this->_padding_ + 4) << 3;
        if (lVar30 != 0) {
          FVar25 = StatPtr_STAT_AI_EQS_InstanceMemory;
          if (StatPtr_STAT_AI_EQS_InstanceMemory ==
              (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
            pFVar18 = ::FName::FName(local_98,"STAT_AI_EQS_InstanceMemory");
            FVar25 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,
                                *pFVar18,L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                                L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
          }
          FThreadStats::AddMessage<__int64>(*(FName *)FVar25,Add,lVar30,false);
        }
        if ((cVar11 == '\0') || (cVar11 == '\x01')) {
          NormalizeScores(this);
          *(undefined4 *)&this->_padding_ = 1;
          goto LAB_146f484e0;
        }
      }
      *(undefined4 *)&this->_padding_ = 1;
      goto LAB_146f484e0;
    }
  }
  else if (0 < this->NumValidItems) goto LAB_146f484e0;
  iVar16 = *(int *)((longlong)&this->_padding_ + 4) + 1;
  if (iVar16 < (this->Options).ArrayNum) {
    *(int *)((longlong)&this->_padding_ + 4) = iVar16;
    this->CurrentTest = -1;
  }
  else {
    FinalizeQuery(this);
  }
LAB_146f484e0:
  if ((local_198 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_198 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_198 & 4) != 0) {
    FThreadStats::AddMessage(local_1a0,CycleScopeEnd);
  }
  return;
}

// FinalizeGeneration @ 146f48790

/* WARNING: Removing unreachable block (ram,0x000146f48ced) */
/* WARNING: Removing unreachable block (ram,0x000146f48cfb) */
/* WARNING: Removing unreachable block (ram,0x000146f48d09) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::FinalizeGeneration(FEnvQueryInstance *this)

{
  int *piVar1;
  TArray<FEnvQueryItemDetails,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FEnvQueryItemDetails *pFVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar14;
  FThreadStats *pFVar15;
  FThreadStatsPool *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems> FVar17;
  UClass *pUVar18;
  UClass *pUVar19;
  UEnvQueryItemType_VectorBase *pUVar20;
  FScriptContainerElement *pFVar21;
  UClass *pUVar22;
  uchar auVar23 [8];
  FName local_res18;
  FName local_res20;
  ForAnyElementType local_d8;
  int local_d0 [2];
  ForAnyElementType local_c8;
  int local_c0 [4];
  undefined8 local_b0;
  undefined8 local_a8;
  FName local_a0;
  FStatMessage local_98;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  UClass *this_00;
  
  uVar3 = *(uint *)((longlong)&this->_padding_ + 4);
  this_00 = (UClass *)0x0;
  pUVar22 = (UClass *)0x0;
  uVar10 = 0;
  if ((int)uVar3 < (this->Options).ArrayNum) {
    uVar10 = ~uVar3 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  piVar1 = &(this->ItemDetails).ArrayMax;
  iVar4 = *(int *)((this->Options).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x30 + 0x10);
  iVar11 = *piVar1;
  auVar23 = (uchar  [8])((longlong)iVar11 * 0x38);
  if (auVar23 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar13 = ::FName::FName(&local_68,"STAT_AI_EQS_InstanceMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar13,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar14;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      local_98.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
      local_res18 = FVar5;
      local_98.StatData.Pad = auVar23;
      local_98.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar15,&local_98);
      FStatsTrace::Add(&local_res18,(longlong)iVar11 * -0x38);
      if (pFVar15->ScopeCount == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  auVar23 = (uchar  [8])(longlong)(int)this->_padding_;
  if ((auVar23 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar17 = StatPtr_STAT_AI_EQS_NumItems;
    if (StatPtr_STAT_AI_EQS_NumItems == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems>)0x0) {
      pFVar13 = ::FName::FName(&local_60,"STAT_AI_EQS_NumItems");
      FVar17 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_NumItems,*pFVar13,
                          L"Num Items","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",
                          true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar5 = *(FName *)FVar17;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      local_88.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_res20 = FVar5;
      local_88.StatData.Pad = auVar23;
      local_88.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar15,&local_88);
      FStatsTrace::Add(&local_res20,(long64)auVar23);
      if (pFVar15->ScopeCount == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  pTVar2 = &this->ItemDetails;
  this->NumValidItems = (int)this->_padding_;
  pFVar6 = (FEnvQueryItemDetails *)(pTVar2->AllocatorInstance).Data;
  iVar11 = (this->ItemDetails).ArrayNum;
  if ((this->ItemDetails).ArrayMax < 0) {
    DestructItems<FEnvQueryItemDetails,int>(pFVar6,iVar11);
    (this->ItemDetails).ArrayNum = 0;
    if ((this->ItemDetails).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FEnvQueryItemDetails,int>(pFVar6,iVar11);
    (this->ItemDetails).ArrayNum = 0;
  }
  this->bFoundSingleResult = '\0';
  iVar11 = this->NumValidItems;
  if (0 < iVar11) {
    if ((this->ItemDetails).ArrayMax < iVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,iVar11,&pTVar2->AllocatorInstance,(this->ItemDetails).ArrayNum,piVar1);
    }
    if (0 < this->NumValidItems) {
      pUVar18 = this_00;
      do {
        local_d8.Data = (FScriptContainerElement *)0x0;
        local_d0[0] = 0;
        local_d0[1] = 0;
        local_c8.Data = (FScriptContainerElement *)0x0;
        local_c0[0] = 0;
        local_c0[1] = 0;
        local_b0 = 0;
        local_a8 = 0;
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar4,&local_d8,local_d0,local_d0 + 1);
        memset(local_d8.Data + (longlong)iVar11 * 4,0,(longlong)iVar4 << 2);
        iVar11 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,iVar4,&local_c8,local_c0,local_c0 + 1);
        memset(local_c8.Data + (longlong)iVar11 * 4,0,(longlong)iVar4 << 2);
        pFVar21 = (pTVar2->AllocatorInstance).Data;
        iVar11 = (int)pUVar18;
        local_c0[2] = 0xffffffff;
        local_c0[3] = iVar11;
        if (((pFVar21 <= (FScriptContainerElement *)&local_d8) &&
            ((FScriptContainerElement *)&local_d8 <
             pFVar21 + (longlong)(this->ItemDetails).ArrayMax * 0x38)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar12 = (this->ItemDetails).ArrayNum;
        if (iVar12 == (this->ItemDetails).ArrayMax) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar2->AllocatorInstance,&(this->ItemDetails).ArrayMax);
        }
        (this->ItemDetails).ArrayNum = iVar12 + 1;
        pFVar21 = (pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 0x38;
        *(undefined8 *)pFVar21 = 0;
        *(FScriptContainerElement **)pFVar21 = local_d8.Data;
        *(int *)(pFVar21 + 8) = local_d0[0];
        *(int *)(pFVar21 + 0xc) = local_d0[1];
        *(undefined8 *)(pFVar21 + 0x10) = 0;
        *(FScriptContainerElement **)(pFVar21 + 0x10) = local_c8.Data;
        *(int *)(pFVar21 + 0x18) = local_c0[0];
        *(int *)(pFVar21 + 0x1c) = local_c0[1];
        *(int *)(pFVar21 + 0x20) = local_c0[2];
        *(undefined8 *)(pFVar21 + 0x28) = 0;
        *(int *)(pFVar21 + 0x24) = local_c0[3];
        *(undefined8 *)(pFVar21 + 0x28) = local_b0;
        *(undefined4 *)(pFVar21 + 0x30) = (undefined4)local_a8;
        *(undefined4 *)(pFVar21 + 0x34) = local_a8._4_4_;
        local_a8 = 0;
        local_b0 = 0;
        local_c0[0] = 0;
        local_c0[1] = 0;
        local_c8.Data = (FScriptContainerElement *)0x0;
        local_d0[0] = 0;
        local_d0[1] = 0;
        local_d8.Data = (FScriptContainerElement *)0x0;
        pUVar18 = (UClass *)(ulonglong)(iVar11 + 1U);
      } while ((int)(iVar11 + 1U) < this->NumValidItems);
    }
  }
  auVar23 = (uchar  [8])((longlong)(this->ItemDetails).ArrayMax * 0x38);
  if (auVar23 != (uchar  [8])0x0) {
    FVar14 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar13 = ::FName::FName(local_58,"STAT_AI_EQS_InstanceMemory");
      FVar14 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar13,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar14;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar15 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar15 == (FThreadStats *)0x0) {
        pFVar16 = FThreadStatsPool::Get();
        pFVar15 = FThreadStatsPool::GetFromPool(pFVar16);
      }
      local_78.NameAndInfo.Number = FVar5.Number & 0xffffafff | 0xa000;
      local_a0 = FVar5;
      local_78.StatData.Pad = auVar23;
      local_78.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar15,&local_78);
      FStatsTrace::Add(&local_a0,(long64)auVar23);
      if (pFVar15->ScopeCount == 0) {
        FThreadStats::Flush(pFVar15,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar15,false,false);
      }
    }
  }
  lVar7 = this->_padding_;
  if ((lVar7 != 0) && (pUVar18 = UEnvQueryItemType::StaticClass(), pUVar18 != (UClass *)0x0)) {
    iVar4 = (int)pUVar18->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar18->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) && (lVar7 = this->_padding_, lVar7 != 0)) {
      pUVar19 = UEnvQueryItemType::StaticClass();
      pUVar18 = this_00;
      if (pUVar19 != (UClass *)0x0) {
        iVar4 = (int)pUVar19->_padding_;
        if ((*(int *)(lVar7 + 0x38) < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar19->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          pUVar18 = (UClass *)this->_padding_;
        }
      }
      pUVar19 = UEnvQueryItemType_VectorBase::StaticClass();
      if (pUVar19 != (UClass *)0x0) {
        iVar4 = (int)pUVar19->_padding_;
        if (((int)pUVar18->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar18->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar19->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          lVar7 = this->_padding_;
          if ((lVar7 != 0) && (pUVar18 = UEnvQueryItemType::StaticClass(), pUVar18 != (UClass *)0x0)
             ) {
            iVar4 = (int)pUVar18->_padding_;
            if ((*(int *)(lVar7 + 0x38) < iVar4) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar18->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              pUVar20 = UClass::GetDefaultObject<UEnvQueryItemType_VectorBase>
                                  ((UClass *)this->_padding_);
              goto LAB_146f48f70;
            }
          }
          pUVar20 = UClass::GetDefaultObject<UEnvQueryItemType_VectorBase>((UClass *)0x0);
          goto LAB_146f48f70;
        }
      }
    }
  }
  pUVar20 = (UEnvQueryItemType_VectorBase *)0x0;
LAB_146f48f70:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 != (UEnvQueryItemType_VectorBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (this->ItemTypeVectorCDO).field0_0x0.DebugPtr = pUVar20;
  lVar7 = this->_padding_;
  pUVar18 = this_00;
  if ((lVar7 != 0) && (pUVar19 = UEnvQueryItemType::StaticClass(), pUVar19 != (UClass *)0x0)) {
    iVar4 = (int)pUVar19->_padding_;
    if ((*(int *)(lVar7 + 0x38) < iVar4) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar19->_padding_)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if ((bVar9) && (lVar7 = this->_padding_, pUVar18 = pUVar22, lVar7 != 0)) {
      pUVar19 = UEnvQueryItemType::StaticClass();
      pUVar22 = this_00;
      if (pUVar19 != (UClass *)0x0) {
        iVar4 = (int)pUVar19->_padding_;
        if ((*(int *)(lVar7 + 0x38) < iVar4) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar19->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          pUVar22 = (UClass *)this->_padding_;
        }
      }
      pUVar19 = UEnvQueryItemType_ActorBase::StaticClass();
      if (pUVar19 != (UClass *)0x0) {
        iVar4 = (int)pUVar19->_padding_;
        if (((int)pUVar22->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar22->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar19->_padding_)) {
          bVar9 = false;
        }
        else {
          bVar9 = true;
        }
        if (bVar9) {
          lVar7 = this->_padding_;
          if ((lVar7 != 0) && (pUVar22 = UEnvQueryItemType::StaticClass(), pUVar22 != (UClass *)0x0)
             ) {
            iVar4 = (int)pUVar22->_padding_;
            if ((*(int *)(lVar7 + 0x38) < iVar4) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar22->_padding_)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if (bVar9) {
              this_00 = (UClass *)this->_padding_;
            }
          }
          pUVar18 = (UClass *)UClass::GetDefaultObject<UEnvQueryItemType_ActorBase>(this_00);
        }
      }
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  (this->ItemTypeActorCDO).field0_0x0.DebugPtr = (UEnvQueryItemType_ActorBase *)pUVar18;
  return;
}

// FinalizeQuery @ 146f490c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FEnvQueryInstance::FinalizeQuery(FEnvQueryInstance *this)

{
  float *pfVar1;
  FName FVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uchar auVar11 [8];
  char cVar12;
  uint uVar13;
  float fVar14;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FStatMessage local_58 [2];
  
  iVar9 = 0;
  if (this->NumValidItems < 1) {
    iVar9 = *(int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar9 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)this,0,(int *)((longlong)&this->_padding_ + 4));
    }
    *(undefined4 *)&this->_padding_ = 2;
    return;
  }
  uVar13 = *(uint *)((longlong)&this->_padding_ + 4);
  cVar12 = '\0';
  uVar8 = 0;
  if ((int)uVar13 < (this->Options).ArrayNum) {
    uVar8 = ~uVar13 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar10 = *(longlong *)((this->Options).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x30);
  if (lVar10 != 0) {
    cVar12 = *(char *)(lVar10 + 0x4c);
  }
  if (this->Mode == SingleResult) {
    if (this->bFoundSingleResult == '\0' && this->bPassOnSingleResult == '\0') {
      SortScores(this);
      if (cVar12 == '\x01') {
        NormalizeScores(this);
      }
      PickSingleItem(this,0);
    }
    goto LAB_146f49543;
  }
  if (1 < this->Mode - RandomBest5Pct) {
    SortScores(this);
    lVar10 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
    auVar11 = (uchar  [8])(lVar10 * 8);
    if (auVar11 != (uchar  [8])0x0) {
      FVar7 = StatPtr_STAT_AI_EQS_InstanceMemory;
      if (StatPtr_STAT_AI_EQS_InstanceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res10,"STAT_AI_EQS_InstanceMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar6,
                           L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                           L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar7;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_00 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_00 == (FThreadStats *)0x0) {
          this_01 = FThreadStatsPool::Get();
          this_00 = FThreadStatsPool::GetFromPool(this_01);
        }
        local_58[0].NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar2;
        local_58[0].StatData.Pad = auVar11;
        local_58[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_00,local_58);
        FStatsTrace::Add(&local_res8,lVar10 * -8);
        if (this_00->ScopeCount == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
    TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_>::SetNum
              ((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)this,this->NumValidItems,Default
              );
    lVar10 = (longlong)*(int *)((longlong)&this->_padding_ + 4) << 3;
    if (lVar10 != 0) {
      FVar7 = StatPtr_STAT_AI_EQS_InstanceMemory;
      if (StatPtr_STAT_AI_EQS_InstanceMemory ==
          (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_res18,"STAT_AI_EQS_InstanceMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar6,
                           L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                           L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
      }
      local_res8 = *(FName *)FVar7;
      FThreadStats::AddMessage<__int64>(local_res8,Add,lVar10,false);
    }
    if ((cVar12 == '\0') || (cVar12 == '\x01')) {
      NormalizeScores(this);
    }
    goto LAB_146f49543;
  }
  SortScores(this);
  if (cVar12 == '\x01') {
    NormalizeScores(this);
  }
  fVar14 = __real_3f400000;
  if (this->Mode == RandomBest5Pct) {
    fVar14 = __real_3f733333;
  }
  if (((int)this->_padding_ < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar13 = this->NumValidItems;
  fVar14 = fVar14 * *(float *)this->_padding_;
  uVar8 = uVar13;
  if ((int)uVar13 < 2) {
LAB_146f494f6:
    uVar13 = uVar8;
    if (0 < (int)uVar8) goto LAB_146f494fb;
  }
  else {
    lVar10 = 8;
    uVar8 = 1;
    do {
      uVar5 = 0;
      if ((int)uVar8 < (int)this->_padding_) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pfVar1 = (float *)(lVar10 + this->_padding_);
      if (*pfVar1 <= fVar14 && fVar14 != *pfVar1) goto LAB_146f494f6;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < this->NumValidItems);
LAB_146f494fb:
    UAISystem::RandomStream.Seed = UAISystem::RandomStream.Seed * 0xbb38435 + 0x3619636b;
    iVar9 = (int)(((float)(UAISystem::RandomStream.Seed >> 9 | 0x3f800000) - __real_3f800000) *
                 (float)(int)uVar13);
  }
  PickSingleItem(this,iVar9);
LAB_146f49543:
  *(undefined4 *)&this->_padding_ = 1;
  return;
}

// FinalizeTest @ 146f495b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::FinalizeTest(FEnvQueryInstance *this)

{
  int *piVar1;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  UEnvQueryTest *this_00;
  FEnvQueryItemDetails *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FText *this_01;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  FText local_18;
  
  uVar3 = *(uint *)((longlong)&this->_padding_ + 4);
  uVar11 = 0;
  if ((int)uVar3 < (this->Options).ArrayNum) {
    uVar11 = ~uVar3 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar11 = this->CurrentTest;
  pFVar4 = (this->Options).AllocatorInstance.Data;
  uVar8 = 0;
  if ((int)uVar11 < *(int *)(pFVar4 + (longlong)(int)uVar3 * 0x30 + 0x10)) {
    uVar8 = ~uVar11 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this_00 = *(UEnvQueryTest **)
             (*(longlong *)(pFVar4 + (longlong)(int)uVar3 * 0x30 + 8) + (longlong)(int)uVar11 * 8);
  if (this->bStoreDebugInfo != 0) {
    pTVar2 = &(this->DebugData).PerformedTestNames;
    this_01 = UEnvQueryTypes::GetShortTypeName(&local_18,(UObject *)this_00);
    pFVar10 = (FScriptContainerElement *)FText::ToString(this_01);
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= pFVar10) &&
       (pFVar10 < pFVar4 + (longlong)(this->DebugData).PerformedTestNames.ArrayMax * 0x10)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->DebugData).PerformedTestNames.ArrayNum;
    piVar1 = &(this->DebugData).PerformedTestNames.ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DebugData).PerformedTestNames.ArrayNum = iVar9 + 1;
    ::FString::FString((FString *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x10),
                       (FString *)pFVar10);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  if (this->bPassOnSingleResult == '\0') {
    UEnvQueryTest::NormalizeItemScores(this_00,this);
  }
  else if (this->bStoreDebugInfo == 0) {
    piVar1 = &(this->ItemDetails).ArrayMax;
    pFVar5 = (FEnvQueryItemDetails *)(this->ItemDetails).AllocatorInstance.Data;
    iVar9 = (this->ItemDetails).ArrayNum;
    if ((this->ItemDetails).ArrayMax < 0) {
      DestructItems<FEnvQueryItemDetails,int>(pFVar5,iVar9);
      (this->ItemDetails).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this->ItemDetails).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<FEnvQueryItemDetails,int>(pFVar5,iVar9);
      (this->ItemDetails).ArrayNum = 0;
    }
  }
  return;
}

// GetAllocatedSize @ 146f4feb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall FEnvQueryInstance::GetAllocatedSize(FEnvQueryInstance *this)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  iVar2 = *(int *)((longlong)&this->_padding_ + 4);
  uVar6 = GetContextAllocatedSize(this);
  uVar7 = *(uint *)&(this->NamedParams).field_0x48;
  if (uVar7 < 2) {
    lVar9 = 0;
  }
  else {
    lVar9 = (longlong)(int)uVar7 << 2;
  }
  uVar7 = 0;
  uVar8 = (longlong)(this->Options).ArrayMax * 0x30 +
          (longlong)(this->ItemDetails).ArrayMax * 0x38 +
          (ulonglong)uVar6 + (longlong)iVar2 + (longlong)iVar1 * 8 +
          (ulonglong)((*(int *)&(this->NamedParams).field_0x2c + 0x1fU >> 5) << 2) +
          ((longlong)*(int *)&(this->NamedParams).field_0xc + 0x16) * 0x14 + lVar9;
  if (0 < (this->Options).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->Options).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar7 = (*pcVar3)();
        return uVar7;
      }
      uVar7 = uVar7 + 1;
      lVar4 = lVar9 + 0x14;
      lVar9 = lVar9 + 0x30;
      uVar8 = uVar8 + (*(int *)((this->Options).AllocatorInstance.Data + lVar4) * 8 + 0x30);
    } while ((int)uVar7 < (this->Options).ArrayNum);
  }
  if ((uVar8 != (uVar8 & 0xffffffff)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IntFitsIn<OutType>(In)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                         ,0xae,L"Loss of data caused by narrowing conversion, In = %llu"), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return uVar7;
  }
  return (uint)uVar8;
}

// GetBoundingBox @ 146f503e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBox<double> * __thiscall
FEnvQueryInstance::GetBoundingBox(FEnvQueryInstance *this,TBox<double> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  uint uVar5;
  UClass *pUVar6;
  UEnvQueryItemType_VectorBase *pUVar7;
  TBox<double> *pTVar8;
  double *pdVar9;
  UClass *pUVar10;
  int iVar11;
  UClass *pUVar12;
  uint uVar13;
  longlong lVar14;
  FEnvQueryInstance *pFVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  undefined1 local_48 [32];
  
  pFVar15 = (FEnvQueryInstance *)&(this->DebugData).DebugItems;
  if ((this->DebugData).DebugItems.ArrayNum < 1) {
    pFVar15 = this;
  }
  lVar14 = 0x188;
  if ((this->DebugData).RawData.ArrayNum < 1) {
    lVar14 = 0x18;
  }
  pUVar12 = (UClass *)0x0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
  __return_storage_ptr__->IsValid = '\0';
  __return_storage_ptr__->Pad[0] = '\0';
  __return_storage_ptr__->Pad[1] = '\0';
  __return_storage_ptr__->Pad[2] = '\0';
  __return_storage_ptr__->Pad[3] = '\0';
  __return_storage_ptr__->Pad[4] = '\0';
  __return_storage_ptr__->Pad[5] = '\0';
  __return_storage_ptr__->Pad[6] = '\0';
  lVar1 = this->_padding_;
  pUVar10 = pUVar12;
  if ((lVar1 != 0) && (pUVar6 = UEnvQueryItemType::StaticClass(), pUVar6 != (UClass *)0x0)) {
    iVar11 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar1 + 0x38) < iVar11) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      pUVar10 = (UClass *)this->_padding_;
    }
  }
  pUVar6 = UEnvQueryItemType_VectorBase::StaticClass();
  if (pUVar6 != (UClass *)0x0) {
    iVar11 = (int)pUVar6->_padding_;
    if (((int)pUVar10->_padding_ < iVar11) ||
       ((longlong *)*(undefined1 **)(pUVar10->_padding_ + (longlong)iVar11 * 8) !=
        &pUVar6->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar1 = this->_padding_;
      pUVar10 = pUVar12;
      if ((lVar1 != 0) && (pUVar6 = UEnvQueryItemType::StaticClass(), pUVar6 != (UClass *)0x0)) {
        iVar11 = (int)pUVar6->_padding_;
        if ((*(int *)(lVar1 + 0x38) < iVar11) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar1 + 0x30) + (longlong)iVar11 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          pUVar10 = (UClass *)this->_padding_;
        }
      }
      pUVar7 = UClass::GetDefaultObject<UEnvQueryItemType_VectorBase>(pUVar10);
      iVar11 = (int)pFVar15->_padding_;
      pUVar10 = pUVar12;
      if (0 < iVar11) {
        do {
          uVar13 = (uint)pUVar10;
          pcVar2 = *(code **)(*(longlong *)pUVar7 + 0x2c8);
          uVar5 = 0;
          if ((int)uVar13 < iVar11) {
            uVar5 = ~uVar13 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar8 = (TBox<double> *)(*pcVar2)();
            return pTVar8;
          }
          pdVar9 = (double *)
                   (*pcVar2)(pUVar7,local_48,
                             ((longlong)
                              (*(int *)((longlong)&pUVar12->_padding_ + pFVar15->_padding_ + 4) * 2)
                             >> 1) + *(longlong *)((longlong)&this->_padding_ + lVar14));
          if (__return_storage_ptr__->IsValid == '\0') {
            dVar19 = pdVar9[1];
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = *pdVar9;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar19;
            dVar19 = pdVar9[2];
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar19;
            dVar18 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
            dVar3 = (__return_storage_ptr__->Max).field0_0x0._s_0.Y;
            __return_storage_ptr__->IsValid = '\x01';
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar18;
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3;
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar19;
          }
          else {
            dVar19 = *pdVar9;
            uVar16 = SUB84(dVar19,0);
            uVar17 = (undefined4)((ulonglong)dVar19 >> 0x20);
            dVar18 = *(double *)&(__return_storage_ptr__->Min).field0_0x0;
            if (dVar18 <= dVar19) {
              uVar16 = SUB84(dVar18,0);
              uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
            }
            dVar19 = (__return_storage_ptr__->Min).field0_0x0._s_0.Y;
            (__return_storage_ptr__->Min).field0_0x0._s_0.X = (double)CONCAT44(uVar17,uVar16);
            if (pdVar9[1] <= dVar19) {
              dVar19 = pdVar9[1];
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar19;
            dVar19 = pdVar9[2];
            uVar16 = SUB84(dVar19,0);
            uVar17 = (undefined4)((ulonglong)dVar19 >> 0x20);
            dVar18 = *(double *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0x10);
            if (dVar18 <= dVar19) {
              uVar16 = SUB84(dVar18,0);
              uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
            }
            (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)CONCAT44(uVar17,uVar16);
            dVar19 = (__return_storage_ptr__->Max).field0_0x0._s_0.X;
            dVar18 = *pdVar9;
            if (*pdVar9 <= dVar19) {
              dVar18 = dVar19;
            }
            dVar19 = *(double *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8);
            uVar16 = SUB84(dVar19,0);
            uVar17 = (undefined4)((ulonglong)dVar19 >> 0x20);
            (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar18;
            dVar18 = pdVar9[1];
            if (dVar19 <= dVar18) {
              uVar16 = SUB84(dVar18,0);
              uVar17 = (undefined4)((ulonglong)dVar18 >> 0x20);
            }
            dVar19 = (__return_storage_ptr__->Max).field0_0x0._s_0.Z;
            (__return_storage_ptr__->Max).field0_0x0._s_0.Y = (double)CONCAT44(uVar17,uVar16);
            if (dVar19 <= pdVar9[2]) {
              dVar19 = pdVar9[2];
            }
            (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar19;
          }
          iVar11 = (int)pFVar15->_padding_;
          pUVar12 = (UClass *)&pUVar12->_padding_;
          pUVar10 = (UClass *)(ulonglong)(uVar13 + 1);
        } while ((int)(uVar13 + 1) < iVar11);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetContextAllocatedSize @ 146f50680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __thiscall FEnvQueryInstance::GetContextAllocatedSize(FEnvQueryInstance *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  undefined1 local_res8 [8];
  
  iVar2 = (this->ContextCache).ArrayNum;
  pFVar6 = (this->ContextCache).AllocatorInstance.Data;
  uVar7 = (longlong)(this->ContextCache).ArrayMax * 0x28;
  pFVar1 = pFVar6 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->ContextCache).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FEnvQueryInstanceContextCacheItem_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    uVar7 = uVar7 + (*(int *)(pFVar6 + 0x24) + 0x20);
    pFVar6 = pFVar6 + 0x28;
  }
  if (uVar7 != (uVar7 & 0xffffffff)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xae,L"Loss of data caused by narrowing conversion, In = %llu");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  return (uint)uVar7;
}

// GetExecutionTimeDescription @ 146f55a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FEnvQueryInstance::GetExecutionTimeDescription
          (FEnvQueryInstance *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FString *pFVar6;
  longlong lVar7;
  size_t sVar8;
  uint uVar9;
  wchar_t *_Str;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  FString local_d8;
  FString local_c8;
  longlong local_b8;
  FName local_b0;
  FName local_a8;
  longlong local_a0;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68 [2];
  
  uVar11 = 0;
  ::FString::PrintfImpl(__return_storage_ptr__,L"Total Execution Time: %.2f ms");
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    return __return_storage_ptr__;
  }
  local_108 = 0;
  local_100 = 0;
  uVar14 = uVar11;
  do {
    uVar15 = 0;
    uVar9 = 0;
    if ((int)uVar11 < (this->Options).ArrayNum) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
    pFVar1 = (this->Options).AllocatorInstance.Data;
    if ((int)this->_padding_ == 0) {
      iVar10 = this->CurrentTest;
    }
    else {
      iVar10 = *(int *)(pFVar1 + local_100 + 0x10) + -1;
    }
    if (((int)uVar11 < 0) || ((int)(this->DebugData)._padding_ <= (int)uVar11)) {
      iVar12 = 1;
    }
    else {
      if (((int)uVar11 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar6 = (FString *)(*pcVar3)();
        return pFVar6;
      }
      iVar12 = *(int *)((this->DebugData)._padding_ + local_108 * 0x30);
    }
    local_a0 = (longlong)iVar10;
    local_f8 = 0;
    if (-1 < iVar10) {
      lVar7 = local_108 * 0x30;
      iVar10 = -((int)~uVar11 >> 0x1f);
      local_b8 = (longlong)iVar12 * -8;
      do {
        _Str = L"\n    test[";
        if ((int)uVar15 < iVar12) {
          _Str = L"\n  generator[";
        }
        sVar8 = wcslen(_Str);
        ::FString::AppendChars(__return_storage_ptr__,_Str,(int)sVar8);
        ::FString::PrintfImpl(&local_98,L"%d");
        iVar13 = local_98.Data.ArrayNum + -1;
        if (local_98.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_98.Data.AllocatorInstance.Data,iVar13);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        ::FString::AppendChars(__return_storage_ptr__,L"]: ",3);
        if (((int)uVar11 < 0) || ((int)(this->DebugData)._padding_ <= (int)uVar11)) {
LAB_146f55f86:
          ::FString::AppendChars(__return_storage_ptr__,L"N/A",3);
        }
        else {
          iVar13 = 0;
          if ((int)uVar11 < (int)(this->DebugData)._padding_) {
            iVar13 = iVar10;
          }
          if ((iVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar3)();
            return pFVar6;
          }
          if (((int)uVar15 < 0) ||
             (*(int *)((this->DebugData)._padding_ + 8 + local_108 * 0x18) <= (int)uVar15))
          goto LAB_146f55f86;
          iVar13 = 0;
          if ((int)uVar11 < (int)(this->DebugData)._padding_) {
            iVar13 = iVar10;
          }
          if ((iVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar3)();
            return pFVar6;
          }
          uVar9 = 0;
          if ((int)uVar15 < *(int *)((this->DebugData)._padding_ + 8 + local_108 * 0x18)) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar3)();
            return pFVar6;
          }
          iVar13 = 0;
          if ((int)uVar11 < (int)(this->DebugData)._padding_) {
            iVar13 = iVar10;
          }
          if ((iVar13 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar3)();
            return pFVar6;
          }
          uVar9 = 0;
          if ((int)uVar15 < *(int *)((this->DebugData)._padding_ + 8 + local_108 * 0x18)) {
            uVar9 = ~uVar15 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar3)();
            return pFVar6;
          }
          ::FString::PrintfImpl(&local_88,L"%.2f ms (items:%d)");
          iVar13 = local_88.Data.ArrayNum + -1;
          if (local_88.Data.ArrayNum == 0) {
            iVar13 = 0;
          }
          ::FString::AppendChars
                    (__return_storage_ptr__,(wchar_t *)local_88.Data.AllocatorInstance.Data,iVar13);
          if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data.AllocatorInstance.Data);
          }
        }
        if (local_f8 < iVar12) {
          if ((-1 < (int)uVar11) && ((int)uVar11 < (int)(this->DebugData)._padding_)) {
            if ((iVar10 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar3)();
              return pFVar6;
            }
            if (*(int *)((this->DebugData)._padding_ + 0x10 + lVar7) != 0) {
              iVar13 = 0;
              if ((int)uVar11 < (int)(this->DebugData)._padding_) {
                iVar13 = iVar10;
              }
              if ((iVar13 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar6 = (FString *)(*pcVar3)();
                return pFVar6;
              }
              if ((-1 < (int)uVar15) &&
                 ((int)uVar15 < *(int *)((this->DebugData)._padding_ + 0x10 + lVar7))) {
                iVar13 = 0;
                if ((int)uVar11 < (int)(this->DebugData)._padding_) {
                  iVar13 = iVar10;
                }
                if ((iVar13 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pFVar6 = (FString *)(*pcVar3)();
                  return pFVar6;
                }
                lVar2 = (this->DebugData)._padding_;
                uVar9 = 0;
                if ((int)uVar15 < *(int *)(lVar2 + 0x10 + lVar7)) {
                  uVar9 = ~uVar15 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar4)) {
                  pcVar3 = (code *)swi(3);
                  pFVar6 = (FString *)(*pcVar3)();
                  return pFVar6;
                }
                uVar14 = uVar14 | 2;
                ::FName::ToString((FName *)(*(longlong *)(lVar2 + 8 + lVar7) +
                                           (longlong)(int)uVar15 * 8),local_68);
              }
              goto LAB_146f561d5;
            }
          }
          uVar14 = uVar14 | 4;
          if (*(longlong *)(pFVar1 + local_100) == 0) {
            ::FString::FString(&local_d8,L"None");
          }
          else {
            local_a8 = *(FName *)(*(longlong *)(pFVar1 + local_100) + 0x18);
            ::FName::ToString(&local_a8,&local_d8);
          }
        }
        else {
          uVar9 = uVar15 - iVar12;
          if ((-1 < (int)uVar9) && ((int)uVar9 < *(int *)(pFVar1 + local_100 + 0x10))) {
            uVar14 = uVar14 | 1;
            uVar5 = 0;
            if ((int)uVar9 < *(int *)(pFVar1 + local_100 + 0x10)) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              pFVar6 = (FString *)(*pcVar3)();
              return pFVar6;
            }
            lVar2 = *(longlong *)(local_b8 + local_f8 * 8 + *(longlong *)(pFVar1 + local_100 + 8));
            if (lVar2 == 0) {
              ::FString::FString(&local_c8,L"None");
            }
            else {
              local_b0 = *(FName *)(lVar2 + 0x18);
              ::FName::ToString(&local_b0,&local_c8);
            }
          }
        }
LAB_146f561d5:
        ::FString::PrintfImpl(&local_78,L" (%s)");
        iVar13 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar13 = 0;
        }
        ::FString::AppendChars
                  (__return_storage_ptr__,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar13);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (((uVar14 & 4) != 0) &&
           (uVar14 = uVar14 & 0xfffffffb,
           local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (((uVar14 & 2) != 0) &&
           (uVar14 = uVar14 & 0xfffffffd,
           local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
        }
        if (((uVar14 & 1) != 0) &&
           (uVar14 = uVar14 & 0xfffffffe,
           local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        local_f8 = local_f8 + 1;
        uVar15 = uVar15 + 1;
      } while (local_f8 <= local_a0);
    }
    local_108 = local_108 + 1;
    local_100 = local_100 + 0x30;
    uVar11 = uVar11 + 1;
    if (*(int *)((longlong)&this->_padding_ + 4) < (int)uVar11) {
      return __return_storage_ptr__;
    }
  } while( true );
}

// IncStats @ 146f5b1c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::IncStats(FEnvQueryInstance *this)

{
  FName FVar1;
  uint uVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar4;
  FThreadStats *pFVar5;
  FThreadStatsPool *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems> FVar7;
  uchar auVar8 [8];
  FName local_res8;
  FStatMessage local_38;
  
  uVar2 = GetAllocatedSize(this);
  auVar8[4] = '\0';
  auVar8[5] = '\0';
  auVar8[6] = '\0';
  auVar8[7] = '\0';
  auVar8[0] = (char)uVar2;
  auVar8[1] = (char)(uVar2 >> 8);
  auVar8[2] = (char)(uVar2 >> 0x10);
  auVar8[3] = (char)(uVar2 >> 0x18);
  if (uVar2 != 0) {
    FVar4 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_AI_EQS_InstanceMemory");
      FVar4 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar3,
                         L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                         L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar4;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar8);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  auVar8 = (uchar  [8])(longlong)(int)this->_padding_;
  if ((auVar8 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
    FVar7 = StatPtr_STAT_AI_EQS_NumItems;
    if (StatPtr_STAT_AI_EQS_NumItems == (FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems>)0x0) {
      pFVar3 = ::FName::FName(&local_res8,"STAT_AI_EQS_NumItems");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_NumItems>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_NumItems,*pFVar3,
                         L"Num Items","STATGROUP_AI_EQS","STATCAT_Advanced",L"Environment Query",
                         true,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar7;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar5 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar5 == (FThreadStats *)0x0) {
        pFVar6 = FThreadStatsPool::Get();
        pFVar5 = FThreadStatsPool::GetFromPool(pFVar6);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar5,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar8);
      if (pFVar5->ScopeCount == 0) {
        FThreadStats::Flush(pFVar5,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar5,false,false);
      }
    }
  }
  return;
}

// Log @ 146f5c4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::Log(FEnvQueryInstance *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if (2 < (byte)LogEQS._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// NormalizeScores @ 146f5e140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::NormalizeScores(FEnvQueryInstance *this)

{
  code *pcVar1;
  bool bVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (((int)this->_padding_ < this->NumValidItems) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumValidItems <= Items.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                         ,0x293,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar4 = this->NumValidItems;
  iVar5 = 0;
  pfVar3 = (float *)this->_padding_;
  fVar9 = 0.0;
  iVar6 = 0;
  fVar7 = fVar9;
  fVar10 = __real_ff7fc99e;
  fVar8 = __real_ff7fc99e;
  if (0 < iVar4) {
    do {
      if (((((uint)pfVar3[1] >> 0x1e & 1) != 0) || ((int)pfVar3[1] < 0)) &&
         (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1516865557117271397>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                             ,0x29b,"ItemInfo->IsValid()"), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar8 = *pfVar3;
      iVar6 = iVar6 + 1;
      iVar4 = this->NumValidItems;
      fVar7 = fVar8;
      if (fVar9 <= fVar8) {
        fVar7 = fVar9;
      }
      pfVar3 = pfVar3 + 2;
      if (fVar8 <= fVar10) {
        fVar8 = fVar10;
      }
      fVar9 = fVar7;
      fVar10 = fVar8;
    } while (iVar6 < iVar4);
  }
  pfVar3 = (float *)this->_padding_;
  if (fVar7 == fVar8) {
    fVar8 = 0.0;
    if (fVar7 != 0.0) {
      fVar8 = __real_3f800000;
    }
    if (0 < iVar4) {
      do {
        *pfVar3 = fVar8;
        pfVar3 = pfVar3 + 2;
        iVar5 = iVar5 + 1;
      } while (iVar5 < this->NumValidItems);
    }
  }
  else if (0 < iVar4) {
    fVar8 = __real_3f800000 / (fVar8 - fVar7);
    do {
      iVar5 = iVar5 + 1;
      *pfVar3 = (*pfVar3 - fVar7) * fVar8;
      pfVar3 = pfVar3 + 2;
    } while (iVar5 < this->NumValidItems);
  }
  return;
}

// PickRandomItemOfScoreAtLeast @ 146f5efb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FEnvQueryInstance::PickRandomItemOfScoreAtLeast(FEnvQueryInstance *this,float param_1)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  
  uVar6 = this->NumValidItems;
  iVar8 = 0;
  uVar5 = uVar6;
  if ((int)uVar6 < 2) {
LAB_146f5f055:
    uVar6 = uVar5;
    if ((int)uVar5 < 1) goto LAB_146f5f092;
  }
  else {
    lVar7 = 8;
    uVar5 = 1;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (int)this->_padding_) {
        uVar4 = ~uVar5 >> 0x1f;
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
      pfVar1 = (float *)(lVar7 + this->_padding_);
      if (*pfVar1 <= param_1 && param_1 != *pfVar1) goto LAB_146f5f055;
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar5 < this->NumValidItems);
  }
  UAISystem::RandomStream.Seed = UAISystem::RandomStream.Seed * 0xbb38435 + 0x3619636b;
  iVar8 = (int)(((float)(UAISystem::RandomStream.Seed >> 9 | 0x3f800000) - __real_3f800000) *
               (float)(int)uVar6);
LAB_146f5f092:
  PickSingleItem(this,iVar8);
  return;
}

// PickSingleItem @ 146f5f0d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::PickSingleItem(FEnvQueryInstance *this,int param_1)

{
  undefined1 *puVar1;
  FName FVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  uchar auVar23 [8];
  FName local_res18;
  FName local_res20;
  undefined4 local_78;
  uint uStack_74;
  FName local_70;
  FName local_68;
  FStatMessage local_60;
  FStatMessage local_50;
  
  if (((int)this->_padding_ < 1) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Items.Num() > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                          ,0x2f3,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    if (2 < (byte)LogEQS._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    }
    param_1 = 0;
  }
  uStack_74 = 0x7fffffff;
  uVar15 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_78 = *(undefined4 *)(this->_padding_ + (ulonglong)(uint)param_1 * 8);
  uVar15 = 0;
  if (param_1 < (int)this->_padding_) {
    uVar15 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar22 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
  uStack_74 = *(uint *)(this->_padding_ + 4 + (ulonglong)(uint)param_1 * 8) & 0x7fffffff |
              uStack_74 & 0x80000000;
  auVar23 = (uchar  [8])(lVar22 * 8);
  if (auVar23 != (uchar  [8])0x0) {
    FVar18 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar17 = ::FName::FName(&local_70,"STAT_AI_EQS_InstanceMemory");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar17,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar18;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      local_60.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res18 = FVar2;
      local_60.StatData.Pad = auVar23;
      local_60.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar19,&local_60);
      FStatsTrace::Add(&local_res18,lVar22 * -8);
      if (pFVar19->ScopeCount == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  if (this->bStoreDebugInfo == 0) {
    iVar16 = *(int *)((longlong)&this->_padding_ + 4);
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar16 != 1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,1,(ForAnyElementType *)this,0,(int *)((longlong)&this->_padding_ + 4));
    }
    if ((((undefined4 *)this->_padding_ <= &local_78) &&
        (&local_78 <
         (undefined4 *)this->_padding_ + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 2)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar16 = (int)this->_padding_;
    if (iVar16 == *(int *)((longlong)&this->_padding_ + 4)) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x408,(ForAnyElementType *)this,(int *)((longlong)&this->_padding_ + 4));
    }
    *(int *)&this->_padding_ = iVar16 + 1;
    *(ulonglong *)(this->_padding_ + (longlong)iVar16 * 8) = CONCAT44(uStack_74,local_78);
    this->NumValidItems = 1;
  }
  else {
    iVar16 = (int)this->_padding_;
    if (((iVar16 < 1) || (iVar16 <= param_1)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_1 != 0) {
      puVar3 = (undefined8 *)this->_padding_;
      uVar4 = *puVar3;
      *puVar3 = puVar3[(uint)param_1];
      puVar3[(uint)param_1] = uVar4;
    }
    iVar16 = (this->ItemDetails).ArrayNum;
    if (((iVar16 < 1) || (iVar16 <= param_1)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0xce7,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (param_1 != 0) {
      pFVar5 = (this->ItemDetails).AllocatorInstance.Data;
      uVar7 = *(undefined8 *)pFVar5;
      uVar8 = *(undefined8 *)(pFVar5 + 8);
      uVar9 = *(undefined8 *)(pFVar5 + 0x10);
      uVar10 = *(undefined8 *)(pFVar5 + 0x18);
      uVar11 = *(undefined8 *)(pFVar5 + 0x20);
      uVar12 = *(undefined8 *)(pFVar5 + 0x28);
      pFVar21 = pFVar5 + (ulonglong)(uint)param_1 * 0x38;
      uVar4 = *(undefined8 *)(pFVar5 + 0x30);
      uVar13 = *(undefined8 *)(pFVar21 + 8);
      *(undefined8 *)pFVar5 = *(undefined8 *)pFVar21;
      *(undefined8 *)(pFVar5 + 8) = uVar13;
      uVar13 = *(undefined8 *)(pFVar21 + 0x18);
      *(undefined8 *)(pFVar5 + 0x10) = *(undefined8 *)(pFVar21 + 0x10);
      *(undefined8 *)(pFVar5 + 0x18) = uVar13;
      uVar13 = *(undefined8 *)(pFVar21 + 0x28);
      *(undefined8 *)(pFVar5 + 0x20) = *(undefined8 *)(pFVar21 + 0x20);
      *(undefined8 *)(pFVar5 + 0x28) = uVar13;
      *(undefined8 *)(pFVar5 + 0x30) = *(undefined8 *)(pFVar21 + 0x30);
      *(undefined8 *)pFVar21 = uVar7;
      *(undefined8 *)(pFVar21 + 8) = uVar8;
      *(undefined8 *)(pFVar21 + 0x10) = uVar9;
      *(undefined8 *)(pFVar21 + 0x18) = uVar10;
      *(undefined8 *)(pFVar21 + 0x20) = uVar11;
      *(undefined8 *)(pFVar21 + 0x28) = uVar12;
      *(undefined8 *)(pFVar21 + 0x30) = uVar4;
    }
    (this->DebugData).bSingleItemResult = 1;
  }
  auVar23 = (uchar  [8])((longlong)*(int *)((longlong)&this->_padding_ + 4) << 3);
  if (auVar23 != (uchar  [8])0x0) {
    FVar18 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar17 = ::FName::FName(&local_68,"STAT_AI_EQS_InstanceMemory");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar17,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar18;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      local_50.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_res20 = FVar2;
      local_50.StatData.Pad = auVar23;
      local_50.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar19,&local_50);
      FStatsTrace::Add(&local_res20,(long64)auVar23);
      if (pFVar19->ScopeCount == 0) {
        FThreadStats::Flush(pFVar19,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
  }
  return;
}

// PrepareContext @ 146f600c0

/* WARNING: Removing unreachable block (ram,0x000146f60494) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEnvQueryInstance::PrepareContext
          (FEnvQueryInstance *this,UClass *param_1,FEnvQueryContextData *param_2)

{
  TArray<FEnvQueryInstanceContextCacheItem,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int *piVar3;
  UWorld *pUVar4;
  FName FVar5;
  code *pcVar6;
  uchar auVar7 [8];
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  UEnvQueryContext *pUVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FText *pFVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  UEnvQueryManager *pUVar19;
  UEnvQueryManager *this_02;
  UEnvQueryManager *pUVar20;
  uint uVar21;
  UClass *local_b8;
  TObjectPtr<UClass>_u_0 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  UClass *local_90;
  uchar local_88 [8];
  FName local_80;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FText local_58;
  FText local_48;
  
  pUVar20 = (UEnvQueryManager *)0x0;
  if (param_1 == (UClass *)0x0) {
    return false;
  }
  pUVar12 = UEnvQueryContext_Item::StaticClass();
  if (param_1 == pUVar12) goto LAB_146f60548;
  pTVar1 = &this->ContextCache;
  pFVar18 = (pTVar1->AllocatorInstance).Data;
  pFVar2 = pFVar18 + (longlong)(this->ContextCache).ArrayNum * 0x28;
  for (; pFVar18 != pFVar2; pFVar18 = pFVar18 + 0x28) {
    if ((*(UClass **)pFVar18 != (UClass *)0x0) && (*(UClass **)pFVar18 == param_1)) {
      if (pFVar18 != (FScriptContainerElement *)0x0) {
        FEnvQueryContextData::operator=(param_2,(FEnvQueryContextData *)(pFVar18 + 8));
        goto LAB_146f60548;
      }
      break;
    }
  }
  pUVar4 = (this->World).field0_0x0.DebugPtr;
  this_02 = pUVar20;
  if (pUVar4 != (UWorld *)0x0) {
    pUVar19 = (UEnvQueryManager *)(pUVar4->AISystem).field0_0x0.DebugPtr;
    if (pUVar19 == (UEnvQueryManager *)0x0) {
LAB_146f60183:
      pUVar19 = pUVar20;
    }
    else {
      pUVar12 = Z_Construct_UClass_UAISystem_NoRegister();
      iVar10 = (int)pUVar12->_padding_;
      if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar10) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
          &pUVar12->_padding_)) goto LAB_146f60183;
    }
    if (pUVar19 != (UEnvQueryManager *)0x0) {
      this_02 = *(UEnvQueryManager **)&(pUVar19->ExternalQueries).field_0x18;
    }
  }
  local_90 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pUVar13 = UEnvQueryManager::PrepareLocalContext(this_02,(TSubclassOf<UEnvQueryContext>)&local_90);
  if ((pUVar13 == (UEnvQueryContext *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContextOb",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AIModule\\Private\\EnvironmentQuery\\EnvQueryInstance.cpp"
                         ,0x80,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  (**(code **)(*(longlong *)pUVar13 + 0x2b0))(pUVar13,this);
  local_88._0_4_ = GetContextAllocatedSize(this);
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  if (local_88 != (uchar  [8])0x0) {
    FVar15 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar14 = ::FName::FName(&local_68,"STAT_AI_EQS_InstanceMemory");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar14,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar5 = *(FName *)FVar15;
    if (((FVar5 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      auVar7 = local_88;
      local_78.NameAndInfo.Number = FVar5.Number & 0xffffbfff | 0xb000;
      local_78.StatData.Pad[0] = local_88[0];
      local_78.StatData.Pad[1] = local_88[1];
      local_78.StatData.Pad[2] = local_88[2];
      local_78.StatData.Pad[3] = local_88[3];
      local_78.StatData.Pad[4] = local_88[4];
      local_78.StatData.Pad[5] = local_88[5];
      local_78.StatData.Pad[6] = local_88[6];
      local_78.StatData.Pad[7] = local_88[7];
      local_80 = FVar5;
      local_78.NameAndInfo.Index.Value = FVar5.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_78);
      FStatsTrace::Add(&local_80,-(longlong)auVar7);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  local_b8 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FEnvQueryContextData::FEnvQueryContextData((FEnvQueryContextData *)&local_b0.ObjectPtr,param_2);
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 <
       pFVar2 + (longlong)(this->ContextCache).ArrayMax * 0x28)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  iVar10 = (this->ContextCache).ArrayNum;
  piVar3 = &(this->ContextCache).ArrayMax;
  if (iVar10 == *piVar3) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&pTVar1->AllocatorInstance,piVar3);
  }
  (this->ContextCache).ArrayNum = iVar10 + 1;
  pFVar2 = (pTVar1->AllocatorInstance).Data + (longlong)iVar10 * 0x28;
  *(UClass **)pFVar2 = local_b8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_b8);
  }
  ((TObjectPtr<UClass>_u_0 *)(pFVar2 + 8))->DebugPtr = (UClass *)local_b0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_b0.DebugPtr != (UClass *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_b0.DebugPtr);
  }
  *(undefined8 *)(pFVar2 + 0x18) = 0;
  *(undefined4 *)(pFVar2 + 0x10) = local_a8;
  *(undefined8 *)(pFVar2 + 0x18) = local_a0;
  *(undefined4 *)(pFVar2 + 0x20) = (undefined4)local_98;
  *(undefined4 *)(pFVar2 + 0x24) = local_98._4_4_;
  local_98 = 0;
  local_a0 = 0;
  uVar11 = GetContextAllocatedSize(this);
  if (uVar11 != 0) {
    FVar15 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar14 = ::FName::FName(&local_60,"STAT_AI_EQS_InstanceMemory");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar14,
                          L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                          L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FThreadStats::AddMessage<__int64>(*(FName *)FVar15,Add,(ulonglong)uVar11,false);
  }
LAB_146f60548:
  if (param_2->NumValues != 0) {
    return true;
  }
  if (4 < (byte)LogEQS._0_1_) {
    if (-1 < this->CurrentTest) {
      uVar11 = *(uint *)((longlong)&this->_padding_ + 4);
      uVar17 = 0;
      if ((int)uVar11 < (this->Options).ArrayNum) {
        uVar17 = ~uVar11 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pUVar20 = (UEnvQueryManager *)&DAT_00000001;
      uVar17 = this->CurrentTest;
      pFVar2 = (this->Options).AllocatorInstance.Data;
      uVar21 = 0;
      if ((int)uVar17 < *(int *)(pFVar2 + (longlong)(int)uVar11 * 0x30 + 0x10)) {
        uVar21 = ~uVar17 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      pFVar16 = UEnvQueryTypes::GetShortTypeName
                          (&local_48,
                           *(UObject **)
                            (*(longlong *)(pFVar2 + (longlong)(int)uVar11 * 0x30 + 8) +
                            (longlong)(int)uVar17 * 8));
      FText::ToString(pFVar16);
    }
    pFVar16 = UEnvQueryTypes::GetShortTypeName(&local_58,(UObject *)param_1);
    FText::ToString(pFVar16);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
    if ((pUVar20 != (UEnvQueryManager *)0x0) && (local_48.TextData.Reference != (ITextData *)0x0)) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
  }
  return false;
}

// PrepareContext @ 146f60700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEnvQueryInstance::PrepareContext
          (FEnvQueryInstance *this,UClass *param_1,
          TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  ushort uVar2;
  UObject *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TObjectPtr<UClass>_u_0 TVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UClass *pUVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  void *pvVar12;
  TObjectPtr<UClass>_u_0 TVar13;
  longlong local_48;
  TObjectPtr<UClass>_u_0 local_40;
  uint local_38;
  void *local_30;
  undefined8 local_28;
  
  if (param_1 == (UClass *)0x0) {
    return false;
  }
  TVar11.DebugPtr = (UClass *)0x0;
  local_40.DebugPtr = (UClass *)0x0;
  local_38 = 0;
  local_30 = (void *)0x0;
  local_28 = 0;
  bVar7 = PrepareContext(this,param_1,(FEnvQueryContextData *)&local_40.ObjectPtr);
  TVar13 = local_40;
  if (((!bVar7) || (local_40.DebugPtr == (UClass *)0x0)) ||
     (pUVar10 = UEnvQueryItemType::StaticClass(), TVar6 = local_40, pUVar10 == (UClass *)0x0))
  goto LAB_146f60992;
  iVar9 = (int)pUVar10->_padding_;
  if (((int)(TVar13.DebugPtr)->_padding_ < iVar9) ||
     ((longlong *)*(undefined1 **)((TVar13.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
      &pUVar10->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((!bVar7) || (local_40.DebugPtr == (UClass *)0x0)) goto LAB_146f60992;
  pUVar10 = UEnvQueryItemType::StaticClass();
  if (pUVar10 == (UClass *)0x0) {
LAB_146f607f0:
    TVar13.DebugPtr = TVar11.DebugPtr;
  }
  else {
    iVar9 = (int)pUVar10->_padding_;
    if (((int)(TVar6.DebugPtr)->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)((TVar6.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    TVar13 = local_40;
    if (!bVar7) goto LAB_146f607f0;
  }
  pUVar10 = UEnvQueryItemType_ActorBase::StaticClass();
  TVar6 = local_40;
  if (pUVar10 == (UClass *)0x0) goto LAB_146f60992;
  iVar9 = (int)pUVar10->_padding_;
  if (((int)(TVar13.DebugPtr)->_padding_ < iVar9) ||
     ((longlong *)*(undefined1 **)((TVar13.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
      &pUVar10->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) goto LAB_146f60992;
  if ((local_40.DebugPtr == (UClass *)0x0) ||
     (pUVar10 = UEnvQueryItemType::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_146f60866:
    TVar13.DebugPtr = TVar11.DebugPtr;
  }
  else {
    iVar9 = (int)pUVar10->_padding_;
    if (((int)(TVar6.DebugPtr)->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)((TVar6.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    TVar13 = local_40;
    if (!bVar7) goto LAB_146f60866;
  }
  if (((TVar13.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(TVar13.DebugPtr);
  }
  pvVar12 = local_30;
  pUVar3 = ((TVar13.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr;
  uVar2 = *(ushort *)(pUVar3 + 1);
  if ((int)local_38 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_38);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)local_38) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_38,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  if (0 < (int)local_38) {
    do {
      local_48 = (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3,pvVar12);
      if (local_48 != 0) {
        pFVar4 = (param_2->AllocatorInstance).Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 8)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar9 + 1;
        *(longlong *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_48;
      }
      pvVar12 = (void *)((longlong)pvVar12 + (ulonglong)uVar2);
      TVar11._0_4_ = TVar11._0_4_ + 1;
      TVar11._4_4_ = 0;
    } while ((int)TVar11._0_4_ < (int)local_38);
  }
LAB_146f60992:
  iVar9 = param_2->ArrayNum;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  return 0 < iVar9;
}

// PrepareContext @ 146f609f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEnvQueryInstance::PrepareContext
          (FEnvQueryInstance *this,UClass *param_1,
          TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TObjectPtr<UClass>_u_0 TVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UClass *pUVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  TObjectPtr<UClass>_u_0 TVar12;
  FString local_78;
  double local_68;
  double dStack_60;
  double local_58;
  TObjectPtr<UClass>_u_0 local_50;
  uint local_48;
  void *local_40;
  undefined8 local_38;
  
  if (param_1 == (UClass *)0x0) {
    return false;
  }
  TVar12.DebugPtr = (UClass *)0x0;
  local_50.DebugPtr = (UClass *)0x0;
  local_48 = 0;
  local_40 = (void *)0x0;
  local_38 = 0;
  bVar7 = PrepareContext(this,param_1,(FEnvQueryContextData *)&local_50.ObjectPtr);
  TVar11 = local_50;
  if (((!bVar7) || (local_50.DebugPtr == (UClass *)0x0)) ||
     (pUVar10 = UEnvQueryItemType::StaticClass(), TVar6 = local_50, pUVar10 == (UClass *)0x0))
  goto LAB_146f60d11;
  iVar9 = (int)pUVar10->_padding_;
  if (((int)(TVar11.DebugPtr)->_padding_ < iVar9) ||
     ((longlong *)*(undefined1 **)((TVar11.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
      &pUVar10->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((!bVar7) || (local_50.DebugPtr == (UClass *)0x0)) goto LAB_146f60d11;
  pUVar10 = UEnvQueryItemType::StaticClass();
  if (pUVar10 == (UClass *)0x0) {
LAB_146f60ae6:
    TVar11.DebugPtr = TVar12.DebugPtr;
  }
  else {
    iVar9 = (int)pUVar10->_padding_;
    if (((int)(TVar6.DebugPtr)->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)((TVar6.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    TVar11 = local_50;
    if (!bVar7) goto LAB_146f60ae6;
  }
  pUVar10 = UEnvQueryItemType_VectorBase::StaticClass();
  TVar6 = local_50;
  if (pUVar10 == (UClass *)0x0) goto LAB_146f60d11;
  iVar9 = (int)pUVar10->_padding_;
  if (((int)(TVar11.DebugPtr)->_padding_ < iVar9) ||
     ((longlong *)*(undefined1 **)((TVar11.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
      &pUVar10->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) goto LAB_146f60d11;
  if ((local_50.DebugPtr == (UClass *)0x0) ||
     (pUVar10 = UEnvQueryItemType::StaticClass(), pUVar10 == (UClass *)0x0)) {
LAB_146f60b5a:
    TVar11.DebugPtr = TVar12.DebugPtr;
  }
  else {
    iVar9 = (int)pUVar10->_padding_;
    if (((int)(TVar6.DebugPtr)->_padding_ < iVar9) ||
       ((longlong *)*(undefined1 **)((TVar6.DebugPtr)->_padding_ + (longlong)iVar9 * 8) !=
        &pUVar10->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    TVar11 = local_50;
    if (!bVar7) goto LAB_146f60b5a;
  }
  if (((TVar11.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(TVar11.DebugPtr);
  }
  pUVar2 = ((TVar11.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((int)local_48 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_48);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)local_48) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_48,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  if (0 < (int)local_48) {
    do {
      (**(code **)(*(longlong *)pUVar2 + 0x2d0))(pUVar2,&local_68);
      if (((local_68 != FAISystem::InvalidRotation.Pitch) ||
          (dStack_60 != FAISystem::InvalidRotation.Yaw)) ||
         (local_58 != FAISystem::InvalidRotation.Roll)) {
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar3 + (longlong)*piVar1 * 0x18)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x818,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar9 + 1;
        pFVar4 = (param_2->AllocatorInstance).Data;
        pFVar3 = pFVar4 + (longlong)iVar9 * 0x18;
        *(double *)pFVar3 = local_68;
        *(double *)(pFVar3 + 8) = dStack_60;
        *(double *)(pFVar4 + (longlong)iVar9 * 0x18 + 0x10) = local_58;
      }
      TVar12._0_4_ = TVar12._0_4_ + 1;
      TVar12._4_4_ = 0;
    } while ((int)TVar12._0_4_ < (int)local_48);
  }
  if ((param_2->ArrayNum != local_48) && (2 < (byte)LogEQS._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_78,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
LAB_146f60d11:
  iVar9 = param_2->ArrayNum;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  return 0 < iVar9;
}

// PrepareContext @ 146f60d70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEnvQueryInstance::PrepareContext
          (FEnvQueryInstance *this,UClass *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  UObject *pUVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  TObjectPtr<UClass>_u_0 TVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  UClass *pUVar11;
  TObjectPtr<UClass>_u_0 TVar12;
  TObjectPtr<UClass>_u_0 TVar13;
  FString local_88;
  double local_78;
  double dStack_70;
  double local_68;
  TObjectPtr<UClass>_u_0 local_60;
  uint local_58;
  void *local_50;
  undefined8 local_48;
  
  if (param_1 == (UClass *)0x0) {
    return false;
  }
  TVar13.DebugPtr = (UClass *)0x0;
  local_60.DebugPtr = (UClass *)0x0;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_48 = 0;
  bVar8 = PrepareContext(this,param_1,(FEnvQueryContextData *)&local_60.ObjectPtr);
  TVar12 = local_60;
  if (((!bVar8) || (local_60.DebugPtr == (UClass *)0x0)) ||
     (pUVar11 = UEnvQueryItemType::StaticClass(), TVar7 = local_60, pUVar11 == (UClass *)0x0))
  goto LAB_146f610d4;
  iVar10 = (int)pUVar11->_padding_;
  if (((int)(TVar12.DebugPtr)->_padding_ < iVar10) ||
     ((longlong *)*(undefined1 **)((TVar12.DebugPtr)->_padding_ + (longlong)iVar10 * 8) !=
      &pUVar11->_padding_)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if ((!bVar8) || (local_60.DebugPtr == (UClass *)0x0)) goto LAB_146f610d4;
  pUVar11 = UEnvQueryItemType::StaticClass();
  if (pUVar11 == (UClass *)0x0) {
LAB_146f60e5e:
    TVar12.DebugPtr = TVar13.DebugPtr;
  }
  else {
    iVar10 = (int)pUVar11->_padding_;
    if (((int)(TVar7.DebugPtr)->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)((TVar7.DebugPtr)->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar11->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    TVar12 = local_60;
    if (!bVar8) goto LAB_146f60e5e;
  }
  pUVar11 = UEnvQueryItemType_VectorBase::StaticClass();
  TVar7 = local_60;
  if (pUVar11 == (UClass *)0x0) goto LAB_146f610d4;
  iVar10 = (int)pUVar11->_padding_;
  if (((int)(TVar12.DebugPtr)->_padding_ < iVar10) ||
     ((longlong *)*(undefined1 **)((TVar12.DebugPtr)->_padding_ + (longlong)iVar10 * 8) !=
      &pUVar11->_padding_)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (!bVar8) goto LAB_146f610d4;
  if ((local_60.DebugPtr == (UClass *)0x0) ||
     (pUVar11 = UEnvQueryItemType::StaticClass(), pUVar11 == (UClass *)0x0)) {
LAB_146f60ed2:
    TVar12.DebugPtr = TVar13.DebugPtr;
  }
  else {
    iVar10 = (int)pUVar11->_padding_;
    if (((int)(TVar7.DebugPtr)->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)((TVar7.DebugPtr)->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar11->_padding_)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    TVar12 = local_60;
    if (!bVar8) goto LAB_146f60ed2;
  }
  if (((TVar12.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(TVar12.DebugPtr);
  }
  pUVar2 = ((TVar12.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr;
  if ((int)local_58 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)local_58);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)local_58) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,local_58,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  dVar6 = __real_c7efffffe0000000;
  if (0 < (int)local_58) {
    do {
      (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,&local_78);
      if (((((dVar6 < local_78) && (local_78 < __real_47efffffe0000000)) && (dVar6 < dStack_70)) &&
          ((dStack_70 < __real_47efffffe0000000 && (dVar6 < local_68)))) &&
         (local_68 < __real_47efffffe0000000)) {
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_78) &&
            ((FScriptContainerElement *)&local_78 < pFVar3 + (longlong)*piVar1 * 0x18)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar10 + 1;
        pFVar4 = (param_2->AllocatorInstance).Data;
        pFVar3 = pFVar4 + (longlong)iVar10 * 0x18;
        *(double *)pFVar3 = local_78;
        *(double *)(pFVar3 + 8) = dStack_70;
        *(double *)(pFVar4 + (longlong)iVar10 * 0x18 + 0x10) = local_68;
      }
      TVar13._0_4_ = TVar13._0_4_ + 1;
      TVar13._4_4_ = 0;
    } while ((int)TVar13._0_4_ < (int)local_58);
  }
  if ((param_2->ArrayNum != local_58) && (2 < (byte)LogEQS._0_1_)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_88,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogEQS);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
LAB_146f610d4:
  iVar10 = param_2->ArrayNum;
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  return 0 < iVar10;
}

// PrepareContext @ 146f61130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FEnvQueryInstance::PrepareContext
          (FEnvQueryInstance *this,UClass *param_1,
          TArray<FEnvQuerySpatialData,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  ushort uVar3;
  TObjectPtr<UObject> TVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  TObjectPtr<UClass>_u_0 TVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  UClass *pUVar17;
  undefined4 *puVar18;
  FScriptContainerElement *pFVar19;
  TObjectPtr<UClass>_u_0 TVar20;
  longlong lVar21;
  TObjectPtr<UClass>_u_0 TVar22;
  void *pvVar23;
  uint uVar24;
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  TObjectPtr<UClass>_u_0 local_58;
  uint local_50;
  void *local_48;
  undefined8 local_40;
  
  if (param_1 == (UClass *)0x0) {
    return false;
  }
  TVar22.DebugPtr = (UClass *)0x0;
  local_58.DebugPtr = (UClass *)0x0;
  local_50 = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  bVar12 = PrepareContext(this,param_1,(FEnvQueryContextData *)&local_58.ObjectPtr);
  TVar20 = local_58;
  if (((!bVar12) || (local_58.DebugPtr == (UClass *)0x0)) ||
     (pUVar17 = UEnvQueryItemType::StaticClass(), TVar11 = local_58, pUVar17 == (UClass *)0x0))
  goto LAB_146f6153a;
  iVar15 = (int)pUVar17->_padding_;
  if (((int)(TVar20.DebugPtr)->_padding_ < iVar15) ||
     ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar15 * 8) !=
      &pUVar17->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if ((!bVar13) || (local_58.DebugPtr == (UClass *)0x0)) goto LAB_146f6153a;
  pUVar17 = UEnvQueryItemType::StaticClass();
  if (pUVar17 == (UClass *)0x0) {
LAB_146f61255:
    TVar20.DebugPtr = TVar22.DebugPtr;
  }
  else {
    iVar15 = (int)pUVar17->_padding_;
    if (((int)(TVar11.DebugPtr)->_padding_ < iVar15) ||
       ((longlong *)*(undefined1 **)((TVar11.DebugPtr)->_padding_ + (longlong)iVar15 * 8) !=
        &pUVar17->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    TVar20 = local_58;
    if (!bVar13) goto LAB_146f61255;
  }
  pUVar17 = UEnvQueryItemType_VectorBase::StaticClass();
  TVar11 = local_58;
  if (pUVar17 == (UClass *)0x0) goto LAB_146f6153a;
  iVar15 = (int)pUVar17->_padding_;
  if (((int)(TVar20.DebugPtr)->_padding_ < iVar15) ||
     ((longlong *)*(undefined1 **)((TVar20.DebugPtr)->_padding_ + (longlong)iVar15 * 8) !=
      &pUVar17->_padding_)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (!bVar13) goto LAB_146f6153a;
  if ((local_58.DebugPtr == (UClass *)0x0) ||
     (pUVar17 = UEnvQueryItemType::StaticClass(), pUVar17 == (UClass *)0x0)) {
LAB_146f612d1:
    TVar20.DebugPtr = TVar22.DebugPtr;
  }
  else {
    iVar15 = (int)pUVar17->_padding_;
    if (((int)(TVar11.DebugPtr)->_padding_ < iVar15) ||
       ((longlong *)*(undefined1 **)((TVar11.DebugPtr)->_padding_ + (longlong)iVar15 * 8) !=
        &pUVar17->_padding_)) {
      bVar13 = false;
    }
    else {
      bVar13 = true;
    }
    TVar20 = local_58;
    if (!bVar13) goto LAB_146f612d1;
  }
  if (((TVar20.DebugPtr)->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(TVar20.DebugPtr);
  }
  pvVar23 = local_48;
  uVar16 = local_50;
  TVar4.field0_0x0 =
       (TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)TVar20 + 0x110))->DebugPtr;
  piVar1 = &param_2->ArrayNum;
  iVar15 = *piVar1;
  lVar21 = (longlong)(int)local_50;
  uVar3 = *(ushort *)((longlong)TVar4.field0_0x0 + 0x28);
  if (iVar15 < (int)local_50) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,local_50 - iVar15,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
  }
  else {
    if ((int)local_50 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_50);
    }
    if ((int)local_50 < iVar15) {
      uVar24 = iVar15 - local_50;
      if (((int)(uVar24 | local_50) < 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar14 = (*pcVar6)();
        return (bool)uVar14;
      }
      if (uVar24 != 0) {
        pFVar19 = (param_2->AllocatorInstance).Data + lVar21 * 0x30;
        iVar15 = (*piVar1 - uVar24) - uVar16;
        if (iVar15 != 0) {
          memmove(pFVar19,pFVar19 + (longlong)(int)uVar24 * 0x30,(longlong)iVar15 * 0x30);
        }
        *piVar1 = *piVar1 - uVar24;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
      }
    }
  }
  if (0 < (int)local_50) {
    lVar21 = 0;
    do {
      puVar18 = (undefined4 *)
                (**(code **)(*(longlong *)TVar4.field0_0x0 + 0x2c8))
                          (TVar4.field0_0x0,local_88,pvVar23);
      uVar24 = TVar22._0_4_;
      uVar7 = *puVar18;
      uVar8 = puVar18[1];
      uVar9 = puVar18[2];
      uVar10 = puVar18[3];
      uVar2 = *(undefined8 *)(puVar18 + 4);
      uVar16 = 0;
      if ((int)uVar24 < *piVar1) {
        uVar16 = ~uVar24 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar14 = (*pcVar6)();
        return (bool)uVar14;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      pFVar19 = pFVar5 + lVar21;
      *(undefined4 *)pFVar19 = uVar7;
      *(undefined4 *)(pFVar19 + 4) = uVar8;
      *(undefined4 *)(pFVar19 + 8) = uVar9;
      *(undefined4 *)(pFVar19 + 0xc) = uVar10;
      *(undefined8 *)(pFVar5 + lVar21 + 0x10) = uVar2;
      puVar18 = (undefined4 *)
                (**(code **)(*(longlong *)TVar4.field0_0x0 + 0x2d0))
                          (TVar4.field0_0x0,local_70,pvVar23);
      uVar7 = *puVar18;
      uVar8 = puVar18[1];
      uVar9 = puVar18[2];
      uVar10 = puVar18[3];
      uVar2 = *(undefined8 *)(puVar18 + 4);
      uVar16 = 0;
      if ((int)uVar24 < *piVar1) {
        uVar16 = ~uVar24 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        uVar14 = (*pcVar6)();
        return (bool)uVar14;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      pvVar23 = (void *)((longlong)pvVar23 + (ulonglong)uVar3);
      TVar22._0_4_ = uVar24 + 1;
      TVar22._4_4_ = 0;
      pFVar19 = pFVar5 + lVar21 + 0x18;
      *(undefined4 *)pFVar19 = uVar7;
      *(undefined4 *)(pFVar19 + 4) = uVar8;
      *(undefined4 *)(pFVar19 + 8) = uVar9;
      *(undefined4 *)(pFVar19 + 0xc) = uVar10;
      *(undefined8 *)(pFVar5 + lVar21 + 0x28) = uVar2;
      lVar21 = lVar21 + 0x30;
    } while ((int)TVar22._0_4_ < (int)local_50);
  }
LAB_146f6153a:
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return bVar12;
}

// ReserveItemData @ 146f66c30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::ReserveItemData(FEnvQueryInstance *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  uchar auVar8 [8];
  uint uVar9;
  FName local_res8;
  FStatMessage local_38;
  
  auVar8 = (uchar  [8])(longlong)*(int *)((longlong)&this->_padding_ + 4);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (auVar8 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_AI_EQS_InstanceMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar4,
                         L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                         L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar5;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar6,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar8);
      if (pFVar6->ScopeCount == 0) {
        FThreadStats::Flush(pFVar6,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar6,false,false);
      }
    }
  }
  iVar2 = (int)this->_padding_;
  uVar9 = (uint)this->ValueSize * param_1 + iVar2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar9,(ForAnyElementType *)&this->_padding_,iVar2,piVar1);
  }
  auVar8 = (uchar  [8])(longlong)*piVar1;
  if (auVar8 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_AI_EQS_InstanceMemory;
    if (StatPtr_STAT_AI_EQS_InstanceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_AI_EQS_InstanceMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_AI_EQS_InstanceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AI_EQS_InstanceMemory,*pFVar4,
                         L"Instance memory","STATGROUP_AI_EQS","STATCAT_Advanced",
                         L"Environment Query",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar5;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_38.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res8 = FVar3;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar6,&local_38);
      FStatsTrace::Add(&local_res8,(long64)auVar8);
      if (pFVar6->ScopeCount == 0) {
        FThreadStats::Flush(pFVar6,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar6,false,false);
      }
    }
  }
  return;
}

// SortScores @ 146f76490

/* WARNING: Removing unreachable block (ram,0x000146f766f2) */
/* WARNING: Removing unreachable block (ram,0x000146f76700) */
/* WARNING: Removing unreachable block (ram,0x000146f7670e) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FEnvQueryInstance::SortScores(FEnvQueryInstance *this)

{
  undefined8 uVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  ForAnyElementType FVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  undefined8 uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  TArray<float,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FIdentityFunctor local_res8 [8];
  longlong local_res10;
  longlong local_res18;
  ForAnyElementType local_88;
  undefined8 local_80;
  FSortHelperForDebugData local_78;
  
  uVar9 = (uint)this->_padding_;
  lVar12 = (longlong)(int)uVar9;
  uVar15 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  local_res18 = lVar12;
  if (0 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,uVar9,&local_88,0,(int *)((longlong)&local_80 + 4));
    uVar16 = uVar15;
    uVar17 = uVar15;
    FVar3.Data = local_78.ItemDetails.TestResults.AllocatorInstance.Data;
    uVar1 = local_78.ItemDetails.TestResults._8_8_;
    FVar4.Data = local_78.ItemDetails.TestWeightedScores.AllocatorInstance.Data;
    uVar5 = local_78.ItemDetails.TestWeightedScores._8_8_;
    FVar6.Data = local_78.ItemDetails.FailedDescription.Data.AllocatorInstance.Data;
    uVar7 = local_78.ItemDetails.FailedDescription.Data._8_8_;
    do {
      local_78.ItemDetails.FailedDescription.Data._8_8_ = uVar7;
      local_78.ItemDetails.FailedDescription.Data.AllocatorInstance.Data = FVar6.Data;
      local_78.ItemDetails.TestWeightedScores._8_8_ = uVar5;
      local_78.ItemDetails.TestWeightedScores.AllocatorInstance.Data = FVar4.Data;
      local_78.ItemDetails.TestResults._8_8_ = uVar1;
      local_78.ItemDetails.TestResults.AllocatorInstance.Data = FVar3.Data;
      uVar13 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar13 < (this->ItemDetails).ArrayNum) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar11 = (this->ItemDetails).AllocatorInstance.Data;
      uVar9 = 0;
      if ((int)uVar13 < (int)this->_padding_) {
        uVar9 = ~uVar13 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_78.Item = *(FEnvQueryItem *)(this->_padding_ + uVar17 * 8);
      FEnvQueryItemDetails::FEnvQueryItemDetails
                (&local_78.ItemDetails,
                 (FEnvQueryItemDetails *)(pFVar11 + (longlong)(int)uVar13 * 0x38));
      if (((local_88.Data <= &local_78) &&
          (&local_78 < (FSortHelperForDebugData *)(local_88.Data + (longlong)local_80._4_4_ * 0x40))
          ) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar10 = (int)local_80;
      if ((int)local_80 == local_80._4_4_) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&local_88,(int *)((longlong)&local_80 + 4));
      }
      local_80 = CONCAT44(local_80._4_4_,iVar10 + 1);
      pFVar11 = local_88.Data + (longlong)iVar10 * 0x40;
      *(FEnvQueryItem *)&pFVar11->field_0x0 = local_78.Item;
      *(undefined8 *)(pFVar11 + 8) = 0;
      *(FScriptContainerElement **)(pFVar11 + 8) =
           local_78.ItemDetails.TestResults.AllocatorInstance.Data;
      *(int *)(pFVar11 + 0x10) = local_78.ItemDetails.TestResults.ArrayNum;
      *(int *)(pFVar11 + 0x14) = local_78.ItemDetails.TestResults.ArrayMax;
      *(undefined8 *)(pFVar11 + 0x18) = 0;
      *(FScriptContainerElement **)(pFVar11 + 0x18) =
           local_78.ItemDetails.TestWeightedScores.AllocatorInstance.Data;
      *(int *)(pFVar11 + 0x20) = local_78.ItemDetails.TestWeightedScores.ArrayNum;
      *(int *)(pFVar11 + 0x24) = local_78.ItemDetails.TestWeightedScores.ArrayMax;
      *(int *)(pFVar11 + 0x28) = local_78.ItemDetails.FailedTestIndex;
      *(undefined8 *)(pFVar11 + 0x30) = 0;
      *(int *)(pFVar11 + 0x2c) = local_78.ItemDetails.ItemIndex;
      *(FScriptContainerElement **)(pFVar11 + 0x30) =
           local_78.ItemDetails.FailedDescription.Data.AllocatorInstance.Data;
      *(int *)(pFVar11 + 0x38) = local_78.ItemDetails.FailedDescription.Data.ArrayNum;
      *(int *)(pFVar11 + 0x3c) = local_78.ItemDetails.FailedDescription.Data.ArrayMax;
      local_78.ItemDetails.FailedDescription.Data.ArrayNum = 0;
      local_78.ItemDetails.FailedDescription.Data.ArrayMax = 0;
      uVar7 = local_78.ItemDetails.FailedDescription.Data._8_8_;
      local_78.ItemDetails.FailedDescription.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      FVar6.Data = local_78.ItemDetails.FailedDescription.Data.AllocatorInstance.Data;
      local_78.ItemDetails.TestWeightedScores.ArrayNum = 0;
      local_78.ItemDetails.TestWeightedScores.ArrayMax = 0;
      uVar5 = local_78.ItemDetails.TestWeightedScores._8_8_;
      local_78.ItemDetails.TestWeightedScores.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      FVar4.Data = local_78.ItemDetails.TestWeightedScores.AllocatorInstance.Data;
      local_78.ItemDetails.TestResults.ArrayNum = 0;
      local_78.ItemDetails.TestResults.ArrayMax = 0;
      uVar1 = local_78.ItemDetails.TestResults._8_8_;
      local_78.ItemDetails.TestResults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar3.Data = local_78.ItemDetails.TestResults.AllocatorInstance.Data;
      local_78.ItemDetails.FailedDescription.Data.ArrayNum = 0;
      local_78.ItemDetails.FailedDescription.Data.ArrayMax = 0;
      local_78.ItemDetails.FailedDescription.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_78.ItemDetails.TestWeightedScores.ArrayNum = 0;
      local_78.ItemDetails.TestWeightedScores.ArrayMax = 0;
      local_78.ItemDetails.TestWeightedScores.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      local_78.ItemDetails.TestResults.ArrayNum = 0;
      local_78.ItemDetails.TestResults.ArrayMax = 0;
      local_78.ItemDetails.TestResults.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      uVar16 = (ulonglong)(uVar13 + 1);
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < lVar12);
  }
  AlgoImpl::
  IntroSortInternal<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,int,FIdentityFunctor,TDereferenceWrapper<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,TGreater<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData>_>_>
            ((FSortHelperForDebugData *)local_88.Data,(int)local_80,local_res8[0],
             (TGreater<_protected:_void___cdecl_FEnvQueryInstance::SortScores(void)_::_2_::FSortHelperForDebugData>
              *)local_res8);
  if (0 < lVar12) {
    local_res10 = 0;
    uVar16 = uVar15;
    uVar17 = uVar15;
    do {
      uVar14 = (uint)uVar15;
      uVar13 = ~uVar14 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar14 < (int)local_80) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = 0;
      if ((int)uVar14 < (int)this->_padding_) {
        uVar9 = uVar13;
      }
      uVar1 = *(undefined8 *)(local_88.Data + uVar17);
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(undefined8 *)(this->_padding_ + uVar16 * 8) = uVar1;
      uVar9 = 0;
      if ((int)uVar14 < (int)local_80) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar3.Data = local_88.Data;
      uVar9 = 0;
      if ((int)uVar14 < (this->ItemDetails).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar12 = local_res10;
      this_00 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                ((this->ItemDetails).AllocatorInstance.Data + local_res10);
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (this_00,(TArray<float,TSizedDefaultAllocator<32>_> *)(FVar3.Data + uVar17 + 8));
      TArray<float,TSizedDefaultAllocator<32>_>::operator=
                (this_00 + 1,
                 (TArray<float,TSizedDefaultAllocator<32>_> *)(FVar3.Data + uVar17 + 0x18));
      *(undefined4 *)&this_00[2].AllocatorInstance.Data =
           *(undefined4 *)(FVar3.Data + uVar17 + 0x28);
      *(undefined4 *)((longlong)&this_00[2].AllocatorInstance.Data + 4) =
           *(undefined4 *)(FVar3.Data + uVar17 + 0x2c);
      ::FString::operator=((FString *)&this_00[2].ArrayNum,(FString *)(FVar3.Data + uVar17 + 0x30));
      local_res10 = lVar12 + 0x38;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar16 = uVar16 + 1;
      uVar17 = uVar17 + 0x40;
    } while ((longlong)uVar16 < local_res18);
  }
  DestructItems<_FEnvQueryInstance::SortScores_::__l2::FSortHelperForDebugData,int>
            ((FSortHelperForDebugData *)local_88.Data,(int)local_80);
  if ((FSortHelperForDebugData *)local_88.Data != (FSortHelperForDebugData *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// StripRedundantData @ 146f78300

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FEnvQueryInstance::StripRedundantData(FEnvQueryInstance *this)

{
  longlong lVar1;
  ForAnyElementType FVar2;
  FEnvQueryDebugData local_78;
  
  if (this->bStoreDebugInfo != 0) {
    local_78.bSingleItemResult = 0;
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78._padding_ = 0;
    local_78.DebugItems.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.DebugItems.ArrayNum = 0;
    local_78.DebugItems.ArrayMax = 0;
    local_78.DebugItemDetails.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.DebugItemDetails.ArrayNum = 0;
    local_78.DebugItemDetails.ArrayMax = 0;
    local_78.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.RawData.ArrayNum = 0;
    local_78.RawData.ArrayMax = 0;
    local_78.PerformedTestNames.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.PerformedTestNames.ArrayNum = 0;
    local_78.PerformedTestNames.ArrayMax = 0;
    local_78.CurrentOptionGeneratorIdx = -1;
    FEnvQueryDebugData::operator=(&this->DebugData,&local_78);
    FVar2.Data = local_78.PerformedTestNames.AllocatorInstance.Data;
    DestructItems<FString,int>
              ((FString *)local_78.PerformedTestNames.AllocatorInstance.Data,
               local_78.PerformedTestNames.ArrayNum);
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (local_78.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.RawData.AllocatorInstance.Data);
    }
    FVar2.Data = local_78.DebugItemDetails.AllocatorInstance.Data;
    DestructItems<FEnvQueryItemDetails,int>
              ((FEnvQueryItemDetails *)local_78.DebugItemDetails.AllocatorInstance.Data,
               local_78.DebugItemDetails.ArrayNum);
    if ((FEnvQueryItemDetails *)FVar2.Data != (FEnvQueryItemDetails *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    if (local_78.DebugItems.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.DebugItems.AllocatorInstance.Data);
    }
    lVar1 = local_78._padding_;
    DestructItems<FEnvQueryDebugProfileData::FOptionData,int>
              ((FOptionData *)local_78._padding_,(int)local_78._padding_);
    if ((FOptionData *)lVar1 != (FOptionData *)0x0) {
      FMemory::Free((void *)lVar1);
    }
    lVar1 = local_78._padding_;
    DestructItems<FEnvQueryDebugProfileData::FOptionStat,int>
              ((FOptionStat *)local_78._padding_,(int)local_78._padding_);
    if ((FOptionStat *)lVar1 != (FOptionStat *)0x0) {
      FMemory::Free((void *)lVar1);
    }
  }
  TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<FEnvQueryItem,TSizedDefaultAllocator<32>_> *)this,this->NumValidItems,Default);
  return;
}

