// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 37

// HasRichCurves @ 1479d58f0

bool __thiscall UCurveTable::HasRichCurves(UCurveTable *this)

{
  return (this->RowMap).field_0x48 != '\x01';
}

// RepointCurveOwner @ 1479e4ab0

bool __thiscall
UCurveTable::RepointCurveOwner
          (UCurveTable *this,FPackageReloadedEvent *param_1,FCurveOwnerInterface **param_2)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  bool bVar2;
  int iVar3;
  TObjectPtr<UObject> *pTVar4;
  uint uVar5;
  UObject *pUVar6;
  UObject *pUVar7;
  TObjectPtr<UObject_const_>_u_0 local_res8;
  
  pTVar1 = &this[-1].OnCurveTableChangedDelegate;
  if (pTVar1 != (TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)pTVar1);
    }
    local_res8 = (TObjectPtr<UObject_const_>_u_0)pTVar1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pTVar1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pTVar1);
      }
    }
    uVar5 = ((uint)((ulonglong)pTVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar1 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    iVar3 = TSet<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TObjectPtr<UObject_const_>_>
                      ((TSet<TTuple<TObjectPtr<UObject>,TObjectPtr<UObject>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>,FDefaultSetAllocator>
                        *)&param_1->RepointedObjects,uVar5 >> 0x10 ^ uVar5,
                       (TObjectPtr<UObject_const_> *)&local_res8.ObjectPtr);
    if (iVar3 != -1) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pTVar1);
      }
      local_res8 = (TObjectPtr<UObject_const_>_u_0)pTVar1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pTVar1);
      }
      pTVar4 = TMapBase<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
               ::FindChecked((TMapBase<TObjectPtr<UObject>,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UObject>,TObjectPtr<UObject>,0>_>
                              *)&param_1->RepointedObjects,(TObjectPtr<UObject_const_>)&local_res8);
      bVar2 = true;
      pUVar7 = (pTVar4->field0_0x0).DebugPtr;
      goto LAB_1479e4b96;
    }
  }
  bVar2 = false;
  pUVar7 = (UObject *)0x0;
LAB_1479e4b96:
  pUVar6 = pUVar7 + 1;
  if (pUVar7 == (UObject *)0x0) {
    pUVar6 = (UObject *)0x0;
  }
  *param_2 = (FCurveOwnerInterface *)pUVar6;
  return bVar2;
}

// StaticClass @ 1479edd90

UClass * __cdecl UCurveTable::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UCurveTable.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveTable",
               &Z_Registration_Info_UClass_UCurveTable.InnerSingleton,
               StaticRegisterNativesUCurveTable,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveTable>,InternalVTableHelperCtorCaller<UCurveTable>,
               aFStackX_8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveTable.InnerSingleton;
}

// WriteTableAsJSON<char> @ 147a20f50

bool __thiscall
UCurveTable::WriteTableAsJSON<char>
          (UCurveTable *this,TSharedRef<TJsonWriter<char,TPrettyJsonPrintPolicy<char>_>,1> *param_1,
          bool param_2)

