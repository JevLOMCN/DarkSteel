// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b455080

UClass * __cdecl UDS_EntityData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityData",
               &Z_Registration_Info_UClass_UDS_EntityData.InnerSingleton,
               StaticRegisterNativesUDS_EntityData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_EntityData>,InternalVTableHelperCtorCaller<UDS_EntityData>,
               aFStackX_8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityData.InnerSingleton;
}

// UDS_EntityData @ 14b492420

UDS_EntityData * __thiscall
UDS_EntityData::UDS_EntityData(UDS_EntityData *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->PrevHeightMoveState = None;
  this->HeightMoveState = None;
  this->PrevHeightConditionType = Max;
  this->CurHeightConditionType = Max;
  this->_padding_ = (longlong)&___7UDS_EntityData__6B_;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->DebugString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugString).Data.ArrayNum = 0;
  (this->DebugString).Data.ArrayMax = 0;
  this->bIsThrown = false;
  this->HeightTargetDistance = 0.0;
  this->EntityScale = 1.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->EntityScaleVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->EntityScaleVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->EntityScaleVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->NameDel = 0;
  *(undefined8 *)&(this->NameDel).field_0x8 = 0;
  *(undefined8 *)&(this->NameDel).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_Debug = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_Debug).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeMoveModeDelegate = 0;
  *(undefined8 *)&(this->OnChangeMoveModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeMoveModeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeHeightConditionDelegate = 0;
  *(undefined8 *)&(this->OnChangeHeightConditionDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeHeightConditionDelegate).field_0x10 = 0;
  this->CapsuleHalfHeight = 0.0;
  this->CapsuleRadius = 0.0;
  this->ScaledCapsuleHalfHeight = 0.0;
  this->ScaledCapsuleRadius = 0.0;
  *(undefined8 *)&(this->NameDel).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeMoveModeDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeHeightConditionDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_EntityData @ 14b4934f0

void __thiscall UDS_EntityData::~UDS_EntityData(UDS_EntityData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_EntityData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeHeightConditionDelegate).field_0x8,
             *(int *)&(this->OnChangeHeightConditionDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangeHeightConditionDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeHeightConditionDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeMoveModeDelegate).field_0x8,
             *(int *)&(this->OnChangeMoveModeDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnChangeMoveModeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeMoveModeDelegate);
  pvVar1 = *(void **)&(this->DataPropertyDelegate_Debug).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_Debug);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)&(this->NameDel).field_0x8,
             *(int *)&(this->NameDel).field_0x10);
  pvVar1 = *(void **)&(this->NameDel).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->NameDel);
  pFVar2 = (this->DebugString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Name).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b494f60

UClass * __cdecl UDS_EntityData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_EntityData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_EntityData",
               &Z_Registration_Info_UClass_UDS_EntityData.InnerSingleton,
               StaticRegisterNativesUDS_EntityData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_EntityData>,InternalVTableHelperCtorCaller<UDS_EntityData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_EntityData.InnerSingleton;
}

// StaticRegisterNativesUDS_EntityData @ 14b495820

void __cdecl UDS_EntityData::StaticRegisterNativesUDS_EntityData(void)

{
  return;
}

// UDS_EntityData @ 14ba32c10

UDS_EntityData * __thiscall
UDS_EntityData::UDS_EntityData(UDS_EntityData *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = 0;
  (this->Name).Data.ArrayMax = 0;
  (this->DebugString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugString).Data.ArrayNum = 0;
  (this->DebugString).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&___7UDS_EntityData__6B_;
  this->_padding_ = 0;
  this->bIsThrown = false;
  this->HeightTargetDistance = 0.0;
  this->PrevHeightMoveState = None;
  this->HeightMoveState = None;
  this->PrevHeightConditionType = Max;
  this->CurHeightConditionType = Max;
  this->EntityScale = 1.0;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->EntityScaleVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->EntityScaleVector).field0_0x0._s_0.Y = (double)uVar1;
  (this->EntityScaleVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->NameDel = 0;
  *(undefined8 *)&(this->NameDel).field_0x8 = 0;
  *(undefined8 *)&(this->NameDel).field_0x10 = 0;
  *(undefined8 *)&(this->NameDel).field_0x18 = 2;
  *(undefined8 *)&this->DataPropertyDelegate_Debug = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_Debug).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_Debug).field_0x10 = 0;
  *(undefined8 *)&this->OnChangeMoveModeDelegate = 0;
  *(undefined8 *)&(this->OnChangeMoveModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeMoveModeDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeMoveModeDelegate).field_0x18 = 2;
  *(undefined8 *)&this->OnChangeHeightConditionDelegate = 0;
  *(undefined8 *)&(this->OnChangeHeightConditionDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeHeightConditionDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeHeightConditionDelegate).field_0x18 = 2;
  this->CapsuleHalfHeight = 0.0;
  this->CapsuleRadius = 0.0;
  this->ScaledCapsuleHalfHeight = 0.0;
  this->ScaledCapsuleRadius = 0.0;
  return this;
}

