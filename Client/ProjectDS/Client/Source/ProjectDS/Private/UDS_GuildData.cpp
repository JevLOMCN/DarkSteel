// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b4a5000

UClass * __cdecl UDS_GuildData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildData",
               &Z_Registration_Info_UClass_UDS_GuildData.InnerSingleton,
               StaticRegisterNativesUDS_GuildData,0x170,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_GuildData>,InternalVTableHelperCtorCaller<UDS_GuildData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildData.InnerSingleton;
}

// UDS_GuildData @ 14b4a7230

UDS_GuildData * __thiscall UDS_GuildData::UDS_GuildData(UDS_GuildData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->GuildJoinType = None;
  this->GuildAutoKickType = None;
  this->_padding_ = (longlong)&___7UDS_GuildData__6B_;
  (this->GuildName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildName).Data.ArrayNum = 0;
  (this->GuildName).Data.ArrayMax = 0;
  (this->GuildMasterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildMasterName).Data.ArrayNum = 0;
  (this->GuildMasterName).Data.ArrayMax = 0;
  (this->GuildIntroduction).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildIntroduction).Data.ArrayNum = 0;
  (this->GuildIntroduction).Data.ArrayMax = 0;
  (this->GuildNotice).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildNotice).Data.ArrayNum = 0;
  (this->GuildNotice).Data.ArrayMax = 0;
  this->GuildLevel = 0;
  this->GuildExp = 0;
  this->GuildMembersCount = 0;
  this->GuildJoinLimitLevel = 0;
  (this->GuildMarkInfo).GuildMarkTableID = 0;
  (this->GuildMarkInfo).GuildMarkColorTableID = 0;
  (this->GuildMarkInfo).GuildMarkBgTableID = 0;
  (this->GuildMarkInfo).GuildMarkBgColorTableID = 0;
  *(undefined8 *)&this->MemberDataMap = 0;
  *(undefined8 *)&(this->MemberDataMap).field_0x8 = 0;
  *(undefined8 *)&(this->MemberDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->MemberDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->MemberDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemberDataMap).field_0x34 = 0;
  *(undefined4 *)&(this->MemberDataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MemberDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->MemberDataMap).field_0x48 = 0;
  *(undefined8 *)&this->MemberPendingMap = 0;
  *(undefined8 *)&(this->MemberPendingMap).field_0x8 = 0;
  *(undefined8 *)&(this->MemberPendingMap).field_0x20 = 0;
  *(undefined4 *)&(this->MemberPendingMap).field_0x28 = 0;
  *(undefined4 *)&(this->MemberPendingMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemberPendingMap).field_0x34 = 0;
  *(undefined4 *)&(this->MemberPendingMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->MemberPendingMap).field_0x40 = 0;
  *(undefined4 *)&(this->MemberPendingMap).field_0x48 = 0;
  return this;
}

// ~UDS_GuildData @ 14b4a7910

void __thiscall UDS_GuildData::~UDS_GuildData(UDS_GuildData *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_GuildData__6B_;
  *(undefined4 *)&(this->MemberPendingMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MemberPendingMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MemberPendingMap);
  *(undefined4 *)&(this->MemberDataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MemberDataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MemberDataMap);
  pFVar2 = (this->GuildNotice).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GuildIntroduction).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GuildMasterName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->GuildName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4a8ef0

UClass * __cdecl UDS_GuildData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_GuildData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_GuildData",
               &Z_Registration_Info_UClass_UDS_GuildData.InnerSingleton,
               StaticRegisterNativesUDS_GuildData,0x170,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_GuildData>,InternalVTableHelperCtorCaller<UDS_GuildData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_GuildData.InnerSingleton;
}

// StaticRegisterNativesUDS_GuildData @ 14b4a95d0

void __cdecl UDS_GuildData::StaticRegisterNativesUDS_GuildData(void)

{
  return;
}

// UDS_GuildData @ 14ba91130