{
  if (*(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34 < 1) {
    return false;
  }
  if (this->CurveTableMode == SimpleCurves) {
    WriteTableAsJSON_Internal<char,FSimpleCurve>
              ((TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
                *)&this->RowMap,param_1,param_2);
    return true;
  }
  WriteTableAsJSON_Internal<char,FRichCurve>
            ((TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)&this->RowMap,param_1,param_2);
  return true;
}

// WriteTableAsJSON<wchar_t> @ 147a20fa0

bool __thiscall
UCurveTable::WriteTableAsJSON<wchar_t>
          (UCurveTable *this,
          TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> *param_1,bool param_2)

{
  if (*(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34 < 1) {
    return false;
  }
  if (this->CurveTableMode == SimpleCurves) {
    WriteTableAsJSON_Internal<wchar_t,FSimpleCurve>
              ((TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
                *)&this->RowMap,param_1,param_2);
    return true;
  }
  WriteTableAsJSON_Internal<wchar_t,FRichCurve>
            ((TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)&this->RowMap,param_1,param_2);
  return true;
}

// UCurveTable @ 147a27d10

UCurveTable * __thiscall UCurveTable::UCurveTable(UCurveTable *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  *(undefined8 *)&this->RowMap = 0;
  *(undefined8 *)&(this->RowMap).field_0x8 = 0;
  *(undefined8 *)&(this->RowMap).field_0x20 = 0;
  *(undefined4 *)&(this->RowMap).field_0x28 = 0;
  *(undefined4 *)&(this->RowMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RowMap).field_0x34 = 0;
  *(undefined4 *)&(this->RowMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RowMap).field_0x40 = 0;
  *(undefined4 *)&(this->RowMap).field_0x48 = 0;
  *(undefined8 *)&this->OnCurveTableChangedDelegate = 0;
  *(undefined8 *)&(this->OnCurveTableChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCurveTableChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCurveTableChangedDelegate).field_0x18 = 2;
  return this;
}

// UCurveTable @ 147a27d90

UCurveTable * __thiscall UCurveTable::UCurveTable(UCurveTable *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  *(undefined8 *)&this->RowMap = 0;
  *(undefined8 *)&(this->RowMap).field_0x8 = 0;
  *(undefined8 *)&(this->RowMap).field_0x20 = 0;
  *(undefined4 *)&(this->RowMap).field_0x28 = 0;
  *(undefined4 *)&(this->RowMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->RowMap).field_0x34 = 0;
  *(undefined4 *)&(this->RowMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->RowMap).field_0x40 = 0;
  *(undefined4 *)&(this->RowMap).field_0x48 = 0;
  *(undefined8 *)&this->OnCurveTableChangedDelegate = 0;
  *(undefined8 *)&(this->OnCurveTableChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnCurveTableChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->OnCurveTableChangedDelegate).field_0x18 = 2;
  return this;
}

// ~UCurveTable @ 147a2a6b0

void __thiscall UCurveTable::~UCurveTable(UCurveTable *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FCurveOwnerInterface__;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCurveTableChangedDelegate).field_0x8,
             *(int *)&(this->OnCurveTableChangedDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnCurveTableChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCurveTableChangedDelegate);
  *(undefined4 *)&(this->RowMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->RowMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RowMap);
  this->_padding_ = (longlong)&___7FCurveOwnerInterface__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// AddRichCurve @ 147a312c0

FRichCurve * __thiscall UCurveTable::AddRichCurve(UCurveTable *this,FName param_1)

{
  FRealCurve *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRichCurve *pFVar4;
  FRealCurve **ppFVar5;
  TPairInitializer<FName_const_&,FRealCurve_*_&&> local_res8;
  FRichCurve *local_res18 [2];
  FRealCurve ***local_28;
  FRichCurve **local_20;
  
  local_res8.Value = (FRealCurve **)param_1;
  if ((this->CurveTableMode == SimpleCurves) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurveTableMode != ECurveTableMode::SimpleCurves",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CurveTable.cpp"
                         ,0x23c,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FRichCurve *)(*pcVar2)();
    return pFVar4;
  }
  this->CurveTableMode = RichCurves;
  pFVar4 = ::operator_new(0x80);
  if (pFVar4 != (FRichCurve *)0x0) {
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0x404;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    *(undefined4 *)&pFVar4->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar4->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    *(float *)&pFVar4->_padding_ = 3.4028235e+38;
    pFVar4->_padding_ = (longlong)&___7FRichCurve__6B_;
    (pFVar4->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Keys).ArrayNum = 0;
    (pFVar4->Keys).ArrayMax = 0;
  }
  ppFVar5 = TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
            ::Find((TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                    *)&this->RowMap,(FName)local_res8.Value);
  if (ppFVar5 == (FRealCurve **)0x0) {
    local_28 = &local_res8.Value;
    local_20 = local_res18;
    local_res18[0] = pFVar4;
    TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_&&>_>
              ((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                *)&this->RowMap,&local_res8,(bool *)&local_28);
    return pFVar4;
  }
  pFVar1 = *ppFVar5;
  if (pFVar1 != (FRealCurve *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  *ppFVar5 = (FRealCurve *)pFVar4;
  return pFVar4;
}

// AddSimpleCurve @ 147a31400

FSimpleCurve * __thiscall UCurveTable::AddSimpleCurve(UCurveTable *this,FName param_1)

{
  FRealCurve *pFVar1;
  code *pcVar2;
  bool bVar3;
  FSimpleCurve *pFVar4;
  FRealCurve **ppFVar5;
  TPairInitializer<FName_const_&,FRealCurve_*_&&> local_res8;
  FSimpleCurve *local_res18 [2];
  FRealCurve ***local_28;
  FSimpleCurve **local_20;
  
  local_res8.Value = (FRealCurve **)param_1;
  if ((this->CurveTableMode == RichCurves) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurveTableMode != ECurveTableMode::RichCurves",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CurveTable.cpp"
                         ,0x24f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FSimpleCurve *)(*pcVar2)();
    return pFVar4;
  }
  this->CurveTableMode = SimpleCurves;
  pFVar4 = ::operator_new(0x88);
  if (pFVar4 != (FSimpleCurve *)0x0) {
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    *(undefined4 *)&pFVar4->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar4->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0;
    pFVar4->_padding_ = 0;
    *(undefined4 *)&pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    *(float *)&pFVar4->_padding_ = 3.4028235e+38;
    *(undefined2 *)((longlong)&pFVar4->_padding_ + 4) = 0x404;
    pFVar4->_padding_ = (longlong)&___7FSimpleCurve__6B_;
    (pFVar4->InterpMode).Value = '\0';
    (pFVar4->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Keys).ArrayNum = 0;
    (pFVar4->Keys).ArrayMax = 0;
  }
  ppFVar5 = TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
            ::Find((TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                    *)&this->RowMap,(FName)local_res8.Value);
  if (ppFVar5 == (FRealCurve **)0x0) {
    local_28 = &local_res8.Value;
    local_20 = local_res18;
    local_res18[0] = pFVar4;
    TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_&&>_>
              ((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                *)&this->RowMap,&local_res8,(bool *)&local_28);
    return pFVar4;
  }
  pFVar1 = *ppFVar5;
  if (pFVar1 != (FRealCurve *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
  }
  *ppFVar5 = (FRealCurve *)pFVar4;
  return pFVar4;
}

// CreateTableFromCSVString @ 147a3bba0

/* WARNING: Removing unreachable block (ram,0x000147a3c023) */
/* WARNING: Removing unreachable block (ram,0x000147a3c272) */
/* WARNING: Removing unreachable block (ram,0x000147a3c13a) */
/* WARNING: Removing unreachable block (ram,0x000147a3bf00) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCurveTable::CreateTableFromCSVString
          (UCurveTable *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1,ERichCurveInterpMode param_2)

{
  code *pcVar1;
  atomic<unsigned_int> aVar2;
  FKeyHandle FVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FSimpleCurve *pFVar9;
  FRichCurve *this_00;
  FRichCurveKey *pFVar10;
  longlong lVar11;
  TPairInitializer<FName_const_&,FRealCurve_*_&&> *pTVar12;
  TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *pTVar13;
  FSimpleCurve *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  int *piVar17;
  FSimpleCurve *this_01;
  undefined8 **ppuVar18;
  wchar_t *pwVar19;
  uint uVar20;
  ulonglong uVar21;
  float in_XMM1_Da;
  FString *in_stack_fffffffffffffe28;
  undefined1 local_1a8 [4];
  uint local_1a4;
  TArray<float,TSizedDefaultAllocator<32>_> local_1a0;
  FKeyHandle local_190;
  undefined1 local_188 [8];
  FString local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  undefined1 local_140 [16];
  FCsvParser local_130;
  longlong local_100;
  undefined1 local_f4 [12];
  FSimpleCurve *local_e8;
  FRichCurve *local_e0;
  FScopedCurveTableChange local_d8;
  FString local_d0;
  FString local_c0;
  undefined8 *local_b0;
  FSimpleCurve **local_a8;
  undefined8 *local_a0;
  FRichCurve **local_98;
  FString local_90;
  FString local_80;
  FString local_70 [3];
  
  pwVar19 = (wchar_t *)(ulonglong)param_2;
  _anon_3AA66773::FScopedCurveTableChange::FScopedCurveTableChange(&local_d8,this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar17 = &__return_storage_ptr__->ArrayMax;
  *piVar17 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  FCsvParser::FCsvParser(&local_130,param_1);
  if (local_130.Rows.ArrayNum < 2) {
    pFVar6 = (FScriptContainerElement *)::FString::FString(&local_90,L"Too few rows.");
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar8 <= pFVar6) && (pFVar6 < pFVar8 + (longlong)*piVar17 * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar1 = (code *)swi(3);
      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar7;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == *piVar17) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar17);
    }
    lVar11 = (longlong)iVar5;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + lVar11 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar8 + lVar11 * 0x10) =
         (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).
         Data;
    (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar6->field_0x0)->AllocatorInstance).Data =
         (FScriptContainerElement *)0x0;
    *(int *)(pFVar8 + lVar11 * 0x10 + 8) = *(int *)&pFVar6[8].field_0x0;
    *(int *)(pFVar8 + lVar11 * 0x10 + 0xc) = *(int *)&pFVar6[0xc].field_0x0;
    *(undefined8 *)&pFVar6[8].field_0x0 = 0;
  }
  else {
    (**(code **)(this->_padding_ + 0x2b8))(this);
    local_1a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a0.ArrayNum = 0;
    local_1a0.ArrayMax = 0;
    this->CurveTableMode = (param_2 == RCIM_Cubic) + SimpleCurves;
    if (local_130.Rows.ArrayNum < 1) {
      pwVar19 = L"Array index out of bounds: %lld into an array of size %lld";
      in_stack_fffffffffffffe28 = (FString *)0x0;
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
        return pTVar7;
      }
    }
    GetCurveValues((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                   local_130.Rows.AllocatorInstance.Data,&local_1a0);
    ::FString::FString(&local_d0,L"UCurveTable::CreateTableFromCSVString");
    bVar4 = FindDuplicateXValues(&local_1a0,&local_d0,__return_storage_ptr__);
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    local_90.Data.AllocatorInstance.Data = local_1a0.AllocatorInstance.Data;
    if (!bVar4) {
      local_1a4 = 1;
      if (1 < local_130.Rows.ArrayNum) {
        local_100 = 0x10;
        do {
          lVar11 = local_100;
          uVar20 = local_1a4;
          piVar17 = &__return_storage_ptr__->ArrayMax;
          uVar16 = 0;
          if ((int)local_1a4 < local_130.Rows.ArrayNum) {
            uVar16 = ~local_1a4 >> 0x1f;
          }
          if (uVar16 == 0) {
            pwVar19 = L"Array index out of bounds: %lld into an array of size %lld";
            in_stack_fffffffffffffe28 = (FString *)(longlong)(int)local_1a4;
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar1 = (code *)swi(3);
              pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
              return pTVar7;
            }
          }
          pTVar13 = (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
                    (local_130.Rows.AllocatorInstance.Data + lVar11);
          if (pTVar13->ArrayNum < 1) {
            ::FString::PrintfImpl(&local_180,L"Row \'%d\' has too few cells.");
            pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
            if ((pFVar8 <= (FScriptContainerElement *)&local_180) &&
               ((FScriptContainerElement *)&local_180 < pFVar8 + (longlong)*piVar17 * 0x10)) {
              pwVar19 = 
              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
              ;
              in_stack_fffffffffffffe28 = &local_180;
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar4) {
                pcVar1 = (code *)swi(3);
                pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                return pTVar7;
              }
            }
            iVar5 = __return_storage_ptr__->ArrayNum;
            if (iVar5 == *piVar17) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&__return_storage_ptr__->AllocatorInstance,piVar17);
            }
            lVar11 = (longlong)iVar5;
            __return_storage_ptr__->ArrayNum = iVar5 + 1;
            pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
            *(undefined8 *)(pFVar8 + lVar11 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar8 + lVar11 * 0x10) =
                 local_180.Data.AllocatorInstance.Data;
            local_180.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar8 + lVar11 * 0x10 + 8) = local_180.Data.ArrayNum;
            *(int *)(pFVar8 + lVar11 * 0x10 + 0xc) = local_180.Data.ArrayMax;
            local_180.Data.ArrayNum = 0;
            local_180.Data.ArrayMax = 0;
          }
          else {
            ::FString::FString(&local_c0,*(wchar_t **)(pTVar13->AllocatorInstance).Data);
            MakeValidName((FString *)local_188);
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
            if ((FName)local_188 == (FName)0x0) {
              ::FString::PrintfImpl(&local_170,L"Row \'%d\' missing a name.");
              pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
              if ((pFVar8 <= (FScriptContainerElement *)&local_170) &&
                 ((FScriptContainerElement *)&local_170 < pFVar8 + (longlong)*piVar17 * 0x10)) {
                pwVar19 = 
                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                ;
                in_stack_fffffffffffffe28 = &local_170;
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar4) {
                  pcVar1 = (code *)swi(3);
                  pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                  return pTVar7;
                }
              }
              iVar5 = __return_storage_ptr__->ArrayNum;
              if (iVar5 == *piVar17) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&__return_storage_ptr__->AllocatorInstance,piVar17);
              }
              lVar11 = (longlong)iVar5;
              __return_storage_ptr__->ArrayNum = iVar5 + 1;
              pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
              *(undefined8 *)(pFVar8 + lVar11 * 0x10) = 0;
              *(FScriptContainerElement **)(pFVar8 + lVar11 * 0x10) =
                   local_170.Data.AllocatorInstance.Data;
              local_170.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              *(int *)(pFVar8 + lVar11 * 0x10 + 8) = local_170.Data.ArrayNum;
              *(int *)(pFVar8 + lVar11 * 0x10 + 0xc) = local_170.Data.ArrayMax;
              local_170.Data.ArrayNum = 0;
              local_170.Data.ArrayMax = 0;
            }
            else {
              pFVar8 = (FScriptContainerElement *)
                       TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                       ::Find((TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                               *)&this->RowMap,(FName)local_188);
              if (pFVar8 == (FScriptContainerElement *)0x0) {
                local_140._0_8_ = pFVar8;
                local_140._8_8_ = pFVar8;
                GetCurveValues(pTVar13,(TArray<float,TSizedDefaultAllocator<32>_> *)local_140);
                if (local_1a0.ArrayNum == local_140._8_4_) {
                  if (this->CurveTableMode == SimpleCurves) {
                    pFVar9 = ::operator_new(0x88);
                    pFVar14 = (FSimpleCurve *)0x0;
                    this_01 = pFVar14;
                    if (pFVar9 != (FSimpleCurve *)0x0) {
                      pFVar9->_padding_ = 0;
                      pFVar9->_padding_ = 0;
                      pFVar9->_padding_ = 0;
                      *(undefined4 *)&pFVar9->_padding_ = 0;
                      *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0x80;
                      *(undefined4 *)&pFVar9->_padding_ = 0xffffffff;
                      *(undefined4 *)((longlong)&pFVar9->_padding_ + 4) = 0;
                      pFVar9->_padding_ = 0;
                      *(undefined4 *)&pFVar9->_padding_ = 0;
                      pFVar9->_padding_ = 0;
                      pFVar9->_padding_ = 0;
                      *(undefined4 *)&pFVar9->_padding_ = 0x7f7fffff;
                      *(undefined2 *)((longlong)&pFVar9->_padding_ + 4) = 0x404;
                      pFVar9->_padding_ = (longlong)&___7FSimpleCurve__6B_;
                      (pFVar9->InterpMode).Value = '\0';
                      (pFVar9->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      (pFVar9->Keys).ArrayNum = 0;
                      (pFVar9->Keys).ArrayMax = 0;
                      this_01 = pFVar9;
                    }
                    if (param_2 == RCIM_Cubic) {
                      local_1a8[0] = 0;
                      bVar4 = `FSimpleCurve::SetKeyInterpMode'::__l3::<lambda_1>::operator()
                                        (local_1a8);
                      if (bVar4) goto LAB_147a3c332;
                    }
                    else {
LAB_147a3c332:
                      (this_01->InterpMode).Value = (uchar)param_2;
                    }
                    pFVar9 = pFVar14;
                    if (0 < local_1a0.ArrayNum) {
                      do {
                        LOCK();
                        aVar2 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
                        UNLOCK();
                        bVar4 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
                        LastKeyHandleIndex = aVar2;
                        if (bVar4) {
                          pwVar19 = L"";
                          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Index != 0",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                                             ,0x1c,L"");
                          if (bVar4) {
                            pcVar1 = (code *)swi(3);
                            pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                            return pTVar7;
                          }
                        }
                        uVar16 = (uint)pFVar14;
                        uVar20 = 0;
                        if ((int)uVar16 < (int)local_140._8_4_) {
                          uVar20 = ~uVar16 >> 0x1f;
                        }
                        if (uVar20 == 0) {
                          pwVar19 = L"Array index out of bounds: %lld into an array of size %lld";
                          in_stack_fffffffffffffe28 = (FString *)(longlong)(int)uVar16;
                          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar4) {
                            pcVar1 = (code *)swi(3);
                            pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                            return pTVar7;
                          }
                        }
                        uVar20 = 0;
                        if ((int)uVar16 < local_1a0.ArrayNum) {
                          uVar20 = ~uVar16 >> 0x1f;
                        }
                        if (uVar20 == 0) {
                          pwVar19 = L"Array index out of bounds: %lld into an array of size %lld";
                          in_stack_fffffffffffffe28 = (FString *)(longlong)(int)uVar16;
                          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar4) {
                            pcVar1 = (code *)swi(3);
                            pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                            return pTVar7;
                          }
                        }
                        in_stack_fffffffffffffe28 =
                             (FString *)((ulonglong)in_stack_fffffffffffffe28 & 0xffffffffffffff00);
                        FSimpleCurve::AddKey
                                  (this_01,in_XMM1_Da,
                                   *(float *)(local_1a0.AllocatorInstance.Data + (longlong)pFVar9),
                                   SUB81(pwVar19,0),(FKeyHandle)(uint)in_stack_fffffffffffffe28);
                        pFVar14 = (FSimpleCurve *)(ulonglong)(uVar16 + 1);
                        pFVar9 = (FSimpleCurve *)((longlong)&pFVar9->_padding_ + 4);
                        uVar20 = local_1a4;
                      } while ((int)(uVar16 + 1) < local_1a0.ArrayNum);
                    }
                    local_b0 = (undefined8 *)local_188;
                    ppuVar18 = &local_b0;
                    local_a8 = &local_e8;
                    pTVar12 = (TPairInitializer<FName_const_&,FRealCurve_*_&&> *)local_f4;
                    local_e8 = this_01;
                  }
                  else {
                    this_00 = ::operator_new(0x80);
                    if (this_00 == (FRichCurve *)0x0) {
                      this_00 = (FRichCurve *)0x0;
                    }
                    else {
                      this_00->_padding_ = 0;
                      this_00->_padding_ = 0;
                      this_00->_padding_ = 0;
                      this_00->_padding_ = 0;
                      *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0x404;
                      this_00->_padding_ = 0;
                      this_00->_padding_ = 0;
                      this_00->_padding_ = 0;
                      *(undefined4 *)&this_00->_padding_ = 0;
                      *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0x80;
                      *(undefined4 *)&this_00->_padding_ = 0xffffffff;
                      *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0;
                      this_00->_padding_ = 0;
                      this_00->_padding_ = 0;
                      this_00->_padding_ = 0;
                      *(undefined4 *)&this_00->_padding_ = 0x7f7fffff;
                      this_00->_padding_ = (longlong)&___7FRichCurve__6B_;
                      (this_00->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      (this_00->Keys).ArrayNum = 0;
                      (this_00->Keys).ArrayMax = 0;
                    }
                    uVar15 = 0;
                    uVar21 = uVar15;
                    if (0 < local_1a0.ArrayNum) {
                      do {
                        LOCK();
                        aVar2 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
                        UNLOCK();
                        bVar4 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
                        LastKeyHandleIndex = aVar2;
                        if (bVar4) {
                          pwVar19 = L"";
                          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("Index != 0",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                                             ,0x1c,L"");
                          if (bVar4) {
                            pcVar1 = (code *)swi(3);
                            pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                            return pTVar7;
                          }
                        }
                        uVar16 = (uint)uVar15;
                        uVar20 = 0;
                        if ((int)uVar16 < (int)local_140._8_4_) {
                          uVar20 = ~uVar16 >> 0x1f;
                        }
                        if (uVar20 == 0) {
                          pwVar19 = L"Array index out of bounds: %lld into an array of size %lld";
                          in_stack_fffffffffffffe28 = (FString *)(longlong)(int)uVar16;
                          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar4) {
                            pcVar1 = (code *)swi(3);
                            pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                            return pTVar7;
                          }
                        }
                        uVar20 = 0;
                        if ((int)uVar16 < local_1a0.ArrayNum) {
                          uVar20 = ~uVar16 >> 0x1f;
                        }
                        if (uVar20 == 0) {
                          pwVar19 = L"Array index out of bounds: %lld into an array of size %lld";
                          in_stack_fffffffffffffe28 = (FString *)(longlong)(int)uVar16;
                          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            );
                          if (bVar4) {
                            pcVar1 = (code *)swi(3);
                            pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                            return pTVar7;
                          }
                        }
                        in_stack_fffffffffffffe28 =
                             (FString *)((ulonglong)in_stack_fffffffffffffe28 & 0xffffffffffffff00);
                        FRichCurve::AddKey(this_00,in_XMM1_Da,
                                           *(float *)(local_1a0.AllocatorInstance.Data + uVar21),
                                           SUB81(pwVar19,0),
                                           (FKeyHandle)(uint)in_stack_fffffffffffffe28);
                        FVar3.Index = local_190.Index;
                        bVar4 = FIndexedCurve::IsKeyHandleValid((FIndexedCurve *)this_00,local_190);
                        if (bVar4) {
                          pFVar10 = FRichCurve::GetKey(this_00,FVar3);
                          in_XMM1_Da = 0.0;
                          (pFVar10->InterpMode).Value = (uchar)param_2;
                          FRichCurve::AutoSetTangents(this_00,0.0);
                        }
                        uVar15 = (ulonglong)(uVar16 + 1);
                        uVar21 = uVar21 + 4;
                        uVar20 = local_1a4;
                      } while ((int)(uVar16 + 1) < local_1a0.ArrayNum);
                    }
                    local_a0 = (undefined8 *)local_188;
                    ppuVar18 = &local_a0;
                    local_98 = &local_e0;
                    pTVar12 = (TPairInitializer<FName_const_&,FRealCurve_*_&&> *)(local_f4 + 4);
                    local_e0 = this_00;
                  }
                  pwVar19 = (wchar_t *)0x0;
                  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_&&>_>
                            ((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                              *)&this->RowMap,pTVar12,(bool *)ppuVar18);
                  if ((FScriptContainerElement *)local_140._0_8_ != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free((void *)local_140._0_8_);
                  }
                }
                else {
                  ::FName::ToString((FName *)local_188,local_70);
                  ::FString::PrintfImpl
                            (&local_150,L"Row \'%s\' does not have the right number of columns.");
                  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
                  if ((pFVar8 <= (FScriptContainerElement *)&local_150) &&
                     ((FScriptContainerElement *)&local_150 < pFVar8 + (longlong)*piVar17 * 0x10)) {
                    pwVar19 = 
                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                    ;
                    in_stack_fffffffffffffe28 = &local_150;
                    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      );
                    if (bVar4) {
                      pcVar1 = (code *)swi(3);
                      pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                      return pTVar7;
                    }
                  }
                  iVar5 = __return_storage_ptr__->ArrayNum;
                  if (iVar5 == *piVar17) {
                    iVar5 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&__return_storage_ptr__->AllocatorInstance,piVar17);
                  }
                  lVar11 = (longlong)iVar5;
                  __return_storage_ptr__->ArrayNum = iVar5 + 1;
                  pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
                  *(undefined8 *)(pFVar8 + lVar11 * 0x10) = 0;
                  *(FScriptContainerElement **)(pFVar8 + lVar11 * 0x10) =
                       local_150.Data.AllocatorInstance.Data;
                  *(int *)(pFVar8 + lVar11 * 0x10 + 8) = local_150.Data.ArrayNum;
                  *(int *)(pFVar8 + lVar11 * 0x10 + 0xc) = local_150.Data.ArrayMax;
                  local_150.Data.ArrayNum = 0;
                  local_150.Data.ArrayMax = 0;
                  local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  if (local_70[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_70[0].Data.AllocatorInstance.Data);
                  }
                  if ((FScriptContainerElement *)local_140._0_8_ != (FScriptContainerElement *)0x0)
                  {
                    FMemory::Free((void *)local_140._0_8_);
                  }
                }
              }
              else {
                ::FName::ToString((FName *)local_188,&local_80);
                ::FString::PrintfImpl(&local_160,L"Duplicate row name \'%s\'.");
                pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
                if ((pFVar8 <= (FScriptContainerElement *)&local_160) &&
                   ((FScriptContainerElement *)&local_160 < pFVar8 + (longlong)*piVar17 * 0x10)) {
                  pwVar19 = 
                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                  ;
                  in_stack_fffffffffffffe28 = &local_160;
                  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    );
                  if (bVar4) {
                    pcVar1 = (code *)swi(3);
                    pTVar7 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
                    return pTVar7;
                  }
                }
                iVar5 = __return_storage_ptr__->ArrayNum;
                if (iVar5 == *piVar17) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x810,&__return_storage_ptr__->AllocatorInstance,piVar17);
                }
                lVar11 = (longlong)iVar5;
                __return_storage_ptr__->ArrayNum = iVar5 + 1;
                pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
                *(undefined8 *)(pFVar8 + lVar11 * 0x10) = 0;
                *(FScriptContainerElement **)(pFVar8 + lVar11 * 0x10) =
                     local_160.Data.AllocatorInstance.Data;
                *(int *)(pFVar8 + lVar11 * 0x10 + 8) = local_160.Data.ArrayNum;
                *(int *)(pFVar8 + lVar11 * 0x10 + 0xc) = local_160.Data.ArrayMax;
                local_160.Data.ArrayNum = 0;
                local_160.Data.ArrayMax = 0;
                local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_80.Data.AllocatorInstance.Data);
                }
              }
            }
          }
          local_1a4 = uVar20 + 1;
          local_100 = local_100 + 0x10;
        } while ((int)local_1a4 < local_130.Rows.ArrayNum);
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnCurveTableChangedDelegate);
      local_90.Data.AllocatorInstance.Data = local_1a0.AllocatorInstance.Data;
    }
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  DestructItems<TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_>,int>
            ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)
             local_130.Rows.AllocatorInstance.Data,local_130.Rows.ArrayNum);
  if ((TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)local_130.Rows.AllocatorInstance.Data
      != (TArray<wchar_t_const_*,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_130.Rows.AllocatorInstance.Data);
  }
  if (local_130.SourceString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.SourceString.Data.AllocatorInstance.Data);
  }
  _anon_3AA66773::FScopedCurveTableChange::~FScopedCurveTableChange(&local_d8);
  return __return_storage_ptr__;
}

// CreateTableFromJSONString @ 147a3c750

/* WARNING: Removing unreachable block (ram,0x000147a3ce24) */
/* WARNING: Removing unreachable block (ram,0x000147a3d45c) */
/* WARNING: Removing unreachable block (ram,0x000147a3d2e5) */
/* WARNING: Removing unreachable block (ram,0x000147a3cccd) */
/* WARNING: Removing unreachable block (ram,0x000147a3cb44) */
/* WARNING: Removing unreachable block (ram,0x000147a3d9ac) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCurveTable::CreateTableFromJSONString
          (UCurveTable *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FString *param_1,ERichCurveInterpMode param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TJsonStringReader<wchar_t> *pTVar5;
  FJsonObject *pFVar6;
  uint *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  code *pcVar11;
  atomic<unsigned_int> aVar12;
  FJsonObject *pFVar13;
  undefined8 uVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar20;
  TSharedRef<TJsonStringReader<wchar_t>,1> *pTVar21;
  undefined8 *puVar22;
  FRealCurve **ppFVar23;
  FString *pFVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  wchar_t *pwVar27;
  TPairInitializer<FName_const_&,FRealCurve_*_&&> *pTVar28;
  uint uVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  uint uVar32;
  FScriptContainerElement *pFVar33;
  undefined1 *puVar34;
  undefined8 **ppuVar35;
  wchar_t *pwVar36;
  uint *puVar37;
  int *piVar38;
  FSimpleCurve *this_00;
  FRichCurve *pFVar39;
  float fVar40;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ERichCurveInterpMode local_res20;
  FScriptContainerElement *in_stack_fffffffffffffd08;
  undefined1 local_2c8;
  undefined1 local_2c7 [7];
  TArray<float,TSizedDefaultAllocator<32>_> local_2c0;
  uint local_2b0;
  float local_2ac;
  undefined1 local_2a8 [8];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_2a0;
  FRichCurve *local_290;
  FString local_288;
  FString local_278;
  FString local_268;
  FString local_258;
  FString local_248;
  FString local_238;
  FString local_228;
  FKeyHandle local_218;
  undefined8 local_210;
  longlong local_208;
  StackState local_200;
  int local_1c8;
  undefined1 local_1c0 [8];
  int local_1b8;
  FJsonObject *local_1b0;
  FSimpleCurve *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  FScopedCurveTableChange local_198;
  FRichCurve *local_190;
  FString local_188;
  FJsonObject *local_178;
  int iStack_170;
  uint uStack_16c;
  undefined1 *local_168;
  undefined4 uStack_160;
  uint uStack_15c;
  int local_158;
  undefined4 uStack_154;
  int iStack_150;
  undefined4 uStack_14c;
  FJsonObject *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  FSimpleCurve **local_100;
  undefined8 *local_f8;
  FRichCurve **local_f0;
  TStringView<wchar_t> local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TSharedRef<TJsonStringReader<wchar_t>,1> local_a8;
  FString local_98;
  FString local_88 [2];
  undefined4 local_5c;
  
  local_res20 = param_2;
  _anon_3AA66773::FScopedCurveTableChange::FScopedCurveTableChange(&local_198,this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar38 = &__return_storage_ptr__->ArrayMax;
  *piVar38 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  if ((param_1->Data).ArrayNum < 2) {
    ::FString::FString(&local_258,L"Input data is empty.");
    pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar31 <= (FScriptContainerElement *)&local_258) &&
        ((FScriptContainerElement *)&local_258 < pFVar31 + (longlong)*piVar38 * 0x10)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar11 = (code *)swi(3);
      pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
      return pTVar20;
    }
    iVar17 = __return_storage_ptr__->ArrayNum;
    if (iVar17 == *piVar38) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&__return_storage_ptr__->AllocatorInstance,piVar38);
    }
    lVar26 = (longlong)iVar17;
    __return_storage_ptr__->ArrayNum = iVar17 + 1;
    pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar31 + lVar26 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar31 + lVar26 * 0x10) = local_258.Data.AllocatorInstance.Data;
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar31 + lVar26 * 0x10 + 8) = local_258.Data.ArrayNum;
    *(int *)(pFVar31 + lVar26 * 0x10 + 0xc) = local_258.Data.ArrayMax;
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
    FVar25.Data = (FScriptContainerElement *)(TSharedPtr<FJsonValue,1> *)0x0;
    goto LAB_147a3d9cb;
  }
  local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2a0.ArrayNum = 0;
  local_2a0.ArrayMax = 0;
  pTVar21 = TJsonStringReader<wchar_t>::Create(&local_a8,param_1);
  pTVar4 = (pTVar21->SharedReferenceCount).ReferenceController;
  pTVar5 = pTVar21->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a8.SharedReferenceCount.ReferenceController);
  local_200.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.Identifier.Data.ArrayNum = 0;
  local_200.Identifier.Data.ArrayMax = 0;
  local_200.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.Array.ArrayNum = 0;
  local_200.Array.ArrayMax = 0;
  local_200.Object.Object = (FJsonObject *)0x0;
  local_200.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar15 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                     ((TJsonReader<wchar_t> *)pTVar5,&local_200,None);
  if (bVar15) {
    bVar15 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_200,&local_2a0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_200.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_200.Array.AllocatorInstance.Data,
               local_200.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_200.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_200.Array.AllocatorInstance.Data);
    }
    if (local_200.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Identifier.Data.AllocatorInstance.Data);
    }
    if ((!bVar15) || (local_2a0.ArrayNum == 0)) goto LAB_147a3c910;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    (**(code **)(this->_padding_ + 0x2b8))(this);
    local_2b0 = 0;
    this->CurveTableMode = (param_2 == RCIM_Cubic) + SimpleCurves;
    if (0 < local_2a0.ArrayNum) {
      local_208 = 0;
LAB_147a3c9c0:
      lVar26 = local_208;
      piVar38 = &__return_storage_ptr__->ArrayMax;
      uVar18 = 0;
      if ((int)local_2b0 < local_2a0.ArrayNum) {
        uVar18 = ~local_2b0 >> 0x1f;
      }
      if (uVar18 == 0) {
        in_stack_fffffffffffffd08 = (FScriptContainerElement *)(longlong)(int)local_2b0;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar15) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
          return pTVar20;
        }
      }
      FVar25.Data = local_2a0.AllocatorInstance.Data;
      if (*(longlong *)&local_2a0.AllocatorInstance.Data[lVar26 * 0x10].field_0x0 == 0) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar15) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
          return pTVar20;
        }
      }
      puVar22 = (undefined8 *)(**(code **)**(undefined8 **)&FVar25.Data[lVar26 * 0x10].field_0x0)();
      pFVar6 = (FJsonObject *)*puVar22;
      local_1a0 = (TReferenceControllerBase<1> *)puVar22[1];
      if (local_1a0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_1a0->SharedReferenceCount = (atomic<int>)((int)local_1a0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1b0 = pFVar6;
      if (pFVar6 == (FJsonObject *)0x0) {
        ::FString::PrintfImpl(&local_288,L"Row \'%d\' is not a valid JSON object.");
        pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
        if ((pFVar31 <= (FScriptContainerElement *)&local_288) &&
           ((FScriptContainerElement *)&local_288 < pFVar31 + (longlong)*piVar38 * 0x10)) {
          in_stack_fffffffffffffd08 = (FScriptContainerElement *)&local_288;
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar15) {
            pcVar11 = (code *)swi(3);
            pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
            return pTVar20;
          }
        }
        iVar17 = __return_storage_ptr__->ArrayNum;
        if (iVar17 == *piVar38) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&__return_storage_ptr__->AllocatorInstance,piVar38);
        }
        lVar26 = (longlong)iVar17;
        __return_storage_ptr__->ArrayNum = iVar17 + 1;
        pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
        *(undefined8 *)(pFVar31 + lVar26 * 0x10) = 0;
        *(FScriptContainerElement **)(pFVar31 + lVar26 * 0x10) =
             local_288.Data.AllocatorInstance.Data;
        *(int *)(pFVar31 + lVar26 * 0x10 + 8) = local_288.Data.ArrayNum;
        *(int *)(pFVar31 + lVar26 * 0x10 + 0xc) = local_288.Data.ArrayMax;
        local_288.Data.ArrayNum = 0;
        local_288.Data.ArrayMax = 0;
        local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        FVar25.Data = local_268.Data.AllocatorInstance.Data;
        uVar14 = local_268.Data._8_8_;
      }
      else {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c) < ::_TSS0) {
          _Init_thread_header(&::_TSS0);
          if (::_TSS0 == -1) {
            ::FString::FString(&RowNameJsonKey,L"Name");
            atexit(`UCurveTable::CreateTableFromJSONString'::__l11::
                   _dynamic_atexit_destructor_for__RowNameJsonKey__);
            _Init_thread_footer(&::_TSS0);
          }
        }
        local_118 = RowNameJsonKey.Data.AllocatorInstance.Data;
        iStack_110 = RowNameJsonKey.Data.ArrayNum + -1;
        if (RowNameJsonKey.Data.ArrayNum == 0) {
          iStack_110 = 0;
        }
        local_e8._12_4_ = uStack_10c;
        local_e8.Size = iStack_110;
        local_e8.DataPtr = (wchar_t *)RowNameJsonKey.Data.AllocatorInstance.Data;
        FJsonObject::GetStringField(pFVar6,&local_d8,&local_e8);
        MakeValidName((FString *)local_2a8);
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if ((FName)local_2a8 == (FName)0x0) {
          ::FString::PrintfImpl(&local_278,L"Row \'%d\' missing a name.");
          pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar31 <= (FScriptContainerElement *)&local_278) &&
             ((FScriptContainerElement *)&local_278 < pFVar31 + (longlong)*piVar38 * 0x10)) {
            in_stack_fffffffffffffd08 = (FScriptContainerElement *)&local_278;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar15) {
              pcVar11 = (code *)swi(3);
              pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
              return pTVar20;
            }
          }
          iVar17 = __return_storage_ptr__->ArrayNum;
          if (iVar17 == *piVar38) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&__return_storage_ptr__->AllocatorInstance,piVar38);
          }
          lVar26 = (longlong)iVar17;
          __return_storage_ptr__->ArrayNum = iVar17 + 1;
          pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
          *(undefined8 *)(pFVar31 + lVar26 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar31 + lVar26 * 0x10) =
               local_278.Data.AllocatorInstance.Data;
          *(int *)(pFVar31 + lVar26 * 0x10 + 8) = local_278.Data.ArrayNum;
          *(int *)(pFVar31 + lVar26 * 0x10 + 0xc) = local_278.Data.ArrayMax;
          local_278.Data.ArrayNum = 0;
          local_278.Data.ArrayMax = 0;
          local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar25.Data = local_268.Data.AllocatorInstance.Data;
          uVar14 = local_268.Data._8_8_;
        }
        else {
          ppFVar23 = TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                     ::Find((TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                             *)&this->RowMap,(FName)local_2a8);
          if (ppFVar23 == (FRealCurve **)0x0) {
            this_00 = (FSimpleCurve *)0x0;
            local_290 = (FRichCurve *)0x0;
            if (this->CurveTableMode == SimpleCurves) {
              this_00 = ::operator_new(0x88);
              if (this_00 == (FSimpleCurve *)0x0) {
                this_00 = (FSimpleCurve *)0x0;
              }
              else {
                this_00->_padding_ = 0;
                this_00->_padding_ = 0;
                this_00->_padding_ = 0;
                *(undefined4 *)&this_00->_padding_ = 0;
                *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0x80;
                *(undefined4 *)&this_00->_padding_ = 0xffffffff;
                *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0;
                this_00->_padding_ = 0;
                *(undefined4 *)&this_00->_padding_ = 0;
                this_00->_padding_ = 0;
                this_00->_padding_ = 0;
                *(undefined4 *)&this_00->_padding_ = 0x7f7fffff;
                *(undefined2 *)((longlong)&this_00->_padding_ + 4) = 0x404;
                this_00->_padding_ = (longlong)&___7FSimpleCurve__6B_;
                (this_00->InterpMode).Value = '\0';
                (this_00->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (this_00->Keys).ArrayNum = 0;
                (this_00->Keys).ArrayMax = 0;
              }
              if (param_2 == RCIM_Cubic) {
                local_res10[0] = 0;
                bVar15 = `FSimpleCurve::SetKeyInterpMode'::__l3::<lambda_1>::operator()(local_res10)
                ;
                if (!bVar15) goto LAB_147a3cf68;
              }
              (this_00->InterpMode).Value = (uchar)param_2;
            }
            else {
              local_290 = ::operator_new(0x80);
              if (local_290 == (FRichCurve *)0x0) {
                local_290 = (FRichCurve *)0x0;
              }
              else {
                local_290->_padding_ = 0;
                local_290->_padding_ = 0;
                local_290->_padding_ = 0;
                local_290->_padding_ = 0;
                *(undefined4 *)((longlong)&local_290->_padding_ + 4) = 0x404;
                local_290->_padding_ = 0;
                local_290->_padding_ = 0;
                local_290->_padding_ = 0;
                *(undefined4 *)&local_290->_padding_ = 0;
                *(undefined4 *)((longlong)&local_290->_padding_ + 4) = 0x80;
                *(undefined4 *)&local_290->_padding_ = 0xffffffff;
                *(undefined4 *)((longlong)&local_290->_padding_ + 4) = 0;
                local_290->_padding_ = 0;
                local_290->_padding_ = 0;
                local_290->_padding_ = 0;
                local_290->_padding_ = (longlong)&___7FRichCurve__6B_;
                *(undefined4 *)&local_290->_padding_ = 0x7f7fffff;
                (local_290->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                (local_290->Keys).ArrayNum = 0;
                (local_290->Keys).ArrayMax = 0;
              }
            }
LAB_147a3cf68:
            uVar18 = *(uint *)&(pFVar6->Values).field_0x28;
            puVar1 = &(pFVar6->Values).field_0x10;
            local_158 = 0;
            iStack_170 = 0;
            uStack_16c = 1;
            uStack_15c = 0;
            if (uVar18 != 0) {
              puVar7 = *(uint **)&(pFVar6->Values).field_0x20;
              puVar37 = (uint *)puVar1;
              if (puVar7 != (uint *)0x0) {
                puVar37 = puVar7;
              }
              uVar29 = *puVar37;
              while (uVar29 == 0) {
                lVar26 = (longlong)iStack_170;
                local_158 = local_158 + 0x20;
                iStack_170 = iStack_170 + 1;
                uStack_15c = uVar18;
                if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_170)
                goto LAB_147a3cfed;
                uVar29 = puVar37[lVar26 + 1];
              }
              uStack_16c = -uVar29 & uVar29;
              uVar2 = (ulonglong)uStack_16c * 2 + 1;
              lVar26 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                }
              }
              local_1b8 = (int)lVar26;
              uStack_15c = local_1b8 + -1 + local_158;
              if ((int)uVar18 < (int)uStack_15c) {
                uStack_15c = uVar18;
              }
            }
LAB_147a3cfed:
            uStack_154 = local_5c;
            iStack_150 = *(int *)&(pFVar6->Values).field_0x8 - *(int *)&(pFVar6->Values).field_0x34;
            uVar29 = *(uint *)&(pFVar6->Values).field_0x28;
            TStack_140._padding_ = CONCAT44(uStack_16c,iStack_170);
            uVar32 = uVar29 & 0xffffffe0;
            uStack_160 = 0xffffffff;
            local_168._0_4_ = SUB84(puVar1,0);
            iVar17 = (int)uVar29 >> 5;
            TStack_140._28_4_ = local_5c;
            TStack_140.BaseBitIndex = local_158;
            uStack_120 = CONCAT44(uStack_14c,iStack_150);
            TStack_140.UnvisitedBitMask = 0xffffffff;
            fVar40 = local_168._0_4_;
            local_178 = pFVar6;
            local_148 = pFVar6;
            TStack_140.CurrentBitIndex = uStack_15c;
            TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
            if (((int)uVar29 < 0) || (local_168 = puVar1, (int)uVar18 < (int)uVar29)) {
              local_168 = puVar1;
              bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x7af,L"");
              if (bVar15) {
                pcVar11 = (code *)swi(3);
                pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
                return pTVar20;
              }
            }
            pFVar13 = local_1b0;
            uVar18 = *(uint *)&(pFVar6->Values).field_0x28;
            pwVar36 = (wchar_t *)(ulonglong)uVar18;
            if (uVar29 != uVar18) {
              puVar8 = *(undefined1 **)&(pFVar6->Values).field_0x20;
              puVar34 = puVar1;
              if (puVar8 != (undefined1 *)0x0) {
                puVar34 = puVar8;
              }
              uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar34 + (longlong)iVar17 * 4);
              while (uVar29 == 0) {
                lVar26 = (longlong)iVar17;
                uVar32 = uVar32 + 0x20;
                iVar17 = iVar17 + 1;
                uVar29 = uVar18;
                if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
                goto LAB_147a3d121;
                uVar29 = *(uint *)(puVar34 + lVar26 * 4 + 4);
              }
              uVar2 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
              lVar26 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                }
              }
              local_1c8 = (int)lVar26;
              uVar29 = local_1c8 + -1 + uVar32;
              if ((int)uVar18 < (int)uVar29) {
                uVar29 = uVar18;
              }
            }
LAB_147a3d121:
            do {
              pFVar6 = local_148;
              if (*(int *)&(local_148->Values).field_0x8 - *(int *)&(local_148->Values).field_0x34
                  != (int)uStack_120) {
                local_res18[0] = 0;
                `TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FJsonValue,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
              }
              pFVar39 = local_290;
              lVar26 = (longlong)TStack_140.CurrentBitIndex;
              if (((TStack_140.CurrentBitIndex == uVar29) &&
                  (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
                 (pFVar6 == pFVar13)) goto LAB_147a3d560;
              lVar9 = *(longlong *)&pFVar6->Values;
              iVar17 = *(int *)(lVar9 + 8 + lVar26 * 0x28);
              if (iVar17 == RowNameJsonKey.Data.ArrayNum) {
                if (1 < iVar17) {
                  iVar17 = FGenericPlatformStricmp::Stricmp
                                     (*(wchar_t **)(lVar9 + lVar26 * 0x28),
                                      (wchar_t *)RowNameJsonKey.Data.AllocatorInstance.Data);
                  bVar15 = iVar17 == 0;
                  goto LAB_147a3d19f;
                }
              }
              else {
                bVar15 = iVar17 + RowNameJsonKey.Data.ArrayNum == 1;
LAB_147a3d19f:
                if (!bVar15) {
                  local_2ac = 0.0;
                  if (*(int *)(lVar9 + 8 + lVar26 * 0x28) == 0) {
                    pwVar27 = L"";
                  }
                  else {
                    pwVar27 = *(wchar_t **)(lVar9 + lVar26 * 0x28);
                  }
                  bVar15 = LexTryParseString<float>(&local_2ac,pwVar27);
                  if (bVar15) {
                    local_210 = 0;
                    if (*(longlong *)(lVar9 + 0x10 + lVar26 * 0x28) == 0) {
                      pwVar36 = L"";
                      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L"");
                      if (bVar15) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
                        return pTVar20;
                      }
                    }
                    plVar10 = *(longlong **)(lVar9 + 0x10 + lVar26 * 0x28);
                    cVar16 = (**(code **)(*plVar10 + 0x50))(plVar10,&local_210);
                    if (cVar16 == '\0') {
                      pFVar24 = ::FName::ToString((FName *)local_2a8,local_88);
                      if ((pFVar24->Data).ArrayNum == 0) {
                        pwVar36 = L"";
                      }
                      else {
                        pwVar36 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                      }
                      ::FString::PrintfImpl
                                (&local_228,
                                 L"Entry \'%s\' on row \'%s\' is not a float and cannot be parsed.")
                      ;
                      pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
                      piVar38 = &__return_storage_ptr__->ArrayMax;
                      if ((pFVar31 <= (FScriptContainerElement *)&local_228) &&
                         ((FScriptContainerElement *)&local_228 <
                          pFVar31 + (longlong)*piVar38 * 0x10)) {
                        pwVar36 = 
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ;
                        in_stack_fffffffffffffd08 = (FScriptContainerElement *)&local_228;
                        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           );
                        if (bVar15) {
                          pcVar11 = (code *)swi(3);
                          pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
                          return pTVar20;
                        }
                      }
                      iVar17 = __return_storage_ptr__->ArrayNum;
                      if (iVar17 == *piVar38) {
                        iVar17 = UE::Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x810,&__return_storage_ptr__->AllocatorInstance,piVar38
                                           );
                      }
                      lVar26 = (longlong)iVar17;
                      __return_storage_ptr__->ArrayNum = iVar17 + 1;
                      pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
                      *(undefined8 *)(pFVar31 + lVar26 * 0x10) = 0;
                      *(FScriptContainerElement **)(pFVar31 + lVar26 * 0x10) =
                           local_228.Data.AllocatorInstance.Data;
                      *(int *)(pFVar31 + lVar26 * 0x10 + 8) = local_228.Data.ArrayNum;
                      *(int *)(pFVar31 + lVar26 * 0x10 + 0xc) = local_228.Data.ArrayMax;
                      local_228.Data.ArrayNum = 0;
                      local_228.Data.ArrayMax = 0;
                      local_228.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      if (local_88[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                      {
                        FMemory::Free(local_88[0].Data.AllocatorInstance.Data);
                      }
                    }
                    else {
                      LOCK();
                      aVar12 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
                      UNLOCK();
                      if (this_00 == (FSimpleCurve *)0x0) {
                        bVar15 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
                        LastKeyHandleIndex = aVar12;
                        if (bVar15) {
                          pwVar36 = L"";
                          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Index != 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                                              ,0x1c,L"");
                          if (bVar15) {
                            pcVar11 = (code *)swi(3);
                            pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
                            return pTVar20;
                          }
                        }
                        in_stack_fffffffffffffd08 =
                             (FScriptContainerElement *)
                             ((ulonglong)in_stack_fffffffffffffd08 & 0xffffffffffffff00);
                        FRichCurve::AddKey(local_290,fVar40,local_2ac,SUB81(pwVar36,0),
                                           (FKeyHandle)(uint)in_stack_fffffffffffffd08);
                        FRichCurve::SetKeyInterpMode(local_290,local_218,local_res20);
                      }
                      else {
                        bVar15 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
                        LastKeyHandleIndex = aVar12;
                        if (bVar15) {
                          pwVar36 = L"";
                          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Index != 0",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                                              ,0x1c,L"");
                          if (bVar15) {
                            pcVar11 = (code *)swi(3);
                            pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
                            return pTVar20;
                          }
                        }
                        in_stack_fffffffffffffd08 =
                             (FScriptContainerElement *)
                             ((ulonglong)in_stack_fffffffffffffd08 & 0xffffffffffffff00);
                        FSimpleCurve::AddKey
                                  (this_00,fVar40,local_2ac,SUB81(pwVar36,0),
                                   (FKeyHandle)(uint)in_stack_fffffffffffffd08);
                      }
                    }
                  }
                  else {
                    pFVar24 = ::FName::ToString((FName *)local_2a8,&local_b8);
                    if ((pFVar24->Data).ArrayNum == 0) {
                      pwVar36 = L"";
                    }
                    else {
                      pwVar36 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
                    }
                    ::FString::PrintfImpl
                              (&local_248,
                               L"Key \'%s\' on row \'%s\' is not a float and cannot be parsed.");
                    pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
                    piVar38 = &__return_storage_ptr__->ArrayMax;
                    if ((pFVar31 <= (FScriptContainerElement *)&local_248) &&
                       ((FScriptContainerElement *)&local_248 < pFVar31 + (longlong)*piVar38 * 0x10)
                       ) {
                      pwVar36 = 
                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      ;
                      in_stack_fffffffffffffd08 = (FScriptContainerElement *)&local_248;
                      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         );
                      if (bVar15) {
                        pcVar11 = (code *)swi(3);
                        pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
                        return pTVar20;
                      }
                    }
                    iVar17 = __return_storage_ptr__->ArrayNum;
                    if (iVar17 == *piVar38) {
                      iVar17 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&__return_storage_ptr__->AllocatorInstance,piVar38);
                    }
                    lVar26 = (longlong)iVar17;
                    __return_storage_ptr__->ArrayNum = iVar17 + 1;
                    pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
                    *(undefined8 *)(pFVar31 + lVar26 * 0x10) = 0;
                    *(FScriptContainerElement **)(pFVar31 + lVar26 * 0x10) =
                         local_248.Data.AllocatorInstance.Data;
                    *(int *)(pFVar31 + lVar26 * 0x10 + 8) = local_248.Data.ArrayNum;
                    *(int *)(pFVar31 + lVar26 * 0x10 + 0xc) = local_248.Data.ArrayMax;
                    local_248.Data.ArrayNum = 0;
                    local_248.Data.ArrayMax = 0;
                    local_248.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                    }
                  }
                }
              }
              TStack_140.UnvisitedBitMask =
                   TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
            } while( true );
          }
          ::FName::ToString((FName *)local_2a8,&local_c8);
          ::FString::PrintfImpl(&local_268,L"Duplicate row name \'%s\'.");
          pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
          if ((pFVar31 <= (FScriptContainerElement *)&local_268) &&
             ((FScriptContainerElement *)&local_268 < pFVar31 + (longlong)*piVar38 * 0x10)) {
            in_stack_fffffffffffffd08 = (FScriptContainerElement *)&local_268;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar15) {
              pcVar11 = (code *)swi(3);
              pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
              return pTVar20;
            }
          }
          iVar17 = __return_storage_ptr__->ArrayNum;
          if (iVar17 == *piVar38) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&__return_storage_ptr__->AllocatorInstance,piVar38);
          }
          lVar26 = (longlong)iVar17;
          __return_storage_ptr__->ArrayNum = iVar17 + 1;
          pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
          *(undefined8 *)(pFVar31 + lVar26 * 0x10) = 0;
          *(FScriptContainerElement **)(pFVar31 + lVar26 * 0x10) =
               local_268.Data.AllocatorInstance.Data;
          local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          FVar25.Data = local_268.Data.AllocatorInstance.Data;
          *(int *)(pFVar31 + lVar26 * 0x10 + 8) = local_268.Data.ArrayNum;
          *(int *)(pFVar31 + lVar26 * 0x10 + 0xc) = local_268.Data.ArrayMax;
          local_268.Data.ArrayNum = 0;
          local_268.Data.ArrayMax = 0;
          uVar14 = local_268.Data._8_8_;
          local_268.Data.ArrayNum = 0;
          local_268.Data.ArrayMax = 0;
          local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c8.Data.AllocatorInstance.Data);
            FVar25.Data = local_268.Data.AllocatorInstance.Data;
            uVar14 = local_268.Data._8_8_;
          }
        }
      }
      goto LAB_147a3ccdc;
    }
LAB_147a3cd09:
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnCurveTableChangedDelegate);
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_200.Object.SharedReferenceCount.ReferenceController);
    DestructItems<TSharedPtr<FJsonValue,1>,int>
              ((TSharedPtr<FJsonValue,1> *)local_200.Array.AllocatorInstance.Data,
               local_200.Array.ArrayNum);
    if ((TSharedPtr<FJsonValue,1> *)local_200.Array.AllocatorInstance.Data !=
        (TSharedPtr<FJsonValue,1> *)0x0) {
      FMemory::Free(local_200.Array.AllocatorInstance.Data);
    }
    if (local_200.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Identifier.Data.AllocatorInstance.Data);
    }
LAB_147a3c910:
    ::FString::PrintfImpl(&local_238,L"Failed to parse the JSON data. Error: %s");
    pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar31 <= (FScriptContainerElement *)&local_238) &&
        ((FScriptContainerElement *)&local_238 < pFVar31 + (longlong)*piVar38 * 0x10)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar11 = (code *)swi(3);
      pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
      return pTVar20;
    }
    iVar17 = __return_storage_ptr__->ArrayNum;
    if (iVar17 == *piVar38) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&__return_storage_ptr__->AllocatorInstance,piVar38);
    }
    lVar26 = (longlong)iVar17;
    __return_storage_ptr__->ArrayNum = iVar17 + 1;
    pFVar31 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(undefined8 *)(pFVar31 + lVar26 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar31 + lVar26 * 0x10) = local_238.Data.AllocatorInstance.Data;
    *(int *)(pFVar31 + lVar26 * 0x10 + 8) = local_238.Data.ArrayNum;
    *(int *)(pFVar31 + lVar26 * 0x10 + 0xc) = local_238.Data.ArrayMax;
    local_238.Data.ArrayNum = 0;
    local_238.Data.ArrayMax = 0;
    local_238.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  DestructItems<TSharedPtr<FJsonValue,1>,int>
            ((TSharedPtr<FJsonValue,1> *)local_2a0.AllocatorInstance.Data,local_2a0.ArrayNum);
  FVar25.Data = local_2a0.AllocatorInstance.Data;
LAB_147a3d9cb:
  if ((TSharedPtr<FJsonValue,1> *)FVar25.Data != (TSharedPtr<FJsonValue,1> *)0x0) {
    FMemory::Free(FVar25.Data);
  }
  _anon_3AA66773::FScopedCurveTableChange::~FScopedCurveTableChange(&local_198);
  return __return_storage_ptr__;
LAB_147a3d560:
  local_2c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2c0.ArrayNum = 0;
  local_2c0.ArrayMax = 0;
  if (this_00 == (FSimpleCurve *)0x0) {
    uVar18 = (local_290->Keys).ArrayNum;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (0 < (int)uVar18) {
      in_stack_fffffffffffffd08 = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar18,&local_2c0.AllocatorInstance,0,&local_2c0.ArrayMax);
    }
    pFVar30 = (pFVar39->Keys).AllocatorInstance.Data;
    iVar17 = (pFVar39->Keys).ArrayNum;
    pFVar31 = pFVar30 + 4;
    pFVar33 = pFVar30 + (longlong)iVar17 * 0x1c;
    while( true ) {
      if ((pFVar39->Keys).ArrayNum != iVar17) {
        local_2c7[0] = 0;
        `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_2c7);
      }
      if (pFVar30 == pFVar33) break;
      if ((local_2c0.AllocatorInstance.Data <= pFVar31) &&
         (pFVar31 < local_2c0.AllocatorInstance.Data + (longlong)local_2c0.ArrayMax * 4)) {
        in_stack_fffffffffffffd08 = pFVar31;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
          return pTVar20;
        }
      }
      if (local_2c0.ArrayNum == local_2c0.ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2c0.AllocatorInstance,&local_2c0.ArrayMax);
        local_2c0.ArrayNum = iVar19;
      }
      lVar26 = (longlong)local_2c0.ArrayNum;
      pFVar30 = pFVar30 + 0x1c;
      local_2c0.ArrayNum = local_2c0.ArrayNum + 1;
      uVar3 = *(undefined4 *)pFVar31;
      pFVar31 = pFVar31 + 0x1c;
      *(undefined4 *)(local_2c0.AllocatorInstance.Data + lVar26 * 4) = uVar3;
    }
  }
  else {
    uVar18 = (this_00->Keys).ArrayNum;
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
    }
    if (0 < (int)uVar18) {
      in_stack_fffffffffffffd08 = (FScriptContainerElement *)0x0;
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar18,&local_2c0.AllocatorInstance,0,&local_2c0.ArrayMax);
    }
    pFVar30 = (this_00->Keys).AllocatorInstance.Data;
    iVar17 = (this_00->Keys).ArrayNum;
    pFVar31 = pFVar30 + (longlong)iVar17 * 8;
    while( true ) {
      if ((this_00->Keys).ArrayNum != iVar17) {
        local_2c8 = 0;
        `TCheckedPointerIterator<FSimpleCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_2c8);
      }
      pFVar39 = local_290;
      if (pFVar30 == pFVar31) break;
      if ((local_2c0.AllocatorInstance.Data <= pFVar30) &&
         (pFVar30 < local_2c0.AllocatorInstance.Data + (longlong)local_2c0.ArrayMax * 4)) {
        in_stack_fffffffffffffd08 = pFVar30;
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar15) {
          pcVar11 = (code *)swi(3);
          pTVar20 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar11)();
          return pTVar20;
        }
      }
      if (local_2c0.ArrayNum == local_2c0.ArrayMax) {
        iVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_2c0.AllocatorInstance,&local_2c0.ArrayMax);
        local_2c0.ArrayNum = iVar19;
      }
      lVar26 = (longlong)local_2c0.ArrayNum;
      local_2c0.ArrayNum = local_2c0.ArrayNum + 1;
      uVar3 = *(undefined4 *)pFVar30;
      pFVar30 = pFVar30 + 8;
      *(undefined4 *)(local_2c0.AllocatorInstance.Data + lVar26 * 4) = uVar3;
    }
  }
  ::FName::ToString((FName *)local_2a8,&local_98);
  ::FString::PrintfImpl(&local_188,L"UCurveTable::CreateTableFromJSONString (row=%s)");
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  bVar15 = FindDuplicateXValues(&local_2c0,&local_188,__return_storage_ptr__);
  if (bVar15) {
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    param_2 = local_res20;
    FVar25.Data = local_268.Data.AllocatorInstance.Data;
    uVar14 = local_268.Data._8_8_;
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
      param_2 = local_res20;
      FVar25.Data = local_268.Data.AllocatorInstance.Data;
      uVar14 = local_268.Data._8_8_;
    }
  }
  else {
    if (this_00 == (FSimpleCurve *)0x0) {
      ppuVar35 = &local_f8;
      local_f0 = &local_190;
      pTVar28 = (TPairInitializer<FName_const_&,FRealCurve_*_&&> *)(local_1c0 + 4);
      local_190 = pFVar39;
      local_f8 = (undefined8 *)local_2a8;
    }
    else {
      ppuVar35 = &local_108;
      local_100 = &local_1a8;
      pTVar28 = (TPairInitializer<FName_const_&,FRealCurve_*_&&> *)local_1c0;
      local_1a8 = this_00;
      local_108 = (undefined8 *)local_2a8;
    }
    TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_&&>_>
              ((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                *)&this->RowMap,pTVar28,(bool *)ppuVar35);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    param_2 = local_res20;
    FVar25.Data = local_268.Data.AllocatorInstance.Data;
    uVar14 = local_268.Data._8_8_;
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
      param_2 = local_res20;
      FVar25.Data = local_268.Data.AllocatorInstance.Data;
      uVar14 = local_268.Data._8_8_;
    }
  }
LAB_147a3ccdc:
  local_268.Data._8_8_ = uVar14;
  local_268.Data.AllocatorInstance.Data = FVar25.Data;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_1a0);
  local_2b0 = local_2b0 + 1;
  local_208 = local_208 + 1;
  if (local_2a0.ArrayNum <= (int)local_2b0) goto LAB_147a3cd09;
  goto LAB_147a3c9c0;
}

// CreateTableFromOtherTable @ 147a3da70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000147a3dbdc) */

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UCurveTable::CreateTableFromOtherTable
          (UCurveTable *this,TArray<FString,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UCurveTable *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  undefined1 auStackY_158 [32];
  FString local_108;
  FScopedCurveTableChange local_f8 [2];
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId812,"UCurveTable::CreateTableFromOtherTable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CurveTable.cpp"
               ,0x32c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId812);
  }
  _anon_3AA66773::FScopedCurveTableChange::FScopedCurveTableChange(local_f8,this);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  if (param_1 == (UCurveTable *)0x0) {
    ::FString::FString(&local_108,L"No input table provided");
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_108) &&
        ((FScriptContainerElement *)&local_108 <
         pFVar5 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
      return pTVar4;
    }
    iVar3 = __return_storage_ptr__->ArrayNum;
    if (iVar3 == __return_storage_ptr__->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar3 + 1;
    pFVar5 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar3 * 0x10;
    *(undefined8 *)pFVar5 = 0;
    *(FScriptContainerElement **)pFVar5 = local_108.Data.AllocatorInstance.Data;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar5 + 8) = local_108.Data.ArrayNum;
    *(int *)(pFVar5 + 0xc) = local_108.Data.ArrayMax;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
  }
  else {
    if (param_1->CurveTableMode == SimpleCurves) {
      local_e8._0_8_ = (FScriptContainerElement *)0x0;
      local_e8._8_8_ = 0;
      local_c8 = (void *)0x0;
      local_c0 = 0;
      local_bc = 0x80;
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_a8 = (ForElementType<FSetElementId>)0x0;
      local_a0 = 0;
      TSet<TTuple<FName,FSimpleCurve_*>,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FSimpleCurve_*>,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>,FDefaultSetAllocator>
                   *)local_e8,
                  (TSet<TTuple<FName,FSimpleCurve_*>,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>,FDefaultSetAllocator>
                   *)&param_1->RowMap);
      (**(code **)(this->_padding_ + 0x2b8))(this);
      CopyRowsToTable<FSimpleCurve,FSimpleCurveKey>
                ((TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
                  *)local_e8,&this->RowMap,__return_storage_ptr__);
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      iVar3 = SUB84(local_e8._8_8_,4);
      local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
      }
      local_b8 = 0xffffffff;
      local_b4 = 0;
      local_c0 = 0;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
      }
      pFVar5 = (FScriptContainerElement *)local_e8._0_8_;
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
        pFVar5 = (FScriptContainerElement *)local_e8._0_8_;
      }
    }
    else {
      local_98._0_8_ = (FScriptContainerElement *)0x0;
      local_98._8_8_ = 0;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_68 = 0xffffffff;
      local_64 = 0;
      local_58 = (ForElementType<FSetElementId>)0x0;
      local_50 = 0;
      TSet<TTuple<FName,FRichCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FRichCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>,FDefaultSetAllocator>
                   *)local_98,
                  (TSet<TTuple<FName,FRichCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>,FDefaultSetAllocator>
                   *)&param_1->RowMap);
      (**(code **)(this->_padding_ + 0x2b8))(this);
      CopyRowsToTable<FRichCurve,FRichCurveKey>
                ((TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
                  *)local_98,&this->RowMap,__return_storage_ptr__);
      local_50 = 0;
      if (local_58 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_58);
      }
      iVar3 = SUB84(local_98._8_8_,4);
      local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
      if (iVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
      }
      local_68 = 0xffffffff;
      local_64 = 0;
      local_70 = 0;
      if (0x80 < local_6c) {
        local_6c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
      }
      pFVar5 = (FScriptContainerElement *)local_98._0_8_;
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
        pFVar5 = (FScriptContainerElement *)local_98._0_8_;
      }
    }
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    this->CurveTableMode = param_1->CurveTableMode;
  }
  _anon_3AA66773::FScopedCurveTableChange::~FScopedCurveTableChange(local_f8);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// DeleteRow @ 147a3e950