// GetCurHeightConditionType @ 14ba46680

EDS_HeightConditionType __thiscall UDS_EntityData::GetCurHeightConditionType(UDS_EntityData *this)

{
  EDS_HeightConditionType EVar1;
  
  EVar1 = this->CurHeightConditionType;
  if ((EVar1 == Ground) && (this->bIsThrown == true)) {
    EVar1 = Air;
  }
  return EVar1;
}

// GetData @ 14ba48b10

TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> __cdecl
UDS_EntityData::GetData(ulong64 param_1,ulong64 param_2)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar3;
  UClass *pUVar4;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  UObject *local_20;
  undefined1 local_18 [16];
  
  UDS_EntityDataSet::GetEntityDataSet((ulong64)&local_28);
  bVar2 = TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityDataSet,FWeakObjectPtr> *)&local_28,(void *)0x0);
  if (bVar2) goto LAB_14ba48c09;
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_28);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
LAB_14ba48b92:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_EntityData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14ba48b92;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_20);
  bVar2 = TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr> *)&local_res20,(void *)0x0);
  if (!bVar2) {
    *(FWeakObjectPtr *)param_1 = local_res20;
    return (TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
LAB_14ba48c09:
  *(undefined8 *)param_1 = 0;
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_EntityData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetHeightConditionType @ 14ba4bff0

EDS_HeightConditionType __thiscall UDS_EntityData::GetHeightConditionType(UDS_EntityData *this)

{
  return this->CurHeightConditionType;
}

// GetHeightMoveState @ 14ba4c000

EDS_HeightMoveState __thiscall UDS_EntityData::GetHeightMoveState(UDS_EntityData *this)

{
  return this->HeightMoveState;
}

// GetHeightTargetDistance @ 14ba4c010

float __thiscall UDS_EntityData::GetHeightTargetDistance(UDS_EntityData *this)

{
  return this->HeightTargetDistance;
}

// GetMoveMode @ 14ba4d4d0

EDS_MoveMode __thiscall UDS_EntityData::GetMoveMode(UDS_EntityData *this)

{
  return this->CurMoveMode;
}

// GetPrevHeightConditionType @ 14ba4e520

EDS_HeightConditionType __thiscall UDS_EntityData::GetPrevHeightConditionType(UDS_EntityData *this)

{
  return this->PrevHeightConditionType;
}

// InitByEntityInfo @ 14ba53dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_EntityData::InitByEntityInfo(UDS_EntityData *this)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  bool bVar6;
  UObject *pUVar7;
  FDS_CharacterBaseTableRow *pFVar8;
  FDS_CharacterSkinTableRow *pFVar9;
  FDS_NpcBaseTableRow *pFVar10;
  FDS_StuffBaseTableRow *pFVar11;
  FDS_TransportBaseTableRow *pFVar12;
  FDS_SkillTotemTableRow *pFVar13;
  FDS_ResourcePresetTableRow *pFVar14;
  UDS_LogManager *pUVar15;
  int iVar16;
  int iVar17;
  undefined1 uVar18;
  double dVar19;
  undefined1 auStackY_188 [32];
  uint uVar20;
  wchar_t *pwVar21;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar6) {
LAB_14ba53e2d:
    uVar18 = 0;
  }
  else {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                       (void *)0x0);
    if (bVar6) goto LAB_14ba53e2d;
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
    uVar18 = pUVar7[1].field_0x8;
  }
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (bVar6) {
LAB_14ba53e6e:
    iVar16 = 0;
  }
  else {
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar7 + 4),
                       (void *)0x0);
    if (bVar6) goto LAB_14ba53e6e;
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar7 + 4));
    iVar16 = *(int *)&pUVar7[1].field_0xc;
  }
  this->EntityScale = 1.0;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  iVar17 = 0;
  (this->EntityScaleVector).field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->EntityScaleVector).field0_0x0._s_0.Y = (double)uVar5;
  (this->EntityScaleVector).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->CapsuleHalfHeight = 0.0;
  this->CapsuleRadius = 0.0;
  this->ScaledCapsuleHalfHeight = 0.0;
  this->ScaledCapsuleRadius = 0.0;
  switch(uVar18) {
  case 2:
  case 3:
  case 4:
    pFVar8 = FDS_CharacterBaseTableRow::Get((longlong)iVar16,true);
    if (pFVar8 == (FDS_CharacterBaseTableRow *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar15 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_EntityData::InitByEntityInfo",0x20,Yes);
      pwVar21 = L"characterBaseTable is nullptr. (%d)";
      uVar20 = 0x40;
      goto LAB_14ba53f3a;
    }
    pFVar9 = FDS_CharacterSkinTableRow::Get((longlong)pFVar8->ID_DefaultSkin,true);
    if (pFVar9 == (FDS_CharacterSkinTableRow *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar15 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_EntityData::InitByEntityInfo",0x20,Yes);
      pwVar21 = L"characterSkinTable is nullptr. (%d)";
      uVar20 = 0x47;
      goto LAB_14ba53f3a;
    }
    iVar17 = pFVar9->ID_ResourcePreset;
    break;
  case 5:
    pFVar10 = FDS_NpcBaseTableRow::Get((longlong)iVar16,true);
    if (pFVar10 == (FDS_NpcBaseTableRow *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar15 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_EntityData::InitByEntityInfo",0x20,Yes);
      pwVar21 = L"npcBaseTable is nullptr. (%d)";
      uVar20 = 0x55;
      goto LAB_14ba53f3a;
    }
    this->EntityScale = pFVar10->NpcScale;
    iVar17 = pFVar10->ID_ResourcePreset;
    break;
  case 6:
    pFVar12 = FDS_TransportBaseTableRow::Get((longlong)iVar16,true);
    if (pFVar12 == (FDS_TransportBaseTableRow *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar15 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_EntityData::InitByEntityInfo",0x20,Yes);
      pwVar21 = L"transportBaseTable is nullptr. (%d)";
      uVar20 = 0x76;
      goto LAB_14ba53f3a;
    }
    iVar17 = pFVar12->ID_ResourcePreset;
    break;
  case 7:
    pFVar13 = FDS_SkillTotemTableRow::Get((longlong)iVar16,true);
    if (pFVar13 == (FDS_SkillTotemTableRow *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar15 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_EntityData::InitByEntityInfo",0x20,Yes);
      pwVar21 = L"skillTotemTable is nullptr. (%d)";
      uVar20 = 0x84;
      goto LAB_14ba53f3a;
    }
    iVar17 = pFVar13->ID_ResourcePreset;
    break;
  case 8:
  case 9:
  case 10:
  case 0xb:
    pFVar11 = FDS_StuffBaseTableRow::Get((longlong)iVar16,true);
    if (pFVar11 == (FDS_StuffBaseTableRow *)0x0) {
      pUVar15 = UDS_LogManager::GetInst();
      if (pUVar15 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar15 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_EntityData::InitByEntityInfo",0x20,Yes);
      pwVar21 = L"stuffBaseTable is nullptr. (%d)";
      uVar20 = 0x67;
      goto LAB_14ba53f3a;
    }
    this->EntityScale = pFVar11->StuffScale;
    iVar17 = pFVar11->ID_ResourcePreset;
  }
  dVar19 = (double)this->EntityScale;
  dVar3 = dVar19 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  auVar4._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar19,0);
  auVar4._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar19;
  auVar4._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar19) >> 0x20);
  *(undefined1 (*) [16])&(this->EntityScaleVector).field0_0x0 = auVar4;
  (this->EntityScaleVector).field0_0x0._s_0.Z = dVar3;
  if (iVar17 < 1) {
    return;
  }
  pFVar14 = FDS_ResourcePresetTableRow::Get((longlong)iVar17,true);
  if (pFVar14 != (FDS_ResourcePresetTableRow *)0x0) {
    fVar1 = pFVar14->CapsuleHalfHeight;
    this->CapsuleHalfHeight = fVar1;
    fVar2 = pFVar14->CapsuleRadius;
    this->CapsuleRadius = fVar2;
    this->ScaledCapsuleRadius = fVar2 * this->EntityScale;
    this->ScaledCapsuleHalfHeight = fVar1 * this->EntityScale;
    return;
  }
  pUVar15 = UDS_LogManager::GetInst();
  if (pUVar15 == (UDS_LogManager *)0x0) {
    return;
  }
  pUVar15 = UDS_LogManager::GetInst();
  local_148._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_148,"UDS_EntityData::InitByEntityInfo",0x20,Yes);
  pwVar21 = L"resourcePresetTable is nullptr. (%d)";
  uVar20 = 0x94;
LAB_14ba53f3a:
  UDS_LogManager::PrintLog(pUVar15,1,Warning,local_148.Ptr,uVar20,pwVar21);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return;
}

// ResetData @ 14ba68b90

void __thiscall UDS_EntityData::ResetData(UDS_EntityData *this)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FString local_18;
  
  ::FString::FString(&local_18,"");
  pFVar2 = &this->Name;
  if (pFVar2 != &local_18) {
    pFVar1 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (this->Name).Data.ArrayNum = local_18.Data.ArrayNum;
    (this->Name).Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetDebugString @ 14ba70df0

void __thiscall UDS_EntityData::SetDebugString(UDS_EntityData *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  UObject *pUVar3;
  bool bVar4;
  
  iVar2 = (this->DebugString).Data.ArrayNum;
  iVar1 = (param_1->Data).ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) {
      return;
    }
    iVar2 = wcscmp((wchar_t *)(this->DebugString).Data.AllocatorInstance.Data,
                   (wchar_t *)(param_1->Data).AllocatorInstance.Data);
    bVar4 = iVar2 == 0;
  }
  else {
    bVar4 = iVar2 + iVar1 == 1;
  }
  if (!bVar4) {
    ::FString::operator=(&this->DebugString,param_1);
    FDS_DataPropertyDelegate_FString_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->DataPropertyDelegate_Debug,&this->DebugString);
    *(undefined1 *)&this->_padding_ = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar4) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar3[4].field_0x8 = 1;
      bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      if (!bVar4) {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        pUVar3[3].field_0x20 = 1;
      }
    }
  }
  return;
}

