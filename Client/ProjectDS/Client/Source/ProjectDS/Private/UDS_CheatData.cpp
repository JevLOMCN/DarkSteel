// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b448660

UClass * __cdecl UDS_CheatData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CheatData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CheatData",
               &Z_Registration_Info_UClass_UDS_CheatData.InnerSingleton,
               StaticRegisterNativesUDS_CheatData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CheatData>,InternalVTableHelperCtorCaller<UDS_CheatData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CheatData.InnerSingleton;
}

// UDS_CheatData @ 14b44e690

UDS_CheatData * __thiscall UDS_CheatData::UDS_CheatData(UDS_CheatData *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CheatData__6B_;
  *(undefined8 *)&this->CheatSlotInfoMap = 0;
  *(undefined8 *)&(this->CheatSlotInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CheatSlotInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CheatSlotInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->CheatItemInfoMap = 0;
  *(undefined8 *)&(this->CheatItemInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CheatItemInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CheatItemInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->TagMap = 0;
  *(undefined8 *)&(this->TagMap).field_0x8 = 0;
  *(undefined8 *)&(this->TagMap).field_0x20 = 0;
  *(undefined4 *)&(this->TagMap).field_0x28 = 0;
  *(undefined4 *)&(this->TagMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagMap).field_0x34 = 0;
  *(undefined4 *)&(this->TagMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TagMap).field_0x40 = 0;
  *(undefined4 *)&(this->TagMap).field_0x48 = 0;
  this->IsCrossHairRayDebug = false;
  this->TabIndex = 1;
  this->TagType = 0;
  return this;
}

// UDS_CheatData @ 14b44e780

UDS_CheatData * __thiscall
UDS_CheatData::UDS_CheatData(UDS_CheatData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_CheatData__6B_;
  *(undefined8 *)&this->CheatSlotInfoMap = 0;
  *(undefined8 *)&(this->CheatSlotInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CheatSlotInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CheatSlotInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->CheatItemInfoMap = 0;
  *(undefined8 *)&(this->CheatItemInfoMap).field_0x8 = 0;
  *(undefined8 *)&(this->CheatItemInfoMap).field_0x20 = 0;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x28 = 0;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x34 = 0;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CheatItemInfoMap).field_0x40 = 0;
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x48 = 0;
  *(undefined8 *)&this->TagMap = 0;
  *(undefined8 *)&(this->TagMap).field_0x8 = 0;
  *(undefined8 *)&(this->TagMap).field_0x20 = 0;
  *(undefined4 *)&(this->TagMap).field_0x28 = 0;
  *(undefined4 *)&(this->TagMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TagMap).field_0x34 = 0;
  *(undefined4 *)&(this->TagMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TagMap).field_0x40 = 0;
  *(undefined4 *)&(this->TagMap).field_0x48 = 0;
  this->IsCrossHairRayDebug = false;
  this->TabIndex = 1;
  this->TagType = 0;
  return this;
}

// ~UDS_CheatData @ 14b450a80

void __thiscall UDS_CheatData::~UDS_CheatData(UDS_CheatData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_CheatData__6B_;
  *(undefined4 *)&(this->TagMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TagMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TagMap);
  *(undefined4 *)&(this->CheatItemInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CheatItemInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CheatItemInfoMap);
  *(undefined4 *)&(this->CheatSlotInfoMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CheatSlotInfoMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CheatSlotInfoMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b4545f0

UClass * __cdecl UDS_CheatData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_CheatData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CheatData",
               &Z_Registration_Info_UClass_UDS_CheatData.InnerSingleton,
               StaticRegisterNativesUDS_CheatData,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_CheatData>,InternalVTableHelperCtorCaller<UDS_CheatData>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_CheatData.InnerSingleton;
}

// StaticRegisterNativesUDS_CheatData @ 14b4551a0

void __cdecl UDS_CheatData::StaticRegisterNativesUDS_CheatData(void)

{
  return;
}

// GetCheatItemInfo @ 14ba46280

FDS_CheatItemInfo * __thiscall UDS_CheatData::GetCheatItemInfo(UDS_CheatData *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_CheatItemInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->CheatItemInfoMap).field_0x8 != *(int *)&(this->CheatItemInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CheatItemInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CheatItemInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->CheatItemInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->CheatItemInfoMap;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x50) == param_1) {
          pFVar3 = TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
                                  *)&this->CheatItemInfoMap,param_1);
          return pFVar3;
        }
        iVar2 = *(int *)(lVar1 + 0x48 + (longlong)iVar2 * 0x50);
      } while (iVar2 != -1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FString::FString(&emptyCheatItemInfo.ItemQuantity,"1");
      atexit(`UDS_CheatData::GetCheatItemInfo'::__l5::
             _dynamic_atexit_destructor_for__emptyCheatItemInfo__);
      _Init_thread_footer(&::_TSS0);
      return &emptyCheatItemInfo;
    }
  }
  return &emptyCheatItemInfo;
}

// GetCheatItemInfoMap @ 14ba46370

TMap<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
* __thiscall UDS_CheatData::GetCheatItemInfoMap(UDS_CheatData *this)

{
  return &this->CheatItemInfoMap;
}

// GetCheatSlotInfo @ 14ba46380

FDS_CheatSlotInfo * __thiscall UDS_CheatData::GetCheatSlotInfo(UDS_CheatData *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FDS_CheatSlotInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->CheatSlotInfoMap).field_0x8 != *(int *)&(this->CheatSlotInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CheatSlotInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CheatSlotInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->CheatSlotInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->CheatSlotInfoMap;
      do {
        if (*(int *)((longlong)iVar2 * 0x88 + lVar1) == param_1) {
          pFVar3 = TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
                                  *)&this->CheatSlotInfoMap,param_1);
          return pFVar3;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x88 + 0x80 + lVar1);
      } while (iVar2 != -1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CheatData::GetCheatSlotInfo'::__l5::
             _dynamic_atexit_destructor_for__emptyCheatSlotInfo__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &emptyCheatSlotInfo;
}

// GetCheatSlotInfoMap @ 14ba46450

TMap<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
* __thiscall UDS_CheatData::GetCheatSlotInfoMap(UDS_CheatData *this)

{
  return &this->CheatSlotInfoMap;
}

// GetFileteredCheatItemInfoArray @ 14ba4ac60

void __thiscall
UDS_CheatData::GetFileteredCheatItemInfoArray
          (UDS_CheatData *this,TArray<FDS_CheatItemInfo,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  TMap<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
  *this_00;
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  void *_Src;
  code *pcVar5;
  TMap<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
  *pTVar6;
  bool bVar7;
  bool bVar8;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar9;
  bool *pbVar10;
  FDS_CharacterBaseTableRow *pFVar11;
  undefined8 *puVar12;
  FString *pFVar13;
  longlong lVar14;
  undefined1 *puVar15;
  int iVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  int iVar21;
  uint *puVar22;
  TMap<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
  *pTVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  undefined1 local_res20 [8];
  undefined1 local_138 [4];
  uint local_134;
  uint local_130;
  FString local_128;
  TArray<int,TSizedDefaultAllocator<32>_> local_118;
  TBitArray<FDefaultBitArrayAllocator> *local_108;
  TMap<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
  *local_100;
  FString local_f8;
  FString local_e8;
  TMap<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  TMap<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
  *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  FDS_StringItemID local_70;
  FString local_60;
  FString local_50;
  
  iVar21 = 0;
  local_130 = 0;
  DestructItems<FDS_CheatItemInfo,int>
            ((FDS_CheatItemInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  ::FString::ToLower(param_2,&local_e8);
  DS_Util::GetKMPPrefixTable(&local_e8,&local_118);
  pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->CheatItemInfoMap).field_0x10;
  iVar3 = *(int *)&(this->CheatItemInfoMap).field_0x28;
  pTVar23 = &this->CheatItemInfoMap;
  uStack_cc = 1;
  local_b8 = 0;
  iStack_bc = local_b8;
  if (iVar3 != 0) {
    puVar22 = *(uint **)&(this->CheatItemInfoMap).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)pTVar24;
    }
    uVar19 = *puVar22;
    local_b8 = 0;
    iVar21 = 0;
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar21;
      local_b8 = local_b8 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_bc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14ba4ad7d;
      uVar19 = puVar22[lVar14 + 1];
    }
    uStack_cc = -uVar19 & uVar19;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_a8 = (int)lVar14;
    iStack_bc = local_b8 + -1 + local_a8;
    if (iVar3 < iStack_bc) {
      iStack_bc = iVar3;
    }
  }
LAB_14ba4ad7d:
  uVar19 = *(uint *)&(this->CheatItemInfoMap).field_0x28;
  uVar18 = uVar19 & 0xffffffe0;
  iStack_b0 = *(int *)&(this->CheatItemInfoMap).field_0x8 -
              *(int *)&(this->CheatItemInfoMap).field_0x34;
  uStack_c0 = 0xffffffff;
  TStack_98._padding_ = CONCAT44(uStack_cc,iVar21);
  TStack_98.CurrentBitIndex = iStack_bc;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_98._28_4_ = iStack_bc;
  TStack_98.BaseBitIndex = local_b8;
  uStack_78 = CONCAT44(uStack_ac,iStack_b0);
  local_134 = uVar19;
  local_108 = pTVar24;
  local_100 = pTVar23;
  local_d8 = pTVar23;
  iStack_d0 = iVar21;
  local_c8 = (undefined1 *)pTVar24;
  iStack_b4 = iStack_bc;
  local_a0 = pTVar23;
  TStack_98.Array = pTVar24;
  if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->CheatItemInfoMap).field_0x28;
  if (uVar19 != uVar4) {
    puVar15 = *(undefined1 **)&(this->CheatItemInfoMap).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = (undefined1 *)pTVar24;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar14 = (longlong)iVar16;
      uVar18 = uVar18 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar4;
      local_134 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14ba4ae90;
      uVar19 = *(uint *)(puVar15 + lVar14 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar19 = (int)lVar14 + -1 + uVar18;
    local_134 = uVar19;
    if ((int)uVar4 < (int)uVar19) {
      uVar19 = uVar4;
      local_134 = uVar4;
    }
  }
LAB_14ba4ae90:
  do {
    pTVar6 = local_a0;
    if (*(int *)&local_a0->field_0x8 - *(int *)&local_a0->field_0x34 != (int)uStack_78) {
      `TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatItemInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_98.CurrentBitIndex == uVar19) && (TStack_98.Array == pTVar24)) &&
       (pTVar6 == pTVar23)) {
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.AllocatorInstance.Data);
      }
      return;
    }
    lVar14 = (longlong)TStack_98.CurrentBitIndex * 0x50 + *(longlong *)pTVar6;
    this_00 = &this->TagMap;
    pTVar9 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
             ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                            *)this_00,0);
    if (*(int *)&pTVar9->field_0x8 != *(int *)&pTVar9->field_0x34) {
      puVar15 = &pTVar9->field_0x38;
      if (*(undefined1 **)&pTVar9->field_0x40 != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)&pTVar9->field_0x40;
      }
      iVar21 = *(int *)(puVar15 +
                       (ulonglong)(*(int *)&pTVar9->field_0x48 - 1U & *(uint *)(lVar14 + 0x18)) * 4)
      ;
      if (iVar21 != -1) {
        do {
          if (*(uint *)(*(longlong *)pTVar9 + (longlong)iVar21 * 0x10) == *(uint *)(lVar14 + 0x18))
          {
            pTVar9 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                     ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                                    *)this_00,0);
            pbVar10 = TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                      ::FindChecked((TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                                     *)pTVar9,*(int *)(lVar14 + 0x18));
            if (*pbVar10 == false) goto LAB_14ba4b235;
            break;
          }
          iVar21 = *(int *)(*(longlong *)pTVar9 + 8 + (longlong)iVar21 * 0x10);
        } while (iVar21 != -1);
      }
    }
    pTVar9 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
             ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                            *)this_00,1);
    if (*(int *)&pTVar9->field_0x8 != *(int *)&pTVar9->field_0x34) {
      puVar15 = &pTVar9->field_0x38;
      if (*(undefined1 **)&pTVar9->field_0x40 != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)&pTVar9->field_0x40;
      }
      iVar21 = *(int *)(puVar15 +
                       ((ulonglong)(*(int *)&pTVar9->field_0x48 - 1) &
                       (ulonglong)*(byte *)(lVar14 + 0x1c)) * 4);
      if (iVar21 != -1) {
        do {
          if (*(uint *)(*(longlong *)pTVar9 + (longlong)iVar21 * 0x10) ==
              (uint)*(byte *)(lVar14 + 0x1c)) {
            pTVar9 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                     ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                                    *)this_00,1);
            pbVar10 = TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                      ::FindChecked((TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                                     *)pTVar9,(uint)*(byte *)(lVar14 + 0x1c));
            if (*pbVar10 == false) goto LAB_14ba4b235;
            break;
          }
          iVar21 = *(int *)(*(longlong *)pTVar9 + 8 + (longlong)iVar21 * 0x10);
        } while (iVar21 != -1);
      }
    }
    pTVar9 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
             ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                            *)this_00,2);
    if (*(int *)&pTVar9->field_0x8 != *(int *)&pTVar9->field_0x34) {
      puVar15 = &pTVar9->field_0x38;
      if (*(undefined1 **)&pTVar9->field_0x40 != (undefined1 *)0x0) {
        puVar15 = *(undefined1 **)&pTVar9->field_0x40;
      }
      iVar21 = *(int *)(puVar15 +
                       ((ulonglong)(*(int *)&pTVar9->field_0x48 - 1) &
                       (ulonglong)*(byte *)(lVar14 + 0x1d)) * 4);
      if (iVar21 != -1) {
        do {
          if (*(uint *)(*(longlong *)pTVar9 + (longlong)iVar21 * 0x10) ==
              (uint)*(byte *)(lVar14 + 0x1d)) {
            pTVar9 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                     ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                                    *)this_00,2);
            pbVar10 = TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                      ::FindChecked((TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                                     *)pTVar9,(uint)*(byte *)(lVar14 + 0x1d));
            if (*pbVar10 == false) goto LAB_14ba4b235;
            break;
          }
          iVar21 = *(int *)(*(longlong *)pTVar9 + 8 + (longlong)iVar21 * 0x10);
        } while (iVar21 != -1);
      }
    }
    piVar17 = *(int **)(lVar14 + 0x20);
    bVar7 = false;
    iVar21 = *(int *)(lVar14 + 0x28);
    piVar1 = piVar17 + iVar21;
    while( true ) {
      if (*(int *)(lVar14 + 0x28) != iVar21) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_138);
      }
      if (piVar17 == piVar1) goto LAB_14ba4b131;
      pFVar11 = FDS_CharacterBaseTableRow::GetRef((longlong)*piVar17,true);
      puVar12 = (undefined8 *)(**(code **)((pFVar11->ID_Name)._padding_ + 8))();
      local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_128.Data.ArrayNum = *(int *)(puVar12 + 1);
      lVar20 = (longlong)local_128.Data.ArrayNum;
      _Src = (void *)*puVar12;
      if (local_128.Data.ArrayNum == 0) {
        local_128.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_128.Data.ArrayNum,0,(ForAnyElementType *)&local_128,
                   local_128.Data.ArrayNum,&local_128.Data.ArrayMax);
        memcpy(local_128.Data.AllocatorInstance.Data,_Src,lVar20 * 2);
      }
      pFVar13 = ::FString::ToLower(&local_128,&local_60);
      bVar8 = DS_Util::KMPSearch(pFVar13,&local_e8,&local_118);
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
      }
      if (bVar8) break;
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      piVar17 = piVar17 + 1;
    }
    bVar7 = true;
    if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Data.AllocatorInstance.Data);
    }