void __thiscall UCurveTable::DeleteRow(UCurveTable *this,FName *param_1)

{
  bool bVar1;
  FRealCurve *local_res8 [4];
  
  local_res8[0] = (FRealCurve *)0x0;
  bVar1 = TMap<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
          ::RemoveAndCopyValue(&this->RowMap,*param_1,local_res8);
  if ((bVar1) && (local_res8[0] != (FRealCurve *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000147a3e988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)local_res8[0]->_padding_)(local_res8[0],1);
    return;
  }
  return;
}

// EmptyTable @ 147a405c0

void __thiscall UCurveTable::EmptyTable(UCurveTable *this)

{
  TMap<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
  *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  undefined1 local_res8 [8];
  int local_res10;
  FScopedCurveTableChange local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  _anon_3AA66773::FScopedCurveTableChange::FScopedCurveTableChange(&local_res18,this);
  iVar16 = *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34;
  if (0 < iVar16) {
    iVar3 = *(int *)&(this->RowMap).field_0x28;
    iVar12 = 0;
    iVar14 = 0;
    this_00 = &this->RowMap;
    puVar1 = &(this->RowMap).field_0x10;
    uVar7 = 1;
    iVar10 = 0;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->RowMap).field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) {
          iVar10 = *(int *)&(this->RowMap).field_0x28;
          iVar8 = iVar3;
          goto LAB_147a406a5;
        }
        uVar11 = puVar15[lVar9 + 1];
      }
      iVar10 = *(int *)&(this->RowMap).field_0x28;
      uVar7 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res10 = (int)lVar9;
      iVar8 = local_res10 + -1 + iVar14;
      if (iVar10 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_147a406a5:
    uVar11 = *(uint *)&(this->RowMap).field_0x28;
    uVar17 = uVar11 & 0xffffffe0;
    TStack_60._padding_ = CONCAT44(uVar7,iVar12);
    TStack_60.CurrentBitIndex = iVar8;
    TStack_60.UnvisitedBitMask = 0xffffffff;
    TStack_60._28_4_ = iVar8;
    TStack_60.BaseBitIndex = iVar14;
    uStack_40 = CONCAT44(uStack_6c,iVar16);
    iVar16 = (int)uVar11 >> 5;
    TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar10 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&(this->RowMap).field_0x28;
    if (uVar11 != uVar7) {
      puVar13 = *(undefined1 **)&(this->RowMap).field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar16 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar16;
        uVar17 = uVar17 + 0x20;
        iVar16 = iVar16 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
        goto LAB_147a407b0;
        uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar17;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_147a407b0:
    while( true ) {
      if (*(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34 != (int)uStack_40)
      {
        `TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_60.CurrentBitIndex == uVar11) &&
         (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      puVar4 = *(undefined8 **)
                (*(longlong *)&this_00->field_0x0 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)();
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    }
    bVar6 = 1 < *(int *)&(this->RowMap).field_0x48;
    if (!bVar6) {
      TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->RowMap).field_0xc;
    *(undefined4 *)&(this->RowMap).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->RowMap).field_0x34 = 0;
    *(undefined4 *)&(this->RowMap).field_0x30 = 0xffffffff;
    iVar16 = *(int *)&(this->RowMap).field_0x2c;
    *(undefined4 *)&(this->RowMap).field_0x28 = 0;
    if ((iVar16 < 0) || (0x80 < iVar16)) {
      *(undefined4 *)&(this->RowMap).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->RowMap).field_0x10,0);
    }
    if (bVar6) {
      *(undefined4 *)&(this->RowMap).field_0x48 = 1;
      TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                *)this_00);
    }
    if ((((uint)this->_padding_ >> 0x15 & 1) != 0) || (((uint)this->_padding_ >> 0x13 & 1) == 0)) {
      GlobalCachedCurveID = GlobalCachedCurveID + 1;
    }
  }
  this->CurveTableMode = Empty;
  _anon_3AA66773::FScopedCurveTableChange::~FScopedCurveTableChange(&local_res18);
  return;
}

// FindCurve @ 147a44460

/* WARNING: Enum "Type": Some values do not have unique names */

FRealCurve * __thiscall
UCurveTable::FindCurve(UCurveTable *this,FName param_1,FString *param_2,bool param_3)

{
  FRealCurve **ppFVar1;
  FName local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  if (param_1 == (FName)0x0) {
    if ((byte)LogCurveTable._0_1_ < 3) {
      return (FRealCurve *)0x0;
    }
    if (!param_3) {
      return (FRealCurve *)0x0;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_28,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>
              (&`public:_struct_FRealCurve*___ptr64___cdecl_UCurveTable::FindCurve(FName,FString_const&___ptr64,bool)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCurveTable);
    local_18.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    ppFVar1 = TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
              ::Find((TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                      *)&this->RowMap,param_1);
    if (ppFVar1 != (FRealCurve **)0x0) {
      return *ppFVar1;
    }
    if ((byte)LogCurveTable._0_1_ < 3) {
      return (FRealCurve *)0x0;
    }
    if (!param_3) {
      return (FRealCurve *)0x0;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0);
    ::FName::ToString(&local_res10,&local_28);
    UE::Logging::Private::BasicLog<3>
              (&`public:_struct_FRealCurve*___ptr64___cdecl_UCurveTable::FindCurve(FName,FString_const&___ptr64,bool)const___ptr64'
                ::__l31::LOG_Static,(FLogCategoryBase *)&LogCurveTable);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FRealCurve *)0x0;
}

// FinishDestroy @ 147a48b20

void __thiscall UCurveTable::FinishDestroy(UCurveTable *this)

{
  FScopedCurveTableChange local_res8 [4];
  
  _anon_3AA66773::FScopedCurveTableChange::FScopedCurveTableChange(local_res8,this);
  UObject::FinishDestroy((UObject *)this);
  (**(code **)(this->_padding_ + 0x2b8))(this);
  _anon_3AA66773::FScopedCurveTableChange::~FScopedCurveTableChange(local_res8);
  return;
}

// GetCurveTableChangeCriticalSection @ 147a4eee0

FWindowsRecursiveMutex * __cdecl UCurveTable::GetCurveTableChangeCriticalSection(void)

{
  return &FScopedCurveTableChange::CriticalSection;
}

// GetCurves @ 147a4f990

TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveTable::GetCurves
          (UCurveTable *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
              *)&this->_padding_);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar7 = local_78._24_8_ >> 0x20;
  uVar8 = local_78._28_4_;
  local_18 = (TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
              *)&this->_padding_;
  if ((int)uVar8 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      uStack_80 = *(undefined8 *)(*local_48 + 8 + (longlong)(int)uVar7 * 0x18);
      local_88 = *(undefined8 *)(*local_48 + (longlong)(int)uVar8 * 0x18);
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 <
           pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar3)();
        return pTVar6;
      }
      iVar5 = __return_storage_ptr__->ArrayNum;
      if (iVar5 == __return_storage_ptr__->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar5 + 1;
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      *(undefined8 *)pFVar1 = local_88;
      *(undefined8 *)(pFVar1 + 8) = uStack_80;
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar7 = (ulonglong)uStack_2c;
      uVar8 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar8 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar8 < 4) {
        iVar5 = 1;
      }
      else {
        uVar7 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar5 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar8) && (local_18->HashSize < iVar5)) || (iVar5 < local_18->HashSize)) {
        local_18->HashSize = iVar5;
        TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  return __return_storage_ptr__;
}

// GetCurves @ 147a4fb80

TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> * __thiscall
UCurveTable::GetCurves
          (UCurveTable *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  ulonglong uVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_> *pTVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  int iStack_6c;
  int local_68;
  int iStack_64;
  longlong *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  
  local_88 = &this->_padding_;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_78 = &this->_padding_;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar6 = *(int *)&this->RowMap;
  uStack_7c = 1;
  iStack_80 = 0;
  local_68 = iStack_80;
  iStack_6c = 0;
  if (iVar6 != 0) {
    plVar9 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar9 = local_78;
    }
    uVar2 = (uint)*plVar9;
    local_68 = 0;
    iStack_80 = 0;
    while (uVar2 == 0) {
      lVar8 = (longlong)iStack_80;
      local_68 = local_68 + 0x20;
      iStack_80 = iStack_80 + 1;
      iStack_6c = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_80) goto LAB_147a4fc30;
      uVar2 = *(uint *)((longlong)plVar9 + lVar8 * 4 + 4);
    }
    uStack_7c = -uVar2 & uVar2;
    uVar1 = (ulonglong)uStack_7c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_6c = local_68 + -1 + (int)lVar8;
    if (iVar6 < iStack_6c) {
      iStack_6c = iVar6;
    }
  }
LAB_147a4fc30:
  uStack_70 = 0xffffffff;
  TStack_50._padding_ = CONCAT44(uStack_7c,iStack_80);
  TStack_50.UnvisitedBitMask = 0xffffffff;
  TStack_50._28_4_ = iStack_6c;
  TStack_50.BaseBitIndex = local_68;
  iStack_64 = iStack_6c;
  local_58 = local_88;
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_78;
  TStack_50.CurrentBitIndex = iStack_6c;
  if (iStack_6c < iVar6) {
    do {
      uStack_90 = *(undefined8 *)(*local_58 + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
      local_98 = *(undefined8 *)(*local_58 + (longlong)TStack_50.CurrentBitIndex * 0x18);
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)&local_98) &&
          ((FScriptContainerElement *)&local_98 <
           pFVar3 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<FRichCurveEditInfoTemplate<FRealCurve_const_*>,TSizedDefaultAllocator<32>_>
                  *)(*pcVar4)();
        return pTVar7;
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
      *(undefined8 *)pFVar3 = local_98;
      *(undefined8 *)(pFVar3 + 8) = uStack_90;
      TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
    } while (TStack_50.CurrentBitIndex < *(int *)&(TStack_50.Array)->NumBits);
  }
  return __return_storage_ptr__;
}

// GetCurves @ 147a4fd90

void __thiscall
UCurveTable::GetCurves
          (UCurveTable *this,
          TAdderReserverRef<FRichCurveEditInfoTemplate<FRealCurve_const_*>,int> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined4 uStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  longlong *local_48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  iVar7 = 0;
  local_48 = &this->_padding_;
  iVar2 = *(int *)&this->RowMap;
  local_68 = &this->_padding_;
  uVar5 = 1;
  local_58 = 0;
  iStack_5c = 0;
  if (iVar2 != 0) {
    plVar8 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar8 = local_68;
    }
    uVar3 = (uint)*plVar8;
    while (uVar3 == 0) {
      lVar6 = (longlong)iVar7;
      local_58 = local_58 + 0x20;
      iVar7 = iVar7 + 1;
      iStack_5c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar7) goto LAB_147a4fe2c;
      uVar3 = *(uint *)((longlong)plVar8 + lVar6 * 4 + 4);
    }
    uVar5 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iStack_5c = local_58 + -1 + (int)lVar6;
    if (iVar2 < iStack_5c) {
      iStack_5c = iVar2;
    }
  }
LAB_147a4fe2c:
  uStack_70 = CONCAT44(uVar5,iVar7);
  uStack_60 = 0xffffffff;
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._padding_ = uStack_70;
  TStack_40._28_4_ = iStack_5c;
  TStack_40.BaseBitIndex = local_58;
  if (iStack_5c < iVar2) {
    uVar4 = *(undefined8 *)&param_1->field_0x8;
    lVar6 = *(longlong *)param_1;
    iStack_54 = iStack_5c;
    TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_68;
    TStack_40.CurrentBitIndex = iStack_5c;
    do {
      uStack_70 = *(undefined8 *)(*local_48 + 8 + (longlong)TStack_40.CurrentBitIndex * 0x18);
      local_78 = *(undefined8 *)(*local_48 + (longlong)TStack_40.CurrentBitIndex * 0x18);
      (**(code **)(lVar6 + 8))(uVar4,&local_78);
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < *(int *)&(TStack_40.Array)->NumBits);
  }
  return;
}

// GetOwners @ 147a54df0

TArray<UObject_const_*,TSizedDefaultAllocator<32>_> * __thiscall
UCurveTable::GetOwners
          (UCurveTable *this,
          TArray<UObject_const_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar1 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&__return_storage_ptr__->AllocatorInstance,
                     &__return_storage_ptr__->ArrayMax);
  __return_storage_ptr__->ArrayNum = iVar1 + 1;
  *(TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> **)
   ((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar1 * 8) =
       &this[-1].OnCurveTableChangedDelegate;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147a57190

UClass * __cdecl UCurveTable::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveTable.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CurveTable",
               &Z_Registration_Info_UClass_UCurveTable.InnerSingleton,
               StaticRegisterNativesUCurveTable,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveTable>,InternalVTableHelperCtorCaller<UCurveTable>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveTable.InnerSingleton;
}

// GetTableAsCSV @ 147a5a3e0

FString * __thiscall UCurveTable::GetTableAsCSV(UCurveTable *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (0 < *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34) {
    if (this->CurveTableMode == SimpleCurves) {
      GetTableAsCSV_Internal<FSimpleCurve>
                ((TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
                  *)&this->RowMap,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
    GetTableAsCSV_Internal<FRichCurve>
              ((TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
                *)&this->RowMap,__return_storage_ptr__);
  }
  return __return_storage_ptr__;
}

// GetTableAsJSON @ 147a5a440

FString * __thiscall UCurveTable::GetTableAsJSON(UCurveTable *this,FString *__return_storage_ptr__)

{
  FString local_28;
  TSharedRef<TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>,1> local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  TJsonWriterFactory<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::Create(&local_18,&local_28,0);
  if (*(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34 < 1) {
    ::FString::FString(__return_storage_ptr__,L"No data in row curve!\n");
  }
  else {
    if (this->CurveTableMode == SimpleCurves) {
      WriteTableAsJSON_Internal<wchar_t,FSimpleCurve>
                ((TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
                  *)&this->RowMap,&local_18,true);
    }
    else {
      WriteTableAsJSON_Internal<wchar_t,FRichCurve>
                ((TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
                  *)&this->RowMap,&local_18,true);
    }
    (**(code **)((local_18.Object)->_padding_ + 8))();
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetTableAsString @ 147a5a510

FString * __thiscall
UCurveTable::GetTableAsString(UCurveTable *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString *pFVar2;
  int iVar3;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (*(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34 < 1) {
    pFVar2 = ::FString::FString(&local_18,L"No data in row curve!\n");
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar3 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  if (this->CurveTableMode == SimpleCurves) {
    GetTableAsString_Internal<FSimpleCurve>
              ((TMap<FName,FSimpleCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FSimpleCurve_*,0>_>
                *)&this->RowMap,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  GetTableAsString_Internal<FRichCurve>
            ((TMap<FName,FRichCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRichCurve_*,0>_>
              *)&this->RowMap,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InvalidateAllCachedCurves @ 147a62c80

void __cdecl UCurveTable::InvalidateAllCachedCurves(void)

{
  GlobalCachedCurveID = GlobalCachedCurveID + 1;
  return;
}

// IsValidCurve @ 147a63460

bool __thiscall
UCurveTable::IsValidCurve(UCurveTable *this,FRichCurveEditInfoTemplate<FRealCurve_*> *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  FRealCurve *pFVar4;
  longlong lVar5;
  longlong *plVar6;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  longlong *local_30;
  undefined4 uStack_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  
  iStack_38 = 0;
  iVar2 = *(int *)&this->RowMap;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
  uStack_34 = 1;
  local_20 = 0;
  iStack_24 = 0;
  if (iVar2 != 0) {
    plVar6 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar6 = (longlong *)TStack_60.Array;
    }
    uVar3 = (uint)*plVar6;
    while (uVar3 == 0) {
      lVar5 = (longlong)iStack_38;
      local_20 = local_20 + 0x20;
      iStack_38 = iStack_38 + 1;
      iStack_24 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_38) goto LAB_147a634f8;
      uVar3 = *(uint *)((longlong)plVar6 + lVar5 * 4 + 4);
    }
    uStack_34 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_34 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_24 = (int)lVar5 + -1 + local_20;
    if (iVar2 < iStack_24) {
      iStack_24 = iVar2;
    }
  }
LAB_147a634f8:
  uStack_28 = 0xffffffff;
  iStack_1c = TStack_60.CurrentBitIndex;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = TStack_60.CurrentBitIndex;
  TStack_60.BaseBitIndex = local_20;
  if (iStack_24 < iVar2) {
    pFVar4 = param_1->CurveToEdit;
    local_40 = &this->_padding_;
    local_30 = (longlong *)TStack_60.Array;
    TStack_60._padding_._0_4_ = iStack_38;
    TStack_60._padding_._4_4_ = uStack_34;
    TStack_60.CurrentBitIndex = iStack_24;
    do {
      if (pFVar4 == *(FRealCurve **)
                     (this->_padding_ + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)) {
        return true;
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < *(int *)&(TStack_60.Array)->NumBits);
  }
  return false;
}

// MakeTransactional @ 147a640f0

void __thiscall UCurveTable::MakeTransactional(UCurveTable *this)

{
  EObjectFlags EVar1;
  code *pcVar2;
  bool bVar3;
  EObjectFlags EVar4;
  
  EVar1 = *(EObjectFlags *)&this[-1].OnCurveTableChangedDelegate.field_0x8;
  EVar4 = EVar1 | RF_Transactional;
  EVar1 = EVar1 & RF_MirroredGarbage;
  if ((EVar1 != RF_NoFlags) &&
     ((*(EObjectFlags *)&this[-1].OnCurveTableChangedDelegate.field_0x8 & EVar4 & RF_MirroredGarbage
      ) != EVar1)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!(NewFlags & RF_MirroredGarbage) || (GetFlags() & (NewFlags & RF_MirroredGarbage)) == (NewFlags & RF_MirroredGarbage)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                       ,0x4b,
                       L"RF_MirroredGarbage can not be set through SetFlags function. Use MarkAsGarbage() instead"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  UObjectBase::AtomicallySetFlags((UObjectBase *)&this[-1].OnCurveTableChangedDelegate,EVar4);
  return;
}

// MakeValidName @ 147a64160

FName __cdecl UCurveTable::MakeValidName(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  FName FVar5;
  int iVar6;
  FString *in_RDX;
  ForAnyElementType FVar7;
  int iVar8;
  undefined2 local_58 [4];
  ForAnyElementType local_50;
  undefined8 local_48;
  FString local_40;
  FString local_30;
  
  ::FString::FString(&local_30,L"\"\' ,\n\r\t");
  iVar8 = 0;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  do {
    iVar3 = (in_RDX->Data).ArrayNum;
    iVar6 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    if (iVar6 <= iVar8) {
      local_58[0] = 0;
      if (((local_50.Data <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 < local_50.Data + (longlong)local_48._4_4_ * 2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar5 = (FName)(*pcVar1)();
        return FVar5;
      }
      iVar8 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&local_50,(int *)((longlong)&local_48 + 4));
      }
      local_48 = CONCAT44(local_48._4_4_,iVar8 + 1);
      *(undefined2 *)(local_50.Data + (longlong)iVar8 * 2) = local_58[0];
      FVar7.Data = (FScriptContainerElement *)L"";
      if (iVar8 + 1 != 0) {
        FVar7.Data = local_50.Data;
      }
      ::FName::FName((FName *)param_1,(wchar_t *)FVar7.Data);
      if (local_50.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data);
      }
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
      return (FName)param_1;
    }
    ::FString::Mid(in_RDX,&local_40,iVar8,1);
    iVar3 = local_40.Data.ArrayNum;
    if (iVar3 == 0) {
      FVar7.Data = (FScriptContainerElement *)L"";
LAB_147a64200:
      sVar4 = wcslen((wchar_t *)FVar7.Data);
      iVar3 = ::FString::Find(&local_30,(wchar_t *)FVar7.Data,(int)sVar4,IgnoreCase,FromStart,-1);
      if (iVar3 == -1) {
        iVar3 = local_40.Data.ArrayNum;
        goto LAB_147a64237;
      }
    }
    else {
      FVar7.Data = local_40.Data.AllocatorInstance.Data;
      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      goto LAB_147a64200;
LAB_147a64237:
      iVar6 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      if ((iVar6 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                             ,0x107,
                             L"String index out of bounds: Index %i from a string with a length of %i"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar5 = (FName)(*pcVar1)();
        return FVar5;
      }
      FVar7.Data = local_40.Data.AllocatorInstance.Data;
      if (((local_50.Data <= local_40.Data.AllocatorInstance.Data) &&
          (local_40.Data.AllocatorInstance.Data < local_50.Data + (longlong)local_48._4_4_ * 2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        FVar5 = (FName)(*pcVar1)();
        return FVar5;
      }
      iVar3 = (int)local_48;
      if ((int)local_48 == local_48._4_4_) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&local_50,(int *)((longlong)&local_48 + 4));
      }
      local_48 = CONCAT44(local_48._4_4_,iVar3 + 1);
      *(wchar_t *)(local_50.Data + (longlong)iVar3 * 2) = *(wchar_t *)FVar7.Data;
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

// ModifyOwner @ 147a65090

void __thiscall UCurveTable::ModifyOwner(UCurveTable *this)

{
  return;
}

// OnCurveChanged @ 147a66740

void __thiscall
UCurveTable::OnCurveChanged
          (UCurveTable *this,
          TArray<FRichCurveEditInfoTemplate<FRealCurve_*>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScopedCurveTableChange local_res8 [4];
  
  _anon_3AA66773::FScopedCurveTableChange::FScopedCurveTableChange
            (local_res8,(UCurveTable *)&this[-1].OnCurveTableChangedDelegate);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &(this->RowMap).field_0x28);
  _anon_3AA66773::FScopedCurveTableChange::~FScopedCurveTableChange(local_res8);
  return;
}

// RemoveRow @ 147a7ed30

void __thiscall UCurveTable::RemoveRow(UCurveTable *this,FName param_1)

{
  FRealCurve *local_res8 [4];
  
  local_res8[0] = (FRealCurve *)0x0;
  TMap<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>::
  RemoveAndCopyValue(&this->RowMap,param_1,local_res8);
  if (local_res8[0] != (FRealCurve *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147a7ed61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)local_res8[0]->_padding_)(local_res8[0],1);
    return;
  }
  return;
}

// RenameRow @ 147a7f060

void __thiscall UCurveTable::RenameRow(UCurveTable *this,FName *param_1,FName *param_2)

{
  TMap<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
  *this_00;
  FName FVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  FName *local_18;
  FRealCurve **local_10;
  
  FVar1 = *param_2;
  if (*param_1 != FVar1) {
    this_00 = &this->RowMap;
    uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
    if (*(int *)&(this->RowMap).field_0x8 != *(int *)&(this->RowMap).field_0x34) {
      puVar4 = *(undefined1 **)&(this->RowMap).field_0x40;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = &(this->RowMap).field_0x38;
      }
      iVar3 = *(int *)(puVar4 + (ulonglong)
                                (*(int *)&(this->RowMap).field_0x48 - 1U & FVar1.Number + uVar2) * 4
                      );
      if (iVar3 != -1) {
        do {
          if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) == FVar1) {
            return;
          }
          iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar3 * 0x18);
        } while (iVar3 != -1);
      }
    }
    local_10 = TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
               ::Find((TMapBase<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
                       *)this_00,*param_1);
    if (local_10 != (FRealCurve **)0x0) {
      local_18 = param_2;
      TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_const_&>_>
                ((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                  *)this_00,(TPairInitializer<FName_const_&,FRealCurve_*_const_&> *)&stack0x00000010
                 ,(bool *)&local_18);
      FVar1 = *param_1;
      if (*(int *)&(this->RowMap).field_0x8 != *(int *)&(this->RowMap).field_0x34) {
        uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
        puVar4 = *(undefined1 **)&(this->RowMap).field_0x40;
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &(this->RowMap).field_0x38;
        }
        iVar3 = *(int *)(puVar4 + ((longlong)*(int *)&(this->RowMap).field_0x48 - 1U &
                                  (longlong)(int)(FVar1.Number + uVar2)) * 4);
        if (iVar3 != -1) {
          do {
            if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 0x18) == FVar1) {
              TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
              ::RemoveByIndex((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                               *)this_00,iVar3);
              return;
            }
            iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x10 + (longlong)iVar3 * 0x18);
          } while (iVar3 != -1);
        }
      }
    }
  }
  return;
}

// Serialize @ 147a89190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UCurveTable::Serialize(UCurveTable *this,FArchive *param_1)

{
  TMap<FName,FRealCurve_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>_>
  *this_00;
  undefined1 *puVar1;
  char cVar2;
  uchar uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  atomic<unsigned_int> aVar7;
  ECurveTableMode EVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  uchar *puVar12;
  UScriptStruct *pUVar13;
  UScriptStruct *pUVar14;
  FSimpleCurve *pFVar15;
  UPackage *pUVar16;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar17;
  byte bVar18;
  longlong lVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  char *pcVar22;
  longlong lVar23;
  FSimpleCurve *pFVar24;
  uint uVar25;
  uchar *puVar26;
  uchar *puVar27;
  uint uVar28;
  uint *puVar29;
  wchar_t *pwVar30;
  char *pcVar31;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *pTVar32;
  longlong lVar33;
  uint uVar34;
  longlong lVar35;
  char cVar36;
  float fVar37;
  undefined1 auStackY_418 [32];
  ulonglong in_stack_fffffffffffffc08;
  char local_3e8 [4];
  uint local_3e4;
  uint local_3e0;
  undefined1 local_3dc [4];
  ForElementType<unsigned_int> local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8 [12];
  uint uStack_3bc;
  TBitArray<FDefaultBitArrayAllocator> *local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  undefined1 local_398 [12];
  uint uStack_38c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_388;
  undefined8 uStack_380;
  longlong lStack_378;
  int local_370;
  undefined4 uStack_36c;
  int local_368 [2];
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *local_360;
  UCurveTable *local_358;
  longlong *local_348;
  undefined1 auStack_340 [16];
  uint uStack_330;
  uint uStack_32c;
  longlong local_328;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *pTStack_320;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *local_318;
  undefined2 local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_308;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e8;
  undefined1 local_2c8 [24];
  int iStack_2b0;
  uint uStack_2ac;
  uint local_2a8;
  undefined4 uStack_2a4;
  int iStack_2a0;
  undefined4 uStack_29c;
  uchar *local_298;
  longlong local_290;
  longlong local_288;
  FScopedCurveTableChange local_280;
  undefined8 local_278;
  undefined1 local_270 [8];
  int local_268;
  longlong *local_260;
  uint uStack_258;
  uint uStack_254;
  TBitArray<FDefaultBitArrayAllocator> *local_250;
  undefined4 uStack_248;
  uint uStack_244;
  uint local_240;
  undefined4 uStack_23c;
  int iStack_238;
  undefined4 uStack_234;
  int local_230;
  uchar *local_228;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *local_220;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_218;
  undefined8 uStack_1f8;
  longlong *local_1f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e8;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  uchar **local_1b8;
  undefined8 *local_1b0;
  uchar **local_1a8;
  TRangedForIterator local_1a0;
  TRangedForIterator local_170;
  undefined1 local_140 [32];
  longlong local_120;
  TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
  *pTStack_118;
  undefined4 local_f4;
  undefined4 local_d4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  ForElementType<FSetElementId> local_68;
  int local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_418;
  local_358 = this;
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) == 0) {
    if ((param_1->field_0x28 & 4) == 0) {
      if ((param_1->field_0x2b & 4) != 0) {
        this_00 = &this->RowMap;
        TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
        ::CountBytes((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                      *)this_00,param_1);
        local_3c8._0_8_ = this_00;
        local_398._0_8_ = this_00;
        if (this->CurveTableMode == SimpleCurves) {
          lVar19 = (longlong)
                   (*(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34) * 0x88;
          (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar19,lVar19);
          puVar1 = &(this->RowMap).field_0x10;
          local_308.UnvisitedBitMask = 0xffffffff;
          local_308._padding_._0_4_ = 0;
          local_308._padding_._4_4_ = 1;
          local_308.CurrentBitIndex = 0;
          local_308.BaseBitIndex = 0;
          local_308.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if (*(int *)&(this->RowMap).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_308);
          }
          unique0x10000d4b = CONCAT44(local_308._padding_._4_4_,(undefined4)local_308._padding_);
          uStack_3b0 = CONCAT44(local_308.CurrentBitIndex,local_308.UnvisitedBitMask);
          local_3a8 = CONCAT44(local_308._28_4_,local_308.BaseBitIndex);
          local_370 = *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34;
          pTStack_388 = local_308.Array;
          local_3b8 = local_308.Array;
          uStack_39c = uStack_36c;
          unique0x100020dd = unique0x10000d4b;
          uStack_380 = uStack_3b0;
          lStack_378 = local_3a8;
          iStack_3a0 = local_370;
          pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              (&local_d0,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                               *(int *)&(this->RowMap).field_0x28);
          unique0x10000b63 = pTVar17->_padding_;
          pTStack_388 = pTVar17->Array;
          uStack_380._0_4_ = pTVar17->UnvisitedBitMask;
          uStack_380._4_4_ = pTVar17->CurrentBitIndex;
          lStack_378 = *(longlong *)&pTVar17->BaseBitIndex;
          local_370 = *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34;
          local_1a0.InitialNum = local_370;
          local_1a0._44_4_ = uStack_36c;
          local_398._0_8_ = this_00;
          local_1a0._padding_ = (longlong)this_00;
          local_1a0._padding_ = unique0x10000b63;
          local_1a0._padding_ = (longlong)pTStack_388;
          local_1a0._padding_ = uStack_380;
          local_1a0._padding_ = lStack_378;
          bVar9 = TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!=((TRangedForIterator *)local_3c8,&local_1a0);
          if (bVar9) {
            do {
              lVar19 = *(longlong *)
                        (*(longlong *)(undefined1 *)local_3c8._0_8_ + 8 +
                        (longlong)uStack_3b0._4_4_ * 0x18);
              (**(code **)(*(longlong *)param_1 + 0x10))
                        (param_1,(longlong)*(int *)(lVar19 + 0x80) << 3,
                         (longlong)*(int *)(lVar19 + 0x84) << 3);
              uStack_3b0 = CONCAT44(uStack_3b0._4_4_,(uint)uStack_3b0 & ~uStack_3bc);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_3c8 + 8));
              bVar9 = TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForIterator::operator!=((TRangedForIterator *)local_3c8,&local_1a0);
            } while (bVar9);
          }
        }
        else if (this->CurveTableMode == RichCurves) {
          lVar19 = (longlong)
                   (*(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34) << 7;
          (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar19,lVar19);
          puVar1 = &(this->RowMap).field_0x10;
          local_2e8.UnvisitedBitMask = 0xffffffff;
          local_2e8._padding_._0_4_ = 0;
          local_2e8._padding_._4_4_ = 1;
          local_2e8.CurrentBitIndex = 0;
          local_2e8.BaseBitIndex = 0;
          local_2e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
          if (*(int *)&(this->RowMap).field_0x28 != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e8);
          }
          unique0x10000d6b = CONCAT44(local_2e8._padding_._4_4_,(undefined4)local_2e8._padding_);
          uStack_3b0 = CONCAT44(local_2e8.CurrentBitIndex,local_2e8.UnvisitedBitMask);
          local_3a8 = CONCAT44(local_2e8._28_4_,local_2e8.BaseBitIndex);
          iStack_3a0 = *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34;
          local_3b8 = local_2e8.Array;
          pTStack_388 = local_2e8.Array;
          uStack_36c = uStack_39c;
          unique0x100020d5 = unique0x10000d6b;
          uStack_380 = uStack_3b0;
          lStack_378 = local_3a8;
          local_370 = iStack_3a0;
          pTVar17 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_2c8,
                               (TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                               *(int *)&(this->RowMap).field_0x28);
          unique0x10000ca3 = pTVar17->_padding_;
          local_3b8 = pTVar17->Array;
          uStack_3b0._0_4_ = pTVar17->UnvisitedBitMask;
          uStack_3b0._4_4_ = pTVar17->CurrentBitIndex;
          local_3a8 = *(longlong *)&pTVar17->BaseBitIndex;
          iStack_3a0 = *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34;
          local_170.InitialNum = iStack_3a0;
          local_170._44_4_ = uStack_39c;
          local_3c8._0_8_ = this_00;
          local_170._padding_ = (longlong)this_00;
          local_170._padding_ = unique0x10000ca3;
          local_170._padding_ = (longlong)local_3b8;
          local_170._padding_ = uStack_3b0;
          local_170._padding_ = local_3a8;
          bVar9 = TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::TRangedForIterator::operator!=((TRangedForIterator *)local_398,&local_170);
          if (bVar9) {
            do {
              lVar19 = *(longlong *)
                        (*(longlong *)(undefined1 *)local_398._0_8_ + 8 +
                        (longlong)uStack_380._4_4_ * 0x18);
              (**(code **)(*(longlong *)param_1 + 0x10))
                        (param_1,(longlong)*(int *)(lVar19 + 0x78) * 0x1c,
                         (longlong)*(int *)(lVar19 + 0x7c) * 0x1c);
              uStack_380 = CONCAT44(uStack_380._4_4_,(uint)uStack_380 & ~uStack_38c);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_398 + 8));
              bVar9 = TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::TRangedForIterator::operator!=((TRangedForIterator *)local_398,&local_170);
            } while (bVar9);
          }
        }
      }
    }
    else {
      local_368[0] = *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34;
      ::operator<<(param_1,local_368);
      ::operator<<(param_1,&this->CurveTableMode);
      TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                ((TIterator *)local_140,
                 (TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                  *)&this->RowMap);
      local_310 = 0;
      stack0xfffffffffffffcc8 = local_140._16_16_;
      local_348 = (longlong *)local_140._0_8_;
      auStack_340._0_8_ = local_140._8_8_;
      local_328 = local_120;
      pTStack_320 = pTStack_118;
      uVar20 = local_140._24_8_ >> 0x20;
      uVar28 = local_140._28_4_;
      local_318 = (TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                   *)&this->RowMap;
      if ((int)uVar28 < *(int *)(local_140._16_8_ + 0x18)) {
        do {
          plVar4 = local_348;
          local_278 = *(undefined8 *)(*local_348 + (longlong)(int)uVar20 * 0x18);
          (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_278);
          EVar8 = this->CurveTableMode;
          if (EVar8 == SimpleCurves) {
            pFVar24 = *(FSimpleCurve **)(*plVar4 + 8 + (longlong)(int)uVar28 * 0x18);
            if (((*(longlong *)&param_1->field_0x68 != 0) &&
                (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) &&
               (((param_1->field_0x29 & 1) != 0 &&
                ((((param_1->field_0x2b & 9) == 0 && (0 < CVar_CurveTable_RemoveRedundantKeys)) &&
                 (iVar10 = (pFVar24->Keys).ArrayNum, 2 < iVar10)))))) {
              FSimpleCurve::RemoveRedundantKeysInternal(pFVar24,0.0,0,iVar10 + -1);
            }
            if (Z_Registration_Info_UScriptStruct_FSimpleCurve.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar16 = Z_Construct_UPackage__Script_Engine();
              Z_Registration_Info_UScriptStruct_FSimpleCurve.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCurve,(UObject *)pUVar16,
                                   L"SimpleCurve");
            }
            pUVar13 = Z_Registration_Info_UScriptStruct_FSimpleCurve.OuterSingleton;
            pUVar14 = Z_Registration_Info_UScriptStruct_FSimpleCurve.OuterSingleton;
            if (Z_Registration_Info_UScriptStruct_FSimpleCurve.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar16 = Z_Construct_UPackage__Script_Engine();
              pUVar14 = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCurve,(UObject *)pUVar16,
                                        L"SimpleCurve");
              Z_Registration_Info_UScriptStruct_FSimpleCurve.OuterSingleton = pUVar14;
            }
          }
          else {
            if ((EVar8 != RichCurves) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CurveTableMode == ECurveTableMode::RichCurves",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CurveTable.cpp"
                                   ,0xe3,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar24 = *(FSimpleCurve **)(*plVar4 + 8 + (longlong)(int)uVar28 * 0x18);
            if ((((*(longlong *)&param_1->field_0x68 != 0) &&
                 (*(longlong *)(*(longlong *)&param_1->field_0x68 + 0x10) != 0)) &&
                ((param_1->field_0x29 & 1) != 0)) &&
               ((((param_1->field_0x2b & 9) == 0 && (0 < CVar_CurveTable_RemoveRedundantKeys)) &&
                (iVar10 = *(int *)&(pFVar24->Keys).AllocatorInstance.Data, 2 < iVar10)))) {
              FRichCurve::RemoveRedundantKeysInternal
                        ((FRichCurve *)pFVar24,0.0,0,iVar10 + -1,(FFrameRate)0x0);
            }
            if (Z_Registration_Info_UScriptStruct_FRichCurve.OuterSingleton == (UScriptStruct *)0x0)
            {
              pUVar16 = Z_Construct_UPackage__Script_Engine();
              Z_Registration_Info_UScriptStruct_FRichCurve.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FRichCurve,(UObject *)pUVar16,
                                   L"RichCurve");
            }
            pUVar13 = Z_Registration_Info_UScriptStruct_FRichCurve.OuterSingleton;
            pUVar14 = Z_Registration_Info_UScriptStruct_FRichCurve.OuterSingleton;
            if (Z_Registration_Info_UScriptStruct_FRichCurve.OuterSingleton == (UScriptStruct *)0x0)
            {
              pUVar16 = Z_Construct_UPackage__Script_Engine();
              pUVar14 = GetStaticStruct(Z_Construct_UScriptStruct_FRichCurve,(UObject *)pUVar16,
                                        L"RichCurve");
              Z_Registration_Info_UScriptStruct_FRichCurve.OuterSingleton = pUVar14;
            }
          }
          UStruct::SerializeTaggedProperties
                    ((UStruct *)pUVar13,param_1,(uchar *)pFVar24,(UStruct *)pUVar14,(uchar *)0x0,
                     (UObject *)0x0);
          uStack_330 = uStack_330 & ~auStack_340._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_340);
          uVar20 = (ulonglong)uStack_32c;
          uVar28 = uStack_32c;
        } while ((int)uStack_32c < *(int *)(auStack_340._8_8_ + 0x18));
        if (((char)local_310 != '\0') && (local_310._1_1_ != '\0')) {
          iVar10 = 1;
          uVar28 = *(int *)&(local_318->Elements).field_0x8 -
                   *(int *)&(local_318->Elements).field_0x34;
          if (3 < uVar28) {
            uVar20 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
            lVar19 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar10 = 1 << ((byte)lVar19 & 0x1f);
          }
          if (((0 < (int)uVar28) && (local_318->HashSize < iVar10)) ||
             (iVar10 < local_318->HashSize)) {
            local_318->HashSize = iVar10;
            TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
            ::Rehash(local_318);
          }
        }
      }
    }
  }
  else {
    _anon_3AA66773::FScopedCurveTableChange::FScopedCurveTableChange(&local_280,this);
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
      if ((param_1->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_3e4,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(param_1,&local_3e4);
      }
    }
    else {
      local_3e4 = *(uint *)*plVar4;
      *plVar4 = *plVar4 + 4;
    }
    iVar10 = FArchiveState::CustomVer
                       ((FArchiveState *)param_1,&FFortniteMainBranchObjectVersion::GUID);
    FVar21 = (ForElementType<unsigned_int>)&this->CurveTableMode;
    cVar36 = iVar10 < 0x17;
    puVar27 = (uchar *)0x0;
    uVar28 = 0;
    EVar8 = Empty;
    local_3e8[0] = cVar36;
    local_3d8 = FVar21;
    if (iVar10 < 0x17) {
      if (0 < (int)local_3e4) {
        EVar8 = RichCurves;
      }
      *(ECurveTableMode *)FVar21 = EVar8;
    }
    else {
      ::operator<<(param_1,(uchar *)FVar21);
    }
    pTVar32 = (TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
               *)&this->RowMap;
    local_a8._0_8_ = 0;
    local_a8._8_8_ = 0;
    local_88 = (uint *)0x0;
    local_80 = 0;
    local_7c = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (ForElementType<FSetElementId>)0x0;
    local_60 = 0;
    local_360 = pTVar32;
    TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                 *)local_a8,pTVar32);
    TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
    ::Empty(pTVar32,local_3e4);
    local_3e0 = 0;
    if (0 < (int)local_3e4) {
      do {
        local_3d0 = 0;
        (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_3d0);
        if (*(ECurveTableMode *)FVar21 == SimpleCurves) {
          puVar12 = ::operator_new(0x88);
          puVar26 = puVar27;
          if (puVar12 != (uchar *)0x0) {
            puVar12[8] = '\0';
            puVar12[9] = '\0';
            puVar12[10] = '\0';
            puVar12[0xb] = '\0';
            puVar12[0xc] = '\0';
            puVar12[0xd] = '\0';
            puVar12[0xe] = '\0';
            puVar12[0xf] = '\0';
            puVar12[0x10] = '\0';
            puVar12[0x11] = '\0';
            puVar12[0x12] = '\0';
            puVar12[0x13] = '\0';
            puVar12[0x14] = '\0';
            puVar12[0x15] = '\0';
            puVar12[0x16] = '\0';
            puVar12[0x17] = '\0';
            puVar12[0x28] = '\0';
            puVar12[0x29] = '\0';
            puVar12[0x2a] = '\0';
            puVar12[0x2b] = '\0';
            puVar12[0x2c] = '\0';
            puVar12[0x2d] = '\0';
            puVar12[0x2e] = '\0';
            puVar12[0x2f] = '\0';
            puVar12[0x30] = '\0';
            puVar12[0x31] = '\0';
            puVar12[0x32] = '\0';
            puVar12[0x33] = '\0';
            puVar12[0x34] = 0x80;
            puVar12[0x35] = '\0';
            puVar12[0x36] = '\0';
            puVar12[0x37] = '\0';
            puVar12[0x38] = 0xff;
            puVar12[0x39] = 0xff;
            puVar12[0x3a] = 0xff;
            puVar12[0x3b] = 0xff;
            puVar12[0x3c] = '\0';
            puVar12[0x3d] = '\0';
            puVar12[0x3e] = '\0';
            puVar12[0x3f] = '\0';
            puVar12[0x48] = '\0';
            puVar12[0x49] = '\0';
            puVar12[0x4a] = '\0';
            puVar12[0x4b] = '\0';
            puVar12[0x4c] = '\0';
            puVar12[0x4d] = '\0';
            puVar12[0x4e] = '\0';
            puVar12[0x4f] = '\0';
            puVar12[0x50] = '\0';
            puVar12[0x51] = '\0';
            puVar12[0x52] = '\0';
            puVar12[0x53] = '\0';
            puVar12[0x58] = '\0';
            puVar12[0x59] = '\0';
            puVar12[0x5a] = '\0';
            puVar12[0x5b] = '\0';
            puVar12[0x5c] = '\0';
            puVar12[0x5d] = '\0';
            puVar12[0x5e] = '\0';
            puVar12[0x5f] = '\0';
            puVar12[0x60] = '\0';
            puVar12[0x61] = '\0';
            puVar12[0x62] = '\0';
            puVar12[99] = '\0';
            puVar12[100] = '\0';
            puVar12[0x65] = '\0';
            puVar12[0x66] = '\0';
            puVar12[0x67] = '\0';
            puVar12[0x68] = 0xff;
            puVar12[0x69] = 0xff;
            puVar12[0x6a] = '\x7f';
            puVar12[0x6b] = '\x7f';
            puVar12[0x6c] = '\x04';
            puVar12[0x6d] = '\x04';
            *(undefined ***)puVar12 = &___7FSimpleCurve__6B_;
            puVar12[0x70] = '\0';
            puVar12[0x78] = '\0';
            puVar12[0x79] = '\0';
            puVar12[0x7a] = '\0';
            puVar12[0x7b] = '\0';
            puVar12[0x7c] = '\0';
            puVar12[0x7d] = '\0';
            puVar12[0x7e] = '\0';
            puVar12[0x7f] = '\0';
            puVar12[0x80] = '\0';
            puVar12[0x81] = '\0';
            puVar12[0x82] = '\0';
            puVar12[0x83] = '\0';
            puVar12[0x84] = '\0';
            puVar12[0x85] = '\0';
            puVar12[0x86] = '\0';
            puVar12[0x87] = '\0';
            puVar26 = puVar12;
          }
          pUVar13 = FSimpleCurve::StaticStruct();
          pUVar14 = FSimpleCurve::StaticStruct();
          in_stack_fffffffffffffc08 = 0;
          UStruct::SerializeTaggedProperties
                    ((UStruct *)pUVar13,param_1,puVar26,(UStruct *)pUVar14,(uchar *)0x0,
                     (UObject *)0x0);
          local_1c0 = &local_3d0;
          local_1b8 = &local_228;
          local_228 = puVar26;
          TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_&&>_>
                    (pTVar32,(TPairInitializer<FName_const_&,FRealCurve_*_&&> *)local_270,
                     (bool *)&local_1c0);
        }
        else {
          puVar12 = ::operator_new(0x80);
          puVar26 = puVar27;
          if (puVar12 != (uchar *)0x0) {
            puVar12[0x18] = '\0';
            puVar12[0x19] = '\0';
            puVar12[0x1a] = '\0';
            puVar12[0x1b] = '\0';
            puVar12[0x1c] = '\0';
            puVar12[0x1d] = '\0';
            puVar12[0x1e] = '\0';
            puVar12[0x1f] = '\0';
            puVar12[0x20] = '\0';
            puVar12[0x21] = '\0';
            puVar12[0x22] = '\0';
            puVar12[0x23] = '\0';
            puVar12[0x24] = '\0';
            puVar12[0x25] = '\0';
            puVar12[0x26] = '\0';
            puVar12[0x27] = '\0';
            puVar12[0x40] = '\0';
            puVar12[0x41] = '\0';
            puVar12[0x42] = '\0';
            puVar12[0x43] = '\0';
            puVar12[0x44] = '\0';
            puVar12[0x45] = '\0';
            puVar12[0x46] = '\0';
            puVar12[0x47] = '\0';
            puVar12[0x50] = '\0';
            puVar12[0x51] = '\0';
            puVar12[0x52] = '\0';
            puVar12[0x53] = '\0';
            puVar12[0x54] = '\0';
            puVar12[0x55] = '\0';
            puVar12[0x56] = '\0';
            puVar12[0x57] = '\0';
            puVar12[0x6c] = '\x04';
            puVar12[0x6d] = '\x04';
            puVar12[0x6e] = '\0';
            puVar12[0x6f] = '\0';
            puVar12[8] = '\0';
            puVar12[9] = '\0';
            puVar12[10] = '\0';
            puVar12[0xb] = '\0';
            puVar12[0xc] = '\0';
            puVar12[0xd] = '\0';
            puVar12[0xe] = '\0';
            puVar12[0xf] = '\0';
            puVar12[0x10] = '\0';
            puVar12[0x11] = '\0';
            puVar12[0x12] = '\0';
            puVar12[0x13] = '\0';
            puVar12[0x14] = '\0';
            puVar12[0x15] = '\0';
            puVar12[0x16] = '\0';
            puVar12[0x17] = '\0';
            puVar12[0x28] = '\0';
            puVar12[0x29] = '\0';
            puVar12[0x2a] = '\0';
            puVar12[0x2b] = '\0';
            puVar12[0x2c] = '\0';
            puVar12[0x2d] = '\0';
            puVar12[0x2e] = '\0';
            puVar12[0x2f] = '\0';
            puVar12[0x30] = '\0';
            puVar12[0x31] = '\0';
            puVar12[0x32] = '\0';
            puVar12[0x33] = '\0';
            puVar12[0x34] = 0x80;
            puVar12[0x35] = '\0';
            puVar12[0x36] = '\0';
            puVar12[0x37] = '\0';
            puVar12[0x38] = 0xff;
            puVar12[0x39] = 0xff;
            puVar12[0x3a] = 0xff;
            puVar12[0x3b] = 0xff;
            puVar12[0x3c] = '\0';
            puVar12[0x3d] = '\0';
            puVar12[0x3e] = '\0';
            puVar12[0x3f] = '\0';
            puVar12[0x48] = '\0';
            puVar12[0x49] = '\0';
            puVar12[0x4a] = '\0';
            puVar12[0x4b] = '\0';
            puVar12[0x4c] = '\0';
            puVar12[0x4d] = '\0';
            puVar12[0x4e] = '\0';
            puVar12[0x4f] = '\0';
            puVar12[0x58] = '\0';
            puVar12[0x59] = '\0';
            puVar12[0x5a] = '\0';
            puVar12[0x5b] = '\0';
            puVar12[0x5c] = '\0';
            puVar12[0x5d] = '\0';
            puVar12[0x5e] = '\0';
            puVar12[0x5f] = '\0';
            puVar12[0x60] = '\0';
            puVar12[0x61] = '\0';
            puVar12[0x62] = '\0';
            puVar12[99] = '\0';
            puVar12[100] = '\0';
            puVar12[0x65] = '\0';
            puVar12[0x66] = '\0';
            puVar12[0x67] = '\0';
            puVar12[0x68] = 0xff;
            puVar12[0x69] = 0xff;
            puVar12[0x6a] = '\x7f';
            puVar12[0x6b] = '\x7f';
            *(undefined ***)puVar12 = &___7FRichCurve__6B_;
            puVar12[0x70] = '\0';
            puVar12[0x71] = '\0';
            puVar12[0x72] = '\0';
            puVar12[0x73] = '\0';
            puVar12[0x74] = '\0';
            puVar12[0x75] = '\0';
            puVar12[0x76] = '\0';
            puVar12[0x77] = '\0';
            puVar12[0x78] = '\0';
            puVar12[0x79] = '\0';
            puVar12[0x7a] = '\0';
            puVar12[0x7b] = '\0';
            puVar12[0x7c] = '\0';
            puVar12[0x7d] = '\0';
            puVar12[0x7e] = '\0';
            puVar12[0x7f] = '\0';
            puVar26 = puVar12;
          }
          pUVar13 = FRichCurve::StaticStruct();
          pUVar14 = FRichCurve::StaticStruct();
          in_stack_fffffffffffffc08 = 0;
          UStruct::SerializeTaggedProperties
                    ((UStruct *)pUVar13,param_1,puVar26,(UStruct *)pUVar14,(uchar *)0x0,
                     (UObject *)0x0);
          local_1b0 = &local_3d0;
          local_1a8 = &local_298;
          local_298 = puVar26;
          TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FName_const_&,FRealCurve_*_&&>_>
                    (pTVar32,(TPairInitializer<FName_const_&,FRealCurve_*_&&> *)(local_270 + 4),
                     (bool *)&local_1b0);
          if (cVar36 != '\0') {
            iVar10 = *(int *)(puVar26 + 0x78);
            cVar36 = local_3e8[0];
            if (0 < iVar10) {
              pcVar22 = *(char **)(puVar26 + 0x70);
              cVar2 = *pcVar22;
              pcVar31 = pcVar22 + (longlong)iVar10 * 0x1c;
              while( true ) {
                if (*(int *)(puVar26 + 0x78) != iVar10) {
                  local_3e8[1] = 0;
                  `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(local_3e8 + 1);
                }
                pTVar32 = local_360;
                cVar36 = local_3e8[0];
                if (pcVar22 == pcVar31) goto LAB_147a8953f;
                if ((*pcVar22 == '\x02') || (*pcVar22 != cVar2)) break;
                pcVar22 = pcVar22 + 0x1c;
              }
              local_3e8[0] = '\0';
              cVar36 = local_3e8[0];
            }
          }
        }
