// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b548280

UClass * __cdecl UDS_NpcRelationData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcRelationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcRelationData",
               &Z_Registration_Info_UClass_UDS_NpcRelationData.InnerSingleton,
               StaticRegisterNativesUDS_NpcRelationData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcRelationData>,
               InternalVTableHelperCtorCaller<UDS_NpcRelationData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcRelationData.InnerSingleton;
}

// UDS_NpcRelationData @ 14b54aeb0

UDS_NpcRelationData * __thiscall
UDS_NpcRelationData::UDS_NpcRelationData(UDS_NpcRelationData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->RelationGrade = 1;
  this->_padding_ = (longlong)&___7UDS_NpcRelationData__6B_;
  *(undefined8 *)&this->DataPropertyDelegate_RelationPoint = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_RelationPoint).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_RelationPoint).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_RelationGrade = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_RelationGrade).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_RelationGrade).field_0x10 = 0;
  this->RelationPoint = 0;
  return this;
}

// UDS_NpcRelationData @ 14b54af10

UDS_NpcRelationData * __thiscall
UDS_NpcRelationData::UDS_NpcRelationData(UDS_NpcRelationData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->RelationGrade = 1;
  this->_padding_ = (longlong)&___7UDS_NpcRelationData__6B_;
  *(undefined8 *)&this->DataPropertyDelegate_RelationPoint = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_RelationPoint).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_RelationPoint).field_0x10 = 0;
  *(undefined8 *)&this->DataPropertyDelegate_RelationGrade = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_RelationGrade).field_0x8 = 0;
  *(undefined8 *)&(this->DataPropertyDelegate_RelationGrade).field_0x10 = 0;
  this->RelationPoint = 0;
  return this;
}

// ~UDS_NpcRelationData @ 14b54b8b0

void __thiscall UDS_NpcRelationData::~UDS_NpcRelationData(UDS_NpcRelationData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_NpcRelationData__6B_;
  pvVar1 = *(void **)&(this->DataPropertyDelegate_RelationGrade).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_RelationGrade);
  pvVar1 = *(void **)&(this->DataPropertyDelegate_RelationPoint).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DataPropertyDelegate_RelationPoint);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b54ceb0

UClass * __cdecl UDS_NpcRelationData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NpcRelationData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NpcRelationData",
               &Z_Registration_Info_UClass_UDS_NpcRelationData.InnerSingleton,
               StaticRegisterNativesUDS_NpcRelationData,0x90,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_NpcRelationData>,
               InternalVTableHelperCtorCaller<UDS_NpcRelationData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NpcRelationData.InnerSingleton;
}

// StaticRegisterNativesUDS_NpcRelationData @ 14b54d7d0

void __cdecl UDS_NpcRelationData::StaticRegisterNativesUDS_NpcRelationData(void)

{
  return;
}

// FindOrAddData @ 14ba40bd0

TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr> __cdecl
UDS_NpcRelationData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba49480

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr> __cdecl
UDS_NpcRelationData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  longlong *plVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  undefined1 auStack_f8 [32];
  FWeakObjectPtr local_d8;
  UObject *local_d0;
  FWeakObjectPtr local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_NpcRelationDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr> *)&local_c8,
                       (void *)0x0);
    if (bVar2) goto LAB_14ba4970f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba4951b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_NpcRelationData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba4951b;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_d8.ObjectIndex = 0;
    local_d8.ObjectSerialNumber = 0;
    local_d0 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
    bVar2 = TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_NpcRelationDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_NpcRelationDataSet,FWeakObjectPtr> *)&local_c8,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba495e5:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_NpcRelationData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba495e5;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_d8.ObjectIndex = 0;
      local_d8.ObjectSerialNumber = 0;
      local_d0 = pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_d0);
      bVar2 = TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr> *)&local_d8,(void *)0x0
                        );
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_NpcRelationData_NoRegister();
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_b8,pUVar6);
      local_b8._8_8_ = pUVar5;
      pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
      if (local_b8._64_8_ != 0) {
        plVar7 = (longlong *)(local_b8 + 0x50);
        if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
          plVar7 = (longlong *)local_b8._104_8_;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (pUVar5 != (UObject *)0x0) {
        pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
        local_d0 = pUVar5;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar5);
        }
        bVar2 = UDS_DataSetBase::AddData
                          (pUVar3,CONCAT71(in_register_00000081,param_3),
                           (TObjectPtr<UDS_DataBase>)&local_d0);
        if (bVar2) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          *(undefined8 *)param_1 = 0;
          local_d0 = pUVar5;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar5);
          }
          goto LAB_14ba49716;
        }
      }
    }
  }
