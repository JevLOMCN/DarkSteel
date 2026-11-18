// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// GetActorGuids @ 148a53c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorInstanceGuid * __cdecl
FActorInstanceGuid::GetActorGuids(FActorInstanceGuid *__return_storage_ptr__,AActor *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FGuid FVar6;
  FGuid FVar7;
  bool bVar8;
  FActorInstanceGuid *pFVar9;
  ULevel *pUVar10;
  FGuid *pFVar11;
  FPlatformRWLock *SRWLock;
  FActorInstanceGuid *pFVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  TPairInitializer<UObjectBase_const_*_const_&,FActorInstanceGuid_const_&> local_res8;
  FGuid local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  FGuid local_c8;
  FGuid local_b8;
  FActorInstanceGuid local_a8;
  FGuid local_88;
  FActorInstanceGuid **local_78;
  FGuid *local_70;
  FGuid local_68;
  FGuid local_58;
  FActorInstanceGuid local_48;
  FGuid local_28;
  
  (__return_storage_ptr__->ActorGuid).A = 0;
  (__return_storage_ptr__->ActorGuid).B = 0;
  (__return_storage_ptr__->ActorGuid).C = 0;
  (__return_storage_ptr__->ActorGuid).D = 0;
  (__return_storage_ptr__->ActorInstanceGuid).A = 0;
  (__return_storage_ptr__->ActorInstanceGuid).B = 0;
  (__return_storage_ptr__->ActorInstanceGuid).C = 0;
  (__return_storage_ptr__->ActorInstanceGuid).D = 0;
  if (param_1 == (AActor *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                       ,0x11d,L"");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FActorInstanceGuid *)(*pcVar3)();
      return pFVar9;
    }
  }
  AcquireSRWLockShared((PSRWLOCK)&GActorGuids.AnnotationCacheCritical);
  SRWLock = &GActorGuids.AnnotationCacheCritical;
  if (param_1 == (AActor *)GActorGuids.AnnotationCacheKey) {
    local_68 = GActorGuids.AnnotationCacheValue.ActorGuid;
    local_c8 = GActorGuids.AnnotationCacheValue.ActorInstanceGuid;
    local_58 = GActorGuids.AnnotationCacheValue.ActorInstanceGuid;
  }
  else {
    ReleaseSRWLockShared((PSRWLOCK)&GActorGuids.AnnotationCacheCritical);
    AcquireSRWLockShared((PSRWLOCK)&GActorGuids.AnnotationMapCritical);
    pFVar9 = TMapBase<UObjectBase_const_*,FActorInstanceGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>_>
             ::Find((TMapBase<UObjectBase_const_*,FActorInstanceGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>_>
                     *)&GActorGuids.AnnotationMap,(UObjectBase *)param_1);
    if (pFVar9 == (FActorInstanceGuid *)0x0) {
      local_a8.ActorGuid.A = 0;
      local_a8.ActorGuid.B = 0;
      pFVar12 = &local_a8;
      local_a8.ActorGuid.C = 0;
      local_a8.ActorGuid.D = 0;
      local_a8.ActorInstanceGuid.A = 0;
      local_a8.ActorInstanceGuid.B = 0;
      local_a8.ActorInstanceGuid.C = 0;
      local_a8.ActorInstanceGuid.D = 0;
    }
    else {
      local_48.ActorGuid.A = (pFVar9->ActorGuid).A;
      local_48.ActorGuid.B = (pFVar9->ActorGuid).B;
      local_48.ActorGuid.C = (pFVar9->ActorGuid).C;
      local_48.ActorGuid.D = (pFVar9->ActorGuid).D;
      pFVar12 = &local_48;
      local_48.ActorInstanceGuid.A = (pFVar9->ActorInstanceGuid).A;
      local_48.ActorInstanceGuid.B = (pFVar9->ActorInstanceGuid).B;
      local_48.ActorInstanceGuid.C = (pFVar9->ActorInstanceGuid).C;
      local_48.ActorInstanceGuid.D = (pFVar9->ActorInstanceGuid).D;
    }
    FUObjectAnnotationSparse<FActorInstanceGuid,1>::SetAnnotationCacheKeyAndValue
              (&GActorGuids,(UObjectBase *)param_1,pFVar12);
    if (pFVar9 == (FActorInstanceGuid *)0x0) {
      local_e8 = 0;
      uStack_e0 = 0;
      uVar13 = 0;
      uVar15 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_d8._0_4_ = 0;
      local_d8._4_4_ = 0;
      uStack_d0._0_4_ = 0;
      uStack_d0._4_4_ = 0;
      local_c8.A = (uint)local_d8;
      local_c8.B = local_d8._4_4_;
      local_c8.C = (uint)uStack_d0;
      local_c8.D = uStack_d0._4_4_;
    }
    else {
      uVar13._0_4_ = (pFVar9->ActorGuid).A;
      uVar13._4_4_ = (pFVar9->ActorGuid).B;
      uVar15._0_4_ = (pFVar9->ActorGuid).C;
      uVar15._4_4_ = (pFVar9->ActorGuid).D;
      local_c8.A = (pFVar9->ActorInstanceGuid).A;
      local_c8.B = (pFVar9->ActorInstanceGuid).B;
      local_c8.C = (pFVar9->ActorInstanceGuid).C;
      local_c8.D = (pFVar9->ActorInstanceGuid).D;
    }
    SRWLock = &GActorGuids.AnnotationMapCritical;
    local_68.C = (int)uVar15;
    local_68.D = (int)((ulonglong)uVar15 >> 0x20);
    local_68.A = (int)uVar13;
    local_68.B = (int)((ulonglong)uVar13 >> 0x20);
    local_58.B = local_c8.B;
    local_58.A = local_c8.A;
    local_58.C = local_c8.C;
    local_58.D = local_c8.D;
  }
  local_88 = local_68;
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  FVar7 = local_88;
  FVar6 = local_c8;
  (__return_storage_ptr__->ActorGuid).A = local_88.A;
  (__return_storage_ptr__->ActorGuid).B = local_88.B;
  (__return_storage_ptr__->ActorGuid).C = local_88.C;
  (__return_storage_ptr__->ActorGuid).D = local_88.D;
  (__return_storage_ptr__->ActorInstanceGuid).A = local_c8.A;
  (__return_storage_ptr__->ActorInstanceGuid).B = local_c8.B;
  (__return_storage_ptr__->ActorInstanceGuid).C = local_c8.C;
  (__return_storage_ptr__->ActorInstanceGuid).D = local_c8.D;
  if ((((__return_storage_ptr__->ActorInstanceGuid).D == 0 &&
       (__return_storage_ptr__->ActorInstanceGuid).B == 0) &&
      (__return_storage_ptr__->ActorInstanceGuid).A == 0) &&
      (__return_storage_ptr__->ActorInstanceGuid).C == 0) {
    local_c8 = FVar6;
    local_88 = FVar7;
    pUVar10 = AActor::GetLevel(param_1);
    GetLevelInstanceGuid(&local_f8,pUVar10);
    if (((local_f8.D == 0 && local_f8.C == 0) && local_f8.B == 0) && local_f8.A == 0) {
      uVar14._0_4_ = (__return_storage_ptr__->ActorGuid).A;
      uVar14._4_4_ = (__return_storage_ptr__->ActorGuid).B;
      uVar16._0_4_ = (__return_storage_ptr__->ActorGuid).C;
      uVar16._4_4_ = (__return_storage_ptr__->ActorGuid).D;
    }
    else {
      pFVar11 = FGuid::Combine(&local_28,&local_f8,&__return_storage_ptr__->ActorGuid);
      uVar14._0_4_ = pFVar11->A;
      uVar14._4_4_ = pFVar11->B;
      uVar16._0_4_ = pFVar11->C;
      uVar16._4_4_ = pFVar11->D;
    }
    (__return_storage_ptr__->ActorInstanceGuid).A = (int)uVar14;
    (__return_storage_ptr__->ActorInstanceGuid).B = (int)((ulonglong)uVar14 >> 0x20);
    (__return_storage_ptr__->ActorInstanceGuid).C = (int)uVar16;
    (__return_storage_ptr__->ActorInstanceGuid).D = (int)((ulonglong)uVar16 >> 0x20);
    local_res8.Value = (FActorInstanceGuid *)param_1;
    if (param_1 == (AActor *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x5f,L"");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FActorInstanceGuid *)(*pcVar3)();
        return pFVar9;
      }
    }
    local_c8 = __return_storage_ptr__->ActorGuid;
    uVar1 = (__return_storage_ptr__->ActorGuid).C;
    uVar2 = (__return_storage_ptr__->ActorGuid).D;
    local_b8 = __return_storage_ptr__->ActorInstanceGuid;
    if ((((local_c8.B == 0 && uVar2 == 0) && uVar1 == 0) && local_c8.A == 0) &&
       (((local_b8.D == 0 && local_b8.B == 0) && local_b8.C == 0) && local_b8.A == 0)) {
      FUObjectAnnotationSparse<FActorInstanceGuid,1>::RemoveAnnotation
                (&GActorGuids,(UObjectBase *)local_res8.Value);
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)&GActorGuids.AnnotationMapCritical);
      uVar5 = GActorGuids.AnnotationMap._52_4_;
      uVar4 = GActorGuids.AnnotationMap._8_4_;
      local_78 = &local_res8.Value;
      local_70 = &local_c8;
      TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FActorInstanceGuid_const_&>_>
                ((TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
                  *)&GActorGuids.AnnotationMap,&local_res8,(bool *)&local_78);
      pFVar9 = local_res8.Value;
      AcquireSRWLockExclusive((PSRWLOCK)&GActorGuids.AnnotationCacheCritical);
      GActorGuids.AnnotationCacheKey = (UObjectBase *)pFVar9;
      GActorGuids.AnnotationCacheValue.ActorGuid = local_c8;
      GActorGuids.AnnotationCacheValue.ActorInstanceGuid = local_b8;
      ReleaseSRWLockExclusive((PSRWLOCK)&GActorGuids.AnnotationCacheCritical);
      ReleaseSRWLockExclusive((PSRWLOCK)&GActorGuids.AnnotationMapCritical);
      if (uVar4 == uVar5) {
        FUObjectAnnotationSparse<FActorInstanceGuid,1>::ProcessRegistration(&GActorGuids);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetActorInstanceGuid @ 148a53f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __cdecl
FActorInstanceGuid::GetActorInstanceGuid(FGuid *__return_storage_ptr__,AActor *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FActorInstanceGuid *pFVar4;
  FActorInstanceGuid local_28;
  
  pFVar4 = GetActorGuids(&local_28,param_1);
  uVar1 = (pFVar4->ActorInstanceGuid).B;
  uVar2 = (pFVar4->ActorInstanceGuid).C;
  uVar3 = (pFVar4->ActorInstanceGuid).D;
  __return_storage_ptr__->A = (pFVar4->ActorInstanceGuid).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetLevelInstanceGuid @ 148a58c90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGuid * __cdecl
FActorInstanceGuid::GetLevelInstanceGuid(FGuid *__return_storage_ptr__,ULevel *param_1)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  FLevelInstanceGuid *pFVar4;
  FGuid *pFVar5;
  ULevel *local_res10;
  undefined8 local_res18 [2];
  FLevelInstanceGuid local_158;
  FGuid local_120;
  FGuid local_110;
  FGuid local_100;
  FLevelInstanceGuid local_f0;
  FLevelInstanceGuid local_b8;
  FGuid local_80;
  FGuid local_70;
  FGuid local_60;
  FLevelInstanceGuid local_50;
  
  if (param_1 == (ULevel *)0x0) {
    __return_storage_ptr__->A = 0;
    __return_storage_ptr__->B = 0;
    __return_storage_ptr__->C = 0;
    __return_storage_ptr__->D = 0;
    return __return_storage_ptr__;
  }
  FUObjectAnnotationSparse<FLevelInstanceGuid,1>::GetAnnotation
            (&GLevelInstanceGuids,&local_158,(UObjectBase *)param_1);
  if (local_158.bIsDefault == false) goto LAB_148a58ed9;
  pUVar3 = ULevelInstanceSubsystem::GetOwningLevel(param_1,false);
  if (pUVar3 == (ULevel *)0x0) {
LAB_148a58dbf:
    if (local_158.bIsDefault == false) goto LAB_148a58ed9;
  }
  else {
    pFVar4 = FUObjectAnnotationSparse<FLevelInstanceGuid,1>::GetAnnotation
                       (&GLevelInstanceGuids,&local_50,(UObjectBase *)pUVar3);
    local_158.Level.WeakPtr = (pFVar4->Level).WeakPtr;
    local_158.OwnerLevel.WeakPtr = (pFVar4->OwnerLevel).WeakPtr;
    local_158.LevelInstanceGuid.A = (pFVar4->LevelInstanceGuid).A;
    local_158.LevelInstanceGuid.B = (pFVar4->LevelInstanceGuid).B;
    local_158.LevelInstanceGuid.C = (pFVar4->LevelInstanceGuid).C;
    local_158.LevelInstanceGuid.D = (pFVar4->LevelInstanceGuid).D;
    pFVar5 = &pFVar4->ResolvedLevelInstanceGuid;
    local_158.ResolvedLevelInstanceGuid.A = pFVar5->A;
    local_158.ResolvedLevelInstanceGuid.B = pFVar5->B;
    local_158.ResolvedLevelInstanceGuid.C = (pFVar4->ResolvedLevelInstanceGuid).C;
    local_158.ResolvedLevelInstanceGuid.D = (pFVar4->ResolvedLevelInstanceGuid).D;
    local_158.bIsDefault = pFVar4->bIsDefault;
    local_158._49_3_ = *(undefined3 *)&pFVar4->field_0x31;
    if (local_158.bIsDefault == false) {
      if ((((((pFVar4->ResolvedLevelInstanceGuid).D == 0 &&
             (pFVar4->ResolvedLevelInstanceGuid).B == 0) &&
            (pFVar4->ResolvedLevelInstanceGuid).C == 0) && pFVar5->A == 0) &&
          (((local_158.LevelInstanceGuid.B != 0 || local_158.LevelInstanceGuid.D != 0) ||
           local_158.LevelInstanceGuid.C != 0) || local_158.LevelInstanceGuid.A != 0)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("LevelGuids.ResolvedLevelInstanceGuid.IsValid() || !LevelGuids.LevelInstanceGuid.IsValid()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ActorInstanceGuids.cpp"
                             ,0x54,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FGuid *)(*pcVar1)();
        return pFVar5;
      }
      FUObjectAnnotationSparse<FLevelInstanceGuid,1>::AddAnnotation
                (&GLevelInstanceGuids,(UObjectBase *)param_1,&local_158);
      goto LAB_148a58dbf;
    }
  }
  local_100.A = 0;
  local_100.B = 0;
  local_100.C = 0;
  local_100.D = 0;
  local_110.A = 0;
  local_110.B = 0;
  local_110.C = 0;
  local_110.D = 0;
  FUObjectAnnotationSparse<FLevelInstanceGuid,1>::GetAnnotation
            (&GLevelInstanceGuids,&local_b8,(UObjectBase *)param_1);
  if ((local_b8.bIsDefault == false) &&
     ((((bVar2 = TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
                           (&local_b8.Level,param_1), !bVar2 ||
        (bVar2 = TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
                           (&local_b8.OwnerLevel,(ULevel *)0x0), !bVar2)) ||
       (((local_b8.LevelInstanceGuid.D != 0 || local_b8.LevelInstanceGuid.C != 0) ||
        local_b8.LevelInstanceGuid.B != 0) || local_b8.LevelInstanceGuid.A != 0)) &&
      (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_980898774387785678>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ActorInstanceGuids.cpp"
                          ,0x32,"NewOrIdenticalRegistration()"), bVar2)))) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FGuid *)(*pcVar1)();
    return pFVar5;
  }
  local_f0.Level.WeakPtr.ObjectIndex = 0;
  local_f0.Level.WeakPtr.ObjectSerialNumber = 0;
  local_f0.OwnerLevel.WeakPtr.ObjectIndex = 0;
  local_f0.OwnerLevel.WeakPtr.ObjectSerialNumber = 0;
  local_f0.LevelInstanceGuid.A = 0;
  local_f0.LevelInstanceGuid.B = 0;
  local_f0.LevelInstanceGuid.C = 0;
  local_f0.LevelInstanceGuid.D = 0;
  local_f0.ResolvedLevelInstanceGuid.A = 0;
  local_f0.ResolvedLevelInstanceGuid.B = 0;
  local_f0.ResolvedLevelInstanceGuid.C = 0;
  local_f0.ResolvedLevelInstanceGuid.D = 0;
  local_f0.bIsDefault = true;
  local_res10 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_f0,(FObjectPtr)&local_res10);
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_f0.OwnerLevel.WeakPtr,(FObjectPtr)local_res18);
  local_f0.bIsDefault = false;
  local_f0.LevelInstanceGuid.A = local_110.A;
  local_f0.LevelInstanceGuid.B = local_110.B;
  local_f0.LevelInstanceGuid.C = local_110.C;
  local_f0.LevelInstanceGuid.D = local_110.D;
  local_f0.ResolvedLevelInstanceGuid.A = local_100.A;
  local_f0.ResolvedLevelInstanceGuid.B = local_100.B;
  local_f0.ResolvedLevelInstanceGuid.C = local_100.C;
  local_f0.ResolvedLevelInstanceGuid.D = local_100.D;
  FUObjectAnnotationSparse<FLevelInstanceGuid,1>::AddAnnotation
            (&GLevelInstanceGuids,(UObjectBase *)param_1,&local_f0);
  GetLevelInstanceGuid(&local_80,param_1);
