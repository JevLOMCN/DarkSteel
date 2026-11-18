// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5c2d60

UClass * __cdecl UDS_TriggerCore::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TriggerCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TriggerCore",
               &Z_Registration_Info_UClass_UDS_TriggerCore.InnerSingleton,
               StaticRegisterNativesUDS_TriggerCore,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_TriggerCore>,InternalVTableHelperCtorCaller<UDS_TriggerCore>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TriggerCore.InnerSingleton;
}

// UDS_TriggerCore @ 14b5c7830

UDS_TriggerCore * __thiscall
UDS_TriggerCore::UDS_TriggerCore(UDS_TriggerCore *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TriggerCore__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->TriggerMap = 0;
  *(undefined8 *)&(this->TriggerMap).field_0x8 = 0;
  *(undefined8 *)&(this->TriggerMap).field_0x20 = 0;
  *(undefined4 *)&(this->TriggerMap).field_0x28 = 0;
  *(undefined4 *)&(this->TriggerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TriggerMap).field_0x34 = 0;
  *(undefined4 *)&(this->TriggerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TriggerMap).field_0x40 = 0;
  *(undefined4 *)&(this->TriggerMap).field_0x48 = 0;
  (this->TriggerTableIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerTableIDs).ArrayNum = 0;
  (this->TriggerTableIDs).ArrayMax = 0;
  return this;
}

// ~UDS_TriggerCore @ 14b5c8e20

void __thiscall UDS_TriggerCore::~UDS_TriggerCore(UDS_TriggerCore *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UDS_TriggerCore__6B_;
  pFVar1 = (this->TriggerTableIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TriggerMap).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TriggerMap).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->TriggerMap);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14b5cc910

UClass * __cdecl UDS_TriggerCore::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_TriggerCore.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_TriggerCore",
               &Z_Registration_Info_UClass_UDS_TriggerCore.InnerSingleton,
               StaticRegisterNativesUDS_TriggerCore,0x90,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_TriggerCore>,InternalVTableHelperCtorCaller<UDS_TriggerCore>,
               local_res8,UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_TriggerCore.InnerSingleton;
}

// StaticRegisterNativesUDS_TriggerCore @ 14b5ce120

void __cdecl UDS_TriggerCore::StaticRegisterNativesUDS_TriggerCore(void)

{
  return;
}

// UDS_TriggerCore @ 14bc2b6a0

UDS_TriggerCore * __thiscall
UDS_TriggerCore::UDS_TriggerCore(UDS_TriggerCore *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_TriggerCore__6B_;
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->TriggerMap = 0;
  *(undefined8 *)&(this->TriggerMap).field_0x8 = 0;
  *(undefined8 *)&(this->TriggerMap).field_0x20 = 0;
  *(undefined4 *)&(this->TriggerMap).field_0x28 = 0;
  *(undefined4 *)&(this->TriggerMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->TriggerMap).field_0x34 = 0;
  *(undefined4 *)&(this->TriggerMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->TriggerMap).field_0x40 = 0;
  *(undefined4 *)&(this->TriggerMap).field_0x48 = 0;
  (this->TriggerTableIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriggerTableIDs).ArrayNum = 0;
  (this->TriggerTableIDs).ArrayMax = 0;
  return this;
}

