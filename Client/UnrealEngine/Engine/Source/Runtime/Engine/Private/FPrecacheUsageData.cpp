// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Empty @ 1483fe2f0

void __thiscall PSOCollectorStats::FPrecacheUsageData::Empty(FPrecacheUsageData *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined1 *puVar5;
  FName local_res8;
  FStatMessage local_28;
  
  FVar2 = this->StatFName;
  if (((FVar2 != (FName)0x0) && (!FThreadStats::bPrimaryDisableForever)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
    local_28.StatData.Pad[0] = '\0';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_28.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
    local_res8 = FVar2;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Set(&local_res8,0);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  LOCK();
  this->Count = 0;
  UNLOCK();
  if ((GPSOPrecacheMode == 0) || (GPSOPrecacheMode != 1)) {
    bVar3 = PipelineStateCache::IsPSOPrecachingEnabled();
    if (((bVar3) && ((GPSOPrecachingValidationMode != 0 && (GPSOPrecachingValidationMode != 1)))) &&
       (GPSOPrecachingValidationMode == 2)) {
      lpCriticalSection = &this->StatsLock;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      memset(this->PerMeshPassCount,0,0x100);
      this->UntrackedMeshPassCount = 0;
      puVar1 = &(this->PerVertexFactoryCount).field_0x54;
      *(undefined4 *)&(this->PerVertexFactoryCount).field_0x50 = 0;
      if (*(int *)&(this->PerVertexFactoryCount).field_0x54 != 1) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,1,(ForElementType<unsigned_int> *)&(this->PerVertexFactoryCount).field_0x40,0
                   ,(int *)puVar1);
      }
      iVar4 = *(int *)&(this->PerVertexFactoryCount).field_0x50;
      if (iVar4 == *(int *)puVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                          (0x404,(ForElementType<unsigned_int> *)
                                 &(this->PerVertexFactoryCount).field_0x40,(int *)puVar1);
      }
      puVar1 = &(this->PerVertexFactoryCount).field_0x58;
      *(int *)&(this->PerVertexFactoryCount).field_0x50 = iVar4 + 1;
      puVar5 = &(this->PerVertexFactoryCount).field_0x6c;
      *(undefined4 *)&(this->PerVertexFactoryCount).field_0x68 = 0;
      if (*(int *)puVar5 != 1) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                  (4,4,1,(ForElementType<Experimental::FHashType> *)puVar1,0,(int *)puVar5);
      }
      iVar4 = *(int *)&(this->PerVertexFactoryCount).field_0x68;
      if (iVar4 == *(int *)puVar5) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                          (0x404,(ForElementType<Experimental::FHashType> *)puVar1,(int *)puVar5);
      }
      *(int *)&(this->PerVertexFactoryCount).field_0x68 = iVar4 + 1;
      puVar5 = *(undefined1 **)&(this->PerVertexFactoryCount).field_0x60;
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = puVar1;
      }
      DefaultConstructItems<Experimental::FHashType,int>(puVar5 + (longlong)iVar4 * 4,1);
      Experimental::RobinHoodHashTable_Private::
      TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
      ::FData::Empty((FData *)&this->PerVertexFactoryCount);
      *(undefined8 *)&(this->PerVertexFactoryCount).field_0x70 = 0;
      this->PerGlobalTypeCount[0] = 0;
      this->PerGlobalTypeCount[1] = 0;
      this->PerGlobalTypeCount[2] = 0;
      this->PerGlobalTypeCount[3] = 0;
      this->UntrackedGlobalTypeCount = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  return;
}

