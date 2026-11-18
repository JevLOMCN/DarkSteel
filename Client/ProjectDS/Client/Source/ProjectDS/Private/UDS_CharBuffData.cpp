// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b4477b0

UClass * __cdecl UDS_CharBuffData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharBuffData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharBuffData",
               &Z_Registration_Info_UClass_UDS_CharBuffData.InnerSingleton,
               StaticRegisterNativesUDS_CharBuffData,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharBuffData>,
               InternalVTableHelperCtorCaller<UDS_CharBuffData>,local_res8,UDS_DataBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharBuffData.InnerSingleton;
}

// UDS_CharBuffData @ 14b44cac0

UDS_CharBuffData * __thiscall
UDS_CharBuffData::UDS_CharBuffData(UDS_CharBuffData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharBuffData__6B_;
  *(undefined8 *)&this->BuffInfoMap = 0;
  *(undefined8 *)&(this->BuffInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->BuffInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->BuffInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->BuffInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BuffInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->BuffInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BuffInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->BuffInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->SpecialBuffInfoMap = 0;
  *(undefined8 *)&(this->SpecialBuffInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpecialBuffInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpecialBuffInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->ChangedBuffListDelegate = 0;
  *(undefined8 *)&(this->ChangedBuffListDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedBuffListDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedSpecialBuffDelegate = 0;
  *(undefined8 *)&(this->ChangedSpecialBuffDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedSpecialBuffDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedBuffListDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedSpecialBuffDelegate).field_0x18 = 2;
  return this;
}

// UDS_CharBuffData @ 14b44cbb0

UDS_CharBuffData * __thiscall
UDS_CharBuffData::UDS_CharBuffData(UDS_CharBuffData *this,FObjectInitializer *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CharBuffData__6B_;
  *(undefined8 *)&this->BuffInfoMap = 0;
  *(undefined8 *)&(this->BuffInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->BuffInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->BuffInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->BuffInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->BuffInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->BuffInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->BuffInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->BuffInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->SpecialBuffInfoMap = 0;
  *(undefined8 *)&(this->SpecialBuffInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->SpecialBuffInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SpecialBuffInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->ChangedBuffListDelegate = 0;
  *(undefined8 *)&(this->ChangedBuffListDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedBuffListDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ChangedSpecialBuffDelegate = 0;
  *(undefined8 *)&(this->ChangedSpecialBuffDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedSpecialBuffDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangedBuffListDelegate).field_0x18 = 2;
  *(undefined8 *)&(this->ChangedSpecialBuffDelegate).field_0x18 = 2;
  return this;
}

// ~UDS_CharBuffData @ 14b44fb40

void __thiscall UDS_CharBuffData::~UDS_CharBuffData(UDS_CharBuffData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_CharBuffData__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedSpecialBuffDelegate).field_0x8,
             *(int *)&(this->ChangedSpecialBuffDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedSpecialBuffDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedSpecialBuffDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangedBuffListDelegate).field_0x8,
             *(int *)&(this->ChangedBuffListDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangedBuffListDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangedBuffListDelegate);
  *(undefined4 *)&(this->SpecialBuffInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SpecialBuffInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SpecialBuffInfoMap);
  *(undefined4 *)&(this->BuffInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->BuffInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_BuffInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BuffInfoMap);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b453a00

UClass * __cdecl UDS_CharBuffData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CharBuffData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CharBuffData",
               &Z_Registration_Info_UClass_UDS_CharBuffData.InnerSingleton,
               StaticRegisterNativesUDS_CharBuffData,0x138,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_CharBuffData>,
               InternalVTableHelperCtorCaller<UDS_CharBuffData>,local_res8,UDS_DataBase::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CharBuffData.InnerSingleton;
}

// StaticRegisterNativesUDS_CharBuffData @ 14b4550a0

void __cdecl UDS_CharBuffData::StaticRegisterNativesUDS_CharBuffData(void)

{
  return;
}

// BroadcastChangedSpecialBuff @ 14ba378c0

void __thiscall UDS_CharBuffData::BroadcastChangedSpecialBuff(UDS_CharBuffData *this)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  TMap<EDS_SpecialBuffType,FDS_SpecialBuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>_>
  *local_98;
  undefined2 local_90;
  FDestructionSentinel local_88;
  longlong *local_70;
  longlong lStack_68;
  undefined1 local_60 [16];
  int local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  
  TSet<TTuple<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            (&local_70,
             (TSet<TTuple<EDS_SpecialBuffType,FDS_SpecialBuffInfo>,TDefaultMapHashableKeyFuncs<EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>,FDefaultSetAllocator>
              *)&this->SpecialBuffInfoMap);
  local_90 = 0;
  stack0xffffffffffffff48 = local_60;
  auStack_c0._0_8_ = lStack_68;
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uVar12 = local_60._8_8_ >> 0x20;
  local_98 = &this->SpecialBuffInfoMap;
  if (local_60._12_4_ < *(int *)(local_60._0_8_ + 0x18)) {
    do {
      lVar2 = *local_70 + (longlong)(int)uVar12 * 0x28;
      local_res8[0] = 0 < *(int *)(*local_70 + 0x18 + (longlong)(int)uVar12 * 0x28);
      if (local_res8[0] != *(char *)(lVar2 + 8)) {
        *(undefined1 *)(lVar2 + 8) = local_res8[0];
        bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                           (void *)0x0);
        if (bVar6) {
LAB_14ba379c1:
          local_res10 = 0;
        }
        else {
          pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar11 + 4),
                             (void *)0x0);
          if (bVar6) goto LAB_14ba379c1;
          pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar11 + 4));
          local_res10 = *(undefined8 *)(pUVar11 + 1);
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                   &this->ChangedSpecialBuffDelegate,(FWriteAccessScope *)&local_88);
        puVar1 = &(this->ChangedSpecialBuffDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        bVar6 = false;
        uVar13 = *(int *)&(this->ChangedSpecialBuffDelegate).field_0x10 - 1;
        if (-1 < (int)uVar13) {
          lVar14 = (longlong)(int)uVar13 << 4;
          do {
            uVar9 = 0;
            if ((int)uVar13 < *(int *)&(this->ChangedSpecialBuffDelegate).field_0x10) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            lVar3 = *(longlong *)&(this->ChangedSpecialBuffDelegate).field_0x8;
            if (((*(int *)(lVar14 + 8 + lVar3) == 0) ||
                (plVar4 = *(longlong **)(lVar14 + lVar3), plVar4 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar4 + 0x68))(plVar4,&local_res10,lVar2,local_res8),
               cVar8 == '\0')) {
              bVar6 = true;
            }
            lVar14 = lVar14 + -0x10;
            uVar13 = uVar13 - 1;
          } while (-1 < (int)uVar13);
        }
        puVar1 = &(this->ChangedSpecialBuffDelegate).field_0x1c;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        if (bVar6) {
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &this->ChangedSpecialBuffDelegate,false);
        }
        if (local_88.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_88.Accessor,&local_88);
        }
      }
      uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
      uVar12 = (ulonglong)uStack_ac;
    } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
    if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
      uVar13 = *(int *)(&local_98->field_0x0 + 8) - *(int *)(&local_98->field_0x0 + 0x34);
      if (uVar13 < 4) {
        iVar10 = 1;
      }
      else {
        uVar12 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar13) && (*(int *)&local_98->field_0x48 < iVar10)) ||
         (iVar10 < *(int *)&local_98->field_0x48)) {
        *(int *)&local_98->field_0x48 = iVar10;
        TSet<TTuple<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_98);
      }
    }
  }
  return;
}

