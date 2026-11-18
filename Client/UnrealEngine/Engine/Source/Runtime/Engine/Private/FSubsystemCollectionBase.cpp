// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 23

// FSubsystemCollectionBase @ 1488061c0

FSubsystemCollectionBase * __thiscall
FSubsystemCollectionBase::FSubsystemCollectionBase(FSubsystemCollectionBase *this,UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSubsystemCollectionBase *pFVar3;
  
  this->_padding_ = (longlong)&___7FSubsystemCollectionBase__6B_;
  *(undefined8 *)&this->SubsystemMap = 0;
  *(undefined8 *)&(this->SubsystemMap).field_0x8 = 0;
  *(undefined8 *)&(this->SubsystemMap).field_0x20 = 0;
  *(undefined4 *)&(this->SubsystemMap).field_0x28 = 0;
  *(undefined4 *)&(this->SubsystemMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubsystemMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubsystemMap).field_0x34 = 0;
  *(undefined8 *)&(this->SubsystemMap).field_0x40 = 0;
  *(undefined4 *)&(this->SubsystemMap).field_0x48 = 0;
  *(undefined8 *)&this->SubsystemArrayMap = 0;
  *(undefined8 *)&(this->SubsystemArrayMap).field_0x8 = 0;
  *(undefined8 *)&(this->SubsystemArrayMap).field_0x20 = 0;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x28 = 0;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x34 = 0;
  *(undefined8 *)&(this->SubsystemArrayMap).field_0x40 = 0;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x48 = 0;
  this->BaseType = param_1;
  this->Outer = (UObject *)0x0;
  this->bPopulating = false;
  this->bIterating = false;
  (this->ModulesUnloadedHandle).ID = 0;
  if (param_1 == (UClass *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("BaseType",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSubsystemCollectionBase *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this;
}

// FSubsystemCollectionBase @ 148806290

FSubsystemCollectionBase * __thiscall
FSubsystemCollectionBase::FSubsystemCollectionBase(FSubsystemCollectionBase *this)

{
  this->_padding_ = (longlong)&___7FSubsystemCollectionBase__6B_;
  *(undefined8 *)&this->SubsystemMap = 0;
  *(undefined8 *)&(this->SubsystemMap).field_0x8 = 0;
  *(undefined8 *)&(this->SubsystemMap).field_0x20 = 0;
  *(undefined4 *)&(this->SubsystemMap).field_0x28 = 0;
  *(undefined4 *)&(this->SubsystemMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubsystemMap).field_0x34 = 0;
  *(undefined4 *)&(this->SubsystemMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubsystemMap).field_0x40 = 0;
  *(undefined4 *)&(this->SubsystemMap).field_0x48 = 0;
  *(undefined8 *)&this->SubsystemArrayMap = 0;
  *(undefined8 *)&(this->SubsystemArrayMap).field_0x8 = 0;
  *(undefined8 *)&(this->SubsystemArrayMap).field_0x20 = 0;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x28 = 0;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x34 = 0;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SubsystemArrayMap).field_0x40 = 0;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x48 = 0;
  this->Outer = (UObject *)0x0;
  this->bPopulating = false;
  this->bIterating = false;
  (this->ModulesUnloadedHandle).ID = 0;
  return this;
}

// ~FSubsystemCollectionBase @ 14880c6d0

void __thiscall FSubsystemCollectionBase::~FSubsystemCollectionBase(FSubsystemCollectionBase *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSubsystemCollectionBase__6B_;
  Deinitialize(this);
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubsystemArrayMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubsystemArrayMap);
  *(undefined4 *)&(this->SubsystemMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SubsystemMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SubsystemMap);
  return;
}

// ActivateExternalSubsystem @ 148816930

void __cdecl FSubsystemCollectionBase::ActivateExternalSubsystem(UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  undefined1 auStackX_10 [8];
  
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x19e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar5 = GlobalSubsystemCollections.ArrayNum;
  pFVar1 = GlobalSubsystemCollections.AllocatorInstance.Data +
           (longlong)GlobalSubsystemCollections.ArrayNum * 8;
  FVar7.Data = GlobalSubsystemCollections.AllocatorInstance.Data;
  while( true ) {
    if (GlobalSubsystemCollections.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FSubsystemCollectionBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_10);
    }
    if (FVar7.Data == pFVar1) break;
    pUVar3 = (*(FSubsystemCollectionBase **)FVar7.Data)->BaseType;
    if (pUVar3 != (UClass *)0x0) {
      iVar2 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar3->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        AddAndInitializeSubsystem(*(FSubsystemCollectionBase **)FVar7.Data,param_1);
      }
    }
    FVar7.Data = FVar7.Data + 8;
  }
  return;
}

// AddAllInstances @ 148816ae0