LAB_14ba4970f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14ba49716:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_NpcRelationData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetGradeUpCondition @ 14ba4ba00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_Template __thiscall
UDS_NpcRelationData::GetGradeUpCondition(UDS_NpcRelationData *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EDS_Template EVar4;
  uint uVar5;
  FDS_NpcRelationBaseTableRow *this_00;
  UDS_LogManager *pUVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = GetNpcRelationBaseTableRow(this,(int)this->_padding_,param_1);
  bVar3 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
  if (bVar3) {
    iVar1 = this->RelationGrade;
    lVar9 = (longlong)(this_00->EvolveConditionType).ArrayNum;
    uVar7 = 0;
    if (0 < lVar9) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this_00->EvolveGrade).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          EVar4 = (*pcVar2)();
          return EVar4;
        }
        if ((uint)(byte)(this_00->EvolveGrade).AllocatorInstance.Data[lVar8] == iVar1 + 1U) {
          uVar5 = 0;
          if ((int)uVar7 < (this_00->EvolveConditionType).ArrayNum) {
            uVar5 = ~uVar7 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            EVar4 = (*pcVar2)();
            return EVar4;
          }
          return (EDS_Template)(this_00->EvolveConditionType).AllocatorInstance.Data[(int)uVar7];
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar9);
    }
  }
  else {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 != (UDS_LogManager *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NpcRelationData::GetGradeUpCondition",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_158.Ptr,0x8a,
                 L"npcRelationBaseTableRow is Invalid. npcTID : %d");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  return None;
}

// GetGradeUpQuestID @ 14ba4bbf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_NpcRelationData::GetGradeUpQuestID(UDS_NpcRelationData *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FDS_NpcRelationBaseTableRow *pFVar6;
  UDS_LogManager *pUVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar6 = GetNpcRelationBaseTableRow(this,(int)this->_padding_,param_1);
  bVar3 = FDS_NpcRelationBaseTableRow::IsValid(pFVar6);
  if (((bVar3) && (this->RelationGrade != (uint)pFVar6->MaxGrade)) &&
     (bVar3 = IsOverReqPoint(this,param_1), bVar3)) {
    pFVar6 = GetNpcRelationBaseTableRow(this,(int)this->_padding_,param_1);
    bVar3 = FDS_NpcRelationBaseTableRow::IsValid(pFVar6);
    if (bVar3) {
      iVar5 = this->RelationGrade;
      iVar1 = (pFVar6->EvolveConditionType).ArrayNum;
      uVar9 = 0;
      if (0 < iVar1) {
        lVar8 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar9 < (pFVar6->EvolveGrade).ArrayNum) {
            uVar4 = ~uVar9 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
          if ((uint)(byte)(pFVar6->EvolveGrade).AllocatorInstance.Data[lVar8] == iVar5 + 1U) {
            uVar4 = 0;
            if ((int)uVar9 < (pFVar6->EvolveConditionType).ArrayNum) {
              uVar4 = ~uVar9 >> 0x1f;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              iVar5 = (*pcVar2)();
              return iVar5;
            }
            if ((pFVar6->EvolveConditionType).AllocatorInstance.Data[lVar8] ==
                (FScriptContainerElement)0x1) {
              uVar4 = 0;
              if ((int)uVar9 < (pFVar6->EvolveConditionValue).ArrayNum) {
                uVar4 = ~uVar9 >> 0x1f;
              }
              if ((uVar4 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar3)) {
                pcVar2 = (code *)swi(3);
                iVar5 = (*pcVar2)();
                return iVar5;
              }
              return *(int *)((pFVar6->EvolveConditionValue).AllocatorInstance.Data +
                             (longlong)(int)uVar9 * 4);
            }
          }
          uVar9 = uVar9 + 1;
          lVar8 = lVar8 + 1;
        } while (lVar8 < iVar1);
      }
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 != (UDS_LogManager *)0x0) {
        pUVar7 = UDS_LogManager::GetInst();
        local_158._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_158,"UDS_NpcRelationData::GetGradeUpQuestID",0x26,Yes);
        UDS_LogManager::PrintLog
                  (pUVar7,1,Warning,local_158.Ptr,0x43,
                   L"npcRelationBaseTableRow is Invalid. npcTID : %d");
        if ((void *)local_158._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_158._padding_);
        }
      }
    }
  }
  return 0;
}