UDS_GuildData * __thiscall
UDS_GuildData::UDS_GuildData(UDS_GuildData *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *this_00;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *this_01;
  
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->GuildJoinType = None;
  this->GuildAutoKickType = None;
  this->GuildLevel = 0;
  this->GuildExp = 0;
  this_00 = &this->MemberDataMap;
  this->GuildMembersCount = 0;
  this->GuildJoinLimitLevel = 0;
  this_01 = &this->MemberPendingMap;
  this->_padding_ = (longlong)&___7UDS_GuildData__6B_;
  puVar1 = &(this->MemberDataMap).field_0xc;
  (this->GuildName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puVar2 = &(this->MemberPendingMap).field_0xc;
  (this->GuildName).Data.ArrayNum = 0;
  (this->GuildName).Data.ArrayMax = 0;
  (this->GuildMasterName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildMasterName).Data.ArrayNum = 0;
  (this->GuildMasterName).Data.ArrayMax = 0;
  (this->GuildIntroduction).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildIntroduction).Data.ArrayNum = 0;
  (this->GuildIntroduction).Data.ArrayMax = 0;
  (this->GuildNotice).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GuildNotice).Data.ArrayNum = 0;
  (this->GuildNotice).Data.ArrayMax = 0;
  (this->GuildMarkInfo).GuildMarkTableID = 0;
  (this->GuildMarkInfo).GuildMarkColorTableID = 0;
  (this->GuildMarkInfo).GuildMarkBgTableID = 0;
  (this->GuildMarkInfo).GuildMarkBgColorTableID = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined4 *)&(this->MemberDataMap).field_0x8 = 0;
  *(undefined4 *)puVar1 = 0;
  *(undefined8 *)&(this->MemberDataMap).field_0x20 = 0;
  *(undefined4 *)&(this->MemberDataMap).field_0x28 = 0;
  *(undefined4 *)&(this->MemberDataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemberDataMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MemberDataMap).field_0x34 = 0;
  *(undefined8 *)&(this->MemberDataMap).field_0x40 = 0;
  *(undefined4 *)&(this->MemberDataMap).field_0x48 = 0;
  *(undefined8 *)&this_01->field_0x0 = 0;
  *(undefined4 *)&(this->MemberPendingMap).field_0x8 = 0;
  *(undefined4 *)puVar2 = 0;
  *(undefined8 *)&(this->MemberPendingMap).field_0x20 = 0;
  *(undefined4 *)&(this->MemberPendingMap).field_0x28 = 0;
  *(undefined4 *)&(this->MemberPendingMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->MemberPendingMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MemberPendingMap).field_0x34 = 0;
  *(undefined8 *)&(this->MemberPendingMap).field_0x40 = 0;
  *(undefined4 *)&(this->MemberPendingMap).field_0x48 = 0;
  if (*(int *)&(this->MemberDataMap).field_0x8 != *(int *)&(this->MemberDataMap).field_0x34) {
    TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
                      *)this_00);
    *(undefined4 *)&(this->MemberDataMap).field_0x8 = 0;
    if (*(int *)puVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->MemberDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->MemberDataMap).field_0x34 = 0;
    *(undefined4 *)&(this->MemberDataMap).field_0x28 = 0;
  }
  if (*(int *)&(this->MemberPendingMap).field_0x8 != *(int *)&(this->MemberPendingMap).field_0x34) {
    TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
                      *)this_01);
    *(undefined4 *)&(this->MemberPendingMap).field_0x8 = 0;
    if (*(int *)puVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->MemberPendingMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->MemberPendingMap).field_0x34 = 0;
    *(undefined4 *)&(this->MemberPendingMap).field_0x28 = 0;
  }
  return this;
}

// FindOrAddData @ 14baa0ff0

TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> __cdecl
UDS_GuildData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetAllMemberData @ 14baa4360

TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_GuildData::GetAllMemberData
          (UDS_GuildData *this,
          TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  UObject *pUVar4;
  code *pcVar5;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *pTVar6;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  FWeakObjectPtr local_res18;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *local_res20;
  UObject *local_b8;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  puVar1 = &(this->MemberDataMap).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_res20 = &this->MemberDataMap;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar9 = *(int *)&(this->MemberDataMap).field_0x28;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = iStack_a8;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->MemberDataMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    local_90 = 0;
    iStack_a8 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14baa441d;
      uVar13 = puVar15[lVar11 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_94 = local_90 + -1 + local_res10;
    if (iVar9 < iStack_94) {
      iStack_94 = iVar9;
    }
  }
LAB_14baa441d:
  iStack_88 = *(int *)&(this->MemberDataMap).field_0x8 - *(int *)&(this->MemberDataMap).field_0x34;
  uVar13 = *(uint *)&(this->MemberDataMap).field_0x28;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  uVar16 = uVar13 & 0xffffffe0;
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = local_res20;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = local_res20;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               *)(*pcVar5)();
    return pTVar10;
  }
  pTVar6 = local_res20;
  uVar3 = *(uint *)&(this->MemberDataMap).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(this->MemberDataMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14baa4530;
      uVar13 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14baa4530:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar13) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6))
    break;
    pUVar4 = *(UObject **)(*(longlong *)pTVar7 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar4 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
      }
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_b8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_b8);
    bVar8 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar8) {
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           local_res18;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return __return_storage_ptr__;
}

// GetAllMemberPendingData @ 14baa4650

TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_GuildData::GetAllMemberPendingData
          (UDS_GuildData *this,
          TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  UObject *pUVar4;
  code *pcVar5;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *pTVar6;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  FWeakObjectPtr local_res18;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *local_res20;
  UObject *local_b8;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  puVar1 = &(this->MemberPendingMap).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_res20 = &this->MemberPendingMap;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar9 = *(int *)&(this->MemberPendingMap).field_0x28;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = iStack_a8;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(this->MemberPendingMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    local_90 = 0;
    iStack_a8 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14baa470d;
      uVar13 = puVar15[lVar11 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res10 = (int)lVar11;
    iStack_94 = local_90 + -1 + local_res10;
    if (iVar9 < iStack_94) {
      iStack_94 = iVar9;
    }
  }
LAB_14baa470d:
  iStack_88 = *(int *)&(this->MemberPendingMap).field_0x8 -
              *(int *)&(this->MemberPendingMap).field_0x34;
  uVar13 = *(uint *)&(this->MemberPendingMap).field_0x28;
  TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uStack_98 = 0xffffffff;
  uVar16 = uVar13 & 0xffffffe0;
  TStack_78.CurrentBitIndex = iStack_94;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_78._28_4_ = iStack_94;
  TStack_78.BaseBitIndex = local_90;
  uStack_58 = CONCAT44(uStack_84,iStack_88);
  local_b0 = local_res20;
  local_a0 = puVar1;
  iStack_8c = iStack_94;
  local_80 = local_res20;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>
               *)(*pcVar5)();
    return pTVar10;
  }
  pTVar6 = local_res20;
  uVar3 = *(uint *)&(this->MemberPendingMap).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(this->MemberPendingMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14baa4820;
      uVar13 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14baa4820:
  while( true ) {
    pTVar7 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar13) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar6))
    break;
    pUVar4 = *(UObject **)(*(longlong *)pTVar7 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar4 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar4);
        }
      }
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_b8 = pUVar4;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_b8);
    bVar8 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar8) {
      iVar9 = __return_storage_ptr__->ArrayNum;
      if (iVar9 == __return_storage_ptr__->ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar9 + 1;
      *(FWeakObjectPtr *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 8) =
           local_res18;
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  }
  return __return_storage_ptr__;
}

// GetData @ 14baa6690

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> __cdecl
UDS_GuildData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

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
    TDS_DataSetGetter<UDS_GuildDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (bVar2) goto LAB_14baa691f;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14baa672b:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_GuildData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14baa672b;
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
    bVar2 = TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
    if (!bVar2) {
      *(FWeakObjectPtr *)param_1 = local_d8;
      return (TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  else {
    TDS_DataSetGetter<UDS_GuildDataSet>::Get((ulong64)&local_c8);
    bVar2 = TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_GuildDataSet,FWeakObjectPtr> *)&local_c8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_c8);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_c0);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14baa67f5:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_GuildData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14baa67f5;
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
      bVar2 = TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr> *)&local_d8,(void *)0x0);
      if (!bVar2) {
        *(FWeakObjectPtr *)param_1 = local_d8;
        return (TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
      pUVar5 = GetTransientPackageAsObject();
      FObjectInitializer::AssertIfInConstructor
                (pUVar5,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
      pUVar6 = Z_Construct_UClass_UDS_GuildData_NoRegister();
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
          goto LAB_14baa6926;
        }
      }
    }
  }
