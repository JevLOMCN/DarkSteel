// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147672a60

UScriptStruct * __cdecl FBlueprintCookedComponentInstancingData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlueprintCookedComponentInstancingData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FBlueprintCookedComponentInstancingData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintCookedComponentInstancingData,
                         (UObject *)pUVar1,L"BlueprintCookedComponentInstancingData");
  }
  return Z_Registration_Info_UScriptStruct_FBlueprintCookedComponentInstancingData.OuterSingleton;
}

// ~FBlueprintCookedComponentInstancingData @ 14768a1b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBlueprintCookedComponentInstancingData::~FBlueprintCookedComponentInstancingData
          (FBlueprintCookedComponentInstancingData *this)

{
  longlong lVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  uchar auVar8 [8];
  FName local_res8;
  FStatMessage local_38;
  
  auVar8 = (uchar  [8])(longlong)(this->CachedPropertyData).ArrayMax;
  if (auVar8 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_BPCompInstancingFastPathMemory;
    if (StatPtr_STAT_BPCompInstancingFastPathMemory ==
        (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_BPCompInstancingFastPathMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BPCompInstancingFastPathMemory,
                         *pFVar4,L"BPComp Instancing Fast Path memory","STATGROUP_Memory",
                         "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar5;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
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
  lVar1 = (longlong)(this->CachedPropertyListForSerialization).Array.ArrayMax +
          (longlong)(this->CachedPropertyListForSerialization).Array.ArrayNum * 4;
  auVar8 = (uchar  [8])(lVar1 * 8);
  if (auVar8 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_BPCompInstancingFastPathMemory;
    if (StatPtr_STAT_BPCompInstancingFastPathMemory ==
        (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_BPCompInstancingFastPathMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BPCompInstancingFastPathMemory,
                         *pFVar4,L"BPComp Instancing Fast Path memory","STATGROUP_Memory",
                         "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar5;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_38.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_38.StatData.Pad = auVar8;
      local_38.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar6,&local_38);
      FStatsTrace::Add(&local_res8,lVar1 * -8);
      if (pFVar6->ScopeCount == 0) {
        FThreadStats::Flush(pFVar6,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar6,false,false);
      }
    }
  }
  pFVar3 = (this->CachedPropertyData).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>
            (&this->CachedPropertyListForSerialization);
  pFVar3 = (this->ChangedPropertyList).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// BuildCachedArrayPropertyList @ 147695bf0

void __thiscall
FBlueprintCookedComponentInstancingData::BuildCachedArrayPropertyList
          (FBlueprintCookedComponentInstancingData *this,FArrayProperty *param_1,
          FCustomPropertyListNode **param_2,int *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FArrayProperty *pFVar8;
  uint uVar9;
  FArrayProperty *pFVar10;
  longlong local_res8;
  FArrayProperty *local_38 [2];
  
  uVar9 = *param_3;
  iVar7 = (this->ChangedPropertyList).ArrayNum;
  if ((int)uVar9 < iVar7) {
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)
           ((this->ChangedPropertyList).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18) != 0)
      {
        bVar5 = IsThisNotNull(param_1,"FField::GetFName");
        if (bVar5) {
          local_res8 = param_1->_padding_;
        }
        else {
          local_res8 = 0;
        }
        uVar9 = *param_3;
        uVar6 = 0;
        if ((int)uVar9 < (this->ChangedPropertyList).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)
             ((this->ChangedPropertyList).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x18) !=
            local_res8) {
          return;
        }
      }
      uVar9 = *param_3;
      *param_3 = uVar9 + 1;
      uVar6 = 0;
      if ((int)uVar9 < (this->ChangedPropertyList).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->ChangedPropertyList).AllocatorInstance.Data;
      pFVar10 = (FArrayProperty *)0x0;
      if (*(longlong *)(pFVar3 + (longlong)(int)uVar9 * 0x18) != 0) {
        pFVar10 = (FArrayProperty *)param_1->Inner;
      }
      pFVar8 = ::operator_new(0x20);
      local_38[0] = (FArrayProperty *)0x0;
      if (pFVar8 != (FArrayProperty *)0x0) {
        uVar2 = *(undefined4 *)(pFVar3 + (longlong)(int)uVar9 * 0x18 + 8);
        pFVar8->_padding_ = (longlong)pFVar10;
        *(undefined4 *)&pFVar8->_padding_ = uVar2;
        pFVar8->_padding_ = 0;
        pFVar8->_padding_ = 0;
        local_38[0] = pFVar8;
      }
      *param_2 = (FCustomPropertyListNode *)local_38[0];
      pFVar3 = (this->CachedPropertyListForSerialization).Array.AllocatorInstance.Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 <
           pFVar3 + (longlong)(this->CachedPropertyListForSerialization).Array.ArrayMax * 8)) &&
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
      iVar7 = (this->CachedPropertyListForSerialization).Array.ArrayNum;
      piVar1 = &(this->CachedPropertyListForSerialization).Array.ArrayMax;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&this->CachedPropertyListForSerialization,
                           piVar1);
      }
      (this->CachedPropertyListForSerialization).Array.ArrayNum = iVar7 + 1;
      *(FArrayProperty **)
       ((this->CachedPropertyListForSerialization).Array.AllocatorInstance.Data +
       (longlong)iVar7 * 8) = local_38[0];
      if (pFVar10 != (FArrayProperty *)0x0) {
        uVar9 = *(uint *)(pFVar10->_padding_ + 0x18);
        if ((uVar9 >> 0x14 & 1) == 0) {
          if ((uVar9 >> 0x15 & 1) != 0) {
            BuildCachedArrayPropertyList(this,pFVar10,&(*param_2)->SubPropertyList,param_3);
          }
        }
        else {
          BuildCachedPropertyList
                    (this,&(*param_2)->SubPropertyList,*(UStruct **)&pFVar10->ArrayFlags,param_3);
        }
      }
      uVar9 = *param_3;
      param_2 = &(*param_2)->PropertyListNext;
      iVar7 = (this->ChangedPropertyList).ArrayNum;
    } while ((int)uVar9 < iVar7);
  }
  return;
}

