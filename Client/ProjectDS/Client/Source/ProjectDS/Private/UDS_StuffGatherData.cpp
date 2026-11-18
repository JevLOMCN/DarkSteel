// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 36

// StaticClass @ 14b5a4d50

UClass * __cdecl UDS_StuffGatherData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffGatherData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffGatherData",
               &Z_Registration_Info_UClass_UDS_StuffGatherData.InnerSingleton,
               StaticRegisterNativesUDS_StuffGatherData,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffGatherData>,
               InternalVTableHelperCtorCaller<UDS_StuffGatherData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffGatherData.InnerSingleton;
}

// UDS_StuffGatherData @ 14b5a9310

UDS_StuffGatherData * __thiscall
UDS_StuffGatherData::UDS_StuffGatherData(UDS_StuffGatherData *this,FVTableHelper *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  this->GatherAction = false;
  this->StuffState = Idle;
  this->_padding_ = (longlong)&___7UDS_StuffGatherData__6B_;
  *(undefined8 *)&this->ChangedStuffStateDelegate = 0;
  *(undefined8 *)&(this->ChangedStuffStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedStuffStateDelegate).field_0x10 = 0;
  (this->GatheringEntityList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GatheringEntityList).ArrayNum = 0;
  (this->GatheringEntityList).ArrayMax = 0;
  *(undefined8 *)&this->EffectID_Map = 0;
  *(undefined8 *)&(this->EffectID_Map).field_0x8 = 0;
  *(undefined8 *)&(this->EffectID_Map).field_0x20 = 0;
  this->GatherRemainCount = 0;
  this->GatherMaxCount = 0;
  this->GatherMaxUserNumber = 0;
  *(undefined8 *)&(this->ChangedStuffStateDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->EffectID_Map).field_0x28 = 0;
  *(undefined4 *)&(this->EffectID_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->EffectID_Map).field_0x34 = 0;
  *(undefined4 *)&(this->EffectID_Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EffectID_Map).field_0x40 = 0;
  *(undefined4 *)&(this->EffectID_Map).field_0x48 = 0;
  this->bUsePlayerSkill_Detection = false;
  this->bUsePlayerSkill_OpenLocks = false;
  return this;
}

// UDS_StuffGatherData @ 14b5a93d0

UDS_StuffGatherData * __thiscall
UDS_StuffGatherData::UDS_StuffGatherData(UDS_StuffGatherData *this,FObjectInitializer *param_1)

{
  UDS_StuffData::UDS_StuffData((UDS_StuffData *)this,param_1);
  this->GatherAction = false;
  this->StuffState = Idle;
  this->_padding_ = (longlong)&___7UDS_StuffGatherData__6B_;
  *(undefined8 *)&this->ChangedStuffStateDelegate = 0;
  *(undefined8 *)&(this->ChangedStuffStateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedStuffStateDelegate).field_0x10 = 0;
  (this->GatheringEntityList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GatheringEntityList).ArrayNum = 0;
  (this->GatheringEntityList).ArrayMax = 0;
  *(undefined8 *)&this->EffectID_Map = 0;
  *(undefined8 *)&(this->EffectID_Map).field_0x8 = 0;
  *(undefined8 *)&(this->EffectID_Map).field_0x20 = 0;
  this->GatherRemainCount = 0;
  this->GatherMaxCount = 0;
  this->GatherMaxUserNumber = 0;
  *(undefined8 *)&(this->ChangedStuffStateDelegate).field_0x18 = 2;
  *(undefined4 *)&(this->EffectID_Map).field_0x28 = 0;
  *(undefined4 *)&(this->EffectID_Map).field_0x2c = 0x80;
  *(undefined4 *)&(this->EffectID_Map).field_0x34 = 0;
  *(undefined4 *)&(this->EffectID_Map).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->EffectID_Map).field_0x40 = 0;
  *(undefined4 *)&(this->EffectID_Map).field_0x48 = 0;
  this->bUsePlayerSkill_Detection = false;
  this->bUsePlayerSkill_OpenLocks = false;
  return this;
}

// ~UDS_StuffGatherData @ 14b5a9910