// AddTriggerComponent @ 14bc2d2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_TriggerCore::AddTriggerComponent
          (UDS_TriggerCore *this,EDS_TriggerType param_1,float param_2,bool param_3)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  TObjectPtr<UDS_TriggerComponent>_u_0 local_res10 [2];
  undefined1 auStack_108 [32];
  UDS_TriggerComponent *local_d8;
  TPairInitializer<EDS_TriggerType_&,TObjectPtr<UDS_TriggerComponent>_&> local_d0;
  UDS_TriggerComponent **local_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (*(int *)&(this->TriggerMap).field_0x8 != *(int *)&(this->TriggerMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->TriggerMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->TriggerMap).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->TriggerMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar1 != -1) {
      do {
        if (*(EDS_TriggerType *)(*(longlong *)&this->TriggerMap + (longlong)iVar1 * 0x18) == param_1
           ) {
          return;
        }
        iVar1 = *(int *)(*(longlong *)&this->TriggerMap + 0x10 + (longlong)iVar1 * 0x18);
      } while (iVar1 != -1);
    }
  }
  local_res10[0]._0_1_ = param_1;
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UDS_TriggerComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar3);
  local_b8._8_8_ = pUVar2;
  local_d8 = (UDS_TriggerComponent *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar4 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar4 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_d8 == (UDS_TriggerComponent *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)local_d8);
  }
  if (local_d8 != (UDS_TriggerComponent *)0x0) {
    UDS_TriggerComponent::InitTrigger
              (local_d8,(TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr,
               local_res10[0]._0_1_,param_2,param_3);
    local_d0.Value = (TObjectPtr<UDS_TriggerComponent> *)local_res10;
    local_c0 = &local_d8;
    TSet<TTuple<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>_>,TDefaultMapHashableKeyFuncs<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<enum_EDS_TriggerType_&,TObjectPtr<UDS_TriggerComponent>_&>_>
              (&this->TriggerMap,&local_d0,(bool *)&local_d0.Value);
  }
  return;
}

// CreateTrigger @ 14bc37840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_TriggerCore::CreateTrigger
          (UDS_TriggerCore *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  double dVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  bool bVar5;
  int iVar6;
  FDS_TriggerBaseTableRow *pFVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UDS_TriggerComponent *pUVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  FScriptContainerElement *pFVar13;
  undefined1 auStack_138 [32];
  bool local_108 [8];
  UDS_TriggerComponent *local_100;
  TPairInitializer<EDS_TriggerType_&,TObjectPtr<UDS_TriggerComponent>_&> local_f8;
  bool *local_e8;
  UDS_TriggerComponent **local_e0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_108[0] = param_2;
  local_f8.Value = (TObjectPtr<UDS_TriggerComponent> *)param_1;
  bVar5 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar5) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->TriggerTableIDs,param_1);
    bVar5 = local_108[0];
    iVar2 = (this->TriggerTableIDs).ArrayNum;
    if (0 < iVar2) {
      pFVar13 = (this->TriggerTableIDs).AllocatorInstance.Data;
      pFVar3 = pFVar13 + (longlong)iVar2 * 4;
      while( true ) {
        if ((this->TriggerTableIDs).ArrayNum != iVar2) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_108);
        }
        param_1 = (TArray<int,TSizedDefaultAllocator<32>_> *)local_f8.Value;
        if (pFVar13 == pFVar3) break;
        if ((*(int *)pFVar13 != 0) &&
           (pFVar7 = FDS_TriggerBaseTableRow::Get((longlong)*(int *)pFVar13,true),
           pFVar7 != (FDS_TriggerBaseTableRow *)0x0)) {
          dVar1 = pFVar7->Range;
          local_108[0] = (bool)pFVar7->TriggerRangeType;
          if (*(int *)&(this->TriggerMap).field_0x8 != *(int *)&(this->TriggerMap).field_0x34) {
            puVar4 = *(undefined1 **)&(this->TriggerMap).field_0x40;
            puVar12 = &(this->TriggerMap).field_0x38;
            if (puVar4 != (undefined1 *)0x0) {
              puVar12 = puVar4;
            }
            iVar6 = *(int *)(puVar12 +
                            ((ulonglong)(*(int *)&(this->TriggerMap).field_0x48 - 1) &
                            (ulonglong)local_108[0]) * 4);
            if (iVar6 != -1) {
              do {
                if ((bool)*(EDS_TriggerType *)
                           (*(longlong *)&this->TriggerMap + (longlong)iVar6 * 0x18) == local_108[0]
                   ) goto LAB_14bc37a65;
                iVar6 = *(int *)(*(longlong *)&this->TriggerMap + 0x10 + (longlong)iVar6 * 0x18);
              } while (iVar6 != -1);
            }
          }
          pUVar8 = GetTransientPackageAsObject();
          FObjectInitializer::AssertIfInConstructor
                    (pUVar8,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar9 = Z_Construct_UClass_UDS_TriggerComponent_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_d8,pUVar9);
          local_d8._8_8_ = pUVar8;
          pUVar10 = (UDS_TriggerComponent *)
                    StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
          if (local_d8._64_8_ != 0) {
            plVar11 = (longlong *)(local_d8 + 0x50);
            if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
              plVar11 = (longlong *)local_d8._104_8_;
            }
            (**(code **)(*plVar11 + 0x10))();
          }
          local_100 = pUVar10;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar10 == (UDS_TriggerComponent *)0x0) goto LAB_14bc37a65;
            UE::GC::MarkAsReachable((UObject *)pUVar10);
          }
          if (local_100 != (UDS_TriggerComponent *)0x0) {
            UDS_TriggerComponent::InitTrigger
                      (local_100,(TWeakObjectPtr<AActor,FWeakObjectPtr>)(this->OwnerActor).WeakPtr,
                       local_108[0],(float)dVar1,bVar5);
            local_e8 = local_108;
            local_e0 = &local_100;
            TSet<TTuple<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>_>,TDefaultMapHashableKeyFuncs<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<enum_EDS_TriggerType_&,TObjectPtr<UDS_TriggerComponent>_&>_>
                      (&this->TriggerMap,&local_f8,(bool *)&local_e8);
          }
        }