// SetHeightConditionType @ 14ba71220

void __thiscall
UDS_EntityData::SetHeightConditionType(UDS_EntityData *this,EDS_HeightConditionType param_1)

{
  this->PrevHeightConditionType = this->CurHeightConditionType;
  this->CurHeightConditionType = param_1;
  return;
}

// SetHeightMoveData @ 14ba71240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_EntityData::SetHeightMoveData(UDS_EntityData *this,FDS_HeightMoveData *param_1)

{
  undefined1 *puVar1;
  double dVar2;
  EDS_HeightConditionType EVar3;
  EDS_HeightMoveState EVar4;
  EDS_HeightConditionType EVar5;
  EDS_HeightMoveState EVar6;
  longlong lVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  uint uVar13;
  UDS_LogManager *pUVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_248 [32];
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FDestructionSentinel local_1b8;
  FString local_1a0;
  FString local_190;
  FString local_180;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  dVar2 = param_1->Distance;
  EVar3 = this->CurHeightConditionType;
  this->PrevHeightConditionType = EVar3;
  EVar4 = this->HeightMoveState;
  this->HeightTargetDistance = (float)dVar2;
  EVar5 = param_1->TargetHeightConditionType;
  this->CurHeightConditionType = EVar5;
  this->PrevHeightMoveState = EVar4;
  EVar6 = param_1->HeightMoveState;
  this->HeightMoveState = EVar6;
  if (EVar4 != EVar6) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnChangeHeightConditionDelegate,(FWriteAccessScope *)&local_1b8);
    puVar1 = &(this->OnChangeHeightConditionDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar10 = false;
    uVar15 = *(int *)&(this->OnChangeHeightConditionDelegate).field_0x10 - 1;
    if (-1 < (int)uVar15) {
      lVar16 = (longlong)(int)uVar15 << 4;
      bVar10 = false;
      do {
        uVar13 = 0;
        if ((int)uVar15 < *(int *)&(this->OnChangeHeightConditionDelegate).field_0x10) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar7 = *(longlong *)&(this->OnChangeHeightConditionDelegate).field_0x8;
        if (((*(int *)(lVar7 + 8 + lVar16) == 0) ||
            (plVar8 = *(longlong **)(lVar7 + lVar16), plVar8 == (longlong *)0x0)) ||
           (cVar12 = (**(code **)(*plVar8 + 0x68))(plVar8,EVar6,EVar3,EVar5), cVar12 == '\0')) {
          bVar10 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    puVar1 = &(this->OnChangeHeightConditionDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar10) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnChangeHeightConditionDelegate,false);
    }
    if (local_1b8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1b8.Accessor,&local_1b8);
    }
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 != (UDS_LogManager *)0x0) {
      pUVar14 = UDS_LogManager::GetInst();
      EVar3 = this->CurHeightConditionType;
      ::FString::FString(&local_1c8,"EDS_HeightConditionType");
      DS_Util::GetEnumToString(&local_180,&local_1c8,(ulonglong)EVar3);
      EVar3 = this->PrevHeightConditionType;
      ::FString::FString(&local_1d8,"EDS_HeightConditionType");
      DS_Util::GetEnumToString(&local_190,&local_1d8,(ulonglong)EVar3);
      EVar4 = this->HeightMoveState;
      ::FString::FString(&local_1e8,"EDS_HeightMoveState");
      DS_Util::GetEnumToString(&local_1a0,&local_1e8,(ulonglong)EVar4);
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_EntityData::SetHeightMoveData",0x21,Yes);
      UDS_LogManager::PrintLog
                (pUVar14,1,Display,local_168.Ptr,0xea,L"SetHeightConditionType %s %s %s %f");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
      if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data.AllocatorInstance.Data);
      }
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// SetHeightMoveState @ 14ba715d0