// GetLimitGradeWithoutQuest @ 14ba4c750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall UDS_NpcRelationData::GetLimitGradeWithoutQuest(UDS_NpcRelationData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  FDS_NpcRelationBaseTableRow *this_00;
  UDS_LogManager *pUVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStackY_198 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = GetNpcRelationBaseTableRow(this,(int)this->_padding_,param_1);
  bVar2 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
  if (bVar2) {
    uVar10 = this->RelationGrade;
    if (uVar10 != this_00->MaxGrade) {
      uVar8 = 0;
      lVar9 = (longlong)(this_00->EvolveConditionType).ArrayNum;
      if (0 < lVar9) {
        lVar6 = 0;
        do {
          uVar7 = ~uVar8 >> 0x1f;
          uVar4 = 0;
          if ((int)uVar8 < (this_00->EvolveGrade).ArrayNum) {
            uVar4 = uVar7;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
          if (this->RelationGrade <
              (int)(uint)(byte)(this_00->EvolveGrade).AllocatorInstance.Data[lVar6]) {
            uVar4 = 0;
            if ((int)uVar8 < (this_00->EvolveConditionType).ArrayNum) {
              uVar4 = uVar7;
            }
            if ((uVar4 == 0) &&
               (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar2)) {
              pcVar1 = (code *)swi(3);
              iVar3 = (*pcVar1)();
              return iVar3;
            }
            if ((this_00->EvolveConditionType).AllocatorInstance.Data[lVar6] !=
                (FScriptContainerElement)0x1) {
              uVar10 = 0;
              if ((int)uVar8 < (this_00->EvolveGrade).ArrayNum) {
                uVar10 = uVar7;
              }
              if ((uVar10 == 0) &&
                 (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar2)) {
                pcVar1 = (code *)swi(3);
                iVar3 = (*pcVar1)();
                return iVar3;
              }
              uVar10 = (uint)(byte)(this_00->EvolveGrade).AllocatorInstance.Data[lVar6];
            }
          }
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar9);
      }
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8243613640708587493>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_NpcRelationData.cpp"
                       ,0x1b,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_NpcRelationData::GetLimitGradeWithoutQuest",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_158.Ptr,0x1c,
                 L"npcRelationBaseTableRow is Invalid. npcTID : %d");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
    uVar10 = 0;
  }
  return uVar10;
}

// GetNpcRelationBaseTableRow @ 14ba4d880

FDS_NpcRelationBaseTableRow * __thiscall
UDS_NpcRelationData::GetNpcRelationBaseTableRow(UDS_NpcRelationData *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FDS_InteractionTableRow *this_00;
  FDS_NpcRelationBaseTableRow *pFVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  this_00 = FDS_InteractionTableRow::GetRef((longlong)param_2,true);
  bVar2 = FDS_InteractionTableRow::IsValid(this_00);
  if (!bVar2) {
    pFVar4 = FDS_NpcRelationBaseTableRow::GetRef(0,true);
    return pFVar4;
  }
  uVar5 = 0;
  iVar7 = 0;
  if (0 < (this_00->FunctionType).ArrayNum) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < (this_00->FunctionType).ArrayNum) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FDS_NpcRelationBaseTableRow *)(*pcVar1)();
        return pFVar4;
      }
      if ((this_00->FunctionType).AllocatorInstance.Data[lVar6] == (FScriptContainerElement)0xd) {
        uVar3 = 0;
        if ((int)uVar5 < (this_00->FunctionValue1).ArrayNum) {
          uVar3 = ~uVar5 >> 0x1f;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FDS_NpcRelationBaseTableRow *)(*pcVar1)();
          return pFVar4;
        }
        iVar7 = *(int *)((this_00->FunctionValue1).AllocatorInstance.Data + lVar6 * 4);
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 1;
    } while ((int)uVar5 < (this_00->FunctionType).ArrayNum);
  }
  pFVar4 = FDS_NpcRelationBaseTableRow::GetRef((longlong)iVar7,true);
  bVar2 = FDS_NpcRelationBaseTableRow::IsValid(pFVar4);
  if (bVar2) {
    return pFVar4;
  }
  pFVar4 = FDS_NpcRelationBaseTableRow::GetRef(0,true);
  return pFVar4;
}

// IsEnableGradeUp @ 14ba5af40

bool __thiscall UDS_NpcRelationData::IsEnableGradeUp(UDS_NpcRelationData *this,int param_1)

{
  bool bVar1;
  FDS_NpcRelationBaseTableRow *this_00;
  
  this_00 = GetNpcRelationBaseTableRow(this,(int)this->_padding_,param_1);
  bVar1 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
  if ((bVar1) && (this->RelationGrade != (uint)this_00->MaxGrade)) {
    bVar1 = IsOverReqPoint(this,param_1);
    return bVar1;
  }
  return false;
}