LAB_14bc37a65:
        pFVar13 = pFVar13 + 4;
      }
    }
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  else {
    pFVar3 = (param_1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return;
}

// Deinitialize @ 14bc389f0

void __thiscall UDS_TriggerCore::Deinitialize(UDS_TriggerCore *this)

{
  undefined1 *puVar1;
  TMap<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  UObject *pUVar4;
  UObjectBase *this_01;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar3 = *(int *)&(this->TriggerMap).field_0x28;
  puVar1 = &(this->TriggerMap).field_0x10;
  iVar13 = 0;
  this_00 = &this->TriggerMap;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&(this->TriggerMap).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14bc38a8e;
      uVar12 = puVar16[lVar10 + 1];
    }
    uVar8 = ~(uVar12 - 1) & uVar12;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res18 = (int)lVar10;
    iVar9 = local_res18 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14bc38a8e:
  uVar12 = *(uint *)&(this->TriggerMap).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar8,iVar13);
  TStack_70.CurrentBitIndex = iVar9;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_70._28_4_ = iVar9;
  TStack_70.BaseBitIndex = iVar15;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->TriggerMap).field_0x8 -
                       *(int *)&(this->TriggerMap).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)&(this->TriggerMap).field_0x28;
  if (uVar12 != uVar8) {
    puVar14 = *(undefined1 **)&(this->TriggerMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14bc38ba0;
      uVar12 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(~(uVar12 - 1) & uVar12) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    uVar12 = local_res20 + -1 + uVar11;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_14bc38ba0:
  do {
    if (*(int *)&(this->TriggerMap).field_0x8 - *(int *)&(this->TriggerMap).field_0x34 !=
        (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_70.CurrentBitIndex == uVar12) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      bVar7 = 1 < *(int *)&(this->TriggerMap).field_0x48;
      if (!bVar7) {
        TSet<TTuple<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>_>,TDefaultMapHashableKeyFuncs<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>,FDefaultSetAllocator>
        ::UnhashElements(this_00);
      }
      *(undefined4 *)&(this->TriggerMap).field_0x8 = 0;
      if (*(int *)&(this->TriggerMap).field_0xc != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)&(this->TriggerMap).field_0xc);
      }
      *(undefined4 *)&(this->TriggerMap).field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->TriggerMap).field_0x34 = 0;
      iVar3 = *(int *)&(this->TriggerMap).field_0x2c;
      *(undefined4 *)&(this->TriggerMap).field_0x28 = 0;
      if ((iVar3 < 0) || (0x80 < iVar3)) {
        *(undefined4 *)&(this->TriggerMap).field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->TriggerMap).field_0x10,0);
      }
      if (bVar7) {
        *(undefined4 *)&(this->TriggerMap).field_0x48 = 1;
        TSet<TTuple<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>_>,TDefaultMapHashableKeyFuncs<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>,FDefaultSetAllocator>
        ::Rehash(this_00);
      }
      (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
      return;
    }
    pUVar4 = *(UObject **)(*(longlong *)this_00 + (longlong)TStack_70.CurrentBitIndex * 0x18 + 8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    if (*(longlong *)(pUVar4 + 1) != 0) {
      TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
      ::RemoveAll((TSparseDynamicDelegate<FComponentBeginOverlapSignature_MCSignature,UPrimitiveComponent,FComponentBeginOverlapSignatureInfoGetter>
                   *)(*(longlong *)(pUVar4 + 1) + 0x521),pUVar4);
      this_01 = *(UObjectBase **)(pUVar4 + 1);
      if (*(char *)((longlong)&this_01[0x20].OuterPrivate.ObjectPtr.field0_0x0 + 2) != '\0') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                          ::__l2::DelegateFName,"OnComponentEndOverlap");
          _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        FVar6 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FComponentEndOverlapSignature_MCSignature,UPrimitiveComponent,FComponentEndOverlapSignatureInfoGetter>::GetDelegateName(void)const___ptr64'
                ::__l2::DelegateFName;
        bVar7 = UObjectBase::IsValidLowLevelFast(this_01,false);
        if ((!bVar7) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("DelegateOwner->IsValidLowLevelFast(false)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                               ,0xd7,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar7 = FSparseDelegateStorage::RemoveAll((UObject *)this_01,FVar6,pUVar4);
        *(bool *)((longlong)&this_01[0x20].OuterPrivate.ObjectPtr.field0_0x0 + 2) = bVar7;
      }
      *(undefined8 *)(pUVar4 + 1) = 0;
    }
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// DrawDebug @ 14bc39000

void __thiscall UDS_TriggerCore::DrawDebug(UDS_TriggerCore *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_5c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_50;
  undefined8 uStack_30;
  
  iVar3 = *(int *)&(this->TriggerMap).field_0x28;
  puVar1 = &(this->TriggerMap).field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->TriggerMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bc3909d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14bc3909d:
  uVar11 = *(uint *)&(this->TriggerMap).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_50._padding_ = CONCAT44(uVar7,iVar12);
  TStack_50.CurrentBitIndex = iVar8;
  TStack_50.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_50._28_4_ = iVar8;
  TStack_50.BaseBitIndex = iVar14;
  uStack_30 = CONCAT44(uStack_5c,
                       *(int *)&(this->TriggerMap).field_0x8 -
                       *(int *)&(this->TriggerMap).field_0x34);
  TStack_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->TriggerMap).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->TriggerMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14bc391a0;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14bc391a0:
  while( true ) {
    if (*(int *)&(this->TriggerMap).field_0x8 - *(int *)&(this->TriggerMap).field_0x34 !=
        (int)uStack_30) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_50.CurrentBitIndex == uVar11) &&
       (TStack_50.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UObject **)
              (*(longlong *)&this->TriggerMap + 8 + (longlong)TStack_50.CurrentBitIndex * 0x18);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar4 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
    }
    TStack_50.UnvisitedBitMask = TStack_50.UnvisitedBitMask & ~TStack_50._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_50);
  }
  return;
}