// CheckForbidSpecialBuff @ 14ba389f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UDS_CharBuffData::CheckForbidSpecialBuff
          (ulong64 *param_1,EDS_SpecialBuffType *param_2,bool *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharBuffData *this;
  undefined1 auStackY_188 [32];
  int local_148 [2];
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  GetData((ulong64)&local_140);
  bVar1 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)&local_140,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_CharBuffData::CheckForbidSpecialBuff",0x28,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x61,L"charBuffData is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return false;
      }
    }
  }
  else {
    local_148[0] = 0;
    this = (UDS_CharBuffData *)FWeakObjectPtr::Get(&local_140);
    bVar1 = HasSpecialBuffInfo(this,param_2,local_148);
    if (!bVar1) {
      return true;
    }
    if (*param_3 == bVar1) {
      ShowForbidSpecialBuffMessage(local_148,param_2);
    }
  }
  return false;
}

// ClearAllBuffInfo @ 14ba396f0

void __thiscall UDS_CharBuffData::ClearAllBuffInfo(UDS_CharBuffData *this)

{
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  UObject *pUVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  bool local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  undefined4 local_f8;
  undefined8 local_f0;
  FScriptContainerElement *local_e8;
  longlong *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  FDestructionSentinel local_98;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  this_00 = &this->BuffInfoMap;
  if (*(int *)&(this->BuffInfoMap).field_0x8 != *(int *)&(this->BuffInfoMap).field_0x34) {
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_80,
               (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                *)this_00);
    local_a0 = 0;
    stack0xffffffffffffff38 = local_80._16_16_;
    local_d8 = (longlong *)local_80._0_8_;
    auStack_d0._0_8_ = local_80._8_8_;
    local_b8 = local_60;
    pTStack_b0 = pTStack_58;
    uVar14 = local_80._24_8_ >> 0x20;
    local_a8 = (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                *)this_00;
    if (local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
      do {
        lVar15 = *local_d8;
        iVar9 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar9 + 1;
        *(undefined4 *)(local_108.AllocatorInstance.Data + (longlong)iVar9 * 4) =
             *(undefined4 *)((longlong)(int)uVar14 * 0x38 + lVar15);
        uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
        uVar14 = (ulonglong)uStack_bc;
      } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
      if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
        uVar16 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
        if (uVar16 < 4) {
          iVar9 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          local_f8 = (undefined4)lVar15;
          iVar9 = 1 << ((byte)lVar15 & 0x1f);
        }
        if (((0 < (int)uVar16) && (local_a8->HashSize < iVar9)) || (iVar9 < local_a8->HashSize)) {
          local_a8->HashSize = iVar9;
          TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
          ::Rehash(local_a8);
        }
      }
    }
    bVar6 = 1 < *(int *)&(this->BuffInfoMap).field_0x48;
    if (!bVar6) {
      TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->BuffInfoMap).field_0xc;
    *(undefined4 *)&(this->BuffInfoMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->BuffInfoMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->BuffInfoMap).field_0x34 = 0;
    iVar9 = *(int *)&(this->BuffInfoMap).field_0x2c;
    *(undefined4 *)&(this->BuffInfoMap).field_0x28 = 0;
    if ((iVar9 < 0) || (0x80 < iVar9)) {
      *(undefined4 *)&(this->BuffInfoMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->BuffInfoMap).field_0x10,0);
    }
    if (bVar6) {
      *(undefined4 *)&(this->BuffInfoMap).field_0x48 = 1;
      TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                *)this_00);
    }
    local_res8[0] = false;
    UpdateSpecialBuff(this,&local_108,local_res8);
    uVar12 = (ulonglong)local_108.ArrayNum;
    local_res20 = local_108.ArrayNum;
    local_e8 = local_108.AllocatorInstance.Data + uVar12 * 4;
    uVar14 = uVar12;
    FVar17.Data = local_108.AllocatorInstance.Data;
    while( true ) {
      pFVar5 = local_e8;
      uVar13 = 0;
      if ((int)uVar12 != (int)uVar14) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (FVar17.Data == pFVar5) break;
      local_res18[0] = 0;
      bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                         (void *)0x0);
      if (!bVar6) {
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar11 + 4),
                           (void *)0x0);
        if (!bVar6) {
          pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar11 + 4));
          uVar13 = *(undefined8 *)(pUVar11 + 1);
        }
      }
      local_f0 = uVar13;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->ChangedBuffListDelegate,(FWriteAccessScope *)&local_98);
      puVar1 = &(this->ChangedBuffListDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar6 = false;
      uVar16 = *(int *)&(this->ChangedBuffListDelegate).field_0x10 - 1;
      if (-1 < (int)uVar16) {
        lVar15 = (longlong)(int)uVar16 << 4;
        bVar6 = false;
        do {
          uVar10 = 0;
          if ((int)uVar16 < *(int *)&(this->ChangedBuffListDelegate).field_0x10) {
            uVar10 = ~uVar16 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar2 = *(longlong *)&(this->ChangedBuffListDelegate).field_0x8;
          if (((*(int *)(lVar2 + 8 + lVar15) == 0) ||
              (plVar3 = *(longlong **)(lVar2 + lVar15), plVar3 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar3 + 0x68))(plVar3,&local_f0,FVar17.Data,local_res18),
             cVar8 == '\0')) {
            bVar6 = true;
          }
          lVar15 = lVar15 + -0x10;
          uVar16 = uVar16 - 1;
        } while (-1 < (int)uVar16);
      }
      puVar1 = &(this->ChangedBuffListDelegate).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar6) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &this->ChangedBuffListDelegate,false);
      }
      if (local_98.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_98.Accessor,&local_98);
      }
      uVar12 = local_108._8_8_ & 0xffffffff;
      FVar17.Data = FVar17.Data + 4;
      uVar14 = (ulonglong)local_res20;
    }
    BroadcastChangedSpecialBuff(this);
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
  }
  return;
}

// Created @ 14ba3bf10