LAB_14baa691f:
  *(undefined8 *)param_1 = 0;
  local_d0 = (UObject *)0x0;
LAB_14baa6926:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_d0);
  return (TWeakObjectPtr<UDS_GuildData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetGuildJoinableState @ 14baaaf40

EDS_GuildJoinState __thiscall UDS_GuildData::GetGuildJoinableState(UDS_GuildData *this)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  FDS_GuildBaseTableRow *this_00;
  
  if (this->GuildJoinType != Private) {
    iVar1 = *(int *)&(this->MemberDataMap).field_0x8;
    iVar2 = *(int *)&(this->MemberDataMap).field_0x34;
    this_00 = FDS_GuildBaseTableRow::GetRef((longlong)this->GuildLevel,true);
    bVar3 = FDS_GuildBaseTableRow::IsValid(this_00);
    if (bVar3) {
      iVar4 = this_00->MaxMemberNumber;
    }
    else {
      iVar4 = 0;
    }
    if (iVar1 - iVar2 < iVar4) {
      return this->GuildJoinType == Free;
    }
  }
  return UnableJoin;
}

// GetGuildMaxMembersCount @ 14baaafc0

int __thiscall UDS_GuildData::GetGuildMaxMembersCount(UDS_GuildData *this)

{
  bool bVar1;
  FDS_GuildBaseTableRow *this_00;
  
  this_00 = FDS_GuildBaseTableRow::GetRef((longlong)this->GuildLevel,true);
  bVar1 = FDS_GuildBaseTableRow::IsValid(this_00);
  if (!bVar1) {
    return 0;
  }
  return this_00->MaxMemberNumber;
}

// GetGuildMembersCount @ 14baab000

int __thiscall UDS_GuildData::GetGuildMembersCount(UDS_GuildData *this)

{
  return *(int *)&(this->MemberDataMap).field_0x8 - *(int *)&(this->MemberDataMap).field_0x34;
}

// GetGuildNextLevelExp @ 14baab020

int __thiscall UDS_GuildData::GetGuildNextLevelExp(UDS_GuildData *this)

{
  bool bVar1;
  FDS_GuildBaseTableRow *this_00;
  
  this_00 = FDS_GuildBaseTableRow::GetRef((longlong)this->GuildLevel,true);
  bVar1 = FDS_GuildBaseTableRow::IsValid(this_00);
  if (!bVar1) {
    return 0;
  }
  return this_00->Exp;
}

// GetMemberData @ 14baad720

TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr> __thiscall
UDS_GuildData::GetMemberData(UDS_GuildData *this,long64 param_1,bool param_2)