// GetTriggerComponent @ 14bc447b0

TWeakObjectPtr<UDS_TriggerComponent,FWeakObjectPtr> __thiscall
UDS_TriggerCore::GetTriggerComponent(UDS_TriggerCore *this,EDS_TriggerType param_1)

{
  longlong lVar1;
  UDS_TriggerComponent *pUVar2;
  int iVar3;
  TObjectPtr<UDS_TriggerComponent> *pTVar4;
  undefined7 in_register_00000011;
  FWeakObjectPtr FVar5;
  EDS_TriggerType in_R8B;
  undefined1 *puVar6;
  FWeakObjectPtr local_res8;
  UDS_TriggerComponent *local_res20;
  
  FVar5._1_7_ = in_register_00000011;
  FVar5.ObjectIndex._0_1_ = param_1;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (*(int *)&(this->TriggerMap).field_0x8 != *(int *)&(this->TriggerMap).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TriggerMap).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TriggerMap).field_0x38;
    }
    iVar3 = *(int *)(puVar6 + ((ulonglong)(*(int *)&(this->TriggerMap).field_0x48 - 1) &
                              (ulonglong)in_R8B) * 4);
    if (iVar3 != -1) {
      lVar1 = *(longlong *)&this->TriggerMap;
      do {
        if (*(EDS_TriggerType *)(lVar1 + (longlong)iVar3 * 0x18) == in_R8B) {
          pTVar4 = TMapBase<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>_>
                   ::FindChecked(&this->TriggerMap,in_R8B);
          pUVar2 = (pTVar4->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_TriggerComponent *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_TriggerComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res20 = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_TriggerComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  *(FWeakObjectPtr *)FVar5 = local_res8;
  return (TWeakObjectPtr<UDS_TriggerComponent,FWeakObjectPtr>)FVar5;
}

// Initialize @ 14bc48ce0

void __thiscall
UDS_TriggerCore::Initialize(UDS_TriggerCore *this,TWeakObjectPtr<AActor,FWeakObjectPtr> param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res10 [3];
  
  local_res10[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    (this->OwnerActor).WeakPtr = local_res10[0];
  }
  return;
}

// SetGenerateOverlapEvent @ 14bc5e680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDS_TriggerCore::SetGenerateOverlapEvent(UDS_TriggerCore *this,EDS_TriggerType param_1,bool param_2)

{
  longlong lVar1;
  UDS_TriggerComponent *pUVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UDS_TriggerComponent> *pTVar5;
  UObject *pUVar6;
  undefined1 *puVar7;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res20;
  UDS_TriggerComponent *local_18 [2];
  
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (*(int *)&(this->TriggerMap).field_0x8 != *(int *)&(this->TriggerMap).field_0x34) {
    puVar7 = *(undefined1 **)&(this->TriggerMap).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->TriggerMap).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->TriggerMap).field_0x48 - 1) &
                              (ulonglong)param_1) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->TriggerMap;
      do {
        if (*(EDS_TriggerType *)(lVar1 + (longlong)iVar4 * 0x18) == param_1) {
          pTVar5 = TMapBase<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>_>
                   ::FindChecked(&this->TriggerMap,param_1);
          pUVar2 = (pTVar5->field0_0x0).DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar2 != (UDS_TriggerComponent *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar2 != (UDS_TriggerComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar2);
            }
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_18[0] = pUVar2;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar2 != (UDS_TriggerComponent *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_18);
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  local_res20 = local_res8;
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&local_res20);
    if (*(UPrimitiveComponent **)(pUVar6 + 1) != (UPrimitiveComponent *)0x0) {
      UPrimitiveComponent::SetGenerateOverlapEvents(*(UPrimitiveComponent **)(pUVar6 + 1),param_2);
    }
  }
  return;
}