void __cdecl FSubsystemCollectionBase::AddAllInstances(UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UClass *pUVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  ForAnyElementType FVar7;
  undefined1 local_res10 [8];
  
  bVar6 = IsInGameThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x19e,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar5 = GlobalSubsystemCollections.ArrayNum;
  pFVar1 = GlobalSubsystemCollections.AllocatorInstance.Data +
           (longlong)GlobalSubsystemCollections.ArrayNum * 8;
  FVar7.Data = GlobalSubsystemCollections.AllocatorInstance.Data;
  while( true ) {
    if (GlobalSubsystemCollections.ArrayNum != iVar5) {
      `TCheckedPointerIterator<FSubsystemCollectionBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (FVar7.Data == pFVar1) break;
    pUVar3 = (*(FSubsystemCollectionBase **)FVar7.Data)->BaseType;
    if (pUVar3 != (UClass *)0x0) {
      iVar2 = (int)pUVar3->_padding_;
      if (((int)param_1->_padding_ < iVar2) ||
         ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar2 * 8) !=
          &pUVar3->_padding_)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if (bVar6) {
        AddAndInitializeSubsystem(*(FSubsystemCollectionBase **)FVar7.Data,param_1);
      }
    }
    FVar7.Data = FVar7.Data + 8;
  }
  return;
}

// AddAndInitializeSubsystem @ 148816bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

USubsystem * __thiscall
FSubsystemCollectionBase::AddAndInitializeSubsystem(FSubsystemCollectionBase *this,UClass *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  UObject *pUVar6;
  longlong lVar7;
  ForAnyElementType *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  ForElementType<unsigned_int> FVar11;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *pTVar12;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *pTVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  int iVar17;
  USubsystem *pUVar18;
  UClass *pUVar19;
  TObjectPtr<USubsystem> TVar20;
  uint uVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  ForElementType<unsigned_int> FVar25;
  uint *puVar26;
  uint uVar27;
  undefined1 auStack_298 [32];
  FScriptContainerElement *local_278;
  FScriptContainerElement *local_270;
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  bool local_248;
  FEngineTrackedActivityScope local_247;
  undefined1 local_246 [6];
  USubsystem *local_240;
  undefined8 local_238;
  undefined8 local_230;
  ForElementType<unsigned_int> local_228;
  TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<USubsystem>_&&> local_220;
  TObjectPtr<UClass_const_>_u_0 local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  UClass *local_1f0;
  USubsystem *local_1e8;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_1e0;
  FSubsystemCollectionBase *local_1d8;
  FName local_1d0;
  FName local_1c8;
  UClass *local_1c0;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_168;
  int iStack_160;
  uint uStack_15c;
  undefined1 *local_158;
  undefined4 uStack_150;
  int iStack_14c;
  int local_148;
  undefined4 uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_138;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  UClass **local_108;
  USubsystem **local_100;
  undefined1 local_f8 [36];
  undefined4 local_d4;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_298;
  bVar15 = this->bPopulating;
  this->bPopulating = true;
  local_248 = bVar15;
  local_1d8 = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_210.DebugPtr = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (param_1 != (UClass *)0x0) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
  }
  uVar21 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
  iVar17 = TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<TObjectPtr<UClass_const_>_>
                     ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
                       *)&this->SubsystemMap,uVar21 >> 0x10 ^ uVar21,
                      (TObjectPtr<UClass_const_> *)&local_210.ObjectPtr);
  if (iVar17 != -1) {
    if (6 < (byte)LogSubsystemCollection._0_1_) {
      local_1c8 = (FName)param_1->_padding_;
      ::FName::ToString(&local_1c8,&local_178);
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSubsystemCollection);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    local_1c0 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TVar20 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
             ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                        *)&this->SubsystemMap,(TObjectPtr<UClass_const_>)local_f8);
    pUVar18 = *(USubsystem **)TVar20.field0_0x0;
    this->bPopulating = bVar15;
    return pUVar18;
  }
  if ((param_1 == (UClass *)0x0) || ((param_1->ClassFlags & CLASS_Abstract) != CLASS_None))
  goto LAB_14881732e;
  pUVar19 = this->BaseType;
  if (pUVar19 == (UClass *)0x0) {
LAB_148816cdf:
    local_208 = (FName)pUVar19->_padding_;
    ::FName::ToString(&local_208,&local_1a8);
    local_200 = (FName)param_1->_padding_;
    local_270 = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      local_270 = local_1a8.Data.AllocatorInstance.Data;
    }
    ::FName::ToString(&local_200,&local_1b8);
    local_278 = (FScriptContainerElement *)L"";
    if (local_1b8.Data.ArrayNum != 0) {
      local_278 = local_1b8.Data.AllocatorInstance.Data;
    }
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("SubsystemClass->IsChildOf(BaseType)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                        ,0x141,L"ClassType (%s) must be a subclass of BaseType(%s).");
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    bVar15 = local_248;
    if (bVar14) {
      pcVar10 = (code *)swi(3);
      pUVar18 = (USubsystem *)(*pcVar10)();
      return pUVar18;
    }
  }
  else {
    iVar17 = (int)pUVar19->_padding_;
    if (((int)param_1->_padding_ < iVar17) ||
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar17 * 8) !=
        &pUVar19->_padding_)) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    if (!bVar14) goto LAB_148816cdf;
  }
  pUVar19 = (UClass *)(**(code **)(param_1->_padding_ + 0x368))(param_1);
  if (pUVar19 != param_1) {
    this->bPopulating = bVar15;
    return (USubsystem *)0x0;
  }
  local_1f8 = (FName)param_1->_padding_;
  ::FName::ToString(&local_1f8,&local_198);
  FEngineTrackedActivityScope::FEngineTrackedActivityScope(&local_247,L"Initializing Subsystem %s");
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if ((param_1->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(param_1);
  }
  pUVar6 = (param_1->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar19 = USubsystem::StaticClass();
  iVar17 = (int)pUVar19->_padding_;
  if (((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar17) ||
      ((longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
       &pUVar19->_padding_)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ret->IsA(T::StaticClass())",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                          ,0x1181,L""), bVar15)) {
    pcVar10 = (code *)swi(3);
    pUVar18 = (USubsystem *)(*pcVar10)();
    return pUVar18;
  }
  cVar16 = (**(code **)(*(longlong *)pUVar6 + 0x2b0))(pUVar6,this->Outer);
  if (cVar16 != '\0') {
    pUVar6 = this->Outer;
    iVar17 = 0;
    local_238 = 0;
    local_230 = 0;
    FObjectInitializer::AssertIfInConstructor
              (pUVar6,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar19 = USubsystem::StaticClass();
    CheckIsClassChildOf_Internal(pUVar19,param_1);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,param_1);
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._8_8_ = pUVar6;
    local_240 = (USubsystem *)
                StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    if (local_c8._64_8_ != 0) {
      plVar22 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar22 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    local_1e8 = local_240;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_240 != (USubsystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_240);
    }
    local_1f0 = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_108 = &local_1f0;
    local_100 = &local_1e8;
    TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<TObjectPtr<UClass>_&&,TObjectPtr<USubsystem>_&&>_>
              ((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
                *)&this->SubsystemMap,&local_220,(bool *)&local_108);
    local_240->InternalOwningSubsystem = this;
    (**(code **)(local_240->_padding_ + 0x2b8))(local_240,this);
    local_1e0 = &this->SubsystemArrayMap;
    uStack_15c = 1;
    iVar4 = *(int *)&(this->SubsystemArrayMap).field_0x28;
    local_228 = (ForElementType<unsigned_int>)&(this->SubsystemArrayMap).field_0x10;
    local_148 = 0;
    iStack_14c = iVar17;
    if (iVar4 != 0) {
      puVar26 = *(uint **)&(this->SubsystemArrayMap).field_0x20;
      if (puVar26 == (uint *)0x0) {
        puVar26 = (uint *)local_228;
      }
      uVar21 = *puVar26;
      iVar17 = 0;
      local_148 = 0;
      while (uVar21 == 0) {
        iVar17 = iVar17 + 1;
        local_148 = local_148 + 0x20;
        iStack_14c = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14881702f;
        uVar21 = puVar26[iVar17];
      }
      uStack_15c = -uVar21 & uVar21;
      uVar3 = (ulonglong)uStack_15c * 2 + 1;
      lVar23 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_220.Key._4_4_ = (int)lVar23;
      iStack_14c = local_220.Key._4_4_ + -1 + local_148;
      if (iVar4 < iStack_14c) {
        iStack_14c = iVar4;
      }
    }
LAB_14881702f:
    uStack_144 = local_d4;
    iStack_140 = *(int *)&(this->SubsystemArrayMap).field_0x8 -
                 *(int *)&(this->SubsystemArrayMap).field_0x34;
    uVar21 = *(uint *)&(this->SubsystemArrayMap).field_0x28;
    TStack_130._padding_ = CONCAT44(uStack_15c,iVar17);
    uStack_150 = 0xffffffff;
    uVar27 = uVar21 & 0xffffffe0;
    TStack_130.CurrentBitIndex = iStack_14c;
    TStack_130.UnvisitedBitMask = 0xffffffff;
    iVar24 = (int)uVar21 >> 5;
    TStack_130._28_4_ = local_d4;
    TStack_130.BaseBitIndex = local_148;
    uStack_110 = CONCAT44(uStack_13c,iStack_140);
    local_168 = local_1e0;
    iStack_160 = iVar17;
    local_158 = (undefined1 *)local_228;
    local_138 = local_1e0;
    TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_228;
    if ((((int)uVar21 < 0) || (iVar4 < (int)uVar21)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar10 = (code *)swi(3);
      pUVar18 = (USubsystem *)(*pcVar10)();
      return pUVar18;
    }
    pTVar12 = local_1e0;
    FVar11 = local_228;
    uVar5 = *(int *)((longlong)local_228 + 0x18);
    if (uVar21 != uVar5) {
      FVar25 = local_228;
      if (*(ForElementType<unsigned_int> *)((longlong)local_228 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar25 = *(ForElementType<unsigned_int> *)((longlong)local_228 + 0x10);
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar24 * 4);
      while (uVar21 == 0) {
        iVar24 = iVar24 + 1;
        uVar27 = uVar27 + 0x20;
        uVar21 = uVar5;
        if ((int)(((int)(uVar5 - 1) >> 0x1f & 0x1fU) + (uVar5 - 1)) >> 5 < iVar24)
        goto LAB_148817140;
        uVar21 = *(uint *)((longlong)FVar25 + (longlong)iVar24 * 4);
      }
      uVar3 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_220.Value._0_4_ = (int)lVar23;
      uVar21 = (int)local_220.Value + -1 + uVar27;
      if ((int)uVar5 < (int)uVar21) {
        uVar21 = uVar5;
      }
    }
LAB_148817140:
    do {
      pTVar13 = local_138;
      if (*(int *)&local_138->field_0x8 - *(int *)&local_138->field_0x34 != (int)uStack_110) {
        local_246[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_246);
      }
      pUVar18 = local_240;
      if (((TStack_130.CurrentBitIndex == uVar21) &&
          ((ForElementType<unsigned_int>)TStack_130.Array == FVar11)) && (pTVar13 == pTVar12)) {
        FEngineTrackedActivityScope::~FEngineTrackedActivityScope(&local_247);
        local_1d8->bPopulating = local_248;
        return pUVar18;
      }
      lVar23 = *(longlong *)pTVar13;
      lVar7 = *(longlong *)(lVar23 + (longlong)TStack_130.CurrentBitIndex * 0x18);
      puVar2 = (undefined8 *)(lVar23 + (longlong)TStack_130.CurrentBitIndex * 0x18);
      pUVar19 = Z_Construct_UClass_UInterface_NoRegister();
      if (pUVar19 == (UClass *)0x0) {
        pUVar19 = (UClass *)*puVar2;
LAB_1488171c9:
        if (pUVar19 != (UClass *)0x0) {
          iVar17 = (int)pUVar19->_padding_;
          if (((int)param_1->_padding_ < iVar17) ||
             ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar17 * 8) !=
              &pUVar19->_padding_)) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
          goto LAB_1488171f2;
        }
      }
      else {
        iVar17 = (int)pUVar19->_padding_;
        if ((*(int *)(lVar7 + 0x38) < iVar17) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar17 * 8) !=
            &pUVar19->_padding_)) {
          bVar15 = false;
        }
        else {
          bVar15 = true;
        }
        pUVar19 = (UClass *)*puVar2;
        if (!bVar15) goto LAB_1488171c9;
        bVar15 = UClass::ImplementsInterface(param_1,pUVar19);
LAB_1488171f2:
        if (bVar15 != false) {
          pFVar8 = (ForAnyElementType *)puVar2[1];
          pFVar9 = pFVar8->Data;
          if ((pFVar9 <= (FScriptContainerElement *)&local_240) &&
             (lVar23 = (longlong)*(int *)((longlong)&pFVar8[1].Data + 4),
             (FScriptContainerElement *)&local_240 < pFVar9 + lVar23 * 8)) {
            local_260 = (longlong)*(int *)&pFVar8[1].Data;
            local_258 = 8;
            local_278 = (FScriptContainerElement *)&local_240;
            local_270 = pFVar9;
            local_268 = lVar23;
            bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar15) {
              pcVar10 = (code *)swi(3);
              pUVar18 = (USubsystem *)(*pcVar10)();
              return pUVar18;
            }
          }
          iVar17 = *(int *)&pFVar8[1].Data;
          piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar8,piVar1);
          }
          *(int *)&pFVar8[1].Data = iVar17 + 1;
          *(USubsystem **)(pFVar8->Data + (longlong)iVar17 * 8) = local_240;
        }
      }
      TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
    } while( true );
  }
  if (6 < (byte)LogSubsystemCollection._0_1_) {
    local_1d0 = (FName)param_1->_padding_;
    ::FName::ToString(&local_1d0,&local_188);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSubsystemCollection);
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  FEngineTrackedActivityScope::~FEngineTrackedActivityScope(&local_247);
LAB_14881732e:
  this->bPopulating = local_248;
  return (USubsystem *)0x0;
}

// AddReferencedObjects @ 148819f10

void __thiscall
FSubsystemCollectionBase::AddReferencedObjects
          (FSubsystemCollectionBase *this,UObject *param_1,FReferenceCollector *param_2)

{
  FReferenceCollector::
  AddStableReferenceMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
            (param_2,(TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                      *)&this->SubsystemMap);
  return;
}

// DeactivateExternalSubsystem @ 14882dc60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FSubsystemCollectionBase::DeactivateExternalSubsystem(UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USubsystem *pUVar3;
  int iVar4;
  UClass *pUVar5;
  FString *pFVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  undefined1 auStackX_10 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> TStack_38;
  FString FStack_28;
  FString FStack_18;
  
  TStack_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_38.ArrayNum = 0;
  TStack_38.ArrayMax = 0;
  GetObjectsOfClass(param_1,&TStack_38,true,RF_ClassDefaultObject,Borrowed);
  iVar4 = TStack_38.ArrayNum;
  uVar7 = (ulonglong)TStack_38.ArrayNum;
  pFVar1 = TStack_38.AllocatorInstance.Data + uVar7 * 8;
  FVar9.Data = TStack_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar4) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if (FVar9.Data == pFVar1) {
      if (TStack_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(TStack_38.AllocatorInstance.Data);
      }
      return;
    }
    pUVar3 = *(USubsystem **)FVar9.Data;
    if (pUVar3 == (USubsystem *)0x0) {
      pFVar6 = GetTypeName<USubsystem>(&FStack_18);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar10);
    }
    pUVar5 = USubsystem::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar5->_padding_)) break;
    if (pUVar3->InternalOwningSubsystem != (FSubsystemCollectionBase *)0x0) {
      RemoveAndDeinitializeSubsystem(pUVar3->InternalOwningSubsystem,pUVar3);
    }
    uVar7 = TStack_38._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 8;
  }
  pFVar6 = GetTypeName<USubsystem>(&FStack_28);
  pwVar10 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&FStack_18,(UObject *)pUVar3);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar8);
}

// Deinitialize @ 14882dc70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FSubsystemCollectionBase::Deinitialize(FSubsystemCollectionBase *this)

{
  TMulticastDelegate<void___cdecl(FName,EModuleChangeReason),FDefaultTSDelegateUserPolicy> *this_00;
  undefined8 *puVar1;
  undefined1 *puVar2;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *this_01;
  TMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
  *this_02;
  uint uVar3;
  FDelegateHandle FVar4;
  longlong *plVar5;
  code *pcVar6;
  ForAnyElementType FVar7;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *pTVar8;
  bool bVar9;
  longlong lVar10;
  FModuleManager *pFVar11;
  ulong64 *puVar12;
  FSubsystemCollectionBase *pFVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  ForAnyElementType *this_03;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  undefined1 local_res18 [8];
  int local_res20;
  FSubsystemCollectionBase *local_168 [2];
  longlong *local_158;
  undefined1 auStack_150 [16];
  uint uStack_140;
  uint uStack_13c;
  longlong local_138;
  TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
  *pTStack_130;
  TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
  *local_128;
  undefined2 local_120;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  FString local_b0;
  undefined1 local_a0 [32];
  longlong local_80;
  TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
  *pTStack_78;
  undefined4 local_54;
  
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0xf2,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->bIterating != false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIterating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0xf3,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->Outer == (UObject *)0x0) {
    return;
  }
  FVar4.ID = (this->ModulesUnloadedHandle).ID;
  if (FVar4.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FCoreUObjectDelegates::CompiledInUObjectsRemovedDelegate,FVar4);
    (this->ModulesUnloadedHandle).ID = 0;
  }
  local_168[0] = this;
  if (((GlobalSubsystemCollections.AllocatorInstance.Data <= (FScriptContainerElement *)local_168)
      && ((FScriptContainerElement *)local_168 <
          GlobalSubsystemCollections.AllocatorInstance.Data +
          (longlong)GlobalSubsystemCollections.ArrayMax * 8)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar7.Data = GlobalSubsystemCollections.AllocatorInstance.Data;
  lVar10 = (longlong)GlobalSubsystemCollections.ArrayNum;
  if (GlobalSubsystemCollections.ArrayNum != 0) {
    iVar22 = 0;
    bVar9 = *(FSubsystemCollectionBase **)GlobalSubsystemCollections.AllocatorInstance.Data !=
            local_168[0];
    lVar17 = 0;
    pFVar13 = local_168[0];
    iVar16 = 0;
    do {
      iVar18 = iVar16;
      do {
        lVar17 = lVar17 + 1;
        iVar18 = iVar18 + 1;
        if (lVar10 <= lVar17) break;
      } while (bVar9 == (*(FSubsystemCollectionBase **)(FVar7.Data + lVar17 * 8) != pFVar13));
      if (bVar9 != false) {
        if (iVar22 != iVar16) {
          memmove(FVar7.Data + (longlong)iVar22 * 8,FVar7.Data + (longlong)iVar16 * 8,
                  (longlong)(iVar18 - iVar16) << 3);
          pFVar13 = local_168[0];
        }
        iVar22 = iVar22 + (iVar18 - iVar16);
      }
      bVar9 = (bool)(bVar9 ^ 1);
      iVar16 = iVar18;
    } while (lVar17 < lVar10);
    GlobalSubsystemCollections.ArrayNum = iVar22;
    if (iVar22 != 0) goto LAB_14882df9e;
  }
  if (FSubsystemModuleWatcher::ModulesChangedHandle.ID != 0) {
    pFVar11 = FModuleManager::Get();
    FVar4 = FSubsystemModuleWatcher::ModulesChangedHandle;
    this_00 = &pFVar11->ModulesChangedEvent;
    if (FSubsystemModuleWatcher::ModulesChangedHandle.ID != 0) {
      if ((this_00 ==
           (TMulticastDelegate<void___cdecl(FName,EModuleChangeReason),FDefaultTSDelegateUserPolicy>
            *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mutex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                             ,0x1b,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)this_00);
      uVar19 = 0;
      if (0 < *(int *)&(pFVar11->ModulesChangedEvent).field_0x30) {
        lVar10 = 0;
        do {
          uVar23 = 0;
          if ((int)uVar19 < *(int *)&(pFVar11->ModulesChangedEvent).field_0x30) {
            uVar23 = ~uVar19 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          this_03 = (ForAnyElementType *)
                    (*(longlong *)&(pFVar11->ModulesChangedEvent).field_0x28 + lVar10);
          if (((*(int *)&this_03[1].Data != 0) && (this_03->Data != (FScriptContainerElement *)0x0))
             && (puVar12 = (ulong64 *)(**(code **)(*(longlong *)this_03->Data + 0x40))(),
                *puVar12 == FVar4.ID)) {
            if ((*(int *)&this_03[1].Data != 0) && (this_03->Data != (FScriptContainerElement *)0x0)
               ) {
              (*(code *)**(undefined8 **)this_03->Data)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_03,0,0,0x10)
              ;
              *(undefined4 *)&this_03[1].Data = 0;
            }
            TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::CompactInvocationList
                      ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)this_00,false);
            break;
          }
          uVar19 = uVar19 + 1;
          lVar10 = lVar10 + 0x10;
        } while ((int)uVar19 < *(int *)&(pFVar11->ModulesChangedEvent).field_0x30);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)this_00);
    }
    FSubsystemModuleWatcher::ModulesChangedHandle.ID = 0;
  }
LAB_14882df9e:
  iStack_110 = 0;
  local_f8 = 0;
  uStack_10c = 1;
  puVar2 = &(this->SubsystemArrayMap).field_0x10;
  iVar16 = *(int *)&(this->SubsystemArrayMap).field_0x28;
  this_01 = &this->SubsystemArrayMap;
  iStack_fc = 0;
  if (iVar16 != 0) {
    puVar21 = *(uint **)&(this->SubsystemArrayMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar2;
    }
    uVar19 = *puVar21;
    while (uVar19 == 0) {
      lVar10 = (longlong)iStack_110;
      local_f8 = local_f8 + 0x20;
      iStack_110 = iStack_110 + 1;
      iStack_fc = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_110) goto LAB_14882e030;
      uVar19 = puVar21[lVar10 + 1];
    }
    uStack_10c = -uVar19 & uVar19;
    uVar14 = (ulonglong)uStack_10c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_fc = local_f8 + -1 + local_res20;
    if (iVar16 < iStack_fc) {
      iStack_fc = iVar16;
    }
  }
LAB_14882e030:
  uVar19 = *(uint *)&(this->SubsystemArrayMap).field_0x28;
  uStack_f4 = local_54;
  uVar23 = uVar19 & 0xffffffe0;
  iStack_f0 = *(int *)&(this->SubsystemArrayMap).field_0x8 -
              *(int *)&(this->SubsystemArrayMap).field_0x34;
  uStack_100 = 0xffffffff;
  TStack_e0._padding_ = CONCAT44(uStack_10c,iStack_110);
  TStack_e0.CurrentBitIndex = iStack_fc;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar19 >> 5;
  TStack_e0._28_4_ = local_54;
  TStack_e0.BaseBitIndex = local_f8;
  uStack_c0 = CONCAT44(uStack_ec,iStack_f0);
  local_118 = this_01;
  local_108 = puVar2;
  local_e8 = this_01;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if (((int)uVar19 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = *(uint *)&(this->SubsystemArrayMap).field_0x28;
  if (uVar19 != uVar3) {
    puVar20 = *(undefined1 **)&(this->SubsystemArrayMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar2;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar16 * 4);
    while (uVar19 == 0) {
      lVar10 = (longlong)iVar16;
      uVar23 = uVar23 + 0x20;
      iVar16 = iVar16 + 1;
      uVar19 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14882e130;
      uVar19 = *(uint *)(puVar20 + lVar10 * 4 + 4);
    }
    uVar14 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar19 = (int)lVar10 + -1 + uVar23;
    if ((int)uVar3 < (int)uVar19) {
      uVar19 = uVar3;
    }
  }
LAB_14882e130:
  while( true ) {
    pTVar8 = local_e8;
    if (*(int *)(&local_e8->field_0x0 + 8) - *(int *)(&local_e8->field_0x0 + 0x34) != (int)uStack_c0
       ) {
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_e0.CurrentBitIndex == uVar19) &&
        (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar8 == this_01))
    break;
    puVar1 = (undefined8 *)
             (*(longlong *)&pTVar8->field_0x0 + (longlong)TStack_e0.CurrentBitIndex * 0x18);
    if (*(char *)(puVar1[1] + 0x10) != '\0') {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*puVar1,&local_b0,(UObject *)0x0);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSubsystemCollection)
      ;
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  this_02 = &this->SubsystemMap;
  TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_a0,
             (TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
              *)this_02);
  stack0xfffffffffffffeb8 = local_a0._16_16_;
  local_158 = (longlong *)local_a0._0_8_;
  auStack_150._0_8_ = local_a0._8_8_;
  local_120 = 0;
  local_138 = local_80;
  pTStack_130 = pTStack_78;
  uVar14 = local_a0._24_8_ >> 0x20;
  local_128 = (TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
               *)this_02;
  if ((int)local_a0._28_4_ < *(int *)(local_a0._16_8_ + 0x18)) {
    uVar15 = (ulonglong)local_a0._28_4_;
    do {
      plVar5 = *(longlong **)(*local_158 + 8 + (longlong)(int)uVar14 * 0x18);
      if ((plVar5 != (longlong *)0x0) &&
         (plVar5[2] == *(longlong *)(*local_158 + (longlong)(int)uVar15 * 0x18))) {
        (**(code **)(*plVar5 + 0x2c0))(plVar5);
        plVar5[5] = 0;
      }
      uStack_140 = uStack_140 & ~auStack_150._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_150);
      uVar14 = (ulonglong)uStack_13c;
      uVar15 = uVar14;
    } while ((int)uStack_13c < *(int *)(auStack_150._8_8_ + 0x18));
    if (((char)local_120 != '\0') && (local_120._1_1_ != '\0')) {
      uVar19 = *(int *)&(local_128->Elements).field_0x8 - *(int *)&(local_128->Elements).field_0x34;
      if (uVar19 < 4) {
        iVar16 = 1;
      }
      else {
        uVar14 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar16 = 1 << ((byte)lVar10 & 0x1f);
      }
      if (((0 < (int)uVar19) && (local_128->HashSize < iVar16)) || (iVar16 < local_128->HashSize)) {
        local_128->HashSize = iVar16;
        TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
        ::Rehash(local_128);
      }
    }
  }
  bVar9 = 1 < *(int *)&(this->SubsystemArrayMap).field_0x48;
  if (!bVar9) {
    TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->SubsystemArrayMap).field_0x8);
  puVar2 = &(this->SubsystemArrayMap).field_0xc;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x34 = 0;
  iVar16 = *(int *)&(this->SubsystemArrayMap).field_0x2c;
  *(undefined4 *)&(this->SubsystemArrayMap).field_0x28 = 0;
  if ((iVar16 < 0) || (0x80 < iVar16)) {
    *(undefined4 *)&(this->SubsystemArrayMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SubsystemArrayMap).field_0x10,0);
  }
  if (bVar9) {
    *(undefined4 *)&(this->SubsystemArrayMap).field_0x48 = 1;
    TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
              *)this_01);
  }
  bVar9 = 1 < *(int *)&(this->SubsystemMap).field_0x48;
  if (!bVar9) {
    TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
                      *)this_02);
  }
  puVar2 = &(this->SubsystemMap).field_0xc;
  *(undefined4 *)&(this->SubsystemMap).field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_02,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SubsystemMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SubsystemMap).field_0x34 = 0;
  iVar16 = *(int *)&(this->SubsystemMap).field_0x2c;
  *(undefined4 *)&(this->SubsystemMap).field_0x28 = 0;
  if ((iVar16 < 0) || (0x80 < iVar16)) {
    *(undefined4 *)&(this->SubsystemMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SubsystemMap).field_0x10,0);
  }
  if (bVar9) {
    *(undefined4 *)&(this->SubsystemMap).field_0x48 = 1;
    TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TObjectPtr<UClass>,TObjectPtr<USubsystem>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>,FDefaultSetAllocator>
              *)this_02);
  }
  this->Outer = (UObject *)0x0;
  return;
}

// FindAndPopulateSubsystemArrayInternal @ 148839d00

FSubsystemArray * __thiscall
FSubsystemCollectionBase::FindAndPopulateSubsystemArrayInternal
          (FSubsystemCollectionBase *this,UClass *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
  *pTVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UClass *pUVar13;
  undefined8 *puVar14;
  FSubsystemArray *pFVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  uint *puVar21;
  TPairInitializer<UClass_*_&,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_&&>
  local_res8;
  int local_res18;
  undefined8 *local_res20;
  undefined8 local_a8;
  TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>
  **local_a0;
  undefined8 **local_98;
  TMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
  *local_90;
  uint uStack_88;
  uint uStack_84;
  undefined1 *local_80;
  undefined4 uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  TMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
  *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  
  local_res8.Value =
       (TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>
        *)param_1;
  pUVar13 = Z_Construct_UClass_UInterface_NoRegister();
  if (pUVar13 != (UClass *)0x0) {
    iVar12 = (int)pUVar13->_padding_;
    if ((iVar12 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar12 * 8) ==
        &pUVar13->_padding_)) {
      bVar9 = true;
      goto LAB_148839d49;
    }
  }
  bVar9 = false;
LAB_148839d49:
  uVar16 = ((uint)((ulonglong)local_res8.Value >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_res8.Value >> 4)) * -0x7a143595;
  uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
  uVar16 = uVar16 >> 0x10 ^ uVar16;
  if (*(int *)&(this->SubsystemArrayMap).field_0x8 != *(int *)&(this->SubsystemArrayMap).field_0x34)
  {
    puVar17 = *(undefined1 **)&(this->SubsystemArrayMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->SubsystemArrayMap).field_0x38;
    }
    iVar12 = *(int *)(puVar17 +
                     (ulonglong)(*(int *)&(this->SubsystemArrayMap).field_0x48 - 1U & uVar16) * 4);
    if (iVar12 != -1) {
      do {
        if (*(UClass **)(*(longlong *)&this->SubsystemArrayMap + (longlong)iVar12 * 0x18) ==
            (UClass *)local_res8.Value) {
          if (iVar12 != -1) {
            puVar17 = *(undefined1 **)&(this->SubsystemArrayMap).field_0x40;
            if (puVar17 == (undefined1 *)0x0) {
              puVar17 = &(this->SubsystemArrayMap).field_0x38;
            }
            iVar12 = *(int *)(puVar17 +
                             (ulonglong)
                             (*(int *)&(this->SubsystemArrayMap).field_0x48 - 1U & uVar16) * 4);
            if (iVar12 == -1) goto LAB_148839e68;
            goto LAB_148839e50;
          }
          break;
        }
        iVar12 = *(int *)(*(longlong *)&this->SubsystemArrayMap + 0x10 + (longlong)iVar12 * 0x18);
      } while (iVar12 != -1);
    }
  }
  puVar14 = ::operator_new(0x18);
  puVar18 = (undefined8 *)0x0;
  uVar16 = 0;
  local_res20 = puVar18;
  if (puVar14 != (undefined8 *)0x0) {
    *puVar14 = 0;
    puVar14[1] = 0;
    puVar14[2] = 0;
    local_res20 = puVar14;
  }
  local_a0 = &local_res8.Value;
  local_98 = &local_res20;
  TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UClass_*_&,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_&&>_>
            ((TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
              *)&this->SubsystemArrayMap,&local_res8,(bool *)&local_a0);
  puVar14 = local_res20;
  lVar19 = *(longlong *)&this->SubsystemArrayMap + (longlong)(int)local_res8.Key * 0x18;
  if (local_res20 != (undefined8 *)0x0) {
    if ((void *)*local_res20 != (void *)0x0) {
      FMemory::Free((void *)*local_res20);
    }
    ::operator_delete(puVar14,0x18);
  }
  local_90 = &this->SubsystemMap;
  uVar3 = *(uint *)&(this->SubsystemMap).field_0x28;
  local_80 = &(this->SubsystemMap).field_0x10;
  uStack_84 = 1;
  puVar14 = puVar18;
  local_70 = uVar16;
  if (uVar3 != 0) {
    puVar21 = *(uint **)&(this->SubsystemMap).field_0x20;
    puVar14 = (undefined8 *)(ulonglong)uVar3;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)local_80;
    }
    uVar11 = *puVar21;
    puVar20 = puVar18;
    local_70 = 0;
    uVar16 = 0;
    while (uVar11 == 0) {
      iVar12 = (int)puVar18;
      local_70 = (int)puVar20 + 0x20;
      puVar20 = (undefined8 *)(ulonglong)local_70;
      uVar16 = iVar12 + 1;
      puVar18 = (undefined8 *)(ulonglong)uVar16;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_148839f7e;
      uVar11 = puVar21[(longlong)iVar12 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res18 = (int)lVar6;
    uVar11 = (local_70 - 1) + local_res18;
    if ((int)uVar3 < (int)uVar11) {
      uVar11 = uVar3;
    }
    puVar14 = (undefined8 *)(ulonglong)uVar11;
  }
LAB_148839f7e:
  uStack_74 = (uint)puVar14;
  uStack_78 = 0xffffffff;
  TStack_58._padding_ = CONCAT44(uStack_84,uVar16);
  TStack_58.UnvisitedBitMask = 0xffffffff;
  TStack_58._28_4_ = uStack_74;
  TStack_58.BaseBitIndex = local_70;
  uStack_88 = uVar16;
  uStack_6c = uStack_74;
  local_60 = local_90;
  TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_80;
  TStack_58.CurrentBitIndex = uStack_74;
  if ((int)uStack_74 < (int)uVar3) {
    do {
      iVar12 = TStack_58.CurrentBitIndex;
      pTVar8 = local_60;
      pUVar13 = *(UClass **)(*(longlong *)local_60 + (longlong)(int)puVar14 * 0x18);
      if (bVar9) {
        bVar10 = UClass::ImplementsInterface(pUVar13,(UClass *)local_res8.Value);
        if (bVar10) {
LAB_14883a032:
          pFVar5 = *(ForAnyElementType **)(lVar19 + 8);
          local_a8 = *(undefined8 *)(*(longlong *)pTVar8 + 8 + (longlong)iVar12 * 0x18);
          if (((pFVar5->Data <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 <
               pFVar5->Data + (longlong)*(int *)((longlong)&pFVar5[1].Data + 4) * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar7 = (code *)swi(3);
            pFVar15 = (FSubsystemArray *)(*pcVar7)();
            return pFVar15;
          }
          iVar12 = *(int *)&pFVar5[1].Data;
          piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar5,piVar1);
          }
          *(int *)&pFVar5[1].Data = iVar12 + 1;
          *(undefined8 *)(pFVar5->Data + (longlong)iVar12 * 8) = local_a8;
        }
      }
      else if ((UClass *)local_res8.Value != (UClass *)0x0) {
        iVar4 = (int)*(longlong *)((longlong)local_res8.Value + 0x38);
        if (((int)pUVar13->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)(pUVar13->_padding_ + (longlong)iVar4 * 8) !=
            (longlong *)((longlong)local_res8.Value + 0x30))) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) goto LAB_14883a032;
      }
      TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
      puVar14 = (undefined8 *)(ulonglong)(uint)TStack_58.CurrentBitIndex;
    } while (TStack_58.CurrentBitIndex < (TStack_58.Array)->NumBits);
  }
  return *(FSubsystemArray **)(lVar19 + 8);
  while (iVar12 = *(int *)(lVar19 + 0x10), iVar12 != -1) {
LAB_148839e50:
    lVar19 = *(longlong *)&this->SubsystemArrayMap + (longlong)iVar12 * 0x18;
    if (*(UClass **)(*(longlong *)&this->SubsystemArrayMap + (longlong)iVar12 * 0x18) ==
        (UClass *)local_res8.Value) {
      if (lVar19 == 0) goto LAB_148839e6a;
      goto LAB_148839e90;
    }
  }
LAB_148839e68:
  lVar19 = 0;
LAB_148839e6a:
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    pFVar15 = (FSubsystemArray *)(*pcVar7)();
    return pFVar15;
  }
LAB_148839e90:
  return *(FSubsystemArray **)(lVar19 + 8);
}

// ForEachSubsystem @ 14883b3f0

void __thiscall
FSubsystemCollectionBase::ForEachSubsystem
          (FSubsystemCollectionBase *this,TFunctionRef<void___cdecl(USubsystem_*)> *param_1)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint *puVar6;
  undefined8 local_res8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_80;
  TMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
  *local_60;
  int iStack_58;
  uint uStack_54;
  undefined1 *local_50;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  
  bVar2 = this->bIterating;
  iStack_58 = 0;
  this->bIterating = true;
  iVar3 = *(int *)&(this->SubsystemMap).field_0x28;
  TStack_80.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SubsystemMap).field_0x10;
  uStack_54 = 1;
  local_40 = 0;
  iStack_44 = 0;
  if (iVar3 != 0) {
    puVar6 = *(uint **)&(this->SubsystemMap).field_0x20;
    if (puVar6 == (uint *)0x0) {
      puVar6 = (uint *)TStack_80.Array;
    }
    uVar4 = *puVar6;
    while (uVar4 == 0) {
      lVar5 = (longlong)iStack_58;
      local_40 = local_40 + 0x20;
      iStack_58 = iStack_58 + 1;
      iStack_44 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_14883b49d;
      uVar4 = puVar6[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
    uVar1 = (ulonglong)uStack_54 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iStack_44 = local_40 + -1 + (int)lVar5;
    if (iVar3 < iStack_44) {
      iStack_44 = iVar3;
    }
  }
LAB_14883b49d:
  uStack_48 = 0xffffffff;
  iStack_3c = TStack_80.CurrentBitIndex;
  TStack_80.UnvisitedBitMask = 0xffffffff;
  TStack_80._28_4_ = TStack_80.CurrentBitIndex;
  TStack_80.BaseBitIndex = local_40;
  local_60 = &this->SubsystemMap;
  local_50 = (undefined1 *)TStack_80.Array;
  TStack_80._padding_._0_4_ = iStack_58;
  TStack_80._padding_._4_4_ = uStack_54;
  TStack_80.CurrentBitIndex = iStack_44;
  if (iStack_44 < iVar3) {
    do {
      local_res8 = *(undefined8 *)
                    (*(longlong *)&this->SubsystemMap + 8 +
                    (longlong)TStack_80.CurrentBitIndex * 0x18);
      (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
      TStack_80.UnvisitedBitMask = TStack_80.UnvisitedBitMask & ~TStack_80._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_80);
    } while (TStack_80.CurrentBitIndex < (TStack_80.Array)->NumBits);
  }
  this->bIterating = bVar2;
  return;
}

// ForEachSubsystemOfClass @ 14883b570

void __thiscall
FSubsystemCollectionBase::ForEachSubsystemOfClass
          (FSubsystemCollectionBase *this,UClass *param_1,
          TFunctionRef<void___cdecl(USubsystem_*)> *param_2)

{
  bool bVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSubsystemArray *pFVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_res10;
  
  if (param_1 == (UClass *)0x0) {
    param_1 = USubsystem::StaticClass();
  }
  pFVar5 = FindAndPopulateSubsystemArrayInternal(this,param_1);
  uVar7 = 0;
  bVar1 = pFVar5->bIsIterating;
  pFVar5->bIsIterating = true;
  iVar6 = (pFVar5->Subsystems).ArrayNum;
  if (0 < iVar6) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < iVar6) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_res10 = *(undefined8 *)((pFVar5->Subsystems).AllocatorInstance.Data + lVar8);
      (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_res10);
      iVar6 = (pFVar5->Subsystems).ArrayNum;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < iVar6);
    pFVar5->bIsIterating = bVar1;
    return;
  }
  pFVar5->bIsIterating = bVar1;
  return;
}

// GetSubsystemArrayCopy @ 148843470

TArray<USubsystem_*,TSizedDefaultAllocator<32>_> * __thiscall
FSubsystemCollectionBase::GetSubsystemArrayCopy
          (FSubsystemCollectionBase *this,
          TArray<USubsystem_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UClass *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  FSubsystemArray *pFVar2;
  
  pFVar2 = FindAndPopulateSubsystemArrayInternal(this,param_1);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (pFVar2->Subsystems).ArrayNum;
  _Src = (pFVar2->Subsystems).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 3);
  return __return_storage_ptr__;
}

// GetSubsystemInternal @ 148843610

USubsystem * __thiscall
FSubsystemCollectionBase::GetSubsystemInternal(FSubsystemCollectionBase *this,UClass *param_1)

{
  code *pcVar1;
  bool bVar2;
  USubsystem *pUVar3;
  TObjectPtr<USubsystem> TVar4;
  FSubsystemArray *pFVar5;
  undefined1 local_res18 [16];
  
  if (param_1 == (UClass *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3014280564560625717>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0x35,"SubsystemClass");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (USubsystem *)(*pcVar1)();
      return pUVar3;
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    TVar4 = TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
            ::FindRef((TMapBase<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
                       *)&this->SubsystemMap,(TObjectPtr<UClass_const_>)local_res18);
    if (*(USubsystem **)TVar4.field0_0x0 != (USubsystem *)0x0) {
      return *(USubsystem **)TVar4.field0_0x0;
    }
    pFVar5 = FindAndPopulateSubsystemArrayInternal(this,param_1);
    if (0 < (pFVar5->Subsystems).ArrayNum) {
      return *(USubsystem **)(pFVar5->Subsystems).AllocatorInstance.Data;
    }
  }
  return (USubsystem *)0x0;
}

// Initialize @ 148846880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSubsystemCollectionBase::Initialize(FSubsystemCollectionBase *this,UObject *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  TMap<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  FDelegateHandle FVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 uVar21;
  undefined1 local_res8;
  undefined1 local_res18;
  undefined1 local_res20;
  undefined1 local_118;
  undefined1 local_117;
  uint local_114;
  FSubsystemCollectionBase *local_110;
  TArray<UClass_*,TSizedDefaultAllocator<32>_> local_108;
  FString local_f8;
  FString local_e8;
  int local_d8;
  int local_d4;
  FName local_d0;
  FName local_c8;
  TMap<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  int local_a0;
  undefined4 uStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TMap<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_3c;
  
  if (this->Outer != (UObject *)0x0) {
    return;
  }
  this->Outer = param_1;
  if ((param_1 == (UObject *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Outer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0xb1,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (this->BaseType == (UClass *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3014280564560625842>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                       ,0xb2,"BaseType");
    if (!bVar7) {
      return;
    }
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(int *)&(this->SubsystemMap).field_0x8 != *(int *)&(this->SubsystemMap).field_0x34) {
    local_res8 = 0;
    bVar7 = `FSubsystemCollectionBase::Initialize'::__l13::<lambda_1>::operator()(&stack0x00000008);
    if (!bVar7) {
      return;
    }
  }
  if ((this->bPopulating != false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bPopulating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0xb4,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0xb7,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (GlobalSubsystemCollections.ArrayNum == 0) {
    FSubsystemModuleWatcher::InitializeModuleWatcher();
  }
  if (5 < (byte)LogSubsystemCollection._0_1_) {
    if (this->BaseType == (UClass *)0x0) {
      ::FString::FString(&local_e8,L"None");
    }
    else {
      local_d0 = (FName)this->BaseType->_padding_;
      ::FName::ToString(&local_d0,&local_e8);
    }
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_f8,L"None");
    }
    else {
      local_c8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_c8.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_c8,&local_f8);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogSubsystemCollection);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  uVar21 = this->bPopulating;
  this->bPopulating = true;
  pUVar9 = this->BaseType;
  local_117 = uVar21;
  pUVar8 = UDynamicSubsystem::StaticClass();
  if (pUVar8 != (UClass *)0x0) {
    iVar13 = (int)pUVar8->_padding_;
    if (((int)pUVar9->_padding_ < iVar13) ||
       ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar13 * 8) != &pUVar8->_padding_
       )) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      iStack_b8 = 0;
      local_a0 = 0;
      uStack_b4 = 1;
      uVar16 = GlobalDynamicSystemModuleMap._40_4_;
      uStack_a4 = 0;
      if (uVar16 != 0) {
        puVar18 = (uint *)&GlobalDynamicSystemModuleMap.field_0x10;
        if (GlobalDynamicSystemModuleMap._32_8_ != 0) {
          puVar18 = (uint *)GlobalDynamicSystemModuleMap._32_8_;
        }
        uVar20 = *puVar18;
        while (uVar20 == 0) {
          lVar11 = (longlong)iStack_b8;
          local_a0 = local_a0 + 0x20;
          iStack_b8 = iStack_b8 + 1;
          uStack_a4 = uVar16;
          if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_b8)
          goto LAB_148846b60;
          uVar20 = puVar18[lVar11 + 1];
        }
        uStack_b4 = -uVar20 & uVar20;
        uVar19 = (ulonglong)uStack_b4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_d8 = (int)lVar11;
        uStack_a4 = local_a0 + -1 + local_d8;
        if ((int)uVar16 < (int)uStack_a4) {
          uStack_a4 = uVar16;
        }
      }