void __thiscall UDS_CharBuffData::Created(UDS_CharBuffData *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *pUVar4;
  TTuple<FName,__int64> *pTVar5;
  int iVar6;
  int local_res10 [4];
  int *local_58;
  undefined8 *local_50;
  TTuple<FName,__int64> local_48;
  undefined8 local_38;
  void *pvStack_30;
  undefined8 local_28;
  
  pUVar4 = StaticEnum<enum_EDS_SpecialBuffType>();
  if (pUVar4 == (UEnum *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2321556709706825787>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharBuffData.cpp"
                       ,0x3b,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar1 = (pUVar4->Names).NumValues;
    TSet<TTuple<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>,FDefaultSetAllocator>
    ::Reserve(&this->SpecialBuffInfoMap,iVar1);
    iVar6 = 0;
    if (0 < iVar1) {
      do {
        if (((pUVar4->Names).NumValues <= iVar6) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Names.IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                               ,0xb2d,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar5 = UEnum::FNameData::operator[](&pUVar4->Names,&local_48,iVar6);
        local_res10[0] = *(int *)&pTVar5->field_0x8;
        if ((local_res10[0] != 0) && (local_res10[0] != 0x1076)) {
          local_28 = 0;
          local_58 = local_res10;
          local_50 = &local_38;
          local_38 = 0;
          pvStack_30 = (void *)0x0;
          TSet<TTuple<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo>,TDefaultMapHashableKeyFuncs<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<enum_EDS_SpecialBuffType_const_&,FDS_SpecialBuffInfo_&&>_>
                    (&this->SpecialBuffInfoMap,
                     (TPairInitializer<EDS_SpecialBuffType_const_&,FDS_SpecialBuffInfo_&&> *)
                     (local_res10 + 2),(bool *)&local_58);
          if (pvStack_30 != (void *)0x0) {
            FMemory::Free(pvStack_30);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar1);
    }
  }
  return;
}

// Deleted @ 14ba3c730

void __thiscall UDS_CharBuffData::Deleted(UDS_CharBuffData *this)

{
  return;
}

// GetBuffInfo @ 14ba45310

FDS_BuffInfo * __thiscall UDS_CharBuffData::GetBuffInfo(UDS_CharBuffData *this,int *param_1)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  FDS_BuffInfo *pFVar4;
  undefined1 *puVar5;
  
  uVar1 = *param_1;
  if (*(int *)&(this->BuffInfoMap).field_0x8 != *(int *)&(this->BuffInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->BuffInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->BuffInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)(*(int *)&(this->BuffInfoMap).field_0x48 - 1U & uVar1) * 4)
    ;
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->BuffInfoMap;
      do {
        if (*(uint *)((longlong)iVar3 * 0x38 + lVar2) == uVar1) {
          pFVar4 = TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                                  *)&this->BuffInfoMap,uVar1);
          return pFVar4;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x38 + 0x30 + lVar2);
      } while (iVar3 != -1);
    }
  }
  return (FDS_BuffInfo *)0x0;
}

// GetBuffList @ 14ba45370

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UDS_CharBuffData::GetBuffList
          (UDS_CharBuffData *this,TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          EDS_BuffListFilterType *param_1,int param_2)

{
  EDS_BuffListFilterType EVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint uVar6;
  bool bVar7;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
              *)&this->BuffInfoMap);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
              *)&this->BuffInfoMap;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      puVar5 = (undefined4 *)((longlong)(int)uVar4 * 0x38 + *local_48);
      if ((0 < param_2) && (param_2 <= __return_storage_ptr__->ArrayNum)) break;
      EVar1 = *param_1;
      if (EVar1 == All) {
LAB_14ba4543a:
        iVar3 = __return_storage_ptr__->ArrayNum;
        if (iVar3 == __return_storage_ptr__->ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar3 + 1;
        *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 4) =
             *puVar5;
      }
      else {
        if (EVar1 == Buff) {
          if (*(char *)(puVar5 + 10) != '\0') {
            bVar7 = *(char *)(puVar5 + 10) == '\x02';
            goto LAB_14ba45438;
          }
          goto LAB_14ba4543a;
        }
        if (EVar1 == Debuff) {
          bVar7 = *(char *)(puVar5 + 10) == '\x01';
LAB_14ba45438:
          if (bVar7) goto LAB_14ba4543a;
        }
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetData @ 14ba47a20

TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> __cdecl UDS_CharBuffData::GetData(ulong64 param_1)

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
  
  TDS_DataSetGetter<UDS_CharDataSet>::Get((ulong64)&local_res18);
  bVar2 = TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharDataSet,FWeakObjectPtr> *)&local_res18,(void *)0x0);
  if (bVar2) {
    *(undefined8 *)param_1 = 0;
    local_res20 = (UObject *)0x0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
    return (TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
  }
  this = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_res18);
  this_00 = UDS_DataSetBase::GetData(this,(ulong64)local_18);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar3 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_CharBuffData_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14ba47ac6;
  }
  pUVar3 = (UObject *)0x0;