// BuildCachedPropertyDataFromTemplate @ 147695ed0

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
FBlueprintCookedComponentInstancingData::BuildCachedPropertyDataFromTemplate
          (FBlueprintCookedComponentInstancingData *this,UActorComponent *param_1)

{
  FName FVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  FCustomPropertyListNode *pFVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  uchar auVar10 [8];
  FName local_res10;
  undefined8 local_res18;
  FName local_res20;
  FStatMessage local_128;
  FStatMessage local_118;
  FArchiveState local_108;
  undefined8 local_78;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_70;
  undefined8 local_68;
  FName local_58;
  FName local_50 [2];
  
  uVar3 = *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  (this->ComponentTemplateName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&param_1->_padding_;
  (this->ComponentTemplateName).Number = uVar3;
  this->ComponentTemplateClass = (UClass *)param_1->_padding_;
  (this->ComponentTemplateFlags).Value = (uchar)(int)param_1->_padding_;
  pFVar5 = GetCachedPropertyList(this);
  if ((this->CachedPropertyData).ArrayNum != 0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4144715368457303286>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                       ,0xb0a,"CachedPropertyData.Num() == 0");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    auVar10 = (uchar  [8])(longlong)(this->CachedPropertyData).ArrayMax;
    if (auVar10 != (uchar  [8])0x0) {
      FVar7 = StatPtr_STAT_BPCompInstancingFastPathMemory;
      if (StatPtr_STAT_BPCompInstancingFastPathMemory ==
          (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)0x0) {
        pFVar6 = ::FName::FName(&local_58,"STAT_BPCompInstancingFastPathMemory");
        FVar7 = (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BPCompInstancingFastPathMemory
                           ,*pFVar6,L"BPComp Instancing Fast Path memory","STATGROUP_Memory",
                           "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical
                          );
      }
      FVar1 = *(FName *)FVar7;
      local_res10 = FVar1;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_128.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
        local_res10 = FVar1;
        local_128.StatData.Pad = auVar10;
        local_128.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_128);
        FStatsTrace::Add(&local_res10,-(longlong)auVar10);
        if (pFVar8->ScopeCount == 0) {
          FThreadStats::Flush(pFVar8,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar8,false,false);
        }
      }
    }
    (this->CachedPropertyData).ArrayNum = 0;
    if ((this->CachedPropertyData).ArrayMax != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,&(this->CachedPropertyData).AllocatorInstance,0,
                 &(this->CachedPropertyData).ArrayMax);
    }
  }
  local_res18 = 0;
  local_108._padding_ = 0;
  local_108.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_108.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_108.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_108.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_108._40_8_ = 0;
  local_108.ArSerializingDefaults = 0;
  local_108.ArPortFlags = 0;
  local_108.ArMaxSerializeSize = 0;
  local_108.ArUEVer.FileVersionUE4 = 0;
  local_108.ArUEVer.FileVersionUE5 = 0;
  local_108.ArLicenseeUEVer = 0;
  local_108.ArEngineVer.Major = 0;
  local_108.ArEngineVer.Minor = 0;
  local_108.ArEngineVer.Patch = 0;
  local_108.ArEngineVer._6_2_ = 0;
  local_108.ArEngineVer.Changelist = 0;
  local_108.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_108.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_108.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_108.SerializedProperty = (FProperty *)0x0;
  local_108.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_108.bCustomVersionsAreReset = false;
  local_108._129_7_ = 0;
  local_108.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_108);
  local_78 = 0;
  local_108._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_68 = local_res18;
  local_70 = &this->CachedPropertyData;
  FArchiveState::SetIsSaving(&local_108,true);
  (**(code **)(local_108._padding_ + 0x108))(&local_108,0);
  local_108.ArIgnoreClassRef = '\0';
  local_108.ArIgnoreArchetypeRef = '\0';
  local_108.ArUseCustomPropertyList = '\x01';
  local_108.ArIgnoreClassRef = '\0';
  local_108.ArIgnoreArchetypeRef = '\0';
  local_108._padding_ =
       (longlong)
       &`FBlueprintCookedComponentInstancingData::BuildCachedPropertyDataFromTemplate'::`2'::
        FBlueprintComponentInstanceDataWriter::_vftable_;
  local_108.ArCustomPropertyList = pFVar5;
  FArchiveState::SetWantBinaryPropertySerialization(&local_108,true);
  local_108._48_8_ = local_108._48_8_ | 0x100000000000;
  (**(code **)(param_1->_padding_ + 200))(param_1,&local_108);
  auVar10 = (uchar  [8])(longlong)(this->CachedPropertyData).ArrayMax;
  if (auVar10 != (uchar  [8])0x0) {
    FVar7 = StatPtr_STAT_BPCompInstancingFastPathMemory;
    if (StatPtr_STAT_BPCompInstancingFastPathMemory ==
        (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)0x0) {
      pFVar6 = ::FName::FName(local_50,"STAT_BPCompInstancingFastPathMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BPCompInstancingFastPathMemory,
                         *pFVar6,L"BPComp Instancing Fast Path memory","STATGROUP_Memory",
                         "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar7;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_118.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res20 = FVar1;
      local_118.StatData.Pad = auVar10;
      local_118.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_118);
      FStatsTrace::Add(&local_res20,(long64)auVar10);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  FArchive::~FArchive((FArchive *)&local_108);
  return;
}

// BuildCachedPropertyList @ 147696310

void __thiscall
FBlueprintCookedComponentInstancingData::BuildCachedPropertyList
          (FBlueprintCookedComponentInstancingData *this,FCustomPropertyListNode **param_1,
          UStruct *param_2,int *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UStruct *pUVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FCustomPropertyListNode *pFVar9;
  uint uVar10;
  uint *puVar11;
  TObjectPtr<UStruct>_u_0 TVar12;
  FArrayProperty *pFVar13;
  longlong local_res8;
  uint local_58 [2];
  FCustomPropertyListNode *local_50;
  TObjectPtr<UStruct>_u_0 local_48;
  FArrayProperty *local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  local_58[0] = 0;
  iVar8 = (this->ChangedPropertyList).ArrayNum;
  puVar11 = local_58;
  if (param_3 != (int *)0x0) {
    puVar11 = (uint *)param_3;
  }
  uVar10 = *puVar11;
  if ((int)uVar10 < iVar8) {
LAB_147696360:
    uVar7 = 0;
    if ((int)uVar10 < iVar8) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar3 = *(UStruct **)
              ((this->ChangedPropertyList).AllocatorInstance.Data +
              (longlong)(int)uVar10 * 0x18 + 0x10);
    if (pUVar3 == (UStruct *)0x0) {
      bVar6 = param_2 == (UStruct *)0x0;
    }
    else {
      bVar6 = pUVar3 == param_2;
    }
    if (bVar6) {
      uVar10 = *puVar11;
      *puVar11 = uVar10 + 1;
      uVar7 = 0;
      if ((int)uVar10 < (this->ChangedPropertyList).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (this->ChangedPropertyList).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
      TVar12.DebugPtr = param_2;
LAB_14769642e:
      do {
        pFVar13 = (FArrayProperty *)0x0;
LAB_147696430:
        if (TVar12.DebugPtr == (UStruct *)0x0) goto LAB_1476964ed;
        lVar4 = *(longlong *)pFVar2;
        if (lVar4 != 0) {
          local_40 = (FArrayProperty *)(TVar12.DebugPtr)->ChildProperties;
          local_38 = 0xffffffff;
          local_34 = 0x101;
          local_32 = 0;
          local_48 = TVar12;
          TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_48.ObjectPtr)
          ;
          if (local_40 != (FArrayProperty *)0x0) goto LAB_147696480;
        }
        TVar12 = (TObjectPtr<UStruct>_u_0)((TVar12.DebugPtr)->SuperStruct).field0_0x0.DebugPtr;
      } while( true );
    }
  }
  return;
LAB_147696480:
  while( true ) {
    pFVar13 = local_40;
    bVar6 = IsThisNotNull(local_40,"FField::GetFName");
    if (bVar6) {
      local_res8 = pFVar13->_padding_;
    }
    else {
      local_res8 = 0;
    }
    if (local_res8 == lVar4) break;
    local_40 = (FArrayProperty *)pFVar13->_padding_;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_48.ObjectPtr);
    if (local_40 == (FArrayProperty *)0x0) {
      TVar12 = (TObjectPtr<UStruct>_u_0)((TVar12.DebugPtr)->SuperStruct).field0_0x0.DebugPtr;
      goto LAB_14769642e;
    }
  }
  TVar12 = (TObjectPtr<UStruct>_u_0)((TVar12.DebugPtr)->SuperStruct).field0_0x0.DebugPtr;
  if (pFVar13 != (FArrayProperty *)0x0) {
LAB_1476964ed:
    pFVar9 = ::operator_new(0x20);
    if (pFVar9 == (FCustomPropertyListNode *)0x0) {
      pFVar9 = (FCustomPropertyListNode *)0x0;
    }
    else {
      iVar8 = *(int *)(pFVar2 + 8);
      pFVar9->Property = (FProperty *)pFVar13;
      pFVar9->ArrayIndex = iVar8;
      pFVar9->SubPropertyList = (FCustomPropertyListNode *)0x0;
      pFVar9->PropertyListNext = (FCustomPropertyListNode *)0x0;
    }
    pFVar2 = (this->CachedPropertyListForSerialization).Array.AllocatorInstance.Data;
    local_50 = pFVar9;
    if (((pFVar2 <= (FScriptContainerElement *)&local_50) &&
        ((FScriptContainerElement *)&local_50 <
         pFVar2 + (longlong)(this->CachedPropertyListForSerialization).Array.ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->CachedPropertyListForSerialization).Array.ArrayNum;
    piVar1 = &(this->CachedPropertyListForSerialization).Array.ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&this->CachedPropertyListForSerialization,piVar1
                        );
    }
    (this->CachedPropertyListForSerialization).Array.ArrayNum = iVar8 + 1;
    *(FCustomPropertyListNode **)
     ((this->CachedPropertyListForSerialization).Array.AllocatorInstance.Data + (longlong)iVar8 * 8)
         = local_50;
    if (param_1 != (FCustomPropertyListNode **)0x0) {
      *param_1 = pFVar9;
    }
    if (pFVar13 != (FArrayProperty *)0x0) {
      if ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x14 & 1) == 0) {
        if ((*(uint *)(pFVar13->_padding_ + 0x18) >> 0x15 & 1) != 0) {
          BuildCachedArrayPropertyList(this,pFVar13,&pFVar9->SubPropertyList,(int *)puVar11);
        }
      }
      else {
        BuildCachedPropertyList
                  (this,&pFVar9->SubPropertyList,*(UStruct **)&pFVar13->ArrayFlags,(int *)puVar11);
      }
    }
    iVar8 = (this->ChangedPropertyList).ArrayNum;
    param_1 = &pFVar9->PropertyListNext;
    uVar10 = *puVar11;
    if (iVar8 <= (int)uVar10) {
      return;
    }
    goto LAB_147696360;
  }
  goto LAB_147696430;
}