LAB_148846b60:
      uStack_9c = local_3c;
      uVar20 = uVar16 & 0xffffffe0;
      uVar19 = GlobalDynamicSystemModuleMap._40_8_ & 0xffffffff;
      iStack_98 = GlobalDynamicSystemModuleMap._8_4_ - GlobalDynamicSystemModuleMap._52_4_;
      local_b0 = 0x154c6bdb0;
      local_c0 = &GlobalDynamicSystemModuleMap;
      bVar5 = GlobalDynamicSystemModuleMap._40_1_;
      uStack_a8 = 0xffffffff;
      TStack_88.CurrentBitIndex = uStack_a4;
      TStack_88.UnvisitedBitMask = 0xffffffff;
      TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
      local_90 = &GlobalDynamicSystemModuleMap;
      iVar13 = (int)uVar16 >> 5;
      TStack_88._28_4_ = local_3c;
      TStack_88.BaseBitIndex = local_a0;
      uStack_68 = CONCAT44(uStack_94,iStack_98);
      TStack_88.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)&GlobalDynamicSystemModuleMap.field_0x10;
      uVar17 = uVar16;
      local_114 = uVar16;
      if ((int)uVar16 < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar17 = GlobalDynamicSystemModuleMap._40_4_;
      }
      if (uVar16 != uVar17) {
        lVar11 = 0x154c6bdb0;
        if (GlobalDynamicSystemModuleMap._32_8_ != 0) {
          lVar11 = GlobalDynamicSystemModuleMap._32_8_;
        }
        uVar16 = -1 << (bVar5 & 0x1f) & *(uint *)(lVar11 + (longlong)iVar13 * 4);
        while (uVar16 == 0) {
          lVar12 = (longlong)iVar13;
          uVar20 = uVar20 + 0x20;
          iVar13 = iVar13 + 1;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) {
            uVar19 = (ulonglong)uVar17;
            local_114 = uVar17;
            goto LAB_148846c80;
          }
          uVar16 = *(uint *)(lVar11 + 4 + lVar12 * 4);
        }
        uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_d4 = (int)lVar11;
        local_114 = local_d4 + -1 + uVar20;
        if ((int)uVar17 < (int)local_114) {
          local_114 = uVar17;
        }
        uVar19 = (ulonglong)local_114;
      }
