// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b4ca1e0

UClass * __cdecl UDS_InteractionData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionData",
               &Z_Registration_Info_UClass_UDS_InteractionData.InnerSingleton,
               StaticRegisterNativesUDS_InteractionData,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InteractionData>,
               InternalVTableHelperCtorCaller<UDS_InteractionData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionData.InnerSingleton;
}

// UDS_InteractionData @ 14b4cb6f0

UDS_InteractionData * __thiscall
UDS_InteractionData::UDS_InteractionData(UDS_InteractionData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionData__6B_;
  this->InteractionID = 0;
  this->InteractionRange = 0.0;
  this->CastingTime = 0.0;
  this->CastingDescID = 0;
  this->InteractionAniType = None;
  this->ReqPlayerSkillType = None;
  this->ReqPlayerSkillLevel = 0;
  this->ReqPlayerSkillGrade = None;
  this->CostItemID = 0;
  this->CostItemCount = 0;
  this->BaseDialogueID = 0;
  this->BaseNpcCameraID = 0;
  this->BaseNpcFrameID = 0;
  (this->FunctionDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionDataList).ArrayNum = 0;
  (this->FunctionDataList).ArrayMax = 0;
  return this;
}

// ~UDS_InteractionData @ 14b4cc000

void __thiscall UDS_InteractionData::~UDS_InteractionData(UDS_InteractionData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_InteractionData__6B_;
  pFVar1 = (this->FunctionDataList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4cd020

UClass * __cdecl UDS_InteractionData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionData",
               &Z_Registration_Info_UClass_UDS_InteractionData.InnerSingleton,
               StaticRegisterNativesUDS_InteractionData,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InteractionData>,
               InternalVTableHelperCtorCaller<UDS_InteractionData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionData.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionData @ 14b4cdc00

void __cdecl UDS_InteractionData::StaticRegisterNativesUDS_InteractionData(void)

{
  return;
}

// UDS_InteractionData @ 14ba32d60

UDS_InteractionData * __thiscall
UDS_InteractionData::UDS_InteractionData(UDS_InteractionData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_InteractionData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->InteractionID = 0;
  this->InteractionRange = 0.0;
  this->CastingTime = 0.0;
  this->CastingDescID = 0;
  this->InteractionAniType = None;
  this->ReqPlayerSkillType = None;
  this->ReqPlayerSkillLevel = 0;
  this->ReqPlayerSkillGrade = None;
  this->CostItemID = 0;
  this->CostItemCount = 0;
  this->BaseDialogueID = 0;
  this->BaseNpcCameraID = 0;
  this->BaseNpcFrameID = 0;
  (this->FunctionDataList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FunctionDataList).ArrayNum = 0;
  (this->FunctionDataList).ArrayMax = 0;
  return this;
}

// CheckCost @ 14ba384c0

bool __thiscall UDS_InteractionData::CheckCost(UDS_InteractionData *this)

{
  int iVar1;
  
  iVar1 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,this->CostItemID);
  return this->CostItemCount <= iVar1;
}

// CheckDetection @ 14ba384f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_InteractionData::CheckDetection(UDS_InteractionData *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  FDS_StuffGatherTableRow *this_00;
  UDS_LogManager *pUVar5;
  UDS_PlayerData *pUVar6;
  FDS_NpcBaseTableRow *this_01;
  char cVar7;
  undefined1 auStackY_1c8 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_PlayerSkillType local_188 [8];
  FWeakObjectPtr local_180;
  ulong64 local_178;
  FDS_PlayerSkillTargetInfo local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  UDS_PlayerData::GetData((ulong64)&local_180,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_180);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      if (bVar1) {
        cVar7 = '\0';
      }
      else {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        cVar7 = pUVar3[1].field_0x8;
      }
      if (cVar7 == '\x05') {
        iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
        this_01 = FDS_NpcBaseTableRow::GetRef((longlong)iVar2,true);
        bVar1 = FDS_NpcBaseTableRow::IsValid(this_01);
        if (!bVar1) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"UDS_InteractionData::CheckDetection",0x23,Yes);
            pwVar9 = L"npcBaseTable is invalid. %lld";
            uVar8 = 0x94;
LAB_14ba3861a:
            UDS_LogManager::PrintLog(pUVar5,1,Error,local_138.Ptr,uVar8,pwVar9);
            if ((void *)local_138._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_138._padding_);
            }
          }
          goto LAB_14ba38647;
        }
        bVar1 = FDS_NpcBaseTableRow::HasPlayerSkill(this_01,0xc);
        if (bVar1) {
          pUVar6 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_180);
          local_178 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
          local_188[0] = Detection;
          bVar1 = UDS_PlayerData::GetPlayerSkillTargetInfo(pUVar6,local_188,&local_178,&local_170);
          return bVar1;
        }
      }
      else if (cVar7 == '\b') {
        uVar4 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        this_00 = FDS_StuffGatherTableRow::GetRefWithEntityID(uVar4);
        bVar1 = FDS_StuffGatherTableRow::IsValid(this_00);
        if (!bVar1) {
          pUVar5 = UDS_LogManager::GetInst();
          if (pUVar5 != (UDS_LogManager *)0x0) {
            pUVar5 = UDS_LogManager::GetInst();
            UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
            local_138._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_138,"UDS_InteractionData::CheckDetection",0x23,Yes);
            pwVar9 = L"stuffGatherTable is invalid. %lld";
            uVar8 = 0xa4;
            goto LAB_14ba3861a;
          }
          goto LAB_14ba38647;
        }
        bVar1 = FDS_StuffGatherTableRow::HasPlayerSkill(this_00,0xc);
        if (bVar1) {
          pUVar6 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_180);
          local_178 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
          local_188[0] = Detection;
          bVar1 = UDS_PlayerData::GetPlayerSkillTargetInfo(pUVar6,local_188,&local_178,&local_170);
          return bVar1;
        }
      }
    }
    bVar1 = true;
  }
  else {
LAB_14ba38647:
    bVar1 = false;
  }
  return bVar1;
}

