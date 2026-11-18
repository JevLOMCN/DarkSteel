// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b5611d0

UClass * __cdecl UDS_PlayerSkillData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillData",
               &Z_Registration_Info_UClass_UDS_PlayerSkillData.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerSkillData>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillData.InnerSingleton;
}

// UDS_PlayerSkillData @ 14b5647e0

UDS_PlayerSkillData * __thiscall
UDS_PlayerSkillData::UDS_PlayerSkillData(UDS_PlayerSkillData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PlayerSkillData__6B_;
  this->PlayerUID = 0;
  this->SkillType = None;
  this->Level = 0;
  return this;
}

// UDS_PlayerSkillData @ 14b564820

UDS_PlayerSkillData * __thiscall
UDS_PlayerSkillData::UDS_PlayerSkillData(UDS_PlayerSkillData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PlayerSkillData__6B_;
  this->PlayerUID = 0;
  this->SkillType = None;
  this->Level = 0;
  return this;
}

// ~UDS_PlayerSkillData @ 14b5652a0

void __thiscall UDS_PlayerSkillData::~UDS_PlayerSkillData(UDS_PlayerSkillData *this)

{
  this->_padding_ = (longlong)&___7UDS_PlayerSkillData__6B_;
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b567aa0

UClass * __cdecl UDS_PlayerSkillData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerSkillData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerSkillData",
               &Z_Registration_Info_UClass_UDS_PlayerSkillData.InnerSingleton,
               StaticRegisterNativesUDS_PlayerSkillData,0x68,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerSkillData>,
               InternalVTableHelperCtorCaller<UDS_PlayerSkillData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerSkillData.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerSkillData @ 14b568140

void __cdecl UDS_PlayerSkillData::StaticRegisterNativesUDS_PlayerSkillData(void)

{
  return;
}

// GetAscendEndTime @ 14baa4940

FDateTime __thiscall UDS_PlayerSkillData::GetAscendEndTime(UDS_PlayerSkillData *this)

{
  bool bVar1;
  UObject *pUVar2;
  undefined8 *in_RDX;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  local_res8 = (FWeakObjectPtr)this;
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_res18);
  FWeakObjectPtr::IsValid(&local_res18);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar1) {
    *in_RDX = 0;
    return (FDateTime)(long64)in_RDX;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res8);
  *in_RDX = *(undefined8 *)&pUVar2[3].field_0x10;
  return (FDateTime)(long64)in_RDX;
}

// GetAscendStartTime @ 14baa49d0

FDateTime __thiscall UDS_PlayerSkillData::GetAscendStartTime(UDS_PlayerSkillData *this)

{
  bool bVar1;
  UObject *pUVar2;
  undefined8 *in_RDX;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  local_res8 = (FWeakObjectPtr)this;
  TDS_DataSetGetter<UDS_WaitCompleteDataSet>::Get((ulong64)&local_res18);
  FWeakObjectPtr::IsValid(&local_res18);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar1) {
    *in_RDX = 0;
    return (FDateTime)(long64)in_RDX;
  }
  pUVar2 = FWeakObjectPtr::Get(&local_res8);
  *in_RDX = *(undefined8 *)&pUVar2[3].field_0x8;
  return (FDateTime)(long64)in_RDX;
}