LAB_148846c80:
      while( true ) {
        pTVar6 = local_90;
        if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
          local_res18 = 0;
          `TSparseArray<TSparseSetElement<TTuple<FName,TArray<TSubclassOf<UDynamicSubsystem>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&stack0x00000018);
        }
        if (((TStack_88.CurrentBitIndex == (int)uVar19) &&
            (TStack_88.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)&GlobalDynamicSystemModuleMap.field_0x10)) &&
           (uVar21 = local_117, pTVar6 == &GlobalDynamicSystemModuleMap)) break;
        lVar11 = (longlong)TStack_88.CurrentBitIndex * 0x20 + *(longlong *)pTVar6;
        plVar14 = *(longlong **)(lVar11 + 8);
        iVar13 = *(int *)(lVar11 + 0x10);
        plVar1 = plVar14 + iVar13;
        while( true ) {
          if (*(int *)(lVar11 + 0x10) != iVar13) {
            local_res20 = 0;
            `TCheckedPointerIterator<TSubclassOf<UDynamicSubsystem>_const_,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(&stack0x00000020);
          }
          if (plVar14 == plVar1) break;
          lVar12 = *plVar14;
          if ((lVar12 == 0) || (pUVar9 = UDynamicSubsystem::StaticClass(), pUVar9 == (UClass *)0x0))
          {
LAB_148846d52:
            lVar12 = 0;
          }
          else {
            iVar3 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar12 + 0x38) < iVar3) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar9->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_148846d52;
            lVar12 = *plVar14;
          }
          pUVar9 = this->BaseType;
          if (pUVar9 == (UClass *)0x0) {
LAB_148846dd5:
            plVar14 = plVar14 + 1;
          }
          else {
            iVar3 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar12 + 0x38) < iVar3) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar9->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_148846dd5;
            lVar12 = *plVar14;
            if ((lVar12 == 0) ||
               (pUVar9 = UDynamicSubsystem::StaticClass(), pUVar9 == (UClass *)0x0)) {
LAB_148846dcb:
              AddAndInitializeSubsystem(this,(UClass *)0x0);
              goto LAB_148846dd5;
            }
            iVar3 = (int)pUVar9->_padding_;
            if ((*(int *)(lVar12 + 0x38) < iVar3) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar12 + 0x30) + (longlong)iVar3 * 8) !=
                &pUVar9->_padding_)) {
              bVar7 = false;
            }
            else {
              bVar7 = true;
            }
            if (!bVar7) goto LAB_148846dcb;
            AddAndInitializeSubsystem(this,(UClass *)*plVar14);
            plVar14 = plVar14 + 1;
          }
        }
        TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
        uVar19 = (ulonglong)local_114;
      }
      goto LAB_148846e7c;
    }
  }
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  GetDerivedClasses(this->BaseType,&local_108,true);
  iVar13 = local_108.ArrayNum;
  uVar19 = (ulonglong)local_108.ArrayNum;
  pFVar2 = local_108.AllocatorInstance.Data + uVar19 * 8;
  FVar15.Data = local_108.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar19 != iVar13) {
      local_118 = 0;
      `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_118);
    }
    if (FVar15.Data == pFVar2) break;
    AddAndInitializeSubsystem(this,*(UClass **)FVar15.Data);
    uVar19 = local_108._8_8_ & 0xffffffff;
    FVar15.Data = FVar15.Data + 8;
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
LAB_148846e7c:
  FVar10 = TMulticastDelegateRegistration<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
           ::AddRaw<FSubsystemCollectionBase>
                     ((TMulticastDelegateRegistration<void___cdecl(TArrayView<UPackage_*_const,int>),FDefaultDelegateUserPolicy>
                       *)&FCoreUObjectDelegates::CompiledInUObjectsRemovedDelegate,
                      (FSubsystemCollectionBase *)&stack0xffffffffffffffa0,(pmf_a7b2e014)this);
                    /* WARNING: Load size is inaccurate */
  (this->ModulesUnloadedHandle).ID = *FVar10.ID;
  local_110 = this;
  if (((GlobalSubsystemCollections.AllocatorInstance.Data <= (FScriptContainerElement *)&local_110)
      && ((FScriptContainerElement *)&local_110 <
          GlobalSubsystemCollections.AllocatorInstance.Data +
          (longlong)GlobalSubsystemCollections.ArrayMax * 8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (GlobalSubsystemCollections.ArrayNum == GlobalSubsystemCollections.ArrayMax) {
    GlobalSubsystemCollections.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&GlobalSubsystemCollections.AllocatorInstance,
                    &GlobalSubsystemCollections.ArrayMax);
  }
  lVar11 = (longlong)GlobalSubsystemCollections.ArrayNum;
  GlobalSubsystemCollections.ArrayNum = GlobalSubsystemCollections.ArrayNum + 1;
  *(FSubsystemCollectionBase **)(GlobalSubsystemCollections.AllocatorInstance.Data + lVar11 * 8) =
       local_110;
  this->bPopulating = (bool)uVar21;
  return;
}

// InitializeDependency @ 148847920

/* WARNING: Enum "Type": Some values do not have unique names */

USubsystem * __thiscall
FSubsystemCollectionBase::InitializeDependency
          (FSubsystemCollectionBase *this,TSubclassOf<USubsystem> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  FName local_res10;
  TObjectPtr<UClass>_u_0 local_28;
  FSubsystemCollectionBase *local_20;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar6 = (UClass *)0x0;
  if ((lVar2 == 0) || (pUVar4 = USubsystem::StaticClass(), pUVar4 == (UClass *)0x0)) {
LAB_148847977:
    bVar3 = `FSubsystemCollectionBase::InitializeDependency'::__l3::<lambda_1>::operator()
                      (&local_res10);
    if (!bVar3) {
      return (USubsystem *)0x0;
    }
  }
  else {
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((!bVar3) || (*(longlong *)param_1.Class.field0_0x0 == 0)) goto LAB_148847977;
  }
  if (6 < (byte)LogSubsystemCollection._0_1_) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    pUVar4 = pUVar6;
    if ((lVar2 != 0) && (pUVar5 = USubsystem::StaticClass(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar4 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    local_res10 = (FName)pUVar4->_padding_;
    ::FName::ToString(&local_res10,(FString *)&local_28.ObjectPtr);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogSubsystemCollection);
    if (local_28.DebugPtr != (UClass *)0x0) {
      FMemory::Free(local_28.DebugPtr);
    }
  }
  if ((this->bPopulating == false) &&
     (bVar3 = `FSubsystemCollectionBase::InitializeDependency'::__l24::<lambda_2>::operator()
                        (&local_res10), pUVar4 = pUVar6, !bVar3)) goto LAB_148847b0e;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar4 = pUVar6;
  if ((lVar2 != 0) && (pUVar5 = USubsystem::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar4 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar5 = this->BaseType;
  if (pUVar5 == (UClass *)0x0) {
LAB_148847aad:
    local_28 = (TObjectPtr<UClass>_u_0)param_1.Class.field0_0x0;
    local_20 = this;
    bVar3 = `FSubsystemCollectionBase::InitializeDependency'::__l24::<lambda_3>::operator()
                      (&local_28);
    pUVar4 = (UClass *)0x0;
    if (!bVar3) goto LAB_148847b0e;
  }
  else {
    iVar1 = (int)pUVar5->_padding_;
    if (((int)pUVar4->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) != &pUVar5->_padding_)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_148847aad;
  }
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar4 = pUVar6;
  if ((lVar2 != 0) && (pUVar5 = USubsystem::StaticClass(), pUVar5 != (UClass *)0x0)) {
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar4 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  pUVar4 = (UClass *)AddAndInitializeSubsystem(this,pUVar4);
LAB_148847b0e:
  if ((4 < (byte)LogSubsystemCollection._0_1_) && (pUVar4 == (UClass *)0x0)) {
    lVar2 = *(longlong *)param_1.Class.field0_0x0;
    if ((lVar2 != 0) && (pUVar5 = USubsystem::StaticClass(), pUVar5 != (UClass *)0x0)) {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        pUVar6 = *(UClass **)param_1.Class.field0_0x0;
      }
    }
    local_res10 = (FName)pUVar6->_padding_;
    ::FName::ToString(&local_res10,(FString *)&local_28.ObjectPtr);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogSubsystemCollection);
    if (local_28.DebugPtr != (UClass *)0x0) {
      FMemory::Free(local_28.DebugPtr);
    }
  }
  return (USubsystem *)pUVar4;
}

