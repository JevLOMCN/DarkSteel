// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// StaticClass @ 1472554b0

UClass * __cdecl UAnimCurveMetaData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveMetaData.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveMetaData",
               &Z_Registration_Info_UClass_UAnimCurveMetaData.InnerSingleton,
               StaticRegisterNativesUAnimCurveMetaData,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimCurveMetaData>,
               InternalVTableHelperCtorCaller<UAnimCurveMetaData>,aFStackX_8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveMetaData.InnerSingleton;
}

// UAnimCurveMetaData @ 14725cb90

UAnimCurveMetaData * __thiscall
UAnimCurveMetaData::UAnimCurveMetaData(UAnimCurveMetaData *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UAssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AnimCurveMetaData__;
  *(undefined8 *)&this->CurveMetaData = 0;
  *(undefined8 *)&(this->CurveMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->CurveMetaData).field_0x20 = 0;
  *(undefined4 *)&(this->CurveMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->CurveMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveMetaData).field_0x34 = 0;
  *(undefined4 *)&(this->CurveMetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurveMetaData).field_0x40 = 0;
  *(undefined4 *)&(this->CurveMetaData).field_0x48 = 0;
  *(undefined8 *)&this->OnCurveMetaDataChanged = 0;
  *(undefined8 *)&(this->OnCurveMetaDataChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnCurveMetaDataChanged).field_0x10 = 0;
  this->VersionNumber = 0;
  *(undefined8 *)&(this->OnCurveMetaDataChanged).field_0x18 = 2;
  return this;
}

// UAnimCurveMetaData @ 14725cc20

UAnimCurveMetaData * __thiscall
UAnimCurveMetaData::UAnimCurveMetaData(UAnimCurveMetaData *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UAssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AnimCurveMetaData__;
  *(undefined8 *)&this->CurveMetaData = 0;
  *(undefined8 *)&(this->CurveMetaData).field_0x8 = 0;
  *(undefined8 *)&(this->CurveMetaData).field_0x20 = 0;
  *(undefined4 *)&(this->CurveMetaData).field_0x28 = 0;
  *(undefined4 *)&(this->CurveMetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveMetaData).field_0x34 = 0;
  *(undefined4 *)&(this->CurveMetaData).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurveMetaData).field_0x40 = 0;
  *(undefined4 *)&(this->CurveMetaData).field_0x48 = 0;
  *(undefined8 *)&this->OnCurveMetaDataChanged = 0;
  *(undefined8 *)&(this->OnCurveMetaDataChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnCurveMetaDataChanged).field_0x10 = 0;
  this->VersionNumber = 0;
  *(undefined8 *)&(this->OnCurveMetaDataChanged).field_0x18 = 2;
  return this;
}

// ~UAnimCurveMetaData @ 14725daf0

void __thiscall UAnimCurveMetaData::~UAnimCurveMetaData(UAnimCurveMetaData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UAssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AnimCurveMetaData__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCurveMetaDataChanged).field_0x8,
             *(int *)&(this->OnCurveMetaDataChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnCurveMetaDataChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCurveMetaDataChanged);
  *(undefined4 *)&(this->CurveMetaData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurveMetaData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveMetaData);
  this->_padding_ = (longlong)&___7IInterface_AnimCurveMetaData__6B_;
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// GetNumCurveMetaData @ 14725fa30

int __thiscall UAnimCurveMetaData::GetNumCurveMetaData(UAnimCurveMetaData *this)

{
  return (int)this->_padding_ - *(int *)&(this->CurveMetaData).field_0xc;
}

// GetPrivateStaticClass @ 14725feb0

UClass * __cdecl UAnimCurveMetaData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimCurveMetaData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimCurveMetaData",
               &Z_Registration_Info_UClass_UAnimCurveMetaData.InnerSingleton,
               StaticRegisterNativesUAnimCurveMetaData,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimCurveMetaData>,
               InternalVTableHelperCtorCaller<UAnimCurveMetaData>,local_res8,
               UAssetUserData::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimCurveMetaData.InnerSingleton;
}

// StaticRegisterNativesUAnimCurveMetaData @ 147260e20

void __cdecl UAnimCurveMetaData::StaticRegisterNativesUAnimCurveMetaData(void)

{
  return;
}

// _getUObject @ 147262de0

UObject * __thiscall UAnimCurveMetaData::_getUObject(UAnimCurveMetaData *this)

{
  return (UObject *)&this[-1].OnCurveMetaDataChanged;
}

// AddCurveMetaData @ 14743d100

bool __thiscall
UAnimCurveMetaData::AddCurveMetaData(UAnimCurveMetaData *this,FName param_1,bool param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  TKeyInitializer<FName_const_&> local_res8;
  FName local_res10 [2];
  FName *local_res20;
  
  local_res10[0] = param_1;
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if ((int)this->_padding_ != *(int *)&(this->CurveMetaData).field_0xc) {
    puVar3 = *(undefined1 **)&(this->CurveMetaData).field_0x18;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->CurveMetaData).field_0x10;
    }
    iVar2 = *(int *)(puVar3 + (ulonglong)
                              (*(int *)&(this->CurveMetaData).field_0x20 - 1U &
                              param_1.Number + uVar1) * 4);
    if (iVar2 != -1) {
      do {
        if (*(FName *)(this->_padding_ + (longlong)iVar2 * 0x28) == param_1) {
          return false;
        }
        iVar2 = *(int *)(this->_padding_ + 0x20 + (longlong)iVar2 * 0x28);
      } while (iVar2 != -1);
    }
  }
  local_res20 = local_res10;
  TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
  ::Emplace<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,FCurveMetaData>,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>,FDefaultSetAllocator>
              *)&this->_padding_,&local_res8,(bool *)&local_res20);
  puVar3 = &(this->CurveMetaData).field_0x48;
  *(short *)puVar3 = *(short *)puVar3 + 1;
  if (*(short *)puVar3 == 0) {
    *(undefined2 *)&(this->CurveMetaData).field_0x48 = 1;
  }
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(this->CurveMetaData).field_0x28);
  return true;
}