// GetCachedPropertyList @ 1476aeca0

/* WARNING: Enum "Type": Some values do not have unique names */

FCustomPropertyListNode * __thiscall
FBlueprintCookedComponentInstancingData::GetCachedPropertyList
          (FBlueprintCookedComponentInstancingData *this)

{
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar5 [8];
  FCustomPropertyListNode *local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  local_res8 = (FCustomPropertyListNode *)0x0;
  iVar1 = (this->CachedPropertyListForSerialization).Array.ArrayNum;
  if (iVar1 == 0) {
    iVar1 = (this->ChangedPropertyList).ArrayNum;
    if (0 < iVar1) {
      if ((this->CachedPropertyListForSerialization).Array.ArrayMax < iVar1) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,iVar1,(ForAnyElementType *)&this->CachedPropertyListForSerialization,0,
                   &(this->CachedPropertyListForSerialization).Array.ArrayMax);
      }
      BuildCachedPropertyList(this,&local_res8,(UStruct *)this->ComponentTemplateClass,(int *)0x0);
      auVar5 = (uchar  [8])
               (((longlong)(this->CachedPropertyListForSerialization).Array.ArrayMax +
                (longlong)(this->CachedPropertyListForSerialization).Array.ArrayNum * 4) * 8);
      if (auVar5 != (uchar  [8])0x0) {
        FVar4 = StatPtr_STAT_BPCompInstancingFastPathMemory;
        if (StatPtr_STAT_BPCompInstancingFastPathMemory ==
            (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)0x0) {
          pFVar3 = ::FName::FName(&local_res10,"STAT_BPCompInstancingFastPathMemory");
          FVar4 = (FThreadSafeStaticStat<FStat_STAT_BPCompInstancingFastPathMemory>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)
                             &StatPtr_STAT_BPCompInstancingFastPathMemory,*pFVar3,
                             L"BPComp Instancing Fast Path memory","STATGROUP_Memory",
                             "STATCAT_Advanced",L"Memory",true,false,ST_int64,false,false,
                             MCR_Physical);
        }
        FVar2 = *(FName *)FVar4;
        if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          local_res10 = FVar2;
          this_00 = TlsGetValue(FThreadStats::TlsSlot);
          if (this_00 == (FThreadStats *)0x0) {
            this_01 = FThreadStatsPool::Get();
            this_00 = FThreadStatsPool::GetFromPool(this_01);
          }
          local_28.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
          local_res10 = FVar2;
          local_28.StatData.Pad = auVar5;
          local_28.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(this_00,&local_28);
          FStatsTrace::Add(&local_res10,(long64)auVar5);
          if (this_00->ScopeCount == 0) {
            FThreadStats::Flush(this_00,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this_00,false,false);
          }
        }
      }
    }
  }
  else if (0 < iVar1) {
    local_res8 = *(FCustomPropertyListNode **)
                  (this->CachedPropertyListForSerialization).Array.AllocatorInstance.Data;
  }
  return local_res8;
}