// RemoveAllInstances @ 148853380

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl FSubsystemCollectionBase::RemoveAllInstances(UClass *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USubsystem *pUVar3;
  int iVar4;
  UClass *pUVar5;
  FString *pFVar6;
  ulonglong uVar7;
  wchar_t *pwVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  undefined1 local_res10 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_38;
  FString local_28;
  FString local_18;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  GetObjectsOfClass(param_1,&local_38,true,RF_ClassDefaultObject,Borrowed);
  iVar4 = local_38.ArrayNum;
  uVar7 = (ulonglong)local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + uVar7 * 8;
  FVar9.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar7 != iVar4) {
      `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar9.Data == pFVar1) {
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return;
    }
    pUVar3 = *(USubsystem **)FVar9.Data;
    if (pUVar3 == (USubsystem *)0x0) {
      pFVar6 = GetTypeName<USubsystem>(&local_18);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar10);
    }
    pUVar5 = USubsystem::StaticClass();
    iVar2 = (int)pUVar5->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar5->_padding_)) break;
    if (pUVar3->InternalOwningSubsystem != (FSubsystemCollectionBase *)0x0) {
      RemoveAndDeinitializeSubsystem(pUVar3->InternalOwningSubsystem,pUVar3);
    }
    uVar7 = local_38._8_8_ & 0xffffffff;
    FVar9.Data = FVar9.Data + 8;
  }
  pFVar6 = GetTypeName<USubsystem>(&local_28);
  pwVar10 = L"";
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  pFVar6 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar3);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar10,pwVar8);
}

// RemoveAndDeinitializeSubsystem @ 1488534c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSubsystemCollectionBase::RemoveAndDeinitializeSubsystem
          (FSubsystemCollectionBase *this,USubsystem *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong *plVar5;
  code *pcVar6;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *pTVar7;
  bool bVar8;
  int iVar9;
  TObjectPtr<USubsystem> TVar10;
  UClass *pUVar11;
  longlong lVar12;
  USubsystem *pUVar13;
  undefined1 *puVar14;
  int iVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  undefined1 *puVar21;
  uint *puVar22;
  TBitArray<FDefaultBitArrayAllocator> *pTVar23;
  int iVar24;
  UClass *this_00;
  USubsystem *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_148;
  undefined8 local_140;
  uint local_138;
  int local_134;
  int local_130;
  UObject *local_128;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_120;
  ulonglong *local_118;
  FScriptContainerElement *local_110;
  UClass *local_108;
  TBitArray<FDefaultBitArrayAllocator> *local_100;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  FString local_90;
  FString local_80 [2];
  undefined4 local_54;
  
  local_res10 = param_1;
  if ((param_1 == (USubsystem *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Subsystem",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0x16d,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((this->bIterating != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIterating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0x16e,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_128 = (UObject *)local_res10->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_128 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_128);
  }
  TVar10 = TMap<TObjectPtr<UClass>,TObjectPtr<USubsystem>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UClass>,TObjectPtr<USubsystem>,0>_>
           ::FindAndRemoveChecked(&this->SubsystemMap,(TObjectPtr<UClass_const_>)local_98);
  if ((local_res10 != *(USubsystem **)TVar10.field0_0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Subsystem == SubsystemFound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Subsystems\\SubsystemCollection.cpp"
                         ,0x170,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar23 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->SubsystemArrayMap).field_0x10;
  iStack_f0 = 0;
  local_120 = &this->SubsystemArrayMap;
  uStack_ec = 1;
  this_00 = (UClass *)local_res10->_padding_;
  local_d8 = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  iVar9 = *(int *)&(this->SubsystemArrayMap).field_0x28;
  iStack_dc = local_d8;
  if (iVar9 != 0) {
    puVar22 = *(uint **)&(this->SubsystemArrayMap).field_0x20;
    if (puVar22 == (uint *)0x0) {
      puVar22 = (uint *)pTVar23;
    }
    uVar18 = *puVar22;
    local_d8 = 0;
    while (uVar18 == 0) {
      lVar12 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14885364e;
      uVar18 = puVar22[lVar12 + 1];
    }
    uStack_ec = -uVar18 & uVar18;
    uVar1 = (ulonglong)uStack_ec * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_134 = (int)lVar12;
    iStack_dc = local_d8 + -1 + local_134;
    if (iVar9 < iStack_dc) {
      iStack_dc = iVar9;
    }
  }
LAB_14885364e:
  uVar18 = *(uint *)&(this->SubsystemArrayMap).field_0x28;
  uStack_d4 = local_54;
  iStack_d0 = *(int *)&(this->SubsystemArrayMap).field_0x8 -
              *(int *)&(this->SubsystemArrayMap).field_0x34;
  uVar17 = uVar18 & 0xffffffe0;
  uStack_e0 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar18 >> 5;
  TStack_c0._28_4_ = local_54;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_138 = uVar18;
  local_108 = this_00;
  local_100 = pTVar23;
  local_f8 = local_120;
  local_e8 = (undefined1 *)pTVar23;
  local_c8 = local_120;
  TStack_c0.Array = pTVar23;
  if ((((int)uVar18 < 0) || (iVar9 < (int)uVar18)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = *(uint *)&(this->SubsystemArrayMap).field_0x28;
  if (uVar18 != uVar2) {
    puVar21 = *(undefined1 **)&(this->SubsystemArrayMap).field_0x20;
    if (puVar21 == (undefined1 *)0x0) {
      puVar21 = (undefined1 *)pTVar23;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar15;
      uVar17 = uVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar2;
      local_138 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_148853770;
      uVar18 = *(uint *)(puVar21 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_130 = (int)lVar12;
    uVar18 = local_130 + -1 + uVar17;
    local_138 = uVar18;
    if ((int)uVar2 < (int)uVar18) {
      uVar18 = uVar2;
      local_138 = uVar2;
    }
  }
LAB_148853770:
  do {
    pTVar7 = local_c8;
    if (*(int *)&local_c8->field_0x8 - *(int *)&local_c8->field_0x34 != (int)uStack_a0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_c0.CurrentBitIndex == uVar18) && (TStack_c0.Array == pTVar23)) &&
       (pTVar7 == local_120)) {
      (**(code **)(local_res10->_padding_ + 0x2c0))();
      local_res10->InternalOwningSubsystem = (FSubsystemCollectionBase *)0x0;
      iVar9 = (int)local_140;
      pFVar20 = local_148.Data + (longlong)(int)local_140 * 8;
      FVar16.Data = local_148.Data;
      break;
    }
    lVar12 = *(longlong *)pTVar7;
    lVar3 = *(longlong *)(lVar12 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
    pFVar20 = (FScriptContainerElement *)(lVar12 + (longlong)TStack_c0.CurrentBitIndex * 0x18);
    local_110 = pFVar20;
    pUVar11 = Z_Construct_UClass_UInterface_NoRegister();
    if (pUVar11 == (UClass *)0x0) {
LAB_1488537fa:
      uVar1 = *(ulonglong *)pFVar20;
      if (uVar1 != 0) {
        if (((int)this_00->_padding_ < *(int *)(uVar1 + 0x38)) ||
           (*(longlong *)(this_00->_padding_ + (longlong)*(int *)(uVar1 + 0x38) * 8) != uVar1 + 0x30
           )) {
          bVar8 = false;
        }
        else {
          bVar8 = true;
        }
        goto LAB_148853827;
      }
    }
    else {
      iVar9 = (int)pUVar11->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar9) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar9 * 8) !=
          &pUVar11->_padding_)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (!bVar8) goto LAB_1488537fa;
      bVar8 = UClass::ImplementsInterface(this_00,*(UClass **)pFVar20);
LAB_148853827:
      if (bVar8 != false) {
        if (*(char *)(*(ulonglong *)(pFVar20 + 8) + 0x10) != '\0') {
          UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)pFVar20,local_80,(UObject *)0x0);
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)local_res10,&local_90,(UObject *)0x0);
          UE::Logging::Private::BasicFatalLog
                    (&::LOG_Static,(FLogCategoryBase *)&LogSubsystemCollection);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (local_80[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80[0].Data.AllocatorInstance.Data);
          }
        }
        puVar4 = *(ulonglong **)(pFVar20 + 8);
        local_118 = puVar4;
        if ((((USubsystem **)*puVar4 <= &local_res10) &&
            (&local_res10 < (USubsystem **)*puVar4 + *(int *)((longlong)puVar4 + 0xc))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (int)puVar4[1];
        if (iVar9 != 0) {
          plVar5 = (longlong *)*puVar4;
          iVar24 = 0;
          lVar12 = 0;
          bVar8 = (USubsystem *)*plVar5 != local_res10;
          pUVar13 = local_res10;
          iVar15 = 0;
          do {
            iVar19 = iVar15;
            do {
              lVar12 = lVar12 + 1;
              iVar19 = iVar19 + 1;
              if (iVar9 <= lVar12) break;
            } while (bVar8 == ((USubsystem *)plVar5[lVar12] != pUVar13));
            if (bVar8 != false) {
              if (iVar24 != iVar15) {
                memmove(plVar5 + iVar24,plVar5 + iVar15,(longlong)(iVar19 - iVar15) << 3);
                pUVar13 = local_res10;
              }
              iVar24 = iVar24 + (iVar19 - iVar15);
            }
            bVar8 = (bool)(bVar8 ^ 1);
            iVar15 = iVar19;
          } while (lVar12 < iVar9);
          *(int *)(local_118 + 1) = iVar24;
          pFVar20 = local_110;
          pTVar23 = local_100;
          this_00 = local_108;
          uVar18 = local_138;
        }
        if (*(int *)(*(ulonglong *)(pFVar20 + 8) + 8) == 0) {
          if (((local_148.Data <= pFVar20) &&
              (pFVar20 < local_148.Data + (longlong)local_140._4_4_ * 8)) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar9 = (int)local_140;
          if ((int)local_140 == local_140._4_4_) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_148,(int *)((longlong)&local_140 + 4));
          }
          local_140 = CONCAT44(local_140._4_4_,iVar9 + 1);
          *(ulonglong *)(local_148.Data + (longlong)iVar9 * 8) = *(ulonglong *)pFVar20;
        }
      }
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
LAB_148853ac0:
  if ((int)local_140 != iVar9) {
    `TCheckedPointerIterator<UClass_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20)
    ;
  }
  if (FVar16.Data == pFVar20) {
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    return;
  }
  uVar1 = *(ulonglong *)FVar16.Data;
  if (*(int *)&(this->SubsystemArrayMap).field_0x8 != *(int *)&(this->SubsystemArrayMap).field_0x34)
  {
    uVar18 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
    puVar21 = *(undefined1 **)&(this->SubsystemArrayMap).field_0x40;
    puVar14 = &(this->SubsystemArrayMap).field_0x38;
    if (puVar21 != (undefined1 *)0x0) {
      puVar14 = puVar21;
    }
    iVar15 = *(int *)(puVar14 +
                     ((longlong)*(int *)&(this->SubsystemArrayMap).field_0x48 - 1U &
                     (longlong)(int)(uVar18 >> 0x10 ^ uVar18)) * 4);
    if (iVar15 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&this->SubsystemArrayMap + (longlong)iVar15 * 0x18) == uVar1
           ) {
          TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
                           *)&this->SubsystemArrayMap,iVar15);
          goto LAB_148853b79;
        }
        iVar15 = *(int *)(*(longlong *)&this->SubsystemArrayMap + 0x10 + (longlong)iVar15 * 0x18);
      } while (iVar15 != -1);
      FVar16.Data = FVar16.Data + 8;
      goto LAB_148853ac0;
    }
  }