LAB_147a8953f:
        local_3e0 = local_3e0 + 1;
        FVar21 = local_3d8;
        this = local_358;
      } while ((int)local_3e0 < (int)local_3e4);
    }
    if (cVar36 != '\0') {
      local_3d8 = (ForElementType<unsigned_int>)&(this->RowMap).field_0x10;
      iStack_2a0 = *(int *)&(this->RowMap).field_0x8 - *(int *)&(this->RowMap).field_0x34;
      local_2c8._12_4_ = 1;
      local_2a8 = 0;
      *(bool *)FVar21 = 0 < iStack_2a0;
      uVar25 = *(uint *)&(this->RowMap).field_0x28;
      uStack_2ac = local_2a8;
      if (uVar25 != 0) {
        puVar29 = *(uint **)&(this->RowMap).field_0x20;
        if (puVar29 == (uint *)0x0) {
          puVar29 = (uint *)&(this->RowMap).field_0x10;
        }
        uVar11 = *puVar29;
        puVar26 = puVar27;
        local_2a8 = 0;
        uVar28 = 0;
        while (uVar11 == 0) {
          iVar10 = (int)puVar27;
          local_2a8 = (int)puVar26 + 0x20;
          puVar26 = (uchar *)(ulonglong)local_2a8;
          uVar28 = iVar10 + 1;
          puVar27 = (uchar *)(ulonglong)uVar28;
          uStack_2ac = uVar25;
          if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar28)
          goto LAB_147a89615;
          uVar11 = puVar29[(longlong)iVar10 + 1];
        }
        local_2c8._12_4_ = -uVar11 & uVar11;
        uVar20 = (ulonglong)(uint)local_2c8._12_4_ * 2 + 1;
        lVar19 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_268 = (int)lVar19;
        uStack_2ac = (local_2a8 - 1) + local_268;
        if ((int)uVar25 < (int)uStack_2ac) {
          uStack_2ac = uVar25;
        }
      }