// operator= @ 147cc9a30

FBlueprintCookedComponentInstancingData * __thiscall
FBlueprintCookedComponentInstancingData::operator=
          (FBlueprintCookedComponentInstancingData *this,
          FBlueprintCookedComponentInstancingData *param_1)

{
  int *piVar1;
  TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  FBlueprintComponentChangedPropertyInfo *pFVar3;
  undefined8 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  FBlueprintCookedComponentInstancingData *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  undefined8 *local_58;
  FScriptContainerElement *local_50;
  int *piStack_48;
  undefined8 local_40;
  FScriptContainerElement *local_38;
  int *piStack_30;
  int local_28;
  undefined4 uStack_24;
  
  if (this != param_1) {
    iVar9 = (param_1->ChangedPropertyList).ArrayNum;
    piVar1 = &(this->ChangedPropertyList).ArrayMax;
    pFVar3 = (FBlueprintComponentChangedPropertyInfo *)
             (param_1->ChangedPropertyList).AllocatorInstance.Data;
    (this->ChangedPropertyList).ArrayNum = iVar9;
    if ((iVar9 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar9,*piVar1,(ForAnyElementType *)this,iVar9,piVar1);
      ConstructItems<FBlueprintComponentChangedPropertyInfo,FBlueprintComponentChangedPropertyInfo,int>
                ((this->ChangedPropertyList).AllocatorInstance.Data,pFVar3,iVar9);
    }
  }
  this->ComponentTemplateClass = param_1->ComponentTemplateClass;
  this_00 = &this->CachedPropertyListForSerialization;
  this->ComponentTemplateName = param_1->ComponentTemplateName;
  (this->ComponentTemplateFlags).Value = (param_1->ComponentTemplateFlags).Value;
  this->bHasValidCookedData = param_1->bHasValidCookedData;
  if (&param_1->CachedPropertyListForSerialization != this_00) {
    piVar1 = &(param_1->CachedPropertyListForSerialization).Array.ArrayNum;
    TIndirectArray<FCustomPropertyListNode,TSizedDefaultAllocator<32>_>::Empty
              (this_00,(param_1->CachedPropertyListForSerialization).Array.ArrayNum);
    pFVar11 = (param_1->CachedPropertyListForSerialization).Array.AllocatorInstance.Data;
    local_28 = *piVar1;
    pFVar2 = pFVar11 + (longlong)local_28 * 8;
    local_40 = CONCAT44(uStack_24,local_28);
    piStack_48 = piVar1;
    local_38 = pFVar11;
    piStack_30 = piVar1;
    while( true ) {
      local_50 = pFVar11;
      if (*piStack_48 != (int)local_40) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar2) break;
      puVar4 = *(undefined8 **)pFVar11;
      local_58 = ::operator_new(0x20);
      if (local_58 != (undefined8 *)0x0) {
        uVar7 = puVar4[1];
        *local_58 = *puVar4;
        local_58[1] = uVar7;
        uVar7 = puVar4[3];
        local_58[2] = puVar4[2];
        local_58[3] = uVar7;
      }
      pFVar5 = (this_00->Array).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_58) &&
          ((FScriptContainerElement *)&local_58 <
           pFVar5 + (longlong)(this->CachedPropertyListForSerialization).Array.ArrayMax * 8)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar10 = (FBlueprintCookedComponentInstancingData *)(*pcVar6)();
        return pFVar10;
      }
      iVar9 = (this->CachedPropertyListForSerialization).Array.ArrayNum;
      piVar1 = &(this->CachedPropertyListForSerialization).Array.ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)this_00,piVar1);
      }
      pFVar11 = pFVar11 + 8;
      (this->CachedPropertyListForSerialization).Array.ArrayNum = iVar9 + 1;
      *(undefined8 **)((this_00->Array).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_58;
    }
  }
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::operator=
            (&this->CachedPropertyData,&param_1->CachedPropertyData);
  return this;
}