LAB_148853b79:
  FVar16.Data = FVar16.Data + 8;
  goto LAB_148853ac0;
}

// RemoveSubsystemsInPackages @ 148855650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FSubsystemCollectionBase::RemoveSubsystemsInPackages
          (FSubsystemCollectionBase *this,TArrayView<UPackage_*_const,int> *param_1)

{
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *pTVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  UObjectBaseUtility *this_00;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *pTVar8;
  bool bVar9;
  int iVar10;
  UPackage *pUVar11;
  longlong lVar12;
  ulonglong uVar13;
  UPackage **ppUVar14;
  int iVar15;
  uint uVar16;
  UPackage **ppUVar17;
  uint uVar18;
  longlong *plVar19;
  undefined1 *puVar20;
  uint *puVar21;
  undefined1 *puVar22;
  UPackage **local_res8;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined1 auStack_120 [16];
  uint uStack_110;
  uint uStack_10c;
  longlong local_108;
  TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
  *pTStack_100;
  TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
  *local_f8;
  char local_f0;
  char cStack_ef;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_e8;
  int iStack_e0;
  uint uStack_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  TMap<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  pTVar1 = &this->SubsystemArrayMap;
  iStack_e0 = 0;
  iVar10 = *(int *)&(this->SubsystemArrayMap).field_0x28;
  local_d8 = &(this->SubsystemArrayMap).field_0x10;
  local_c8 = 0;
  uStack_dc = 1;
  iStack_cc = 0;
  if (iVar10 != 0) {
    puVar21 = *(uint **)&(this->SubsystemArrayMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)local_d8;
    }
    uVar18 = *puVar21;
    while (uVar18 == 0) {
      lVar12 = (longlong)iStack_e0;
      local_c8 = local_c8 + 0x20;
      iStack_e0 = iStack_e0 + 1;
      iStack_cc = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e0) goto LAB_1488556fe;
      uVar18 = puVar21[lVar12 + 1];
    }
    uStack_dc = -uVar18 & uVar18;
    uVar13 = (ulonglong)uStack_dc * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_cc = local_c8 + -1 + (int)lVar12;
    local_res20 = CONCAT44(local_res20._4_4_,(int)lVar12);
    if (iVar10 < iStack_cc) {
      iStack_cc = iVar10;
    }
  }