// SetGenerateOverlapEventAll @ 14bc5e7b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDS_TriggerCore::SetGenerateOverlapEventAll(UDS_TriggerCore *this,bool param_1)

{
  undefined1 *puVar1;
  TMap<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>_>
  *this_00;
  ulonglong uVar2;
  EDS_TriggerType EVar3;
  uint uVar4;
  UDS_TriggerComponent *pUVar5;
  code *pcVar6;
  TMap<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>_>
  *pTVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  UObject *pUVar11;
  TObjectPtr<UDS_TriggerComponent> *pTVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  bool local_res10;
  int local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_c0;
  TMap<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  UDS_TriggerComponent *local_88;
  TMap<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  iVar10 = *(int *)&(this->TriggerMap).field_0x28;
  puVar1 = &(this->TriggerMap).field_0x10;
  iStack_b0 = 0;
  this_00 = &this->TriggerMap;
  local_98 = 0;
  uStack_ac = 1;
  iStack_9c = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->TriggerMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar13 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14bc5e84d;
      uVar16 = puVar18[lVar13 + 1];
    }
    uStack_ac = -uVar16 & uVar16;
    uVar2 = (ulonglong)uStack_ac * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_res18 = (int)lVar13;
    iStack_9c = local_res18 + -1 + local_98;
    if (iVar10 < iStack_9c) {
      iStack_9c = iVar10;
    }
  }