LAB_14ba47ac6:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(undefined8 *)param_1 = 0;
  local_res20 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_res20);
  return (TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// HasBuffInfo @ 14ba513e0

bool __thiscall UDS_CharBuffData::HasBuffInfo(UDS_CharBuffData *this,int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  if (*(int *)&(this->BuffInfoMap).field_0x8 != *(int *)&(this->BuffInfoMap).field_0x34) {
    puVar2 = *(undefined1 **)&(this->BuffInfoMap).field_0x40;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = &(this->BuffInfoMap).field_0x38;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(*(int *)&(this->BuffInfoMap).field_0x48 - 1U & *param_1) *
                              4);
    if (iVar1 != -1) {
      do {
        if (*(uint *)((longlong)iVar1 * 0x38 + *(longlong *)&this->BuffInfoMap) == *param_1)
        goto LAB_14ba5143c;
        iVar1 = *(int *)((longlong)iVar1 * 0x38 + 0x30 + *(longlong *)&this->BuffInfoMap);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_14ba5143c:
  return iVar1 != -1;
}

// HasSpecialBuffInfo @ 14ba52010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_CharBuffData::HasSpecialBuffInfo(UDS_CharBuffData *this,EDS_SpecialBuffType *param_1)

{
  EDS_SpecialBuffType EVar1;
  longlong lVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  FDS_SpecialBuffInfo *pFVar5;
  undefined1 *puVar6;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  EVar1 = *param_1;
  if (*(int *)&(this->SpecialBuffInfoMap).field_0x8 !=
      *(int *)&(this->SpecialBuffInfoMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->SpecialBuffInfoMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->SpecialBuffInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->SpecialBuffInfoMap).field_0x48 + ~None & EVar1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->SpecialBuffInfoMap;
      do {
        if (*(EDS_SpecialBuffType *)(lVar2 + (longlong)iVar3 * 0x28) == EVar1) {
          pFVar5 = TMapBase<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>_>
                   ::FindChecked(&this->SpecialBuffInfoMap,EVar1);
          return pFVar5->bIsOn;
        }
        iVar3 = *(int *)(lVar2 + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_CharBuffData::HasSpecialBuffInfo",0x24,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_138.Ptr,0xe5,L"Couldn\'t find SpecialBuffInfo. (%d)");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// HasSpecialBuffInfo @ 14ba52150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_CharBuffData::HasSpecialBuffInfo
          (UDS_CharBuffData *this,EDS_SpecialBuffType *param_1,int *param_2)

{
  EDS_SpecialBuffType EVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  FDS_SpecialBuffInfo *pFVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 auStackY_188 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_188;
  *param_2 = 0;
  EVar1 = *param_1;
  if (*(int *)&(this->SpecialBuffInfoMap).field_0x8 !=
      *(int *)&(this->SpecialBuffInfoMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->SpecialBuffInfoMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->SpecialBuffInfoMap).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->SpecialBuffInfoMap).field_0x48 + ~None & EVar1) * 4);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&this->SpecialBuffInfoMap;
      do {
        if (*(EDS_SpecialBuffType *)(lVar2 + (longlong)iVar6 * 0x28) == EVar1) {
          pFVar8 = TMapBase<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>_>
                   ::FindChecked(&this->SpecialBuffInfoMap,EVar1);
          iVar6 = (pFVar8->OwnerBuffIDList).ArrayNum;
          if (0 < iVar6) {
            uVar10 = 0;
            if ((int)(iVar6 - 1U) < iVar6) {
              uVar10 = ~(iVar6 - 1U) >> 0x1f;
            }
            if ((uVar10 == 0) &&
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
            *param_2 = *(int *)((pFVar8->OwnerBuffIDList).AllocatorInstance.Data +
                               (longlong)(pFVar8->OwnerBuffIDList).ArrayNum * 4 + -4);
          }
          return pFVar8->bIsOn;
        }
        iVar6 = *(int *)(lVar2 + 0x20 + (longlong)iVar6 * 0x28);
      } while (iVar6 != -1);
    }
  }
  pUVar7 = UDS_LogManager::GetInst();
  if (pUVar7 != (UDS_LogManager *)0x0) {
    pUVar7 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_CharBuffData::HasSpecialBuffInfo",0x24,Yes);
    UDS_LogManager::PrintLog
              (pUVar7,1,Warning,local_148.Ptr,0xf3,L"Couldn\'t find SpecialBuffInfo. (%d)");
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
  return false;
}

// ResetData @ 14ba682f0

void __thiscall UDS_CharBuffData::ResetData(UDS_CharBuffData *this)

{
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ChangedBuffListDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangedBuffListDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->ChangedSpecialBuffDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangedSpecialBuffDelegate
            );
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// SetDataByBuffInfo @ 14ba6e290

void __thiscall UDS_CharBuffData::SetDataByBuffInfo(UDS_CharBuffData *this,BuffInfo *param_1)

{
  SetDataByBuffList(this,&(param_1->_impl_).buffs_);
  return;
}

// SetDataByBuffList @ 14ba6e2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharBuffData::SetDataByBuffList
          (UDS_CharBuffData *this,RepeatedPtrField<server_msg::Buff> *param_1)

{
  TMap<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
  *this_00;
  undefined1 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  ulonglong *puVar11;
  FDS_BuffBaseTableRow *pFVar12;
  UDS_LogManager *pUVar13;
  FDS_BuffInfo *pFVar14;
  UObject *pUVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  int *piVar20;
  uint uVar21;
  UDS_CharBuffData *this_01;
  longlong lVar22;
  ForAnyElementType FVar23;
  double dVar24;
  undefined1 auStackY_578 [32];
  uint local_538;
  bool local_534;
  bool local_533 [7];
  uint local_52c;
  undefined1 local_528 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_520;
  UDS_CharBuffData *local_510;
  TArray<int,TSizedDefaultAllocator<32>_> local_508;
  FScriptContainerElement *local_4f8;
  longlong *local_4e8;
  undefined1 auStack_4e0 [16];
  uint uStack_4d0;
  uint uStack_4cc;
  longlong local_4c8;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *pTStack_4c0;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *local_4b8;
  char local_4b0;
  char cStack_4af;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined1 local_488;
  undefined4 local_487;
  undefined2 local_483;
  undefined1 local_481;
  undefined4 local_480;
  undefined1 local_47c [12];
  undefined8 local_470;
  undefined8 local_468;
  uint *local_460;
  undefined8 *local_458;
  FDestructionSentinel local_450;
  FDestructionSentinel local_438;
  undefined1 local_420 [32];
  longlong local_400;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  *pTStack_3f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_578;
  lVar22 = (longlong)*(int *)&param_1->field_0x8;
  this_00 = &this->BuffInfoMap;
  local_508.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_508.ArrayNum = 0;
  local_508.ArrayMax = 0;
  local_510 = this;
  TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_420,
             (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
              *)this_00);
  local_4b0 = '\0';
  cStack_4af = '\0';
  stack0xfffffffffffffb28 = local_420._16_16_;
  local_4e8 = (longlong *)local_420._0_8_;
  auStack_4e0._0_8_ = local_420._8_8_;
  local_4c8 = local_400;
  pTStack_4c0 = pTStack_3f8;
  uVar16 = local_420._24_8_ >> 0x20;
  uVar21 = local_420._28_4_;
  local_4b8 = (TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
               *)this_00;
  if ((int)uVar21 < *(int *)(local_420._16_8_ + 0x18)) {
    do {
      piVar20 = (int *)((longlong)(int)uVar16 * 0x38 + *local_4e8);
      if (0 < lVar22) {
        uVar16 = *(ulonglong *)param_1;
        puVar11 = (ulonglong *)(uVar16 + 7);
        lVar17 = 0;
        do {
          uVar18 = uVar16;
          if ((uVar16 & 1) != 0) {
            uVar18 = *puVar11;
          }
          if (*piVar20 == *(int *)(uVar18 + 0x18)) goto LAB_14ba6e3df;
          lVar17 = lVar17 + 1;
          puVar11 = puVar11 + 1;
        } while (lVar17 < lVar22);
      }
      iVar9 = local_508.ArrayNum;
      if (local_508.ArrayNum == local_508.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_508.AllocatorInstance,&local_508.ArrayMax);
      }
      local_508.ArrayNum = iVar9 + 1;
      *(int *)(local_508.AllocatorInstance.Data + (longlong)iVar9 * 4) = *piVar20;
      TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
      ::RemoveByIndex(pTStack_4c0,uVar21);
      local_4b0 = '\x01';
LAB_14ba6e3df:
      uStack_4d0 = uStack_4d0 & ~auStack_4e0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_4e0);
      if (*(int *)(auStack_4e0._8_8_ + 0x18) <= (int)uStack_4cc) goto LAB_14ba6e403;
      uVar16 = (ulonglong)uStack_4cc;
      uVar21 = uStack_4cc;
    } while( true );
  }
LAB_14ba6e460:
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar21 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar4 = __real_3e45798ee2308c3a;
  lVar17 = 0;
  local_520.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_520.ArrayNum = 0;
  local_520.ArrayMax = 0;
  this_01 = this;
  if (0 < lVar22) {
    do {
      uVar16 = *(ulonglong *)param_1;
      if ((uVar16 & 1) != 0) {
        uVar16 = *(ulonglong *)(uVar16 + 7 + lVar17 * 8);
      }
      local_538 = *(uint *)(uVar16 + 0x18);
      pFVar12 = FDS_BuffBaseTableRow::Get((longlong)(int)local_538,true);
      if (pFVar12 == (FDS_BuffBaseTableRow *)0x0) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_3e8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_3e8,"UDS_CharBuffData::SetDataByBuffList",0x23,Yes);
          UDS_LogManager::PrintLog
                    (pUVar13,1,Warning,local_3e8.Ptr,0x15a,L"buffBaseTable is nullptr. (%d)");
          if ((void *)local_3e8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3e8._padding_);
          }
        }
      }
      else if (*(int *)(uVar16 + 0x30) < 1) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 != (UDS_LogManager *)0x0) {
          pUVar13 = UDS_LogManager::GetInst();
          local_2c8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_2c8,"UDS_CharBuffData::SetDataByBuffList",0x23,Yes);
          UDS_LogManager::PrintLog
                    (pUVar13,1,Warning,local_2c8.Ptr,0x160,L"Buff overlap_count is 0. (%d)");
          if ((void *)local_2c8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_2c8._padding_);
          }
        }
      }
      else {
        bVar6 = false;
        if (*(int *)&(local_510->BuffInfoMap).field_0x8 != *(int *)&(this->BuffInfoMap).field_0x34)
        {
          puVar1 = *(undefined1 **)&(this->BuffInfoMap).field_0x40;
          puVar19 = &(this->BuffInfoMap).field_0x38;
          if (puVar1 != (undefined1 *)0x0) {
            puVar19 = puVar1;
          }
          iVar9 = *(int *)(puVar19 +
                          (ulonglong)(*(int *)&(this->BuffInfoMap).field_0x48 - 1U & local_538) * 4)
          ;
          if (iVar9 != -1) {
            do {
              if (*(uint *)((longlong)iVar9 * 0x38 + *(longlong *)&this_00->field_0x0) == local_538)
              {
                if (iVar9 != -1) {
                  dVar24 = *(double *)(uVar16 + 0x28);
                  pFVar14 = TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                            ::FindChecked((TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                                           *)this_00,local_538);
                  dVar24 = pFVar14->StartTicks - dVar24;
                  if (dVar4 < (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar10,
                                               SUB84(dVar24,0) & uVar21)) goto LAB_14ba6e6af;
                  goto LAB_14ba6e6ca;
                }
                break;
              }
              iVar9 = *(int *)((longlong)iVar9 * 0x38 + 0x30 + *(longlong *)&this_00->field_0x0);
            } while (iVar9 != -1);
          }
        }
        local_460 = &local_538;
        local_490 = 0;
        local_458 = &local_4a8;
        local_4a0 = 0;
        local_487 = 0;
        local_483 = 0;
        local_481 = 0;
        local_4a8 = 0;
        local_498 = 0;
        local_488 = 0;
        TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_&,FDS_BuffInfo_&&>_>
                  ((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                    *)this_00,(TPairInitializer<int_&,FDS_BuffInfo_&&> *)local_47c,
                   (bool *)&local_460);
LAB_14ba6e6af:
        bVar6 = true;
        dVar24 = *(double *)(uVar16 + 0x28);
        pFVar14 = TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                  ::FindChecked((TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                                 *)this_00,local_538);
        if (pFVar14->StartTicks <= dVar24) {
LAB_14ba6e6ca:
          if (*(int *)&(local_510->BuffInfoMap).field_0x8 != *(int *)&(this->BuffInfoMap).field_0x34
             ) {
            puVar1 = *(undefined1 **)&(this->BuffInfoMap).field_0x40;
            puVar19 = &(this->BuffInfoMap).field_0x38;
            if (puVar1 != (undefined1 *)0x0) {
              puVar19 = puVar1;
            }
            iVar9 = *(int *)(puVar19 +
                            (ulonglong)(*(int *)&(this->BuffInfoMap).field_0x48 - 1U & local_538) *
                            4);
            if (iVar9 != -1) {
              while (*(uint *)((longlong)iVar9 * 0x38 + *(longlong *)&this_00->field_0x0) !=
                     local_538) {
                iVar9 = *(int *)((longlong)iVar9 * 0x38 + 0x30 + *(longlong *)&this_00->field_0x0);
                if (iVar9 == -1) goto LAB_14ba6e719;
              }
              pFVar14 = TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                        ::FindChecked((TMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>
                                       *)this_00,local_538);
              if (pFVar14 != (FDS_BuffInfo *)0x0) {
                iVar9 = *(int *)(uVar16 + 0x18);
                pFVar14->BuffID = iVar9;
                pFVar14->BuffLevel = *(int *)(uVar16 + 0x1c);
                pFVar14->BuffOverlapCount = *(int *)(uVar16 + 0x30);
                pFVar14->TriggerEntityID = *(ulong64 *)(uVar16 + 0x20);
                pFVar14->StartTicks = *(double *)(uVar16 + 0x28);
                pFVar12 = FDS_BuffBaseTableRow::Get((longlong)iVar9,true);
                if (pFVar12 != (FDS_BuffBaseTableRow *)0x0) {
                  pFVar14->BuffApplyType = pFVar12->BuffApplyType;
                }
                if (bVar6) {
                  iVar9 = local_520.ArrayNum;
                  if (local_520.ArrayNum == local_520.ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x404,&local_520.AllocatorInstance,&local_520.ArrayMax);
                  }
                  local_520.ArrayNum = iVar9 + 1;
                  *(uint *)(local_520.AllocatorInstance.Data + (longlong)iVar9 * 4) = local_538;
                }
                goto LAB_14ba6e8a4;
              }
            }
          }
LAB_14ba6e719:
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2321556709706826107>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\Entity\\Char\\DS_CharBuffData.cpp"
                             ,0x17b,"false");
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar13 = UDS_LogManager::GetInst();
          if (pUVar13 != (UDS_LogManager *)0x0) {
            pUVar13 = UDS_LogManager::GetInst();
            local_1a8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_1a8,"UDS_CharBuffData::SetDataByBuffList",0x23,Yes);
            UDS_LogManager::PrintLog
                      (pUVar13,1,Warning,local_1a8.Ptr,0x17c,L"buffInfo is nullptr. (%d)");
            if ((void *)local_1a8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_1a8._padding_);
            }
          }
          goto LAB_14ba6ec08;
        }
      }