LAB_148a58ed9:
  if ((((local_158.ResolvedLevelInstanceGuid.D == 0 && local_158.ResolvedLevelInstanceGuid.B == 0)
       && local_158.ResolvedLevelInstanceGuid.C == 0) && local_158.ResolvedLevelInstanceGuid.A == 0)
     && (((local_158.LevelInstanceGuid.D != 0 || local_158.LevelInstanceGuid.C != 0) ||
         local_158.LevelInstanceGuid.B != 0) || local_158.LevelInstanceGuid.A != 0)) {
    local_120.A = 0;
    local_120.B = 0;
    local_120.C = 0;
    local_120.D = 0;
    bVar2 = FWeakObjectPtr::IsValid(&local_158.OwnerLevel.WeakPtr);
    if (bVar2) {
      pUVar3 = (ULevel *)FWeakObjectPtr::Get(&local_158.OwnerLevel.WeakPtr);
      pFVar5 = GetLevelInstanceGuid(&local_70,pUVar3);
      local_120.A = pFVar5->A;
      local_120.B = pFVar5->B;
      local_120.C = pFVar5->C;
      local_120.D = pFVar5->D;
    }
    pFVar5 = FGuid::Combine(&local_60,&local_120,&local_158.LevelInstanceGuid);
    local_158.ResolvedLevelInstanceGuid.A = pFVar5->A;
    local_158.ResolvedLevelInstanceGuid.B = pFVar5->B;
    local_158.ResolvedLevelInstanceGuid.C = pFVar5->C;
    local_158.ResolvedLevelInstanceGuid.D = pFVar5->D;
    FUObjectAnnotationSparse<FLevelInstanceGuid,1>::AddAnnotation
              (&GLevelInstanceGuids,(UObjectBase *)param_1,&local_158);
  }
  __return_storage_ptr__->A = local_158.ResolvedLevelInstanceGuid.A;
  __return_storage_ptr__->B = local_158.ResolvedLevelInstanceGuid.B;
  __return_storage_ptr__->C = local_158.ResolvedLevelInstanceGuid.C;
  __return_storage_ptr__->D = local_158.ResolvedLevelInstanceGuid.D;
  return __return_storage_ptr__;
}