LAB_14ba4b131:
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    ::FString::AppendInt(&local_f8,*(int *)(lVar14 + 8));
    bVar8 = DS_Util::KMPSearch(&local_f8,&local_e8,&local_118);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (bVar8) {
      bVar7 = true;
    }
    local_70._padding_ = (longlong)&___7FDS_StringItemID__6B_;
    local_70.ID = *(long64 *)(lVar14 + 0x10);
    pFVar13 = FDS_StringItemID::Str(&local_70);
    uVar19 = local_130;
    pFVar13 = ::FString::ToLower(pFVar13,&local_50);
    bVar8 = DS_Util::KMPSearch(pFVar13,&local_e8,&local_118);
    if ((bVar8) || (bVar7)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    local_130 = uVar19 & 0xfffffffe;
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    pTVar23 = local_100;
    pTVar24 = local_108;
    if (!bVar7) {
      iVar21 = param_1->ArrayNum;
      if (iVar21 == param_1->ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x840,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar21 + 1;
      FDS_CheatItemInfo::FDS_CheatItemInfo
                ((FDS_CheatItemInfo *)((param_1->AllocatorInstance).Data + (longlong)iVar21 * 0x40),
                 (FDS_CheatItemInfo *)(lVar14 + 8));
      pTVar23 = local_100;
      pTVar24 = local_108;
    }
LAB_14ba4b235:
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
    uVar19 = local_134;
  } while( true );
}