// UpdateStats @ 14842cba0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
PSOCollectorStats::FPrecacheUsageData::UpdateStats
          (FPrecacheUsageData *this,EPSOPrecacheType param_1,int param_2,FVertexFactoryType *param_3
          )

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  FName FVar2;
  ulong64 uVar3;
  bool bVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  TKeyValue<FVertexFactoryType_const_*,unsigned_int> *pTVar5;
  FName local_res8 [2];
  FVertexFactoryType *local_res20;
  uint local_48 [2];
  FStatMessage local_40;
  
  FVar2 = this->StatFName;
  local_res20 = param_3;
  if (((FVar2 != (FName)0x0) && (!FThreadStats::bPrimaryDisableForever)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_40.NameAndInfo.Index = FVar2.ComparisonIndex.Value;
    local_40.StatData.Pad[0] = '\x01';
    local_40.StatData.Pad[1] = '\0';
    local_40.StatData.Pad[2] = '\0';
    local_40.StatData.Pad[3] = '\0';
    local_40.StatData.Pad[4] = '\0';
    local_40.StatData.Pad[5] = '\0';
    local_40.StatData.Pad[6] = '\0';
    local_40.StatData.Pad[7] = '\0';
    local_40.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_res8[0] = FVar2;
    FThreadStats::AddStatMessage(this_00,&local_40);
    FStatsTrace::Add(local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  LOCK();
  this->Count = this->Count + 1;
  UNLOCK();
  if (param_1 == MeshPass) {
    if ((GPSOPrecacheMode != 0) && (GPSOPrecacheMode == 1)) {
      return;
    }
    bVar4 = PipelineStateCache::IsPSOPrecachingEnabled();
    if (!bVar4) {
      return;
    }
    if (GPSOPrecachingValidationMode == 0) {
      return;
    }
    if (GPSOPrecachingValidationMode == 1) {
      return;
    }
    if (GPSOPrecachingValidationMode != 2) {
      return;
    }
    if (((param_2 == -1) || (0x3f < (uint)param_2)) && (param_3 == (FVertexFactoryType *)0x0)) {
      return;
    }
  }
  else {
    if ((GPSOPrecacheMode != 0) && (GPSOPrecacheMode == 1)) {
      return;
    }
    bVar4 = PipelineStateCache::IsPSOPrecachingEnabled();
    if (!bVar4) {
      return;
    }
    if (GPSOPrecachingValidationMode == 0) {
      return;
    }
    if (GPSOPrecachingValidationMode == 1) {
      return;
    }
    if (GPSOPrecachingValidationMode != 2) {
      return;
    }
    if (param_2 == -1) {
      return;
    }
    if (3 < (uint)param_2) {
      return;
    }
  }
  lpCriticalSection = &this->StatsLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (param_1 == MeshPass) {
      if ((param_2 == -1) || (0x3f < (uint)param_2)) {
        this->UntrackedMeshPassCount = this->UntrackedMeshPassCount + 1;
      }
      else {
        this->PerMeshPassCount[param_2] = this->PerMeshPassCount[param_2] + 1;
      }
      if (param_3 != (FVertexFactoryType *)0x0) {
        uVar3 = (param_3->HashedName).Hash;
        local_res8[0] = (FName)((ulonglong)local_res8[0] & 0xffffffff00000000);
        Experimental::RobinHoodHashTable_Private::
        TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
        ::FindOrUpdateIdByHashInternal<0,FVertexFactoryType_const_*_const_&,unsigned_int>
                  ((TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
                    *)&this->PerVertexFactoryCount,(FHashType)(uint)local_48,
                   (FVertexFactoryType **)
                   (ulonglong)((int)(uVar3 >> 0x20) * 0x17 + (int)uVar3 & 0x7fffffff),
                   (uint *)&local_res20,(bool *)local_res8);
        pTVar5 = Experimental::RobinHoodHashTable_Private::
                 TRobinHoodHashTable<FVertexFactoryType_const_*,unsigned_int,TDefaultMapHashableKeyFuncs<FVertexFactoryType_const_*,unsigned_int,0>,TSizedDefaultAllocator<32>_>
                 ::FData::Get((FData *)&this->PerVertexFactoryCount,local_48[0]);
        puVar1 = &(pTVar5->Pair).field_0x8;
        *(int *)puVar1 = *(int *)puVar1 + 1;
      }
    }
    else if ((param_2 == -1) || (3 < (uint)param_2)) {
      this->UntrackedGlobalTypeCount = this->UntrackedGlobalTypeCount + 1;
    }
    else {
      this->PerGlobalTypeCount[param_2] = this->PerGlobalTypeCount[param_2] + 1;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