// GetDataByCharEntityID @ 14baa8e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> __cdecl
UDS_PlayerSkillData::GetDataByCharEntityID(ulong64 *param_1,EDS_PlayerSkillType *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_DataSetBase *this;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> this_00;
  UObject *pUVar4;
  UClass *pUVar5;
  undefined1 auStackY_1a8 [32];
  UObject *local_168;
  FWeakObjectPtr local_160;
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  TDS_DataSetGetter<UDS_PlayerSkillDataSet>::Get((ulong64)&local_160);
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr> *)&local_160,(void *)0x0
                    );
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_PlayerSkillData::GetDataByCharEntityID",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x5f,L"playerSkillDataSet is nullptr. (%llu)");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    *param_1 = 0;
    local_168 = (UObject *)0x0;
    goto LAB_14baa8f81;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_160);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_158);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar4 == (UObject *)0x0) {
LAB_14baa8f4a:
    pUVar4 = (UObject *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UDS_PlayerSkillData_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_14baa8f4a;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  *param_1 = 0;
  local_168 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
LAB_14baa8f81:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_168);
  return (TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetDataByPlayerEntityID @ 14baa9110

TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> __cdecl
UDS_PlayerSkillData::GetDataByPlayerEntityID(ulong64 param_1,EDS_PlayerSkillType param_2)

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
  
  TDS_DataSetGetter<UDS_PlayerSkillDataSet>::Get((ulong64)&local_28);
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillDataSet,FWeakObjectPtr> *)&local_28,(void *)0x0)
  ;
  if (bVar2) goto LAB_14baa913d;
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_28);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 == (UObject *)0x0) {
LAB_14baa91b4:
    pUVar3 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UDS_PlayerSkillData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_14baa91b4;
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
  bVar2 = TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> *)&local_res20,(void *)0x0)
  ;
  if (!bVar2) {
    *(FWeakObjectPtr *)param_1 = local_res20;
    return (TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
LAB_14baa913d:
  *(undefined8 *)param_1 = 0;
  local_20 = (UObject *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_20);
  return (TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetDataByPlayerUID @ 14baa9240

TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> __cdecl
UDS_PlayerSkillData::GetDataByPlayerUID(long64 param_1,EDS_PlayerSkillType param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> TVar4;
  undefined7 in_register_00000011;
  undefined8 local_res20;
  undefined8 local_18 [2];
  
  uVar3 = UDS_PlayerDataSet::GetPlayerEntityIDByPlayerUID(CONCAT71(in_register_00000011,param_2));
  if (uVar3 != 0) {
    GetDataByPlayerEntityID((ulong64)local_18,(EDS_PlayerSkillType)uVar3);
    *(undefined8 *)param_1 = local_18[0];
    return (TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<9007806876649259090>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerSkillData.cpp"
                     ,0x52,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    TVar4.WeakPtr = (FWeakObjectPtr)(*pcVar1)();
    return (TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>)TVar4.WeakPtr;
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetMainPlayerData @ 14baad4f0

TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> __cdecl
UDS_PlayerSkillData::GetMainPlayerData(EDS_PlayerSkillType param_1)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr> TVar3;
  undefined7 in_register_00000009;
  FWeakObjectPtr this;
  
  this._1_7_ = in_register_00000009;
  this.ObjectIndex._0_1_ = param_1;
  GetDataByPlayerEntityID((ulong64)this,(EDS_PlayerSkillType)UDS_PlayerData::MainPlayerEntityID);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this);
  if (!bVar2) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<9007806876649259079>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Player\\DS_PlayerSkillData.cpp"
                       ,0x47,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      TVar3.WeakPtr = (FWeakObjectPtr)(*pcVar1)();
      return (TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>)TVar3.WeakPtr;
    }
  }
  return (TWeakObjectPtr<UDS_PlayerSkillData,FWeakObjectPtr>)this;
}

// GetMaxLevel @ 14baad560

int __thiscall UDS_PlayerSkillData::GetMaxLevel(UDS_PlayerSkillData *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  FDS_PlayerSkillBaseTableRow *pFVar6;
  TArray<FDS_PlayerSkillLevelTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  ForAnyElementType FVar12;
  ForAnyElementType local_28;
  uint local_20;
  uint local_1c;
  TArray<FDS_PlayerSkillLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar6 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->SkillType,true);
  iVar4 = pFVar6->ID_LevelGroup;
  pTVar7 = FDS_PlayerSkillLevelTableRow::GetAll(&local_18);
  pFVar8 = (FScriptContainerElement *)0x0;
  uVar11 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  local_1c = 0;
  pFVar10 = (pTVar7->AllocatorInstance).Data;
  pFVar1 = pFVar10 + (longlong)pTVar7->ArrayNum * 8;
  FVar12.Data = pFVar8;
  uVar5 = uVar11;
  for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 8) {
    if (*(int *)(*(longlong *)pFVar10 + 0x20) == iVar4) {
      uVar5 = (uint)pFVar8;
      if (((FVar12.Data <= pFVar10) && (pFVar10 < FVar12.Data + (longlong)(int)local_1c * 8)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), FVar12.Data = local_28.Data, uVar5 = local_20, bVar3)) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
      if (uVar5 == local_1c) {
        uVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_28,(int *)&local_1c);
        FVar12.Data = local_28.Data;
      }
      local_20 = uVar5 + 1;
      *(longlong *)(FVar12.Data + (longlong)(int)uVar5 * 8) = *(longlong *)pFVar10;
      pFVar8 = (FScriptContainerElement *)(ulonglong)local_20;
      FVar12.Data = local_28.Data;
    }
    uVar5 = (uint)pFVar8;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
    FVar12.Data = local_28.Data;
    uVar5 = local_20;
  }
  if (uVar5 != 0) {
    uVar9 = uVar5 - 1;
    if ((int)uVar9 < (int)uVar5) {
      uVar11 = ~uVar9 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar12.Data = local_28.Data, bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    uVar11 = *(uint *)(*(longlong *)(FVar12.Data + (longlong)(int)uVar9 * 8) + 0x24);
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return uVar11;
}

// GetPlayerSkillBaseTable @ 14baaebb0

FDS_PlayerSkillBaseTableRow * __thiscall
UDS_PlayerSkillData::GetPlayerSkillBaseTable(UDS_PlayerSkillData *this)

{
  FDS_PlayerSkillBaseTableRow *pFVar1;
  
  pFVar1 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->SkillType,true);
  return pFVar1;
}