// CheckPlayerSkill @ 14ba38c20

bool __thiscall UDS_InteractionData::CheckPlayerSkill(UDS_InteractionData *this)

{
  EDS_PlayerSkillType EVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  ulong64 uVar6;
  TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>
  *pTVar7;
  undefined1 *puVar8;
  FWeakObjectPtr local_res10;
  ulong64 local_res18 [2];
  
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    if (this->ReqPlayerSkillType == None) {
      return true;
    }
    pUVar5 = FWeakObjectPtr::Get(&local_res10);
    uVar6 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    EVar1 = this->ReqPlayerSkillType;
    if (*(int *)&pUVar5[0xd].field_0x18 != *(int *)&pUVar5[0xe].field_0x1c) {
      puVar8 = *(undefined1 **)(pUVar5 + 0xf);
      if (*(undefined1 **)(pUVar5 + 0xf) == (undefined1 *)0x0) {
        puVar8 = &pUVar5[0xe].field_0x20;
      }
      iVar4 = *(int *)(puVar8 + ((ulonglong)(*(int *)&pUVar5[0xf].field_0x8 - 1) & (ulonglong)EVar1)
                                * 4);
      if (iVar4 != -1) {
        lVar2 = *(longlong *)&pUVar5[0xd].field_0x10;
        do {
          if (*(EDS_PlayerSkillType *)((longlong)iVar4 * 0x60 + lVar2) == EVar1) {
            pTVar7 = TMapBase<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_PlayerSkillType,TMap<unsigned___int64,FDS_PlayerSkillTargetInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FDS_PlayerSkillTargetInfo,0>_>,0>_>
                     ::FindChecked(&pUVar5[0xd].field_0x10,EVar1);
            if (*(int *)&pTVar7->field_0x8 == *(int *)&pTVar7->field_0x34) {
              return false;
            }
            puVar8 = *(undefined1 **)&pTVar7->field_0x40;
            if (*(undefined1 **)&pTVar7->field_0x40 == (undefined1 *)0x0) {
              puVar8 = &pTVar7->field_0x38;
            }
            iVar4 = *(int *)(puVar8 + ((ulonglong)(*(int *)&pTVar7->field_0x48 - 1) &
                                      (uVar6 >> 0x20) * 0x17 + uVar6) * 4);
            if (iVar4 == -1) {
              return false;
            }
            do {
              if (*(ulong64 *)(*(longlong *)pTVar7 + (longlong)iVar4 * 0x48) == uVar6) {
                pUVar5 = FWeakObjectPtr::Get(&local_res10);
                local_res18[0] = *(ulong64 *)&pUVar5[8].field_0x10;
                iVar4 = DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity
                                  (local_res18,&this->ReqPlayerSkillType);
                return this->ReqPlayerSkillLevel <= iVar4;
              }
              iVar4 = *(int *)(*(longlong *)pTVar7 + 0x40 + (longlong)iVar4 * 0x48);
            } while (iVar4 != -1);
            return false;
          }
          iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + lVar2);
        } while (iVar4 != -1);
      }
    }
  }
  return false;
}