void __thiscall UDS_StuffGatherData::~UDS_StuffGatherData(UDS_StuffGatherData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_StuffGatherData__6B_;
  *(undefined4 *)&(this->EffectID_Map).field_0x48 = 0;
  pvVar1 = *(void **)&(this->EffectID_Map).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_StuffState,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_StuffState,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->EffectID_Map);
  pFVar2 = (this->GatheringEntityList).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedStuffStateDelegate).field_0x8,
             *(int *)&(this->ChangedStuffStateDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedStuffStateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedStuffStateDelegate);
  UDS_StuffData::~UDS_StuffData((UDS_StuffData *)this);
  return;
}

// GetPrivateStaticClass @ 14b5aaaa0

UClass * __cdecl UDS_StuffGatherData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_StuffGatherData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_StuffGatherData",
               &Z_Registration_Info_UClass_UDS_StuffGatherData.InnerSingleton,
               StaticRegisterNativesUDS_StuffGatherData,0x240,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_StuffGatherData>,
               InternalVTableHelperCtorCaller<UDS_StuffGatherData>,local_res8,
               UDS_StuffData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_StuffGatherData.InnerSingleton;
}

// StaticRegisterNativesUDS_StuffGatherData @ 14b5ab000

void __cdecl UDS_StuffGatherData::StaticRegisterNativesUDS_StuffGatherData(void)

{
  return;
}

// AddGatheringUser @ 14ba93cb0

void __thiscall UDS_StuffGatherData::AddGatheringUser(UDS_StuffGatherData *this,ulong64 param_1)

{
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pTVar1 = &this->GatheringEntityList;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->GatheringEntityList).ArrayNum;
  pFVar2 = pFVar4 + (longlong)iVar3 * 8;
  while( true ) {
    if (pFVar4 == pFVar2) {
      if (iVar3 == (this->GatheringEntityList).ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,&(this->GatheringEntityList).ArrayMax);
      }
      pFVar2 = (pTVar1->AllocatorInstance).Data;
      (this->GatheringEntityList).ArrayNum = iVar3 + 1;
      *(ulong64 *)(pFVar2 + (longlong)iVar3 * 8) = param_1;
      return;
    }
    if (*(ulong64 *)pFVar4 == param_1) break;
    pFVar4 = pFVar4 + 8;
  }
  return;
}

// CheckGatherMaxUser @ 14ba96a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_StuffGatherData::CheckGatherMaxUser(UDS_StuffGatherData *this)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (this->GatherMaxUserNumber < 1) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StuffGatherData::CheckGatherMaxUser",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x107,L"maximum number of users is zero");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    return false;
  }
  return (this->GatheringEntityList).ArrayNum <= this->GatherMaxUserNumber;
}

// CheckStuffLocationType @ 14ba97110

bool __thiscall UDS_StuffGatherData::CheckStuffLocationType(UDS_StuffGatherData *this)

{
  bool bVar1;
  FDS_StuffGatherTableRow *pFVar2;
  UDS_CharStateData *pUVar3;
  EDS_CharDetailState local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  
  UDS_PlayerData::GetMainPlayerCurrentEntityID();
  UDS_CharStateData::GetData((ulong64)local_res18);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if ((bVar1) &&
     (pFVar2 = FDS_StuffGatherTableRow::GetByEntityTableID((int *)((longlong)&this->_padding_ + 4)),
     pFVar2 != (FDS_StuffGatherTableRow *)0x0)) {
    if (pFVar2->StuffLocationType == Water) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
      local_res10[0] = SwimSubmerge;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,local_res10);
      if (!bVar1) {
        return false;
      }
    }
    else if (pFVar2->StuffLocationType == Air) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res18);
      local_res10[0] = Hovering;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,local_res10);
      return bVar1;
    }
    return true;
  }
  return false;
}

// GetData @ 14baa80a0

TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> __cdecl
UDS_StuffGatherData::GetData(ulong64 param_1)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  undefined1 local_18 [16];
  
  TDS_DataSetGetter<UDS_StuffDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_StuffGatherData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14baa8143;
  }
  pUVar3 = (UObject *)0x0;
LAB_14baa8143:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetDetectionHiddenType @ 14baa95b0

EDS_DetectionHiddenType __thiscall
UDS_StuffGatherData::GetDetectionHiddenType(UDS_StuffGatherData *this)