void __thiscall UDS_EntityData::SetHeightMoveState(UDS_EntityData *this,EDS_HeightMoveState param_1)

{
  this->PrevHeightMoveState = this->HeightMoveState;
  this->HeightMoveState = param_1;
  return;
}

// SetHeightTargetDistance @ 14ba715f0

void __thiscall UDS_EntityData::SetHeightTargetDistance(UDS_EntityData *this,float param_1)

{
  this->HeightTargetDistance = param_1;
  return;
}

// SetMoveMode @ 14ba72dc0

void __thiscall UDS_EntityData::SetMoveMode(UDS_EntityData *this,EDS_MoveMode param_1)

{
  undefined1 *puVar1;
  EDS_MoveMode EVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  UObject *pUVar10;
  uint uVar11;
  longlong lVar12;
  FDestructionSentinel local_38;
  
  bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar6) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar10 + 4),
                       (void *)0x0);
    if (!bVar6) {
      FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar10 + 4));
    }
  }
  EVar2 = this->CurMoveMode;
  this->PrevMoveMode = EVar2;
  this->CurMoveMode = param_1;
  if (EVar2 != param_1) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnChangeMoveModeDelegate,(FWriteAccessScope *)&local_38);
    puVar1 = &(this->OnChangeMoveModeDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar11 = *(int *)&(this->OnChangeMoveModeDelegate).field_0x10 - 1;
    if (-1 < (int)uVar11) {
      lVar12 = (longlong)(int)uVar11 << 4;
      bVar6 = false;
      do {
        uVar9 = 0;
        if ((int)uVar11 < *(int *)&(this->OnChangeMoveModeDelegate).field_0x10) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar3 = *(longlong *)&(this->OnChangeMoveModeDelegate).field_0x8;
        if (((*(int *)(lVar3 + 8 + lVar12) == 0) ||
            (plVar4 = *(longlong **)(lVar3 + lVar12), plVar4 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar4 + 0x68))(), cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar12 = lVar12 + -0x10;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
    puVar1 = &(this->OnChangeMoveModeDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this->OnChangeMoveModeDelegate,false);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  return;
}