// GetFilteredCheatSlotInfoArray @ 14ba4b290

void __thiscall
UDS_CheatData::GetFilteredCheatSlotInfoArray
          (UDS_CheatData *this,TArray<FDS_CheatSlotInfo,TSizedDefaultAllocator<32>_> *param_1,
          FString *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  FDS_CheatSlotInfo *pFVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FDS_CheatSlotInfo *pFVar7;
  code *pcVar8;
  bool bVar9;
  TMap<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
  *pTVar10;
  bool bVar11;
  FString *pFVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  uint local_res10 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_e0;
  FString local_d0;
  TMap<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  int local_90;
  TMap<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
  *local_88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  undefined8 uStack_60;
  FString local_58;
  FString local_48;
  
  bVar9 = false;
  iVar15 = 0;
  local_res10[0] = 0;
  DestructItems<FDS_CheatSlotInfo,int>
            ((FDS_CheatSlotInfo *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&param_1->AllocatorInstance,0,piVar1);
  }
  local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax = 0;
  ::FString::ToLower(param_2,&local_d0);
  DS_Util::GetKMPPrefixTable(&local_d0,&local_e0);
  iVar5 = *(int *)&(this->CheatSlotInfoMap).field_0x28;
  puVar2 = &(this->CheatSlotInfoMap).field_0x10;
  local_c0 = &this->CheatSlotInfoMap;
  uStack_b4 = 1;
  local_a0 = 0;
  iStack_a4 = local_a0;
  if (iVar5 != 0) {
    puVar17 = *(uint **)&(this->CheatSlotInfoMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar18 = *puVar17;
    local_a0 = 0;
    iVar15 = 0;
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar15;
      local_a0 = local_a0 + 0x20;
      iVar15 = iVar15 + 1;
      iStack_a4 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14ba4b3a4;
      uVar18 = puVar17[lVar13 + 1];
    }
    uStack_b4 = -uVar18 & uVar18;
    uVar4 = (ulonglong)uStack_b4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iStack_a4 = local_a0 + -1 + (int)lVar13;
    if (iVar5 < iStack_a4) {
      iStack_a4 = iVar5;
    }
  }
LAB_14ba4b3a4:
  iStack_98 = *(int *)&(this->CheatSlotInfoMap).field_0x8 -
              *(int *)&(this->CheatSlotInfoMap).field_0x34;
  uVar18 = *(uint *)&(this->CheatSlotInfoMap).field_0x28;
  uStack_a8 = 0xffffffff;
  TStack_80._padding_ = CONCAT44(uStack_b4,iVar15);
  uVar19 = uVar18 & 0xffffffe0;
  TStack_80.CurrentBitIndex = iStack_a4;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar18 >> 5;
  TStack_80._28_4_ = iStack_a4;
  TStack_80.BaseBitIndex = local_a0;
  uStack_60 = CONCAT44(uStack_94,iStack_98);
  iStack_b8 = iVar15;
  local_b0 = puVar2;
  iStack_9c = iStack_a4;
  local_88 = local_c0;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(this->CheatSlotInfoMap).field_0x28;
  if (uVar18 != uVar6) {
    puVar16 = *(undefined1 **)&(this->CheatSlotInfoMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar14;
      uVar19 = uVar19 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ba4b4c0;
      uVar18 = *(uint *)(puVar16 + lVar13 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_90 = (int)lVar13;
    uVar18 = local_90 + -1 + uVar19;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_14ba4b4c0:
  do {
    pTVar10 = local_88;
    if (*(int *)&local_88->field_0x8 - *(int *)&local_88->field_0x34 != (int)uStack_60) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_80.CurrentBitIndex == uVar18) &&
        (TStack_80.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar10 == &this->CheatSlotInfoMap)) {
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.AllocatorInstance.Data);
      }
      return;
    }
    lVar13 = (longlong)TStack_80.CurrentBitIndex * 0x88 + *(longlong *)pTVar10;
    pFVar3 = (FDS_CheatSlotInfo *)(lVar13 + 8);
    if (*(int *)(lVar13 + 0xc) == this->TabIndex) {
      pFVar12 = ::FString::ToLower((FString *)(lVar13 + 0x10),&local_48);
      bVar11 = DS_Util::KMPSearch(pFVar12,&local_d0,&local_e0);
      if (bVar11) {
LAB_14ba4b56b:
        bVar11 = false;
      }
      else {
        bVar9 = true;
        pFVar12 = ::FString::ToLower((FString *)(lVar13 + 0x20),&local_58);
        bVar11 = DS_Util::KMPSearch(pFVar12,&local_d0,&local_e0);
        if (bVar11) goto LAB_14ba4b56b;
        bVar11 = true;
      }
      if ((bVar9) &&
         (bVar9 = false, local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (!bVar11) {
        pFVar7 = (FDS_CheatSlotInfo *)(param_1->AllocatorInstance).Data;
        if (((pFVar7 <= pFVar3) && (pFVar3 < pFVar7 + *piVar1)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar15 = param_1->ArrayNum;
        if (iVar15 == *piVar1) {
          iVar15 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x878,&param_1->AllocatorInstance,piVar1);
        }
        param_1->ArrayNum = iVar15 + 1;
        FDS_CheatSlotInfo::FDS_CheatSlotInfo
                  ((FDS_CheatSlotInfo *)
                   ((param_1->AllocatorInstance).Data + (longlong)iVar15 * 0x78),pFVar3);
      }
    }
    TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
  } while( true );
}

// GetInst @ 14ba4c050

TWeakObjectPtr<UDS_CheatData,FWeakObjectPtr> __cdecl UDS_CheatData::GetInst(void)

{
  FWeakObjectPtr in_RCX;
  UDS_DataManager *local_res10 [3];
  
  local_res10[0] = UDS_DataManager::GetInst();
  if (local_res10[0] == (UDS_DataManager *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_CheatData,FWeakObjectPtr>)in_RCX;
  }
  UDS_DataManager::GetCheatData(local_res10[0]);
  return (TWeakObjectPtr<UDS_CheatData,FWeakObjectPtr>)in_RCX;
}

// GetTabIndex @ 14ba506a0

int __thiscall UDS_CheatData::GetTabIndex(UDS_CheatData *this)

{
  return this->TabIndex;
}

// GetTagMap @ 14ba506b0

TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> * __thiscall
UDS_CheatData::GetTagMap(UDS_CheatData *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->TagMap).field_0x8 != *(int *)&(this->TagMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->TagMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->TagMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->TagMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->TagMap;
      do {
        if (*(int *)((longlong)iVar2 * 0x60 + lVar1) == param_1) {
          pTVar3 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                   ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                                  *)&this->TagMap,param_1);
          return pTVar3;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + 0x58 + lVar1);
      } while (iVar2 != -1);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_CheatData::GetTagMap'::__l5::_dynamic_atexit_destructor_for__emptyTagMap__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &emptyTagMap;
}

