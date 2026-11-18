// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// FScopeCycleCounterUObject @ 141ed39d0

/* WARNING: Enum "Type": Some values do not have unique names */

FScopeCycleCounterUObject * __thiscall
FScopeCycleCounterUObject::FScopeCycleCounterUObject
          (FScopeCycleCounterUObject *this,UObjectBaseUtility *param_1,TStatId param_2)

{
  TAtomic<FMinimalName> TVar1;
  FName FVar2;
  uint uVar3;
  FUObjectItem *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester> FVar6;
  FUObjectItem *this_00;
  TStatIdData *pTVar7;
  FNameEntryId FVar8;
  FName local_res8;
  
  *(undefined8 *)this = 0;
  this->field_0x8 = 0;
  if (param_1 != (UObjectBaseUtility *)0x0) {
    if (((SUB84((param_2.StatIdPtr)->Name,0) != 0) || (SUB84((param_2.StatIdPtr)->Name,4) != 0)) &&
       (FThreadStats::bPrimaryEnable != false)) {
      pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
      FVar6 = StatPtr_STAT_UObjectsStatGroupTester;
      if (StatPtr_STAT_UObjectsStatGroupTester ==
          (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
        pFVar5 = ::FName::FName(&local_res8,"STAT_UObjectsStatGroupTester");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectsStatGroupTester,
                           *pFVar5,L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects",
                           "STATCAT_Advanced",L"UObjects",true,true,ST_int64,false,false,MCR_Invalid
                          );
      }
      if ((((int)*(undefined8 *)FVar6 == 0) && ((int)((ulonglong)*(undefined8 *)FVar6 >> 0x20) == 0)
          ) || (FThreadStats::bPrimaryEnable == false)) {
        pTVar7 = &TStatId::TStatId_NAME_None;
      }
      else {
        TVar1 = ((pFVar4->StatID).StatIdPtr)->Name;
        if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
          this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
          FUObjectItem::CreateStatID(this_00);
        }
        pTVar7 = (pFVar4->StatID).StatIdPtr;
      }
      if ((SUB84(pTVar7->Name,0) != 0) || (SUB84(pTVar7->Name,4) != 0)) {
        FVar2 = *(FName *)&pTVar7->Name;
        FVar8 = FVar2.ComparisonIndex.Value;
        uVar3 = FVar2.Number;
        if ((FVar8.Value == 0) && (uVar3 == 0)) {
          return this;
        }
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res8.ComparisonIndex.Value = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res8,(pTVar7->StatDescriptionAnsi).Ptr);
          this->field_0x8 = this->field_0x8 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_res8.ComparisonIndex.Value = FVar8.Value;
            local_res8.Number = uVar3;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_res8,(pTVar7->StatDescriptionWide).Ptr,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                       ,0x3f6);
            this->field_0x8 = this->field_0x8 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) {
          return this;
        }
        *(uint *)&this->field_0x0 = FVar2.ComparisonIndex.Value;
        *(uint *)&this->field_0x4 = FVar2.Number;
        local_res8.ComparisonIndex.Value = FVar8.Value;
        local_res8.Number = uVar3;
        FThreadStats::AddMessage(FVar2,CycleScopeStart);
        this->field_0x8 = this->field_0x8 | 4;
        return this;
      }
    }
    if (-1 < CpuChannel->Enabled) {
      StartObjectTrace(this,param_1);
    }
  }
  return this;
}

// StartObjectTrace @ 142110df0

void __thiscall
FScopeCycleCounterUObject::StartObjectTrace
          (FScopeCycleCounterUObject *this,UObjectBaseUtility *param_1)