LAB_1488556fe:
  uVar18 = *(uint *)&(this->SubsystemArrayMap).field_0x28;
  uVar16 = uVar18 & 0xffffffe0;
  puVar22 = &(this->SubsystemArrayMap).field_0x10;
  iStack_c0 = *(int *)&(this->SubsystemArrayMap).field_0x8 -
              *(int *)&(this->SubsystemArrayMap).field_0x34;
  uStack_d0 = 0xffffffff;
  TStack_b0.CurrentBitIndex = iStack_cc;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  TStack_b0._padding_ = CONCAT44(uStack_dc,iStack_e0);
  iVar15 = (int)uVar18 >> 5;
  TStack_b0._28_4_ = iStack_cc;
  TStack_b0.BaseBitIndex = local_c8;
  uStack_90 = CONCAT44(uStack_bc,iStack_c0);
  local_e8 = pTVar1;
  iStack_c4 = iStack_cc;
  local_b8 = pTVar1;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_d8;
  if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar4 = *(uint *)&(this->SubsystemArrayMap).field_0x28;
  if (uVar18 != uVar4) {
    puVar20 = *(undefined1 **)&(this->SubsystemArrayMap).field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar22;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar15 * 4);
    while (uVar18 == 0) {
      lVar12 = (longlong)iVar15;
      uVar16 = uVar16 + 0x20;
      iVar15 = iVar15 + 1;
      uVar18 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_148855810;
      uVar18 = *(uint *)(puVar20 + lVar12 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar18 = (int)lVar12 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar18) {
      uVar18 = uVar4;
    }
  }