// GetTagType @ 14ba50780

int __thiscall UDS_CheatData::GetTagType(UDS_CheatData *this)

{
  return this->TagType;
}

// Init @ 14ba52820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UDS_CheatData::Init(UDS_CheatData *this)

{
  TMap<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator> *pTVar9;
  ForAnyElementType *pFVar10;
  int iVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  ForAnyElementType FVar14;
  int iVar15;
  undefined1 auStackY_258 [32];
  undefined1 local_218 [8];
  undefined1 local_210 [12];
  int iStack_204;
  TPairInitializer<int_const_&,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_&&>
  local_200;
  ForAnyElementType local_1f0;
  undefined1 local_1e8 [8];
  TArray<FDS_ItemBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<FDS_CheatKeyBaseTableRow_const_*,TSizedDefaultAllocator<32>_> local_1d0;
  ForAnyElementType local_1c0;
  undefined4 *local_1b8;
  undefined4 local_1a8 [2];
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined1 local_193;
  ForAnyElementType local_190;
  undefined8 local_188;
  undefined1 local_180;
  FString local_178;
  undefined1 local_168 [8];
  undefined1 local_160 [8];
  FDS_CheatSlotParam *local_158;
  FDS_CheatSlotParam *local_150;
  undefined4 *local_148;
  FDS_CheatSlotParam *local_140;
  TPairInitializer<int_const_&,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_&&>
  *local_138;
  FDS_CheatSlotParam *local_130;
  undefined1 local_128 [24];
  undefined8 uStack_110;
  void *local_108;
  undefined4 local_100;
  uint uStack_fc;
  int local_f8;
  int local_f4;
  undefined8 local_f0;
  void *local_e8;
  ulonglong local_e0;
  TPairInitializer<int_const_&,FDS_CheatSlotInfo_&> local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
  local_a0;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this_00 = &this->TagMap;
  local_210._0_8_ = &TAG_ITEM_TYPE;
  unique0x00008e00 = (FScriptContainerElement *)local_128;
  local_128._16_8_ = (FScriptContainerElement *)0x0;
  uStack_110._0_4_ = 0;
  uStack_110._4_4_ = 0;
  local_f0._0_1_ = false;
  local_f0._1_7_ = 0;
  local_e0 = 0;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  uStack_fc = 0x80;
  local_f8 = -1;
  local_f4 = 0;
  local_e8 = (void *)0x0;
  TSet<TTuple<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_&&>_>
            ((TSet<TTuple<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_200,(bool *)local_210);
  local_e0 = local_e0 & 0xffffffff00000000;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  iVar11 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = -1;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < uStack_fc) {
    uStack_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  local_f0._0_1_ = false;
  local_f0._1_7_ = 0;
  local_210._0_8_ = &TAG_GRADE_TYPE;
  unique0x00008e00 = (FScriptContainerElement *)local_128;
  local_e0 = 0;
  local_128._16_8_ = (FScriptContainerElement *)0x0;
  uStack_110._0_4_ = 0;
  uStack_110._4_4_ = 0;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  uStack_fc = 0x80;
  local_f8 = -1;
  local_f4 = 0;
  local_e8 = (void *)0x0;
  TSet<TTuple<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_&&>_>
            ((TSet<TTuple<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_200,(bool *)local_210);
  local_e0 = local_e0 & 0xffffffff00000000;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  iVar11 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = -1;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < uStack_fc) {
    uStack_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  local_f0._0_1_ = false;
  local_f0._1_7_ = 0;
  local_210._0_8_ = &TAG_EQUIP_TYPE;
  unique0x00008e00 = (FScriptContainerElement *)local_128;
  local_e0 = 0;
  local_128._16_8_ = (FScriptContainerElement *)0x0;
  uStack_110._0_4_ = 0;
  uStack_110._4_4_ = 0;
  local_128._0_8_ = (FScriptContainerElement *)0x0;
  local_128._8_8_ = 0;
  local_108 = (void *)0x0;
  local_100 = 0;
  uStack_fc = 0x80;
  local_f8 = -1;
  local_f4 = 0;
  local_e8 = (void *)0x0;
  TSet<TTuple<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_&&>_>
            ((TSet<TTuple<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>_>,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>,FDefaultSetAllocator>
              *)this_00,&local_200,(bool *)local_210);
  local_e0 = local_e0 & 0xffffffff00000000;
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  iVar11 = SUB84(local_128._8_8_,4);
  local_128._8_8_ = local_128._8_8_ & 0xffffffff00000000;
  if (iVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_128,0,(int *)(local_128 + 0xc));
  }
  local_f8 = -1;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < uStack_fc) {
    uStack_fc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_128 + 0x10),0);
  }
  if (local_108 != (void *)0x0) {
    FMemory::Free(local_108);
  }
  if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._0_8_);
  }
  EDS_ItemTypeValues((TArray<EDS_ItemType,TSizedDefaultAllocator<32>_> *)local_210);
  iVar11 = (int)stack0xfffffffffffffdf8;
  pFVar1 = (FScriptContainerElement *)(local_210._0_8_ + (longlong)iVar11 * 4);
  pFVar13 = (FScriptContainerElement *)local_210._0_8_;
  while( true ) {
    if ((int)stack0xfffffffffffffdf8 != iVar11) {
      `TCheckedPointerIterator<enum_EDS_ItemType,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_218 + 1);
    }
    if (pFVar13 == pFVar1) break;
    uVar3 = *(uint *)pFVar13;
    pTVar9 = (TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator> *)
             TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
             ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                            *)this_00,0);
    local_200.Value =
         (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
         (local_218 + 4);
    local_218[0] = 1;
    local_1f0.Data = (FScriptContainerElement *)local_218;
    local_218._4_4_ = uVar3;
    TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,bool_&&>_>
              (pTVar9,(TPairInitializer<int_&&,bool_&&> *)&local_200,(bool *)&local_200.Value);
    pFVar13 = pFVar13 + 4;
  }
  if ((FScriptContainerElement *)local_210._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_210._0_8_);
  }
  local_d8.Key._0_4_ = 0x3020100;
  local_d8.Key._4_2_ = 0x504;
  local_d8.Key._6_1_ = 6;
  local_210._0_8_ = (FScriptContainerElement *)0x0;
  local_210._8_4_ = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,7,0,(ForAnyElementType *)local_210,7,&iStack_204);
  memcpy((void *)local_210._0_8_,&local_d8,7);
  uVar8 = local_210._8_4_;
  uVar12 = (ulonglong)(int)local_210._8_4_;
  pFVar1 = (FScriptContainerElement *)(local_210._0_8_ + uVar12);
  pFVar13 = (FScriptContainerElement *)local_210._0_8_;
  while( true ) {
    if ((int)uVar12 != uVar8) {
      `TCheckedPointerIterator<enum_EDS_GradeType,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_218 + 1);
    }
    if (pFVar13 == pFVar1) break;
    FVar2 = *pFVar13;
    pTVar9 = (TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator> *)
             TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
             ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                            *)this_00,1);
    local_200.Value =
         (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
         (local_218 + 4);
    local_218[0] = 1;
    local_1f0.Data = (FScriptContainerElement *)local_218;
    local_218._4_4_ = ZEXT14((byte)FVar2);
    TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,bool_&&>_>
              (pTVar9,(TPairInitializer<int_&&,bool_&&> *)&local_200,(bool *)&local_200.Value);
    uVar12 = (ulonglong)stack0xfffffffffffffdf8 & 0xffffffff;
    pFVar13 = pFVar13 + 1;
  }
  if ((FScriptContainerElement *)local_210._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_210._0_8_);
  }
  local_218._4_4_ = 0x3020100;
  local_210._0_8_ = (FScriptContainerElement *)0x0;
  local_210._8_4_ = 4;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,4,0,(ForAnyElementType *)local_210,4,&iStack_204);
  memcpy((void *)local_210._0_8_,local_218 + 4,4);
  uVar8 = local_210._8_4_;
  uVar12 = (ulonglong)(int)local_210._8_4_;
  pFVar1 = (FScriptContainerElement *)(local_210._0_8_ + uVar12);
  pFVar13 = (FScriptContainerElement *)local_210._0_8_;
  while( true ) {
    if ((int)uVar12 != uVar8) {
      `TCheckedPointerIterator<enum_EDS_CharEquipType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_218 + 1);
    }
    if (pFVar13 == pFVar1) break;
    FVar2 = *pFVar13;
    pTVar9 = (TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator> *)
             TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
             ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                            *)this_00,2);
    local_200.Value =
         (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
         (local_218 + 4);
    local_218[0] = 1;
    local_1f0.Data = (FScriptContainerElement *)local_218;
    local_218._4_4_ = ZEXT14((byte)FVar2);
    TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,bool_&&>_>
              (pTVar9,(TPairInitializer<int_&&,bool_&&> *)&local_200,(bool *)&local_200.Value);
    uVar12 = (ulonglong)stack0xfffffffffffffdf8 & 0xffffffff;
    pFVar13 = pFVar13 + 1;
  }
  if ((FScriptContainerElement *)local_210._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_210._0_8_);
  }
  TSet<TTuple<int,FDS_CheatSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FDS_CheatSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>,FDefaultSetAllocator>
           *)&this->CheatSlotInfoMap);
  local_210._0_8_ = &this->CheatItemInfoMap;
  TSet<TTuple<int,FDS_CheatItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int,FDS_CheatItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>,FDefaultSetAllocator>
           *)local_210._0_8_);
  FDS_CheatKeyBaseTableRow::GetAll(&local_1d0);
  if (local_1d0.ArrayNum != 0) {
    TSet<TTuple<int,FDS_CheatSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<int,FDS_CheatSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>,FDefaultSetAllocator>
               *)&this->CheatSlotInfoMap,local_1d0.ArrayNum);
    iVar11 = local_1d0.ArrayNum;
    uVar7 = _UNK_150631d98;
    uVar6 = ___xmm_00000000ffffffff0000008000000000;
    pFVar1 = local_1d0.AllocatorInstance.Data + (longlong)local_1d0.ArrayNum * 8;
    FVar14.Data = local_1d0.AllocatorInstance.Data;
    while( true ) {
      if (local_1d0.ArrayNum != iVar11) {
        `TCheckedPointerIterator<FDS_CheatKeyBaseTableRow_const_*,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_218 + 1);
      }
      if (FVar14.Data == pFVar1) break;
      lVar5 = *(longlong *)FVar14.Data;
      if (lVar5 != 0) {
        local_a0.Elements._40_8_ = uVar6;
        local_a0.Elements._48_8_ = uVar7;
        local_c0.Data = (FScriptContainerElement *)0x0;
        local_b8 = 0;
        local_b0.Data = (FScriptContainerElement *)0x0;
        local_a8 = 0;
        local_a0.Elements._0_8_ = 0;
        local_a0.Elements._8_8_ = 0;
        local_a0.Elements._32_8_ = 0;
        local_a0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
        local_a0.HashSize = 0;
        _local_c8 = CONCAT44(*(undefined4 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 8));
        iVar15 = 0;
        if (&local_c0 != (ForAnyElementType *)(lVar5 + 0x18)) {
          uVar3 = *(uint *)(lVar5 + 0x20);
          pFVar13 = ((ForAnyElementType *)(lVar5 + 0x18))->Data;
          local_b8 = (ulonglong)uVar3;
          iVar15 = 0;
          if (uVar3 != 0) {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,uVar3,0,&local_c0,uVar3,(int *)((longlong)&local_b8 + 4));
            memcpy(local_c0.Data,pFVar13,(longlong)(int)uVar3 * 2);
            iVar15 = local_a8._4_4_;
          }
        }
        pFVar10 = (ForAnyElementType *)(*(longlong *)FVar14.Data + 0x28);
        if (&local_b0 != pFVar10) {
          iVar4 = *(int *)(*(longlong *)FVar14.Data + 0x30);
          pFVar13 = pFVar10->Data;
          local_a8 = CONCAT44(local_a8._4_4_,iVar4);
          if ((iVar4 == 0) && (iVar15 == 0)) {
            local_a8 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar4,iVar15,&local_b0,iVar4,(int *)((longlong)&local_a8 + 4));
            if (iVar4 != 0) {
              memcpy(local_b0.Data,pFVar13,(longlong)iVar4 * 2);
            }
          }
        }
        lVar5 = *(longlong *)FVar14.Data;
        local_1f0.Data =
             (FScriptContainerElement *)
             MakeCheatSlotParam(this,(FDS_CheatSlotParam *)local_128,
                                (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x40),
                                (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x50),
                                (EDS_ParameterType *)(lVar5 + 0x39),*(bool *)(lVar5 + 0x38));
        local_200.Value =
             (TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *)
             (local_218 + 4);
        local_218._4_4_ = 0;
        TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_&&,FDS_CheatSlotParam_&&>_>
                  (&local_a0,(TPairInitializer<int_&&,FDS_CheatSlotParam_&&> *)local_168,
                   (bool *)&local_200.Value);
        if ((void *)CONCAT44(uStack_fc,local_100) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(uStack_fc,local_100));
        }
        DestructItems<FString,int>((FString *)local_128._16_8_,(int)uStack_110);
        if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_128._16_8_);
        }
        DestructItems<FString,int>((FString *)local_128._0_8_,local_128._8_4_);
        if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_128._0_8_);
        }
        lVar5 = *(longlong *)FVar14.Data;
        local_150 = MakeCheatSlotParam(this,(FDS_CheatSlotParam *)local_128,
                                       (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x68)
                                       ,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                                        (lVar5 + 0x78),(EDS_ParameterType *)(lVar5 + 0x61),
                                       *(bool *)(lVar5 + 0x60));
        local_158 = (FDS_CheatSlotParam *)local_1e8;
        local_1e8._0_4_ = 1;
        TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_&&,FDS_CheatSlotParam_&&>_>
                  (&local_a0,(TPairInitializer<int_&&,FDS_CheatSlotParam_&&> *)(local_168 + 4),
                   (bool *)&local_158);
        if ((void *)CONCAT44(uStack_fc,local_100) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(uStack_fc,local_100));
        }
        DestructItems<FString,int>((FString *)local_128._16_8_,(int)uStack_110);
        if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_128._16_8_);
        }
        DestructItems<FString,int>((FString *)local_128._0_8_,local_128._8_4_);
        if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_128._0_8_);
        }
        lVar5 = *(longlong *)FVar14.Data;
        local_140 = MakeCheatSlotParam(this,(FDS_CheatSlotParam *)local_128,
                                       (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar5 + 0x90)
                                       ,(TArray<FString,TSizedDefaultAllocator<32>_> *)
                                        (lVar5 + 0xa0),(EDS_ParameterType *)(lVar5 + 0x89),
                                       *(bool *)(lVar5 + 0x88));
        local_148 = (undefined4 *)(local_1e8 + 4);
        local_1e8._4_4_ = 2;
        TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_&&,FDS_CheatSlotParam_&&>_>
                  (&local_a0,(TPairInitializer<int_&&,FDS_CheatSlotParam_&&> *)local_160,
                   (bool *)&local_148);
        if ((void *)CONCAT44(uStack_fc,local_100) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(uStack_fc,local_100));
        }
        DestructItems<FString,int>((FString *)local_128._16_8_,(int)uStack_110);
        if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_128._16_8_);
        }
        DestructItems<FString,int>((FString *)local_128._0_8_,local_128._8_4_);
        if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_128._0_8_);
        }
        lVar5 = *(longlong *)FVar14.Data;
        local_130 = MakeCheatSlotParam(this,(FDS_CheatSlotParam *)local_128,
                                       (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar5 + 0xb8)
                                       ,(TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar5 + 200)
                                       ,(EDS_ParameterType *)(lVar5 + 0xb1),*(bool *)(lVar5 + 0xb0))
        ;
        local_138 = &local_200;
        local_200.Key._0_4_ = 3;
        TSet<TTuple<int,FDS_CheatSlotParam>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_&&,FDS_CheatSlotParam_&&>_>
                  (&local_a0,(TPairInitializer<int_&&,FDS_CheatSlotParam_&&> *)(local_160 + 4),
                   (bool *)&local_138);
        if ((void *)CONCAT44(uStack_fc,local_100) != (void *)0x0) {
          FMemory::Free((void *)CONCAT44(uStack_fc,local_100));
        }
        DestructItems<FString,int>((FString *)local_128._16_8_,(int)uStack_110);
        if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_128._16_8_);
        }
        DestructItems<FString,int>((FString *)local_128._0_8_,local_128._8_4_);
        if ((FScriptContainerElement *)local_128._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_128._0_8_);
        }
        local_1c0.Data = (FScriptContainerElement *)(*(longlong *)FVar14.Data + 8);
        local_1b8 = &local_c8;
        TSet<TTuple<int,FDS_CheatSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<int_const_&,FDS_CheatSlotInfo_&>_>
                  ((TSet<TTuple<int,FDS_CheatSlotInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>,FDefaultSetAllocator>
                    *)&this->CheatSlotInfoMap,&local_d8,(bool *)&local_1c0);
        local_a0.HashSize = 0;
        if (local_a0.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)local_a0.Hash.SecondaryData);
        }
        TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<int,FDS_CheatSlotParam>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_a0.Elements);
        if (local_b0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b0.Data);
        }
        if (local_c0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.Data);
        }
      }
      FVar14.Data = FVar14.Data + 8;
    }
    FDS_ItemBaseTableRow::GetAll(&local_1e0);
    uVar6 = local_210._0_8_;
    if (local_1e0.ArrayNum != 0) {
      TSet<TTuple<int,FDS_CheatItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<int,FDS_CheatItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>,FDefaultSetAllocator>
                 *)local_210._0_8_,local_1e0.ArrayNum);
      iVar11 = local_1e0.ArrayNum;
      pFVar1 = local_1e0.AllocatorInstance.Data + (longlong)local_1e0.ArrayNum * 8;
      FVar14.Data = local_1e0.AllocatorInstance.Data;
      while( true ) {
        if (local_1e0.ArrayNum != iVar11) {
          `TCheckedPointerIterator<FDS_ItemBaseTableRow_const_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_218 + 1);
        }
        if (FVar14.Data == pFVar1) break;
        if (*(longlong *)FVar14.Data != 0) {
          local_1a8[0] = 0;
          local_190.Data = (FScriptContainerElement *)0x0;
          local_188 = 0;
          local_180 = 0;
          ::FString::FString(&local_178,"1");
          lVar5 = *(longlong *)FVar14.Data;
          local_1a8[0] = *(undefined4 *)(lVar5 + 8);
          local_194 = *(undefined1 *)(lVar5 + 0x40);
          local_198 = *(undefined4 *)(lVar5 + 0x38);
          local_193 = *(undefined1 *)(lVar5 + 0x58);
          if (&local_190 != (ForAnyElementType *)(lVar5 + 0x48)) {
            iVar15 = *(int *)(lVar5 + 0x50);
            pFVar13 = ((ForAnyElementType *)(lVar5 + 0x48))->Data;
            local_188 = CONCAT44(local_188._4_4_,iVar15);
            if ((iVar15 == 0) && (local_188._4_4_ == 0)) {
              local_188 = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar15,local_188._4_4_,&local_190,iVar15,
                         (int *)((longlong)&local_188 + 4));
              if (iVar15 != 0) {
                memcpy(local_190.Data,pFVar13,(longlong)iVar15 << 2);
              }
            }
          }
          local_1a0 = *(undefined8 *)(*(longlong *)FVar14.Data + 0x18);
          local_1c0.Data = (FScriptContainerElement *)(*(longlong *)FVar14.Data + 8);
          local_1b8 = local_1a8;
          TSet<TTuple<int,FDS_CheatItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<int_const_&,FDS_CheatItemInfo_&>_>
                    ((TSet<TTuple<int,FDS_CheatItemInfo>,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>,FDefaultSetAllocator>
                      *)uVar6,(TPairInitializer<int_const_&,FDS_CheatItemInfo_&> *)&local_d8,
                     (bool *)&local_1c0);
          if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.Data.AllocatorInstance.Data);
          }
          if (local_190.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_190.Data);
          }
        }
        FVar14.Data = FVar14.Data + 8;
      }
    }
    if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.AllocatorInstance.Data);
    }
  }
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  return;
}

// MakeCheatSlotParam @ 14ba5dae0

FDS_CheatSlotParam * __thiscall
UDS_CheatData::MakeCheatSlotParam
          (UDS_CheatData *this,FDS_CheatSlotParam *__return_storage_ptr__,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,EDS_ParameterType *param_3,
          bool param_4)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  FString local_18;
  
  this_00 = &__return_storage_ptr__->ParamValue;
  (__return_storage_ptr__->ParamValueList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParamValueList).ArrayNum = 0;
  (__return_storage_ptr__->ParamValueList).ArrayMax = 0;
  (__return_storage_ptr__->ParamTextList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParamTextList).ArrayNum = 0;
  (__return_storage_ptr__->ParamTextList).ArrayMax = 0;
  (this_00->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->ParamValue).Data.ArrayNum = 0;
  (__return_storage_ptr__->ParamValue).Data.ArrayMax = 0;
  __return_storage_ptr__->IsEssential = false;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->ParamTextList,param_1);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=
            (&__return_storage_ptr__->ParamValueList,param_2);
  __return_storage_ptr__->ParamType = *param_3;
  __return_storage_ptr__->IsEssential = param_4;
  if ((param_2->ArrayNum < 1) || (*param_3 == TextBox)) {
    ::FString::FString(&local_18,"");
    if (this_00 != &local_18) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->ParamValue).Data.ArrayNum = local_18.Data.ArrayNum;
      (__return_storage_ptr__->ParamValue).Data.ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    ::FString::operator=(this_00,(FString *)(param_2->AllocatorInstance).Data);
  }
  return __return_storage_ptr__;
}

// SetAllTagChange @ 14ba69fc0

void __thiscall UDS_CheatData::SetAllTagChange(UDS_CheatData *this,bool param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  uVar5 = this->TagType;
  if (*(int *)&(this->TagMap).field_0x8 != *(int *)&(this->TagMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->TagMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->TagMap).field_0x38;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->TagMap).field_0x48 - 1U & uVar5) * 4);
    if (iVar4 != -1) {
      lVar8 = *(longlong *)&this->TagMap;
      while (*(uint *)((longlong)iVar4 * 0x60 + lVar8) != uVar5) {
        iVar4 = *(int *)((longlong)iVar4 * 0x60 + 0x58 + lVar8);
        if (iVar4 == -1) {
          return;
        }
      }
      pTVar7 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
               ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                              *)&this->TagMap,uVar5);
      iVar4 = *(int *)&pTVar7->field_0x28;
      iVar12 = 0;
      uVar5 = 1;
      iVar14 = 0;
      puVar9 = &pTVar7->field_0x10;
      iVar6 = 0;
      if (iVar4 != 0) {
        puVar15 = *(uint **)&pTVar7->field_0x20;
        if (*(uint **)&pTVar7->field_0x20 == (uint *)0x0) {
          puVar15 = (uint *)puVar9;
        }
        uVar11 = *puVar15;
        while (uVar11 == 0) {
          lVar8 = (longlong)iVar12;
          iVar14 = iVar14 + 0x20;
          iVar12 = iVar12 + 1;
          iVar6 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ba6a0fd;
          uVar11 = puVar15[lVar8 + 1];
        }
        uVar5 = -uVar11 & uVar11;
        uVar1 = (ulonglong)uVar5 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar6 = iVar14 + -1 + (int)lVar8;
        if (iVar4 < iVar6) {
          iVar6 = iVar4;
        }
      }
LAB_14ba6a0fd:
      uVar11 = *(uint *)&pTVar7->field_0x28;
      uVar10 = uVar11 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar5,iVar12);
      TStack_60.CurrentBitIndex = iVar6;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      iVar12 = (int)uVar11 >> 5;
      TStack_60._28_4_ = iVar6;
      TStack_60.BaseBitIndex = iVar14;
      uStack_40 = CONCAT44(uStack_6c,*(int *)&pTVar7->field_0x8 - *(int *)&pTVar7->field_0x34);
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar9;
      if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar5 = *(uint *)&pTVar7->field_0x28;
      if (uVar11 != uVar5) {
        puVar13 = *(undefined1 **)&pTVar7->field_0x20;
        if (*(undefined1 **)&pTVar7->field_0x20 == (undefined1 *)0x0) {
          puVar13 = puVar9;
        }
        uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
        while (uVar11 == 0) {
          lVar8 = (longlong)iVar12;
          uVar10 = uVar10 + 0x20;
          iVar12 = iVar12 + 1;
          uVar11 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14ba6a210;
          uVar11 = *(uint *)(puVar13 + lVar8 * 4 + 4);
        }
        uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar11 = (int)lVar8 + -1 + uVar10;
        if ((int)uVar5 < (int)uVar11) {
          uVar11 = uVar5;
        }
      }
LAB_14ba6a210:
      while( true ) {
        if (*(int *)&pTVar7->field_0x8 - *(int *)&pTVar7->field_0x34 != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_60.CurrentBitIndex == uVar11) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar9)) break;
        *(bool *)(*(longlong *)pTVar7 + 4 + (longlong)TStack_60.CurrentBitIndex * 0x10) = param_1;
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
  }
  return;
}

// SetCheatItemQuantity @ 14ba6b260

void __thiscall
UDS_CheatData::SetCheatItemQuantity(UDS_CheatData *this,int param_1,FString *param_2)

{
  longlong lVar1;
  int iVar2;
  FDS_CheatItemInfo *pFVar3;
  undefined1 *puVar4;
  
  if (*(int *)&(this->CheatItemInfoMap).field_0x8 != *(int *)&(this->CheatItemInfoMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->CheatItemInfoMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->CheatItemInfoMap).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->CheatItemInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      lVar1 = *(longlong *)&this->CheatItemInfoMap;
      do {
        if (*(int *)(lVar1 + (longlong)iVar2 * 0x50) == param_1) {
          pFVar3 = TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
                   ::FindChecked((TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
                                  *)&this->CheatItemInfoMap,param_1);
          ::FString::operator=(&pFVar3->ItemQuantity,param_2);
          return;
        }
        iVar2 = *(int *)(lVar1 + 0x48 + (longlong)iVar2 * 0x50);
      } while (iVar2 != -1);
      return;
    }
  }
  return;
}

// SetCheatItemTradeAble @ 14ba6b2f0

void __thiscall UDS_CheatData::SetCheatItemTradeAble(UDS_CheatData *this,int param_1,bool *param_2)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  FDS_CheatItemInfo *pFVar4;
  undefined1 *puVar5;
  
  if (*(int *)&(this->CheatItemInfoMap).field_0x8 != *(int *)&(this->CheatItemInfoMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->CheatItemInfoMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->CheatItemInfoMap).field_0x38;
    }
    iVar3 = *(int *)(puVar5 + (ulonglong)
                              (*(int *)&(this->CheatItemInfoMap).field_0x48 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&this->CheatItemInfoMap;
      while (*(int *)(lVar2 + (longlong)iVar3 * 0x50) != param_1) {
        iVar3 = *(int *)(lVar2 + 0x48 + (longlong)iVar3 * 0x50);
        if (iVar3 == -1) {
          return;
        }
      }
      bVar1 = *param_2;
      pFVar4 = TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
               ::FindChecked((TMapBase<int,FDS_CheatItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatItemInfo,0>_>
                              *)&this->CheatItemInfoMap,param_1);
      pFVar4->bIsTradeAble = bVar1;
    }
  }
  return;
}

// SetCheatSlotInfo @ 14ba6b370

void __thiscall
UDS_CheatData::SetCheatSlotInfo(UDS_CheatData *this,int param_1,int param_2,FString *param_3)

{
  TMap<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
  *this_00;
  int iVar1;
  FDS_CheatSlotInfo *pFVar2;
  FDS_CheatSlotParam *pFVar3;
  undefined1 *puVar4;
  
  this_00 = &this->CheatSlotInfoMap;
  if (*(int *)&(this->CheatSlotInfoMap).field_0x8 == *(int *)&(this->CheatSlotInfoMap).field_0x34) {
    return;
  }
  puVar4 = *(undefined1 **)&(this->CheatSlotInfoMap).field_0x40;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &(this->CheatSlotInfoMap).field_0x38;
  }
  iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->CheatSlotInfoMap).field_0x48 - 1U & param_1)
                            * 4);
  if (iVar1 == -1) {
    return;
  }
  while (*(int *)((longlong)iVar1 * 0x88 + *(longlong *)this_00) != param_1) {
    iVar1 = *(int *)((longlong)iVar1 * 0x88 + 0x80 + *(longlong *)this_00);
    if (iVar1 == -1) {
      return;
    }
  }
  pFVar2 = TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
           ::FindChecked((TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
                          *)this_00,param_1);
  if (*(int *)&(pFVar2->CheatSlotParamMap).field_0x8 ==
      *(int *)&(pFVar2->CheatSlotParamMap).field_0x34) {
    return;
  }
  puVar4 = *(undefined1 **)&(pFVar2->CheatSlotParamMap).field_0x40;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &(pFVar2->CheatSlotParamMap).field_0x38;
  }
  iVar1 = *(int *)(puVar4 + (ulonglong)
                            (*(int *)&(pFVar2->CheatSlotParamMap).field_0x48 - 1U & param_2) * 4);
  if (iVar1 == -1) {
    return;
  }
  do {
    if (*(int *)(*(longlong *)&pFVar2->CheatSlotParamMap + (longlong)iVar1 * 0x50) == param_2) {
      pFVar2 = TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
               ::FindChecked((TMapBase<int,FDS_CheatSlotInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotInfo,0>_>
                              *)this_00,param_1);
      pFVar3 = TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
               ::FindChecked((TMapBase<int,FDS_CheatSlotParam,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FDS_CheatSlotParam,0>_>
                              *)&pFVar2->CheatSlotParamMap,param_2);
      ::FString::operator=(&pFVar3->ParamValue,param_3);
      return;
    }
    iVar1 = *(int *)(*(longlong *)&pFVar2->CheatSlotParamMap + 0x48 + (longlong)iVar1 * 0x50);
  } while (iVar1 != -1);
  return;
}

// SetTabIndex @ 14ba74ff0

void __thiscall UDS_CheatData::SetTabIndex(UDS_CheatData *this,int param_1)

{
  this->TabIndex = param_1;
  return;
}

// SetTagChange @ 14ba75000

void __thiscall
UDS_CheatData::SetTagChange(UDS_CheatData *this,int param_1,int param_2,bool param_3)

{
  TMap<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
  *this_00;
  int iVar1;
  TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_> *pTVar2;
  bool *pbVar3;
  undefined1 *puVar4;
  
  this_00 = &this->TagMap;
  if (*(int *)&(this->TagMap).field_0x8 == *(int *)&(this->TagMap).field_0x34) {
    return;
  }
  puVar4 = *(undefined1 **)&(this->TagMap).field_0x40;
  if (puVar4 == (undefined1 *)0x0) {
    puVar4 = &(this->TagMap).field_0x38;
  }
  iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->TagMap).field_0x48 - 1U & param_1) * 4);
  if (iVar1 == -1) {
    return;
  }
  while (*(int *)((longlong)iVar1 * 0x60 + *(longlong *)this_00) != param_1) {
    iVar1 = *(int *)((longlong)iVar1 * 0x60 + 0x58 + *(longlong *)this_00);
    if (iVar1 == -1) {
      return;
    }
  }
  pTVar2 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
           ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                          *)this_00,param_1);
  if (*(int *)&pTVar2->field_0x8 == *(int *)&pTVar2->field_0x34) {
    return;
  }
  puVar4 = *(undefined1 **)&pTVar2->field_0x40;
  if (*(undefined1 **)&pTVar2->field_0x40 == (undefined1 *)0x0) {
    puVar4 = &pTVar2->field_0x38;
  }
  iVar1 = *(int *)(puVar4 + (ulonglong)(*(int *)&pTVar2->field_0x48 - 1U & param_2) * 4);
  if (iVar1 == -1) {
    return;
  }
  do {
    if (*(int *)(*(longlong *)pTVar2 + (longlong)iVar1 * 0x10) == param_2) {
      pTVar2 = TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
               ::FindChecked((TMapBase<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TMap<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>,0>_>
                              *)this_00,param_1);
      pbVar3 = TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>::
               FindChecked((TMapBase<int,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,bool,0>_>
                            *)pTVar2,param_2);
      *pbVar3 = param_3;
      return;
    }
    iVar1 = *(int *)(*(longlong *)pTVar2 + 8 + (longlong)iVar1 * 0x10);
  } while (iVar1 != -1);
  return;
}

// SetTagType @ 14ba75100

void __thiscall UDS_CheatData::SetTagType(UDS_CheatData *this,int param_1)

{
  this->TagType = param_1;
  return;
}