// Created @ 14ba3c130

void __thiscall UDS_InteractionData::Created(UDS_InteractionData *this)

{
  return;
}

// Deleted @ 14ba3cc50

void __thiscall UDS_InteractionData::Deleted(UDS_InteractionData *this)

{
  return;
}

// FindOrAddData @ 14ba40b70

TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr> __cdecl
UDS_InteractionData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba48c40

TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr> __cdecl
UDS_InteractionData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_InteractionData *pUVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  UDS_InteractionData *local_28;
  undefined1 local_20 [8];
  
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr> *)&local_30,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba48ccf:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_InteractionData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba48ccf;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_28 = (UDS_InteractionData *)pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
      bVar2 = TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr> *)&local_38,(void *)0x0
                        );
      if (!bVar2) {
LAB_14ba48d2a:
        *(FWeakObjectPtr *)param_1 = local_38;
        return (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
    }
  }
  else {
    TDS_DataSetGetter<UDS_InteractionDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionDataSet,FWeakObjectPtr> *)&local_30,
                       (void *)0x0);
    if (bVar2) goto LAB_14ba48e72;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba48d99:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_InteractionData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba48d99;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_28 = (UDS_InteractionData *)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
    bVar2 = TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr> *)&local_38,(void *)0x0);
    if (!bVar2) goto LAB_14ba48d2a;
    pUVar5 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_InteractionData>(pUVar5);
    if (pUVar7 != (UDS_InteractionData *)0x0) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      local_28 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      bVar2 = UDS_DataSetBase::AddData
                        (pUVar3,CONCAT71(in_register_00000081,param_3),
                         (TObjectPtr<UDS_DataBase>)&local_28);
      if (bVar2) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        *(undefined8 *)param_1 = 0;
        local_28 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        goto LAB_14ba48e79;
      }
    }
  }
LAB_14ba48e72:
  *(undefined8 *)param_1 = 0;
  local_28 = (UDS_InteractionData *)0x0;
LAB_14ba48e79:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
  return (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetFunctionDataByIndex @ 14ba4b710

FDS_InteractionFunctionData * __thiscall
UDS_InteractionData::GetFunctionDataByIndex
          (UDS_InteractionData *this,FDS_InteractionFunctionData *__return_storage_ptr__,int param_1
          )

{
  long64 lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long64 lVar6;
  undefined8 uVar7;
  bool bVar8;
  FDS_InteractionFunctionData *pFVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar11 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (this->FunctionDataList).ArrayNum)) {
    uVar10 = 0;
    if (param_1 < (this->FunctionDataList).ArrayNum) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FDS_InteractionFunctionData *)(*pcVar3)();
        return pFVar9;
      }
    }
    pFVar2 = (this->FunctionDataList).AllocatorInstance.Data;
    uVar4 = *(undefined8 *)(pFVar2 + lVar11 * 0x28);
    uVar5 = *(undefined8 *)(pFVar2 + lVar11 * 0x28 + 8);
    lVar6 = *(long64 *)(pFVar2 + lVar11 * 0x28 + 0x10);
    uVar7 = *(undefined8 *)(pFVar2 + lVar11 * 0x28 + 0x10 + 8);
    __return_storage_ptr__->InteractionFunctionType = (char)uVar4;
    *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)((ulonglong)uVar4 >> 8);
    __return_storage_ptr__->FunctionValue1 = (int)((ulonglong)uVar4 >> 0x20);
    *(undefined8 *)&__return_storage_ptr__->FunctionValue2 = uVar5;
    lVar1 = *(long64 *)(pFVar2 + lVar11 * 0x28 + 0x20);
    __return_storage_ptr__->NameID = lVar6;
    __return_storage_ptr__->IconID = (int)uVar7;
    __return_storage_ptr__->CameraID = (int)((ulonglong)uVar7 >> 0x20);
    __return_storage_ptr__->NpcFrameID = lVar1;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->FunctionValue1 = 0;
  __return_storage_ptr__->FunctionValue2 = 0;
  __return_storage_ptr__->NameID = 0;
  __return_storage_ptr__->IconID = 0;
  __return_storage_ptr__->CameraID = 0;
  __return_storage_ptr__->NpcFrameID = 0;
  __return_storage_ptr__->InteractionFunctionType = None;
  return __return_storage_ptr__;
}