{
  bool bVar1;
  int iVar2;
  FDS_StuffBaseTableRow *this_00;
  FDS_StuffGatherTableRow *pFVar3;
  
  iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_StuffBaseTableRow::GetRef((longlong)iVar2,true);
  bVar1 = FDS_StuffBaseTableRow::IsValid(this_00);
  if ((bVar1) && (this_00->StuffType == StuffGather)) {
    pFVar3 = FDS_StuffGatherTableRow::GetRef((longlong)this_00->ID_StuffValue,true);
    return pFVar3->DetectionHiddenType;
  }
  return None;
}

// GetEffectID @ 14baa99b0

int __thiscall UDS_StuffGatherData::GetEffectID(UDS_StuffGatherData *this,EDS_StuffState param_1)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->EffectID_Map).field_0x8 != *(int *)&(this->EffectID_Map).field_0x34) {
    puVar4 = *(undefined1 **)&(this->EffectID_Map).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EffectID_Map).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->EffectID_Map).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->EffectID_Map;
      do {
        if (*(EDS_StuffState *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
          piVar3 = TMapBase<enum_EDS_StuffState,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_StuffState,int,0>_>
                   ::FindChecked(&this->EffectID_Map,param_1);
          return *piVar3;
        }
        iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}

// GetPlayerSkillGrade @ 14baaed20

EDS_GradeType __thiscall
UDS_StuffGatherData::GetPlayerSkillGrade(UDS_StuffGatherData *this,EDS_PlayerSkillType *param_1)

{
  code *pcVar1;
  bool bVar2;
  EDS_GradeType EVar3;
  uint uVar4;
  FDS_StuffGatherTableRow *pFVar5;
  uint uVar6;
  longlong lVar7;
  int local_res18 [2];
  
  local_res18[0] = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar5 = FDS_StuffGatherTableRow::GetByEntityTableID(local_res18);
  if ((pFVar5 != (FDS_StuffGatherTableRow *)0x0) &&
     (uVar6 = 0, 0 < (pFVar5->PlayerSkillType).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (pFVar5->PlayerSkillType).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      if ((((pFVar5->PlayerSkillType).AllocatorInstance.Data[lVar7] ==
            (FScriptContainerElement)*param_1) && (-1 < (int)uVar6)) &&
         ((int)uVar6 < (pFVar5->PlayerSkillGrade).ArrayNum)) {
        uVar4 = 0;
        if ((int)uVar6 < (pFVar5->PlayerSkillGrade).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          EVar3 = (*pcVar1)();
          return EVar3;
        }
        return (EDS_GradeType)(pFVar5->PlayerSkillGrade).AllocatorInstance.Data[(int)uVar6];
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < (pFVar5->PlayerSkillType).ArrayNum);
  }
  return None;
}

// GetPlayerSkillLevel @ 14baaefb0

int __thiscall
UDS_StuffGatherData::GetPlayerSkillLevel(UDS_StuffGatherData *this,EDS_PlayerSkillType *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FDS_StuffGatherTableRow *pFVar5;
  uint uVar6;
  longlong lVar7;
  int local_res18 [2];
  
  local_res18[0] = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar5 = FDS_StuffGatherTableRow::GetByEntityTableID(local_res18);
  if ((pFVar5 != (FDS_StuffGatherTableRow *)0x0) &&
     (uVar6 = 0, 0 < (pFVar5->PlayerSkillType).ArrayNum)) {
    lVar7 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (pFVar5->PlayerSkillType).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      if ((((pFVar5->PlayerSkillType).AllocatorInstance.Data[lVar7] ==
            (FScriptContainerElement)*param_1) && (-1 < (int)uVar6)) &&
         ((int)uVar6 < (pFVar5->PlayerSkillLevel).ArrayNum)) {
        uVar3 = 0;
        if ((int)uVar6 < (pFVar5->PlayerSkillLevel).ArrayNum) {
          uVar3 = ~uVar6 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          iVar4 = (*pcVar1)();
          return iVar4;
        }
        return *(int *)((pFVar5->PlayerSkillLevel).AllocatorInstance.Data + (longlong)(int)uVar6 * 4
                       );
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while ((int)uVar6 < (pFVar5->PlayerSkillType).ArrayNum);
  }
  return 0;
}

// GetStuffGatherType @ 14bab0570

EDS_StuffGatherType __thiscall UDS_StuffGatherData::GetStuffGatherType(UDS_StuffGatherData *this)

{
  bool bVar1;
  int iVar2;
  FDS_StuffBaseTableRow *this_00;
  FDS_StuffGatherTableRow *pFVar3;
  
  iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_StuffBaseTableRow::GetRef((longlong)iVar2,true);
  bVar1 = FDS_StuffBaseTableRow::IsValid(this_00);
  if ((bVar1) && (this_00->StuffType == StuffGather)) {
    pFVar3 = FDS_StuffGatherTableRow::GetRef((longlong)this_00->ID_StuffValue,true);
    return pFVar3->StuffGatherType;
  }
  return None;
}

// GetStuffQuestGroup @ 14bab05e0

int __thiscall UDS_StuffGatherData::GetStuffQuestGroup(UDS_StuffGatherData *this)

{
  bool bVar1;
  int iVar2;
  FDS_StuffBaseTableRow *this_00;
  FDS_StuffGatherTableRow *pFVar3;
  
  iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_StuffBaseTableRow::GetRef((longlong)iVar2,true);
  bVar1 = FDS_StuffBaseTableRow::IsValid(this_00);
  if ((bVar1) && (this_00->StuffType == StuffGather)) {
    pFVar3 = FDS_StuffGatherTableRow::GetRef((longlong)this_00->ID_StuffValue,true);
    return pFVar3->StuffQuestGroup;
  }
  return 0;
}

// HasGatheringEntityID @ 14bab2590

bool __thiscall UDS_StuffGatherData::HasGatheringEntityID(UDS_StuffGatherData *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->GatheringEntityList).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->GatheringEntityList).ArrayNum * 8;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(ulong64 *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 8;
  }
  return true;
}

// InitByEntityInfo @ 14bab4c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_StuffGatherData::InitByEntityInfo(UDS_StuffGatherData *this)

{
  bool bVar1;
  FDS_StuffBaseTableRow *pFVar2;
  UDS_LogManager *pUVar3;
  FDS_StuffGatherTableRow *this_00;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  undefined1 local_158 [4];
  int local_154;
  TPairInitializer<EDS_StuffState_&&,int_const_&> local_150;
  int *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_StuffData::InitByEntityInfo((UDS_StuffData *)this);
  local_154 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  pFVar2 = FDS_StuffBaseTableRow::Get((longlong)local_154,true);
  if (pFVar2 == (FDS_StuffBaseTableRow *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_StuffGatherData::InitByEntityInfo",0x25,Yes);
    pwVar5 = L"stuffBaseTable is nullptr. (%d)";
    uVar4 = 0x15b;
LAB_14bab4cb4:
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar4,pwVar5);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  else {
    if (0 < pFVar2->ID_Effect) {
      local_150.Value = (int *)local_158;
      local_158[0] = 1;
      local_140 = &pFVar2->ID_Effect;
      TSet<TTuple<enum_EDS_StuffState,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StuffState,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_StuffState_&&,int_const_&>_>
                (&this->EffectID_Map,&local_150,(bool *)&local_150.Value);
    }
    if (pFVar2->StuffType == StuffGather) {
      this_00 = FDS_StuffGatherTableRow::GetByEntityTableID(&local_154);
      if (this_00 == (FDS_StuffGatherTableRow *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_StuffGatherData::InitByEntityInfo",0x25,Yes);
        pwVar5 = L"stuffGatherTable is nullptr. (%d)";
        uVar4 = 0x16d;
        goto LAB_14bab4cb4;
      }
      this->GatherMaxUserNumber = this_00->GatherMaxPeopleNumber;
      bVar1 = FDS_StuffGatherTableRow::HasPlayerSkill(this_00,0xc);
      this->bUsePlayerSkill_Detection = bVar1;
      bVar1 = FDS_StuffGatherTableRow::HasPlayerSkill(this_00,4);
      this->bUsePlayerSkill_OpenLocks = bVar1;
    }
    UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  }
  return;
}

// IsContinuous @ 14bab7520

bool __thiscall UDS_StuffGatherData::IsContinuous(UDS_StuffGatherData *this)

{
  bool bVar1;
  int iVar2;
  FDS_StuffBaseTableRow *this_00;
  FDS_StuffGatherTableRow *pFVar3;
  
  iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
  this_00 = FDS_StuffBaseTableRow::GetRef((longlong)iVar2,true);
  bVar1 = FDS_StuffBaseTableRow::IsValid(this_00);
  if (!bVar1) {
    return false;
  }
  pFVar3 = FDS_StuffGatherTableRow::GetRef((longlong)this_00->ID_StuffValue,true);
  return pFVar3->IsContinuous;
}

// IsDetected @ 14bab78a0

bool __thiscall UDS_StuffGatherData::IsDetected(UDS_StuffGatherData *this)

{
  bool bVar1;
  UDS_PlayerData *this_00;
  EDS_PlayerSkillType local_res8 [8];
  FWeakObjectPtr local_res10;
  ulong64 local_res18;
  FDS_PlayerSkillTargetInfo local_48;
  
  if (this->bUsePlayerSkill_Detection != true) {
    return true;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    local_48.EntityID = 0;
    local_48.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_48.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_48.bIsStuff = false;
    local_48.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_48.EndTime = 0.0;
    local_48.TableID = 0;
    local_48.ZoneID = 0;
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res10);
    local_res18 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    local_res8[0] = Detection;
    UDS_PlayerData::GetPlayerSkillTargetInfo(this_00,local_res8,&local_res18,&local_48);
    bVar1 = FDS_PlayerSkillTargetInfo::IsOverEndTime(&local_48);
    return !bVar1;
  }
  return false;
}

// IsInteractingWithEntity @ 14bab8a60

bool __thiscall
UDS_StuffGatherData::IsInteractingWithEntity(UDS_StuffGatherData *this,ulong64 param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->GatheringEntityList).AllocatorInstance.Data;
  iVar2 = (this->GatheringEntityList).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->GatheringEntityList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<unsigned___int64,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (param_1 == *(ulong64 *)pFVar3) {
      return true;
    }
    pFVar3 = pFVar3 + 8;
  }
  return false;
}