// GetPlayerSkillLevelTable @ 14baaf0f0

FDS_PlayerSkillLevelTableRow * __thiscall
UDS_PlayerSkillData::GetPlayerSkillLevelTable(UDS_PlayerSkillData *this)

{
  int iVar1;
  FDS_PlayerSkillBaseTableRow *pFVar2;
  FDS_PlayerSkillLevelTableRow *pFVar3;
  
  iVar1 = this->Level;
  pFVar2 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->SkillType,true);
  pFVar3 = FDS_PlayerSkillLevelTableRow::GetRef
                     ((longlong)(pFVar2->ID_LevelGroup * 1000 + iVar1),true);
  return pFVar3;
}

// IsLevelUpAble @ 14bab9be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_PlayerSkillData::IsLevelUpAble(UDS_PlayerSkillData *this)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong64 uVar7;
  FDS_PlayerSkillBaseTableRow *pFVar8;
  FDS_PlayerSkillLevelTableRow *this_00;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  int *piVar11;
  int *piVar12;
  void *pvVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_2d8 [32];
  EDS_InventoryType local_298 [8];
  FWeakObjectPtr local_290;
  FWeakObjectPtr local_288 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  uVar7 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
  UDS_PlayerData::GetData((ulong64)local_288,uVar7,false);
  bVar4 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_288,(void *)0x0);
  if (!bVar4) {
    pFVar8 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->SkillType,true);
    iVar14 = this->Level + 1;
    if (iVar14 <= pFVar8->MaxLevel) {
      pFVar8 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->SkillType,true);
      this_00 = FDS_PlayerSkillLevelTableRow::GetRef
                          ((longlong)(pFVar8->ID_LevelGroup * 1000 + iVar14),true);
      bVar4 = FDS_PlayerSkillLevelTableRow::IsValid(this_00);
      if (bVar4) {
        iVar14 = (this_00->ID_LevelUpItem).ArrayNum;
        if ((this_00->LevelUpItemCount).ArrayNum == iVar14) {
          uVar15 = 0;
          if (0 < iVar14) {
            lVar16 = 0;
            do {
              uVar6 = 0;
              if ((int)uVar15 < iVar14) {
                uVar6 = ~uVar15 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              uVar1 = *(undefined4 *)((this_00->ID_LevelUpItem).AllocatorInstance.Data + lVar16);
              uVar7 = UDS_DataBase::GetDataContainerKey((UDS_DataBase *)this);
              UDS_ItemData::GetData((ulong64)&local_290,uVar7,SUB41(uVar1,0));
              bVar4 = TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> *)&local_290,
                                 (void *)0x0);
              if (bVar4) {
                return false;
              }
              pUVar10 = FWeakObjectPtr::Get(&local_290);
              local_298[0] = PlayerNormal;
              piVar11 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                        ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                  (&pUVar10[10].field_0x18,1,local_298);
              piVar12 = TMapBase<enum_EDS_InventoryType,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InventoryType,int,0>_>
                        ::FindOrAddImpl<enum_EDS_InventoryType_const_&>
                                  (&pUVar10[8].field_0x18,(uint)local_298[0],local_298);
              iVar14 = *piVar11;
              iVar2 = *piVar12;
              uVar6 = 0;
              if ((int)uVar15 < (this_00->LevelUpItemCount).ArrayNum) {
                uVar6 = ~uVar15 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                uVar5 = (*pcVar3)();
                return (bool)uVar5;
              }
              if (iVar14 + iVar2 <
                  *(int *)((this_00->LevelUpItemCount).AllocatorInstance.Data + lVar16)) {
                return false;
              }
              iVar14 = (this_00->ID_LevelUpItem).ArrayNum;
              uVar15 = uVar15 + 1;
              lVar16 = lVar16 + 4;
            } while ((int)uVar15 < iVar14);
          }
          pUVar10 = FWeakObjectPtr::Get(local_288);
          return this_00->SkillLevelUpHaloPointCount <= *(int *)&pUVar10[10].field_0xc;
        }
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar9 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_PlayerSkillData::IsLevelUpAble",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_158.Ptr,0xbd,
                   L"Mismatch PlayerSkillLevelTable\'s item. (ID: %d)");
        pvVar13 = (void *)local_158._padding_;
      }
      else {
        pUVar9 = UDS_LogManager::GetInst();
        if (pUVar9 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar9 = UDS_LogManager::GetInst();
        local_278._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_278,"UDS_PlayerSkillData::IsLevelUpAble",0x22,Yes);
        UDS_LogManager::PrintLog
                  (pUVar9,1,Warning,local_278.Ptr,0xb3,L"playerSkillLevelTableRow is invalid.");
        pvVar13 = (void *)local_278._padding_;
      }
      if (pvVar13 != (void *)0x0) {
        FMemory::Free(pvVar13);
      }
    }
  }
  return false;
}