// GetFunctionDataByType @ 14ba4b7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FDS_InteractionFunctionData * __thiscall
UDS_InteractionData::GetFunctionDataByType
          (UDS_InteractionData *this,FDS_InteractionFunctionData *__return_storage_ptr__,
          EDS_InteractionFunctionType param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  FDS_InteractionTableRow *pFVar7;
  UDS_LogManager *pUVar8;
  FDS_InteractionFunctionData *pFVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar7 = FDS_InteractionTableRow::Get((longlong)this->InteractionID,true);
  uVar12 = 0;
  if (pFVar7 == (FDS_InteractionTableRow *)0x0) {
    pUVar8 = UDS_LogManager::GetInst();
    if (pUVar8 != (UDS_LogManager *)0x0) {
      pUVar8 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionData::GetFunctionDataByType",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar8,1,Warning,local_158.Ptr,0xff,
                 L"Not Exist InteractionTableRow. InteractionID : %d");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    uVar13 = uVar12;
    if (0 < (this->FunctionDataList).ArrayNum) {
      do {
        uVar11 = (uint)uVar12;
        uVar6 = 0;
        if ((int)uVar11 < (this->FunctionDataList).ArrayNum) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar9 = (FDS_InteractionFunctionData *)(*pcVar2)();
          return pFVar9;
        }
        if ((this->FunctionDataList).AllocatorInstance.Data[uVar13] ==
            (FScriptContainerElement)param_1) {
          uVar6 = 0;
          if ((int)uVar11 < (this->FunctionDataList).ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FDS_InteractionFunctionData *)(*pcVar2)();
            return pFVar9;
          }
          lVar10 = (longlong)(int)uVar11;
          pFVar1 = (this->FunctionDataList).AllocatorInstance.Data;
          uVar3 = *(undefined8 *)(pFVar1 + lVar10 * 0x28);
          uVar4 = *(undefined8 *)(pFVar1 + lVar10 * 0x28 + 8);
          __return_storage_ptr__->InteractionFunctionType = (char)uVar3;
          *(int3 *)&__return_storage_ptr__->field_0x1 = (int3)((ulonglong)uVar3 >> 8);
          __return_storage_ptr__->FunctionValue1 = (int)((ulonglong)uVar3 >> 0x20);
          *(undefined8 *)&__return_storage_ptr__->FunctionValue2 = uVar4;
          uVar3 = *(undefined8 *)(pFVar1 + lVar10 * 0x28 + 0x10 + 8);
          __return_storage_ptr__->NameID = *(long64 *)(pFVar1 + lVar10 * 0x28 + 0x10);
          __return_storage_ptr__->IconID = (int)uVar3;
          __return_storage_ptr__->CameraID = (int)((ulonglong)uVar3 >> 0x20);
          __return_storage_ptr__->NpcFrameID = *(long64 *)(pFVar1 + lVar10 * 0x28 + 0x20);
          return __return_storage_ptr__;
        }
        uVar12 = (ulonglong)(uVar11 + 1);
        uVar13 = uVar13 + 0x28;
      } while ((int)(uVar11 + 1) < (this->FunctionDataList).ArrayNum);
    }
  }
  __return_storage_ptr__->InteractionFunctionType = None;
  __return_storage_ptr__->FunctionValue1 = 0;
  __return_storage_ptr__->FunctionValue2 = 0;
  __return_storage_ptr__->NameID = 0;
  __return_storage_ptr__->IconID = 0;
  __return_storage_ptr__->CameraID = 0;
  __return_storage_ptr__->NpcFrameID = 0;
  return __return_storage_ptr__;
}