LAB_14ba6e8a4:
      this_01 = local_510;
      lVar17 = lVar17 + 1;
    } while (lVar17 < lVar22);
    if (0 < local_520.ArrayNum) {
      local_47c._4_8_ = local_528;
      TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<int,FDS_BuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>_>::FValueComparisonClass<_UDS_CharBuffData::SetDataByBuffList_::__l45::<lambda_1>_>_>
                ((TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
                  *)&local_510->BuffInfoMap,
                 (FValueComparisonClass<_protected:_void___cdecl_UDS_CharBuffData::SetDataByBuffList(google::protobuf::RepeatedPtrField<server_msg::Buff>_const_&)_::_45_::<lambda_1>_>
                  *)(local_47c + 4));
    }
  }
  local_534 = false;
  UpdateSpecialBuff(this_01,&local_508,&local_534);
  local_533[0] = true;
  UpdateSpecialBuff(this_01,&local_520,local_533);
  uVar18 = (ulonglong)local_508.ArrayNum;
  local_52c = local_508.ArrayNum;
  local_4f8 = local_508.AllocatorInstance.Data + uVar18 * 4;
  uVar16 = uVar18;
  FVar23.Data = local_508.AllocatorInstance.Data;
  while( true ) {
    pFVar5 = local_4f8;
    if ((int)uVar18 != (int)uVar16) {
      local_533[1] = false;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_533 + 1);
    }
    if (FVar23.Data == pFVar5) break;
    local_533[2] = false;
    bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this_01->_padding_,
                       (void *)0x0);
    if (bVar6) {
LAB_14ba6e987:
      local_470 = 0;
    }
    else {
      pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01->_padding_);
      bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar15 + 4),
                         (void *)0x0);
      if (bVar6) goto LAB_14ba6e987;
      pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar15 + 4));
      local_470 = *(undefined8 *)(pUVar15 + 1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_01->ChangedBuffListDelegate,(FWriteAccessScope *)&local_450);
    puVar1 = &(this_01->ChangedBuffListDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar21 = *(int *)&(this_01->ChangedBuffListDelegate).field_0x10 - 1;
    if (-1 < (int)uVar21) {
      lVar22 = (longlong)(int)uVar21 << 4;
      bVar6 = false;
      do {
        uVar10 = 0;
        if ((int)uVar21 < *(int *)&(this_01->ChangedBuffListDelegate).field_0x10) {
          uVar10 = ~uVar21 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar17 = *(longlong *)&(this_01->ChangedBuffListDelegate).field_0x8;
        if (((*(int *)(lVar17 + 8 + lVar22) == 0) ||
            (plVar2 = *(longlong **)(lVar17 + lVar22), plVar2 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_470,FVar23.Data,local_533 + 2),
           cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar22 = lVar22 + -0x10;
        uVar21 = uVar21 - 1;
      } while (-1 < (int)uVar21);
      uVar16 = (ulonglong)local_52c;
    }
    puVar1 = &(this_01->ChangedBuffListDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_01->ChangedBuffListDelegate,false);
    }
    if (local_450.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_450.Accessor,&local_450);
    }
    uVar18 = local_508._8_8_ & 0xffffffff;
    FVar23.Data = FVar23.Data + 4;
    this_01 = local_510;
  }
  uVar18 = (ulonglong)local_520.ArrayNum;
  local_52c = local_520.ArrayNum;
  local_4f8 = local_520.AllocatorInstance.Data + uVar18 * 4;
  uVar16 = uVar18;
  FVar23.Data = local_520.AllocatorInstance.Data;
  do {
    pFVar5 = local_4f8;
    if ((int)uVar18 != (int)uVar16) {
      local_533[3] = false;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_533 + 3);
    }
    if (FVar23.Data == pFVar5) {
      BroadcastChangedSpecialBuff(this_01);
LAB_14ba6ec08:
      if (local_520.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_520.AllocatorInstance.Data);
      }
      if (local_508.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.AllocatorInstance.Data);
      }
      return;
    }
    local_533[4] = true;
    bVar6 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this_01->_padding_,
                       (void *)0x0);
    if (bVar6) {
LAB_14ba6eb07:
      local_468 = 0;
    }
    else {
      pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01->_padding_);
      bVar6 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar15 + 4),
                         (void *)0x0);
      if (bVar6) goto LAB_14ba6eb07;
      pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar15 + 4));
      local_468 = *(undefined8 *)(pUVar15 + 1);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this_01->ChangedBuffListDelegate,(FWriteAccessScope *)&local_438);
    puVar1 = &(this_01->ChangedBuffListDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar6 = false;
    uVar21 = *(int *)&(this_01->ChangedBuffListDelegate).field_0x10 - 1;
    if (-1 < (int)uVar21) {
      lVar22 = (longlong)(int)uVar21 << 4;
      bVar6 = false;
      do {
        uVar10 = 0;
        if ((int)uVar21 < *(int *)&(this_01->ChangedBuffListDelegate).field_0x10) {
          uVar10 = ~uVar21 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar17 = *(longlong *)&(this_01->ChangedBuffListDelegate).field_0x8;
        if (((*(int *)(lVar17 + 8 + lVar22) == 0) ||
            (plVar2 = *(longlong **)(lVar17 + lVar22), plVar2 == (longlong *)0x0)) ||
           (cVar8 = (**(code **)(*plVar2 + 0x68))(plVar2,&local_468,FVar23.Data,local_533 + 4),
           cVar8 == '\0')) {
          bVar6 = true;
        }
        lVar22 = lVar22 + -0x10;
        uVar21 = uVar21 - 1;
      } while (-1 < (int)uVar21);
      uVar16 = (ulonglong)local_52c;
    }
    puVar1 = &(this_01->ChangedBuffListDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar6) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &this_01->ChangedBuffListDelegate,false);
    }
    if (local_438.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_438.Accessor,&local_438);
    }
    uVar18 = local_520._8_8_ & 0xffffffff;
    FVar23.Data = FVar23.Data + 4;
    this_01 = local_510;
  } while( true );