// IsInteractionAvailable @ 14bab9750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_StuffGatherData::IsInteractionAvailable(UDS_StuffGatherData *this,ulong64 param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_PlayerData *this_00;
  FDS_StuffGatherTableRow *pFVar3;
  UDS_CharStateData *pUVar4;
  undefined1 auStackY_1b8 [32];
  EDS_PlayerSkillType local_188 [8];
  FWeakObjectPtr local_180;
  ulong64 local_178;
  FDS_PlayerSkillTargetInfo local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (0 < this->GatherRemainCount) {
    if (this->GatherMaxUserNumber < 1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_StuffGatherData::CheckGatherMaxUser",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x107,L"maximum number of users is zero");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return false;
      }
      FMemory::Free((void *)local_138._padding_);
      return false;
    }
    if (this->GatherMaxUserNumber < (this->GatheringEntityList).ArrayNum) {
      return false;
    }
    if (this->bUsePlayerSkill_Detection == true) {
      UDS_PlayerData::GetMainPlayerData();
      bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_180,(void *)0x0);
      if (bVar1) {
        return false;
      }
      local_170.EntityID = 0;
      local_170.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
      ;
      local_170.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y
      ;
      local_170.bIsStuff = false;
      local_170.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
      ;
      local_170.EndTime = 0.0;
      local_170.TableID = 0;
      local_170.ZoneID = 0;
      this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_180);
      local_178 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      local_188[0] = Detection;
      UDS_PlayerData::GetPlayerSkillTargetInfo(this_00,local_188,&local_178,&local_170);
      bVar1 = FDS_PlayerSkillTargetInfo::IsOverEndTime(&local_170);
      if (bVar1) {
        return false;
      }
    }
    UDS_PlayerData::GetMainPlayerCurrentEntityID();
    UDS_CharStateData::GetData((ulong64)&local_180);
    bVar1 = FWeakObjectPtr::IsValid(&local_180);
    if (!bVar1) {
      return false;
    }
    pFVar3 = FDS_StuffGatherTableRow::GetByEntityTableID((int *)((longlong)&this->_padding_ + 4));
    if (pFVar3 == (FDS_StuffGatherTableRow *)0x0) {
      return false;
    }
    if (pFVar3->StuffLocationType == Water) {
      pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_180);
      local_178 = CONCAT44(local_178._4_4_,6);
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_178);
    }
    else {
      if (pFVar3->StuffLocationType != Air) {
        return true;
      }
      pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_180);
      local_178 = CONCAT44(local_178._4_4_,0x1e);
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)&local_178);
    }
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// IsMultipleGather @ 14baba340

