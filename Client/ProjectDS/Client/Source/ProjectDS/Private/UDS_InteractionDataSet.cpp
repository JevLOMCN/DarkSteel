// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b4c8030

UClass * __cdecl UDS_InteractionDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionDataSet",
               &Z_Registration_Info_UClass_UDS_InteractionDataSet.InnerSingleton,
               StaticRegisterNativesUDS_InteractionDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InteractionDataSet>,
               InternalVTableHelperCtorCaller<UDS_InteractionDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionDataSet.InnerSingleton;
}

// UDS_InteractionDataSet @ 14b4cb760

UDS_InteractionDataSet * __thiscall
UDS_InteractionDataSet::UDS_InteractionDataSet(UDS_InteractionDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_InteractionDataSet__6B_;
  return this;
}

// UDS_InteractionDataSet @ 14b4cb790

UDS_InteractionDataSet * __thiscall
UDS_InteractionDataSet::UDS_InteractionDataSet
          (UDS_InteractionDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_InteractionDataSet__6B_;
  return this;
}

// ~UDS_InteractionDataSet @ 14b4cc040

void __thiscall UDS_InteractionDataSet::~UDS_InteractionDataSet(UDS_InteractionDataSet *this)

{
  *(undefined ***)this = &___7UDS_InteractionDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4cd0e0

UClass * __cdecl UDS_InteractionDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionDataSet",
               &Z_Registration_Info_UClass_UDS_InteractionDataSet.InnerSingleton,
               StaticRegisterNativesUDS_InteractionDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InteractionDataSet>,
               InternalVTableHelperCtorCaller<UDS_InteractionDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionDataSet @ 14b4cdc10

void __cdecl UDS_InteractionDataSet::StaticRegisterNativesUDS_InteractionDataSet(void)

{
  return;
}

// AddInteractionData @ 14ba35670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InteractionDataSet::AddInteractionData(UDS_InteractionDataSet *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UDS_InteractionData *pUVar3;
  FDS_InteractionTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStackY_1d8 [32];
  UDS_InteractionData *local_198;
  FDS_InteractionFunctionData local_190;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pUVar3 = NewObject<UDS_InteractionData>((UObject *)this);
  pUVar3->InteractionID = param_1;
  pFVar4 = FDS_InteractionTableRow::Get((longlong)param_1,true);
  if (pFVar4 == (FDS_InteractionTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_168._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_168,"UDS_InteractionData::SetData",0x1c,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_168.Ptr,0x34,
                 L"Not Exist InteractionTableRow. InteractionID : %d");
      if ((void *)local_168._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_168._padding_);
      }
    }
  }
  else {
    iVar7 = 0;
    pUVar3->ReqPlayerSkillType = pFVar4->ConditionShowPlayerSkillType;
    pUVar3->ReqPlayerSkillLevel = pFVar4->ConditionShowPlayerSkillLevel;
    pUVar3->ReqPlayerSkillGrade = pFVar4->ConditionShowPlayerSkillGrade;
    pUVar3->InteractionRange = pFVar4->InteractionRange;
    pUVar3->CostItemID = pFVar4->ID_CostItem;
    pUVar3->CostItemCount = pFVar4->CostItemCount;
    pUVar3->BaseDialogueID = pFVar4->ID_BaseDialogue;
    pUVar3->BaseNpcCameraID = pFVar4->ID_BaseNpcCamera;
    pUVar3->BaseNpcFrameID = pFVar4->ID_BaseNpcFrame;
    if (0 < (pFVar4->FunctionType).ArrayNum) {
      do {
        local_190._0_4_ = local_190._0_4_ & 0xffffff00;
        local_190.FunctionValue1 = 0;
        local_190.FunctionValue2 = 0;
        local_190.NameID = 0;
        local_190.IconID = 0;
        local_190.CameraID = 0;
        local_190.NpcFrameID = 0;
        FDS_InteractionFunctionData::Init(&local_190,param_1,iVar7);
        iVar2 = (pUVar3->FunctionDataList).ArrayNum;
        if (iVar2 == (pUVar3->FunctionDataList).ArrayMax) {
          iVar2 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x828,&(pUVar3->FunctionDataList).AllocatorInstance,
                             &(pUVar3->FunctionDataList).ArrayMax);
        }
        lVar6 = (longlong)iVar2;
        (pUVar3->FunctionDataList).ArrayNum = iVar2 + 1;
        iVar7 = iVar7 + 1;
        pFVar1 = (pUVar3->FunctionDataList).AllocatorInstance.Data;
        *(ulonglong *)(pFVar1 + lVar6 * 0x28) = CONCAT44(local_190.FunctionValue1,local_190._0_4_);
        *(ulonglong *)(pFVar1 + lVar6 * 0x28 + 8) =
             CONCAT44(local_190._12_4_,local_190.FunctionValue2);
        *(long64 *)(pFVar1 + lVar6 * 0x28 + 0x10) = local_190.NameID;
        *(undefined8 *)(pFVar1 + lVar6 * 0x28 + 0x10 + 8) = local_190._24_8_;
        *(long64 *)(pFVar1 + lVar6 * 0x28 + 0x20) = local_190.NpcFrameID;
      } while (iVar7 < (pFVar4->FunctionType).ArrayNum);
    }
  }
  local_198 = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  UDS_DataSetBase::AddData
            ((UDS_DataSetBase *)this,(longlong)param_1,(TObjectPtr<UDS_DataBase>)&local_198);
  return;
}