LAB_14ba6e403:
  if ((local_4b0 != '\0') && (cStack_4af != '\0')) {
    uVar21 = *(int *)&(local_4b8->Elements).field_0x8 - *(int *)&(local_4b8->Elements).field_0x34;
    if (uVar21 < 4) {
      iVar9 = 1;
    }
    else {
      uVar16 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_480 = (undefined4)lVar17;
      iVar9 = 1 << ((byte)lVar17 & 0x1f);
    }
    if (((0 < (int)uVar21) && (local_4b8->HashSize < iVar9)) || (iVar9 < local_4b8->HashSize)) {
      local_4b8->HashSize = iVar9;
      TSet<TTuple<int,FDS_BuffInfo>,TDefaultMapHashableKeyFuncs<int,FDS_BuffInfo,0>,FDefaultSetAllocator>
      ::Rehash(local_4b8);
    }
  }
  goto LAB_14ba6e460;
}

// SetDataByBuffTargetList @ 14ba6eca0

void __thiscall
UDS_CharBuffData::SetDataByBuffTargetList(UDS_CharBuffData *this,BuffTargetList *param_1)

{
  SetDataByBuffList(this,&(param_1->_impl_).buff_list_);
  return;
}

// ShowForbidSpecialBuffMessage @ 14ba75390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UDS_CharBuffData::ShowForbidSpecialBuffMessage(int *param_1,EDS_SpecialBuffType *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FDS_BuffBaseTableRow *pFVar10;
  UDS_LogManager *pUVar11;
  FDS_MessageDefineTableRow *pFVar12;
  longlong lVar13;
  void *pvVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStackY_4d8 [32];
  FDS_StringBaseID local_478;
  undefined1 local_468 [168];
  undefined4 local_3c0;
  undefined1 local_3b8 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_398;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  pFVar10 = FDS_BuffBaseTableRow::Get((longlong)*param_1,true);
  if (pFVar10 == (FDS_BuffBaseTableRow *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 != (UDS_LogManager *)0x0) {
      pUVar11 = UDS_LogManager::GetInst();
      local_398._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_398,"UDS_CharBuffData::ShowForbidSpecialBuffMessage",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar11,1,Warning,local_398.Ptr,0x7a,L"buffBaseTable is nullptr. (%d)");
      pvVar14 = (void *)local_398._padding_;
LAB_14ba7584e:
      if (pvVar14 != (void *)0x0) {
        FMemory::Free(pvVar14);
      }
    }
  }
  else {
    iVar1 = (pFVar10->BuffIndexType).ArrayNum;
    uVar16 = 0;
    uVar18 = uVar16;
    if (0 < iVar1) {
      do {
        uVar15 = (uint)uVar16;
        if (((((int)uVar15 < 0) || ((pFVar10->BuffIndex).ArrayNum <= (int)uVar15)) ||
            ((pFVar10->BuffValue).ArrayNum <= (int)uVar15)) ||
           ((pFVar10->BuffValueEx).ArrayNum <= (int)uVar15)) {
          pUVar11 = UDS_LogManager::GetInst();
          if (pUVar11 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar11 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_CharBuffData::ShowForbidSpecialBuffMessage",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar11,1,Warning,local_158.Ptr,0x85,L"buffBaseTable is invalid. (%d)");
          pvVar14 = (void *)local_158._padding_;
          goto LAB_14ba7584e;
        }
        uVar17 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < (pFVar10->BuffIndexType).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar2 = (pFVar10->BuffIndexType).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar15 < (pFVar10->BuffIndex).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar3 = (pFVar10->BuffIndex).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar15 < (pFVar10->BuffValue).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar4 = (pFVar10->BuffValue).AllocatorInstance.Data;
        uVar9 = 0;
        if ((int)uVar15 < (pFVar10->BuffValueEx).ArrayNum) {
          uVar9 = uVar17;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        pFVar5 = (pFVar10->BuffValueEx).AllocatorInstance.Data;
        if ((pFVar2[uVar18] == (FScriptContainerElement)0x3) &&
           (*(EDS_SpecialBuffType *)(pFVar3 + uVar18 * 4) == *param_2)) {
          pFVar12 = FDS_MessageDefineTableRow::Get(0x2711,true);
          if (pFVar12 != (FDS_MessageDefineTableRow *)0x0) {
            local_478._padding_ = (longlong)&___7FDS_StringBaseID__6B_;
            local_478.ID = (long64)*(int *)(pFVar4 + uVar18 * 4);
            FDS_UIMessageInfo::FDS_UIMessageInfo
                      ((FDS_UIMessageInfo *)local_468,pFVar12->MessageType);
            local_468._8_8_ = SEXT48(*(int *)(pFVar5 + (longlong)(int)uVar15 * 4));
            local_468[0] = StringBase;
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_468._64_8_,local_468._72_4_);
            local_468._72_4_ = 0;
            if (local_468._76_4_ != 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x28,8,0,(ForAnyElementType *)(local_468 + 0x40),0,
                         (int *)(local_468 + 0x4c));
            }
            if (local_468._72_4_ == local_468._76_4_) {
              local_468._72_4_ =
                   UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x828,(ForAnyElementType *)(local_468 + 0x40),
                              (int *)(local_468 + 0x4c));
            }
            lVar13 = (longlong)(int)local_468._72_4_;
            local_468._72_4_ = local_468._72_4_ + 1;
            FDS_TextFormatArg::FDS_TextFormatArg<FDS_StringBaseID_&>
                      ((FDS_TextFormatArg *)(local_468._64_8_ + lVar13 * 0x28),&local_478);
            UDS_UIMessageManager::OpenMsgByMsgInfo((FDS_UIMessageInfo *)local_468);
            TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_3b8);
            if ((void *)local_3b8._8_8_ != (void *)0x0) {
              FMemory::Free((void *)local_3b8._8_8_);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_3b8);
            local_3c0 = 0;
            if ((void *)local_468._160_8_ != (void *)0x0) {
              FMemory::Free((void *)local_468._160_8_);
            }
            TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_MessageArgsType,__int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (local_468 + 0x60);
            DestructItems<FDS_TextFormatArg,int>
                      ((FDS_TextFormatArg *)local_468._64_8_,local_468._72_4_);
            if ((FDS_TextFormatArg *)local_468._64_8_ != (FDS_TextFormatArg *)0x0) {
              FMemory::Free((void *)local_468._64_8_);
            }
            if ((FScriptContainerElement *)local_468._48_8_ != (FScriptContainerElement *)0x0) {
              FMemory::Free((void *)local_468._48_8_);
            }
            return true;
          }
          pUVar11 = UDS_LogManager::GetInst();
          if (pUVar11 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar11 = UDS_LogManager::GetInst();
          local_278._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_278,"UDS_CharBuffData::ShowForbidSpecialBuffMessage",0x2e,Yes);
          UDS_LogManager::PrintLog
                    (pUVar11,1,Warning,local_278.Ptr,0x9a,L"messageDefineTable is nullptr. (%d)");
          pvVar14 = (void *)local_278._padding_;
          goto LAB_14ba7584e;
        }
        uVar16 = (ulonglong)(uVar15 + 1);
        uVar18 = uVar18 + 1;
      } while ((longlong)uVar18 < (longlong)iVar1);
    }
  }
  return false;
}