bool __thiscall UDS_StuffGatherData::IsMultipleGather(UDS_StuffGatherData *this)

{
  return 1 < this->GatherMaxUserNumber;
}

// IsOpenLocked @ 14baba410

bool __thiscall UDS_StuffGatherData::IsOpenLocked(UDS_StuffGatherData *this)

{
  bool bVar1;
  UDS_PlayerData *this_00;
  EDS_PlayerSkillType local_res8 [8];
  FWeakObjectPtr local_res10;
  ulong64 local_res18;
  FDS_PlayerSkillTargetInfo local_48;
  
  if (this->bUsePlayerSkill_OpenLocks != true) {
    return true;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (!bVar1) {
    local_48.EntityID = 0;
    local_48.Position.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_48.Position.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_48.bIsStuff = false;
    local_48.Position.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_48.EndTime = 0.0;
    local_48.TableID = 0;
    local_48.ZoneID = 0;
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res10);
    local_res18 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    local_res8[0] = OpenLocks;
    UDS_PlayerData::GetPlayerSkillTargetInfo(this_00,local_res8,&local_res18,&local_48);
    bVar1 = FDS_PlayerSkillTargetInfo::IsOverEndTime(&local_48);
    return !bVar1;
  }
  return false;
}

// RemoveGatheringUser @ 14bac7c10