// GetAllInteractionData @ 14ba43cd0

TArray<TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_InteractionDataSet::GetAllInteractionData
          (UDS_InteractionDataSet *this,
          TArray<TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UClass *pUVar8;
  UObject *pUVar9;
  uint uVar10;
  UObject *pUVar11;
  uint uVar12;
  UObject *pUVar13;
  uint *puVar14;
  UObject *pUVar15;
  FWeakObjectPtr local_res8;
  UObject *local_res10;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined1 *local_70;
  uint uStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined4 uStack_58;
  uint uStack_54;
  uint local_50;
  int iStack_4c;
  
  pUVar15 = (UObject *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  uVar12 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar10 = *(int *)&this->field_0x48 - *(int *)&this->field_0x74;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (0 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar10,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  uVar10 = *(uint *)&this->field_0x68;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x50;
  uStack_64 = 1;
  local_50 = 0;
  pUVar11 = pUVar15;
  if (uVar10 != 0) {
    pUVar11 = (UObject *)(ulonglong)uVar10;
    puVar14 = *(uint **)&this->field_0x60;
    if (*(uint **)&this->field_0x60 == (uint *)0x0) {
      puVar14 = (uint *)TStack_90.Array;
    }
    uVar6 = *puVar14;
    pUVar9 = pUVar15;
    pUVar13 = pUVar15;
    local_50 = 0;
    uVar12 = 0;
    while (uVar6 == 0) {
      iVar7 = (int)pUVar9;
      local_50 = (int)pUVar13 + 0x20;
      pUVar13 = (UObject *)(ulonglong)local_50;
      uVar12 = iVar7 + 1;
      pUVar9 = (UObject *)(ulonglong)uVar12;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14ba43dbd;
      uVar6 = puVar14[(longlong)iVar7 + 1];
    }
    uStack_64 = -uVar6 & uVar6;
    uVar2 = (ulonglong)uStack_64 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar6 = (local_50 - 1) + (int)lVar4;
    if ((int)uVar10 < (int)uVar6) {
      uVar6 = uVar10;
    }
    pUVar11 = (UObject *)(ulonglong)uVar6;
  }
LAB_14ba43dbd:
  TStack_90._padding_ = CONCAT44(uStack_64,uVar12);
  uStack_58 = 0xffffffff;
  uStack_54 = (uint)pUVar11;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iStack_4c = TStack_90.CurrentBitIndex;
  TStack_90._28_4_ = TStack_90.CurrentBitIndex;
  TStack_90.BaseBitIndex = local_50;
  local_70 = &this->field_0x40;
  uStack_68 = uVar12;
  local_60 = (undefined1 *)TStack_90.Array;
  TStack_90.CurrentBitIndex = uStack_54;
  if ((int)uStack_54 < *(int *)&this->field_0x68) {
    do {
      lVar3 = *(longlong *)&this->field_0x40;
      lVar4 = lVar3 + (longlong)(int)pUVar11 * 0x18;
      pUVar9 = pUVar15;
      if (*(longlong *)(lVar3 + 8 + (longlong)(int)pUVar11 * 0x18) != 0) {
        pUVar8 = Z_Construct_UClass_UDS_InteractionData_NoRegister();
        bVar5 = FObjectPtr::IsA((FObjectPtr *)(lVar4 + 8),pUVar8);
        if (bVar5) {
          pUVar9 = *(UObject **)(lVar4 + 8);
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res10 = pUVar9;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar9);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
      bVar5 = FWeakObjectPtr::IsValid(&local_res8);
      if (bVar5) {
        iVar7 = __return_storage_ptr__->ArrayNum;
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&__return_storage_ptr__->AllocatorInstance,piVar1);
        }
        __return_storage_ptr__->ArrayNum = iVar7 + 1;
        *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 8)
             = local_res8;
      }
      TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      pUVar11 = (UObject *)(ulonglong)(uint)TStack_90.CurrentBitIndex;
    } while (TStack_90.CurrentBitIndex < (TStack_90.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetInteractionDataByID @ 14ba4c190

TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr> __thiscall
UDS_InteractionDataSet::GetInteractionDataByID(UDS_InteractionDataSet *this,int param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  FObjectPtr_u_0 *this_00;
  UClass *pUVar4;
  int in_register_00000014;
  FWeakObjectPtr this_01;
  undefined1 *puVar5;
  UObject *pUVar6;
  int in_R8D;
  UObject *local_res8;
  
  this_01.ObjectSerialNumber = in_register_00000014;
  this_01.ObjectIndex = param_1;
  if (*(int *)&this->field_0x48 != *(int *)&this->field_0x74) {
    puVar5 = *(undefined1 **)&this->field_0x80;
    if (*(undefined1 **)&this->field_0x80 == (undefined1 *)0x0) {
      puVar5 = &this->field_0x78;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&this->field_0x88 - 1U & (in_R8D >> 0x1f) * 0x17 + in_R8D) *
                              4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->field_0x40;
      do {
        if (*(ulong64 *)(lVar1 + (longlong)iVar3 * 0x18) == (longlong)in_R8D) {
          this_00 = (FObjectPtr_u_0 *)
                    TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                    ::FindChecked((TMapBase<unsigned___int64,TObjectPtr<UDS_DataBase>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>_>
                                   *)&this->field_0x40,(longlong)in_R8D);
          pUVar6 = (UObject *)0x0;
          if (this_00->Handle != (UObject *)0x0) {
            pUVar4 = Z_Construct_UClass_UDS_InteractionData_NoRegister();
            bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar4);
            if (bVar2) {
              pUVar6 = this_00->Handle;
            }
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          *(undefined8 *)this_01 = 0;
          local_res8 = pUVar6;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar6);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)this_01,(FObjectPtr)&local_res8);
          return (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>)this_01;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(undefined8 *)this_01 = 0;
  local_res8 = (UObject *)0x0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_01,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>)this_01;
}

// GetInteractionDataByIndex @ 14ba4c2b0

TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr> __thiscall
UDS_InteractionDataSet::GetInteractionDataByIndex(UDS_InteractionDataSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr> TVar3;
  uint uVar4;
  int in_register_00000014;
  FWeakObjectPtr this_00;
  uint in_R8D;
  undefined8 local_res20;
  TArray<TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_18;
  
  this_00.ObjectSerialNumber = in_register_00000014;
  this_00.ObjectIndex = param_1;
  GetAllInteractionData(this,&local_18);
  if (-1 < (int)in_R8D) {
    if ((int)in_R8D < local_18.ArrayNum) {
      uVar4 = 0;
      if ((int)in_R8D < local_18.ArrayNum) {
        uVar4 = ~in_R8D >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          TVar3.WeakPtr = (FWeakObjectPtr)(*pcVar1)();
          return (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>)TVar3.WeakPtr;
        }
      }
      *(undefined8 *)this_00 =
           *(undefined8 *)(local_18.AllocatorInstance.Data + (longlong)(int)in_R8D * 8);
      goto LAB_14ba4c343;
    }
  }
  *(undefined8 *)this_00 = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res20);
LAB_14ba4c343:
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>)this_00;
}