// IsDefault @ 148a5e240

bool __thiscall FActorInstanceGuid::IsDefault(FActorInstanceGuid *this)

{
  if (((((this->ActorGuid).D == 0 && (this->ActorGuid).C == 0) && (this->ActorGuid).B == 0) &&
       (this->ActorGuid).A == 0) &&
     ((((this->ActorInstanceGuid).D == 0 && (this->ActorInstanceGuid).C == 0) &&
      (this->ActorInstanceGuid).B == 0) && (this->ActorInstanceGuid).A == 0)) {
    return true;
  }
  return false;
}

// ReleaseActorInstanceGuid @ 148a64410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FActorInstanceGuid::ReleaseActorInstanceGuid(AActor *param_1)

{
  if (((uint)param_1->_padding_ >> 0x13 & 1) != 0) {
    FUObjectAnnotationSparse<FActorInstanceGuid,1>::RemoveAnnotation
              (&GActorGuids,(UObjectBase *)param_1);
    return;
  }
  return;
}

// ReleaseLevelInstanceGuid @ 148a64430

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FActorInstanceGuid::ReleaseLevelInstanceGuid(ULevel *param_1)

{
  FUObjectAnnotationSparse<FLevelInstanceGuid,1>::RemoveAnnotation
            (&GLevelInstanceGuids,(UObjectBase *)param_1);
  return;
}