LAB_14bc5e84d:
  uVar16 = *(uint *)&(this->TriggerMap).field_0x28;
  uVar19 = uVar16 & 0xffffffe0;
  iStack_90 = *(int *)&(this->TriggerMap).field_0x8 - *(int *)&(this->TriggerMap).field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_78._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_78.CurrentBitIndex = iStack_9c;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_78._28_4_ = iStack_9c;
  TStack_78.BaseBitIndex = local_98;
  uStack_58 = CONCAT44(uStack_8c,iStack_90);
  local_res10 = param_1;
  local_b8 = this_00;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_80 = this_00;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar10 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  bVar8 = local_res10;
  uVar4 = *(uint *)&(this->TriggerMap).field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->TriggerMap).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar13 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14bc5e960;
      uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = (int)lVar13 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14bc5e960:
  do {
    pTVar7 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar16) &&
        (TStack_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == this_00))
    {
      return;
    }
    lVar13 = *(longlong *)pTVar7;
    EVar3 = *(EDS_TriggerType *)(lVar13 + (longlong)TStack_78.CurrentBitIndex * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar11 = *(UObject **)(lVar13 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x18),
       pUVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar11);
    }
    if (*(int *)&(this->TriggerMap).field_0x8 != *(int *)&(this->TriggerMap).field_0x34) {
      puVar17 = *(undefined1 **)&(this->TriggerMap).field_0x40;
      puVar14 = &(this->TriggerMap).field_0x38;
      if (puVar17 != (undefined1 *)0x0) {
        puVar14 = puVar17;
      }
      iVar10 = *(int *)(puVar14 +
                       ((ulonglong)(*(int *)&(this->TriggerMap).field_0x48 - 1) & (ulonglong)EVar3)
                       * 4);
      if (iVar10 != -1) {
        do {
          if (*(EDS_TriggerType *)(*(longlong *)this_00 + (longlong)iVar10 * 0x18) == EVar3) {
            pTVar12 = TMapBase<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_EDS_TriggerType,TObjectPtr<UDS_TriggerComponent>,0>_>
                      ::FindChecked(this_00,EVar3);
            pUVar5 = (pTVar12->field0_0x0).DebugPtr;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar5 != (UDS_TriggerComponent *)0x0) {
                UE::GC::MarkAsReachable((UObject *)pUVar5);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar5 != (UDS_TriggerComponent *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar5);
              }
            }
            local_res20.ObjectIndex = 0;
            local_res20.ObjectSerialNumber = 0;
            local_88 = pUVar5;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UDS_TriggerComponent *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_88);
            local_c0 = local_res20;
            goto LAB_14bc5e9fc;
          }
          iVar10 = *(int *)(*(longlong *)this_00 + 0x10 + (longlong)iVar10 * 0x18);
        } while (iVar10 != -1);
      }
    }
    local_c0.ObjectIndex = 0;
    local_c0.ObjectSerialNumber = 0;
LAB_14bc5e9fc:
    bVar9 = FWeakObjectPtr::IsValid(&local_c0);
    if (bVar9) {
      pUVar11 = FWeakObjectPtr::Get(&local_c0);
      if (*(UPrimitiveComponent **)(pUVar11 + 1) != (UPrimitiveComponent *)0x0) {
        UPrimitiveComponent::SetGenerateOverlapEvents(*(UPrimitiveComponent **)(pUVar11 + 1),bVar8);
      }
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