// HasFunctionType @ 14ba517c0

bool __thiscall
UDS_InteractionData::HasFunctionType(UDS_InteractionData *this,EDS_InteractionFunctionType param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->FunctionDataList).ArrayNum;
  pFVar3 = (this->FunctionDataList).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x28;
  while( true ) {
    if ((this->FunctionDataList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FDS_InteractionFunctionData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*pFVar3 == (FScriptContainerElement)param_1) {
      return true;
    }
    pFVar3 = pFVar3 + 0x28;
  }
  return false;
}

// HasPlayerSkill @ 14ba51a60

bool __thiscall UDS_InteractionData::HasPlayerSkill(UDS_InteractionData *this)

{
  bool bVar1;
  UDS_PlayerData *this_00;
  FWeakObjectPtr local_res10;
  ulong64 local_res18;
  FDS_PlayerSkillTargetInfo local_48;
  
  UDS_PlayerData::GetData((ulong64)&local_res10,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if ((bVar1) && (this->ReqPlayerSkillType != None)) {
    this_00 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res10);
    local_res18 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
    bVar1 = UDS_PlayerData::GetPlayerSkillTargetInfo
                      (this_00,&this->ReqPlayerSkillType,&local_res18,&local_48);
    return bVar1;
  }
  return false;
}

// IsDetected @ 14ba5ada0

bool __thiscall UDS_InteractionData::IsDetected(UDS_InteractionData *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  ulong64 uVar4;
  FDS_StuffGatherTableRow *this_00;
  UDS_PlayerData *pUVar5;
  FDS_NpcBaseTableRow *this_01;
  char cVar6;
  EDS_PlayerSkillType local_res10 [8];
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  FDS_PlayerSkillTargetInfo local_48;
  
  UDS_PlayerData::GetData((ulong64)&local_res18,UDS_PlayerData::MainPlayerEntityID,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar3 + 4),
                         (void *)0x0);
      if (bVar1) {
        cVar6 = '\0';
      }
      else {
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar3 + 4));
        cVar6 = pUVar3[1].field_0x8;
      }
      if (cVar6 == '\x05') {
        iVar2 = UDS_DataBase::GetEntityTableID((UDS_DataBase *)this);
        this_01 = FDS_NpcBaseTableRow::GetRef((longlong)iVar2,true);
        bVar1 = FDS_NpcBaseTableRow::IsValid(this_01);
        if (bVar1) {
          bVar1 = FDS_NpcBaseTableRow::HasPlayerSkill(this_01,0xc);
          if (bVar1) {
            pUVar5 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res18);
            local_res20 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
            local_res10[0] = Detection;
            bVar1 = UDS_PlayerData::GetPlayerSkillTargetInfo
                              (pUVar5,local_res10,&local_res20,&local_48);
            return bVar1;
          }
        }
      }
      else if (cVar6 == '\b') {
        uVar4 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
        this_00 = FDS_StuffGatherTableRow::GetRefWithEntityID(uVar4);
        bVar1 = FDS_StuffGatherTableRow::IsValid(this_00);
        if (bVar1) {
          bVar1 = FDS_StuffGatherTableRow::HasPlayerSkill(this_00,0xc);
          if (bVar1) {
            pUVar5 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_res18);
            local_res20 = UDS_DataBase::GetEntityID((UDS_DataBase *)this);
            local_res10[0] = Detection;
            bVar1 = UDS_PlayerData::GetPlayerSkillTargetInfo
                              (pUVar5,local_res10,&local_res20,&local_48);
            return bVar1;
          }
        }
      }
    }
  }
  return false;
}

