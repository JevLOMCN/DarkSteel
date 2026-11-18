// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b55eb80

UClass * __cdecl UDS_PlayerDataSet::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerDataSet",
               &Z_Registration_Info_UClass_UDS_PlayerDataSet.InnerSingleton,
               StaticRegisterNativesUDS_PlayerDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerDataSet>,
               InternalVTableHelperCtorCaller<UDS_PlayerDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerDataSet.InnerSingleton;
}

// UDS_PlayerDataSet @ 14b564000

UDS_PlayerDataSet * __thiscall
UDS_PlayerDataSet::UDS_PlayerDataSet(UDS_PlayerDataSet *this,FVTableHelper *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PlayerDataSet__6B_;
  return this;
}

// UDS_PlayerDataSet @ 14b564030

UDS_PlayerDataSet * __thiscall
UDS_PlayerDataSet::UDS_PlayerDataSet(UDS_PlayerDataSet *this,FObjectInitializer *param_1)

{
  UDS_DataSetBase::UDS_DataSetBase((UDS_DataSetBase *)this,param_1);
  *(undefined ***)this = &___7UDS_PlayerDataSet__6B_;
  return this;
}

// ~UDS_PlayerDataSet @ 14b565010

void __thiscall UDS_PlayerDataSet::~UDS_PlayerDataSet(UDS_PlayerDataSet *this)

{
  *(undefined ***)this = &___7UDS_PlayerDataSet__6B_;
  UDS_DataSetBase::~UDS_DataSetBase((UDS_DataSetBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5670f0

UClass * __cdecl UDS_PlayerDataSet::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerDataSet.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerDataSet",
               &Z_Registration_Info_UClass_UDS_PlayerDataSet.InnerSingleton,
               StaticRegisterNativesUDS_PlayerDataSet,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_PlayerDataSet>,
               InternalVTableHelperCtorCaller<UDS_PlayerDataSet>,local_res8,
               UDS_DataSetBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerDataSet.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerDataSet @ 14b568040

void __cdecl UDS_PlayerDataSet::StaticRegisterNativesUDS_PlayerDataSet(void)

{
  return;
}

// GetPlayerEntityIDByPlayerUID @ 14ba4dfe0

ulong64 __cdecl UDS_PlayerDataSet::GetPlayerEntityIDByPlayerUID(long64 param_1)

{
  int iVar1;
  ulong64 *puVar2;
  longlong lVar3;
  
  if (PlayerUIDEntityIDMatchMap._8_4_ != PlayerUIDEntityIDMatchMap._52_4_) {
    lVar3 = 0x154cf7318;
    if (PlayerUIDEntityIDMatchMap._64_8_ != 0) {
      lVar3 = PlayerUIDEntityIDMatchMap._64_8_;
    }
    for (iVar1 = *(int *)(lVar3 + (ulonglong)
                                  (PlayerUIDEntityIDMatchMap._72_4_ - 1 &
                                  (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
        iVar1 != -1;
        iVar1 = *(int *)(PlayerUIDEntityIDMatchMap._0_8_ + 0x10 + (longlong)iVar1 * 0x18)) {
      if (*(longlong *)(PlayerUIDEntityIDMatchMap._0_8_ + (longlong)iVar1 * 0x18) == param_1) {
        puVar2 = TMapBase<__int64,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>_>
                 ::FindChecked((TMapBase<__int64,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,unsigned___int64,0>_>
                                *)&PlayerUIDEntityIDMatchMap,param_1);
        return *puVar2;
      }
    }
  }
  return 0;
}

// OnAdded @ 14ba5ef20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_PlayerDataSet::OnAdded(UDS_PlayerDataSet *this)

{
  UObject *pUVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_178 [32];
  UDS_PlayerData *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = GetTransientPackageAsObject();
  local_148[0] = NewObject<UDS_PlayerData>(pUVar1);
  if (local_148[0] == (UDS_PlayerData *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_PlayerDataSet::OnAdded",0x1a,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x52d,L"Failed to create PlayerData");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_148[0]);
    }
    UDS_DataSetBase::AddData((UDS_DataSetBase *)this,0,(TObjectPtr<UDS_DataBase>)local_148);
  }
  return;
}

// Update @ 14ba7b670

void __thiscall UDS_PlayerDataSet::Update(UDS_PlayerDataSet *this,float *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  ulonglong uVar5;
  UDS_PlayerData *this_00;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
              *)&this->field_0x40);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar5 = local_78._24_8_ >> 0x20;
  uVar6 = local_78._28_4_;
  local_18 = (TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
              *)&this->field_0x40;
  if ((int)uVar6 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      lVar1 = *local_48 + (longlong)(int)uVar5 * 0x18;
      if (*(longlong *)(*local_48 + 8 + (longlong)(int)uVar6 * 0x18) == 0) {
LAB_14ba7b71d:
        this_00 = (UDS_PlayerData *)0x0;
      }
      else {
        pUVar4 = Z_Construct_UClass_UDS_PlayerData_NoRegister();
        bVar2 = FObjectPtr::IsA((FObjectPtr *)(lVar1 + 8),pUVar4);
        if (!bVar2) goto LAB_14ba7b71d;
        this_00 = *(UDS_PlayerData **)(lVar1 + 8);
      }
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_00 != (UDS_PlayerData *)0x0) goto LAB_14ba7b73c;
      }
      else if (this_00 != (UDS_PlayerData *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_00);
LAB_14ba7b73c:
        UDS_PlayerData::UpdatePlayerSkillTargetInfoMap(this_00);
        UDS_PlayerData::UpdateBreachDetailInfoMap(this_00);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar5 = (ulonglong)uStack_2c;
      uVar6 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar5 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<unsigned___int64,TObjectPtr<UDS_DataBase>_>,TDefaultMapHashableKeyFuncs<unsigned___int64,TObjectPtr<UDS_DataBase>,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return;
}