LAB_147a89615:
      local_2c8._16_8_ = &(this->RowMap).field_0x10;
      local_2c8._0_8_ = &this->RowMap;
      uVar11 = *(uint *)&(this->RowMap).field_0x28;
      TStack_218._padding_ = CONCAT44(local_2c8._12_4_,uVar28);
      iStack_2b0 = -1;
      uVar34 = uVar11 & 0xffffffe0;
      uStack_2a4 = local_f4;
      TStack_218._28_4_ = local_f4;
      TStack_218.BaseBitIndex = local_2a8;
      uStack_1f8 = CONCAT44(uStack_29c,iStack_2a0);
      iVar10 = (int)uVar11 >> 5;
      TStack_218.UnvisitedBitMask = 0xffffffff;
      fVar37 = (float)local_2c8._16_4_;
      local_3e0 = uVar11;
      local_2c8._8_4_ = uVar28;
      local_220 = (TSet<TTuple<FName,FRealCurve_*>,TDefaultMapHashableKeyFuncs<FName,FRealCurve_*,0>,FDefaultSetAllocator>
                   *)local_2c8._0_8_;
      TStack_218.CurrentBitIndex = uStack_2ac;
      TStack_218.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_2c8._16_8_;
      if (((int)uVar11 < 0) || ((int)uVar25 < (int)uVar11)) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      uVar28 = *(int *)((longlong)local_3d8 + 0x18);
      pwVar30 = (wchar_t *)(ulonglong)uVar28;
      if (uVar11 != uVar28) {
        FVar21 = local_3d8;
        if (*(ForElementType<unsigned_int> *)((longlong)local_3d8 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar21 = *(ForElementType<unsigned_int> *)((longlong)local_3d8 + 0x10);
        }
        uVar25 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)FVar21 + (longlong)iVar10 * 4);
        while (uVar25 == 0) {
          lVar19 = (longlong)iVar10;
          uVar34 = uVar34 + 0x20;
          iVar10 = iVar10 + 1;
          uVar11 = uVar28;
          local_3e0 = uVar28;
          if ((int)((uVar28 - 1) + ((int)(uVar28 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
          goto LAB_147a89740;
          uVar25 = *(uint *)((char *)((longlong)FVar21 + 4) + lVar19 * 4);
        }
        uVar20 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_230 = (int)lVar19;
        uVar11 = local_230 + -1 + uVar34;
        local_3e0 = uVar11;
        if ((int)uVar28 < (int)uVar11) {
          uVar11 = uVar28;
          local_3e0 = uVar28;
        }
      }
LAB_147a89740:
      do {
        pTVar32 = local_220;
        pFVar24 = (FSimpleCurve *)0x0;
        if (*(int *)&(local_220->Elements).field_0x8 - *(int *)&(local_220->Elements).field_0x34 !=
            (int)uStack_1f8) {
          local_3e8[0] = '\0';
          `TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3e8);
        }
        lVar19 = (longlong)TStack_218.CurrentBitIndex;
        if (((TStack_218.CurrentBitIndex == uVar11) &&
            ((ForElementType<unsigned_int>)TStack_218.Array == local_3d8)) && (pTVar32 == local_360)
           ) break;
        lVar23 = *(longlong *)&pTVar32->Elements;
        lVar35 = lVar19 * 3;
        local_290 = lVar35;
        local_288 = lVar23;
        pFVar15 = ::operator_new(0x88);
        if (pFVar15 != (FSimpleCurve *)0x0) {
          pFVar15->_padding_ = 0;
          pFVar15->_padding_ = 0;
          pFVar15->_padding_ = 0;
          *(undefined4 *)&pFVar15->_padding_ = 0;
          *(undefined4 *)((longlong)&pFVar15->_padding_ + 4) = 0x80;
          *(undefined4 *)&pFVar15->_padding_ = 0xffffffff;
          *(undefined4 *)((longlong)&pFVar15->_padding_ + 4) = 0;
          pFVar15->_padding_ = 0;
          *(undefined4 *)&pFVar15->_padding_ = 0;
          pFVar15->_padding_ = 0;
          pFVar15->_padding_ = 0;
          *(undefined4 *)&pFVar15->_padding_ = 0x7f7fffff;
          *(undefined2 *)((longlong)&pFVar15->_padding_ + 4) = 0x404;
          pFVar15->_padding_ = (longlong)&___7FSimpleCurve__6B_;
          (pFVar15->InterpMode).Value = '\0';
          (pFVar15->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar15->Keys).ArrayNum = 0;
          (pFVar15->Keys).ArrayMax = 0;
          pFVar24 = pFVar15;
        }
        puVar5 = *(undefined8 **)(lVar23 + 8 + lVar19 * 0x18);
        if (0 < *(int *)(puVar5 + 0xf)) {
          uVar3 = *(uchar *)puVar5[0xe];
          if (uVar3 == '\x02') {
            local_3e8[2] = 0;
            bVar9 = `FSimpleCurve::SetKeyInterpMode'::__l3::<lambda_1>::operator()(local_3e8 + 2);
            if (bVar9) goto LAB_147a89844;
          }
          else {
LAB_147a89844:
            (pFVar24->InterpMode).Value = uVar3;
          }
          iVar10 = *(int *)(puVar5 + 0xf);
          lVar19 = puVar5[0xe];
          lVar33 = (longlong)iVar10 * 0x1c + lVar19;
          while( true ) {
            if (*(int *)(puVar5 + 0xf) != iVar10) {
              local_3e8[3] = 0;
              `TCheckedPointerIterator<FRichCurveKey_const_,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_3e8 + 3);
            }
            lVar23 = local_288;
            lVar35 = local_290;
            if (lVar19 == lVar33) break;
            LOCK();
            aVar7 = (atomic<unsigned_int>)((int)LastKeyHandleIndex + 1);
            UNLOCK();
            bVar9 = LastKeyHandleIndex == (atomic<unsigned_int>)0xffffffff;
            LastKeyHandleIndex = aVar7;
            if (bVar9) {
              pwVar30 = L"";
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index != 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Curves\\KeyHandle.cpp"
                                 ,0x1c,L"");
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            in_stack_fffffffffffffc08 = in_stack_fffffffffffffc08 & 0xffffffffffffff00;
            FSimpleCurve::AddKey
                      (pFVar24,fVar37,*(float *)(lVar19 + 4),SUB81(pwVar30,0),
                       (FKeyHandle)(uint)in_stack_fffffffffffffc08);
            lVar19 = lVar19 + 0x1c;
          }
        }
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        *(FSimpleCurve **)(lVar23 + 8 + lVar35 * 8) = pFVar24;
        TStack_218.UnvisitedBitMask = TStack_218.UnvisitedBitMask & ~TStack_218._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_218);
        uVar11 = local_3e0;
      } while( true );
    }
    uVar28 = local_80;
    uStack_258 = 0;
    uStack_254 = 1;
    uStack_244 = uStack_258;
    local_240 = uStack_258;
    if (local_80 != 0) {
      puVar29 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar29 = local_88;
      }
      uStack_254 = *puVar29;
      while (uStack_254 == 0) {
        lVar19 = (longlong)(int)uStack_258;
        local_240 = local_240 + 0x20;
        uStack_258 = uStack_258 + 1;
        uStack_254 = 1;
        uStack_244 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_258)
        goto LAB_147a899b0;
        uStack_254 = puVar29[lVar19 + 1];
      }
      uStack_254 = -uStack_254 & uStack_254;
      uVar20 = (ulonglong)uStack_254 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uStack_244 = (local_240 - 1) + (int)lVar19;
      local_358 = (UCurveTable *)CONCAT44(local_358._4_4_,(int)lVar19);
      if ((int)local_80 < (int)uStack_244) {
        uStack_244 = local_80;
      }
    }
LAB_147a899b0:
    local_260 = (longlong *)local_a8;
    uVar25 = local_80 & 0xffffffe0;
    uStack_23c = local_d4;
    local_250 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    iStack_238 = local_a8._8_4_ - local_74;
    uStack_248 = 0xffffffff;
    TStack_1e8.CurrentBitIndex = uStack_244;
    TStack_1e8.UnvisitedBitMask = 0xffffffff;
    TStack_1e8._padding_ = CONCAT44(uStack_254,uStack_258);
    iVar10 = (int)local_80 >> 5;
    TStack_1e8._28_4_ = local_d4;
    TStack_1e8.BaseBitIndex = local_240;
    uStack_1c8 = CONCAT44(uStack_234,iStack_238);
    bVar18 = (byte)local_80;
    local_1f0 = local_260;
    TStack_1e8.Array = local_250;
    if ((int)local_80 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L"");
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (uVar28 != local_80) {
      puVar29 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar29 = local_88;
      }
      uVar28 = -1 << (bVar18 & 0x1f) & puVar29[iVar10];
      while (uVar28 == 0) {
        lVar19 = (longlong)iVar10;
        uVar25 = uVar25 + 0x20;
        iVar10 = iVar10 + 1;
        uVar28 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_147a89aef;
        uVar28 = puVar29[lVar19 + 1];
      }
      uVar20 = (ulonglong)(-uVar28 & uVar28) * 2 + 1;
      lVar19 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar28 = (int)lVar19 + -1 + uVar25;
      if ((int)local_80 < (int)uVar28) {
        uVar28 = local_80;
      }
    }
LAB_147a89aef:
    while( true ) {
      plVar4 = local_1f0;
      if ((int)local_1f0[1] - *(int *)((longlong)local_1f0 + 0x34) != (int)uStack_1c8) {
        `TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3dc);
      }
      if (((TStack_1e8.CurrentBitIndex == uVar28) &&
          (TStack_1e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10))) &&
         (plVar4 == (longlong *)local_a8)) break;
      puVar5 = *(undefined8 **)(*plVar4 + 8 + (longlong)TStack_1e8.CurrentBitIndex * 0x18);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,1);
      }
      TStack_1e8.UnvisitedBitMask = TStack_1e8.UnvisitedBitMask & ~TStack_1e8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e8);
    }
    local_60 = 0;
    if (local_68 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,FRealCurve_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
    _anon_3AA66773::FScopedCurveTableChange::~FScopedCurveTableChange(&local_280);
  }
  return;
}

// Serialize @ 147a8a1d0

void __thiscall UCurveTable::Serialize(UCurveTable *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// StaticRegisterNativesUCurveTable @ 147a975d0

void __cdecl UCurveTable::StaticRegisterNativesUCurveTable(void)

{
  return;
}

