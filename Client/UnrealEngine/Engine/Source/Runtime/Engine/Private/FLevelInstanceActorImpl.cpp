// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// ~FLevelInstanceActorImpl @ 147e57620

void __thiscall FLevelInstanceActorImpl::~FLevelInstanceActorImpl(FLevelInstanceActorImpl *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FLevelInstanceActorImpl__6B_;
  pFVar1 = (this->LevelInstanceID).PackageShortName.Data.AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// GetLevelInstanceID @ 147e68060

FLevelInstanceID * __thiscall
FLevelInstanceActorImpl::GetLevelInstanceID(FLevelInstanceActorImpl *this)

{
  code *pcVar1;
  bool bVar2;
  FLevelInstanceID *pFVar3;
  
  if ((((this->LevelInstanceID).ContainerID.Guid.D == 0 &&
       (this->LevelInstanceID).ContainerID.Guid.C == 0) &&
      (this->LevelInstanceID).ContainerID.Guid.B == 0) &&
      (this->LevelInstanceID).ContainerID.Guid.A == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("HasValidLevelInstanceID()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceActorImpl.cpp"
                       ,0x49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLevelInstanceID *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->LevelInstanceID;
}

// HasValidLevelInstanceID @ 147e6b580

bool __thiscall FLevelInstanceActorImpl::HasValidLevelInstanceID(FLevelInstanceActorImpl *this)

{
  return (((this->LevelInstanceID).ContainerID.Guid.D != 0 ||
          (this->LevelInstanceID).ContainerID.Guid.C != 0) ||
         (this->LevelInstanceID).ContainerID.Guid.B != 0) ||
         (this->LevelInstanceID).ContainerID.Guid.A != 0;
}

// IsLoadingEnabled @ 147e6e200

bool __thiscall FLevelInstanceActorImpl::IsLoadingEnabled(FLevelInstanceActorImpl *this)

{
  return true;
}

// OnLevelInstanceLoaded @ 147e713c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FLevelInstanceActorImpl::OnLevelInstanceLoaded(FLevelInstanceActorImpl *this)

{
  FGuid *pFVar1;
  ULevel *pUVar2;
  ULevel *pUVar3;
  FGuid local_18;
  
  local_18.A = 0;
  local_18.B = 0;
  local_18.C = 0;
  local_18.D = 0;
  pFVar1 = (FGuid *)(**(code **)((longlong)*this->LevelInstance + 0x20))();
  pUVar2 = (ULevel *)(**(code **)((longlong)*this->LevelInstance + 0x78))();
  pUVar2 = ULevelInstanceSubsystem::GetOwningLevel(pUVar2,false);
  pUVar3 = (ULevel *)(**(code **)((longlong)*this->LevelInstance + 0x78))();
  FActorInstanceGuid::SetLevelInstanceGuid(pUVar3,pUVar2,pFVar1,&local_18);
  return;
}

// RegisterLevelInstance @ 147e76e50

void __thiscall FLevelInstanceActorImpl::RegisterLevelInstance(FLevelInstanceActorImpl *this)

{
  FString *pFVar1;
  int iVar2;
  ILevelInstanceInterface *pIVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ULevelInstanceSubsystem *pUVar8;
  undefined1 *puVar9;
  longlong lVar10;
  TMap<FLevelInstanceID,ILevelInstanceInterface_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>_>
  *this_00;
  int iVar11;
  ulong64 *puVar12;
  ulong64 uVar13;
  uint uVar14;
  int local_res8 [2];
  FLevelInstanceID *local_res10;
  FLevelInstanceID local_68;
  
  pUVar8 = (ULevelInstanceSubsystem *)(**(code **)((longlong)*this->LevelInstance + 0x40))();
  if (pUVar8 != (ULevelInstanceSubsystem *)0x0) {
    pIVar3 = this->LevelInstance;
    FLevelInstanceID::FLevelInstanceID(&local_68,pUVar8,pIVar3);
    if ((((local_68.ContainerID.Guid.D == 0 && local_68.ContainerID.Guid.C == 0) &&
         local_68.ContainerID.Guid.B == 0) && local_68.ContainerID.Guid.A == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LevelInstanceID.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                           ,0xc5,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = &pUVar8->RegisteredLevelInstances;
    uVar14 = (int)(local_68.Hash >> 0x20) * 0x17 + (int)local_68.Hash;
    if (*(int *)&(pUVar8->RegisteredLevelInstances).field_0x8 !=
        *(int *)&(pUVar8->RegisteredLevelInstances).field_0x34) {
      puVar9 = *(undefined1 **)&(pUVar8->RegisteredLevelInstances).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(pUVar8->RegisteredLevelInstances).field_0x38;
      }
      iVar11 = *(int *)(puVar9 + (ulonglong)
                                 (*(int *)&(pUVar8->RegisteredLevelInstances).field_0x48 - 1U &
                                 uVar14) * 4);
      if (iVar11 != -1) {
        uVar13 = local_68.Hash;
        iVar7 = local_68.PackageShortName.Data.ArrayNum;
        do {
          lVar10 = (longlong)iVar11 * 0x40;
          puVar12 = (ulong64 *)(*(longlong *)&this_00->field_0x0 + lVar10);
          if (((*puVar12 == uVar13) &&
              (((local_68.ContainerID.Guid.D == *(uint *)((longlong)puVar12 + 0x14) &&
                local_68.ContainerID.Guid.C == (uint)puVar12[2]) &&
               local_68.ContainerID.Guid.B == *(uint *)((longlong)puVar12 + 0xc)) &&
               local_68.ContainerID.Guid.A == (uint)puVar12[1])) &&
             (*(FName *)(puVar12 + 3) == local_68.ActorName)) {
            iVar2 = (int)puVar12[5];
            if (iVar2 == iVar7) {
              if (1 < iVar2) {
                iVar7 = FGenericPlatformStricmp::Stricmp
                                  ((wchar_t *)puVar12[4],
                                   (wchar_t *)local_68.PackageShortName.Data.AllocatorInstance.Data)
                ;
                bVar6 = iVar7 == 0;
                uVar13 = local_68.Hash;
                iVar7 = local_68.PackageShortName.Data.ArrayNum;
                goto LAB_147e76f9a;
              }
            }
            else {
              bVar6 = iVar2 + iVar7 == 1;
LAB_147e76f9a:
              if (!bVar6) goto LAB_147e76fa1;
            }
            if ((iVar11 != -1) && (lVar10 = lVar10 + *(longlong *)&this_00->field_0x0, lVar10 != 0))
            goto LAB_147e76fe4;
            break;
          }
LAB_147e76fa1:
          iVar11 = *(int *)(lVar10 + 0x38 + *(longlong *)&this_00->field_0x0);
        } while (iVar11 != -1);
      }
    }
    local_res10 = &local_68;
    TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FLevelInstanceID_const_&>_>
              ((TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_res8,
               (TKeyInitializer<FLevelInstanceID_const_&> *)(ulonglong)uVar14,(bool *)&local_res10);
    lVar10 = (longlong)local_res8[0] * 0x40 + *(longlong *)&this_00->field_0x0;
LAB_147e76fe4:
    if (((GIsReinstancing == (atomic<bool>)0x0) &&
        (*(ILevelInstanceInterface **)(lVar10 + 0x30) != (ILevelInstanceInterface *)0x0)) &&
       ((*(ILevelInstanceInterface **)(lVar10 + 0x30) != pIVar3 &&
        (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                           ("GIsReinstancing || Value == nullptr || Value == LevelInstance",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\LevelInstance\\LevelInstanceSubsystem.cpp"
                            ,199,L""), bVar6)))) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(ILevelInstanceInterface **)(lVar10 + 0x30) = pIVar3;
    pFVar1 = &(this->LevelInstanceID).PackageShortName;
    (this->LevelInstanceID).Hash = local_68.Hash;
    (this->LevelInstanceID).ActorName = local_68.ActorName;
    (this->LevelInstanceID).ContainerID.Guid.A = local_68.ContainerID.Guid.A;
    (this->LevelInstanceID).ContainerID.Guid.B = local_68.ContainerID.Guid.B;
    (this->LevelInstanceID).ContainerID.Guid.C = local_68.ContainerID.Guid.C;
    (this->LevelInstanceID).ContainerID.Guid.D = local_68.ContainerID.Guid.D;
    if (pFVar1 != &local_68.PackageShortName) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_68.PackageShortName.Data.AllocatorInstance.Data;
      (this->LevelInstanceID).PackageShortName.Data.ArrayNum =
           local_68.PackageShortName.Data.ArrayNum;
      (this->LevelInstanceID).PackageShortName.Data.ArrayMax =
           local_68.PackageShortName.Data.ArrayMax;
      local_68.PackageShortName.Data.ArrayNum = 0;
      local_68.PackageShortName.Data.ArrayMax = 0;
      local_68.PackageShortName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_68.PackageShortName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.PackageShortName.Data.AllocatorInstance.Data);
    }
    (**(code **)((longlong)*this->LevelInstance + 0x50))();
  }
  return;
}

// UnregisterLevelInstance @ 147e83980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FLevelInstanceActorImpl::UnregisterLevelInstance(FLevelInstanceActorImpl *this)

{
  longlong lVar1;
  FLevelInstanceID *pFVar2;
  ULevel *pUVar3;
  FLevelInstanceID local_38;
  
  if (((((this->LevelInstanceID).ContainerID.Guid.D != 0 ||
        (this->LevelInstanceID).ContainerID.Guid.C != 0) ||
       (this->LevelInstanceID).ContainerID.Guid.B != 0) ||
       (this->LevelInstanceID).ContainerID.Guid.A != 0) &&
     (lVar1 = (**(code **)((longlong)*this->LevelInstance + 0x40))(), lVar1 != 0)) {
    pFVar2 = (FLevelInstanceID *)(**(code **)((longlong)*this->LevelInstance + 0x10))();
    if (*(int *)(lVar1 + 0x188) != *(int *)(lVar1 + 0x1b4)) {
      TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<FLevelInstanceID>
                ((TSet<TTuple<FLevelInstanceID,ILevelInstanceInterface_*>,TDefaultMapHashableKeyFuncs<FLevelInstanceID,ILevelInstanceInterface_*,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x180),(int)(pFVar2->Hash >> 0x20) * 0x17 + (int)pFVar2->Hash,pFVar2);
    }
    pUVar3 = (ULevel *)(**(code **)((longlong)*this->LevelInstance + 0x78))();
    if (pUVar3 != (ULevel *)0x0) {
      FActorInstanceGuid::ReleaseLevelInstanceGuid(pUVar3);
    }
    (**(code **)((longlong)*this->LevelInstance + 0x58))();
    local_38.Hash = 0;
    local_38.ContainerID.Guid.A = 0;
    local_38.ContainerID.Guid.B = 0;
    local_38.ContainerID.Guid.C = 0;
    local_38.ContainerID.Guid.D = 0;
    local_38.ActorName.ComparisonIndex.Value = 0;
    local_38.ActorName.Number = 0;
    local_38.PackageShortName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.PackageShortName.Data.ArrayNum = 0;
    local_38.PackageShortName.Data.ArrayMax = 0;
    FLevelInstanceID::operator=(&this->LevelInstanceID,&local_38);
    if (local_38.PackageShortName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.PackageShortName.Data.AllocatorInstance.Data);
    }
  }
  return;
}