// Serialize @ 148a67c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl FActorInstanceGuid::Serialize(FArchive *param_1,AActor *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  AActor *pAVar4;
  bool bVar5;
  AActor *local_res18 [2];
  AActor **local_68;
  FGuid *local_60;
  FGuid local_58;
  FGuid local_48;
  FGuid local_38;
  FGuid local_28;
  
  local_58.A = 0;
  local_58.B = 0;
  local_58.C = 0;
  local_58.D = 0;
  local_48.A = 0;
  local_48.B = 0;
  local_48.C = 0;
  local_48.D = 0;
  ::operator<<(param_1,&local_58);
  ::operator<<(param_1,&local_48);
  if ((param_1->field_0x28 & 2) != 0) {
    local_res18[0] = param_2;
    if (param_2 == (AActor *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectAnnotation.h"
                         ,0x5f,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_38.C = local_58.C;
    local_38.D = local_58.D;
    local_38.A = local_58.A;
    local_38.B = local_58.B;
    local_28.C = local_48.C;
    local_28.D = local_48.D;
    local_28.A = local_48.A;
    local_28.B = local_48.B;
    if ((((local_58.B == 0 && local_58.D == 0) && local_58.C == 0) && local_58.A == 0) &&
       (((local_48.D == 0 && local_48.B == 0) && local_48.C == 0) && local_48.A == 0)) {
      FUObjectAnnotationSparse<FActorInstanceGuid,1>::RemoveAnnotation
                (&GActorGuids,(UObjectBase *)local_res18[0]);
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)&GActorGuids.AnnotationMapCritical);
    uVar3 = GActorGuids.AnnotationMap._52_4_;
    uVar2 = GActorGuids.AnnotationMap._8_4_;
    local_68 = local_res18;
    local_60 = &local_38;
    TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FActorInstanceGuid_const_&>_>
              ((TSet<TTuple<UObjectBase_const_*,FActorInstanceGuid>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FActorInstanceGuid,0>,FDefaultSetAllocator>
                *)&GActorGuids.AnnotationMap,
               (TPairInitializer<UObjectBase_const_*_const_&,FActorInstanceGuid_const_&> *)
               &stack0x00000008,(bool *)&local_68);
    pAVar4 = local_res18[0];
    AcquireSRWLockExclusive((PSRWLOCK)&GActorGuids.AnnotationCacheCritical);
    GActorGuids.AnnotationCacheKey = (UObjectBase *)pAVar4;
    GActorGuids.AnnotationCacheValue.ActorGuid = local_38;
    GActorGuids.AnnotationCacheValue.ActorInstanceGuid = local_28;
    ReleaseSRWLockExclusive((PSRWLOCK)&GActorGuids.AnnotationCacheCritical);
    ReleaseSRWLockExclusive((PSRWLOCK)&GActorGuids.AnnotationMapCritical);
    if (uVar2 == uVar3) {
      FUObjectAnnotationSparse<FActorInstanceGuid,1>::ProcessRegistration(&GActorGuids);
    }
  }
  return;
}