// IsMaxGrade @ 14ba5b950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NpcRelationData::IsMaxGrade(UDS_NpcRelationData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FDS_NpcRelationBaseTableRow *this_00;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = GetNpcRelationBaseTableRow(this,(int)this->_padding_,param_1);
  bVar2 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
  if (bVar2) {
    bVar2 = (int)(uint)this_00->MaxGrade <= this->RelationGrade;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8243613640708587359>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_NpcRelationData.cpp"
                       ,0xa1,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_NpcRelationData::IsMaxGrade",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0xa2,
                 L"npcRelationBaseTableRow is Invalid. npcTID : %d");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// IsOverReqPoint @ 14ba5bea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_NpcRelationData::IsOverReqPoint(UDS_NpcRelationData *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  FDS_NpcRelationBaseTableRow *this_00;
  UDS_LogManager *pUVar7;
  int iVar8;
  undefined8 uVar9;
  void *pvVar10;
  ForAnyElementType FVar11;
  FDS_NpcRelationGradeTableRow *this_01;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298 [8];
  TArray<FDS_NpcRelationGradeTableRow_const_*,TSizedDefaultAllocator<32>_> local_290;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  this_00 = GetNpcRelationBaseTableRow(this,(int)this->_padding_,param_1);
  bVar5 = FDS_NpcRelationBaseTableRow::IsValid(this_00);
  if (bVar5) {
    iVar2 = this_00->ID_NpcRelationGrade;
    iVar4 = this->RelationGrade;
    FDS_NpcRelationGradeTableRow::GetAll(&local_290);
    iVar8 = local_290.ArrayNum;
    pFVar1 = local_290.AllocatorInstance.Data + (longlong)iVar8 * 8;
    uVar9 = local_290._8_8_;
    FVar11.Data = local_290.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar9 != iVar8) {
        local_298[0] = 0;
        `TCheckedPointerIterator<FDS_NpcRelationGradeTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_298);
        uVar9 = local_290._8_8_;
      }
      if (FVar11.Data == pFVar1) {
        if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_290.AllocatorInstance.Data);
        }
        this_01 = &FDS_NpcRelationGradeTableRow::DefaultObject;
        goto LAB_14ba5c029;
      }
      this_01 = *(FDS_NpcRelationGradeTableRow **)FVar11.Data;
      if ((this_01->GroupID == iVar2) && (this_01->ID_Grade == (EDS_GradeType)iVar4)) break;
      FVar11.Data = FVar11.Data + 8;
    }
    if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.AllocatorInstance.Data);
    }
LAB_14ba5c029:
    bVar5 = FDS_NpcRelationGradeTableRow::IsValid(this_01);
    if (bVar5) {
      return this_01->ReqPoint <= this->RelationPoint;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8243613640708587402>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_NpcRelationData.cpp"
                       ,0x76,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_NpcRelationData::IsOverReqPoint",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_158.Ptr,0x77,L"npcRelationGradeTableRow is Invalid.");
    pvVar10 = (void *)local_158._padding_;
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8243613640708587410>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_NpcRelationData.cpp"
                       ,0x6e,"false");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_278._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_278,"UDS_NpcRelationData::IsOverReqPoint",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_278.Ptr,0x6f,
               L"npcRelationBaseTableRow is Invalid. npcTID : %d");
    pvVar10 = (void *)local_278._padding_;
  }
  if (pvVar10 != (void *)0x0) {
    FMemory::Free(pvVar10);
  }
  return false;
}

// SetRelationGrade @ 14ba73f80

void __thiscall UDS_NpcRelationData::SetRelationGrade(UDS_NpcRelationData *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->RelationGrade = param_1;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_RelationGrade,&this->RelationGrade);
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// SetRelationPoint @ 14ba73ff0

void __thiscall UDS_NpcRelationData::SetRelationPoint(UDS_NpcRelationData *this,int param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->RelationPoint = param_1;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_RelationPoint,&this->RelationPoint);
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

// UpdateData @ 14ba7cca0

void __thiscall
UDS_NpcRelationData::UpdateData(UDS_NpcRelationData *this,SqlNpcRelationTable *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  
  this->RelationPoint = (param_1->_impl_).point_;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_RelationPoint,&this->RelationPoint);
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  this->RelationGrade = (param_1->_impl_).grade_;
  FDS_DataPropertyDelegate_int32_DelegateWrapper
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->DataPropertyDelegate_RelationGrade,&this->RelationGrade);
  *(undefined1 *)&this->_padding_ = 1;
  bVar1 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,(void *)0x0)
  ;
  if (!bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar2[4].field_0x8 = 1;
    bVar1 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar2 + 4),
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar2 + 4));
      pUVar2[3].field_0x20 = 1;
    }
  }
  return;
}