void __thiscall UDS_StuffGatherData::RemoveGatheringUser(UDS_StuffGatherData *this,ulong64 param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  ulong64 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong64 local_res10;
  
  pFVar2 = (this->GatheringEntityList).AllocatorInstance.Data;
  pFVar5 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)(this->GatheringEntityList).ArrayNum * 8) {
    while (*(ulong64 *)pFVar5 != param_1) {
      pFVar5 = pFVar5 + 8;
      if (pFVar5 == pFVar2 + (longlong)(this->GatheringEntityList).ArrayNum * 8) {
        return;
      }
    }
    local_res10 = param_1;
    if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
        ((FScriptContainerElement *)&local_res10 <
         pFVar2 + (longlong)(this->GatheringEntityList).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar1 = (this->GatheringEntityList).ArrayNum;
    if (iVar1 != 0) {
      iVar10 = 0;
      pFVar2 = (this->GatheringEntityList).AllocatorInstance.Data;
      bVar4 = *(ulong64 *)pFVar2 != local_res10;
      lVar7 = 0;
      uVar6 = local_res10;
      iVar8 = 0;
      do {
        iVar9 = iVar8;
        do {
          lVar7 = lVar7 + 1;
          iVar9 = iVar9 + 1;
          if (iVar1 <= lVar7) break;
        } while (bVar4 == (*(ulong64 *)(pFVar2 + lVar7 * 8) != uVar6));
        if (bVar4 != false) {
          if (iVar10 != iVar8) {
            memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar8 * 8,
                    (longlong)(iVar9 - iVar8) << 3);
            uVar6 = local_res10;
          }
          iVar10 = iVar10 + (iVar9 - iVar8);
        }
        bVar4 = (bool)(bVar4 ^ 1);
        iVar8 = iVar9;
      } while (lVar7 < iVar1);
      (this->GatheringEntityList).ArrayNum = iVar10;
    }
  }
  return;
}

// ResetData @ 14bac9d60

void __thiscall UDS_StuffGatherData::ResetData(UDS_StuffGatherData *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<EDS_StuffState,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_StuffState,int,0>_>
  *this_00;
  int iVar3;
  bool bVar4;
  FDestructionSentinel local_28;
  
  UDS_EntityData::ResetData((UDS_EntityData *)this);
  this->GatherAction = false;
  this->StuffState = Idle;
  this->GatherRemainCount = 0;
  this->GatherMaxCount = 0;
  this->GatherMaxUserNumber = 0;
  piVar1 = &(this->GatheringEntityList).ArrayMax;
  (this->GatheringEntityList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->GatheringEntityList).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->EffectID_Map;
  bVar4 = 1 < *(int *)&(this->EffectID_Map).field_0x48;
  if (!bVar4) {
    TSet<TTuple<enum_EDS_StuffState,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StuffState,int,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar2 = &(this->EffectID_Map).field_0xc;
  *(undefined4 *)&(this->EffectID_Map).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->EffectID_Map).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EffectID_Map).field_0x34 = 0;
  iVar3 = *(int *)&(this->EffectID_Map).field_0x2c;
  *(undefined4 *)&(this->EffectID_Map).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->EffectID_Map).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EffectID_Map).field_0x10,0);
  }
  if (bVar4) {
    *(undefined4 *)&(this->EffectID_Map).field_0x48 = 1;
    TSet<TTuple<enum_EDS_StuffState,int>,TDefaultMapHashableKeyFuncs<enum_EDS_StuffState,int,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  this->bUsePlayerSkill_Detection = false;
  this->bUsePlayerSkill_OpenLocks = false;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ChangedStuffStateDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangedStuffStateDelegate)
  ;
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// SetDataByOpenlockCancelResponse @ 14bacb320