// SetLevelInstanceGuid @ 148a68f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FActorInstanceGuid::SetLevelInstanceGuid
          (ULevel *param_1,ULevel *param_2,FGuid *param_3,FGuid *param_4)

{
  code *pcVar1;
  bool bVar2;
  ULevel *local_res8;
  ULevel *local_res10;
  FLevelInstanceGuid local_98;
  FLevelInstanceGuid local_60;
  FGuid local_28;
  
  FUObjectAnnotationSparse<FLevelInstanceGuid,1>::GetAnnotation
            (&GLevelInstanceGuids,&local_60,(UObjectBase *)param_1);
  if (local_60.bIsDefault == false) {
    bVar2 = TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>(&local_60.Level,param_1);
    if (bVar2) {
      bVar2 = TWeakObjectPtr<ULevel,FWeakObjectPtr>::UEOpEquals<ULevel,bool>
                        (&local_60.OwnerLevel,param_2);
      if ((bVar2) &&
         (((local_60.LevelInstanceGuid.C == param_3->C && local_60.LevelInstanceGuid.D == param_3->D
           ) && local_60.LevelInstanceGuid.B == param_3->B) &&
          local_60.LevelInstanceGuid.A == param_3->A)) goto LAB_148a68fdb;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_980898774387785678>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\ActorInstanceGuids.cpp"
                       ,0x32,"NewOrIdenticalRegistration()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
LAB_148a68fdb:
  local_98.bIsDefault = true;
  local_98.Level.WeakPtr.ObjectIndex = 0;
  local_98.Level.WeakPtr.ObjectSerialNumber = 0;
  local_98.OwnerLevel.WeakPtr.ObjectIndex = 0;
  local_98.OwnerLevel.WeakPtr.ObjectSerialNumber = 0;
  local_98.LevelInstanceGuid.A = 0;
  local_98.LevelInstanceGuid.B = 0;
  local_98.LevelInstanceGuid.C = 0;
  local_98.LevelInstanceGuid.D = 0;
  local_98.ResolvedLevelInstanceGuid.A = 0;
  local_98.ResolvedLevelInstanceGuid.B = 0;
  local_98.ResolvedLevelInstanceGuid.C = 0;
  local_98.ResolvedLevelInstanceGuid.D = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_98,(FObjectPtr)&local_res8);
  local_res10 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (ULevel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_98.OwnerLevel.WeakPtr,(FObjectPtr)&local_res10);
  local_98.LevelInstanceGuid.A = param_3->A;
  local_98.LevelInstanceGuid.B = param_3->B;
  local_98.LevelInstanceGuid.C = param_3->C;
  local_98.LevelInstanceGuid.D = param_3->D;
  local_98.ResolvedLevelInstanceGuid.A = param_4->A;
  local_98.ResolvedLevelInstanceGuid.B = param_4->B;
  local_98.ResolvedLevelInstanceGuid.C = param_4->C;
  local_98.ResolvedLevelInstanceGuid.D = param_4->D;
  local_98.bIsDefault = false;
  FUObjectAnnotationSparse<FLevelInstanceGuid,1>::AddAnnotation
            (&GLevelInstanceGuids,(UObjectBase *)param_1,&local_98);
  GetLevelInstanceGuid(&local_28,param_1);
  return;
}