{
  longlong lVar1;
  FUObjectItem *pFVar2;
  FName local_res18 [2];
  
  if ((AssetLoadTimeChannel->Enabled < 0) && (PRIVATE_GIsRunningCommandlet)) {
    lVar1 = *(longlong *)&param_1->field_0x10;
    pFVar2 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar1 + 0xc));
    if ((((uint)((ulonglong)(pFVar2->field0_0x0).FlagsAndRefCount >> 0x39) & 1) == 0) &&
       (PRIVATE_GIsRunningCommandlet != false)) {
      local_res18[0] = NAME_Blueprint;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) &&
         (_Init_thread_header(&::_TSS0), local_res18[0] = NAME_Blueprint, ::_TSS0 == -1)) {
        ::FName::FName(&NAME_Blueprint,L"Blueprint");
        _Init_thread_footer(&::_TSS0);
        local_res18[0] = NAME_Blueprint;
      }
    }
    else {
      local_res18[0] = *(FName *)(lVar1 + 0x18);
    }
  }
  else {
    local_res18[0].ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res18[0].Number = *(uint *)&param_1->field_0x1c;
  }
  if (-1 < CpuChannel->Enabled) {
    FCpuProfilerTrace::OutputBeginDynamicEvent(local_res18,(char *)0x0,0);
    this->field_0x8 = this->field_0x8 | 2;
  }
  return;
}

// FScopeCycleCounterUObject @ 1421ff5d0

/* WARNING: Enum "Type": Some values do not have unique names */

FScopeCycleCounterUObject * __thiscall
FScopeCycleCounterUObject::FScopeCycleCounterUObject
          (FScopeCycleCounterUObject *this,UObjectBaseUtility *param_1)

{
  TAtomic<FMinimalName> TVar1;
  FName FVar2;
  uint uVar3;
  FUObjectItem *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester> FVar6;
  FUObjectItem *this_00;
  TStatIdData *pTVar7;
  FNameEntryId FVar8;
  FName local_res8;
  
  *(undefined8 *)this = 0;
  this->field_0x8 = 0;
  if (param_1 != (UObjectBaseUtility *)0x0) {
    pFVar4 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
    FVar6 = StatPtr_STAT_UObjectsStatGroupTester;
    if (StatPtr_STAT_UObjectsStatGroupTester ==
        (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)0x0) {
      pFVar5 = ::FName::FName(&local_res8,"STAT_UObjectsStatGroupTester");
      FVar6 = (FThreadSafeStaticStat<FStat_STAT_UObjectsStatGroupTester>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_UObjectsStatGroupTester,*pFVar5,
                         L"STAT_UObjectsStatGroupTester","STATGROUP_UObjects","STATCAT_Advanced",
                         L"UObjects",true,true,ST_int64,false,false,MCR_Invalid);
    }
    if ((((int)*(undefined8 *)FVar6 == 0) && ((int)((ulonglong)*(undefined8 *)FVar6 >> 0x20) == 0))
       || (FThreadStats::bPrimaryEnable == false)) {
      pTVar7 = &TStatId::TStatId_NAME_None;
    }
    else {
      TVar1 = ((pFVar4->StatID).StatIdPtr)->Name;
      if ((TVar1._0_4_ == 0) && (TVar1._4_4_ == 0)) {
        this_00 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&param_1->field_0xc);
        FUObjectItem::CreateStatID(this_00);
      }
      pTVar7 = (pFVar4->StatID).StatIdPtr;
    }
    if (((SUB84(pTVar7->Name,0) == 0) && (SUB84(pTVar7->Name,4) == 0)) ||
       (FThreadStats::bPrimaryEnable == false)) {
      if (-1 < CpuChannel->Enabled) {
        StartObjectTrace(this,param_1);
      }
    }
    else {
      FVar2 = *(FName *)&pTVar7->Name;
      FVar8 = FVar2.ComparisonIndex.Value;
      uVar3 = FVar2.Number;
      if ((FVar8.Value != 0) || (uVar3 != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res8.ComparisonIndex.Value = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res8,(pTVar7->StatDescriptionAnsi).Ptr);
          this->field_0x8 = this->field_0x8 | 1;
          if (-1 < CpuChannel->Enabled) {
            local_res8.ComparisonIndex.Value = FVar8.Value;
            local_res8.Number = uVar3;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_res8,(pTVar7->StatDescriptionWide).Ptr,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                       ,0x3d8);
            this->field_0x8 = this->field_0x8 | 2;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          *(uint *)&this->field_0x0 = FVar2.ComparisonIndex.Value;
          *(uint *)&this->field_0x4 = FVar2.Number;
          local_res8.ComparisonIndex.Value = FVar8.Value;
          local_res8.Number = uVar3;
          FThreadStats::AddMessage(FVar2,CycleScopeStart);
          this->field_0x8 = this->field_0x8 | 4;
        }
      }
    }
  }
  return this;
}