// UpdateSpecialBuff @ 14ba81430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_CharBuffData::UpdateSpecialBuff
          (UDS_CharBuffData *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  EDS_SpecialBuffType EVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FDS_BuffBaseTableRow *pFVar9;
  UDS_LogManager *pUVar10;
  FDS_SpecialBuffInfo *pFVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  int iVar19;
  undefined1 auStackY_328 [32];
  uint local_2d8;
  undefined1 local_2d4 [4];
  FDS_BuffBaseTableRow *local_2d0;
  uint local_2c8;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8;
  longlong local_2b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_2a8;
  UDS_CharBuffData *local_2a0;
  bool *local_298;
  longlong local_290;
  TArray<int,TSizedDefaultAllocator<32>_> *local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pFVar17 = (param_1->AllocatorInstance).Data;
  local_2c8 = param_1->ArrayNum;
  uVar12 = (ulonglong)(int)local_2c8;
  local_2c0 = pFVar17 + uVar12 * 4;
  pFVar15 = local_2c0;
  local_2a0 = this;
  local_298 = param_2;
  local_288 = param_1;
  do {
    while( true ) {
      local_2b8 = pFVar17;
      if (local_288->ArrayNum != (int)uVar12) {
        local_2d4[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2d4);
      }
      if (pFVar17 == pFVar15) {
        return;
      }
      pFVar9 = FDS_BuffBaseTableRow::Get((longlong)*(int *)pFVar17,true);
      local_2d0 = pFVar9;
      if (pFVar9 == (FDS_BuffBaseTableRow *)0x0) break;
      local_290 = (longlong)(pFVar9->BuffIndexType).ArrayNum;
      local_2d8 = 0;
      local_2b0 = 0;
      if (0 < local_290) {
        do {
          lVar16 = local_2b0;
          uVar7 = 0;
          if ((int)local_2d8 < (pFVar9->BuffIndexType).ArrayNum) {
            uVar7 = ~local_2d8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (((((pFVar9->BuffIndexType).AllocatorInstance.Data[lVar16] ==
                 (FScriptContainerElement)0x3) && (-1 < (int)local_2d8)) &&
              ((int)local_2d8 < (pFVar9->BuffIndex).ArrayNum)) &&
             ((int)local_2d8 < (pFVar9->BuffValue).ArrayNum)) {
            uVar7 = 0;
            if ((int)local_2d8 < (pFVar9->BuffIndex).ArrayNum) {
              uVar7 = ~local_2d8 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            EVar3 = *(EDS_SpecialBuffType *)
                     ((pFVar9->BuffIndex).AllocatorInstance.Data + lVar16 * 4);
            if (*(int *)&(this->SpecialBuffInfoMap).field_0x8 !=
                *(int *)&(this->SpecialBuffInfoMap).field_0x34) {
              puVar4 = *(undefined1 **)&(this->SpecialBuffInfoMap).field_0x40;
              puVar14 = &(this->SpecialBuffInfoMap).field_0x38;
              if (puVar4 != (undefined1 *)0x0) {
                puVar14 = puVar4;
              }
              iVar8 = *(int *)(puVar14 +
                              (ulonglong)
                              (*(int *)&(this->SpecialBuffInfoMap).field_0x48 + ~None & EVar3) * 4);
              if (iVar8 != -1) {
                do {
                  if (*(EDS_SpecialBuffType *)
                       (*(longlong *)&this->SpecialBuffInfoMap + (longlong)iVar8 * 0x28) == EVar3) {
                    pFVar11 = TMapBase<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_SpecialBuffType,FDS_SpecialBuffInfo,0>_>
                              ::FindChecked(&this->SpecialBuffInfoMap,EVar3);
                    pTVar1 = &pFVar11->OwnerBuffIDList;
                    local_2a8 = pTVar1;
                    if (*param_2 == true) {
                      iVar8 = (pFVar11->OwnerBuffIDList).ArrayNum;
                      piVar2 = &(pFVar11->OwnerBuffIDList).ArrayMax;
                      if (iVar8 == *piVar2) {
                        iVar8 = UE::Core::Private::
                                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                          (0x404,&pTVar1->AllocatorInstance,piVar2);
                        (pFVar11->OwnerBuffIDList).ArrayNum = iVar8;
                      }
                      pFVar15 = (pTVar1->AllocatorInstance).Data;
                      (pFVar11->OwnerBuffIDList).ArrayNum = iVar8 + 1;
                      *(int *)(pFVar15 + (longlong)iVar8 * 4) = *(int *)pFVar17;
                      pFVar9 = local_2d0;
                    }
                    else {
                      pFVar15 = (pTVar1->AllocatorInstance).Data;
                      if (((pFVar15 <= pFVar17) &&
                          (pFVar17 < pFVar15 + (longlong)(pFVar11->OwnerBuffIDList).ArrayMax * 4))
                         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                ,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x7a5,
                                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                               ), bVar6)) {
                        pcVar5 = (code *)swi(3);
                        (*pcVar5)();
                        return;
                      }
                      pFVar15 = local_2b8;
                      iVar8 = (pFVar11->OwnerBuffIDList).ArrayNum;
                      lVar13 = (longlong)iVar8;
                      pFVar9 = local_2d0;
                      if (iVar8 != 0) {
                        pFVar17 = (pTVar1->AllocatorInstance).Data;
                        iVar19 = 0;
                        lVar16 = 0;
                        bVar6 = *(int *)pFVar17 != *(int *)local_2b8;
                        iVar8 = 0;
                        do {
                          lVar16 = lVar16 + 1;
                          iVar18 = iVar8 + 1;
                          if (lVar16 < lVar13) {
                            do {
                              if (bVar6 != (*(int *)(pFVar17 + lVar16 * 4) != *(int *)pFVar15))
                              break;
                              iVar18 = iVar18 + 1;
                              lVar16 = lVar16 + 1;
                            } while (lVar16 < lVar13);
                          }
                          if (bVar6 != false) {
                            if (iVar19 != iVar8) {
                              memmove(pFVar17 + (longlong)iVar19 * 4,pFVar17 + (longlong)iVar8 * 4,
                                      (longlong)(iVar18 - iVar8) << 2);
                            }
                            iVar19 = iVar19 + (iVar18 - iVar8);
                          }
                          bVar6 = (bool)(bVar6 ^ 1);
                          iVar8 = iVar18;
                        } while (lVar16 < lVar13);
                        local_2a8->ArrayNum = iVar19;
                        lVar16 = local_2b0;
                        pFVar17 = local_2b8;
                        pFVar9 = local_2d0;
                        this = local_2a0;
                        param_2 = local_298;
                      }
                    }
                    goto LAB_14ba81728;
                  }
                  iVar8 = *(int *)(*(longlong *)&this->SpecialBuffInfoMap + 0x20 +
                                  (longlong)iVar8 * 0x28);
                } while (iVar8 != -1);
              }
            }
            pUVar10 = UDS_LogManager::GetInst();
            pFVar9 = local_2d0;
            if (pUVar10 != (UDS_LogManager *)0x0) {
              pUVar10 = UDS_LogManager::GetInst();
              local_278._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_278,"UDS_CharBuffData::UpdateSpecialBuff",0x23,Yes);
              UDS_LogManager::PrintLog
                        (pUVar10,1,Warning,local_278.Ptr,0x1c6,
                         L"Couldn\'t find SpecialBuffInfo. (%d)");
              pFVar9 = local_2d0;
              if ((void *)local_278._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_278._padding_);
                pFVar9 = local_2d0;
              }
            }
          }
LAB_14ba81728:
          local_2d8 = local_2d8 + 1;
          local_2b0 = lVar16 + 1;
          pFVar15 = local_2c0;
        } while (local_2b0 < local_290);
      }
LAB_14ba81750:
      pFVar17 = pFVar17 + 4;
      uVar12 = (ulonglong)local_2c8;
    }
    pUVar10 = UDS_LogManager::GetInst();
    if (pUVar10 == (UDS_LogManager *)0x0) goto LAB_14ba81750;
    pUVar10 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_CharBuffData::UpdateSpecialBuff",0x23,Yes);
    UDS_LogManager::PrintLog
              (pUVar10,1,Warning,local_158.Ptr,0x1cc,L"buffBaseTable is nullptr. (%d)");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
    pFVar17 = pFVar17 + 4;
    uVar12 = (ulonglong)local_2c8;
    pFVar15 = local_2c0;
  } while( true );
}