// IsInteractionAvailable @ 14ba5b720

bool __thiscall UDS_InteractionData::IsInteractionAvailable(UDS_InteractionData *this)

{
  bool bVar1;
  int iVar2;
  UDS_CharBuffData *this_00;
  EDS_SpecialBuffType local_res10 [2];
  FWeakObjectPtr local_res18 [2];
  
  bVar1 = CheckPlayerSkill(this);
  if (bVar1) {
    iVar2 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,this->CostItemID);
    if (this->CostItemCount <= iVar2) {
      UDS_DataBase::GetEntityID((UDS_DataBase *)this);
      UDS_CharBuffData::GetData((ulong64)local_res18);
      bVar1 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)local_res18,(void *)0x0)
      ;
      if (!bVar1) {
        this_00 = (UDS_CharBuffData *)FWeakObjectPtr::Get(local_res18);
        local_res10[0] = StopFunction;
        bVar1 = UDS_CharBuffData::HasSpecialBuffInfo(this_00,local_res10);
        return !bVar1;
      }
    }
  }
  return false;
}

// SetData @ 14ba6d980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InteractionData::SetData(UDS_InteractionData *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDS_InteractionTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStackY_1c8 [32];
  FDS_InteractionFunctionData local_188;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  this->InteractionID = param_1;
  pFVar3 = FDS_InteractionTableRow::Get((longlong)param_1,true);
  if (pFVar3 == (FDS_InteractionTableRow *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionData::SetData",0x1c,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_158.Ptr,0x34,
                 L"Not Exist InteractionTableRow. InteractionID : %d");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    iVar6 = 0;
    this->ReqPlayerSkillType = pFVar3->ConditionShowPlayerSkillType;
    this->ReqPlayerSkillLevel = pFVar3->ConditionShowPlayerSkillLevel;
    this->ReqPlayerSkillGrade = pFVar3->ConditionShowPlayerSkillGrade;
    this->InteractionRange = pFVar3->InteractionRange;
    this->CostItemID = pFVar3->ID_CostItem;
    this->CostItemCount = pFVar3->CostItemCount;
    this->BaseDialogueID = pFVar3->ID_BaseDialogue;
    this->BaseNpcCameraID = pFVar3->ID_BaseNpcCamera;
    this->BaseNpcFrameID = pFVar3->ID_BaseNpcFrame;
    if (0 < (pFVar3->FunctionType).ArrayNum) {
      do {
        local_188._0_4_ = local_188._0_4_ & 0xffffff00;
        local_188.FunctionValue1 = 0;
        local_188.FunctionValue2 = 0;
        local_188.NameID = 0;
        local_188.IconID = 0;
        local_188.CameraID = 0;
        local_188.NpcFrameID = 0;
        FDS_InteractionFunctionData::Init(&local_188,param_1,iVar6);
        iVar2 = (this->FunctionDataList).ArrayNum;
        if (iVar2 == (this->FunctionDataList).ArrayMax) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&(this->FunctionDataList).AllocatorInstance,
                             &(this->FunctionDataList).ArrayMax);
        }
        lVar5 = (longlong)iVar2;
        (this->FunctionDataList).ArrayNum = iVar2 + 1;
        iVar6 = iVar6 + 1;
        pFVar1 = (this->FunctionDataList).AllocatorInstance.Data;
        *(ulonglong *)(pFVar1 + lVar5 * 0x28) = CONCAT44(local_188.FunctionValue1,local_188._0_4_);
        *(ulonglong *)(pFVar1 + lVar5 * 0x28 + 8) =
             CONCAT44(local_188._12_4_,local_188.FunctionValue2);
        *(long64 *)(pFVar1 + lVar5 * 0x28 + 0x10) = local_188.NameID;
        *(undefined8 *)(pFVar1 + lVar5 * 0x28 + 0x10 + 8) = local_188._24_8_;
        *(long64 *)(pFVar1 + lVar5 * 0x28 + 0x20) = local_188.NpcFrameID;
      } while (iVar6 < (pFVar3->FunctionType).ArrayNum);
    }
  }
  return;
}