// GetInteractionDataByType @ 14ba4c370

TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr> __thiscall
UDS_InteractionDataSet::GetInteractionDataByType
          (UDS_InteractionDataSet *this,EDS_InteractionFunctionType param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  undefined7 in_register_00000011;
  FWeakObjectPtr this_00;
  UObject *pUVar9;
  char *pcVar10;
  char in_R8B;
  int iVar11;
  UObject *pUVar12;
  uint *puVar13;
  UObject *pUVar14;
  bool bVar15;
  UObject *local_res8;
  FWeakObjectPtr local_res20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined1 *local_70;
  uint uStack_68;
  uint uStack_64;
  undefined1 *local_60;
  undefined4 uStack_58;
  uint uStack_54;
  uint local_50;
  int iStack_4c;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ObjectIndex._0_1_ = param_1;
  pUVar14 = (UObject *)0x0;
  uVar3 = *(uint *)&this->field_0x68;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x50;
  uStack_68 = 0;
  uStack_64 = 1;
  pUVar8 = pUVar14;
  local_50 = uStack_68;
  if (uVar3 != 0) {
    pUVar8 = (UObject *)(ulonglong)uVar3;
    puVar13 = *(uint **)&this->field_0x60;
    if (*(uint **)&this->field_0x60 == (uint *)0x0) {
      puVar13 = (uint *)TStack_90.Array;
    }
    uVar6 = *puVar13;
    pUVar9 = pUVar14;
    pUVar12 = pUVar14;
    local_50 = 0;
    uStack_68 = 0;
    while (uVar6 == 0) {
      iVar11 = (int)pUVar12;
      local_50 = (int)pUVar9 + 0x20;
      pUVar9 = (UObject *)(ulonglong)local_50;
      uStack_68 = iVar11 + 1;
      pUVar12 = (UObject *)(ulonglong)uStack_68;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_68)
      goto LAB_14ba4c41a;
      uVar6 = puVar13[(longlong)iVar11 + 1];
    }
    uStack_64 = -uVar6 & uVar6;
    uVar2 = (ulonglong)uStack_64 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar6 = (local_50 - 1) + (int)lVar5;
    if ((int)uVar3 < (int)uVar6) {
      uVar6 = uVar3;
    }
    pUVar8 = (UObject *)(ulonglong)uVar6;
  }