{
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *this_00;
  int iVar1;
  UObject *pUVar2;
  TObjectPtr<UDS_GuildMemberData> *pTVar3;
  int7 in_register_00000081;
  undefined1 *puVar4;
  char in_R9B;
  TObjectPtr<UDS_GuildMemberData>_u_0 local_res8;
  longlong local_res18 [2];
  TObjectPtr<UDS_GuildMemberData>_u_0 local_28;
  longlong *local_20;
  TObjectPtr<UDS_GuildMemberData>_u_0 *local_18;
  
  local_res18[0] = CONCAT71(in_register_00000081,param_2);
  this_00 = &this->MemberDataMap;
  if (*(int *)&(this->MemberDataMap).field_0x8 != *(int *)&(this->MemberDataMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MemberDataMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MemberDataMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (((longlong)in_register_00000081 >> 0x18) * 0x17 + local_res18[0] &
                              (ulonglong)(*(int *)&(this->MemberDataMap).field_0x48 - 1)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar1 * 0x18) ==
            local_res18[0]) {
          pTVar3 = TMapBase<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
                   ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
                                  *)this_00,local_res18[0]);
          local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar3->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14baad82f;
          if (local_res8.DebugPtr != (UDS_GuildMemberData *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
          }
          goto LAB_14baad820;
        }
        iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  if (in_R9B == '\x01') {
    pUVar2 = GetTransientPackageAsObject();
    local_28.DebugPtr = NewObject<UDS_GuildMemberData>(pUVar2);
    if (local_28.DebugPtr != (UDS_GuildMemberData *)0x0) {
      local_20 = local_res18;
      local_18 = &local_28;
      TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<__int64_&,UDS_GuildMemberData_*_&>_>
                ((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<__int64_&,UDS_GuildMemberData_*_&> *)&local_res8.ObjectPtr,
                 (bool *)&local_20);
      local_res8 = local_28;
LAB_14baad820:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UDS_GuildMemberData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
LAB_14baad82f:
      *(undefined8 *)param_1 = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UDS_GuildMemberData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      goto LAB_14baad85a;
    }
  }
  *(undefined8 *)param_1 = 0;
  local_res8.DebugPtr = (UDS_GuildMemberData *)0x0;
LAB_14baad85a:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetMemberPendingData @ 14baad930

TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr> __thiscall
UDS_GuildData::GetMemberPendingData(UDS_GuildData *this,long64 param_1,bool param_2)

{
  TMap<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
  *this_00;
  int iVar1;
  UObject *pUVar2;
  TObjectPtr<UDS_GuildMemberData> *pTVar3;
  int7 in_register_00000081;
  undefined1 *puVar4;
  char in_R9B;
  TObjectPtr<UDS_GuildMemberData>_u_0 local_res8;
  longlong local_res18 [2];
  TObjectPtr<UDS_GuildMemberData>_u_0 local_28;
  longlong *local_20;
  TObjectPtr<UDS_GuildMemberData>_u_0 *local_18;
  
  local_res18[0] = CONCAT71(in_register_00000081,param_2);
  this_00 = &this->MemberPendingMap;
  if (*(int *)&(this->MemberPendingMap).field_0x8 != *(int *)&(this->MemberPendingMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->MemberPendingMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->MemberPendingMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + (((longlong)in_register_00000081 >> 0x18) * 0x17 + local_res18[0] &
                              (ulonglong)(*(int *)&(this->MemberPendingMap).field_0x48 - 1)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar1 * 0x18) ==
            local_res18[0]) {
          pTVar3 = TMapBase<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
                   ::FindChecked((TMapBase<__int64,TObjectPtr<UDS_GuildMemberData>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>_>
                                  *)this_00,local_res18[0]);
          local_res8.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar3->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_14baada3f;
          if (local_res8.DebugPtr != (UDS_GuildMemberData *)0x0) {
            UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
          }
          goto LAB_14baada30;
        }
        iVar1 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  if (in_R9B == '\x01') {
    pUVar2 = GetTransientPackageAsObject();
    local_28.DebugPtr = NewObject<UDS_GuildMemberData>(pUVar2);
    if (local_28.DebugPtr != (UDS_GuildMemberData *)0x0) {
      local_20 = local_res18;
      local_18 = &local_28;
      TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<__int64_&,UDS_GuildMemberData_*_&>_>
                ((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
                  *)this_00,
                 (TPairInitializer<__int64_&,UDS_GuildMemberData_*_&> *)&local_res8.ObjectPtr,
                 (bool *)&local_20);
      local_res8 = local_28;
LAB_14baada30:
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UDS_GuildMemberData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
LAB_14baada3f:
      *(undefined8 *)param_1 = 0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_res8.DebugPtr != (UDS_GuildMemberData *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      goto LAB_14baada6a;
    }
  }
  *(undefined8 *)param_1 = 0;
  local_res8.DebugPtr = (UDS_GuildMemberData *)0x0;
LAB_14baada6a:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res8);
  return (TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// HasGuildMember @ 14bab25d0

bool __thiscall UDS_GuildData::HasGuildMember(UDS_GuildData *this,long64 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->MemberDataMap).field_0x8 != *(int *)&(this->MemberDataMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->MemberDataMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->MemberDataMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)
                              (*(int *)&(this->MemberDataMap).field_0x48 - 1U &
                              (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*(longlong *)&this->MemberDataMap + (longlong)iVar1 * 0x18) == param_1)
        goto LAB_14bab264c;
        iVar1 = *(int *)(*(longlong *)&this->MemberDataMap + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14bab264c:
  return iVar1 != -1;
}

// RemoveAllMemberData @ 14bac7090

void __thiscall UDS_GuildData::RemoveAllMemberData(UDS_GuildData *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  UObject *pUVar6;
  int iVar7;
  undefined1 *puVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  FWeakObjectPtr local_res10;
  longlong local_res18 [2];
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  GetAllMemberData(this,&local_28);
  iVar7 = local_28.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_28.AllocatorInstance.Data + (longlong)iVar7 * 8);
  FVar9.Data = local_28.AllocatorInstance.Data;
LAB_14bac70c0:
  do {
    if (local_28.ArrayNum != iVar7) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if ((FWeakObjectPtr *)FVar9.Data == pFVar1) {
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return;
    }
    local_res10 = *(FWeakObjectPtr *)FVar9.Data;
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)&(this->MemberDataMap).field_0x8;
    lVar3 = *(longlong *)&pUVar6[1].field_0x8;
    uVar10 = (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3;
    if (iVar2 != *(int *)&(this->MemberDataMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->MemberDataMap).field_0x40;
      puVar8 = &(this->MemberDataMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar8 = puVar4;
      }
      iVar5 = *(int *)(puVar8 + (ulonglong)(*(int *)&(this->MemberDataMap).field_0x48 - 1U & uVar10)
                                * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&this->MemberDataMap + (longlong)iVar5 * 0x18) == lVar3) {
            local_res18[0] = lVar3;
            if (iVar2 != *(int *)&(this->MemberDataMap).field_0x34) {
              TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
              ::RemoveImpl<__int64>
                        ((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
                          *)&this->MemberDataMap,uVar10,local_res18);
            }
            goto LAB_14bac7186;
          }
          iVar5 = *(int *)(*(longlong *)&this->MemberDataMap + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
        FVar9.Data = FVar9.Data + 8;
        goto LAB_14bac70c0;
      }
    }
LAB_14bac7186:
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// RemoveAllMemberPendingData @ 14bac71c0

void __thiscall UDS_GuildData::RemoveAllMemberPendingData(UDS_GuildData *this)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  UObject *pUVar6;
  int iVar7;
  undefined1 *puVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  FWeakObjectPtr local_res10;
  longlong local_res18 [2];
  TArray<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_28;
  
  GetAllMemberPendingData(this,&local_28);
  iVar7 = local_28.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)(local_28.AllocatorInstance.Data + (longlong)iVar7 * 8);
  FVar9.Data = local_28.AllocatorInstance.Data;
LAB_14bac71f0:
  do {
    if (local_28.ArrayNum != iVar7) {
      `TCheckedPointerIterator<TWeakObjectPtr<UDS_GuildMemberData,FWeakObjectPtr>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(&local_res10);
    }
    if ((FWeakObjectPtr *)FVar9.Data == pFVar1) {
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return;
    }
    local_res10 = *(FWeakObjectPtr *)FVar9.Data;
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    iVar2 = *(int *)&(this->MemberPendingMap).field_0x8;
    lVar3 = *(longlong *)&pUVar6[1].field_0x8;
    uVar10 = (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3;
    if (iVar2 != *(int *)&(this->MemberPendingMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->MemberPendingMap).field_0x40;
      puVar8 = &(this->MemberPendingMap).field_0x38;
      if (puVar4 != (undefined1 *)0x0) {
        puVar8 = puVar4;
      }
      iVar5 = *(int *)(puVar8 + (ulonglong)
                                (*(int *)&(this->MemberPendingMap).field_0x48 - 1U & uVar10) * 4);
      if (iVar5 != -1) {
        do {
          if (*(longlong *)(*(longlong *)&this->MemberPendingMap + (longlong)iVar5 * 0x18) == lVar3)
          {
            local_res18[0] = lVar3;
            if (iVar2 != *(int *)&(this->MemberPendingMap).field_0x34) {
              TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
              ::RemoveImpl<__int64>
                        ((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
                          *)&this->MemberPendingMap,uVar10,local_res18);
            }
            goto LAB_14bac72b6;
          }
          iVar5 = *(int *)(*(longlong *)&this->MemberPendingMap + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
        FVar9.Data = FVar9.Data + 8;
        goto LAB_14bac71f0;
      }
    }
LAB_14bac72b6:
    FVar9.Data = FVar9.Data + 8;
  } while( true );
}

// RemoveMemberData @ 14bac7e00

bool __thiscall UDS_GuildData::RemoveMemberData(UDS_GuildData *this,long64 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  long64 local_res8 [4];
  
  uVar4 = (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->MemberDataMap).field_0x8 != *(int *)&(this->MemberDataMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MemberDataMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MemberDataMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->MemberDataMap).field_0x48 - 1U & uVar4) *
                              4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->MemberDataMap).field_0x0;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x18) == param_1) {
          local_res8[0] = param_1;
          TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
          ::RemoveImpl<__int64>
                    ((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
                      *)&this->MemberDataMap,uVar4,local_res8);
          return true;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// RemoveMemberPendingData @ 14bac7e90

bool __thiscall UDS_GuildData::RemoveMemberPendingData(UDS_GuildData *this,long64 param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  long64 local_res8 [4];
  
  uVar4 = (int)((ulonglong)param_1 >> 0x20) * 0x17 + (int)param_1;
  if (*(int *)&(this->MemberPendingMap).field_0x8 != *(int *)&(this->MemberPendingMap).field_0x34) {
    puVar3 = *(undefined1 **)&(this->MemberPendingMap).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->MemberPendingMap).field_0x38;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->MemberPendingMap).field_0x48 - 1U & uVar4)
                              * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&(this->MemberPendingMap).field_0x0;
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar2 * 0x18) == param_1) {
          local_res8[0] = param_1;
          TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
          ::RemoveImpl<__int64>
                    ((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
                      *)&this->MemberPendingMap,uVar4,local_res8);
          return true;
        }
        iVar2 = *(int *)(lVar1 + 0x10 + (longlong)iVar2 * 0x18);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// ResetData @ 14bac9910

void __thiscall UDS_GuildData::ResetData(UDS_GuildData *this)

{
  TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
           *)&this->MemberDataMap);
  TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<__int64,TObjectPtr<UDS_GuildMemberData>_>,TDefaultMapHashableKeyFuncs<__int64,TObjectPtr<UDS_GuildMemberData>,0>,FDefaultSetAllocator>
           *)&this->MemberPendingMap);
  return;
}

// SetGuildData @ 14baccad0

void __thiscall UDS_GuildData::SetGuildData(UDS_GuildData *this,SqlGuildTable *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  FString *pFVar5;
  FDS_GuildMarkInfo *pFVar6;
  FString *pFVar7;
  char *pcVar8;
  FString local_28;
  FDS_GuildMarkInfo local_18;
  
  this->GuildUID = (param_1->_impl_).guild_uid_;
  this->GuildLevel = (param_1->_impl_).level_;
  this->GuildMoney = (param_1->_impl_).gold_;
  this->GuildExp = (int)(param_1->_impl_).exp_;
  this->GuildJoinLimitLevel = (param_1->_impl_).recruit_level_;
  this->GuildMembersCount = (param_1->_impl_).member_count_;
  this->GuildJoinType = (EDS_GuildJoinType)(param_1->_impl_).recruit_type_;
  this->GuildAutoKickType = (EDS_GuildAutoKickType)(param_1->_impl_).kick_auto_type_;
  pcVar8 = (char *)((ulonglong)(param_1->_impl_).mark_info_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
    pcVar8 = *(char **)pcVar8;
  }
  pFVar5 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar8);
  pFVar6 = UDS_GuildManager::MakeJsonToGuildMarkInfo(&local_18,pFVar5);
  iVar2 = pFVar6->GuildMarkColorTableID;
  iVar3 = pFVar6->GuildMarkBgTableID;
  iVar4 = pFVar6->GuildMarkBgColorTableID;
  (this->GuildMarkInfo).GuildMarkTableID = pFVar6->GuildMarkTableID;
  (this->GuildMarkInfo).GuildMarkColorTableID = iVar2;
  (this->GuildMarkInfo).GuildMarkBgTableID = iVar3;
  (this->GuildMarkInfo).GuildMarkBgColorTableID = iVar4;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pcVar8 = (char *)((ulonglong)(param_1->_impl_).guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
    pcVar8 = *(char **)pcVar8;
  }
  pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar8);
  pFVar5 = &this->GuildName;
  if (pFVar5 != pFVar7) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GuildName).Data.ArrayNum = (pFVar7->Data).ArrayNum;
    (this->GuildName).Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pcVar8 = (char *)((ulonglong)(param_1->_impl_).recruit_message_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
    pcVar8 = *(char **)pcVar8;
  }
  pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar8);
  pFVar5 = &this->GuildIntroduction;
  if (pFVar5 != pFVar7) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GuildIntroduction).Data.ArrayNum = (pFVar7->Data).ArrayNum;
    (this->GuildIntroduction).Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pcVar8 = (char *)((ulonglong)(param_1->_impl_).notice_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
    pcVar8 = *(char **)pcVar8;
  }
  pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar8);
  pFVar5 = &this->GuildNotice;
  if (pFVar5 != pFVar7) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GuildNotice).Data.ArrayNum = (pFVar7->Data).ArrayNum;
    (this->GuildNotice).Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pcVar8 = (char *)((ulonglong)(param_1->_impl_).master_nickname_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar8 + 0x18)) {
    pcVar8 = *(char **)pcVar8;
  }
  pFVar7 = DS_Util::ConvertUTF8ToFString(&local_28,pcVar8);
  pFVar5 = &this->GuildMasterName;
  if (pFVar5 != pFVar7) {
    pFVar1 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar5->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GuildMasterName).Data.ArrayNum = (pFVar7->Data).ArrayNum;
    (this->GuildMasterName).Data.ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// SetGuildMarkData @ 14baccd90

void __thiscall UDS_GuildData::SetGuildMarkData(UDS_GuildData *this,FDS_GuildMarkInfo *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1->GuildMarkColorTableID;
  iVar2 = param_1->GuildMarkBgTableID;
  iVar3 = param_1->GuildMarkBgColorTableID;
  (this->GuildMarkInfo).GuildMarkTableID = param_1->GuildMarkTableID;
  (this->GuildMarkInfo).GuildMarkColorTableID = iVar1;
  (this->GuildMarkInfo).GuildMarkBgTableID = iVar2;
  (this->GuildMarkInfo).GuildMarkBgColorTableID = iVar3;
  return;
}

// SetGuildName @ 14baccdb0

void __thiscall UDS_GuildData::SetGuildName(UDS_GuildData *this,UpdateGuildNameResponse *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  char *pcVar4;
  FString local_18;
  
  pcVar4 = (char *)((ulonglong)(param_1->_impl_).guild_name_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
    pcVar4 = *(char **)pcVar4;
  }
  pFVar3 = DS_Util::ConvertUTF8ToFString(&local_18,pcVar4);
  pFVar1 = &this->GuildName;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GuildName).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->GuildName).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  UDS_DataBase::SetIsDirty((UDS_DataBase *)this,true);
  return;
}

// SetGuildSettingData @ 14bacce40

void __thiscall
UDS_GuildData::SetGuildSettingData(UDS_GuildData *this,UpdateGuildSettingResponse *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  char *pcVar4;
  FString local_18;
  
  pcVar4 = (char *)((ulonglong)(param_1->_impl_).recruit_message_.tagged_ptr_.ptr_ &
                   0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
    pcVar4 = *(char **)pcVar4;
  }
  pFVar3 = DS_Util::ConvertUTF8ToFString(&local_18,pcVar4);
  pFVar1 = &this->GuildIntroduction;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GuildIntroduction).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->GuildIntroduction).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  pcVar4 = (char *)((ulonglong)(param_1->_impl_).notice_.tagged_ptr_.ptr_ & 0xfffffffffffffffc);
  if (0xf < *(ulonglong *)(pcVar4 + 0x18)) {
    pcVar4 = *(char **)pcVar4;
  }
  pFVar3 = DS_Util::ConvertUTF8ToFString(&local_18,pcVar4);
  pFVar1 = &this->GuildNotice;
  if (pFVar1 != pFVar3) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->GuildNotice).Data.ArrayNum = (pFVar3->Data).ArrayNum;
    (this->GuildNotice).Data.ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this->GuildJoinType = (EDS_GuildJoinType)(param_1->_impl_).recruit_type_;
  this->GuildAutoKickType = (EDS_GuildAutoKickType)(param_1->_impl_).kick_auto_type_;
  this->GuildJoinLimitLevel = (param_1->_impl_).recruit_level_;
  return;
}