LAB_148855810:
  while( true ) {
    pTVar8 = local_b8;
    if (*(int *)(&local_b8->field_0x0 + 8) - *(int *)(&local_b8->field_0x0 + 0x34) != (int)uStack_90
       ) {
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_b0.CurrentBitIndex == uVar18) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar22)) && (pTVar8 == pTVar1))
    break;
    puVar2 = (undefined8 *)
             (*(longlong *)&pTVar8->field_0x0 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
    if (*(char *)(puVar2[1] + 0x10) != '\0') {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)*puVar2,&local_88,(UObject *)0x0);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogSubsystemCollection)
      ;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_68,
             (TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_f0 = '\0';
  cStack_ef = '\0';
  stack0xfffffffffffffee8 = local_68._16_16_;
  auStack_120._0_8_ = local_68._8_8_;
  local_108 = local_48;
  pTStack_100 = pTStack_40;
  uVar13 = local_68._24_8_ >> 0x20;
  if ((int)local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
    ppUVar17 = param_1->DataPtr;
    lVar12 = (longlong)param_1->ArrayNum * 8;
    uVar18 = local_68._28_4_;
    local_res8 = ppUVar17;
    local_res20 = lVar12;
    local_f8 = (TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
                *)pTVar1;
    do {
      this_00 = *(UObjectBaseUtility **)(*(longlong *)local_68._0_8_ + (longlong)(int)uVar13 * 0x18)
      ;
      pUVar11 = UObjectBaseUtility::GetPackage(this_00);
      ppUVar14 = ppUVar17;
      if (ppUVar17 != (UPackage **)(lVar12 + (longlong)ppUVar17)) {
LAB_148855950:
        if (*ppUVar14 != pUVar11) goto code_r0x000148855955;
        if (5 < (byte)LogSubsystemCollection._0_1_) {
          UObjectBaseUtility::GetFullName(this_00,&local_78,(UObject *)0x0,None);
          UE::Logging::Private::BasicLog<6>
                    (&::LOG_Static,(FLogCategoryBase *)&LogSubsystemCollection);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        plVar5 = *(longlong **)(*(longlong *)local_68._0_8_ + 8 + (longlong)(int)uVar18 * 0x18);
        plVar19 = (longlong *)*plVar5;
        lVar12 = plVar5[1];
        plVar3 = plVar19 + (int)lVar12;
        while( true ) {
          if ((int)plVar5[1] != (int)lVar12) {
            `TCheckedPointerIterator<USubsystem_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          if (plVar19 == plVar3) break;
          plVar6 = (longlong *)*plVar19;
          if (((plVar6 != (longlong *)0x0) && ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0)) &&
             ((UObjectBaseUtility *)plVar6[2] == this_00)) {
            (**(code **)(*plVar6 + 0x2c0))(plVar6);
            plVar6[5] = 0;
          }
          plVar19 = plVar19 + 1;
        }
        TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_100,uVar18);
        local_f0 = '\x01';
        ppUVar17 = local_res8;
        lVar12 = local_res20;
      }
LAB_148855a27:
      uStack_110 = uStack_110 & ~auStack_120._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_120);
      uVar13 = (ulonglong)uStack_10c;
      uVar18 = uStack_10c;
    } while ((int)uStack_10c < *(int *)(auStack_120._8_8_ + 0x18));
    if ((local_f0 != '\0') && (cStack_ef != '\0')) {
      uVar18 = *(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34;
      if (uVar18 < 4) {
        iVar10 = 1;
      }
      else {
        uVar13 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
        lVar12 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar12 & 0x1f);
      }
      if (((0 < (int)uVar18) && (local_f8->HashSize < iVar10)) || (iVar10 < local_f8->HashSize)) {
        local_f8->HashSize = iVar10;
        TSet<TTuple<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>_>,TDefaultMapHashableKeyFuncs<UClass_*,TUniquePtr<FSubsystemCollectionBase::FSubsystemArray,TDefaultDelete<FSubsystemCollectionBase::FSubsystemArray>_>,0>,FDefaultSetAllocator>
        ::Rehash(local_f8);
      }
    }
  }
  return;
code_r0x000148855955:
  ppUVar14 = ppUVar14 + 1;
  if (ppUVar14 == (UPackage **)(lVar12 + (longlong)ppUVar17)) goto LAB_148855a27;
  goto LAB_148855950;
}

// operator() @ 150532020

bool __thiscall
`FSubsystemCollectionBase::InitializeDependency'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3014280564560625954>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3014280564560625954>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505321f0

bool __thiscall `FSubsystemCollectionBase::Initialize'::__l13::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3014280564560625842>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3014280564560625842>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505322d0

bool __thiscall
`FSubsystemCollectionBase::InitializeDependency'::__l24::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3014280564560625958>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3014280564560625958>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150532310

bool __thiscall
`FSubsystemCollectionBase::InitializeDependency'::__l24::<lambda_3>::operator()(void *this)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  ulonglong uVar8;
  FName local_res10;
  FName local_res18;
  FString local_38;
  FString local_28;
  
  uVar8 = 0;
  local_res10 = (FName)((ulonglong)local_res10 & 0xffffffff00000000);
  bVar5 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3014280564560625959>);
  if (bVar5) {
    local_res10 = *(FName *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0xa8) + 0x18);
    ::FName::ToString(&local_res10,&local_28);
    puVar2 = *(ulonglong **)this;
    uVar3 = *puVar2;
    if ((uVar3 != 0) && (pUVar7 = USubsystem::StaticClass(), pUVar7 != (UClass *)0x0)) {
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(uVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(uVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        uVar8 = *puVar2;
      }
    }
    local_res18 = *(FName *)(uVar8 + 0x18);
    ::FName::ToString(&local_res18,&local_38);
    uVar8 = 3;
    bVar5 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3014280564560625959>,&::ENSURE_Static);
    if (bVar5) {
      bVar5 = true;
      goto LAB_15053241b;
    }
  }
  bVar5 = false;
LAB_15053241b:
  if (((uVar8 & 2) != 0) &&
     (uVar8 = (ulonglong)((uint)uVar8 & 0xfffffffd),
     local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (((uVar8 & 1) != 0) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
     ) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  return false;
}