// IsMaxLevel @ 14baba0b0

bool __thiscall UDS_PlayerSkillData::IsMaxLevel(UDS_PlayerSkillData *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  FDS_PlayerSkillBaseTableRow *pFVar7;
  TArray<FDS_PlayerSkillLevelTableRow_const_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType local_28;
  undefined8 local_20;
  TArray<FDS_PlayerSkillLevelTableRow_const_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar7 = FDS_PlayerSkillBaseTableRow::GetRef((ulonglong)this->SkillType,true);
  iVar2 = pFVar7->ID_LevelGroup;
  pTVar8 = FDS_PlayerSkillLevelTableRow::GetAll(&local_18);
  FVar10.Data = (FScriptContainerElement *)0x0;
  uVar13 = 0;
  local_20 = 0;
  local_28.Data = (FScriptContainerElement *)0x0;
  pFVar12 = (pTVar8->AllocatorInstance).Data;
  pFVar1 = pFVar12 + (longlong)pTVar8->ArrayNum * 8;
  pFVar15 = FVar10.Data;
  uVar14 = uVar13;
  for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 8) {
    if (*(int *)(*(longlong *)pFVar12 + 0x20) == iVar2) {
      iVar6 = (int)pFVar15;
      if ((FVar10.Data <= pFVar12) &&
         (local_20._4_4_ = (int)((ulonglong)local_20 >> 0x20), lVar9 = (longlong)local_20._4_4_,
         pFVar12 < FVar10.Data + lVar9 * 8)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        FVar10.Data = local_28.Data;
        iVar6 = (uint)local_20;
      }
      if (iVar6 == local_20._4_4_) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_28,(int *)((longlong)&local_20 + 4));
        FVar10.Data = local_28.Data;
      }
      local_20 = CONCAT44(local_20._4_4_,iVar6 + 1U);
      *(longlong *)(FVar10.Data + (longlong)iVar6 * 8) = *(longlong *)pFVar12;
      pFVar15 = (FScriptContainerElement *)(ulonglong)(iVar6 + 1U);
      FVar10.Data = local_28.Data;
    }
    uVar14 = (uint)pFVar15;
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
    FVar10.Data = local_28.Data;
    uVar14 = (uint)local_20;
  }
  if (uVar14 == 0) {
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
  else {
    uVar11 = uVar14 - 1;
    if ((int)uVar11 < (int)uVar14) {
      uVar13 = ~uVar11 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar10.Data = local_28.Data, bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    uVar13 = *(uint *)(*(longlong *)(FVar10.Data + (longlong)(int)uVar11 * 8) + 0x24);
    if (FVar10.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar10.Data);
    }
  }
  return (int)uVar13 <= this->Level;
}

// MakePlayerSkillTable @ 14babc290

void __thiscall
UDS_PlayerSkillData::MakePlayerSkillTable(UDS_PlayerSkillData *this,SqlPlayerSkillTable *param_1)

{
  (param_1->_impl_).skill_type_ = (uint)this->SkillType;
  (param_1->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0] | 2;
  (param_1->_impl_).level_ = this->Level;
  (param_1->_impl_)._has_bits_.has_bits_[0] = (param_1->_impl_)._has_bits_.has_bits_[0] | 4;
  return;
}

// SetPlayerSkillTable @ 14bacdfc0

void __thiscall
UDS_PlayerSkillData::SetPlayerSkillTable(UDS_PlayerSkillData *this,SqlPlayerSkillTable *param_1)

{
  this->PlayerUID = (param_1->_impl_).player_uid_;
  this->SkillType = (EDS_PlayerSkillType)(param_1->_impl_).skill_type_;
  this->Level = (param_1->_impl_).level_;
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return;
}