LAB_14ba4c41a:
  uStack_54 = (uint)pUVar8;
  bVar15 = SBORROW4(uStack_54,uVar3);
  iVar11 = uStack_54 - uVar3;
  TStack_90._padding_ = CONCAT44(uStack_64,uStack_68);
  uStack_58 = 0xffffffff;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iStack_4c = TStack_90.CurrentBitIndex;
  TStack_90._28_4_ = TStack_90.CurrentBitIndex;
  TStack_90.BaseBitIndex = local_50;
  local_70 = &this->field_0x40;
  local_60 = (undefined1 *)TStack_90.Array;
  TStack_90.CurrentBitIndex = uStack_54;
  do {
    if (bVar15 == iVar11 < 0) {
      *(undefined8 *)this_00 = 0;
      local_res8 = (UObject *)0x0;
      FWeakObjectPtr::operator=((FWeakObjectPtr *)this_00,(FObjectPtr)&local_res8);
      return (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>)this_00;
    }
    lVar4 = *(longlong *)&this->field_0x40;
    lVar5 = lVar4 + (longlong)(int)pUVar8 * 0x18;
    pUVar9 = pUVar14;
    if (*(longlong *)(lVar4 + 8 + (longlong)(int)pUVar8 * 0x18) != 0) {
      pUVar7 = Z_Construct_UClass_UDS_InteractionData_NoRegister();
      bVar15 = FObjectPtr::IsA((FObjectPtr *)(lVar5 + 8),pUVar7);
      if (bVar15) {
        pUVar9 = *(UObject **)(lVar5 + 8);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_res8 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
    bVar15 = FWeakObjectPtr::IsValid(&local_res20);
    if (bVar15) {
      pUVar8 = FWeakObjectPtr::Get(&local_res20);
      iVar11 = *(int *)(pUVar8 + 4);
      pcVar10 = *(char **)&pUVar8[3].field_0x20;
      pcVar1 = pcVar10 + (longlong)iVar11 * 0x28;
      while( true ) {
        if (*(int *)(pUVar8 + 4) != iVar11) {
          `TCheckedPointerIterator<FDS_InteractionFunctionData,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if (pcVar10 == pcVar1) break;
        if (*pcVar10 == in_R8B) {
          *(FWeakObjectPtr *)this_00 = local_res20;
          return (TWeakObjectPtr<UDS_InteractionData,FWeakObjectPtr>)this_00;
        }
        pcVar10 = pcVar10 + 0x28;
      }
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
    pUVar8 = (UObject *)(ulonglong)(uint)TStack_90.CurrentBitIndex;
    bVar15 = SBORROW4(TStack_90.CurrentBitIndex,(TStack_90.Array)->NumBits);
    iVar11 = TStack_90.CurrentBitIndex - (TStack_90.Array)->NumBits;
  } while( true );
}

// GetInteractionDataCount @ 14ba4c5a0

int __thiscall UDS_InteractionDataSet::GetInteractionDataCount(UDS_InteractionDataSet *this)

{
  return *(int *)&this->field_0x48 - *(int *)&this->field_0x74;
}

// HasFunctionType @ 14ba51840

bool __thiscall
UDS_InteractionDataSet::HasFunctionType
          (UDS_InteractionDataSet *this,EDS_InteractionFunctionType param_1)

{
  EDS_InteractionFunctionType *pEVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  UClass *pUVar7;
  UObject *pUVar8;
  UObject *pUVar9;
  EDS_InteractionFunctionType *pEVar10;
  int iVar11;
  UObject *pUVar12;
  uint *puVar13;
  UObject *pUVar14;
  bool bVar15;
  UObject *local_res8;
  FWeakObjectPtr local_res18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined1 *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  int iStack_3c;
  
  pUVar14 = (UObject *)0x0;
  uVar3 = *(uint *)&this->field_0x68;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x50;
  uStack_58 = 0;
  uStack_54 = 1;
  pUVar8 = pUVar14;
  local_40 = uStack_58;
  if (uVar3 != 0) {
    pUVar8 = (UObject *)(ulonglong)uVar3;
    puVar13 = *(uint **)&this->field_0x60;
    if (*(uint **)&this->field_0x60 == (uint *)0x0) {
      puVar13 = (uint *)TStack_80.Array;
    }
    uVar6 = *puVar13;
    pUVar9 = pUVar14;
    pUVar12 = pUVar14;
    local_40 = 0;
    uStack_58 = 0;
    while (uVar6 == 0) {
      iVar11 = (int)pUVar9;
      local_40 = (int)pUVar12 + 0x20;
      pUVar12 = (UObject *)(ulonglong)local_40;
      uStack_58 = iVar11 + 1;
      pUVar9 = (UObject *)(ulonglong)uStack_58;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_58)
      goto LAB_14ba518ea;
      uVar6 = puVar13[(longlong)iVar11 + 1];
    }
    uStack_54 = -uVar6 & uVar6;
    uVar2 = (ulonglong)uStack_54 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar6 = (local_40 - 1) + (int)lVar5;
    if ((int)uVar3 < (int)uVar6) {
      uVar6 = uVar3;
    }
    pUVar8 = (UObject *)(ulonglong)uVar6;
  }
LAB_14ba518ea:
  uStack_44 = (uint)pUVar8;
  bVar15 = SBORROW4(uStack_44,uVar3);
  iVar11 = uStack_44 - uVar3;
  TStack_80._padding_ = CONCAT44(uStack_54,uStack_58);
  uStack_48 = 0xffffffff;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iStack_3c = TStack_80.CurrentBitIndex;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = local_40;
  local_60 = &this->field_0x40;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80.CurrentBitIndex = uStack_44;
  do {
    if (bVar15 == iVar11 < 0) {
      return false;
    }
    lVar4 = *(longlong *)&this->field_0x40;
    lVar5 = lVar4 + (longlong)(int)pUVar8 * 0x18;
    pUVar9 = pUVar14;
    if (*(longlong *)(lVar4 + 8 + (longlong)(int)pUVar8 * 0x18) != 0) {
      pUVar7 = Z_Construct_UClass_UDS_InteractionData_NoRegister();
      bVar15 = FObjectPtr::IsA((FObjectPtr *)(lVar5 + 8),pUVar7);
      if (bVar15) {
        pUVar9 = *(UObject **)(lVar5 + 8);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_res8 = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar9);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
    bVar15 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar15) {
      pUVar8 = FWeakObjectPtr::Get(&local_res18);
      iVar11 = *(int *)(pUVar8 + 4);
      pEVar10 = *(EDS_InteractionFunctionType **)&pUVar8[3].field_0x20;
      pEVar1 = pEVar10 + (longlong)iVar11 * 0x28;
      while( true ) {
        if (*(int *)(pUVar8 + 4) != iVar11) {
          `TCheckedPointerIterator<FDS_InteractionFunctionData,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res8);
        }
        if (pEVar10 == pEVar1) break;
        if (*pEVar10 == param_1) {
          return true;
        }
        pEVar10 = pEVar10 + 0x28;
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    pUVar8 = (UObject *)(ulonglong)(uint)TStack_80.CurrentBitIndex;
    bVar15 = SBORROW4(TStack_80.CurrentBitIndex,(TStack_80.Array)->NumBits);
    iVar11 = TStack_80.CurrentBitIndex - (TStack_80.Array)->NumBits;
  } while( true );
}

// OnAdded @ 14ba5ee70

void __thiscall UDS_InteractionDataSet::OnAdded(UDS_InteractionDataSet *this)

{
  return;
}

// SetNpcInteraction @ 14ba72fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InteractionDataSet::SetNpcInteraction(UDS_InteractionDataSet *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_NpcBaseTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->field_0xa0,
                     (void *)0x0);
  if (bVar2) {
    iVar6 = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xa0);
    iVar6 = *(int *)&pUVar3[1].field_0xc;
  }
  pFVar4 = FDS_NpcBaseTableRow::Get((longlong)iVar6,true);
  if (pFVar4 == (FDS_NpcBaseTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->field_0xa0,
                         (void *)0x0);
      if (!bVar2) {
        FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xa0);
      }
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionDataSet::SetNpcInteraction",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x127,L"Not Exist NpcBaseTableRow. NpcBaseID : %d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pFVar7 = (pFVar4->ID_Interaction).AllocatorInstance.Data;
    iVar6 = (pFVar4->ID_Interaction).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar6 * 4;
    while( true ) {
      if ((pFVar4->ID_Interaction).ArrayNum != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      if (pFVar7 == pFVar1) break;
      AddInteractionData(this,*(int *)pFVar7);
      pFVar7 = pFVar7 + 4;
    }
  }
  return;
}

