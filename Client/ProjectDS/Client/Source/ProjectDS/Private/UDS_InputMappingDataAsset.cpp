// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b4ab5c0

UClass * __cdecl UDS_InputMappingDataAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputMappingDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputMappingDataAsset",
               &Z_Registration_Info_UClass_UDS_InputMappingDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_InputMappingDataAsset,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InputMappingDataAsset>,
               InternalVTableHelperCtorCaller<UDS_InputMappingDataAsset>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputMappingDataAsset.InnerSingleton;
}

// UDS_InputMappingDataAsset @ 14b4b2c70

UDS_InputMappingDataAsset * __thiscall
UDS_InputMappingDataAsset::UDS_InputMappingDataAsset
          (UDS_InputMappingDataAsset *this,FVTableHelper *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InputMappingDataAsset__6B_;
  (this->DefaultNagativeKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultNagativeKeys).ArrayNum = 0;
  (this->DefaultNagativeKeys).ArrayMax = 0;
  (this->CombinationKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CombinationKeys).ArrayNum = 0;
  (this->CombinationKeys).ArrayMax = 0;
  (this->BaseActionModeMapping).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  (this->BaseUIModeMapping).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  *(undefined8 *)&this->DataMap = 0;
  *(undefined8 *)&(this->DataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  return this;
}

// UDS_InputMappingDataAsset @ 14b4b2cf0

UDS_InputMappingDataAsset * __thiscall
UDS_InputMappingDataAsset::UDS_InputMappingDataAsset
          (UDS_InputMappingDataAsset *this,FObjectInitializer *param_1)

{
  UPrimaryDataAsset::UPrimaryDataAsset((UPrimaryDataAsset *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InputMappingDataAsset__6B_;
  (this->DefaultNagativeKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultNagativeKeys).ArrayNum = 0;
  (this->DefaultNagativeKeys).ArrayMax = 0;
  (this->CombinationKeys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CombinationKeys).ArrayNum = 0;
  (this->CombinationKeys).ArrayMax = 0;
  (this->BaseActionModeMapping).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  (this->BaseUIModeMapping).field0_0x0.DebugPtr = (UInputMappingContext *)0x0;
  *(undefined8 *)&this->DataMap = 0;
  *(undefined8 *)&(this->DataMap).field_0x8 = 0;
  *(undefined8 *)&(this->DataMap).field_0x20 = 0;
  *(undefined4 *)&(this->DataMap).field_0x28 = 0;
  *(undefined4 *)&(this->DataMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DataMap).field_0x34 = 0;
  *(undefined4 *)&(this->DataMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DataMap).field_0x40 = 0;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  return this;
}

// ~UDS_InputMappingDataAsset @ 14b4b3c50

void __thiscall
UDS_InputMappingDataAsset::~UDS_InputMappingDataAsset(UDS_InputMappingDataAsset *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7UDS_InputMappingDataAsset__6B_;
  *(undefined4 *)&(this->DataMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_InputMappingType,FDS_InputMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_InputMappingType,FDS_InputMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->DataMap);
  DestructItems<FKey,int>
            ((FKey *)(this->CombinationKeys).AllocatorInstance.Data,(this->CombinationKeys).ArrayNum
            );
  pFVar2 = (this->CombinationKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FKey,int>
            ((FKey *)(this->DefaultNagativeKeys).AllocatorInstance.Data,
             (this->DefaultNagativeKeys).ArrayNum);
  pFVar2 = (this->DefaultNagativeKeys).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UPrimaryDataAsset::~UPrimaryDataAsset((UPrimaryDataAsset *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7d80

UClass * __cdecl UDS_InputMappingDataAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputMappingDataAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputMappingDataAsset",
               &Z_Registration_Info_UClass_UDS_InputMappingDataAsset.InnerSingleton,
               StaticRegisterNativesUDS_InputMappingDataAsset,0xb0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InputMappingDataAsset>,
               InternalVTableHelperCtorCaller<UDS_InputMappingDataAsset>,local_res8,
               UPrimaryDataAsset::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputMappingDataAsset.InnerSingleton;
}

// StaticRegisterNativesUDS_InputMappingDataAsset @ 14b4b8690

void __cdecl UDS_InputMappingDataAsset::StaticRegisterNativesUDS_InputMappingDataAsset(void)

{
  return;
}

// DebugIMC @ 14b8ffc50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InputMappingDataAsset::DebugIMC
          (UDS_InputMappingDataAsset *this,TObjectPtr<UInputMappingContext> param_1)

{
  int iVar1;
  longlong lVar2;
  UDS_LogManager *pUVar3;
  FText *this_00;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [8];
  FText local_170;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  pUVar3 = UDS_LogManager::GetInst();
  if (pUVar3 != (UDS_LogManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    FText::ToString((FText *)(*(longlong *)param_1.field0_0x0 + 0xf8));
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InputMappingDataAsset::DebugIMC",0x23,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Display,local_158.Ptr,0x7a,L"[GS] Debug - %s");
    if ((void *)local_158._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_158._padding_);
    }
  }
  lVar2 = *(longlong *)param_1.field0_0x0;
  iVar1 = *(int *)(lVar2 + 0x48);
  lVar4 = *(longlong *)(lVar2 + 0x40);
  lVar5 = (longlong)iVar1 * 0x50 + lVar4;
  while( true ) {
    if (*(int *)(lVar2 + 0x48) != iVar1) {
      `TCheckedPointerIterator<FEnhancedActionKeyMapping_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_178);
    }
    if (lVar4 == lVar5) break;
    if ((*(longlong *)(lVar4 + 0x20) != 0) &&
       (pUVar3 = UDS_LogManager::GetInst(), pUVar3 != (UDS_LogManager *)0x0)) {
      pUVar3 = UDS_LogManager::GetInst();
      this_00 = FKey::GetDisplayName((FKey *)(lVar4 + 0x28),&local_170,true);
      FText::ToString(this_00);
      FText::ToString((FText *)(*(longlong *)(lVar4 + 0x20) + 0x30));
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InputMappingDataAsset::DebugIMC",0x23,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Display,local_158.Ptr,0x83,L"[GS] Action : %s (%s)");
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
      if (local_170.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
      }
    }
    lVar4 = lVar4 + 0x50;
  }
  return;
}

// GetAllMappings @ 14b904bf0

TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
* __thiscall
UDS_InputMappingDataAsset::GetAllMappings
          (UDS_InputMappingDataAsset *this,
          TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
          *__return_storage_ptr__)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  TObjectPtr<UInputMappingContext> *pTVar4;
  code *pcVar5;
  TMap<EDS_InputMappingType,FDS_InputMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,FDS_InputMappingData,0>_>
  *pTVar6;
  bool bVar7;
  uint uVar8;
  TObjectPtr<UInputMappingContext> TVar9;
  TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
  *pTVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  uint local_138 [2];
  ForAnyElementType local_130;
  int local_128;
  int local_124;
  longlong local_120;
  TMap<EDS_InputMappingType,FDS_InputMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,FDS_InputMappingData,0>_>
  *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [16];
  UInputMappingContext *local_d8;
  longlong local_d0;
  UInputMappingContext *local_c8;
  longlong local_c0;
  TMap<EDS_InputMappingType,FDS_InputMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,FDS_InputMappingData,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  undefined4 *local_88;
  longlong *local_80;
  undefined4 *local_78;
  longlong *local_70;
  uint *local_68;
  longlong *local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  iVar16 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  local_d8 = (this->BaseActionModeMapping).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_d8 != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  TVar9 = DS_InputUtil::DeepCopyMappingContext((TObjectPtr<UInputMappingContext>)local_58);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)TVar9.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)TVar9.field0_0x0);
  }
  local_d0 = *(longlong *)TVar9.field0_0x0;
  uVar8 = 1;
  if (local_d0 != 0) {
    local_88 = local_res10;
    local_res10[0] = 1;
    local_80 = &local_d0;
    TSet<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_InputMappingType_&&,TObjectPtr<UInputMappingContext>_&>_>
              (__return_storage_ptr__,
               (TPairInitializer<EDS_InputMappingType_&&,TObjectPtr<UInputMappingContext>_&> *)
               (local_res18 + 2),(bool *)&local_88);
  }
  local_c8 = (this->BaseUIModeMapping).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c8 != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  TVar9 = DS_InputUtil::DeepCopyMappingContext((TObjectPtr<UInputMappingContext>)local_50);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)TVar9.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)TVar9.field0_0x0);
  }
  local_c0 = *(longlong *)TVar9.field0_0x0;
  if (local_c0 != 0) {
    local_78 = local_res18;
    local_res18[0] = 100;
    local_70 = &local_c0;
    TSet<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_InputMappingType_&&,TObjectPtr<UInputMappingContext>_&>_>
              (__return_storage_ptr__,
               (TPairInitializer<EDS_InputMappingType_&&,TObjectPtr<UInputMappingContext>_&> *)
               local_e8,(bool *)&local_78);
  }
  puVar2 = &(this->DataMap).field_0x10;
  iVar3 = *(int *)&(this->DataMap).field_0x28;
  local_118 = &this->DataMap;
  local_f8 = 0;
  iStack_fc = local_f8;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->DataMap).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar14 = *puVar17;
    local_f8 = 0;
    iVar16 = 0;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar16;
      local_f8 = local_f8 + 0x20;
      iVar16 = iVar16 + 1;
      iStack_fc = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14b904dbe;
      uVar14 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar14 & uVar14;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_e8._4_4_ = (undefined4)lVar11;
    iStack_fc = local_f8 + -1 + local_e8._4_4_;
    if (iVar3 < iStack_fc) {
      iStack_fc = iVar3;
    }
  }
LAB_14b904dbe:
  uVar14 = *(uint *)&(this->DataMap).field_0x28;
  iStack_f0 = *(int *)&(this->DataMap).field_0x8 - *(int *)&(this->DataMap).field_0x34;
  uVar18 = uVar14 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar8,iVar16);
  uStack_100 = 0xffffffff;
  TStack_b0.CurrentBitIndex = iStack_fc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_b0._28_4_ = iStack_fc;
  TStack_b0.BaseBitIndex = local_f8;
  uStack_90 = CONCAT44(uStack_ec,iStack_f0);
  iStack_110 = iVar16;
  uStack_10c = uVar8;
  local_108 = puVar2;
  iStack_f4 = iStack_fc;
  local_b8 = local_118;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TMap<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>_>
               *)(*pcVar5)();
    return pTVar10;
  }
  uVar8 = *(uint *)&(this->DataMap).field_0x28;
  if (uVar14 != uVar8) {
    puVar13 = *(undefined1 **)&(this->DataMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar2;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar18 = uVar18 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14b904ecc;
      uVar14 = *(uint *)(puVar13 + lVar11 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar14 = (uVar18 - 1) + (int)lVar11;
    if ((int)uVar8 < (int)uVar14) {
      uVar14 = uVar8;
    }
  }
LAB_14b904ecc:
  do {
    pTVar6 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_InputMappingType,FDS_InputMappingData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar14) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       (pTVar6 == &this->DataMap)) {
      return __return_storage_ptr__;
    }
    lVar11 = *(longlong *)pTVar6;
    lVar12 = (longlong)TStack_b0.CurrentBitIndex * 0x20;
    local_138[0] = *(uint *)(lVar12 + lVar11);
    local_130.Data = (FScriptContainerElement *)0x0;
    iVar16 = *(int *)(lVar12 + 0x10 + lVar11);
    pTVar4 = *(TObjectPtr<UInputMappingContext> **)(lVar12 + 8 + lVar11);
    local_128 = iVar16;
    if (iVar16 == 0) {
      local_124 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar16,0,&local_130,iVar16,&local_124);
      ConstructItems<TObjectPtr<UInputMappingContext>,TObjectPtr<UInputMappingContext>,int>
                (local_130.Data,pTVar4,iVar16);
    }
    GetMappingContext(this,(EDS_InputMappingType)&local_120);
    if (local_120 != 0) {
      if (*(int *)&__return_storage_ptr__->field_0x8 != *(int *)&__return_storage_ptr__->field_0x34)
      {
        puVar13 = &__return_storage_ptr__->field_0x38;
        if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
        }
        iVar16 = *(int *)(puVar13 +
                         (ulonglong)
                         (*(int *)&__return_storage_ptr__->field_0x48 - 1U & local_138[0]) * 4);
        if (iVar16 != -1) {
          do {
            if (*(uint *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar16 * 0x18) ==
                local_138[0]) goto LAB_14b904ffb;
            iVar16 = *(int *)(*(longlong *)__return_storage_ptr__ + 0x10 + (longlong)iVar16 * 0x18);
          } while (iVar16 != -1);
        }
      }
      local_68 = local_138;
      local_60 = &local_120;
      TSet<TTuple<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>_>,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,TObjectPtr<UInputMappingContext>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<enum_EDS_InputMappingType_&,TObjectPtr<UInputMappingContext>_&>_>
                (__return_storage_ptr__,
                 (TPairInitializer<EDS_InputMappingType_&,TObjectPtr<UInputMappingContext>_&> *)
                 (local_e8 + 8),(bool *)&local_68);
    }
LAB_14b904ffb:
    if (local_130.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_130.Data);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  } while( true );
}

// GetInst @ 14b905c00

TWeakObjectPtr<UDS_InputMappingDataAsset,FWeakObjectPtr> __cdecl
UDS_InputMappingDataAsset::GetInst(void)

{
  UDS_InputMappingDataAsset *pUVar1;
  FWeakObjectPtr in_RCX;
  UDS_GameInstance *local_res10 [3];
  
  local_res10[0] = UDS_GameInstance::GetInst();
  if (local_res10[0] == (UDS_GameInstance *)0x0) {
    *(undefined8 *)in_RCX = 0;
    FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
    return (TWeakObjectPtr<UDS_InputMappingDataAsset,FWeakObjectPtr>)in_RCX;
  }
  pUVar1 = (local_res10[0]->InputMappingDataAsset).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UDS_InputMappingDataAsset *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UDS_InputMappingDataAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
  }
  *(undefined8 *)in_RCX = 0;
  local_res10[0] = (UDS_GameInstance *)pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_InputMappingDataAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)in_RCX,(FObjectPtr)local_res10);
  return (TWeakObjectPtr<UDS_InputMappingDataAsset,FWeakObjectPtr>)in_RCX;
}

// GetMappingContext @ 14b905e10

TObjectPtr<UInputMappingContext> __thiscall
UDS_InputMappingDataAsset::GetMappingContext
          (UDS_InputMappingDataAsset *this,EDS_InputMappingType param_1)

{
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  int iVar3;
  TObjectPtr<UInputMappingContext> TVar4;
  TObjectPtr<UInputMappingContext>_u_0 TVar5;
  UInputMappingContext *pUVar6;
  undefined4 in_register_00000014;
  TObjectPtr<UInputMappingContext>_u_0 TVar7;
  ForAnyElementType FVar8;
  EDS_InputMappingType in_R8D;
  undefined1 local_res18 [8];
  UObject *local_res20;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  TArray<TObjectPtr<UInputMappingContext>,TSizedDefaultAllocator<32>_> local_38;
  
  TVar7._4_4_ = in_register_00000014;
  TVar7._0_4_ = param_1;
  (TVar7.DebugPtr)->_padding_ = 0;
  if (in_R8D == Action_Base) {
    pUVar6 = (this->BaseActionModeMapping).field0_0x0.DebugPtr;
  }
  else {
    if (in_R8D != UI_Base) {
      GetMappingDatas(this,&local_38,in_R8D);
      iVar3 = local_38.ArrayNum;
      pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
      FVar8.Data = local_38.AllocatorInstance.Data;
      do {
        if (local_38.ArrayNum != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UInputMappingContext>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (FVar8.Data == pFVar1) {
          if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.AllocatorInstance.Data);
          }
          return (TObjectPtr<UInputMappingContext>)TVar7.DebugPtr;
        }
        pUVar2 = *(UObject **)FVar8.Data;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar2 != (UObject *)0x0) goto LAB_14b905ef8;
        }
        else if (pUVar2 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar2);
LAB_14b905ef8:
          if ((TVar7.DebugPtr)->_padding_ == 0) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar2);
            }
            TVar5.ObjectPtr.field0_0x0 =
                 (FObjectPtr)
                 DS_InputUtil::DeepCopyMappingContext((TObjectPtr<UInputMappingContext>)local_48);
          }
          else {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar2);
            }
            local_res20 = (UObject *)(TVar7.DebugPtr)->_padding_;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res20 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_res20);
            }
            TVar5.ObjectPtr.field0_0x0 =
                 (FObjectPtr)
                 DS_InputUtil::OverrideMappingContext
                           ((TObjectPtr<UInputMappingContext>)local_40,
                            (TObjectPtr<UInputMappingContext>)&local_res20);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             ((UObject *)(TVar5.DebugPtr)->_padding_ != (UObject *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)(TVar5.DebugPtr)->_padding_);
          }
          (TVar7.DebugPtr)->_padding_ = (TVar5.DebugPtr)->_padding_;
        }
        FVar8.Data = FVar8.Data + 8;
      } while( true );
    }
    pUVar6 = (this->BaseUIModeMapping).field0_0x0.DebugPtr;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UInputMappingContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  TVar4 = DS_InputUtil::DeepCopyMappingContext((TObjectPtr<UInputMappingContext>)&local_res20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)TVar4.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)TVar4.field0_0x0);
  }
  (TVar7.DebugPtr)->_padding_ = *(longlong *)TVar4.field0_0x0;
  return (TObjectPtr<UInputMappingContext>)TVar7;
}

// GetMappingDatas @ 14b905fd0

TArray<TObjectPtr<UInputMappingContext>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_InputMappingDataAsset::GetMappingDatas
          (UDS_InputMappingDataAsset *this,
          TArray<TObjectPtr<UInputMappingContext>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__,EDS_InputMappingType param_1)

{
  FScriptContainerElement *pFVar1;
  UInputMappingContext *pUVar2;
  UObject *pUVar3;
  int iVar4;
  int iVar5;
  FDS_InputMappingData *pFVar6;
  undefined1 *puVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res18 [16];
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == Action_Base) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                       &__return_storage_ptr__->ArrayMax);
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    __return_storage_ptr__->ArrayNum = iVar4 + 1;
    pUVar2 = (this->BaseActionModeMapping).field0_0x0.DebugPtr;
    *(UInputMappingContext **)(pFVar1 + (longlong)iVar4 * 8) = pUVar2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar2 != (UInputMappingContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
  }
  if (*(int *)&(this->DataMap).field_0x8 != *(int *)&(this->DataMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->DataMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->DataMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + (ulonglong)
                              (*(int *)&(this->DataMap).field_0x48 - Action_Base & param_1) * 4);
    if (iVar4 != -1) {
      while (*(EDS_InputMappingType *)((longlong)iVar4 * 0x20 + *(longlong *)&this->DataMap) !=
             param_1) {
        iVar4 = *(int *)((longlong)iVar4 * 0x20 + 0x18 + *(longlong *)&this->DataMap);
        if (iVar4 == -1) {
          return __return_storage_ptr__;
        }
      }
      pFVar6 = TMapBase<enum_EDS_InputMappingType,FDS_InputMappingData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_InputMappingType,FDS_InputMappingData,0>_>
               ::FindChecked(&this->DataMap,param_1);
      pFVar8 = (pFVar6->InputMappingContexts).AllocatorInstance.Data;
      iVar4 = (pFVar6->InputMappingContexts).ArrayNum;
      pFVar1 = pFVar8 + (longlong)iVar4 * 8;
      while( true ) {
        if ((pFVar6->InputMappingContexts).ArrayNum != iVar4) {
          `TCheckedPointerIterator<TObjectPtr<UInputMappingContext>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res18);
        }
        if (pFVar8 == pFVar1) break;
        pUVar3 = *(UObject **)pFVar8;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        iVar5 = __return_storage_ptr__->ArrayNum;
        if (iVar5 == __return_storage_ptr__->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&__return_storage_ptr__->AllocatorInstance,
                             &__return_storage_ptr__->ArrayMax);
        }
        __return_storage_ptr__->ArrayNum = iVar5 + 1;
        *(UObject **)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 8) =
             pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        pFVar8 = pFVar8 + 8;
      }
    }
  }
  return __return_storage_ptr__;
}