void __thiscall
UDS_StuffGatherData::SetDataByOpenlockCancelResponse
          (UDS_StuffGatherData *this,OpenLockSkillCancelResponse *param_1)

{
  OpenLockSkillCancelResponse *local_res10 [3];
  
  local_res10[0] = param_1;
  local_res10[0] = (OpenLockSkillCancelResponse *)UDS_PlayerData::GetMainPlayerCurrentEntityID();
  TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
              *)&this->_padding_,(ulong64 *)local_res10);
  return;
}

// SetDataByOpenlockCompleteResponse @ 14bacb360

void __thiscall
UDS_StuffGatherData::SetDataByOpenlockCompleteResponse
          (UDS_StuffGatherData *this,OpenLockCompleteResponse *param_1)

{
  bool local_res8 [8];
  bool local_res10;
  undefined7 uStackX_11;
  ulong64 local_res18 [2];
  
  _local_res10 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  local_res8[0] = false;
  local_res18[0] = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  TMulticastDelegate<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
               *)&this->_padding_,local_res18,local_res8,&local_res10);
  return;
}

// SetDataByOpenlockStartResponse @ 14bacb3b0

void __thiscall
UDS_StuffGatherData::SetDataByOpenlockStartResponse
          (UDS_StuffGatherData *this,OpenLockSkillUseResponse *param_1)

{
  double dVar1;
  ulong64 local_res8;
  
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  *(float *)&this->_padding_ = (float)((param_1->_impl_).interaction_end_time_ - dVar1);
  local_res8 = UDS_PlayerData::GetMainPlayerCurrentEntityID();
  TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
              *)&this->_padding_,&local_res8);
  return;
}

// SetDataBySpawnStuffResponse @ 14bacb420

void __thiscall
UDS_StuffGatherData::SetDataBySpawnStuffResponse
          (UDS_StuffGatherData *this,SpawnStuffResponse *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  int iVar7;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *pTVar8;
  
  iVar7 = 0;
  SetGatherRemainCount(this,(param_1->_impl_).gather_remain_count_);
  this->GatherMaxCount = (param_1->_impl_).gather_total_count_;
  if (0 < *(int *)&(param_1->_impl_).gatherer_infos_.field_0x8) {
    pTVar8 = &this->GatheringEntityList;
    lVar6 = 0;
    do {
      uVar4 = *(ulonglong *)&(param_1->_impl_).gatherer_infos_;
      if ((uVar4 & 1) != 0) {
        uVar4 = *(ulonglong *)(uVar4 + 7 + lVar6);
      }
      lVar2 = *(longlong *)(uVar4 + 0x18);
      pFVar5 = (pTVar8->AllocatorInstance).Data;
      iVar3 = (this->GatheringEntityList).ArrayNum;
      pFVar1 = pFVar5 + (longlong)iVar3 * 8;
      for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
        if (*(longlong *)pFVar5 == lVar2) goto LAB_14bacb4ba;
      }
      if (iVar3 == (this->GatheringEntityList).ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar8->AllocatorInstance,&(this->GatheringEntityList).ArrayMax);
        (this->GatheringEntityList).ArrayNum = iVar3;
      }
      iVar3 = (this->GatheringEntityList).ArrayNum;
      (this->GatheringEntityList).ArrayNum = iVar3 + 1;
      *(longlong *)((pTVar8->AllocatorInstance).Data + (longlong)iVar3 * 8) = lVar2;
LAB_14bacb4ba:
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar7 < *(int *)&(param_1->_impl_).gatherer_infos_.field_0x8);
  }
  return;
}

// SetDataByStuffGatherCancelResponse @ 14bacb560