// SetStuffInteraction @ 14ba74e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InteractionDataSet::SetStuffInteraction(UDS_InteractionDataSet *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_StuffBaseTableRow *pFVar4;
  UDS_LogManager *pUVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->field_0xa0,
                     (void *)0x0);
  if (bVar2) {
    iVar6 = 0;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xa0);
    iVar6 = *(int *)&pUVar3[1].field_0xc;
  }
  pFVar4 = FDS_StuffBaseTableRow::Get((longlong)iVar6,true);
  if (pFVar4 == (FDS_StuffBaseTableRow *)0x0) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      bVar2 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)&this->field_0xa0,
                         (void *)0x0);
      if (!bVar2) {
        FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xa0);
      }
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionDataSet::SetStuffInteraction",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_148.Ptr,0x136,
                 L"Not Exist StuffBaseTableRow. StuffBaseID : %d");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pFVar7 = (pFVar4->ID_Interaction).AllocatorInstance.Data;
    iVar6 = (pFVar4->ID_Interaction).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar6 * 4;
    while( true ) {
      if ((pFVar4->ID_Interaction).ArrayNum != iVar6) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_158);
      }
      if (pFVar7 == pFVar1) break;
      AddInteractionData(this,*(int *)pFVar7);
      pFVar7 = pFVar7 + 4;
    }
  }
  return;
}