// ForEachCurveMetaData @ 14744b770

void __thiscall
UAnimCurveMetaData::ForEachCurveMetaData
          (UAnimCurveMetaData *this,
          TFunctionRef<void___cdecl(FName,FCurveMetaData_const_&)> *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 local_res8 [8];
  undefined8 local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&this->CurveMetaData;
  plVar1 = &this->_padding_;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar11 = (uint)*plVar13;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14744b80e;
      uVar11 = *(uint *)((longlong)plVar13 + lVar9 * 4 + 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar14;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14744b80e:
  uVar11 = *(uint *)&this->CurveMetaData;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,(int)this->_padding_ - *(int *)&(this->CurveMetaData).field_0xc);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&this->CurveMetaData;
  if (uVar11 != uVar7) {
    plVar13 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14744b910;
      uVar11 = *(uint *)((longlong)plVar13 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14744b910:
  while( true ) {
    if ((int)this->_padding_ - *(int *)&(this->CurveMetaData).field_0xc != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) break;
    puVar2 = (undefined8 *)(this->_padding_ + (longlong)TStack_60.CurrentBitIndex * 0x28);
    local_res20 = *puVar2;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res20,puVar2 + 1);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// GetCurveMetaData @ 147454c90

FCurveMetaData * __thiscall
UAnimCurveMetaData::GetCurveMetaData(UAnimCurveMetaData *this,FName param_1)

{
  FCurveMetaData *pFVar1;
  
  pFVar1 = TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
           ::Find((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
                   *)&this->_padding_,param_1);
  return pFVar1;
}

// GetCurveMetaData @ 147454ca0

FCurveMetaData * __thiscall
UAnimCurveMetaData::GetCurveMetaData(UAnimCurveMetaData *this,FName param_1)

{
  FCurveMetaData *pFVar1;
  
  pFVar1 = TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
           ::Find((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
                   *)&this->_padding_,param_1);
  return pFVar1;
}

// GetCurveMetaDataNames @ 147454cb0

void __thiscall
UAnimCurveMetaData::GetCurveMetaDataNames
          (UAnimCurveMetaData *this,TArray<FName,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
  ::GenerateKeyArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,FCurveMetaData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FCurveMetaData,0>_>
              *)&this->_padding_,param_1);
  return;
}

// GetVersionNumber @ 147464ed0

ushort __thiscall UAnimCurveMetaData::GetVersionNumber(UAnimCurveMetaData *this)

{
  return *(ushort *)&(this->CurveMetaData).field_0x48;
}

// IncreaseVersionNumber @ 1474654d0

void __thiscall UAnimCurveMetaData::IncreaseVersionNumber(UAnimCurveMetaData *this)

{
  ushort *puVar1;
  
  puVar1 = &this->VersionNumber;
  *puVar1 = *puVar1 + 1;
  if (*puVar1 == 0) {
    this->VersionNumber = 1;
  }
  return;
}

// RefreshBoneIndices @ 1474728a0

void __thiscall UAnimCurveMetaData::RefreshBoneIndices(UAnimCurveMetaData *this,USkeleton *param_1)

{
  longlong *plVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  FBoneReference *this_00;
  uint uVar10;
  uint uVar11;
  FBoneReference *pFVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&this->CurveMetaData;
  plVar1 = &this->_padding_;
  iVar13 = 0;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    plVar14 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar14 = plVar1;
    }
    uVar11 = (uint)*plVar14;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14747294d;
      uVar11 = *(uint *)((longlong)plVar14 + lVar9 * 4 + 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar3 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar15 + -1 + (int)lVar9;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14747294d:
  uVar11 = *(uint *)&this->CurveMetaData;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_6c,(int)this->_padding_ - *(int *)&(this->CurveMetaData).field_0xc);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&this->CurveMetaData;
  if (uVar11 != uVar7) {
    plVar14 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar14 = plVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)plVar14 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar13;
      uVar10 = uVar10 + 0x20;
      iVar13 = iVar13 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_147472a50;
      uVar11 = *(uint *)((longlong)plVar14 + lVar9 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_147472a50:
  while( true ) {
    if ((int)this->_padding_ - *(int *)&(this->CurveMetaData).field_0xc != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,FCurveMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) break;
    iVar4 = *(int *)(this->_padding_ + 0x10 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    lVar9 = this->_padding_ + (longlong)TStack_60.CurrentBitIndex * 0x28;
    this_00 = *(FBoneReference **)(lVar9 + 8);
    pFVar12 = this_00 + iVar4;
    while( true ) {
      if (*(int *)(lVar9 + 0x10) != iVar4) {
        `TCheckedPointerIterator<FBoneReference,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (this_00 == pFVar12) break;
      FBoneReference::Initialize(this_00,param_1);
      this_00 = this_00 + 1;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  puVar2 = &(this->CurveMetaData).field_0x48;
  *(short *)puVar2 = *(short *)puVar2 + 1;
  if (*(short *)puVar2 == 0) {
    *(undefined2 *)&(this->CurveMetaData).field_0x48 = 1;
  }
  return;
}