void __thiscall
UDS_StuffGatherData::SetDataByStuffGatherCancelResponse
          (UDS_StuffGatherData *this,StuffGatherCancelResponse *param_1)

{
  ulong64 local_res8 [4];
  
  local_res8[0] = (param_1->_impl_).entity_id_;
  RemoveGatheringUser(this,local_res8[0]);
  TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
              *)&this->_padding_,local_res8);
  return;
}

// SetDataByStuffGatherCompleteResponse @ 14bacb5a0

void __thiscall
UDS_StuffGatherData::SetDataByStuffGatherCompleteResponse
          (UDS_StuffGatherData *this,StuffGatherCompleteResponse *param_1)

{
  bool local_res8 [8];
  bool local_res10 [8];
  ulong64 local_res18;
  
  local_res18 = (param_1->_impl_).entity_id_;
  SetGatherRemainCount(this,(param_1->_impl_).gather_remain_count_);
  RemoveGatheringUser(this,local_res18);
  local_res10[0] = (param_1->_impl_).is_continuous_;
  local_res8[0] = true;
  TMulticastDelegate<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
  ::Broadcast((TMulticastDelegate<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
               *)&this->_padding_,&local_res18,local_res10,local_res8);
  return;
}

// SetDataByStuffGatherStartResponse @ 14bacb610

void __thiscall
UDS_StuffGatherData::SetDataByStuffGatherStartResponse
          (UDS_StuffGatherData *this,StuffGatherStartResponse *param_1)

{
  double dVar1;
  ulong64 local_res8;
  
  local_res8 = (param_1->_impl_).entity_id_;
  AddGatheringUser(this,local_res8);
  dVar1 = UDS_TimeUtilManager::GetCurrentServerTime();
  *(float *)&this->_padding_ = (float)((param_1->_impl_).gathering_time_ - dVar1);
  TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
              *)&this->_padding_,&local_res8);
  return;
}

// SetGatherRemainCount @ 14bacc920

void __thiscall UDS_StuffGatherData::SetGatherRemainCount(UDS_StuffGatherData *this,int param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  if (this->GatherRemainCount == param_1) {
    return;
  }
  this->GatherRemainCount = param_1;
  if ((param_1 < 1) && (this->StuffState != Die)) {
    this->StuffState = Die;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ChangedStuffStateDelegate,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->ChangedStuffStateDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->ChangedStuffStateDelegate).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->ChangedStuffStateDelegate).field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->ChangedStuffStateDelegate).field_0x8;
        if (((*(int *)(lVar2 + 8 + lVar10) == 0) ||
            (plVar3 = *(longlong **)(lVar2 + lVar10), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->ChangedStuffStateDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->ChangedStuffStateDelegate,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return;
}

// SetStuffState @ 14bace0e0

void __thiscall UDS_StuffGatherData::SetStuffState(UDS_StuffGatherData *this,EDS_StuffState param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  if (this->StuffState != param_1) {
    this->StuffState = param_1;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ChangedStuffStateDelegate,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->ChangedStuffStateDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->ChangedStuffStateDelegate).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->ChangedStuffStateDelegate).field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->ChangedStuffStateDelegate).field_0x8;
        if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->ChangedStuffStateDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->ChangedStuffStateDelegate,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

// UpdateStuffState @ 14badad20

void __thiscall UDS_StuffGatherData::UpdateStuffState(UDS_StuffGatherData *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  if ((this->GatherRemainCount < 1) && (this->StuffState != Die)) {
    this->StuffState = Die;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->ChangedStuffStateDelegate,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->ChangedStuffStateDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar5 = false;
    uVar9 = *(int *)&(this->ChangedStuffStateDelegate).field_0x10 - 1;
    if (-1 < (int)uVar9) {
      lVar10 = (longlong)(int)uVar9 << 4;
      bVar5 = false;
      do {
        uVar8 = 0;
        if ((int)uVar9 < *(int *)&(this->ChangedStuffStateDelegate).field_0x10) {
          uVar8 = ~uVar9 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *(longlong *)&(this->ChangedStuffStateDelegate).field_0x8;
        if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
            (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
           (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
          bVar5 = true;
        }
        lVar10 = lVar10 + -0x10;
        uVar9 = uVar9 - 1;
      } while (-1 < (int)uVar9);
    }
    puVar1 = &(this->ChangedStuffStateDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar5) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->ChangedStuffStateDelegate,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

